#include "dolphin/sdk_common.h"

volatile u16 __VIRegs[] : 0xcc002000;

typedef void (*VIRetraceCallback)(u32 retraceCount);

extern void OSInitThreadQueue(void* queue);
extern void OSSleepThread(void* queue);
extern void OSWakeupThread(void* queue);
extern void SIRefreshSamplingRate(void);

extern u8 lbl_8056E3A0[];
extern u8 lbl_8056E490[];

u32 lbl_805DDF6C;
u32 lbl_805DDF70;
u32 lbl_805DDF74[2];
VIRetraceCallback lbl_805DDF7C;
VIRetraceCallback lbl_805DDF80;
u32 lbl_805DDF98;
u64 lbl_805DDFA0;
u8* lbl_805DDFA8;
u32 lbl_805DDFB0;
u32 lbl_805DDFB4;
u32 CurrTvMode;

#define VI_REGS ((volatile u16*)lbl_8056E3A0)
#define VI_SHDW ((u16*)(lbl_8056E3A0 + 0x78))
#define VI_U32(off) (*(u32*)(lbl_8056E3A0 + (off)))

static u32 getCurrentFieldEvenOdd(void);

static inline int cntlzd(u64 x)
{
    int n;
    n = __cntlzw(x >> 32);
    if (n == 32) {
        n = __cntlzw(x & 0xFFFFFFFF) + 32;
    }
    return n;
}

static void __VIRetraceHandler(s16 interrupt, OSContext* context)
{
    OSContext exceptionContext;
    u16 reg;
    u32 inter = 0;
    u8* regs = lbl_8056E3A0;
    BOOL flag;

    reg = __VIRegs[24];
    if (reg & 0x8000) {
        __VIRegs[24] = reg & ~0x8000;
        inter |= 1;
    }
    reg = __VIRegs[26];
    if (reg & 0x8000) {
        __VIRegs[26] = reg & ~0x8000;
        inter |= 2;
    }
    reg = __VIRegs[28];
    if (reg & 0x8000) {
        __VIRegs[28] = reg & ~0x8000;
        inter |= 4;
    }
    reg = __VIRegs[30];
    if (reg & 0x8000) {
        __VIRegs[30] = reg & ~0x8000;
        inter |= 8;
    }
    if ((inter & 4) || (inter & 8)) {
        OSSetCurrentContext(context);
        return;
    }
    lbl_805DDF6C++;
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);
    if (lbl_805DDF7C) {
        lbl_805DDF7C(lbl_805DDF6C);
    }
    if (lbl_805DDF70) {
        if (lbl_805DDF98 != 1 || getCurrentFieldEvenOdd()) {
            while (lbl_805DDFA0) {
                int val = cntlzd(lbl_805DDFA0);
                __VIRegs[val] = ((u16*)(regs + 0x78))[val];
                lbl_805DDFA0 &= ~((u64)1 << (63 - val));
            }
            lbl_805DDF98 = 0;
            lbl_805DDFA8 = (u8*)*(u32*)(regs + 0x144);
            CurrTvMode = *(u32*)(regs + 0x118);
            lbl_805DDFB4 = lbl_805DDFB0;
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag) {
            lbl_805DDF70 = 0;
            SIRefreshSamplingRate();
        }
    }
    if (lbl_805DDF80) {
        OSClearContext(&exceptionContext);
        lbl_805DDF80(lbl_805DDF6C);
    }
    OSWakeupThread(lbl_805DDF74);
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
}

VIRetraceCallback VISetPreRetraceCallback(VIRetraceCallback callback)
{
    BOOL enabled;
    VIRetraceCallback old = lbl_805DDF7C;

    enabled = OSDisableInterrupts();
    lbl_805DDF7C = callback;
    OSRestoreInterrupts(enabled);
    return old;
}

VIRetraceCallback VISetPostRetraceCallback(VIRetraceCallback callback)
{
    BOOL enabled;
    VIRetraceCallback old = lbl_805DDF80;

    enabled = OSDisableInterrupts();
    lbl_805DDF80 = callback;
    OSRestoreInterrupts(enabled);
    return old;
}

void VIWaitForRetrace(void)
{
    BOOL enabled;
    u32 count;

    enabled = OSDisableInterrupts();
    count = lbl_805DDF6C;
    do {
        OSSleepThread(lbl_805DDF74);
    } while (count == lbl_805DDF6C);
    OSRestoreInterrupts(enabled);
}

u32 fn_803DF400(void)
{
    return lbl_805DDF6C;
}

static u32 getCurrentHalfLine(void)
{
    u32 hcount;
    u32 tmp;
    u32 vcount;

    vcount = __VIRegs[22] & 0x7FF;
    do {
        tmp = vcount;
        hcount = __VIRegs[23] & 0x7FF;
        vcount = __VIRegs[22] & 0x7FF;
    } while (tmp != vcount);
    return ((vcount - 1) << 1) + ((hcount - 1) / *(u16*)(lbl_805DDFA8 + 0x1a));
}

static u32 getCurrentFieldEvenOdd(void)
{
    if (getCurrentHalfLine() < *(u16*)(lbl_805DDFA8 + 0x18)) {
        return 1;
    }
    return 0;
}

u32 VIGetNextField(void)
{
    u32 nextField;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    nextField = getCurrentFieldEvenOdd() ^ 1;
    OSRestoreInterrupts(enabled);
    return nextField ^ (*(u16*)(lbl_8056E490 + 0xa) & 1);
}

u32 fn_803DF518(void)
{
    u32 halfLine;
    BOOL enabled;
    u8* tm;

    tm = lbl_805DDFA8;
    enabled = OSDisableInterrupts();
    halfLine = getCurrentHalfLine();
    OSRestoreInterrupts(enabled);
    if (halfLine >= *(u16*)(tm + 0x18)) {
        halfLine -= *(u16*)(tm + 0x18);
    }
    return halfLine >> 1;
}

u32 VIGetTvFormat(void)
{
    u32 format;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    switch (CurrTvMode) {
    case 0:
    case 3:
    case 6:
        format = 0;
        break;
    case 1:
    case 4:
        format = 1;
        break;
    case 2:
    case 5:
        format = CurrTvMode;
        break;
    }
    OSRestoreInterrupts(enabled);
    return format;
}

u32 fn_803DF618(void)
{
    u32 stat;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    stat = __VIRegs[55] & 3;
    OSRestoreInterrupts(enabled);
    return stat & 1;
}
