#include <dolphin/types.h>

typedef void (*HSD_VICallback)(void);

typedef struct HSD_VIXfb {
    u8 pad0[0x58];
    void* buffer;     // 0x58
    s32 status;       // 0x5C
} HSD_VIXfb;

typedef struct HSD_VIData {
    u8 pad0[0x3C];
    s32 x3c;
    u8 pad40[0x1D8 - 0x40];
    HSD_VICallback pre_retrace; // 0x1D8
    HSD_VICallback post_retrace; // 0x1DC
    s32 x1e0;
    void* x1e4;
    void (*x1e8)(void*);
} HSD_VIData;

extern HSD_VIData lbl_80589A80;
extern s32 lbl_805DE2C8;
extern s32 lbl_805DE2CC;
extern char lbl_805DCC38[8];
extern char lbl_80503E80[];
extern void fn_803DF318(void*);
extern void fn_803DE62C(void*);
extern void fn_803DF384(u32);
extern void fn_803DF1E8(void);
extern void __assert(const char*, unsigned long, const char*);

extern int OSDisableInterrupts(void);
extern void OSRestoreInterrupts(int);

#define VI_AT(type, off) (*(type*) ((u8*) &lbl_80589A80 + (off)))
static inline s32 findXfb(s32 st)
{
    s32 i;
    for (i = 0; i < 3; i++) {
        if (((HSD_VIXfb*) &lbl_80589A80)[i].status == st)
            return i;
    }
    return -1;
}






void (*fn_80410B38(void (*cb)(void*)))(void*)
{
    void (*old)(void*) = lbl_80589A80.x1e8;
    int en = OSDisableInterrupts();
    lbl_80589A80.x1e8 = cb;
    OSRestoreInterrupts(en);
    return old;
}

HSD_VICallback HSD_VISetUserPreRetraceCallback(HSD_VICallback cb)
{
    HSD_VICallback old = lbl_80589A80.pre_retrace;
    int en = OSDisableInterrupts();
    lbl_80589A80.pre_retrace = cb;
    OSRestoreInterrupts(en);
    return old;
}

HSD_VICallback fn_80410AE4(HSD_VICallback cb)
{
    HSD_VICallback old = lbl_80589A80.post_retrace;
    int en = OSDisableInterrupts();
    lbl_80589A80.post_retrace = cb;
    OSRestoreInterrupts(en);
    return old;
}

void fn_80410B8C(void* retrace);
#if 0 /* not yet matching */
void fn_80410B8C(void* retrace)
{
    s32 changed = 0;
    s32 idx = 0;
    s32 i = findXfb(6);
    if (i != -1) {
        HSD_VIXfb* xfb = &((HSD_VIXfb*) &lbl_80589A80)[i];
        fn_803DF318(xfb->buffer);
        if (*((u8*) xfb + 0xB4) != 0) {
            fn_803DE62C((u8*) xfb + 0x60);
            fn_803DF384(*(u32*) ((u8*) xfb + 0x9C));
        }
        changed = 1;
        idx = 1;
    } else if (VI_AT(s32, 0x1D4) == 1 && VI_AT(s32, 0x178) == 1) {
        idx = findXfb(7);
        if (idx == -1) {
            idx = findXfb(2);
            if (idx == -1)
                __assert(lbl_805DCC38, 0xFC, lbl_80503E80);
            fn_803DF318(((HSD_VIXfb*) &lbl_80589A80)[idx].buffer);
            changed = 1;
        }
        ((HSD_VIXfb*) &lbl_80589A80)[idx].status = 8;
        if (VI_AT(u8, 0x1D0) != 0) {
            fn_803DE62C(&VI_AT(u8, 0x17C));
            fn_803DF384(VI_AT(u32, 0x1B8));
            changed = 1;
        }
        idx = 1;
    }
    if (changed != 0)
        fn_803DF1E8();
    if (idx != 0)
        lbl_805DE2CC++;
    lbl_805DE2C8++;
    if (lbl_805DE2C8 >= VI_AT(s32, 0x1EC)) {
        s32 t = lbl_805DE2CC;
        lbl_805DE2C8 = 0;
        VI_AT(s32, 0x1F0) = t;
        lbl_805DE2CC = 0;
    }
    if (lbl_80589A80.pre_retrace != NULL)
        ((void (*)(void*)) lbl_80589A80.pre_retrace)(retrace);
}
#endif

void fn_80411008(void)
{
    lbl_80589A80.x1e0 = 0;
    if (lbl_80589A80.x1e8 != NULL)
        lbl_80589A80.x1e8(lbl_80589A80.x1e4);
}

s32 fn_8041104C(void)
{
    return lbl_80589A80.x1e0;
}


void fn_80411A6C(s32 x)
{
    lbl_80589A80.x3c = x;
    *((u8*) &lbl_80589A80 + 0x54) = 1;
}

typedef struct VIRMode {
    u32 w[15];
} VIRMode;

void fn_804119E4(VIRMode* rm)
{
    *(VIRMode*) &lbl_80589A80 = *rm;
    *((u8*) &lbl_80589A80 + 0x54) = 1;
}

void fn_804114BC(int idx)
{
    s32* status;
    int en = OSDisableInterrupts();
    s32 v;
    status = &((HSD_VIXfb*) &lbl_80589A80)[idx].status;
    if (*status != 4) {
        __assert(lbl_805DCC38, 0x2D2, "_p->xfb[idx].status == HSD_VI_XFB_WAITDONE");
    }
    {
        s32 i = findXfb(6);
        v = 6;
        if (i != -1)
            v = 5;
    }
    *status = v;
    OSRestoreInterrupts(en);
}
