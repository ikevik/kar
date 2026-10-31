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
