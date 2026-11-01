#pragma dont_inline on
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
#define M8(a) (*(u8*)(a))
#define M16(a) (*(u16*)(a))
#define M32(a) (*(u32*)(a))
#define MF(a) (*(float*)(a))
#define MS16(a) (*(s16*)(a))
#define MD(a) (*(double*)(a))
float __fabsf(float);
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
typedef struct {
    u8 pad[0x3c];
    u32* f3c;
    u8 pad2[8];
    u16 h48;
} E2;
extern void fn_8042B840(u16, s32);
extern void fn_80430394(u16);



u32 fn_8037ADF8(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    if ((s32)p4 > (s32)999) {
        v1 = M32(((u32)p3+116));
        v2 = M16(((u32)v1+14));
        return v2;
    }
    v3 = M32(((u32)p3+116));
    v4 = M16(((u32)v3+12));
    return v4;
}

void fn_8037AF90(u32 p3) {
    M32(((u32)p3+12)) = 30001;
    M32(((u32)p3+16)) = 0;
    M32(((u32)p3+20)) = 0;
    M32(((u32)p3+64)) = 0;
    M32(((u32)p3+68)) = 0;
    M32(((u32)p3+60)) = 0;
    M8(((u32)p3+56)) = 0;
    M8(((u32)p3+57)) = 0;
    M16(((u32)p3+72)) = 0;
    M32(((u32)p3+48)) = 0;
    M32(((u32)p3+36)) = 0;
    M32(((u32)p3+40)) = 0;
    M32(((u32)p3+44)) = 0;
}

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

