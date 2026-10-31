#include <dolphin/types.h>

typedef struct OSThread OSThread;
typedef struct OSContext OSContext;
typedef struct OSThreadQueue {
    OSThread* head;
    OSThread* tail;
} OSThreadQueue;
typedef struct OSThreadLink {
    OSThread* next;
    OSThread* prev;
} OSThreadLink;
typedef struct OSMutex OSMutex;
typedef struct OSMutexLink {
    OSMutex* next;
    OSMutex* prev;
} OSMutexLink;
typedef struct OSMutexQueue {
    OSMutex* head;
    OSMutex* tail;
} OSMutexQueue;
struct OSMutex {
    OSThreadQueue queue;
    OSThread* thread;
    s32 count;
    OSMutexLink link;
};
struct OSContext {
    u32 gpr[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fpr[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqr[8];
    u32 psf_pad;
    f64 psf[32];
};
struct OSThread {
    OSContext context;
    u16 state;
    u16 attr;
    s32 suspend;
    s32 priority;
    s32 base;
    void* val;
    OSThreadQueue* queue;
    OSThreadLink link;
    OSThreadQueue queueJoin;
    OSMutex* mutex;
    OSMutexQueue queueMutex;
    OSThreadLink linkActive;
};
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(OSAlarm* alarm, OSContext* context);
struct OSAlarm {
    OSAlarmHandler handler;
    u32 tag;
    s64 fire;
    OSAlarm* prev;
    OSAlarm* next;
    s64 period;
    s64 start;
};
typedef struct OSAlarmQueue {
    OSAlarm* head;
    OSAlarm* tail;
} OSAlarmQueue;
typedef struct HeapDesc {
    long size;
    void* free;
    void* allocated;
} HeapDesc;
typedef struct OSBootInfo {
    u8 pad[0x2C];
    u32 consoleType;
} OSBootInfo;
typedef void (*OSExceptionHandler)(u8 exception, OSContext* context);
typedef void (*OSInterruptHandler)(s16 interrupt, OSContext* context);

extern void OSReport(const char* msg, ...);
extern void __OSSaveFPUContext(void);
extern void UnlockSram(int commit, u32 offset);
extern int OSGetResetButtonState(void);
extern void SelectThread(int yield);
extern void OSInitThreadQueue(OSThreadQueue* queue);
extern int OSRestoreInterrupts(int level);
extern int OSDisableInterrupts(void);
extern u32 __OSMaskInterrupts(u32 mask);

extern OSBootInfo* BootInfo_805DDE68;
extern u8 DriveInfo_8056D560[];
extern u8 Scb[];
extern OSExceptionHandler* OSExceptionTable;
extern OSInterruptHandler* InterruptHandlerTable;
extern HeapDesc* lbl_805DDEB0;
extern int lbl_805DDEF8;
extern volatile int RunQueueHint;
extern s32 Reschedule;
extern void* __OSArenaHi;
extern void* __OSArenaLo;
extern char lbl_805DC974[4];
extern int lbl_805DC978;

#pragma peephole off
u32 OSGetConsoleType(void)
{
    u32 type;
    if (BootInfo_805DDE68 == 0 || (type = BootInfo_805DDE68->consoleType) == 0) {
        type = 0x10000002;
    }
    return type;
}

#pragma dont_inline on
#pragma peephole off
OSExceptionHandler __OSSetExceptionHandler(u8 exception, OSExceptionHandler handler)
{
    OSExceptionHandler old = OSExceptionTable[exception];
    OSExceptionTable[exception] = handler;
    return old;
}

#pragma peephole off
OSExceptionHandler __OSGetExceptionHandler(u8 exception)
{
    return OSExceptionTable[exception];
}
#pragma dont_inline reset

#pragma peephole on
OSInterruptHandler __OSSetInterruptHandler(s16 interrupt, OSInterruptHandler handler)
{
    OSInterruptHandler old = InterruptHandlerTable[interrupt];
    InterruptHandlerTable[interrupt] = handler;
    return old;
}

#pragma peephole on
OSInterruptHandler __OSGetInterruptHandler(s16 interrupt)
{
    return InterruptHandlerTable[interrupt];
}

#pragma peephole on
u8 __OSGetDIConfig(void)
{
    return *(u32*)0xCC006024 & 0xFF;
}

#pragma peephole off
void OSRegisterVersion(const char* version)
{
    OSReport(lbl_805DC974, version);
}

#pragma peephole on
void OSCreateAlarm(OSAlarm* alarm)
{
    alarm->handler = 0;
    alarm->tag = 0;
}

#pragma peephole on
int OSSetCurrentHeap(int heap)
{
    int old = lbl_805DC978;
    lbl_805DC978 = heap;
    return old;
}

#pragma peephole on
void OSDestroyHeap(int heap)
{
    lbl_805DDEB0[heap].size = -1;
}

#pragma peephole on
void* OSGetArenaHi(void)
{
    return __OSArenaHi;
}

#pragma peephole on
void* OSGetArenaLo(void)
{
    return __OSArenaLo;
}

#pragma peephole on
void OSSetArenaHi(void* newHi)
{
    __OSArenaHi = newHi;
}

#pragma peephole on
void OSSetArenaLo(void* newLo)
{
    __OSArenaLo = newLo;
}

#define OSRoundUp(x, a) (((u32)(x) + (a)-1) & ~((a)-1))
#define OSRoundDown(x, a) ((u32)(x) & ~((a)-1))

#pragma peephole on
void* fn_803D3C04(u32 size, u32 align)
{
    void* ptr;
    u8* arenaLo;
    arenaLo = __OSArenaLo;
    ptr = arenaLo;
    ptr = (void*)OSRoundUp(ptr, align);
    arenaLo = (u8*)ptr + size;
    arenaLo = (u8*)OSRoundUp(arenaLo, align);
    __OSArenaLo = arenaLo;
    return ptr;
}

#pragma peephole on
void* fn_803D3C30(u32 size, u32 align)
{
    void* ptr;
    u8* arenaHi;
    arenaHi = __OSArenaHi;
    arenaHi = (u8*)OSRoundDown(arenaHi, align);
    arenaHi -= size;
    arenaHi = (u8*)OSRoundDown(arenaHi, align);
    ptr = arenaHi;
    __OSArenaHi = arenaHi;
    return ptr;
}

#pragma peephole on
u32 OSGetPhysicalMemSize(void)
{
    return *(u32*)0x80000028;
}

#pragma peephole on
u32 OSGetConsoleSimulatedMemSize(void)
{
    return *(u32*)0x800000F0;
}

#pragma peephole on
void* OSGetCurrentContext(void)
{
    return *(void**)0x800000D4;
}

#pragma peephole on
OSThread* OSGetCurrentThread(void)
{
    return *(OSThread**)0x800000E4;
}

#pragma peephole on
void fn_803D7E20(OSMutex* mutex)
{
    OSInitThreadQueue(&mutex->queue);
    mutex->thread = 0;
    mutex->count = 0;
}

#pragma peephole on
void OSInitThreadQueue(OSThreadQueue* queue)
{
    queue->tail = 0;
    queue->head = 0;
}

#pragma peephole on
void fn_803D8228(void)
{
    lbl_805DDEF8 = 1;
}

#pragma peephole on
void fn_803D997C(void)
{
}


#pragma peephole on
u32 __OSSyncSram(void)
{
    return *(u32*)(Scb + 0x4C);
}

#pragma peephole on
void __OSUnlockSram(int commit)
{
    UnlockSram(commit, 0);
}

#pragma peephole on
void __OSUnlockSramEx(int commit)
{
    UnlockSram(commit, 0x14);
}

#pragma peephole on
int OSGetResetSwitchState(void)
{
    return OSGetResetButtonState();
}

#pragma peephole on
int fn_803D9AF4(OSThread* thread)
{
    if (thread->suspend > 0) {
        return 1;
    }
    return 0;
}

static inline int IsDead(OSThread* thread)
{
    return thread->state == 8 || thread->state == 0;
}

#pragma peephole on
int fn_803D9B10(OSThread* thread)
{
    if (IsDead(thread)) {
        return 1;
    }
    return 0;
}

#pragma peephole on
s32 OSDisableScheduler(void)
{
    int enabled = OSDisableInterrupts();
    s32 count = Reschedule++;
    OSRestoreInterrupts(enabled);
    return count;
}

#pragma peephole on
s32 OSEnableScheduler(void)
{
    int enabled = OSDisableInterrupts();
    s32 count = Reschedule--;
    OSRestoreInterrupts(enabled);
    return count;
}

#pragma peephole on
void __OSReschedule(void)
{
    if (RunQueueHint) {
        SelectThread(0);
    }
}


extern OSAlarmQueue AlarmQueue;
extern void DecrementerExceptionHandler(u8 exception, OSContext* context);
extern void InsertAlarm(OSAlarm* alarm, s64 fire, OSAlarmHandler handler);
extern s64 __OSGetSystemTime(void);
extern s64 OSGetTime(void);
extern void OSClearContext(OSContext* context);
extern void __OSLoadFPUContext(void);
extern void DBPrintf(const char* fmt, ...);
extern OSContext* __OSFPUContext_;
extern int lbl_805DDEB4;
extern void* lbl_805DDEB8;
extern u32 lbl_805DDEBC;
extern u32 RunQueueBits;
typedef struct RunQ {
    OSThread* head;
    OSThread* tail;
} RunQ;
extern RunQ RunQueue[32];
extern void __OSUnlockAllMutex(OSThread* thread);
extern void OSWakeupThread(OSThreadQueue* queue);

#pragma peephole on
void OSInitAlarm(void)
{
    if (__OSGetExceptionHandler(8) != DecrementerExceptionHandler) {
        AlarmQueue.head = AlarmQueue.tail = 0;
        __OSSetExceptionHandler(8, DecrementerExceptionHandler);
    }
}

#pragma peephole on
void OSSetAlarm(OSAlarm* alarm, s64 tick, OSAlarmHandler handler)
{
    int enabled = OSDisableInterrupts();
    alarm->period = 0;
    InsertAlarm(alarm, __OSGetSystemTime() + tick, handler);
    OSRestoreInterrupts(enabled);
}

#pragma peephole off
s64 __OSGetSystemTime(void)
{
    int enabled = OSDisableInterrupts();
    s64* timeAdjustPtr = (s64*)0x800030D8;
    s64 result = OSGetTime() + *timeAdjustPtr;
    OSRestoreInterrupts(enabled);
    return result;
}

#pragma peephole off
s64 __OSTimeToSystemTime(s64 time)
{
    int enabled = OSDisableInterrupts();
    s64* timeAdjustPtr = (s64*)0x800030D8;
    s64 result = *timeAdjustPtr + time;
    OSRestoreInterrupts(enabled);
    return result;
}


#pragma peephole on
void OSSleepThread(OSThreadQueue* queue)
{
    int enabled;
    OSThread* currentThread;
    OSThread* next;
    OSThread* prev;
    enabled = OSDisableInterrupts();
    currentThread = *(OSThread**)0x800000E4;
    currentThread->state = 4;
    currentThread->queue = queue;
    next = queue->head;
    while (next && next->priority <= currentThread->priority) {
        next = next->link.next;
    }
    if (next == 0) {
        prev = queue->tail;
        if (prev == 0) {
            queue->head = currentThread;
        } else {
            prev->link.next = currentThread;
        }
        currentThread->link.prev = prev;
        currentThread->link.next = 0;
        queue->tail = currentThread;
    } else {
        currentThread->link.next = next;
        prev = next->link.prev;
        next->link.prev = currentThread;
        currentThread->link.prev = prev;
        if (prev == 0) {
            queue->head = currentThread;
        } else {
            prev->link.next = currentThread;
        }
    }
    RunQueueHint = 1;
    if (RunQueueHint) {
        SelectThread(0);
    }
    OSRestoreInterrupts(enabled);
}

#pragma peephole on
void OSWakeupThread(OSThreadQueue* queue)
{
    int enabled;
    OSThread* thread;
    OSThread* next;
    OSThread* prev;
    RunQ* rq = RunQueue;
    enabled = OSDisableInterrupts();
    while (queue->head) {
        thread = queue->head;
        next = thread->link.next;
        if (next == 0) {
            queue->tail = 0;
        } else {
            next->link.prev = 0;
        }
        queue->head = next;
        thread->state = 1;
        if (thread->suspend <= 0) {
            thread->queue = (OSThreadQueue*)&rq[thread->priority];
            prev = thread->queue->tail;
            if (prev == 0) {
                thread->queue->head = thread;
            } else {
                prev->link.next = thread;
            }
            thread->link.prev = prev;
            thread->link.next = 0;
            thread->queue->tail = thread;
            RunQueueBits |= 1u << (31 - thread->priority);
            RunQueueHint = 1;
        }
    }
    __OSReschedule();
    OSRestoreInterrupts(enabled);
}

#pragma peephole on
asm void __OSDBJump(void)
{
    nofralloc
    bla 0x60
}

#pragma peephole on
asm void __OSDBIntegrator(void)
{
    nofralloc
    li r5, 0x40
    mflr r3
    stw r3, 0xc(r5)
    lwz r3, 0x8(r5)
    oris r3, r3, 0x8000
    mtlr r3
    li r3, 0x30
    mtmsr r3
    blr
}

#pragma peephole on
asm void DCEnable(void)
{
    nofralloc
    sync
    mfspr r3, HID0
    ori r3, r3, 0x4000
    mtspr HID0, r3
    blr
}

#pragma peephole on
asm void DCInvalidateRange(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
_dcbi:
    dcbi 0, addr
    addi addr, addr, 32
    bdnz _dcbi
    blr
}

#pragma peephole on
asm void DCFlushRange(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
_dcbf:
    dcbf 0, addr
    addi addr, addr, 32
    bdnz _dcbf
    sc
    blr
}

#pragma peephole on
asm void fn_803D3F54(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
_dcbst:
    dcbst 0, addr
    addi addr, addr, 32
    bdnz _dcbst
    sc
    blr
}

#pragma peephole on
asm void DCFlushRangeNoSync(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
_dcbf:
    dcbf 0, addr
    addi addr, addr, 32
    bdnz _dcbf
    blr
}

#pragma peephole on
asm void ICInvalidateRange(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
_icbi:
    icbi 0, addr
    addi addr, addr, 32
    bdnz _icbi
    sync
    isync
    blr
}

#pragma peephole on
asm void ICFlashInvalidate(void)
{
    nofralloc
    mfspr r3, HID0
    ori r3, r3, 0x800
    mtspr HID0, r3
    blr
}

#pragma peephole on
asm void ICEnable(void)
{
    nofralloc
    isync
    mfspr r3, HID0
    ori r3, r3, 0x8000
    mtspr HID0, r3
    blr
}

#pragma peephole on
asm void LCDisable(void)
{
    nofralloc
    lis r3, 0xe000
    li r4, 0x200
    mtctr r4
_lcdbi:
    dcbi 0, r3
    addi r3, r3, 32
    bdnz _lcdbi
    mfspr r4, 920
    rlwinm r4, r4, 0, 4, 2
    mtspr 920, r4
    blr
}

#pragma peephole on
asm void OSSaveFPUContext(register OSContext* fpuContext)
{
    nofralloc
    addi r5, r3, 0
    b __OSSaveFPUContext
}

#pragma peephole on
asm void* OSGetStackPointer(void)
{
    nofralloc
    mr r3, r1
    blr
}

#pragma peephole on
asm void fn_803D4738(register void* fn, register void* stk)
{
    nofralloc
    mflr r0
    mr r5, r1
    stwu r5, -8(r4)
    mr r1, r4
    stw r0, 4(r5)
    mtlr r3
    blrl
    lwz r5, 0(r1)
    lwz r0, 4(r5)
    mtlr r0
    mr r1, r5
    blr
}

#pragma peephole on
asm int OSDisableInterrupts(void)
{
    nofralloc
    mfmsr r3
    rlwinm r4, r3, 0, 17, 15
    mtmsr r4
    extrwi r3, r3, 1, 16
    blr
}

#pragma peephole on
asm int OSEnableInterrupts(void)
{
    nofralloc
    mfmsr r3
    ori r4, r3, 0x8000
    mtmsr r4
    extrwi r3, r3, 1, 16
    blr
}

#pragma peephole on
asm int OSRestoreInterrupts(register int level)
{
    nofralloc
    cmpwi level, 0
    mfmsr r4
    beq _disable
    ori r5, r4, 0x8000
    b _restore
_disable:
    rlwinm r5, r4, 0, 17, 15
_restore:
    mtmsr r5
    extrwi r3, r4, 1, 16
    blr
}

#pragma peephole on
asm void RealMode(register u32 addr)
{
    nofralloc
    clrlwi r3, r3, 2
    mtsrr0 r3
    mfmsr r3
    rlwinm r3, r3, 0, 28, 25
    mtsrr1 r3
    rfi
}

#pragma peephole on
asm void fn_803D8218(register void* addr)
{
    nofralloc
    sync
    isync
    mtlr r3
    blr
}

#pragma peephole on
asm s64 OSGetTime(void)
{
    nofralloc
    mftbu r3
    mftb r4
    mftbu r5
    cmpw r3, r5
    bne OSGetTime
    blr
}

#pragma peephole on
asm u32 OSGetTick(void)
{
    nofralloc
    mftb r3, 268
    blr
}

extern void __OSSystemCallVectorEnd(void);
#pragma peephole on
asm void SystemCallVector(void)
{
    nofralloc
    mfspr r9, HID0
    ori r10, r9, 0x8
    mtspr HID0, r10
    isync
    sync
    mtspr HID0, r9
    rfi
entry __OSSystemCallVectorEnd
    nop
}

#pragma peephole on
asm int OSSaveContext(register OSContext* context)
{
    nofralloc
    stmw r13, 0x34(r3)
    mfspr r0, 913
    stw r0, 0x1a8(r3)
    mfspr r0, 914
    stw r0, 0x1ac(r3)
    mfspr r0, 915
    stw r0, 0x1b0(r3)
    mfspr r0, 916
    stw r0, 0x1b4(r3)
    mfspr r0, 917
    stw r0, 0x1b8(r3)
    mfspr r0, 918
    stw r0, 0x1bc(r3)
    mfspr r0, 919
    stw r0, 0x1c0(r3)
    mfcr r0
    stw r0, 0x80(r3)
    mflr r0
    stw r0, 0x84(r3)
    stw r0, 0x198(r3)
    mfmsr r0
    stw r0, 0x19c(r3)
    mfctr r0
    stw r0, 0x88(r3)
    mfxer r0
    stw r0, 0x8c(r3)
    stw r1, 0x4(r3)
    stw r2, 0x8(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    li r3, 0x0
    blr
}

#pragma peephole on
asm void OSLoadContext(register OSContext* context)
{
    nofralloc
    lis r4, OSDisableInterrupts@ha
    lwz r6, 0x198(r3)
    addi r5, r4, OSDisableInterrupts@l
    cmplw r6, r5
    ble _803D4680
    lis r4, OSDisableInterrupts+0xC@ha
    addi r0, r4, OSDisableInterrupts+0xC@l
    cmplw r6, r0
    bge _803D4680
    stw r5, 0x198(r3)
_803D4680:
    lwz r0, 0x0(r3)
    lwz r1, 0x4(r3)
    lwz r2, 0x8(r3)
    lhz r4, 0x1a2(r3)
    rlwinm. r5, r4, 0, 30, 30
    beq _803D46A8
    rlwinm r4, r4, 0, 31, 29
    sth r4, 0x1a2(r3)
    lmw r5, 0x14(r3)
    b _803D46AC
_803D46A8:
    lmw r13, 0x34(r3)
_803D46AC:
    lwz r4, 0x1a8(r3)
    mtspr 913, r4
    lwz r4, 0x1ac(r3)
    mtspr 914, r4
    lwz r4, 0x1b0(r3)
    mtspr 915, r4
    lwz r4, 0x1b4(r3)
    mtspr 916, r4
    lwz r4, 0x1b8(r3)
    mtspr 917, r4
    lwz r4, 0x1bc(r3)
    mtspr 918, r4
    lwz r4, 0x1c0(r3)
    mtspr 919, r4
    lwz r4, 0x80(r3)
    mtcrf 0xff, r4
    lwz r4, 0x84(r3)
    mtlr r4
    lwz r4, 0x88(r3)
    mtctr r4
    lwz r4, 0x8c(r3)
    mtxer r4
    mfmsr r4
    rlwinm r4, r4, 0, 17, 15
    rlwinm r4, r4, 0, 31, 29
    mtmsr r4
    lwz r4, 0x198(r3)
    mtsrr0 r4
    lwz r4, 0x19c(r3)
    mtsrr1 r4
    lwz r4, 0x10(r3)
    lwz r3, 0xc(r3)
    rfi
}

#pragma peephole on
asm void OSInitContext(register OSContext* context, register u32 pc, register u32 sp)
{
    nofralloc
    stw r4, 0x198(r3)
    stw r5, 0x4(r3)
    li r11, 0x0
    ori r11, r11, 0x9032
    stw r11, 0x19c(r3)
    li r0, 0x0
    stw r0, 0x80(r3)
    stw r0, 0x8c(r3)
    stw r2, 0x8(r3)
    stw r13, 0x34(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x60(r3)
    stw r0, 0x64(r3)
    stw r0, 0x68(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    stw r0, 0x74(r3)
    stw r0, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x1a4(r3)
    stw r0, 0x1a8(r3)
    stw r0, 0x1ac(r3)
    stw r0, 0x1b0(r3)
    stw r0, 0x1b4(r3)
    stw r0, 0x1b8(r3)
    stw r0, 0x1bc(r3)
    stw r0, 0x1c0(r3)
    b OSClearContext
}

#pragma peephole on
asm void OSSwitchFPUContext(register u8 exception, register OSContext* context)
{
    nofralloc
    mfmsr r5
    ori r5, r5, 0x2000
    mtmsr r5
    isync
    lwz r5, 0x19c(r4)
    ori r5, r5, 0x2000
    mtsrr1 r5
    lis r3, 0x8000
    lwz r5, 0xd8(r3)
    stw r4, 0xd8(r3)
    cmpw r5, r4
    beq _803D4B30
    cmpwi r5, 0x0
    beq _803D4B2C
    bl __OSSaveFPUContext
_803D4B2C:
    bl __OSLoadFPUContext
_803D4B30:
    lwz r3, 0x80(r4)
    mtcrf 0xff, r3
    lwz r3, 0x84(r4)
    mtlr r3
    lwz r3, 0x198(r4)
    mtsrr0 r3
    lwz r3, 0x88(r4)
    mtctr r3
    lwz r3, 0x8c(r4)
    mtxer r3
    lhz r3, 0x1a2(r4)
    rlwinm r3, r3, 0, 31, 29
    sth r3, 0x1a2(r4)
    lwz r5, 0x14(r4)
    lwz r3, 0xc(r4)
    lwz r4, 0x10(r4)
    rfi
}



#pragma peephole on
static asm u32 PPCMfmsr(void)
{
    nofralloc
    mfmsr r3
    blr
}

#pragma peephole on
static asm void PPCMtmsr(register u32 val)
{
    nofralloc
    mtmsr val
    blr
}

#pragma peephole off
void OSClearContext(OSContext* context)
{
    context->mode = 0;
    context->state = 0;
    if (context == *(OSContext**)0x800000D8) {
        *(OSContext**)0x800000D8 = 0;
    }
}

#pragma peephole off
void OSSetCurrentContext(OSContext* context)
{
    register u32 msr;
    u32 phys;
    u32 tmp;
    *(OSContext**)0x800000D4 = context;
    phys = (u32)context & 0x3FFFFFFF;
    *(u32*)0x800000C0 = phys;
    if ((s32)*(OSContext**)0x800000D8 == (s32)context) {
        tmp = context->srr1;
        tmp |= 0x2000;
        context->srr1 = tmp;
        asm { mfmsr msr }
        msr |= 2;
        asm { mtmsr msr }
    } else {
        tmp = context->srr1;
        tmp &= ~0x2000;
        context->srr1 = tmp;
        asm { mfmsr msr }
        msr &= ~0x2000;
        msr |= 2;
        asm { mtmsr msr }
        asm { isync }
    }
}

#pragma peephole off
void __OSModuleInit(void)
{
    *(u32*)0x800030CC = 0;
    *(u32*)0x800030C8 = 0;
    *(u32*)0x800030D0 = 0;
}

#pragma peephole on
int __OSCheckDeadLock(OSThread* thread)
{
    OSMutex* mutex = thread->mutex;
    while (mutex && mutex->thread) {
        if (mutex->thread == thread) {
            return 1;
        }
        mutex = mutex->thread->mutex;
    }
    return 0;
}

#pragma peephole on
s32 __OSGetEffectivePriority(OSThread* thread)
{
    s32 priority = thread->base;
    OSMutex* mutex;
    for (mutex = thread->queueMutex.head; mutex; mutex = mutex->link.next) {
        OSThread* blocked = mutex->queue.head;
        if (blocked && blocked->priority < priority) {
            priority = blocked->priority;
        }
    }
    return priority;
}

#pragma peephole off
int OSOnReset(int final)
{
    if (final) {
        *(vu16*)0xCC004010 = 0xFF;
        __OSMaskInterrupts(0xF0000000);
    }
    return 1;
}

extern u16 lbl_805DC998;

#pragma peephole on
u16 OSGetFontEncode(void)
{
    if (lbl_805DC998 <= 1) {
        return lbl_805DC998;
    }
    switch (*(s32*)0x800000CC) {
    case 0:
        lbl_805DC998 = (*(vu16*)0xCC00206E & 2) ? 1 : 0;
        break;
    default:
        lbl_805DC998 = 0;
        break;
    }
    return lbl_805DC998;
}

#pragma peephole on
void* OSInitAlloc(void* arenaStart, void* arenaEnd, int maxHeaps)
{
    u32 arraySize;
    int i;
    lbl_805DDEB0 = arenaStart;
    lbl_805DDEB4 = maxHeaps;
    arraySize = maxHeaps * sizeof(HeapDesc);
    for (i = 0; i < lbl_805DDEB4; i++) {
        HeapDesc* hd = &lbl_805DDEB0[i];
        hd->size = -1;
        hd->free = hd->allocated = 0;
    }
    lbl_805DDEBC = (u32)arenaEnd & ~31;
    lbl_805DC978 = -1;
    arenaStart = (void*)((u32)lbl_805DDEB0 + arraySize);
    arenaStart = (void*)(((u32)arenaStart + 31) & ~31);
    lbl_805DDEB8 = arenaStart;
    return arenaStart;
}

#pragma peephole on
int OSCreateHeap(void* start, void* end)
{
    int heap;
    HeapDesc* hd;
    start = (void*)(((u32)start + 31) & ~31);
    end = (void*)((u32)end & ~31);
    for (heap = 0; heap < lbl_805DDEB4; heap++) {
        hd = &lbl_805DDEB0[heap];
        if (hd->size < 0) {
            hd->size = (u8*)end - (u8*)start;
            ((u32*)start)[0] = 0;
            ((u32*)start)[1] = 0;
            ((u32*)start)[2] = hd->size;
            hd->free = start;
            hd->allocated = 0;
            return heap;
        }
    }
    return -1;
}

#pragma peephole on
void __OSUnlockAllMutex(OSThread* thread)
{
    OSMutex* mutex;
    OSMutex* next;
    OSMutex* prev;
    while (thread->queueMutex.head) {
        mutex = thread->queueMutex.head;
        next = mutex->link.next;
        if (next == 0) {
            thread->queueMutex.tail = 0;
        } else {
            next->link.prev = 0;
        }
        thread->queueMutex.head = next;
        mutex->count = 0;
        mutex->thread = 0;
        OSWakeupThread(&mutex->queue);
    }
}
