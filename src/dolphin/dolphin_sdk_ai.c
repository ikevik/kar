#include "dolphin/sdk_common.h"

volatile u16 __DSPRegs[] : 0xcc005000;
volatile u32 __AIRegs[] : 0xcc006c00;

typedef void (*AIDCallback)(void);
typedef void (*AISCallback)(u32 count);

extern char lbl_804FC910[];
const char* __AIVersion = (const char*)lbl_804FC910;

static AISCallback __AIS_Callback;
static AIDCallback __AID_Callback;
static u8* __CallbackStack;
static u8* __OldStack;
static volatile BOOL __AI_init_flag;
static volatile BOOL __AID_Active;
static s64 bound_32KHz;
static s64 bound_48KHz;
static s64 min_wait;
static s64 max_wait;
static s64 buffer;
AIDCallback lbl_805DE000;

static void __AISHandler(s16 interrupt, OSContext* context);
static void fn_803DFC50(s16 interrupt, OSContext* context);
static void __AICallbackStackSwitch(register AIDCallback cb);
static void __AI_SRC_INIT(void);
u32 AIGetStreamPlayState(void);
u32 AIGetStreamSampleRate(void);
u32 AIGetDSPSampleRate(void);
u8 AIGetStreamPlayState_2(void);
u8 AIGetStreamPlayState_3(void);
void AISetStreamVolLeft(u8 volume);
void AISetStreamVolRight(u8 volume);

AIDCallback AIRegisterDMACallback(AIDCallback callback)
{
    BOOL oldInts;
    AIDCallback old;

    old = __AID_Callback;
    oldInts = OSDisableInterrupts();
    __AID_Callback = callback;
    OSRestoreInterrupts(oldInts);
    return old;
}

void AIInitDMA(u32 addr, u32 length)
{
    BOOL oldInts = OSDisableInterrupts();
    __DSPRegs[24] = (u16)((__DSPRegs[24] & ~0x3ff) | (addr >> 16));
    __DSPRegs[25] = (u16)((__DSPRegs[25] & ~0xffe0) | (addr & 0xffff));
    __DSPRegs[27] = (u16)((__DSPRegs[27] & ~0x7fff) | ((length >> 5) & 0xffff));
    OSRestoreInterrupts(oldInts);
}

void AIStartDMA(void)
{
    __DSPRegs[27] |= 0x8000;
}

void AIStopDMA(void)
{
    __DSPRegs[27] &= ~0x8000;
}

void AISetStreamPlayState(u32 state)
{
    BOOL oldInts;
    u8 volRight;
    u8 volLeft;

    if (state == AIGetStreamPlayState()) {
        return;
    }
    if (AIGetStreamSampleRate() == 0 && state == 1) {
        volRight = AIGetStreamPlayState_3();
        volLeft = AIGetStreamPlayState_2();
        AISetStreamVolRight(0);
        AISetStreamVolLeft(0);
        oldInts = OSDisableInterrupts();
        __AI_SRC_INIT();
        __AIRegs[0] = (__AIRegs[0] & ~0x20) | 0x20;
        __AIRegs[0] = (__AIRegs[0] & ~1) | 1;
        OSRestoreInterrupts(oldInts);
        AISetStreamVolLeft(volRight);
        AISetStreamVolRight(volLeft);
    } else {
        __AIRegs[0] = (__AIRegs[0] & ~1) | state;
    }
}

u32 AIGetStreamPlayState(void)
{
    return __AIRegs[0] & 1;
}

void AISetDSPSampleRate(u32 rate)
{
    BOOL oldInts;
    u8 left;
    u8 right;
    u32 state;
    u32 streamRate;

    if (rate == AIGetDSPSampleRate()) {
        return;
    }
    __AIRegs[0] &= ~0x40;
    if (rate == 0) {
        left = AIGetStreamPlayState_2();
        right = AIGetStreamPlayState_3();
        state = AIGetStreamPlayState();
        streamRate = AIGetStreamSampleRate();
        AISetStreamVolLeft(0);
        AISetStreamVolRight(0);
        oldInts = OSDisableInterrupts();
        __AI_SRC_INIT();
        __AIRegs[0] = (__AIRegs[0] & ~0x20) | 0x20;
        __AIRegs[0] = (__AIRegs[0] & ~2) | (streamRate << 1);
        __AIRegs[0] = (__AIRegs[0] & ~1) | state;
        __AIRegs[0] |= 0x40;
        OSRestoreInterrupts(oldInts);
        AISetStreamVolLeft(left);
        AISetStreamVolRight(right);
    }
}

u32 AIGetDSPSampleRate(void)
{
    return ((__AIRegs[0] >> 6) & 1) ^ 1;
}

void __AI_set_stream_sample_rate(u32 rate)
{
    BOOL oldInts;
    u32 state;
    u8 left;
    u8 right;
    u32 temp;

    if (rate == AIGetStreamSampleRate()) {
        return;
    }
    state = AIGetStreamPlayState();
    left = AIGetStreamPlayState_2();
    right = AIGetStreamPlayState_3();
    AISetStreamVolRight(0);
    AISetStreamVolLeft(0);
    temp = __AIRegs[0] & 0x40;
    __AIRegs[0] &= ~0x40;
    oldInts = OSDisableInterrupts();
    __AI_SRC_INIT();
    __AIRegs[0] |= temp;
    __AIRegs[0] = (__AIRegs[0] & ~0x20) | 0x20;
    __AIRegs[0] = (__AIRegs[0] & ~2) | (rate << 1);
    OSRestoreInterrupts(oldInts);
    AISetStreamPlayState(state);
    AISetStreamVolLeft(left);
    AISetStreamVolRight(right);
}

u32 AIGetStreamSampleRate(void)
{
    return (__AIRegs[0] >> 1) & 1;
}

void AISetStreamVolLeft(u8 volume)
{
    __AIRegs[1] = (__AIRegs[1] & ~0xff) | volume;
}

u8 AIGetStreamPlayState_2(void)
{
    return (u8)__AIRegs[1];
}

void AISetStreamVolRight(u8 volume)
{
    __AIRegs[1] = (__AIRegs[1] & ~0xff00) | (volume << 8);
}

u8 AIGetStreamPlayState_3(void)
{
    return (u8)(__AIRegs[1] >> 8);
}

void AIInit(u8* stack)
{
    if (__AI_init_flag == TRUE) {
        return;
    }
    OSRegisterVersion(__AIVersion);
    bound_32KHz = OSNanosecondsToTicks(31524);
    bound_48KHz = OSNanosecondsToTicks(42024);
    min_wait = OSNanosecondsToTicks(42000);
    max_wait = OSNanosecondsToTicks(63000);
    buffer = OSNanosecondsToTicks(3000);
    __AIRegs[0] = (__AIRegs[0] & ~0x20) | 0x20;
    AISetStreamVolRight(0);
    AISetStreamVolLeft(0);
    __AIRegs[3] = 0;
    __AI_set_stream_sample_rate(1);
    AISetDSPSampleRate(0);
    __AIS_Callback = NULL;
    __AID_Callback = NULL;
    __CallbackStack = stack;
    __OSSetInterruptHandler(5, fn_803DFC50);
    __OSUnmaskInterrupts(0x04000000);
    __OSSetInterruptHandler(8, __AISHandler);
    __OSUnmaskInterrupts(0x00800000);
    __AI_init_flag = TRUE;
}

static void __AISHandler(s16 interrupt, OSContext* context)
{
    OSContext exceptionContext;

    __AIRegs[0] |= 0x08;
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);
    if (__AIS_Callback) {
        __AIS_Callback(__AIRegs[2]);
    }
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
}

static void fn_803DFC50(s16 interrupt, OSContext* context)
{
    OSContext exceptionContext;
    u32 tmp;

    tmp = __DSPRegs[5];
    __DSPRegs[5] = (u16)((tmp & ~(0x80 | 0x20)) | 0x08);
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);
    if (__AID_Callback && !__AID_Active) {
        __AID_Active = TRUE;
        if (__CallbackStack) {
            __AICallbackStackSwitch(__AID_Callback);
        } else {
            __AID_Callback();
        }
        __AID_Active = FALSE;
    }
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
}

static asm void __AICallbackStackSwitch(register AIDCallback cb)
{
    fralloc
    lis r5, __OldStack@ha
    addi r5, r5, __OldStack@l
    stw r1, 0(r5)
    lis r5, __CallbackStack@ha
    addi r5, r5, __CallbackStack@l
    lwz r1, 0(r5)
    subi r1, r1, 8
    mtlr cb
    blrl
    lis r5, __OldStack@ha
    addi r5, r5, __OldStack@l
    lwz r1, 0(r5)
    frfree
    blr
}

static void __AI_SRC_INIT(void)
{
    OSTime start;
    OSTime end;
    OSTime diff;
    OSTime temp;
    u32 done;
    u32 initCnt;
    u32 walking;
    u32 rising;
    u32 rise32;
    u32 rise48;

    end = 0;
    done = 0;
    temp = 0;
    walking = 0;
    rising = 0;
    rise32 = 0;
    rise48 = 0;
    while (!done) {
        __AIRegs[0] = (__AIRegs[0] & ~0x20) | 0x20;
        __AIRegs[0] = __AIRegs[0] & ~2;
        __AIRegs[0] = (__AIRegs[0] & ~1) | 1;
        initCnt = __AIRegs[2];
        while (initCnt == __AIRegs[2]) {
        }
        start = OSGetTime();
        __AIRegs[0] = (__AIRegs[0] & ~2) | 2;
        __AIRegs[0] = (__AIRegs[0] & ~1) | 1;
        initCnt = __AIRegs[2];
        while (initCnt == __AIRegs[2]) {
        }
        end = OSGetTime();
        __AIRegs[0] = __AIRegs[0] & ~2;
        diff = end - start;
        __AIRegs[0] = __AIRegs[0] & ~1;
        if (diff < (bound_32KHz - buffer)) {
            temp = min_wait;
            done = 1;
            walking = 1;
        } else if (diff >= (bound_32KHz + buffer) && diff < (bound_48KHz - buffer)) {
            temp = max_wait;
            done = 1;
            walking = 1;
        } else {
            done = 0;
            walking = 0;
        }
    }
    while (end + temp > OSGetTime()) {
    }
}

AIDCallback __tmp_aid_callback(AIDCallback callback)
{
    BOOL oldInts;
    AIDCallback old;

    old = lbl_805DE000;
    oldInts = OSDisableInterrupts();
    lbl_805DE000 = callback;
    OSRestoreInterrupts(oldInts);
    return old;
}
