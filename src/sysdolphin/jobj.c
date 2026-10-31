#include "jobj.h"
#include "dobj.h"
#include "robj.h"
#include "cobj.h"

void fn_8040E2A4(void);
HSD_JObjInfo hsdJObj = { fn_8040E2A4 };

extern HSD_JObj* lbl_805DE250;
extern u32 lbl_805DE258;
extern u32 lbl_805DE260;
extern u32 lbl_805DE264;
extern u32 lbl_805DE268;

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
void fn_80408BD0(HSD_JObj*, u32);
void fn_80408F88(HSD_JObj*, u32, f32);
extern HSD_AObj* HSD_AObjLoadDesc(struct _HSD_AObjDesc*);
extern void HSD_RObjAddAnimAll(HSD_RObj*, struct _HSD_RObjAnimJoint*);
extern void HSD_DObjAddAnimAll(HSD_DObj*, void*, void*);
extern void fn_8040BD64(HSD_JObj*, u32);
extern void fn_8040C0D8(HSD_JObj*, u32);
extern void HSD_RObjAnimAll(HSD_RObj*);
extern void HSD_DObjAnimAll(HSD_DObj*);
extern void fn_8040A304(HSD_JObj*);

extern const float lbl_805E5B10;
extern u32 lbl_805DE254;

extern void fn_8040B188(HSD_JObj*, HSD_Joint*);
HSD_JObj* fn_8040C774(void);

extern HSD_ClassInfo objInfo;
extern void hsdInitClassInfo(HSD_ClassInfo*, HSD_ClassInfo*, char*, char*, s32, s32);
extern int fn_8040DC70(HSD_JObj*);
extern void fn_8040E1A8(HSD_JObj*);
extern void fn_8040E240(HSD_ClassInfo*);
extern s32 fn_80408884(HSD_JObj*, HSD_Joint*, HSD_JObj*);
extern void fn_8040F00C(HSD_JObj*);
extern void fn_8040F218(HSD_JObj*, Mtx, Mtx);
extern void fn_8040ADD4(HSD_JObj*, Mtx, Mtx, HSD_TrspMask, u32);
extern void fn_8040DCD4(HSD_JObj*);
extern void fn_8040985C(void);

void HSD_JObjCheckDepend(HSD_JObj* jobj)
{
    if (jobj == NULL) {
        return;
    }
    if (HSD_JObjMtxIsDirty(jobj)) {
        return;
    }
    if (jobj->flags & USER_DEF_MTX) {
        if (!(jobj->flags & MTX_INDEP_PARENT)) {
            HSD_JObj* parent = jobj->parent;
            if (parent != NULL && HSD_JObjMtxIsDirty(parent)) {
                jobj->flags |= MTX_DIRTY;
            }
        }
    } else {
        u32 type;
        if ((jobj->parent != NULL && (jobj->parent->flags & MTX_DIRTY))
            || (type = jobj->flags & 0x600000) == JOINT1 || type == JOINT2 || type == EFFECTOR
            || jobj->robj != NULL) {
            jobj->flags |= MTX_DIRTY;
        }
    }
}

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

void fn_80408BD0(HSD_JObj* jobj, u32 flags)
{
    if (jobj != NULL) {
        HSD_JObj* child;
        fn_80408B54(jobj, flags);
        if (!(jobj->flags & INSTANCE)) {
            for (child = jobj->child; child != NULL; child = child->next) {
                fn_80408BD0(child, flags);
            }
        }
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

void fn_80408F88(HSD_JObj* jobj, u32 flags, f32 frame)
{
    if (jobj != NULL) {
        HSD_JObj* child;
        fn_80408F00(jobj, flags, frame);
        if (!(jobj->flags & INSTANCE)) {
            for (child = jobj->child; child != NULL; child = child->next) {
                fn_80408F88(child, flags, frame);
            }
        }
    }
}

void fn_80409250(HSD_JObj* jobj, f32 frame)
{
    fn_80408F88(jobj, 0x7ff, frame);
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

void fn_80409340(HSD_JObj* jobj, HSD_AnimJoint* an, HSD_AnimJoint* mat, HSD_AnimJoint* sh)
{
    if (jobj == NULL) {
        return;
    }
    if (an != NULL) {
        if (jobj->aobj != NULL) {
            HSD_AObjRemove(jobj->aobj);
        }
        jobj->aobj = HSD_AObjLoadDesc(an->aobjdesc);
        fn_804092E8(jobj->aobj);
        HSD_RObjAddAnimAll(jobj->robj, an->robj_anim);
        if (an->flags & 1) {
            fn_8040BD64(jobj, CLASSICAL_SCALE);
        } else {
            fn_8040C0D8(jobj, CLASSICAL_SCALE);
        }
    }
    if (union_type_dobj(jobj)) {
        HSD_DObjAddAnimAll(jobj->u.dobj, mat != NULL ? mat->aobjdesc : NULL, sh != NULL ? sh->aobjdesc : NULL);
    }
}

void fn_8040A1A0(HSD_JObj* jobj)
{
    if (jobj != NULL) {
        HSD_JObjCheckDepend(jobj);
        HSD_AObjInterpretAnim(jobj->aobj, jobj, ((HSD_JObjInfo*) jobj->object.parent.class_info)->update);
        HSD_RObjAnimAll(jobj->robj);
        if (union_type_dobj(jobj)) {
            HSD_DObjAnimAll(jobj->u.dobj);
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

HSD_JObj* fn_8040ACFC(HSD_JObj* jobj)
{
    return (HSD_JObj*) ((u8*) jobj + 0x54);
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

void fn_8040ADCC(u32 v)
{
    lbl_805DE268 = v;
}

HSD_JObj* HSD_JObjLoadJoint(HSD_Joint* joint)
{
    HSD_JObj* jobj;
    HSD_ClassInfo* info;

    if (joint == NULL) {
        jobj = NULL;
    } else {
        if (joint->class_name == NULL || (info = hsdSearchClassInfo(joint->class_name)) == NULL) {
            jobj = fn_8040C774();
        } else {
            jobj = hsdNew(info);
            if (jobj == NULL) {
                __assert(__FILE__, 0x3d5, "jobj");
            }
        }
        ((HSD_JObjInfo*) jobj->object.parent.class_info)->load(jobj, joint, NULL);
    }
    fn_8040B188(jobj, joint);
    return jobj;
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

void HSD_JObjUnref(HSD_JObj* jobj)
{
    HSD_Obj* o = &jobj->object;
    if (jobj == NULL) {
        return;
    }
    {
        int t = (o->ref_count == (u16) HSD_OBJ_NOREF);
        int u = t ? t : (o->ref_count-- == 0);
        if (u) {
            if ((s32) o->ref_count_individual - 1 < 0) {
                if (o != NULL) {
                    o->parent.class_info->release((HSD_Class*) o);
                    o->parent.class_info->destroy((HSD_Class*) o);
                }
            } else {
                HSD_OBJ_REF_INC_IND(o);
                ((HSD_JObjInfo*) o->parent.class_info)->release_child(jobj);
                {
                    int t2 = (o->ref_count_individual == 0);
                    int u2 = t2 ? t2 : (o->ref_count_individual -= 1, o->ref_count_individual == 0);
                    if (u2) {
                        if (o != NULL) {
                            o->parent.class_info->release((HSD_Class*) o);
                            o->parent.class_info->destroy((HSD_Class*) o);
                        }
                    }
                }
            }
        }
    }
}

void fn_8040B670(HSD_Obj* o)
{
    if (o != NULL) {
        int t = (o->ref_count_individual == 0);
        int u = t ? t : (o->ref_count_individual -= 1, o->ref_count_individual == 0);
        if (u) {
            s32 count = (o->ref_count == 0xffff) ? -1 : o->ref_count;
            if (count < 0 && o != NULL) {
                o->parent.class_info->release((HSD_Class*) o);
                o->parent.class_info->destroy((HSD_Class*) o);
            }
        }
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

u32 fn_8040BD4C(HSD_JObj* jobj)
{
    if (jobj != NULL) {
        return jobj->flags;
    }
    return 0;
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

HSD_JObj* fn_8040C774(void)
{
    HSD_JObj* jobj;
    jobj = hsdNew(lbl_805DE250 != NULL ? (void*) lbl_805DE250 : (void*) &hsdJObj);
    if (jobj == NULL) {
        __assert(__FILE__, 0x7f7, "jobj");
    }
    return jobj;
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

int fn_8040DC70(HSD_JObj* jobj)
{
    int ret = hsdJObj.parent.parent.head.parent->init((HSD_Class*) jobj);
    if (ret >= 0) {
        jobj->flags = MTX_DIRTY;
        jobj->scale.x = lbl_805E5B10;
        jobj->scale.y = lbl_805E5B10;
        jobj->scale.z = lbl_805E5B10;
        ret = 0;
    }
    return ret;
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

void fn_8040E240(HSD_ClassInfo* info)
{
    if (info == (HSD_ClassInfo*) lbl_805DE250) {
        lbl_805DE250 = NULL;
    }
    if (info == (HSD_ClassInfo*) &hsdJObj) {
        lbl_805DE254 = 0;
        lbl_805DE264 = 0;
    }
    hsdJObj.parent.parent.head.parent->amnesia(info);
}

void fn_8040E2A4(void)
{
    hsdInitClassInfo((HSD_ClassInfo*) &hsdJObj, &objInfo,
        "sysdolphin_base_library", "hsd_jobj",
        sizeof(HSD_JObjInfo), sizeof(HSD_JObj));
    ((HSD_ClassInfo*) &hsdJObj)->init = (void*) fn_8040DC70;
    ((HSD_ClassInfo*) &hsdJObj)->release = (void*) fn_8040E1A8;
    ((HSD_ClassInfo*) &hsdJObj)->amnesia = fn_8040E240;
    hsdJObj.make_mtx = (void*) fn_80408884;
    hsdJObj.make_pmtx = (void*) fn_8040F00C;
    hsdJObj.disp = (void*) fn_8040F218;
    hsdJObj.load = (void*) fn_8040ADD4;
    hsdJObj.release_child = fn_8040DCD4;
    hsdJObj.update = (void*) fn_8040985C;
}
