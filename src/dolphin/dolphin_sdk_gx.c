#include "dolphin/sdk_common.h"

#pragma dont_inline on

typedef struct GXData {
    u16 vNum;
    u16 bpSentNot;
    u16 vLim;
    u16 vSize;
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
    void* (*texRegionCallback)(void*, u32);
    void* (*tlutRegionCallback)(void*, u32);
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
    u32 base;
    u32 end;
    u32 size;
    u32 hiWatermark;
    u32 loWatermark;
    u32 rdPtr;
    u32 wrPtr;
    s32 count;
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

s32 fn_803CDC44(u32* obj) { return obj[5]; }

extern void GXInitFifoPtrs(GXFifoObj* fifo, u32 rd, u32 wr);
#pragma dont_inline on
void GXInitFifoLimits(GXFifoObj* fifo, u32 hi, u32 lo) {
    fifo->hiWatermark = hi;
    fifo->loWatermark = lo;
}
#pragma dont_inline reset

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

#pragma dont_inline on
void __GXFlushTextureState(void) {
    BP(gx->bpMask);
}
#pragma dont_inline reset

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

void* (*fn_803CE0CC(void* (*v)(void*, u32)))(void*, u32) {
    void* (*old)(void*, u32) = gx->texRegionCallback;
    gx->texRegionCallback = v;
    return old;
}

void* (*fn_803CE0E0(void* (*v)(void*, u32)))(void*, u32) {
    void* (*old)(void*, u32) = gx->tlutRegionCallback;
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

void fn_803CF874(u8 a) {
    u32 reg = gx->cmode0;
    reg = __rlwimi(reg, a, 3, 28, 28);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->cmode0 = reg;
    gx->bpSentNot = 0;
}

void fn_803CF8A0(u8 a) {
    u32 reg = gx->cmode0;
    reg = __rlwimi(reg, a, 4, 27, 27);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->cmode0 = reg;
    gx->bpSentNot = 0;
}

void fn_803CFA20(u8 a) {
    u32 reg = gx->cmode0;
    reg = __rlwimi(reg, a, 2, 29, 29);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->cmode0 = reg;
    gx->bpSentNot = 0;
}


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


typedef void (*GXCb)(void);
extern GXCb lbl_805DDE50;
extern GXCb lbl_805DDE54;

void fn_803CF8CC(u8 a, u8 b, u8 c) {
    u32 reg = gx->zmode;
    reg = __rlwimi(reg, a, 0, 31, 31);
    reg = __rlwimi(reg, b, 1, 28, 30);
    reg = __rlwimi(reg, c, 4, 27, 27);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->zmode = reg;
    gx->bpSentNot = 0;
}

void fn_803CFA88(u8 a, u8 b) {
    u32 reg = (b & ~2) | (a << 1);
    reg = (reg & 0xFFFFFF) | 0x44000000;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->bpSentNot = 0;
}

void fn_803CBFD8(u8 a, u32 b, u8 c) {
    u32 v = (a & ~0xE) | (b << 1);
    v = (v & ~0x10) | (c << 4);
    __peReg[0] = v;
}

void fn_803CC874(u32 a) {
    gx->cpDisp = (gx->cpDisp & ~0x3000) | (a << 12);
    gx->cpTex = gx->cpTex & ~0x3000;
}

void fn_803CD4A0(u8 a) {
    u32 reg = gx->genMode;
    u32 n = a;
    reg = (reg & ~0x70) | (n << 4);
    gx->genMode = reg;
    GXWGFifo_u8 = 0x10;
    GXWGFifo_u32 = 0x1009;
    GXWGFifo_u32 = n;
    gx->dirtyState |= 4;
}

void GXSetNumTexGens(u8 n) {
    u32 reg = gx->genMode;
    u32 nn = n;
    reg = (reg & ~0xF) | nn;
    gx->genMode = reg;
    GXWGFifo_u8 = 0x10;
    GXWGFifo_u32 = 0x103F;
    GXWGFifo_u32 = nn;
    gx->dirtyState |= 4;
}

void fn_803CEBE0(u32 idx, u32 a, u32 b, u32 c, u32 d) {
    u32 reg = gx->tevc[idx];
    reg = __rlwimi(reg, a, 12, 16, 19);
    reg = __rlwimi(reg, b, 8, 20, 23);
    reg = __rlwimi(reg, c, 4, 24, 27);
    reg = __rlwimi(reg, d, 0, 28, 31);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->tevc[idx] = reg;
    gx->bpSentNot = 0;
}

void fn_803CEC24(u32 idx, u32 a, u32 b, u32 c, u32 d) {
    u32 reg = gx->teva[idx];
    reg = __rlwimi(reg, a, 13, 16, 18);
    reg = __rlwimi(reg, b, 10, 19, 21);
    reg = __rlwimi(reg, c, 7, 22, 24);
    reg = __rlwimi(reg, d, 4, 25, 27);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->teva[idx] = reg;
    gx->bpSentNot = 0;
}

GXCb fn_803CC000(GXCb v) {
    GXCb old = lbl_805DDE50;
    BOOL en = OSDisableInterrupts();
    lbl_805DDE50 = v;
    OSRestoreInterrupts(en);
    return old;
}

GXCb fn_803CC0CC(GXCb v) {
    GXCb old = lbl_805DDE54;
    BOOL en = OSDisableInterrupts();
    lbl_805DDE54 = v;
    OSRestoreInterrupts(en);
    return old;
}

void fn_803D0AB8(u32 a, u32 b) {
    u32 x = (a + 0x156) >> 1;
    u32 y = (b + 0x156) >> 1;
    u32 reg = 0;
    reg = (reg & ~0x3FF) | x;
    reg = (reg & ~0xFFC00) | (y << 10);
    reg = (reg & 0xFFFFFF) | 0x59000000;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->bpSentNot = 0;
}

void fn_803CFA4C(u8 a, u8 b) {
    u32 reg = gx->cmode1;
    reg = __rlwimi(reg, b, 0, 24, 31);
    reg = __rlwimi(reg, a, 8, 23, 23);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = reg;
    gx->cmode1 = reg;
    gx->bpSentNot = 0;
}

void fn_803CC564(u8 a) {
    gx->genMode = (gx->genMode & ~0x80000) | (a << 19);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = 0xFE080000;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = gx->genMode;
}

#if 0 /* NONMATCHING */
void fn_803CC6E4(u32 a) {
    u32* p = &gx->cpDispStride;
    u32 reg;
    *p = 0;
    reg = gx->cpDispStride;
    reg = (reg & ~0x3FF) | (((s32)((a & 0x7FFF) << 1)) >> 5);
    *p = reg;
    *p = (*p & 0xFFFFFF) | 0x4D000000;
}
#endif

void __GXFifoLink(u8 a) {
    u32 en = a ? 1 : 0;
    gx->cpEnable = (gx->cpEnable & ~0x10) | (en << 4);
    __cpReg[1] = gx->cpEnable;
}

void __GXWriteFifoIntEnable(u8 a, u8 b) {
    gx->cpEnable = (gx->cpEnable & ~4) | (a << 2);
    gx->cpEnable = (gx->cpEnable & ~8) | (b << 3);
    __cpReg[1] = gx->cpEnable;
}

void __GXWriteFifoIntReset(u8 a, u8 b) {
    gx->cpClr = (gx->cpClr & ~1) | a;
    gx->cpClr = (gx->cpClr & ~2) | (b << 1);
    __cpReg[2] = gx->cpClr;
}

extern void fn_803CD7D4(void* obj, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
extern void fn_803CE568(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
extern void GXCPInterruptHandler(void);
extern void OSWakeupThread(void* queue);
extern void* OSGetCurrentThread(void);
extern void OSSleepThread(void* queue);
extern void* lbl_805DDE38;
extern u32 lbl_805DDE40;
extern u8 lbl_805DDE58;
extern u8 lbl_805DDE5C;

void fn_803CDA48(u8* obj, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 lod) {
    fn_803CD7D4(obj, b, c, d, e, f, g, h);
    obj[0x1F] &= ~2;
    *(u32*)(obj + 0x18) = lod;
}

void fn_803CEA1C(u32 a) {
    fn_803CE568(a, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void __GXFifoInit(void) {
    __OSSetInterruptHandler(0x11, GXCPInterruptHandler);
    __OSUnmaskInterrupts(0x4000);
    lbl_805DDE38 = OSGetCurrentThread();
    lbl_805DDE40 = 0;
    lbl_805DDE30 = 0;
    lbl_805DDE34 = 0;
}

void fn_803CBE50(void) {
    BOOL en = OSDisableInterrupts();
    while (!lbl_805DDE58) {
        OSSleepThread(&lbl_805DDE5C);
    }
    OSRestoreInterrupts(en);
}

void fn_803CC518(u32 n) {
    u32 v;
    switch (n) {
    case 1:
        v = 2;
        break;
    case 2:
        v = 1;
        break;
    default:
        v = n;
        break;
    }
    gx->genMode = (gx->genMode & ~0xC000) | (v << 14);
    gx->dirtyState |= 4;
}

void GXInvalidateTexAll(void) {
    __GXFlushTextureState();
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = 0x66001000;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = 0x66001100;
    __GXFlushTextureState();
}

void fn_803CDE38(u32* obj, u32 a, u32 b, u16 c) {
    obj[0] = 0;
    obj[0] = (obj[0] & ~0xC00) | (b << 10);
    obj[1] = (obj[1] & ~0x1FFFFF) | ((a & 0x3FFFFFFF) >> 5);
    obj[1] = (obj[1] & 0xFFFFFF) | 0x64000000;
    ((u16*)obj)[4] = c;
}

void GXInitTlutRegion(u32* t, u32 addr, u32 n) {
    t[0] = 0;
    t[0] = (t[0] & ~0x3FF) | ((addr - 0x80000) >> 9);
    t[0] = (t[0] & ~0x1FFC00) | (n << 10);
    t[0] = (t[0] & 0xFFFFFF) | 0x65000000;
}

void GXSetLineWidth(u8 w, u32 offs) {
    gx->lpSize = (gx->lpSize & ~0xFF) | w;
    gx->lpSize = (gx->lpSize & ~0x70000) | (offs << 16);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = gx->lpSize;
    gx->bpSentNot = 0;
}

void fn_803CC474(u8 w, u32 offs) {
    gx->lpSize = (gx->lpSize & ~0xFF00) | (w << 8);
    gx->lpSize = (gx->lpSize & ~0x380000) | (offs << 19);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = gx->lpSize;
    gx->bpSentNot = 0;
}

extern u32 lbl_805DDE44;
extern void GXSetViewportJitter(f32, f32, f32, f32, f32, f32, u32);
extern void fn_803D0B20(u32);
extern void __GXXfVtxSpecs(void);
extern void fn_803CDC4C(void*, void*, u32);

void func_803CD230(u32* a, u32* b) {
    a[3] = b[0];
}

u32 fn_803C9D94(u32 v) {
    u32 old = lbl_805DDE44;
    BOOL en = OSDisableInterrupts();
    lbl_805DDE44 = v;
    OSRestoreInterrupts(en);
    return old;
}

void GXSetViewport(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f) {
    GXSetViewportJitter(a, b, c, d, e, f, 1);
}

void GXSetCurrentMtx(u32 id) {
    gx->matIdxA = (gx->matIdxA & ~0x3F) | id;
    fn_803D0B20(0);
}

void fn_803CA848(void) {
    GXWGFifo_u8 = 8;
    GXWGFifo_u8 = 0x50;
    GXWGFifo_u32 = gx->vcdLo;
    GXWGFifo_u8 = 8;
    GXWGFifo_u8 = 0x60;
    GXWGFifo_u32 = gx->vcdHi;
    __GXXfVtxSpecs();
}

void fn_803CDDE4(void* obj, u32 map) {
    void* region = gx->texRegionCallback(obj, map);
    fn_803CDC4C(obj, region, map);
}

void fn_803CEF6C(u32 idx, u32 a, u32 b) {
    u32* p = &gx->teva[idx];
    *p = (*p & ~3) | a;
    *p = (*p & ~0xC) | (b << 2);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = *p;
    gx->bpSentNot = 0;
}

void fn_803CC4BC(u32 idx, u8 a, u8 b) {
    gx->suTs0[idx] = (gx->suTs0[idx] & ~0x40000) | (a << 18);
    gx->suTs0[idx] = (gx->suTs0[idx] & ~0x80000) | (b << 19);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = gx->suTs0[idx];
    gx->bpSentNot = 0;
}

void fn_803CC89C(u32 a) {
    u8 t0 = (a & 1) == 1;
    u8 t1 = (a & 2) == 2;
    gx->cpDisp = (gx->cpDisp & ~1) | t0;
    gx->cpDisp = (gx->cpDisp & ~2) | (t1 << 1);
    gx->cpTex = (gx->cpTex & ~1) | t0;
    gx->cpTex = (gx->cpTex & ~2) | (t1 << 1);
}

#if 0 /* NONMATCHING: instruction order */
void fn_803CC9CC(u8* c, u32 z) {
    u32 reg;
    z = z & 0xFFFFFF;
    reg = __rlwimi(c[3] << 8, c[0], 0, 24, 31);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = (reg & 0xFFFFFF) | 0x4F000000;
    reg = __rlwimi(c[1] << 8, c[2], 0, 24, 31);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = (reg & 0xFFFFFF) | 0x50000000;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = z | 0x51000000;
    gx->bpSentNot = 0;
}
#endif

#if 0 /* NONMATCHING */
void GXInitFifoBase(GXFifoObj* fifo, u32 base, u32 size) {
    fifo->base = base;
    fifo->end = base + size - 4;
    fifo->size = size;
    fifo->count = 0;
    GXInitFifoLimits(fifo, size - 0x4000, (size >> 1) & 0x7FFFFFE0);
    GXInitFifoPtrs(fifo, base, base);
}
#endif

void GXInitFifoPtrs(GXFifoObj* fifo, u32 rd, u32 wr) {
    BOOL en = OSDisableInterrupts();
    fifo->rdPtr = rd;
    fifo->wrPtr = wr;
    fifo->count = wr - rd;
    if (fifo->count < 0) {
        fifo->count += fifo->size;
    }
    OSRestoreInterrupts(en);
}

void fn_803CEE94(s32 idx, u32 v) {
    u32* p = &gx->tevKsel[idx >> 1];
    if (idx & 1) {
        *p = (*p & ~0x7C000) | (v << 14);
    } else {
        *p = (*p & ~0x1F0) | (v << 4);
    }
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = *p;
    gx->bpSentNot = 0;
}

void fn_803CEF00(s32 idx, u32 v) {
    u32* p = &gx->tevKsel[idx >> 1];
    if (idx & 1) {
        *p = (*p & ~0xF80000) | (v << 19);
    } else {
        *p = (*p & ~0x3E00) | (v << 9);
    }
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = *p;
    gx->bpSentNot = 0;
}

#if 0 /* NONMATCHING */
void fn_803CEC68(u32 idx, s32 op, u32 bias, u32 scale, u32 clamp, u32 out) {
    u32 reg = gx->tevc[idx];
    reg = __rlwimi(reg, op, 18, 13, 13);
    if (op <= 1) {
        reg = __rlwimi(reg, scale, 20, 10, 11);
        reg = __rlwimi(reg, bias, 16, 14, 15);
    } else {
        reg = __rlwimi(reg, op, 19, 10, 11);
        reg = __rlwimi(reg, 3, 16, 14, 15);
    }
    GXWGFifo_u8 = 0x61;
    reg = __rlwimi(reg, clamp, 19, 12, 12);
    reg = __rlwimi(reg, out, 22, 8, 9);
    GXWGFifo_u32 = reg;
    gx->tevc[idx] = reg;
    gx->bpSentNot = 0;
}
#endif

#if 0 /* NONMATCHING */
void fn_803CECD0(u32 idx, s32 op, u32 bias, u32 scale, u32 clamp, u32 out) {
    u32 reg = gx->teva[idx];
    reg = __rlwimi(reg, op, 18, 13, 13);
    if (op <= 1) {
        reg = __rlwimi(reg, scale, 20, 10, 11);
        reg = __rlwimi(reg, bias, 16, 14, 15);
    } else {
        reg = __rlwimi(reg, op, 19, 10, 11);
        reg = __rlwimi(reg, 3, 16, 14, 15);
    }
    GXWGFifo_u8 = 0x61;
    reg = __rlwimi(reg, clamp, 19, 12, 12);
    reg = __rlwimi(reg, out, 22, 8, 9);
    GXWGFifo_u32 = reg;
    gx->teva[idx] = reg;
    gx->bpSentNot = 0;
}
#endif

void fn_803CF820(u32 type, u32 src, u32 dst, u32 op) {
    u32 reg = gx->cmode0;
    reg = __rlwimi(reg, type == 3, 11, 20, 20);
    reg = __rlwimi(reg, type, 0, 31, 31);
    reg = __rlwimi(reg, type == 2, 1, 30, 30);
    reg = __rlwimi(reg, op, 12, 16, 19);
    reg = __rlwimi(reg, src, 8, 21, 23);
    GXWGFifo_u8 = 0x61;
    reg = __rlwimi(reg, dst, 5, 24, 26);
    GXWGFifo_u32 = reg;
    gx->cmode0 = reg;
    gx->bpSentNot = 0;
}

#if 0 /* NONMATCHING */
void fn_803CF05C(u32 a, u8 b, u32 c, u32 d, u32 e) {
    u32 reg = b | 0xF3000000;
    reg = (reg & ~0xFF00) | ((e << 8) & 0xFF00);
    reg = (reg & ~0x70000) | (a << 16);
    reg = (reg & ~0x380000) | (d << 19);
    GXWGFifo_u8 = 0x61;
    reg = (reg & ~0xC00000) | (c << 22);
    GXWGFifo_u32 = reg;
    gx->bpSentNot = 0;
}
#endif

extern void fn_803CC214(void);
extern void fn_803CC3A4(void);
extern void fn_803CB3A8(u32 a, u32 i, u32* p1, u32* p2, u32* p3);

void fn_803D0384(u32 a, u32 b) {
    if (gx->dirtyState != 0) {
        fn_803CC214();
    }
    if (*(u32*)gx == 0) {
        fn_803CC3A4();
    }
    GXWGFifo_u8 = 0x40;
    GXWGFifo_u32 = a;
    GXWGFifo_u32 = b;
}

void fn_803CB628(u32 a, u32* out) {
    s32 i;
    for (i = 9; i <= 20; i++) {
        out[0] = i;
        fn_803CB3A8(a, i, &out[1], &out[2], &out[3]);
        out += 4;
    }
    out[0] = 0xFF;
}

#if 0 /* NONMATCHING */
void fn_803CED38(u32 idx, u8* c) {
    u32 a = c[3];
    u32 r = c[0];
    u32 b = c[2];
    u32 g = c[1];
    u32 r1 = __rlwimi(a << 12, r, 0, 24, 31);
    u32 r2 = __rlwimi(g << 12, b, 0, 24, 31);
    u32 w1 = __rlwimi((0xE0 + idx * 2) << 24, r1, 0, 12, 31);
    u32 w2 = __rlwimi((0xE1 + idx * 2) << 24, r2, 0, 12, 31);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w1;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w2;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w2;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w2;
    gx->bpSentNot = 0;
}
#endif

#if 0 /* NONMATCHING */
void fn_803CEDAC(u32 idx, s16* c) {
    u32 r1 = __rlwimi((c[3] & 0x7FF) << 12, c[0], 0, 21, 31);
    u32 r2 = __rlwimi((c[1] & 0x7FF) << 12, c[2], 0, 21, 31);
    u32 w1 = __rlwimi((0xE0 + idx * 2) << 24, r1, 0, 9, 31);
    u32 w2 = __rlwimi((0xE1 + idx * 2) << 24, r2, 0, 9, 31);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w1;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w2;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w2;
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w2;
    gx->bpSentNot = 0;
}
#endif

#if 0 /* NONMATCHING */
void fn_803CEE20(u32 idx, u8* c) {
    u32 r1 = __rlwimi(c[3] << 12, c[0], 0, 24, 31);
    u32 r2 = __rlwimi(c[1] << 12, c[2], 0, 24, 31);
    u32 w1, w2;
    r1 = (r1 & ~0xF00000) | 0x800000;
    w1 = __rlwimi((0xE0 + idx * 2) << 24, r1, 0, 8, 31);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w1;
    r2 = (r2 & ~0xF00000) | 0x800000;
    w2 = __rlwimi((0xE1 + idx * 2) << 24, r2, 0, 8, 31);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = w2;
    gx->bpSentNot = 0;
}
#endif

#if 0 /* NONMATCHING */
void* __GXDefaultTexRegionCallback(void* obj, u32 map) {
    s32 fmt = fn_803CDC44(obj);
    if (fmt == 8 || fmt == 9 || fmt == 10) {
        return gx->texRegionsCI[gx->nextTexRgnCI++ & 3];
    }
    return gx->texRegions[gx->nextTexRgn++ & 7];
}
#endif

void fn_803CFAC0(u8 a, u8 b) {
    gx->lpSize = (gx->lpSize & ~0x400000) | (b << 22);
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = gx->lpSize;
    __GXFlushTextureState();
    GXWGFifo_u8 = 0x61;
    GXWGFifo_u32 = a | 0x68000000;
    __GXFlushTextureState();
}

void fn_803CC110(s16 interrupt, OSContext* ctx) {
    OSContext tmp;
    __peReg[5] = (__peReg[5] & ~8) | 8;
    lbl_805DDE58 = 1;
    if (lbl_805DDE54) {
        OSClearContext(&tmp);
        OSSetCurrentContext(&tmp);
        lbl_805DDE54();
        OSClearContext(&tmp);
        OSSetCurrentContext(ctx);
    }
    OSWakeupThread(&lbl_805DDE5C);
}

void fn_803CC044(s16 interrupt, OSContext* ctx) {
    OSContext tmp;
    u16 token = __peReg[7];
    if (lbl_805DDE50) {
        OSClearContext(&tmp);
        OSSetCurrentContext(&tmp);
        ((void (*)(u16))lbl_805DDE50)(token);
        OSClearContext(&tmp);
        OSSetCurrentContext(ctx);
    }
    __peReg[5] = (__peReg[5] & ~4) | 4;
}

void fn_803CC3A4(void) {
    u32 i;
    u32 n = gx->vLim * gx->vSize;
    GXWGFifo_u8 = 0x98;
    GXWGFifo.u16 = gx->vLim;
    for (i = 0; i < n; i += 4) {
        GXWGFifo_u32 = 0;
    }
    gx->bpSentNot = 1;
}

void GXSetArray(s32 attr, u32 base, u8 stride) {
    s32 idx;
    s32 a;
    if (attr == 0x19) {
        attr = 10;
    }
    a = attr - 9;
    base &= 0x3FFFFFFF;
    GXWGFifo_u8 = 8;
    GXWGFifo_u8 = a | 0xA0;
    GXWGFifo_u32 = base;
    idx = a - 12;
    if (idx >= 0 && idx < 4) {
        gx->indexBase[idx] = base;
    }
    GXWGFifo_u8 = 8;
    GXWGFifo_u8 = a | 0xB0;
    GXWGFifo_u32 = stride;
    idx = a - 12;
    if (idx >= 0 && idx < 4) {
        gx->indexStride[idx] = stride;
    }
}
