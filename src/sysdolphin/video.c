#include <dolphin/types.h>

typedef void (*HSD_VICallback)(void);

typedef struct HSD_VIData {
    u8 pad0[0x1D8];
    HSD_VICallback pre_retrace; // 0x1D8
    HSD_VICallback post_retrace; // 0x1DC
    u8 pad1[0x1E8 - 0x1E0];
    HSD_VICallback x1e8;
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

HSD_VICallback fn_80410B38(HSD_VICallback cb)
{
    HSD_VICallback old = lbl_80589A80.x1e8;
    int en = OSDisableInterrupts();
    lbl_80589A80.x1e8 = cb;
    OSRestoreInterrupts(en);
    return old;
}
