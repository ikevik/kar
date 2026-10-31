#include "dolphin/sdk_common.h"

volatile u16 __DSPRegs[] : 0xcc005000;

typedef void (*ARCallback)(void);

extern char lbl_804FC980[];
const char* __ARVersion = (const char*)lbl_804FC980;

extern ARCallback lbl_805DE000;
#define __AR_Callback lbl_805DE000

static u32 __AR_Size;
static u32 __AR_InternalSize;
static u32 __AR_ExpansionSize;
static u32 __AR_StackPointer;
static u32 __AR_FreeBlocks;
static u32* __AR_BlockLength;
static BOOL __AR_init_flag;

static void __ARHandler(s16 interrupt, OSContext* context);
static void __ARChecksize(void);

void ARStartDMA(u32 type, u32 mainmem_addr, u32 aram_addr, u32 length)
{
    BOOL old;

    old = OSDisableInterrupts();

    __DSPRegs[16] = (u16)((__DSPRegs[16] & ~0x03ff) | (mainmem_addr >> 16));
    __DSPRegs[17] = (u16)((__DSPRegs[17] & ~0xffe0) | (mainmem_addr & 0xffff));
    __DSPRegs[18] = (u16)((__DSPRegs[18] & ~0x03ff) | (aram_addr >> 16));
    __DSPRegs[19] = (u16)((__DSPRegs[19] & ~0xffe0) | (aram_addr & 0xffff));
    __DSPRegs[20] = (u16)((__DSPRegs[20] & ~0x8000) | (type << 15));
    __DSPRegs[20] = (u16)((__DSPRegs[20] & ~0x03ff) | (length >> 16));
    __DSPRegs[21] = (u16)((__DSPRegs[21] & ~0xffe0) | (length & 0xffff));

    OSRestoreInterrupts(old);
}

u32 ARAlloc(u32 length)
{
    u32 address;
    BOOL old;

    old = OSDisableInterrupts();
    address = __AR_StackPointer;
    __AR_StackPointer += length;
    *__AR_BlockLength = length;
    __AR_BlockLength++;
    __AR_FreeBlocks--;
    OSRestoreInterrupts(old);
    return address;
}

u32 ARFree(u32* length)
{
    BOOL old;

    old = OSDisableInterrupts();
    __AR_BlockLength--;
    if (length) {
        *length = *__AR_BlockLength;
    }
    __AR_StackPointer -= *__AR_BlockLength;
    __AR_FreeBlocks++;
    OSRestoreInterrupts(old);
    return __AR_StackPointer;
}

u32 ARInit(u32* stack_index_addr, u32 num_entries)
{
    BOOL old;

    if (__AR_init_flag == TRUE) {
        return 0x4000;
    }
    OSRegisterVersion(__ARVersion);
    old = OSDisableInterrupts();
    __AR_Callback = NULL;
    __OSSetInterruptHandler(6, __ARHandler);
    __OSUnmaskInterrupts(0x02000000);
    __AR_StackPointer = 0x4000;
    __AR_FreeBlocks = num_entries;
    __AR_BlockLength = stack_index_addr;
    __DSPRegs[13] = (u16)((__DSPRegs[13] & 0xff) | (__DSPRegs[13] & ~0xff));
    __ARChecksize();
    __AR_init_flag = TRUE;
    OSRestoreInterrupts(old);
    return __AR_StackPointer;
}

void ARReset(void)
{
    __AR_init_flag = FALSE;
}

u32 ARGet_BaseAddressOrSizeOrInternalSize(void)
{
    return __AR_Size;
}

static void __ARHandler(s16 interrupt, OSContext* context)
{
    OSContext exceptionContext;
    u16 tmp;

    tmp = __DSPRegs[5];
    tmp = (u16)((tmp & ~(0x80 | 0x08)) | 0x20);
    __DSPRegs[5] = tmp;

    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);

    if (__AR_Callback) {
        __AR_Callback();
    }

    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
}
