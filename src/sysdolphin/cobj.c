#include "cobj.h"

#include <sysdolphin/wobj.h>

extern HSD_CObjInfo* lbl_805DE228;
extern HSD_CObj* lbl_805DE22C;
#define default_class lbl_805DE228
#define current_cobj lbl_805DE22C

void CObjInfoInit(void);
void CObjRelease(HSD_Class*);
int HSD_CObjLoad(HSD_CObj*, HSD_CObjDesc*);
void HSD_CObjUpdateFunc(void*, u32, f32*);
HSD_CObjInfo hsdCObj = { CObjInfoInit };

extern HSD_ClassInfo objInfo;

void* hsdNew(HSD_ClassInfo* info);
void _HSD_ZListSort(void);
void _HSD_ZListDisp(void);
void HSD_WObjAddAnim(HSD_WObj*, HSD_WObjAnim*);
void HSD_WObjGetPosition(HSD_WObj*, Vec*);
void HSD_WObjSetPosition(HSD_WObj*, Vec*);
void HSD_WObjReqAnim(HSD_WObj*, f32);
void HSD_WObjInterpretAnim(HSD_WObj*);
HSD_WObj* HSD_WObjAlloc(void);
void PSMTXCopy(Mtx, Mtx);
void PSVECNormalize(Vec*, Vec*);
Mtx* HSD_CObjGetViewingMtxPtr(HSD_CObj*);
void HSD_CObjClearFlags(HSD_CObj*, u32);
void* fn_80417C54(void);
void fn_803D1578(Mtx, Mtx);
int fn_80401DBC(HSD_CObj*, f32, Vec*);
extern f32 lbl_805DC8B8[];

typedef struct {
    u16 left;
    u16 right;
    u16 top;
    u16 bottom;
} Scissor;

typedef struct {
    f32 left;
    f32 right;
    f32 top;
    f32 bottom;
} Viewportf;

void HSD_CObjAddAnim(HSD_CObj* cobj, HSD_CameraAnim* anim)
{
    if (cobj != NULL && anim != NULL) {
        if (cobj->aobj != NULL) {
            HSD_AObjRemove(cobj->aobj);
        }
        cobj->aobj = HSD_AObjLoadDesc(anim->aobjdesc);
        HSD_WObjAddAnim(HSD_CObjGetEyePositionWObj(cobj), anim->eye_anim);
        HSD_WObjAddAnim(HSD_CObjGetInterestWObj(cobj), anim->interest_anim);
    }
}

void HSD_CObjAnim(HSD_CObj* cobj)
{
    if (cobj != NULL) {
        HSD_AObjInterpretAnim(cobj->aobj, cobj, HSD_COBJ_METHOD(cobj)->update);
        HSD_WObjInterpretAnim(cobj->eye_position);
        HSD_WObjInterpretAnim(cobj->interest);
    }
}

void HSD_CObjReqAnim(HSD_CObj* cobj, f32 frame)
{
    if (cobj != NULL) {
        if (cobj != NULL) {
            HSD_AObjReqAnim(cobj->aobj, frame);
            HSD_WObjReqAnim(cobj->eye_position, frame);
            HSD_WObjReqAnim(cobj->interest, frame);
        }
    }
}

void HSD_CObjEndCurrent(void)
{
    _HSD_ZListSort();
    _HSD_ZListDisp();
}

HSD_WObj* HSD_CObjGetInterestWObj(HSD_CObj* cobj)
{
    assert_line(0x2c1, cobj);
    return cobj->interest;
}

HSD_WObj* HSD_CObjGetEyePositionWObj(HSD_CObj* cobj)
{
    assert_line(0x2d9, cobj);
    return cobj->eye_position;
}

void HSD_CObjGetInterest(HSD_CObj* cobj, Vec* interest)
{
    assert_line(0x2f1, cobj);
    HSD_WObjGetPosition(HSD_CObjGetInterestWObj(cobj), interest);
}

void HSD_CObjSetInterest(HSD_CObj* cobj, Vec* interest)
{
    assert_line(0x2fd, cobj);
    HSD_WObjSetPosition(HSD_CObjGetInterestWObj(cobj), interest);
}

void HSD_CObjGetEyePosition(HSD_CObj* cobj, Vec* eye)
{
    assert_line(0x309, cobj);
    HSD_WObjGetPosition(HSD_CObjGetEyePositionWObj(cobj), eye);
}

void HSD_CObjSetEyePosition(HSD_CObj* cobj, Vec* eye)
{
    assert_line(0x315, cobj);
    HSD_WObjSetPosition(HSD_CObjGetEyePositionWObj(cobj), eye);
}

void HSD_CObjSetMtxDirty(HSD_CObj* cobj)
{
    cobj->flags |= 0xC0000000;
}

BOOL HSD_CObjMtxIsDirty(HSD_CObj* cobj)
{
    BOOL result = FALSE;
    if (cobj->flags & 0x40000000) {
        result = TRUE;
    } else if (cobj->eye_position != NULL && (cobj->eye_position->flags & 2)) {
        result = TRUE;
    } else if (cobj->interest != NULL && (cobj->interest->flags & 2)) {
        result = TRUE;
    }
    return result;
}

void HSD_CObjGetViewingMtx(HSD_CObj* cobj, Mtx mtx)
{
    PSMTXCopy(*HSD_CObjGetViewingMtxPtr(cobj), mtx);
}

f32 HSD_CObjGetFov(HSD_CObj* cobj)
{
    if (cobj != NULL && cobj->projection_type == PROJ_PERSPECTIVE) {
        return cobj->projection_param.perspective.fov;
    }
    return 0.0F;
}

void HSD_CObjSetFov(HSD_CObj* cobj, f32 fov)
{
    if (cobj != NULL && cobj->projection_type == PROJ_PERSPECTIVE) {
        cobj->projection_param.perspective.fov = fov;
    }
}

f32 HSD_CObjGetAspect(HSD_CObj* cobj)
{
    if (cobj != NULL && cobj->projection_type == PROJ_PERSPECTIVE) {
        return cobj->projection_param.perspective.aspect;
    }
    return 0.0F;
}

void HSD_CObjSetAspect(HSD_CObj* cobj, f32 aspect)
{
    if (cobj != NULL && cobj->projection_type == PROJ_PERSPECTIVE) {
        cobj->projection_param.perspective.aspect = aspect;
    }
}

f32 HSD_CObjGetNear(HSD_CObj* cobj)
{
    if (cobj == NULL) {
        return 0.0F;
    }
    return cobj->near;
}

void HSD_CObjSetNear(HSD_CObj* cobj, f32 near)
{
    if (cobj != NULL) {
        cobj->near = near;
    }
}

f32 HSD_CObjGetFar(HSD_CObj* cobj)
{
    if (cobj == NULL) {
        return 0.0F;
    }
    return cobj->far;
}

void HSD_CObjSetFar(HSD_CObj* cobj, f32 far)
{
    if (cobj != NULL) {
        cobj->far = far;
    }
}

void HSD_CObjGetScissor(HSD_CObj* cobj, u16* scissor)
{
    if (cobj != NULL) {
        *(Scissor*) scissor = *(Scissor*) &cobj->scissor_left;
    }
}

void HSD_CObjSetScissor(HSD_CObj* cobj, u16* scissor)
{
    if (cobj != NULL) {
        *(Scissor*) &cobj->scissor_left = *(Scissor*) scissor;
    }
}

void HSD_CObjSetScissorx4(HSD_CObj* cobj, u16 left, u16 right, u16 top, u16 bottom)
{
    if (cobj != NULL) {
        cobj->scissor_left = left;
        cobj->scissor_right = right;
        cobj->scissor_top = top;
        cobj->scissor_bottom = bottom;
    }
}

void HSD_CObjGetViewportf(HSD_CObj* cobj, f32* viewport)
{
    if (cobj != NULL) {
        *(Viewportf*) viewport = *(Viewportf*) &cobj->viewport_left;
    }
}

void HSD_CObjSetViewportf(HSD_CObj* cobj, f32* viewport)
{
    if (cobj != NULL) {
        *(Viewportf*) &cobj->viewport_left = *(Viewportf*) viewport;
    }
}

void HSD_CObjSetViewportfx4(HSD_CObj* cobj, f32 left, f32 right, f32 top, f32 bottom)
{
    if (cobj != NULL) {
        cobj->viewport_left = left;
        cobj->viewport_right = right;
        cobj->viewport_top = top;
        cobj->viewport_bottom = bottom;
    }
}

void HSD_CObjGetViewport(HSD_CObj* cobj, s16* viewport)
{
    if (cobj != NULL) {
        viewport[0] = (s16) cobj->viewport_left;
        viewport[1] = (s16) cobj->viewport_right;
        viewport[2] = (s16) cobj->viewport_top;
        viewport[3] = (s16) cobj->viewport_bottom;
    }
}

void HSD_CObjSetViewport(HSD_CObj* cobj, s16* viewport)
{
    if (cobj != NULL) {
        cobj->viewport_left = viewport[0];
        cobj->viewport_right = viewport[1];
        cobj->viewport_top = viewport[2];
        cobj->viewport_bottom = viewport[3];
    }
}

u8 HSD_CObjGetProjectionType(HSD_CObj* cobj)
{
    if (cobj == NULL) {
        return PROJ_PERSPECTIVE;
    }
    return cobj->projection_type;
}

void HSD_CObjSetProjectionType(HSD_CObj* cobj, u8 type)
{
    if (cobj != NULL) {
        cobj->projection_type = type;
    }
}

void HSD_CObjSetFrustum(HSD_CObj* cobj, f32 top, f32 bottom, f32 left, f32 right)
{
    if (cobj != NULL) {
        cobj->projection_type = PROJ_FRUSTRUM;
        cobj->projection_param.frustrum.top = top;
        cobj->projection_param.frustrum.bottom = bottom;
        cobj->projection_param.frustrum.left = left;
        cobj->projection_param.frustrum.right = right;
    }
}

void HSD_CObjSetOrtho(HSD_CObj* cobj, f32 top, f32 bottom, f32 left, f32 right)
{
    if (cobj != NULL) {
        cobj->projection_type = PROJ_ORTHO;
        cobj->projection_param.ortho.top = top;
        cobj->projection_param.ortho.bottom = bottom;
        cobj->projection_param.ortho.left = left;
        cobj->projection_param.ortho.right = right;
    }
}

void HSD_CObjSetFlags(HSD_CObj* cobj, u32 flags)
{
    if (cobj != NULL) {
        cobj->flags |= flags;
    }
}

void HSD_CObjClearFlags(HSD_CObj* cobj, u32 flags)
{
    if (cobj != NULL) {
        cobj->flags &= ~flags;
    }
}

HSD_CObj* HSD_CObjGetCurrent(void)
{
    return current_cobj;
}

HSD_CObj* HSD_CObjAlloc(void)
{
    HSD_CObj* cobj = hsdNew((HSD_ClassInfo*) (default_class ? default_class : &hsdCObj));
    assert_line(0x7a3, cobj);
    return cobj;
}

HSD_CObj* HSD_CObjLoadDesc(HSD_CObjDesc* desc)
{
    HSD_CObj* cobj;
    HSD_ClassInfo* info;

    if (desc != NULL) {
        if (desc->class_name == NULL || (info = hsdSearchClassInfo(desc->class_name)) == NULL) {
            cobj = HSD_CObjAlloc();
        } else {
            cobj = hsdNew(info);
            assert_line(0x7f8, cobj);
        }
        HSD_COBJ_METHOD(cobj)->load(cobj, desc);
        return cobj;
    }
    return NULL;
}

int CObjInit(HSD_Class* o)
{
    HSD_CObj* cobj = (HSD_CObj*) o;
    int rc = HSD_OBJECT_PARENT_INFO(&hsdCObj)->init(o);
    if (rc < 0) {
        return rc;
    }
    if (cobj != NULL) {
        cobj->flags |= 0xC0000000;
    }
    cobj->eye_position = HSD_WObjAlloc();
    cobj->interest = HSD_WObjAlloc();
    return 0;
}

void CObjAmnesia(HSD_ClassInfo* info)
{
    if (info == HSD_CLASS_INFO(default_class)) {
        default_class = NULL;
    }
    if (info == HSD_CLASS_INFO(&hsdCObj)) {
        current_cobj = NULL;
    }
    HSD_OBJECT_PARENT_INFO(&hsdCObj)->amnesia(info);
}

void CObjInfoInit(void)
{
    hsdInitClassInfo(HSD_CLASS_INFO(&hsdCObj), &objInfo,
        "sysdolphin_base_library", "hsd_cobj",
        sizeof(HSD_CObjInfo), sizeof(HSD_CObj));
    HSD_CLASS_INFO(&hsdCObj)->init = CObjInit;
    HSD_CLASS_INFO(&hsdCObj)->release = CObjRelease;
    HSD_CLASS_INFO(&hsdCObj)->amnesia = CObjAmnesia;
    hsdCObj.load = HSD_CObjLoad;
    hsdCObj.update = HSD_CObjUpdateFunc;
}
