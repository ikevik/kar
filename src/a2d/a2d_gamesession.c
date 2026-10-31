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
typedef struct { float x, y, z; } V3;
struct VC0_float_uf { virtual float m(u32, float); };
struct VC12_void_u { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void m(u32); };
struct VC13_u32_ { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual u32 m(void); };
struct VC15_void_ { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void m(void); };
struct VC17_void_ { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void m(void); };
struct VC1_void_ { virtual void d0(); virtual void m(void); };
struct VC2_float_u { virtual void d0(); virtual void d1(); virtual float m(u32); };
struct VC2_float_uf { virtual void d0(); virtual void d1(); virtual float m(u32, float); };
struct VC2_void_u { virtual void d0(); virtual void d1(); virtual void m(u32); };
struct VC8_void_uf { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void m(u32, float); };
extern "C" {
extern u8 lbl_804F8404[];
extern u8 lbl_804CB3F8[];
extern u8 lbl_804F52A8[];
extern u8 lbl_804F526C[];
extern u8 lbl_804F5230[];
extern u8 HSD_AObjSetRate[];
extern const float lbl_805E3690;
extern u8 lbl_805DC8BC[];
extern u8 lbl_804BE238[];
extern u8 lbl_804BE210[];
extern u8 lbl_804BD820[];
extern u8 lbl_804BD908[];
extern u8 lbl_804BD848[];
extern u8 lbl_804BD870[];
extern u8 lbl_804BD8C0[];
extern u8 lbl_804BD724[];
extern const float lbl_805E3730;
extern u8 lbl_804F3510[];
extern const float lbl_805E3750;
extern const float lbl_805E3754;
extern u8 lbl_804BD76C[];
extern const float lbl_805E3758;
extern const float lbl_805E3728;
extern const float lbl_805E375C;
extern u8 lbl_804BDF2C[];
extern u8 lbl_804BDF70[];
extern u8 HSD_AObjSetCurrentFrame[];
extern u8 HSD_AObjSetFlags[];
extern u32 lbl_805D9098;
extern u32 lbl_805D90F0;
extern const float lbl_805E3788;
extern const float lbl_805E3780;
extern u32 lbl_805DD96C;
extern u8 lbl_804D40F0[];
extern const float lbl_805E3874;
u32 fn_80289138(void);
float fn_802B57F4(u32);
float fn_802BA9C8(u32, u32, u32, float);
float fn_802BA92C(u32, float);
float fn_803AA808(u32, float);
u32 fn_802BA97C(u32, u32);
void fn_802B585C(u32);
u32 fn_803AD760(u32, u32, u32, u32, u32);
u32 fn_8039A7BC(u32, u32, float);
u32 fn_8030D510(u32, float);
void fn_8030D51C(u32, float);
u32 fn_802BE1B8(u32, u32, u32, u32, float, float);
u32 fn_80381A44(u32, u32, float);
float HSD_StartRender(u32);
float fn_8040F83C(u32, u32, float);
void HSD_IsEFBCopyPass(u32, float);
u32 fn_8034D1F8(u32, u32, float);
float fn_802C5F14(u32, u32, u32, float);
float fn_802C601C(u32, float);
float fn_802C6130(u32, float);
void fn_8040A64C(u32);
float fn_803FCDB8(u32, ...);
u32 fn_803919FC(u32, u32);
void fn_80391644(u32, u32, float);
void fn_8037B028(u32, u32, u32, u32, u32, u32, float);
u32 fn_80296264(u32, float);
float fn_802D4C30(u32, float);
void fn_80409480(u32, u32, u32, u32, float);
float fn_80409250(u32, float);
void fn_8037B33C(u32, u32, float);
float fn_802D8AC8(u32, u32, float);
void fn_802F4068(u32, u32, float);
void fn_802FA16C(u32, u32, float);
void fn_802F53DC(u32, u32, u32, float);
void fn_802F4A48(u32, u32, u32, u32, float);
void fn_802F7718(u32, u32, u32, u32, u32, float);
void fn_802F7B28(u32, u32, u32, u32, u32, float);
void fn_802F7F24(u32, u32, float);
void fn_802F858C(u32, u32, u32, float);
void fn_802FAA88(u32, u32, u32, float);
void fn_802FBAF0(u32, u32, u32, u32, u32, float);
void fn_802FF98C(u32, u32, u32, u32, float);
void fn_802F3128(u32, u32, float);
u32 fn_802DE0E4(u32);
u32 fn_8029626C(u32, float);
void fn_802D9308(u32, u32, float);
float fn_802DF844(u32);
float fn_80379784(u32, u32, u32, float);
float fn_802D9394(u32, u32, float);
void fn_80381D6C(u32, u32, u32, float);
float fn_802D4C3C(u32, float);
float fn_802F1828(u32, u32);
float fn_802F189C(u32);
void fn_802F39A0(u32, u32, u32, float);
void fn_803120C0(u32);
void fn_802DB510(u32, u32);
float fn_80369C9C(u32);
float fn_8036B188(u32, float);
float fn_8036C06C(u32, float);
float fn_8036E8D4(u32, float);
float fn_8037103C(u32);
float fn_803CF8CC(u32, u32, u32, float);
float fn_8034C988(u32, float);
void HSD_StateInvalidate(u32, float);
u32 fn_802E4A4C(u32, u32, float, float, float, float);
void fn_803839BC(u32, u32, u32);
void fn_80393820(u32);


void fn_802BA850(u32 p3) {
    ((VC12_void_u*)(p3))->m(10);
}

u32 fn_802BA97C(u32 p3, u32 p4) {
    fn_802B57F4(p3);
    M32(p3) = (u32)lbl_804F8404;
    M32(((u32)p3+8)) = ((u32)lbl_804F8404+16);
    M32(((u32)p3+56)) = ((u32)lbl_804F8404+88);
    return p3;
}

u32 fn_802BAB78(u32 p3) {
    fn_802B585C(p3);
    M32(p3) = (u32)lbl_804CB3F8;
    return p3;
}

void fn_802C40E4(u32 p3) {
    M32(p3) = (u32)lbl_804F52A8;
    M32(((u32)p3+4)) = 5;
}

void fn_802C40FC(u32 p3) {
    M32(p3) = (u32)lbl_804F526C;
    M32(((u32)p3+4)) = 5;
}

void fn_802C4114(u32 p3) {
    M32(p3) = (u32)lbl_804F5230;
    M32(((u32)p3+4)) = 5;
}

void fn_802C6BE0(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+4));
    fn_8040A64C(v1);
}

void fn_802C7B48(u32 p3) {
    M32(p3) = 0;
}

u32 fn_802C80DC(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    v1 = M32(((u32)(p3+(p4<<2))+24));
    if ((u32)v1 == (u32)p5) {
    return (p3+(p4<<2));
    }
    M32(((u32)(p3+(p4<<2))+24)) = p5;
    M32(((u32)(p3+(p4<<2))+72)) = 10;
    return (p3+(p4<<2));
}


void fn_802CD8DC(u32 p3) {
    float v1;
    v1 = lbl_805E3690;
    MF(((u32)p3+8)) = v1;
    MF(((u32)p3+4)) = v1;
    MF(p3) = v1;
}



u32 fn_802D3CF0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(p3);
    if ((u32)v1 != (u32)0) {
        v2 = M32(v1+(p4<<2));
        if ((u32)v2 != (u32)0) {
        return v2;
        }
    }
    return 0;
}

u32 fn_802D3D6C(u32 p3) {
    M32(p3) = (u32)lbl_804BE238;
    M32(((u32)p3+4)) = 0;
    M32(((u32)p3+8)) = 0;
    ((VC2_void_u*)(p3))->m((u32)lbl_804BE238);
    M32(p3) = (u32)lbl_804BE210;
    M32(((u32)p3+12)) = -1;
    return p3;
}



u32 fn_802D4184(u32 p3) {
    float d0;
    M32(p3) = (u32)lbl_804BDF2C;
    M32(((u32)p3+4)) = 0;
    M32(((u32)p3+8)) = 0;
    d0 = ((VC2_float_u*)(p3))->m((u32)lbl_804BDF2C);
    M32(p3) = (u32)lbl_804BDF70;
    fn_8037B028(p3, -1, 0, 0, 0, 0, d0);
    return p3;
}

void fn_802D4338(u32 p3) {
    float v1;
    v1 = lbl_805E3728;
    M32(((u32)p3+24)) = 0;
    M32(((u32)p3+32)) = 0;
    MF(((u32)p3+36)) = v1;
    M8(((u32)p3+40)) = 0;
}


u32 fn_802D4B90(void) {
    return 0;
}

u32 fn_802D4B98(void) {
    return 0;
}

u32 fn_802D4BA0(void) {
    return 0;
}

u32 fn_802D4BA8(void) {
    return 0;
}

u32 fn_802D4BB0(void) {
    return 0;
}

u32 fn_802D4BB8(void) {
    return 0;
}

u32 fn_802D4BC0(void) {
    return 0;
}

float fn_802D4BC8(void) {
    float v1;
    v1 = lbl_805E3730;
    return v1;
}

float fn_802D4BD0(void) {
    float v1;
    v1 = lbl_805E3728;
    return v1;
}

u32 fn_802D4BD8(void) {
    return 0;
}

u32 fn_802D4BE0(void) {
    return 0;
}

u32 fn_802D4BE8(void) {
    return 1;
}

u32 fn_802D4BF0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    v2 = M32(((u32)v1+132));
    return (((-(s32)v2)|v2)>>31);
}

u32 fn_802D4C08(void) {
    return 0;
}

u32 fn_802D4C10(void) {
    return 1;
}

u32 fn_802D4C18(void) {
    return 1;
}

u32 fn_802D4C20(void) {
    return 0;
}

u32 fn_802D4C28(void) {
    return 0;
}

float fn_802D4C30(u32 p3, float q1) {
    float v1;
    v1 = lbl_805E3728;
    return (v1/q1);
}

float fn_802D4C3C(u32 p3, float q1) {
    float v1;
    v1 = lbl_805E3728;
    return ((v1/q1)/q1);
}

u32 fn_802D4D5C(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+12));
    return v1;
}



u32 fn_802D6D48(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+63));
    return v1;
}

void fn_802D7D44(u32 p3, float q1) {
    MF(((u32)p3+36)) = q1;
}



u32 fn_802D96C0(void) {
    return 0;
}

u32 fn_802D96C8(void) {
    return 1;
}


float fn_802D9870(void) {
    float v1;
    v1 = lbl_805E3788;
    return v1;
}

float fn_802D98E8(void) {
    float v1;
    v1 = lbl_805E3788;
    return v1;
}

float fn_802D9A24(void) {
    float v1;
    v1 = lbl_805E3788;
    return v1;
}

float fn_802D9A2C(void) {
    float v1;
    v1 = lbl_805E3788;
    return v1;
}

float fn_802D9A34(void) {
    float v1;
    v1 = lbl_805E3788;
    return v1;
}

float fn_802D9A3C(void) {
    float v1;
    v1 = lbl_805E3788;
    return v1;
}

float fn_802D9A44(void) {
    float v1;
    v1 = lbl_805E3780;
    return v1;
}

u32 fn_802D9B2C(void) {
    return 0;
}

u32 fn_802D9B34(void) {
    return 1;
}

u32 fn_802D9C2C(void) {
    return 0;
}

u32 fn_802D9CC8(void) {
    return 0;
}

u32 fn_802D9CD0(void) {
    return 1;
}

u32 fn_802D9CD8(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+13));
    return v1;
}

void fn_802D9CE0(u32 p3, u32 p4) {
    float v1;
    v1 = MF(((u32)p4+56));
    MF(p3) = v1;
}

float fn_802D9CEC(u32 p3) {
    float v1;
    v1 = MF(((u32)p3+44));
    return v1;
}

float fn_802D9CF4(u32 p3) {
    float v1;
    v1 = MF(((u32)p3+48));
    return v1;
}

u32 fn_802D9CFC(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+172));
    return v1;
}





u32 fn_802D9DAC(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+304));
    return v1;
}

float fn_802D9DB4(u32 p3) {
    float v1;
    v1 = MF(((u32)p3+312));
    return v1;
}

u32 fn_802D9DBC(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+308));
    return v1;
}

u32 fn_802D9DC4(u32 p3) {
    return (p3+316);
}

u32 fn_802D9DCC(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+1320));
    return v1;
}

u32 fn_802D9DD4(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+1248));
    return v1;
}


void fn_802D9E4C(u32 p3, float q1) {
    MF(((u32)p3+196)) = q1;
}

void fn_802D9E54(u32 p3, float q1) {
    MF(((u32)p3+200)) = q1;
}





void fn_802DA380(u32 p3) {
    fn_803120C0((p3+100));
}

void fn_802DA3A4(u32 p3, u32 p4) {
    M32(((u32)p3+264)) = p4;
}


u32 fn_802DA3BC(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+276));
    return v1;
}

u32 fn_802DA3C4(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+64));
    return v1;
}

u32 fn_802DA3CC(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+348));
    return v1;
}

u32 fn_802DA550(void) {
    return 13;
}

u32 fn_802DA558(void) {
    return 1;
}

u32 fn_802DA560(void) {
    return 1;
}

u32 fn_802DA568(void) {
    return 1;
}

u32 fn_802DA570(void) {
    return 1;
}

u32 fn_802DA57C(void) {
    return 1;
}

u32 fn_802DA584(void) {
    return 1;
}

u32 fn_802DA58C(void) {
    return 1;
}

u32 fn_802DA594(void) {
    return 1;
}

u32 fn_802DA59C(void) {
    return 1;
}

u32 fn_802DA5A4(void) {
    return 0;
}

u32 fn_802DA5AC(void) {
    return 1;
}

u32 fn_802DA5B4(void) {
    return 1;
}

u32 fn_802DA5BC(void) {
    return 1;
}

u32 fn_802DA630(void) {
    return 1;
}

float fn_802DABD8(float q1) {
    float v1;
    v1 = lbl_805E3788;
    return (q1*(q1*(q1*v1)));
}

u32 fn_802DAF8C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+2064));
    v2 = M32((p3+(v1*516)));
    M32(((u32)p3+2064)) = v2;
    v3 = M32(((u32)p3+2068));
    M32(((u32)p3+2068)) = (v3-1);
    return (p3+(v1*516));
}

void fn_802DB4EC(u32 p3) {
    fn_802DB510(p3, 0);
}

void fn_802DB510(u32 p3, u32 p4) {
    M32(p3) = p4;
}

void fn_802DDBB0(u32 p3) {
    M32(((u32)p3+2064)) = 0;
    lbl_805DD96C = p3;
    M32(p3) = 1;
    M32(((u32)p3+516)) = 2;
    M32(((u32)p3+1032)) = 3;
    M32(((u32)p3+1548)) = -1;
    M32(((u32)p3+2068)) = 4;
}

u32 fn_802DE0E4(u32 p3) {
    return (u32)lbl_804D40F0;
}


u32 fn_802E4A44(void) {
    return 0;
}



void fn_802E846C(u32 p3) {
    fn_80393820((p3+36));
}

void fn_802E8584(u32 p3) {
    fn_80393820((p3+36));
}

void fn_802E8BE8(u32 p3) {
    fn_80393820((p3+36));
}

void fn_802E8D00(u32 p3) {
    fn_80393820((p3+36));
}

void fn_802BA0DC(void) {}

void fn_802C85E8(void) {}

void fn_802D3D14(void) {}

void fn_802D8AC4(void) {}

void fn_802DA578(void) {}




void fn_802D5CE4(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    u32 v7;
    u32 c0;
    float d1;
    float d2;
    v1 = M32(((u32)p3+124));
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805D90F0, (u32)&lbl_805D9098, 0);
    if (c0 != 0) return;
    v2 = MF(((u32)p3+312));
    v3 = lbl_805E3788;
    if (v2 < v3) {
    d1 = fn_802D8AC8(p3, 1, v2);
    v4 = M32(((u32)p3+124));
    d2 = ((VC0_float_uf*)(v4))->m(-1, d1);
    v7 = M32(((u32)p3+124));
    if (v7 != 0)
    fn_802FBAF0(v7, (p3+128), p4, p5, p6, d2);
    }
}

}
