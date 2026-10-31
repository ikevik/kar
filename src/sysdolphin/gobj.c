#include <dolphin/types.h>
#include <sysdolphin/gobj.h>

extern HSD_GObjLibInitDataType HSD_GObjLibInitData;
extern HSD_GObj** lbl_805DE32C;
extern HSD_GObj* lbl_805DE31C;
extern HSD_GObjProc* lbl_805DE338;
extern s32 lbl_805DE33C;
extern HSD_GObjProc* lbl_805DE340;
extern s32 lbl_805DE344;
extern HSD_GObjProc** lbl_805DE348;
extern void* lbl_805DE324;
extern void func_80428F64(HSD_GObj* gobj);
extern void fn_8042904C(s32 where, HSD_GObj* gobj, u8 p_link, u8 priority, HSD_GObj* position);
extern void fn_8042898C(HSD_GObjProc* proc);

void fn_80429E34(HSD_GObj* gobj)
{
    HSD_GObjProc* p;
    for (p = gobj->proc; p != NULL; p = p->child) {
        p->flags_1 = 1;
    }
}

void fn_80429E5C(HSD_GObj* gobj)
{
    HSD_GObjProc* p;
    for (p = gobj->proc; p != NULL; p = p->child) {
        p->flags_1 = 0;
    }
}

void fn_80429E84(HSD_GObj* gobj)
{
    HSD_GObjProc* p;
    for (p = gobj->proc; p != NULL; p = p->child) {
        p->flags_2 = 1;
    }
}

void fn_80429EAC(HSD_GObj* gobj)
{
    HSD_GObjProc* p;
    for (p = gobj->proc; p != NULL; p = p->child) {
        p->flags_2 = 0;
    }
}

void HSD_GObj_DispatchProc(void)
{
    u64 mask;
    s32 link;
    HSD_GObjProc* proc;
    HSD_GObjProc* next;
    HSD_GObj* gobj;

    mask = HSD_GObjLibInitData.unk_2 != NULL ? *(u64*) HSD_GObjLibInitData.unk_2 : 0;
    lbl_805DE344 = lbl_805DE344 + 1;
    if (lbl_805DE344 > 2) {
        lbl_805DE344 = 0;
    }
    for (link = 0; link <= HSD_GObjLibInitData.gproc_pri_max; link++) {
        lbl_805DE33C = link;
        for (proc = lbl_805DE348[link]; proc != NULL; proc = lbl_805DE338) {
            lbl_805DE338 = proc->next;
            if (proc->flags_3 != lbl_805DE344) {
                proc->flags_3 = lbl_805DE344;
                gobj = proc->gobj;
                if ((mask & ((u64) 1 << gobj->p_link)) == 0 && !proc->flags_1 && !proc->flags_2) {
                    lbl_805DE324 = gobj;
                    lbl_805DE340 = proc;
                    proc->callback(proc->gobj);
                    lbl_805DE338 = proc->next;
                    if (lbl_8058C1F4.flags != 0) {
                        lbl_8058C1F4.b0 = 1;
                        if (lbl_8058C1F4.b1) {
                            func_80428F64(proc->gobj);
                        } else {
                            if (lbl_8058C1F4.b3) {
                                fn_8042904C(lbl_8058C1F4.type, proc->gobj, lbl_8058C1F4.p_link, lbl_8058C1F4.p_prio, lbl_8058C1F4.gobj);
                            }
                            if (lbl_8058C1F4.b2) {
                                fn_8042898C(proc);
                            }
                        }
                        lbl_8058C1F4.flags = 0;
                    }
                    lbl_805DE324 = NULL;
                    lbl_805DE340 = NULL;
                }
            }
        }
    }
}

u32 lbl_80504F10[4] = { 1, 4, 2, 0 };

extern void fn_8042A2E4();
extern void fn_803FFA40();
extern void fn_8040B920();
extern void fn_8042A37C();
void (*lbl_80504F20[4])() = { fn_8042A2E4, fn_803FFA40, fn_8040B920, fn_8042A37C };

u32 fn_8042A0A0(s32 i)
{
    return lbl_80504F10[i];
}

void HSD_GObj_DispatchGXLink(HSD_GObj* gobj, u32 flags)
{
    s32 i;
    HSD_GObj* saved;
    u64 prios;
    s32 j;
    HSD_GObj* p;

    for (i = 0; flags != 0; i++, flags >>= 1) {
        if (flags & 1) {
            prios = gobj->gxlink_prios;
            for (j = 0; prios != 0; j++, prios >>= 1) {
                if ((prios & 1) != 0) {
                    for (p = lbl_805DE32C[j]; p != NULL; p = p->next_gx) {
                        if (p->render_cb != NULL) {
                            saved = lbl_805DE31C;
                            lbl_805DE31C = p;
                            p->render_cb(p, i);
                            lbl_805DE31C = saved;
                        }
                    }
                }
            }
        }
    }
}
