#include <dolphin/types.h>

typedef void (*HSD_VICallback)(void);

typedef struct HSD_VIData {
    u8 pad0[0x1D8];
    HSD_VICallback pre_retrace; // 0x1D8
    HSD_VICallback post_retrace; // 0x1DC
    s32 x1e0;
    void* x1e4;
    void (*x1e8)(void*);
} HSD_VIData;

extern HSD_VIData lbl_80589A80;

extern int OSDisableInterrupts(void);
extern void OSRestoreInterrupts(int);

HSD_VICallback HSD_VISetUserPreRetraceCallback(HSD_VICallback cb)
{
    HSD_VICallback old = lbl_80589A80.pre_retrace;
    int en = OSDisableInterrupts();
    lbl_80589A80.pre_retrace = cb;
    OSRestoreInterrupts(en);
    return old;
}

HSD_VICallback fn_80410AE4(HSD_VICallback cb)
{
    HSD_VICallback old = lbl_80589A80.post_retrace;
    int en = OSDisableInterrupts();
    lbl_80589A80.post_retrace = cb;
    OSRestoreInterrupts(en);
    return old;
}

void (*fn_80410B38(void (*cb)(void*)))(void*)
{
    void (*old)(void*) = lbl_80589A80.x1e8;
    int en = OSDisableInterrupts();
    lbl_80589A80.x1e8 = cb;
    OSRestoreInterrupts(en);
    return old;
}

void fn_80411008(void)
{
    lbl_80589A80.x1e0 = 0;
    if (lbl_80589A80.x1e8 != NULL)
        lbl_80589A80.x1e8(lbl_80589A80.x1e4);
}

s32 fn_8041104C(void)
{
    return lbl_80589A80.x1e0;
}
