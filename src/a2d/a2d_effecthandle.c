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
void fn_8037B908(void);
void fn_8037C660(void);
extern u32 lbl_805DBCF8;
extern u32 lbl_805DBCF0;
extern u32 lbl_805DDB90;
u32 fn_80437CD8(u32, u32);
float fn_8037AFD0(u32, u32);
void fn_8037B028(u32, u32, u32, u32, u32, u32, float);
u32 fn_8037D094(void);
u32 fn_8037D05C(void);
u32 fn_8037D024(void);
u32 fn_803AD760(u32, u32, u32, u32, u32);


u32 fn_8037B574(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    float v3;
    float v4;
    float v5;
    u32 v6;
    float v7;
    u32 v8;
    float v9;
    float v10;
    u32 c0;
    v1 = M32(((u32)p3+60));
    v2 = M32(((u32)v1+84));
    if ((u32)v2 != (u32)0) {
        v3 = MF(p4);
        MF(((u32)v2+36)) = v3;
        v4 = MF(((u32)p4+4));
        MF(((u32)v2+40)) = v4;
        v5 = MF(((u32)p4+8));
        MF(((u32)v2+44)) = v5;
    } else {
        c0 = fn_80437CD8(v1, 0);
        if ((u32)c0 != (u32)0) {
            v6 = M32(((u32)p3+60));
            v7 = MF(p4);
            v8 = M32(((u32)v6+84));
            MF(((u32)v8+36)) = v7;
            v9 = MF(((u32)p4+4));
            MF(((u32)v8+40)) = v9;
            v10 = MF(((u32)p4+8));
            MF(((u32)v8+44)) = v10;
        } else {
            return 0;
        }
    }
    return 1;
}

void fn_8037C390(u32 p3) {
    u32 v1;
    float d0;
    v1 = M32(((u32)p3+16));
    if ((s32)v1 == (s32)30001) {
        d0 = fn_8037AFD0((p3+4), 0);
        fn_8037B028((p3+4), -1, 0, 0, 0, 0, d0);
    }
    M32(((u32)p3+68)) = (u32)fn_8037B908;
    M32(((u32)p3+72)) = p3;
}

void fn_8037C80C(u32 p3) {
    u32 v1;
    float d0;
    v1 = M32(((u32)p3+796));
    if ((s32)v1 == (s32)30001) {
        d0 = fn_8037AFD0((p3+784), 0);
        fn_8037B028((p3+784), -1, 0, 0, 0, 0, d0);
    }
    M32(((u32)p3+848)) = (u32)fn_8037C660;
    M32(((u32)p3+852)) = p3;
}

void fn_8037CAF8(void) {
    fn_8037D094();
}

void fn_8037CE9C(void) {
    fn_8037D05C();
}

void fn_8037CEBC(void) {
    fn_8037D024();
}

u32 fn_8037CF7C(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBCF8, (u32)&lbl_805DBCF0, 0);
    v2 = M32(((u32)c0+60));
    return v2;
}

u32 fn_8037CFB4(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBCF8, (u32)&lbl_805DBCF0, 0);
    v2 = M32(((u32)c0+64));
    return v2;
}

u32 fn_8037CFEC(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBCF8, (u32)&lbl_805DBCF0, 0);
    v2 = M32(((u32)c0+68));
    return v2;
}

u32 fn_8037D024(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBCF8, (u32)&lbl_805DBCF0, 0);
    v2 = M32(((u32)c0+76));
    return v2;
}

u32 fn_8037D05C(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBCF8, (u32)&lbl_805DBCF0, 0);
    v2 = M32(((u32)c0+72));
    return v2;
}

u32 fn_8037D094(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBCF8, (u32)&lbl_805DBCF0, 0);
    v2 = M32(((u32)c0+80));
    return v2;
}

u32 fn_8037D0CC(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBCF8, (u32)&lbl_805DBCF0, 0);
    v2 = M32(((u32)c0+84));
    return v2;
}



void fn_8037B614(u32* p, u32 v) { p[0x2c / 4] = v; }
s32 fn_8037CAF0(void) { return 0; }
void fn_8037CE94(u32* p, u32 v) { p[0x4b4 / 4] = v; }
void fn_8037E374(u8* p, u32 v)
{
    p[0xc] = 1;
    *(u32*)(p + 0x10) = v;
}

extern const float lbl_805E4C30;
extern const float lbl_805E4C34;
extern const float lbl_805E4C38;

void fn_8037D528(void* a, float* q)
{
    q[0] = lbl_805E4C30;
    q[1] = lbl_805E4C34;
    q[2] = lbl_805E4C38;
    q[3] = lbl_805E4C34;
    q[4] = lbl_805E4C30;
    q[5] = lbl_805E4C38;
}

extern const float lbl_805E4B64;
extern const float lbl_805E4B7C;
extern const float lbl_805E4B80;
extern const float lbl_805E4BA8;
extern const float lbl_805E4BB0;
extern const float lbl_805E4BDC;
extern const float lbl_805E4BC0;
extern const float lbl_805E4C10;
extern const float lbl_805E4C04;
typedef struct Nd {
    struct Nd* next;
    u8 pad[0x18];
    u16 h1c;
} Nd;
extern Nd* lbl_805DE378;
extern u32 lbl_804F3424[];

s32 fn_8037B3DC(char* p, float* q)
{
    if (*(s32*)(p + 0x10) == 2) {
        *(float*)(p + 0x18) = q[0];
        *(float*)(p + 0x1c) = q[1];
        *(float*)(p + 0x20) = q[2];
        p[0x39] = 1;
        return 1;
    }
    return 0;
}

s32 fn_8037B61C(char* p)
{
    Nd* n;
    u16 h;
    h = *(u16*)(p + 0x48);
    n = lbl_805DE378;
    while (n != 0) {
        if (n->h1c == h) {
            return 1;
        }
        n = n->next;
    }
    return 0;
}

s32 fn_8037B694(float* p)
{
    float f = p[2];
    if (f >= lbl_805E4B64) {
        p[2] = f - lbl_805E4B64;
        return 1;
    }
    if (f < lbl_805E4B7C) {
        p[2] = lbl_805E4B80;
    }
    return 0;
}

void fn_8037C7DC(s32* p)
{
    p[0] = 0x7531;
    p[1] = -1;
    p[2] = 0;
    ((float*)p)[4] = lbl_805E4BA8;
    ((float*)p)[5] = lbl_805E4BA8;
    ((float*)p)[3] = lbl_805E4BB0;
}

void fn_8037CB18(char* p, float* q)
{
    q[0] = lbl_805E4BDC;
    q[1] = lbl_805E4BC0;
    q[2] = *(float*)(p + 0x60);
    q[3] = lbl_805E4BC0;
    q[4] = lbl_805E4BDC;
    q[5] = *(float*)(p + 0x60);
}

void fn_8037CF28(char* p, float* q)
{
    q[0] = lbl_805E4C10;
    q[1] = lbl_805E4C04;
    q[2] = *(float*)(p + 0x68);
    q[3] = lbl_805E4C04;
    q[4] = lbl_805E4C10;
    q[5] = *(float*)(p + 0x68);
}

u32 fn_8037CF54(u32 i)
{
    if (i < 7) {
        return lbl_804F3424[i * 2 + 1];
    }
    return 0;
}

