#include <dolphin/types.h>

extern void OSRegisterVersion(const char* version);
extern void OSWakeupThread(void* queue);
extern void __AXAllocInit(void);
extern void __AXVPBInit(void);
extern void __AXAuxInit(void);
extern void __AXOutInit(void);

extern const char* lbl_805DCA18;
extern u32* lbl_8056E9E8[];
extern u32* lbl_805DE080;
extern u32 lbl_805DE088;
extern u32 lbl_805DE08C;
extern s32 lbl_805DE090;
extern s32 lbl_805DE094;
extern u32 lbl_805DE0A8;
extern u32 lbl_805DE0AC;
extern u32 lbl_805DE0B0;
extern u32 lbl_805DE0B4;
extern u32 lbl_805DE0C0;
extern u8* lbl_805DE0C4;
extern s32 lbl_805DE0C8;
extern u32 lbl_805DE0CC;
extern u32 lbl_805DE0D0;
extern s32 lbl_805DE0E8;
extern s32 lbl_805DE0EC;
extern s32 lbl_805DE0F0;
extern u8 lbl_805DE0F8[8];
extern u32 lbl_805DE100;
extern u32 lbl_805DE104;
extern u32 lbl_805DE108;
extern u32 lbl_805DE10C;
extern u32 lbl_805DE110;
extern u32 lbl_805DE114;
extern u32 lbl_805DE118;
extern u32 lbl_805DE11C;
extern u32 lbl_805DE120;
extern s32 lbl_805DE130;
extern u8 lbl_8056EB00[];
extern u8 lbl_80570180[];
extern u8 lbl_80571800[];
extern u8 lbl_80576620[];
extern u8 lbl_80576660[];

void __AXSPBInit(void);
void __AXClInit(void);

void AXInitEx(void)
{
    OSRegisterVersion(lbl_805DCA18);
    __AXAllocInit();
    __AXVPBInit();
    __AXSPBInit();
    __AXAuxInit();
    __AXClInit();
    __AXOutInit();
}

u32* __AXGetStackHead(u32 stack)
{
    return lbl_8056E9E8[stack];
}

void __AXPushFreeStack(u32* p)
{
    u32** stack = lbl_8056E9E8;
    p[0] = (u32)stack[0];
    stack[0] = p;
    p[3] = 0;
}

void __AXPushCallbackStack(u32* p)
{
    p[2] = (u32)lbl_805DE080;
    lbl_805DE080 = p;
}

u32* __AXPopCallbackStack(void)
{
    u32* p = lbl_805DE080;
    if (p) {
        lbl_805DE080 = (u32*)p[2];
    }
    return p;
}

void fn_803EC608(u8** out)
{
    if (lbl_805DE088) {
        *out = lbl_8056EB00 + lbl_805DE0A8 * 0x780;
    } else {
        *out = 0;
    }
}

void fn_803EC63C(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0A8 * 0x780 + 0x500;
}

void fn_803EC65C(u8** out)
{
    *out = lbl_8056EB00 + lbl_805DE0AC * 0x780;
}

void fn_803EC678(u8** out)
{
    *out = lbl_8056EB00 + lbl_805DE0AC * 0x780 + 0x280;
}

void fn_803EC698(u8** out)
{
    *out = lbl_8056EB00 + lbl_805DE0AC * 0x780 + 0x500;
}

void fn_803EC6B8(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0AC * 0x780 + 0x500;
}

void fn_803EC6D8(u8** out)
{
    if (lbl_805DE08C) {
        *out = lbl_80570180 + lbl_805DE0A8 * 0x780;
    } else {
        *out = 0;
    }
}

void fn_803EC70C(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0AC * 0x780;
}

void fn_803EC728(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0B0 * 0x780;
}

void fn_803EC744(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0B4 * 0x780;
}

void fn_803EC99C(s32 a, s32 b)
{
    lbl_805DE088 = a;
    lbl_805DE090 = b;
}

void fn_803EC9A8(s32 a, s32 b)
{
    lbl_805DE08C = a;
    lbl_805DE094 = b;
}

s32 fn_803EC9B4(void)
{
    return lbl_805DE0C8;
}

u8* fn_803EC9BC(void)
{
    u8* p = lbl_80571800 + lbl_805DE0C0++ * 0x300;
    lbl_805DE0C0 &= 1;
    lbl_805DE0C4 = lbl_80571800 + lbl_805DE0C0 * 0x300;
    return p;
}

void __AXClInit(void)
{
    lbl_805DE0D0 = 0;
    lbl_805DE0C0 = 0;
    lbl_805DE0C4 = lbl_80571800;
    lbl_805DE0CC = 1;
}

void fn_803ED0CC(u32 v)
{
    if (lbl_805DE0D0 != v) {
        lbl_805DE0D0 = v;
    }
}

void fn_803ED2D0(void)
{
    lbl_805DE0EC = 1;
}

void fn_803ED334(void)
{
    lbl_805DE0F0 = 1;
    OSWakeupThread(lbl_805DE0F8);
}

void fn_803ED76C(s32 v)
{
    lbl_805DE0E8 = v;
}

u8* fn_803ED774(void)
{
    return lbl_80576620;
}

void __AXSPBInit(void)
{
    lbl_805DE120 = 0;
    lbl_805DE11C = 0;
    lbl_805DE118 = 0;
    lbl_805DE114 = 0;
    lbl_805DE110 = 0;
    lbl_805DE10C = 0;
    lbl_805DE108 = 0;
    lbl_805DE104 = 0;
    lbl_805DE100 = 0;
}

s32 fn_803EDC38(void)
{
    return lbl_805DE130;
}

u8* fn_803EE5B0(void)
{
    return lbl_80576660;
}

void fn_803EE5BC(u8* p)
{
    *(u16*)(p + 0x146) = 0;
    *(u16*)(p + 0x16e) = 0;
    *(u32*)(p + 0x1c) = 0xa4;
    *(u32*)(p + 0x28) = 0;
    *(u32*)(p + 0x24) = 0;
    *(u32*)(p + 0x30) = (u32)(p + 0x34);
    *(u16*)(p + 0x184) = 0;
    *(u16*)(p + 0x182) = 0;
    *(u16*)(p + 0x180) = 0;
    *(u16*)(p + 0x17e) = 0;
    *(u16*)(p + 0x17c) = 0;
}
