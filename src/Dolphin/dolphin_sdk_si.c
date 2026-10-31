#include "dolphin/sdk_common.h"

volatile u32 __SIRegs[] : 0xcc006400;
volatile u16 __VIRegs[] : 0xcc002000;

typedef void (*SICallback)(s32 chan, u32 sr, OSContext* context);

typedef struct SIPacket {
    s32 chan;
    u32 output;
    u32 outputBytes;
    void* input;
    u32 inputBytes;
    SICallback callback;
    OSTime fire;
} SIPacket;

typedef struct XY {
    u16 line;
    u8 count;
} XY;

extern char lbl_804FCBE0[];
const char* __SIVersion = (const char*)lbl_804FCBE0;

extern void* __OSSetInterruptHandler(s16 interrupt, void* handler);
extern s32 VIGetTvFormat(void);
extern void OSReport(const char* msg, ...);
extern u32 SIGetType(s32 chan);
extern u32 SISetXY(u32 x, u32 y);

static XY XYNTSC[12] = {
    {246, 2}, {15, 18}, {30, 9}, {44, 6}, {52, 5}, {65, 4},
    {87, 3},  {87, 3},  {87, 3}, {131, 2}, {131, 2}, {131, 2},
};
static XY XYPAL[12] = {
    {296, 2}, {15, 21}, {29, 11}, {45, 7}, {52, 6}, {63, 5},
    {78, 4},  {104, 3}, {104, 3}, {104, 3}, {104, 3}, {156, 2},
};

static char sSamplingMsg[] = "SISetSamplingRate: unknown TV format. Use default.\n";

static struct {
    s32 chan;
    u32 poll;
    u32 inputBytes;
    void* input;
    SICallback callback;
} Si = {-1, 0, 0, NULL, NULL};

static u32 Type[4] = {8, 8, 8, 8};

static SIPacket Packet[4];
typedef struct {
    u8 pad[0x28];
} OSAlarm;
static OSAlarm Alarm[4];
static OSTime TypeTime[4];
static OSTime XferTime[4];
static SICallback TypeCallback[4][4];
static void* RDSTHandler[4];
static BOOL InputBufferValid[4];
static u32 InputBuffer[4][2];
static u32 SamplingRate;

BOOL fn_803E876C(void)
{
    return (Si.chan != -1) ? TRUE : FALSE;
}

BOOL fn_803E878C(s32 chan)
{
    return ((Packet[chan].chan != -1) || (Si.chan == chan));
}

void fn_803E939C(s32 chan, u32 command)
{
    __SIRegs[chan * 3] = command;
}

void fn_803E93B0(void)
{
    __SIRegs[14] = 0x80000000;
}

#pragma dont_inline on
u32 SISetXY(u32 x, u32 y)
{
    u32 poll;
    BOOL enabled;

    poll = x << 16;
    poll |= y << 8;

    enabled = OSDisableInterrupts();
    Si.poll &= ~(0x03FFFF00);
    Si.poll |= poll;
    poll = Si.poll;
    __SIRegs[12] = poll;
    OSRestoreInterrupts(enabled);
    return poll;
}
#pragma dont_inline reset

u32 fn_803E942C(u32 poll)
{
    BOOL enabled;
    u32 en;

    if (poll == 0) {
        return Si.poll;
    }
    enabled = OSDisableInterrupts();
    poll >>= 24;
    en = (poll >> 4) & 0xf;
    Si.poll &= ~en;
    poll &= (en | 0x03FFFFF0);
    poll &= ~0x03FFFF00;
    Si.poll |= poll;
    poll = Si.poll;
    __SIRegs[14] = 0x80000000;
    __SIRegs[12] = poll;
    OSRestoreInterrupts(enabled);
    return poll;
}

u32 fn_803E94C8(u32 poll)
{
    BOOL enabled;

    if (poll == 0) {
        return Si.poll;
    }
    enabled = OSDisableInterrupts();
    poll = (poll >> 24) & 0xf0;
    poll = Si.poll & ~poll;
    __SIRegs[12] = poll;
    Si.poll = poll;
    OSRestoreInterrupts(enabled);
    return poll;
}

u32 fn_803E9320(s32 chan)
{
    BOOL enabled;
    u32 sr;

    enabled = OSDisableInterrupts();
    sr = __SIRegs[14];
    sr >>= (3 - chan) * 8;
    if (sr & 0x8) {
        if (!(Type[chan] & 0x80)) {
            Type[chan] = 0x8;
        }
    }
    OSRestoreInterrupts(enabled);
    return sr;
}

BOOL fn_803E9534(s32 chan)
{
    u32 sr;

    sr = fn_803E9320(chan);
    if (sr & 0x20) {
        InputBuffer[chan][0] = __SIRegs[chan * 3 + 1];
        InputBuffer[chan][1] = __SIRegs[chan * 3 + 2];
        InputBufferValid[chan] = TRUE;
        return TRUE;
    }
    return FALSE;
}

void SISetSamplingRate(u32 msec)
{
    XY* xy;
    BOOL enabled;

    if (msec > 11) {
        msec = 11;
    }
    enabled = OSDisableInterrupts();
    SamplingRate = msec;
    switch (VIGetTvFormat()) {
    case 0:
    case 2:
    case 5:
        xy = XYNTSC;
        break;
    case 1:
        xy = XYPAL;
        break;
    default:
        OSReport(sSamplingMsg);
        msec = 0;
        xy = XYNTSC;
        break;
    }
    SISetXY(((__VIRegs[54] & 1) ? 2 : 1) * xy[msec].line, xy[msec].count);
    OSRestoreInterrupts(enabled);
}

void SIRefreshSamplingRate(void)
{
    SISetSamplingRate(SamplingRate);
}

extern void SIInterruptHandler(s16 interrupt, OSContext* context);

void SIInit(void)
{
    OSRegisterVersion(__SIVersion);
    Packet[0].chan = Packet[1].chan = Packet[2].chan = Packet[3].chan = -1;
    Si.poll = 0;
    SISetSamplingRate(0);
    while (__SIRegs[13] & 1) {
    }
    __SIRegs[13] = 0x80000000;
    __OSSetInterruptHandler(20, SIInterruptHandler);
    __OSUnmaskInterrupts(0x800);
    SIGetType(0);
    SIGetType(1);
    SIGetType(2);
    SIGetType(3);
}
