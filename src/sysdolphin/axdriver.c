#include "dolphin/types.h"
#include "functions.h"

typedef struct AXVoice {
    u8 pad0[4];
    struct AXVoice* next; // 0x04
    u32 flags; // 0x08
    s32 id; // 0x0c
    s32 pid; // 0x10
    u8 pad14[0x1a - 0x14];
    u16 vid; // 0x1a
    u8 pad1c[0x34 - 0x1c];
    s16 detune[2]; // 0x34
    u8 pad38[0x3d - 0x38];
    u8 prio; // 0x3d
    u8 pad3e[0x48 - 0x3e];
} AXVoice;

extern AXVoice* lbl_8058E298[64];
extern u8 lbl_8058E398[2][0x40];
extern AXVoice* lbl_805DE480;
extern AXVoice* lbl_805DE48C;
extern u32 lbl_805DE494;
extern s32 lbl_805DE49C;
extern const f32 lbl_805E6110, lbl_805E6134, lbl_805E6138, lbl_805E613C, lbl_805E6140, lbl_805E6144, lbl_805E6148, lbl_805E614C;
extern s32 OSDisableInterrupts(void);
extern void OSRestoreInterrupts(s32);
extern void fn_80443FB0(s32, s32, s32);
extern void fn_804438C4(s32, s32, s32);
extern s32 fn_80449AE4(s32);
extern void fn_80449648(s32);
extern void fn_80449998(s32);
extern void fn_80449A40(s32);
extern u32 lbl_805DE450;
extern double fn_803BD468(double, double);
extern void fn_8044A250(s32, f32, s32);
extern const double lbl_805E6118;
extern const f32 lbl_805E6120;
extern const f32 lbl_805E6128, lbl_805E612C, lbl_805E6130;
extern void fn_80449BA0(s32, u8, u16, s32, s32);
extern void fn_80449DC0(s32, u8, s32);
extern void fn_80449E98(s32, u8, s32);

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SMSTATE_MASK 0xc0000000
#define SMSTATE_ACTIVE 0x40000000
#define SMSTATE_SLEEP 0x80000000
extern u32 lbl_805DD120;
extern s32 lbl_805DD124;
extern s32 lbl_805DD128;
extern s32 lbl_805DD12C;
extern s32 lbl_805DD130;
extern u8* lbl_805DE438;
extern u32 lbl_805DE43C;
extern s16* lbl_805DE440;
extern s32 lbl_805DE444;
extern u32 lbl_805DE448;
extern s32 lbl_805DE44C;
extern s32 lbl_805DE454;

s32 fn_80442674(s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 AXDriverSetupAux(s32, s32, void*);

u8* fn_804407E0(u32 size)
{
    u8* ptr;
    u32 offset = lbl_805DE43C;
    u32 end = offset + size;
    lbl_805DE43C = end;
    ptr = lbl_805DE438 + offset;
    if (!(end < lbl_805DE448)) {
        __assert(__FILE__, 0x53, "AXDriver");
    }
    return ptr;
}

void fn_80440840(void)
{
}

static BOOL axFreeVoice(AXVoice* v)
{
    BOOL ok;
    s32 pid;
    if (v == NULL) {
        return FALSE;
    }
    ok = FALSE;
    if ((v->flags & SMSTATE_MASK) == SMSTATE_ACTIVE || (v->flags & SMSTATE_MASK) == SMSTATE_SLEEP) {
        ok = TRUE;
    }
    if (!ok) {
        __assert(__FILE__, 0x9e, "(v->flags&SMSTATE_MASK) == SMSTATE_ACTIVE || (v->flags&SMSTATE_MASK) == SMSTATE_SLEEP");
    }
    pid = v->pid;
    if (pid != -1) {
        lbl_8058E298[pid & 0x3f] = NULL;
        v->pid = -1;
        fn_80449648(pid);
        lbl_805DE454--;
    }
    v->flags &= ~0x20000000;
    v->flags &= 0x3fffffff;
    return TRUE;
}

s32 fn_80440844(s32 id)
{
    s32 intr;
    AXVoice* v;
    s32 ret;
    s32 idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return 0;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & SMSTATE_MASK) == 0) {
        OSRestoreInterrupts(intr);
        return 0;
    }
    ret = axFreeVoice(v);
    OSRestoreInterrupts(intr);
    return ret;
}

s32 fn_80440990(void)
{
    s32 intr = OSDisableInterrupts();
    AXVoice* v;
    for (v = lbl_805DE480; v != NULL; v = v->next) {
        if ((v->flags & SMSTATE_MASK) != 0) {
            axFreeVoice(v);
        }
    }
    OSRestoreInterrupts(intr);
    return 1;
}

s32 fn_80440A88(s32 vid)
{
    s32 intr;
    AXVoice* v;
    if (vid >= 0 && vid <= lbl_805DE444) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & SMSTATE_MASK) != 0 && v->vid == vid) {
                axFreeVoice(v);
            }
        }
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_80440BB0(s32 prio)
{
    s32 intr;
    AXVoice* v;
    if (prio >= 0 && prio <= 0x3f) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & SMSTATE_MASK) != 0 && v->prio == prio) {
                axFreeVoice(v);
            }
        }
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_80442A10(s32 a, s32 b, s32 c, s32 d, s32 idx)
{
    return fn_80442674(a, b, c, 0, 0, lbl_8058E398[0][idx], lbl_8058E398[1][idx], d, idx);
}

s32 fn_8044262C(s32 a, s32 b, s32 c, s32 d)
{
    if (a < 0 || a > b || b > c || c > d || d >= 0x168) {
        return 0;
    }
    lbl_805DD124 = a;
    lbl_805DD128 = b;
    lbl_805DD12C = c;
    lbl_805DD130 = d;
    return 1;
}

s32 fn_80444374(s32 sel, s32 val)
{
    if (sel < 0 || sel > 1) {
        return 0;
    }
    if (val < 0 || val > 1) {
        return 0;
    }
    if (sel == 0) {
        lbl_805DD120 &= ~1;
        lbl_805DD120 |= val;
    } else {
        lbl_805DD120 &= ~2;
        lbl_805DD120 |= val << 1;
    }
    return 1;
}

s32 Audio_InitReverb(s32 a, s32 b, void* c, u8* d, u32 e)
{
    if (a < 0 || a > 1) {
        return 0;
    }
    if (b < 0 || b > 4 || (b != 0 && c == NULL)) {
        return 0;
    }
    lbl_805DE438 = d;
    lbl_805DE43C = 0;
    lbl_805DE448 = e;
    return AXDriverSetupAux(a, b, c);
}

s32 fn_80444984(s32 idx, s16 val)
{
    if (lbl_805DE440 == NULL) {
        return 0;
    }
    if (idx < 1 || lbl_805DE444 < idx) {
        return 0;
    }
    lbl_805DE440[idx] = val;
    return 1;
}

s32 fn_80444CB4(void)
{
    return lbl_805DE454;
}

s32 fn_80444CBC(void)
{
    return lbl_805DE44C;
}

void fn_804424B4(s32 pid)
{
    AXVoice* v;
    BOOL ok;
    u32 slot = pid & 0x3f;
    if (!(pid > 0)) {
        __assert(__FILE__, 0x38b, "pid > 0");
    }
    v = lbl_8058E298[slot];
    ok = FALSE;
    if (v != NULL && v->pid == pid) {
        ok = TRUE;
    }
    if (!ok) {
        __assert(__FILE__, 0x38d, "v && v->pid == pid");
    }
    lbl_8058E298[slot] = NULL;
    v->flags &= ~0x20000000;
    v->flags &= 0x3fffffff;
    lbl_805DE454--;
}

void fn_80442588(s32 pid)
{
    AXVoice* v;
    BOOL ok;
    u32 slot = pid & 0x3f;
    if (!(pid > 0)) {
        __assert(__FILE__, 0x39e, "pid > 0");
    }
    v = lbl_8058E298[slot];
    ok = FALSE;
    if (v != NULL && v->pid == pid) {
        ok = TRUE;
    }
    if (!ok) {
        __assert(__FILE__, 0x3a0, "v && v->pid == pid");
    }
    v->flags |= 0x20000000;
}

s32 fn_8044416C(s32 prio, s32 b, s32 c)
{
    s32 intr;
    AXVoice* v;
    if (prio >= 0 && prio <= 0x3f) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & 0xc0000000) != 0 && v->prio == prio) {
                fn_80443FB0(v->id, b, c);
            }
        }
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_80442A54(s32 id, s32 vol)
{
    s32 intr;
    s32 idx;
    AXVoice* v;
    idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return 0;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & SMSTATE_MASK) == 0) {
        OSRestoreInterrupts(intr);
        return 0;
    }
    if (v->pid != -1) {
        fn_80449DC0(v->pid, MAX(0, MIN((u8) vol, 0xfe)), 1);
    } else {
        if ((v->flags & SMSTATE_MASK) != SMSTATE_ACTIVE) {
            __assert(__FILE__, 0x48d, "(v->flags&SMSTATE_MASK) == SMSTATE_ACTIVE");
        }
        *(u8*) ((u8*) v + 0x29) = vol;
        v->flags |= 0x20000;
    }
    OSRestoreInterrupts(intr);
    return 1;
}

s32 fn_80442B88(s32 prio, s32 vol)
{
    s32 intr;
    AXVoice* v;
    if (prio >= 0 && prio <= 0x3f) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & SMSTATE_MASK) != 0 && v->prio == prio) {
                fn_80442A54(v->id, vol);
            }
        }
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_80442CFC(s32 id, s32 vol)
{
    s32 intr;
    s32 idx;
    AXVoice* v;
    idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return 0;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & SMSTATE_MASK) == 0) {
        OSRestoreInterrupts(intr);
        return 0;
    }
    if (v->pid != -1) {
        fn_80449E98(v->pid, MAX(0, MIN((u8) vol, 0xff)), 1);
    } else {
        if ((v->flags & SMSTATE_MASK) != SMSTATE_ACTIVE) {
            __assert(__FILE__, 0x4fe, "(v->flags&SMSTATE_MASK) == SMSTATE_ACTIVE");
        }
        *(u8*) ((u8*) v + 0x2f) = vol;
        v->flags |= 0x40000;
    }
    OSRestoreInterrupts(intr);
    return 1;
}

s32 fn_80442E30(s32 prio, s32 vol)
{
    s32 intr;
    AXVoice* v;
    if (prio >= 0 && prio <= 0x3f) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & SMSTATE_MASK) != 0 && v->prio == prio) {
                fn_80442CFC(v->id, vol);
            }
        }
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_8044327C(s32 id, s32 a, s32 b)
{
    s32 idx;
    AXVoice* v;
    s32 intr;
    if ((u8) a > 0xff) {
        a = 0xff;
    }
    idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return 0;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & SMSTATE_MASK) == 0) {
        OSRestoreInterrupts(intr);
        return 0;
    }
    if (v->pid != -1) {
        fn_80449BA0(v->pid, a, b, 1, 0);
    } else {
        if ((v->flags & SMSTATE_MASK) != SMSTATE_ACTIVE) {
            __assert(__FILE__, 0x5d2, "(v->flags&SMSTATE_MASK) == SMSTATE_ACTIVE");
        }
        *(u16*) ((u8*) v + 0x24) = (u8) a;
        *(u8*) ((u8*) v + 0x20) = 0;
        *(u16*) ((u8*) v + 0x26) = b;
        v->flags |= 0x10000;
    }
    OSRestoreInterrupts(intr);
    return 1;
}

s32 fn_80443398(s32 id, s32 detune)
{
    s32 idx;
    AXVoice* v;
    s32 intr;
    idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return 0;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & SMSTATE_MASK) == 0) {
        OSRestoreInterrupts(intr);
        return 0;
    }
    if (MIN((s16) detune, 0x960) < -0x2a30) {
        detune = -0x2a30;
    } else {
        s32 t = (s16) detune;
        detune = 0x960;
        if (t < 0x960) {
            detune = t;
        }
    }
    if (v->pid != -1) {
        v->detune[0] = detune;
        {
            s32 sum = v->detune[0] + v->detune[1];
            s32 p;
            if (MIN(sum, 0x960) < -0x2a30) {
                p = -0x2a30;
            } else {
                p = MIN(sum, 0x960);
            }
            fn_8044A250(v->pid, fn_803BD468(lbl_805E6118, (f32) p / lbl_805E6120), 1);
        }
    } else {
        if ((v->flags & SMSTATE_MASK) != SMSTATE_ACTIVE) {
            __assert(__FILE__, 0x6b9, "(v->flags&SMSTATE_MASK) == SMSTATE_ACTIVE");
        }
        v->detune[0] = detune;
        v->flags |= 0x80000;
    }
    OSRestoreInterrupts(intr);
    return 1;
}

s32 fn_8044353C(s32 id, s32 detune)
{
    s32 idx;
    AXVoice* v;
    s32 intr;
    idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return 0;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & SMSTATE_MASK) == 0) {
        OSRestoreInterrupts(intr);
        return 0;
    }
    if (MIN((s16) detune, 0x960) < -0x2a30) {
        detune = -0x2a30;
    } else {
        s32 t = (s16) detune;
        detune = 0x960;
        if (t < 0x960) {
            detune = t;
        }
    }
    if (v->pid != -1) {
        v->detune[1] = detune;
        {
            s32 sum = v->detune[0] + v->detune[1];
            s32 p;
            if (MIN(sum, 0x960) < -0x2a30) {
                p = -0x2a30;
            } else {
                p = MIN(sum, 0x960);
            }
            fn_8044A250(v->pid, fn_803BD468(lbl_805E6118, (f32) p / lbl_805E6120), 1);
        }
    } else {
        if ((v->flags & SMSTATE_MASK) != SMSTATE_ACTIVE) {
            __assert(__FILE__, 0x6b9, "(v->flags&SMSTATE_MASK) == SMSTATE_ACTIVE");
        }
        v->detune[1] = detune;
        v->flags |= 0x80000;
    }
    OSRestoreInterrupts(intr);
    return 1;
}

s32 fn_804436E0(s32 prio, s16 detune)
{
    s32 intr;
    AXVoice* v;
    if (prio >= 0 && prio <= 0x3f) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & SMSTATE_MASK) != 0 && v->prio == prio) {
                fn_8044353C(v->id, detune);
            }
        }
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_80443C14(s32 prio, s32 sel, s32 c)
{
    s32 intr;
    AXVoice* v;
    if (prio < 0 || prio > 0x3f) {
        return 0;
    }
    if (sel < 0 || sel > 1) {
        return 0;
    }
    intr = OSDisableInterrupts();
    for (v = lbl_805DE480; v != NULL; v = v->next) {
        if ((v->flags & 0xc0000000) != 0 && v->prio == prio) {
            fn_804438C4(v->id, sel, c);
        }
    }
    {
        u8* p = lbl_8058E398[sel];
        p[prio] = c;
    }
    OSRestoreInterrupts(intr);
    return 1;
}

s32 fn_80443CDC(s32 id)
{
    s32 intr;
    AXVoice* v;
    s32 idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return 0;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & 0xc0000000) == 0) {
        OSRestoreInterrupts(intr);
        return 0;
    }
    {
        s32 ret = fn_80449AE4(v->pid) != -1;
        OSRestoreInterrupts(intr);
        return ret;
    }
}

s32 fn_80443D8C(s32 prio)
{
    s32 count = 0;
    s32 intr;
    AXVoice* v;
    if (prio >= 0 && prio <= 0x3f) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & 0xc0000000) != 0 && v->prio == prio) {
                count += fn_80443CDC(v->id);
            }
        }
        OSRestoreInterrupts(intr);
        return count;
    }
    return -1;
}

s32 fn_80443E9C(s32 vid)
{
    s32 count = 0;
    s32 intr;
    AXVoice* v;
    if (vid >= 0 && vid <= lbl_805DE444) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & 0xc0000000) != 0 && v->vid == vid) {
                count += fn_80443CDC(v->id);
            }
        }
        OSRestoreInterrupts(intr);
        return count;
    }
    return -1;
}

s32 fn_80444868(s32 type, u8* p)
{
    if (type < 0 || type > 4 || (type != 0 && p == NULL)) {
        return 0;
    }
    switch (type) {
    case 0:
        break;
    case 1:
        p[0x1c4] = 0;
        *(f32*) (p + 0x1d0) = lbl_805E6134;
        *(f32*) (p + 0x1d8) = lbl_805E6138;
        *(f32*) (p + 0x1d4) = lbl_805E613C;
        *(f32*) (p + 0x1c8) = lbl_805E613C;
        *(f32*) (p + 0x1dc) = lbl_805E6140;
        *(f32*) (p + 0x1cc) = lbl_805E613C;
        break;
    case 2:
        p[0x13c] = 0;
        *(f32*) (p + 0x148) = lbl_805E6144;
        *(f32*) (p + 0x150) = lbl_805E6148;
        *(f32*) (p + 0x14c) = lbl_805E614C;
        *(f32*) (p + 0x140) = lbl_805E613C;
        *(f32*) (p + 0x144) = lbl_805E6110;
        break;
    case 3:
        *(s32*) (p + 0x90) = 0xf;
        *(s32*) (p + 0x94) = 0;
        *(s32*) (p + 0x98) = 0x1f4;
        break;
    case 4:
        *(s32*) (p + 0x3c) = 0x104;
        *(s32*) (p + 0x40) = 0x136;
        *(s32*) (p + 0x44) = 10;
        *(s32*) (p + 0x48) = 0x18;
        *(s32*) (p + 0x4c) = 0x18;
        *(s32*) (p + 0x50) = 0;
        *(s32*) (p + 0x54) = 0x23;
        *(s32*) (p + 0x58) = 0x23;
        *(s32*) (p + 0x5c) = 0;
        break;
    }
    return 1;
}

#pragma fp_contract on
s32 fn_804446F0(s32 type, u8* p)
{
    s32 size;
    size = 0;
    if (type < 0 || type > 4 || (type != 0 && p == NULL)) {
        return 0;
    }
    switch (type) {
    case 0:
        break;
    case 1:
        size = (s32) (lbl_805E612C * *(f32*) (p + 0x1d8) + lbl_805E6128);
        break;
    case 2:
        size = (s32) (lbl_805E612C * *(f32*) (p + 0x150) + lbl_805E6130);
        break;
    case 3:
        size = 0x1680;
        break;
    case 4:
        {
            u32 a = *(u32*) (p + 0x3c);
            u32 b = *(u32*) (p + 0x40);
            u32 c = *(u32*) (p + 0x44);
            size = ((a << 5) - 1) / 160 * 640 + ((b << 5) - 1) / 160 * 640 + ((c << 5) - 1) / 160 * 640;
        }
        break;
    }
    return size;
}

static void axPauseVoice(s32 id)
{
    s32 intr;
    s32 idx;
    AXVoice* v;
    idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & SMSTATE_MASK) == 0) {
        OSRestoreInterrupts(intr);
        return;
    }
    if (v->pid != -1) {
        fn_80449998(v->pid);
    } else {
        if ((v->flags & SMSTATE_MASK) != SMSTATE_ACTIVE) {
            __assert(__FILE__, 0xb4c, "(v->flags&SMSTATE_MASK) == SMSTATE_ACTIVE");
        }
        v->flags |= 0x20000000;
    }
    OSRestoreInterrupts(intr);
}

static void axResumeVoice(s32 id)
{
    s32 intr;
    s32 idx;
    AXVoice* v;
    idx = id & lbl_805DE494;
    if (id < 0 || idx > lbl_805DE49C) {
        return;
    }
    intr = OSDisableInterrupts();
    v = &lbl_805DE48C[idx];
    if (v->id != id || (v->flags & SMSTATE_MASK) == 0) {
        OSRestoreInterrupts(intr);
        return;
    }
    if (v->pid != -1) {
        fn_80449A40(v->pid);
    } else {
        if ((v->flags & SMSTATE_MASK) != SMSTATE_ACTIVE) {
            __assert(__FILE__, 0xbd4, "(v->flags&SMSTATE_MASK) == SMSTATE_ACTIVE");
        }
        v->flags &= ~0x20000000;
    }
    OSRestoreInterrupts(intr);
}

s32 fn_80444CC4(s32 prio)
{
    s32 intr;
    AXVoice* v;
    if (prio >= 0 && prio <= 0x3f) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & SMSTATE_MASK) != 0 && v->prio == prio) {
                axPauseVoice(v->id);
            }
        }
        lbl_805DE450 |= 1 << prio;
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_80444E00(void)
{
    s32 intr;
    AXVoice* v;
    s32 i;
    intr = OSDisableInterrupts();
    for (v = lbl_805DE480; v != NULL; v = v->next) {
        if ((v->flags & SMSTATE_MASK) != 0) {
            axPauseVoice(v->id);
        }
    }
    for (i = 0; i < 32; i++) {
        lbl_805DE450 |= 1 << i;
    }
    OSRestoreInterrupts(intr);
    return 1;
}

s32 fn_80444FE0(s32 prio)
{
    s32 intr;
    AXVoice* v;
    if (prio >= 0 && prio <= 0x3f) {
        intr = OSDisableInterrupts();
        for (v = lbl_805DE480; v != NULL; v = v->next) {
            if ((v->flags & SMSTATE_MASK) != 0 && v->prio == prio) {
                axResumeVoice(v->id);
            }
        }
        lbl_805DE450 &= ~(1 << prio);
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_8044511C(void)
{
    s32 intr;
    AXVoice* v;
    s32 i;
    intr = OSDisableInterrupts();
    for (v = lbl_805DE480; v != NULL; v = v->next) {
        if ((v->flags & SMSTATE_MASK) != 0) {
            axResumeVoice(v->id);
        }
    }
    for (i = 0; i < 64; i++) {
        lbl_805DE450 &= ~(1 << i);
    }
    OSRestoreInterrupts(intr);
    return 1;
}
