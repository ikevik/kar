#include "dolphin/sdk_common.h"

typedef void (*PADSamplingCallback)(void);
typedef void (*SIPollHandler)(s16 interrupt, OSContext* context);

extern char lbl_804FC530[];
const char* __PADVersion = (const char*)lbl_804FC530;

extern void SISetSamplingRate(u32 msec);
extern u32 SIGetType(s32 chan);
extern BOOL fn_803E8EA0(void* handler);
extern BOOL fn_803E8F6C(void* handler);
extern void fn_803E939C(s32 chan, u32 command);
extern void fn_803E93B0(void);

extern void fn_803DCDB8(void);
extern void fn_803DCF2C(void);
extern void fn_803DD0A0(void);

static s32 ResettingChan = 0x20;
static u32 XPatchBits = 0xF0000000;
static u32 AnalogMode = 0x00000300;
static u32 Spec = 5;
static void (*MakeStatus)(void) = fn_803DD0A0;

typedef struct PADStatus {
    u16 button;
    s8 stickX;
    s8 stickY;
    s8 substickX;
    s8 substickY;
    u8 triggerL;
    u8 triggerR;
    u8 analogA;
    u8 analogB;
    s8 err;
} PADStatus;

typedef struct PADClampRegion {
    u8 minTrigger;
    u8 maxTrigger;
    s8 minStick;
    s8 maxStick;
    s8 xyStick;
    s8 minSubstick;
    s8 maxSubstick;
    s8 xySubstick;
    s8 radStick;
    s8 pad;
} PADClampRegion;

static const PADClampRegion ClampRegion = {30, 180, 15, 72, 40, 15, 59, 31, 56, 44};

void ClampStick(s8* px, s8* py, s8 max, s8 xy, s8 min)
{
    int x = *px;
    int y = *py;
    int signX;
    int signY;
    int d;

    if (0 <= x) {
        signX = 1;
    } else {
        signX = -1;
        x = -x;
    }

    if (0 <= y) {
        signY = 1;
    } else {
        signY = -1;
        y = -y;
    }

    if (x <= min) {
        x = 0;
    } else {
        x -= min;
    }

    if (y <= min) {
        y = 0;
    } else {
        y -= min;
    }

    if (x == 0 && y == 0) {
        *px = *py = 0;
        return;
    }

    if (xy * y <= xy * x) {
        d = xy * x + (max - xy) * y;
        if (xy * max < d) {
            x = (s8)(xy * max * x / d);
            y = (s8)(xy * max * y / d);
        }
    } else {
        d = xy * y + (max - xy) * x;
        if (xy * max < d) {
            x = (s8)(xy * max * x / d);
            y = (s8)(xy * max * y / d);
        }
    }

    *px = (s8)(signX * x);
    *py = (s8)(signY * y);
}

void PADClamp(PADStatus* status)
{
    int i;

    for (i = 0; i < 4; i++, status++) {
        if (status->err != 0) {
            continue;
        }

        ClampStick(&status->stickX, &status->stickY, ClampRegion.maxStick, ClampRegion.xyStick,
                   ClampRegion.minStick);
        ClampStick(&status->substickX, &status->substickY, ClampRegion.maxSubstick,
                   ClampRegion.xySubstick, ClampRegion.minSubstick);

        if (status->triggerL <= ClampRegion.minTrigger) {
            status->triggerL = 0;
        } else {
            if (ClampRegion.maxTrigger < status->triggerL) {
                status->triggerL = ClampRegion.maxTrigger;
            }
            status->triggerL -= ClampRegion.minTrigger;
        }

        if (status->triggerR <= ClampRegion.minTrigger) {
            status->triggerR = 0;
        } else {
            if (ClampRegion.maxTrigger < status->triggerR) {
                status->triggerR = ClampRegion.maxTrigger;
            }
            status->triggerR -= ClampRegion.minTrigger;
        }
    }
}

static u32 Initialized;
static u32 EnabledBits;
static u32 ResettingBits;
static u32 RecalibrateBits;
static u32 WaitingBits;
static u32 CheckingBits;
static u32 PendingBits;
static PADSamplingCallback SamplingCallback;
u32 __PADSpec;

void fn_803DCC94(u32 msec)
{
    SISetSamplingRate(msec);
}

void PADControlMotor(s32 chan, u32 command)
{
    BOOL enabled;
    u32 type;

    enabled = OSDisableInterrupts();
    if ((EnabledBits & (0x80000000 >> chan)) && !(SIGetType(chan) & 0x20000000)) {
        if (Spec < 2 && command == 2) {
            command = 0;
        }
        fn_803E939C(chan, 0x00400000 | AnalogMode | (command & 0x03));
        fn_803E93B0();
    }
    OSRestoreInterrupts(enabled);
}

void PADSetSpec(u32 spec)
{
    __PADSpec = 0;
    switch (spec) {
    case 0:
        MakeStatus = fn_803DCDB8;
        break;
    case 1:
        MakeStatus = fn_803DCF2C;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        MakeStatus = fn_803DD0A0;
        break;
    }
    Spec = spec;
}

void fn_803DD62C(s16 interrupt, OSContext* context)
{
    OSContext exceptionContext;

    if (SamplingCallback) {
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        SamplingCallback();
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

PADSamplingCallback fn_803DD68C(PADSamplingCallback callback)
{
    PADSamplingCallback prev;

    prev = SamplingCallback;
    SamplingCallback = callback;
    if (callback) {
        fn_803E8EA0(fn_803DD62C);
    } else {
        fn_803E8F6C(fn_803DD62C);
    }
    return prev;
}

BOOL __PADDisableRecalibration(BOOL disable)
{
    BOOL enabled;
    BOOL prev;

    enabled = OSDisableInterrupts();
    prev = (*(u8*)0x800030E3 & 0x40) ? TRUE : FALSE;
    *(u8*)0x800030E3 &= 0xBF;
    if (disable) {
        *(u8*)0x800030E3 |= 0x40;
    }
    OSRestoreInterrupts(enabled);
    return prev;
}

extern void UpdateOrigin(s32 chan);
extern void OSSetWirelessID(s32 chan, u16 id);
extern void fn_803E94C8(u32 mask);
extern void fn_803E9608(s32 chan, void* buf);
extern void fn_803E942C(u32 mask);
extern void fn_803E9D20(s32 chan, void* cb);
extern void fn_803DC06C(void);
extern u8 lbl_8056E360[];
extern void* memset(void*, int, u32);

void PADOriginUpdateCallback(s32 chan, u32 error, OSContext* context)
{
    u32 chanBit = 0x80000000 >> chan;
    u32 ec = EnabledBits;
    if (!(ec & chanBit)) {
        return;
    }
    if (!(error & 0xF)) {
        UpdateOrigin(chan);
    }
    if (error & 0x8) {
        BOOL enabled = OSDisableInterrupts();
        fn_803E94C8(chanBit);
        EnabledBits &= ~chanBit;
        WaitingBits &= ~chanBit;
        CheckingBits &= ~chanBit;
        PendingBits &= ~chanBit;
        OSSetWirelessID(chan, 0);
        OSRestoreInterrupts(enabled);
    }
}

void PADOriginCallback(s32 chan, u32 error, OSContext* context)
{
    if (!(error & 0xF)) {
        u8 buf[12];
        s32 rc;
        UpdateOrigin(ResettingChan);
        rc = ResettingChan;
        EnabledBits |= 0x80000000 >> rc;
        fn_803E9608(rc, buf);
        fn_803E939C(rc, AnalogMode | 0x00400000);
        fn_803E942C(EnabledBits);
    }
    ResettingChan = __cntlzw(ResettingBits);
    if (ResettingChan != 32) {
        ResettingBits &= ~(0x80000000 >> ResettingChan);
        memset(lbl_8056E360 + ResettingChan * 12, 0, 12);
        fn_803E9D20(ResettingChan, fn_803DC06C);
    }
}
