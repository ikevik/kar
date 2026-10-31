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

typedef struct CARDBlock {
    u8 pad[0x10c];
    void* diskID;
} CARDBlock;

void __CARDSetDiskID(void* diskID)
{
    u8* base = lbl_8056E4E8;
    CARDBlock* block = (CARDBlock*)base;
    block[0].diskID = diskID ? diskID : base + 0x220;
    block[1].diskID = diskID ? diskID : base + 0x220;
}

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

#pragma dont_inline reset
s32 CARDGetResultCode(s32 chan)
{
    u8* card;

    if (chan < 0 || chan >= 2) {
        return -128;
    }
    card = lbl_8056E4E8 + chan * 0x110;
    return *(s32*)(card + 4);
}
#pragma dont_inline on

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

extern s32 fn_803E55D8(s32 chan, s32* xfer, CARDCallback cb);

s32 fn_803E7610(s32 a, s32 b, s32 c, s32 d)
{
    s32 result = fn_803E73F0(a, b, c, d, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }
    return fn_803E3024(a);
}

s32 fn_803E7A88(s32* fileInfo, s32 b, s32 c, s32 d)
{
    s32 result = fn_803E7940((s32)fileInfo, b, c, d, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }
    return fn_803E3024(*fileInfo);
}

s32 fn_803E7E04(s32* fileInfo, s32 b, s32 c, s32 d)
{
    s32 result = fn_803E7CF0((s32)fileInfo, b, c, d, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }
    return fn_803E3024(*fileInfo);
}

s32 fn_803E8000(s32 a, s32 b)
{
    s32 result = fn_803E7EF0(a, b, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }
    return fn_803E3024(a);
}

s32 fn_803E84E0(s32 a, s32 b, s32 c)
{
    s32 result = fn_803E836C(a, b, c, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }
    return fn_803E3024(a);
}

s32 fn_803E8724(s32 a, s32 b, s32 c)
{
    s32 result = fn_803E8528(a, b, c, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }
    return fn_803E3024(a);
}

s32 fn_803E5B68(s32 chan)
{
    s32 x;
    s32 result = fn_803E55D8(chan, &x, __CARDSyncCallback);
    if (result >= 0 && &x != 0) {
        result = fn_803E3024(chan);
    }
    return result;
}

s32 fn_803E7264(s32* fileInfo)
{
    void* card;
    s32 result = __CARDGetControlBlock(*fileInfo, &card);
    if (result < 0) {
        return result;
    }
    *fileInfo = -1;
    return __CARDPutControlBlock(card, 0);
}

extern s32 fn_803E4E04(s32 chan);
extern s32 fn_803E5088(s32 chan, s32 a);
extern s32 fn_803E52C8(s32 chan, s32 a);
extern int EXIProbe(s32 chan);

s32 fn_803E554C(s32 chan)
{
    s32 result = fn_803E4E04(chan);
    s32 sum;
    s32 a;
    s32 b;

    if (result < 0) {
        return result;
    }
    a = fn_803E5088(chan, 0);
    b = fn_803E52C8(chan, 0);
    sum = a + b;
    switch (sum) {
    case 0:
        return 0;
    case 1:
        return -6;
    default:
        return -6;
    }
}

int fn_803E6E6C(u8* a, char* b)
{
    char* p = (char*)(a + 8);
    char c1;
    char c2;
    int i = 0x20;

    while (--i >= 0) {
        c1 = *p++;
        c2 = *b++;
        if (c1 != c2) {
            return 0;
        }
        if (c2 == 0) {
            return 1;
        }
    }
    if (*b == 0) {
        return 1;
    }
    return 0;
}

void __CARDUnlockedHandler(s32 chan, void* context)
{
    CARDCallback callback;
    u8* card = lbl_8056E4E8 + chan * 0x110;

    callback = *(CARDCallback*)(card + 0xdc);
    if (callback) {
        *(CARDCallback*)(card + 0xdc) = 0;
        callback(chan, EXIProbe(chan) ? 1 : -3);
    }
}

extern void OSSleepThread(void* queue);
extern u32 OSGetTick(void);
extern u32 lbl_805DC9F8;

#pragma dont_inline reset
s32 fn_803E3024(s32 chan)
{
    u8* card;
    int enabled;
    s32 result;

    card = lbl_8056E4E8 + chan * 0x110;
    enabled = OSDisableInterrupts();
    while ((result = CARDGetResultCode(chan)) == -1) {
        OSSleepThread(card + 0x8c);
    }
    OSRestoreInterrupts(enabled);
    return result;
}
#pragma dont_inline on
