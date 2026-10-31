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
extern u8 lbl_80558788[];
extern u32 lbl_805DD7C8;
extern u32 lbl_805DD798;
extern u32 lbl_805DD7C4;
extern u32 lbl_805DD7C0;
extern u32 lbl_805DD7BC;
extern u32 lbl_805DD7B8;
extern u32 lbl_805DD7B4;
extern u32 lbl_805DD7E0;
extern u32 lbl_805DD7DC;
extern u32 lbl_805DD7D8;
extern u32 lbl_805DD7D4;
extern u32 lbl_805DD7D0;
extern u32 lbl_805DD7CC;
extern u32 lbl_805DD7B0;
extern u32 lbl_805DD7AC;
extern u32 lbl_805DD7A8;
extern u32 lbl_805DD7A4;
extern u32 lbl_805DD7A0;
extern u32 lbl_805DD79C;
extern u32 lbl_805DD794;
extern u32 lbl_805DD790;
extern u32 lbl_805DD78C;
extern u32 lbl_805DD784;
extern u32 lbl_805DD780;
extern u32 lbl_805DD804;
extern const float lbl_805E1018;
extern u8 lbl_80559BF4[];
extern const float lbl_805E1040;
extern const float lbl_805E1088;
extern u32 lbl_805DD814;
extern u32 lbl_805DD840;
extern const float lbl_805E11AC;
extern const float lbl_805E159C;
extern const float lbl_805E1A00;
extern const float lbl_805E1A04;
extern u32 lbl_805DD848;

u32 fn_80130870(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    return v0;
}

u32 fn_801311E0(void) {
    return (u32)lbl_80558788;
}

u32 fn_801311EC(void) {
    return (u32)&lbl_805DD7C8;
}

u32 fn_801311F4(void) {
    return (u32)&lbl_805DD798;
}

u32 fn_801311FC(void) {
    return (u32)&lbl_805DD7C4;
}

u32 fn_80131204(void) {
    return (u32)&lbl_805DD7C0;
}

u32 fn_8013120C(void) {
    return (u32)&lbl_805DD7BC;
}

u32 fn_80131214(void) {
    return (u32)&lbl_805DD7B8;
}

u32 fn_8013121C(void) {
    return (u32)&lbl_805DD7B4;
}

u32 fn_80131224(void) {
    return (u32)&lbl_805DD7E0;
}

u32 fn_8013122C(void) {
    return (u32)&lbl_805DD7DC;
}

u32 fn_80131234(void) {
    return (u32)&lbl_805DD7D8;
}

u32 fn_8013123C(void) {
    return (u32)&lbl_805DD7D4;
}

u32 fn_80131244(void) {
    return (u32)&lbl_805DD7D0;
}

u32 fn_8013124C(void) {
    return (u32)&lbl_805DD7CC;
}

u32 fn_80131254(void) {
    return (u32)&lbl_805DD7B0;
}

u32 fn_8013125C(void) {
    return (u32)&lbl_805DD7AC;
}

u32 fn_80131264(void) {
    return (u32)&lbl_805DD7A8;
}

u32 fn_8013126C(void) {
    return (u32)&lbl_805DD7A4;
}

u32 fn_80131274(void) {
    return (u32)&lbl_805DD7A0;
}

u32 fn_8013127C(void) {
    return (u32)&lbl_805DD79C;
}

u32 fn_80131284(void) {
    return (u32)&lbl_805DD794;
}

u32 fn_80131868(void) {
    u32 v0;
    v0 = M8((u32)lbl_80558788);
    return v0;
}

u32 fn_80138D30(void) {
    return (u32)&lbl_805DD790;
}

u32 fn_80138E24(void) {
    return (u32)&lbl_805DD78C;
}

u32 fn_8013909C(void) {
    return (u32)&lbl_805DD784;
}

u32 fn_80139238(void) {
    return (u32)&lbl_805DD780;
}

void fn_80188308(void) {
    lbl_805DD804 = 0;
}

void fn_80189D1C(u32 p3) {
    M32(p3) = 0;
}

void fn_80189D28(u32 p3) {
    M32(p3) = 1;
}

void fn_8018B17C(u32 p3, float q1, float q2) {
    MF(((u32)p3+204)) = q2;
    MF(((u32)p3+28)) = q1;
}

float fn_8018B188(u32 p3, u32 p4) {
    float v0;
    float v1;
    v0 = MF(((u32)p4+4));
    v1 = lbl_805E1018;
    MF(((u32)p3+204)) = v1;
    MF(((u32)p3+28)) = v0;
    return v0;
}

void fn_8018C0D0(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v4;
    v0 = M32(((u32)p3+96));
    v1 = M32(((u32)p3+100));
    M32(p4) = v0;
    M32(((u32)p4+4)) = v1;
    v4 = M32(((u32)p3+104));
    M32(((u32)p4+8)) = v4;
}

void fn_8018CF64(u32 p3) {
    M32(((u32)(u32)lbl_80559BF4+572)) = 0;
    M32(((u32)(u32)lbl_80559BF4+576)) = p3;
    M8(((u32)(u32)lbl_80559BF4+8)) = 1;
}

void fn_8018CF84(u32 p3) {
    M8(((u32)(u32)lbl_80559BF4+8)) = p3;
}

void fn_8018D850(u32 p3) {
    float v0;
    v0 = lbl_805E1040;
    MF(((u32)p3+36)) = v0;
    MF(((u32)p3+40)) = v0;
    MF(((u32)p3+44)) = v0;
    MF(((u32)p3+88)) = v0;
    M32(((u32)p3+92)) = 0;
    MF(((u32)p3+96)) = v0;
    M32(((u32)p3+100)) = 0;
}

void fn_80190760(u32 p3) {
    float v0;
    v0 = lbl_805E1088;
    MF(((u32)p3+728)) = v0;
    MF(((u32)p3+724)) = v0;
    MF(((u32)p3+720)) = v0;
}

void fn_80190774(u32 p3) {
    float v0;
    float v2;
    v0 = MF(((u32)p3+888));
    MF(((u32)p3+1452)) = v0;
    v2 = MF(((u32)p3+1456));
    MF(((u32)p3+1460)) = v2;
}

void fn_80190788(u32 p3) {
    float v0;
    float v2;
    v0 = MF(((u32)p3+884));
    MF(((u32)p3+1456)) = v0;
    v2 = MF(((u32)p3+1456));
    MF(((u32)p3+1460)) = v2;
}

void fn_8019079C(u32 p3) {
    float v0;
    v0 = lbl_805E1088;
    MF(((u32)p3+1484)) = v0;
    MF(((u32)p3+1480)) = v0;
    MF(((u32)p3+1476)) = v0;
    MF(((u32)p3+1472)) = v0;
    MF(((u32)p3+1468)) = v0;
    MF(((u32)p3+1464)) = v0;
}

void fn_80190DC0(u32 p3) {
    M8(((u32)p3+7)) = 0;
    M8(((u32)p3+6)) = 0;
}

void fn_80190DD0(u32 p3) {
    M8(((u32)p3+1199)) = 0;
    M8(((u32)p3+1198)) = 0;
}

float fn_801910E0(u32 p3) {
    float v0;
    v0 = MF(((u32)p3+920));
    return v0;
}

void fn_80191250(u32 p3, u32 p4, u32 p5) {
    M32(((u32)p3+1224)) = p4;
    M32(((u32)p3+2016)) = p5;
}

u32 fn_80191680(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+1012));
    return (((-(s32)v0)|v0)>>31);
}

u32 fn_8019178C(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2083));
    return ((v0>>1)&0x1);
}

u32 fn_80191798(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2083));
    return (v0&0x1);
}

u32 fn_801917A4(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2084));
    return ((v0>>7)&0x1);
}

u32 fn_801917B0(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2084));
    return ((v0>>6)&0x1);
}

u32 fn_801917BC(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+1116));
    return (__cntlzw((3-v0))>>5);
}

void fn_801918BC(u32 p3) {
    float v0;
    v0 = lbl_805E1088;
    M32(((u32)p3+2072)) = 0;
    MF(((u32)p3+2076)) = v0;
}

u32 fn_80191B40(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1012));
    return v1;
}

u32 fn_80191BF8(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+744));
    v2 = M32(((u32)v0+748));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+752));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_80191C18(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1512));
    v2 = M32(((u32)v0+1516));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+1520));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_80191CFC(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+2083));
    return ((v1>>3)&0x1);
}

float fn_80191D0C(u32 p3) {
    u32 v0;
    float v1;
    v0 = M32(((u32)p3+44));
    v1 = MF(((u32)v0+1264));
    return v1;
}

u32 fn_80191EF8(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+804));
    v2 = M32(((u32)v0+808));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+812));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_80191F18(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+816));
    v2 = M32(((u32)v0+820));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+824));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_80191F5C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1104));
    return v1;
}

u32 fn_80191F68(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+17));
    return v1;
}

u32 fn_80191F74(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1108));
    return v1;
}

u32 fn_80191FDC(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+768));
    v2 = M32(((u32)v0+772));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+776));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_80191FFC(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+792));
    v2 = M32(((u32)v0+796));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+800));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_8019201C(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+732));
    v2 = M32(((u32)v0+736));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+740));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_8019203C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+8));
    return v1;
}

u32 fn_80192084(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1140));
    v2 = M32(((u32)v0+1144));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+1148));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_80192288(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+2082));
    return ((v1>>4)&0x1);
}

u32 fn_80192298(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+2082));
    return (__cntlzw(((v1>>1)&0x1))>>5);
}

u32 fn_801926E4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+2086));
    return ((v1>>6)&0x1);
}

u32 fn_80192758(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+10));
    return v1;
}

u32 fn_80192788(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+912));
    return v1;
}

u32 fn_801928B4(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    return (v0+1940);
}

float fn_801928C0(void) {
    u32 v0;
    float v1;
    v0 = lbl_805DD814;
    v1 = MF(((u32)v0+264));
    return v1;
}

float fn_801928CC(void) {
    u32 v0;
    float v1;
    v0 = lbl_805DD814;
    v1 = MF(((u32)v0+268));
    return v1;
}

float fn_801928D8(void) {
    u32 v0;
    float v1;
    v0 = lbl_805DD814;
    v1 = MF(((u32)v0+272));
    return v1;
}

u32 fn_80192950(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+4));
    return v1;
}

u32 fn_801929D8(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1416));
    return v1;
}

u32 fn_80192A08(u32 p3, u32 p4, u32 p5) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    M32(((u32)(v0+(p4<<2))+1404)) = p5;
    return (v0+(p4<<2));
}

void fn_80193EC4(u32 p3, u32 p4) {
    M32(((u32)p3+1012)) = p4;
}

void fn_80193ECC(u32 p3, u32 p4) {
    M32(((u32)p3+1016)) = p4;
}

u32 fn_80193ED4(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+1016));
    return v0;
}

float fn_80195250(void) {
    u32 v0;
    float v1;
    v0 = lbl_805DD840;
    v1 = MF(v0);
    return v1;
}

u32 fn_80199668(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+52));
    v1 = M8(((u32)v0+8));
    return (((-(s32)((v1>>6)&0x1))|((v1>>6)&0x1))>>31);
}

u32 fn_8019A3B8(u32 p3) {
    u32 v0;
    u32 v1;
    u32 v2;
    v0 = M32(((u32)p3+1648));
    v1 = M32(((u32)v0+68));
    v2 = M32(((u32)v1+324));
    return (((-(s32)v2)|v2)>>31);
}

u32 fn_8019A5AC(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+1604));
    return (__cntlzw((29-v0))>>5);
}

void fn_8019A638(u32 p3) {
    M32(((u32)p3+716)) = 0;
}

u32 fn_8019AA54(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2083));
    return (((-(s32)((v0>>4)&0x1))|((v0>>4)&0x1))>>31);
}

void fn_8019BE60(u32 p3, u32 p4) {
    float v1;
    M32(((u32)p3+64)) = p4;
    v1 = lbl_805E11AC;
    M32(((u32)p3+68)) = 0;
    MF(((u32)p3+56)) = v1;
}

float fn_801A0D7C(u32 p3) {
    float v0;
    v0 = MF(((u32)p3+1184));
    return v0;
}

void fn_801A1640(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+1420));
    M32(((u32)p3+1420)) = (v0+1);
}

u32 fn_801A20F4(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    return (v0+1940);
}

u32 fn_801A2F78(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2624));
    return ((v0>>7)&0x1);
}

u32 fn_801A2F84(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2624));
    return ((v0>>5)&0x1);
}

u32 fn_801A2F90(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2624));
    return ((v0>>6)&0x1);
}

u32 fn_801A2F9C(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2624));
    return ((v0>>4)&0x1);
}

u32 fn_801A2FA8(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2624));
    return ((v0>>3)&0x1);
}

u32 fn_801A2FB4(u32 p3) {
    u32 v0;
    v0 = M8(((u32)p3+2624));
    return ((v0>>2)&0x1);
}

void fn_801A304C(u32 p3, u32 p4) {
    M32(((u32)p3+2684)) = p4;
}

void fn_801A3054(u32 p3, u32 p4) {
    M32(((u32)p3+2688)) = p4;
}

float fn_801A4AC8(u32 p3) {
    u32 v0;
    float v1;
    float v2;
    v0 = lbl_805DD814;
    v1 = MF(((u32)p3+1192));
    v2 = MF(((u32)v0+356));
    MF(((u32)p3+1192)) = (v1-v2);
    return v1;
}

float fn_801A7FFC(u32 p3) {
    u32 v0;
    float v1;
    float v2;
    v0 = M32(((u32)p3+908));
    v1 = MF(((u32)p3+2572));
    v2 = MF(((u32)v0+412));
    return (v1/v2);
}

float fn_801A8010(u32 p3) {
    float v0;
    v0 = MF(((u32)p3+2572));
    return v0;
}

u32 fn_801A8038(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+1108));
    return (__cntlzw((9-v0))>>5);
}

void fn_801AA414(u32 p3, u32 p4) {
    M32(((u32)p3+1116)) = p4;
}

float fn_801B0F00(u32 p3) {
    u32 v0;
    float v1;
    float v2;
    u32 v4;
    v0 = lbl_805DD814;
    v1 = MF(((u32)p3+1192));
    v2 = MF(((u32)v0+336));
    MF(((u32)p3+1192)) = (v1-v2);
    v4 = M32(((u32)p3+1420));
    M32(((u32)p3+1420)) = (v4+1);
    return v1;
}

float fn_801B29C8(u32 p3) {
    float v0;
    float v1;
    v0 = lbl_805E159C;
    v1 = MF(((u32)p3+1192));
    return ((v0-v1)/v0);
}

float fn_801B9BB0(u32 p3) {
    u32 v0;
    float v1;
    float v2;
    u32 v4;
    v0 = lbl_805DD814;
    v1 = MF(((u32)p3+1192));
    v2 = MF(((u32)v0+336));
    MF(((u32)p3+1192)) = (v1-v2);
    v4 = M32(((u32)p3+1420));
    M32(((u32)p3+1420)) = (v4+1);
    return v1;
}

u32 fn_801BC71C(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+28));
    return (__cntlzw((120-v0))>>5);
}

u32 fn_801BDF10(u32 p3, u32 p4) {
    return p4;
}

u32 fn_801C18DC(u32 p3, u32 p4) {
    return p4;
}

u32 fn_801C7534(u32 p3) {
    u32 v0;
    v0 = M16(p3);
    return (__cntlzw((16-v0))>>5);
}

u32 fn_801C7548(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1000));
    v2 = M32(((u32)v0+1004));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+1008));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C7568(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1060));
    v2 = M32(((u32)v0+1064));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+1068));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C75D4(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1048));
    v2 = M32(((u32)v0+1052));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+1056));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C75F4(u32 p3, u32 p4, float q1, float q2) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    MF(((u32)v0+1636)) = q1;
    MF(((u32)v0+1640)) = q2;
    M32(((u32)v0+1644)) = p4;
    return v0;
}

u32 fn_801C7608(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+804));
    v2 = M32(((u32)v0+808));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+812));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C7628(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+852));
    v2 = M32(((u32)v0+856));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+860));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C7648(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+876));
    v2 = M32(((u32)v0+880));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+884));
    M32(((u32)p4+8)) = v5;
    return v1;
}

float fn_801C7668(u32 p3) {
    u32 v0;
    float v1;
    v0 = M32(((u32)p3+44));
    v1 = MF(((u32)v0+1932));
    return v1;
}

u32 fn_801C7710(u32 p3, u32 p4, u32 p5, float q1, float q2, float q3, float q4) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    MF(((u32)v0+6984)) = q1;
    MF(((u32)v0+6988)) = q2;
    MF(((u32)v0+6992)) = q3;
    MF(((u32)v0+6996)) = q4;
    M32(((u32)v0+7000)) = p4;
    M32(((u32)v0+7004)) = p5;
    return v0;
}

u32 fn_801C7784(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1024));
    v2 = M32(((u32)v0+1028));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+1032));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C7AD4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3123));
    return (v1&0x1);
}

u32 fn_801C7AE4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3124));
    return ((v1>>7)&0x1);
}

float fn_801C7AF4(u32 p3) {
    u32 v0;
    float v1;
    v0 = M32(((u32)p3+44));
    v1 = MF(((u32)v0+6984));
    return v1;
}

u32 fn_801C7C70(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1876));
    return v1;
}

u32 fn_801C7C7C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+16));
    return v1;
}

u32 fn_801C7C88(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+36));
    return v1;
}

u32 fn_801C7C94(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3120));
    return ((v1>>6)&0x1);
}

u32 fn_801C7CA4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3122));
    return ((v1>>4)&0x1);
}

u32 fn_801C7CB4(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1948));
    v2 = M32(((u32)v0+1952));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+1956));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C7CD4(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2000));
    v2 = M32(((u32)v0+2004));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+2008));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C7D18(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+4));
    return v1;
}

u32 fn_801C7D94(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3122));
    return (v1&0x1);
}

u32 fn_801C7DA4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3123));
    return ((v1>>7)&0x1);
}

u32 fn_801C7DB4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3123));
    return ((v1>>6)&0x1);
}

u32 fn_801C7DC4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3123));
    return ((v1>>5)&0x1);
}

u32 fn_801C7DD4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3123));
    return ((v1>>4)&0x1);
}

u32 fn_801C7DE4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3125));
    return ((v1>>2)&0x1);
}

u32 fn_801C7DF4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3125));
    return ((v1>>1)&0x1);
}

u32 fn_801C7E04(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+25));
    return (((5-v1)|(v1-5))>>31);
}

u32 fn_801C7E20(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3121));
    return ((v1>>1)&0x1);
}

u32 fn_801C7E30(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2848));
    return v1;
}

u32 fn_801C7E3C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2852));
    return v1;
}

u32 fn_801C7E48(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2856));
    return v1;
}

float fn_801C7E54(u32 p3) {
    u32 v0;
    float v1;
    v0 = M32(((u32)p3+44));
    v1 = MF(((u32)v0+1136));
    return v1;
}

u32 fn_801C7E60(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2812));
    v2 = M32(((u32)v0+2816));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+2820));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C7E80(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2824));
    v2 = M32(((u32)v0+2828));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+2832));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C7ED4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3123));
    return ((v1>>3)&0x1);
}

u32 fn_801C7EE4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3126));
    return ((v1>>3)&0x1);
}

u32 fn_801C7EF4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3124));
    return ((v1>>3)&0x1);
}

u32 fn_801C7F04(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3124));
    return ((v1>>2)&0x1);
}

u32 fn_801C7F14(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3126));
    return ((v1>>2)&0x1);
}

u32 fn_801C7F24(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3123));
    return ((v1>>1)&0x1);
}

u32 fn_801C7F34(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3124));
    return ((v1>>6)&0x1);
}

u32 fn_801C7F78(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+7084));
    return v1;
}

u32 fn_801C7F84(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+7088));
    return v1;
}

u32 fn_801C7F90(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+7092));
    return v1;
}

u32 fn_801C7F9C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+7076));
    return v1;
}

float fn_801C7FA8(u32 p3) {
    u32 v0;
    float v1;
    v0 = M32(((u32)p3+44));
    v1 = MF(((u32)v0+7096));
    return v1;
}

u32 fn_801C7FD4(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2836));
    return v1;
}

u32 fn_801C7FE0(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2052));
    v2 = M32(((u32)v0+2056));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+2060));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C8000(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3122));
    return ((v1>>1)&0x1);
}

u32 fn_801C8110(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3124));
    return (((-(s32)((v1>>4)&0x1))|((v1>>4)&0x1))>>31);
}

u32 fn_801C812C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+7080));
    return v1;
}

u32 fn_801C82E0(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+8));
    return v1;
}

u32 fn_801C82EC(u32 p3, u32 p4) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    M32(((u32)v0+8)) = p4;
    return v0;
}

float fn_801C8404(u32 p3) {
    u32 v0;
    float v1;
    v0 = M32(((u32)p3+44));
    v1 = MF(((u32)v0+1228));
    return v1;
}

float fn_801C8410(u32 p3) {
    u32 v0;
    float v1;
    v0 = M32(((u32)p3+44));
    v1 = MF(((u32)v0+2584));
    return v1;
}

u32 fn_801C841C(u32 p3, float q1) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    MF(((u32)v0+2584)) = q1;
    return v0;
}

u32 fn_801C84AC(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3127));
    return ((v1>>1)&0x1);
}

u32 fn_801C852C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3124));
    return ((v1>>1)&0x1);
}

u32 fn_801C853C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3124));
    return (v1&0x1);
}

u32 fn_801C854C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3125));
    return ((v1>>7)&0x1);
}

u32 fn_801C855C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3125));
    return ((v1>>6)&0x1);
}

u32 fn_801C856C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3125));
    return ((v1>>5)&0x1);
}

u32 fn_801C8660(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+1632));
    return v1;
}

u32 fn_801C8708(u32 p3) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    return (v0+2988);
}

u32 fn_801C878C(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+20));
    return v1;
}

u32 fn_801C8798(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3125));
    return ((v1>>3)&0x1);
}

u32 fn_801C87A8(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3125));
    return (v1&0x1);
}

u32 fn_801C87B8(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3126));
    return ((v1>>7)&0x1);
}

u32 fn_801C87C8(u32 p3, float q1) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    MF(((u32)v0+2876)) = q1;
    return v0;
}

u32 fn_801C8A60(u32 p3, u32 p4, float q1) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    M32(((u32)v0+2964)) = p4;
    MF(((u32)v0+2968)) = q1;
    return v0;
}

u32 fn_801C8C08(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3132));
    return ((v1>>6)&0x1);
}

u32 fn_801C8C18(u32 p3, u32 p4) {
    u32 v0;
    u32 v1;
    u32 v2;
    u32 v5;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2216));
    v2 = M32(((u32)v0+2220));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v5 = M32(((u32)v0+2224));
    M32(((u32)p4+8)) = v5;
    return v1;
}

u32 fn_801C8C38(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+32));
    return v1;
}

u32 fn_801C8C44(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M8(((u32)v0+3131));
    return ((v1>>4)&0x1);
}

u32 fn_801C8C54(u32 p3) {
    u32 v0;
    u32 v1;
    v0 = M32(((u32)p3+44));
    v1 = M32(((u32)v0+2024));
    return v1;
}

u32 fn_801C8C60(u32 p3, u32 p4) {
    u32 v0;
    v0 = M32(((u32)p3+44));
    M32(((u32)v0+2024)) = p4;
    return v0;
}

void fn_801C8EC8(u32 p3) {
    float v0;
    v0 = lbl_805E1A00;
    MF(((u32)p3+836)) = v0;
    MF(((u32)p3+832)) = v0;
    MF(((u32)p3+828)) = v0;
}

void fn_801C8EDC(u32 p3) {
    float v0;
    v0 = lbl_805E1A00;
    MF(((u32)p3+1640)) = v0;
    MF(((u32)p3+1636)) = v0;
    M32(((u32)p3+1644)) = 0;
}

void fn_801C8EF4(u32 p3) {
    float v0;
    v0 = lbl_805E1A00;
    MF(((u32)p3+1640)) = v0;
    MF(((u32)p3+1636)) = v0;
    M32(((u32)p3+1644)) = 0;
    M8(((u32)p3+1649)) = 0;
    M8(((u32)p3+1648)) = 0;
}

float fn_801C90DC(float q1, float q2) {
    float v0;
    u32 v1;
    float v2;
    v0 = lbl_805E1A04;
    v1 = lbl_805DD848;
    v2 = MF(v1);
    return (q2/(v2*(v0*(q1*q1))));
}

float fn_801CAA74(u32 p3) {
    float v0;
    float v1;
    float v2;
    v0 = MF(((u32)p3+920));
    v1 = MF(((u32)p3+924));
    v2 = MF(((u32)p3+928));
    return (v2+(v0+v1));
}

float fn_801CC660(float q1, float q2) {
    float v0;
    u32 v1;
    float v2;
    v0 = lbl_805E1A04;
    v1 = lbl_805DD848;
    v2 = MF(v1);
    return (v2*((v0*q2)*(q1*q1)));
}

u32 fn_801CCAB8(u32 p3) {
    u32 v0;
    u32 v1;
    u32 v2;
    v0 = M32(((u32)p3+1784));
    v1 = M32(((u32)v0+68));
    v2 = M32(((u32)v1+324));
    return v2;
}

u32 fn_801CCAC8(u32 p3) {
    u32 v0;
    u32 v1;
    u32 v2;
    v0 = M32(((u32)p3+1784));
    v1 = M32(((u32)v0+68));
    v2 = M32(((u32)v1+284));
    return v2;
}

u32 fn_801CDE84(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    M32(((u32)p3+1808)) = 0;
    v1 = M32(((u32)p3+1784));
    v2 = M32(((u32)v1+68));
    v3 = M32(((u32)v2+368));
    return v3;
}

void fn_801D30F0(u32 p3) {
    u32 v0;
    float v1;
    v0 = lbl_805DD848;
    v1 = MF(((u32)v0+380));
    MF(((u32)p3+2884)) = v1;
}
void fn_8011E3B4(void) {}
void fn_80121228(void) {}
void fn_80124840(void) {}
void fn_801250CC(void) {}
void fn_8012538C(void) {}
void fn_80125E78(void) {}
void fn_8014D3A0(void) {}
void fn_8014DC7C(void) {}
void fn_8014E198(void) {}
void fn_8014EEB8(void) {}
void fn_8014F3EC(void) {}
void fn_80151C98(void) {}
void fn_80152F1C(void) {}
void fn_80155B18(void) {}
void fn_801564D8(void) {}
void fn_80159D24(void) {}
void fn_8015C758(void) {}
void fn_8015D934(void) {}
void fn_801600F4(void) {}
void fn_80160620(void) {}
void fn_80160780(void) {}
void fn_80163290(void) {}
void fn_8017C0F0(void) {}
void fn_801831D4(void) {}
void fn_80183874(void) {}
void fn_8018436C(void) {}
void fn_80184EC0(void) {}
void fn_801850D8(void) {}
void fn_80185388(void) {}
void fn_80185684(void) {}
void fn_80186FD8(void) {}
void fn_8019411C(void) {}
void fn_80199778(void) {}
void fn_8019F47C(void) {}
void fn_8019F480(void) {}
void fn_8019F484(void) {}
void fn_8019F488(void) {}
void fn_8019F48C(void) {}
void fn_8019F630(void) {}
void fn_8019F634(void) {}
void fn_8019F638(void) {}
void fn_8019F6C8(void) {}
void fn_8019F7DC(void) {}
void fn_8019F7E0(void) {}
void fn_8019F7E4(void) {}
void fn_8019F808(void) {}
void fn_8019FC5C(void) {}
void fn_8019FD58(void) {}
void fn_8019FE04(void) {}
void fn_8019FF00(void) {}
void fn_8019FFFC(void) {}
void fn_801A0040(void) {}
void fn_801A00AC(void) {}
void fn_801A00F0(void) {}
void fn_801A015C(void) {}
void fn_801A01A0(void) {}
void fn_801A020C(void) {}
void fn_801A04D8(void) {}
void fn_801A051C(void) {}
void fn_801A0540(void) {}
void fn_801A0618(void) {}
void fn_801A061C(void) {}
void fn_801A0640(void) {}
void fn_801A0D38(void) {}
void fn_801A0E74(void) {}
void fn_801A0F44(void) {}
void fn_801A0F88(void) {}
void fn_801A12DC(void) {}
void fn_801A16DC(void) {}
void fn_801A1720(void) {}
void fn_801A1724(void) {}
void fn_801A18CC(void) {}
void fn_801A19A4(void) {}
void fn_801A1B18(void) {}
void fn_801A1C70(void) {}
void fn_801A1C74(void) {}
void fn_801A1C78(void) {}
void fn_801A1C7C(void) {}
void fn_801A1F38(void) {}
void fn_801A2D78(void) {}
void fn_801A2D7C(void) {}
void fn_801A3440(void) {}
void fn_801A3480(void) {}
void fn_801A3484(void) {}
void fn_801A35B8(void) {}
void fn_801A35BC(void) {}
void fn_801A35C0(void) {}
void fn_801A35C4(void) {}
void fn_801A35C8(void) {}
void fn_801A4448(void) {}
void fn_801A482C(void) {}
void fn_801A4920(void) {}
void fn_801A496C(void) {}
void fn_801A4B70(void) {}
void fn_801A4E44(void) {}
void fn_801A4EB4(void) {}
void fn_801A5198(void) {}
void fn_801A522C(void) {}
void fn_801A55F8(void) {}
void fn_801A5A50(void) {}
void fn_801A5C1C(void) {}
void fn_801A5D88(void) {}
void fn_801A6C0C(void) {}
void fn_801A6DB8(void) {}
void fn_801A6F64(void) {}
void fn_801A7198(void) {}
void fn_801A74D0(void) {}
void fn_801A767C(void) {}
void fn_801A7828(void) {}
void fn_801A7A5C(void) {}
void fn_801AABF4(void) {}
void fn_801AAC3C(void) {}
void fn_801AAE3C(void) {}
void fn_801AD994(void) {}
void fn_801AE28C(void) {}
void fn_801AEB48(void) {}
void fn_801AED0C(void) {}
void fn_801B1150(void) {}
void fn_801B150C(void) {}
void fn_801B2864(void) {}
void fn_801B28F8(void) {}
void fn_801B2E50(void) {}
void fn_801B2E54(void) {}
void fn_801B4CCC(void) {}
void fn_801B50C8(void) {}
void fn_801B5290(void) {}
void fn_801B545C(void) {}
void fn_801B5730(void) {}
void fn_801B5AC8(void) {}
void fn_801B5EA0(void) {}
void fn_801B64D4(void) {}
void fn_801B72C0(void) {}
void fn_801B9AC8(void) {}
void fn_801B9B0C(void) {}
void fn_801B9C64(void) {}
void fn_801B9D04(void) {}
void fn_801B9D48(void) {}
void fn_801B9FB0(void) {}
void fn_801BA2AC(void) {}
void fn_801BA2B0(void) {}
void fn_801BA2B4(void) {}
void fn_801BA628(void) {}
void fn_801BA62C(void) {}
void fn_801BA630(void) {}
void fn_801BA634(void) {}
void fn_801BAEF0(void) {}
void fn_801BAFA4(void) {}
void fn_801BCFF4(void) {}
void fn_801BD9E0(void) {}
void fn_801BD9E4(void) {}
void fn_801BDA10(void) {}
void fn_801BDB98(void) {}
void fn_801BDB9C(void) {}
void fn_801BDBA0(void) {}
void fn_801BDBA4(void) {}
void fn_801BDBA8(void) {}
void fn_801BDD6C(void) {}
void fn_801BDD70(void) {}
void fn_801BDD9C(void) {}
void fn_801BE37C(void) {}
void fn_801BE3C4(void) {}
void fn_801BE5B8(void) {}
void fn_801C1738(void) {}
void fn_801C173C(void) {}
void fn_801C1768(void) {}
void fn_801C1A64(void) {}
void fn_801C1AA0(void) {}
void fn_801C1AE8(void) {}
void fn_801C1CDC(void) {}
void fn_801D2698(void) {}
void fn_801D269C(void) {}
void fn_801D2AF8(void) {}
void fn_801D2AFC(void) {}
void fn_801D2B00(void) {}
