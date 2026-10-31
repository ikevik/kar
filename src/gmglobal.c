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
typedef struct { u8 :4; u8 f:1; } BFu8_4_1;
typedef struct { u8 :2; u8 f:1; } BFu8_2_1;
typedef struct { u8 :1; u8 f:1; } BFu8_1_1;
typedef struct { u8 f:2; } BFu8_0_2;
typedef struct { u8 f:1; } BFu8_0_1;
extern u8 lbl_8058B0E4[];
void fn_80005F14(void);
u32 fn_80005FD4(void);
extern u8 lbl_805359D8[];
extern const float lbl_805DE718;
extern u8 lbl_80589A80[];
extern u8 lbl_80536EF0[];
extern u8 lbl_80495740[];
extern u8 lbl_8049574C[];
extern u32 lbl_805D5118;
extern u32 lbl_805D5120;
extern u8 lbl_804957C8[];
extern u8 lbl_804957E0[];
extern u8 lbl_804957EC[];
extern u8 lbl_80495800[];
extern u8 lbl_80495814[];
extern u8 lbl_80495850[];
extern u32 lbl_805D5124;
extern u8 lbl_80495864[];
extern u8 lbl_8049587C[];
extern u8 lbl_80495894[];
extern u8 lbl_804958AC[];
extern u8 lbl_804958C4[];
extern u8 lbl_804958D0[];
extern u32 lbl_805DD540;
u32 gmGetGlobalP(void);
float memset(u32, u32, u32);
void fn_800183A4(void);
float OSReport(u32, ...);
void __assert(u32, u32, u32, float);
u32 fn_800184D4(void);
u32 fn_80028754(u32, float);
u32 fn_8002CFD8(u32, float);
u32 fn_80038C40(u32, float);
u32 fn_8003C070(u32, float);
u32 fn_8003D03C(u32, float);
void fn_80046D48(u32, float);
u32 fn_8004A2BC(u32, float);
void fn_80041664(void);
void fn_800418F4(void);
void fn_80286BE8(u32);
void fn_80286DF0(void);
u32 fn_80286D58(void);
u32 gmGetUnkP(u32, float);
u32 fn_80008874(u32, float);
u32 fn_8000A498(u32, float);
float fn_800064F0(u32, float);
u32 menuGetNextMenuID(u32, float);
void fn_80008220(u32, float);
void fn_80286D7C(void);
void sprintf(u32, ...);
u32 fn_80440744(void);
float fn_804397B4(u32, float);
void func_80428F64(void);
u32 menu_getCurrentMenuID(u32, float);
u32 fn_8003D5F0(u32, float);
void fn_80015400(void);
void fn_8000FCB8(void);
void fn_800134D4(void);
u32 fn_80005CBC(u32);
void fn_80005D04(u32);
u32 fn_8000FCB0(void);
u32 fn_8003F670(void);
u32 fn_800081FC(void);
u32 fn_8003D594(void);
u32 fn_8003EA40(void);
u32 gmLoadData(void);
u32 fn_8027B294(u32, float);
u32 fn_80072514(u32, float);
u32 fn_8018C0EC(u32, float);
u32 fn_80241184(u32, float);
u32 fn_802337E4(u32, float);
u32 fn_8022D2AC(u32, float);
u32 fn_800B00D8(u32, float);
u32 fn_8024E918(u32, float);
u32 fn_80261D68(u32, float);
float fn_80261DA4(u32, float);
u32 fn_80261DCC(u32, float);
u32 fn_8018DD14(u32, float);
void fn_801C4EDC(u32, float);
u32 fn_80233878(u32, float);
u32 fn_8027B3AC(void);
void fn_80261E9C(u32, float);
void fn_80015DDC(void);
void fn_80015E10(void);
u32 fn_80312680(u32, float);
u32 gmGetClearcheckerTypeP(void);
u32 gmGet_80536EDC_Ptr(u32, float);
u32 OSGetResetCode(void);
float fn_80077980(u32, float);
u32 fn_80077B50(u32, u32, u32, u32, u32, u32, float);
u32 func_80428F28(u32, u32, u32, float);
float HSD_GObj_AddGXLink(u32, u32, u32, u32, float);
u32 HSD_CObjLoadDesc(u32, float);
float fn_80429C14(u32, u32, u32, float);
float fn_80429728(u32, u32, u32, float);
float fn_80077ED4(u32, u32, float);
u32 fn_80077A5C(void);
u32 fn_8000CD40(u32, float);
float fn_8000CD10(u32, float);
void fn_800088C8(u32, float);

u32 fn_80005CBC(u32 p3) {
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




u32 fn_80006384(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2088));
    return v1;
}

float fn_800064F0(u32 p3, float q1) {
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

u32 gmGetUnkP(u32 p3, float q1) {
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

u32 gmGet_80536EDC_Ptr(u32 p3, float q1) {
    return ((u32)lbl_805359D8+5380);
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

void fn_80008220(u32 p3, float q1) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2006)) = 1;
}

void fn_80008248(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    M8(((u32)c0+2006)) = 0;
}

u32 fn_80008874(u32 p3, float q1) {
    u32 c0;
    c0 = gmGetGlobalP();
    return (c0+2007);
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


void fn_8000914C(void) {
    func_80428F64();
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

void fn_800095A0(void) {
    fn_80015400();
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
    float d1;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+2725));
    if ((s32)((v1>>5)&0x1) != (s32)0) {
        d1 = OSReport((u32)lbl_8049574C);
        __assert((u32)&lbl_805D5118, 1057, (u32)&lbl_805D5120, d1);
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
    c0 = fn_80005CBC(p3);
    M32(((u32)c0+56)) = p3;
}

u32 fn_8000A498(u32 p3, float q1) {
    u32 c0;
    c0 = fn_80005CBC(p3);
    M32(((u32)c0+60)) = p3;
}


void fn_8000A594(u32 p3) {
    u32 c0;
    c0 = fn_80005CBC(p3);
    M32(((u32)c0+68)) = p3;
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

u32 menu_getCurrentMenuID(u32 p3, float q1) {
    u32 v1;
    u32 c0;
    c0 = fn_800081FC();
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


u32 fn_8000AF94(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+23));
    return v1;
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

u32 fn_8000B30C(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+885));
    return v1;
}

u32 fn_8000B360(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+886));
    return v1;
}

u32 fn_8000B3B4(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+887));
    return v1;
}

u32 fn_8000B408(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+888));
    return v1;
}

u32 fn_8000B45C(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+889));
    return v1;
}

u32 fn_8000B4B0(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+890));
    return v1;
}

u32 fn_8000B504(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+891));
    return v1;
}

u32 fn_8000B558(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M8(((u32)c0+892));
    return v1;
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

u32 fn_8000B8A8(u32 p3) {
    u32 v1;
    v1 = M8((u32)lbl_804957E0+((s8)p3));
    return v1;
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

void fn_8000BBF0(void) {
    fn_80015DDC();
}

void fn_8000BC10(void) {
    fn_80015E10();
}

u32 fn_8000C090(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+3304));
    return v1;
}


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

u32 fn_8000C934(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+2700));
    return (((-(s32)v1)|v1)>>31);
}

u32 fn_8000C994(void) {
    u32 v1;
    u32 c0;
    c0 = gmGetGlobalP();
    v1 = M32(((u32)c0+2704));
    return (((-(s32)v1)|v1)>>31);
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



u32 fn_8000CDBC(void) {
    u32 c0;
    c0 = gmGetGlobalP();
    return (c0+12);
}

void fn_80009004(void) {}

void fn_80009070(void) {}



