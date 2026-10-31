#include <dolphin/types.h>
#pragma dont_inline on

typedef void (*DVDLowCallback)(u32 intType);
typedef struct DVDDiskID DVDDiskID;
typedef struct DVDCommandBlock DVDCommandBlock;
typedef struct DVDFileInfo DVDFileInfo;
typedef void (*DVDCBCallback)(s32 result, DVDCommandBlock* block);
typedef void (*DVDCallback)(s32 result, DVDFileInfo* fileInfo);
typedef void (*stateFunc)(DVDCommandBlock* block);

struct DVDCommandBlock {
    DVDCommandBlock* next;
    DVDCommandBlock* prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void* addr;
    u32 currTransferSize;
    u32 transferredSize;
    DVDDiskID* id;
    DVDCBCallback callback;
    void* userData;
};

struct DVDFileInfo {
    DVDCommandBlock cb;
    u32 startAddr;
    u32 length;
    DVDCallback callback;
};

typedef struct OSThreadQueue {
    void* head;
    void* tail;
} OSThreadQueue;

volatile u32 __DIRegs[] : 0xcc006000;

extern int OSDisableInterrupts(void);
extern int OSRestoreInterrupts(int level);
extern void OSWakeupThread(OSThreadQueue* queue);
extern void OSInitAlarm(void);
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(OSAlarm* alarm, void* context);
extern void OSCreateAlarm(OSAlarm* alarm);
extern void OSSetAlarm(OSAlarm* alarm, s64 tick, OSAlarmHandler handler);
extern OSAlarm AlarmForTimeout_8056CBA8;
extern void AlarmHandlerForTimeout(OSAlarm* alarm, void* context);
#define OS_BUS_CLOCK (*(u32*)0x800000F8)
#define OS_TIMER_CLOCK (OS_BUS_CLOCK / 4)
#define OSSecondsToTicks(sec) ((s64)(u32)((sec) * OS_TIMER_CLOCK))
#define SET_TIMEOUT() { u32 ticks = OS_TIMER_CLOCK * 10; OSCreateAlarm(&AlarmForTimeout_8056CBA8); OSSetAlarm(&AlarmForTimeout_8056CBA8, (s64)ticks, AlarmHandlerForTimeout); }
extern void DCInvalidateRange(void* addr, u32 nBytes);
extern int DVDCancel(DVDCommandBlock* block);

extern void DVDLowReset(void);
int DVDLowRead(void* addr, u32 length, u32 offset, DVDLowCallback cb);
int fn_803C4958(void* addr, DVDLowCallback cb);
int DVDLowStopMotor(DVDLowCallback cb);
int DVDLowRequestError(DVDLowCallback cb);
int DVDLowAudioBufferConfig(int enable, u32 size, DVDLowCallback cb);
int DVDLowWaitCoverClose(DVDLowCallback cb);
int fn_803C4898(u32 offset, DVDLowCallback cb);
extern void __DVDStoreErrorCode(u32 error);
extern void cbForStateError(u32 intType);
extern void cbForStateGettingError(u32 intType);
extern void cbForStateGoToRetry(u32 intType);
extern void cbForStateMotorStopped(u32 intType);
extern void cbForStateCoverClosed(u32 intType);
extern void cbForStateCheckID2(u32 intType);
extern void cbForStateCheckID2a(u32 intType);
extern void cbForStateCheckID3(u32 intType);
extern void stateReady(void);
extern void stateCoverClosed_CMD(DVDCommandBlock* block);
extern void DVDReset(void);

extern u8 lbl_8056CC40[];
extern u8 BB2_8056CC20[];
typedef struct { void* head; void* tail; } Queue;
extern Queue WaitingQueue[];

extern int StopAtNextInt_805DDD40;
extern DVDLowCallback Callback;
extern int WaitingCoverClose;
extern int lbl_805DDD60;
extern int WorkAroundType;
extern u32 WorkAroundSeekLocation;
extern s32 NextCommandNumber;
extern u8* BootInfo;
typedef struct FSTEntry {
    u32 isDirAndStringOff;
    u32 parentOrPosition;
    u32 nextEntryOrLength;
} FSTEntry;
extern FSTEntry* FstStart;
extern u8* FstStringStart;
extern u32 MaxEntryNum;
extern DVDDiskID* IDShouldBe;
extern DVDCommandBlock* executing;
extern int PauseFlag;
extern int PausingFlag;
extern int ResumeFromHere;
extern int ResetRequired;
extern stateFunc lbl_805DDDEC;
extern void (*lbl_805DDDF0)(void);
extern OSThreadQueue __DVDThreadQueue;

int autoInvalidation = 1;

void stateGettingError(void)
{
    DVDLowRequestError(cbForStateGettingError);
}

#pragma dont_inline on
void stateGoToRetry(void)
{
    DVDLowStopMotor(cbForStateGoToRetry);
}
#pragma dont_inline reset

void stateMotorStopped(void)
{
    DVDLowWaitCoverClose(cbForStateMotorStopped);
}

#if 1
int DVDLowWaitCoverClose(DVDLowCallback callback)
{
    Callback = callback;
    WaitingCoverClose = 1;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[1] = 2;
    return 1;
}
#endif

void cbForReadAsync(s32 result, DVDFileInfo* fileInfo)
{
    if (fileInfo->callback) {
        fileInfo->callback(result, fileInfo);
    }
}

#pragma dont_inline on
void stateCoverClosed_CMD(DVDCommandBlock* block)
{
    fn_803C4958(lbl_8056CC40, cbForStateCoverClosed);
}
#pragma dont_inline reset

void fn_803C82FC(void)
{
    if (lbl_805DDDF0) {
        lbl_805DDDF0();
    }
}

void stateCheckID3(void)
{
    DVDLowAudioBufferConfig(((u8*)IDShouldBe)[8], 10, cbForStateCheckID3);
}

void stateCheckID2a(void)
{
    DVDLowAudioBufferConfig(((u8*)IDShouldBe)[8], 10, cbForStateCheckID2a);
}

void __DVDFSInit(void)
{
    BootInfo = (u8*)0x80000000;
    FstStart = *(FSTEntry**)(BootInfo + 0x38);
    if (FstStart == 0) {
        return;
    }
    MaxEntryNum = FstStart[0].nextEntryOrLength;
    FstStringStart = (u8*)(FstStart + MaxEntryNum);
}

void stateCheckID2(void)
{
    DVDLowRead(BB2_8056CC20, 0x20, 0x420, cbForStateCheckID2);
}

void __DVDClearWaitingQueue(void)
{
    u32 i;
    for (i = 0; i < 4; i++) {
        Queue* q = &WaitingQueue[i];
        q->head = q;
        q->tail = q;
    }
}

void fn_803C5754(void)
{
    OSWakeupThread(&__DVDThreadQueue);
}

void fn_803C7C34(void)
{
    OSWakeupThread(&__DVDThreadQueue);
}

void fn_803C5778(void)
{
}

DVDDiskID* DVDGetCurrentDiskID(void)
{
    return (DVDDiskID*)0x80000000;
}

int DVDSetAutoInvalidation(int autoInval)
{
    int prev = autoInvalidation;
    autoInvalidation = autoInval;
    return prev;
}

int DVDLowBreak(void)
{
    StopAtNextInt_805DDD40 = 1;
    lbl_805DDD60 = 1;
    return 1;
}

#if 1
DVDLowCallback DVDLowClearCallback(void)
{
    DVDLowCallback old;
    __DIRegs[1] = 0;
    old = Callback;
    Callback = 0;
    return old;
}
#endif

int fn_803C5304(DVDCommandBlock* block)
{
    DVDCancel(block);
    return 1;
}

#pragma dont_inline on
void __DVDLowSetWAType(int type, u32 location)
{
    int enabled = OSDisableInterrupts();
    WorkAroundType = type;
    WorkAroundSeekLocation = location;
    OSRestoreInterrupts(enabled);
}
#pragma dont_inline reset

#if 1
#pragma dont_inline on
void DVDReset(void)
{
    DVDLowReset();
    __DIRegs[0] = 0x2a;
    __DIRegs[1] = __DIRegs[1];
    ResetRequired = 0;
    ResumeFromHere = 0;
}
#pragma dont_inline reset
#endif

#pragma dont_inline reset
s32 DVDGetCommandBlockStatus(DVDCommandBlock* block)
{
    int enabled = OSDisableInterrupts();
    s32 retVal;
    if (block->state == 3) {
        retVal = 1;
    } else {
        retVal = block->state;
    }
    OSRestoreInterrupts(enabled);
    return retVal;
}
#pragma dont_inline on

#if 1
void fn_803C78BC(void)
{
    int enabled;
    enabled = OSDisableInterrupts();
    PauseFlag = 0;
    if (PausingFlag) {
        PausingFlag = 0;
        stateReady();
    }
    OSRestoreInterrupts(enabled);
}
#endif

#if 1
int DVDLowStopMotor(DVDLowCallback callback)
{
    vu32* regs = __DIRegs;
    Callback = callback;
    StopAtNextInt_805DDD40 = 0;
    regs[2] = 0xE3000000;
    regs[7] = 1;
    SET_TIMEOUT();
    return 1;
}
#endif

#if 1
int DVDLowRequestError(DVDLowCallback callback)
{
    Callback = callback;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[2] = 0xE0000000;
    __DIRegs[7] = 1;
    SET_TIMEOUT();
    return 1;
}
#endif

#if 1
int fn_803C4898(u32 offset, DVDLowCallback callback)
{
    Callback = callback;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[2] = 0xAB000000;
    __DIRegs[3] = offset >> 2;
    __DIRegs[7] = 1;
    SET_TIMEOUT();
    return 1;
}
#endif

#if 1
int DVDLowRequestAudioStatus(u32 subcmd, DVDLowCallback callback)
{
    Callback = callback;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[2] = 0xE2000000 | subcmd;
    __DIRegs[7] = 1;
    SET_TIMEOUT();
    return 1;
}
#endif

#if 1
int fn_803C4BB0(u32 mode, u32 length, u32 offset, DVDLowCallback callback)
{
    Callback = callback;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[2] = 0xE1000000 | mode;
    __DIRegs[3] = offset >> 2;
    __DIRegs[4] = length;
    __DIRegs[7] = 1;
    SET_TIMEOUT();
    return 1;
}
#endif

#if 1
int fn_803C4B14(void* addr, DVDLowCallback callback)
{
    Callback = callback;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[2] = 0x12000000;
    __DIRegs[4] = 0x20;
    __DIRegs[5] = (u32)addr;
    __DIRegs[6] = 0x20;
    __DIRegs[7] = 3;
    SET_TIMEOUT();
    return 1;
}
#endif

#if 1
int fn_803C4958(void* addr, DVDLowCallback callback)
{
    Callback = callback;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[2] = 0xA8000040;
    __DIRegs[3] = 0;
    __DIRegs[4] = 0x20;
    __DIRegs[5] = (u32)addr;
    __DIRegs[6] = 0x20;
    __DIRegs[7] = 3;
    SET_TIMEOUT();
    return 1;
}
#endif

#if 1
int DVDLowAudioBufferConfig(int enable, u32 size, DVDLowCallback callback)
{
    Callback = callback;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[2] = 0xE4000000 | (enable ? 0x10000 : 0) | size;
    __DIRegs[7] = 1;
    SET_TIMEOUT();
    return 1;
}
#endif

typedef struct WACommand {
    s32 command;
    u32 a;
    u32 b;
    u32 c;
    u32 d;
} WACommand;
extern WACommand CommandList_8056CB40[];
extern DVDCommandBlock DummyCommandBlock;
extern int FatalErrorFlag;
extern int lbl_805DDDDC;
extern void fn_803C4470(u32 a, u32 b, u32 c, u32 d);
extern void stateGettingError(void);
extern void stateTimeout(void);
extern void __DVDFSInit(void);
extern DVDDiskID* bootInfo;
extern void cbForUnrecoveredErrorRetry(u32 intType);
extern void __DVDLowSetWAType(int type, u32 location);

void stateTimeout(void)
{
    __DVDStoreErrorCode(0x01234568);
    DVDReset();
    cbForStateError(0);
}

void __DVDInitWA(void)
{
    NextCommandNumber = 0;
    CommandList_8056CB40[0].command = -1;
    __DVDLowSetWAType(0, 0);
    OSInitAlarm();
}

void AlarmHandler(OSAlarm* alarm, void* context)
{
    DVDReset();
    DCInvalidateRange(lbl_8056CC40, 0x20);
    lbl_805DDDEC = stateCoverClosed_CMD;
    stateCoverClosed_CMD(executing);
}

int __DVDCheckWaitingQueue(void)
{
    u32 i;
    int enabled;

    enabled = OSDisableInterrupts();
    for (i = 0; i < 4; i++) {
        if (WaitingQueue[i].head != &WaitingQueue[i]) {
            OSRestoreInterrupts(enabled);
            return 1;
        }
    }
    OSRestoreInterrupts(enabled);
    return 0;
}

int fn_803C800C(DVDCommandBlock* block)
{
    int enabled;
    DVDCommandBlock* prev;
    DVDCommandBlock* next;

    enabled = OSDisableInterrupts();
    prev = block->prev;
    next = block->next;
    if (prev == 0 || next == 0) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    prev->next = next;
    next->prev = prev;
    OSRestoreInterrupts(enabled);
    return 1;
}

int __DVDPushWaitingQueue(int prio, DVDCommandBlock* block)
{
    int enabled;
    DVDCommandBlock* q;

    enabled = OSDisableInterrupts();
    q = (DVDCommandBlock*)&WaitingQueue[prio];
    ((DVDCommandBlock*)q->prev)->next = block;
    block->prev = q->prev;
    block->next = q;
    q->prev = block;
    OSRestoreInterrupts(enabled);
    return 1;
}

void cbForUnrecoveredError(u32 intType)
{
    if (intType == 16) {
        executing->state = -1;
        __DVDStoreErrorCode(0x01234568);
        DVDReset();
        cbForStateError(0);
        return;
    }
    if (intType & 1) {
        stateGoToRetry();
    } else {
        DVDLowRequestError(cbForUnrecoveredErrorRetry);
    }
}

#pragma dont_inline reset
static inline int isDir(int entrynum)
{
    if ((FstStart[entrynum].isDirAndStringOff & 0xFF000000) == 0) {
        return 0;
    }
    return 1;
}

int DVDFastOpen(int entrynum, DVDFileInfo* fileInfo)
{
    if (entrynum < 0 || entrynum >= MaxEntryNum || isDir(entrynum)) {
        return 0;
    }
    fileInfo->startAddr = FstStart[entrynum].parentOrPosition;
    fileInfo->length = FstStart[entrynum].nextEntryOrLength;
    fileInfo->callback = 0;
    fileInfo->cb.state = 0;
    return 1;
}
#pragma dont_inline on

void fn_803C437C(void)
{
    WACommand* cl = CommandList_8056CB40;
    WACommand* cmd;
    u32 idx = NextCommandNumber * 0x14;
    s32 c = *(s32*)((u8*)cl + idx);

    if (c == 1) {
        cmd = (WACommand*)((u8*)cl + idx);
        NextCommandNumber++;
        fn_803C4470(cmd->a, cmd->b, cmd->c, cmd->d);
    } else if (c == 2) {
        cmd = (WACommand*)((u8*)cl + idx);
        NextCommandNumber++;
        fn_803C4898(cmd->c, (DVDLowCallback)cmd->d);
    }
}

int fn_803C4580(void* addr, u32 length, u32 offset, DVDLowCallback callback)
{
    WACommand* cl = CommandList_8056CB40;
    u32 seek = offset & ~0x7FFF;

    if (seek == 0) {
        seek = 0;
    } else {
        seek = seek + WorkAroundSeekLocation;
    }
    cl[0].command = 2;
    cl[0].c = seek;
    cl[0].d = (u32)callback;
    cl[1].command = 1;
    cl[1].a = (u32)addr;
    cl[1].b = length;
    cl[1].c = offset;
    cl[1].d = (u32)callback;
    cl[2].command = -1;
    NextCommandNumber = 0;
    return fn_803C4898(seek, (DVDLowCallback)callback);
}

DVDCommandBlock* __DVDPopWaitingQueue(void)
{
    int enabled;
    u32 i;
    DVDCommandBlock* q;
    DVDCommandBlock* tmp;

    enabled = OSDisableInterrupts();
    for (i = 0; i < 4; i++) {
        if (WaitingQueue[i].head != &WaitingQueue[i]) {
            OSRestoreInterrupts(enabled);
            enabled = OSDisableInterrupts();
            q = (DVDCommandBlock*)&WaitingQueue[i];
            tmp = q->next;
            q->next = tmp->next;
            tmp->next->prev = q;
            OSRestoreInterrupts(enabled);
            tmp->next = 0;
            tmp->prev = 0;
            return tmp;
        }
    }
    OSRestoreInterrupts(enabled);
    return 0;
}

void cbForUnrecoveredErrorRetry(u32 intType)
{
    if (intType == 16) {
        executing->state = -1;
        __DVDStoreErrorCode(0x01234568);
        DVDReset();
        cbForStateError(0);
        return;
    }
    executing->state = -1;
    if (intType & 2) {
        __DVDStoreErrorCode(0x01234567);
        DVDLowStopMotor(cbForStateError);
    } else {
        __DVDStoreErrorCode(__DIRegs[8]);
        DVDLowStopMotor(cbForStateError);
    }
}

#pragma dont_inline reset
s32 DVDGetDriveStatus(void)
{
    s32 retVal;
    int enabled;

    enabled = OSDisableInterrupts();
    if (FatalErrorFlag) {
        retVal = -1;
    } else if (PausingFlag) {
        retVal = 8;
    } else if (executing == 0) {
        retVal = 0;
    } else if (executing == &DummyCommandBlock) {
        retVal = 0;
    } else {
        retVal = DVDGetCommandBlockStatus(executing);
    }
    OSRestoreInterrupts(enabled);
    return retVal;
}
#pragma dont_inline on
