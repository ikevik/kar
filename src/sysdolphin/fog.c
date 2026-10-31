#pragma fp_contract on
#include "id.h"
#include <sysdolphin/wobj.h>
#include <sysdolphin/fog.h>
#include <sysdolphin/jobj.h>
#include <sysdolphin/robj.h>
#include <sysdolphin/cobj.h>

#include <dolphin/types.h>

extern HSD_ClassInfo objInfo;
HSD_Fog* lbl_805DE2E8;
GXColor lbl_805DCCCC = { 0, 0, 0, 0 };

void GXSetFog(u32 type, f32 start, f32 end, f32 nearz, f32 farz, GXColor color);
void GXInitFogAdjTable(void* table, u16 width, Mtx44 proj);
void GXSetFogRangeAdj(u8 enable, u16 center, void* table);
void GXGetProjectionv(f32* p);
void GXGetViewportv(f32* p);
HSD_CObj* HSD_CObjGetCurrent(void);
f32 HSD_CObjGetNear(HSD_CObj*);
f32 HSD_CObjGetFar(HSD_CObj*);
u32 FogAdjGetFlags(HSD_FogAdj*);
void HSD_Panic(char* file, int line, char* msg);
void* hsdNew(HSD_ClassInfo* info);

void FogInfoInit(void);
void FogAdjInfoInit(void);
void FogUpdateFunc(void* obj, u32 type, f32* fval);
void FogRelease(HSD_Class* o);

HSD_FogInfo hsdFog = { FogInfoInit };
HSD_FogAdjInfo hsdFogAdj = { FogAdjInfoInit };

void HSD_FogSetCurrent(HSD_Fog* fog)
{
    lbl_805DE2E8 = fog;
    HSD_FogSet(fog);
}

HSD_Fog* HSD_FogGetCurrent(void)
{
    return lbl_805DE2E8;
}

#ifdef NONMATCHING /* 98%: fmadds operand load order, beq/b layout */
void HSD_FogSet(HSD_Fog* fog)
{
    HSD_FogAdj* fog_adj;
    HSD_CObj* cobj;
    u32 flags;
    Mtx44 mtx;
    u16 table[10];
    f32 vp[6];
    f32 ps[7];
    Mtx44Ptr mp;
    s32 center;
    s32 width;

    if (fog == NULL) {
        GXColor black = { 0, 0, 0, 0 };
        GXSetFog(0, 0.0F, 0.0F, 0.0F, 0.0F, black);
        return;
    }
    cobj = HSD_CObjGetCurrent();
    if (cobj == NULL) {
        HSD_Panic("fog.c", 139, "You must specify CObj first.\n");
    }
    GXSetFog(fog->type, fog->start, fog->end * fog->end_scale, HSD_CObjGetNear(cobj), HSD_CObjGetFar(cobj), fog->color);
    fog_adj = (fog != NULL) ? fog->fog_adj : NULL;
    flags = FogAdjGetFlags(fog_adj);
    if (fog_adj != NULL && (flags & 7)) {
        GXGetViewportv(vp);
        if (flags & 1) {
            center = (s32) (vp[0] + (vp[2] * (f32) ((fog_adj != NULL ? fog_adj->center : -1) + 320)) / 640.0F);
        } else {
            center = (s32) (vp[0] + vp[2] * 0.5F);
        }
        if (flags & 2) {
            width = (fog_adj != NULL) ? fog_adj->width : -1;
        } else {
            width = (s32) vp[2];
        }
        if (flags & 4) {
            mp = (fog_adj != NULL) ? fog_adj->mtx : NULL;
        } else {
            mp = mtx;
            memset(mp, 0, sizeof(Mtx44));
            GXGetProjectionv(ps);
            if ((s32) ps[0] == 0) {
                mtx[0][0] = ps[1];
                mtx[0][2] = ps[2];
                mtx[1][1] = ps[3];
                mtx[1][2] = ps[4];
                mtx[2][2] = ps[5];
                mtx[2][3] = ps[6];
                mtx[3][2] = -1.0F;
            } else {
                mtx[0][0] = ps[1];
                mtx[0][3] = ps[2];
                mtx[1][1] = ps[3];
                mtx[1][3] = ps[4];
                mtx[2][2] = ps[5];
                mtx[2][3] = ps[6];
                mtx[3][3] = 1.0F;
            }
        }
        GXInitFogAdjTable(table, width, mp);
        GXSetFogRangeAdj(1, center, table);
    } else {
        GXSetFogRangeAdj(0, 0, NULL);
    }
}
#endif

HSD_Fog* HSD_FogLoadDesc(HSD_FogDesc* desc)
{
    HSD_Fog* fog = hsdNew((HSD_ClassInfo*) &hsdFog);
    if (fog == NULL) {
        __assert("fog.c", 212, "fog");
    }
    if (fog == NULL) {
        __assert("fog.c", 225, "fog");
    }
    HSD_FogInit(fog, desc);
    if (desc->fogadjdesc != NULL) {
        fog->fog_adj = HSD_FogAdjLoadDesc(desc->fogadjdesc);
    }
    return fog;
}

void HSD_FogInit(HSD_Fog* fog, HSD_FogDesc* desc)
{
    if (fog != NULL) {
        if (desc != NULL) {
            fog->type = desc->type;
            fog->start = desc->start;
            fog->end = desc->end;
            fog->color = desc->color;
        } else {
            f32 vp[6];
            GXGetViewportv(vp);
            fog->type = 2;
            fog->start = vp[4];
            fog->end = vp[5];
            fog->color.r = 0xFF;
            fog->color.g = 0xFF;
            fog->color.b = 0xFF;
            fog->color.a = 0xFF;
        }
        fog->end_scale = 1.0F;
    }
}

GXColor HSD_FogGetColor(HSD_Fog* fog)
{
    GXColor color;
    if (fog != NULL) {
        color = fog->color;
    } else {
        color = lbl_805DCCCC;
    }
    return color;
}

HSD_FogAdj* HSD_FogAdjLoadDesc(HSD_FogAdjDesc* desc)
{
    HSD_FogAdj* adj = hsdNew((HSD_ClassInfo*) &hsdFogAdj);
    if (adj == NULL) {
        __assert("fog.c", 301, "fogadj");
    }
    if (adj == NULL) {
        __assert("fog.c", 317, "fogadj");
    }
    HSD_FogAdjInit(adj, desc);
    return adj;
}

void HSD_FogAdjInit(HSD_FogAdj* adj, HSD_FogAdjDesc* desc)
{
    if (adj != NULL) {
        if (desc != NULL) {
            adj->flags = desc->flags;
            adj->width = desc->width;
            adj->center = desc->center;
            memcpy(adj->mtx, desc->mtx, sizeof(Mtx44));
        } else {
            adj->flags = 0;
            adj->width = 0;
            adj->center = 0;
            memset(adj->mtx, 0, sizeof(Mtx44));
        }
    }
}

u32 FogAdjGetFlags(HSD_FogAdj* adj)
{
    if (adj != NULL) {
        return adj->flags;
    }
    return 0;
}

static inline f32 clamp01(f32 x)
{
    if (x <= 0.0F) {
        return 0.0F;
    }
    if (x >= 1.0F) {
        return 1.0F;
    }
    return x;
}

#define CLAMP_COLOR(v, dst) (dst) = (u8) (255.0F * clamp01(*fval))

void FogUpdateFunc(void* obj, u32 type, f32* fval)
{
    HSD_Fog* fog = obj;
    HSD_FogAdj* adj;
    if (fog == NULL) {
        return;
    }
    switch (type) {
    case 1:
        fog->start = *fval;
        break;
    case 2:
        fog->end = *fval;
        break;
    case 5:
        CLAMP_COLOR(fval, fog->color.r);
        break;
    case 6:
        CLAMP_COLOR(fval, fog->color.g);
        break;
    case 7:
        CLAMP_COLOR(fval, fog->color.b);
        break;
    case 8:
        CLAMP_COLOR(fval, fog->color.a);
        break;
    case 20: {
        s32 v = (s32) *fval;
        adj = (fog != NULL) ? fog->fog_adj : NULL;
        if (adj != NULL) {
            if (v <= -320) {
                adj->center = -320;
            } else if (v >= 320) {
                adj->center = 320;
            } else {
                adj->center = v;
            }
        }
        break;
    }
    case 21: {
        s32 v = (s32) *fval;
        adj = (fog != NULL) ? fog->fog_adj : NULL;
        if (adj != NULL) {
            if (v <= 0) {
                adj->width = 0;
            } else if (v >= 640) {
                adj->width = 640;
            } else {
                adj->width = v;
            }
        }
        break;
    }
    }
}

static inline BOOL decref(HSD_Obj* obj)
{
    u16 ref_count = obj->ref_count;
    BOOL noref = ref_count == 0xffff;
    if (noref) {
        return noref;
    }
    obj->ref_count--;
    return ref_count == 0;
}

void FogRelease(HSD_Class* o)
{
    HSD_Fog* fog = (HSD_Fog*) o;
    HSD_FogAdj* adj = fog->fog_adj;
    if (adj != NULL) {
        if (decref(&adj->parent) && adj != NULL) {
            HSD_CLASS_METHOD(adj)->release((HSD_Class*) adj);
            HSD_CLASS_METHOD(adj)->destroy((HSD_Class*) adj);
        }
    }
    HSD_AObjRemove(fog->aobj);
    HSD_OBJECT_PARENT_INFO(&hsdFog)->release(o);
}

void FogInfoInit(void)
{
    hsdInitClassInfo(HSD_CLASS_INFO(&hsdFog), &objInfo,
        "sysdolphin_base_library", "hsd_fog",
        sizeof(HSD_FogInfo), sizeof(HSD_Fog));
    HSD_CLASS_INFO(&hsdFog)->release = FogRelease;
    hsdFog.update = FogUpdateFunc;
}

void FogAdjInfoInit(void)
{
    hsdInitClassInfo(HSD_CLASS_INFO(&hsdFogAdj), &objInfo,
        "sysdolphin_base_library", "hsd_fogadj",
        sizeof(HSD_FogAdjInfo), sizeof(HSD_FogAdj));
}
