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
extern u32 lbl_805DBD58;
extern u32 lbl_805DBD50;
extern u32 lbl_805DDA40;
extern const float lbl_805E4C50;
extern u8 lbl_804BF238[];
extern u8 lbl_804BF260[];
extern u8 lbl_804BD6D4[];
extern u8 lbl_804BD6FC[];
extern u32 lbl_805DBD88;
extern u32 lbl_805DBD80;
extern u32 lbl_805DDBE0;
extern u8 lbl_804F3720[];
extern u8 lbl_80503FC0[];
extern const float lbl_805E4C7C;
extern const float lbl_805E4C80;
extern const double lbl_805E4C88;
extern u8 lbl_804BDE38[];
extern u8 lbl_804BDE78[];
extern const float lbl_805E4CB4;
extern u8 fn_802CD8DC[];
u32 HSD_JObjLoadJoint();
void __assert();
void fn_80408EDC();
u32 fn_802894BC();
u32 fn_803AD760();
void fn_80409250(u32, float);
u32 fn_802897E0();
void fn_8040A64C();
u32 HSD_CObjSetCurrent();
void fn_8037E5DC();
void HSD_CObjEndCurrent();
void fn_803FF318();
void HSD_CObjGetCurrent();
void fn_803FE4B8();
void fn_803FF080();
void HSD_JObjDispAll();
void fn_8037EFB0();
u32 fn_8037F018();
void fn_803CD7D4();
void fn_803CDDE4();
void GXSetNumTexGens();
void GXSetTexCoordGen2();
void fn_803CF30C();
void fn_803CF134();
void fn_803CEB54();
void fn_803CF0B0();
void fn_803CC518();
void fn_803CF05C();
void fn_803CF900();
void fn_803CF8CC();
void fn_803CF820();
void fn_803CF874();
void fn_803CF8A0();
void fn_803CD4A0();
void fn_803CD4E4();
void fn_803CAC04();
void GXSetVtxAttrFmt();
void GXLoadPosMtxImm();
void GXSetCurrentMtx();
void GXSetVtxDesc();
void GXBegin();
void HSD_StateInvalidate();
void fn_8028B2CC();
void fn_803CEBE0();
void fn_803CEC68();
void fn_803CEC24();
void fn_803CECD0();
u32 fn_803CDC34();
u32 fn_803CDC24();
void fn_8028B358(u32, u32, float, float, float, float, float, float, float, float);
void __construct_array();
void fn_80305ABC();

void fn_8037E3CC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = M32(((u32)p3+16));
    if ((u32)v1 == (u32)0) {
        c0 = HSD_JObjLoadJoint(p4);
        M32(((u32)p3+16)) = c0;
        v2 = M32(((u32)p3+16));
        if ((u32)v2 == (u32)0) {
            __assert((u32)lbl_804F35F0, 35, (u32)&lbl_805DBD48);
        }
    }
}

u32 fn_8037E42C(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c1;
    v1 = M32(((u32)p3+16));
    if ((u32)v1 != (u32)0) {
        fn_80408EDC(v1, p4);
        v2 = M32(((u32)p3+16));
        c1 = fn_802894BC(v2, p4, p5);
        v3 = c1;
    } else {
        v3 = v1;
    }
    return v3;
}



void fn_8037E8F0(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32(((u32)p3+20));
    c0 = HSD_CObjSetCurrent(v1);
    if ((s32)c0 != (s32)0) {
        fn_8037E5DC(40, 60);
        HSD_CObjEndCurrent();
    }
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
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)p3+8));
        c0 = HSD_CObjSetCurrent(v2);
        if ((s32)c0 != (s32)0) {
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
    }
}





void fn_8037EFB0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = M32(((u32)p3+12));
    if ((u32)v1 == (u32)0) {
        if ((u32)p4 != (u32)0) {
            M32(((u32)p3+12)) = p4;
            v2 = M32(p4);
            c0 = HSD_JObjLoadJoint(v2);
            M32(((u32)p3+16)) = c0;
            v3 = M32(((u32)p3+16));
            fn_802894BC(v3, p4, 0);
        }
    }
}








