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
extern "C" {
extern const float lbl_805E43E0;
extern const float lbl_805E43D8;
extern const float lbl_805E4400;
extern const float lbl_805E4418;
extern u32 lbl_805DAEF8;
extern u32 lbl_805DAEF0;
extern u32 lbl_805DDBC0;
extern u8 lbl_804E7660[];
extern u8 lbl_804E7614[];
float fn_80320708(u32, u32, float);
void fn_803218DC(u32, u32, float);
void fn_803D1978(u32, u32, float, float, float);
void fn_8037CF7C(void);
u32 fn_803AD760(u32, u32, u32, u32, u32);


void fn_8033C788(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+96));
    if ((s32)v1 <= (s32)1) {
    return;
    }
    M32(((u32)p3+96)) = (v1-1);
    v2 = M32(((u32)p3+96));
    if ((s32)v2 >= (s32)1) {
    return;
    }
    M32(((u32)p3+96)) = 1;
}

void fn_8033C7B4(u32 p3) {
    M32(((u32)p3+20)) = 0;
}

void fn_8033C7C0(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+20));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M32(((u32)p3+20)) = (v1-1);
}


float fn_8033E004(u32 p3, u32 p4) {
    float v1;
    float v2;
    float v3;
    float v4;
    v1 = lbl_805E4418;
    v2 = lbl_805E43D8;
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

void fn_8033E030(void) {
    fn_8037CF7C();
}

u32 fn_8033EB44(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+12416));
    v2 = M32((p3+(v1*388)));
    M32(((u32)p3+12416)) = v2;
    v3 = M32(((u32)p3+12420));
    M32(((u32)p3+12420)) = (v3-1);
    return (p3+(v1*388));
}






u32 fn_8033EC00(u32 p3) {
    return p3 == 0 ? (u32)lbl_804E7614 : (u32)lbl_804E7660;
}


u32 fn_8033EBB0(void) {
    return M32(fn_803AD760(lbl_805DDBC0, 0, (u32)&lbl_805DAEF8, (u32)&lbl_805DAEF0, 0) + 20) == 1 ? (u32)lbl_804E7614 : (u32)lbl_804E7660;
}

}
