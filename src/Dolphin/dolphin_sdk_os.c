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
struct OSThread {
    u8 context[0x2C8];
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
typedef struct OSAlarm {
    void* handler;
    u32 tag;
} OSAlarm;
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

OSExceptionHandler __OSSetExceptionHandler(u8 exception, OSExceptionHandler handler)
{
    OSExceptionHandler old = OSExceptionTable[exception];
    OSExceptionTable[exception] = handler;
    return old;
}

OSExceptionHandler __OSGetExceptionHandler(u8 exception)
{
    return OSExceptionTable[exception];
}

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

void OSRegisterVersion(const char* version)
{
    OSReport(lbl_805DC974, version);
}

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

