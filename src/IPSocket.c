#pragma dont_inline on
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned long u32;

typedef struct Queue2 {
    void* head;
    void* tail;
} Queue2;

typedef struct Sock {
    u8 pad0[0x18];
    struct Sock* next;
    struct Sock* prev;
    u8 pad1[0x2c8 - 0x20];
    s16* ref;
} Sock;

extern char lbl_80534248[];
extern char lbl_80534238[];
extern int lbl_805DE6BC;
extern int lbl_805DE68C;
extern int lbl_805DE6B8;
extern Queue2 lbl_805DE674;
extern Queue2 lbl_805DE6B0;

extern int sprintf(char*, const char*, ...);
extern void OSRegisterResetFunction(void*);
extern void OSWakeupThread(void*);
extern void fn_80471A08();
extern void fn_80471C18();
extern int fn_80479E2C();
extern int fn_8046D7FC();
extern int fn_80476C44();
extern int fn_8047BF60();
extern int fn_8047CE0C();
extern int fn_8047D06C();
extern int fn_8047D2F4();

char* SOInetNtoP(int af, u8* src, char* dst, u32 len)
{
    if (af == 2 && dst != 0 && len >= 16) {
        sprintf(dst, lbl_80534248, src[0], src[1], src[2], src[3]);
        return dst;
    }
    return 0;
}

u32 SOGetHostID(void)
{
    u32 id;
    fn_8046D7FC(0, &id);
    return id;
}

void fn_8047B020(void)
{
    if (lbl_805DE6BC == 0) {
        lbl_805DE6BC = 1;
        OSRegisterResetFunction(lbl_80534238);
    }
    fn_80471A08(4);
    if (lbl_805DE68C == 0) {
        if (SOGetHostID() != 0 || fn_80479E2C(0) != 0) {
            lbl_805DE6B8 = 1;
        } else {
            fn_80471C18(1);
        }
    }
}

void fn_8047BEF4(Sock* s)
{
    Sock* tail;
    if (s->ref != 0) {
        s->ref[1]--;
    }
    tail = (Sock*)lbl_805DE674.tail;
    if (tail == 0) {
        lbl_805DE674.head = s;
    } else {
        tail->next = s;
    }
    s->prev = tail;
    s->next = 0;
    lbl_805DE674.tail = s;
}

int fn_8047BF3C(int arg)
{
    return fn_80476C44(arg - 0x280);
}

int fn_8047C3B8(void)
{
    if (lbl_805DE68C != 1) {
        return -0x27;
    }
    return fn_8047BF60();
}

int fn_8047CDE4(int a, int b, int c)
{
    return fn_8047CE0C(a, b, c, 0, 0);
}

int fn_8047D044(int a, int b, int c)
{
    return fn_8047D06C(a, b, c, 0, 0);
}

int fn_8047D9A4(void)
{
    if (lbl_805DE68C != 1) {
        return -0x27;
    }
    return fn_8047D2F4();
}

void fn_8047DB48(void)
{
    OSWakeupThread(&lbl_805DE6B0);
}

extern u8 lbl_805C1CB0[];
extern int OSDisableInterrupts(void);
extern void OSRestoreInterrupts(int);
extern void* memcpy(void*, const void*, u32);
extern int fn_8047A6A8();
extern void fn_8047A950();
extern int fn_8046F320();
extern int fn_8047567C();

int fn_8047AD40(u8* a, u8* b)
{
    int en;
    int ret;
    en = OSDisableInterrupts();
    if (lbl_805DE68C != 1) {
        ret = -0x27;
    } else {
        if (a != 0) {
            memcpy(a, lbl_805C1CB0 + 0x790, 4);
        }
        if (b != 0) {
            memcpy(b, lbl_805C1CB0 + 0x794, 4);
        }
        ret = 0;
    }
    OSRestoreInterrupts(en);
    return ret;
}

int fn_8047CBBC(int a, u8* b)
{
    u8* out;
    int h;
    int r;
    if (lbl_805DE68C != 1) {
        return -0x27;
    }
    if (b == 0 || b[0] < 8) {
        return -0x1c;
    }
    h = fn_8047A6A8(a, &out);
    if (h == 0 || out == 0) {
        return -8;
    }
    switch (out[0]) {
    case 0x11:
        r = fn_8046F320(out, b);
        break;
    case 6:
        r = fn_8047567C(out, b);
        break;
    default:
        fn_8047A950(h);
        return -8;
    }
    fn_8047A950(h);
    switch (r) {
    case 0:
        return 0;
    case -0xd:
        return -5;
    case -5:
        return -3;
    case -0xc:
    default:
        return -0x1c;
    }
}
