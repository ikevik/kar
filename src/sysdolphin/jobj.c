#include "jobj.h"
#include "dobj.h"
#include "robj.h"
#include "cobj.h"

extern HSD_JObj* lbl_805DE250;
extern u32 lbl_805DE258;
extern u32 lbl_805DE260;
extern u32 lbl_805DE264;
extern u32 lbl_805DE268;

HSD_JObj* fn_8040ACFC(HSD_JObj* jobj)
{
    return (HSD_JObj*) ((u8*) jobj + 0x54);
}

void fn_8040ADCC(u32 v)
{
    lbl_805DE268 = v;
}

u32 fn_8040C960(void)
{
    return lbl_805DE264;
}

void fn_8040DC60(u32 v)
{
    lbl_805DE258 = v;
}

void fn_8040DC68(u32 v)
{
    lbl_805DE260 = v;
}

u32 fn_8040BD4C(HSD_JObj* jobj)
{
    if (jobj != NULL) {
        return jobj->flags;
    }
    return 0;
}

extern void HSD_AObjRemove(HSD_AObj*);
extern void HSD_AObjReqAnim(HSD_AObj*, f32);
extern void HSD_DObjRemoveAnimAllByFlags(HSD_DObj*, u32);
extern void HSD_DObjReqAnimAllByFlags(HSD_DObj*, u32, f32);
extern void HSD_RObjRemoveAnimAllByFlags(HSD_RObj*, u32);
extern void HSD_RObjReqAnimAllByFlags(HSD_RObj*, u32, f32);
extern void HSD_AObjInitEndCallBack(void);
extern void HSD_AObjInvokeCallBacks(void);
extern void* hsdNew(void*);
extern int hsdIsDescendantOf(void*, void*);
extern void HSD_Panic(const char*, int, const char*);
extern HSD_CObj* HSD_CObjGetCurrent(void);
extern void fn_803D1578(Mtx, Mtx);
extern void fn_80417C20(void*);
extern void fn_80417CA0(void*);
extern void fn_804084B0(HSD_JObj*, void*, void*);
extern void fn_80408BD0(HSD_JObj*, u32);
extern void fn_80408F88(HSD_JObj*, u32, f32);
extern void fn_8040A304(HSD_JObj*);

BOOL fn_8040800C(HSD_JObj* jobj)
{
    return HSD_JObjMtxIsDirty(jobj);
}

void fn_80408064(HSD_JObj* jobj, HSD_Joint* joint)
{
    if (jobj == NULL || joint == NULL) {
        return;
    }
    jobj->rotate.x = joint->rotation.x;
    jobj->rotate.y = joint->rotation.y;
    jobj->rotate.z = joint->rotation.z;
    jobj->scale = joint->scale;
    jobj->translate = joint->position;
    if (!(jobj->flags & MTX_INDEP_SRT)) {
        HSD_JObjSetMtxDirty(jobj);
    }
}

void fn_80408440(HSD_JObj* jobj)
{
    HSD_JObjSetMtxDirty(jobj);
}

void fn_804087F4(HSD_JObj* jobj, void (*func)(HSD_JObj*, void*, int), void* arg)
{
    if (jobj != NULL) {
        if (func != NULL) {
            func(jobj, arg, 0);
        }
        if (!(jobj->flags & INSTANCE)) {
            HSD_JObj* child;
            for (child = jobj->child; child != NULL; child = child->next) {
                fn_804084B0(child, func, arg);
            }
        }
    }
}

void fn_80408B54(HSD_JObj* jobj, u32 flags)
{
    if (jobj != NULL) {
        if (flags & 1) {
            HSD_AObjRemove(jobj->aobj);
            jobj->aobj = NULL;
        }
        if (union_type_dobj(jobj)) {
            HSD_DObjRemoveAnimAllByFlags(jobj->u.dobj, flags);
        }
        HSD_RObjRemoveAnimAllByFlags(jobj->robj, flags);
    }
}

void fn_80408E74(HSD_JObj* jobj)
{
    if (jobj != NULL) {
        HSD_AObjRemove(jobj->aobj);
        jobj->aobj = NULL;
        if (union_type_dobj(jobj)) {
            HSD_DObjRemoveAnimAllByFlags(jobj->u.dobj, 0x7ff);
        }
        HSD_RObjRemoveAnimAllByFlags(jobj->robj, 0x7ff);
    }
}

void fn_80408EDC(HSD_JObj* jobj)
{
    fn_80408BD0(jobj, 0x7ff);
}

void fn_80408F00(HSD_JObj* jobj, u32 flags, f32 frame)
{
    if (jobj != NULL) {
        if (flags & 1) {
            HSD_AObjReqAnim(jobj->aobj, frame);
        }
        if (union_type_dobj(jobj)) {
            HSD_DObjReqAnimAllByFlags(jobj->u.dobj, flags, frame);
        }
        HSD_RObjReqAnimAllByFlags(jobj->robj, flags, frame);
    }
}

void fn_80409250(HSD_JObj* jobj, f32 frame)
{
    fn_80408F88(jobj, 0x7ff, frame);
}

void fn_804092E8(HSD_AObj* aobj)
{
    HSD_FObj* fobj;
    HSD_FObj** prev;

    if (aobj == NULL) {
        return;
    }
    if (aobj->fobj != NULL) {
        prev = &aobj->fobj;
        while ((fobj = *prev) != NULL) {
            if (fobj->obj_type == TYPE_JOBJ) {
                *prev = fobj->next;
                fobj->next = aobj->fobj;
                aobj->fobj = fobj;
                return;
            }
            prev = &fobj->next;
        }
    }
}

void fn_8040A64C(HSD_JObj* jobj)
{
    if (jobj != NULL) {
        HSD_AObjInitEndCallBack();
        fn_8040A304(jobj);
        HSD_AObjInvokeCallBacks();
    }
}

void fn_8040AD04(HSD_JObj* jobj)
{
    HSD_JObjSetupMatrix(jobj);
}

void fn_8040AD74(HSD_JObj* jobj)
{
    if (jobj != NULL) {
        if (!hsdIsDescendantOf(jobj, &hsdJObj)) {
            __assert(__FILE__, 0x3b2, "hsdIsDescendantOf(info, &hsdJObj)");
        }
    }
    lbl_805DE250 = jobj;
}

void fn_8040B45C(HSD_JObj* jobj)
{
    if (jobj != NULL) {
        HSD_OBJ_REF_INC(&jobj->object);
    }
}

void fn_8040B4B0(u32 id, s32* success)
{
    HSD_IDGetDataFromTable(NULL, id, success);
}

void fn_8040B4DC(HSD_JObj* jobj)
{
    HSD_OBJ_REF_INC(&jobj->object);
}

HSD_JObj* fn_8040BCA0(HSD_JObj* jobj)
{
    return (jobj != NULL && union_type_dobj(jobj)) ? (HSD_JObj*) jobj->u.dobj : NULL;
}

void fn_8040BCCC(HSD_JObj* jobj, HSD_RObj* robj)
{
    if (jobj != NULL) {
        if (robj != NULL) {
            HSD_RObj* r = jobj->robj;
            if (robj != NULL) {
                robj->next = r;
                r = robj;
            }
            jobj->robj = r;
        }
    }
}

void fn_8040BD64(HSD_JObj* jobj, u32 flags)
{
    if (jobj != NULL) {
        if ((jobj->flags ^ flags) & CLASSICAL_SCALE) {
            HSD_JObjSetMtxDirty(jobj);
        }
        jobj->flags |= flags;
    }
}

void fn_8040C0D8(HSD_JObj* jobj, u32 flags)
{
    if (jobj != NULL) {
        if ((jobj->flags ^ flags) & CLASSICAL_SCALE) {
            HSD_JObjSetMtxDirty(jobj);
        }
        jobj->flags &= ~flags;
    }
}

void fn_8040C450(HSD_JObj* jobj, u32 flags, u32 mask)
{
    if (jobj != NULL) {
        flags &= mask;
        if ((jobj->flags ^ flags) & CLASSICAL_SCALE) {
            HSD_JObjSetMtxDirty(jobj);
        }
        jobj->flags = flags | (jobj->flags & ~mask);
    }
}

void fn_80409274(HSD_JObj* jobj, f32 frame)
{
    if (jobj != NULL) {
        HSD_AObjReqAnim(jobj->aobj, frame);
        if (union_type_dobj(jobj)) {
            HSD_DObjReqAnimAllByFlags(jobj->u.dobj, 0x7ff, frame);
        }
        HSD_RObjReqAnimAllByFlags(jobj->robj, 0x7ff, frame);
    }
}

HSD_JObj* fn_8040BC14(HSD_JObj* jobj)
{
    HSD_JObj* prev;

    if (jobj == NULL || jobj->parent == NULL) {
        return NULL;
    }
    if (jobj == jobj->parent->child) {
        return NULL;
    }
    for (prev = jobj->parent->child; prev != NULL; prev = prev->next) {
        if (prev->next == jobj) {
            return prev;
        }
    }
    HSD_Panic(__FILE__, 0x610, "can not find specified jobj. maybe jobj tree is broken.\n");
    return NULL;
}

void fn_8040E1A8(HSD_JObj* jobj)
{
    ((HSD_JObjInfo*) jobj->object.parent.class_info)->release_child(jobj);
    if (HSD_IDGetDataFromTable(NULL, jobj->id, NULL) == jobj) {
        HSD_IDRemoveByIDFromTable(NULL, jobj->id);
    }
    if (jobj->scl != NULL) {
        fn_80417C20(jobj->scl);
    }
    if (jobj->envelopemtx != NULL) {
        fn_80417CA0(jobj->envelopemtx);
    }
    hsdJObj.parent.parent.head.parent->release((HSD_Class*) jobj);
}

void fn_8040A688(Mtx vmtx, HSD_JObj* jobj, Mtx mtx)
{
    HSD_CObj* cobj;

    HSD_JObjSetupMatrix(jobj);
    HSD_JObjSetupMatrix(jobj->child);
    fn_803D1578(jobj->child->mtx, mtx);
    PSMTXConcat(jobj->mtx, mtx, mtx);
    if (vmtx != NULL) {
        PSMTXConcat(vmtx, mtx, mtx);
    } else {
        cobj = HSD_CObjGetCurrent();
        if (cobj != NULL) {
            PSMTXConcat(cobj->view_mtx, mtx, mtx);
        }
    }
}
