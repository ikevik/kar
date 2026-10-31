#include "dolphin/types.h"

void fn_803F3920(void)
{
}

void fn_803F3924(void)
{
}

int fn_803F3928(void)
{
    return 0;
}

int fn_803F3930(void)
{
    return 0;
}

int fn_803F3938(void)
{
    return 0;
}

void fn_803F3940(void)
{
}

void fn_803F3944(void)
{
}

int AMC_IsStub(void)
{
    return 1;
}

void fn_803F3950(void)
{
}

void fn_803F3954(void)
{
}

typedef void (*HuCallback)(int a);

extern int OSDisableInterrupts(void);
extern int OSRestoreInterrupts(int level);
extern u32 __OSMaskInterrupts(u32 mask);
extern u32 __OSUnmaskInterrupts(u32 mask);
extern void* __OSSetInterruptHandler(s16 interrupt, void* handler);
volatile u32 __PIRegs[] : 0xcc003000;
volatile u32 __EXIRegsHu[] : 0xcc006800;

HuCallback lbl_805DE158;
HuCallback lbl_805DE15C;
u8* lbl_805DE168;
u8 lbl_805DE16C;

int Hu_IsStub(void)
{
    return 0;
}

void fn_803F3DEC(void)
{
    lbl_805DE16C = 1;
    if (lbl_805DE158) {
        lbl_805DE158(0);
    }
}

void fn_803F3DAC(s16 interrupt, void* context)
{
    __PIRegs[0] = 0x1000;
    if (lbl_805DE15C) {
        lbl_805DE15C(interrupt);
    }
}

void fn_803F3CE0(void)
{
    __OSMaskInterrupts(0x18000);
    __OSMaskInterrupts(0x40);
    lbl_805DE15C = (HuCallback)fn_803F3DEC;
    __OSSetInterruptHandler(0x19, fn_803F3DAC);
    __OSUnmaskInterrupts(0x40);
}

void fn_803F3D34(u8** a, HuCallback cb)
{
    int enabled;

    enabled = OSDisableInterrupts();
    lbl_805DE168 = &lbl_805DE16C;
    *a = lbl_805DE168;
    lbl_805DE158 = cb;
    __OSMaskInterrupts(0x18000);
    __EXIRegsHu[10] = 0;
    OSRestoreInterrupts(enabled);
}

extern void fn_803F3FB0(u32 a, void* b, u32 c);
extern int fn_803F3E28(u32* out);
extern void fn_803F408C(u32* out);
u32 lbl_805DE160;
s32 lbl_805DE164;

int fn_803F3BB8(void* a, int len)
{
    int enabled;
    u32 flag;

    enabled = OSDisableInterrupts();
    flag = (lbl_805DE160 & 0x10000) ? 0x1000 : 0;
    fn_803F3FB0(flag + 0x1E000, a, (len + 3) & ~3);
    lbl_805DE164 = 0;
    lbl_805DE16C = 0;
    OSRestoreInterrupts(enabled);
    return 0;
}

s32 fn_803F3C44(void)
{
    int enabled;
    u32 x;

    lbl_805DE16C = 0;
    if (lbl_805DE164 == 0) {
        enabled = OSDisableInterrupts();
        fn_803F3E28(&x);
        if (x & 1) {
            fn_803F408C(&x);
            x &= 0x1FFFFFFF;
            if ((x & 0x1F000000) == 0x1F000000) {
                lbl_805DE160 = x;
                lbl_805DE164 = x & 0x7FFF;
                lbl_805DE16C = 1;
            }
        }
        OSRestoreInterrupts(enabled);
    }
    return lbl_805DE164;
}

extern int fn_803F4138(void* buf, int len, int type);

int fn_803F3E28(u32* out)
{
    int err;
    u32 cmd;

    __EXIRegsHu[10] = (__EXIRegsHu[10] & 0x405) | 0xC0;
    cmd = 0x40000000;
    err = !fn_803F4138(&cmd, 2, 1);
    while (__EXIRegsHu[13] & 1) {
    }
    err |= !fn_803F4138(out, 4, 0);
    while (__EXIRegsHu[13] & 1) {
    }
    __EXIRegsHu[10] = __EXIRegsHu[10] & 0x405;
    return !err;
}
