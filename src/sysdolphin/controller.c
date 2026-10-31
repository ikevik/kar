#include <dolphin/types.h>

typedef struct PadQ {
    u8 pad0[3];
    u8 cnt;     // 0x3
    void* ptr;  // 0x4
} PadQ;

typedef struct PadLib {
    PadQ q[2];
    u8 pad10[0x5A - 0x10];
    u8 x5a;
    u8 x5b;
} PadLib;

extern PadLib lbl_8058B080;
typedef struct PadStat {
    u32 w[17];
} PadStat;

extern PadStat lbl_8058B0E4[5][4];
extern PadStat lbl_8058B634[5][4];
extern PadStat lbl_80503F08;

extern int OSDisableInterrupts(void);
extern void OSRestoreInterrupts(int);
extern void fn_80411E70(int, void*, void*, u32, u32);
extern void fn_80413598(int, void*, void*, void*);
extern void fn_80413BD4(int, void*, void*);

u8 fn_80411CAC(void)
{
    int en = OSDisableInterrupts();
    u8 r = lbl_8058B080.q[0].cnt;
    OSRestoreInterrupts(en);
    return r;
}

u8 fn_80411CE8(void)
{
    int en = OSDisableInterrupts();
    u8 r = lbl_8058B080.q[1].cnt;
    OSRestoreInterrupts(en);
    return r;
}

BOOL fn_80411D24(void)
{
    return lbl_8058B080.x5b != 0;
}

void fn_80412480(u32 a, u32 b)
{
    fn_80411E70(1, &lbl_8058B080.q[0], lbl_8058B080.q[0].ptr, a, b);
}

void fn_804124BC(u32 a, u32 b)
{
    fn_80411E70(4, &lbl_8058B080.q[1], lbl_8058B080.q[1].ptr, a, b);
}

void fn_80413A6C(void)
{
    fn_80413598(1, &lbl_8058B080, lbl_8058B080.q[0].ptr, lbl_8058B0E4);
}

void fn_80413D84(void)
{
    fn_80413BD4(1, lbl_8058B0E4, lbl_8058B634);
}

#if 0 /* copy loops: 11 lines off (pointer init via r0/mr) */
void fn_80413EE0(void)
{
    int i;
    PadStat* p = lbl_8058B0E4[0];
    for (i = 0; i < 4; i++, p++) {
        *p = lbl_80503F08;
    }
}

void fn_80413F34(void)
{
    int j, i;
    for (j = 0; j < 4; j++) {
        for (i = 0; i < 4; i++) {
            lbl_8058B0E4[j + 1][i] = lbl_80503F08;
        }
    }
}

void fn_80413F9C(void)
{
    int i;
    for (i = 0; i < 4; i++) {
        lbl_8058B634[0][i] = lbl_80503F08;
    }
}

void fn_80413FF0(void)
{
    int j, i;
    for (j = 0; j < 4; j++) {
        for (i = 0; i < 4; i++) {
            lbl_8058B634[j + 1][i] = lbl_80503F08;
        }
    }
}
#endif
