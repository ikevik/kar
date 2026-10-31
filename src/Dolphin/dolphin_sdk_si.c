#include "dolphin/sdk_common.h"

#pragma inline_depth(1)

volatile u32 __SIRegs[] : 0xcc006400;
volatile u16 __VIRegs[] : 0xcc002000;

typedef void (*SICallback)(s32 chan, u32 sr, OSContext* context);

typedef struct SIPacket {
    s32 chan;
    u32* output;
    u32 outputBytes;
    u32* input;
    u32 inputBytes;
    SICallback callback;
    OSTime fire;
} SIPacket;

typedef struct SIComm {
    u32 tcint : 1;
    u32 tcintmsk : 1;
    u32 comerr : 1;
    u32 rdstint : 1;
    u32 rdstintmsk : 1;
    u32 pad2 : 3;
    u32 pad1 : 1;
    u32 outlen : 7;
    u32 pad1b : 1;
    u32 inlen : 7;
    u32 pad0 : 5;
    u32 channel : 2;
    u32 enable : 1;
} SIComm;

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
extern OSTime __OSGetSystemTime(void);
extern void OSSetAlarm(void* alarm, OSTime tick, void* handler);
extern void fn_803E96CC(void* alarm, OSContext* context);

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
static u32 InputBufferVcount[4];
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

BOOL fn_803E8E08(BOOL enable)
{
    BOOL enabled;
    BOOL rc;
    u32 reg;
    int i;

    enabled = OSDisableInterrupts();
    reg = __SIRegs[13];
    rc = (reg & 0x08000000) ? TRUE : FALSE;
    if (enable) {
        for (i = 0; i < 4; ++i) {
            InputBufferVcount[i] = 0;
        }
        reg |= 0x08000000;
    } else {
        reg &= ~0x08000000;
    }
    reg &= ~0x80000001;
    __SIRegs[13] = reg;
    OSRestoreInterrupts(enabled);
    return rc;
}

BOOL fn_803E8EA0(void* handler)
{
    BOOL enabled;
    int i;

    enabled = OSDisableInterrupts();
    for (i = 0; i < 4; ++i) {
        if (RDSTHandler[i] == handler) {
            OSRestoreInterrupts(enabled);
            return TRUE;
        }
    }
    for (i = 0; i < 4; ++i) {
        if (RDSTHandler[i] == 0) {
            RDSTHandler[i] = handler;
            fn_803E8E08(TRUE);
            OSRestoreInterrupts(enabled);
            return TRUE;
        }
    }
    OSRestoreInterrupts(enabled);
    return FALSE;
}

BOOL fn_803E8F6C(void* handler)
{
    BOOL enabled;
    int i;

    enabled = OSDisableInterrupts();
    for (i = 0; i < 4; ++i) {
        if (RDSTHandler[i] == handler) {
            RDSTHandler[i] = 0;
            for (i = 0; i < 4; ++i) {
                if (RDSTHandler[i] != 0) {
                    break;
                }
            }
            if (i == 4) {
                fn_803E8E08(FALSE);
            }
            OSRestoreInterrupts(enabled);
            return TRUE;
        }
    }
    OSRestoreInterrupts(enabled);
    return FALSE;
}

BOOL fn_803E9114(s32 chan, u32* output, u32 outputBytes, u32* input, u32 inputBytes,
                 SICallback callback)
{
    BOOL enabled;
    SIComm comm;
    u32 rounded;
    u32 i;
    u32 sr;

    enabled = OSDisableInterrupts();
    if (Si.chan != -1) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    sr = __SIRegs[14];
    sr &= (0x0F000000 >> (8 * chan));
    __SIRegs[14] = sr;
    Si.chan = chan;
    Si.callback = callback;
    Si.inputBytes = inputBytes;
    Si.input = input;
    rounded = (outputBytes + 3) / 4;
    for (i = 0; i < rounded; i++) {
        __SIRegs[32 + i] = output[i];
    }
    *(u32*)&comm = __SIRegs[13];
    comm.tcint = 1;
    comm.tcintmsk = callback ? 1 : 0;
    comm.outlen = (outputBytes == 128) ? 0 : outputBytes;
    comm.inlen = (inputBytes == 128) ? 0 : inputBytes;
    comm.channel = chan;
    comm.enable = 1;
    __SIRegs[13] = *(u32*)&comm;
    OSRestoreInterrupts(enabled);
    return TRUE;
}

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

extern BOOL fn_803E9114(s32 chan, u32* output, u32 outputBytes, u32* input, u32 inputBytes,
                        SICallback callback);

u32 fn_803E9608(s32 chan, void* data)
{
    BOOL rc;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    fn_803E9534(chan);
    rc = InputBufferValid[chan];
    InputBufferValid[chan] = FALSE;
    if (rc) {
        ((u32*)data)[0] = InputBuffer[chan][0];
        ((u32*)data)[1] = InputBuffer[chan][1];
    }
    OSRestoreInterrupts(enabled);
    return rc;
}


void fn_803E96CC(void* alarm_, OSContext* context)
{
    OSAlarm* alarm = alarm_;
    s32 chan = alarm - Alarm;
    SIPacket* packet = &Packet[chan];

    if (packet->chan != -1) {
        if (fn_803E9114(packet->chan, packet->output, packet->outputBytes, packet->input,
                        packet->inputBytes, packet->callback)) {
            packet->chan = -1;
        }
    }
}

BOOL SITransfer(s32 chan, u32* output, u32 outputBytes, u32* input, u32 inputBytes,
                SICallback callback, OSTime delay)
{
    BOOL enabled;
    OSTime now;
    OSTime fire;

    enabled = OSDisableInterrupts();
    if (Packet[chan].chan != -1 || Si.chan == chan) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    now = __OSGetSystemTime();
    if (delay == 0) {
        fire = now;
    } else {
        fire = XferTime[chan] + delay;
    }
    if (now < fire) {
        delay = fire - now;
        OSSetAlarm(&Alarm[chan], delay, fn_803E96CC);
    } else if (fn_803E9114(chan, output, outputBytes, input, inputBytes, callback)) {
        OSRestoreInterrupts(enabled);
        return TRUE;
    }
    Packet[chan].chan = chan;
    Packet[chan].output = output;
    Packet[chan].outputBytes = outputBytes;
    Packet[chan].input = input;
    Packet[chan].inputBytes = inputBytes;
    Packet[chan].callback = callback;
    Packet[chan].fire = fire;
    OSRestoreInterrupts(enabled);
    return TRUE;
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
