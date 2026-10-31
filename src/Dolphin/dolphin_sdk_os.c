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
extern int RunQueueHint;
extern s32 Reschedule;
extern void* __OSArenaHi;
extern void* __OSArenaLo;
extern char lbl_805DC974[4];
extern int lbl_805DC978;

u32 OSGetConsoleType(void)
{
    u32 type;
    if (BootInfo_805DDE68 == 0 || (type = BootInfo_805DDE68->consoleType) == 0) {
        type = 0x10000002;
    }
    return type;
}

#pragma peephole off
OSExceptionHandler __OSSetExceptionHandler(u8 exception, OSExceptionHandler handler)
{
    OSExceptionHandler old = OSExceptionTable[exception];
    OSExceptionTable[exception] = handler;
    return old;
}
#pragma peephole on

#pragma peephole off
OSExceptionHandler __OSGetExceptionHandler(u8 exception)
{
    return OSExceptionTable[exception];
}
#pragma peephole on

OSInterruptHandler __OSSetInterruptHandler(s16 interrupt, OSInterruptHandler handler)
{
    OSInterruptHandler old = InterruptHandlerTable[interrupt];
    InterruptHandlerTable[interrupt] = handler;
    return old;
}

OSInterruptHandler __OSGetInterruptHandler(s16 interrupt)
{
    return InterruptHandlerTable[interrupt];
}

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

int OSSetCurrentHeap(int heap)
{
    int old = lbl_805DC978;
    lbl_805DC978 = heap;
    return old;
}

void OSDestroyHeap(int heap)
{
    lbl_805DDEB0[heap].size = -1;
}

void* OSGetArenaHi(void)
{
    return __OSArenaHi;
}

void* OSGetArenaLo(void)
{
    return __OSArenaLo;
}

void OSSetArenaHi(void* newHi)
{
    __OSArenaHi = newHi;
}

void OSSetArenaLo(void* newLo)
{
    __OSArenaLo = newLo;
}

#define OSRoundUp(x, a) (((u32)(x) + (a)-1) & ~((a)-1))
#define OSRoundDown(x, a) ((u32)(x) & ~((a)-1))

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

u32 OSGetPhysicalMemSize(void)
{
    return *(u32*)0x80000028;
}

u32 OSGetConsoleSimulatedMemSize(void)
{
    return *(u32*)0x800000F0;
}

void* OSGetCurrentContext(void)
{
    return *(void**)0x800000D4;
}

OSThread* OSGetCurrentThread(void)
{
    return *(OSThread**)0x800000E4;
}

void fn_803D7E20(OSMutex* mutex)
{
    OSInitThreadQueue(&mutex->queue);
    mutex->thread = 0;
    mutex->count = 0;
}

void OSInitThreadQueue(OSThreadQueue* queue)
{
    queue->tail = 0;
    queue->head = 0;
}

void fn_803D8228(void)
{
    lbl_805DDEF8 = 1;
}

void fn_803D997C(void)
{
}


u32 __OSSyncSram(void)
{
    return *(u32*)(Scb + 0x4C);
}

void __OSUnlockSram(int commit)
{
    UnlockSram(commit, 0);
}

void __OSUnlockSramEx(int commit)
{
    UnlockSram(commit, 0x14);
}

int OSGetResetSwitchState(void)
{
    return OSGetResetButtonState();
}

int fn_803D9AF4(OSThread* thread)
{
    if (thread->suspend > 0) {
        return 1;
    }
    return 0;
}

int fn_803D9B10(OSThread* thread)
{
    u16 state = thread->state;
    int r = 1;
    if (state != 8 && state != 0) {
        r = 0;
    }
    if (r) {
        return 1;
    }
    return 0;
}

s32 OSDisableScheduler(void)
{
    int enabled = OSDisableInterrupts();
    s32 count = Reschedule++;
    OSRestoreInterrupts(enabled);
    return count;
}

s32 OSEnableScheduler(void)
{
    int enabled = OSDisableInterrupts();
    s32 count = Reschedule--;
    OSRestoreInterrupts(enabled);
    return count;
}

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
extern void OSSwitchFPUContext(u8 exception, OSContext* context);
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

void OSInitAlarm(void)
{
    if (__OSGetExceptionHandler(8) != DecrementerExceptionHandler) {
        AlarmQueue.head = AlarmQueue.tail = 0;
        __OSSetExceptionHandler(8, DecrementerExceptionHandler);
    }
}

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
#pragma peephole on

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

void OSInitContext(OSContext* context, u32 pc, u32 sp);

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
    for (next = queue->head; next && next->priority <= currentThread->priority; next = next->link.next) {
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

void OSWakeupThread(OSThreadQueue* queue)
{
    int enabled;
    OSThread* thread;
    OSThread* next;
    OSThread* prev;
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
            thread->queue = (OSThreadQueue*)&RunQueue[thread->priority];
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
