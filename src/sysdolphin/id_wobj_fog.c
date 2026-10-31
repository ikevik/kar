#include "id.h"
#include <sysdolphin/wobj.h>
#include <sysdolphin/fog.h>
#include <sysdolphin/jobj.h>
#include <sysdolphin/robj.h>
#include <sysdolphin/cobj.h>

#include <dolphin/types.h>

static HSD_ObjAllocData hsd_iddata;
static HSD_IDTable default_table;

HSD_ObjAllocData* HSD_IDGetAllocData(void)
{
    return &hsd_iddata;
}

void HSD_IDInitAllocData(void)
{
    HSD_ObjAllocInit(&hsd_iddata, sizeof(IDEntry), 4);
}

void HSD_IDSetup(void)
{
    memset(&default_table, 0, sizeof(HSD_IDTable));
}

inline u32 hash(u32 id)
{
    return id % 0x65;
}

inline IDEntry* IDEntryAlloc()
{
    IDEntry* entry;

    entry = HSD_ObjAlloc(&hsd_iddata);
    if (entry == NULL) {
        __assert("id.c", 67, "entry");
    }
    memset(entry, 0, sizeof(IDEntry));

    return entry;
}

void HSD_IDInsertToTable(HSD_IDTable* table, u32 id, void* data)
{
    IDEntry* entry;

    if (table == NULL) {
        table = &default_table;
    }

    entry = table->table[hash(id)];
    while (entry != NULL) {
        if (entry->id == id)
            break;
        entry = entry->next;
    }

    if (entry != NULL) {
        entry->id = id;
        entry->data = data;
    } else {
        entry = IDEntryAlloc();
        entry->id = id;
        entry->data = data;
        entry->next = table->table[hash(id)];
        table->table[hash(id)] = entry;
    }
}

inline void IDEntryFree(IDEntry* entry) {
    HSD_ObjFree(&hsd_iddata, entry);
}

void HSD_IDRemoveByIDFromTable(HSD_IDTable* table, u32 id) {
    IDEntry* entry;
    IDEntry* prev;

    if (table == NULL) {
        table = &default_table;
    }

    prev = NULL;
    for (entry = table->table[hash(id)]; entry != NULL; entry = entry->next) {
        if (entry->id == id) {
            if (prev != NULL) {
                prev->next = entry->next;
            } else {
                table->table[hash(id)] = entry->next;
            }
            IDEntryFree(entry);
            return;
        }
        prev = entry;
    }
}

void* HSD_IDGetDataFromTable(HSD_IDTable* table, u32 id, s32* success)
{
    IDEntry* entry;

    if (table == NULL) {
        table = &default_table;
    }

    entry = table->table[hash(id)];
    while (entry != NULL) {
        if (entry->id == id) {
            if (success != NULL) {
                *success = 1;
            }
            return entry->data;
        }
        entry = entry->next;
    }

    if (success != NULL) {
        *success = 0;
    }
    return NULL;
}

void _HSD_IDForgetMemory(void)
{
    memset(&default_table, 0, sizeof(HSD_IDTable));
}

void WObjInfoInit(void);

HSD_WObjInfo lbl_805041C8 = { WObjInfoInit };

static HSD_WObjInfo* lbl_805DE2E0;

extern HSD_ClassInfo objInfo;

void HSD_WObjReqAnim(HSD_WObj* wobj, f32 frame)
{
    if (wobj != NULL) {
        HSD_AObjReqAnim(wobj->aobj, frame);
        HSD_RObjReqAnimAll(wobj->robj, frame);
    }
}

void HSD_WObjAddAnim(HSD_WObj* wobj, HSD_WObjAnim* anim)
{
    if (wobj != NULL && anim != NULL) {
        if (wobj->aobj != NULL) {
            HSD_AObjRemove(wobj->aobj);
        }
        wobj->aobj = HSD_AObjLoadDesc(anim->aobjdesc);
        HSD_RObjAddAnimAll(wobj->robj, anim->robjanim);
    }
}

void WObjUpdateFunc(void* obj, u32 type, f32* fval)
{
    HSD_WObj* wobj;
    Vec p;
    HSD_JObj* jp;

    wobj = obj;
    if (wobj != NULL) {
        switch (type) {
        case 4:
            if (*fval < 0.0) {
                *fval = 0.0;
            }
            if (1.0 < *fval) {
                *fval = 1.0;
            }

            ((wobj->aobj) ? (void)0 : __assert("wobj.c", 152, "wobj->aobj"));
            jp = (HSD_JObj*)wobj->aobj->hsd_obj;
            ((jp) ? (void)0 : __assert("wobj.c", 154, "jp"));
            ((jp->u.spline) ? (void)0 : __assert("wobj.c", 155, "jp->u.spline"));

            splArcLengthPoint(&p, jp->u.spline, *fval);
            HSD_WObjSetPosition(wobj, &p);
            wobj->flags |= 1;
            break;

        case 5:
            HSD_WObjSetPositionX(wobj, *fval);
            break;

        case 6:
            HSD_WObjSetPositionY(wobj, *fval);
            break;

        case 7:
            HSD_WObjSetPositionZ(wobj, *fval);
            break;
        }
    }
}

void HSD_RObjAnimAll();

void HSD_WObjInterpretAnim(HSD_WObj* wobj)
{
    if (wobj != NULL) {
        HSD_AObjInterpretAnim(wobj->aobj, wobj, HSD_WOBJ_METHOD(wobj)->update);
        HSD_RObjAnimAll(wobj->robj);
    }
}

int WObjLoad(HSD_WObj* wobj, HSD_WObjDesc* desc)
{
    HSD_WObjSetPosition(wobj, &desc->pos);
    if (wobj->robj != NULL) {
        HSD_RObjRemoveAll(wobj->robj);
    }
    wobj->robj = HSD_RObjLoadDesc(desc->robjdesc);
    HSD_RObjResolveRefsAll(wobj->robj, desc->robjdesc);
    return 0;
}

void HSD_WObjInit(HSD_WObj* wobj, HSD_WObjDesc* desc)
{
    if (wobj == NULL || desc == NULL) {
        return;
    }

    HSD_WObjSetPosition(wobj, &desc->pos);
    if (wobj->robj != NULL) {
        HSD_RObjRemoveAll(wobj->robj);
    }
    wobj->robj = HSD_RObjLoadDesc(desc->robjdesc);
    HSD_RObjResolveRefsAll(wobj->robj, desc->robjdesc);
}

void* hsdNew();

HSD_WObj* HSD_WObjLoadDesc(HSD_WObjDesc* desc)
{
    if (desc != NULL) {
        HSD_WObj* wobj;
        HSD_ClassInfo* info;
        if (desc->class_name == NULL || !(info = hsdSearchClassInfo(desc->class_name))) {
            wobj = HSD_WObjAlloc();
        } else {
            wobj = hsdNew(info);
            ((wobj) ? (void)0 : __assert("wobj.c", 260, "wobj"));
        }
        HSD_WOBJ_METHOD(wobj)->load(wobj, desc);
        return wobj;
    }
    return NULL;
}

void HSD_WObjSetPosition(HSD_WObj* wobj, Vec* pos)
{
    if (wobj == NULL || pos == NULL) {
        return;
    }

    wobj->pos = *pos;
    wobj->flags |= 0x2;
    wobj->flags &= 0xFFFFFFFE;
}

void HSD_WObjSetPositionX(HSD_WObj* wobj, f32 val)
{
    HSD_JObj* jp;

    if (wobj != NULL) {
        if ((wobj->flags & 1) != 0) {
            if (wobj->aobj != NULL && wobj->aobj->hsd_obj != NULL) {
                jp = (HSD_JObj*) wobj->aobj->hsd_obj;
                HSD_JObjSetupMatrix((HSD_JObj*) wobj->aobj->hsd_obj);
                PSMTXMultVec(jp->mtx, &wobj->pos, &wobj->pos);
            }
            wobj->flags &= 0xFFFFFFFE;
        }
        wobj->pos.x = val;
        wobj->flags |= 0x2;
    }
}

void HSD_WObjSetPositionY(HSD_WObj* wobj, f32 val)
{
    HSD_JObj* jp;

    if (wobj != NULL) {
        if ((wobj->flags & 1) != 0) {
            if (wobj->aobj != NULL && wobj->aobj->hsd_obj != NULL) {
                jp = (HSD_JObj*) wobj->aobj->hsd_obj;
                HSD_JObjSetupMatrix((HSD_JObj*) wobj->aobj->hsd_obj);
                PSMTXMultVec(jp->mtx, &wobj->pos, &wobj->pos);
            }
            wobj->flags &= 0xFFFFFFFE;
        }
        wobj->pos.y = val;
        wobj->flags |= 0x2;
    }
}

void HSD_WObjSetPositionZ(HSD_WObj* wobj, f32 val)
{
    HSD_JObj* jp;

    if (wobj != NULL) {
        if ((wobj->flags & 1) != 0) {
            if (wobj->aobj != NULL && wobj->aobj->hsd_obj != NULL) {
                jp = (HSD_JObj*) wobj->aobj->hsd_obj;
                HSD_JObjSetupMatrix((HSD_JObj*) wobj->aobj->hsd_obj);
                PSMTXMultVec(jp->mtx, &wobj->pos, &wobj->pos);
            }
            wobj->flags &= 0xFFFFFFFE;
        }
        wobj->pos.z = val;
        wobj->flags |= 0x2;
    }
}

void HSD_WObjGetPosition(HSD_WObj* wobj, Vec* vec)
{
    HSD_JObj* jp;

    if (wobj == NULL || vec == NULL) {
        return;
    }
    if ((wobj->flags & 1) != 0) {
        if (wobj->aobj != NULL && wobj->aobj->hsd_obj != NULL) {
            jp = (HSD_JObj*)wobj->aobj->hsd_obj;
            HSD_JObjSetupMatrix((HSD_JObj*)wobj->aobj->hsd_obj);
            PSMTXMultVec(jp->mtx, &wobj->pos, &wobj->pos);
        }
        wobj->flags &= 0xFFFFFFFE;
    }
    *vec = wobj->pos;
}

HSD_WObj* HSD_WObjAlloc(void)
{
    HSD_WObj* wobj = hsdNew((HSD_ClassInfo*) (lbl_805DE2E0 ? lbl_805DE2E0 : &lbl_805041C8));
    ((wobj) ? (void)0 : __assert("wobj.c", 599, "wobj"));
    return wobj;
}

void WObjRelease(HSD_Class* o)
{
    HSD_WObj* wobj = (HSD_WObj*) o;
    HSD_RObjRemoveAll(wobj->robj);
    HSD_AObjRemove(wobj->aobj);
    HSD_OBJECT_PARENT_INFO(&lbl_805041C8)->release(o);
}

void WObjAmnesia(HSD_ClassInfo* info)
{
    if (info == HSD_CLASS_INFO(lbl_805DE2E0)) {
        lbl_805DE2E0 = NULL;
    }
    HSD_OBJECT_PARENT_INFO(&lbl_805041C8)->amnesia(info);
}

#pragma push
#pragma force_active on
static char unused[] = "hsdIsDescendantOf(info, &hsdWObj)";
#pragma pop

void WObjInfoInit(void)
{
    hsdInitClassInfo(HSD_CLASS_INFO(&lbl_805041C8), &objInfo,
        "sysdolphin_base_library", "had_wobj",
        sizeof(HSD_WObjInfo), sizeof(HSD_WObj));
    HSD_CLASS_INFO(&lbl_805041C8)->release = WObjRelease;
    HSD_CLASS_INFO(&lbl_805041C8)->amnesia = WObjAmnesia;
    lbl_805041C8.load = &WObjLoad;
    lbl_805041C8.update = &WObjUpdateFunc;
}

extern HSD_Fog* lbl_805DE2E8;
extern GXColor lbl_805DCCCC;
extern GXColor lbl_805E6380;

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

#ifdef NONMATCHING /* 97.8% */
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

#ifdef NONMATCHING /* 97.8% */
void FogRelease(HSD_Class* o)
{
    HSD_Fog* fog = (HSD_Fog*) o;
    HSD_FogAdj* adj = fog->fog_adj;
    if (adj != NULL) {
        int zero = (adj->parent.ref_count == (u16) -1);
        if (!zero) {
            zero = (adj->parent.ref_count-- == 0);
        }
        if (zero) {
            if (adj != NULL) {
                HSD_CLASS_METHOD(adj)->release((HSD_Class*) adj);
                HSD_CLASS_METHOD(adj)->destroy((HSD_Class*) adj);
            }
        }
    }
    HSD_AObjRemove(fog->aobj);
    HSD_OBJECT_PARENT_INFO(&hsdFog)->release(o);
}
#endif

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
