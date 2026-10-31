#include <dolphin/types.h>
#include <functions.h>

typedef struct HSD_MemCb {
    void* (*alloc)(u32 size, u32 align, u32 arg);
    void (*free)(void* ptr);
    u32 (*get_remain)(void);
    void (*free2)(void);
    int (*check_own)(void* ptr);
} HSD_MemCb;

extern HSD_MemCb lbl_8058BE80;

void _HSD_MemSetCallbacks(HSD_MemCb* cb, u32 size)
{
    if (size != sizeof(HSD_MemCb))
        __assert("memory.c", 0x14, "size == sizeof(__mem_cb)");
    lbl_8058BE80 = *cb;
}

void* _HSD_MemAlloc(u32 size, u32 align, u32 arg)
{
    return lbl_8058BE80.alloc(size, align, arg);
}

void _HSD_MemFree(void)
{
    lbl_8058BE80.free2();
}

u32 _HSD_MemGetRemain(void)
{
    return lbl_8058BE80.get_remain();
}

int _HSD_MemCheckOwn(void* ptr)
{
    return lbl_8058BE80.check_own(ptr);
}

void HSD_Free(void* ptr)
{
    lbl_8058BE80.free(ptr);
}

void* HSD_Alloc(u32 size)
{
    return lbl_8058BE80.alloc(size, 0x20, 0);
}
