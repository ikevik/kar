#include "dolphin/types.h"
#include "functions.h"

extern u8 lbl_8058E398[];
extern u32 lbl_805DD120;
extern s32 lbl_805DD124;
extern s32 lbl_805DD128;
extern s32 lbl_805DD12C;
extern s32 lbl_805DD130;
extern u8* lbl_805DE438;
extern u32 lbl_805DE43C;
extern s16* lbl_805DE440;
extern s32 lbl_805DE444;
extern u32 lbl_805DE448;
extern s32 lbl_805DE44C;
extern s32 lbl_805DE454;

s32 fn_80442674(s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 AXDriverSetupAux(s32, s32, void*);

u8* fn_804407E0(u32 size)
{
    u8* ptr;
    u32 offset = lbl_805DE43C;
    u32 end = offset + size;
    lbl_805DE43C = end;
    ptr = lbl_805DE438 + offset;
    if (!(end < lbl_805DE448)) {
        __assert(__FILE__, 0x53, "AXDriver");
    }
    return ptr;
}

void fn_80440840(void)
{
}

s32 fn_80442A10(s32 a, s32 b, s32 c, s32 d, s32 idx)
{
    return fn_80442674(a, b, c, 0, 0, lbl_8058E398[idx], lbl_8058E398[idx + 0x40], d, idx);
}

s32 fn_8044262C(s32 a, s32 b, s32 c, s32 d)
{
    if (a < 0 || a > b || b > c || c > d || d >= 0x168) {
        return 0;
    }
    lbl_805DD124 = a;
    lbl_805DD128 = b;
    lbl_805DD12C = c;
    lbl_805DD130 = d;
    return 1;
}

s32 fn_80444374(s32 sel, s32 val)
{
    if (sel < 0 || sel > 1) {
        return 0;
    }
    if (val < 0 || val > 1) {
        return 0;
    }
    if (sel == 0) {
        lbl_805DD120 &= ~1;
        lbl_805DD120 |= val;
    } else {
        lbl_805DD120 &= ~2;
        lbl_805DD120 |= val << 1;
    }
    return 1;
}

s32 Audio_InitReverb(s32 a, s32 b, void* c, u8* d, u32 e)
{
    if (a < 0 || a > 1) {
        return 0;
    }
    if (b < 0 || b > 4 || (b != 0 && c == NULL)) {
        return 0;
    }
    lbl_805DE438 = d;
    lbl_805DE43C = 0;
    lbl_805DE448 = e;
    return AXDriverSetupAux(a, b, c);
}

s32 fn_80444984(s32 idx, s16 val)
{
    if (lbl_805DE440 == NULL) {
        return 0;
    }
    if (idx < 1 || lbl_805DE444 < idx) {
        return 0;
    }
    lbl_805DE440[idx] = val;
    return 1;
}

s32 fn_80444CB4(void)
{
    return lbl_805DE454;
}

s32 fn_80444CBC(void)
{
    return lbl_805DE44C;
}
