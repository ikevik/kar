#ifndef _cobj_h_
#define _cobj_h_

#include <dolphin/types.h>

#include <sysdolphin/object.h>
#include <sysdolphin/aobj.h>
#include <sysdolphin/wobj.h>

#define PROJ_PERSPECTIVE 1
#define PROJ_FRUSTRUM 2
#define PROJ_ORTHO 3

typedef struct _HSD_CObj {
    HSD_Obj parent;
    u32 flags; //0x08
    f32 viewport_left; //0x0C
    f32 viewport_right; //0x10
    f32 viewport_top; //0x14
    f32 viewport_bottom; //0x18
    u16 scissor_left; //0x1C
    u16 scissor_right; //0x1E
    u16 scissor_top; //0x20
    u16 scissor_bottom; //0x22
    struct _HSD_WObj* eye_position; //0x24
    struct _HSD_WObj* interest; //0x28
    union {
        f32 roll; //0x2C
        Vec up; //0x2C - 0x34
    } u;
    f32 near; //0x38
    f32 far; //0x3C
    union {
        struct {
            f32 fov;
            f32 aspect;
        } perspective;

        struct {
            f32 top;
            f32 bottom;
            f32 left;
            f32 right;
        } frustrum;

        struct {
            f32 top;
            f32 bottom;
            f32 left;
            f32 right;
        } ortho;
    } projection_param;
    u8 projection_type; //0x50
    Mtx view_mtx; //0x54
    struct _HSD_AObj* aobj; //0x84
    Mtx* proj_mtx; //0x88
    u32 unk8C; //0x8C
    u32 unk90; //0x90
    u32 unk94; //0x94
    u32 unk98; //0x98
} HSD_CObj;

typedef struct _HSD_CObjDesc {
    char* class_name; //0x00
    u16 flags; //0x04
    u16 projection_type; //0x06
    s16 viewport_left; //0x08
    s16 viewport_right; //0x0A
    s16 viewport_top; //0x0C
    s16 viewport_bottom; //0x0E
    u32 scissor_lr; //0x10
    u32 scissor_tb; //0x14
    struct _HSD_WObjDesc* eye_desc; //0x18
    struct _HSD_WObjDesc* interest_desc; //0x1C
    f32 roll; //0x20
    Vec* vector; //0x24
    f32 near; //0x28
    f32 far; //0x2C
    union {
        struct {
            f32 fov;
            f32 aspect;
        } perspective;

        struct {
            f32 top;
            f32 bottom;
            f32 left;
            f32 right;
        } frustrum;

        struct {
            f32 top;
            f32 bottom;
            f32 left;
            f32 right;
        } ortho;
    } projection_param;
} HSD_CObjDesc;

typedef struct _HSD_CObjInfo {
    HSD_ObjInfo parent;
    int (*load)(HSD_CObj* cobj, HSD_CObjDesc* desc);
    void (*update)(void* obj, u32 type, f32* fval);
} HSD_CObjInfo;

typedef struct _HSD_CameraAnim {
    struct _HSD_AObjDesc* aobjdesc;
    struct _HSD_WObjAnim* eye_anim;
    struct _HSD_WObjAnim* interest_anim;
} HSD_CameraAnim;

extern HSD_CObjInfo hsdCObj;

#define HSD_COBJ_INFO(i) ((HSD_CObjInfo*) (i))
#define HSD_COBJ_METHOD(o) HSD_COBJ_INFO(HSD_OBJECT_METHOD(o))

void HSD_CObjGetInterest(HSD_CObj* cobj, Vec* interest);
void HSD_CObjSetInterest(HSD_CObj* cobj, Vec* interest);
void HSD_CObjGetEyePosition(HSD_CObj* cobj, Vec* eye);
void HSD_CObjSetEyePosition(HSD_CObj* cobj, Vec* eye);
void HSD_CObjSetFov(HSD_CObj* cobj, f32 fov);
void HSD_CObjSetNear(HSD_CObj* cobj, f32 near);
void HSD_CObjSetFar(HSD_CObj* cobj, f32 far);
void HSD_CObjSetViewport(HSD_CObj* cobj, s16* viewport);
void HSD_CObjSetScissor(HSD_CObj* cobj, u16* scissor);
void HSD_CObjSetOrtho(HSD_CObj* cobj, f32 top, f32 bottom, f32 left, f32 right);
void HSD_CObjSetFrustum(HSD_CObj* cobj, f32 top, f32 bottom, f32 left, f32 right);

void HSD_CObjEraseScreen(HSD_CObj* cobj, s32 enable_color, s32 enable_alpha, s32 enable_depth);
void HSD_CObjRemoveAnim(HSD_CObj* cobj);
HSD_WObj* HSD_CObjGetEyePositionWObj(HSD_CObj* cobj);
HSD_WObj* HSD_CObjGetInterestWObj(HSD_CObj* cobj);

#endif
