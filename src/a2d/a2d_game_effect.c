typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef struct {
    u8 pad[0xc];
    u16 h0c;
    u16 h0e;
} Q;

typedef struct {
    u8 pad[0xc];
    s32 f0c;
    s32 f10;
    s32 f14;
    u8 pad2[0xc];
    s32 f24;
    s32 f28;
    s32 f2c;
    s32 f30;
    u8 pad3[4];
    u8 b38;
    u8 b39;
    u8 pad4[2];
    s32 f3c;
    s32 f40;
    s32 f44;
    u16 h48;
} E1;

extern void fn_8042B840(u16, s32);
extern void fn_80430394(u16);

u16 fn_8037ADF8(void** p, s32 i)
{
    Q* q;
    if (i > 999) {
        q = p[0x74 / 4];
        return q->h0e;
    }
    q = p[0x74 / 4];
    return q->h0c;
}

void fn_8037AF90(E1* p)
{
    p->f0c = 0x7531;
    p->f10 = 0;
    p->f14 = 0;
    p->f40 = 0;
    p->f44 = 0;
    p->f3c = 0;
    p->b38 = 0;
    p->b39 = 0;
    p->h48 = 0;
    p->f30 = 0;
    p->f24 = 0;
    p->f28 = 0;
    p->f2c = 0;
}

typedef struct {
    u8 pad[0x3c];
    u32* f3c;
    u8 pad2[8];
    u16 h48;
} E2;

void fn_8037AFD0(E2* p, u8 flag)
{
    u32* q = p->f3c;
    if (q != 0) {
        if (q[0x10 / 4] != 0) {
            flag = 1;
        }
        if (flag) {
            fn_8042B840(p->h48, 0);
        } else {
            fn_80430394(p->h48);
        }
    }
}
