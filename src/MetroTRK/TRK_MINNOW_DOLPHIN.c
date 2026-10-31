#pragma dont_inline on
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;

typedef struct TRKBuffer {
    u32 pad0;
    u32 pad4;
    u32 length;
    u32 position;
} TRKBuffer;

typedef struct TRKEvent {
    u32 type;
    u32 eventID;
    s32 msgBufID;
} TRKEvent;

typedef struct TRKState {
    u8 pad[0x98];
    s32 stopped;
    u32 pad9c;
    void* inputPendingPtr;
} TRKState;

typedef struct TRKCPUState {
    u8 pad[0x80];
    u32 reg80;
} TRKCPUState;

typedef struct DBCommTable {
    void (*f[16])(void);
} DBCommTable;

extern TRKState gTRKState;
extern TRKCPUState gTRKCPUState;
extern DBCommTable gDBCommTable;
extern u8 lbl_80569E90[];
extern u32 lbl_8056B858[];
extern u8 lbl_8056BDF8[];
extern s32 lbl_805DDD08;
extern s32 lbl_805DDD10;
extern char lbl_8048C184[];

extern void OSReport(const char*, ...);
extern void OSRestoreInterrupts(s32);
extern s32 OSDisableInterrupts(void);
extern void TRKReleaseBuffer(s32);
extern void TRK_board_display(char*);
extern s32 fn_803BE368(void);
extern s32 TRKSwapAndGo(void);
extern void UnreserveEXI2Port(void);
extern void ReserveEXI2Port(void);
extern s32 fn_803F3924(void);
extern s32 fn_803F3940(void);
extern s32 fn_803F3944(void);
extern s32 fn_803F3950(void);
extern s32 fn_803F3954(void);
extern s32 fn_803F3CE0(void);
extern void fn_803C2430(void);

void TRKDestructEvent(TRKEvent* event)
{
    TRKReleaseBuffer(event->msgBufID);
}

void TRKConstructEvent(TRKEvent* event, u32 type)
{
    event->type = type;
    event->eventID = 0;
    event->msgBufID = -1;
}

s32 TRKTerminateNub(void)
{
    fn_803BE368();
    return 0;
}

s32 TRKSetBufferPosition(TRKBuffer* buf, u32 pos)
{
    s32 err = 0;
    if (pos > 0x880) {
        err = 0x301;
    } else {
        buf->position = pos;
        if (pos > buf->length) {
            buf->length = pos;
        }
    }
    return err;
}

TRKBuffer* TRKGetBuffer(s32 idx)
{
    TRKBuffer* buf = 0;
    if (idx >= 0 && idx < 3) {
        buf = (TRKBuffer*)(lbl_80569E90 + idx * 0x890);
    }
    return buf;
}

s32 fn_803BE368(void)
{
    return 0;
}

void usr_put_initialize(void)
{
}

s32 TRKInitializeDispatcher(void)
{
    return 0;
}

s32 fn_803BF594(void)
{
    return 0;
}

s32 fn_803BF59C(void)
{
    return 0;
}

void fn_803BF730(u32 x)
{
    lbl_8056B858[0] = x;
}

u32 fn_803BF73C(void)
{
    return lbl_8056B858[0];
}

s32 fn_803BFF28(void)
{
    return 0;
}

s32 fn_803BFF30(void)
{
    return 0;
}

s32 fn_803BFF38(void)
{
    return 0;
}

asm u32 fn_803C00C8(void)
{
    nofralloc
    mfmsr r3
    blr
}

asm void fn_803C00D0(register u32 msr)
{
    nofralloc
    mtmsr msr
    blr
}

void TRKTargetSetInputPendingPtr(void* ptr)
{
    gTRKState.inputPendingPtr = ptr;
}

s32 fn_803C046C(void)
{
    gTRKState.stopped = 1;
    return 0;
}

void TRKTargetSetStopped(s32 stopped)
{
    gTRKState.stopped = stopped;
}

s32 TRKTargetStopped(void)
{
    return gTRKState.stopped;
}

u32 fn_803C06A4(void)
{
    return gTRKCPUState.reg80;
}

asm void fn_803C1B10(void)
{
    nofralloc
    twi 31, r0, 0
    blr
}

asm void fn_803C1B18(void)
{
    nofralloc
    twi 31, r0, 0
    blr
}

asm void fn_803C1B20(void)
{
    nofralloc
    twi 31, r0, 0
    blr
}

asm void fn_803C1B28(void)
{
    nofralloc
    twi 31, r0, 0
    blr
}

void EnableMetroTRKInterrupts(void)
{
    fn_803C2430();
}

void TRKUARTInterruptHandler(void)
{
}

void TRK_board_display(char* str)
{
    OSReport(lbl_8048C184, str);
}

void UnreserveEXI2Port(void)
{
    gDBCommTable.f[8]();
}

void ReserveEXI2Port(void)
{
    gDBCommTable.f[9]();
}

void fn_803C2400(void)
{
    gDBCommTable.f[3]();
}

s32 TRKTargetContinue(void)
{
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}

u8 fn_803C27A0(void)
{
    return lbl_8056BDF8[0];
}

void _SetUseSerialIO(u8 v)
{
    lbl_8056BDF8[0] = v;
}

__declspec(weak) s32 udp_cc_post_stop(void)
{
    return -1;
}

__declspec(weak) s32 udp_cc_pre_continue(void)
{
    return -1;
}

__declspec(weak) s32 udp_cc_peek(void)
{
    return 0;
}

__declspec(weak) s32 udp_cc_write(void)
{
    return 0;
}

__declspec(weak) s32 udp_cc_read(void)
{
    return 0;
}

__declspec(weak) s32 udp_cc_close(void)
{
    return -1;
}

__declspec(weak) s32 udp_cc_open(void)
{
    return -1;
}

__declspec(weak) s32 udp_cc_shutdown(void)
{
    return -1;
}

__declspec(weak) s32 udp_cc_initialize(void)
{
    return -1;
}

s32 ddh_cc_initinterrupts(void)
{
    fn_803F3924();
    return 0;
}

s32 ddh_cc_post_stop(void)
{
    fn_803F3940();
    return 0;
}

s32 ddh_cc_pre_continue(void)
{
    fn_803F3944();
    return 0;
}

s32 ddh_cc_close(void)
{
    return 0;
}

s32 ddh_cc_open(void)
{
    if (lbl_805DDD08 != 0) {
        return -0x2715;
    }
    lbl_805DDD08 = 1;
    return 0;
}

s32 ddh_cc_shutdown(void)
{
    return 0;
}

s32 fn_803C2F20(s32* p)
{
    return p[4];
}

s32 gdev_cc_initinterrupts(void)
{
    fn_803F3CE0();
    return 0;
}

s32 gdev_cc_post_stop(void)
{
    fn_803F3954();
    return 0;
}

s32 gdev_cc_pre_continue(void)
{
    fn_803F3950();
    return 0;
}

s32 gdev_cc_close(void)
{
    return 0;
}

s32 gdev_cc_open(void)
{
    if (lbl_805DDD10 != 0) {
        return -0x2715;
    }
    lbl_805DDD10 = 1;
    return 0;
}

s32 gdev_cc_shutdown(void)
{
    return 0;
}

void fn_803C32C4(s32* p)
{
    OSRestoreInterrupts(*p);
}

void MWEnterCriticalSection(s32* p)
{
    *p = OSDisableInterrupts();
}

void fn_803C3318(void)
{
}
