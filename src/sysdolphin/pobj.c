#include "pobj.h"

u32 HSD_PObjGetFlags(HSD_PObj* pobj)
{
    if (pobj != NULL) {
        return pobj->flags;
    }
    return 0;
}

void HSD_PObjRemoveAnimAllByFlags(HSD_PObj* pobj, u32 flags)
{
    if (pobj != NULL) {
        HSD_PObj* cur;
        for (cur = pobj; cur != NULL; cur = cur->next) {
            if (cur != NULL && flags & 8) {
                HSD_AObjRemove(cur->aobj);
                cur->aobj = NULL;
            }
        }
    }
}

void HSD_PObjRemoveAnimAll(HSD_PObj* pobj, HSD_ShapeAnim* anim)
{
    HSD_PObj* cur_pobj;
    HSD_ShapeAnim* cur_anim;

    if (pobj == NULL || anim == NULL) {
        return;
    }
    cur_pobj = pobj;
    cur_anim = anim;
    while (cur_pobj != NULL) {
        if (cur_pobj != NULL) {
            if (cur_pobj->aobj != NULL) {
                HSD_AObjRemove(cur_pobj->aobj);
            }
            cur_pobj->aobj = HSD_AObjLoadDesc(cur_anim->aobjdesc);
        }
        cur_pobj = cur_pobj->next;
        if (cur_anim != NULL) {
            cur_anim = cur_anim->next;
        } else {
            cur_anim = NULL;
        }
    }
}

void HSD_PObjReqAnimAllByFlags(HSD_PObj* pobj, f32 arg8, u32 flags)
{
    HSD_PObj* cur;
    if (pobj == NULL) {
        return;
    }
    for (cur = pobj; cur != NULL; cur = cur->next) {
        if (cur != NULL && flags & 8) {
            HSD_AObjReqAnim(cur->aobj, arg8);
        }
    }
}

extern HSD_PObjInfo lbl_80503488;
extern HSD_PObjInfo* lbl_805DE230;
extern u32 lbl_805DE244;
extern u32 lbl_805DE248;
extern u32 lbl_80589A08[4];

void* hsdNew(HSD_ClassInfo* info);
s32 hsdIsDescendantOf(void* info, void* parent);
void fn_803CAC04(void);

void PObjUpdateFunc(HSD_PObj* pobj, u32 type, f32* fval)
{
    HSD_ShapeSet* shape_set;

    if (pobj == NULL) {
        return;
    }
    if (pobj_type(pobj) != POBJ_SHAPEANIM) {
        return;
    }
    shape_set = pobj->u.shape_set;
    if (shape_set->flags & SHAPESET_ADDITIVE) {
        shape_set->blend.bp[type - 2] = *fval;
    } else {
        shape_set->blend.bl = *fval;
    }
}

void HSD_PObjAnimAll(HSD_PObj* pobj)
{
    if (pobj != NULL) {
        HSD_PObj* cur;
        for (cur = pobj; cur != NULL; cur = cur->next) {
            if (cur != NULL) {
                HSD_AObjInterpretAnim(cur->aobj, cur, HSD_POBJ_METHOD(cur)->update);
            }
        }
    }
}

void HSD_PObjRemoveAll(HSD_PObj* pobj)
{
    HSD_PObj* next;
    for (; pobj != NULL; pobj = next) {
        next = pobj->next;
        if (pobj != NULL) {
            HSD_CLASS_METHOD(pobj)->release((HSD_Class*) pobj);
            HSD_CLASS_METHOD(pobj)->destroy((HSD_Class*) pobj);
        }
    }
}

HSD_PObj* HSD_PObjLoadDesc(HSD_PObjDesc* desc)
{
    HSD_PObj* pobj;
    HSD_ClassInfo* info;

    if (desc != NULL) {
        if (desc->class_name == NULL || (info = hsdSearchClassInfo(desc->class_name)) == NULL) {
            pobj = HSD_PObjAlloc();
        } else {
            pobj = hsdNew(info);
            assert_line(0x24a, pobj);
        }
        HSD_POBJ_METHOD(pobj)->load(pobj, desc);
        return pobj;
    }
    return NULL;
}

void HSD_PObjSetDefaultClass(HSD_PObjInfo* info)
{
    if (info != NULL) {
        assert_line(0x28e, hsdIsDescendantOf(info, &lbl_80503488));
    }
    lbl_805DE230 = info;
}

HSD_PObjInfo* HSD_PObjGetDefaultClass(void)
{
    if (lbl_805DE230 != NULL) {
        return lbl_805DE230;
    }
    return &lbl_80503488;
}

HSD_PObj* HSD_PObjAlloc(void)
{
    HSD_PObj* pobj = hsdNew((HSD_ClassInfo*) (lbl_805DE230 ? lbl_805DE230 : &lbl_80503488));
    assert_line(0x2ac, pobj);
    return pobj;
}

void HSD_ClearVtxDesc(void)
{
    fn_803CAC04();
    lbl_805DE244 = 0;
    lbl_805DE248 = 0;
}

void HSD_PObjClearMtxMark(u32 a, u32 b)
{
    lbl_80589A08[0] = a;
    lbl_80589A08[1] = b;
    lbl_80589A08[2] = a;
    lbl_80589A08[3] = b;
}

void HSD_Free(void*);
void hsdFreeMemPiece(void*, s32);
void fn_8040B670(struct _HSD_JObj*);
struct _HSD_SList* HSD_SListRemove(struct _HSD_SList*);
s32 _HSD_MemCheckOwn(void*);
extern void* lbl_805DE234;
extern void* lbl_805DE238;
extern u32 lbl_805DE23C;
extern u32 lbl_805DE240;
extern HSD_ClassInfo hsdClass;
HSD_PObj* HSD_PObjAlloc(void);

typedef struct _PObjSList {
    struct _PObjSList* next;
    HSD_Envelope* data;
} PObjSList;

void PObjRelease(HSD_Class* o)
{
    HSD_PObj* pobj = (HSD_PObj*) o;
    HSD_Envelope* next;
    HSD_ShapeSet* shape_set;
    HSD_Envelope* env;
    PObjSList* list;

    if (pobj->aobj != NULL) {
        HSD_AObjRemove(pobj->aobj);
    }
    switch (pobj_type(pobj)) {
    case POBJ_SHAPEANIM:
        shape_set = pobj->u.shape_set;
        if (shape_set != NULL) {
            if (shape_set->flags & SHAPESET_ADDITIVE) {
                HSD_Free(shape_set->blend.bp);
            }
            if (shape_set != NULL) {
                hsdFreeMemPiece(shape_set, sizeof(HSD_ShapeSet));
            }
        }
        break;
    case POBJ_ENVELOPE:
        list = (PObjSList*) pobj->u.envelope_list;
        while (list != NULL) {
            env = list->data;
            while (env != NULL) {
                next = env->next;
                fn_8040B670(env->jobj);
                if (env != NULL) {
                    hsdFreeMemPiece(env, sizeof(HSD_Envelope));
                }
                env = next;
            }
            list = (PObjSList*) HSD_SListRemove((struct _HSD_SList*) list);
        }
        break;
    case POBJ_SKIN:
        fn_8040B670(pobj->u.jobj);
        break;
    }
    HSD_PARENT_INFO(&lbl_80503488)->release(o);
}

void PObjAmnesia(HSD_ClassInfo* info)
{
    if (info == HSD_CLASS_INFO(lbl_805DE230)) {
        lbl_805DE230 = NULL;
    }
    if (info == HSD_CLASS_INFO(&lbl_80503488)) {
        if (_HSD_MemCheckOwn(lbl_805DE234)) {
            lbl_805DE234 = NULL;
            lbl_805DE23C = 0;
        }
        if (_HSD_MemCheckOwn(lbl_805DE238)) {
            lbl_805DE238 = NULL;
            lbl_805DE240 = 0;
        }
        lbl_805DE244 = 0;
        lbl_805DE248 = 0;
    }
    HSD_PARENT_INFO(&lbl_80503488)->amnesia(info);
}
