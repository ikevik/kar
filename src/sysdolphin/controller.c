#include <dolphin/types.h>

typedef struct PadFrame {
    struct {
        u16 button;
        u8 pad[10];
    } s[4];
    u32 pad30;
} PadFrame;

typedef struct PadFrame4 {
    PadFrame f[4];
} PadFrame4;

typedef struct PadQ {
    u8 num;     // 0x0
    u8 read;    // 0x1
    u8 write;   // 0x2
    u8 cnt;     // 0x3
    PadFrame* ptr;  // 0x4
} PadQ;

typedef struct PadQ4 {
    u8 num;
    u8 read;
    u8 write;
    u8 cnt;
    PadFrame4* ptr;
} PadQ4;

typedef struct PadLib {
    PadQ q[1];
    PadQ4 q4;
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
    u8 r = lbl_8058B080.q4.cnt;
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
    fn_80411E70(4, &lbl_8058B080.q4, lbl_8058B080.q4.ptr, a, b);
}

void fn_80413A6C(void)
{
    fn_80413598(1, &lbl_8058B080, lbl_8058B080.q[0].ptr, lbl_8058B0E4);
}

void fn_80413D84(void)
{
    fn_80413BD4(1, lbl_8058B0E4, lbl_8058B634);
}

void fn_804125F8(int mode)
{
    PadQ* q = &lbl_8058B080.q[0];
    PadFrame* queue = q->ptr;
    int en = OSDisableInterrupts();
    switch (mode) {
    case 0:
        while (q->cnt > 1) {
            u8 rp = q->read;
            int wp;
            PadFrame* src;
            PadFrame* dst;
            int i;
            wp = (rp + 1) % q->num;
            q->read = wp;
            src = &queue[rp];
            dst = &queue[(u8) wp];
            for (i = 0; i < 4; i++) {
                dst->s[i].button = src->s[i].button | dst->s[i].button;
            }
            q->cnt--;
        }
        break;
    case 1: {
        u8 w = q->write;
        q->cnt = 0;
        q->read = w;
        break;
    }
    case 2:
        if (q->cnt > 1) {
            q->read = q->write != 0 ? q->write - 1 : q->num - 1;
            q->cnt = 1;
        }
        break;
    }
    OSRestoreInterrupts(en);
}

#if 0 /* near miss: register allocation of index temps */
void fn_80412740(int mode)
{
    PadQ4* q = &lbl_8058B080.q4;
    PadFrame4* queue = q->ptr;
    int en = OSDisableInterrupts();
    switch (mode) {
    case 0:
        while (q->cnt > 1) {
            u8 rp = q->read;
            u8 wp;
            PadFrame4* src;
            PadFrame4* dst;
            int i, j;
            wp = (rp + 1) % q->num;
            q->read = wp;
            src = &queue[rp];
            dst = &queue[wp];
            for (j = 0; j < 4; j++) {
                for (i = 0; i < 4; i++) {
                    dst->f[j].s[i].button = src->f[j].s[i].button | dst->f[j].s[i].button;
                }
            }
            q->cnt--;
        }
        break;
    case 1: {
        u8 w = q->write;
        q->cnt = 0;
        q->read = w;
        break;
    }
    case 2:
        if (q->cnt > 1) {
            q->read = q->write != 0 ? q->write - 1 : q->num - 1;
            q->cnt = 1;
        }
        break;
    }
    OSRestoreInterrupts(en);
}

#endif

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
