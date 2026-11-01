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
typedef struct { u8 :7; u8 f:1; } BFu8_7_1;
typedef struct { u8 :6; u8 f:1; } BFu8_6_1;
typedef struct { u8 :5; u8 f:1; } BFu8_5_1;
typedef struct { u8 :4; u8 f:1; } BFu8_4_1;
typedef struct { u8 :3; u8 f:2; } BFu8_3_2;
typedef struct { u8 :3; u8 f:1; } BFu8_3_1;
typedef struct { u8 :2; u8 f:1; } BFu8_2_1;
typedef struct { u8 :1; u8 f:2; } BFu8_1_2;
typedef struct { u8 :1; u8 f:1; } BFu8_1_1;
typedef struct { u8 f:1; } BFu8_0_1;
typedef struct { u32 w[10]; } S40;
typedef struct { u32 w[3]; } S12;
typedef struct { u32 w[2]; } S8;
typedef struct { u8 p[88]; u32 f[1024]; } E88_u32;
typedef struct { u8 p[76]; u32 f[1024]; } E76_u32;
typedef struct { u8 p[68]; u32 f[1024]; } E68_u32;
typedef struct { u8 p[44]; u32 f[1024]; } E44_u32;
typedef struct { u8 p[32]; u32 f[1024]; } E32_u32;
typedef struct { u8 p[20]; u32 f[1024]; } E20_u32;
typedef struct { u8 p[176]; u32 f[1024]; } E176_u32;
typedef struct { u8 p[100]; u32 f[1024]; } E100_u32;
typedef struct { u8 p[88]; u32 f; } A92_88_u32;
typedef struct { u8 p[76]; s16 f; u8 q[14]; } A92_76_s16;
typedef struct { u8 p[4]; u32 f; } A8_4_u32;
typedef struct { u8 p[56]; u32 f; u8 q[4]; } A64_56_u32;
typedef struct { u8 p[52]; u32 f; u8 q[8]; } A64_52_u32;
typedef struct { u8 p[48]; u32 f; u8 q[12]; } A64_48_u32;
typedef struct { u8 p[36]; u32 f; u8 q[280]; } A320_36_u32;
typedef struct { u8 p[312]; u32 f; u8 q[4]; } A320_312_u32;
typedef struct { u8 p[8]; float f; u8 q[16]; } A28_8_float;
typedef struct { u8 p[4]; float f; u8 q[20]; } A28_4_float;
typedef struct { u8 p[24]; u32 f; } A28_24_u32;
typedef struct { u8 p[20]; u32 f; u8 q[4]; } A28_20_u32;
typedef struct { u8 p[16]; u32 f; u8 q[8]; } A28_16_u32;
typedef struct { u8 p[12]; float f; u8 q[12]; } A28_12_float;
typedef struct { u8 p[16]; u32 f; u8 q[4]; } A24_16_u32;
typedef struct { u8 p[4]; u32 f; u8 q[12]; } A20_4_u32;
extern u8 lbl_8049F448[];
extern u32 lbl_805DD6B8;
extern u32 lbl_805D5FE0;
void fn_800B5434(void);
void fn_800B548C(void);
extern u8 lbl_80557248[];
extern const float lbl_805DF264;
extern const float lbl_805DF26C;
extern const float lbl_805DF268;
extern const float lbl_805DF270;
extern const float lbl_805DF2A8;
extern u8 lbl_80489D28[];
extern const float lbl_805DF4D4;
extern u8 lbl_80557558[];
extern u32 lbl_805DD6CC;
extern u8 lbl_804A322C[];
extern u8 lbl_804A32C0[];
extern u8 lbl_804A32B0[];
extern u32 lbl_805DD6C8;
extern u8 lbl_804A329C[];
extern u8 lbl_804A32F4[];
extern const float lbl_805DF5D0;
extern u32 lbl_805D6090;
extern u8 lbl_804A33E8[];
extern u8 lbl_804A33A4[];
extern u8 lbl_804A3848[];
extern u8 lbl_804A3874[];
extern u32 lbl_805D6098;
extern u8 lbl_804A38DC[];
extern u32 lbl_805D609C;
extern u32 lbl_805D60A4;
extern u8 lbl_804A3968[];
extern const float lbl_805DF5E0;
extern u8 lbl_804A3AC4[];
extern u8 lbl_804A3364[];
extern const float lbl_805DF5DC;
extern u8 lbl_804A3EAC[];
extern u8 lbl_804A3EB8[];
extern u8 lbl_805575B0[];
extern u8 lbl_804A4180[];
extern u8 lbl_804A418C[];
extern u8 lbl_804A4530[];
extern u8 lbl_804A45D8[];
extern u8 lbl_805575DC[];
extern u8 lbl_80557608[];
extern const float lbl_805DF75C;
extern u8 lbl_804A50C8[];
extern u32 lbl_805D6168;
extern u32 lbl_805D616C;
extern u32 lbl_805DD6F0;
void fn_800EB108(void);
extern u32 lbl_805DD630;
extern u8 lbl_804A51F8[];
extern u8 lbl_804A52E4[];
extern u32 lbl_805DD6E0;
extern u32 lbl_805DD6F8;
void fn_800EE60C(u32);
extern u8 lbl_804A5410[];
extern u8 lbl_804A5604[];
extern u32 lbl_805DD714;
extern const float lbl_805DF7C0;
extern u32 lbl_805DD6C0;
extern u32 lbl_805DD6C4;
extern u8 lbl_804A5824[];
extern u8 lbl_804A596C[];
extern const float lbl_805DF7E4;
extern const float lbl_805DF7E0;
extern const float lbl_805DF808;
extern u8 lbl_804A5B30[];
extern u8 lbl_804A5B40[];
extern u8 lbl_804A5B60[];
extern u8 lbl_804A5B6C[];
extern u8 lbl_804A5B90[];
extern u8 lbl_804A5D00[];
extern u8 lbl_804A5D20[];
extern u8 lbl_804A5D10[];
extern u8 lbl_804A5D30[];
extern const float lbl_805DF864;
extern const float lbl_805DF868;
extern const float lbl_805DF86C;
extern const float lbl_805DF870;
extern const float lbl_805DF874;
extern const float lbl_805DF878;
extern const float lbl_805DF87C;
extern const float lbl_805DF880;
extern const float lbl_805DF884;
extern const float lbl_805DF888;
extern const float lbl_805DF88C;
extern const float lbl_805DF890;
extern const float lbl_805DF894;
extern const float lbl_805DF898;
extern const float lbl_805DF89C;
extern const float lbl_805DF8A0;
extern const float lbl_805DF8A4;
extern const float lbl_805DF8A8;
extern const float lbl_805DF8B8;
extern u8 lbl_804A5F64[];
extern u8 lbl_804A5F78[];
extern const float lbl_805DF8C0;
extern const float lbl_805DF8C8;
extern const float lbl_805DF8D4;
extern const float lbl_805DF8D8;
extern u32 lbl_805D6224;
extern u32 lbl_805D622C;
extern const float lbl_805DF8E4;
extern const float lbl_805DF918;
extern const float lbl_805DF920;
extern const float lbl_805DF924;
extern u8 lbl_805DC8BC[];
extern u8 lbl_804A63D0[];
extern u8 lbl_804A63FC[];
extern const float lbl_805DF928;
extern const float lbl_805DF92C;
extern const float lbl_805DF930;
extern const float lbl_805DF938;
extern const float lbl_805DF93C;
extern u32 lbl_805D62A0;
extern u32 lbl_805D62A8;
extern const float lbl_805DF948;
extern const float lbl_805DF94C;
extern const float lbl_805DF950;
extern const float lbl_805DF954;
void fn_801016B8(void);
extern const float lbl_805DF958;
extern const float lbl_805DF95C;
float fn_80101AF4(u32);
extern const float lbl_805DF960;
void fn_8010203C(void);
extern u32 lbl_805D62B8;
extern u32 lbl_805D62C0;
extern u8 lbl_804A69E4[];
extern u8 lbl_804A69F8[];
extern const float lbl_805DF990;
extern const float lbl_805DF998;
extern const float lbl_805DF9A0;
extern const float lbl_805DF9B0;
void fn_801040FC(void);
extern const float lbl_805DF9B8;
void fn_80104A10(void);
extern const float lbl_805DFA30;
extern const float lbl_805DFA38;
extern const float lbl_805DFA3C;
extern u8 lbl_804A6E1C[];
extern u8 lbl_804A6E30[];
extern const float lbl_805DFA40;
extern const float lbl_805DFA58;
extern const float lbl_805DFA68;
extern const float lbl_805DFA6C;
void fn_80107370(void);
extern const float lbl_805DFA90;
extern const float lbl_805DFA94;
extern const float lbl_805DFA98;
extern const float lbl_805DFA9C;
extern const float lbl_805DFAA0;
extern const float lbl_805DFAC4;
extern const float lbl_805DFAC8;
extern const float lbl_805DFAD8;
extern const float lbl_805DFADC;
extern const float lbl_805DFAE0;
extern const float lbl_805DFAE4;
extern u32 lbl_805D6360;
u32 fn_804484C8();
void fn_804484D0();
void fn_80071D48();
void fn_800ABA6C();
void fn_800ACE08();
void Rumble();
void menuGetNextMenuID();
void fn_800064F0();
void fn_80008220();
void fn_80049168();
void fn_80078D78();
void fn_8007CB60();
void fn_800CD924();
void HSD_CObjSetInterest();
void HSD_CObjSetEyePosition();
void HSD_CObjSetUpVector();
void HSD_CObjSetFov(u32, float);
u32 fn_800B5B94();
void fn_800B5B44();
u32 fn_800B0CDC();
void fn_800B2C6C();
u32 func_80428F28();
void HSD_GObj_AddProc();
u32 HSD_ObjAlloc();
void func_80428F64();
void fn_8006CA5C();
u32 fn_800B5AF0();
void HSD_ObjFree();
void memset();
u32 fn_800B5690();
void HSD_CObjGetViewportf();
u32 fn_8022CB74();
u32 fn_8022C824();
void fn_80062CA4();
void PSVECMag(u32, float);
u32 fn_800BA5D0();
u32 fn_800BA648();
u32 fn_800B5F24();
float HSD_CObjGetAspect();
void fn_800B3C10();
u32 fn_80066F5C();
u32 fn_800670B4();
u32 fn_80068768();
u32 fn_800D4EC8();
u32 fn_800D4EF4();
void fn_800C2FD4();
u32 fn_800C3510();
u32 fn_800C6E6C();
void fn_800B6040();
void HSD_JObjUnref();
u32 fn_800D307C();
void fn_800CCE4C();
void fn_800CC2FC();
void fn_800B9928();
void fn_800E8FD0();
void fn_800E9DA0();
void fn_800DE034();
void fn_800E635C();
void fn_800EEA5C();
void fn_800E51DC();
void fn_800DE748();
void fn_800DE1A8();
void fn_800F439C();
void fn_800D7060();
void fn_800D8C28();
void fn_800D5F1C();
void fn_800DC144();
void fn_800EEFB0();
void fn_800DBD18();
void fn_8040A64C();
void fn_800DC640();
void fn_800D777C();
void fn_800E6D14();
void fn_800E8888();
void fn_800E8E1C();
void lbLoadArchive(u32, ...);
void fn_800E0E04();
u32 __assert();
void fn_800F50D8();
void fn_800A98EC();
u32 fn_800D9958();
void fn_800A98F0();
u32 fn_800D9E34(u32, u32, u32, u32, u32, u32, u32, float, float);
u32 HSD_FogGetCurrent();
void HSD_FogSet();
u32 fn_800D1EE0();
u32 fn_800DC988();
void fn_800DC9A0();
u32 fn_800F7A50();
void fn_800EA084();
void fn_800F9F78();
u32 fn_800FA594();
void fn_800FA3C0();
u32 fn_800F7A64();
u32 fn_800FE9FC();
void fn_800FEA5C();
void fn_800FF3E4();
void fn_800FEAC4();
void fn_800FF480();
u32 fn_800FF44C();
void fn_800E86DC();
void fn_800FB2BC();
u32 fn_80261ECC();
u32 fn_8010D788(u32, u32, float);
float fn_800D3058();
void fn_800E5460();
void fn_800D790C();
void fn_800DE77C();
void fn_80053F34();
void fn_800EEE70();
void fn_800F51A4();
void fn_800DC354();
void fn_800DC4C0();
u32 fn_8010F5E8();
u32 fn_8010F61C();
u32 fn_8010F650();
u32 fn_8010F684();
u32 fn_8010F6B8();
u32 fn_8010F6EC();
u32 fn_8010E280();
u32 fn_8010E2B4();
u32 fn_8010E928();
u32 fn_8010F720();
void fn_800D5FD0();
void fn_800D60D8();
void fn_800D6188();
void fn_800EF618();
void fn_800EF6B0();
u32 HSD_AObjGetFlags();
u32 HSD_LObjAnim();
u32 fn_80057620();
void fn_8042A22C();
void HSD_LObjAnimAll();
void fn_800D6774();
void fn_800D6A70();
void HSD_Free();
void fn_800D8A60();
u32 fn_80055DA0();
void fn_80416FFC();
u32 fn_80262574();
u32 fn_8000A348();
void fn_800DB6D4();
void fn_8040BE00();
u32 fn_800D7954();
void fn_800D7AD0();
void fn_80408EDC();
void fn_8005523C();
void fn_80409480();
void fn_80409250(u32, float);
void fn_800550F4();
void fn_800550BC(u32, u32, float);
void fn_80056494();
void HSD_FogSetCurrent();
u32 fn_800DC630();
void fn_800DC1B4();
void fn_800DA6BC();
void fn_8006E5A4();
void fn_8006F430();
u32 fn_8007125C();
void fn_80071290();
void fn_8006FA3C();
void fn_800E8CC0();
void fn_800DFBC4();
void fn_800E2D34();
void fn_8007133C();
void fn_800DFAD8();
void fn_800E2930();
void fn_800DFE40();
void fn_800E2AC0();
u32 HSD_CObjGetProjectionType();
void fn_80067734();
void HSD_CObjGetEyeVector();
void HSD_CObjGetEyePosition();
float fn_800BAE98();
void fn_800E5B20();
void fn_800E64BC();
void fn_800E674C();
void fn_800E6610();
void fn_800E6754();
void fn_800E5798();
u32 fn_800EA180();
void fn_800EA01C();
void fn_800EA040();
void fn_8005DED0();
void fn_8005DB20();
void fn_8005DB98(u32, u32, float);
void fn_8005DB44(u32, u32, float);
void fn_8005D64C();
void fn_8005E08C();
u32 fn_8005F3E8();
u32 fn_8005F528();
u32 fn_8005E108();
u32 fn_8005E7D8();
void fn_802339C4();
void fn_800EBF70();
u32 fn_800EC564();
u32 HSD_Randi();
void fn_80252F10();
void fn_80252E74();
void fn_800ED520();
void fn_800EB374();
u32 fn_8000A0F8();
u32 fn_800EDCF8();
void fn_800EE660();
u32 fn_80065A80();
void fn_80065B7C();
void fn_80065DC4();
void fn_80065AE4();
void fn_800793B8();
u32 fn_8007AC30();
void fn_8007A598();
u32 fn_80203FAC();
void fn_800F8254();
void fn_800F82A0();
u32 fn_8040BD4C();
void fn_8018C3B4(u32, u32, u32, u32, float);
void fn_800F9164();
void fn_8018D850();
void fn_8018CCD0();
void fn_800F5944();
void fn_800F73FC();
void fn_800F62C4();
void fn_8018C4E8(u32, u32, u32, u32, float);
void fn_8018CF64();
void fn_800F85A0();
void fn_800F85FC();
void fn_800F8658();
void fn_8018D878();
void fn_800F86B4();
void fn_800DB9A0();
void fn_800F5AC4();
void fn_800F9030();
void fn_800DB7D0();
void fn_800D6D88();
void fn_800D6724();
void fn_800D7648();
void fn_800D7D70();
void fn_800DD70C();
void fn_800E5F5C();
void fn_800E5F6C();
void fn_800E6014();
void fn_800E6074();
u32 fn_802364E0();
void fn_8023641C();
void fn_80236778();
void fn_802361A0();
void fn_8023624C();
void fn_800DCAB8(u32, u32, float);
void fn_800D8A4C();
void fn_800D8B40();
void fn_800E9A4C();
u32 fn_800E9EA8();
u32 fn_800E9F30();
void fn_800E9A68();
void fn_800E9F50(u32, u32, u32, float);
void fn_800F7B48();
void fn_800D4BF4();
u32 fn_800D1D3C();
void fn_8010F400(u32, float);
u32 fn_8010E56C();
u32 fn_8010F5A4();
void fn_80102464();
void fn_800FB4E0();
void fn_8010D9C0();
u32 fn_80262784();
void fn_80072C90();
void fn_8018DBA0(u32, u32, u32, u32, u32, u32, u32, float);
void fn_8018C2E4();
void fn_80068D68();
u32 fn_800D79C0();
void fn_800F75B4();
void fn_800F7930();
void fn_800F5548(u32, u32, u32, u32, u32, float, float, float);
u32 fn_800D7A40();
u32 fn_800F446C();
void fn_800F9DB8();
void fn_800FA2D8();
void fn_800FA648();
void fn_800FA740();
void fn_800FA98C();
u32 fn_800F48CC();
void fn_800FAAE0(u32, u32, float);
void fn_800FB3B0();
void fn_800FB618();
void fn_800FBF98();
void fn_800FC308();
void fn_800FC880();
void fn_800FCD7C();
void fn_800FDFA4();
void fn_800FE204();
void fn_800FE60C();
void fn_800D4CA0();
void fn_800D4D58();
void fn_800FEB58();
void fn_800FED48();
void fn_800F7870();
void fn_800FEE00();
void fn_800FF544();
void fn_800FFD3C();
void fn_8010025C();
void fn_80100834();
void fn_80100964();
void fn_80100FEC();
void fn_80101300();
void fn_8040C174();
void fn_8018CB28();
void fn_8010186C();
void fn_8018CB04();
void fn_800F8854(u32, u32, u32, u32, float, float);
float fn_800F6134();
void fn_800F579C(u32, u32, u32, u32, u32, float, float);
void fn_800F5C68();
u32 fn_801023E8();
u32 fn_800547E0();
void fn_80102544();
void fn_80102C78();
void fn_80102D90();
void fn_8010368C();
void fn_80103C90();
void fn_80104504();
void fn_80105DF0();
void fn_800D7B50();
void fn_8010617C();
void fn_801061B0();
void fn_8040C0D8();
u32 fn_800549A0();
void fn_801063F4();
void fn_8010685C();
void fn_80106978();
void fn_80106C54();
void fn_80107158();
void fn_801071CC();
u32 fn_800F466C();
void fn_80109684();
void fn_80109858();
void fn_800F605C(u32, u32, float);
void fn_80109DEC();
void fn_80109E84();
void fn_80109EE4();
void fn_800DBAE0(u32, u32, u32, u32, u32, float, float);
void fn_800DBD3C();
void fn_8010AB70();
void fn_8010AB90();
void fn_80408BD0();
void fn_800F5744();
void fn_8040B718();
void fn_80114154();
void fn_8007A9E4();
void fn_8011196C();
void fn_8027B600();
void fn_8010D260();
u32 fn_80054CD4();
void fn_8010DB9C();
void fn_800FA708();
void fn_80102C40();
void fn_80109DB4();
u32 fn_800DB5D4();
u32 fn_800DB654();
void fn_800F9D80();
void fn_800FC848();
void fn_801007FC();
void fn_80100FB4();
void fn_80103C58();
void fn_800FCBB4();
void fn_80101148();
u32 fn_800F8B74();
void fn_800E85A8();
void fn_800FB5D0();
void fn_800FBF60();
void fn_800FC2D0();
void fn_800FCD44();
void fn_801042C4();
void fn_800FA2A0();
void fn_800FED20();
void fn_80103654();
void fn_80105DB8();
void fn_80107120();
void fn_800FA610();
void fn_800FE5D4();
void fn_800FEB20();
void fn_800FF50C();
void fn_800FFD04();
void fn_80106144();
void fn_801063BC();
void fn_80106824();
void fn_801044CC();
void fn_801012C8();
void fn_80100224();
void fn_800EA3E8();
void fn_800EA568();
typedef unsigned char u8;
extern int fn_8007AD58();
extern int fn_8018C824();
extern int fn_8019203C();
extern int fn_801C7CF4();
extern int fn_802230C4();
extern int plGetPlayerKind();
typedef struct { u8 pad[168]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_168_1_1;
typedef struct { u8 pad[168]; unsigned a:2; unsigned f:1; unsigned b:5; } BF_168_2_1;
typedef struct { u8 pad[168]; unsigned a:3; unsigned f:1; unsigned b:4; } BF_168_3_1;
typedef struct { u8 pad[168]; unsigned a:4; unsigned f:1; unsigned b:3; } BF_168_4_1;
typedef struct { u8 pad[168]; unsigned a:5; unsigned f:1; unsigned b:2; } BF_168_5_1;
typedef struct { u8 pad[168]; unsigned a:6; unsigned f:1; unsigned b:1; } BF_168_6_1;
typedef struct { u8 pad[168]; unsigned a:7; unsigned f:1; } BF_168_7_1;
typedef struct { u8 pad[168]; unsigned f:1; unsigned b:7; } BF_168_0_1;
typedef struct { u8 pad[169]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_169_1_1;
typedef struct { u8 pad[169]; unsigned a:2; unsigned f:1; unsigned b:5; } BF_169_2_1;
typedef struct { u8 pad[169]; unsigned a:3; unsigned f:1; unsigned b:4; } BF_169_3_1;
typedef struct { u8 pad[169]; unsigned a:4; unsigned f:1; unsigned b:3; } BF_169_4_1;
typedef struct { u8 pad[169]; unsigned a:5; unsigned f:1; unsigned b:2; } BF_169_5_1;
typedef struct { u8 pad[169]; unsigned a:6; unsigned f:1; unsigned b:1; } BF_169_6_1;
typedef struct { u8 pad[169]; unsigned a:7; unsigned f:1; } BF_169_7_1;
typedef struct { u8 pad[169]; unsigned f:1; unsigned b:7; } BF_169_0_1;
typedef struct { u8 pad[170]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_170_1_1;
typedef struct { u8 pad[170]; unsigned a:2; unsigned f:1; unsigned b:5; } BF_170_2_1;
typedef struct { u8 pad[170]; unsigned f:1; unsigned b:7; } BF_170_0_1;
typedef struct { u8 pad[300]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_300_1_1;
typedef struct { u8 pad[300]; unsigned a:3; unsigned f:1; unsigned b:4; } BF_300_3_1;
typedef struct { u8 pad[300]; unsigned f:1; unsigned b:7; } BF_300_0_1;
typedef struct { u8 pad[308]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_308_1_1;
typedef struct { u8 pad[388]; unsigned f:1; unsigned b:7; } BF_388_0_1;
typedef struct { u8 pad[458]; unsigned f:1; unsigned b:7; } BF_458_0_1;
typedef struct { u8 pad[680]; unsigned f:1; unsigned b:7; } BF_680_0_1;
typedef struct { unsigned a:1; unsigned f:2; unsigned b:5; } BF_0_1_2;
typedef struct { unsigned a:3; unsigned f:2; unsigned b:3; } BF_0_3_2;
typedef struct { unsigned f:1; unsigned b:7; } BF_0_0_1;
extern u8 lbl_804A6BF0[];
extern u8 lbl_804A6C30[];

typedef struct { u8 :5; u8 f:2; } BFu8_5_2;
typedef struct { u8 :2; u8 f:2; } BFu8_2_2;
typedef struct { u8 f:2; } BFu8_0_2;
typedef struct { u8 p[8]; u32 f[1024]; } E8_u32;
typedef struct { u8 p[8]; float f[1024]; } E8_float;
typedef struct { u8 p[6]; s16 f[1024]; } E6_s16;
typedef struct { u8 p[64]; float f[1024]; } E64_float;
typedef struct { u8 p[4]; u32 f[1024]; } E4_u32;
typedef struct { u8 p[4]; float f[1024]; } E4_float;
typedef struct { u8 p[432]; u32 f[1024]; } E432_u32;
typedef struct { u8 p[32]; float f[1024]; } E32_float;
typedef struct { u8 p[30]; s16 f[1024]; } E30_s16;
typedef struct { u8 p[304]; u32 f[1024]; } E304_u32;
typedef struct { u8 p[1872]; u32 f[1024]; } E1872_u32;
typedef struct { u8 p[8]; u32 f; u8 q[80]; } A92_8_u32;
typedef struct { u8 p[84]; u16 f; u8 q[6]; } A92_84_u16;
typedef struct { u8 p[80]; u16 f; u8 q[10]; } A92_80_u16;
typedef struct { u8 p[78]; u16 f; u8 q[12]; } A92_78_u16;
typedef struct { u8 p[76]; u16 f; u8 q[14]; } A92_76_u16;
typedef struct { u8 p[75]; u8 f; u8 q[16]; } A92_75_u8;
typedef struct { u8 p[74]; u8 f; u8 q[17]; } A92_74_u8;
typedef struct { u8 p[58]; u16 f; u8 q[32]; } A92_58_u16;
typedef struct { u8 p[56]; u16 f; u8 q[34]; } A92_56_u16;
typedef struct { u8 p[54]; u16 f; u8 q[36]; } A92_54_u16;
typedef struct { u8 p[52]; u16 f; u8 q[38]; } A92_52_u16;
typedef struct { u8 p[52]; s16 f; u8 q[38]; } A92_52_s16;
typedef struct { u8 p[4]; u32 f; u8 q[84]; } A92_4_u32;
typedef struct { u8 p[48]; u32 f; u8 q[40]; } A92_48_u32;
typedef struct { u8 p[44]; u32 f; u8 q[44]; } A92_44_u32;
typedef struct { u8 p[40]; u32 f; u8 q[48]; } A92_40_u32;
typedef struct { u8 p[36]; u32 f; u8 q[52]; } A92_36_u32;
typedef struct { u8 p[32]; u32 f; u8 q[56]; } A92_32_u32;
typedef struct { u8 p[28]; u32 f; u8 q[60]; } A92_28_u32;
typedef struct { u8 p[24]; u32 f; u8 q[64]; } A92_24_u32;
typedef struct { u8 p[20]; u32 f; u8 q[68]; } A92_20_u32;
typedef struct { u8 p[16]; u32 f; u8 q[72]; } A92_16_u32;
typedef struct { u8 p[12]; u32 f; u8 q[76]; } A92_12_u32;
typedef struct { u8 p[4]; u8 f; u8 q[3]; } A8_4_u8;
typedef struct { u8 p[4]; u16 f; u8 q[2]; } A8_4_u16;
typedef struct { u8 p[4]; float f; } A8_4_float;
typedef struct { u8 p[8]; u32 f; u8 q[64]; } A76_8_u32;
typedef struct { u8 p[4]; u32 f; u8 q[68]; } A76_4_u32;
typedef struct { u8 p[16]; u32 f; u8 q[56]; } A76_16_u32;
typedef struct { u8 p[12]; u32 f; u8 q[60]; } A76_12_u32;
typedef struct { u8 p[8]; float f; u8 q[60]; } A72_8_float;
typedef struct { u8 p[70]; u16 f; } A72_70_u16;
typedef struct { u8 p[68]; u8 f; u8 q[3]; } A72_68_u8;
typedef struct { u8 p[64]; u32 f; u8 q[4]; } A72_64_u32;
typedef struct { u8 p[60]; u32 f; u8 q[8]; } A72_60_u32;
typedef struct { u8 p[56]; u32 f; u8 q[12]; } A72_56_u32;
typedef struct { u8 p[52]; u32 f; u8 q[16]; } A72_52_u32;
typedef struct { u8 p[4]; u32 f; u8 q[64]; } A72_4_u32;
typedef struct { u8 p[48]; u32 f; u8 q[20]; } A72_48_u32;
typedef struct { u8 p[44]; u32 f; u8 q[24]; } A72_44_u32;
typedef struct { u8 p[40]; u32 f; u8 q[28]; } A72_40_u32;
typedef struct { u8 p[36]; u32 f; u8 q[32]; } A72_36_u32;
typedef struct { u8 p[32]; u32 f; u8 q[36]; } A72_32_u32;
typedef struct { u8 p[28]; u32 f; u8 q[40]; } A72_28_u32;
typedef struct { u8 p[24]; u32 f; u8 q[44]; } A72_24_u32;
typedef struct { u8 p[20]; u32 f; u8 q[48]; } A72_20_u32;
typedef struct { u8 p[16]; u32 f; u8 q[52]; } A72_16_u32;
typedef struct { u8 p[12]; u32 f; u8 q[56]; } A72_12_u32;
typedef struct { u8 p[12]; float f; u8 q[56]; } A72_12_float;
typedef struct { u8 p[8]; u32 f; u8 q[56]; } A68_8_u32;
typedef struct { u8 p[44]; float f; u8 q[20]; } A68_44_float;
typedef struct { u8 p[40]; float f; u8 q[24]; } A68_40_float;
typedef struct { u8 p[8]; u32 f; u8 q[52]; } A64_8_u32;
typedef struct { u8 p[60]; u8 f; u8 q[3]; } A64_60_u8;
typedef struct { u8 p[60]; u32 f; } A64_60_u32;
typedef struct { u8 p[4]; u32 f; u8 q[56]; } A64_4_u32;
typedef struct { u8 p[44]; u32 f; u8 q[16]; } A64_44_u32;
typedef struct { u8 p[44]; float f; u8 q[16]; } A64_44_float;
typedef struct { u8 p[40]; u32 f; u8 q[20]; } A64_40_u32;
typedef struct { u8 p[40]; float f; u8 q[20]; } A64_40_float;
typedef struct { u8 p[36]; u32 f; u8 q[24]; } A64_36_u32;
typedef struct { u8 p[36]; float f; u8 q[24]; } A64_36_float;
typedef struct { u8 p[32]; u32 f; u8 q[28]; } A64_32_u32;
typedef struct { u8 p[32]; float f; u8 q[28]; } A64_32_float;
typedef struct { u8 p[28]; u32 f; u8 q[32]; } A64_28_u32;
typedef struct { u8 p[28]; float f; u8 q[32]; } A64_28_float;
typedef struct { u8 p[24]; u32 f; u8 q[36]; } A64_24_u32;
typedef struct { u8 p[24]; float f; u8 q[36]; } A64_24_float;
typedef struct { u8 p[20]; u32 f; u8 q[40]; } A64_20_u32;
typedef struct { u8 p[16]; u32 f; u8 q[44]; } A64_16_u32;
typedef struct { u8 p[12]; u32 f; u8 q[48]; } A64_12_u32;
typedef struct { u8 p[8]; s16 f; u8 q[46]; } A56_8_s16;
typedef struct { u8 p[6]; s16 f; u8 q[48]; } A56_6_s16;
typedef struct { u8 p[52]; u32 f; } A56_52_u32;
typedef struct { u8 p[4]; s16 f; u8 q[50]; } A56_4_s16;
typedef struct { u8 p[48]; float f; u8 q[4]; } A56_48_float;
typedef struct { u8 p[44]; float f; u8 q[8]; } A56_44_float;
typedef struct { u8 p[38]; s16 f; u8 q[16]; } A56_38_s16;
typedef struct { u8 p[36]; s16 f; u8 q[18]; } A56_36_s16;
typedef struct { u8 p[28]; s16 f; u8 q[26]; } A56_28_s16;
typedef struct { u8 p[2]; u16 f; } A4_2_u16;
typedef struct { u8 p[40]; u32 f; } A44_40_u32;
typedef struct { u8 p[8]; u32 f; u8 q[24]; } A36_8_u32;
typedef struct { u8 p[8]; float f; u8 q[24]; } A36_8_float;
typedef struct { u8 p[4]; u32 f; u8 q[28]; } A36_4_u32;
typedef struct { u8 p[4]; float f; u8 q[28]; } A36_4_float;
typedef struct { u8 p[32]; u32 f; } A36_32_u32;
typedef struct { u8 p[28]; u32 f; u8 q[4]; } A36_28_u32;
typedef struct { u8 p[24]; u32 f; u8 q[8]; } A36_24_u32;
typedef struct { u8 p[20]; u32 f; u8 q[12]; } A36_20_u32;
typedef struct { u8 p[16]; u32 f; u8 q[16]; } A36_16_u32;
typedef struct { u8 p[12]; u32 f; u8 q[20]; } A36_12_u32;
typedef struct { u8 p[28]; u32 f; } A32_28_u32;
typedef struct { u8 p[24]; u32 f; u8 q[4]; } A32_24_u32;
typedef struct { u8 p[4]; u32 f; u8 q[312]; } A320_4_u32;
typedef struct { u8 p[280]; float f; u8 q[36]; } A320_280_float;
typedef struct { u8 p[276]; float f; u8 q[40]; } A320_276_float;
typedef struct { u8 p[272]; float f; u8 q[44]; } A320_272_float;
typedef struct { u8 p[8]; u32 f; u8 q[16]; } A28_8_u32;
typedef struct { u8 p[4]; u32 f; u8 q[20]; } A28_4_u32;
typedef struct { u8 p[12]; u32 f; u8 q[12]; } A28_12_u32;
typedef struct { u8 p[8]; u32 f; u8 q[12]; } A24_8_u32;
typedef struct { u8 p[4]; u32 f; u8 q[16]; } A24_4_u32;
typedef struct { u8 p[20]; u32 f; } A24_20_u32;
typedef struct { u8 p[12]; u32 f; u8 q[8]; } A24_12_u32;
typedef struct { u8 p[8]; u32 f; u8 q[8]; } A20_8_u32;
typedef struct { u8 p[16]; u32 f; } A20_16_u32;
typedef struct { u8 p[13]; u8 f; u8 q[6]; } A20_13_u8;
typedef struct { u8 p[12]; u32 f; u8 q[4]; } A20_12_u32;
typedef struct { u8 p[12]; float f; u8 q[4]; } A20_12_float;
typedef struct { u8 p[8]; u32 f; u8 q[4]; } A16_8_u32;
typedef struct { u8 p[4]; u32 f; u8 q[8]; } A16_4_u32;
typedef struct { u8 p[12]; u32 f; } A16_12_u32;
typedef struct { u8 p[8]; u32 f; u8 q[140]; } A152_8_u32;
typedef struct { u8 p[4]; u32 f; u8 q[144]; } A152_4_u32;
typedef struct { u8 p[16]; u32 f; u8 q[132]; } A152_16_u32;
typedef struct { u8 p[148]; u8 f; u8 q[3]; } A152_148_u8;
typedef struct { u8 p[144]; u32 f; u8 q[4]; } A152_144_u32;
typedef struct { u8 p[140]; u32 f; u8 q[8]; } A152_140_u32;
typedef struct { u8 p[12]; u32 f; u8 q[136]; } A152_12_u32;
typedef struct { u8 p[8]; u8 f; u8 q[3]; } A12_8_u8;
typedef struct { u8 p[8]; float f; } A12_8_float;
typedef struct { u8 p[4]; u32 f; u8 q[4]; } A12_4_u32;
typedef struct { u8 p[4]; float f; u8 q[4]; } A12_4_float;
extern u8 lbl_804A1BDC[];
extern const float lbl_805DF1E8;
extern u8 lbl_8058B634[];
extern u8 lbl_804A2120[];
extern u32 lbl_805D6000;
extern u8 lbl_804A214C[];
extern u32 lbl_805D6008;
extern u8 lbl_804A21B8[];
extern const double lbl_805DF2E0;
extern u8 lbl_804A21F0[];
extern u8 lbl_80489D34[];
extern u8 lbl_80489D40[];
extern u8 lbl_80489D4C[];
extern u8 lbl_80489D58[];
extern u8 lbl_80489D64[];
extern u8 lbl_80489D70[];
extern u32 lbl_805D6048;
extern u32 lbl_805D6050;
extern u8 lbl_80489D98[];
extern u8 lbl_804A23C8[];
extern u32 lbl_805D6058;
extern u32 lbl_805DE334;
extern u8 lbl_80557638[];
extern u8 lbl_804A2408[];
extern u8 lbl_804A2FFC[];
extern u8 lbl_804A3308[];
extern u8 lbl_804A3334[];
extern u8 lbl_804A354C[];
extern u8 lbl_804A3564[];
extern u8 lbl_804A3570[];
extern u8 lbl_804A3598[];
extern u8 lbl_804A35C4[];
extern u8 lbl_804A35EC[];
extern u8 lbl_804A3614[];
extern u8 lbl_804A363C[];
extern u8 lbl_804A3660[];
extern u8 lbl_804A3688[];
extern u8 lbl_804A36B0[];
extern u8 lbl_804A36D8[];
extern u8 lbl_804A3700[];
extern u8 lbl_804A372C[];
extern u8 lbl_804A3738[];
extern u8 lbl_804A389C[];
extern u8 lbl_804A38C4[];
extern u8 lbl_804A390C[];
extern u8 lbl_804A3AF0[];
extern u32 lbl_805DD6DC;
extern u8 lbl_805DE352;
extern u32 lbl_805DD6D8;
extern u32 lbl_805DD6D4;
extern u32 lbl_805DD6D0;
extern u8 lbl_804A3B98[];
extern u32 lbl_805D60B0;
extern u32 lbl_805D60B4;
extern u32 lbl_805D60BC;
extern u8 lbl_804A3BBC[];
extern u8 lbl_804A3D90[];
extern u32 lbl_805D60C4;
extern u8 lbl_80503FC0[];
extern u8 lbl_804A3E10[];
extern u8 lbl_804A3E1C[];
void fn_800D86FC(u32, u32);
extern u8 lbl_804A3E30[];
extern u8 lbl_804A3E3C[];
extern u32 lbl_805D60D0;
extern u8 lbl_804A3EE0[];
extern u8 lbl_804A3EEC[];
extern u8 lbl_805DE350;
extern u32 lbl_805D60D8;
extern u8 lbl_804A3F00[];
extern u8 lbl_804A3F18[];
extern u8 lbl_805DE351;
extern u32 lbl_805D60E0;
extern u32 lbl_805D60E8;
extern u32 lbl_805D60F4;
extern u32 lbl_805D60FC;
extern u8 lbl_804A4098[];
extern u32 lbl_805D6104;
extern u8 lbl_804A3F78[];
extern u8 lbl_804A4170[];
extern u32 lbl_805D6110;
extern u8 lbl_804A4210[];
extern u8 lbl_804A4224[];
extern u8 lbl_804A41F8[];
extern u8 lbl_804A4380[];
extern u8 lbl_804A4518[];
extern u8 lbl_804A45B0[];
extern u8 lbl_804A4820[];
extern u32 lbl_805D6130;
extern u8 lbl_804A4948[];
extern u8 lbl_804A4974[];
extern u32 lbl_805D6138;
extern u32 lbl_805D6140;
extern u8 lbl_804A49A0[];
extern u8 lbl_804A4A60[];
extern u8 lbl_804A4A6C[];
extern u8 lbl_804A4A80[];
extern u8 lbl_804A4A8C[];
extern u8 lbl_804A4AB4[];
extern u8 lbl_804A4AD8[];
extern u8 lbl_80489DA8[];
extern u8 lbl_804A4BC0[];
extern u8 lbl_804A4EE0[];
extern u32 lbl_805D6148;
extern u32 lbl_805D6150;
extern u8 lbl_804A4F90[];
extern u32 lbl_805D6158;
extern u32 lbl_805D6160;
extern u8 lbl_804A5130[];
extern u8 lbl_804A5174[];
extern u8 lbl_804A51C8[];
extern u8 lbl_805576A8[];
extern u32 lbl_805DD6EC;
extern u32 lbl_805DD6E8;
extern u32 lbl_805DD6E4;
extern u32 lbl_805D6178;
extern u8 lbl_804A5304[];
extern u8 lbl_80489DC0[];
extern u8 lbl_804A5550[];
extern u8 lbl_804A5564[];
extern u8 lbl_804A5618[];
extern u8 lbl_804A5628[];
extern u32 lbl_805D6188;
extern u8 lbl_804A5648[];
extern u32 lbl_805D6190;
extern u8 lbl_804A56F0[];
extern u8 lbl_804A5700[];
void fn_800EEFD4(void);
extern u32 lbl_805DD710;
extern u32 lbl_805DD70C;
extern u32 lbl_805DD700;
extern u32 lbl_805DCD38;
extern u32 lbl_805DCD30;
extern u8 lbl_80557758[];
extern u8 lbl_804A5788[];
extern u8 lbl_804A57E8[];
extern u8 lbl_804A5BA8[];
extern u32 lbl_805D61A8;
extern u8 lbl_80557584[];
u32 fn_800F4F0C(u32);
void fn_800F5454(void);
extern u8 lbl_804A5990[];
extern u8 lbl_804A5BE8[];
extern u8 lbl_804A59E0[];
extern u8 lbl_804A5A24[];
extern u32 lbl_805D61B0;
extern u8 lbl_804A5A74[];
extern u8 lbl_804A5AC0[];
extern u8 lbl_804A5AD0[];
extern u32 lbl_805D61B8;
extern u32 lbl_805D61C0;
extern u32 lbl_805D61C8;
extern u8 lbl_804A5AE8[];
extern u8 lbl_804A5B14[];
extern u32 lbl_805D61D8;
extern u32 lbl_805D61E0;
extern u32 lbl_805D61E8;
extern u32 lbl_805D61F0;
extern u32 lbl_805D61F8;
extern u32 lbl_805D6200;
extern u8 lbl_804A5D40[];
extern u32 lbl_805D6208;
extern u8 lbl_804A5EFC[];
extern u8 lbl_804A5F14[];
extern u8 lbl_804A6044[];
extern u8 lbl_804A6090[];
extern u32 plinklow_gobjs;
extern u32 lbl_805D6238;
extern u32 lbl_805D6240;
extern u8 lbl_804A6148[];
extern u8 lbl_804A6170[];
extern u32 lbl_805D6248;
extern u8 lbl_804A617C[];
extern u8 lbl_804A6190[];
extern u32 lbl_805D6250;
extern u32 lbl_805D6258;
extern u8 lbl_804A62D8[];
extern u8 lbl_804A62E8[];
extern u32 lbl_805D6260;
extern u8 lbl_804A6260[];
extern u32 lbl_805D6268;
extern u8 lbl_804A63E0[];
extern u8 lbl_804A6424[];
extern u32 lbl_805D6270;
extern u8 lbl_804A6464[];
extern u8 lbl_804A6474[];
extern u32 lbl_805D6278;
extern u8 lbl_804A6524[];
extern u32 lbl_805D6288;
extern u8 lbl_804A6510[];
extern u32 lbl_805D6280;
extern u8 lbl_804A6498[];
extern u32 lbl_805D6298;
extern u32 lbl_805D6290;
extern u8 lbl_804A662C[];
extern u8 lbl_804A6640[];
extern u32 lbl_805D62B0;
extern u32 lbl_805D62C8;
extern u32 lbl_805D62D0;
extern u32 lbl_805D62D8;
extern u8 lbl_804A6A2C[];
extern u8 lbl_804A6BA4[];
extern u8 lbl_804A6BC8[];
extern u32 lbl_805D62E0;
extern u8 lbl_804A6C88[];
extern u32 lbl_805D62F0;
extern u32 lbl_805D62E8;
extern u8 lbl_804A6E40[];
extern u32 lbl_805D6308;
extern u32 lbl_805D6310;
extern u32 lbl_805D6328;
extern u32 lbl_805D6330;
extern u32 lbl_805D6338;
extern u32 lbl_805D6340;
extern u32 lbl_805E62F0;
extern u8 lbl_804A74C4[];
extern u8 lbl_804A74D8[];
extern u8 lbl_804A7538[];
extern u8 lbl_804A7610[];
extern u8 lbl_804A7698[];
extern u8 lbl_804A773C[];
extern u8 lbl_804A7748[];
extern u8 lbl_804A7770[];
void fn_80078D58();
u32 OSReport(u32, ...);
u32 fn_800B7E90(u32, u32, float, float, float, float, float, float);
u32 fn_800D1860();
float fn_803D22F4();
float fn_803D22CC();
float fn_800CEB18();
u32 fn_800B1DF0(u32, u32, u32, u32, u32, u32, u32, u32, float, float);
void fn_800B61F4();
void fn_800B2540();
void fn_800B0A6C();
u32 fn_8008C614();
void fn_800B31D4();
float fn_800638F8(u32, u32, float);
float fn_80062ECC();
u32 fn_800B4A68();
u32 fn_800CD5E4();
void fn_800CD960();
u32 fn_800B5928();
void fn_800B3944();
u32 fn_800B5554();
void fn_80066E64();
float HSD_CObjGetFov(u32, float, float, float, float, float);
float tan(float, float);
void HSD_CObjGetViewport();
void HSD_CObjGetScissor();
void fn_800685D0();
void func_80429774();
void fn_80429728();
u32 fn_800721D4(u32, u32, float, float, float);
u32 fn_80072458();
u32 fn_80072430();
void fn_800B3C8C();
float fn_800BB04C(u32, float, float, float, float, float);
u32 fn_8006DE8C(u32, u32, float, float, float, float);
void fn_8006E03C();
void fn_800BE940(u32, u32, u32, float);
u32 fn_800CEFB4();
void splArcLengthPoint(u32, u32, float);
void fn_80062DD0();
u32 fn_800B69B4();
u32 fn_8000AF5C();
float cameraControlThink(u32, u32, u32, u32, float);
u32 fn_8007B650();
u32 fn_8007B990();
void fn_8022C6AC();
u32 fn_8000A604();
u32 fn_8022CC30();
u32 fn_8022C880();
void fn_8022C568();
u32 fn_800BB440(u32, u32, u32, u32, float, float);
void fn_800CEE24();
void fn_800C708C();
u32 fn_8000AD48();
u32 getTrialFlag();
float fn_800B8110();
u32 HSD_CObjGetInterestWObj();
u32 HSD_CObjGetEyePositionWObj();
u32 fn_800BBA14();
void HSD_CObjAnim();
void HSD_CObjGetInterest();
float HSD_CObjGetUpVector();
void PSMTXMultVec();
void fn_80064448();
float fn_800BBC8C();
float fn_80066D44();
void HSD_CObjSetAspect(u32, float);
u32 PSMTXCopy();
void fn_80416048();
u32 HSD_CObjLoadDesc();
void HSD_CObjSetFlags();
void HSD_CObjAddAnim();
void HSD_CObjReqAnim(u32, u32, float);
void fn_800B60BC();
void fn_80063610(u32, u32, u32, float);
void fn_8006417C(u32, u32, u32, float);
void fn_80063F8C(u32, u32, u32, float, float, float, float, float, float, float, float);
void fn_8022CE94(u32, u32, u32, float, float, float, float, float, float);
float fn_8006B048(u32, float);
float fn_800B6188(u32, u32, float, float);
u32 fn_8018D9C0();
void HSD_ObjAllocInit();
void fn_800CE6D8();
void fn_800F2528();
void fn_800EB300();
void fn_800A98E0();
void grSetupCityEventData();
void fn_800E5A28(u32, u32, float);
void fn_8006E664(u32, float);
u32 fn_800DE514(u32, float);
void fn_80261CE8();
void fn_802358C4();
float fn_800E6834();
float fn_800E69B0();
u32 fn_800DFF44();
float fn_800DE8A8(u32, u32, float);
float fn_8006BAC8();
u32 fn_800E2C84();
void fn_800E1F48();
u32 fn_800E1940();
float fn_8006C134(u32, u32, float, float);
float fn_8006C180(u32, u32, float, float);
u32 fn_800DA578();
u32 fn_800DA618();
void fn_800E9064(u32, u32, u32, float);
u32 fn_800E9958();
void fn_802440AC();
void fn_802440FC();
u32 HSD_JObjSetupMatrixSub();
void fn_80416B08();
u32 fn_800EEAA4();
u32 fn_800E5340();
u32 fn_800DD6C0();
u32 fn_800D7940();
u32 fn_800DAE00();
u32 fn_801119A4();
float fn_8006C1DC(u32, u32, u32, float, float);
u32 fn_800D59F0(u32, u32, u32, u32, u32, float, float);
u32 fn_80057468();
u32 fn_80057598();
void fn_80429C14();
void HSD_GObj_AddGXLink();
void HSD_LObjReqAnimAll(float);
u32 fn_80057514();
void HSD_LObjGetColor();
float HSD_LObjGetPosition();
u32 fn_800DC7E4();
u32 fn_800DCF08();
u32 fn_800D64B8();
u32 fn_800DC8E0();
u32 fn_800DD2A4();
void fn_804159A0();
void fn_8024A704();
void fn_8024A608();
void fn_8024A684();
void fn_8024A6C4();
u32 fn_8024347C();
u32 fn_800D6290();
u32 HSD_Alloc();
u32 fn_802442D0();
u32 fn_800D7268();
void fn_800E63D4();
u32 fn_8042A0A0();
u32 HSD_JObjDispAll();
float HSD_CObjGetFar();
float HSD_CObjGetNear();
void GXSetNumTexGens(u32, float);
void fn_803CF30C();
void fn_803CF134();
void fn_803CEB54();
void fn_803CC518();
void fn_803CF05C();
void fn_803CF900();
void fn_803CD4A0();
void fn_803CD4E4();
void fn_803CAC04();
void GXSetVtxAttrFmt();
void GXLoadPosMtxImm();
void GXSetCurrentMtx();
void GXSetVtxDesc();
void fn_803CF8CC();
void fn_803CF874();
void fn_803CF8A0();
void fn_803CF820();
void GXBegin();
void HSD_StateInvalidate();
u32 HSD_CObjGetCurrent();
void fn_800D7E78();
u32 fn_800F6570();
void fn_800A0598();
void fn_800A3E00();
void fn_800A25B4();
void fn_800A1BF8();
void fn_800A1EC8();
void fn_800A1F08();
void fn_800A1F8C();
void fn_800A2138();
void debug_Race3D_loadLocations();
void fn_800A34C0();
void fn_800A36CC();
void fn_8009CF84();
void fn_8009D0C8();
void fn_800A4D74();
void fn_800A5370();
void fn_800A7B98();
void fn_800A951C();
void fn_800A95AC();
void fn_800A9980();
void fn_800AA6D0();
void fn_800AAB9C();
void HSD_StateInitTev();
void HSD_ClearVtxDesc();
u32 fn_8040BCA0();
u32 fn_800D87EC();
void fn_804087F4();
float fn_800D9190(float);
u32 fn_802622E0();
u32 fn_80262364();
u32 fn_802623E8();
u32 fn_8000A2A0();
u32 fn_8026246C();
u32 fn_802624F0();
void fn_8005612C();
void fn_80055ACC(u32, float);
void fn_80429D0C();
u32 HSD_FogLoadDesc();
u32 HSD_FogGetColor();
float fn_80079948();
void fn_800EEF50();
u32 HSD_JObjLoadJoint();
u32 HSD_JObjSetMtxDirtySub();
void fn_80053770();
void fn_800537AC();
void PSMTXConcat();
float fn_80242B78();
float fn_802443A0();
void fn_800DD748();
void memcpy();
void fn_8024A86C();
void fn_80071810();
u32 fn_8006C66C(u32, float);
u32 fn_800DF068();
void fn_800DF684();
void fn_800DDA60();
u32 fn_800DDC38();
void fn_8006BA28();
void fn_8024AC68();
void fn_8006F93C();
void fn_800DDAEC();
u32 fn_800E03C0(u32, u32, u32, u32, u32, float, float);
float fn_8024421C();
u32 fn_800E08AC(u32, u32, u32, u32, u32, float);
void fn_800E1A04();
void fn_800E2458();
u32 fn_800E20A4();
void fn_800DDD30();
u32 fn_800DDF08();
void fn_800DDDBC();
u32 fn_800E2FA0(u32, u32, u32, u32, u32, float, float);
u32 fn_800E3AA0();
u32 fn_800E3CB8();
u32 HSD_DObjSetFlags();
void HSD_DObjClearFlags();
float fn_800BAEF4(u32, u32, u32, u32, float, float);
u32 fn_800680FC(u32, u32, u32, float);
u32 fn_800D8D0C();
void fn_800E6640();
void fn_800E6758();
u32 fn_800DAA54();
u32 fn_800E7E50();
float fn_800DB538();
u32 fn_800D0FBC();
float fn_800E8000();
void fn_80409340();
void fn_80408F00(u32, u32, float);
void HSD_AObjSetRate(u32, u32, float, float);
u32 fn_800E918C();
float fn_800E92CC();
float fn_800E9628();
void fn_8005A660();
u32 fn_8005D338();
u32 fn_8005D5C8();
u32 fn_802500B0();
u32 fn_802540F0();
float fn_80009FF0();
void fn_800ED8B0();
void fn_800EDA0C();
u32 fn_800D1550();
void fn_800ECFAC();
u32 fn_80252C84();
u32 fn_80252C78();
float fn_800D15A8();
float HSD_Randf();
void fn_802509A0(u32, u32, u32, u32, u32, u32, u32, u32, float);
u32 fn_8024EEF4();
void fn_80254040();
void fn_800ED5B0();
void fn_80061E7C();
void fn_8027A5D8();
void fn_80113FB4();
void fn_800620E8();
void fn_80062004();
u32 fn_800CEEB8();
float fn_800D066C(u32, u32, u32, float, float);
u32 fn_800DB1A8();
u32 fn_800DB234();
void fn_8010A450();
void fn_80066960();
void fn_800665F8();
void fn_80079314();
float fn_800793AC();
float fn_800D61E8(u32, u32, u32, float);
u32 fn_8007A4D0(u32, u32, float);
u32 fn_800D78B4();
void fn_80079648();
void fn_800796F8();
void fn_8007AD38();
u32 fn_801FBB50();
u32 fn_800D5250();
u32 fn_8000A228();
u32 fn_800DA4C4();
u32 fn_800D0CD4();
float fn_8022C5C0();
u32 fn_80009534();
u32 fn_800094FC();
u32 fn_8022CB8C();
u32 fn_80223184(u32, float);
u32 fn_802264F4();
u32 fn_80204054();
u32 fn_801FD0E0(u32, u32, float);
u32 fn_800F3F9C();
u32 fn_800F4D50();
void fn_800F6394();
u32 fn_800F8484();
void fn_800F8784(u32, u32, u32, float);
float fn_800F875C(u32, u32, float);
u32 fn_800F83E8();
void fn_8018C668();
void fn_800F5978(u32, float, float);
void fn_800F5CE8(u32, u32, float, float);
void fn_800F5DAC();
u32 HSD_MObjGetTObj();
u32 fn_80082838();
u32 fn_80236C40(u32, ...);
u32 fn_800F6808();
u32 fn_800F6BF4();
void fn_80416B24();
u32 fn_800F87E4();
void fn_8018C8C4();
void fn_8018C598();
u32 fn_8018C1C8();
void fn_80192788();
void fn_8018D284();
void fn_801C8660();
void fn_80223120();
u32 fn_800D11FC();
u32 fn_800F4B20();
u32 fn_800F9188();
void fn_800F9E48();
void fn_801C7628();
void fn_80191B4C();
float fn_800FA1A4();
void fn_800FA7E0();
u32 fn_800F7044();
u32 fn_800F5F88(u32, u32, u32, u32, float, float, float, float);
u32 fn_800F6090();
void fn_8022FFA8();
float fn_800FAFD0(u32, u32, float);
u32 fn_800E2BD0();
void fn_800FC3D8();
u32 fn_800D7B8C();
float fn_800D8EDC(u32, u32, u32, u32, u32, u32, u32, float);
void fn_800FC740();
u32 fn_801C7534();
void fn_80230FA0();
u32 fn_800E0270();
void fn_800DBD6C(u32, u32, u32, float, float);
u32 fn_800FD7D8();
u32 fn_800FDBE0();
void fn_801C8428();
void fn_801C8488();
void fn_802046E8();
u32 fn_800D4ADC();
void fn_801C7548();
void fn_801C8458();
void fn_80204628();
u32 fn_800FFCD0();
void fn_801002DC();
u32 fn_800F7E70();
void fn_80102610();
u32 fn_80104CD4();
void fn_80104E10();
void fn_801058C0();
void fn_8022FED8();
void fn_8040BD64();
void fn_80105D80();
void fn_80204160();
void fn_802047EC(u32, u32, u32, u32, float, float, float, float);
u32 fn_800623EC();
float fn_800F57EC(u32, u32, float, float);
void fn_802433C4();
u32 fn_80254114();
void fn_80253F0C();
void fn_80114010();
void fn_801140E4();
u32 fn_8007A958();
void fn_8007ABE0();
u32 fn_8027B418();
void fn_8027B5E0();
void fn_8027B9C0();
void fn_8027B9A4();
void fn_8027B588(u32, u32, float, float);
void fn_8027B5A8();
void fn_8027B568();
u32 fn_8040F89C();
void fn_80079C04(u32, u32, u32, float);
void fn_8027B988();
void fn_80408F88(u32, u32, float);
void fn_80112008();
u32 fn_8010D910(u32, u32, u32, float, float, float, float, float, float);
void fn_8027AA74();
void fn_800DBE48();
extern u8 lbl_804A2100[];
extern u8 lbl_804A5D50[];
extern u32 lbl_805D62F8;
extern u32 lbl_805D6300;
extern u8 lbl_80489E40[];
extern u32 lbl_805D6348;
extern u32 lbl_805D6350;
extern u8 lbl_80489E50[];
float fn_800BEBDC();
u32 grGetItemData();
u32 menu_getCurrentMenuID();
u32 menu_cityTrial_checkMode();
u32 fn_80262808();
void fn_801FD060();
u32 fn_8018DB10(u32, u32, float);
u32 fn_80068D74();
u32 fn_80252F28();
typedef struct { u32 w[4]; } S16;
extern u16 lbl_805DD708;
typedef struct { u32 w[8]; } S32;
typedef struct { u32 w[6]; } S24;
u32 fn_800AF474(u32 p3) {
    u32 v1;
    u32 c0;
    if ((s32)p3 == (s32)4) {
        c0 = fn_804484C8();
        M32(((u32)(u32)lbl_8049F448+8)) = c0;
    }
    v1 = M32(((u32)(u32)lbl_8049F448+8));
    if ((s32)v1 != (s32)1) {
        if ((s32)v1 != (s32)0) {
            if ((s32)v1 != (s32)2) {
                if ((s32)v1 != (s32)3) {
                    if ((s32)v1 != (s32)4) goto L23;
                }
            }
        }
    }
    fn_804484D0(v1);
    L23:;
    return 0;
}

u32 fn_800AF4E4(u32 p3) {
    if ((s32)p3 == (s32)0) {
        fn_80071D48(0);
        fn_800ABA6C();
        fn_800ACE08();
    }
    return 0;
}

u32 fn_800AF51C(u32 p3) {
    u32 v1;
    u32 v2;
    if ((s32)p3 == (s32)1) {
        fn_80071D48(0);
        v1 = lbl_805DD6B8;
        v2 = M32(((u32)(u32)&lbl_805DD6B8+4));
        Rumble(0, 0, v1, v2);
    }
    return 0;
}

u32 fn_800AF564(u32 p3) {
    if ((s32)p3 == (s32)1) {
        fn_80071D48(0);
    }
    return 0;
}

u32 debug_movieTestinBetween(u32 p3) {
    if ((s32)p3 == (s32)0) {
        fn_800ABA6C();
        fn_800ACE08();
    }
    return 0;
}

u32 fn_800AF5C4(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(1);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AF5FC(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(9);
        fn_80049168(0);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AF63C(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(9);
        fn_80049168(1);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AF67C(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(9);
        fn_80049168(2);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AF6BC(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(9);
        fn_80049168(3);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AF6FC(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(9);
        fn_80049168(4);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AF73C(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(9);
        fn_80049168(5);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AF77C(u32 p3) {
    if ((s32)p3 == (s32)0) {
        fn_800ABA6C();
        fn_800ACE08();
    }
    return 0;
}

u32 fn_800AF7AC(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(18);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AFC9C(void) {
    return 0;
}

u32 fn_800AFCA4(u32 p3) {
    if ((s32)p3 == (s32)1) {
        fn_80078D78();
    }
    return 0;
}

u32 fn_800AFCD0(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(10);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AFD08(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(11);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AFD40(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(12);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AFD78(u32 p3) {
    if ((s32)p3 == (s32)0) {
        fn_800ABA6C();
        fn_800ACE08();
    }
    return 0;
}

u32 fn_800AFDA8(u32 p3) {
    u32 v1;
    u32 v2;
    if ((s32)p3 == (s32)1) {
        v1 = lbl_805D5FE0;
        v2 = M32(((u32)(u32)&lbl_805D5FE0+4));
        fn_8007CB60(v1, v2, 0, 0);
        menuGetNextMenuID(0);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 menu_loadLANMenu(u32 p3) {
    if ((s32)p3 == (s32)1) {
        menuGetNextMenuID(19);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

u32 fn_800AFE30(u32 p3) {
    if ((s32)p3 == (s32)0) {
        fn_800ABA6C();
        fn_800ACE08();
    }
    return 0;
}

u32 fn_800AFE60(void) {
    return 0;
}

void fn_800AFE6C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    *(S8*)((u8*)p3+232) = *(S8*)((u8*)p3+192);
    *(S8*)((u8*)p3+240) = *(S8*)((u8*)p3+200);
    *(S8*)((u8*)p3+248) = *(S8*)((u8*)p3+208);
    *(S8*)((u8*)p3+256) = *(S8*)((u8*)p3+216);
    *(S8*)((u8*)p3+264) = *(S8*)((u8*)p3+224);
}

void fn_800AFEC0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    *(S8*)((u8*)p3+192) = *(S8*)((u8*)p4+0);
    *(S8*)((u8*)p3+200) = *(S8*)((u8*)p4+8);
    *(S8*)((u8*)p3+208) = *(S8*)((u8*)p4+16);
    *(S8*)((u8*)p3+216) = *(S8*)((u8*)p4+24);
    *(S8*)((u8*)p3+224) = *(S8*)((u8*)p4+32);
}

u32 fn_800AFF18(void) {
    return 0;
}

void fn_800B0080(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(p4);
    M32(((u32)p3+384)) = v1;
    v2 = M32(p4);
    v3 = M32(((u32)p3+380));
    M16(((u32)v3+106)) = v2;
    v4 = M32(((u32)p3+380));
    fn_800CD924((v4+208), 0, v3);
}

u32 fn_800B00C4(u32 p3) {
    return (((-(s32)(p3&0xc00))|(p3&0xc00))>>31);
}

void fn_800B09CC(u32 p3, u32 p4) {
    float v1;
    if ((s32)p4 != (s32)0) {
        HSD_CObjSetInterest();
        HSD_CObjSetEyePosition(p3, (p4+12));
        HSD_CObjSetUpVector(p3, (p4+24));
        v1 = MF(((u32)p4+36));
        HSD_CObjSetFov(p3, v1);
    }
}

void fn_800B0A2C(u32 p3) {
    fn_800B5B94(p3, 1, 0);
    fn_800B5B44(p3, 30);
}

void fn_800B1DC0(u32 p3) {
    u32 c0;
    c0 = fn_800B0CDC();
    M32(((u32)p3+64)) = c0;
}

#pragma fp_contract on
float fn_800B3154(u32 p3, u32 p4) {
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    v1 = MF(((u32)p3+4));
    v2 = MF(((u32)p4+4));
    v3 = MF(p3);
    v4 = MF(p4);
    v5 = MF(((u32)p3+8));
    v6 = MF(((u32)p4+8));
    return ((v5*v6)+((v3*v4)+(v1*v2)));
}
#pragma fp_contract off

float fn_800B317C(u32 p3, u32 p4, u32 p5) {
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    v1 = MF(p3);
    v2 = MF(p4);
    MF(p5) = (v1-v2);
    v3 = MF(((u32)p3+4));
    v4 = MF(((u32)p4+4));
    MF(((u32)p5+4)) = (v3-v4);
    v5 = MF(((u32)p3+8));
    v6 = MF(((u32)p4+8));
    MF(((u32)p5+8)) = (v5-v6);
    return v5;
}

void fn_800B31B0(u32 p3, u32 p4) {
    fn_800B2C6C(p3, p4, 1);
}

void fn_800B54F8(void) {
    u32 c0;
    c0 = func_80428F28(4, 18, 0);
    HSD_GObj_AddProc(c0, (u32)fn_800B5434, 13);
    HSD_GObj_AddProc(c0, (u32)fn_800B548C, 9);
}

void fn_800B55B0(void) {
    HSD_ObjAlloc((u32)lbl_80557248);
}

void fn_800B55D8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+8));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
    }
    v2 = M32(((u32)p3+116));
    if ((u32)v2 != (u32)0) {
        v3 = M32(((u32)v2+4));
        fn_8006CA5C(v3);
    }
    v4 = M32(p3);
    if ((u32)v4 != (u32)0) {
        fn_800B5AF0(v4);
    }
    HSD_ObjFree((u32)lbl_80557248, p3);
}

u32 fn_800B5644(void) {
    u32 c0;
    c0 = HSD_ObjAlloc(((u32)lbl_80557248+132));
    if ((s32)c0 != (s32)0) {
        memset(c0, 0, 1160);
    }
    return c0;
}

u32 fn_800B5AF0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 c0;
    if ((s32)p3 != (s32)0) {
        M32(((u32)p3+12)) = 0;
        M32(((u32)p3+16)) = 0;
        M32(((u32)p3+64)) = 0;
        v1 = M32(((u32)p3+60));
        if ((u32)v1 != (u32)0) {
            c0 = fn_800B5690(v1);
            M32(((u32)p3+60)) = 0;
            v2 = c0;
        } else {
            v2 = v1;
        }
    } else {
        v2 = p3;
    }
    return v2;
}

u32 fn_800B5F08(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+148));
    if ((u32)v1 != (u32)0) {
        v2 = MS16(((u32)v1+166));
        return v2;
    }
    return 5;
}

void fn_800B6018(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+380));
    v2 = M32(((u32)v1+4));
    HSD_CObjGetViewportf(v2);
}

void fn_800B6040(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    v1 = M32(((u32)p3+376));
    if ((s32)v1 != (s32)0) {
        *(S8*)((u8*)p3+352) = *(S8*)((u8*)p4+0);
        v4 = M32(((u32)p4+8));
        M32(((u32)p3+360)) = v4;
        *(S8*)((u8*)p3+364) = *(S8*)((u8*)p3+352);
        v7 = M32(((u32)p3+360));
        M32(((u32)p3+372)) = v7;
        M32(((u32)p3+376)) = 0;
        return;
    }
    *(S8*)((u8*)p3+364) = *(S8*)((u8*)p3+352);
    v10 = M32(((u32)p3+360));
    M32(((u32)p3+372)) = v10;
    *(S8*)((u8*)p3+352) = *(S8*)((u8*)p4+0);
    v13 = M32(((u32)p4+8));
    M32(((u32)p3+360)) = v13;
}

u32 fn_800B7FD4(void) {
    return 32;
}

u32 fn_800B7FDC(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    v3 = 0;
    goto L11;
    L6:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L11:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 == (u32)0) {
        return 0;
    }
    v6 = M8(((u32)v5+12));
    if ((s32)((v6>>4)&0x1) != (s32)0) {
        return 0;
    }
    v7 = M8(((u32)v5+113));
    return (((-(s32)v7)|v7)>>31);
}

u32 fn_800B8054(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    return 0;
    L6:;
    v1 = M32(((u32)((u32)lbl_80557248+(p3<<2))+432));
    v2 = M32(((u32)((u32)lbl_80557248+(p3<<2))+304));
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L18;
    }
    v4 = 0;
    goto L19;
    L18:;
    v3 = M32(((u32)((u32)lbl_80557248+(p3<<2))+176));
    v4 = v3;
    L19:;
    if ((u32)v4 != (u32)0) {
        v5 = M32(((u32)v4+44));
        v6 = v5;
    } else {
        v6 = 0;
    }
    if ((u32)v6 == (u32)0) {
        v9 = 0;
    } else {
        v7 = M8(((u32)v6+12));
        if ((s32)((v7>>4)&0x1) != (s32)0) {
            v9 = 0;
        } else {
            v8 = M8(((u32)v6+113));
            if ((u32)v8 == (u32)0) {
                v9 = 0;
            } else {
                v9 = 1;
            }
        }
    }
    if ((s32)v9 == (s32)0) {
        if ((u32)v1 != (u32)0) {
            return v1;
        }
    }
    return v2;
}

u32 fn_800B8188(u32 p3) {
    u32 v1;
    u32 c0;
    u32 c1;
    c0 = fn_8022CB74();
    if ((u32)c0 != (u32)0) {
        c1 = fn_8022C824(p3);
        v1 = c1;
    } else {
        v1 = 0;
    }
    return v1;
}

void fn_800B8518(u32 p3, u32 p4, u32 p5) {
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    v1 = MF(p4);
    v2 = MF(p3);
    MF(p5) = (v1-v2);
    v3 = MF(((u32)p4+4));
    v4 = MF(((u32)p3+4));
    MF(((u32)p5+4)) = (v3-v4);
    v5 = MF(((u32)p4+8));
    v6 = MF(((u32)p3+8));
    MF(((u32)p5+8)) = (v5-v6);
    fn_80062CA4(p5, p5);
}

void fn_800B8570(u32 p3, u32 p4) {
    u32 stk[3];
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    v1 = MF(p4);
    v2 = MF(p3);
    MF((u8*)stk+0) = (v1-v2);
    v3 = MF(((u32)p4+4));
    v4 = MF(((u32)p3+4));
    MF((u8*)stk+4) = (v3-v4);
    v5 = MF(((u32)p3+8));
    v6 = MF(((u32)p4+8));
    MF((u8*)stk+8) = (v6-v5);
    PSVECMag((u32)((u8*)stk+0), v6);
}

u32 fn_800B8640(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 c0;
    u32 c1;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L11;
    }
    v3 = 0;
    goto L16;
    L11:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L16:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 == (u32)0) {
        v10 = 5;
    } else {
        c0 = fn_800BA5D0(p3);
        if ((s32)c0 == (s32)0) {
            c1 = fn_800BA648(p3);
            if ((s32)c1 == (s32)0) goto L43;
        }
        v8 = M32(((u32)v7+148));
        if ((u32)v8 != (u32)0) {
            v9 = MS16(((u32)v8+166));
            v10 = v9;
            goto L44;
        }
    L43:;
        v10 = 5;
    }
    L44:;
    return v10;
}

u32 fn_800B8708(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_800B5F24();
    if ((u32)c0 != (u32)0) {
        v1 = M32(((u32)c0+380));
        if ((u32)v1 != (u32)0) {
            v2 = MS16(((u32)v1+104));
            return v2;
        }
    }
    return -1;
}

u32 fn_800B8CBC(u32 p3, u32 p4) {
    float v1;
    u32 c0;
    c0 = fn_800B5F24();
    if ((u32)c0 != (u32)0) {
        v1 = MF(((u32)c0+268));
        MF(p4) = v1;
        return 1;
    }
    return 0;
}

u32 fn_800B8D04(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    float d1;
    c0 = fn_800B5F24();
    if ((u32)c0 != (u32)0) {
        v1 = M32(((u32)c0+380));
        if ((u32)v1 != (u32)0) {
            v2 = M32(((u32)v1+4));
            if ((u32)v2 != (u32)0) {
                d1 = HSD_CObjGetAspect(v2);
                MF(p4) = d1;
                v3 = 1;
                goto L19;
            }
        }
    }
    v3 = 0;
    L19:;
    return v3;
}

u32 fn_800B8D64(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    v3 = 0;
    goto L11;
    L6:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L11:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(((u32)v5+116));
        return v6;
    }
    return 0;
}

void fn_800B8DBC(u32 p3, u32 p4) {
    M16(((u32)p3+166)) = p4;
}

void fn_800B8DC4(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    *(S8*)((u8*)p3+32) = *(S8*)((u8*)p4+0);
    v3 = M32(((u32)p4+8));
    M32(((u32)p3+40)) = v3;
}

void fn_800B8DE0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    *(S8*)((u8*)p3+44) = *(S8*)((u8*)p4+0);
    v3 = M32(((u32)p4+8));
    M32(((u32)p3+52)) = v3;
}

void fn_800B8DFC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    *(S8*)((u8*)p3+20) = *(S8*)((u8*)p4+0);
    v3 = M32(((u32)p4+8));
    M32(((u32)p3+28)) = v3;
}

void fn_800B8E18(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    *(S8*)((u8*)p3+8) = *(S8*)((u8*)p4+0);
    v3 = M32(((u32)p4+8));
    M32(((u32)p3+16)) = v3;
}

void fn_800B8E34(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    *(S8*)((u8*)p3+56) = *(S8*)((u8*)p4+0);
    v3 = M32(((u32)p4+8));
    M32(((u32)p3+64)) = v3;
}

void fn_800B8EE8(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    *(S8*)((u8*)p3+184) = *(S8*)((u8*)p4+0);
    v3 = M32(((u32)p4+8));
    M32(((u32)p3+192)) = v3;
}

void fn_800B8F04(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    *(S8*)((u8*)p3+196) = *(S8*)((u8*)p4+0);
    v3 = M32(((u32)p4+8));
    M32(((u32)p3+204)) = v3;
}

void fn_800B8F20(u32 p3, float q1) {
    MF(((u32)p3+140)) = q1;
}

void fn_800B8F28(u32 p3, float q1) {
    MF(((u32)p3+216)) = q1;
}

void fn_800B8F30(u32 p3, float q1) {
    MF(((u32)p3+148)) = q1;
}

void fn_800B8F38(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+168));
    ((BFu8_2_1*)(((u32)p3+168)))->f = p4;
}

void fn_800B8F48(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+168));
    ((BFu8_3_1*)(((u32)p3+168)))->f = p4;
}

void fn_800B8F58(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+168));
    ((BFu8_4_1*)(((u32)p3+168)))->f = p4;
}

void fn_800B8F68(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+168));
    ((BFu8_5_1*)(((u32)p3+168)))->f = p4;
}

void fn_800B8F78(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+168));
    ((BFu8_6_1*)(((u32)p3+168)))->f = p4;
}

void fn_800B8F88(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+168));
    ((BFu8_7_1*)(((u32)p3+168)))->f = p4;
}

void fn_800B8F98(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+169));
    ((BFu8_0_1*)(((u32)p3+169)))->f = p4;
}

void fn_800B8FA8(u32 p3, u32 p4, float q1) {
    M32(((u32)p3+220)) = p4;
    MF(((u32)p3+224)) = q1;
}

void fn_800B8FB4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+169));
    ((BFu8_1_1*)(((u32)p3+169)))->f = p4;
}

void fn_800B8FC4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+169));
    ((BFu8_2_1*)(((u32)p3+169)))->f = p4;
}

void fn_800B8FD4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+169));
    ((BFu8_3_1*)(((u32)p3+169)))->f = p4;
}

void fn_800B8FE4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+169));
    ((BFu8_4_1*)(((u32)p3+169)))->f = p4;
}

void fn_800B8FF4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+169));
    ((BFu8_5_1*)(((u32)p3+169)))->f = p4;
}

void fn_800B9004(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+169));
    ((BFu8_6_1*)(((u32)p3+169)))->f = p4;
}

void fn_800B9014(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+169));
    ((BFu8_7_1*)(((u32)p3+169)))->f = p4;
}

void fn_800B9024(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+170));
    ((BFu8_0_1*)(((u32)p3+170)))->f = p4;
}

void fn_800B9034(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+170));
    ((BFu8_1_1*)(((u32)p3+170)))->f = p4;
}

void fn_800B9044(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+170));
    ((BFu8_2_1*)(((u32)p3+170)))->f = p4;
}

void fn_800B9054(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    *(S8*)((u8*)p3+172) = *(S8*)((u8*)p4+0);
    v3 = M32(((u32)p4+8));
    M32(((u32)p3+180)) = v3;
}

void fn_800B9070(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+168));
    ((BFu8_0_1*)(((u32)p3+168)))->f = p4;
}

void fn_800B9080(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8(((u32)p3+168));
    ((BFu8_1_1*)(((u32)p3+168)))->f = p4;
}

void fn_800B9090(u32 p3, u32 p4) {
    M32(((u32)p3+208)) = p4;
}

void fn_800B9098(u32 p3, float q1) {
    MF(((u32)p3+212)) = q1;
}

void fn_800B90A0(u32 p3, u32 p4) {
    M32(((u32)p3+228)) = p4;
}

u32 fn_800B90A8(u32 p3, u32 p4) {
    u32 v22;
    float v21;
    float v20;
    float v19;
    float v18;
    u32 v17;
    u32 v16;
    u32 v15;
    u32 v14;
    u32 v13;
    u32 v12;
    u32 v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    u32 v2;
    E176_u32* v1;
    u32 stk[10];
    u32 c0;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L9;
    }
    v3 = 0;
    goto L14;
    L9:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L14:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        if ((u32)p4 != (u32)0) {
            *(S40*)((u8*)stk+0) = *(S40*)((u8*)p4+0);
        } else {
            v18 = lbl_805DF264;
            v19 = lbl_805DF26C;
            v20 = lbl_805DF268;
            v21 = lbl_805DF270;
            MF((u8*)stk+12) = v18;
            MF((u8*)stk+16) = v18;
            MF((u8*)stk+20) = v18;
            MF((u8*)stk+0) = v18;
            MF((u8*)stk+4) = v18;
            MF((u8*)stk+8) = v19;
            MF((u8*)stk+24) = v18;
            MF((u8*)stk+28) = v20;
            MF((u8*)stk+32) = v18;
            MF((u8*)stk+36) = v21;
        }
        c0 = fn_800B5B94(v7, 0, (u32)((u8*)stk+0));
        v22 = c0;
    } else {
        v22 = v7;
    }
    return v22;
}

u32 fn_800B91C0(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c0;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L9;
    }
    v3 = 0;
    goto L14;
    L9:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L14:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        c0 = fn_800B5B94(v7, 1, 0);
        v8 = c0;
    } else {
        v8 = v7;
    }
    return v8;
}

u32 fn_800B9244(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 stk[5];
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c0;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L9;
    }
    v3 = 0;
    goto L14;
    L9:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L14:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        M32((u8*)stk+0) = p4;
        M32((u8*)stk+4) = p5;
        M16((u8*)stk+12) = p6;
        M32((u8*)stk+16) = 0;
        c0 = fn_800B5B94(v7, 3, (u32)((u8*)stk+0));
        v8 = c0;
    } else {
        v8 = v7;
    }
    return v8;
}

u32 fn_800B92DC(u32 p3, u32 p4, u32 p5) {
    u32 stk[5];
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c0;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L9;
    }
    v3 = 0;
    goto L14;
    L9:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L14:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        M32((u8*)stk+0) = p4;
        M32((u8*)stk+16) = p5;
        M16((u8*)stk+12) = 30;
        c0 = fn_800B5B94(v7, 3, (u32)((u8*)stk+0));
        v8 = c0;
    } else {
        v8 = v7;
    }
    return v8;
}

void fn_800B94C8(void) {
    fn_800B3C10();
}

u32 fn_800BA5D0(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    v3 = 0;
    goto L11;
    L6:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L11:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        v8 = M32(v7);
        if ((s32)v8 == (s32)2) {
            return 1;
        }
    }
    return 0;
}

u32 fn_800BA648(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    v3 = 0;
    goto L11;
    L6:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L11:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        v8 = M32(v7);
        if ((s32)v8 == (s32)1) {
            return 1;
        }
    }
    return 0;
}

u32 fn_800BA6C0(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    v3 = 0;
    goto L11;
    L6:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L11:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        v8 = M32(v7);
        if ((s32)v8 == (s32)3) {
            return 1;
        }
    }
    return 0;
}

u32 fn_800BA738(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c0;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L9;
    }
    v3 = 0;
    goto L14;
    L9:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L14:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        c0 = fn_800B5AF0(v7);
        v8 = c0;
    } else {
        v8 = v7;
    }
    return v8;
}

void fn_800BAA90(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L9;
    }
    v3 = 0;
    goto L14;
    L9:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L14:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    fn_800B5AF0(v7);
}

void fn_800BAB04(u32 p3, u32 p4) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L9;
    }
    v3 = 0;
    goto L14;
    L9:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L14:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    fn_800B5B44(v7, p4);
}

u32 fn_800BAB78(u32 p3, u32 p4) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    v3 = 0;
    goto L11;
    L6:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L11:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 == (u32)0) {
        return v3;
    }
    v6 = M8(((u32)v5+12));
    ((BFu8_3_1*)(((u32)v5+12)))->f = p4;
    return v3;
}

u32 fn_800BAC5C(u32 p3, u32 p4) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L12;
    }
    v3 = 0;
    goto L17;
    L12:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L17:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(((u32)v5+4));
        if ((u32)v6 != (u32)0) {
            c0 = fn_80066F5C(v6, p4);
            M8(((u32)v5+113)) = 2;
            M8(((u32)v5+114)) = p4;
            v7 = c0;
        } else {
            v7 = v6;
        }
    } else {
        v7 = v3;
    }
    return v7;
}

u32 fn_800BACF4(u32 p3, u32 p4) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L12;
    }
    v3 = 0;
    goto L17;
    L12:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L17:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(((u32)v5+4));
        if ((u32)v6 != (u32)0) {
            c0 = fn_800670B4(v6, p4);
            M8(((u32)v5+113)) = 3;
            M8(((u32)v5+114)) = p4;
            v7 = c0;
        } else {
            v7 = v6;
        }
    } else {
        v7 = v3;
    }
    return v7;
}

u32 fn_800BB5D4(u32 p3, u32 p4) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    v3 = 0;
    goto L11;
    L6:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L11:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        *(S8*)((u8*)p4+0) = *(S8*)((u8*)v7+352);
        v10 = M32(((u32)v7+360));
        M32(((u32)p4+8)) = v10;
        return 1;
    }
    return 0;
}

u32 fn_800BB658(u32 p3, u32 p4) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L6;
    }
    v3 = 0;
    goto L11;
    L6:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L11:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 != (u32)0) {
        v6 = M32(v5);
        v7 = v6;
    } else {
        v7 = 0;
    }
    if ((u32)v7 != (u32)0) {
        *(S8*)((u8*)p4+0) = *(S8*)((u8*)v7+364);
        v10 = M32(((u32)v7+372));
        M32(((u32)p4+8)) = v10;
        return 1;
    }
    return 0;
}

u32 fn_800BBB98(u32 p3) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c0;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L9;
    }
    v3 = 0;
    goto L14;
    L9:;
    v1 = (E176_u32*)((u32)lbl_80557248);
    v2 = v1->f[p3];
    v3 = v2;
    L14:;
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+44));
        v5 = v4;
    } else {
        v5 = 0;
    }
    if ((u32)v5 == (u32)0) {
        v6 = 1;
    } else {
        c0 = fn_80068768((v5+120));
        v6 = c0;
    }
    return v6;
}

u32 fn_800BBC0C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32(((u32)p3+152));
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+44));
        v3 = M32(v2);
        v4 = M32(((u32)v3+148));
        if ((u32)v4 != (u32)0) {
            v5 = MS16(((u32)v4+166));
            return v5;
        }
    }
    return 5;
}

float fn_800BBC3C(void) {
    u32 v1;
    float v2;
    v1 = M32(((u32)(u32)lbl_80557248+564));
    v2 = MF(v1);
    return v2;
}

float fn_800BBC50(void) {
    u32 v1;
    float v2;
    v1 = M32(((u32)(u32)lbl_80557248+564));
    v2 = MF(((u32)v1+4));
    return v2;
}

float fn_800BBC64(void) {
    u32 v1;
    float v2;
    v1 = M32(((u32)(u32)lbl_80557248+564));
    v2 = MF(((u32)v1+8));
    return v2;
}

float fn_800BBC78(void) {
    u32 v1;
    float v2;
    v1 = M32(((u32)(u32)lbl_80557248+564));
    v2 = MF(((u32)v1+12));
    return v2;
}

u32 fn_800BC25C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+152));
        if ((u32)v1 != (u32)0) {
            v2 = M32(((u32)v1+44));
            v3 = M8(((u32)v2+12));
            if ((s32)((v3>>6)&0x3) != (s32)0) {
                return 1;
            }
        }
    }
    return 0;
}

u32 fn_800BC290(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+152));
        if ((u32)v1 != (u32)0) {
            v2 = M32(((u32)v1+44));
            v3 = M32(v2);
            if ((u32)v3 != (u32)0) {
                v4 = M32(v3);
                if ((s32)v4 == (s32)3) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

u32 fn_800BC2D0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+152));
        if ((u32)v1 != (u32)0) {
            v2 = M32(((u32)v1+44));
            v3 = M32(v2);
            if ((u32)v3 != (u32)0) {
                v4 = M32(v3);
                if ((s32)v4 == (s32)4) {
                    v5 = M8(((u32)v3+512));
                    if ((s32)((v5>>7)&0x1) != (s32)0) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

u32 fn_800BC31C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+152));
        if ((u32)v1 != (u32)0) {
            v2 = M32(((u32)v1+44));
            v3 = M8(((u32)v2+113));
            if ((u32)v3 == (u32)1) {
                return 1;
            }
            if ((u32)v3 == (u32)2) {
                return 2;
            }
            if ((u32)v3 == (u32)3) {
                return 4;
            }
        }
    }
    return 1;
}

void fn_800BCB28(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    v1 = lbl_805DF2A8;
    v2 = M32(((u32)p3+148));
    M32(p3) = 2;
    MF(((u32)p3+384)) = v1;
    MF(((u32)p3+388)) = v1;
    MF(((u32)p3+392)) = v1;
    *(S8*)((u8*)p3+396) = *(S8*)((u8*)v2+32);
    v5 = M32(((u32)v2+40));
    M32(((u32)p3+404)) = v5;
    *(S8*)((u8*)p3+408) = *(S8*)((u8*)v2+44);
    v8 = M32(((u32)v2+52));
    M32(((u32)p3+416)) = v8;
    v9 = M32(((u32)p3+380));
    fn_800CD924((v9+208), 1);
}

void fn_800C2F94(void) {
    fn_800D4EC8();
}

void fn_800C2FB4(void) {
    fn_800D4EF4();
}

void fn_800C34C8(u32 p3, u32 p4) {
    fn_800C2FD4(p3, p4, 1);
}

void fn_800C34EC(u32 p3, u32 p4) {
    fn_800C2FD4(p3, p4, 0);
}

void fn_800C3684(u32 p3, u32 p4) {
    u32 stk[3];
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    v1 = M16(((u32)p4+456));
    v2 = M32((u32)lbl_80489D28);
    v3 = M32(((u32)(u32)lbl_80489D28+4));
    v4 = M32(((u32)(u32)lbl_80489D28+8));
    M32((u8*)stk+0) = v2;
    M32((u8*)stk+4) = v3;
    M32((u8*)stk+8) = v4;
    if ((s32)(v1&0x3) == (s32)0) {
        M32((u8*)stk+0) = -1;
    } else {
        c0 = fn_800C3510(p4, p4, v3, v2, (u32)lbl_80489D28);
        M32((u8*)stk+4) = c0;
        if ((s32)c0 == (s32)5) {
            M32((u8*)stk+0) = -1;
        }
    }
    *(S12*)((u8*)p3+0) = *(S12*)((u8*)stk+0);
}

u32 fn_800C892C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_800C6E6C();
    v1 = M8(((u32)p3+458));
    ((BFu8_0_1*)(((u32)p3+458)))->f = c0;
    v2 = M32(((u32)p3+432));
    M32(((u32)p3+432)) = (v2+1);
    v3 = M32(((u32)p3+436));
    M32(((u32)p3+436)) = (v3+1);
    return v3;
}

void fn_800C897C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    *(S8*)((u8*)p3+232) = *(S8*)((u8*)p3+192);
    *(S8*)((u8*)p3+240) = *(S8*)((u8*)p3+200);
    *(S8*)((u8*)p3+248) = *(S8*)((u8*)p3+208);
    *(S8*)((u8*)p3+256) = *(S8*)((u8*)p3+216);
    *(S8*)((u8*)p3+264) = *(S8*)((u8*)p3+224);
    fn_800B6040(p3, (p3+244), v9);
}

u32 fn_800C9298(void) {
    return 20;
}

u32 fn_800C9A38(void) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)(u32)lbl_80557248+564));
    v2 = M32(((u32)v1+868));
    return v2;
}

u32 fn_800C9A4C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32(((u32)p3+148));
    v2 = M8(((u32)v1+168));
    v6 = (v2&0x1);
    if ((s32)(v2&0x1) == (s32)0) {
        if ((s32)((v2>>1)&0x1) == (s32)0) {
            v3 = M32(((u32)p3+384));
            fn_800B5B94(p3, v3, 0);
            v4 = M32(((u32)(u32)lbl_80557248+564));
            v5 = M32(((u32)v4+872));
            if ((s32)v5 < (s32)1) {
                fn_800B5AF0(p3);
            } else {
                fn_800B5B44(p3, v5);
            }
            return 1;
        }
        v6 = ((v2>>1)&0x1);
    }
    return 0;
}

void fn_800C9D84(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    v1 = M32(p4);
    M32(((u32)p3+384)) = v1;
    v2 = M32(((u32)p3+380));
    fn_800CD924((v2+208), 1, p5);
}

u32 fn_800C9DBC(void) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)(u32)lbl_80557248+564));
    v2 = M32(((u32)v1+896));
    return v2;
}

u32 fn_800C9DD0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = M32(((u32)p3+148));
    v2 = M8(((u32)v1+169));
    v6 = 0;
    v7 = v1;
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        M32(((u32)p3+388)) = 1;
        v3 = M32(((u32)p3+384));
        fn_800B5B94(p3, v3, 0);
        v4 = M32(((u32)(u32)lbl_80557248+564));
        v5 = M32(((u32)v4+900));
        if ((s32)v5 < (s32)1) {
            fn_800B5AF0(p3);
        } else {
            fn_800B5B44(p3, v5);
        }
        v6 = 1;
        v7 = v5;
    }
    return v6;
}

void fn_800CA124(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(p4);
    M32(((u32)p3+384)) = v1;
    M32(((u32)p3+388)) = 0;
    v2 = M32(((u32)p3+380));
    fn_800CD924((v2+208), 1, v1);
}

u32 fn_800CA164(void) {
    return 15;
}

void fn_800CB2E0(u32 p3, u32 p4) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    v1 = lbl_805DF4D4;
    v2 = M32(p4);
    v3 = M32(((u32)p3+148));
    M32(((u32)p3+384)) = v2;
    M32(((u32)p3+388)) = 0;
    M32(((u32)p3+432)) = 0;
    *(S8*)((u8*)p3+392) = *(S8*)((u8*)v3+20);
    v6 = M32(((u32)v3+28));
    M32(((u32)p3+400)) = v6;
    M32(((u32)p3+416)) = 0;
    MF(((u32)p3+420)) = v1;
    M32(((u32)p3+424)) = 0;
    M32(((u32)p3+428)) = 0;
    v7 = M8(((u32)p3+156));
    ((BFu8_0_1*)(((u32)p3+156)))->f = 1;
    v8 = M32(((u32)p3+380));
    fn_800CD924((v8+208), 1);
}

void fn_800CB360(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+416));
    if ((u32)v1 == (u32)0) {
    return;
    }
    HSD_JObjUnref(v1);
    M32(((u32)p3+416)) = 0;
}

u32 fn_800CB3A0(void) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)(u32)lbl_80557248+564));
    v2 = MS16(((u32)v1+924));
    return v2;
}

u32 fn_800CC1F8(void) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)(u32)lbl_80557248+564));
    v2 = M32(((u32)v1+1036));
    return v2;
}

void fn_800CD208(u32 p3, u32 p4) {
    u32 v1;
    u32 c0;
    v1 = M32(((u32)p3+388));
    c0 = fn_800D307C(v1);
    if ((s32)c0 != (s32)0) {
        fn_800CCE4C(p3, p4);
    } else {
        fn_800CC2FC(p3, p4);
    }
}

void fn_800CD8E4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M8(p3);
    ((BFu8_1_2*)(p3))->f = 0;
    v2 = M8(p3);
    ((BFu8_3_2*)(p3))->f = 0;
    M32(((u32)p3+4)) = 0;
    v3 = M8(p3);
    ((BFu8_0_1*)(p3))->f = 0;
    M32(((u32)p3+44)) = 0;
    M32(((u32)p3+40)) = 0;
    M32(((u32)p3+60)) = 0;
    M32(((u32)p3+56)) = 0;
}

void fn_800CD924(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M8(p3);
    if ((s32)((v1>>7)&0x1) == (s32)p4) {
    return;
    }
    ((BFu8_1_2*)(p3))->f = 0;
    v2 = M8(p3);
    ((BFu8_3_2*)(p3))->f = 0;
    M32(((u32)p3+4)) = 0;
    v3 = M8(p3);
    ((BFu8_0_1*)(p3))->f = p4;
}

u32 fn_800CDCA4(void) {
    return 60;
}

u32 fn_800CDCAC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+148));
    v2 = M8(((u32)v1+170));
    if ((s32)((v2>>7)&0x1) == (s32)0) {
        v3 = M32(((u32)p3+380));
        v4 = MS16(((u32)v3+104));
        fn_800B9928(v4, (v1+20), (v1+44), (v1+32));
        return 1;
    }
    return 0;
}

void fn_800CE538(u32 p3) {
    fn_800E8FD0();
    fn_800E9DA0(p3);
    fn_800DE034(p3);
    fn_800E635C(p3);
    fn_800EEA5C(p3);
    fn_800E51DC(p3);
    fn_800DE748(p3);
    fn_800DE1A8(p3);
    fn_800F439C(p3);
    fn_800D7060(p3);
    fn_800D8C28(p3);
    fn_800D5F1C(p3);
    fn_800DC144(p3);
    fn_800EEFB0(p3);
    HSD_ObjFree((u32)lbl_80557558, p3);
    lbl_805DD6CC = 0;
}

u32 fn_800CE618(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c3;
    v1 = M32(((u32)p3+44));
    fn_800DBD18();
    v2 = M32(((u32)v1+244));
    fn_8040A64C(v2);
    fn_800DC640(v1);
    v3 = M32(((u32)v1+4));
    v4 = M32((u32)lbl_804A322C+(v3<<2));
    v5 = M32(((u32)v4+8));
    if ((u32)v5 != (u32)0) {
        c3 = ((u32 (*)(u32))(v5))(p3);
        v6 = c3;
    } else {
        v6 = v4;
    }
    return v6;
}

void fn_800CE68C(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+44));
    fn_800D777C(v1);
    fn_800E6D14(v1);
    fn_800E8888(v1);
    fn_800E8E1C(v1);
}

u32 grLoadCommon(void) {
    u32 stk[1];
    u32 v1;
    u32 v2;
    lbLoadArchive(0, (u32)lbl_804A32B0, (u32)((u8*)stk+0), (u32)lbl_804A32C0, 0);
    v1 = M32((u8*)stk+0);
    v2 = M32(v1);
    lbl_805DD6C8 = v2;
    return v1;
}

void grLoadCityEventArchive(u32 p3) {
    lbLoadArchive(0, (u32)lbl_804A329C, p3, (u32)lbl_804A32F4, 0);
}

u32 fn_800CEA5C(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+20));
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+4));
        return v4;
    }
    return 0;
}

float fn_800CEA80(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 != (u32)0) {
        v4 = MF(((u32)v3+4));
        return v4;
    }
    v5 = lbl_805DF5D0;
    return v5;
}

u32 fn_800CEAA4(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    v4 = M8(((u32)v3+129));
    return v4;
}

float grGetGroundMinimapScale(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    v4 = MF(((u32)v3+96));
    return v4;
}

void fn_800CEACC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    *(S8*)((u8*)p3+0) = *(S8*)((u8*)v3+100);
    v6 = M32(((u32)v3+108));
    M32(((u32)p3+8)) = v6;
}

u32 fn_800CEAF4(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 != (u32)0) {
        v4 = M8(((u32)v3+128));
        return v4;
    }
    return 0;
}

u32 fn_800CEC28(u32 p3) {
    u32 v1;
    u32 v2;
    A64_48_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_48_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>4)&0xff);
}

u32 fn_800CEC44(u32 p3) {
    u32 v1;
    A28_16_u32* v2;
    u32 v3;
    v1 = lbl_805DD6C8;
    v2 = (A28_16_u32*)(v1);
    v3 = v2[p3].f;
    return v3;
}

u32 fn_800CEC58(u32 p3) {
    u32 v1;
    A28_20_u32* v2;
    u32 v3;
    v1 = lbl_805DD6C8;
    v2 = (A28_20_u32*)(v1);
    v3 = v2[p3].f;
    return v3;
}

u32 fn_800CEC6C(u32 p3) {
    u32 v1;
    A28_24_u32* v2;
    u32 v3;
    v1 = lbl_805DD6C8;
    v2 = (A28_24_u32*)(v1);
    v3 = v2[p3].f;
    return v3;
}

float fn_800CEC80(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    A64_48_u32* v4;
    u32 v5;
    float v6;
    v1 = lbl_805DD6CC;
    v2 = lbl_805DD6C8;
    v3 = M32(((u32)v1+92));
    v4 = (A64_48_u32*)(v3);
    v5 = v4[p3].f;
    v6 = MF(v2+(((v5>>4)&0xff)*28));
    return v6;
}

float fn_800CECA8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    A64_48_u32* v4;
    u32 v5;
    A28_4_float* v6;
    float v7;
    v1 = lbl_805DD6CC;
    v2 = lbl_805DD6C8;
    v3 = M32(((u32)v1+92));
    v4 = (A64_48_u32*)(v3);
    v5 = v4[p3].f;
    v6 = (A28_4_float*)(v2);
    v7 = v6[((v5>>4)&0xff)].f;
    return v7;
}

void fn_800CEF84(u32 p3, u32 p4) {
    u32 v1;
    v1 = lbl_805DD6CC;
    fn_800E0E04(v1, p3, p4);
}

u32 fn_800CF058(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+272));
    if ((u32)v2 != (u32)0) {
        v3 = M32(v2);
        v4 = M32(((u32)v3+4));
        return v4;
    }
    return 0;
}

u32 fn_800CF38C(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+284));
    if ((u32)v2 != (u32)0) {
        v3 = M32(((u32)v2+4));
        return v3;
    }
    return 0;
}

u32 fn_800CF598(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    A24_16_u32* v5;
    u32 v6;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+284));
    if ((u32)v2 == (u32)0) {
        __assert((u32)&lbl_805D6090, 573, (u32)lbl_804A33E8);
    }
    v3 = M32(((u32)v1+284));
    v4 = M32(v3);
    v5 = (A24_16_u32*)(v4);
    v6 = v5[p3].f;
    return v6;
}

u32 fn_800CF6D8(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+284));
    if ((u32)v2 == (u32)0) {
        __assert((u32)&lbl_805D6090, 616, (u32)lbl_804A33A4);
    }
    v3 = M32(((u32)v1+296));
    return v3;
}

u32 fn_800D0654(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+284));
    return (((-(s32)v2)|v2)>>31);
}

u32 fn_800D0DCC(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+32));
    v4 = M32(((u32)v3+12));
    v5 = M32(((u32)v4+8));
    return v5;
}

u32 fn_800D0EB8(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+32));
    v4 = M32(((u32)v3+16));
    v5 = M32(((u32)v4+8));
    return v5;
}

u32 fn_800D0FA4(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+32));
    v4 = M32(((u32)v3+20));
    v5 = M32(((u32)v4+8));
    return v5;
}

u32 fn_800D11D4(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+32));
    v4 = M32(((u32)v3+28));
    if ((u32)v4 != (u32)0) {
        v5 = M32(((u32)v4+8));
        return v5;
    }
    return 0;
}

u32 grGetYakumonoposNum(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+32));
    v4 = M32(((u32)v3+44));
    if ((u32)v4 != (u32)0) {
        v5 = M32(((u32)v4+8));
        return v5;
    }
    return 0;
}

u32 fn_800D1838(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    if ((s32)p3 > (s32)-1) {
        v2 = M32(((u32)v1+96));
        if ((s32)p3 < (s32)v2) {
            return 0;
        }
    }
    return 1;
}

u32 fn_800D18F0(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>5)&0x1);
}

u32 fn_800D190C(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>13)&0x1);
}

u32 fn_800D1928(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>14)&0x1);
}

u32 fn_800D1944(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>17)&0x1);
}

void fn_800D1960(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    A64_56_u32* v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_56_u32*)(v2);
    v4 = v3[p3].f;
    v5 = M32(((u32)v4+144));
    fn_800F50D8(v5, p3, p4, v2);
}

u32 fn_800D19A0(u32 p3) {
    u32 v1;
    u32 v2;
    A64_48_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_48_u32*)(v2);
    v4 = v3[p3].f;
    return (((v4>>4)&0xff) == 30);
}

u32 fn_800D19C8(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>19)&0x1);
}

u32 fn_800D19E4(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>20)&0x1);
}

u32 fn_800D1A00(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>21)&0x1);
}

u32 fn_800D1A1C(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>22)&0x1);
}

u32 fn_800D1A38(u32 p3) {
    u32 v1;
    u32 v2;
    A64_52_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_52_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4>>23)&0x1);
}

u32 fn_800D1A54(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 c1;
    fn_800A98EC();
    v1 = lbl_805DD6CC;
    c1 = fn_800D9958((v1+84), p3, p4, 7, 0, p5);
    fn_800A98F0();
    return c1;
}

u32 fn_800D1AC4(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 c1;
    fn_800A98EC();
    v1 = lbl_805DD6CC;
    c1 = fn_800D9958((v1+84), p3, p4, 1, 0, p5);
    fn_800A98F0();
    return c1;
}

u32 fn_800D1B34(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 c1;
    fn_800A98EC();
    v1 = lbl_805DD6CC;
    c1 = fn_800D9958((v1+84), p3, p4, 2, 0, p5);
    fn_800A98F0();
    return c1;
}

u32 fn_800D1BA4(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 c1;
    fn_800A98EC();
    v1 = lbl_805DD6CC;
    c1 = fn_800D9958((v1+84), p3, p4, 7, 1, p5);
    fn_800A98F0();
    return c1;
}

u32 fn_800D1C14(u32 p3, u32 p4, u32 p5, u32 p6, float q1) {
    u32 v1;
    u32 c1;
    fn_800A98EC();
    v1 = lbl_805DD6CC;
    c1 = fn_800D9E34((v1+84), p3, p4, 7, 1, p5, p6, q1, q1);
    fn_800A98F0();
    return c1;
}

u32 fn_800D1CA8(u32 p3, u32 p4, u32 p5, u32 p6, float q1) {
    u32 v1;
    u32 c1;
    fn_800A98EC();
    v1 = lbl_805DD6CC;
    c1 = fn_800D9E34((v1+84), p3, p4, 1, 1, p5, p6, q1, q1);
    fn_800A98F0();
    return c1;
}

u32 fn_800D1D3C(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    return v2;
}

u32 fn_800D1D48(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 != (u32)0) {
        v4 = M8(((u32)v3+28));
        return (v4&0x1);
    }
    return 0;
}

u32 fn_800D1D70(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 != (u32)0) {
        v4 = M8(((u32)v3+28));
        return (v4&0x2);
    }
    return 0;
}

void fn_800D1D98(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+360));
    if ((u32)v2 == (u32)0) {
    return;
    }
    c0 = HSD_FogGetCurrent(v1);
    HSD_FogSet(c0);
}

void fn_800D1DCC(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+360));
    if ((u32)v2 == (u32)0) {
    return;
    }
    HSD_FogSet(0);
}

u32 fn_800D1E00(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+360));
    if ((u32)v2 != (u32)0) {
        v3 = M32(((u32)v2+40));
        return v3;
    }
    return 0;
}

u32 fn_800D1E20(float q1) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+360));
    if ((u32)v2 == (u32)0) {
    return v2;
    }
    v3 = M32(((u32)v2+40));
    if ((u32)v3 == (u32)0) {
    return v3;
    }
    MF(((u32)v3+32)) = q1;
    return v3;
}

u32 fn_800D1E44(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+124));
    v3 = M32(v2+(p3*28));
    v4 = M32(((u32)v3+12));
    v5 = M32(((u32)v3+16));
    M32(p4) = v4;
    M32(((u32)p4+4)) = v5;
    v6 = M32(((u32)v3+20));
    M32(((u32)p4+8)) = v6;
    return v4;
}

float fn_800D1E70(void) {
    u32 v1;
    A28_8_float* v2;
    float v3;
    u32 c0;
    v1 = lbl_805DD6C8;
    c0 = fn_800D1EE0();
    v2 = (A28_8_float*)(v1);
    v3 = v2[c0].f;
    return v3;
}

float fn_800D1EA8(void) {
    u32 v1;
    A28_12_float* v2;
    float v3;
    u32 c0;
    v1 = lbl_805DD6C8;
    c0 = fn_800D1EE0();
    v2 = (A28_12_float*)(v1);
    v3 = v2[c0].f;
    return v3;
}

u32 fn_800D1EE0(u32 p3) {
    u32 v1;
    v1 = lbl_805DD6CC;
    fn_800DC988((v1+84), p3, v1);
}

void fn_800D1F0C(u32 p3, u32 p4) {
    u32 v1;
    v1 = lbl_805DD6CC;
    fn_800DC9A0((v1+84), p3, p4, v1);
}

u32 fn_800D1F3C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    if ((s32)p3 > (s32)-1) {
        v2 = M32(((u32)v1+120));
        if ((s32)p3 < (s32)v2) {
            return 0;
        }
    }
    return 1;
}

u32 fn_800D1FA0(u32 p3) {
    u32 v1;
    u32 v2;
    A320_36_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_36_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4&0x1ffffff) == 7);
}

u32 fn_800D1FC8(u32 p3) {
    u32 v1;
    u32 v2;
    A320_36_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_36_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4&0x1ffffff) == 9);
}

u32 fn_800D21D0(u32 p3) {
    u32 v1;
    u32 v2;
    A320_36_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_36_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4&0x1ffffff) == 4);
}

u32 fn_800D24D4(u32 p3) {
    u32 v1;
    u32 v2;
    A320_36_u32* v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_36_u32*)(v2);
    v4 = v3[p3].f;
    return ((v4&0x1ffffff) == 15);
}

u32 fn_800D24FC(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    u32 v2;
    A320_36_u32* v3;
    u32 v4;
    A320_312_u32* v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_36_u32*)(v2);
    v4 = v3[p3].f;
    v5 = (A320_312_u32*)(v2);
    v6 = v5[p3].f;
    if ((s32)(v4&0x1ffffff) != (s32)7) {
        __assert((u32)&lbl_805D6090, 2270, (u32)lbl_804A3848);
    }
    v7 = M32(((u32)v1+8));
    v8 = M32(v6);
    v9 = M32(((u32)v7+36));
    v10 = M32(v9);
    v11 = M32(v10);
    v12 = M32(v11+(v8<<2));
    M32(p4) = v12;
    v13 = M32(((u32)v6+4));
    M32(p5) = v13;
    if ((u32)p6 != (u32)0) {
        v14 = M8(((u32)v6+12));
        M32(p6) = ((v14>>7)&0x1);
    }
    return v11;
}

u32 fn_800D25A8(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    u32 v2;
    A320_36_u32* v3;
    u32 v4;
    A320_312_u32* v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_36_u32*)(v2);
    v4 = v3[p3].f;
    v5 = (A320_312_u32*)(v2);
    v6 = v5[p3].f;
    if ((s32)(v4&0x1ffffff) != (s32)9) {
        __assert((u32)&lbl_805D6090, 2293, (u32)lbl_804A3874);
    }
    v7 = M32(((u32)v1+8));
    v8 = M32(v6);
    v9 = M32(((u32)v7+36));
    v10 = M32(((u32)v9+4));
    v11 = M32(v10);
    v12 = M32(v11+(v8<<2));
    M32(p4) = v12;
    v13 = M32(((u32)v6+4));
    M32(p5) = v13;
    if ((u32)p6 != (u32)0) {
        v14 = M8(((u32)v6+8));
        M32(p6) = ((v14>>7)&0x1);
    }
    return v11;
}

void fn_800D26D8(u32 p3) {
    u32 v1;
    u32 v2;
    A320_312_u32* v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_312_u32*)(v2);
    v4 = v3[p3].f;
    if ((u32)v4 == (u32)0) {
    return;
    }
    c0 = fn_800F7A50(v4, v1);
    if ((s32)c0 == (s32)0) {
    return;
    }
    v5 = M32(((u32)v4+44));
    if ((u32)v5 == (u32)0) {
    return;
    }
    v6 = M32(((u32)v5+8));
    v7 = M32(((u32)v6+20));
    if ((u32)v7 == (u32)0) {
    return;
    }
    fn_800EA084((v5+280), 0);
}

void fn_800D2750(void) {
    fn_800F9F78();
}

void fn_800D2770(void) {
    fn_800FA594();
}

void fn_800D2790(void) {
    fn_800FA3C0();
}

u32 fn_800D27B0(u32 p3, u32 p4) {
    u32 v1;
    u32 c0;
    u32 c1;
    c0 = fn_800F7A64();
    if ((s32)c0 != (s32)47) {
        if ((s32)c0 < (s32)47) {
            if ((s32)c0 >= (s32)46) goto L17;
            goto L23;
        }
        if ((s32)c0 >= (s32)49) goto L23;
        goto L21;
    L17:;
        c1 = fn_800FE9FC(p3, p4);
        v1 = c1;
        goto L24;
    L21:;
        v1 = 1;
        goto L24;
    }
    L23:;
    v1 = 0;
    L24:;
    return v1;
}

void fn_800D2828(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 c0;
    c0 = fn_800F7A64();
    if ((s32)c0 != (s32)47) {
        if ((s32)c0 < (s32)47) {
            if ((s32)c0 >= (s32)46) goto L21;
            goto L33;
        }
        if ((s32)c0 >= (s32)49) goto L33;
        goto L27;
    L21:;
        fn_800FEA5C(p3, p4, p5, p6);
        goto L37;
    L27:;
        fn_800FF3E4(p3, p4, p5, p6);
        goto L37;
    }
    L33:;
    __assert((u32)&lbl_805D6090, 2414, (u32)&lbl_805D6098);
    L37:;
}

void fn_800D28DC(u32 p3, u32 p4, u32 p5) {
    u32 c0;
    c0 = fn_800F7A64();
    if ((s32)c0 != (s32)47) {
        if ((s32)c0 < (s32)47) {
            if ((s32)c0 >= (s32)46) goto L19;
            goto L29;
        }
        if ((s32)c0 >= (s32)49) goto L29;
        goto L24;
    L19:;
        fn_800FEAC4(p3, p4, p5);
        goto L33;
    L24:;
        fn_800FF480(p3, p4, p5);
        goto L33;
    }
    L29:;
    __assert((u32)&lbl_805D6090, 2436, (u32)&lbl_805D6098);
    L33:;
}

void fn_800D297C(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F7A64();
    if ((s32)c0 != (s32)48) {
        __assert((u32)&lbl_805D6090, 2448, (u32)lbl_804A38DC);
    }
    fn_800FF44C(p3, p4);
}

void fn_800D29DC(void) {
    fn_800E86DC();
}

void fn_800D29FC(void) {
    fn_800E86DC();
}

void fn_800D2C5C(void) {
    fn_800FB2BC();
}

u32 fn_800D2C7C(u32 p3, u32 p4, float q1) {
    u32 v1;
    u32 c0;
    u32 c1;
    c0 = fn_80261ECC();
    if ((s32)c0 == (s32)9) {
        c1 = fn_8010D788(p3, p4, q1);
        v1 = c1;
    } else {
        v1 = 0;
    }
    return v1;
}

void fn_800D2FB4(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    float v6;
    float d2;
    if ((s32)p3 == (s32)0) {
        __assert((u32)&lbl_805D609C, 996, (u32)&lbl_805D60A4);
    }
    if ((u32)p4 == (u32)0) {
        __assert((u32)&lbl_805D609C, 997, (u32)lbl_804A3968);
    }
    v1 = M32(((u32)p3+56));
    v2 = M32(((u32)p3+60));
    M32(p4) = v1;
    M32(((u32)p4+4)) = v2;
    v3 = M32(((u32)p3+64));
    M32(((u32)p4+8)) = v3;
    d2 = fn_800D3058(v1);
    v4 = MF(p4);
    MF(p4) = (v4*d2);
    v5 = MF(((u32)p4+4));
    MF(((u32)p4+4)) = (v5*d2);
    v6 = MF(((u32)p4+8));
    MF(((u32)p4+8)) = (v6*d2);
}

float fn_800D3058(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 != (u32)0) {
        v4 = MF(((u32)v3+8));
        return v4;
    }
    v5 = lbl_805DF5E0;
    return v5;
}

u32 fn_800D3D78(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v5 = v1;
    if ((s32)p3 > (s32)-1) {
        v2 = M32(((u32)v1+1108));
        if ((u32)v2 != (u32)0) {
            v3 = M32(((u32)v2+4));
            v4 = v3;
        } else {
            v4 = 0;
        }
        if ((s32)p3 < (s32)v4) {
            return 0;
        }
        v5 = v2;
    }
    return 1;
}

float fn_800D4684(void) {
    u32 v1;
    float v2;
    v1 = lbl_805DD6C8;
    v2 = MF(((u32)v1+1416));
    return v2;
}

u32 fn_800D4EC8(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+8));
        v3 = M32(((u32)v2+68));
        if ((u32)v3 != (u32)0) {
            v4 = M32(v3);
            return v4;
        }
    }
    return 0;
}

u32 fn_800D4EF4(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+8));
        v3 = M32(((u32)v2+68));
        if ((u32)v3 != (u32)0) {
            v4 = M32(((u32)v3+4));
            return v4;
        }
    }
    return 0;
}

void fn_800D50F8(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    u32 v2;
    A320_36_u32* v3;
    u32 v4;
    A320_312_u32* v5;
    u32 v6;
    u32 v7;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_36_u32*)(v2);
    v4 = v3[p3].f;
    v5 = (A320_312_u32*)(v2);
    v6 = v5[p3].f;
    if ((s32)(v4&0x1ffffff) != (s32)25) {
        __assert((u32)&lbl_805D6090, 3404, (u32)lbl_804A3AC4);
    }
    v7 = M32(v6);
    fn_800E5460(v7, p4, p5, p6);
}

void fn_800D518C(u32 p3, u32 p4) {
    u32 v1;
    v1 = lbl_805DD6CC;
    fn_800D790C((v1+84), p3, p4, v1);
}

u32 fn_800D51BC(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+144));
    return v2;
}

void fn_800D51FC(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+272));
    if ((u32)v2 == (u32)0) {
        __assert((u32)&lbl_805D6090, 3465, (u32)lbl_804A3364);
    }
    v3 = M32(v2);
    v4 = M32(((u32)v2+4));
    fn_800DE77C(v3, v4);
}

float fn_800D52E4(u32 p3) {
    u32 stk[3];
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    float v9;
    float v10;
    float v11;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+80));
    if ((u32)v3 != (u32)0) {
        v4 = M32(v3);
        if ((s32)v4 == (s32)0) {
            v5 = M32(((u32)v3+4));
            v6 = M32(((u32)v1+260));
            v7 = M32(v5);
            v8 = M32(v6+(v7<<3));
            fn_80053F34(v8, 0, (u32)((u8*)stk+0));
            v9 = MF((u8*)stk+8);
            v10 = MF(((u32)p3+8));
            return (v9-v10);
        }
    }
    __assert((u32)&lbl_805D6090, 3515, (u32)&lbl_805D6098);
    v11 = lbl_805DF5DC;
    return v11;
}

void fn_800D5370(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+80));
    if ((u32)v3 != (u32)0) {
        v4 = M32(v3);
        if ((s32)v4 == (s32)0) {
            fn_800EEE70(v1, p3, v1);
            return;
        }
    }
    __assert((u32)&lbl_805D6090, 3536, (u32)&lbl_805D6098);
}

void fn_800D53CC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    A64_56_u32* v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+92));
    v3 = (A64_56_u32*)(v2);
    v4 = v3[p3].f;
    v5 = M32(((u32)v4+144));
    fn_800F51A4(v5, p3, p4, v2);
}

u32 fn_800D540C(void) {
    return 15;
}

u32 fn_800D5414(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+52));
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)v3+4));
        if ((u32)v4 != (u32)0) {
            v5 = M32(((u32)v4+4));
            return v5;
        }
    }
    return 0;
}

void fn_800D5444(u32 p3) {
    u32 v1;
    v1 = lbl_805DD6CC;
    fn_800DC354(v1, p3);
}

void fn_800D546C(void) {
    u32 v1;
    v1 = lbl_805DD6CC;
    fn_800DC4C0(v1);
}

u32 fn_800D55E4(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+120));
    return v2;
}

u32 fn_800D55F0(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)9) {
        c0 = fn_8010F5E8(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D5628(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)9) {
        c0 = fn_8010F61C(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D5660(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)9) {
        c0 = fn_8010F650(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D5698(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)9) {
        c0 = fn_8010F684(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D56D0(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)9) {
        c0 = fn_8010F6B8(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D5708(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)9) {
        c0 = fn_8010F6EC(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D5740(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)1) {
        c0 = fn_8010E280(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D5778(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)1) {
        c0 = fn_8010E2B4(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D57B0(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)4) {
        c0 = fn_8010E928(v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_800D57E8(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+80));
    if ((u32)v3 != (u32)0) {
        v4 = M32(v3);
        if ((s32)v4 == (s32)1) {
            v5 = M32(((u32)v1+2080));
            return v5;
        }
    }
    __assert((u32)&lbl_805D6090, 3871, (u32)&lbl_805D6098);
    return 0;
}

u32 fn_800D59B8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+4));
    if ((s32)v2 == (s32)9) {
        c0 = fn_8010F720(p3, v1);
        v3 = c0;
    } else {
        v3 = 0;
    }
    return v3;
}

void fn_800D5ED4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(p3);
    fn_800D5FD0(v1);
    v2 = M32(p3);
    fn_800D60D8(v2);
    v3 = M32(p3);
    fn_800D6188(v3);
    fn_800EF618(p3);
}

void fn_800D5F1C(u32 p3) {
    fn_800EF6B0();
}

void fn_800D5F3C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c0;
    u32 c1;
    u32 c3;
    v1 = M32(((u32)p3+40));
    v2 = p3;
    v3 = v1;
    goto L22;
    L6:;
    v4 = M32(((u32)v3+72));
    if ((u32)v4 != (u32)0) {
        c0 = HSD_AObjGetFlags(v4);
        if ((s32)(c0&0x40000000) == (s32)0) {
            c1 = HSD_LObjAnim(v3);
            fn_800D3058(c1);
            c3 = fn_80057620(v3);
            v5 = c3;
        } else {
            v5 = c0;
        }
    } else {
        v5 = v4;
    }
    if ((u32)v3 == (u32)0) {
        v2 = v5;
        v3 = 0;
    } else {
        v6 = M32(((u32)v3+12));
        v2 = v5;
        v3 = v6;
    }
    L22:;
    if ((u32)v3 != (u32)0) goto L6;
}

void fn_800D5FB0(void) {
    fn_8042A22C();
}

void fn_800D6094(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+40));
    HSD_LObjAnimAll(v1);
}

void fn_800D60B8(void) {
    fn_8042A22C();
}

void fn_800D6724(u32 p3, u32 p4, u32 p5, u32 p6) {
    M32(p3) = 0;
    M32(((u32)p3+8)) = 0;
    M32(((u32)p3+16)) = 0;
    M32(((u32)p3+24)) = 0;
    M32(((u32)p3+32)) = 0;
    M32(((u32)p3+40)) = 0;
    M32(((u32)p3+48)) = 0;
    M32(((u32)p3+56)) = 0;
    M32(((u32)p3+64)) = 0;
    M32(((u32)p3+4)) = 0;
    M32(((u32)p3+12)) = 0;
    M32(((u32)p3+20)) = 0;
    M32(((u32)p3+28)) = 0;
    M32(((u32)p3+36)) = 0;
    M32(((u32)p3+44)) = 0;
    M32(((u32)p3+52)) = 0;
    M32(((u32)p3+60)) = 0;
    M32(((u32)p3+68)) = 0;
}

void fn_800D6D88(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    fn_800D6774();
    fn_800D6A70(p5, p6);
}

void fn_800D7060(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    v1 = M32(((u32)p3+84));
    if ((u32)v1 != (u32)0) {
        HSD_Free(v1);
    }
    v2 = M32(((u32)p3+92));
    if ((u32)v2 != (u32)0) {
        HSD_Free(v2);
    }
    v3 = M32(((u32)p3+100));
    if ((u32)v3 != (u32)0) {
        HSD_Free(v3);
    }
    v4 = M32(((u32)p3+116));
    if ((u32)v4 != (u32)0) {
        HSD_Free(v4);
    }
    v5 = M32(((u32)p3+116));
    if ((u32)v5 != (u32)0) {
        HSD_Free(v5);
    }
    v6 = M32(((u32)p3+124));
    if ((u32)v6 != (u32)0) {
        HSD_Free(v6);
    }
    v7 = M32(((u32)p3+132));
    if ((u32)v7 != (u32)0) {
        HSD_Free(v7);
    }
    v8 = M32(((u32)p3+148));
    if ((u32)v8 != (u32)0) {
        HSD_Free(v8);
    }
    v9 = M32(((u32)p3+148));
    if ((u32)v9 == (u32)0) {
    return;
    }
    HSD_Free(v9);
}

void fn_800D8A4C(u32 p3, u32 p4) {
    M32(p3) = 0;
    M32(((u32)p3+4)) = 0;
    M32(((u32)p3+8)) = 0;
}

void fn_800D8B40(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(p3);
    if ((u32)v1 != (u32)0) {
        HSD_Free(v1);
    }
    v2 = M32(((u32)p3+4));
    if ((u32)v2 != (u32)0) {
        HSD_Free(v2);
    }
    v3 = M32(((u32)p3+8));
    if ((u32)v3 == (u32)0) {
    return;
    }
    HSD_Free(v3);
}

void fn_800D8B98(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 c1;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+12));
    if ((u32)v2 != (u32)0) {
        v3 = M32(v2);
        v4 = M32(p3);
        v5 = M32(v3);
        v6 = M32(((u32)v4+40));
        v7 = M32(((u32)v3+4));
        v8 = M32(((u32)v3+8));
        v9 = M32(((u32)v3+12));
        fn_800D8A60((p3+260), v6, v5, v7, v8, v9);
    } else {
        v10 = M32(p3);
        v11 = M32(((u32)v10+40));
        c1 = fn_80055DA0(v10);
        fn_800D8A60((p3+260), v11, c1, 1, 0, 0);
    }
}

void fn_800D8C28(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+260));
    if ((u32)v1 != (u32)0) {
        HSD_Free(v1);
    }
    v2 = M32(((u32)p3+264));
    if ((u32)v2 != (u32)0) {
        HSD_Free(v2);
    }
    v3 = M32(((u32)p3+268));
    if ((u32)v3 == (u32)0) {
    return;
    }
    HSD_Free(v3);
}

void fn_800D8C80(u32 p3, u32 p4, u32 p5) {
    u32 stk[11];
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    fn_80416FFC((u32)((u8*)stk+0), p3);
    v1 = MF((u8*)stk+4);
    MF(p5) = v1;
    v2 = MF((u8*)stk+20);
    MF(((u32)p5+4)) = v2;
    v3 = MF((u8*)stk+36);
    MF(((u32)p5+8)) = v3;
    v4 = MF((u8*)stk+8);
    MF(p4) = v4;
    v5 = MF((u8*)stk+24);
    MF(((u32)p4+4)) = v5;
    v6 = MF((u8*)stk+40);
    MF(((u32)p4+8)) = v6;
    fn_80062CA4(p5, p5);
    fn_80062CA4(p4, p4);
}

u32 fn_800DA668(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c1;
    u32 c2;
    fn_80261ECC();
    c1 = fn_80262574();
    if ((s32)c1 != (s32)0) {
        c2 = fn_8000A348();
        if ((s32)c2 != (s32)0) {
            v1 = M32(((u32)p3+8));
            v2 = M32(((u32)v1+48));
            v3 = v2;
            goto L16;
        }
    }
    v3 = 0;
    L16:;
    return v3;
}

u32 fn_800DB5D4(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p4+4));
    if ((s32)v1 <= (s32)p5) {
        __assert((u32)lbl_804A3EAC, 942, (u32)lbl_804A3EB8);
    }
    v2 = M32(p4);
    fn_800DB6D4((p3+2084), 500, (v2+(p5<<3)));
    return (p3+2084);
}

u32 fn_800DB654(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p4+4));
    if ((s32)v1 <= (s32)p5) {
        __assert((u32)lbl_804A3EAC, 967, (u32)lbl_804A3EB8);
    }
    v2 = M32(p4);
    fn_800DB6D4((p3+2147), 100, (v2+(p5<<3)));
    return (p3+2147);
}

void fn_800DB774(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 c1;
    v1 = M32(((u32)p3+260));
    v2 = M32(v1+(p4<<3));
    fn_8040BE00(v2, 16);
    c1 = fn_800D7954((p3+84), v2);
    fn_800D7AD0(c1, 0);
}

void fn_800DB7D0(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 v1;
    u32 v2;
    u32 v3;
    fn_80408EDC();
    if ((s32)p5 == (s32)1) {
        if ((u32)p3 == (u32)0) {
            v2 = 0;
        } else {
            v1 = M32(((u32)p3+16));
            v2 = v1;
        }
        v3 = M32(((u32)p4+8));
        fn_8005523C(v2, v3);
        return;
    }
    if ((s32)p5 != (s32)2) {
    return;
    }
    fn_8005523C(p3, p4);
}

void fn_800DB850(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, float q1, float q2) {
    fn_80409480();
    fn_80409250(p3, q2);
    if ((s32)p7 != (s32)0) {
        fn_800550F4(p3, ((1<<16)-1));
    }
    fn_800550BC(p3, ((1<<16)-1), q1);
}

void fn_800DBD18(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+40));
    fn_8040A64C(v1);
}

void fn_800DBD3C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+260));
    v3 = M32(v2+(p4<<3));
    fn_8040A64C(v3);
}

void fn_800DBE18(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+260));
    v3 = M32(v2+(p3<<3));
    fn_80056494(v3, v1);
}

void fn_800DBF84(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+40));
    HSD_FogSetCurrent(v1);
}

void fn_800DC118(u32 p3) {
    HSD_ObjFree((u32)lbl_805575B0, p3);
}

void fn_800DC144(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+360));
    func_80428F64(v1);
    M32(((u32)p3+360)) = 0;
}

void fn_800DC17C(u32 p3) {
    fn_800DC630(p3, 0);
    fn_800DC1B4(p3);
}

u32 fn_800DC630(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+360));
    v2 = M32(((u32)v1+44));
    M32(((u32)v2+28)) = p4;
    return v2;
}

void fn_800DC7A4(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+360));
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+44));
        v3 = M32(v2);
        if ((u32)v3 != (u32)0) {
            v4 = M32(((u32)v2+24));
            M32(p4) = v4;
            return;
        }
    }
    M8(p4) = 0;
    M8(((u32)p4+1)) = 0;
    M8(((u32)p4+2)) = 0;
    M8(((u32)p4+3)) = 0;
}

u32 fn_800DC988(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+40));
    v2 = M32(v1+(p4*28));
    v3 = M32(((u32)v2+48));
    return ((v3>>4)&0xff);
}

u32 fn_800DD998(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(p3);
    v2 = M16(v1+(p4<<1));
    return v2;
}

u32 fn_800DD9A8(u32 p3) {
    u32 v1;
    v1 = M16(((u32)p3+4));
    return v1;
}

u32 fn_800DD9B0(u32 p3, u32 p4) {
    u32 v1;
    A320_36_u32* v2;
    u32 v3;
    v1 = M32(((u32)p3+32));
    v2 = (A320_36_u32*)(v1);
    v3 = v2[p4].f;
    return ((u32)__cntlzw((((512<<16)+26)-v3))>>5);
}

void fn_800DE004(u32 p3, u32 p4) {
    fn_800DA6BC(p4, (p3+84), 26, p3);
}

void fn_800DE0C8(void) {
    fn_8006E5A4();
}

void fn_800DE0E8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c4;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+72));
    if ((u32)v2 != (u32)0) {
        v3 = M32(v2);
        if ((u32)v3 != (u32)0) {
            v4 = 1;
            goto L16;
        }
    }
    v4 = 0;
    L16:;
    if ((s32)v4 == (s32)0) {
        __assert((u32)lbl_804A4180, 196, (u32)lbl_804A418C);
    }
    v5 = M32(((u32)p3+8));
    v6 = M32(((u32)v5+72));
    v7 = M32(v6);
    M32(((u32)p3+1792)) = v7;
    v8 = M32(((u32)p3+1792));
    M32(((u32)v8+80)) = 3;
    fn_8006F430(v8, 3);
    fn_8006F430(v8, 4);
    fn_8006F430(v8, 5);
    c4 = fn_8007125C();
    M32(((u32)p3+1796)) = c4;
}

void fn_800DE1A8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+72));
    if ((u32)v2 != (u32)0) {
        v3 = M32(v2);
        if ((u32)v3 != (u32)0) {
            v4 = 1;
            goto L15;
        }
    }
    v4 = 0;
    L15:;
    if ((s32)v4 == (s32)0) {
        __assert((u32)lbl_804A4180, 229, (u32)lbl_804A418C);
    }
    v5 = M32(((u32)p3+1796));
    fn_80071290(v5);
    v6 = M32(((u32)p3+1792));
    fn_8006FA3C(v6);
}

void fn_800DE228(u32 p3) {
    fn_800E8CC0();
    fn_800DFBC4(p3);
    fn_800E2D34(p3);
}

void fn_800DE264(void) {
    fn_8007125C();
}

void fn_800DE2D4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+1792));
    fn_8007133C(p3, v2);
}

void fn_800DE714(u32 p3) {
    fn_800DFAD8();
    fn_800E2930(p3);
}

void fn_800DE748(u32 p3) {
    fn_800DFE40();
    fn_800E2AC0(p3);
}

u32 fn_800DF49C(u32 p3, u32 p4) {
    u32 v1;
    A8_4_u32* v2;
    u32 v3;
    v1 = M32(((u32)p3+48));
    v2 = (A8_4_u32*)(v1);
    v3 = v2[p4].f;
    return v3;
}

u32 fn_800DF4B0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(v1+(p4<<3));
    return v2;
}

u32 fn_800DF4C0(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+48));
    v2 = M32(v1+(p4<<3));
    v3 = M32(v2+(p5<<2));
    return v3;
}

u32 fn_800DF4D8(u32 p3, u32 p4) {
    u32 v1;
    A8_4_u32* v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = (A8_4_u32*)(v1);
    v3 = v2[p4].f;
    return v3;
}

void fn_800E1E18(u32 p3, u32 p4, u32 p5, u32 p6, float q1) {
    M32(p3) = p4;
    MF(((u32)p3+4)) = q1;
    M32(((u32)p3+12)) = p5;
    M32(((u32)p3+8)) = p6;
}

void fn_800E1EDC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+40));
    if ((s32)v1 <= (s32)0) {
        __assert((u32)lbl_804A4530, 193, (u32)lbl_804A45D8);
    }
    v2 = M32(((u32)p3+40));
    M32(((u32)p3+40)) = (v2-1);
    v3 = M32(p3+((v2-1)<<2));
    HSD_ObjFree((u32)lbl_805575DC, v3);
}

void fn_800E51DC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    u32 v18;
    u32 v19;
    u32 v20;
    u32 v21;
    u32 v22;
    u32 v23;
    u32 v24;
    u32 v25;
    u32 v26;
    u32 v27;
    u32 v28;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+32));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 != (u32)0) {
        v4 = M32(((u32)p3+308));
        HSD_Free(v4);
    }
    v5 = M32(((u32)v2+8));
    if ((u32)v5 != (u32)0) {
        v6 = M32(((u32)p3+312));
        HSD_Free(v6);
    }
    v7 = M32(((u32)v2+12));
    if ((u32)v7 != (u32)0) {
        v8 = M32(((u32)p3+316));
        HSD_Free(v8);
    }
    v9 = M32(((u32)v2+16));
    if ((u32)v9 != (u32)0) {
        v10 = M32(((u32)p3+320));
        HSD_Free(v10);
    }
    v11 = M32(((u32)v2+20));
    if ((u32)v11 != (u32)0) {
        v12 = M32(((u32)p3+324));
        HSD_Free(v12);
    }
    v13 = M32(((u32)v2+24));
    if ((u32)v13 != (u32)0) {
        v14 = M32(((u32)p3+328));
        HSD_Free(v14);
    }
    v15 = M32(((u32)v2+28));
    if ((u32)v15 != (u32)0) {
        v16 = M32(((u32)p3+332));
        HSD_Free(v16);
    }
    v17 = M32(((u32)v2+32));
    if ((u32)v17 != (u32)0) {
        v18 = M32(((u32)p3+336));
        HSD_Free(v18);
    }
    v19 = M32(((u32)v2+36));
    if ((u32)v19 != (u32)0) {
        v20 = M32(((u32)p3+340));
        HSD_Free(v20);
    }
    v21 = M32(((u32)v2+40));
    if ((u32)v21 != (u32)0) {
        v22 = M32(((u32)p3+344));
        HSD_Free(v22);
    }
    v23 = M32(((u32)v2+44));
    if ((u32)v23 != (u32)0) {
        v24 = M32(((u32)p3+348));
        HSD_Free(v24);
    }
    v25 = M32(((u32)v2+48));
    if ((u32)v25 != (u32)0) {
        v26 = M32(((u32)p3+352));
        HSD_Free(v26);
    }
    v27 = M32(((u32)v2+52));
    if ((u32)v27 == (u32)0) {
    return;
    }
    v28 = M32(((u32)p3+356));
    HSD_Free(v28);
}

u32 fn_800E5318(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+32));
    v4 = M32(((u32)v3+36));
    if ((u32)v4 != (u32)0) {
        v5 = M32(((u32)v4+8));
        return v5;
    }
    return 0;
}

u32 fn_800E5438(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+32));
    v4 = M32(((u32)v3+40));
    if ((u32)v4 != (u32)0) {
        v5 = M32(((u32)v4+8));
        return v5;
    }
    return 0;
}

void fn_800E5B0C(u32 p3) {
    M32(p3) = 0;
    M32(((u32)p3+4)) = 0;
    M32(((u32)p3+8)) = 0;
}

void fn_800E5F6C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(p3);
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32(((u32)p3+4));
    if ((u32)v2 == (u32)0) {
    return;
    }
    HSD_Free(v2);
}

void fn_800E5FA4(u32 p3, u32 p4) {
    u32 c0;
    float d4;
    c0 = HSD_CObjGetProjectionType();
    if ((s32)c0 == (s32)1) {
        fn_80067734(p3, p4);
        HSD_CObjGetEyeVector(p3, (p4+136));
        HSD_CObjGetEyePosition(p3, (p4+124));
        d4 = fn_800BAE98(p3);
        MF(((u32)p4+148)) = d4;
    }
}

void fn_800E62C0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+12));
    if ((u32)v2 != (u32)0) {
        fn_800D3058(v1);
        v3 = M32(v2);
        v4 = M32(((u32)v3+16));
        fn_800E5B20((p3+228), v4, (p3+260));
        v5 = M32(((u32)v2+8));
        fn_800E64BC((p3+248), v5);
        v6 = M32(((u32)v2+12));
        fn_800E674C((p3+256), v6);
        return;
    }
    M32(((u32)p3+228)) = 0;
    M32(((u32)p3+232)) = 0;
    M32(((u32)p3+236)) = 0;
    fn_800E64BC((p3+248), 0);
    fn_800E674C((p3+256), 0);
}

void fn_800E635C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+228));
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)p3+232));
        if ((u32)v2 != (u32)0) {
            HSD_Free(v2);
        }
    }
    fn_800E6610((p3+248));
    fn_800E6754((p3+256));
}

void fn_800E63B0(u32 p3) {
    fn_800E5798((p3+228));
}

void fn_800E6610(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(p3);
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32(((u32)p3+4));
    HSD_Free(v2);
}

void fn_800E674C(u32 p3, u32 p4) {
    M32(p3) = p4;
}

void fn_800E7854(u32 p3) {
    HSD_ObjFree((u32)lbl_80557608, p3);
}

u32 fn_800E86CC(u32 p3, u32 p4, u32 p5) {
    M32(((u32)(p3+(p5*72))+536)) = p4;
    return (p3+(p5*72));
}

u32 fn_800E92C0(u32 p3) {
    return ((u32)__cntlzw(p3)>>5);
}

float fn_800E980C(float q1) {
    float v1;
    v1 = lbl_805DF75C;
    return (v1-q1);
}

void fn_800E9A4C(u32 p3, u32 p4) {
    M32(p3) = 0;
    M32(((u32)p3+4)) = 0;
    M32(((u32)p3+8)) = 0;
    M32(((u32)p3+12)) = 0;
    M32(((u32)p3+16)) = 0;
}

void fn_800E9A68(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32(((u32)p3+4));
    if ((s32)v1 > (s32)0) {
        c0 = fn_800EA180(p3);
        if ((s32)c0 == (s32)0) {
            __assert((u32)lbl_804A50C8, 159, (u32)&lbl_805D6168);
        }
        fn_800EA01C(p3);
        fn_800EA040(p3);
    }
}

u32 fn_800E9F30(u32 p3) {
    fn_8005DED0();
}

void fn_800E9F50(u32 p3, u32 p4, u32 p5, float q1) {
    if ((s32)p3 != (s32)1) {
        if ((s32)p3 < (s32)1) {
            if ((s32)p3 >= (s32)0) goto L18;
            goto L44;
        }
        if ((s32)p3 >= (s32)3) goto L44;
        goto L33;
    L18:;
        fn_8005DB20(p4);
        goto L44;
    }
    if ((u32)p5 == (u32)0) {
        __assert((u32)lbl_804A50C8, 252, (u32)&lbl_805D616C);
    }
    fn_8005DB44(p4, p5, q1);
    goto L44;
    L33:;
    if ((u32)p5 == (u32)0) {
        __assert((u32)lbl_804A50C8, 257, (u32)&lbl_805D616C);
    }
    fn_8005DB98(p4, p5, q1);
    L44:;
}

void fn_800EA01C(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+8));
    fn_8005D64C(v1);
}

void fn_800EA040(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+12));
    fn_8005E08C(v1);
}

void fn_800EA064(u32 p3) {
    fn_8005E08C(p3);
}

void fn_800EA13C(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 c0;
    u32 c1;
    if ((s32)p6 != (s32)0) {
        c0 = fn_8005F3E8();
        M32(p7) = c0;
        return;
    }
    c1 = fn_8005F528();
    M32(p7) = c1;
}

u32 fn_800EA180(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    u32 c1;
    v1 = M32(((u32)p3+16));
    c0 = fn_8005E108(v1);
    if ((s32)c0 != (s32)0) {
        v2 = M32(((u32)p3+16));
        c1 = fn_8005E7D8(v2);
        M32(((u32)p3+16)) = 0;
        v3 = c1;
    } else {
        v3 = 1;
    }
    return v3;
}

void fn_800EA1D0(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+16));
    fn_8005E108(v1);
}

void fn_800EA6B8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+4));
    fn_802339C4(v2);
}

u32 fn_800EC4CC(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 c1;
    u32 c3;
    v1 = lbl_805DD6F0;
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+8));
        if ((u32)v2 == (u32)0) {
            v9 = v1;
        } else {
            if ((u32)v2 != (u32)0) {
                fn_800EBF70(v1);
                v3 = lbl_805DD6F0;
                v4 = M32(((u32)v3+24));
                if ((s32)v4 == (s32)0) {
                    v5 = M32(((u32)v3+28));
                    if ((s32)v5 == (s32)0) goto L33;
                }
                c1 = func_80428F28(10, 4, 0);
                v6 = lbl_805DD6F0;
                M32(v6) = c1;
                v7 = lbl_805DD6F0;
                v8 = M32(v7);
                if ((u32)v8 != (u32)0) {
                    HSD_GObj_AddProc(v8, (u32)fn_800EB108, 0);
                }
    L33:;
                c3 = fn_800EC564();
                v9 = c3;
            } else {
                v9 = v1;
            }
        }
    } else {
        v9 = v1;
    }
    return v9;
}

u32 fn_800EC564(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6F0;
    v2 = M8(((u32)v1+680));
    ((BFu8_0_1*)(((u32)v1+680)))->f = 1;
    return v1;
}

u32 fn_800EC57C(u32 p3) {
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
    v1 = lbl_805DD6F0;
    v2 = M32(((u32)v1+32));
    M32(((u32)v1+32)) = (v2+p3);
    v3 = lbl_805DD630;
    if ((s32)v3 >= (s32)3) {
        v4 = lbl_805DD6F0;
        v5 = M32(((u32)v4+32));
        if ((s32)v5 < (s32)0) {
            c0 = __assert((u32)lbl_804A51F8, 1286, (u32)lbl_804A52E4);
            v6 = c0;
        } else {
            v6 = v4;
        }
    } else {
        v6 = p3;
    }
    if ((s32)p3 > (s32)0) {
        v7 = lbl_805DD6F0;
        v8 = M32(((u32)v7+36));
        M32(((u32)v7+36)) = (v8+p3);
        v9 = v7;
    } else {
        v9 = v6;
    }
    return v9;
}

void fn_800ED384(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    E20_u32* v8;
    u32 v9;
    u32 v10;
    E32_u32* v11;
    u32 v12;
    E44_u32* v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    u32 v18;
    u32 v19;
    E76_u32* v20;
    u32 v21;
    u32 v22;
    E88_u32* v23;
    u32 v24;
    E100_u32* v25;
    u32 v26;
    u32 v27;
    u32 v28;
    u32 v29;
    u32 c0;
    v1 = lbl_805DD6E0;
    v2 = M8(((u32)v1+112));
    if ((s32)((v2>>7)&0x1) != (s32)0) {
        v3 = M8(((u32)v1+56));
        if ((s32)((v3>>7)&0x1) != (s32)0) {
            c0 = HSD_Randi(2);
            if ((s32)c0 != (s32)0) {
                v4 = M8(((u32)v1+56));
                ((BFu8_0_1*)(((u32)v1+56)))->f = 0;
            } else {
                v5 = M8(((u32)v1+112));
                ((BFu8_0_1*)(((u32)v1+112)))->f = 0;
            }
        }
    }
    v6 = M8(((u32)v1+56));
    if ((s32)((v6>>7)&0x1) != (s32)0) {
        v7 = M8(((u32)v1+4));
        v8 = (E20_u32*)(v1);
        v9 = v8->f[v7];
        fn_80252F10(p3, v9);
        v10 = M8(((u32)v1+4));
        v11 = (E32_u32*)(v1);
        v11->f[v10] = p4;
        v12 = M8(((u32)v1+4));
        v13 = (E44_u32*)(v1);
        v13->f[v12] = p5;
        v14 = M8(((u32)v1+4));
        M8(((u32)v1+4)) = (v14+1);
        v15 = M8(((u32)v1+4));
        if ((u32)v15 >= (u32)3) {
            v16 = M8(((u32)v1+56));
            ((BFu8_1_1*)(((u32)v1+56)))->f = 0;
        }
        v17 = M8(((u32)v1+56));
        ((BFu8_0_1*)(((u32)v1+56)))->f = 0;
    } else {
        v18 = M8(((u32)v1+112));
        if ((s32)((v18>>7)&0x1) != (s32)0) {
            v19 = M8(((u32)v1+60));
            v20 = (E76_u32*)(v1);
            v21 = v20->f[v19];
            fn_80252F10(p3, v21);
            v22 = M8(((u32)v1+60));
            v23 = (E88_u32*)(v1);
            v23->f[v22] = p4;
            v24 = M8(((u32)v1+60));
            v25 = (E100_u32*)(v1);
            v25->f[v24] = p5;
            v26 = M8(((u32)v1+60));
            M8(((u32)v1+60)) = (v26+1);
            v27 = M8(((u32)v1+60));
            if ((u32)v27 >= (u32)3) {
                v28 = M8(((u32)v1+112));
                ((BFu8_1_1*)(((u32)v1+112)))->f = 0;
            }
            v29 = M8(((u32)v1+112));
            ((BFu8_0_1*)(((u32)v1+112)))->f = 0;
        }
    }
    fn_80252E74(p3);
}

u32 fn_800ED72C(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6F0;
    if ((u32)v1 != (u32)0) {
        memset((v1+60), 0, 16);
        fn_800ED520();
        fn_800EB374();
        v2 = lbl_805DD6F0;
        v3 = M32(((u32)v2+56));
        if ((s32)(v3&0x1) != (s32)0) {
            M32(((u32)v2+56)) = (v3^1);
            v4 = v3;
        } else {
            v4 = v3;
        }
    } else {
        v4 = v1;
    }
    return v4;
}

void fn_800EDB68(u32 p3) {
    HSD_Free(p3);
}

void fn_800EDCC0(void) {
    u32 v1;
    v1 = lbl_805DD6F8;
    if ((u32)v1 == (u32)0) {
    return;
    }
    HSD_GObj_AddProc(v1, (u32)fn_800EE60C, 0);
}

u32 fn_800EE270(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 c0;
    u32 c1;
    u32 c2;
    u32 c3;
    v1 = M32(p3);
    v2 = M32(v1);
    c0 = fn_8000A0F8(v1);
    v3 = M32(((u32)v2+20));
    if ((u32)c0 >= (u32)v3) {
        v4 = M32(((u32)p3+16));
        v5 = M32(((u32)p3+20));
        if ((u32)v4 >= (u32)v5) {
            v6 = M32(p3);
            v7 = M32(v6);
            v8 = M32(((u32)v7+8));
            v9 = M32(((u32)v7+12));
            c1 = HSD_Randi((v8+v9));
            v10 = M32(((u32)v7+8));
            if ((s32)c1 >= (s32)v10) {
                v11 = M32(p3);
                v12 = M32(v11);
                v13 = M32(v12);
                v14 = M32(((u32)v12+4));
                c2 = HSD_Randi(((v14-v13)+1));
                v15 = M32(v12);
                M32(((u32)p3+20)) = (v15+c2);
                M32(((u32)p3+16)) = 0;
                v16 = (v15+c2);
            } else {
                c3 = fn_800EDCF8(p3);
                v16 = c3;
            }
        } else {
            v16 = v4;
        }
    } else {
        v16 = c0;
    }
    return v16;
}

void fn_800EE4C0(u32 p3) {
    u32 v1;
    A20_4_u32* v2;
    u32 v3;
    v1 = M32(((u32)p3+8));
    v2 = (A20_4_u32*)((u32)lbl_804A5410);
    v3 = v2[v1].f;
    if ((u32)v3 != (u32)0) {
        ((void (*)(u32,u32))(v3))(p3, ((u32)lbl_804A5410+(v1*20)));
    } else {
        fn_800EE660(p3, ((u32)lbl_804A5410+(v1*20)));
    }
}

void fn_800EE60C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+12));
    M32(((u32)v1+12)) = (v2+1);
    v3 = M32(((u32)v1+16));
    M32(((u32)v1+16)) = (v3+1);
    v4 = M32(((u32)v1+4));
    v5 = M32((u32)lbl_804A5604+(v4<<2));
    ((void (*)(u32,u32,u32))(v5))(v1, (u32)lbl_804A5604, v3);
}

u32 fn_800EE6C4(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+16));
    return v1;
}

u32 fn_800EE770(void) {
    u32 v1;
    v1 = lbl_805DD6F8;
    return v1;
}

u32 fn_800EE8C4(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6F8;
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+44));
        v3 = M32(((u32)v2+4));
        if ((s32)v3 == (s32)2) {
            v4 = M32(((u32)v2+8));
            return v4;
        }
    }
    return -1;
}

u32 fn_800EE8F0(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805DD6F8;
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+44));
        v3 = M32(((u32)v2+8));
        return v3;
    }
    return -1;
}

u32 fn_800EE910(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6F8;
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+44));
        v3 = M32(((u32)v2+4));
        if ((s32)v3 == (s32)2) {
            v4 = M32(((u32)v2+16));
            return v4;
        }
    }
    return 0;
}

u32 fn_800EE93C(u32 p3) {
    u32 v1;
    u32 v2;
    E68_u32* v3;
    u32 v4;
    v1 = lbl_805DD6F8;
    if ((u32)v1 != (u32)0) {
        v2 = M32(((u32)v1+44));
        v3 = (E68_u32*)(v2);
        v4 = v3->f[p3];
        return v4;
    }
    return 0;
}

u32 fn_800EE964(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+76));
    if ((u32)v2 != (u32)0) {
        v3 = M32(((u32)v2+4));
        return v3;
    }
    return 0;
}

void fn_800EEA5C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+76));
    if ((u32)v2 != (u32)0) {
        v3 = M32(((u32)v2+4));
        v4 = v3;
    } else {
        v4 = 0;
    }
    if ((s32)v4 == (s32)0) {
    return;
    }
    v5 = M32(((u32)p3+1804));
    HSD_Free(v5);
}

void fn_800EEF04(u32 p3) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_80065A80(3);
    M32(((u32)p3+1812)) = c0;
    v1 = M32(((u32)p3+1812));
    fn_80065B7C(v1, 1);
    v2 = M32(((u32)p3+1812));
    fn_80065DC4(v2, 0);
}

void fn_800EEFB0(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+1812));
    fn_80065AE4(v1);
}

void fn_800EF6B0(void) {
    fn_800793B8();
}

void fn_800EF6D0(u32 p3, u32 p4) {
    u32 v1;
    A320_312_u32* v2;
    u32 v3;
    A320_312_u32* v4;
    u32 c0;
    v1 = M32(((u32)p3+32));
    v2 = (A320_312_u32*)(v1);
    v3 = v2[p4].f;
    c0 = fn_8007AC30(v3);
    v4 = (A320_312_u32*)(v1);
    v4[p4].f = c0;
}

void fn_800EF864(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    v1 = M32(((u32)p3+1816));
    fn_8007A598(p4, p5, v1);
}

u32 fn_800F3F10(u32 p3) {
    u32 v1;
    u32 v2;
    A92_88_u32* v3;
    u32 v4;
    v1 = lbl_805DD714;
    v2 = M32(((u32)v1+4));
    v3 = (A92_88_u32*)(v2);
    v4 = v3[p3].f;
    return (((-(s32)v4)|v4)>>31);
}

u32 fn_800F3F34(u32 p3) {
    u32 v1;
    u32 v2;
    A92_76_s16* v3;
    u32 v4;
    v1 = lbl_805DD714;
    v2 = M32(((u32)v1+4));
    v3 = (A92_76_s16*)(v2);
    v4 = v3[p3].f;
    return v4;
}

u32 fn_800F3F4C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    A92_88_u32* v3;
    u32 v4;
    float v5;
    u32 v6;
    u32 c0;
    v1 = lbl_805DD714;
    v2 = M32(((u32)v1+4));
    v3 = (A92_88_u32*)(v2);
    v4 = v3[p3].f;
    if ((u32)v4 != (u32)0) {
        c0 = fn_80203FAC(v4, p4, v1);
        v6 = c0;
    } else {
        v5 = lbl_805DF7C0;
        MF(((u32)p4+8)) = v5;
        MF(((u32)p4+4)) = v5;
        MF(p4) = v5;
        v6 = v4;
    }
    return v6;
}

void fn_800F43FC(void) {
    lbl_805DD6C0 = 0;
    lbl_805DD6C4 = 0;
}

void fn_800F440C(void) {
    fn_800F8254();
    fn_800F82A0();
}

void fn_800F4430(u32 p3, u32 p4) {
    u32 v1;
    u32 c0;
    v1 = M32(p4);
    c0 = fn_8040BD4C();
    if ((s32)(c0&0x8) != (s32)0) {
    return;
    }
    M32(v1) = 0;
}

u32 fn_800F4ACC(u32 p3) {
    u32 v1;
    u32 v2;
    if ((s32)p3 >= (s32)16) {
        __assert((u32)lbl_804A5824, 334, (u32)lbl_804A596C);
    }
    v1 = lbl_805DD6C4;
    v2 = M32(v1+(p3<<2));
    return v2;
}

void fn_800F4EA0(u32 p3) {
    float v6;
    u32 v5;
    u32 v4;
    u32 v3;
    float v2;
    float v1;
    v1 = lbl_805DF7E4;
    v2 = lbl_805DF7E0;
    v3 = M32(((u32)p3+44));
    v4 = M8(((u32)v3+300));
    ((BFu8_2_1*)(((u32)v3+300)))->f = 0;
    MF(((u32)v3+224)) = v1;
    MF(((u32)v3+228)) = v1;
    MF(((u32)v3+232)) = v2;
    v5 = M32(((u32)v3+236));
    v6 = MF(((u32)v3+164));
    fn_8018C3B4(v5, 0, 2, 0, v6);
    fn_800F9164(v3);
}

void fn_800F5284(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+236));
    fn_8018D850(v2);
    v3 = M32(((u32)v1+236));
    fn_8018CCD0(v3);
    fn_800F5944(p3);
    v4 = M32(((u32)v1+240));
    if ((u32)v4 != (u32)0) {
        ((void (*)(u32))(v4))(p3);
    }
}

void fn_800F52E8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+244));
    if ((u32)v2 != (u32)0) {
        ((void (*)(void))(v2))();
    }
    v3 = M8(((u32)v1+300));
    if ((s32)((v3>>7)&0x1) != (s32)0) {
        fn_800F73FC(v1);
    }
    fn_800F62C4(v1);
}

void fn_800F5340(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+248));
    if ((u32)v2 == (u32)0) {
    return;
    }
    ((void (*)(u32,u32))(v2))(p3, v1);
}

void fn_800F5374(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+252));
    if ((u32)v2 == (u32)0) {
    return;
    }
    ((void (*)(u32,u32))(v2))(p3, v1);
}

void fn_800F53A8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+264));
    if ((u32)v2 != (u32)0) {
        ((void (*)(void))(v2))();
    }
    v3 = M32(((u32)v1+236));
    v4 = MF(((u32)v1+164));
    fn_8018C4E8(v3, 0, 2, 0, v4);
}

void fn_800F53FC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+236));
    fn_8018CF64(v2);
    fn_800F85A0(v1);
    fn_800F85FC(v1);
    fn_800F8658(v1);
    v3 = M32(((u32)v1+236));
    fn_8018D878(v3);
    fn_800F86B4(v1);
}

void fn_800F579C(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, float q1, float q2) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+8));
    fn_800DB9A0((v1+100), (v3+(p4*20)), p4, p5, p6, p7, v1, p6);
}

void fn_800F5944(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+44));
    fn_800F5AC4();
    fn_800F9030(v1);
}

void fn_800F5C68(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+100));
    v3 = M32(v2+(p4<<3));
    fn_8040A64C(v3);
}

void fn_800F5C98(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 == (u32)0) {
    return;
    }
    v4 = M32(((u32)p3+40));
    M32(((u32)v1+184)) = v4;
    v5 = M32(((u32)v2+4));
    v6 = M32(((u32)v1+184));
    v7 = M32(v5);
    v8 = M32(v7);
    fn_800DB7D0(v6, v8, 0, v1, p7);
}

void fn_800F5F3C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    A8_4_u32* v7;
    u32 v8;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v1+260));
    v4 = M32(v3+(p4<<3));
    M32(((u32)v2+184)) = v4;
    v5 = M32(((u32)v1+260));
    v6 = M32(v5+(p4<<3));
    v7 = (A8_4_u32*)(v5);
    v8 = v7[p4].f;
    fn_800DB7D0(v6, v8, 0, v1, (p4<<3));
}

void fn_800F6030(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+100));
    v2 = M32(v1+(p4<<3));
    fn_80056494(v2, p4);
}

void fn_800F605C(u32 p3, u32 p4, float q1) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+100));
    v2 = M32(v1+(p4<<3));
    fn_800550BC(v2, ((1<<16)-1), q1);
}

void fn_800F6274(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+12));
    if ((u32)v2 != (u32)0) {
        v3 = lbl_805DD6CC;
        fn_800D6D88((v3+84), (v3+12), (p3+28), v2, (p3+100));
        return;
    }
    fn_800D6724((p3+28), v1, p5, v2);
}

void fn_800F62C4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+12));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_800D7648((p3+28), v2);
}

void fn_800F62F8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+12));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_800D6A70((p3+28), v2);
}

void fn_800F632C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+12));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_800D7D70((p3+28), p4, v1);
}

void fn_800F6360(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+12));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_800DD70C((p3+28), p4, v1);
}

void fn_800F63F0(u32 p3) {
    fn_800E5F5C((p3+12));
}

void fn_800F6414(u32 p3) {
    fn_800E5F6C((p3+12));
}

void fn_800F6438(u32 p3) {
    fn_800E5798((p3+12));
}

void fn_800F645C(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)p3+104));
    v3 = M32(((u32)v1+4));
    v4 = M32(v3);
    v5 = M32(((u32)v4+8));
    fn_800E6014(v2, v5);
    v6 = M8(((u32)p3+300));
    v7 = M32(((u32)p3+104));
    fn_800E6074((p3+12), p4, p5, v7, ((v6>>4)&0x1));
}

void fn_800F666C(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32(((u32)p3+44));
    c0 = fn_802364E0();
    M32(((u32)v1+268)) = c0;
    M32(((u32)v1+276)) = 0;
    M32(((u32)v1+272)) = 0;
}

void fn_800F66A8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+268));
    fn_8023641C(v2);
    v3 = M32(((u32)v1+268));
    fn_80236778(v3);
}

void fn_800F728C(void) {
    fn_802361A0();
}

void fn_800F72AC(void) {
    fn_8023624C();
}

void fn_800F72CC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 == (u32)0) {
    return;
    }
    v4 = M32(v3);
    v5 = lbl_805DF808;
    fn_800DCAB8(p3, v4, v5);
}

void fn_800F7308(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+4));
    if ((u32)v2 != (u32)0) {
        v3 = M32(v2);
        v4 = M32(p3);
        v5 = M32(v3);
        v6 = M32(((u32)v4+40));
        v7 = M32(((u32)v3+4));
        v8 = M32(((u32)v3+8));
        v9 = M32(((u32)v3+12));
        fn_800D8A60((p3+100), v6, v5, v7, v8, v9);
        return;
    }
    fn_800D8A4C((p3+100), p3);
}

void fn_800F7368(u32 p3) {
    fn_800D8B40((p3+100));
}

void fn_800F738C(u32 p3, float q1) {
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float v8;
    float v9;
    v1 = MF(p3);
    MF(p3) = (v1*q1);
    v2 = MF(((u32)p3+16));
    MF(((u32)p3+16)) = (v2*q1);
    v3 = MF(((u32)p3+32));
    MF(((u32)p3+32)) = (v3*q1);
    v4 = MF(((u32)p3+4));
    MF(((u32)p3+4)) = (v4*q1);
    v5 = MF(((u32)p3+20));
    MF(((u32)p3+20)) = (v5*q1);
    v6 = MF(((u32)p3+36));
    MF(((u32)p3+36)) = (v6*q1);
    v7 = MF(((u32)p3+8));
    MF(((u32)p3+8)) = (v7*q1);
    v8 = MF(((u32)p3+24));
    MF(((u32)p3+24)) = (v8*q1);
    v9 = MF(((u32)p3+40));
    MF(((u32)p3+40)) = (v9*q1);
}

void fn_800F77DC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c1;
    u32 c2;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+20));
    fn_800E9A4C((p3+280), v1);
    if ((u32)v2 != (u32)0) {
        v3 = M32(v2);
        M32(((u32)p3+280)) = v3;
        v4 = M32(((u32)v2+4));
        M32(((u32)p3+284)) = v4;
        v5 = M32(((u32)v2+8));
        c1 = fn_800E9EA8(v5);
        M32(((u32)p3+288)) = c1;
        c2 = fn_800E9F30(1);
        M32(((u32)p3+292)) = c2;
    }
}

void fn_800F784C(u32 p3) {
    fn_800E9A68((p3+280));
}

void fn_800F7870(u32 p3, u32 p4, u32 p5) {
    u32 stk[1];
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    u32 v8;
    u32 v9;
    float v10;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+20));
    v4 = M32(((u32)v3+20));
    if ((u32)v4 != (u32)0) {
        v5 = M32(((u32)v3+12));
        v6 = M32(((u32)v1+292));
        v7 = MF(((u32)v3+16));
        fn_800E9F50(v5, v6, v4, v7);
    } else {
        if ((s32)p4 == (s32)-1) {
            __assert((u32)lbl_804A5B30, 182, (u32)lbl_804A5B40);
        }
        if ((s32)p5 != (s32)0) {
            fn_800F7B48(p3, p4, (u32)((u8*)stk+0));
        } else {
            fn_800D4BF4(p4);
        }
        v8 = M32(((u32)v3+12));
        v9 = M32(((u32)v1+292));
        v10 = MF(((u32)v3+16));
        fn_800E9F50(v8, v9, (u32)((u8*)stk+0), v10);
    }
}

u32 fn_800F7A50(u32 p3, u32 p4) {
    u32 v1;
    v1 = M16(p3);
    return (v1 == 15);
}

u32 fn_800F7A64(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M16(p3);
    if ((u32)v1 != (u32)15) {
        __assert((u32)lbl_804A5B60, 45, (u32)lbl_804A5B6C);
    }
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+4));
    return v3;
}

u32 fn_800F7AB8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M16(p3);
    if ((u32)v1 == (u32)15) {
        v2 = M32(((u32)p3+44));
        v3 = M32(((u32)v2+116));
        return v3;
    }
    return -1;
}

void fn_800F7AD8(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+4));
    if ((u32)v3 == (u32)0) {
        __assert((u32)lbl_804A5B60, 76, (u32)lbl_804A5B90);
    }
    v4 = M32(((u32)p3+40));
    fn_80053F34(v4, 0, p4);
}

void fn_800F7D64(u32 p3, float q1) {
    u32 c0;
    c0 = fn_800D1D3C();
    if ((s32)c0 == (s32)9) {
        fn_8010F400(p3, q1);
    }
}

u32 fn_800F7DB0(u32 p3) {
    u32 v1;
    u32 c0;
    u32 c2;
    u32 c1;
    c0 = fn_800D1D3C();
    if ((s32)c0 != (s32)9) {
        if ((s32)c0 >= (s32)9) goto L18;
        if ((s32)c0 == (s32)2) goto L15;
        goto L18;
    }
    c2 = fn_8010F5A4(p3);
    v1 = c2;
    goto L19;
    L15:;
    c1 = fn_8010E56C(p3);
    v1 = c1;
    goto L19;
    L18:;
    v1 = 0;
    L19:;
    return v1;
}

void fn_800F7E10(void) {
    fn_80102464();
}

void fn_800F7E30(void) {
    fn_800FB4E0();
}

void fn_800F7E50(void) {
    fn_8010D9C0();
}

u32 fn_800F8248(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+236));
    return v2;
}

void fn_800F8254(void) {
    u32 v1;
    v1 = lbl_805DD6C0;
    if ((u32)v1 != (u32)0) {
    return;
    }
    lbLoadArchive(0, (u32)lbl_804A5D00, (u32)&lbl_805DD6C0, (u32)lbl_804A5D20, 0);
}

void fn_800F82A0(void) {
    u32 v1;
    v1 = lbl_805DD6C4;
    if ((u32)v1 != (u32)0) {
    return;
    }
    lbLoadArchive(0, (u32)lbl_804A5D10, (u32)&lbl_805DD6C4, (u32)lbl_804A5D30, 0);
}

void fn_800F82EC(void) {
    u32 stk[1];
    u32 c0;
    c0 = fn_80262784();
    if ((s32)c0 != (s32)0) {
        M32((u8*)stk+0) = 0;
        fn_80072C90(2, (u32)lbl_804A5D10, 4, 4, 0, 1, 8, 16);
    }
}

void fn_800F8344(u32 p3, u32 p4, u32 p5, u32 p6, float q1, float q2) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(v1);
    v3 = M32(((u32)v1+268));
    fn_8018DBA0(v2, v3, p4, p5, p6, v1, p4, q2);
}

void fn_800F857C(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+236));
    fn_8018C2E4(v1);
}

void fn_800F914C(u32 p3, u32 p4) {
    float v1;
    M32(((u32)p3+196)) = p4;
    v1 = lbl_805DF864;
    M32(((u32)p3+200)) = 0;
    MF(((u32)p3+188)) = v1;
}

void fn_800F9164(u32 p3) {
    fn_80068D68((p3+188));
}

void fn_800F91C8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M8(((u32)p3+300));
    ((BFu8_0_1*)(((u32)p3+300)))->f = 1;
    v2 = M8(((u32)p3+300));
    ((BFu8_1_1*)(((u32)p3+300)))->f = 1;
}

void fn_800F91E8(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+300));
    ((BFu8_3_1*)(((u32)p3+300)))->f = 1;
}

void fn_800F91FC(u32 p3) {
    u32 v1;
    v1 = M8(((u32)p3+300));
    ((BFu8_3_1*)(((u32)p3+300)))->f = 1;
}

void fn_800F92A0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    float v13;
    float v14;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+100));
    v4 = M32(v2);
    v5 = M32(v4);
    v6 = M32(v3+(v5<<3));
    c0 = fn_800D79C0((v1+28), v6, 0, v2);
    M32(((u32)v1+304)) = c0;
    v7 = M32(v1);
    v8 = M32(((u32)v1+304));
    M32(((u32)v8+312)) = v7;
    v9 = M32(((u32)v4+4));
    if ((s32)v9 != (s32)-1) {
        fn_800F75B4(v1, v9);
    }
    v10 = M32(((u32)v1+8));
    v11 = M32(((u32)v10+20));
    if ((u32)v11 != (u32)0) {
        v12 = M32(v4);
        fn_800F7930(p3, v12);
    }
    v13 = lbl_805DF868;
    v14 = lbl_805DF86C;
    fn_800F5548(v1, 0, 0, -1, 0, v13, v14, v13);
}

void fn_800F93F4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    float v13;
    float v14;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+100));
    v4 = M32(v2);
    v5 = M32(v4);
    v6 = M32(v3+(v5<<3));
    c0 = fn_800D79C0((v1+28), v6, 0, v2);
    M32(((u32)v1+304)) = c0;
    v7 = M32(v1);
    v8 = M32(((u32)v1+304));
    M32(((u32)v8+312)) = v7;
    v9 = M32(((u32)v4+4));
    if ((s32)v9 != (s32)-1) {
        fn_800F75B4(v1, v9);
    }
    v10 = M32(((u32)v1+8));
    v11 = M32(((u32)v10+20));
    if ((u32)v11 != (u32)0) {
        v12 = M32(v4);
        fn_800F7930(p3, v12);
    }
    v13 = lbl_805DF870;
    v14 = lbl_805DF874;
    fn_800F5548(v1, 0, 0, -1, 0, v13, v14, v13);
}

void fn_800F94B8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+300));
    v3 = M32(((u32)v1+8));
    v4 = M32(v3);
    if ((s32)((v2>>7)&0x1) != (s32)0) {
        v5 = M32(((u32)v4+4));
        if ((s32)v5 != (s32)-1) {
            fn_800F75B4(v1, v5);
        }
    }
    v6 = M32(((u32)v1+8));
    v7 = M32(((u32)v6+20));
    if ((u32)v7 == (u32)0) {
    return;
    }
    v8 = M32(v4);
    fn_800F7930(p3, v8);
}

void fn_800F95C8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    float v13;
    float v14;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+100));
    v4 = M32(v2);
    v5 = M32(v4);
    v6 = M32(v3+(v5<<3));
    c0 = fn_800D79C0((v1+28), v6, 0, v2);
    M32(((u32)v1+304)) = c0;
    v7 = M32(v1);
    v8 = M32(((u32)v1+304));
    M32(((u32)v8+312)) = v7;
    v9 = M32(((u32)v4+4));
    if ((s32)v9 != (s32)-1) {
        fn_800F75B4(v1, v9);
    }
    v10 = M32(((u32)v1+8));
    v11 = M32(((u32)v10+20));
    if ((u32)v11 != (u32)0) {
        v12 = M32(v4);
        fn_800F7930(p3, v12);
    }
    v13 = lbl_805DF878;
    v14 = lbl_805DF87C;
    fn_800F5548(v1, 0, 0, -1, 0, v13, v14, v13);
}

void fn_800F968C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+300));
    v3 = M32(((u32)v1+8));
    v4 = M32(v3);
    if ((s32)((v2>>7)&0x1) != (s32)0) {
        v5 = M32(((u32)v4+4));
        if ((s32)v5 != (s32)-1) {
            fn_800F75B4(v1, v5);
        }
    }
    v6 = M32(((u32)v1+8));
    v7 = M32(((u32)v6+20));
    if ((u32)v7 == (u32)0) {
    return;
    }
    v8 = M32(v4);
    fn_800F7930(p3, v8);
}

void fn_800F979C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    float v13;
    float v14;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+100));
    v4 = M32(v2);
    v5 = M32(v4);
    v6 = M32(v3+(v5<<3));
    c0 = fn_800D79C0((v1+28), v6, 0, v2);
    M32(((u32)v1+304)) = c0;
    v7 = M32(v1);
    v8 = M32(((u32)v1+304));
    M32(((u32)v8+312)) = v7;
    v9 = M32(((u32)v4+4));
    if ((s32)v9 != (s32)-1) {
        fn_800F75B4(v1, v9);
    }
    v10 = M32(((u32)v1+8));
    v11 = M32(((u32)v10+20));
    if ((u32)v11 != (u32)0) {
        v12 = M32(v4);
        fn_800F7930(p3, v12);
    }
    v13 = lbl_805DF880;
    v14 = lbl_805DF884;
    fn_800F5548(v1, 0, 0, -1, 0, v13, v14, v13);
}

void fn_800F9860(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+300));
    v3 = M32(((u32)v1+8));
    v4 = M32(v3);
    if ((s32)((v2>>7)&0x1) != (s32)0) {
        v5 = M32(((u32)v4+4));
        if ((s32)v5 != (s32)-1) {
            fn_800F75B4(v1, v5);
        }
    }
    v6 = M32(((u32)v1+8));
    v7 = M32(((u32)v6+20));
    if ((u32)v7 == (u32)0) {
    return;
    }
    v8 = M32(v4);
    fn_800F7930(p3, v8);
}

void fn_800F9970(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    float v12;
    float v13;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+100));
    v4 = M32(v2);
    v5 = M32(v4);
    v6 = M32(v3+(v5<<3));
    c0 = fn_800D7A40((v1+28), v6, 10, 0, v2);
    M32(((u32)v1+304)) = c0;
    v7 = M32(v1);
    v8 = M32(((u32)v1+304));
    M32(((u32)v8+312)) = v7;
    v9 = M32(((u32)v1+8));
    v10 = M32(((u32)v9+20));
    if ((u32)v10 != (u32)0) {
        v11 = M32(v4);
        fn_800F7930(p3, v11);
    }
    v12 = lbl_805DF888;
    v13 = lbl_805DF88C;
    fn_800F5548(v1, 0, 0, -1, 0, v12, v13, v12);
}

void fn_800F9A24(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+20));
    v4 = M32(v2);
    if ((u32)v3 == (u32)0) {
    return;
    }
    v5 = M32(v4);
    fn_800F7930(p3, v5);
}

void fn_800F9AF0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    float v12;
    float v13;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+100));
    v4 = M32(v2);
    v5 = M32(v4);
    v6 = M32(v3+(v5<<3));
    c0 = fn_800D7A40((v1+28), v6, 10, 0, v2);
    M32(((u32)v1+304)) = c0;
    v7 = M32(v1);
    v8 = M32(((u32)v1+304));
    M32(((u32)v8+312)) = v7;
    v9 = M32(((u32)v1+8));
    v10 = M32(((u32)v9+20));
    if ((u32)v10 != (u32)0) {
        v11 = M32(v4);
        fn_800F7930(p3, v11);
    }
    v12 = lbl_805DF890;
    v13 = lbl_805DF894;
    fn_800F5548(v1, 0, 0, -1, 0, v12, v13, v12);
}

void fn_800F9BA4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+20));
    v4 = M32(v2);
    if ((u32)v3 == (u32)0) {
    return;
    }
    v5 = M32(v4);
    fn_800F7930(p3, v5);
}

void fn_800F9C70(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    v1 = lbl_805DF898;
    v2 = lbl_805DF89C;
    v3 = M32(((u32)p3+44));
    fn_800F5548(v3, 0, 0, -1, 0, v1, v2, v1);
}

void fn_800F9D40(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    v1 = lbl_805DF8A0;
    v2 = lbl_805DF8A4;
    v3 = M32(((u32)p3+44));
    fn_800F5548(v3, 0, 0, -1, 0, v1, v2, v1);
}

void fn_800F9D80(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(16);
    fn_800F9DB8(c0, p3);
}

void fn_800F9F30(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF8A8;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    v5 = M32(v4);
    fn_800F5548(v2, 0, -1, v5, 0, v1, v1, v1);
}

void fn_800FA2A0(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(17);
    fn_800FA2D8(c0, p3);
}

void fn_800FA378(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF8B8;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    v5 = M32(v4);
    fn_800F5548(v2, 0, -1, v5, 0, v1, v1, v1);
}

u32 fn_800FA594(u32 p3) {
    u32 v1;
    u32 v2;
    A320_312_u32* v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_312_u32*)(v2);
    v4 = v3[p3].f;
    if ((u32)v4 != (u32)0) {
        v5 = M32(((u32)v4+44));
        v6 = M32(((u32)v5+4));
        if ((s32)v6 != (s32)17) {
            __assert((u32)lbl_804A5F64, 263, (u32)lbl_804A5F78);
        }
        v7 = M32(((u32)v5+8));
        v8 = M32(v7);
        v9 = M32(((u32)v8+12));
        return v9;
    }
    return -1;
}

void fn_800FA610(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(18);
    fn_800FA648(c0, p3);
}

void fn_800FA6C0(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF8C0;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    v5 = M32(v4);
    fn_800F5548(v2, 0, -1, v5, 0, v1, v1, v1);
}

void fn_800FA708(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(19);
    fn_800FA740(c0, p3);
}

void fn_800FA8C8(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF8C8;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    v5 = M32(v4);
    fn_800F5548(v2, 0, -1, v5, 0, v1, v1, v1);
}

u32 fn_800FA910(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+388));
    ((BFu8_0_1*)(((u32)v1+388)))->f = 0;
    return v1;
}

void fn_800FA928(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    A320_312_u32* v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+116));
    v3 = (A320_312_u32*)(v2);
    v4 = v3[p4].f;
    if ((u32)v4 == (u32)0) {
    return;
    }
    v5 = M32(((u32)v4+44));
    v6 = M8(((u32)v5+388));
    ((BFu8_0_1*)(((u32)v5+388)))->f = 1;
    v7 = M32(((u32)v5+8));
    v8 = M32(((u32)v7+20));
    if ((u32)v8 == (u32)0) {
    return;
    }
    fn_800FA98C(v5, p3, v7);
}

u32 fn_800FAA88(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+388));
    return ((v2>>7)&0x1);
}

void fn_800FAA98(u32 p3, u32 p4, u32 p5, float q1) {
    u32 c0;
    c0 = fn_800F48CC(20);
    fn_800FAAE0(c0, p5, q1);
}

void fn_800FABE8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    float v7;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+284));
    v3 = M32(((u32)v1+8));
    v4 = M32(v3);
    if ((s32)v2 > (s32)0) {
        fn_800EA084((v1+280), 0);
    }
    v5 = lbl_805DF8D4;
    v6 = M32(((u32)v4+12));
    v7 = lbl_805DF8D8;
    fn_800F5548(v1, 0, v6, -1, 0, v5, v7, v5);
}

float fn_800FAC5C(u32 p3) {
    float v1;
    if ((s32)p3 == (s32)0) {
        __assert((u32)&lbl_805D6224, 171, (u32)&lbl_805D622C);
    }
    v1 = MF(((u32)p3+12));
    return v1;
}

void fn_800FB378(u32 p3) {
    u32 c0;
    c0 = fn_800F446C(20);
    fn_800FB3B0(c0, p3);
}

void fn_800FB44C(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF8D4;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    v5 = M32(v4);
    fn_800F5548(v2, 1, -1, v5, 0, v1, v1, v1);
}

void fn_800FB494(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF8D4;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    MF(((u32)v2+308)) = v1;
    v5 = M32(v4);
    fn_800F5548(v2, 2, -1, v5, 0, v1, v1, v1);
}

void fn_800FB5D0(u32 p3, u32 p4, u32 p5) {
    u32 c0;
    c0 = fn_800F446C(41);
    fn_800FB618(c0, p3, p5);
}

void fn_800FB79C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    u32 v8;
    u32 v9;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(v2);
    v4 = M32(v3);
    v5 = M32(((u32)v4+24));
    M32(((u32)v1+320)) = v5;
    v6 = M32(((u32)v1+304));
    fn_800D7AD0(v6, 0);
    v7 = lbl_805DF8E4;
    v8 = M32(((u32)v3+12));
    v9 = M32(((u32)v3+8));
    fn_800F5548(v1, 0, v8, v9, 0, v7, v7, v7);
}

void fn_800FBF60(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(42);
    fn_800FBF98(c0, p3);
}

void fn_800FC078(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    HSD_Free(v2);
}

void fn_800FC0A0(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF8E4;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    v5 = M32(v4);
    M32(((u32)v2+308)) = v5;
    fn_800F5548(v2, 0, -1, -1, 0, v1, v1, v1);
}

void fn_800FC2D0(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(21);
    fn_800FC308(c0, p3);
}

u32 fn_800FC43C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+316));
    if ((s32)v2 <= (s32)0) {
    return v2;
    }
    M32(((u32)v1+316)) = (v2-1);
    return v2;
}

u32 fn_800FC458(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+316));
    if ((s32)v2 <= (s32)0) {
    return v2;
    }
    M32(((u32)v1+316)) = (v2-1);
    return v2;
}

void fn_800FC848(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(43);
    fn_800FC880(c0, p3);
}

u32 fn_800FCD0C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+116));
    if ((s32)v2 != (s32)1) {
        if ((s32)v2 < (s32)1) {
            if ((s32)v2 >= (s32)0) goto L10;
            goto L12;
        }
        if ((s32)v2 >= (s32)3) goto L12;
    L10:;
        return 1;
    }
    L12:;
    return 0;
}

void fn_800FCD44(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(44);
    fn_800FCD7C(c0, p3);
}

void fn_800FCE94(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    HSD_Free(v2);
}

void fn_800FDF6C(u32 p3) {
    u32 c0;
    c0 = fn_800F446C(45);
    fn_800FDFA4(c0, p3);
}

void fn_800FE18C(u32 p3) {
    float v1;
    u32 v2;
    v1 = lbl_805DF918;
    v2 = M32(((u32)p3+44));
    fn_800F5548(v2, 0, -1, -1, 0, v1, v1, v1);
}

void fn_800FE1CC(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+336));
    if ((s32)v2 < (s32)600) {
        M32(((u32)v1+336)) = (v2+1);
    }
    fn_800FE204(p3, v2, v1);
}

void fn_800FE5D4(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(46);
    fn_800FE60C(c0, p3);
}

void fn_800FE698(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    float v4;
    v1 = M32(((u32)p3+44));
    M32(((u32)v1+304)) = 0;
    v2 = M32(((u32)v1+284));
    if ((s32)v2 > (s32)0) {
        fn_800EA180((v1+280));
    }
    v3 = lbl_805DF920;
    v4 = lbl_805DF924;
    fn_800F5548(v1, 0, -1, -1, 0, v3, v4, v3);
}

void fn_800FE700(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32(((u32)p3+44));
    M32(((u32)v1+304)) = 0;
    v2 = MF(&lbl_805DC8BC[0]);
    MF(((u32)v1+308)) = v2;
}

u32 fn_800FE9FC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    float v5;
    u32 v6;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    if ((u32)v2 == (u32)p4) {
        v3 = lbl_805DF920;
        v4 = M32(v1);
        v5 = lbl_805DF924;
        v6 = M32(((u32)v4+44));
        fn_800F5548(v6, 1, -1, -1, 0, v3, v5, v3);
        return 1;
    }
    return 0;
}

void fn_800FEA5C(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(v2);
    v4 = M32(((u32)v3+4));
    fn_800D4BF4(v4);
    v5 = M32(((u32)v3+4));
    fn_800D4CA0(v5, p5);
    v6 = M32(((u32)v3+4));
    fn_800D4D58(v6, p6);
}

void fn_800FEAC4(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    if ((u32)v2 != (u32)p4) {
        __assert((u32)lbl_804A63D0, 356, (u32)lbl_804A63FC);
    }
    M32(((u32)v1+304)) = p5;
}

void fn_800FEB20(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(47);
    fn_800FEB58(c0, p3);
}

void fn_800FEC34(u32 p3) {
    float v1;
    u32 v2;
    v1 = lbl_805DF920;
    v2 = M32(((u32)p3+44));
    fn_800F5548(v2, 0, -1, -1, 0, v1, v1, v1);
}

void fn_800FED20(u32 p3, u32 p4) {
    fn_800F446C(48);
    fn_800FED48();
}

void fn_800FED48(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(v2);
    M32(((u32)v1+304)) = 0;
    M32(((u32)v1+308)) = 0;
    M32(((u32)v1+312)) = 0;
    M32(((u32)v1+316)) = 0;
    M32(((u32)v1+320)) = 0;
    M32(((u32)v1+324)) = 0;
    M32(((u32)v1+328)) = 0;
    M32(((u32)v1+332)) = 0;
    M32(((u32)v1+336)) = 0;
    M32(((u32)v1+340)) = 0;
    M32(((u32)v1+344)) = 0;
    M32(((u32)v1+348)) = 0;
    M32(((u32)v1+352)) = 0;
    M32(((u32)v1+356)) = 0;
    M32(((u32)v1+360)) = 0;
    M32(((u32)v1+364)) = 0;
    M32(((u32)v1+368)) = 0;
    M32(((u32)v1+372)) = 0;
    M32(((u32)v1+376)) = 0;
    M32(((u32)v1+380)) = 0;
    M32(((u32)v1+384)) = 0;
    M32(((u32)v1+388)) = 0;
    M32(((u32)v1+392)) = 0;
    v4 = M32(((u32)v1+8));
    v5 = M32(((u32)v4+20));
    if ((u32)v5 != (u32)0) {
        v6 = M32(((u32)v3+4));
        fn_800F7870(p3, v6, 0);
    }
    fn_800FEE00(p3);
}

void fn_800FEE00(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    v1 = lbl_805DF928;
    v2 = lbl_805DF92C;
    v3 = M32(((u32)p3+44));
    fn_800F5548(v3, 0, -1, -1, 0, v1, v2, v1);
}

void fn_800FF3E4(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(v2);
    v4 = M32(((u32)v3+4));
    fn_800D4BF4(v4);
    v5 = M32(((u32)v3+4));
    fn_800D4CA0(v5, p5);
    v6 = M32(((u32)v3+4));
    fn_800D4D58(v6, p6);
}

u32 fn_800FF44C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+8));
    v5 = M32(((u32)v3+36));
    v6 = M32(v4);
    v7 = M32(((u32)v5+12));
    v8 = M32(((u32)v6+16));
    v9 = M32(v7);
    v10 = M32(v9+(v8<<2));
    M32(p4) = v10;
    return v9;
}

void fn_800FF50C(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(49);
    fn_800FF544(c0, p3);
}

void fn_800FF584(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF930;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    v5 = M32(((u32)v4+4));
    fn_800F5548(v2, 2, -1, v5, 0, v1, v1, v1);
}

void fn_800FFD04(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(50);
    fn_800FFD3C(c0, p3);
}

void fn_800FFF44(u32 p3) {
    float v1;
    u32 v2;
    v1 = lbl_805DF930;
    v2 = M32(((u32)p3+44));
    fn_800F5548(v2, 0, -1, -1, 0, v1, v1, v1);
}

void fn_80100224(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(51);
    fn_8010025C(c0, p3);
}

void fn_80100510(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    float v7;
    u32 v8;
    u32 v9;
    u32 v10;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    M32(((u32)v1+304)) = (v2-1);
    v3 = M32(((u32)v1+304));
    if ((s32)v3 > (s32)0) {
    return;
    }
    v4 = M32(((u32)p3+44));
    v5 = lbl_805DF938;
    v6 = M32(((u32)v4+8));
    v7 = lbl_805DF93C;
    v8 = M32(v6);
    v9 = M32(((u32)v8+12));
    v10 = M32(v8);
    fn_800F5548(v4, 3, v9, v10, 0, v5, v7, v5);
}

void fn_801007FC(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(52);
    fn_80100834(c0, p3);
}

void fn_80100834(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    float v13;
    u32 v14;
    float v15;
    u32 v16;
    u32 v17;
    u32 v18;
    u32 v19;
    u32 v20;
    u32 v21;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)p4+44));
    v3 = M32(((u32)v1+8));
    v4 = lbl_805DD6CC;
    v5 = M32(v3);
    v6 = M32(((u32)v2+260));
    v7 = M32(((u32)v5+4));
    v8 = M32(v6+(v7<<3));
    c0 = fn_800D7954((v4+84), v8, v3);
    M32(((u32)v1+304)) = c0;
    v9 = M32(((u32)v5+8));
    v10 = M32(((u32)v2+260));
    v11 = M32(v10+(v9<<3));
    M32(((u32)v1+308)) = v11;
    v12 = M32(((u32)v1+308));
    if ((u32)v12 == (u32)0) {
        __assert((u32)&lbl_805D62A0, 1021, (u32)&lbl_805D62A8);
    }
    v13 = MF(((u32)v12+60));
    MF(((u32)v1+324)) = v13;
    v14 = M32(((u32)v5+24));
    v15 = MF(((u32)v5+20));
    MF(((u32)v1+320)) = (v15/((float)(s32)v14));
    M32(((u32)v1+312)) = 0;
    M32(((u32)v1+316)) = 0;
    v16 = M8(((u32)v1+328));
    ((BFu8_0_1*)(((u32)v1+328)))->f = 0;
    v17 = M8(((u32)v1+328));
    ((BFu8_1_1*)(((u32)v1+328)))->f = 1;
    v18 = M8(((u32)v1+328));
    ((BFu8_2_1*)(((u32)v1+328)))->f = 1;
    v19 = M32(((u32)v1+8));
    v20 = M32(((u32)v19+20));
    if ((u32)v20 != (u32)0) {
        v21 = M32(v5);
        fn_800F7870(p3, v21, 0);
    }
    fn_80100964(p3);
}

void fn_80100A80(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+328));
    if ((s32)((v2>>7)&0x1) == (s32)0) {
    return;
    }
    v3 = M32(((u32)v1+316));
    M32(((u32)v1+316)) = (v3-1);
    v4 = M32(((u32)v1+316));
    if ((s32)v4 > (s32)0) {
    return;
    }
    v5 = M32(((u32)p3+44));
    v6 = lbl_805DF948;
    v7 = M32(((u32)v5+8));
    v8 = lbl_805DF94C;
    v9 = M32(v7);
    v10 = M32(((u32)v9+28));
    M32(((u32)v5+312)) = v10;
    v11 = M32(((u32)v9+12));
    v12 = M32(v9);
    fn_800F5548(v5, 1, v11, v12, 0, v6, v8, v6);
}

void fn_80100FB4(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(53);
    fn_80100FEC(c0, p3);
}

void fn_80101108(u32 p3) {
    float v1;
    u32 v2;
    v1 = lbl_805DF948;
    v2 = M32(((u32)p3+44));
    fn_800F5548(v2, 0, -1, -1, 0, v1, v1, v1);
}

void fn_801012C8(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(39);
    fn_80101300(c0, p3);
}

void fn_801013C8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    float v12;
    u32 v13;
    u32 v14;
    float v15;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(v3);
    v5 = M32(((u32)v4+40));
    if ((s32)v5 != (s32)0) {
        v6 = M32(v4);
        v7 = M32(((u32)v2+260));
        v8 = M32(v7+(v6<<3));
        fn_8040C174(v8, 16, v2);
    }
    v9 = M32(((u32)v1+304));
    fn_800D7AD0(v9, 1);
    v10 = M32(((u32)v1+236));
    fn_8018CB28(v10);
    v11 = M32(((u32)v1+284));
    if ((s32)v11 > (s32)0) {
        fn_800EA084((v1+280), 1);
    }
    v12 = lbl_805DF950;
    v13 = M32(((u32)v4+20));
    v14 = M32(v4);
    v15 = lbl_805DF954;
    fn_800F5548(v1, 3, v13, v14, 0, v12, v15, v12);
    M32(((u32)v1+256)) = (u32)fn_801016B8;
}

void fn_80101484(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+308));
    M32(((u32)v1+308)) = (v2-1);
    v3 = M32(((u32)v1+308));
    if ((s32)v3 > (s32)5) {
    return;
    }
    v4 = M32(((u32)p3+44));
    v5 = lbl_805DF950;
    v6 = M32(((u32)v4+8));
    v7 = M32(v6);
    M32(((u32)v4+308)) = 5;
    v8 = M32(((u32)v7+20));
    v9 = M32(v7);
    fn_800F5548(v4, 2, v8, v9, 0, v5, v5, v5);
    M32(((u32)v4+256)) = (u32)fn_801016B8;
}

void fn_80101508(u32 p3) {
    float v18;
    u32 v17;
    u32 v16;
    float v15;
    u32 v14;
    u32 v13;
    u32 v12;
    u32 v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    u32 v2;
    u32 v1;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+308));
    M32(((u32)v1+308)) = (v2-1);
    v3 = M32(((u32)v1+308));
    if ((s32)v3 <= (s32)0) {
        v4 = M32(((u32)p3+44));
        v5 = lbl_805DD6CC;
        v6 = M32(((u32)v4+8));
        v7 = M32(v6);
        v8 = M32(((u32)v7+40));
        if ((s32)v8 != (s32)0) {
            v9 = M32(v7);
            v10 = M32(((u32)v5+260));
            v11 = M32(v10+(v9<<3));
            fn_8040C174(v11, 16, v5);
        }
        v12 = M32(((u32)v4+304));
        fn_800D7AD0(v12, 1);
        v13 = M32(((u32)v4+236));
        fn_8018CB28(v13);
        v14 = M32(((u32)v4+284));
        if ((s32)v14 > (s32)0) {
            fn_800EA084((v4+280), 1);
        }
        v15 = lbl_805DF950;
        v16 = M32(((u32)v7+20));
        v17 = M32(v7);
        v18 = lbl_805DF954;
        fn_800F5548(v4, 3, v16, v17, 0, v15, v18, v15);
        M32(((u32)v4+256)) = (u32)fn_801016B8;
    }
}

u32 fn_8010181C(u32 p3, u32 p4, u32 p5) {
    u32 c0;
    c0 = fn_800F48CC(40);
    fn_8010186C(c0, p3, p5);
    return c0;
}

void fn_801018F8(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    u32 v11;
    float v12;
    u32 v13;
    u32 v14;
    float v15;
    u32 v16;
    u32 v17;
    u32 v18;
    float v19;
    u32 v20;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+308));
    v4 = M32(v2);
    fn_800D7AD0(v3, 0);
    v5 = M32(v4);
    v6 = M32(((u32)v1+100));
    v7 = M32(v6+(v5<<3));
    fn_8040BE00(v7, 16);
    v8 = M32(((u32)v1+236));
    fn_8018CB04(v8);
    v9 = M32(((u32)v4+40));
    v10 = lbl_805DF958;
    v11 = M32(((u32)v9+12));
    v12 = MF(((u32)v9+16));
    fn_800F8854(p3, p5, v11, v9, v10, v12);
    v13 = M32(((u32)v4+72));
    M32(((u32)v1+320)) = v13;
    M32(((u32)v1+304)) = p4;
    v14 = M32(((u32)v4+40));
    v15 = MF(v14);
    MF(((u32)v1+312)) = v15;
    M32(((u32)v1+316)) = 0;
    M32(((u32)v1+332)) = 0;
    M32(((u32)v1+328)) = 0;
    M32(((u32)v1+340)) = 0;
    M32(((u32)v1+336)) = 0;
    M32(((u32)v1+348)) = 0;
    M32(((u32)v1+344)) = 0;
    v16 = M32(((u32)v1+8));
    v17 = M32(((u32)v16+20));
    if ((u32)v17 != (u32)0) {
        v18 = M32(v4);
        fn_800F7870(p3, v18, 1);
    }
    v19 = lbl_805DF95C;
    v20 = M32(((u32)v4+12));
    fn_800F5548(v1, 0, v20, -1, 0, v19, v19, v19);
}

void fn_80101A00(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    float d0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+308));
    v4 = M32(v2);
    v5 = M32(v3);
    d0 = fn_800F6134(v5, (u32)fn_80101AF4, v2);
    v6 = lbl_805DF95C;
    v7 = M32(((u32)v4+24));
    v8 = lbl_805DF960;
    fn_800F5548(v1, 3, v7, -1, 4, v6, v8, v6);
    v9 = M32(((u32)v4+40));
    v10 = M32(((u32)v9+8));
    v11 = M32(((u32)v4+16));
    v12 = M32(((u32)v4+4));
    fn_800F579C(p3, v11, v12, 1, 0, ((float)(s32)v10), d0);
    v13 = M32(((u32)v4+4));
    fn_800F5C68(p3, v13);
    fn_801023E8(p3);
    M32(((u32)v1+256)) = (u32)fn_8010203C;
}

float fn_80101AF4(u32 p3) {
    float v1;
    if ((s32)p3 == (s32)0) {
        __assert((u32)&lbl_805D62B8, 149, (u32)&lbl_805D62C0);
    }
    v1 = MF(((u32)p3+4));
    return v1;
}

void fn_80101B34(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    float v8;
    u32 v9;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+236));
    v4 = M32(v2);
    fn_8018CB04(v3, v2);
    v5 = M32(((u32)v1+284));
    if ((s32)v5 > (s32)3) {
        fn_800EA084((v1+280), 3);
    }
    v6 = M32(((u32)v4+68));
    v7 = lbl_805DF95C;
    M32(((u32)v1+320)) = v6;
    v8 = lbl_805DF960;
    v9 = M32(((u32)v4+28));
    fn_800F5548(v1, 5, v9, -1, 0, v7, v8, v7);
    fn_801023E8(p3);
}

u32 fn_80101BCC(u32 p3) {
    u32 v15;
    float v14;
    u32 v13;
    float v12;
    u32 v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    u32 v2;
    u32 v1;
    u32 c4;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+320));
    if ((s32)v2 > (s32)0) {
        M32(((u32)v1+320)) = (v2-1);
        v3 = M32(((u32)v1+320));
        if ((s32)v3 <= (s32)0) {
            v4 = M32(((u32)p3+44));
            v5 = M32(((u32)v4+8));
            v6 = M32(((u32)v4+308));
            v7 = M32(v5);
            fn_800D7AD0(v6, 1);
            v8 = M32(v7);
            v9 = M32(((u32)v4+100));
            v10 = M32(v9+(v8<<3));
            fn_8040C174(v10, 16);
            M32(((u32)v4+320)) = 0;
            v11 = M32(((u32)v4+284));
            if ((s32)v11 > (s32)0) {
                fn_800EA084((v4+280), 0);
            }
            v12 = lbl_805DF95C;
            v13 = M32(((u32)v7+12));
            v14 = lbl_805DF960;
            fn_800F5548(v4, 1, v13, -1, 0, v12, v14, v12);
            c4 = fn_801023E8(p3);
            v15 = c4;
        } else {
            v15 = v2;
        }
    } else {
        v15 = v2;
    }
    return v15;
}

void fn_80101CA4(u32 p3) {
    u32 v18;
    float v17;
    float v16;
    u32 v15;
    u32 v14;
    float v13;
    u32 v12;
    float v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    u32 v2;
    u32 v1;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+100));
    v4 = M32(v2);
    v5 = M32(v4);
    v6 = M32(v3+(v5<<3));
    c0 = fn_800547E0(v6, v3);
    if ((s32)c0 == (s32)0) {
        v7 = M32(((u32)p3+44));
        v8 = M32(((u32)v7+8));
        v9 = M32(((u32)v7+236));
        v10 = M32(v8);
        fn_8018CB28(v9, v8);
        v11 = lbl_805DF95C;
        v12 = M32(((u32)v10+24));
        v13 = lbl_805DF960;
        fn_800F5548(v7, 2, v12, -1, 0, v11, v13, v11);
        v14 = M32(((u32)v10+16));
        v15 = M32(((u32)v10+4));
        v16 = lbl_805DF960;
        v17 = lbl_805DF95C;
        fn_800F579C(p3, v14, v15, 1, 0, v16, v17);
        v18 = M32(((u32)v10+4));
        fn_800F5C68(p3, v18);
        fn_801023E8(p3);
        M32(((u32)v7+256)) = (u32)fn_8010203C;
    }
}

void fn_80101D7C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+320));
    if ((s32)v2 <= (s32)0) {
    return;
    }
    M32(((u32)v1+320)) = (v2-1);
    v3 = M32(((u32)v1+320));
    if ((s32)v3 > (s32)0) {
    return;
    }
    v4 = M32(((u32)v1+236));
    fn_8018CB28(v4, v1);
}

void fn_80101DC4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+320));
    if ((s32)v2 <= (s32)0) {
    return;
    }
    M32(((u32)v1+320)) = (v2-1);
    v3 = M32(((u32)v1+320));
    if ((s32)v3 > (s32)0) {
    return;
    }
    v4 = M32(((u32)v1+236));
    fn_8018CB28(v4, v1);
}

u32 fn_80102034(void) {
    return 0;
}

void fn_8010250C(u32 p3) {
    u32 c0;
    c0 = fn_800F446C(22);
    fn_80102544(c0, p3);
}

u32 fn_80102674(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+344));
    if ((s32)v2 <= (s32)0) {
    return v2;
    }
    M32(((u32)v1+344)) = (v2-1);
    return v2;
}

void fn_80102C40(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(54);
    fn_80102C78(c0, p3);
}

void fn_80102C78(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    u32 v18;
    u32 v19;
    u32 v20;
    u32 c0;
    u32 c1;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)p4+44));
    v3 = M32(((u32)v1+8));
    v4 = lbl_805DD6CC;
    v5 = M32(v3);
    v6 = M32(((u32)v2+260));
    v7 = M32(v5);
    v8 = M32(v6+(v7<<3));
    c0 = fn_800D7954((v4+84), v8, v3);
    M32(((u32)v1+304)) = c0;
    v9 = M32(v1);
    v10 = M32(((u32)v1+304));
    M32(((u32)v10+144)) = v9;
    v11 = M32(((u32)v5+20));
    if ((s32)v11 != (s32)-1) {
        v12 = M32(((u32)v2+260));
        v13 = lbl_805DD6CC;
        v14 = M32(v12+(v11<<3));
        c1 = fn_800D79C0((v13+84), v14, 0, v13);
        v15 = M32(((u32)c1+312));
        if ((u32)v15 == (u32)0) {
            __assert((u32)lbl_804A69E4, 80, (u32)lbl_804A69F8);
        }
        v16 = M32(((u32)c1+312));
        M32(((u32)v1+308)) = v16;
    } else {
        M32(((u32)v1+308)) = 0;
    }
    v17 = M8(((u32)v1+312));
    ((BFu8_0_1*)(((u32)v1+312)))->f = 0;
    v18 = M32(((u32)v1+8));
    v19 = M32(((u32)v18+20));
    if ((u32)v19 != (u32)0) {
        v20 = M32(v5);
        fn_800F7870(p3, v20, 0);
    }
    fn_80102D90(p3);
}

void fn_80102D90(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    u32 v7;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+284));
    v3 = M32(((u32)v1+8));
    v4 = M32(v3);
    if ((s32)v2 > (s32)0) {
        fn_800EA180((v1+280));
    }
    v5 = lbl_805DF990;
    v6 = M32(((u32)v4+4));
    v7 = M32(v4);
    fn_800F5548(v1, 0, v6, v7, 0, v5, v5, v5);
}

u32 fn_80103634(u32 p3) {
    u32 v1;
    u32 v2;
    if ((u32)p3 == (u32)0) {
        return p3;
    }
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+312));
    ((BFu8_0_1*)(((u32)v1+312)))->f = 1;
    return v1;
}

void fn_80103654(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(55);
    fn_8010368C(c0, p3);
}

void fn_8010378C(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = lbl_805DF998;
    v2 = lbl_805DF9A0;
    v3 = M32(((u32)p3+44));
    v4 = M32(((u32)v3+8));
    v5 = M32(v4);
    v6 = M32(((u32)v5+4));
    v7 = M32(v5);
    fn_800F5548(v3, 0, v6, v7, 0, v1, v2, v1);
}

void fn_80103C58(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(24);
    fn_80103C90(c0, p3);
}

void fn_80103D54(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DF9B0;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    v5 = M32(v4);
    fn_800F5548(v2, 0, -1, v5, 0, v1, v1, v1);
    M32(((u32)v2+256)) = (u32)fn_801040FC;
}

void fn_801044CC(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(31);
    fn_80104504(c0, p3);
}

void fn_80104620(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805DF9B8;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M8(((u32)v2+316));
    v5 = M32(v3);
    ((BFu8_0_1*)(((u32)v2+316)))->f = 0;
    v6 = M32(v5);
    fn_800F5548(v2, 0, -1, v6, 0, v1, v1, v1);
    M32(((u32)v2+256)) = (u32)fn_80104A10;
}

void fn_80104788(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    float v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(v5);
    v7 = M32(v4+(v6<<3));
    c0 = fn_800547E0(v7, v4);
    if ((s32)c0 != (s32)0) {
    return;
    }
    v8 = M32(((u32)p3+44));
    v9 = lbl_805DF9B8;
    v10 = M32(((u32)v8+8));
    v11 = M8(((u32)v8+316));
    v12 = M32(v10);
    ((BFu8_0_1*)(((u32)v8+316)))->f = 0;
    v13 = M32(v12);
    fn_800F5548(v8, 0, -1, v13, 0, v9, v9, v9);
    M32(((u32)v8+256)) = (u32)fn_80104A10;
}

void fn_80105DB8(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(56);
    fn_80105DF0(c0, p3);
}

void fn_80105E94(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    u32 v11;
    u32 c1;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v1+304));
    v4 = M32(v2);
    fn_800D7B50(v3, 0, v2);
    v5 = M32(((u32)v4+12));
    M32(((u32)v1+308)) = v5;
    v6 = M32(((u32)v4+12));
    v7 = M32(((u32)v4+16));
    v9 = v7;
    if ((s32)(v7-v6) > (s32)0) {
        c1 = HSD_Randi((v7-v6));
        v8 = M32(((u32)v1+308));
        M32(((u32)v1+308)) = (v8+c1);
        v9 = (v8+c1);
    }
    v10 = lbl_805DFA30;
    v11 = M32(v4);
    fn_800F5548(v1, 0, -1, v11, 0, v10, v10, v10);
}

void fn_80105FD4(u32 p3) {
    u32 v18;
    float v17;
    u32 v16;
    u32 v15;
    u32 v14;
    u32 v13;
    u32 v12;
    u32 v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    u32 v2;
    u32 v1;
    u32 c0;
    u32 c2;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(v5);
    v7 = M32(v4+(v6<<3));
    c0 = fn_800547E0(v7, v4);
    if ((s32)c0 == (s32)0) {
        v8 = M32(((u32)p3+44));
        v9 = M32(((u32)v8+8));
        v10 = M32(((u32)v8+304));
        v11 = M32(v9);
        fn_800D7B50(v10, 0, v9);
        v12 = M32(((u32)v11+12));
        M32(((u32)v8+308)) = v12;
        v13 = M32(((u32)v11+12));
        v14 = M32(((u32)v11+16));
        if ((s32)(v14-v13) > (s32)0) {
            c2 = HSD_Randi((v14-v13));
            v15 = M32(((u32)v8+308));
            M32(((u32)v8+308)) = (v15+c2);
            v16 = (v15+c2);
        } else {
            v16 = v14;
        }
        v17 = lbl_805DFA30;
        v18 = M32(v11);
        fn_800F5548(v8, 0, -1, v18, 0, v17, v17, v17);
    }
}

void fn_80106144(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(57);
    fn_8010617C(c0, p3);
}

void fn_8010617C(u32 p3, u32 p4) {
    float v1;
    u32 v2;
    v1 = lbl_805DFA38;
    v2 = M32(((u32)p3+44));
    MF(((u32)v2+304)) = v1;
    M32(((u32)v2+308)) = 0;
    fn_801061B0(p3, v2);
}

void fn_801061B0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    float v11;
    float v12;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(((u32)v5+4));
    v7 = M32(v4+(v6<<3));
    fn_8040C0D8(v7, 16, v3);
    v8 = M32(((u32)v5+8));
    v9 = M32(v5);
    v10 = MF(((u32)v1+304));
    v11 = lbl_805DFA3C;
    v12 = lbl_805DFA38;
    fn_800F5548(v1, 0, v8, v9, 0, v10, v11, v12);
}

void fn_80106228(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    float v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(v5);
    v7 = M32(v4+(v6<<3));
    c0 = fn_800549A0(v7);
    if ((s32)c0 != (s32)0) {
    return;
    }
    v8 = M32(((u32)p3+44));
    v9 = lbl_805DFA38;
    v10 = M32(((u32)v8+8));
    v11 = M32(v10);
    v12 = M32(((u32)v11+20));
    M32(((u32)v8+308)) = v12;
    v13 = M32(v11);
    fn_800F5548(v8, 2, -1, v13, 0, v9, v9, v9);
}

void fn_801062B0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    float v7;
    u32 v8;
    u32 v9;
    u32 v10;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+308));
    M32(((u32)v1+308)) = (v2-1);
    v3 = M32(((u32)v1+308));
    if ((s32)v3 > (s32)0) {
    return;
    }
    v4 = M32(((u32)p3+44));
    v5 = lbl_805DFA38;
    v6 = M32(((u32)v4+8));
    v7 = lbl_805DFA3C;
    v8 = M32(v6);
    v9 = M32(((u32)v8+12));
    v10 = M32(v8);
    fn_800F5548(v4, 3, v9, v10, 0, v5, v7, v5);
}

void fn_80106314(u32 p3) {
    float v19;
    float v18;
    float v17;
    u32 v16;
    u32 v15;
    u32 v14;
    u32 v13;
    u32 v12;
    u32 v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    u32 v2;
    u32 v1;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(v5);
    v7 = M32(v4+(v6<<3));
    c0 = fn_800549A0(v7);
    if ((s32)c0 == (s32)0) {
        v8 = M32(((u32)p3+44));
        v9 = lbl_805DD6CC;
        v10 = M32(((u32)v8+8));
        v11 = M32(((u32)v9+260));
        v12 = M32(v10);
        v13 = M32(((u32)v12+4));
        v14 = M32(v11+(v13<<3));
        fn_8040C0D8(v14, 16, v10);
        v15 = M32(((u32)v12+8));
        v16 = M32(v12);
        v17 = MF(((u32)v8+304));
        v18 = lbl_805DFA3C;
        v19 = lbl_805DFA38;
        fn_800F5548(v8, 0, v15, v16, 0, v17, v18, v19);
    }
}

void fn_801063BC(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(58);
    fn_801063F4(c0, p3);
}

void fn_80106548(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+284));
    if ((s32)v2 > (s32)0) {
        fn_800EA084((v1+280), 0);
    }
    v3 = lbl_805DFA38;
    fn_800F5548(v1, 0, -1, -1, 0, v3, v3, v3);
}

void fn_80106824(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(32);
    fn_8010685C(c0, p3);
}

void fn_8010685C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    u32 v18;
    u32 v19;
    u32 c0;
    u32 c1;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)p4+44));
    v3 = M32(((u32)v1+8));
    v4 = lbl_805DD6CC;
    v5 = M32(v3);
    v6 = M32(((u32)v2+260));
    v7 = M32(v5);
    v8 = M32(v6+(v7<<3));
    c0 = fn_800D7954((v4+84), v8, v3);
    M32(((u32)v1+304)) = c0;
    v9 = M32(((u32)v5+20));
    if ((s32)v9 != (s32)-1) {
        v10 = M32(((u32)v2+260));
        v11 = lbl_805DD6CC;
        v12 = M32(v10+(v9<<3));
        c1 = fn_800D79C0((v11+84), v12, 0, v11);
        v13 = M32(((u32)c1+312));
        if ((u32)v13 == (u32)0) {
            __assert((u32)lbl_804A6E1C, 81, (u32)lbl_804A6E30);
        }
        v14 = M32(((u32)c1+312));
        M32(((u32)v1+308)) = v14;
    } else {
        M32(((u32)v1+308)) = 0;
    }
    v15 = M32(v1);
    v16 = M32(((u32)v1+304));
    M32(((u32)v16+144)) = v15;
    M32(((u32)v1+312)) = 0;
    M32(((u32)v1+316)) = 0;
    M32(((u32)v1+320)) = 5;
    v17 = M32(((u32)v1+8));
    v18 = M32(((u32)v17+20));
    if ((u32)v18 != (u32)0) {
        v19 = M32(v5);
        fn_800F7870(p3, v19, 0);
    }
    fn_80106978(p3);
}

void fn_80106978(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = lbl_805DFA40;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    M32(((u32)v2+316)) = 0;
    v5 = M32(((u32)v2+316));
    v6 = M32(((u32)v4+4));
    v7 = M32(v4);
    fn_800F5548(v2, 0, v6, v7, 0, ((float)(s32)v5), v1, v1);
}

void fn_801069E4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+312));
    M32(((u32)v1+312)) = (v2-1);
    v3 = M32(((u32)v1+312));
    if ((s32)v3 > (s32)0) {
    return;
    }
    fn_80106C54(p3, v2, v1);
}

void fn_80106B10(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    float v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 c0;
    u32 c1;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(v5);
    v7 = M32(v4+(v6<<3));
    c0 = fn_800547E0(v7, v4);
    if ((s32)c0 == (s32)0) {
        c1 = fn_800549A0(v7);
        if ((s32)c1 == (s32)0) {
            v8 = M32(((u32)p3+44));
            v9 = lbl_805DFA40;
            v10 = M32(((u32)v8+8));
            v11 = M32(v10);
            M32(((u32)v8+316)) = 0;
            v12 = M32(((u32)v8+316));
            v13 = M32(((u32)v11+4));
            v14 = M32(v11);
            fn_800F5548(v8, 0, v13, v14, 0, ((float)(s32)v12), v9, v9);
        }
    }
}

void fn_80106E90(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 v5;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+344));
    M32(((u32)v1+344)) = (v2-1);
    v3 = M32(((u32)v1+344));
    if ((s32)v3 > (s32)0) {
    return;
    }
    v4 = lbl_805DFA58;
    v5 = M32(((u32)p3+44));
    fn_800F5548(v5, 1, -1, -1, 0, v4, v4, v4);
}

void fn_80107120(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(30);
    fn_80107158(c0, p3);
}

void fn_80107158(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(v2);
    M32(((u32)v1+308)) = 0;
    M32(((u32)v1+304)) = 0;
    M32(((u32)v1+316)) = 0;
    M32(((u32)v1+312)) = 0;
    M32(((u32)v1+324)) = 0;
    M32(((u32)v1+320)) = 0;
    v4 = M32(((u32)v1+8));
    v5 = M32(((u32)v4+20));
    if ((u32)v5 != (u32)0) {
        v6 = M32(((u32)v3+4));
        fn_800F7870(p3, v6, 0);
    }
    fn_801071CC(p3);
}

void fn_801071CC(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = lbl_805DFA68;
    v2 = lbl_805DFA6C;
    v3 = M32(((u32)p3+44));
    v4 = M32(((u32)v3+8));
    v5 = M32(v4);
    v6 = M32(((u32)v5+8));
    v7 = M32(v5);
    fn_800F5548(v3, 0, v6, v7, 0, v1, v2, v1);
    M32(((u32)v3+260)) = (u32)fn_80107370;
}

void fn_8010722C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+20));
    v4 = M32(v2);
    if ((u32)v3 == (u32)0) {
    return;
    }
    v5 = M32(((u32)v4+4));
    fn_800F7870(p3, v5, 0);
}

u32 fn_80109624(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 c0;
    c0 = fn_800F466C(62);
    fn_80109684(c0, p3, p5, p6);
    return c0;
}

void fn_8010970C(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    v1 = lbl_805DFA90;
    v2 = lbl_805DFA94;
    v3 = M32(((u32)p3+44));
    fn_800F5548(v3, 0, 0, -1, 0, v1, v2, v1);
}

void fn_8010974C(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    float v4;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+116));
    if ((s32)v2 != (s32)0) {
    return;
    }
    v3 = lbl_805DFA90;
    v4 = lbl_805DFA94;
    fn_800F5548(v1, 1, 1, -1, 0, v3, v4, v3);
    M32(((u32)v1+308)) = 0;
}

u32 fn_801097AC(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+308));
    return v2;
}

u32 fn_801097B8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+308));
    return v2;
}

void fn_801097C4(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    v3 = M32(v2);
    fn_80053F34(v3, 0, p4);
}

u32 fn_801097F8(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 c0;
    c0 = fn_800F466C(63);
    fn_80109858(c0, p3, p5, p6);
    return c0;
}

void fn_801098E0(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    v1 = lbl_805DFA98;
    v2 = lbl_805DFA9C;
    v3 = M32(((u32)p3+44));
    v4 = M32(((u32)v3+8));
    v5 = M32(v4);
    fn_800F5548(v3, 0, 0, -1, 0, v1, v2, v1);
    v6 = M32(v5);
    v7 = MF(((u32)v5+8));
    fn_800F605C(v3, v6, v7);
}

u32 fn_80109D74(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+308));
    return v2;
}

void fn_80109D80(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    v3 = M32(v2);
    fn_80053F34(v3, 0, p4);
}

void fn_80109DB4(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_800F446C(61);
    fn_80109DEC(c0, p3);
}

void fn_80109DEC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(v2);
    M32(((u32)v1+344)) = 0;
    v4 = M32(((u32)v1+8));
    v5 = M32(((u32)v4+20));
    if ((u32)v5 != (u32)0) {
        v6 = M32(v3);
        fn_800F7870(p3, v6, 0);
    }
    v7 = M32(((u32)v3+64));
    if ((u32)v7 != (u32)0) {
        fn_80109E84((v1+304), v7);
    }
    v8 = M32(((u32)v3+68));
    if ((u32)v8 != (u32)0) {
        fn_80109E84((v1+324), v8);
    }
    fn_80109EE4(p3);
}

void fn_80109E84(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c1;
    u32 c2;
    fn_800E9A4C(p3, p4);
    v1 = M32(p4);
    M32(p3) = v1;
    v2 = M32(((u32)p4+4));
    M32(((u32)p3+4)) = v2;
    v3 = M32(((u32)p4+8));
    c1 = fn_800E9EA8(v3);
    M32(((u32)p3+8)) = c1;
    c2 = fn_800E9F30(0);
    M32(((u32)p3+12)) = c2;
}

void fn_80109FEC(u32 p3) {
    u32 v25;
    u32 v24;
    float v23;
    float v22;
    u32 v21;
    u32 v20;
    u32 v19;
    u32 v18;
    u32 v17;
    float v16;
    float v15;
    u32 v14;
    u32 v13;
    u32 v12;
    float v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    u32 v6;
    float v5;
    u32 v4;
    u32 v3;
    u32 v2;
    u32 v1;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+344));
    if ((s32)v2 > (s32)0) {
        M32(((u32)v1+344)) = (v2-1);
    }
    v3 = M32(((u32)v1+344));
    if ((s32)v3 <= (s32)0) {
        v4 = M32(((u32)p3+44));
        v5 = lbl_805DFAA0;
        v6 = M32(((u32)v4+8));
        v7 = lbl_805DD6CC;
        v8 = M32(v6);
        M32(((u32)v4+344)) = 0;
        v9 = M32(((u32)v8+12));
        v10 = M32(v8);
        v11 = MF(((u32)v8+24));
        fn_800F5548(v4, 1, v9, v10, 0, v5, v11, v5);
        v12 = M32(((u32)v8+4));
        if ((s32)v12 != (s32)-1) {
            v13 = M32(((u32)v8+16));
            if ((s32)v13 != (s32)-1) {
                v14 = M32(v7);
                v15 = MF(((u32)v8+24));
                v16 = lbl_805DFAA0;
                fn_800DBAE0(v14, v13, v12, 0, 0, v15, v16);
                v17 = M32(v7);
                v18 = M32(((u32)v8+4));
                fn_800DBD3C(v17, v18);
            }
        }
        v19 = M32(((u32)v8+8));
        if ((s32)v19 != (s32)-1) {
            v20 = M32(((u32)v8+20));
            if ((s32)v20 != (s32)-1) {
                v21 = M32(v7);
                v22 = MF(((u32)v8+24));
                v23 = lbl_805DFAA0;
                fn_800DBAE0(v21, v20, v19, 0, 0, v22, v23);
                v24 = M32(v7);
                v25 = M32(((u32)v8+8));
                fn_800DBD3C(v24, v25);
            }
        }
    }
}

void fn_8010A564(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c1;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    M32(((u32)v1+304)) = (v2-1);
    v3 = M32(((u32)v1+304));
    if ((s32)v3 > (s32)0) {
    return;
    }
    fn_800EA084((v1+280), 0);
    v4 = M32(((u32)v1+8));
    v5 = M32(v4);
    v6 = M32(((u32)v5+4));
    v7 = M32(((u32)v5+8));
    c1 = HSD_Randi((v7-v6));
    v8 = M32(((u32)v5+4));
    M32(((u32)v1+304)) = (v8+c1);
}

void fn_8010AA64(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+304));
    c0 = fn_800547E0(v2, p4);
    if ((s32)c0 != (s32)0) {
    return;
    }
    v3 = M32(((u32)v1+308));
    fn_800D7AD0(v3, 0);
    fn_800EA180((v1+280));
    func_80428F64(p3);
}

u32 fn_8010AB34(u32 p3) {
    u32 c0;
    c0 = fn_800F48CC(67, p3);
    fn_8010AB70();
    return c0;
}

void fn_8010AB70(void) {
    fn_8010AB90();
}

void fn_8010AF94(u32 p3) {
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    float v2;
    float v1;
    v1 = lbl_805DFAC4;
    v2 = lbl_805DFAC8;
    v3 = M32(((u32)p3+44));
    fn_800F5548(v3, 0, 0, -1, 0, v1, v2, v1);
    v4 = M32(v3);
    v5 = M32(((u32)v4+40));
    fn_80408BD0(v5, 20);
    v6 = M32(((u32)p3+44));
    fn_800F5944(p3);
    v7 = M32(((u32)v6+308));
    fn_8040A64C(v7);
    fn_800F5744(v3, 0);
}

void fn_8010CC0C(u32 p3) {
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    float v2;
    float v1;
    v1 = lbl_805DFAC4;
    v2 = lbl_805DFAC8;
    v3 = M32(((u32)p3+44));
    fn_800F5548(v3, 4, 0, -1, 4, v1, v2, v1);
    v4 = M32(v3);
    v5 = M32(((u32)v4+40));
    fn_80408BD0(v5, 20);
    v6 = M32(((u32)p3+44));
    fn_800F5944(p3);
    v7 = M32(((u32)v6+308));
    fn_8040A64C(v7);
    fn_800F5744(v3, 0);
    fn_800EA180((v3+280));
}

void fn_8010D18C(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = lbl_805DFAC4;
    v2 = lbl_805DFAC8;
    v3 = M32(((u32)p3+44));
    fn_800F5548(v3, 5, -1, -1, 0, v1, v2, v1);
    v4 = M32(((u32)v3+308));
    fn_8040B718(v4);
    fn_80114154();
    v5 = M32(((u32)v3+312));
    fn_8007A9E4(v5);
    v6 = M32(((u32)v3+316));
    fn_8007A9E4(v6);
    v7 = M32(((u32)v3+320));
    func_80428F64(v7);
    fn_8011196C();
}

void fn_8010D200(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+320));
    fn_8027B600(v2);
}

void fn_8010D228(u32 p3) {
    u32 c0;
    c0 = fn_800F446C(68);
    fn_8010D260(c0, p3);
}

void fn_8010D324(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = lbl_805DFAD8;
    v2 = lbl_805DFADC;
    v3 = M32(((u32)p3+44));
    v4 = M32(((u32)v3+8));
    v5 = M32(v4);
    v6 = M32(((u32)v5+32));
    v7 = M32(v5);
    fn_800F5548(v3, 0, v6, v7, 0, v1, v2, v1);
}

void fn_8010D36C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    float v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 c0;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(v5);
    v7 = M32(v4+(v6<<3));
    c0 = fn_80054CD4(v7, v4);
    if ((s32)c0 == (s32)0) {
    return;
    }
    v8 = M32(((u32)p3+44));
    v9 = lbl_805DFAD8;
    v10 = M32(((u32)v8+8));
    v11 = lbl_805DFADC;
    v12 = M32(v10);
    v13 = M32(((u32)v12+20));
    v14 = M32(v12);
    fn_800F5548(v8, 2, v13, v14, 0, v9, v11, v9);
}

void fn_8010D5EC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    float v17;
    u32 v18;
    float v19;
    u32 v20;
    u32 v21;
    u32 v22;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v1+260));
    v4 = M32(((u32)v2+8));
    v5 = M32(v4);
    v6 = M32(v5);
    v7 = M32(v3+(v6<<3));
    c0 = fn_800547E0(v7, v3);
    if ((s32)c0 != (s32)0) {
    return;
    }
    v8 = M8(((u32)v2+308));
    if ((s32)((v8>>7)&0x1) != (s32)0) {
        v9 = M32(((u32)p3+44));
        v10 = lbl_805DFAD8;
        v11 = M32(((u32)v9+8));
        v12 = M8(((u32)v9+308));
        v13 = M32(v11);
        ((BFu8_0_1*)(((u32)v9+308)))->f = 0;
        v14 = M32(((u32)v13+32));
        v15 = M32(v13);
        fn_800F5548(v9, 1, v14, v15, 4, v10, v10, v10);
        return;
    }
    v16 = M32(((u32)p3+44));
    v17 = lbl_805DFAD8;
    v18 = M32(((u32)v16+8));
    v19 = lbl_805DFADC;
    v20 = M32(v18);
    v21 = M32(((u32)v20+32));
    v22 = M32(v20);
    fn_800F5548(v16, 0, v21, v22, 0, v17, v19, v17);
}

u32 fn_8010D770(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+308));
    ((BFu8_1_1*)(((u32)v1+308)))->f = 1;
    return v1;
}

void fn_8010DB64(u32 p3) {
    u32 c0;
    c0 = fn_800F446C(69);
    fn_8010DB9C(c0, p3);
}

void fn_8010DC98(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = lbl_805DFAE0;
    v2 = lbl_805DFAE4;
    v3 = M32(((u32)p3+44));
    v4 = M32(((u32)v3+8));
    v5 = M32(v4);
    v6 = M32(((u32)v5+4));
    v7 = M32(v5);
    fn_800F5548(v3, 0, v6, v7, 0, v1, v2, v1);
}

void fn_8010DCE0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    float v17;
    u32 v18;
    float v19;
    u32 v20;
    u32 v21;
    u32 v22;
    float v23;
    u32 v24;
    float v25;
    u32 v26;
    u32 v27;
    u32 v28;
    u32 c0;
    u32 c1;
    u32 c2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)p3+44));
    v3 = M32(((u32)v1+260));
    v4 = M32(((u32)v2+8));
    v5 = M32(v4);
    v6 = M32(v5);
    v7 = M32(v3+(v6<<3));
    c0 = fn_800547E0(v7, v3);
    if ((s32)c0 == (s32)0) {
        c1 = fn_800549A0(v7);
        if ((s32)c1 == (s32)0) {
            v8 = M32(((u32)v2+312));
            M32(((u32)v2+312)) = (v8-1);
            v9 = M32(((u32)v2+312));
            if ((s32)v9 <= (s32)0) {
                v10 = M32(((u32)p3+44));
                v11 = M32(((u32)v10+8));
                v12 = M32(v11);
                v13 = M32(((u32)v12+20));
                v14 = M32(((u32)v13+4));
                v15 = M32(((u32)v13+8));
                c2 = HSD_Randi(((v15-v14)+1));
                v16 = M32(((u32)v12+20));
                v17 = lbl_805DFAE0;
                v18 = M32(((u32)v16+4));
                v19 = lbl_805DFAE4;
                M32(((u32)v10+312)) = (v18+c2);
                v20 = M32(((u32)v12+8));
                v21 = M32(v12);
                fn_800F5548(v10, 1, v20, v21, 0, v17, v19, v17);
            } else {
                v22 = M32(((u32)p3+44));
                v23 = lbl_805DFAE0;
                v24 = M32(((u32)v22+8));
                v25 = lbl_805DFAE4;
                v26 = M32(v24);
                v27 = M32(((u32)v26+4));
                v28 = M32(v26);
                fn_800F5548(v22, 0, v27, v28, 0, v23, v25, v23);
            }
        }
    }
}

void fn_8010DDF8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    float v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 c0;
    u32 c1;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(v5);
    v7 = M32(v4+(v6<<3));
    c0 = fn_800547E0(v7, v4);
    if ((s32)c0 == (s32)0) {
        c1 = fn_800549A0(v7);
        if ((s32)c1 == (s32)0) {
            v8 = M32(((u32)p3+44));
            v9 = lbl_805DFAE0;
            v10 = M32(((u32)v8+8));
            v11 = lbl_805DFAE4;
            v12 = M32(v10);
            v13 = M32(((u32)v12+4));
            v14 = M32(v12);
            fn_800F5548(v8, 0, v13, v14, 0, v9, v11, v9);
        }
    }
}

void fn_8010DE94(u32 p3) {
    u32 v19;
    u32 v18;
    float v17;
    u32 v16;
    float v15;
    u32 v14;
    u32 v13;
    u32 v12;
    u32 v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    u32 v6;
    u32 v5;
    u32 v4;
    u32 v3;
    u32 v2;
    u32 v1;
    u32 c0;
    u32 c1;
    u32 c2;
    v1 = M32(((u32)p3+44));
    v2 = lbl_805DD6CC;
    v3 = M32(((u32)v1+8));
    v4 = M32(((u32)v2+260));
    v5 = M32(v3);
    v6 = M32(v5);
    v7 = M32(v4+(v6<<3));
    c0 = fn_800547E0(v7, v4);
    if ((s32)c0 == (s32)0) {
        c1 = fn_800549A0(v7);
        if ((s32)c1 == (s32)0) {
            v8 = M32(((u32)p3+44));
            v9 = M32(((u32)v8+8));
            v10 = M32(v9);
            v11 = M32(((u32)v10+20));
            v12 = M32(((u32)v11+4));
            v13 = M32(((u32)v11+8));
            c2 = HSD_Randi(((v13-v12)+1));
            v14 = M32(((u32)v10+20));
            v15 = lbl_805DFAE0;
            v16 = M32(((u32)v14+4));
            v17 = lbl_805DFAE4;
            M32(((u32)v8+312)) = (v16+c2);
            v18 = M32(((u32)v10+8));
            v19 = M32(v10);
            fn_800F5548(v8, 1, v18, v19, 0, v15, v17, v15);
        }
    }
}

void fn_8010E09C(u32 p3) {
    fn_800FA708(p3, 0);
    fn_800FA708(p3, 1);
    fn_800FA708(p3, 2);
}

void fn_8010E1C8(u32 p3) {
    fn_800FA708(p3, 0);
    fn_80102C40(p3, 1);
    fn_80109DB4(p3, 2);
    fn_80109DB4(p3, 3);
    fn_80109DB4(p3, 4);
}

u32 fn_8010E280(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+8));
    v4 = M32(((u32)v3+8));
    fn_800DB5D4(v1, v4, 0);
}

u32 fn_8010E2B4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+8));
    v4 = M32(((u32)v3+8));
    fn_800DB654(v1, v4, 1);
}

void fn_8010E378(u32 p3) {
    fn_800F9D80(p3, 0);
    fn_800F9D80(p3, 1);
    fn_800F9D80(p3, 2);
    fn_800F9D80(p3, 3);
    fn_800F9D80(p3, 4);
    fn_800F9D80(p3, 5);
    fn_800F9D80(p3, 6);
    fn_800FA708(p3, 7);
    fn_800FC848(p3, 8);
    fn_801007FC(p3, 9);
    fn_801007FC(p3, 10);
    fn_801007FC(p3, 11);
    fn_801007FC(p3, 12);
    fn_801007FC(p3, 13);
    fn_801007FC(p3, 14);
    fn_801007FC(p3, 15);
    fn_80100FB4(p3, 16);
    fn_80103C58(p3, 17);
    fn_80103C58(p3, 18);
    fn_80103C58(p3, 19);
    fn_80103C58(p3, 20);
    fn_80103C58(p3, 21);
    fn_80103C58(p3, 22);
    fn_80103C58(p3, 23);
    fn_80103C58(p3, 24);
    fn_80103C58(p3, 25);
    fn_80103C58(p3, 26);
    fn_80103C58(p3, 27);
    fn_80103C58(p3, 28);
    fn_80103C58(p3, 29);
}

void fn_8010E504(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)(v1+(p4*72))+536));
    fn_800FCBB4(v2, p3, (v1+(p4*72)));
}

void fn_8010E538(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)(v1+(p4*72))+536));
    fn_80101148(v2, p3, (v1+(p4*72)));
}

u32 fn_8010E56C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c0;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+8));
    v4 = M32(((u32)v3+4));
    if ((u32)v4 != (u32)0) {
        c0 = fn_800F8B74(v4, p3, v1);
        v5 = c0;
    } else {
        v5 = 0;
    }
    return v5;
}

void fn_8010E5B0(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+44));
    fn_800E85A8(v1, (u32)&lbl_805D6360, 1);
}

void fn_8010E5DC(u32 p3) {
    fn_800FB5D0(p3, 0, 0);
    fn_800FB5D0(p3, 1, 0);
    fn_800FB5D0(p3, 2, 0);
    fn_800FB5D0(p3, 3, 0);
    fn_800FB5D0(p3, 4, 0);
    fn_800FB5D0(p3, 5, 0);
    fn_800FB5D0(p3, 6, 0);
    fn_800FB5D0(p3, 7, 0);
    fn_800FB5D0(p3, 8, 0);
    fn_800FB5D0(p3, 9, 0);
    fn_800FB5D0(p3, 10, 0);
    fn_800FB5D0(p3, 11, 0);
    fn_800FB5D0(p3, 12, 0);
    fn_800FB5D0(p3, 13, 0);
    fn_800FB5D0(p3, 14, 0);
    fn_800FB5D0(p3, 15, 0);
    fn_800FB5D0(p3, 16, 0);
    fn_800FB5D0(p3, 17, 0);
    fn_800FBF60(p3, 18);
    fn_800FC2D0(p3, 19);
    fn_800FC2D0(p3, 20);
    fn_800FCD44(p3, 21);
    fn_800FA708(p3, 22);
    fn_800FA708(p3, 23);
}

void fn_8010E87C(u32 p3) {
    fn_800F9D80(p3, 0);
    fn_800F9D80(p3, 1);
    fn_801042C4(p3, 2);
    fn_801042C4(p3, 3);
}

u32 fn_8010E928(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD6CC;
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+8));
    v4 = M32(((u32)v3+8));
    fn_800DB654(v1, v4, 0);
}

void fn_8010EA40(u32 p3) {
    fn_800FA2A0(p3, 0);
    fn_800FED20(p3, 1);
    fn_80103654(p3, 2);
    fn_80103654(p3, 3);
    fn_80103654(p3, 4);
    fn_80105DB8(p3, 5);
    fn_80105DB8(p3, 6);
    fn_80105DB8(p3, 7);
    fn_80105DB8(p3, 8);
    fn_80105DB8(p3, 9);
    fn_80107120(p3, 10);
    fn_80107120(p3, 11);
    fn_80107120(p3, 12);
    fn_80107120(p3, 13);
    fn_80107120(p3, 14);
    fn_80107120(p3, 15);
    fn_80107120(p3, 16);
    fn_80107120(p3, 17);
    fn_80107120(p3, 18);
    fn_80107120(p3, 19);
    fn_80107120(p3, 20);
    fn_80107120(p3, 21);
    fn_80107120(p3, 22);
    fn_80107120(p3, 23);
    fn_80107120(p3, 24);
    fn_80107120(p3, 25);
    fn_80107120(p3, 26);
    fn_80107120(p3, 27);
}

void fn_8010EC90(u32 p3) {
    fn_800FA2A0(p3, 0);
    fn_800FA610(p3, 1);
    fn_800FE5D4(p3, 2);
    fn_800FE5D4(p3, 3);
    fn_800FE5D4(p3, 4);
    fn_800FE5D4(p3, 5);
    fn_800FE5D4(p3, 6);
    fn_800FE5D4(p3, 7);
    fn_800FE5D4(p3, 8);
    fn_800FE5D4(p3, 9);
    fn_800FEB20(p3, 10);
    fn_80103654(p3, 11);
}

void fn_8010EDF8(u32 p3) {
    fn_800FF50C(p3, 0);
    fn_800FF50C(p3, 1);
    fn_800FF50C(p3, 2);
    fn_800FF50C(p3, 3);
    fn_800FF50C(p3, 4);
    fn_800FF50C(p3, 5);
    fn_800FFD04(p3, 6);
    fn_800FA708(p3, 7);
    fn_800FA708(p3, 8);
    fn_800FA708(p3, 9);
    fn_800FA708(p3, 10);
    fn_800FA708(p3, 11);
    fn_800FA708(p3, 12);
    fn_800FA708(p3, 13);
    fn_800FA708(p3, 14);
    fn_800FA708(p3, 15);
    fn_800FA708(p3, 16);
    fn_80102C40(p3, 17);
    fn_80102C40(p3, 18);
    fn_80102C40(p3, 19);
    fn_80106144(p3, 20);
    fn_80106144(p3, 21);
    fn_80106144(p3, 22);
    fn_80106144(p3, 23);
    fn_801063BC(p3, 24);
    fn_80106824(p3, 25);
    fn_80106824(p3, 26);
    fn_80106824(p3, 27);
    fn_80106824(p3, 28);
    fn_80106824(p3, 29);
    fn_80106824(p3, 30);
    fn_801044CC(p3, 31);
    fn_801044CC(p3, 32);
    fn_801044CC(p3, 33);
    fn_801044CC(p3, 34);
    fn_801044CC(p3, 35);
    fn_801044CC(p3, 36);
    fn_801012C8(p3, 37);
    fn_801012C8(p3, 38);
    fn_801012C8(p3, 39);
    fn_801012C8(p3, 40);
    fn_80100224(p3, 41);
}

void fn_8010F014(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32(((u32)p3+44));
    v2 = M32(((u32)v1+8));
    v3 = M32(((u32)v2+8));
    v4 = M32(v3);
    fn_800EA3E8(v1, v4);
    v5 = M32(v3);
    fn_800EA568(v1, v5, (v1+1832), 10);
}

void fn_800AFE68(void) {}

void fn_800AFF14(void) {}

void fn_800B00C0(void) {}

void fn_800BC3DC(void) {}

void fn_800BCBA0(void) {}

void fn_800C2BF0(void) {}

void fn_800C9294(void) {}

void fn_800C9DB8(void) {}

void fn_800CA160(void) {}

void fn_800CC1F4(void) {}

void fn_800CD5E0(void) {}

void fn_800CE1D0(void) {}

void fn_800CE6D4(void) {}

void fn_800E6754(void) {}

void fn_800EC754(void) {}

void fn_800F5798(void) {}

void fn_800F8780(void) {}

void fn_800F8BC4(void) {}

void fn_800F8BC8(void) {}

void fn_800F902C(void) {}

void fn_8010E098(void) {}

void fn_8010EC0C(void) {}

int fn_800EE6CC(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 0))) + 48))) + 4 + ((*(int*)((u8*)(a1) + 8)) * 12)));
}

int fn_8010F0DC(int r3, int r4)
{
    int r0;
    r0 = r4 * 72;
    r3 = *(int*)&lbl_805DD6CC;
    r3 = r3 + r0;
    r3 = *(int*)((u8*)r3 + 536);
    if ((unsigned)r3 == (unsigned)0) goto L_8010F104;
    r3 = fn_80106658(r3, r4);
    L_8010F104: ;
    return r3;
}

int fn_800EE6EC(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 8 + ((*(int*)((u8*)(a1) + 8)) * 20)));
}

void fn_800F8E68(int a1, int a2)
{
    int c0;
    c0 = fn_8018C824((*(int*)((u8*)(a1) + 236)), a2);
    *(int*)((u8*)(a2) + 8) = ((*(int*)((u8*)(a2) + 8)) + 4);
}

int fn_800EE724(int a1, int a2)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 8 + (a2 * 20)));
}

int fn_800EE708(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 12 + ((*(int*)((u8*)(a1) + 8)) * 20)));
}

int fn_800EE758(int a1, int a2)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 16 + (a2 * 20)));
}

int fn_800D1090(void)
{
    int r3;
    int r31;
    r31 = *(int*)&lbl_805DD6CC;
    r3 = r31;
    r3 = fn_800DA474(r3);
    if ((unsigned)r3 == (unsigned)0) goto L_800D10C4;
    r3 = r31;
    r3 = fn_800DA474(r3);
    r3 = *(int*)((u8*)r3 + 8);
    goto L_800D10C8;
    L_800D10C4: ;
    r3 = 0;
    L_800D10C8: ;
    return r3;
}

int fn_800DDFEC(int a1, int a2)
{

    return ((*(int*)((u8*)((*(int*)((u8*)(a1) + 116))) + 312 + (a2 * 320))) + 8);
}

int fn_800EE73C(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 16 + ((*(int*)((u8*)(a1) + 8)) * 20)));
}

int fn_80105CB0(int r3)
{
    int r0;
    int r4;
    int r5;
    int r31;
    r31 = 5;
    r3 = *(int*)((u8*)r3 + 4);
    if ((unsigned)r3 == (unsigned)0) goto L_80105D20;
    r0 = *(unsigned short*)((u8*)r3 + 0);
    if (r0 == 17) goto L_80105CF8;
    if (r0 >= 17) goto L_80105CEC;
    if (r0 >= 16) goto L_80105D04;
    goto L_80105D1C;
    L_80105CEC: ;
    if (r0 == 23) goto L_80105D10;
    goto L_80105D1C;
    L_80105CF8: ;
    r3 = fn_8019203C(r3);
    r31 = r3;
    goto L_80105D20;
    L_80105D04: ;
    r3 = fn_801C7CF4(r3);
    r31 = r3;
    goto L_80105D20;
    L_80105D10: ;
    r3 = fn_802230C4(r3);
    r31 = r3;
    goto L_80105D20;
    L_80105D1C: ;
    r31 = 5;
    L_80105D20: ;
    if (r31 != 5) goto L_80105D48;
    r31 = 0;
    L_80105D2C: ;
    r3 = r31;
    r3 = plGetPlayerKind(r3);
    if (r3 != 4) goto L_80105D48;
    r31 = r31 + 1;
    if (r31 < 5) goto L_80105D2C;
    L_80105D48: ;
    if (r31 != 5) goto L_80105D68;
    r3 = (int)lbl_804A6BF0;
    r5 = (int)lbl_804A6C30;
    r3 = (int)lbl_804A6BF0;
    r4 = 421;
    r5 = (int)lbl_804A6C30;
    r3 = __assert(r3, r4, r5);
    L_80105D68: ;
    r3 = r31;
    return r3;
}

int fn_800EF894(int a1, int a2, int a3, int a4)
{
    int c0;
    c0 = fn_8007AD58(a3, a4, (*(int*)((u8*)((*(int*)((u8*)(a1) + 32))) + 312 + (a2 * 320))), a4, (*(int*)((u8*)(a1) + 32)));
    return c0;
}

int fn_800CEE08(int a1)
{

    return (((unsigned)(*(unsigned char*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92))) + 60 + (a1 << 6))) >> 6) & 1);
}

int fn_8010F0A4(int r3, int r4)
{
    int r0;
    r0 = r4 * 72;
    r3 = *(int*)&lbl_805DD6CC;
    r3 = r3 + r0;
    r3 = *(int*)((u8*)r3 + 536);
    if ((unsigned)r3 == (unsigned)0) goto L_8010F0CC;
    r3 = fn_801006F4(r3, r4);
    L_8010F0CC: ;
    return r3;
}

int fn_8010F06C(int r3, int r4)
{
    int r0;
    r0 = r4 * 72;
    r3 = *(int*)&lbl_805DD6CC;
    r3 = r3 + r0;
    r3 = *(int*)((u8*)r3 + 536);
    if ((unsigned)r3 == (unsigned)0) goto L_8010F094;
    r3 = fn_80100084(r3, r4);
    L_8010F094: ;
    return r3;
}

int fn_8010E768(int a1, int a2)
{
    int t0;
    int c0;
    t0 = (*(int*)&lbl_805DD6CC);
    t0 += (a2 * 72);
    c0 = fn_800FD890((*(int*)((u8*)(t0) + 536)), a2);
    return c0;
}

int fn_800D12F0(void)
{
    int r3;
    int r31;
    r31 = *(int*)&lbl_805DD6CC;
    r3 = r31;
    r3 = fn_800DA5C8(r3);
    if ((unsigned)r3 == (unsigned)0) goto L_800D1324;
    r3 = r31;
    r3 = fn_800DA5C8(r3);
    r3 = *(int*)((u8*)r3 + 8);
    goto L_800D1328;
    L_800D1324: ;
    r3 = 0;
    L_800D1328: ;
    return r3;
}

int fn_800DDD1C(int a1, int a2)
{

    return (*(int*)((u8*)((*(int*)((u8*)(a1) + 116))) + 312 + (a2 * 320)));
}

int fn_800CF07C(int r3, int r4, int r5)
{
    int r0;
    int r6;
    int r28;
    int r29;
    int r30;
    int r31;
    r30 = r5;
    r29 = r4;
    r28 = r3;
    r31 = *(int*)&lbl_805DD6CC;
    r0 = *(int*)((u8*)r31 + 284);
    if ((unsigned)r0 != (unsigned)0) goto L_800CF0C8;
    r4 = (int)lbl_804A33A4;
    r3 = (int)&lbl_805D6090;
    r5 = (int)lbl_804A33A4;
    r4 = 444;
    r3 = __assert(r3, r4, r5);
    L_800CF0C8: ;
    r3 = r31;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    r3 = fn_800E3484(r3, r4, r5, r6);
    return r3;
}

int fn_800D0B30(void)
{
    int r3;
    int r31;
    r31 = *(int*)&lbl_805DD6CC;
    r3 = r31;
    r3 = fn_800DA3D4(r3);
    if ((unsigned)r3 == (unsigned)0) goto L_800D0B64;
    r3 = r31;
    r3 = fn_800DA3D4(r3);
    r3 = *(int*)((u8*)r3 + 8);
    goto L_800D0B68;
    L_800D0B64: ;
    r3 = 0;
    L_800D0B68: ;
    return r3;
}

int fn_800D0C88(void)
{
    int r3;
    int r31;
    r31 = *(int*)&lbl_805DD6CC;
    r3 = r31;
    r3 = fn_800DA424(r3);
    if ((unsigned)r3 == (unsigned)0) goto L_800D0CBC;
    r3 = r31;
    r3 = fn_800DA424(r3);
    r3 = *(int*)((u8*)r3 + 8);
    goto L_800D0CC0;
    L_800D0CBC: ;
    r3 = 0;
    L_800D0CC0: ;
    return r3;
}


void fn_800BA7B4(u32 p3, u32 p4, u32 p5) {
    E176_u32* v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v9;
    E176_u32* v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    E176_u32* v18;
    u32 v19;
    u32 v20;
    u32 v21;
    u32 v22;
    E176_u32* v23;
    u32 v24;
    u32 v25;
    u32 v26;
    u32 v27;
    u32 v28;
    u32 v29;
    E176_u32* v30;
    u32 v31;
    u32 v32;
    u32 v33;
    u32 v34;
    u32 v35;
    u32 v36;
    u32 c2;
    u32 c4;
    fn_800B3944();
    if ((u32)fn_8022CB74(p4) != (u32)0) {
        c2 = fn_8022C824(p4);
        if ((u32)c2 == (u32)0) goto L106;
        if ((s32)p3 >= (s32)0) {
            if ((s32)p3 < (s32)32) goto L23;
        }
        v3 = 0;
        goto L28;
    L23:;
        v1 = (E176_u32*)((u32)lbl_80557248);
        v3 = v1->f[p3];
    L28:;
        if ((u32)v3 != (u32)0) {
            v5 = M32(((u32)v3+44));
        } else {
            v5 = 0;
        }
        if ((u32)v5 != (u32)0) {
            v7 = M32(v5);
        } else {
            v7 = 0;
        }
        if ((u32)v7 == (u32)0) goto L106;
        M32(((u32)v7+148)) = c2;
        M32(((u32)c2+160)) = (M32(((u32)c2+160))|(1<<p3));
    } else {
        v9 = 0;
        do {
            if ((u32)fn_8022CB74(v9) != (u32)0) {
                c4 = fn_8022C824(v9);
                if ((s32)c4 != (s32)0) {
                    OSReport((u32)lbl_804A2120, (u32)&lbl_805D6000, 991, p4, v9);
                    if ((s32)p3 >= (s32)0) {
                        if ((s32)p3 < (s32)32) goto L70;
                    }
                    v12 = 0;
                    goto L75;
    L70:;
                    v10 = (E176_u32*)((u32)lbl_80557248);
                    v12 = v10->f[p3];
    L75:;
                    if ((u32)v12 != (u32)0) {
                        v14 = M32(((u32)v12+44));
                    } else {
                        v14 = 0;
                    }
                    if ((u32)v14 != (u32)0) {
                        v16 = M32(v14);
                    } else {
                        v16 = 0;
                    }
                    if ((u32)v16 == (u32)0) goto L106;
                    M32(((u32)v16+148)) = c4;
                    M32(((u32)c4+160)) = (M32(((u32)c4+160))|(1<<p3));
                    goto L106;
                }
            }
            v9 = (v9+1);
        } while ((s32)v9 < (s32)5);
        OSReport((u32)lbl_804A214C, p4);
        __assert((u32)&lbl_805D6000, 997, (u32)&lbl_805D6008);
    }
    L106:;
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L112;
    }
    v20 = 0;
    goto L117;
    L112:;
    v18 = (E176_u32*)((u32)lbl_80557248);
    v20 = v18->f[p3];
    L117:;
    if ((u32)v20 != (u32)0) {
        v22 = M32(((u32)v20+44));
    } else {
        v22 = 0;
    }
    if ((u32)v22 != (u32)0) {
        M8(((u32)v22+112)) = p5;
    }
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L131;
    }
    v25 = 0;
    goto L136;
    L131:;
    v23 = (E176_u32*)((u32)lbl_80557248);
    v25 = v23->f[p3];
    L136:;
    if ((u32)v25 != (u32)0) {
        v27 = M32(((u32)v25+44));
    } else {
        v27 = 0;
    }
    if ((u32)v27 != (u32)0) {
        v29 = M32(v27);
    } else {
        v29 = 0;
    }
    if ((u32)v29 != (u32)0) {
        fn_800B5B94(v29, 1, 0);
    }
    if ((s32)p3 >= (s32)0) {
        if ((s32)p3 < (s32)32) goto L157;
    }
    v32 = 0;
    goto L162;
    L157:;
    v30 = (E176_u32*)((u32)lbl_80557248);
    v32 = v30->f[p3];
    L162:;
    if ((u32)v32 != (u32)0) {
        v34 = M32(((u32)v32+44));
    } else {
        v34 = 0;
    }
    if ((u32)v34 != (u32)0) {
        v36 = M32(v34);
    } else {
        v36 = 0;
    }
    if ((u32)v36 != (u32)0) {
        fn_800B5AF0(v36);
    }
    fn_800B5554(p3);
}

u32 fn_800CF600(u32 p3) {
    u32 v1;
    v1 = lbl_805DD6CC;
    if ((u32)M32(((u32)v1+284)) == (u32)0) {
        __assert((u32)&lbl_805D6090, 587, (u32)lbl_804A33E8);
    }
    return ((M8(M32(M32(((u32)v1+284)))+(p3*24)+20)>>7)&0x1);
}

u32 fn_800CF66C(u32 p3) {
    u32 v1;
    v1 = lbl_805DD6CC;
    if ((u32)M32(((u32)v1+284)) == (u32)0) {
        __assert((u32)&lbl_805D6090, 601, (u32)lbl_804A33E8);
    }
    return ((M8(M32(M32(((u32)v1+284)))+(p3*24)+20)>>6)&0x1);
}

u32 fn_800D7B0C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v5;
    v1 = M32(((u32)p3+16));
    v2 = 0;
    for (v5 = 0; (s32)v5 < (s32)v1; v5++) {
        if ((s32)p4 != (s32)((M8(M32(((u32)p3+12))+v2+60)>>6)&0x1)) {
            return 0;
        }
        v2 = (v2+64);
    }
    return 1;
}

u32 fn_800DA4C4(u32 p3) {
    u32 v1;
    u32 v5;
    v1 = M32(((u32)p3+8));
    if ((u32)M32(((u32)v1+40)) != (u32)0) {
        v5 = (M32(((u32)M32(((u32)p3+8))+40))+(fn_80262364(v1)*24));
    } else {
        v5 = 0;
    }
    return v5;
}

u32 fn_800DA578(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v5;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+32));
    if ((u32)M32(((u32)v2+48)) != (u32)0) {
        v5 = (M32(((u32)v2+48))+(fn_8026246C(v1)*12));
    } else {
        v5 = 0;
    }
    return v5;
}

u32 fn_800DA618(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v5;
    v1 = M32(((u32)p3+8));
    v2 = M32(((u32)v1+32));
    if ((u32)M32(((u32)v2+52)) != (u32)0) {
        v5 = (M32(((u32)v2+52))+(fn_802624F0(v1)*12));
    } else {
        v5 = 0;
    }
    return v5;
}

void fn_800E6D14(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v10;
    v1 = lbl_805DD6CC;
    v2 = p3;
    v3 = 0;
    while ((s32)v3 < (s32)M32(((u32)p3+524))) {
        if ((s32)M32(((u32)v2+372)) != (s32)M32(((u32)v2+368))) {
            v10 = M32(M32(((u32)v1+116))+(M32(((u32)v2+364))*320)+312);
            M32(((u32)v2+376)) = (M32(((u32)v2+376))+1);
            if ((s32)M32(((u32)v2+376)) >= (s32)M32(M32(v10)+(M32(((u32)v2+368))*12)+8)) {
                M32(((u32)v2+376)) = 0;
                M32(((u32)v2+368)) = (M32(((u32)v2+368))+1);
                if ((s32)M32(((u32)v2+368)) >= (s32)M32(((u32)v10+4))) {
                    M32(((u32)v2+368)) = 0;
                }
                M32(((u32)v2+372)) = (M32(((u32)v2+372))+1);
                if ((s32)M32(((u32)v2+372)) >= (s32)M32(((u32)v10+4))) {
                    M32(((u32)v2+372)) = 0;
                }
            }
        }
        v2 = (v2+16);
        v3 = (v3+1);
    }
}

void fn_800E853C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = (p3+528);
    for (v2 = 0; (s32)v2 < (s32)8; v2++) {
        M32(v1) = 0;
        M32(((u32)v1+4)) = -1;
        M32(((u32)v1+8)) = 0;
        M32(((u32)v1+12)) = 0;
        M32(((u32)v1+16)) = 0;
        M32(((u32)v1+20)) = 0;
        M32(((u32)v1+24)) = 0;
        M32(((u32)v1+28)) = 0;
        M32(((u32)v1+32)) = 0;
        M32(((u32)v1+36)) = 0;
        M32(((u32)v1+40)) = 0;
        M32(((u32)v1+44)) = 0;
        M32(((u32)v1+48)) = 0;
        M32(((u32)v1+52)) = 0;
        M32(((u32)v1+56)) = 0;
        M32(((u32)v1+60)) = 0;
        M32(((u32)v1+64)) = 0;
        M32(((u32)v1+68)) = 0;
        v1 = (v1+72);
    }
    M32(((u32)p3+1104)) = 0;
}

u32 grGetItemData(u32 p3) {
    u32 v1;
    u32 v5;
    u32 c0;
    v1 = M32(((u32)p3+8));
    if ((u32)M32(((u32)v1+44)) != (u32)0) {
        c0 = fn_8000A2A0(v1);
        if ((s32)c0 == (s32)0) {
            v5 = (M32(((u32)M32(((u32)p3+8))+44))+(fn_802623E8(c0)*20));
            goto L19;
        }
    }
    v5 = 0;
    L19:;
    return v5;
}

