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
extern u32 lbl_805DB1C0;
extern u32 lbl_805DB1B8;
extern u32 lbl_805DDBC0;
extern u8 lbl_804E92B4[];
extern u8 lbl_804E91EC[];
extern const float lbl_805E456C;
extern u8 lbl_804E9CA4[];
extern u8 lbl_804EA548[];
float fn_80342E98(u32);
float fn_8037AFD0(u32, u32);
void fn_8037B028(u32, u32, u32, u32, u32, u32, float);
float fn_80323D14(u32);
void fn_80343A94(void);
float HSD_JObjDispAll(u32, u32, u32, u32);
u32 fn_803AD760(u32, u32, u32, u32, u32);
float fn_803FCDB8(u32, ...);
void fn_80346768(u32, u32, float);
float __construct_array(u32, u32, u32, u32, u32);
float fn_80408EDC(u32, float);
void fn_80347E28(u32, float);
void fn_80348D2C(u32, u32, u32, u32);
void fn_8034B37C(u32, u32, u32);



void fn_80343A74(void) {
    fn_80343A94();
}



u32 fn_803461E8(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+84));
    return v1;
}

void fn_80347278(u32 p3) {
    float v1;
    v1 = lbl_805E456C;
    M32(((u32)p3+24)) = 0;
    MF(((u32)p3+32)) = v1;
    MF(((u32)p3+28)) = v1;
}

void fn_80348024(u32 p3) {
    M8(((u32)p3+108)) = 0;
    M8(((u32)p3+112)) = 0;
    M32(((u32)p3+84)) = 0;
    M8(((u32)p3+109)) = 0;
    M8(((u32)p3+113)) = 0;
    M32(((u32)p3+88)) = 0;
    M8(((u32)p3+110)) = 0;
    M8(((u32)p3+114)) = 0;
    M32(((u32)p3+92)) = 0;
    M8(((u32)p3+111)) = 0;
    M8(((u32)p3+115)) = 0;
    M32(((u32)p3+96)) = 0;
    M32(((u32)p3+100)) = 0;
}

u32 fn_80348CE4(u32 p3, u32 p4, u32 p5, u32 p6) {
    M32(p3) = (u32)lbl_804E9CA4;
    M32(((u32)p3+4)) = p4;
    M32(((u32)p3+8)) = p5;
    M32(((u32)p3+12)) = p6;
    fn_80348D2C(p3, p4, p5, p6);
    return p3;
}


u32 fn_8034AABC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+2304));
    v2 = M32((p3+(v1*96)));
    M32(((u32)p3+2304)) = v2;
    v3 = M32(((u32)p3+2308));
    M32(((u32)p3+2308)) = (v3-1);
    return (p3+(v1*96));
}

void fn_8034CF48(u32 p3, u32 p4, u32 p5) {
    if ((u32)p4 == (u32)0) {
    return;
    }
    fn_8034B37C(p4, p5, p5);
}

u32 fn_8034D1D0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+20160));
    v2 = M32((p3+(v1*252)));
    M32(((u32)p3+20160)) = v2;
    v3 = M32(((u32)p3+20164));
    M32(((u32)p3+20164)) = (v3-1);
    return (p3+(v1*252));
}

u32 fn_8034D1F8(void) {
    return (u32)lbl_804EA548;
}

void fn_80344AB8(void) {}

void fn_80344ABC(void) {}

void fn_80347C40(void) {}

void fn_80348D2C(u32 p3, u32 p4, u32 p5, u32 p6) {}

void fn_8034A07C(void) {}

void fn_8034A080(void) {}




u32 fn_80344B10(u32 p3) {
    return p3 == 0 ? (u32)lbl_804E91EC : (u32)lbl_804E92B4;
}


u32 fn_80344AC0(void) {
    return M32(fn_803AD760(lbl_805DDBC0, 0, (u32)&lbl_805DB1C0, (u32)&lbl_805DB1B8, 0) + 20) == 1 ? (u32)lbl_804E91EC : (u32)lbl_804E92B4;
}

}
