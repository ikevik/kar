#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import sys
from pathlib import Path
from typing import Any, Dict, List

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
DEFAULT_VERSION = 0
VERSIONS = [
    "GKYE01",  # 0 (US; KOR is byte-identical)
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--ninja",
    metavar="BINARY",
    type=Path,
    help="path to ninja binary (optional)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--warn",
    dest="warn",
    type=str,
    choices=["all", "off", "error"],
    help="how to handle warnings",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.ninja_path = args.ninja
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-2"
config.compilers_tag = "20251118"
config.dtk_tag = "v1.8.3"
config.objdiff_tag = "v3.6.1"
config.sjiswrap_tag = "v1.2.2"
config.wibo_tag = "1.0.3"

# Project
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
    "-I include",
    f"-I build/{config.version}/include",
    f"--defsym BUILD_VERSION={version_num}",
]
config.ldflags = [
    "-fp hardware",
    "-nodefaults",
]
if args.debug:
    config.ldflags.append("-g")  # Or -gdwarf-2 for Wii linkers
if args.map:
    config.ldflags.append("-mapunused")
    # config.ldflags.append("-listclosure") # For Wii linkers

# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = []

# Optional numeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = None

# Base flags, common to most GC/Wii games.
# Generally leave untouched, with overrides added below.
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-fp hardware",
    "-Cpp_exceptions off",
    "-O4,p",
    "-inline all",
    "-cwd source",
    "-I-",
    "-i include/",
    "-i src/",
    f"-i build/{config.version}/include",
    f"-DBUILD_VERSION={version_num}",
    f"-DVERSION_{config.version}",
]

# Debug flags
if args.debug:
    # Or -sym dwarf-2 for Wii compilers
    cflags_base.extend(["-sym on", "-DDEBUG=1"])
else:
    cflags_base.append("-DNDEBUG=1")

# Warning flags
if args.warn == "all":
    cflags_base.append("-W all")
elif args.warn == "off":
    cflags_base.append("-W off")
elif args.warn == "error":
    cflags_base.append("-W error")

# Metrowerks library flags
cflags_runtime = [
    *cflags_base,
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-gccinc",
    "-common off",
    "-inline auto",
]

cflags_dolphin = [("-inline auto" if f == "-inline all" else f) for f in cflags_base]
cflags_dolphin_pool = cflags_dolphin + ["-str", "reuse,pool"]

# REL flags
cflags_rel = [
    *cflags_base,
    "-sdata 0",
    "-sdata2 0",
]

config.linker_version = "GC/1.3.2"


cflags_sdk = [x for x in cflags_base if x != "-inline all"] + ["-inline auto"]
cflags_sdk_nopeep = cflags_sdk + ["-opt nopeephole"]


# Helper for a group of objects built with the project-wide settings
def Lib(lib_name: str, category: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3.2",
        "cflags": cflags_base,
        "progress_category": category,
        "objects": objects,
    }


Matching = True                   # Object matches and should be linked
NonMatching = False               # Object does not match and should not be linked
Equivalent = config.non_matching  # Object should be linked when configured with --non-matching


# Object is only matching for specific versions
def MatchingFor(*versions):
    return config.version in versions


config.warn_missing_config = True
config.warn_missing_source = False
config.libs = [
    Lib(
        "game",
        "game",
        [
            Object(NonMatching, "gmmain.c"),
            Object(NonMatching, "gmglobal.c"),
            Object(NonMatching, "gmautodemo.c"),
            Object(NonMatching, "text_80010BBC.c"),
            Object(NonMatching, "text_80060ED0.c"),
            Object(NonMatching, "db_800AD79C.c"),
            Object(NonMatching, "smsoundtest.c"),
            Object(NonMatching, "text_800AF474.c"),
            Object(NonMatching, "grcity1.c"),
            Object(NonMatching, "text_8010F854.c"),
            Object(NonMatching, "text_801166B4.c"),
            Object(NonMatching, "text_801D443C.c"),
            Object(NonMatching, "a2d/a2d_game_lib.c"),
            Object(NonMatching, "text_8028B974.c"),
            Object(NonMatching, "a2d/a2d_gamehistory.c"),
            Object(NonMatching, "a2d/a2d_gamesession.c"),
            Object(NonMatching, "a2d/a2d_cpu_kirby.c"),
            Object(NonMatching, "a2d/a2d_kirbyjointanim.c"),
            Object(NonMatching, "a2d/a2d_lavabomb.c"),
            Object(NonMatching, "a2d/a2d_grindrail.c"),
            Object(NonMatching, "a2d/a2d_bg3000.c"),
            Object(NonMatching, "a2d/a2d_bg4000.c"),
            Object(NonMatching, "a2d/a2d_bg5000.c"),
            Object(NonMatching, "a2d/a2d_bg8000.c"),
            Object(NonMatching, "text_8034D384.c"),
            Object(NonMatching, "a2d/a2d_kurakko.c"),
            Object(NonMatching, "a2d/a2d_game_audio.c"),
            Object(NonMatching, "a2d/a2d_soundhandle.c"),
            Object(NonMatching, "a2d/a2d_game_effect.c"),
            Object(NonMatching, "a2d/a2d_effecthandle.c"),
            Object(NonMatching, "a2d/a2d_wipeeffect.c"),
            Object(NonMatching, "a2d/a2d_effect_slideblur.c"),
            Object(NonMatching, "a2d/a2d_kirbydisp.c"),
            Object(NonMatching, "a2d/a2d_refract.c"),
            Object(NonMatching, "a2d/fl_indirectload.c"),
        ],
    ),
    Lib(
        "Runtime.PPCEABI.H",
        "sdk",
        [
            Object(NonMatching, "Runtime.PPCEABI.H/__va_arg.c", cflags=cflags_runtime),
            Object(NonMatching, "Runtime.PPCEABI.H/global_destructor_chain.c", cflags=cflags_runtime),
            Object(NonMatching, "Runtime.PPCEABI.H/NMWException.cpp", cflags=cflags_runtime),
            Object(NonMatching, "Runtime.PPCEABI.H/MWRTTI.cpp", cflags=cflags_runtime),
            Object(Matching, "Runtime.PPCEABI.H/runtime.c", cflags=cflags_runtime),
            Object(NonMatching, "__init_cpp_exceptions.cpp"),
            Object(NonMatching, "Runtime.PPCEABI.H/Gecko_ExceptionPPC.c", cflags=cflags_runtime),
            Object(NonMatching, "Runtime.PPCEABI.H/GCN_mem_alloc.c", cflags=cflags_runtime),
        ],
    ),
    Lib(
        "Dolphin SDK",
        "sdk",
        [
            Object(Matching, "abort_exit.c", cflags=cflags_runtime),
        ],
    ),
    Lib(
        "game",
        "game",
        [
            Object(NonMatching, "text_803AFAC8.c"),
        ],
    ),
    Lib(
        "Dolphin SDK",
        "sdk",
        [
            Object(NonMatching, "cstring.c", cflags=cflags_runtime),
            Object(NonMatching, "dolphin/dolphin_sdk_other.c", mw_version="GC/1.3.2", cflags=cflags_runtime),
        ],
    ),
    Lib(
        "MetroTRK",
        "sdk",
        [
            Object(NonMatching, "MetroTRK/TRK_MINNOW_DOLPHIN.c", cflags=cflags_runtime),
        ],
    ),
    Lib(
        "Dolphin SDK",
        "sdk",
        [
            Object(Matching, "PPCArch.c"),
            Object(Matching, "dolphin/dolphin_sdk_db.c", mw_version="GC/1.2.5n", cflags=cflags_sdk),
            Object(NonMatching, "dolphin/dolphin_sdk_dsp.c", cflags=cflags_dolphin_pool, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_dvd.c", mw_version="GC/1.2.5n", cflags=cflags_sdk),
            Object(NonMatching, "dolphin/dolphin_sdk_gx.c", mw_version="GC/1.2.5n", cflags=cflags_sdk),
            Object(NonMatching, "dolphin/dolphin_sdk_mtx.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(Matching, "dolphin/dolphin_sdk_mtxvec.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(Matching, "dolphin/dolphin_sdk_mtx44.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_vec.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_os.c", mw_version="GC/1.2.5n", cflags=cflags_sdk),
            Object(NonMatching, "init/__ppc_eabi_init.c"),
            Object(NonMatching, "dolphin/dolphin_sdk_pad.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_vi.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_ai.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_ar.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_arq.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_card.c", mw_version="GC/1.2.5n", cflags=cflags_sdk),
            Object(NonMatching, "dolphin/dolphin_sdk_si.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_exi.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
            Object(NonMatching, "dolphin/dolphin_sdk_ax.c", mw_version="GC/1.2.5n", cflags=cflags_sdk),
            Object(NonMatching, "dolphin/dolphin_sdk_mix.c", mw_version="GC/1.2.5n", cflags=cflags_sdk),
            Object(NonMatching, "dolphin/dolphin_sdk_synth.c", cflags=cflags_dolphin, mw_version="GC/1.2.5n"),
        ],
    ),
    Lib(
        "sysdolphin",
        "game",
        [
            Object(Matching, "sysdolphin/dobj.c"),
            Object(NonMatching, "sysdolphin/tobj.c"),
            Object(NonMatching, "sysdolphin/tev.c"),
            Object(NonMatching, "sysdolphin/mobj_aobj.c"),
            Object(NonMatching, "sysdolphin/lobj.c"),
            Object(NonMatching, "sysdolphin/cobj.c"),
            Object(NonMatching, "sysdolphin/fobj.c"),
            Object(NonMatching, "sysdolphin/pobj.c"),
            Object(NonMatching, "sysdolphin/jobj.c"),
            Object(NonMatching, "sysdolphin/displayfunc.c"),
            Object(NonMatching, "sysdolphin/initialize.c"),
            Object(NonMatching, "sysdolphin/video.c"),
            Object(NonMatching, "sysdolphin/controller.c"),
            Object(NonMatching, "sysdolphin/rumble.c"),
            Object(NonMatching, "sysdolphin/spline.c"),
            Object(NonMatching, "sysdolphin/mtx.c"),
            Object(NonMatching, "sysdolphin/util.c"),
            Object(NonMatching, "sysdolphin/objalloc.c"),
            Object(NonMatching, "sysdolphin/robj.c"),
            Object(NonMatching, "sysdolphin/id_wobj_fog.c"),
            Object(NonMatching, "sysdolphin/pref.c"),
            Object(NonMatching, "sysdolphin/list_object.c"),
            Object(NonMatching, "sysdolphin/memory.c"),
            Object(NonMatching, "sysdolphin/shadow.c"),
            Object(Matching, "sysdolphin/archive.c"),
            Object(NonMatching, "sysdolphin/random.c"),
            Object(NonMatching, "sysdolphin/bytecode.c"),
            Object(NonMatching, "sysdolphin/class.c"),
            Object(NonMatching, "sysdolphin/hash.c"),
            Object(NonMatching, "sysdolphin/texp.c"),
            Object(NonMatching, "sysdolphin/texpdag.c"),
            Object(NonMatching, "sysdolphin/debug.c"),
            Object(NonMatching, "sysdolphin/gobjproc.c"),
            Object(NonMatching, "sysdolphin/gobjplink.c"),
            Object(NonMatching, "sysdolphin/gobjgxlink.c"),
            Object(NonMatching, "sysdolphin/gobjobject_gobjuserdata.c"),
            Object(NonMatching, "sysdolphin/gobj.c"),
            Object(NonMatching, "sysdolphin/particle.c"),
        ],
    ),
    Lib(
        "game",
        "game",
        [
            Object(NonMatching, "text_8042AD44.c"),
        ],
    ),
    Lib(
        "sysdolphin",
        "game",
        [
            Object(NonMatching, "sysdolphin/axdriver.c"),
        ],
    ),
    Lib(
        "game",
        "game",
        [
            Object(NonMatching, "text_804452A0.c"),
            Object(NonMatching, "IPSocket.c", mw_version="GC/1.2.5"),
            Object(NonMatching, "text_8047DB6C.c"),
            Object(NonMatching, "IPIgmp.c", mw_version="GC/1.2.5"),
            Object(NonMatching, "text_80482598.c"),
        ],
    ),
    Lib(
        "Runtime.PPCEABI.H",
        "sdk",
        [
            Object(NonMatching, "Runtime.PPCEABI.H/__mem.c", cflags=cflags_runtime),
        ],
    ),
    Lib(
        "MetroTRK",
        "sdk",
        [
            Object(Matching, "TRK_MINNOW_DOLPHIN/mem_TRK.c", cflags=cflags_runtime),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/__exception.c"),
        ],
    ),
    Lib(
        "Dolphin SDK",
        "sdk",
        [
            Object(NonMatching, "os/__start.c", mw_version="GC/1.0"),
            Object(NonMatching, "os/__ppc_eabi_init.c"),
        ],
    ),
]


# Optional callback to adjust link order. This can be used to add, remove, or reorder objects.
# This is called once per module, with the module ID and the current link order.
#
# For example, this adds "dummy.c" to the end of the DOL link order if configured with --non-matching.
# "dummy.c" *must* be configured as a Matching (or Equivalent) object in order to be linked.
def link_order_callback(module_id: int, objects: List[str]) -> List[str]:
    # Don't modify the link order for matching builds
    if not config.non_matching:
        return objects
    if module_id == 0:  # DOL
        return objects + ["dummy.c"]
    return objects


# Uncomment to enable the link order callback.
# config.link_order_callback = link_order_callback


# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Game Code"),
    ProgressCategory("sdk", "SDK Code"),
]
config.progress_each_module = args.verbose
# Optional extra arguments to `objdiff-cli report generate`
config.progress_report_args = [
    # Marks relocations as mismatching if the target value is different
    # Default is "functionRelocDiffs=none", which is most lenient
    # "--config functionRelocDiffs=data_value",
]

if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress information
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
