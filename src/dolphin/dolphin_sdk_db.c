#include <dolphin/types.h>

typedef struct DBInterface {
    u32 bPresent;
    u32 exceptionMask;
    void (*ExceptionDestination)(void);
    void* exceptionReturn;
} DBInterface;

extern void OSReport(const char* msg, ...);
extern void OSDumpContext(void* ctx);
extern void PPCHalt(void);

s32 DBVerbose;
DBInterface* __DBInterface;

void __DBExceptionDestination(void);
char lbl_804F92F0[] = "DBExceptionDestination\n";

void DBInit(void)
{
    __DBInterface = (DBInterface*)((u32)0x40 + 0x80000000);
    __DBInterface->ExceptionDestination = (void (*)(void))((u32)__DBExceptionDestination + 0x80000000);
    DBVerbose = 1;
}

u32 DBIsDebuggerPresent(void)
{
    if (__DBInterface == 0) {
        return 0;
    }
    return __DBInterface->bPresent;
}

void fn_803C3474(void)
{
    u32* contextAddr = (u32*)0xC0;
    void* ctx = (void*)(0x80000000 + *contextAddr);
    OSReport(lbl_804F92F0);
    OSDumpContext(ctx);
    PPCHalt();
}

asm void __DBExceptionDestination(void)
{
    nofralloc
    mfmsr r3
    ori r3, r3, 0x30
    mtmsr r3
    b fn_803C3474
}

u32 __DBIsExceptionMarked(u8 exception)
{
    return __DBInterface->exceptionMask & (1 << exception);
}

void DBPrintf(char* format, ...)
{
}
