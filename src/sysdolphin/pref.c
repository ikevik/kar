#include <dolphin/types.h>
#include <functions.h>

typedef struct HSD_PerfStat {
    f32 cpu;
    f32 draw;
    f32 total;
    u32 pad;
    u32 env[32];
} HSD_PerfStat;

extern HSD_PerfStat lbl_80504418;
extern HSD_PerfStat lbl_80504388;
extern s64 lbl_805DE2F0;
extern s64 OSGetTime(void);
extern void* memset(void*, int, size_t);

#define OS_TIMER_CLOCK (*(u32*) 0x800000F8 / 4)

void HSD_PerfInitStat(void)
{
    lbl_80504388 = lbl_80504418;
    memset(&lbl_80504418, 0, 0x90);
}

void HSD_PerfSetStartTime(void)
{
    lbl_805DE2F0 = OSGetTime();
}

void HSD_PerfSetCPUTime(void)
{
    s64 t = OSGetTime() - lbl_805DE2F0;
    lbl_80504418.cpu = (f32) t / (f32) (OS_TIMER_CLOCK / 60);
}

void HSD_PerfSetDrawTime(void)
{
    s64 t = OSGetTime() - lbl_805DE2F0;
    lbl_80504418.draw = (f32) t / (f32) (OS_TIMER_CLOCK / 60);
}

void HSD_PerfSetTotalTime(void)
{
    s64 t = OSGetTime() - lbl_805DE2F0;
    lbl_80504418.total = (f32) t / (f32) (OS_TIMER_CLOCK / 60);
}

void HSD_PerfCountEnvelopeBlending(int n)
{
    if (n >= 32)
        __assert("perf.c", 0xA4, "n < 32");
    lbl_80504418.env[n]++;
}
