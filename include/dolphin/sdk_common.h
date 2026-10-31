#ifndef SDK_COMMON_H
#define SDK_COMMON_H

#include "dolphin/types.h"

#ifndef NULL
#define NULL 0
#endif
#define TRUE 1
#define FALSE 0

typedef s64 OSTime;
typedef struct {
    u8 pad[0x2C8];
} OSContext;

extern BOOL OSDisableInterrupts(void);
extern BOOL OSRestoreInterrupts(BOOL level);
extern void OSClearContext(OSContext* context);
extern void OSSetCurrentContext(OSContext* context);
extern OSTime OSGetTime(void);
extern void OSRegisterVersion(const char* version);
extern void* __OSSetInterruptHandler(s16 interrupt, void* handler);
extern u32 __OSUnmaskInterrupts(u32 mask);

extern u32 __OSBusClock : 0x800000F8;
#define OS_BUS_CLOCK __OSBusClock
#define OS_TIMER_CLOCK (OS_BUS_CLOCK / 4)
#define OSNanosecondsToTicks(nsec) (((u32)(nsec) * (OS_TIMER_CLOCK / 125000)) / 8000)

#endif
