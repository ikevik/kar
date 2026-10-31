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
