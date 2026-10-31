#include "dolphin/sdk_common.h"

typedef struct GXData {
    u16 vNum;
    u16 bpSentNot;
    u16 vLim;
    u8 pad06[2];
    u32 cpEnable;
    u32 cpStatus;
    u32 cpClr;
    u32 vcdLo;
    u32 vcdHi;
    u32 vatA[8];
    u32 vatB[8];
    u32 vatC[8];
    u32 lpSize;
    u32 matIdxA;
    u32 matIdxB;
    u32 indexBase[4];
    u32 indexStride[4];
    u32 ambColor[2];
    u32 matColor[2];
    u32 suTs0[8];
    u32 suTs1[8];
    u32 suScis0;
    u32 suScis1;
    u32 tref[8];
    u32 iref;
    u32 bpMask;
    u32 indTexScale0;
    u32 indTexScale1;
    u32 tevc[16];
    u32 teva[16];
    u32 tevKsel[8];
    u32 cmode0;
    u32 cmode1;
    u32 zmode;
    u32 peCtrl;
    u32 cpDispSrc;
    u32 cpDispSize;
    u32 cpDispStride;
    u32 cpDisp;
    u32 cpTexSrc;
    u32 cpTexSize;
    u32 cpTexStride;
    u32 cpTex;
    u8 cpTexZ;
    u8 pad201[3];
    u32 genMode;
    u32 texRegions[8][4];
    u32 texRegionsCI[4][4];
    u32 nextTexRgn;
    u32 nextTexRgnCI;
    u32 tlutRegions[20][4];
    u32 texRegionCallback;
    u32 tlutRegionCallback;
    u32 nrmType;
    u8 hasNrms;
    u8 hasBiNrms;
    u8 pad41e[2];
    u32 projType;
    f32 projMtx[6];
    f32 vp[6];
    u8 pad454[0x4F4 - 0x454];
    u32 dirtyState;
} GXData;

typedef struct GXFifoObj {
    u8 pad0[0xC];
    u32 hiWatermark;
    u32 loWatermark;
} GXFifoObj;

extern GXData* const gx;
extern volatile u16* __cpReg;
extern volatile u16* __peReg;
extern u32 lbl_805DDE30;
extern u32 lbl_805DDE34;

typedef union {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} WGPipe;

volatile WGPipe GXWGFifo : 0xCC008000;
#define GXWGFifo_u8 GXWGFifo.u8
#define GXWGFifo_u32 GXWGFifo.u32
#define GXWGFifo_f32 GXWGFifo.f32

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

void func_803CD214(f32* l, f32 x, f32 y, f32 z) {
    l[13] = -x;
    l[14] = -y;
    l[15] = -z;
}

void fn_803CBEC0(u32 a, u32 b) {
    __peReg[3] = (a << 8) | (b & 0xFF);
}

#define BP(v) do { GXWGFifo_u8 = 0x61; GXWGFifo_u32 = (v); gx->bpSentNot = 0; } while (0)

void __GXFifoReadEnable(void) {
    GXData* g = gx;
    g->cpEnable = (g->cpEnable & ~1) | 1;
    __cpReg[1] = g->cpEnable;
}

void __GXFifoReadDisable(void) {
    gx->cpEnable = gx->cpEnable & ~1;
    __cpReg[1] = gx->cpEnable;
}

void __GXFlushTextureState(void) {
    BP(gx->bpMask);
}

void fn_803CC5A0(void) {
    BP(gx->genMode);
}

void GXPixModeSync(void) {
    BP(gx->peCtrl);
}

u32* fn_803C85E8(u32 idx) {
    return idx >= 20 ? 0 : gx->tlutRegions[idx];
}


void fn_803CBED4(u32 a) {
    __peReg[4] = (a & ~0x4) | 4;
}

void fn_803CBFA8(u8 a, u8 b) {
    u32 t = a << 8;
    __peReg[2] = t | b;
}

u32 fn_803CE0CC(u32 v) {
    u32 old = gx->texRegionCallback;
    gx->texRegionCallback = v;
    return old;
}

u32 fn_803CE0E0(u32 v) {
    u32 old = gx->tlutRegionCallback;
    gx->tlutRegionCallback = v;
    return old;
}

void fn_803CBEE8(u8 a) {
    __peReg[1] = (__peReg[1] & ~0x10) | (a << 4);
}

void fn_803CBF8C(u8 a) {
    __peReg[1] = (__peReg[1] & ~0x8) | (a << 3);
}

void fn_803CBFBC(u8 a) {
    __peReg[1] = (__peReg[1] & ~0x4) | (a << 2);
}

void fn_803CCC5C(u32 a) {
    gx->cpDisp = (gx->cpDisp & ~0x180) | (a << 7);
}

void fn_803D0AF8(u32 a) {
    GXWGFifo_u8 = 0x10;
    GXWGFifo_u32 = 0x1005;
    GXWGFifo_u32 = a;
    gx->bpSentNot = 1;
}

#define BPF(field, v) do { u32 _v = (v); GXWGFifo_u8 = 0x61; GXWGFifo_u32 = _v; g->field = _v; g->bpSentNot = 0; } while (0)

#if 0 /* NONMATCHING: register allocation / li scheduling */
void fn_803CF874(u32 a) {
    gx->cmode0 = __rlwimi(gx->cmode0, a, 3, 28, 28);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = gx->cmode0;
    gx->bpSentNot = 0;
}

void fn_803CF8A0(u32 a) {
    u32 v = __rlwimi(gx->cmode0, a, 4, 27, 27);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = v;
    gx->cmode0 = v;
    gx->bpSentNot = 0;
}

void fn_803CFA20(u32 a) {
    u32 v = __rlwimi(gx->cmode0, a, 2, 29, 29);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = v;
    gx->cmode0 = v;
    gx->bpSentNot = 0;
}

#endif

void GXGetViewportv(f32* vp) {
    vp[0] = gx->vp[0];
    vp[1] = gx->vp[1];
    vp[2] = gx->vp[2];
    vp[3] = gx->vp[3];
    vp[4] = gx->vp[4];
    vp[5] = gx->vp[5];
}

void fn_803CAC04(void) {
    gx->vcdLo = 0;
    gx->vcdLo = (gx->vcdLo & ~0x600) | 0x200;
    gx->vcdHi = 0;
    gx->hasNrms = 0;
    gx->hasBiNrms = 0;
    gx->dirtyState |= 8;
}

void fn_803CF30C(u8 a) {
    gx->genMode = (gx->genMode & ~0x3C00) | ((a - 1) << 10);
    gx->dirtyState |= 4;
}

void fn_803CE9F4(u8 a) {
    gx->genMode = (gx->genMode & ~0x70000) | (a << 16);
    gx->dirtyState |= 6;
}

void fn_803CF900(u8 a) {
    gx->peCtrl = (gx->peCtrl & ~0x40) | (a << 6);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = gx->peCtrl;
    gx->bpSentNot = 0;
}

void fn_803CCF50(void) {
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = 0x550003FF;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = 0x560003FF;
    gx->bpSentNot = 0;
}
