#include "dolphin/sdk_common.h"

#pragma dont_inline on

volatile u16 __DSPRegs[] : 0xcc005000;

typedef struct DSPTaskInfo DSPTaskInfo;
typedef void (*DSPCallback)(DSPTaskInfo* task);

struct DSPTaskInfo {
    volatile u32 state;
    volatile u32 priority;
    volatile u32 flags;
    u32 iram_mmem_addr;
    u32 iram_length;
    u32 iram_addr;
    u32 dram_mmem_addr;
    u32 dram_length;
    u32 dram_addr;
    u16 dsp_init_vector;
    u16 dsp_resume_vector;
    DSPCallback init_cb;
    DSPCallback res_cb;
    DSPCallback done_cb;
    DSPCallback req_cb;
    DSPTaskInfo* next;
    DSPTaskInfo* prev;
};

extern void __DSP_debug_printf(const char* fmt, ...);

static char __DSP_init_strs[] =
    "<< Dolphin SDK - DSP\trelease build: Sep  5 2002 05:35:13 (0x2301) >>\0\0\0\0"
    "DSPInit(): Build Date: %s %s\n\0\0\0"
    "Sep  5 2002\0"
    "05:35:13\0\0\0";

const char* __DSPVersion_a[2] = { __DSP_init_strs, 0 };
#define __DSPVersion __DSPVersion_a[0]

static BOOL __DSP_init_flag_a[2];
#define __DSP_init_flag __DSP_init_flag_a[0]
DSPTaskInfo* __DSP_curr_task;
DSPTaskInfo* __DSP_first_task;
DSPTaskInfo* __DSP_last_task;
DSPTaskInfo* __DSP_tmp_task;
DSPTaskInfo* __DSP_rude_task;
BOOL __DSP_rude_task_pending;

static void __DSPHandler(s16 interrupt, OSContext* context);
void __DSP_exec_task(DSPTaskInfo* curr, DSPTaskInfo* next);
void __DSP_boot_task(DSPTaskInfo* task);
void __DSP_insert_task(DSPTaskInfo* task);
void __DSP_remove_task(DSPTaskInfo* task);

u32 DSPCheckMailToDSP(void)
{
    return ((u32)__DSPRegs[0] >> 15) & 1;
}

u32 DSPCheckMailFromDSP(void)
{
    return ((u32)__DSPRegs[2] >> 15) & 1;
}

u32 DSPReadMailFromDSP(void)
{
    return (__DSPRegs[2] << 16) | __DSPRegs[3];
}

void DSPSendMailToDSP(u32 mail)
{
    __DSPRegs[0] = (u16)(mail >> 16);
    __DSPRegs[1] = (u16)mail;
}

void DSPInit(void)
{
    BOOL old;
    u16 tmp;

    __DSP_debug_printf(__DSP_init_strs + 0x48, __DSP_init_strs + 0x68, __DSP_init_strs + 0x74);

    if (__DSP_init_flag == TRUE) {
        return;
    }
    OSRegisterVersion(__DSPVersion);
    old = OSDisableInterrupts();
    __OSSetInterruptHandler(7, __DSPHandler);
    __OSUnmaskInterrupts(0x01000000);
    tmp = __DSPRegs[5];
    tmp = (u16)((tmp & ~0xa8) | 0x800);
    __DSPRegs[5] = tmp;
    tmp = __DSPRegs[5];
    tmp = (u16)(tmp & ~0xac);
    __DSPRegs[5] = tmp;
    __DSP_tmp_task = NULL;
    __DSP_curr_task = NULL;
    __DSP_last_task = NULL;
    __DSP_first_task = NULL;
    __DSP_init_flag = TRUE;
    OSRestoreInterrupts(old);
}

BOOL DSPCheckInit(void)
{
    return __DSP_init_flag;
}

DSPTaskInfo* DSPAddTask(DSPTaskInfo* task)
{
    BOOL old;

    old = OSDisableInterrupts();
    __DSP_insert_task(task);
    task->state = 0;
    task->flags = 1;
    OSRestoreInterrupts(old);
    if (task == __DSP_first_task) {
        __DSP_boot_task(task);
    }
    return task;
}

DSPTaskInfo* DSPAssertTask(DSPTaskInfo* task)
{
    BOOL old;

    old = OSDisableInterrupts();
    if (__DSP_curr_task == task) {
        __DSP_rude_task = task;
        __DSP_rude_task_pending = 1;
        OSRestoreInterrupts(old);
        return task;
    }
    if (task->priority < __DSP_curr_task->priority) {
        __DSP_rude_task = task;
        __DSP_rude_task_pending = 1;
        if (__DSP_curr_task->state == 1) {
            BOOL old2 = OSDisableInterrupts();
            __DSPRegs[5] = (u16)((__DSPRegs[5] & ~0xa8) | 0x2);
            OSRestoreInterrupts(old2);
        }
        OSRestoreInterrupts(old);
        return task;
    }
    OSRestoreInterrupts(old);
    return NULL;
}

void __DSP_debug_printf(const char* fmt, ...)
{
}

#define SEND_MAIL(x)                                                                              \
    DSPSendMailToDSP(x);                                                                          \
    while (DSPCheckMailToDSP()) {                                                                 \
    }

static void __DSPHandler(s16 interrupt, OSContext* context)
{
    u32 pad[2];
    OSContext exceptionContext;
    u32 mail;
    DSPTaskInfo* task;
    u16 tmp;

    tmp = __DSPRegs[5];
    tmp = (u16)((tmp & ~0x28) | 0x80);
    __DSPRegs[5] = tmp;
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);

    while (!DSPCheckMailFromDSP()) {
    }
    mail = DSPReadMailFromDSP();
    task = __DSP_curr_task;

    if ((task->flags & 2) && ((mail + 0x232F0000) == 2)) {
        mail = 0xDCD10003;
    }

    switch (mail) {
    case 0xDCD10000:
        __DSP_curr_task->state = 1;
        if (__DSP_curr_task->init_cb) {
            __DSP_curr_task->init_cb(__DSP_curr_task);
        }
        break;
    case 0xDCD10001:
        __DSP_curr_task->state = 1;
        if (__DSP_curr_task->res_cb) {
            __DSP_curr_task->res_cb(__DSP_curr_task);
        }
        break;
    case 0xDCD10002:
        if (__DSP_rude_task_pending) {
            if (task == __DSP_rude_task) {
                SEND_MAIL(0xCDD10003);
                __DSP_rude_task = NULL;
                __DSP_rude_task_pending = 0;
                if (__DSP_curr_task->res_cb) {
                    __DSP_curr_task->res_cb(__DSP_curr_task);
                }
            } else {
                SEND_MAIL(0xCDD10001);
                __DSP_exec_task(__DSP_curr_task, __DSP_rude_task);
                __DSP_curr_task->state = 2;
                __DSP_curr_task = __DSP_rude_task;
                __DSP_rude_task = NULL;
                __DSP_rude_task_pending = 0;
            }
        } else if (task->next == NULL) {
            if (task == __DSP_first_task) {
                SEND_MAIL(0xCDD10003);
                if (__DSP_curr_task->res_cb) {
                    __DSP_curr_task->res_cb(__DSP_curr_task);
                }
            } else {
                SEND_MAIL(0xCDD10001);
                __DSP_exec_task(__DSP_curr_task, __DSP_first_task);
                __DSP_curr_task->state = 2;
                __DSP_curr_task = __DSP_first_task;
            }
        } else {
            SEND_MAIL(0xCDD10001);
            __DSP_exec_task(__DSP_curr_task, __DSP_curr_task->next);
            __DSP_curr_task->state = 2;
            __DSP_curr_task = __DSP_curr_task->next;
        }
        break;
    case 0xDCD10003:
        if (__DSP_rude_task_pending) {
            if (task->done_cb) {
                task->done_cb(task);
            }
            SEND_MAIL(0xCDD10001);
            __DSP_exec_task(NULL, __DSP_rude_task);
            __DSP_remove_task(__DSP_curr_task);
            __DSP_curr_task = __DSP_rude_task;
            __DSP_rude_task_pending = 0;
            __DSP_rude_task = NULL;
        } else if (task->next == NULL) {
            if (task == __DSP_first_task) {
                if (task->done_cb) {
                    task->done_cb(task);
                }
                SEND_MAIL(0xCDD10002);
                __DSP_curr_task->state = 3;
                __DSP_remove_task(__DSP_curr_task);
            } else {
                if (task->done_cb) {
                    task->done_cb(task);
                }
                SEND_MAIL(0xCDD10001);
                __DSP_curr_task->state = 3;
                __DSP_exec_task(NULL, __DSP_first_task);
                __DSP_curr_task = __DSP_first_task;
                __DSP_remove_task(__DSP_last_task);
            }
        } else {
            if (task->done_cb) {
                task->done_cb(task);
            }
            SEND_MAIL(0xCDD10001);
            __DSP_curr_task->state = 3;
            __DSP_exec_task(NULL, __DSP_curr_task->next);
            __DSP_curr_task = __DSP_curr_task->next;
            __DSP_remove_task(__DSP_curr_task->prev);
        }
        break;
    case 0xDCD10004:
        if (task->req_cb) {
            task->req_cb(task);
        }
        break;
    }

    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
}

void __DSP_exec_task(DSPTaskInfo* curr, DSPTaskInfo* next)
{
    if (curr) {
        SEND_MAIL(curr->dram_mmem_addr);
        SEND_MAIL(curr->dram_length);
        SEND_MAIL(curr->dram_addr);
    } else {
        SEND_MAIL(0);
        SEND_MAIL(0);
        SEND_MAIL(0);
    }

    SEND_MAIL(next->iram_mmem_addr);
    SEND_MAIL(next->iram_length);
    SEND_MAIL(next->iram_addr);

    if (next->state == 0) {
        SEND_MAIL(next->dsp_init_vector);
        SEND_MAIL(0);
        SEND_MAIL(0);
        SEND_MAIL(0);
    } else {
        SEND_MAIL(next->dsp_resume_vector);
        SEND_MAIL(next->dram_mmem_addr);
        SEND_MAIL(next->dram_length);
        SEND_MAIL(next->dram_addr);
    }
}

static char __DSP_boot_strs[] =
    "DSP is booting task: 0x%08X\n\0\0\0\0"
    "__DSP_boot_task()  : IRAM MMEM ADDR: 0x%08X\n\0\0\0\0"
    "__DSP_boot_task()  : IRAM DSP ADDR : 0x%08X\n\0\0\0\0"
    "__DSP_boot_task()  : IRAM LENGTH   : 0x%08X\n\0\0\0\0"
    "__DSP_boot_task()  : DRAM MMEM ADDR: 0x%08X\n\0\0\0\0"
    "__DSP_boot_task()  : Start Vector  : 0x%08X\n\0\0\0\0"
    "__DSP_add_task() : Added task    : 0x%08X\n\0\0\0\0\0";

void __DSP_boot_task(DSPTaskInfo* task)
{
    volatile u32 mail;

    while (!DSPCheckMailFromDSP()) {
    }
    mail = DSPReadMailFromDSP();

    SEND_MAIL(0x80F3A001);
    SEND_MAIL(task->iram_mmem_addr);
    SEND_MAIL(0x80F3C002);
    SEND_MAIL(task->iram_addr & 0xffff);
    SEND_MAIL(0x80F3A002);
    SEND_MAIL(task->iram_length);
    SEND_MAIL(0x80F3B002);
    SEND_MAIL(0);
    SEND_MAIL(0x80F3D001);
    SEND_MAIL(task->dsp_init_vector);

    __DSP_debug_printf(__DSP_boot_strs, task);
    __DSP_debug_printf(__DSP_boot_strs + 0x20, task->iram_mmem_addr);
    __DSP_debug_printf(__DSP_boot_strs + 0x50, task->iram_addr);
    __DSP_debug_printf(__DSP_boot_strs + 0x80, task->iram_length);
    __DSP_debug_printf(__DSP_boot_strs + 0xb0, task->dram_length);
    __DSP_debug_printf(__DSP_boot_strs + 0xe0, task->dsp_init_vector);
}

void __DSP_insert_task(DSPTaskInfo* task)
{
    DSPTaskInfo* temp;

    if (__DSP_first_task == NULL) {
        __DSP_curr_task = task;
        __DSP_last_task = task;
        __DSP_first_task = task;
        task->prev = NULL;
        task->next = NULL;
    } else {
        temp = __DSP_first_task;
        while (temp) {
            if (task->priority < temp->priority) {
                task->prev = temp->prev;
                temp->prev = task;
                task->next = temp;
                if (task->prev == NULL) {
                    __DSP_first_task = task;
                } else {
                    task->prev->next = task;
                }
                break;
            }
            temp = temp->next;
        }
        if (temp == NULL) {
            __DSP_last_task->next = task;
            task->next = NULL;
            task->prev = __DSP_last_task;
            __DSP_last_task = task;
        }
    }
}

void __DSP_remove_task(DSPTaskInfo* task)
{
    task->flags = 0;
    task->state = 3;
    if (__DSP_first_task == task) {
        if (task->next) {
            __DSP_first_task = task->next;
            task->next->prev = NULL;
        } else {
            __DSP_curr_task = NULL;
            __DSP_last_task = NULL;
            __DSP_first_task = NULL;
        }
    } else if (__DSP_last_task == task) {
        __DSP_last_task = task->prev;
        task->prev->next = NULL;
        __DSP_curr_task = __DSP_first_task;
    } else {
        __DSP_curr_task = task->next;
        task->prev->next = task->next;
        task->next->prev = task->prev;
    }
}
