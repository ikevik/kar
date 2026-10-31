#include <dolphin/types.h>

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

extern vu32 __DIRegs_[];
#define __DIRegs ((u32*)0xCC006000)

extern int OSDisableInterrupts(void);
extern int OSRestoreInterrupts(int level);
extern void OSWakeupThread(OSThreadQueue* queue);
extern void OSInitAlarm(void);
extern void DCInvalidateRange(void* addr, u32 nBytes);
extern int DVDCancel(DVDCommandBlock* block);

extern void DVDLowReset(void);
extern int DVDLowRequestError(DVDLowCallback cb);
extern int DVDLowStopMotor(DVDLowCallback cb);
extern int DVDLowAudioBufferConfig(int enable, u32 size, DVDLowCallback cb);
extern int DVDLowRead(void* addr, u32 length, u32 offset, DVDLowCallback cb);
extern void fn_803C4958(void* addr, DVDLowCallback cb);
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
extern u8* FstStart;
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

void stateGoToRetry(void)
{
    DVDLowStopMotor(cbForStateGoToRetry);
}

void stateMotorStopped(void)
{
    DVDLowWaitCoverClose(cbForStateMotorStopped);
}

int DVDLowWaitCoverClose(DVDLowCallback callback)
{
    Callback = callback;
    WaitingCoverClose = 1;
    StopAtNextInt_805DDD40 = 0;
    __DIRegs[1] = 2;
    return 1;
}

void cbForReadAsync(s32 result, DVDFileInfo* fileInfo)
{
    if (fileInfo->callback) {
        fileInfo->callback(result, fileInfo);
    }
}

void stateCoverClosed_CMD(DVDCommandBlock* block)
{
    fn_803C4958(lbl_8056CC40, cbForStateCoverClosed);
}

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
    FstStart = *(u8**)(BootInfo + 0x38);
    if (FstStart == 0) {
        return;
    }
    MaxEntryNum = *(u32*)(FstStart + 8);
    FstStringStart = FstStart + MaxEntryNum * 12;
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

DVDLowCallback DVDLowClearCallback(void)
{
    DVDLowCallback old;
    __DIRegs[1] = 0;
    old = Callback;
    Callback = 0;
    return old;
}

int fn_803C5304(DVDCommandBlock* block)
{
    DVDCancel(block);
    return 1;
}

void __DVDLowSetWAType(int type, u32 location)
{
    int enabled = OSDisableInterrupts();
    WorkAroundType = type;
    WorkAroundSeekLocation = location;
    OSRestoreInterrupts(enabled);
}

void DVDReset(void)
{
    DVDLowReset();
    __DIRegs[0] = 0x2a;
    __DIRegs[1] = __DIRegs[1];
    ResetRequired = 0;
    ResumeFromHere = 0;
}

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

void fn_803C78BC(void)
{
    int enabled = OSDisableInterrupts();
    PauseFlag = 0;
    if (PausingFlag) {
        PausingFlag = 0;
        stateReady();
    }
    OSRestoreInterrupts(enabled);
}
