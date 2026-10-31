#include "dolphin/sdk_common.h"

#pragma dont_inline on

typedef void (*MIXCb)(void*);

extern void* lbl_805DC978;
extern void* lbl_805DCA28;
extern MIXCb lbl_805DCA2C;
extern u8 lbl_80587A60[];

extern void fn_803D360C(void* a, u32 b);
extern void fn_803D3708(void* a, u32 b);
extern void HandleReverb(u32 a);
extern void fn_803F154C(void* p);
extern void fn_803F07B0(void* p);
extern void* fn_803EFFF0(void* p, f32 a, f32 b, f32 c, f32 d, f32 e);

void fn_803F1878(void* a, MIXCb b) {
    lbl_805DCA28 = a;
    lbl_805DCA2C = b;
}

void fn_803F2884(u32* p) {
    *(u32*)(lbl_80587A60 + p[6] * 0x60) = 0;
}

#pragma peephole on
void fn_803F1828(u32 a) {
    fn_803D360C(lbl_805DC978, a);
}

void fn_803F1850(u32 a) {
    fn_803D3708(lbl_805DC978, a);
}

#pragma peephole off
void fn_803F0964(u32* a, u8* b) {
    if (b[0x13C] == 0) {
        HandleReverb(a[0]);
    }
}

void fn_803F1750(u32* p) {
    BOOL en = OSDisableInterrupts();
    p[12] = 0;
    p[13] = 0;
    p[14] = 0;
    OSRestoreInterrupts(en);
    fn_803F154C(p);
}

u32 fn_803F0918(void* p) {
    BOOL en = OSDisableInterrupts();
    fn_803F07B0(p);
    OSRestoreInterrupts(en);
    return 1;
}

u32 fn_803F0F18(u32* p) {
    BOOL en = OSDisableInterrupts();
    lbl_805DCA2C((void*)p[0]);
    OSRestoreInterrupts(en);
    return 1;
}

void* fn_803F08AC(u8* p) {
    void* r;
    BOOL en;
    en = OSDisableInterrupts();
    p[0x13C] = 0;
    r = fn_803EFFF0(p, *(f32*)(p + 0x140), *(f32*)(p + 0x148), *(f32*)(p + 0x144), *(f32*)(p + 0x14C), *(f32*)(p + 0x150));
    OSRestoreInterrupts(en);
    return r;
}

extern s16 lbl_80501150[];
extern u32 lbl_805DE148;
extern u32 lbl_805DE14C;
extern u32 lbl_805DE150;
extern void fn_803F1884(void* vp);
#if 0 /* NONMATCHING: table address CSE */
#define T16(off, i) (*(s16*)(t + (i) * 2 + (off)))
#define T32(off, i) (*(s32*)(t + (i) * 4 + (off)))
void fn_803F1884(void* vp) {
    u32* p = vp;
    u8* t = (u8*)lbl_80501150;
    u32 a = p[5];
    u32 b = p[6];
    u32 ia = 0x7F - a;
    u32 ib = 0x7F - b;
    if (lbl_805DE150 == 3) {
        p[8] = T16(0x98C, a);
        p[9] = T16(0x98C, ia);
        p[10] = T16(0x98C, ib);
        p[11] = T16(0x98C, b);
        p[12] = T16(0xA8C, ia);
        p[13] = T16(0xA8C, a);
        return;
    }
    p[8] = T32(0x78C, a);
    p[9] = T32(0x78C, ia);
    p[10] = T32(0x78C, ib);
    p[11] = T32(0x78C, b);
}
#endif

#pragma peephole on
u32 fn_803F1798(u32* p) {
    BOOL en = OSDisableInterrupts();
    if (p[12] != 0) {
        lbl_805DCA2C((void*)p[12]);
    }
    if (p[13] != 0) {
        lbl_805DCA2C((void*)p[13]);
    }
    if (p[14] != 0) {
        lbl_805DCA2C((void*)p[14]);
    }
    OSRestoreInterrupts(en);
    return 1;
}
#pragma peephole off

u32 fn_803F0F68(u8* p) {
    BOOL en = OSDisableInterrupts();
    *(u32*)(p + 0x5C) = 0x140 - (*(u32*)(p + 0x90) - 5) * 32;
    *(u32*)(p + 0x58) = 0;
    *(u32*)(p + 0x5C) = (*(u32*)(p + 0x5C) + (p[0x24] - 1) * 0xA0) % 480;
    *(u32*)(p + 0x68) = (*(u32*)(p + 0x98) / 5 + 1) & ~1;
    *(u32*)(p + 0x64) = *(u32*)(p + 0x68) >> 1;
    *(u32*)(p + 0x60) = (*(u32*)(p + 0x94) << 16) / (*(u32*)(p + 0x68) * 5);
    OSRestoreInterrupts(en);
    return 1;
}


#if 0 /* NONMATCHING: loop codegen */
void fn_803F1940(void) {
    u8* ch = lbl_80587A60;
    s32 i;
    for (i = 0; i < 0x40; i++, ch += 0x60) {
        ((u32*)ch)[1] = 0x50000000;
        ((u32*)ch)[2] = 0;
        ((u32*)ch)[3] = -0x3C0;
        ((u32*)ch)[4] = -0x3C0;
        ((u32*)ch)[7] = 0;
        ((u32*)ch)[5] = 0x40;
        ((u32*)ch)[6] = 0x7F;
        ((s16*)ch)[0x2E] = 0;
        ((s16*)ch)[0x2C] = 0;
        ((s16*)ch)[0x2A] = 0;
        ((s16*)ch)[0x28] = 0;
        ((s16*)ch)[0x26] = 0;
        ((s16*)ch)[0x24] = 0;
        ((s16*)ch)[0x22] = 0;
        ((s16*)ch)[0x20] = 0;
        ((s16*)ch)[0x1E] = 0;
        ((s16*)ch)[0x1C] = 0;
        fn_803F1884(ch);
    }
    lbl_805DE148 = 0;
    lbl_805DE14C = 0;
    lbl_805DE150 = 1;
}
#endif
