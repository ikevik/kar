#include <dolphin/types.h>

extern void OSRegisterVersion(const char* version);
extern void OSWakeupThread(void* queue);
extern int OSDisableInterrupts(void);
extern int OSRestoreInterrupts(int level);
extern void __AXAllocInit(void);
#define F32(p, o) (*(vu32*)((u8*)(p) + (o)))
#define F16(p, o) (*(vu16*)((u8*)(p) + (o)))
extern void __AXVPBInit(void);
extern void __AXAuxInit(void);
extern void __AXOutInit(void);

extern const char* lbl_805DCA18;
extern u32* lbl_8056E9E8[];
extern u32* lbl_805DE080;
extern u32 lbl_805DE088;
extern u32 lbl_805DE08C;
extern s32 lbl_805DE090;
extern s32 lbl_805DE094;
extern u32 lbl_805DE0A8;
extern u32 lbl_805DE0AC;
extern u32 lbl_805DE0B0;
extern u32 lbl_805DE0B4;
extern u32 lbl_805DE0C0;
extern u8* lbl_805DE0C4;
extern s32 lbl_805DE0C8;
extern u32 lbl_805DE0CC;
extern u32 lbl_805DE0D0;
extern s32 lbl_805DE0E8;
extern s32 lbl_805DE0EC;
extern s32 lbl_805DE0F0;
extern u8 lbl_805DE0F8[8];
extern u32 lbl_805DE100;
extern u32 lbl_805DE104;
extern u32 lbl_805DE108;
extern u32 lbl_805DE10C;
extern u32 lbl_805DE110;
extern u32 lbl_805DE114;
extern u32 lbl_805DE118;
extern u32 lbl_805DE11C;
extern u32 lbl_805DE120;
extern s32 lbl_805DE130;
extern u8 lbl_8056EB00[];
extern u8 lbl_80570180[];
extern u8 lbl_80571800[];
extern u8 lbl_80576620[];
extern u8 lbl_80576660[];

void __AXSPBInit(void);
void __AXClInit(void);

void AXInitEx(void)
{
    OSRegisterVersion(lbl_805DCA18);
    __AXAllocInit();
    __AXVPBInit();
    __AXSPBInit();
    __AXAuxInit();
    __AXClInit();
    __AXOutInit();
}

u32* __AXGetStackHead(u32 stack)
{
    return lbl_8056E9E8[stack];
}

#pragma dont_inline on
void __AXPushFreeStack(u32* p)
{
    u32** stack = lbl_8056E9E8;
    p[0] = (u32)stack[0];
    stack[0] = p;
    p[3] = 0;
}

#pragma dont_inline reset

void __AXPushCallbackStack(u32* p)
{
    p[2] = (u32)lbl_805DE080;
    lbl_805DE080 = p;
}

#pragma dont_inline on
u32* __AXPopCallbackStack(void)
{
    u32* p = lbl_805DE080;
    if (p) {
        lbl_805DE080 = (u32*)p[2];
    }
    return p;
}

#pragma dont_inline reset

void fn_803EC608(u8** out)
{
    if (lbl_805DE088) {
        *out = lbl_8056EB00 + lbl_805DE0A8 * 0x780;
    } else {
        *out = 0;
    }
}

void fn_803EC63C(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0A8 * 0x780 + 0x500;
}

void fn_803EC65C(u8** out)
{
    *out = lbl_8056EB00 + lbl_805DE0AC * 0x780;
}

void fn_803EC678(u8** out)
{
    *out = lbl_8056EB00 + lbl_805DE0AC * 0x780 + 0x280;
}

void fn_803EC698(u8** out)
{
    *out = lbl_8056EB00 + lbl_805DE0AC * 0x780 + 0x500;
}

void fn_803EC6B8(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0AC * 0x780 + 0x500;
}

void fn_803EC6D8(u8** out)
{
    if (lbl_805DE08C) {
        *out = lbl_80570180 + lbl_805DE0A8 * 0x780;
    } else {
        *out = 0;
    }
}

void fn_803EC70C(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0AC * 0x780;
}

void fn_803EC728(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0B0 * 0x780;
}

void fn_803EC744(u8** out)
{
    *out = lbl_80570180 + lbl_805DE0B4 * 0x780;
}

void fn_803EC99C(s32 a, s32 b)
{
    lbl_805DE088 = a;
    lbl_805DE090 = b;
}

void fn_803EC9A8(s32 a, s32 b)
{
    lbl_805DE08C = a;
    lbl_805DE094 = b;
}

s32 fn_803EC9B4(void)
{
    return lbl_805DE0C8;
}

u8* fn_803EC9BC(void)
{
    u8* p = lbl_80571800 + lbl_805DE0C0++ * 0x300;
    lbl_805DE0C0 &= 1;
    lbl_805DE0C4 = lbl_80571800 + lbl_805DE0C0 * 0x300;
    return p;
}

void __AXClInit(void)
{
    lbl_805DE0D0 = 0;
    lbl_805DE0C0 = 0;
    lbl_805DE0C4 = lbl_80571800;
    lbl_805DE0CC = 1;
}

void fn_803ED0CC(u32 v)
{
    if (lbl_805DE0D0 != v) {
        lbl_805DE0D0 = v;
    }
}

void fn_803ED2D0(void)
{
    lbl_805DE0EC = 1;
}

void fn_803ED334(void)
{
    lbl_805DE0F0 = 1;
    OSWakeupThread(lbl_805DE0F8);
}

void fn_803ED76C(s32 v)
{
    lbl_805DE0E8 = v;
}

u8* fn_803ED774(void)
{
    return lbl_80576620;
}

void __AXSPBInit(void)
{
    lbl_805DE120 = 0;
    lbl_805DE11C = 0;
    lbl_805DE118 = 0;
    lbl_805DE114 = 0;
    lbl_805DE110 = 0;
    lbl_805DE10C = 0;
    lbl_805DE108 = 0;
    lbl_805DE104 = 0;
    lbl_805DE100 = 0;
}

s32 fn_803EDC38(void)
{
    return lbl_805DE130;
}

u8* fn_803EE5B0(void)
{
    return lbl_80576660;
}

#pragma dont_inline on
void fn_803EE5BC(u8* p)
{
    *(u16*)(p + 0x146) = 0;
    *(u16*)(p + 0x16e) = 0;
    *(u32*)(p + 0x1c) = 0xa4;
    *(u32*)(p + 0x28) = 0;
    *(u32*)(p + 0x24) = 0;
    *(u32*)(p + 0x30) = (u32)(p + 0x34);
    *(u16*)(p + 0x184) = 0;
    *(u16*)(p + 0x182) = 0;
    *(u16*)(p + 0x180) = 0;
    *(u16*)(p + 0x17e) = 0;
    *(u16*)(p + 0x17c) = 0;
}

#pragma dont_inline reset

void fn_803EE8B8(u8* p, u16 state)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x146) = state;
    F32(p, 0x1c) |= 4;
    if (state == 0) {
        F32(p, 0x20) = 1;
    }
    OSRestoreInterrupts(enabled);
}

void fn_803EEB68(u8* p)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x16e) = 1;
    F16(p, 0x17a) = 0;
    F16(p, 0x178) = 0;
    F16(p, 0x176) = 0;
    F16(p, 0x174) = 0;
    F32(p, 0x1c) &= ~0x40;
    F32(p, 0x1c) |= 0x20;
    OSRestoreInterrupts(enabled);
}

void fn_803EEBCC(u8* p, u16 a, u16 b)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x178) = a;
    F16(p, 0x17a) = b;
    F32(p, 0x1c) |= 0x40;
    OSRestoreInterrupts(enabled);
}

void fn_803EEC28(u8* p, void* src)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x19c) = *(u16*)src;
    *(vs16*)((u8*)p + 0x19e) = *((s16*)src + 1);
    F32(p, 0x1c) |= 0x200;
    OSRestoreInterrupts(enabled);
}

void fn_803EEC80(u8* p, u16 v)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x19e) = v;
    F32(p, 0x1c) |= 0x400;
    OSRestoreInterrupts(enabled);
}

void fn_803EEDDC(u8* p, u16 v)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x1a6) = v;
    F32(p, 0x1c) |= 0x2000;
    OSRestoreInterrupts(enabled);
}

void fn_803EEE28(u8* p, u32 v)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x1aa) = v >> 16;
    F16(p, 0x1ac) = v;
    F32(p, 0x1c) |= 0x4000;
    OSRestoreInterrupts(enabled);
}

void fn_803EEE7C(u8* p, u32 v)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x1ae) = v >> 16;
    F16(p, 0x1b0) = v;
    F32(p, 0x1c) |= 0x8000;
    OSRestoreInterrupts(enabled);
}

void fn_803EEED0(u8* p, u32 v)
{
    int enabled = OSDisableInterrupts();
    F16(p, 0x1b2) = v >> 16;
    F16(p, 0x1b4) = v;
    F32(p, 0x1c) |= 0x10000;
    OSRestoreInterrupts(enabled);
}

extern s64 OSGetTime(void);
extern void DSPAssertTask(void* task);
extern void fn_803ED0E0(u32 a);
extern void fn_803EFD34(u32 a);
extern u8 lbl_80572580[];
u32 lbl_805DE0DC;
s64 lbl_805DE0E0;
u8* lbl_805DE138;
u32 lbl_805DE13C;
u32 lbl_805DE140;
u32 lbl_805DE144;

u8* fn_803EF164(void)
{
    u8* p;

    if (lbl_805DE144) {
        p = lbl_805DE138 + lbl_805DE140++ * 0x38;
        lbl_805DE140 = lbl_805DE140 % lbl_805DE13C;
        return p;
    }
    return 0;
}

#pragma peephole off
int fn_803EFEA0(u32 a)
{
    int enabled;

    enabled = OSDisableInterrupts();
    fn_803EFD34(a);
    OSRestoreInterrupts(enabled);
    return 1;
}
#pragma peephole on

void fn_803ED268(void)
{
    if (lbl_805DE0DC == 0) {
        lbl_805DE0E0 = OSGetTime();
    }
    if (lbl_805DE0DC == 1) {
        lbl_805DE0DC = 0;
        fn_803ED0E0(0);
    } else {
        lbl_805DE0DC = 2;
        DSPAssertTask(lbl_80572580);
    }
}

#pragma peephole on
void fn_803ED2DC(void)
{
    if (lbl_805DE0DC == 2) {
        lbl_805DE0DC = 0;
        fn_803ED0E0((u32)(OSGetTime() - lbl_805DE0E0) >> 2);
    } else {
        lbl_805DE0DC = 1;
    }
}
#pragma peephole on

typedef struct AXVPBw AXVPBw;
struct AXVPBw {
    AXVPBw* next;
    AXVPBw* prev;
    AXVPBw* next_loop;
    u32 priority;
    void (*callback)(AXVPBw*);
};
extern AXVPBw* lbl_8056EA68[];
#define STACK_HEAD ((AXVPBw**)lbl_8056E9E8)
#define STACK_TAIL lbl_8056EA68
typedef struct {
    u32 w[10];
} AXW40;
typedef struct {
    u16 h[7];
} AXH14;
typedef struct {
    u16 h[3];
} AXH6;
extern const float lbl_805E5940;
extern int fn_803EF1AC(u8* p, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);

void __AXRemoveFromStack(AXVPBw* pb)
{
    u32 prio = pb->priority;
    AXVPBw** head = &STACK_HEAD[prio];
    AXVPBw** tail = &STACK_TAIL[prio];
    if (*head == *tail) {
        *tail = 0;
        *head = 0;
    } else if (pb == *head) {
        *head = pb->next;
        (*head)->prev = 0;
    } else if (pb == *tail) {
        *tail = pb->prev;
        (*tail)->next = 0;
    } else {
        AXVPBw* prev = pb->prev;
        AXVPBw* next = pb->next;
        prev->next = next;
        next->prev = prev;
    }
}

void AXSetVoicePriority(AXVPBw* pb, u32 prio)
{
    int old = OSDisableInterrupts();
    AXVPBw** head;
    __AXRemoveFromStack(pb);
    head = &STACK_HEAD[prio];
    pb->next = *head;
    pb->prev = 0;
    if (pb->next) {
        (*head)->prev = pb;
        *head = pb;
    } else {
        STACK_TAIL[prio] = pb;
        *head = pb;
    }
    pb->priority = prio;
    OSRestoreInterrupts(old);
}

void AXFreeVoice(AXVPBw* pb)
{
    int old = OSDisableInterrupts();
    __AXRemoveFromStack(pb);
    if (F16(pb, 0x146) == 1) {
        F32(pb, 0x20) = 1;
    }
    fn_803EE5BC((u8*)pb);
    pb->next = *STACK_HEAD;
    *STACK_HEAD = pb;
    pb->priority = 0;
    OSRestoreInterrupts(old);
}

void __AXServiceCallbackStack(void)
{
    AXVPBw* pb = (AXVPBw*)__AXPopCallbackStack();
    while (pb) {
        if (pb->priority) {
            if (pb->callback) {
                pb->callback(pb);
            }
            __AXRemoveFromStack(pb);
            __AXPushFreeStack((u32*)pb);
        }
        pb = (AXVPBw*)__AXPopCallbackStack();
    }
}

void __AXAllocInit(void)
{
    int i;
    lbl_805DE080 = 0;
    for (i = 0; i < 32; i++) {
        STACK_TAIL[i] = 0;
        STACK_HEAD[i] = 0;
    }
}

void fn_803EF0F8(u8* p, u16* src)
{
    u16* dst = (u16*)(p + 0x1ec);
    int old = OSDisableInterrupts();
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    F32(p, 0x1c) |= 0x100000;
    OSRestoreInterrupts(old);
}

void fn_803EEF24(u8* p, u32* src)
{
    u32* dst = (u32*)(p + 0x1b6);
    int old = OSDisableInterrupts();
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    dst[8] = src[8];
    dst[9] = src[9];
    F32(p, 0x1c) |= 0x20000;
    OSRestoreInterrupts(old);
}

void fn_803EEFC8(u8* p, u16* src)
{
    u16* dst = (u16*)(p + 0x1de);
    int old = OSDisableInterrupts();
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    F32(p, 0x1c) &= ~0x80000;
    F32(p, 0x1c) |= 0x40000;
    OSRestoreInterrupts(old);
}

void fn_803EF060(u8* p, f32 ratio)
{
    u32 v;
    int old = OSDisableInterrupts();
    ratio = lbl_805E5940 * ratio;
    v = (u32)ratio;
    if ((u32)ratio > 0x40000) {
        v = 0x40000;
    }
    F16(p, 0x1de) = v >> 16;
    F16(p, 0x1e0) = v;
    F32(p, 0x1c) |= 0x80000;
    OSRestoreInterrupts(old);
}

#pragma peephole off
int fn_803EFE30(u8* p)
{
    int r;
    int old = OSDisableInterrupts();
    *(u8*)(p + 0x1c4) = 0;
    r = fn_803EF1AC(p, *(f32*)(p + 0x1c8), *(f32*)(p + 0x1d0), *(f32*)(p + 0x1cc), *(f32*)(p + 0x1d4), *(f32*)(p + 0x1d8), *(f32*)(p + 0x1dc));
    OSRestoreInterrupts(old);
    return r;
}
#pragma peephole reset

void fn_803EDBA4(u8* p)
{
    lbl_805DE100 += *(s16*)(p + 0x52);
    lbl_805DE10C += *(s16*)(p + 0x54);
    lbl_805DE118 += *(s16*)(p + 0x56);
    lbl_805DE104 += *(s16*)(p + 0x58);
    lbl_805DE110 += *(s16*)(p + 0x5a);
    lbl_805DE11C += *(s16*)(p + 0x5c);
    lbl_805DE108 += *(s16*)(p + 0x5e);
    lbl_805DE114 += *(s16*)(p + 0x60);
    lbl_805DE120 += *(s16*)(p + 0x62);
}

void fn_803EE7F4(u8* p, int mode)
{
    int old = OSDisableInterrupts();
    u8* q = p + 0x138;
    switch (mode) {
    case 0:
        F16(q, 8) = 2;
        break;
    case 1:
        F16(q, 8) = 1;
        break;
    case 2:
        F16(q, 8) = 0;
        F16(q, 0xa) = 0;
        break;
    case 3:
        F16(q, 8) = 0;
        F16(q, 0xa) = 1;
        break;
    case 4:
        F16(q, 8) = 0;
        F16(q, 0xa) = 2;
        break;
    }
    F32(p, 0x1c) |= 1;
    OSRestoreInterrupts(old);
}

static inline AXVPBw* __AXPopFreeStack(void)
{
    AXVPBw** head = STACK_HEAD;
    AXVPBw* p = head[0];
    if (p) {
        head[0] = p->next;
    }
    return p;
}

static inline AXVPBw* __AXPopStackFromBottom(AXVPBw** tp, AXVPBw** hp)
{
    AXVPBw* p = 0;
    if (*hp) {
        if (*hp == *tp) {
            p = *hp;
            *tp = 0;
            *hp = 0;
        } else if (*tp) {
            p = *tp;
            *tp = p->prev;
            (*tp)->next = 0;
        }
    }
    return p;
}

AXVPBw* AXAcquireVoice(u32 priority, void (*callback)(AXVPBw*), u32 userContext)
{
    AXVPBw* p;
    AXVPBw** head = STACK_HEAD;
    int old = OSDisableInterrupts();
    p = __AXPopFreeStack();
    if (p == 0) {
        AXVPBw** hp;
        AXVPBw** tp;
        u32 i;
        for (i = 1, hp = &head[1], tp = &head[33]; i < priority; i++, hp++, tp++) {
            p = __AXPopStackFromBottom(tp, hp);
            if (p) {
                if (F16(p, 0x146) == 1) {
                    F32(p, 0x20) = 1;
                }
                if (p->callback) {
                    p->callback(p);
                }
                break;
            }
        }
    }
    if (p) {
        AXVPBw** hp = &head[priority];
        p->next = *hp;
        p->prev = 0;
        if (p->next) {
            (*hp)->prev = p;
            *hp = p;
        } else {
            head[32 + priority] = p;
            *hp = p;
        }
        p->priority = priority;
        p->callback = callback;
        p->next_loop = (AXVPBw*)userContext;
        fn_803EE5BC((u8*)p);
    }
    OSRestoreInterrupts(old);
    return p;
}

void fn_803EECCC(u8* p, u32* src)
{
    u32* dst = (u32*)(p + 0x1a6);
    int old = OSDisableInterrupts();
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    switch (*(u16*)((u8*)src + 2)) {
    case 0:
        break;
    case 10:
        dst[4] = 0;
        dst[5] = 0;
        dst[6] = 0;
        dst[7] = 0;
        dst[8] = 0;
        dst[9] = 0;
        dst[10] = 0;
        dst[11] = 0;
        dst[12] = 0x8000000;
        dst[13] = 0;
        break;
    case 25:
        dst[4] = 0;
        dst[5] = 0;
        dst[6] = 0;
        dst[7] = 0;
        dst[8] = 0;
        dst[9] = 0;
        dst[10] = 0;
        dst[11] = 0;
        dst[12] = 0x1000000;
        dst[13] = 0;
        break;
    }
    F32(p, 0x1c) &= ~0x1E000;
    F32(p, 0x1c) |= 0x21000;
    OSRestoreInterrupts(old);
}
