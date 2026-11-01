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
struct VC2_float_uf { virtual void d0(); virtual void d1(); virtual float m(u32, float); };
extern "C" {
extern u8 lbl_804D9BAC[];
extern u8 lbl_804BDF2C[];
extern u8 lbl_804BDF70[];
extern u32 lbl_805D9AE8;
extern u32 lbl_805D9AE0;
extern u32 lbl_805DA040;
extern u32 lbl_805DA038;
extern u32 lbl_805DDBC0;
struct JE { u32 w[9]; };
extern u8 lbl_804BCE4C[];
extern const float lbl_805E3E48;
extern u8 lbl_804E0B08[];
extern u32 lbl_805DDBC4;
extern u8 lbl_804E077C[];
extern u32 lbl_805DA080;
extern u32 lbl_805DA114;
u32 fn_8038D0A8(u32, u32, float);
float fn_802EF814(u32, u32, float);
float fn_80289730(u32, u32, float);
float fn_804087F4(u32, u32, u32, float);
void fn_8040A64C(u32, float);
float fn_803FCDB8(u32, ...);
float fn_803799B8(u32);
void fn_8037989C(u32, u32);
float fn_80379784(u32, u32, u32);
float fn_8040BE00(u32, u32, float);
float fn_802F7718(u32);
float fn_8037B028(u32, u32, u32, u32, u32, u32, float);
float fn_8037AFD0(u32, u32, u32, float);
float fn_802D4678(u32);
void func_803D2098(u32, u32, u32, float);
float fn_802D1D84(u32);
u32 fn_803AD760(u32, u32, u32, u32, u32);
float fn_802DF844(u32);
float fn_8040C174(u32, u32, float);
void fn_80381D6C(u32, u32, u32, float);
void fn_80393820(u32);
void fn_80313AC4(u32);
void fn_80315C0C(u32, u32, u32, u32, u32);
void fn_80391F10(u32);
float fn_8040C0D8(u32, u32);
void fn_8031DC48(u32, float);
void fn_8040BD64(u32, u32);
float __fabsf(float);
typedef struct { u8 p[8]; u32 f; u8 q[24]; } A36_8_u32;
typedef struct { u8 p[4]; u32 f; u8 q[28]; } A36_4_u32;
typedef struct { u8 p[32]; u32 f; } A36_32_u32;
typedef struct { u8 p[28]; u32 f; u8 q[4]; } A36_28_u32;
typedef struct { u8 p[24]; u32 f; u8 q[8]; } A36_24_u32;
typedef struct { u8 p[20]; u32 f; u8 q[12]; } A36_20_u32;
typedef struct { u8 p[16]; u32 f; u8 q[16]; } A36_16_u32;
typedef struct { u8 p[12]; u32 f; u8 q[20]; } A36_12_u32;
extern const float lbl_805E3AD0;
extern u32 lbl_805DDC0C;
extern u32 lbl_805DDC10;
extern u32 lbl_805DDC08;
extern u8 lbl_804DD0D8[];
extern u8 lbl_804E02D0[];
extern u8 lbl_804E0620[];
extern const float lbl_805E3EE8;
u32 fn_802DE0E4();
u32 fn_8034D1F8();
u32 __cvt_fp2unsigned(float);
void fn_80320EB8();

u32 fn_802FC31C(void) {
    return 15;
}

u32 fn_802FC324(void) {
    return 1;
}

u32 fn_802FC32C(void) {
    return 1;
}

u32 fn_802FC334(void) {
    return 1;
}

u32 fn_802FC33C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+4));
    v2 = M16(((u32)p3+76));
    v3 = M32(((u32)v1+88));
    return ((v3<<(u32)__cntlzw((v3^v2)))>>31);
}

u32 fn_802FC48C(void) {
    return 14;
}

u32 fn_802FC494(void) {
    return 1;
}

u32 fn_802FC49C(void) {
    return 1;
}

u32 fn_802FC4A4(void) {
    return 0;
}

u32 fn_802FC60C(void) {
    return 13;
}

u32 fn_802FC614(void) {
    return 1;
}

u32 fn_802FC61C(void) {
    return 1;
}

u32 fn_802FC624(void) {
    return 1;
}

u32 fn_802FC62C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+4));
    v2 = M16(((u32)p3+88));
    v3 = M16(((u32)p3+90));
    v4 = M32(((u32)v1+88));
    return ((v4<<(u32)__cntlzw((v4^(v2+v3))))>>31);
}

u32 fn_802FC784(void) {
    return 12;
}

u32 fn_802FC78C(void) {
    return 0;
}

u32 fn_802FC794(void) {
    return 1;
}

u32 fn_802FC98C(void) {
    return 11;
}

u32 fn_802FCC7C(void) {
    return 10;
}

u32 fn_802FCFB4(void) {
    return 9;
}

u32 fn_802FCFBC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+4));
    v2 = M16(((u32)p3+88));
    v3 = M16(((u32)p3+90));
    v4 = M32(((u32)v1+88));
    return ((v4<<(u32)__cntlzw((v4^(v2+v3))))>>31);
}

u32 fn_802FCFE4(void) {
    return 1;
}

u32 fn_802FD194(void) {
    return 8;
}

u32 fn_802FD3A4(void) {
    return 7;
}

u32 fn_802FD43C(void) {
    return 6;
}

u32 fn_802FD444(void) {
    return 1;
}

u32 fn_802FD8E0(void) {
    return 5;
}

float fn_802FD8E8(void) {
    float v1;
    u32 c0;
    c0 = fn_802DE0E4();
    v1 = MF(((u32)c0+8468));
    return v1;
}

u32 fn_802FDC58(void) {
    return 4;
}

float fn_802FDC60(void) {
    float v1;
    u32 c0;
    c0 = fn_802DE0E4();
    v1 = MF(((u32)c0+8468));
    return v1;
}

u32 fn_802FDFD0(void) {
    return 3;
}

float fn_802FDFD8(void) {
    float v1;
    u32 c0;
    c0 = fn_802DE0E4();
    v1 = MF(((u32)c0+8468));
    return v1;
}

u32 fn_802FE340(void) {
    return 2;
}

u32 fn_802FE348(void) {
    return 1;
}

float fn_802FE3A4(void) {
    float v1;
    v1 = lbl_805E3AD0;
    return v1;
}

u32 fn_802FE3AC(void) {
    return 16;
}

u32 fn_802FE3B4(void) {
    return 1;
}

u32 fn_802FE3BC(void) {
    return 1;
}

u32 fn_802FE3C4(void) {
    return 1;
}

u32 fn_802FE3CC(void) {
    return 1;
}

u32 fn_802FE3D4(void) {
    return 0;
}

u32 fn_802FE3DC(void) {
    return 0;
}

u32 fn_802FE3E4(void) {
    return 0;
}

u32 fn_802FE5E4(void) {
    return 1;
}

u32 fn_802FE5EC(void) {
    return 1;
}

u32 fn_802FE5F4(void) {
    return 1;
}

u32 fn_802FE5FC(void) {
    return 1;
}

u32 fn_802FE604(void) {
    return 0;
}

u32 fn_802FE60C(void) {
    return 1;
}

u32 fn_802FE64C(void) {
    return 1;
}

float fn_802FE654(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = M8(((u32)p3+12));
    if ((u32)v1 != (u32)0) {
        v2 = MF(((u32)p3+8));
        return (-v2);
    }
    v3 = MF(((u32)p3+8));
    return v3;
}

u32 fn_803049FC(void) {
    return 25;
}

u32 fn_80304A04(void) {
    return 1;
}

u32 fn_80304B48(void) {
    return 24;
}

u32 fn_80304B50(void) {
    return 1;
}

u32 fn_80304B58(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+8));
    return ((u32)__cntlzw(v1)>>5);
}

u32 fn_80304CB0(void) {
    return 23;
}

u32 fn_80304CB8(void) {
    return 1;
}

u32 fn_80304CC0(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+20));
    return ((u32)__cntlzw(v1)>>5);
}

u32 fn_80304CD0(u32 p3) {
    float v1;
    u32 v2;
    u32 c0;
    u32 c1;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+904));
    c1 = __cvt_fp2unsigned(v1);
    v2 = M32(((u32)p3+20));
    return ((v2<<(u32)__cntlzw((v2^c1)))>>31);
}

u32 fn_80304DAC(void) {
    return 22;
}

u32 fn_80304DB4(void) {
    return 1;
}

u32 fn_80304DBC(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+8));
    return (((-(s32)v1)|v1)>>31);
}

u32 fn_80304E64(void) {
    return 21;
}

u32 fn_80304E6C(void) {
    return 1;
}

u32 fn_80304E74(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+8));
    return (((-(s32)v1)|v1)>>31);
}

u32 fn_80305060(void) {
    return 20;
}

u32 fn_80305068(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+12));
    return (((-(s32)v1)|v1)>>31);
}

u32 fn_8030507C(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+12));
    return (((-(s32)v1)|v1)>>31);
}

u32 fn_80305090(void) {
    return 1;
}

u32 fn_80305098(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+12));
    return (((-(s32)v1)|v1)>>31);
}

u32 fn_803050AC(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+17));
    return v1;
}

u32 fn_803050B4(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+12));
    return (((-(s32)v1)|v1)>>31);
}

u32 fn_803050F4(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+12));
    return (((-(s32)v1)|v1)>>31);
}

float fn_80305190(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+308));
    return v1;
}

float fn_803051B4(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+312));
    return v1;
}

float fn_803051D8(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = M8(((u32)p3+16));
    if ((u32)v1 != (u32)0) {
        v2 = MF(((u32)p3+8));
        return v2;
    }
    v3 = MF(((u32)p3+8));
    return (-v3);
}

u32 fn_80305314(void) {
    return 19;
}

u32 fn_8030531C(void) {
    return 1;
}

float fn_80305390(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+400));
    return v1;
}

void fn_803053B4(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+404));
    __cvt_fp2unsigned(v1);
}

float fn_803053DC(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+396));
    return v1;
}

u32 fn_80305654(void) {
    return 18;
}

u32 fn_8030565C(void) {
    return 1;
}

u32 fn_803056EC(void) {
    return 0;
}

u32 fn_803056F4(void) {
    return 1;
}

float fn_803056FC(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+252));
    return v1;
}

u32 fn_80305890(void) {
    return 17;
}

u32 fn_80305898(void) {
    return 1;
}

float fn_8030590C(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+204));
    return v1;
}

u32 fn_80305964(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805DDC0C;
    if ((u32)v1 != (u32)0) {
        M32(((u32)p3+8)) = v1;
        v2 = lbl_805DDC0C;
        M32(((u32)v2+4)) = p3;
        lbl_805DDC0C = p3;
    } else {
        lbl_805DDC10 = p3;
        lbl_805DDC0C = p3;
    }
    v3 = lbl_805DDC08;
    lbl_805DDC08 = (v3+1);
    return v3;
}

u32 fn_8030599C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DDC0C;
    if ((u32)v1 != (u32)0) {
        v2 = lbl_805DDC10;
        M32(((u32)p3+4)) = v2;
        v3 = lbl_805DDC10;
        M32(((u32)v3+8)) = p3;
        lbl_805DDC10 = p3;
        v4 = v2;
    } else {
        lbl_805DDC10 = p3;
        lbl_805DDC0C = p3;
        v4 = v1;
    }
    v5 = lbl_805DDC08;
    lbl_805DDC08 = (v5+1);
    return v5;
}

u32 fn_803059D8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 == (u32)0) {
        v2 = M32(((u32)p3+8));
        lbl_805DDC0C = v2;
        if ((u32)v2 == (u32)0) goto L12;
        M32(((u32)v2+4)) = 0;
    } else {
        v3 = M32(((u32)p3+8));
        M32(((u32)v1+8)) = v3;
    }
    L12:;
    v4 = M32(((u32)p3+8));
    if ((u32)v4 == (u32)0) {
        v5 = M32(((u32)p3+4));
        lbl_805DDC10 = v5;
        if ((u32)v5 == (u32)0) goto L24;
        M32(((u32)v5+8)) = 0;
    } else {
        v6 = M32(((u32)p3+4));
        M32(((u32)v4+4)) = v6;
    }
    L24:;
    M32(((u32)p3+8)) = 0;
    M32(((u32)p3+4)) = 0;
    v7 = lbl_805DDC08;
    lbl_805DDC08 = (v7-1);
    return v7;
}

u32 fn_80305CA0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+31744));
    v2 = M32((p3+(v1*496)));
    M32(((u32)p3+31744)) = v2;
    v3 = M32(((u32)p3+31748));
    M32(((u32)p3+31748)) = (v3-1);
    return (p3+(v1*496));
}

u32 fn_80305CC8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+11264));
    v2 = M32((p3+(v1*352)));
    M32(((u32)p3+11264)) = v2;
    v3 = M32(((u32)p3+11268));
    M32(((u32)p3+11268)) = (v3-1);
    return (p3+(v1*352));
}

u32 fn_803073BC(void) {
    return 0;
}

u32 fn_80307528(void) {
    return 26;
}

u32 fn_80307530(void) {
    return 1;
}

u32 fn_80307538(void) {
    return 1;
}

u32 fn_80307540(void) {
    return 1;
}

u32 fn_80307548(void) {
    return 0;
}

u32 fn_80307634(void) {
    return 0;
}

u32 fn_8030763C(void) {
    return 1;
}

u32 fn_8030C718(void) {
    return 32;
}

u32 fn_8030C720(void) {
    return 1;
}

u32 fn_8030C728(void) {
    return 1;
}

u32 fn_8030CA54(void) {
    return 31;
}

u32 fn_8030CA5C(void) {
    return 1;
}

u32 fn_8030CCF8(void) {
    return 30;
}

u32 fn_8030CD00(void) {
    return 1;
}

u32 fn_8030CD08(void) {
    return 1;
}

u32 fn_8030CEF0(void) {
    return 29;
}

u32 fn_8030CEF8(void) {
    return 1;
}

u32 fn_8030CF00(void) {
    return 0;
}

float fn_8030CF74(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+128));
    return v1;
}

float fn_8030CF98(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+156));
    return v1;
}

u32 fn_8030D210(void) {
    return 28;
}

u32 fn_8030D218(void) {
    return 1;
}

u32 fn_8030D220(void) {
    return 1;
}

u32 fn_8030D228(void) {
    return 1;
}

u32 fn_8030D230(void) {
    return 0;
}

float fn_8030D2A4(void) {
    float v1;
    u32 c0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+452));
    return v1;
}

u32 fn_8030D48C(void) {
    return 27;
}

u32 fn_8030D494(void) {
    return 1;
}

u32 fn_8030D510(void) {
    return (u32)lbl_804DD0D8;
}

void fn_80311F2C(u32 p3) {
    M32(p3) = 0;
    M8(((u32)p3+14)) = 0;
    M8(((u32)p3+4)) = 0;
    M8(((u32)p3+15)) = 0;
    M8(((u32)p3+5)) = 0;
    M8(((u32)p3+16)) = 0;
    M8(((u32)p3+6)) = 0;
    M8(((u32)p3+17)) = 0;
    M8(((u32)p3+7)) = 0;
    M8(((u32)p3+18)) = 0;
    M8(((u32)p3+8)) = 0;
    M8(((u32)p3+19)) = 0;
    M8(((u32)p3+9)) = 0;
    M8(((u32)p3+20)) = 0;
    M8(((u32)p3+10)) = 0;
    M8(((u32)p3+21)) = 0;
    M8(((u32)p3+11)) = 0;
    M8(((u32)p3+22)) = 0;
    M8(((u32)p3+12)) = 0;
    M8(((u32)p3+23)) = 0;
    M8(((u32)p3+13)) = 0;
}

u32 fn_80312544(u32 p3) {
    return ((u32)lbl_804E02D0+(p3<<5));
}

u32 fn_80312650(u32 p3) {
    A36_4_u32* v1;
    u32 v2;
    v1 = (A36_4_u32*)((u32)lbl_804E0620);
    v2 = v1[p3].f;
    return v2;
}

u32 fn_80312668(u32 p3) {
    A36_8_u32* v1;
    u32 v2;
    v1 = (A36_8_u32*)((u32)lbl_804E0620);
    v2 = v1[p3].f;
    return v2;
}

u32 fn_80312680(u32 p3) {
    A36_32_u32* v1;
    u32 v2;
    v1 = (A36_32_u32*)((u32)lbl_804E0620);
    v2 = v1[p3].f;
    return v2;
}

u32 fn_80312698(void) {
    return 7;
}

u32 fn_803126A0(u32 p3) {
    u32 v1;
    v1 = M32((u32)lbl_804E0620+(p3*36));
    return v1;
}

u32 fn_803126B4(u32 p3) {
    A36_8_u32* v1;
    u32 v2;
    v1 = (A36_8_u32*)((u32)lbl_804E0620);
    v2 = v1[p3].f;
    return v2;
}

u32 fn_80312ECC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    A36_16_u32* v4;
    u32 v5;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)v1+4));
    v3 = M8(((u32)v2+59));
    v4 = (A36_16_u32*)((u32)lbl_804E0620);
    v5 = v4[((s8)v3)].f;
    return v5;
}

u32 fn_80312EF4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    A36_20_u32* v4;
    u32 v5;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)v1+4));
    v3 = M8(((u32)v2+59));
    v4 = (A36_20_u32*)((u32)lbl_804E0620);
    v5 = v4[((s8)v3)].f;
    return v5;
}

u32 fn_80312F1C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    A36_24_u32* v4;
    u32 v5;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)v1+4));
    v3 = M8(((u32)v2+59));
    v4 = (A36_24_u32*)((u32)lbl_804E0620);
    v5 = v4[((s8)v3)].f;
    return v5;
}

u32 fn_80312F44(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    A36_32_u32* v4;
    u32 v5;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)v1+4));
    v3 = M8(((u32)v2+59));
    v4 = (A36_32_u32*)((u32)lbl_804E0620);
    v5 = v4[((s8)v3)].f;
    return v5;
}

u32 fn_80312F6C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    A36_12_u32* v4;
    u32 v5;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)v1+4));
    v3 = M8(((u32)v2+59));
    v4 = (A36_12_u32*)((u32)lbl_804E0620);
    v5 = v4[((s8)v3)].f;
    return v5;
}

u32 fn_80312F94(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    A36_28_u32* v4;
    u32 v5;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)v1+4));
    v3 = M8(((u32)v2+59));
    v4 = (A36_28_u32*)((u32)lbl_804E0620);
    v5 = v4[((s8)v3)].f;
    return v5;
}

u32 fn_80315AB0(void) {
    return 1;
}

u32 fn_80315C04(void) {
    return 1;
}

float fn_8031CB44(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    float v4;
    float v5;
    u32 v6;
    float v7;
    float v8;
    u32 v9;
    float v10;
    u32 v11;
    float v12;
    float v13;
    u32 v14;
    float v15;
    u32 v16;
    float v17;
    float v18;
    u32 v19;
    float v20;
    v1 = M32(((u32)p3+68));
    v2 = M32(((u32)p3+76));
    v3 = MF(v1);
    v4 = MF(((u32)p3+84));
    v5 = MF(v2);
    MF(((u32)p3+52)) = (v3+((v4-v3)/v5));
    v6 = M32(((u32)p3+72));
    v7 = MF(((u32)p3+104));
    v8 = MF(v6);
    v9 = M32(((u32)p3+76));
    v10 = MF(v9);
    MF(((u32)p3+60)) = (-(v8+((v7-v8)/v10)));
    v11 = M32(((u32)p3+68));
    v12 = MF(((u32)p3+96));
    v13 = MF(v11);
    v14 = M32(((u32)p3+76));
    v15 = MF(v14);
    MF(((u32)p3+56)) = (v13+((v12-v13)/v15));
    v16 = M32(((u32)p3+72));
    v17 = MF(((u32)p3+92));
    v18 = MF(v16);
    v19 = M32(((u32)p3+76));
    v20 = MF(v19);
    MF(((u32)p3+64)) = (-(v18+((v17-v18)/v20)));
    return (v17-v18);
}

float fn_8031DA10(void) {
    float v1;
    v1 = lbl_805E3EE8;
    return v1;
}

void fn_8031DA58(u32 p3) {
    u32 v1;
    u32 v2;
    M32(((u32)p3+4)) = 0;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)p3+20));
    M32(((u32)p3+8)) = (v1+v2);
    M32(((u32)p3+20)) = 0;
}

void fn_8031F4BC(u32 p3, float q1) {
    MF(((u32)p3+28)) = q1;
}

void fn_80320E7C(u32 p3) {
    M32(((u32)p3+40)) = 2;
    fn_80320EB8();
    M8(((u32)p3+44)) = 0;
}

void fn_802FE3A0(void) {}

void fn_802FE448(void) {}

void fn_8030759C(void) {}

void fn_8030D2C8(void) {}

void fn_8031EBB8(void) {}

void fn_80320204(void) {}

void fn_80320708(void) {}

void fn_8032115C(void) {}

void fn_802F1188(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+4));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8037989C((p3+208), ((6<<16)+18));
}

void fn_802F1828(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+4));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80379784((p3+568), (8<<16), 0);
}

void fn_802F1860(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+4));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80379784((p3+628), ((8<<16)+46), 0);
}

void fn_802F189C(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+4));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80379784((p3+628), ((8<<16)+47), 0);
}

void fn_802F88DC(u32 p3) {
    u32 v1;
    u32 v2;
    float d0;
    v1 = M32(((u32)p3+4));
    d0 = fn_802D4678(v1);
    v2 = M32(((u32)p3+4));
    func_803D2098((v2+8), (v2+32), (v2+8), d0);
}

void fn_8030C79C(u32 p3) {
    fn_80393820((p3+36));
}

u32 fn_803124F0(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    v1 = lbl_805DDBC0;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DA040, (u32)&lbl_805DA038, 0);
    v2 = M32(((u32)c0+4));
    v3 = M32(((u32)v2+4));
    v4 = M8(((u32)v3+59));
    return ((u32)lbl_804E02D0+(((s8)v4)<<5));
}

u32 fn_80313A84(u32 p3) {
    M32(p3) = 0;
    M32(((u32)p3+4)) = 0;
    M32(((u32)p3+8)) = 0;
    fn_80313AC4(p3);
    return p3;
}

void fn_80314068(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)p3+8));
    fn_80315C0C(p3, (v2+(v1<<3)), 1, p4, v2);
}

void fn_803140A0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)p3+8));
    fn_80315C0C(p3, (v2+(v1<<3)), 1, p4, v2);
}

u32 fn_803140EC(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)p3+8));
    return (v2+(v1<<3));
}

u32 fn_803179C8(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+36));
    return v1;
}

u32 fn_803179D0(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+32));
    return v1;
}
}
