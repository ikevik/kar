#include "dolphin/sdk_common.h"

typedef struct GXData {
    u16 vNum;
    u16 bpSentNot;
    u16 vLim;
    u8 pad06[2];
    u32 cpEnable;
    u32 cpStatus;
    u32 cpClr;
    u8 pad14[0x1D0 - 0x14];
    u32 cmode0;
    u32 cmode1;
    u32 zmode;
    u32 peCtrl;
    u32 cpDispSrc;
    u32 cpDispSize;
    u32 cpDispStride;
    u32 cpDisp;
    u8 pad1F0[0x410 - 0x1F0];
    u32 texRegionCallback;
    u32 tlutRegionCallback;
} GXData;

typedef struct GXFifoObj {
    u8 pad0[0xC];
    u32 hiWatermark;
    u32 loWatermark;
} GXFifoObj;

extern GXData* gx;
extern volatile u16* __cpReg;
extern volatile u16* __peReg;
extern u32 lbl_805DDE30;
extern u32 lbl_805DDE34;

volatile u8 GXWGFifo_u8 : 0xCC008000;
volatile u32 GXWGFifo_u32 : 0xCC008000;

void fn_803CF058(void) {}

void fn_803D0380(void) {}

u32 fn_803CA01C(void) { return lbl_805DDE30; }

u32 fn_803CA024(void) { return lbl_805DDE34; }

u32 fn_803CDC44(u32* obj) { return obj[5]; }

void GXInitFifoLimits(GXFifoObj* fifo, u32 hi, u32 lo) {
    fifo->hiWatermark = hi;
    fifo->loWatermark = lo;
}

void GXInvalidateVtxCache(void) {
    GXWGFifo_u8 = 0x48;
}

void fn_803CD204(f32* l, f32 x, f32 y, f32 z) {
    l[10] = x;
    l[11] = y;
    l[12] = z;
}

u32 fn_803CDC24(u32* obj) {
    return (obj[2] & 0x3FF) + 1;
}

u32 fn_803CDC34(u32* obj) {
    return ((obj[2] >> 10) & 0x3FF) + 1;
}

void fn_803D13EC(void) {
    __cpReg[2] = 4;
}

void GXInitLightAttn(f32* l, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2) {
    l[4] = a0;
    l[5] = a1;
    l[6] = a2;
    l[7] = k0;
    l[8] = k1;
    l[9] = k2;
}

void fn_803CD214(f32* l, f32 x, f32 y, f32 z) {
    l[13] = -x;
    l[14] = -y;
    l[15] = -z;
}

void fn_803CBEC0(u32 a, u32 b) {
    __peReg[3] = (a << 8) | (b & 0xFF);
}
