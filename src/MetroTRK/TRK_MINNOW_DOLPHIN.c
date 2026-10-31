typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;

typedef struct TRKBuffer {
    u32 mutex;
    s32 isUsed;
    u32 length;
    u32 position;
    u8 data[0x880];
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

typedef struct TRKEventQueue {
    u32 mutex;
    s32 count;
    s32 next;
    TRKEvent events[2];
    u32 eventID;
} TRKEventQueue;

extern TRKEventQueue lbl_80569E60;
extern s32 lbl_8056B840[];
extern u8* gTRKInputPendingPtr[];
extern char lbl_8048BC30[];
extern void MWTRACE(s32, const char*, ...);
extern s32 fn_803C2388(void*, u32);
extern u32 fn_803BF73C(void);
extern void fn_803BF730(u32);
extern TRKBuffer* TRKGetBuffer(s32);
extern s32 TRKDispatchMessage(TRKBuffer*);
extern s32 TRKTargetInterrupt(TRKEvent*);
extern s32 TRKTargetSupportRequest(void);
extern s32 TRKTargetContinue(void);
extern s32 TRKTestForPacket(void);
extern s32 TRKGetNextEvent(TRKEvent*);
extern s32 TRKPostEvent(TRKEvent*);
extern void TRKGetInput(void);
extern s32 TRKTargetStopped(void);
extern void TRKConstructEvent(TRKEvent*, u32);
extern void TRKDestructEvent(TRKEvent*);
extern TRKState gTRKState;
extern TRKCPUState gTRKCPUState;
extern DBCommTable gDBCommTable;
extern u8 lbl_80569E90[];
extern char lbl_8048BC58[];
extern void* TRK_memcpy(void*, const void*, u32);
extern void* TRK_memset(void*, s32, u32);
extern s32 fn_803BFF28(void*);
extern s32 fn_803BFF30(void*);
extern s32 fn_803BFF38(void*);
extern void fn_803BE624(char*);
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


static inline s32 ReadBuf(TRKBuffer* buf, void* data, u32 n)
{
    s32 err = 0;
    u32 avail;
    if (n == 0) {
        return 0;
    }
    avail = buf->length - buf->position;
    if (n > avail) {
        err = 0x302;
        n = avail;
    }
    TRK_memcpy(data, buf->data + buf->position, n);
    buf->position += n;
    return err;
}

s32 TRKReadBuffer_ui8(TRKBuffer* buf, u8* data, s32 count)
{
    s32 err = 0;
    s32 i;
    for (i = 0; err == 0 && i < count; i++) {
        u32 n = 1;
        s32 e = 0;
        u32 avail = buf->length - buf->position;
        if (n > avail) {
            e = 0x302;
            n = avail;
        }
        TRK_memcpy(data + i, buf->data + buf->position, n);
        buf->position += n;
        err = e;
    }
    return err;
}

static inline s32 AppendByte(TRKBuffer* buf, u8 b)
{
    if (buf->position >= 0x880) {
        return 0x301;
    }
    buf->data[buf->position++] = b;
    buf->length++;
    return 0;
}

s32 TRKAppendBuffer_ui8(TRKBuffer* buf, const u8* data, s32 count)
{
    s32 i = 0;
    s32 err = 0;
    while (err == 0 && i < count) {
        err = AppendByte(buf, *data);
        i++;
        data++;
    }
    return err;
}

s32 TRKReadBuffer(TRKBuffer* buf, void* data, u32 n)
{
    s32 err = 0;
    u32 avail;
    if (n == 0) {
        return 0;
    }
    avail = buf->length - buf->position;
    if (n > avail) {
        err = 0x302;
        n = avail;
    }
    TRK_memcpy(data, buf->data + buf->position, n);
    buf->position += n;
    return err;
}

s32 TRKAppendBuffer(TRKBuffer* buf, const void* data, u32 n)
{
    s32 err = 0;
    u32 room;
    if (n == 0) {
        return 0;
    }
    room = 0x880 - buf->position;
    if (room < n) {
        err = 0x301;
        n = room;
    }
    if (n == 1) {
        buf->data[buf->position] = *(const u8*)data;
    } else {
        TRK_memcpy(buf->data + buf->position, data, n);
    }
    buf->position += n;
    buf->length = buf->position;
    return err;
}

void TRKResetBuffer(TRKBuffer* buf, s32 keep)
{
    buf->length = 0;
    buf->position = 0;
    if (!keep) {
        TRK_memset(buf->data, 0, 0x880);
    }
}

void TRKReleaseBuffer(s32 idx)
{
    if (idx != -1 && idx >= 0 && idx < 3) {
        TRKBuffer* buf = (TRKBuffer*)(lbl_80569E90 + idx * 0x890);
        fn_803BFF30(buf);
        buf->isUsed = 0;
        fn_803BFF28(buf);
    }
}

s32 TRKGetFreeBuffer(s32* idxOut, TRKBuffer** bufOut)
{
    TRKBuffer* buf;
    s32 err = 0x300;
    s32 i;
    *bufOut = 0;
    for (i = 0; i < 3; i++) {
        buf = 0;
        if (i >= 0 && i < 3) {
            buf = (TRKBuffer*)(lbl_80569E90 + i * 0x890);
        }
        fn_803BFF30(buf);
        if (buf->isUsed == 0) {
            buf->length = 0;
            buf->position = 0;
            buf->isUsed = 1;
            err = 0;
            *bufOut = buf;
            *idxOut = i;
            i = 3;
        }
        fn_803BFF28(buf);
    }
    if (err == 0x300) {
        fn_803BE624(lbl_8048BC58);
    }
    return err;
}

s32 TRKInitializeMessageBuffers(void)
{
    TRKBuffer* buf;
    s32 i;
    buf = (TRKBuffer*)lbl_80569E90;
    for (i = 0; i < 3; i++) {
        fn_803BFF38(buf);
        fn_803BFF30(buf);
        buf->isUsed = 0;
        fn_803BFF28(buf);
        buf++;
    }
    return 0;
}


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

s32 fn_803BFF28(void* p)
{
    return 0;
}

s32 fn_803BFF30(void* p)
{
    return 0;
}

s32 fn_803BFF38(void* p)
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

#pragma dont_inline on
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

#pragma dont_inline reset
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

s32 TRKInitializeEventQueue(void)
{
    fn_803BFF38(&lbl_80569E60);
    fn_803BFF30(&lbl_80569E60);
    lbl_80569E60.count = 0;
    lbl_80569E60.next = 0;
    lbl_80569E60.eventID = 0x100;
    fn_803BFF28(&lbl_80569E60);
    return 0;
}

s32 TRKPostEvent(TRKEvent* event)
{
    s32 err = 0;
    s32 idx;
    fn_803BFF30(&lbl_80569E60);
    if (lbl_80569E60.count == 2) {
        err = 0x100;
    } else {
        idx = (lbl_80569E60.next + lbl_80569E60.count) % 2;
        TRK_memcpy(&lbl_80569E60.events[idx], event, 12);
        lbl_80569E60.events[idx].eventID = lbl_80569E60.eventID;
        lbl_80569E60.eventID++;
        if (lbl_80569E60.eventID < 0x100) {
            lbl_80569E60.eventID = 0x100;
        }
        lbl_80569E60.count++;
    }
    fn_803BFF28(&lbl_80569E60);
    return err;
}

s32 TRKGetNextEvent(TRKEvent* event)
{
    s32 ok = 0;
    fn_803BFF30(&lbl_80569E60);
    if (lbl_80569E60.count > 0) {
        TRK_memcpy(event, &lbl_80569E60.events[lbl_80569E60.next], 12);
        lbl_80569E60.next++;
        lbl_80569E60.count--;
        if (lbl_80569E60.next == 2) {
            lbl_80569E60.next = 0;
        }
        ok = 1;
    }
    fn_803BFF28(&lbl_80569E60);
    return ok;
}

s32 TRKMessageSend(TRKBuffer* buf)
{
    s32 r = fn_803C2388(buf->data, buf->length);
    MWTRACE(1, lbl_8048BC30, r);
    return 0;
}

void TRKProcessInput(s32 idx)
{
    TRKEvent event;
    TRKConstructEvent(&event, 2);
    lbl_8056B840[0] = -1;
    event.msgBufID = idx;
    TRKPostEvent(&event);
}

void TRKGetInput(void)
{
    s32 idx;
    TRKEvent event;
    idx = TRKTestForPacket();
    if (idx != -1) {
        TRKGetBuffer(idx);
        TRKConstructEvent(&event, 2);
        lbl_8056B840[0] = -1;
        event.msgBufID = idx;
        TRKPostEvent(&event);
    }
}

void fn_803BE624(char* str)
{
    s32 err = 0;
    s32 old;
    char c;
    char buf[2];
    while (err == 0 && (c = *str++) != 0) {
        old = fn_803BF73C();
        buf[0] = c;
        buf[1] = 0;
        fn_803BF730(0);
        OSReport(buf);
        fn_803BF730(old);
        err = 0;
    }
}

void TRKNubMainLoop(void)
{
    TRKEvent event;
    s32 exit = 0;
    s32 inputOK = 0;
    while (exit == 0) {
        if (TRKGetNextEvent(&event)) {
            inputOK = 0;
            switch (event.type) {
            case 2:
                TRKDispatchMessage(TRKGetBuffer(event.msgBufID));
                break;
            case 1:
                exit = 1;
                break;
            case 3:
            case 4:
                TRKTargetInterrupt(&event);
                break;
            case 5:
                TRKTargetSupportRequest();
                break;
            }
            TRKDestructEvent(&event);
        } else if (inputOK == 0 || *gTRKInputPendingPtr[0] != 0) {
            inputOK = 1;
            TRKGetInput();
        } else {
            if (TRKTargetStopped() == 0) {
                TRKTargetContinue();
            }
            inputOK = 0;
        }
    }
}


s32 fn_803C2388(void* data, u32 len)
{
    return ((s32 (*)(void*, u32))gDBCommTable.f[5])(data, len) != 0 ? -1 : 0;
}

void MWTRACE(s32 level, const char* fmt, ...)
{
}

TRKBuffer* TRKGetBuffer(s32 idx)
{
    TRKBuffer* buf = 0;
    if (idx >= 0 && idx < 3) {
        buf = (TRKBuffer*)(lbl_80569E90 + idx * 0x890);
    }
    return buf;
}
