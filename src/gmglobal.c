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
typedef struct { u8 :4; u8 f:1; } BFu8_4_1;
typedef struct { u8 :2; u8 f:1; } BFu8_2_1;
typedef struct { u8 :1; u8 f:1; } BFu8_1_1;
typedef struct { u8 f:1; } BFu8_0_1;
typedef struct { u8 p[3280]; u32 f[1024]; } E3280_u32;
typedef struct { u8 p[3092]; float f[1024]; } E3092_float;
typedef struct { u8 p[3076]; u32 f[1024]; } E3076_u32;
typedef struct { u8 p[3056]; u32 f[1024]; } E3056_u32;
typedef struct { u8 p[3024]; u32 f[1024]; } E3024_u32;
typedef struct { u8 p[2636]; float f[1024]; } E2636_float;
typedef struct { u8 p[2252]; u32 f[1024]; } E2252_u32;
typedef struct { u8 p[2212]; float f[1024]; } E2212_float;
typedef struct { u8 p[2192]; float f[1024]; } E2192_float;
typedef struct { u8 p[2172]; u32 f[1024]; } E2172_u32;
typedef struct { u8 p[2152]; u32 f[1024]; } E2152_u32;
extern u8 lbl_805359D8[];
void fn_80009094(void);
extern u8 fn_800989FC[];
extern u8 lbl_8049574C[];
extern u32 lbl_805D5118;
extern u32 lbl_805D5120;
extern u8 lbl_80495784[];
extern u8 lbl_804957C8[];
extern u8 lbl_804957E0[];
extern u8 lbl_804957EC[];
extern u8 lbl_80495814[];
extern u8 lbl_80495850[];
extern u32 lbl_805D5124;
extern u8 lbl_80495864[];
extern u8 lbl_8049587C[];
extern u8 lbl_80495894[];
extern u8 lbl_804958AC[];
extern u8 lbl_804958C4[];
extern u8 lbl_804958D0[];
extern u32 lbl_805DD548;
extern const float lbl_805DE764;
extern const float lbl_805DE768;
extern const float lbl_805DE76C;
extern u32 lbl_805DD54C;
extern u32 lbl_805DD550;
extern u32 lbl_805DD560;
extern const float lbl_805DE770;
extern const float lbl_805DE774;
extern const float lbl_805DE778;
extern u32 lbl_805DD564;
extern u32 lbl_805DD568;
u32 gmGetGlobalP();
void memset();
void fn_800183A4();
void fn_800184D4();
void fn_80028754();
void fn_8002CFD8();
void fn_80038C40();
void fn_8003C070();
void fn_8003D03C();
void fn_80046D48();
void fn_8004A2BC();
void fn_80041664();
void fn_800418F4();
void fn_80286BE8();
void fn_80286DF0();
void fn_80286D7C();
u32 fn_80440744();
void fn_804397B4();
void func_80428F64();
u32 menu_getCurrentMenuID();
u32 fn_8003D5F0();
void fn_80015400();
u32 fn_800B8708();
u32 fn_8000AAC4();
u32 fn_8000AF5C();
u32 fn_8000A97C();
void fn_8000FCB8();
void OSReport(u32, ...);
void __assert();
void fn_800134D4();
u32 fn_80005CBC();
void fn_80005D04();
void gmSetFreezeGameFlag();
void gmUnsetFreezeGameFlag();
void fn_80112A78();
void fn_801129F8();
u32 fn_8000FCB0();
u32 fn_8003F670();
u32 fn_800081FC();
u32 fn_80008874();
u32 fn_8003D594();
u32 fn_8003EA40();
void gmLoadData();
void fn_8027B294();
void fn_80072514();
void fn_8018C0EC();
void fn_80241184();
void fn_802337E4();
void fn_8022D2AC();
void fn_800B00D8();
void fn_8024E918();
void fn_80261D68();
void fn_80261DA4();
void fn_80261DCC();
void fn_8018DD14();
void fn_801C4EDC();
void fn_80233878();
void fn_8027B3AC();
void fn_80261E9C();
u32 fn_80015DB4();
u32 fn_8007B650();
void lbLoadMusicLocation();
void fn_80015DDC();
void fn_80015E10();
u32 fn_80007E34();
u32 fn_80049E24();
u32 fn_80007E8C();
u32 gmGet_80536EDC_Ptr();
u32 fn_8042A0A0();
void fn_80078028();
u32 fn_80076F8C(u32, u32, u32, u32, u32, float, float, float, float);
void fn_801385B0();
void fn_8000B884();
void fn_80078284();
u32 fn_80077F14();
void fn_800780D0();
void fn_80077A5C();
void VIWaitForRetrace();
void fn_8000CD10();
void menuGetNextMenuID();
void fn_80008220();
void fn_8007859C();
void fn_80072A68();
u32 fn_8000AF94();
void fn_80072D44();
void fn_8005A348();
void fn_8005A3DC();
void fn_80072D18();
void fn_8000CE50();
u32 fn_8000CD40();
void fn_800088C8();
typedef struct { u8 f:2; } BFu8_0_2;
extern u8 lbl_8058B0E4[];
void fn_80005F14(void);
u32 fn_80005FD4(void);
extern const float lbl_805DE718;
extern u8 lbl_80589A80[];
extern u8 lbl_80536EF0[];
extern u8 lbl_80495740[];
extern u8 lbl_80495800[][10];
extern u32 lbl_805DD540;
u32 fn_80286D58(void);
void sprintf(u32, ...);
u32 fn_80312680(u32, float);
u32 gmGetClearcheckerTypeP(void);
u32 OSGetResetCode(void);
float fn_80077980(u32, float);
u32 fn_80077B50(u32, u32, u32, u32, u32, u32, float);
u32 func_80428F28(u32, u32, u32, float);
float HSD_GObj_AddGXLink(u32, u32, u32, u32, float);
u32 HSD_CObjLoadDesc(u32, float);
float fn_80429C14(u32, u32, u32, float);
float fn_80429728(u32, u32, u32, float);
float fn_80077ED4(u32, u32, float);

u32 fn_80005CBC(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    return (c0+2016);
}

u32 fn_80005CE0(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+2020));
    return v1;
}

u32 fn_80005D54(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2032));
    return v1;
}

void fn_80006354(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2088)) = p3;
}

u32 fn_80006384(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2088));
    return v1;
}

void fn_800064F0(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2016)) = 1;
}

void fn_80006518(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2089)) = 1;
}

u32 gmGetGlobalP(void) {
    return (u32)lbl_805359D8;
}

u32 gmGetClearcheckerP(void) {
    return ((u32)lbl_805359D8+3432);
}

u32 fn_80006C30(void) {
    return 1968;
}

u32 gmGetUnkP(void) {
    return ((u32)lbl_805359D8+3272);
}

void fn_80006EB8(void) {
    memset(((u32)lbl_805359D8+3012), 0, 256);
}

void hwActivateStudio(void) {
    fn_800183A4();
}

u32 gmGet_Dist(void) {
    u32 v1;
    v1 = M8(((u32)(u32)lbl_805359D8+3400));
    return v1;
}

void gmSet_Dist(u32 p3) {
    M8(((u32)(u32)lbl_805359D8+3400)) = p3;
}

u32 gmGet_Language(void) {
    u32 v1;
    v1 = M8(((u32)(u32)lbl_805359D8+3401));
    return v1;
}

void gmSet_Language(u32 p3) {
    M8(((u32)(u32)lbl_805359D8+3401)) = p3;
}

u32 gmGetClearcheckerType0Ptr(void) {
    return ((u32)lbl_805359D8+3432);
}

u32 gmGetClearcheckerType1Ptr(void) {
    return ((u32)lbl_805359D8+3712);
}

u32 gmGetClearcheckerType1_2Ptr(void) {
    return ((u32)lbl_805359D8+3956);
}

u32 gmGetClearcheckerType2Ptr(void) {
    return ((u32)lbl_805359D8+4008);
}

u32 gmGet_80536EDC_Ptr(void) {
    return ((u32)lbl_805359D8+5380);
}

void fn_80007808(void) {
    fn_800184D4();
    fn_80028754();
    fn_8002CFD8();
    fn_80038C40();
    fn_8003C070();
    fn_8003D03C();
    fn_80046D48();
}

void fn_80007840(void) {
    memset(((u32)lbl_805359D8+3432), 0, 280);
    fn_8004A2BC(0);
    fn_80028754();
    fn_8003C070();
}

void hwDeactivateStudio(void) {
    fn_80041664();
}

void salStartAi(void) {
    fn_800418F4();
}

u32 fn_80007AAC(void) {
    return ((u32)lbl_805359D8+3408);
}

void fn_80007ABC(void) {
    memset(((u32)lbl_805359D8+3408), 0, 23);
}

u32 fn_800081FC(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    return (c0+2004);
}

void fn_80008220(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2006)) = 1;
}

void fn_80008248(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2006)) = 0;
}

void fn_80008270(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    memset((c0+2004), 0, 3);
}

void menuGetNextMenuID(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2005)) = p3;
}

u32 fn_80008874(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    return (c0+2007);
}

void fn_80008898(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    memset((c0+2007), 0, 2);
}

void fn_800088C8(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2008)) = p3;
}

u32 fn_800088F8(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2008));
    return v1;
}

void fn_80008FC0(void) {
    fn_80286BE8(0);
}

void fn_80008FE4(void) {
    fn_80286DF0();
}

void fn_80009074(void) {
    fn_80286D7C();
}

u32 fn_80009100(void) {
    u32 c0;
    c0 = fn_80440744();
    if ((s32)c0 != (s32)0) {
        fn_804397B4((u32)fn_80009094);
        fn_804397B4((u32)fn_800989FC);
    }
    return c0;
}

void fn_8000914C(u32 p3) {
    func_80428F64(p3);
}

u32 fn_8000916C(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2708));
    return v1;
}

u32 fn_80009190(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2714));
    return v1;
}

void fn_800091B4(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2714)) = p3;
}

u32 fn_800091E4(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = MS16(((u32)c0+2716));
    return v1;
}

u32 fn_80009208(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2709));
    return v1;
}

void fn_8000922C(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2709)) = p3;
}

u32 fn_8000925C(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = 0;
    v2 = (c0+2760);
    v3 = 0;
    goto L15;
    L8:;
    v4 = M8(v2);
    if ((s32)((s8)v4) == (s32)0) {
        v5 = ((s8)(v1+1));
    } else {
        v5 = v1;
    }
    v1 = v5;
    v2 = (v2+48);
    v3 = (v3+1);
    L15:;
    if ((s32)((s8)v3) < (s32)5) goto L8;
    return v1;
}

u32 getPlayerCount(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2710));
    return v1;
}

u32 fn_800092D8(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2711));
    return v1;
}

void setMap(u32 p3) {
    u32 c0;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    c0 = gmGetGlobalP();
    c1 = menu_getCurrentMenuID();
    if ((s32)((s8)c1) == (s32)4) {
        c2 = fn_8003D5F0();
        if ((s32)((s8)c2) == (s32)0) {
            M8(((u32)c0+2711)) = p3;
            goto L32;
        }
        c3 = fn_8003D5F0();
        if ((s32)((s8)c3) == (s32)1) {
            M8(((u32)c0+2711)) = (p3+34);
            goto L32;
        }
        c4 = fn_8003D5F0();
        if ((s32)((s8)c4) != (s32)2) goto L32;
        M8(((u32)c0+2711)) = (p3+43);
    } else {
        M8(((u32)c0+2711)) = p3;
    }
    L32:;
}

void fn_8000942C(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2712)) = p3;
}

void fn_8000945C(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2713)) = p3;
}

u32 fn_800094FC(u32 p3) {
    E2172_u32* v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E2172_u32*)(c0);
    v2 = v1->f[p3];
    return v2;
}

float fn_80009568(u32 p3) {
    E2636_float* v1;
    float v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E2636_float*)(c0);
    v2 = v1->f[p3];
    return v2;
}

void fn_800095A0(void) {
    fn_80015400();
}

float fn_80009764(u32 p3) {
    E2192_float* v1;
    float v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E2192_float*)(c0);
    v2 = v1->f[p3];
    return v2;
}

float fn_80009850(u32 p3) {
    E2212_float* v1;
    float v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E2212_float*)(c0);
    v2 = v1->f[p3];
    return v2;
}

u32 fn_800099A0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+3000));
    if ((s32)p3 == (s32)((s8)v1)) {
        v5 = 0;
    } else {
        v2 = M8(((u32)c0+3003));
        if ((s32)p3 == (s32)((s8)v2)) {
            v5 = 1;
        } else {
            v3 = M8(((u32)c0+3006));
            if ((s32)p3 == (s32)((s8)v3)) {
                v5 = 2;
            } else {
                v4 = M8(((u32)c0+3009));
                if ((s32)p3 == (s32)((s8)v4)) {
                    v5 = 3;
                } else {
                    v5 = -1;
                }
            }
        }
    }
    return v5;
}

u32 fn_80009A30(void) {
    u32 v1;
    u32 c0;
    u32 c1;
    u32 c2;
    u32 c3;
    c0 = fn_800B8708();
    if ((s32)c0 == (s32)-1) {
        v1 = c0;
    } else {
        c1 = fn_8000AAC4();
        if ((s32)((s8)c1) == (s32)0) {
            c2 = fn_8000AF5C();
            if ((s32)((s8)c2) == (s32)0) {
                c3 = fn_8000A97C();
                if ((s32)((s8)c3) == (s32)0) goto L20;
            }
        }
        v1 = -1;
        goto L21;
    L20:;
        v1 = c0;
    }
    L21:;
    return v1;
}

void fn_80009B9C(void) {
    fn_8000FCB8();
}

u32 fn_80009BBC(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+2100));
    v2 = M8(((u32)c0+2099));
    return (v2+(v1*60));
}

void fn_80009BEC(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    M32(((u32)c0+2100)) = 0;
    M8(((u32)c0+2099)) = 0;
}

u32 fn_80009FB8(u32 p3) {
    E2252_u32* v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E2252_u32*)(c0);
    v2 = v1->f[p3];
    return v2;
}

u32 fn_8000A0F8(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+2100));
    v2 = MS16(((u32)c0+2716));
    v3 = M8(((u32)c0+2099));
    return ((60-v3)+((v2-(v1+1))*60));
}

u32 fn_8000A138(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2725));
    return ((v1>>7)&0x1);
}

u32 fn_8000A160(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2725));
    return ((v1>>6)&0x1);
}

u32 fn_8000A188(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2725));
    return ((v1>>4)&0x1);
}

u32 fn_8000A1B0(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2725));
    return ((v1>>3)&0x1);
}

u32 fn_8000A1D8(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2725));
    return ((v1>>1)&0x3);
}

u32 fn_8000A200(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2725));
    return (v1&0x1);
}

u32 fn_8000A228(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2726));
    return ((v1>>6)&0x1);
}

u32 fn_8000A250(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2726));
    return ((v1>>5)&0x1);
}

u32 fn_8000A278(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2726));
    return ((v1>>4)&0x1);
}

u32 fn_8000A2A0(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2725));
    if ((s32)((v1>>5)&0x1) != (s32)0) {
        OSReport((u32)lbl_8049574C);
        __assert((u32)&lbl_805D5118, 1057, (u32)&lbl_805D5120);
    }
    v2 = M8(((u32)c0+2725));
    return ((v2>>5)&0x1);
}

u32 fn_8000A300(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2726));
    return ((v1>>1)&0x3);
}

void fn_8000A328(void) {
    fn_800134D4();
}

u32 fn_8000A348(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2727));
    return ((v1>>4)&0x1);
}

void fn_8000A444(u32 p3) {
    u32 c0;
    c0 = fn_80005CBC();
    M32(((u32)c0+56)) = p3;
}

u32 fn_8000A474(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80005CBC();
    v1 = M32(((u32)c0+60));
    return v1;
}

void fn_8000A498(u32 p3) {
    u32 c0;
    c0 = fn_80005CBC();
    M32(((u32)c0+60)) = p3;
}

u32 fn_8000A4C8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80005CBC();
    v1 = M32(((u32)c0+64));
    return v1;
}

void fn_8000A530(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80005CBC();
    v1 = M32(((u32)c0+64));
    if ((s32)v1 < (s32)0) {
        M32(((u32)c0+64)) = 0;
    } else {
        M32(((u32)c0+64)) = (v1+1);
    }
}

u32 fn_8000A570(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80005CBC();
    v1 = M32(((u32)c0+68));
    return v1;
}

void fn_8000A594(u32 p3) {
    u32 c0;
    c0 = fn_80005CBC();
    M32(((u32)c0+68)) = p3;
}

u32 fn_8000A604(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2760));
    if ((s32)v1 != (s32)4) {
        v2 = M8(((u32)c0+2120));
        if ((s32)((s8)v2) == (s32)p3) {
            v9 = 0;
            goto L43;
        }
    }
    v3 = M8(((u32)c0+2808));
    if ((s32)v3 != (s32)4) {
        v4 = M8(((u32)c0+2121));
        if ((s32)((s8)v4) == (s32)p3) {
            v9 = 1;
            goto L43;
        }
    }
    v5 = M8(((u32)c0+2856));
    if ((s32)v5 != (s32)4) {
        v6 = M8(((u32)c0+2122));
        if ((s32)((s8)v6) == (s32)p3) {
            v9 = 2;
            goto L43;
        }
    }
    v7 = M8(((u32)c0+2904));
    if ((s32)v7 != (s32)4) {
        v8 = M8(((u32)c0+2123));
        if ((s32)((s8)v8) == (s32)p3) {
            v9 = 3;
            goto L43;
        }
    }
    v9 = 5;
    L43:;
    return v9;
}

u32 fn_8000A958(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2098));
    return v1;
}

u32 fn_8000A9E4(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2097));
    return v1;
}

void fn_8000AA08(void) {
    fn_80005D04(4);
}

void playerDies(u32 p3) {
    if ((s32)p3 != (s32)1) {
        if ((s32)p3 < (s32)1) {
            if ((s32)p3 >= (s32)0) goto L12;
            goto L20;
        }
        if ((s32)p3 >= (s32)3) goto L20;
        goto L17;
    L12:;
        gmSetFreezeGameFlag(4);
        goto L20;
    }
    fn_801129F8();
    goto L20;
    L17:;
    gmUnsetFreezeGameFlag(4);
    fn_80112A78();
    L20:;
}

void fn_8000AA8C(u32 p3) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2727));
    ((BFu8_4_1*)(((u32)c0+2727)))->f = p3;
}

u32 fn_8000AAC4(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2727));
    return ((s8)((v1>>3)&0x1));
}

u32 getMaxStatsValue(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_8000FCB0();
    v1 = M32(c0);
    v2 = M32(((u32)v1+24));
    return ((s8)v2);
}

u32 getMinStatsValue(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_8000FCB0();
    v1 = M32(c0);
    v2 = M32(((u32)v1+28));
    return ((s8)v2);
}

u32 fn_8000AC60(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_8000FCB0();
    v1 = M32(c0);
    v2 = M32(((u32)v1+16));
    return v2;
}

u32 fn_8000AC88(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_8000FCB0();
    v1 = M32(c0);
    v2 = M32(((u32)v1+20));
    return v2;
}

u32 getTrialFlag(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c0;
    u32 c1;
    u32 c2;
    c0 = gmGetGlobalP();
    c1 = gmGetGlobalP();
    v1 = M8(((u32)c1+2711));
    if ((s32)v1 != (s32)9) {
        c2 = gmGetGlobalP();
        v2 = M8(((u32)c2+2711));
        if ((s32)v2 != (s32)52) goto L16;
    }
    v5 = 1;
    goto L33;
    L16:;
    v3 = M8(((u32)c0+2726));
    if ((s32)((v3>>3)&0x1) != (s32)0) {
        OSReport((u32)lbl_80495784);
        __assert((u32)&lbl_805D5118, 1800, (u32)&lbl_805D5120);
    }
    v4 = M8(((u32)c0+2726));
    if ((s32)((v4>>3)&0x1) != (s32)0) {
        v5 = 1;
    } else {
        v5 = 0;
    }
    L33:;
    return v5;
}

u32 fn_8000ADA0(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2711));
    if ((s32)((s8)v1) != (s32)33) {
        if ((s32)((s8)v1) < (s32)33) {
            if ((s32)((s8)v1) < (s32)9) {
                if ((s32)((s8)v1) >= (s32)0) goto L19;
                goto L21;
            }
            if ((s32)((s8)v1) >= (s32)24) goto L19;
            goto L21;
        }
        if ((s32)((s8)v1) >= (s32)52) goto L21;
    L19:;
        v2 = 1;
        goto L22;
    }
    L21:;
    v2 = 0;
    L22:;
    return v2;
}

u32 fn_8000AE08(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+1455));
    return v1;
}

u32 fn_8000AE2C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_8003F670();
    v1 = M8(((u32)c0+5));
    return v1;
}

u32 fn_8000AE50(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+1453));
    return v1;
}

u32 fn_8000AE74(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+1453));
    v2 = M8((u32)lbl_804957C8+((s8)v1));
    return v2;
}

u32 menu_getCurrentMenuID(void) {
    u32 v1;
    u32 c0;
    c0 = fn_800081FC();
    v1 = M8(c0);
    return v1;
}

u32 fn_8000AECC(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80008874();
    v1 = M8(c0);
    return v1;
}

u32 fn_8000AEF0(void) {
    u32 v1;
    u32 c0;
    c0 = fn_8003D594();
    v1 = M8(((u32)c0+9));
    return v1;
}

u32 fn_8000AF14(void) {
    u32 v1;
    u32 c0;
    c0 = fn_8003EA40();
    v1 = M8(((u32)c0+13));
    return v1;
}

u32 fn_8000AF38(void) {
    u32 v1;
    u32 c0;
    c0 = fn_8003F670();
    v1 = M8(((u32)c0+5));
    return v1;
}

u32 fn_8000AF5C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_800081FC();
    v1 = M8(c0);
    return ((s8)(((s8)v1) == 2));
}

u32 fn_8000AF94(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+23));
    return v1;
}

u32 fn_8000B1EC(u32 p3) {
    E2152_u32* v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E2152_u32*)(c0);
    v2 = v1->f[p3];
    return v2;
}

u32 fn_8000B224(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+852));
    return v1;
}

u32 fn_8000B248(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = MS16(((u32)c0+854));
    return v1;
}

u32 fn_8000B26C(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = MS16(((u32)c0+856));
    return v1;
}

u32 fn_8000B290(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+858));
    return ((v1>>5)&0x1);
}

u32 fn_8000B2B8(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+884));
    return v1;
}

void fn_8000B2DC(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+884)) = p3;
}

u32 fn_8000B30C(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+885));
    return v1;
}

void fn_8000B330(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+885)) = p3;
}

u32 fn_8000B360(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+886));
    return v1;
}

void fn_8000B384(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+886)) = p3;
}

u32 fn_8000B3B4(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+887));
    return v1;
}

void fn_8000B3D8(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+887)) = p3;
}

u32 fn_8000B408(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+888));
    return v1;
}

void fn_8000B42C(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+888)) = p3;
}

u32 fn_8000B45C(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+889));
    return v1;
}

void fn_8000B480(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+889)) = p3;
}

u32 fn_8000B4B0(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+890));
    return v1;
}

void fn_8000B4D4(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+890)) = p3;
}

u32 fn_8000B504(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+891));
    return v1;
}

void fn_8000B528(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+891)) = p3;
}

u32 fn_8000B558(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+892));
    return v1;
}

void fn_8000B57C(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+892)) = p3;
}

void fn_8000B5AC(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+893)) = p3;
}

void fn_8000B5DC(u32 p3, u32 p4, u32 p5) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+894)) = p3;
    M8(((u32)c0+895)) = p4;
    M8(((u32)c0+896)) = p5;
}

u32 loadCSS_CityTrial_initTimerValue(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = MS16(((u32)c0+916));
    return v1;
}

u32 fn_8000B650(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+918));
    return v1;
}

u32 fn_8000B6AC(u32 p3) {
    E3024_u32* v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E3024_u32*)(c0);
    v2 = v1->f[((s8)p3)];
    return v2;
}

u32 fn_8000B6E8(u32 p3) {
    E3056_u32* v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E3056_u32*)(c0);
    v2 = v1->f[((s8)p3)];
    return v2;
}

u32 fn_8000B75C(u32 p3) {
    E3076_u32* v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E3076_u32*)(c0);
    v2 = v1->f[((s8)p3)];
    return v2;
}

float fn_8000B798(u32 p3) {
    E3092_float* v1;
    float v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E3092_float*)(c0);
    v2 = v1->f[((s8)p3)];
    return v2;
}

void fn_8000B7D4(void) {
    gmLoadData();
    fn_8027B294();
    fn_80072514();
    fn_8018C0EC();
    fn_80241184();
    fn_802337E4();
    fn_8022D2AC();
    fn_800B00D8();
    fn_8024E918();
    fn_80261D68();
    fn_80261DA4();
    fn_80261DCC(53);
    fn_8018DD14();
    fn_801C4EDC();
}

void fn_8000B82C(void) {
    gmLoadData();
    fn_8027B294();
    fn_80072514();
    fn_8018C0EC();
    fn_80241184();
    fn_80233878();
    fn_8022D2AC();
    fn_800B00D8();
    fn_8024E918();
    fn_80261D68();
    fn_80261DA4();
    fn_80261DCC(53);
    fn_8018DD14();
    fn_801C4EDC();
}

void fn_8000B884(void) {
    fn_8027B3AC();
    fn_80261E9C();
}

u32 fn_8000B8A8(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_804957E0+((s8)p3));
    return v1;
}

u32 fn_8000B8BC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    v1 = M8((u32)lbl_804957E0);
    if ((s32)((s8)p3) != (s32)((s8)v1)) goto L9;
    return 0;
    L9:;
    v2 = M8(((u32)(u32)lbl_804957E0+1));
    if ((s32)((s8)p3) != (s32)((s8)v2)) goto L15;
    return 1;
    L15:;
    v3 = M8(((u32)(u32)lbl_804957E0+2));
    if ((s32)((s8)p3) != (s32)((s8)v3)) goto L21;
    return 2;
    L21:;
    v4 = M8(((u32)(u32)lbl_804957E0+3));
    if ((s32)((s8)p3) != (s32)((s8)v4)) goto L27;
    return 3;
    L27:;
    v5 = M8(((u32)(u32)lbl_804957E0+4));
    if ((s32)((s8)p3) != (s32)((s8)v5)) goto L33;
    return 4;
    L33:;
    v6 = M8(((u32)(u32)lbl_804957E0+5));
    if ((s32)((s8)p3) != (s32)((s8)v6)) goto L39;
    return 5;
    L39:;
    v7 = M8(((u32)(u32)lbl_804957E0+6));
    if ((s32)((s8)p3) != (s32)((s8)v7)) goto L45;
    return 6;
    L45:;
    v8 = M8(((u32)(u32)lbl_804957E0+7));
    if ((s32)((s8)p3) != (s32)((s8)v8)) goto L51;
    return 7;
    L51:;
    v9 = M8(((u32)(u32)lbl_804957E0+8));
    if ((s32)((s8)p3) != (s32)((s8)v9)) goto L57;
    return 8;
    L57:;
    return 0;
}

u32 fn_8000B9A8(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_804957EC+((s8)p3));
    return v1;
}

u32 fn_8000B9DC(u32 p3) {
    return ((u32)lbl_80495814+(((s8)p3)*3));
}

u32 fn_8000B9F4(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    if ((s32)((s8)p3) == (s32)0) {
        v1 = M8((u32)lbl_80495850+((s8)p4));
        return v1;
    }
    v2 = M8((u32)&lbl_805D5124+((s8)p4));
    return v2;
}

u32 fn_8000BA20(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_80495864+((s8)p3));
    return v1;
}

u32 fn_8000BA34(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_8049587C+((s8)p3));
    return v1;
}

u32 fn_8000BA48(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_80495894+((s8)p3));
    return v1;
}

u32 fn_8000BA5C(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_804958AC+((s8)p3));
    return v1;
}

u32 fn_8000BB78(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_804958C4+((s8)p3));
    return v1;
}

u32 fn_8000BB8C(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_804958D0+((s8)p3));
    return v1;
}

void loadMainMenuMusic(void) {
    u32 c0;
    u32 c1;
    u32 c2;
    c0 = fn_80015DB4();
    if ((s32)((s8)c0) != (s32)-1) {
        c1 = fn_8007B650();
        if ((s32)c1 == (s32)0) goto L13;
    }
    lbLoadMusicLocation(60);
    goto L16;
    L13:;
    c2 = fn_80015DB4();
    lbLoadMusicLocation(((s8)c2));
    L16:;
}

void fn_8000BBF0(void) {
    fn_80015DDC();
}

void fn_8000BC10(void) {
    fn_80015E10();
}

u32 fn_8000C054(u32 p3) {
    E3280_u32* v1;
    u32 v2;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = (E3280_u32*)(c0);
    v2 = v1->f[((s8)p3)];
    return v2;
}

u32 fn_8000C090(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+3304));
    return v1;
}

u32 fn_8000C0E0(u32 p3) {
    u32 v1;
    u32 c1;
    u32 c2;
    u32 c3;
    gmGetGlobalP();
    if ((s32)((s8)p3) != (s32)8) {
        v1 = 0;
    } else {
        c1 = fn_8007B650();
        if ((s32)c1 != (s32)0) {
            c2 = fn_80007E34(34);
            v1 = c2;
        } else {
            c3 = fn_80049E24(0, 34);
            v1 = ((s8)c3);
        }
    }
    return v1;
}

u32 fn_8000C768(void) {
    u32 v1;
    u32 c0;
    u32 c1;
    u32 c2;
    c0 = fn_8007B650();
    if ((s32)c0 != (s32)0) {
        c1 = fn_80007E8C(43);
        v1 = c1;
    } else {
        c2 = fn_80049E24(2, 43);
        v1 = ((s8)c2);
    }
    return v1;
}

u32 fn_8000C934(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+2700));
    return (((-(s32)v1)|v1)>>31);
}

void fn_8000C964(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M32(((u32)c0+2700)) = p3;
}

u32 fn_8000C994(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+2704));
    return (((-(s32)v1)|v1)>>31);
}

void fn_8000C9C4(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M32(((u32)c0+2704)) = p3;
}

u32 fn_8000C9F4(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+2704));
    return v1;
}

float fn_8000CA18(void) {
    float v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = MF(((u32)c0+1548));
    return v1;
}

void fn_8000CADC(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c1;
    c0 = gmGetGlobalP();
    c1 = gmGet_80536EDC_Ptr();
    v1 = M8(((u32)c0+42));
    ((BFu8_0_1*)(((u32)c0+42)))->f = 1;
    v2 = M8(((u32)c1+8));
    if ((s32)((s8)v2) < (s32)5) {
        M8(((u32)c1+8)) = (v2+1);
    }
}

void fn_8000CBC0(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c1;
    c0 = gmGetGlobalP();
    c1 = gmGet_80536EDC_Ptr();
    v1 = M8(((u32)c0+42));
    ((BFu8_1_1*)(((u32)c0+42)))->f = 1;
    v2 = M8(((u32)c1+9));
    if ((s32)((s8)v2) < (s32)5) {
        M8(((u32)c1+9)) = (v2+1);
    }
}

void fn_8000CCB8(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c1;
    c0 = gmGetGlobalP();
    c1 = gmGet_80536EDC_Ptr();
    v1 = M8(((u32)c0+42));
    ((BFu8_2_1*)(((u32)c0+42)))->f = 1;
    v2 = M8(((u32)c1+10));
    if ((s32)((s8)v2) < (s32)5) {
        M8(((u32)c1+10)) = (v2+1);
    }
}

void fn_8000CD10(u32 p3) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+20)) = p3;
}

u32 fn_8000CDBC(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    return (c0+12);
}

u32 fn_8000CDE0(u32 p3, u32 p4) {
    u32 stk[3];
    u32 v1;
    float v2;
    u32 v3;
    u32 v4;
    u32 v5;
    float v6;
    float v7;
    u32 v8;
    u32 c0;
    u32 c2;
    c0 = fn_8042A0A0(p4);
    if ((s32)c0 == (s32)2) {
        v1 = lbl_805DD548;
        if ((u32)v1 != (u32)0) {
            fn_80078028(v1, (u32)((u8*)stk+8), (u32)((u8*)stk+4), (u32)((u8*)stk+0));
            v2 = lbl_805DE764;
            v3 = M32((u8*)stk+8);
            v4 = M32((u8*)stk+4);
            v5 = M32((u8*)stk+0);
            v6 = lbl_805DE768;
            v7 = lbl_805DE76C;
            c2 = fn_80076F8C(v3, v4, v5, 0, 0, v2, v2, v6, v7);
            v8 = c2;
        } else {
            v8 = v1;
        }
    } else {
        v8 = c0;
    }
    return v8;
}

void fn_8000D5C8(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    u32 c4;
    u32 c10;
    c0 = gmGetGlobalP();
    fn_801385B0();
    v1 = M8(((u32)c0+13));
    if ((u32)v1 != (u32)0) {
        fn_8000B884();
        M8(((u32)c0+13)) = 0;
        v2 = 0;
    } else {
        v2 = v1;
    }
    v3 = lbl_805DD548;
    if ((u32)v3 != (u32)0) {
        fn_80078284(v3);
        goto L19;
    L18:;
        VIWaitForRetrace();
    L19:;
        v4 = lbl_805DD548;
        c4 = fn_80077F14(v4);
        if ((s32)c4 != (s32)0) goto L18;
        v5 = lbl_805DD548;
        fn_800780D0(v5);
        fn_80077A5C();
        v6 = lbl_805DD54C;
        lbl_805DD548 = 0;
        if ((u32)v6 != (u32)0) {
            func_80428F64(v6);
        }
        v7 = lbl_805DD550;
        if ((u32)v7 != (u32)0) {
            func_80428F64(v7);
        }
        lbl_805DD54C = 0;
        lbl_805DD550 = 0;
    }
    c10 = menu_getCurrentMenuID();
    if ((s32)((s8)c10) == (s32)0) {
        fn_8000CD10(0);
        menuGetNextMenuID(2);
        fn_80008220();
    }
}

void fn_8000D698(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c2;
    u32 c8;
    gmGetGlobalP();
    fn_8007859C();
    v1 = lbl_805DD548;
    if ((u32)v1 != (u32)0) {
        c2 = fn_80077F14(v1);
        if ((s32)c2 == (s32)0) {
            v2 = lbl_805DD548;
            fn_800780D0(v2);
            fn_80077A5C();
            v3 = lbl_805DD54C;
            lbl_805DD548 = 0;
            if ((u32)v3 != (u32)0) {
                func_80428F64(v3);
            }
            v4 = lbl_805DD550;
            if ((u32)v4 != (u32)0) {
                func_80428F64(v4);
            }
            lbl_805DD54C = 0;
            lbl_805DD550 = 0;
            fn_80072A68();
            c8 = fn_8000AF94();
            if ((s32)((s8)c8) != (s32)2) {
                if ((s32)((s8)c8) < (s32)2) {
                    if ((s32)((s8)c8) == (s32)0) goto L40;
                    if ((s32)((s8)c8) >= (s32)0) goto L43;
                    goto L47;
                }
                if ((s32)((s8)c8) >= (s32)4) goto L47;
                goto L46;
            }
    L40:;
            fn_80072D18();
            fn_8005A348();
            goto L47;
    L43:;
            fn_80072D44();
            fn_8005A348();
            goto L47;
    L46:;
            fn_8005A3DC();
        }
    }
    L47:;
    fn_8000CE50();
}

void fn_8000D768(u32 p3, u32 p4) {
    u32 stk[3];
    u32 v1;
    float v2;
    u32 v3;
    u32 v4;
    u32 v5;
    float v6;
    float v7;
    u32 c0;
    c0 = fn_8042A0A0(p4);
    if ((s32)c0 == (s32)2) {
        v1 = lbl_805DD560;
        fn_80078028(v1, (u32)((u8*)stk+8), (u32)((u8*)stk+4), (u32)((u8*)stk+0));
        v2 = lbl_805DE770;
        v3 = M32((u8*)stk+8);
        v4 = M32((u8*)stk+4);
        v5 = M32((u8*)stk+0);
        v6 = lbl_805DE774;
        v7 = lbl_805DE778;
        fn_80076F8C(v3, v4, v5, 0, 0, v2, v2, v6, v7);
    }
}

void fn_8000D8C4(void) {
    u32 v1;
    u32 v2;
    u32 c4;
    gmGetGlobalP();
    v1 = lbl_805DD564;
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
    }
    v2 = lbl_805DD568;
    if ((u32)v2 != (u32)0) {
        func_80428F64(v2);
    }
    lbl_805DD568 = 0;
    lbl_805DD564 = 0;
    fn_80077A5C();
    c4 = menu_getCurrentMenuID();
    if ((s32)((s8)c4) == (s32)1) {
        menuGetNextMenuID(16);
        fn_80008220();
    }
}

void fn_8000DA34(void) {
    u32 c0;
    u32 c1;
    c0 = gmGetGlobalP();
    M8(((u32)c0+21)) = 0;
    c1 = fn_8000CD40();
    if ((s32)c1 == (s32)0) {
        M8(((u32)c0+23)) = 0;
        fn_8000CD10(0);
        fn_800088C8(0);
    } else {
        fn_8000CD10(1);
        fn_800088C8(0);
    }
}

void fn_80009004(void) {}

void fn_80009070(void) {}

void fn_8000631C(void) {
    u8* g = (u8*)gmGetGlobalP();
    *(void**)(g + 2036) = (void*)fn_80005F14;
    *(void**)(g + 2040) = (void*)fn_80005FD4;
}

u32 fn_8000B9BC(s8 a, s8 b) { return lbl_80495800[a][b]; }

u32 fn_8000C6F0(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetClearcheckerTypeP();
    v1 = M8(((u32)c0+1));
    if ((s32)(v1&0xf) != (s32)0) {
        return 0;
    }
    return (((-(s32)((v1>>4)&0xf))|((v1>>4)&0xf))>>31);
}

u32 gmGet_80536EDC_Array(s8 i) { return lbl_805359D8[i + 0x1504]; }
