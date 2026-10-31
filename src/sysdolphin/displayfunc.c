#pragma fp_contract on
#include <dolphin/types.h>
#include <sysdolphin/objalloc.h>

typedef struct HSD_ZListEnt {
    u8 pad0[0x30];
    void* mtx;                    // 0x30
    void* obj;                    // 0x34
    u32 rendermode;               // 0x38
    struct HSD_ZListEnt* next_a;  // 0x3C
    struct HSD_ZListEnt* next_b;  // 0x40
    struct HSD_ZListEnt* next;    // 0x44
} HSD_ZListEnt;

extern HSD_ObjAllocData lbl_80589A18;
extern s32 lbl_805DE270;
extern s32 lbl_805DE274;
extern HSD_ZListEnt* lbl_805DE278;
extern HSD_ZListEnt* lbl_805DE27C;
extern HSD_ZListEnt* lbl_805DE280;
extern HSD_ZListEnt* lbl_805DE284;
extern HSD_ZListEnt* lbl_805DE288;
extern HSD_ZListEnt** lbl_805DCB8C;
extern HSD_ZListEnt** lbl_805DCB90;
extern HSD_ZListEnt** lbl_805DCB94;
extern u8 lbl_805DCB88[4];

extern void HSD_ObjAllocInit(HSD_ObjAllocData* data, u32 size, u32 align);
extern HSD_ZListEnt* fn_8040F518(HSD_ZListEnt* head, HSD_ZListEnt* tail, s32 off);
extern void fn_80417CA0(void*);
extern void fn_8040F2E8(void*);
extern u8* HSD_CObjGetCurrent(void);
void _HSD_ZListClear(void);




void fn_8040F848(u32* jobj);
#if 0 /* not yet matching */
#endif





typedef void (*HSD_ZDispFn)(void* obj, void* mtx, void* z, int type, u32 rmode);

void HSD_ZListInitAllocData(void)
{
    HSD_ObjAllocInit(&lbl_80589A18, 0x48, 4);
}

void _HSD_ZListSort(void)
{
    if (lbl_805DE274 != 0) {
        lbl_805DE27C = fn_8040F518(lbl_805DE27C, lbl_805DE280, 0x3C);
        lbl_805DE284 = fn_8040F518(lbl_805DE284, lbl_805DE288, 0x40);
    }
}

void _HSD_ZListDisp(void);
#if 0 /* not yet matching */
void _HSD_ZListDisp(void)
{
    HSD_ZListEnt* z;
    u8* vmtx = HSD_CObjGetCurrent() + 0x54;
    for (z = lbl_805DE27C; z != NULL; z = z->next_a) {
        (*(HSD_ZDispFn*) (*(u8**) z->obj + 0x48))(z->obj, z->mtx ? z->mtx : vmtx, z, 4, z->rendermode);
    }
    for (z = lbl_805DE284; z != NULL; z = z->next_b) {
        (*(HSD_ZDispFn*) (*(u8**) z->obj + 0x48))(z->obj, z->mtx ? z->mtx : vmtx, z, 2, z->rendermode);
    }
    _HSD_ZListClear();
}
#endif

void _HSD_ZListClear(void)
{
    HSD_ZListEnt* z = lbl_805DE278;
    HSD_ZListEnt* next;
    for (; z != NULL; z = next) {
        next = z->next;
        if (z->mtx != NULL)
            fn_80417CA0(z->mtx);
        HSD_ObjFree(&lbl_80589A18, z);
    }
    lbl_805DE278 = NULL;
    lbl_805DCB8C = &lbl_805DE278;
    lbl_805DE27C = NULL;
    lbl_805DCB90 = &lbl_805DE27C;
    lbl_805DE280 = NULL;
    lbl_805DE284 = NULL;
    lbl_805DCB94 = &lbl_805DE284;
    lbl_805DE288 = NULL;
}

void fn_8040F83C(s32 a, s32 b)
{
    lbl_805DE270 = a;
    lbl_805DE274 = b;
}

void fn_8040F848(u32* jobj)
{
    if (jobj != NULL) {
        if (!(jobj[5] & 0x4020) ? 1 : 0)
            fn_8040F2E8(jobj);
    }
}

void fn_8040F884(u8 r, u8 g, u8 b, u8 a)
{
    lbl_805DCB88[0] = r;
    lbl_805DCB88[1] = g;
    lbl_805DCB88[2] = b;
    lbl_805DCB88[3] = a;
}

u32 fn_8040F89C(void)
{
    return *(u32*) lbl_805DCB88;
}

void _HSD_DispForgetMemory(void)
{
    lbl_805DE278 = NULL;
    lbl_805DCB8C = &lbl_805DE278;
    lbl_805DE27C = NULL;
    lbl_805DCB90 = &lbl_805DE27C;
    lbl_805DE280 = NULL;
    lbl_805DE284 = NULL;
    lbl_805DCB94 = &lbl_805DE284;
    lbl_805DE288 = NULL;
}

