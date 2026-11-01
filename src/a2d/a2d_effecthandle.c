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
struct VC2_float_uuuu { virtual void d0(); virtual void d1(); virtual float m(u32, u32, u32, u32); };
typedef struct Nd {
    struct Nd* next;
    u8 pad[0x18];
    u16 h1c;
} Nd;
extern "C" {
void fn_8037B908(void);
void fn_8037C660(void);
extern u8 lbl_804BDF2C[];
extern u8 lbl_804BDF70[];
void fn_8037CCDC(void);
extern u8 fn_8028DF40[];
void fn_8037CB44(void);
extern u32 lbl_805DBCF8;
extern u32 lbl_805DBCF0;
extern u32 lbl_805DDB90;
u32 fn_80437CD8(u32, u32);
float fn_8037AFD0(u32, u32);
float fn_8037B028(u32, u32, u32, u32, u32, u32, float);
u32 fn_8037D094(void);
void __construct_array(u32, u32, u32, u32, u32, float);
u32 fn_8037D05C(void);
u32 fn_8037D024(void);
u32 fn_803AD760(u32, u32, u32, u32, u32);
u32 HSD_JObjLoadJoint(u32, float);
void __assert(u32, u32, u32, float);
void fn_8040BE00(u32, u32);
void fn_802894BC(u32, u32, u32);
extern const float lbl_805E4B64;
extern const float lbl_805E4B7C;
extern const float lbl_805E4B80;
extern Nd* lbl_805DE378;
float __fabsf(float);
typedef struct { u8 p[4]; u32 f; } A8_4_u32;
extern const float lbl_805E4BA8;
extern const float lbl_805E4BB0;
extern const float lbl_805E4BDC;
extern const float lbl_805E4BC0;
extern const float lbl_805E4C04;
extern const float lbl_805E4C10;
extern u8 lbl_804F3424[];
extern const float lbl_805E4C30;
extern const float lbl_805E4C34;
extern const float lbl_805E4C38;
void fn_803D1978(u32, float, float, float);

u32 fn_8037B3DC(u32 p3, u32 p4) {
    u32 v1;
    float v2;
    float v3;
    float v4;
    v1 = M32(((u32)p3+16));
    if ((s32)v1 == (s32)2) {
        v2 = MF(p4);
        MF(((u32)p3+24)) = v2;
        v3 = MF(((u32)p4+4));
        MF(((u32)p3+28)) = v3;
        v4 = MF(((u32)p4+8));
        MF(((u32)p3+32)) = v4;
        M8(((u32)p3+57)) = 1;
        return 1;
    }
    return 0;
}

void fn_8037B614(u32 p3, u32 p4) {
    M32(((u32)p3+44)) = p4;
}

float fn_8037C7DC(u32 p3) {
    float v1;
    float v2;
    M32(p3) = 30001;
    v1 = lbl_805E4BA8;
    M32(((u32)p3+4)) = -1;
    v2 = lbl_805E4BB0;
    M32(((u32)p3+8)) = 0;
    MF(((u32)p3+16)) = v1;
    MF(((u32)p3+20)) = v1;
    MF(((u32)p3+12)) = v2;
    return v1;
}

u32 fn_8037CAF0(void) {
    return 0;
}

void fn_8037CAF8(void) {
    fn_8037D094();
}

float fn_8037CB18(u32 p3, u32 p4) {
    float v1;
    float v2;
    float v3;
    float v4;
    v1 = lbl_805E4BDC;
    v2 = lbl_805E4BC0;
    MF(p4) = v1;
    MF(((u32)p4+4)) = v2;
    v3 = MF(((u32)p3+96));
    MF(((u32)p4+8)) = v3;
    MF(((u32)p4+12)) = v2;
    MF(((u32)p4+16)) = v1;
    v4 = MF(((u32)p3+96));
    MF(((u32)p4+20)) = v4;
    return v2;
}

void fn_8037CE94(u32 p3, u32 p4) {
    M32(((u32)p3+1204)) = p4;
}

void fn_8037CE9C(void) {
    fn_8037D05C();
}

void fn_8037CEBC(void) {
    fn_8037D024();
}

void fn_8037CEDC(u32 p3, u32 p4) {
    float v4;
    float v3;
    float v2;
    float v1;
    v1 = lbl_805E4C04;
    v2 = MF(((u32)p3+96));
    fn_803D1978(p4, v1, v2, v1);
    v3 = MF(((u32)p3+96));
    v4 = MF(((u32)p3+100));
    MF(((u32)p3+96)) = (v3+v4);
}

float fn_8037CF28(u32 p3, u32 p4) {
    float v1;
    float v2;
    float v3;
    float v4;
    v1 = lbl_805E4C10;
    v2 = lbl_805E4C04;
    MF(p4) = v1;
    MF(((u32)p4+4)) = v2;
    v3 = MF(((u32)p3+104));
    MF(((u32)p4+8)) = v3;
    MF(((u32)p4+12)) = v2;
    MF(((u32)p4+16)) = v1;
    v4 = MF(((u32)p3+104));
    MF(((u32)p4+20)) = v4;
    return v2;
}

u32 fn_8037CF54(u32 p3) {
    A8_4_u32* v1;
    u32 v2;
    if ((u32)p3 < (u32)7) {
        v1 = (A8_4_u32*)((u32)lbl_804F3424);
        v2 = v1[p3].f;
        return v2;
    }
    return 0;
}

float fn_8037D528(u32 p3, u32 p4) {
    float v3;
    float v2;
    float v1;
    v1 = lbl_805E4C30;
    v2 = lbl_805E4C34;
    MF(p4) = v1;
    v3 = lbl_805E4C38;
    MF(((u32)p4+4)) = v2;
    MF(((u32)p4+8)) = v3;
    MF(((u32)p4+12)) = v2;
    MF(((u32)p4+16)) = v1;
    MF(((u32)p4+20)) = v3;
    return v2;
}

void fn_8037E374(u32 p3, u32 p4) {
    M8(((u32)p3+12)) = 1;
    M32(((u32)p3+16)) = p4;
}

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
}
