#pragma fp_contract on
#include <dolphin/types.h>
#include <sysdolphin/objalloc.h>

extern HSD_ObjAllocData lbl_8058BBB8;
extern HSD_ObjAllocData lbl_8058BBE4;
extern char lbl_805DCC40[6];
extern void __assert(const char*, unsigned long, const char*);
extern void HSD_ObjAllocInit(HSD_ObjAllocData* data, u32 size, u32 align);

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;
extern void PSVECCrossProduct(Vec3* a, Vec3* b, Vec3* out);

void fn_80417AF4(Vec3* v, Vec3* out)
{
    Vec3 tmp;
    if (v->x <= v->y) {
        if (v->x <= v->z) {
            tmp.x = 1.0f;
            tmp.y = 0.0f;
            tmp.z = 0.0f;
            PSVECCrossProduct(&tmp, v, out);
        } else {
            tmp.x = 0.0f;
            tmp.y = 0.0f;
            tmp.z = 1.0f;
            PSVECCrossProduct(&tmp, v, out);
        }
    } else if (v->y <= v->z) {
        tmp.x = 0.0f;
        tmp.y = 1.0f;
        tmp.z = 0.0f;
        PSVECCrossProduct(&tmp, v, out);
    } else {
        tmp.x = 0.0f;
        tmp.y = 0.0f;
        tmp.z = 1.0f;
        PSVECCrossProduct(&tmp, v, out);
    }
}

void* fn_80417BD4(void)
{
    void* p = HSD_ObjAlloc(&lbl_8058BBB8);
    if (p == NULL)
        __assert(lbl_805DCC40, 0x3CF, "vec");
    return p;
}

void fn_80417C20(void* p)
{
    if (p != NULL)
        HSD_ObjFree(&lbl_8058BBB8, p);
}

void* fn_80417C54(void)
{
    void* p = HSD_ObjAlloc(&lbl_8058BBE4);
    if (p == NULL)
        __assert(lbl_805DCC40, 0x3EE, "mtx");
    return p;
}

void fn_80417CA0(void* p)
{
    if (p != NULL)
        HSD_ObjFree(&lbl_8058BBE4, p);
}

HSD_ObjAllocData* HSD_VecGetAllocData(void)
{
    return &lbl_8058BBB8;
}

void HSD_VecInitAllocData(void)
{
    HSD_ObjAllocInit(&lbl_8058BBB8, 0xC, 4);
}

HSD_ObjAllocData* HSD_MtxGetAllocData(void)
{
    return &lbl_8058BBE4;
}

void HSD_MtxInitAllocData(void)
{
    HSD_ObjAllocInit(&lbl_8058BBE4, 0x30, 4);
}

void fn_80416B08(f32 (*m)[4], Vec3* out)
{
    out->x = m[0][3];
    out->y = m[1][3];
    out->z = m[2][3];
}
