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
extern u8 lbl_804F35F0[];
extern u32 lbl_805DBD48;
extern u8 lbl_804BF238[];
extern u8 lbl_804BF260[];
extern u8 lbl_804BD6D4[];
extern u8 lbl_804BD6FC[];
extern u32 lbl_805DBD88;
extern u32 lbl_805DBD80;
extern u32 lbl_805DDBE0;
extern u8 lbl_804BDE38[];
extern u8 lbl_804BDE78[];
extern const float lbl_805E4CB4;
extern u8 fn_802CD8DC[];
u32 HSD_JObjLoadJoint();
void __assert();
void fn_80408EDC();
void fn_802894BC();
u32 HSD_CObjSetCurrent();
void fn_8037E5DC();
void HSD_CObjEndCurrent();
void fn_803FF318();
void HSD_CObjGetCurrent();
void fn_803FE4B8();
void fn_803FF080();
void HSD_JObjDispAll();
u32 fn_803AD760();
void fn_8037EFB0();
void __construct_array();
void fn_80305ABC();

void fn_8037E3CC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = M32(((u32)p3+16));
    if ((u32)v1 != (u32)0) {
    return;
    }
    c0 = HSD_JObjLoadJoint(p4);
    M32(((u32)p3+16)) = c0;
    v2 = M32(((u32)p3+16));
    if ((u32)v2 != (u32)0) {
    return;
    }
    __assert((u32)lbl_804F35F0, 35, (u32)&lbl_805DBD48);
}

void fn_8037E42C(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+16));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80408EDC(v1);
    v2 = M32(((u32)p3+16));
    fn_802894BC(v2, p4, p5);
}

void fn_8037E8F0(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32(((u32)p3+20));
    c0 = HSD_CObjSetCurrent(v1);
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_8037E5DC(40, 60);
    HSD_CObjEndCurrent();
}

void fn_8037E92C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c0;
    v1 = M8(((u32)p3+24));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32(((u32)p3+8));
    c0 = HSD_CObjSetCurrent(v2);
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_803FF318(0);
    HSD_CObjGetCurrent();
    fn_803FE4B8();
    v3 = M32(((u32)p3+12));
    fn_803FF080(v3);
    v4 = M32(((u32)p3+16));
    HSD_JObjDispAll(v4, 0, 1, (2048<<16));
    v5 = M32(((u32)p3+16));
    HSD_JObjDispAll(v5, 0, 4, (2048<<16));
    v6 = M32(((u32)p3+16));
    HSD_JObjDispAll(v6, 0, 2, (2048<<16));
    HSD_CObjEndCurrent();
}





void fn_8037EFB0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = M32(((u32)p3+12));
    if ((u32)v1 != (u32)0) {
    return;
    }
    if ((u32)p4 == (u32)0) {
    return;
    }
    M32(((u32)p3+12)) = p4;
    v2 = M32(p4);
    c0 = HSD_JObjLoadJoint(v2);
    M32(((u32)p3+16)) = c0;
    v3 = M32(((u32)p3+16));
    fn_802894BC(v3, p4, 0);
}


