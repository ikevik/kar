#include <dolphin/types.h>

#pragma dont_inline on

typedef void (*CARDCallback)(s32 chan, s32 result);

extern int OSDisableInterrupts(void);
extern int OSRestoreInterrupts(int level);
extern void OSWakeupThread(void* queue);

extern u8 lbl_8056E4E8[];
extern u16 lbl_805DE048;

extern s32 __CARDReadSegment(s32 chan, CARDCallback cb);
extern s32 __CARDWritePage(s32 chan, CARDCallback cb);
extern void fn_803E436C(s32 chan, s32 result);
extern void fn_803E44AC(s32 chan, s32 result);
extern s32 fn_803E3024(s32 chan);
extern s32 fn_803E65D0(s32 chan);
extern s32 fn_803E634C(s32 chan, s32 a, s32 b, CARDCallback cb);
extern s32 fn_803E73F0(s32 a, s32 b, s32 c, s32 d, CARDCallback cb);
extern s32 fn_803E7940(s32 a, s32 b, s32 c, s32 d, CARDCallback cb);
extern s32 fn_803E7CF0(s32 a, s32 b, s32 c, s32 d, CARDCallback cb);
extern s32 fn_803E7EF0(s32 a, s32 b, CARDCallback cb);
extern s32 fn_803E836C(s32 a, s32 b, s32 c, CARDCallback cb);
extern s32 fn_803E8528(s32 a, s32 b, s32 c, CARDCallback cb);
extern s32 fn_803E67C0(s32 chan, u16 enc, CARDCallback cb);
extern s32 __CARDGetControlBlock(s32 chan, void** pcard);

void __CARDDefaultApiCallback(void)
{
}

void __CARDSyncCallback(s32 chan, s32 result)
{
    OSWakeupThread(lbl_8056E4E8 + chan * 0x110 + 0x8c);
}

u16 __CARDGetFontEncode(void)
{
    return lbl_805DE048;
}

#if 0
void __CARDSetDiskID(void* diskID)
{
    *(void**)(lbl_8056E4E8 + 0x10c) = diskID ? diskID : lbl_8056E4E8 + 0x220;
    *(void**)(lbl_8056E4E8 + 0x21c) = diskID ? diskID : lbl_8056E4E8 + 0x220;
}
#endif

s32 __CARDPutControlBlock(u8* card, s32 result)
{
    int enabled = OSDisableInterrupts();
    if (*(s32*)(card + 0) != 0) {
        *(s32*)(card + 4) = result;
    } else if (*(s32*)(card + 4) == -1) {
        *(s32*)(card + 4) = result;
    }
    OSRestoreInterrupts(enabled);
    return result;
}

s32 CARDGetResultCode(s32 chan)
{
    if (chan < 0 || chan >= 2) {
        return -128;
    }
    return *(s32*)(lbl_8056E4E8 + chan * 0x110 + 4);
}

int fn_803E30BC(int x)
{
    if (x == 0) {
        if (fn_803E65D0(0) == -1 || fn_803E65D0(1) == -1) {
            return 0;
        }
    }
    return 1;
}

s32 fn_803E4448(s32 chan, void* addr, s32 offset, s32 length, CARDCallback cb)
{
    u8* card = lbl_8056E4E8 + chan * 0x110;
    if (*(s32*)card == 0) {
        return -3;
    }
    *(CARDCallback*)(card + 0xd4) = cb;
    *(s32*)(card + 0xac) = (u32)offset >> 9;
    *(void**)(card + 0xb0) = addr;
    *(s32*)(card + 0xb4) = length;
    return __CARDReadSegment(chan, fn_803E436C);
}

s32 fn_803E4588(s32 chan, void* addr, s32 offset, s32 length, CARDCallback cb)
{
    u8* card = lbl_8056E4E8 + chan * 0x110;
    if (*(s32*)card == 0) {
        return -3;
    }
    *(CARDCallback*)(card + 0xd4) = cb;
    *(s32*)(card + 0xac) = (u32)offset >> 7;
    *(void**)(card + 0xb0) = addr;
    *(s32*)(card + 0xb4) = length;
    return __CARDWritePage(chan, fn_803E44AC);
}

s32 fn_803E45EC(u8* p)
{
    return *(s32*)(p + 0x88);
}

s32 fn_803E49F0(u8* p)
{
    return *(s32*)(p + 0x84);
}

s32 fn_803E64EC(s32 chan, s32 a, s32 b)
{
    s32 result = fn_803E634C(chan, a, b, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }
    return fn_803E3024(chan);
}

s32 fn_803E6E18(s32 chan)
{
    s32 result = fn_803E67C0(chan, __CARDGetFontEncode(), __CARDSyncCallback);
    if (result < 0) {
        return result;
    }
    return fn_803E3024(chan);
}

s32 fn_803E6F6C(u8* p)
{
    if (p[0] == 0xff) {
        return -4;
    }
    if (p[0x34] & 4) {
        return 0;
    }
    return -10;
}

s32 fn_803E72B8(void)
{
    return 0;
}
