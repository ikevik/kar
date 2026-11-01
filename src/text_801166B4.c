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
typedef struct { u8 :7; u8 f:1; } BFu8_7_1;
typedef struct { u8 :6; u8 f:1; } BFu8_6_1;
typedef struct { u8 :5; u8 f:1; } BFu8_5_1;
typedef struct { u8 :4; u8 f:1; } BFu8_4_1;
typedef struct { u8 :3; u8 f:1; } BFu8_3_1;
typedef struct { u8 :2; u8 f:2; } BFu8_2_2;
typedef struct { u8 :2; u8 f:1; } BFu8_2_1;
typedef struct { u8 :1; u8 f:3; } BFu8_1_3;
typedef struct { u8 :1; u8 f:1; } BFu8_1_1;
typedef struct { u8 f:2; } BFu8_0_2;
typedef struct { u8 f:1; } BFu8_0_1;
typedef struct { u16 :7; u16 f:8; } BFu16_7_8;
typedef struct { u32 w[13]; } S52;
typedef struct { u32 w[9]; } S36;
typedef struct { u32 w[3]; } S12;
extern u8 lbl_804A7CA0[];
extern u8 lbl_804A7CB4[];
extern const float lbl_805DFC18;
extern u8 lbl_804A7EDC[];
extern u8 lbl_804A7EF4[];
extern const float lbl_805DFC78;
extern const float lbl_805DFC7C;
extern u8 jumptable_804A7F10[];
extern u8 lbl_804A8280[];
extern u8 lbl_804A82A0[];
void fn_8011BA1C(void);
extern const float lbl_805DFCC4;
extern u8 lbl_804A82C0[];
extern u8 lbl_804A82E0[];
extern u8 lbl_804A8358[];
void fn_8011D40C(void);
void fn_8011D7FC(void);
extern const float lbl_805DFD38;
extern u8 lbl_804A8408[];
extern u8 lbl_804A8428[];
extern u8 lbl_804A8520[];
extern u8 lbl_804A85C0[];
extern u8 lbl_804A85E0[];
extern u8 lbl_804A85F8[];
extern const float lbl_805DFE68;
extern u8 lbl_804A8680[];
void fn_80122D58(u32);
extern const float lbl_805DFE6C;
extern u8 lbl_804A86A0[];
extern u8 lbl_804A86C0[];
extern u8 lbl_804A88B0[];
extern u8 lbl_804A88D0[];
extern u8 lbl_805DE351;
void fn_80124C20(void);
void fn_80124BB0(u32);
extern const float lbl_805DFEE0;
extern const float lbl_805DFEE4;
extern u8 lbl_804A88F0[];
extern u8 lbl_804A8908[];
extern u8 lbl_804A89D0[];
extern u8 lbl_804A89EC[];
void fn_80125760(void);
extern const float lbl_805DFF00;
extern u8 lbl_804A8A08[];
extern u8 lbl_804A8A20[];
extern u8 lbl_804A8AF0[];
extern u8 lbl_804A7B98[];
extern u8 lbl_804A8E48[];
extern u8 lbl_804A8E64[];
extern u8 lbl_804A8E80[];
extern u8 lbl_804A9020[];
extern u8 lbl_804A9050[];
extern u8 lbl_804A9070[];
void fn_80129980(u32);
extern const float lbl_805DFFC0;
extern const float lbl_805DFFC4;
extern u8 lbl_804A9090[];
extern u8 lbl_804A90B8[];
void fn_8012ED40(u32);
extern const float lbl_805E0100;
extern const float lbl_805E0104;
void fn_8012F10C(void);
extern const float lbl_805E010C;
extern const float lbl_805E0110;
void fn_8012F54C(void);
extern const float lbl_805E011C;
extern const float lbl_805E0128;
extern u8 lbl_80558758[];
void fn_80130CD8(u32);
extern const float lbl_805E0150;
extern const float lbl_805E0154;
void fn_80130F74(void);
extern const float lbl_805E0158;
extern const float lbl_805E015C;
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
extern u32 lbl_805DD788;
extern u32 lbl_805DD784;
extern u32 lbl_805DD780;
extern u8 lbl_804AA008[];
extern u8 lbl_804AA2D0[];
extern const float lbl_805E0160;
extern u8 lbl_804AA538[];
extern u8 lbl_804A9B50[];
extern u8 lbl_80559A90[];
void fn_80138AE0(u32, u32);
extern u8 lbl_804A9F48[];
extern u32 lbl_805D65F0;
extern u32 lbl_805D65F8;
void fn_80138D04(u32);
extern u8 lbl_805DE353;
void fn_801393A8(u32);
extern u8 lbl_805DE352;
extern u8 fn_8042A22C[];
extern u8 lbl_804AA638[];
extern u8 lbl_804AA644[];
extern u8 lbl_804AA654[];
extern u8 lbl_804AA664[];
extern u8 lbl_804AA674[];
extern u8 lbl_804AA684[];
extern u8 lbl_804AA6B0[];
extern u8 lbl_804AA6C0[];
extern u8 lbl_804AA6F4[];
extern u8 lbl_804AA704[];
extern u8 lbl_804AA7AC[];
extern u8 lbl_804AA7BC[];
extern u8 lbl_804AA7CC[];
extern u8 lbl_804AA7DC[];
extern u8 lbl_804AA7F0[];
extern u8 lbl_804AA804[];
extern u8 lbl_804AA818[];
extern u8 lbl_804AA82C[];
extern u8 lbl_804AA844[];
extern u8 lbl_804AA854[];
extern u8 lbl_804AAA30[];
extern u8 lbl_804AA21C[];
extern const float lbl_805E04E8;
extern const float lbl_805E04EC;
extern u8 lbl_804AAA48[];
void fn_801470CC(void);
extern u8 lbl_804AAA60[];
void fn_80147588(void);
extern const float lbl_805E04F8;
extern u32 lbl_805DD7EC;
extern u32 lbl_805DD7E8;
extern u32 lbl_805DD7F0;
extern u8 lbl_804AAA78[];
void fn_801479C0(void);
extern const float lbl_805E0504;
extern u32 lbl_805D6670;
extern u8 lbl_804AAA90[];
extern u8 lbl_804AAAB0[];
extern u8 lbl_804AAAD0[];
extern const float lbl_805E0530;
extern const float lbl_805E0534;
extern const float lbl_805E0538;
extern const float lbl_805E053C;
extern u8 lbl_804AAAF0[];
void fn_80149DEC(u32);
extern const float lbl_805E0550;
extern const float lbl_805E0554;
extern const float lbl_805E055C;
extern const float lbl_805E0560;
extern const float lbl_805E0558;
extern u8 lbl_804AAB60[];
extern const float lbl_805E0568;
extern const float lbl_805E056C;
extern u8 lbl_804AAB80[];
void fn_8014A498(u32);
extern u8 lbl_804AABA0[];
void fn_8014A750(u32);
extern const double lbl_805E0578;
extern const float lbl_805E0570;
extern u8 lbl_804AABC0[];
extern const float lbl_805E0588;
extern const float lbl_805E058C;
extern u8 lbl_804AABE0[];
void fn_8014ABB4(u32);
extern u8 lbl_804AAC00[];
extern u8 lbl_804AAC20[];
extern u8 lbl_804AAC40[];
extern const float lbl_805E05A8;
extern const float lbl_805E05AC;
extern u8 lbl_804AAC60[];
void fn_8014B84C(u32);
extern u8 lbl_804AAC80[];
extern const float lbl_805E05B8;
extern const float lbl_805E05BC;
extern u8 lbl_804AACA0[];
void fn_8014BD28(u32);
extern u8 lbl_804AACC0[];
void fn_8014C0E0(u32);
extern const float lbl_805E05C0;
extern const float lbl_805E05C8;
extern u8 lbl_804AACE0[];
extern u8 lbl_804AAD00[];
extern u8 lbl_804AAD20[];
void fn_8014CB3C(u32);
extern const float lbl_805E05E0;
extern const float lbl_805E05E4;
extern u8 lbl_804AAD40[];
void fn_8014CC7C(u32);
extern const float lbl_805E05E8;
extern const float lbl_805E05EC;
extern u8 lbl_804AAD60[];
extern u8 lbl_804AAD80[];
void fn_8014D3A0(void);
extern const float lbl_805E0600;
extern u8 lbl_804AADA8[];
extern u8 lbl_804AADD0[];
extern const float lbl_805E0620;
extern const float lbl_805E0624;
extern u8 lbl_804AADF0[];
extern u8 lbl_804AAE10[];
void fn_8014DDC8(u32);
extern const float lbl_805E0630;
extern const float lbl_805E0634;
extern u8 lbl_804AAE30[];
void fn_8014DF08(u32);
extern const float lbl_805E0638;
extern const float lbl_805E063C;
extern u8 lbl_804AAE58[];
void fn_8014E198(void);
extern const float lbl_805E0640;
extern u32 lbl_805DD638;
extern const float lbl_805E0650;
extern u8 lbl_804AAE80[];
extern u8 lbl_804AAEA0[];
extern u8 lbl_804AAEC8[];
extern const float lbl_805E0670;
extern const float lbl_805E0674;
extern u8 lbl_804AAEF0[];
extern u8 lbl_804AAF18[];
void fn_8014F004(u32);
extern const float lbl_805E0680;
extern const float lbl_805E0684;
extern u8 lbl_804AAF38[];
void fn_8014F1F8(u32);
extern const float lbl_805E0688;
extern const float lbl_805E068C;
extern u8 lbl_804AAF58[];
void fn_8014F3EC(void);
extern u8 lbl_804AAF90[];
extern u8 lbl_804AAFBC[];
extern u8 lbl_804AB008[];
extern u8 lbl_804AB028[];
extern u8 lbl_804AB060[];
extern u8 lbl_804AB080[];
extern u8 lbl_804AB0A0[];
extern u8 lbl_804AB138[];
extern u8 lbl_804AB158[];
extern u8 lbl_804AB178[];
extern u8 lbl_804AB198[];
extern u8 lbl_804AB1B8[];
extern const float lbl_805E0748;
extern const float lbl_805E074C;
extern u8 lbl_804AB200[];
extern const float lbl_805E0750;
extern const float lbl_805E0754;
extern u8 lbl_804AB220[];
extern const float lbl_805E0764;
extern const float lbl_805E0760;
extern u8 lbl_804AB240[];
extern u8 lbl_804AB260[];
extern u8 lbl_804AB280[];
extern u8 lbl_804AB2A0[];
void fn_801555B4(u32);
extern const float lbl_805E0780;
extern const float lbl_805E0784;
extern u8 lbl_804AB2C0[];
void fn_801556FC(void);
extern const float lbl_805E0788;
extern const float lbl_805E078C;
extern const float lbl_805E0790;
extern const float lbl_805E0794;
extern u8 lbl_804AB2E8[];
void fn_801558CC(u32);
extern u8 lbl_804AB310[];
void fn_80155B18(void);
extern u8 lbl_804AB338[];
extern u8 lbl_804AB368[];
extern u8 lbl_804AB3A0[];
void fn_801564D8(void);
extern const float lbl_805E07A8;
extern u8 lbl_804AB3C8[];
extern u8 lbl_804AB3F0[];
extern u8 lbl_804AB418[];
extern u8 lbl_804AB438[];
extern u8 lbl_804AB460[];
extern u8 lbl_804AB480[];
extern u8 lbl_804AB4A8[];
extern u8 lbl_804AB4D0[];
extern u8 lbl_804AB4F8[];
extern u8 lbl_804AB518[];
extern u8 lbl_804AB540[];
extern u8 lbl_804AB560[];
extern u8 lbl_804AB588[];
extern u8 lbl_804AB5A8[];
void fn_801599A0(u32);
extern const float lbl_805E0848;
extern const float lbl_805E084C;
extern u8 lbl_804AB5C8[];
void fn_80159B34(u32);
extern const float lbl_805E0850;
extern const float lbl_805E0854;
extern u8 lbl_804AB5E8[];
void fn_80159D24(void);
extern u8 lbl_804AB620[];
extern u8 lbl_804AB640[];
extern u8 lbl_804AB674[];
extern u8 lbl_804AB694[];
extern u8 lbl_804AB6E0[];
extern u8 lbl_804AB708[];
extern u8 lbl_804AB740[];
extern u8 lbl_804AB760[];
extern u8 lbl_804AB788[];
extern u8 lbl_804AB820[];
extern u8 lbl_804AB848[];
extern u8 lbl_804AB870[];
extern u8 lbl_804AB898[];
extern u8 lbl_804AB8C0[];
extern u8 lbl_804AB908[];
extern u8 lbl_804AB92C[];
void fn_8015EB60(u32);
extern const float lbl_805E08F0;
extern const float lbl_805E08F4;
extern const float lbl_805E08F8;
extern const float lbl_805E08FC;
extern u8 lbl_804AB950[];
extern const float lbl_805E090C;
extern const float lbl_805E0908;
extern u8 lbl_804AB970[];
extern u8 lbl_804AB998[];
extern u8 lbl_804AB9B8[];
extern u8 lbl_804AB9D8[];
void fn_8015FFAC(u32);
extern const float lbl_805E0928;
extern const float lbl_805E092C;
extern u8 lbl_804AB9F8[];
extern const float lbl_805E0938;
extern u8 lbl_804ABA28[];
extern u8 lbl_804ABA48[];
void fn_80160620(void);
extern const float lbl_805E0940;
extern const float lbl_805E0944;
extern u8 lbl_804ABA68[];
extern u8 lbl_804ABA88[];
void fn_801609BC(u32);
extern const float lbl_805E0950;
extern const float lbl_805E0954;
extern u8 lbl_804ABAB0[];
extern u8 lbl_804ABAD0[];
extern u8 lbl_804ABBE4[];
extern u8 lbl_804ABC08[];
extern u8 lbl_804ABC28[];
extern u8 lbl_804ABC48[];
extern const float lbl_805E0990;
extern u8 lbl_804ABC70[];
extern const float lbl_805E09A0;
extern u8 lbl_804AC5A0[];
extern u8 lbl_804AC5C8[];
void fn_80162A40(u32);
extern const float lbl_805E09A8;
extern const float lbl_805E09AC;
extern u8 lbl_804AC5E8[];
void fn_80162D84(u32);
extern const float lbl_805E09B0;
extern u8 lbl_804AC610[];
void fn_80163290(void);
extern u8 lbl_804AC638[];
extern u8 lbl_804AC658[];
void fn_801638B0(void);
extern const float lbl_805E09D8;
extern u8 lbl_804AC678[];
void fn_80163D20(u32);
extern const float lbl_805E09E4;
extern const float lbl_805E09E8;
extern u8 lbl_804AC6A0[];
void fn_80163F90(u32);
extern const float lbl_805E09F0;
extern u8 lbl_804AC6C8[];
void fn_80164210(u32);
extern const float lbl_805E0A00;
extern const float lbl_805E0A10;
extern const float lbl_805E0A14;
extern u8 lbl_804AC6F0[];
void fn_801643DC(u32);
extern u32 lbl_805D6A70;
extern u32 lbl_805D6A78;
extern const float lbl_805E0A18;
extern u8 lbl_804AC710[];
void fn_80164680(u32);
extern const float lbl_805E0A1C;
extern const float lbl_805E0A20;
extern const float lbl_805E0A24;
extern u8 lbl_804AC730[];
extern u8 lbl_804AC750[];
extern const float lbl_805E0A30;
extern u8 lbl_804AC770[];
void fn_801654DC(u32);
extern const float lbl_805E0A34;
extern u8 lbl_804AC790[];
void fn_80165624(u32);
extern const float lbl_805E0A38;
extern const float lbl_805E0A3C;
extern u8 lbl_804AC7B0[];
extern const float lbl_805E0A48;
extern const float lbl_805E0A4C;
extern u8 lbl_804AC7D0[];
void fn_80165BF4(u32);
extern u8 lbl_804AC7F0[];
extern u8 lbl_804AC810[];
extern u8 lbl_804AC830[];
extern u8 lbl_804AC850[];
extern const float lbl_805E0A88;
extern const float lbl_805E0A8C;
extern u8 lbl_804AC878[];
void fn_801674E0(u32);
extern u32 lbl_805D6AF8;
extern u32 lbl_805D6B00;
extern const float lbl_805E0A90;
extern u8 lbl_804AC898[];
void fn_80167784(u32);
extern const float lbl_805E0A94;
extern const float lbl_805E0A98;
extern u8 lbl_804AC8B8[];
void fn_80167FD0(void);
extern u8 lbl_804AC8D8[];
extern u8 lbl_804AC8F8[];
extern const float lbl_805E0AB8;
extern u8 lbl_804AC918[];
extern u8 lbl_804AC938[];
extern u8 lbl_804AC958[];
extern u8 lbl_804AC978[];
extern u8 lbl_804AC998[];
extern u8 lbl_804AC9B8[];
extern u8 lbl_804AC9D8[];
extern u8 lbl_804ACA00[];
extern const float lbl_805E0B10;
extern const float lbl_805E0B14;
extern u8 lbl_804ACA28[];
extern u8 lbl_804ACA48[];
extern u32 lbl_805D6BA0;
extern u32 lbl_805D6BA8;
extern const float lbl_805E0B18;
extern u8 lbl_804ACA68[];
void fn_8016B6D4(u32);
extern const float lbl_805E0B1C;
extern u8 lbl_804ACA88[];
extern u8 lbl_804ACAA8[];
extern u8 lbl_804ACAC8[];
extern u8 lbl_804ACAE8[];
extern u8 lbl_804ACB08[];
extern u8 lbl_804ACB28[];
extern u8 lbl_804ACB48[];
extern const float lbl_805E0B58;
extern u8 lbl_804ACB68[];
extern const float lbl_805E0B60;
extern u8 lbl_804ACB88[];
extern u8 lbl_804ACBA8[];
extern const float lbl_805E0B78;
extern const float lbl_805E0B7C;
extern u8 lbl_804ACBD0[];
void fn_8016EBD0(u32);
extern u32 lbl_805D6C10;
extern u32 lbl_805D6C18;
extern const float lbl_805E0B80;
extern u8 lbl_804ACBF0[];
void fn_8016EE74(u32);
extern const float lbl_805E0B84;
extern u8 lbl_804ACC10[];
void fn_8016F4E4(void);
extern const float lbl_805E0B88;
extern u8 lbl_804ACC38[];
extern const float lbl_805E0BA0;
extern u8 lbl_804ACC58[];
extern const float lbl_805E0BA8;
extern u8 lbl_804ACC80[];
extern u8 lbl_804ACCA0[];
extern u8 lbl_804ACCC0[];
void fn_80170704(u32);
extern const float lbl_805E0BB8;
extern const float lbl_805E0BBC;
extern const float lbl_805E0BC0;
extern const float lbl_805E0BC4;
extern u8 lbl_804ACCE0[];
void fn_801708D0(u32);
extern const float lbl_805E0BC8;
extern const float lbl_805E0BCC;
extern u8 lbl_804ACD00[];
void fn_80170B14(u32);
extern const float lbl_805E0BD0;
extern const float lbl_805E0BD4;
extern u8 lbl_804ACD28[];
void fn_80170D58(u32);
extern u8 lbl_804ACD50[];
extern u8 lbl_804ACD94[];
extern u8 lbl_804ACDB8[];
extern u8 lbl_804ACDD8[];
extern const float lbl_805E0C08;
extern const float lbl_805E0C0C;
extern u8 lbl_804ACDF8[];
void fn_801729E0(u32);
extern const float lbl_805E0C10;
extern u8 lbl_804ACE18[];
extern u8 lbl_804ACE38[];
extern const float lbl_805E0C30;
extern u8 lbl_804ACE84[];
extern const float lbl_805E0C40;
extern u8 lbl_804ACECC[];
extern const float lbl_805E0C50;
extern u8 lbl_804ACF14[];
extern u8 lbl_804ACF38[];
extern u8 lbl_804ACF58[];
extern const float lbl_805E0C68;
extern u8 lbl_804ACF78[];
extern const float lbl_805E0C78;
extern u8 lbl_804ACF98[];
extern u8 lbl_804ACFC0[];
extern const float lbl_805E0C98;
extern const float lbl_805E0C9C;
extern u8 lbl_804ACFE8[];
extern u8 lbl_804AD004[];
extern u8 lbl_804AD024[];
void fn_80177DD8(u32);
extern const float lbl_805E0CA0;
extern const float lbl_805E0CA4;
extern u8 lbl_804AD048[];
void fn_801780D0(u32);
extern u8 lbl_804AD068[];
extern u8 lbl_804AD088[];
extern u8 lbl_804AD0A8[];
extern u8 lbl_804AD0C8[];
extern u8 lbl_804AD0E8[];
extern u8 lbl_804AD110[];
extern u8 lbl_804AD130[];
extern u8 lbl_804AD158[];
extern u8 lbl_804AD194[];
extern u8 lbl_804AD178[];
extern const float lbl_805E0D08;
extern const float lbl_805E0D0C;
extern u32 lbl_805D6DD0;
extern u32 lbl_805D6DD8;
extern u8 lbl_804AD1B0[];
extern u8 lbl_804AD1CC[];
void fn_8017BCE4(u32);
extern const float lbl_805E0D10;
extern const float lbl_805E0D14;
extern const float lbl_805E0D18;
extern const float lbl_805E0D1C;
extern u8 lbl_804AD1F0[];
extern u8 lbl_804AD218[];
extern u8 lbl_804AD228[];
extern u8 lbl_804AD238[];
extern u32 lbl_805D6DF8;
extern u8 lbl_804AD244[];
extern u8 lbl_804AD258[];
extern u8 lbl_804AD2F8[];
extern u8 lbl_804AD318[];
extern u32 lbl_805D6E00;
extern const float lbl_805E0E58;
extern const float lbl_805E0E5C;
extern const float lbl_805E0E60;
extern const float lbl_805E0E64;
extern u8 lbl_804AD670[];
void fn_801832F4(u32);
extern const float lbl_805E0E68;
extern const float lbl_805E0E6C;
extern const float lbl_805E0E70;
extern const float lbl_805E0E74;
extern const float lbl_805E0E78;
extern u8 lbl_804AD698[];
void fn_80183874(void);
extern const float lbl_805E0E80;
extern const float lbl_805E0E84;
extern const float lbl_805E0E88;
extern const float lbl_805E0E8C;
extern const float lbl_805E0E90;
extern u8 lbl_804AD6C8[];
void fn_8018436C(void);
extern u8 lbl_804AD6E8[];
void fn_80184858(void);
extern const float lbl_805E0E98;
extern const float lbl_805E0E9C;
extern u8 lbl_804AD708[];
void fn_80184C3C(u32);
extern const float lbl_805E0EA0;
extern const float lbl_805E0EA4;
extern const float lbl_805E0EA8;
extern const float lbl_805E0EAC;
extern const float lbl_805E0EB0;
extern u8 lbl_804AD728[];
void fn_80184EC0(void);
extern const float lbl_805E0EB8;
extern const float lbl_805E0EBC;
extern u8 lbl_804AD748[];
void fn_801850D8(void);
extern const float lbl_805E0EC0;
extern const float lbl_805E0EC4;
extern const float lbl_805E0EC8;
extern const float lbl_805E0ECC;
extern u8 lbl_804AD768[];
void fn_80185388(void);
extern u8 lbl_804AD788[];
void fn_80185684(void);
extern const float lbl_805E0ED8;
extern const float lbl_805E0EDC;
extern u8 lbl_804AD7A8[];
void fn_801857D8(u32);
extern u8 lbl_804AD810[];
extern u8 lbl_804AD888[];
extern u8 lbl_804AD8D0[];
extern u8 lbl_804AD908[];
extern u8 lbl_804AD94C[];
extern u8 lbl_804AD95C[];
extern u32 lbl_805DD804;
extern const float lbl_805E0FF0;
extern const float lbl_805E0FF4;
extern const float lbl_805E1018;
extern u8 lbl_80559BF4[];
extern const float lbl_805E1040;
extern u8 lbl_804ADBD8[];
extern u32 lbl_805DD820;
extern u32 lbl_805DD81C;
extern u8 lbl_804ADBF4[];
extern u8 lbl_804ADBE4[];
extern u32 lbl_805DD810;
extern u32 lbl_805DD814;
extern const float lbl_805E1088;
extern const double lbl_805E1098;
extern const float lbl_805E10A0;
extern const float lbl_805E10A4;
extern u8 lbl_804ADBC0[];
extern u8 lbl_80559F7C[];
extern u32 lbl_805DD840;
extern const float lbl_805E10C8;
extern u8 lbl_804AE028[];
extern u8 lbl_804AE0A0[];
extern u8 lbl_80559F40[];
extern u8 hsdJObj[];
extern u8 lbl_804AE0E8[];
extern const float lbl_805E1138;
extern u32 lbl_805D6F20;
extern u8 lbl_804AE160[];
extern u8 lbl_804AE184[];
extern u8 lbl_804AE1B8[];
extern const float lbl_805E11AC;
extern u8 lbl_804AE2B0[];
extern const float lbl_805E11F0;
extern const float lbl_805E11F8;
extern const float lbl_805E11FC;
void fn_801A0F88(void);
void fn_801A0F8C(void);
void fn_801A1320(u32);
extern const float lbl_805E1250;
extern const float lbl_805E1254;
void fn_801A1724(void);
void fn_801A1720(void);
extern const float lbl_805E1258;
extern const float lbl_805E125C;
extern const float lbl_805E1270;
extern const float lbl_805E1274;
extern const float lbl_805E1278;
extern const float lbl_805E127C;
extern const float lbl_805E1288;
extern const float lbl_805E128C;
void fn_801A2D78(void);
void fn_801A2D7C(void);
extern const float lbl_805E1290;
extern const float lbl_805E1294;
extern const float lbl_805E12A8;
extern const float lbl_805E12AC;
extern const float lbl_805E12B0;
extern const float lbl_805E12B4;
extern u8 lbl_804AE3C0[];
void fn_801A5250(void);
extern const float lbl_805E12E4;
extern u8 lbl_804AF51C[];
extern u8 lbl_804AE428[];
extern u8 lbl_80559EE8[];
extern const float lbl_805E1328;
extern const float lbl_805E1390;
extern const float lbl_805E1394;
extern const float lbl_805E13A0;
extern const float lbl_805E13A4;
extern const float lbl_805E13A8;
extern const float lbl_805E13B0;
extern const float lbl_805E13B4;
extern const float lbl_805E13B8;
extern const float lbl_805E13BC;
extern const float lbl_805E13C4;
extern const float lbl_805E13C0;
void fn_801AB8E0(void);
void fn_801AB900(void);
extern const float lbl_805E13CC;
extern const float lbl_805E13C8;
extern const float lbl_805E13D4;
extern const float lbl_805E13D0;
extern const float lbl_805E13D8;
extern const float lbl_805E13DC;
extern const float lbl_805E13E0;
extern const float lbl_805E13E4;
extern const float lbl_805E13E8;
extern const float lbl_805E13EC;
extern const float lbl_805E13F0;
extern const float lbl_805E13F4;
extern const float lbl_805E13F8;
extern const float lbl_805E13FC;
extern const float lbl_805E1400;
extern const float lbl_805E1404;
extern const float lbl_805E1410;
extern const float lbl_805E1414;
extern const float lbl_805E1418;
extern const float lbl_805E141C;
extern u8 lbl_804AF630[];
extern const float lbl_805E1420;
extern const float lbl_805E1424;
extern const float lbl_805E1428;
extern const float lbl_805E142C;
extern const float lbl_805E1430;
extern const float lbl_805E1434;
void fn_801AD46C(void);
void fn_801AD48C(void);
void fn_801ADD18(void);
extern const float lbl_805E1450;
extern const float lbl_805E1454;
extern const float lbl_805E1458;
extern const float lbl_805E145C;
extern const float lbl_805E1478;
extern const float lbl_805E147C;
void fn_801AEB6C(void);
extern const float lbl_805E1480;
extern const float lbl_805E1484;
void fn_801AF3CC(u32);
extern const float lbl_805E14A0;
extern const float lbl_805E14A4;
void fn_801AF618(void);
void fn_801AF5D4(u32, u32);
void fn_801AF880(u32);
extern const float lbl_805E14A8;
extern const float lbl_805E14AC;
void fn_801AFFEC(u32);
void fn_801AFF9C(u32);
void fn_801AFCE0(u32);
extern const float lbl_805E14B0;
extern const float lbl_805E14B4;
void fn_801AFF1C(void);
void fn_801AFED8(u32, u32);
extern const float lbl_805E14B8;
extern const float lbl_805E14BC;
void fn_801AFBB0(u32);
extern const float lbl_805E14C0;
extern const float lbl_805E14C4;
extern const float lbl_805E14C8;
extern const float lbl_805E14CC;
void fn_801B1084(u32);
void fn_801B103C(u32);
extern const float lbl_805E14D0;
extern const float lbl_805E14D4;
extern const float lbl_805E14D8;
extern const float lbl_805E14DC;
extern const float lbl_805E14E0;
extern const float lbl_805E14E4;
void fn_801B138C(void);
extern const double lbl_805E14F0;
extern const float lbl_805E14F8;
extern const float lbl_805E14FC;
void fn_801B15C8(void);
extern const float lbl_805E1508;
extern const float lbl_805E150C;
void fn_801B1954(void);
extern const float lbl_805E1580;
extern const double lbl_805E1588;
extern const float lbl_805E159C;
extern const float lbl_805E15B0;
extern const float lbl_805E15B4;
extern const float lbl_805E15B8;
extern const float lbl_805E15BC;
extern const double lbl_805E15C0;
extern const double lbl_805E15E0;
extern const float lbl_805E15C8;
extern const float lbl_805E15CC;
extern const float lbl_805E15D0;
extern const float lbl_805E15D4;
extern const float lbl_805E15D8;
extern const float lbl_805E15F0;
extern const float lbl_805E15F8;
extern const float lbl_805E15FC;
void fn_801B42F8(void);
void fn_801B424C(void);
extern const float lbl_805E1608;
extern const float lbl_805E160C;
extern const float lbl_805E1618;
void fn_801B49B0(u32);
extern const float lbl_805E1620;
extern const float lbl_805E1624;
void fn_801B4BE8(void);
void fn_801B4BA4(u32, u32);
void fn_801B4C40(u32);
void fn_801B4CD0(u32);
extern const float lbl_805E1628;
extern const float lbl_805E162C;
extern const float lbl_805E1630;
extern const float lbl_805E1634;
void fn_801B50CC(void);
void fn_801B50C8(void);
extern const float lbl_805E1658;
extern const float lbl_805E165C;
extern const float lbl_805E1660;
extern const float lbl_805E1664;
extern const float lbl_805E1668;
void fn_801B5DCC(void);
extern const float lbl_805E1670;
void fn_801B60B4(void);
extern const float lbl_805E167C;
extern const float lbl_805E1678;
extern const float lbl_805E1680;
void fn_801B658C(u32);
extern const float lbl_805E168C;
extern const float lbl_805E1688;
extern const float lbl_805E1690;
extern const float lbl_805E1694;
void fn_801B69D0(void);
extern const float lbl_805E1698;
extern const float lbl_805E169C;
extern const float lbl_805E16A8;
extern const float lbl_805E16AC;
void fn_801B6E58(void);
extern const float lbl_805E16B8;
extern const float lbl_805E16BC;
void fn_801B71C4(void);
extern const float lbl_805E16C0;
extern const float lbl_805E16C4;
extern const float lbl_805E16D0;
extern const float lbl_805E16D4;
void fn_801B7650(void);
extern const float lbl_805E16E0;
extern const float lbl_805E16F8;
extern const float lbl_805E1700;
extern const float lbl_805E1714;
extern const float lbl_805E1730;
extern const float lbl_805E1734;
extern const float lbl_805E1738;
extern const float lbl_805E173C;
extern const float lbl_805E1740;
extern const float lbl_805E1744;
extern const float lbl_805E1748;
extern const float lbl_805E1750;
void fn_801BA658(void);
extern const float lbl_805E1790;
extern const float lbl_805E1794;
extern const float lbl_805E17A8;
extern const float lbl_805E17AC;
extern const float lbl_805E17E0;
extern const float lbl_805E17F0;
extern const float lbl_805E17F8;
extern const float lbl_805E1810;
extern const float lbl_805E1814;
extern const float lbl_805E1818;
extern const float lbl_805E181C;
extern const float lbl_805E1838;
extern const float lbl_805E183C;
extern const float lbl_805E1840;
extern const float lbl_805E1844;
extern const float lbl_805E1848;
extern const float lbl_805E1850;
extern const float lbl_805E1854;
extern const float lbl_805E1858;
extern const float lbl_805E185C;
extern const float lbl_805E1860;
extern const float lbl_805E1864;
extern const float lbl_805E186C;
extern const float lbl_805E1868;
extern const float lbl_805E1874;
extern const float lbl_805E1870;
extern const float lbl_805E1878;
extern const float lbl_805E187C;
extern const float lbl_805E1880;
extern const float lbl_805E1884;
extern const float lbl_805E1888;
extern const float lbl_805E188C;
extern const float lbl_805E1890;
extern const float lbl_805E1894;
extern const float lbl_805E1898;
extern const float lbl_805E189C;
extern const float lbl_805E18A0;
extern const float lbl_805E18A4;
extern const float lbl_805E18B0;
extern const float lbl_805E18B4;
extern const float lbl_805E18B8;
extern const float lbl_805E18BC;
extern u8 lbl_804AFFC0[];
extern const float lbl_805E18C0;
extern const float lbl_805E18C4;
extern const float lbl_805E18C8;
extern const float lbl_805E18CC;
extern const float lbl_805E18E8;
extern const float lbl_805E18EC;
extern const float lbl_805E18F0;
extern const float lbl_805E18F4;
extern const float lbl_805E1900;
extern const float lbl_805E1904;
extern const float lbl_805E1908;
extern const float lbl_805E1910;
extern const float lbl_805E1914;
extern const float lbl_805E1920;
extern const float lbl_805E1924;
extern const float lbl_805E192C;
extern const float lbl_805E1928;
extern const float lbl_805E1934;
extern const float lbl_805E1930;
extern const float lbl_805E1938;
extern const float lbl_805E193C;
extern const float lbl_805E1940;
extern const float lbl_805E1944;
extern const float lbl_805E1960;
extern const float lbl_805E1964;
extern const float lbl_805E1968;
extern const float lbl_805E196C;
extern const float lbl_805E1970;
extern const float lbl_805E1974;
extern const float lbl_805E1978;
extern const float lbl_805E197C;
extern const float lbl_805E1988;
extern const float lbl_805E198C;
extern const float lbl_805E1990;
extern const float lbl_805E1994;
extern u8 lbl_804B0798[];
extern const float lbl_805E1998;
extern const float lbl_805E199C;
extern const float lbl_805E19A0;
extern const float lbl_805E19A4;
extern const float lbl_805E19C0;
extern const float lbl_805E19C4;
extern const float lbl_805E19C8;
extern u32 lbl_805D6F98;
extern u8 lbl_804B081C[];
extern u8 lbl_804B080C[];
extern u32 lbl_805DD838;
extern u32 lbl_805DD848;
extern u32 lbl_805DD83C;
extern u32 lbl_805DD844;
extern u8 lbl_8055A03C[];
extern u32 lbl_805D6FB8;
extern u32 lbl_805D6FC0;
extern const float lbl_805E19E8;
extern u32 lbl_805DE340;
extern u8 lbl_804B07E0[];
extern u32 lbl_805D6F90;
extern const float lbl_805E1A00;
extern const float lbl_805E1A04;
extern const float lbl_805E1A08;
extern u32 lbl_805DD850;
extern const float lbl_805E1A20;
extern const float lbl_805E1A30;
extern u32 lbl_805D6FE8;
extern u8 lbl_804B0A30[];
extern u8 lbl_804B0A94[];
extern const float lbl_805E1A4C;
extern u8 lbl_804B0A54[];
extern u8 lbl_804B0A88[];
extern const double lbl_805E1AE0;
void fn_801D3EC0(void);
u32 fn_80112044(void);
u32 fn_8044F674(u32, u32, u32, u32, u32, u32, u32, u32);
void fn_8044F350(u32);
void fn_8044F800(u32, u32, u32);
void fn_80114EEC(u32);
void fn_80114F04(u32);
u32 fn_8011582C(u32);
u32 fn_80112050(void);
void fn_80059520(u32, ...);
u32 fn_8040A64C();
u32 fn_800547E0(u32);
void fn_80114D08(u32, u32, u32, float, float);
u32 fn_8022CB8C(u32);
u32 fn_8022CBC0(u32);
void fn_80119C38(u32);
u32 fn_80114904(u32, u32);
void fn_8040BE00(u32, u32);
void HSD_GObj_AddProc();
void fn_80114D9C(u32, u32, float, float);
u32 fn_80114E24(u32, u32, u32, u32);
u32 fn_80055AF0(u32, u32);
u32 fn_8005E7D8(u32);
void fn_8011CA98(u32);
u32 sAObjAnimeAll(u32);
void fn_8011CE64(void);
void fn_8011D0D0(void);
u32 func_80428F28(u32, u32, u32);
void HSD_GObj_AddGXLink(u32, u32, u32, u32);
void fn_8011D81C(void);
void fn_80114F1C(u32, u32, u32);
u32 fn_80112444(void);
void fn_80409250(u32, float);
u32 fn_8022CAD8(u32);
void fn_80122F04(u32);
void fn_80117A10(u32);
void fn_80117A68(u32);
u32 fn_8022D434();
void fn_80124300(u32);
u32 fn_8022D468(u32, u32);
void fn_8012468C(u32);
u32 HSD_JObjLoadJoint();
void fn_80429C14(u32, u32, u32);
void fn_80052FB8(u32, u32);
u32 fn_80112058(void);
u32 getPlayerCount(void);
u32 fn_8011487C(u32);
void fn_80127564(u32);
void fn_801169FC(u32);
void fn_8011693C();
u32 fn_8011244C(void);
u32 fn_8000A9E4();
void fn_80128448(u32);
void fn_8011503C(u32, u32);
void fn_80128A68(u32);
void fn_80128FE8(u32);
void fn_80129448(u32, u32);
u32 fn_8000AAC4(void);
void fn_80129AB8(void);
u32 fn_801147DC(u32, u32, u32, u32);
u32 gmGetGlobalP(void);
void fn_80115114();
u32 fn_80114BA4(u32, u32);
void HSD_AObjSetRate();
void fn_8006176C();
void HSD_ObjFree(u32, u32);
void fn_8042A258(u32, u32, u32);
u32 fn_80130870(u32);
void fn_80130760(u32);
u32 fn_80114A34(u32, u32, u32, u32);
u32 func_80428F64(u32);
void memset(u32, u32, u32);
void fn_8013B83C(void);
void fn_8013B648(void);
void fn_80147EFC(void);
void fn_80147408(void);
void fn_80146F34(u32);
void fn_8014963C(void);
void fn_80146E14(u32);
void fn_801473A8(void);
void fn_80147C78(u32, u32);
void fn_801478BC(u32);
void fn_8013B870(u32);
void fn_80146EEC(void);
void fn_80147D08(void);
void fn_80146FBC();
void fn_80147488(void);
void fn_80147E88(void);
void fn_80148550(u32);
void fn_80149450(u32, u32);
void fn_80146DCC(u32);
void fn_80147044();
void fn_80147D9C(void);
void fn_80147508(void);
void fn_801485FC(u32);
void fn_8014953C(void);
void fn_8014A090(void);
void fn_80148358(void);
void fn_80148A70(void);
void fn_80148C74(void);
void fn_801495C4(u32);
void fn_80149EA4(void);
void fn_80149F48(void);
void fn_80149FEC(void);
void fn_80148D50(void);
void fn_801484A4(u32);
void fn_801493BC(u32);
void fn_801483F8();
void fn_8014A2B8();
void fn_8014A0D4(void);
void fn_8014A124(void);
void fn_8014A7D0(u32);
void fn_8014A584(void);
void fn_8014A6A0(void);
void fn_8014A9D8(void);
void fn_8014A8EC(void);
void fn_8014AAA8(void);
void fn_8014A438(void);
void fn_8014ACD0(void);
void fn_8014B63C(u32);
void fn_8014AF94(void);
void fn_8014AE10(void);
void fn_8014B0F0(void);
void fn_8014B2C4(void);
void fn_8014B3FC(void);
void fn_8014B4B8(void);
void fn_8014AB58(void);
void fn_8014BBA8(u32);
void fn_8014BE10(void);
void fn_8014C160(void);
void fn_8014C518(void);
void fn_8014C958(void);
void fn_8014B944(void);
void fn_8014BA6C(void);
void fn_8014BF30(u32);
void fn_8014C284(u32);
void fn_8014C720(u32);
void fn_8014BFD4(void);
void fn_8014C2E4();
void fn_8014C7B4();
void fn_8014B7E0(void);
void fn_8014BCCC(void);
void fn_80131928(void);
void fn_80146EA8(void);
void fn_80147364(void);
void fn_8014780C(void);
void fn_80147C34(void);
void fn_8014820C(void);
void fn_80148A04(void);
void fn_8014932C(void);
void fn_80149DA8(void);
void fn_8014A3F4(void);
void fn_8014A65C(void);
void fn_8014A8A8(void);
void fn_8014ADCC(void);
void fn_8014B140(void);
void fn_8014B44C(void);
void fn_8014B774(void);
void fn_8014BA28(void);
void fn_8014BEEC(void);
void fn_8014BC88(void);
void fn_8014C240(void);
void fn_8014C6DC(void);
void fn_8014CAF8(void);
void fn_8013B6F0(void);
void fn_80161C08(void);
void fn_80177F5C(void);
void fn_8017816C(void);
void fn_8013B974(void);
void fn_801788AC(void);
void fn_80178DB0(u32, u32, u32);
void fn_80179664(u32, u32, u32);
void fn_80178B1C(void);
void fn_80178B98(void);
void fn_80178C14(void);
void fn_801791DC(void);
void fn_80178FD8(void);
void fn_8017904C(void);
void fn_80179DB0(void);
void fn_80179A68(void);
void fn_80179B00(void);
void fn_80179B78(void);
void fn_80179940(void);
void fn_801799D4(void);
void fn_8017A4F8(void);
void fn_8017A26C(u32);
void fn_8017A0B4(void);
void fn_8017A190(void);
void fn_8017AAFC(void);
void fn_8017A994(void);
void fn_8017A7DC(void);
void fn_8017A8B8(void);
void fn_8017B18C(void);
void fn_8017ADDC(void);
void fn_8017AD80(void);
void fn_8017AF78(void);
void fn_8017AFA8(void);
void fn_8017AC90(void);
void fn_8017ACCC(void);
void fn_8017AD08(void);
void fn_8017AD44(void);
void fn_8013B9A8(u32);
void fn_80146800(void);
void fn_80178040(void);
void fn_801783BC(u32);
void fn_801784A4(u32);
void fn_80178088(void);
void fn_801782D4(u32);
void fn_8017858C(u32);
void fn_80177FFC(void);
void fn_8017820C(void);
void fn_80178AB0(void);
void fn_80178F48(void);
void fn_80179324(void);
void fn_801798B0(void);
void fn_8017A014(void);
void fn_8017A798(void);
void fn_8017AC4C(void);
void fn_8017B388(void);
void fn_8014CBAC(void);
void fn_8014CCEC(void);
void fn_8014D3F0(void);
void fn_8014D9F4(void);
void fn_8014D718(void);
void fn_8014DCCC(void);
void fn_8013CA80(void);
void fn_8013CAB4(u32, u32);
void fn_8013CEB8(void);
void fn_8013D250(void);
void fn_8013D54C(void);
void fn_8014D09C(void);
void fn_8014D59C(void);
void fn_8014CDBC(void);
void fn_8014D4C0(u32);
void fn_8014D250(u32);
void fn_8014DB98(u32);
void fn_8014D2D8(u32);
void fn_8014CEA8(void);
void fn_8014CC38(void);
void fn_8014CD78(void);
void fn_8014D1E4(void);
void fn_8014D47C(void);
void fn_8014D84C(void);
void fn_8014DB54(void);
void fn_8014DD84(void);
void fn_8014DE38(void);
void fn_8014DF78(void);
void fn_8014E1E8(void);
void fn_8014E438(void);
void fn_8014EC5C(void);
void fn_8014EF08(void);
void fn_8013D570(void);
void fn_8013D5A4(u32);
void fn_8013D82C(void);
void fn_8013DBC4(void);
void fn_8013DEC0(void);
void fn_8014E8D4(void);
void fn_8014EAE0(void);
void fn_8014E5CC(void);
void fn_8014EA04(u32);
void fn_8014E048(u32);
void fn_8014EDD4(u32);
void fn_8014E0D0(u32);
void fn_8014E6C8(void);
void fn_8014DEC4(void);
void fn_8014E004(void);
void fn_8014E274(void);
void fn_8014E588(void);
void fn_8014E998(void);
void fn_8014ED90(void);
void fn_8014EFC0(void);
void fn_80162940(void);
void fn_8014F074(void);
void fn_8014F2E4(void);
void fn_80150458(void);
void fn_801510FC(void);
void fn_8014FC54(void);
void fn_80150E80(u32);
void fn_80152F6C(u32);
void fn_80154C34(u32);
void fn_80153AD0(u32);
void fn_80151CE8(u32);
void fn_8013BACC(void);
void fn_8014F15C(void);
void fn_8014F4F0(u32);
void fn_8014FF3C(u32);
void fn_8014F43C(void);
void fn_8014F3C8(u32, u32, u32);
void fn_8014F8A4(void);
void fn_8014F644(void);
void fn_8014F71C(void);
void fn_80150C2C(void);
void fn_801506B8(void);
void fn_801507A8(void);
void fn_80150898(void);
void fn_80150AC0(void);
void fn_80150BA0(void);
void fn_80150CC8(void);
void fn_80151644(void);
void fn_80151258(void);
void fn_801513AC(void);
void fn_80151B78(void);
void fn_80151AB4(void);
void fn_80151C50(void);
void fn_80151FCC(void);
void fn_801520AC(void);
void fn_80152194(void);
void fn_80154EBC(void);
void fn_80155064(void);
void fn_80152E8C(void);
void fn_801526D4(void);
void fn_801529C4(u32, u32, u32);
void fn_80152864(void);
void fn_8015273C(void);
void fn_801527D0(void);
void fn_8015261C(void);
void fn_80152678(void);
void fn_80152ED4(void);
void fn_80153458(u32, u32, u32);
void fn_8015318C(void);
void fn_80153298(void);
void fn_801532EC(void);
void fn_80153340(void);
void fn_80153394(void);
void fn_80153608(void);
void fn_801539B8(void);
void fn_80153840(u32, u32);
void fn_801537B4(void);
void fn_801536C4(void);
void fn_80153A0C(void);
void fn_80153E10(void);
void fn_80153D2C(u32, u32);
void fn_801518B0(u32, u32);
void fn_80154090(void);
void fn_8013C160(u32);
void fn_80154238(void);
void fn_80154340(void);
void fn_801544B4(u32, u32);
void fn_801546D0(void);
void fn_80154A48(void);
void fn_80154ACC(void);
void fn_80154874(void);
void fn_801548DC(void);
void fn_8015478C(void);
void fn_80154800(void);
void fn_80154B14(void);
void fn_801552F4(void);
void fn_8015515C(void);
void fn_801554F8(void);
void fn_8014F118(void);
void fn_8014F384(void);
void fn_8014F4AC(void);
void fn_8014FEF8(void);
void fn_80150674(void);
void fn_80150F60(void);
void fn_80151368(void);
void fn_80151844(void);
void fn_80151F60(void);
void fn_8015258C(void);
void fn_80153068(void);
void fn_80153120(void);
void fn_80153658(void);
void fn_80153CC0(void);
void fn_801540E0(void);
void fn_80154720(void);
void fn_80154D5C(void);
void fn_801550CC(void);
void fn_80155548(void);
void fn_80155624(void);
void fn_801557E8(void);
void fn_80155D3C(void);
void fn_80156528(void);
void fn_8015693C(u32);
void fn_80158914(u32);
void fn_80159264(u32);
void fn_80159604(u32);
void fn_80158D48(u32);
void fn_80158588(u32);
void fn_8013C1E0(void);
void fn_80155A9C(void);
void fn_801559B8(void);
void fn_80155A58(void);
void fn_801560F4(void);
void fn_8015613C(void);
void fn_80155E78(void);
void fn_80155EEC(void);
void fn_80155F60(void);
void fn_80156010(void);
void fn_80156088(void);
void fn_8015643C(void);
void fn_801566B4(void);
void fn_80156A78(u32, u32);
void fn_80156DF0(u32, u32);
void fn_80157144(u32, u32);
void fn_801586D0(u32, u32);
void fn_8015738C(void);
void fn_8015741C(void);
void fn_80157504(void);
void fn_80157328(void);
void fn_80158EF0(void);
void fn_80158FD8(void);
void fn_80158E8C(void);
void fn_80157898(void);
void fn_80159370(void);
void fn_80158B2C(void);
void fn_80158A2C(void);
void fn_80158AAC(void);
void fn_80158B84();
void fn_80158354(void);
void fn_80158204(void);
void fn_80158258(void);
void fn_801582AC(void);
void fn_80158300(void);
void fn_80157E3C();
void fn_80157C44(void);
void fn_80157D34(void);
void fn_80156644(void);
void fn_8015979C(void);
void fn_801598E4(void);
void fn_8015670C(void);
void fn_80156B04(u32);
void fn_80156E70(u32);
void fn_801571C4(u32);
void fn_80158750(u32);
void fn_8015676C(void);
void fn_80156B68(u32);
void fn_80156ED4(u32);
void fn_80157228(u32);
void fn_801587B4(u32);
void fn_80157984(void);
void fn_801583E0(u32);
void fn_801579CC(void);
void fn_80158428(u32);
void fn_80157EA0(u32);
void fn_80158BE8(u32);
void fn_8015945C(void);
void fn_801594A4(void);
void fn_801556B8(void);
void fn_80155888(void);
void fn_80155BD0(void);
void fn_80155E34(void);
void fn_801563D0(void);
void fn_80156600(void);
void fn_80156A0C(void);
void fn_80156D84(void);
void fn_801570D8(void);
void fn_801572BC(void);
void fn_8015782C(void);
void fn_80157BD8(void);
void fn_80158198(void);
void fn_80158664(void);
void fn_801589C0(void);
void fn_80158E20(void);
void fn_80159304(void);
void fn_801596B0(void);
void fn_80159934(void);
void fn_8013C4A8(void);
void fn_80159AF8(void);
void fn_80159D74(void);
void fn_80159D04(u32, u32);
void fn_8015A088(void);
void fn_80159E28(void);
void fn_80159F00(void);
void fn_8015B6E8(void);
void fn_8015B174(void);
void fn_8015B264(void);
void fn_8015B354(void);
void fn_8015B57C(void);
void fn_8015B65C(void);
void fn_8015B784(void);
void fn_8015C100(void);
void fn_8015BD14(void);
void fn_8015BE68(void);
void fn_8015C638(void);
void fn_8015C574(void);
void fn_8015C710(void);
void fn_8015CA8C(void);
void fn_8015CB6C(void);
void fn_8015CC54(void);
void fn_8015F8B4(void);
void fn_8015FA5C(void);
void fn_8015D8A4(void);
void fn_8015D0E4(void);
void fn_8015D3D4(u32, u32, u32);
void fn_8015D274(void);
void fn_8015D14C(void);
void fn_8015D1E0(void);
void fn_8015D02C(void);
void fn_8015D088(void);
void fn_8015D8EC(void);
void fn_8015DE70(u32, u32, u32);
void fn_8015DBA4(void);
void fn_8015DCB0(void);
void fn_8015DD04(void);
void fn_8015DD58(void);
void fn_8015DDAC(void);
void fn_8015E020(void);
void fn_8015E3D0(void);
void fn_8015E258(u32, u32);
void fn_8015E1CC(void);
void fn_8015E0DC(void);
void fn_8015E424(void);
void fn_8015E824(void);
void fn_8015E740(u32, u32);
void fn_8015C370(u32, u32);
void fn_8015EAA4(void);
void fn_8013CA00(u32);
void fn_8015EC98(void);
void fn_8015ED38(void);
void fn_8015EEAC(u32, u32);
void fn_8015F0C8(void);
void fn_8015F440(void);
void fn_8015F4C4(void);
void fn_8015F26C(void);
void fn_8015F2D4(void);
void fn_8015F184(void);
void fn_8015F1F8(void);
void fn_8015F50C(void);
void fn_8015FCEC(void);
void fn_8015FB54(void);
void fn_8015FEF0(void);
void fn_80159AB4(void);
void fn_80159CC0(void);
void fn_80159DE4(void);
void fn_8015AA18(void);
void fn_8015B130(void);
void fn_8015BA1C(void);
void fn_8015BE24(void);
void fn_8015C304(void);
void fn_8015CA20(void);
void fn_8015CF9C(void);
void fn_8015DA80(void);
void fn_8015DB38(void);
void fn_8015E070(void);
void fn_8015E6D4(void);
void fn_8015EAF4(void);
void fn_8015F118(void);
void fn_8015F754(void);
void fn_8015FAC4(void);
void fn_8015FF40(void);
void fn_80162594(void);
void fn_80162710(u32, u32);
void fn_80162B2C(void);
void fn_80162E30(void);
void fn_801632E0(void);
void fn_801634B4(void);
void fn_801639C4(u32);
void fn_80163D90(void);
void fn_80164000(void);
void fn_80164280(void);
void fn_8013DEE4(void);
void fn_80163260(void);
void fn_80162D54(void);
void fn_80163F60(void);
void fn_801641E0(void);
void fn_80163698(u32);
void fn_80163B50(float);
void fn_80162FB4(void);
void fn_80162FD8(u32);
void fn_80163130(void);
void fn_80163150(u32);
void fn_801637B4(u32);
void fn_80163C28(float);
void fn_80162C08(void);
void fn_80146834(void);
void fn_80146868(void);
void fn_80162CC0(void);
void fn_80162F30(void);
void fn_801630BC(void);
void fn_80163EB8(void);
void fn_8016411C(u32, u32);
void fn_8016338C(void);
void fn_80162BC4(void);
void fn_80162EC4(void);
void fn_80163348(void);
void fn_801635EC(void);
void fn_80163AC0(void);
void fn_80163E30(void);
void fn_80164094(void);
void fn_80164318(void);
void fn_801644C8(void);
void fn_801646F0(void);
void fn_80165964(void);
void fn_8016507C(void);
void fn_80165C64(void);
void fn_80164630(void);
void fn_8016435C(void);
void fn_801645AC(void);
void fn_80164AE4(void);
void fn_801666CC(u32);
void fn_80164914(u32);
void fn_80165314(u32, u32);
void fn_80165AB0(u32);
void fn_80167250(u32, u32);
void fn_801662EC(u32, u32);
void fn_80164964(void);
void fn_80164A24(void);
void fn_80164C38(void);
void fn_80164804(void);
void fn_80164874(void);
void fn_801648DC(void);
void fn_80165694(void);
void fn_80165728(void);
void fn_80166DCC(u32, u32, u32, u32);
void fn_80165E5C(u32, u32);
void fn_80166458(u32, u32, u32);
void fn_801668D0(void);
void fn_80166954(void);
void fn_80167734(void);
void fn_80167460(void);
void fn_801676B0(void);
void fn_80167BEC();
void fn_8016A434(u32);
void fn_80167A90(u32, u32);
void fn_801687F0(u32, u32, u32);
void fn_801695E0(u32, u32);
void fn_8016AFF4(u32, u32, u32);
void fn_8016A04C(u32, u32, u32);
void fn_80167908(void);
void fn_80167AF8(void);
void fn_80167DA8(void);
void fn_80167940(void);
void fn_801679C0(void);
void fn_80167A40(void);
void fn_80169098(void);
void fn_801691E0(void);
void fn_8016AB34(u32, u32, u32, u32);
void fn_80169B74(u32, u32);
void fn_8016A1C0(u32, u32, u32);
void fn_8016A638(void);
void fn_8016A6BC(void);
void fn_8016B490(void);
void fn_8016B744(void);
void fn_8016D374(void);
void fn_8016CEDC(void);
void fn_8016DAA4(u32);
void fn_8016B684(void);
void fn_8016B340(void);
void fn_8016B600(void);
void fn_8016CB18();
void fn_8016C8A4(u32, u32);
void fn_8016D850(u32, u32);
void fn_8016E924(u32, u32, u32);
void fn_8016DEE8(u32, u32, u32);
void fn_8016C5A0(void);
void fn_8016C954(void);
void fn_8016CB54(void);
void fn_8016C5F4(void);
void fn_8016C6C4(void);
void fn_8016C78C(void);
void fn_8016C818(void);
void fn_8016D5D8(void);
void fn_8016D720(void);
void fn_8016ECBC(void);
void fn_8016EEE4(void);
void fn_8016F7D0(void);
void fn_8016FAA4(void);
void fn_8016EE24(void);
void fn_8016EB50(void);
void fn_8016EDA0(void);
void fn_8016F1E8(void);
void fn_8016FE14(void);
void fn_801701F8(u32, u32);
void fn_80170550(u32);
void fn_8016EFF8(void);
void fn_8016F0E0(void);
void fn_8016F158(void);
void fn_8016F1B0(void);
void fn_8016F240(void);
void fn_8016F308();
void fn_8016F41C(void);
void fn_80170784(void);
void fn_801709BC(void);
void fn_80171050(void);
void fn_80172A50(void);
void fn_80172E08(void);
void fn_80174060(void);
void fn_80170C00(void);
void fn_801751A0(void);
void fn_80170E44(void);
void fn_80172B24(void);
void fn_801764A8(void);
void fn_801435D8(void);
void fn_80172990(void);
void fn_80176B28(u32, u32, u32);
void fn_80177AE8(u32, u32, u32, u32);
void fn_80172504(u32, u32, u32, u32);
void fn_80172934(void);
void fn_8017085C(void);
void fn_80173918(void);
void fn_8017130C(u32);
void fn_8017365C(u32);
void fn_8017360C(u32);
void fn_801735D4(void);
void fn_80177688(u32, u32);
void fn_80173394(void);
void fn_80173434(void);
void fn_801733D4(void);
void fn_80173594(void);
void fn_801736E0(void);
void fn_80173800(void);
void fn_80173AF4(void);
void fn_80170AA0(void);
void fn_801745E0(void);
void fn_801746F0(u32, u32);
void fn_80174688(u32, u32);
void fn_80174638(void);
void fn_8017426C(void);
void fn_8017437C(void);
void fn_801742AC(void);
void fn_80174324(void);
void fn_801745A8(void);
void fn_80174794(void);
void fn_801748CC();
void fn_80174AD4(void);
void fn_80170CE4(void);
void fn_801757D4(void);
void fn_80175934(u32, u32);
void fn_801758CC(u32, u32);
void fn_8017587C(void);
void fn_8017582C(void);
void fn_80177290(u32);
void fn_80175460(void);
void fn_80175570(void);
void fn_801754A0(void);
void fn_80175518(void);
void fn_8017579C(void);
void fn_801759D8(void);
void fn_80175B14();
void fn_80175D34(void);
void fn_80173164(void);
void fn_80172FAC(void);
void fn_801732D8(void);
void fn_80176E8C(void);
void fn_80177000(void);
void fn_80171AF8(u32, u32, u32, u32);
void fn_80171FA0(u32, u32);
void fn_801726B8(u32, u32, u32);
void fn_80171560(void);
void fn_801715B8(void);
void fn_80171620(void);
void fn_80171698(void);
void fn_80161BC8(void);
void fn_801628D0(void);
void fn_8013B69C(void);
void fn_8013F2DC(void);
void fn_8013F310(u32);
void fn_801629FC(void);
void fn_80059818(u32, u32);
void HSD_ObjAllocInit(u32, u32, u32);
void fn_8017B3CC(void);
void fn_8013A288(void);
void fn_8013B2E4(void);
void HSD_CObjGetCurrent(void);
void fn_803FE4B8(void);
void fn_8017B4C0(void);
void fn_8017B5F8(void);
void fn_8016001C(void);
void fn_8016036C(void);
void fn_80160698(void);
u32 fn_801602B0(u32);
void fn_801607D0(u32, u32);
void fn_80160CB8(u32, u32);
void fn_80160A2C(void);
void fn_80160AB8(void);
void fn_80160594(void);
void fn_801600B0(void);
void fn_801605DC(void);
void fn_8016073C(void);
void fn_80160944(void);
void fn_80160AF8(void);
void fn_80160FA8(void);
void fn_80161714(void);
u32 getTrialFlag(void);
void fn_80073FA4(u32);
void fn_80073FBC(void);
void fn_80161998(void);
u32 fn_8000AD48(void);
void fn_801619E4(void);
void fn_801621F4(void);
void fn_80161900(void);
void fn_80161FDC(void);
void fn_80138B10();
u32 HSD_ObjAlloc();
void OSReport(u32, ...);
void __assert(u32, u32, u32);
void fn_80429D0C(u32, u32, u32, u32);
void fn_80182CAC(void);
void fn_8017BD54(void);
void fn_8017C140(void);
void fn_8017BF78(void);
void fn_8017C390(void);
void fn_8017C3C4(void);
void fn_8017C418(void);
void fn_8017BE84(void);
void fn_8017C1DC(void);
void fn_8017C244(void);
void fn_8017CA90(void);
void fn_801831D8(void);
void fn_80183250(void);
void fn_80183364(void);
void fn_801838C4(void);
void fn_801843BC(void);
void fn_80184ABC(void);
void fn_80184CAC(void);
void fn_80184F10(void);
void fn_80185128(void);
void fn_801853D8(void);
void fn_801856D4(void);
void fn_8017C648(void);
void fn_8017C678(void);
void fn_8017C6CC(void);
void fn_801833F0(void);
void fn_80183994(void);
void fn_801844EC(void);
void fn_80184B98(void);
void fn_80184D38(void);
void fn_80184F9C(void);
void fn_801851B4(void);
void fn_80185464(void);
void fn_80185794(void);
void fn_8017CA70(void);
void fn_80185848(void);
void fn_80185B44(void);
void fn_80185E08(void);
void fn_801866E8(void);
void fn_80186B9C(void);
void fn_80139348(void);
void fn_80186F50(void);
void fn_80186F84(void);
void fn_80186FD8(void);
void fn_801858FC(void);
void fn_80185C44(void);
void fn_80186070(void);
void fn_80186820(void);
void fn_80186CD4(void);
void fn_80186FDC(void);
u32 fn_80131868(void);
u32 HSD_CObjSetCurrent(u32);
void HSD_CObjEraseScreen(u32, u32, u32, u32);
void HSD_GObj_DispatchGXLink(u32, u32);
void HSD_CObjEndCurrent(void);
u32 fn_801311E0();
u32 fn_80066DF8(u32, u32);
void fn_80429728(u32, u32, u32);
u32 fn_80057468();
void fn_80146930(void);
void fn_801469FC(void);
void fn_801466D0();
void fn_8014676C(void);
void fn_8014689C(void);
void fn_8013EF40(u32, u32, u32);
void fn_8014360C();
void fn_801439D0();
void fn_80144068();
void fn_801445B0(u32, u32, u32, u32, u32, u32);
void fn_801461DC(u32, u32, u32, u32, u32, u32);
u32 fn_801311EC(void);
void fn_80138C1C(u32, u32, float);
void fn_80138BA4(u32, u32, float);
void fn_80138C90(u32, u32, float);
u32 fn_80138934(u32, u32, u32);
void fn_801389D8(u32, u32, float, float);
u32 fn_80138A00(u32, u32);
void fn_80188308(void);
u32 fn_801388A8(u32);
void fn_801885E8(void);
void fn_800550F4(u32, u32);
void fn_8014785C(u32);
void fn_8040C174(u32, u32);
void HSD_AObjReqAnim(u32, float);
void fn_8040A1A0(u32);
void fn_800550BC();
u32 fn_80138AB0();
void fn_80409274(u32, float);
u32 fn_80138AC8();
void fn_8014A6F0(void);
void fn_8014A720(void);
void fn_8014BAC8(void);
void fn_8014C080(void);
void fn_8014C3F8(void);
void fn_8014C878(void);
void fn_8014BAF8(void);
void fn_8014C0B0(void);
void fn_8014C428(void);
void fn_8014C8A8(void);
u32 fn_801311FC(void);
void fn_8014D370(void);
void fn_8013D528(void);
void fn_8014DC4C(void);
void fn_8013D504(void);
u32 fn_80131204(void);
void fn_8014E168(void);
void fn_8013DE9C(void);
void fn_8014EE88(void);
void fn_8013DE78(void);
u32 fn_8013120C(void);
void fn_8013BB00(u32, u32);
void fn_80151430(void);
u32 fn_80131214(void);
u32 fn_8013121C(void);
void fn_8013C4DC(void);
void fn_8015BEEC(void);
u32 fn_8013124C(void);
u32 fn_80160284(void);
u32 fn_8013122C(void);
u32 fn_80131234(void);
u32 fn_8013123C(void);
u32 fn_80131244(void);
u32 fn_800549A0(u32);
void fn_80161CC0(void);
u32 fn_80131254(void);
void fn_80146704(void);
void fn_80146738(void);
void fn_80162F08(void);
void fn_80163630(void);
void fn_80163B30(void);
void fn_80163E74(void);
void fn_801640D8(void);
void fn_80163230(void);
void fn_801467A0(void);
void fn_8013DF18(void);
void fn_80163A70(u32);
void fn_80163CF0(void);
u32 fn_8013125C(void);
void fn_801655E0(u32, u32);
void fn_80165B9C(void);
void fn_80146974(void);
u32 fn_80131264(void);
void fn_80053F34();
u32 fn_8013126C(void);
void fn_8016B858(void);
void fn_8016BED8(u32);
u32 fn_80131274(void);
u32 fn_8013127C(void);
u32 fn_801311F4(void);
u32 fn_80131284(void);
u32 fn_8000CDBC(void);
u32 fn_80138E24(void);
void fn_8044F8C8(u32, u32);
void fn_8017CAC4(void);
void fn_8017CC88();
void fn_8017CCFC(void);
void fn_8017CE08(void);
u32 fn_8013909C(void);
void fn_8017C9C8(u32);
void fn_8017CA00(u32);
u32 fn_80139238(void);
void fn_801871EC(void);
void fn_801882A0(void);
void fn_80077F50(u32);
void fn_80077F88(u32);
void fn_8018A118(void);
float fn_80063610(u32, u32, u32, float);
void fn_80189D28(u32);
void fn_8018B118(u32, float, float);
void fn_80189F54(u32, u32);
void fn_8018BD74(void);
void fn_80189784(u32, u32, float, float);
void fn_8018C6EC(u32, u32, u32, u32, u32);
void fn_8018C998(u32);
void fn_8018CA20(u32);
void fn_80189BE8(u32, u32);
void fn_80189C18(u32, u32);
void fn_80189C8C(u32, float);
void fn_80189D1C(u32);
void fn_80189FD4(u32);
u32 fn_80188720(u32, u32, float);
u32 fn_8018CD9C(u32);
u32 fn_80189860(u32, u32, u32);
void fn_80190760();
void fn_801907BC(u32);
void fn_8018D850(u32);
void fn_8019E930(u32);
void fn_8019DFF0(u32);
u32 fn_80191680();
void fn_80199D9C(u32, float);
u32 fn_801A305C(u32);
void fn_80190848(u32);
void fn_801916FC(u32);
u32 fn_80191798();
void fn_8019DC74(u32, u32);
void fn_801913D4(u32);
void fn_80231340(u32);
u32 plGetPlayerKind(u32);
void fn_80275C70(u32);
void HSD_LObjAnimAll(u32);
void fn_803FF570(u32);
void fn_8006A508(u32, u32, u32);
u32 fn_80079988(void);
void fn_8007A2A0(u32, u32);
void fn_8007A2C0(u32, u32);
void fn_800799BC(u32);
void lbLoadArchive(u32, ...);
void fn_80072C90(u32, u32, u32, u32, u32, u32, u32, u32);
void fn_8019079C(u32);
void fn_80062CA4(u32, u32);
void fn_80062DD0(u32, u32, u32);
void fn_80054414();
u32 fn_8022CBF4(u32);
void Rumble(u32, u32, u32, u32);
void HSD_PadRumbleRemoveId(u32, u32);
void fn_80071D48(u32);
u32 fn_80072664(u32);
void fn_80194D80();
void fn_80193718(u32);
void fn_80194E60(u32, u32);
u32 fn_8022D024(u32);
void fn_8022D03C(u32, u32);
void fn_80193E78(void);
void fn_80191374(u32);
void cityTrial_getMasterStats(u32, u32);
void fn_8022CFC8(u32, u32);
float fn_801C8410(u32);
void fn_8022CA20(u32);
float fn_801C8404(u32);
void fn_8022CA90(u32);
u32 fn_80009534(u32);
void fn_801A65E8(u32);
u32 fn_801A842C(void);
float fn_800CEB18(u32, u32);
u32 fn_801A83EC(void);
void fn_801C86B0(u32);
void fn_801C86DC(u32);
void fn_80223158(u32);
void fn_80223168(u32);
void fn_8000A1D8(void);
u32 fn_801950A8(void);
void fn_8019407C(u32, u32);
float fn_801C7668(u32);
void fn_8019F850(u32);
u32 fn_801C7730(u32);
void fn_801910E8(u32);
void fn_801A1950(u32);
u32 fn_800BAF70(u32);
void fn_801A7EF4(u32);
void fn_801A7E68(u32);
u32 fn_80193484();
u32 fn_801A8848(u32);
void fn_801AE4EC(u32);
float fn_801A0D7C(u32);
void fn_80190ADC();
void fn_80190BC4();
void fn_801A7FA8(u32);
float fn_801A7FFC(u32);
float fn_801A8010(u32);
void fn_801A8018(u32);
u32 fn_80072544(u32);
u32 fn_800725C8(u32);
u32 fn_801C8010(u32);
float fn_801B1464(u32);
float fn_801B29C8(u32);
void fn_8019F4B0(u32);
void fn_80193F24();
void fn_80193D38(u32);
void fn_8019F80C(u32);
void fn_801C8058(u32);
void fn_801A1B5C(u32);
void fn_80190A88();
void fn_8019EB58(u32);
void fn_801BDA34(u32, u32);
void fn_801BDBAC(u32);
void fn_801C8210(u32, u32, u32);
void fn_8019125C(u32, u32, u32);
void fn_801912E8(u32);
void fn_801914B8(u32);
u32 fn_80191618(u32);
u32 cityTrial_collideWithAbility(u32);
u32 fn_8019164C(u32);
u32 fn_801A828C(u32);
void fn_80009658(u32, u32, u32);
u32 fn_801917D0(u32, u32);
u32 fn_801917F4(u32, u32);
u32 fn_80191818(u32, u32);
u32 fn_8019183C(u32, u32);
void fn_80194900(u32);
float fn_8019AE50(u32);
void fn_8019E6DC();
void fn_80195288(u32);
void fn_8019CDFC(u32);
void fn_80195548(u32, u32, u32, float);
void fn_8019E120(u32);
u32 fn_8019DE48(u32, u32, u32);
void fn_8019DE9C(u32, u32);
void fn_8019970C(u32, u32);
void fn_80198568(u32);
void fn_80193500(u32, u32, u32, u32);
void fn_80190468(void);
void fn_8019065C(u32);
u32 fn_800B81CC(void);
void fn_800B8DBC(u32, u32);
void fn_800B836C(u32);
void fn_800B8DC4(u32, u32);
void fn_800B8DE0(u32, u32);
void fn_800B8E18(u32, u32);
void fn_800B8DFC(u32, u32);
float fn_800BAD8C(u32, u32, float);
void fn_8022C978(u32);
void fn_8022C9A8(u32);
void fn_800B9004(u32);
void fn_800BBE0C(u32, u32);
void fn_800BBCEC();
void fn_800BBFC4(void);
void fn_800BBF14();
void fn_800B8BB4(u32);
void fn_80193900(u32, u32, u32, u32, u32, u32, u32, u32);
void fn_801C8080(u32);
void fn_801C80A4(u32);
void fn_801C80C8(u32);
void fn_801C80EC(u32);
u32 fn_801A8A7C(void);
u32 fn_801C878C(u32);
void fn_8019D330(u32, u32, u32);
u32 fn_801C82EC(u32, u32, u32);
void fn_801A89D8(u32, u32);
void fn_80193F98(void);
void fn_801C7628(u32);
u32 fn_801C84AC(u32);
u32 fn_801C7C70(u32);
u32 fn_801C852C(u32);
u32 fn_801C853C(u32);
u32 fn_801C7E30(u32);
u32 fn_801C7E3C(u32);
u32 fn_801C854C(u32);
u32 fn_801C7F34(u32);
u32 fn_801C7F44(u32);
u32 fn_801C7F78(u32);
u32 fn_801C7F84(u32);
u32 fn_801C7F90(u32);
u32 fn_801C7F9C(u32);
void fn_801C7944(u32);
void fn_801C787C(u32, u32);
float fn_801C868C(u32);
u32 fn_801C7ED4(u32);
u32 fn_801C7EF4(u32);
u32 fn_801C7F04(u32);
u32 fn_801C7F24(u32);
u32 fn_801C8110(u32);
u32 fn_8040B718(u32);
u32 fn_801C8798(u32);
u32 fn_801D6360(u32);
u32 fn_8019C460(u32);
void fn_801D63BC(u32, u32);
void fn_8019C4BC(u32, u32);
void fn_801D6488(u32);
void fn_8019C588(void);
void fn_801C76EC(u32);
u32 fn_801C7C7C(u32);
u32 fn_801C89D8(u32);
u32 fn_801C89F0(u32);
u32 fn_8005D440(void);
u32 fn_8005D12C();
u32 fn_8005DC5C(u32);
float fn_80195250(void);
void fn_8005DB44();
void fn_8005EA20(u32, u32);
void fn_8005D64C(u32);
void fn_8005E08C(u32);
void fn_8005F034(u32, u32, u32, u32);
u32 fn_8027B418(u32);
void fn_8027B534(u32);
void fn_8027B524(u32);
void fn_8018CC38(u32);
u32 fn_8019BFB4(u32, u32, u32);
void fn_8018CB5C(u32);
void fn_8018DBA0(u32, u32, u32, u32, u32, float);
void fn_8018DC88(u32, u32, u32, u32, u32, u32, float);
void fn_8018C8C4(u32, u32, u32);
void fn_8018C598(u32, u32, u32, u32);
void fn_8018C2E4(u32);
void fn_8022D778(u32, u32, u32);
void fn_80197074(u32, u32, u32);
void fn_801971D8();
void HSD_DObjClearFlags(u32, u32);
void HSD_DObjSetFlags(u32, u32);
void fn_801972C0(u32, u32, u32);
void fn_8040AD74(u32);
u32 fn_80055130(u32);
void fn_80408BD0(u32, u32);
u32 fn_801977EC(u32);
void fn_8019783C(u32);
u32 fn_80199734(void);
void fn_8006E58C(u32);
void fn_80245C10(u32, u32, u32, u32, u32, u32, float, float);
u32 fn_80245B4C(u32);
void fn_800D1860();
void fn_8018C7F8(u32, u32);
void fn_8018C824(u32);
void fn_80195FA8(u32, u32);
void fn_80196F78(void);
void fn_80197008(void);
void fn_8019C15C(u32, u32);
void fn_8019BFF8(u32, u32);
void fn_80190B40(u32, u32, u32);
void fn_8019353C(u32, u32);
void fn_80068D68(u32);
void fn_8019B504(void);
void fn_8019B884(void);
u32 fn_8006A3F0();
void fn_8006A250(u32);
void fn_8006AD80(u32);
u32 fn_8006AD20(u32);
void fn_8006ADA4(u32);
void fn_8006ADE0(u32);
void fn_802201E0(u32);
u32 fn_8019DE04(u32, u32);
void fn_801956D4(u32, u32);
void fn_801C87D4(u32);
u32 fn_802364E0(void);
void fn_8023641C(u32);
void fn_80236778(u32);
void fn_80236358(u32);
void fn_80194800(u32, u32);
void fn_8018AFE4(u32, u32, u32, float, float);
void fn_8018B17C(u32, u32, float, float);
void fn_80190C54();
void fn_80199C40(void);
void fn_8019FC5C(void);
void fn_8019FC60(void);
void fn_8019FC80(void);
void fn_8018E580(u32, u32, u32, u32, float, float, float);
void fn_80192E10(void);
u32 fn_80198B00();
void fn_8019F6CC();
void fn_80193830();
void fn_80190948(u32, u32, u32);
u32 fn_801C75F4(u32, u32, float, float);
void fn_80199C14(void);
void fn_80193004();
void fn_8019F894(u32, u32, u32);
u32 fn_801C7AE4(u32);
float fn_800D4F20(u32);
void fn_8027A60C(u32);
u32 fn_801943E4(void);
void fn_801A3274(u32);
void fn_801A7D00(u32);
void fn_801A7C84(void);
u32 fn_801942AC(void);
void fn_80191170();
u32 fn_801943B0(void);
void fn_801A135C(u32);
void fn_801A15B4(u32);
void fn_801A1650(void);
void fn_801A16BC(void);
void fn_801A16DC(void);
void fn_801A16E0(void);
void fn_801A1700(void);
void fn_801918BC();
void fn_80190708();
void fn_801A2B0C(u32, u32);
void fn_801A2D58(void);
u32 fn_80231B68(void);
u32 fn_80191900(void);
void fn_8019A014(void);
u32 fn_8019AA54(u32);
void fn_8019A638(u32);
void fn_8019A5AC(void);
u32 fn_8019A3B8(void);
u32 fn_8019A3D4(u32);
void fn_8027A7C4(u32, u32);
void fn_80190774();
void fn_80190788(u32);
void fn_801A2E7C(u32);
void fn_801907E8(u32, u32, u32, float);
u32 fn_80247FAC(u32);
u32 fn_800D1F3C(void);
void fn_801A3388(u32, u32, u32);
void fn_8022CC80(u32);
void fn_8027A08C(u32);
u32 fn_801A30F8(void);
void fn_801A2818();
u32 fn_801917A4(void);
void fn_801A4A90(void);
void fn_801A4990(void);
void fn_801A4D60(void);
void fn_801A4CC0(void);
void fn_801A0828(void);
void fn_801A0684(u32, u32);
u32 fn_80191758(u32);
void fn_801B98C0(u32, u32);
void fn_801A3FD8(u32, u32);
void fn_801A4884(void);
void fn_801A423C(u32, u32);
void fn_801A2AA4(u32, u32);
void fn_80190FAC(u32, u32, float);
void fn_801A4C04(u32, float);
void fn_801A4648(void);
void fn_801A47E8(void);
void fn_801A4F24();
void fn_801A4F04(void);
void fn_801A24C8();
u32 fn_801BD8D8(u32);
u32 fn_801A561C(u32);
void fn_801A4610(void);
u32 fn_80199668(void);
u32 fn_80198B90(u32);
u32 fn_801A5020(u32, u32);
void fn_801C8C8C(u32, u32);
u32 fn_801ACFD0(u32);
void fn_801970F0();
void fn_8040B920(u32);
void fn_801A6428(u32, u32, u32);
void fn_80196DF4(u32, u32, u32);
void fn_80409480(u32, u32, u32, u32);
void fn_80198910();
void fn_80198D3C(u32, u32, u32);
void fn_801A735C(u32, u32);
void fn_8019813C(u32, u32, u32, u32, u32);
float fn_801C7FA8(u32);
void fn_801A810C(u32);
void fn_801AA1B8(u32, u32);
void fn_80055C7C(u32, u32);
void fn_8019C95C(void);
void fn_80198C20(u32, u32, u32);
void fn_80236C40(u32, ...);
void fn_80191554(void);
void fn_801915C4(u32);
void fn_801AA414(u32, u32);
void fn_801B5C24(u32);
void fn_801B684C(u32);
void fn_801B6FD0(u32);
void fn_801B7AB4(u32, u32);
u32 fn_801AEA30(void);
void fn_801B29DC(void);
void fn_80196710(u32, u32, u32);
void fn_801A2DE0(u32);
void fn_80225170(u32);
void fn_80228184(u32);
void fn_8022847C(u32);
void fn_80225824(void);
void fn_802281BC(u32);
void fn_8019C0A4(u32, u32);
void fn_802284A0(u32);
void fn_80228F08(void);
void fn_8022A244(void);
void fn_8022A544(void);
void fn_80191510(void);
u32 fn_801AAC80();
void fn_801AACB8(void);
void fn_801AAE04(u32);
void fn_801AAE40(void);
u32 fn_801AAF38(u32);
void fn_801AAEB8(void);
void fn_801AAED8(void);
void fn_801AAEF8(void);
void fn_801AAF18(void);
void fn_801AAF70(void);
void fn_801AABBC(u32);
u32 fn_801AB1A0();
void fn_801AB734(u32, u32, float);
void fn_801AB9D0(u32, u32, float);
void fn_801ABCB0(float);
void fn_8019F980(u32);
u32 fn_801B2C4C();
u32 fn_801AB624(u32);
void fn_80191A58(u32);
u32 fn_801B4D04(u32);
u32 fn_801B7E80(u32);
void fn_8019FC3C(void);
u32 fn_801AB168(u32);
void fn_801AB370(void);
void fn_801AB390(void);
void fn_801AB3B0(void);
void fn_801AB428(void);
void fn_801AB688(u32, u32);
void fn_801A889C(u32, u32);
void fn_801A0300();
void fn_801AB940(u32, u32);
u32 fn_801ABC2C(u32);
void fn_801ABB28(void);
void fn_801ABB48(void);
void fn_801ABB68(void);
u32 fn_801B4E2C(u32);
u32 fn_801B8078(u32);
void fn_801ABBCC(void);
void fn_801ABBEC(void);
void fn_801ABC0C(void);
void fn_801ABA5C(u32);
void fn_801A0250(u32, u32, u32, u32, float);
u32 fn_801B9D6C(u32);
u32 fn_801B4D60(u32);
void fn_801A0348(void);
void fn_801A0368(void);
void fn_801A5F2C(void);
void fn_8019C5AC(void);
void fn_801A03A8(void);
void fn_801ABC64();
void fn_801A8454();
u32 fn_801AC63C(u32);
u32 fn_801AC27C(u32);
void fn_801A03F8(void);
void fn_801A0470(void);
u32 fn_801A0430(u32);
u32 fn_801A0444(u32);
void fn_801A04B8(void);
void fn_801A04D8(void);
void fn_801A04DC(void);
void fn_801A04FC(void);
u32 fn_80194120();
void fn_801ABFF4(u32);
void fn_8019FCA0(u32);
void fn_8019FCF0(void);
void fn_8019FD38(void);
void fn_8019FD58(void);
void fn_8019FD5C(void);
u32 fn_801AC9FC(u32);
u32 fn_801ACC18(u32);
u32 fn_801ACDF8(u32);
void fn_8019FD7C(void);
u32 fn_80194144();
void fn_801AC2C4(u32);
void fn_8019FE48(u32);
void fn_8019FE70(void);
void fn_8019FE98(void);
void fn_8019FEE0(void);
void fn_8019FF00(void);
void fn_8019FF04(void);
u32 fn_801ABFAC(u32);
void fn_801AC488(u32);
void fn_8019FF24(void);
u32 fn_80194168();
void fn_801AC684(u32);
void fn_8019FF44(u32);
void fn_8019FF6C(void);
void fn_8019FF94(void);
void fn_8019FFDC(void);
void fn_8019FFFC(void);
void fn_801A0000(void);
void fn_801AC848(u32);
void fn_801A0020(void);
u32 fn_801941D4(void);
void fn_801ACA44(u32);
void fn_801A0040(u32);
void fn_801A0044(void);
void fn_801A008C(void);
void fn_801A00AC(void);
void fn_801A00B0(void);
void fn_801A00D0(void);
u32 fn_801941B0(void);
void fn_801ACC60(u32);
void fn_801A00F0(u32);
void fn_801A00F4(void);
void fn_801A013C(void);
void fn_801A015C(void);
void fn_801A0160(void);
void fn_801A0180(void);
u32 fn_8019418C(void);
void fn_801ACE40(u32);
u32 fn_80194240(void);
void fn_801A01A0(u32);
void fn_801A01A4(void);
void fn_801A01EC(void);
void fn_801A020C(void);
void fn_801A0210(void);
void fn_801A0230(void);
u32 fn_80194264(u32, u32);
void fn_801AD02C(u32);
void fn_80231020(u32);
u32 fn_801AD15C(void);
void fn_801A051C(void);
void fn_801A0520(void);
void fn_801A0540(void);
void fn_801A0544(void);
void fn_801A0564(void);
void fn_801A0618(u32);
void fn_801A061C(void);
void fn_801A0620(void);
void fn_801A0640(void);
void fn_801A0644(void);
void fn_801A0664(void);
void fn_801ADEB0(u32);
void fn_8019560C(u32, u32, float);
u32 fn_801AD550(void);
void fn_801AD4CC(u32);
void fn_801AD974(void);
void fn_801AD994(void);
void fn_801ADC18(void);
void fn_801ADC4C(void);
void fn_801ADC78(void);
void fn_801ADCA4(void);
void fn_801ADE4C(void);
void fn_801ADD38(void);
void fn_801AE7F4(void);
u32 fn_801AEFE0(void);
u32 fn_80222F8C(u32, u32);
void fn_80222FDC(u32, u32);
void fn_802230A0();
void fn_801A8F68(u32, u32, u32, u32);
void fn_801A6968(u32);
void fn_801A7D70(u32);
void fn_801A9350(u32, u32);
void fn_801A93B0(u32, u32);
void fn_801C7784(u32, u32);
void fn_801A809C(u32, u32, u32);
void fn_801A6840(u32);
void fn_801AED50();
void fn_801AF39C(u32, u32);
void fn_801AF330(void);
void fn_801AF7A8(u32);
u32 fn_801B0ADC(u32);
void fn_8018A188();
void fn_801AF638(u32);
void fn_801AFC70();
void fn_8019F288(u32, u32, u32);
void fn_801A6DB8(void);
void fn_80196F18(u32, u32, u32);
void fn_80196F38(u32, u32);
void fn_801AFF3C(u32, u32);
void fn_801A6CE4(u32);
void fn_801AFAB4();
void fn_801AFCC0(u32, u32);
void fn_801B0434(void);
void fn_801B0750(void);
void fn_801B0128(u32);
void fn_8019F37C(void);
void fn_8019F39C(void);
void fn_8019F3BC(void);
void fn_8019F3DC(void);
void fn_8019F3FC(void);
void fn_801B02A0(u32);
void fn_8019E78C(u32);
void fn_801B05BC(u32);
void fn_801B08D8(u32);
void fn_8019E72C(u32, u32);
void fn_8027A0B8(u32);
void fn_801A6B38(u32);
void fn_801A7BDC(u32, u32);
void fn_801B0E34(u32);
void fn_801B0F24(void);
void fn_801B0F74(void);
void fn_801B0F94(void);
void fn_801B0FB4(void);
void fn_801B0FD4(void);
void fn_801A1598(u32);
void fn_80190E2C();
void fn_80193BB4(u32);
void fn_801A6C0C(void);
void fn_80193BD8(u32);
void fn_801A1728(u32);
void fn_801B0FF4(u32);
void fn_8027A0E4(u32);
void fn_801A6E90(u32, u32);
void fn_801B13AC(void);
void fn_801A6F64(void);
u32 fn_801B161C(u32);
void fn_801B15E8(void);
void fn_801B1654(void);
void fn_801B1830(void);
void fn_801B17D4(u32);
void fn_801B1880(void);
void fn_801B18D4(void);
void fn_801B18F4(void);
void fn_801B1914(void);
void fn_801B1934(void);
void fn_801B1974(void);
void fn_801B1548(void);
void fn_801B1568(void);
void fn_801B1588(void);
void fn_801B15A8(void);
void fn_801B19CC(void);
void fn_801B13EC(u32);
void fn_801B2518(void);
void fn_801B2868();
void fn_801B254C();
void fn_801B28F8(u32, u32);
u32 fn_801B2FC8();
void fn_801B2CB4(u32);
void fn_801B2E50(void);
void fn_801B2E18(u32);
void fn_801B2E58(void);
void fn_801B2F48(void);
void fn_801B2F68(void);
void fn_801B2F88(void);
void fn_801B2FA8(void);
void fn_801B3208(u32);
void fn_801B385C();
void fn_801B3C4C(u32, u32);
void fn_801B3B44(void);
void fn_801A9B08(u32);
u32 fn_80195588(u32, u32, float);
void fn_801B3BD8(void);
void fn_801B43A4(u32);
void fn_801A75A8(u32, u32);
void fn_801B3F48(u32);
void fn_801B41A0(u32);
void fn_801B4718();
void fn_801B4944(u32, u32);
void fn_801B48A0();
u32 fn_801C7C94(u32);
void fn_801A9C38(u32);
void fn_801B4908(void);
void fn_801A7828(u32);
void fn_801A7944(u32);
void fn_801B4C08();
void fn_801B4CCC(u32, u32);
void fn_801B4C98();
u32 fn_801C7C04(u32);
void fn_801A7A5C(void);
u32 fn_80191980(u32, u32);
void fn_801B4F10();
float fn_80191BB0(u32);
u32 fn_801C7C30(u32);
void fn_801B50EC();
u32 fn_801C812C(u32);
float fn_801C8138(u32);
u32 fn_801B4DF8(u32, u32, u32);
void fn_801B52B4(u32);
void fn_801B56A8(u32);
void fn_801A7B8C(void);
void fn_80193B84(u32, u32, u32, u32, u32);
u32 fn_801C85A8(u32, u32);
void fn_801DED8C(u32, u32, u32);
void fn_801B5800(u32, u32, float);
void fn_8019FDE4(void);
void fn_8019FE04(void);
void fn_8019FE08(void);
void fn_8019FE28(void);
void fn_801B5A90(u32, u32, float);
void fn_801B5DEC(void);
void fn_801B62BC(void);
void fn_801B6468(u32);
void fn_801B652C(void);
void fn_801B654C(void);
void fn_801B656C(void);
u32 fn_801B65F8();
void fn_801B65D8(void);
void fn_801B5EC4(void);
void fn_801B5EE4(void);
void fn_801B5F04(void);
u32 fn_801B5F24(void);
void fn_801B6264(void);
void fn_801B6630(void);
void fn_801B5E34(u32, u32);
u32 fn_801B6284(u32, u32, float, float);
void fn_801B69F0(void);
u32 fn_801B67F0(void);
u32 fn_801B6B7C(u32);
void fn_801B6BB4(void);
void fn_801B6CFC(u32);
void fn_801B6DC0(void);
void fn_801B6DF8(void);
void fn_801B6E18(void);
void fn_801B6E38(void);
void fn_801B6FB0(void);
void fn_801AA41C();
void fn_801B71E4(void);
u32 fn_801B737C(u32);
void fn_801B73B4(void);
void fn_801B74EC(u32);
void fn_801B75B8(void);
void fn_801B75F0(void);
void fn_801B7610(void);
void fn_801B7630(void);
void fn_801B77D4(void);
void fn_801B7048(u32);
u32 fn_801C7BC4(u32);
void fn_801B78D0();
u32 fn_801C7B98(u32);
void fn_801A20C4(u32);
void fn_801B7C6C(u32);
void fn_80193BFC(u32, u32, u32);
void fn_801B7994(void);
void fn_801B79F4(void);
void fn_801B7A14(void);
void fn_801B7A34(void);
u32 fn_801B77F4(u32);
void fn_801B7A54(void);
u32 fn_801C7B00(u32);
float fn_80193C44(u32);
void fn_801B7EE4(u32, u32, u32, float);
void fn_801B8210(void);
void fn_801B8270(void);
void fn_801B8290(void);
void fn_801B82B0(void);
void fn_801B82D0(void);
u32 fn_801C7B58(u32);
void fn_801B8168(u32, u32, float);
u32 fn_801C7B2C(u32);
void fn_801B82F0(u32);
void fn_801A2168(u32, u32, float, float);
u32 fn_801BBB98(u32);
u32 fn_801BAADC(u32);
u32 fn_801BC2D8();
void fn_801A234C();
u32 fn_801A2CEC(void);
void fn_801BCCB8(u32);
void fn_801BABD4(u32);
void fn_801BAF14();
void fn_801A50F0(void);
void fn_801A4850(u32);
void fn_801B9B30(u32);
void fn_801B9C88(u32, float);
void fn_801A41BC(u32);
void fn_801A2D80(u32);
void fn_801A2FC0(u32);
void fn_801A2D9C(u32);
void fn_801B9620(u32);
void fn_801B9570(void);
void fn_80193CE4(u32, u32);
void fn_801A8BD0(u32);
void fn_801BA4F0(void);
void fn_80193EDC(void);
void fn_801B8EC4(void);
void fn_801BAF48();
void fn_801A2FD4(u32);
void fn_801B8424(u32, u32, float);
void fn_801B886C(void);
u32 fn_801BB350(void);
void fn_801BB2B0(u32, float);
u32 fn_801B853C(u32, u32, float);
u32 fn_801BC730(u32);
void fn_801BB578(u32);
void fn_801A2FE8(u32);
u32 fn_801BBEBC(u32);
void fn_801A25B8(u32, u32, float);
void fn_801A29F8();
void fn_801BB1A0(u32);
void fn_801BC310(void);
void fn_801BC468(u32);
void fn_801BC86C(float);
void fn_801BB3BC(void);
void fn_801BCCFC(float);
void fn_801B9664(void);
u32 fn_801BD2FC(u32);
u32 fn_801BD07C(u32);
void fn_801BAD18(u32, u32, float, float);
void fn_801B9368(void);
void fn_801BD12C(float);
void fn_801BD3F4(float);
void fn_801BCDA0(void);
void fn_801BCE28(u32);
void fn_8019C43C(u32);
void fn_804293F4(u32, u32, u32);
void fn_80429B24(u32, u32, u32);
void fn_80429430(u32, u32);
void fn_80429BE0(u32, u32);
void fn_80198D1C(u32, u32, u32);
u32 fn_801C02B8(u32);
u32 fn_8019F238(void);
u32 fn_8008238C(u32, u32, float);
void fn_801BE060(u32);
void fn_801C0D28(u32, u32);
u32 fn_801BED04(u32);
u32 fn_801BE934();
void fn_801BE5BC();
void fn_801BE580(u32);
u32 fn_801BE6B4(u32);
void fn_801BE634(void);
void fn_801BE654(void);
void fn_801BE674(void);
void fn_801BE694(void);
void fn_801BE6EC(void);
void fn_801BE344(u32);
u32 fn_801BE408(u32);
void fn_801C0A74(void);
void fn_801BED88(u32, float);
void fn_801BEF38(u32, float);
void fn_801BF178(u32, float);
void fn_801BE1C0(u32);
void fn_801BE1DC(u32);
void fn_8019FABC(void);
u32 fn_801BEB3C(u32, u32);
void fn_8019FBF4();
u32 fn_801C05A8(u32);
u32 fn_801BE8FC(u32);
void fn_801BEA74(void);
void fn_801BEA94(void);
void fn_801BEAB4(void);
void fn_801BEB1C(void);
void fn_801BED3C(void);
void fn_801BEEDC(u32);
u32 fn_801BF0F4(u32);
void fn_801BF040(void);
void fn_801BF060(void);
void fn_801BF080(void);
u32 fn_801C0764(u32);
void fn_801BF0D4(void);
void fn_801BEF90(u32);
void fn_801BF12C();
void fn_801BE018();
u32 fn_801BF9E0(u32);
u32 fn_801BF65C(u32);
void fn_801BF490(u32);
void fn_8019FCC8(void);
u32 fn_801BFD64(u32);
u32 fn_801BFF50(u32);
u32 fn_801C0100(u32);
void fn_801BF6A4(u32);
u32 fn_801BF448(u32);
void fn_801BF85C(u32);
void fn_801BFA28(u32);
void fn_801BFBE0(u32);
void fn_801BFDAC(u32);
void fn_801BFF98(u32);
void fn_801C0148(u32);
void fn_801C0314(u32);
u32 fn_801C0440(void);
void fn_801C05F8(u32, u32);
void fn_801C088C(void);
void fn_801C08AC(void);
void fn_801C08CC(void);
void fn_801C08EC(void);
void fn_801C090C(void);
void fn_801C092C(u32);
void fn_801BDD74(u32);
void fn_801C123C(void);
void fn_801C0F34(u32);
void fn_801C10C8(u32);
void fn_801C0C28(u32);
u32 fn_801C3C50(u32);
void fn_801C460C(u32, u32);
u32 fn_801C2268(u32);
u32 fn_801C297C(u32);
void fn_801C2020(u32);
u32 fn_801C1B2C();
void fn_801C1B64(void);
void fn_801C1CA4(u32);
void fn_801C1CE0(void);
u32 fn_801C1DD8(u32);
void fn_801C1D58(void);
void fn_801C1D78(void);
void fn_801C1D98(void);
void fn_801C1DB8(void);
void fn_801C1E10(void);
void fn_801C1A68(u32);
void fn_801C440C(void);
void fn_801C22EC(u32, float);
void fn_801C2494(u32, float);
void fn_801C26AC(u32, float);
u32 fn_801C3F40(u32);
u32 fn_801C40FC(u32);
u32 fn_801C339C(u32);
u32 fn_801C303C(u32);
void fn_801C22A0(void);
void fn_801C2440(u32);
u32 fn_801C2628(u32);
void fn_801C2574(void);
void fn_801C2594(void);
void fn_801C25B4(void);
void fn_801C2608(void);
void fn_801C24E4(u32);
void fn_801C2660();
void fn_801C19C8();
void fn_801C29C4(u32);
u32 fn_801C36FC(u32);
u32 fn_801C38E8(u32);
u32 fn_801C3A98(u32);
void fn_801C2C58(u32, u32, float);
void fn_801C2E6C(u32, u32, float);
void fn_801C3084(u32);
void fn_801C3218(u32);
void fn_801C33E4(u32);
void fn_801C3578(u32);
void fn_801C3744(u32);
void fn_801C3930(u32);
void fn_801C3AE0(u32);
void fn_801C3CAC(u32);
u32 fn_801C3DD8(void);
void fn_801C3F90(u32, u32);
void fn_801C4224(void);
void fn_801C4244(void);
void fn_801C4264(void);
void fn_801C4284(void);
void fn_801C42A4(void);
void fn_801C42C4(u32);
void fn_801C1740(u32);
void fn_801C4B10(void);
void fn_801C4820(u32);
void fn_801C499C(u32);
void fn_801C45C0(u32);
void fn_801CEA60(u32);
void fn_801CE810(u32);
void fn_801E6464(u32);
u32 fn_801E5108(u32);
u32 fn_801E4610(u32);
void fn_801E5014(u32);
void fn_801C9074(u32);
void fn_801CBAC8(u32);
void fn_801CBA00(u32);
void fn_801C98C4(u32);
void fn_8018CF64(u32);
void fn_801D6FD0(u32);
void fn_801D706C(u32);
void fn_801D7118(u32);
void fn_801D71EC(u32);
void fn_801D7248(u32);
void fn_801D72A4(u32);
void fn_801DAAC4(u32);
void fn_801DAD58(u32);
void fn_801DBA74(u32);
void fn_8018D878(u32);
void fn_801D7308(u32);
void fn_801E0D8C(u32, float);
void fn_801D10D4(u32);
void fn_801DB320(u32);
void fn_801CC238(u32);
void fn_801E1E84(u32);
void fn_801E0E28(u32);
void fn_801D6C50(u32);
void fn_801D262C(u32);
void fn_801CAA08(u32);
u32 fn_801CAA40();
u32 fn_80191F68(u32);
float fn_801F5C14(u32);
void fn_801CE590(u32);
void fn_801E1908(u32);
void fn_801E1D64(u32, u32);
void fn_801E2FDC(u32);
void fn_801E3040(u32);
void fn_801E32F8(u32);
void fn_801E3098(u32);
void fn_801C7278();
void fn_801D5CE4(u32);
void fn_801CACF4(u32);
void fn_801CADDC(u32);
void fn_801E098C(u32);
void fn_801E40A0(u32, u32, u32, u32, u32);
void fn_801E4FC8(u32);
void fn_801CE954(u32);
void fn_801D297C(u32);
void fn_801E02E8(void);
void fn_801D7E28(u32);
void fn_801945F8(u32);
void fn_80194B30(void);
void fn_801CB074(u32);
void fn_801CAEE4(u32);
void fn_801D3AF4(u32, u32);
void fn_801D4638(u32, u32);
void fn_801D40B8(u32);
void fn_801D4038(u32);
void vcLoadVehicleArchive(void);
void fn_801C6E3C(u32);
void fn_801C8F14(void);
void fn_801C8EC8(u32);
void fn_801C8F40(u32);
void fn_801C9308(u32);
void fn_801DD17C();
void fn_801D5CA0(u32, u32, u32);
float fn_801E4CC0(void);
u32 fn_8019203C(u32);
void fn_801E094C(u32);
void fn_801D6668(u32);
void fn_801E096C(u32);
void fn_801C73D0(u32);
void fn_8018CBE8(u32);
void fn_801D5E34(u32, u32);
u32 fn_801CB138(u32, u32);
void fn_801C5DD4(u32, u32, u32, u32, float, float);
u32 fn_80192824(u32);
u32 fn_8019286C(u32);
void fn_801DAFAC(u32, u32);
float fn_80192908(u32, u32);
void fn_802463A8(u32, u32, u32, u32);
void fn_80247E84(u32, u32);
void fn_80246300(u32);
void fn_80247EB0(u32, u32);
void fn_80247E58(u32, u32);
void fn_80245ED0(u32);
void fn_801CCEB8(void);
void fn_801CD24C(void);
void fn_801CD7D8(void);
u32 fn_801CDB6C(void);
u32 fn_80246CF4(u32);
void fn_800D29DC(u32, u32);
void fn_801CBE34(u32);
u32 fn_80246DB8(u32);
void fn_800D29FC(u32, u32);
void fn_80247004(u32);
void fn_80245F70(u32, u32, u32, u32, u32, float, float);
void fn_802461B4(u32);
void fn_800D1944(u32);
void fn_800D19A0(u32);
void fn_800D19C8(u32);
u32 fn_801CB4C0(void);
void fn_801CFFE0(u32, float);
void fn_801CF88C(u32, float);
void fn_80231088(void);
void fn_801D0424(u32, u32, float);
void fn_801D0610(float);
void fn_801D1DEC(u32, u32, u32);
void fn_801D1E68(u32, u32, u32);
void fn_80408F88(u32, u32, u32, float);
void fn_80408EDC(u32);
u32 fn_80191F38(u32, u32);
u32 fn_800BBC0C(u32);
u32 fn_800B8188(u32);
void fn_801CD618(void);
void fn_801EB97C(void);
void fn_801F5C1C(void);
u32 fn_801CE9C0(u32, u32);
void fn_801D2D8C(u32, u32, u32);
void fn_801D3060(u32);

extern const float lbl_805DFEA8;
extern const float lbl_805DFEAC;
extern const float lbl_805DFF98;
extern const float lbl_805DFF9C;
extern const float lbl_805E0178;
extern const float lbl_805E017C;
extern const float lbl_805E0180;
extern const float lbl_805E0654;
extern const float lbl_805E0658;
extern const float lbl_805E09D0;
extern const float lbl_805E09D4;
extern const float lbl_805E0A40;
extern const float lbl_805E0A44;
extern const float lbl_805E0AB0;
extern const float lbl_805E0AB4;
extern const float lbl_805E0B98;
extern const float lbl_805E0B9C;
extern const float lbl_805E0C28;
extern const float lbl_805E0C34;
extern const float lbl_805E0D90;
extern const float lbl_805E10B0;
extern const float lbl_805E10B4;
extern u32 lbl_805D6DE0;
extern u32 lbl_805D6E20;
extern u32 lbl_805D6E28;
extern u32 lbl_805D6E30;
extern u32 lbl_805D6E38;
extern u32 lbl_805D6E40;
extern u32 lbl_805D6E48;
extern u32 lbl_805D6EE0;
extern u32 lbl_805DD818;
extern u8 lbl_804AA3D8[];
extern u8 lbl_804AA428[];
extern u8 lbl_804AA598[];
extern u8 lbl_804AA5E8[];
extern u8 lbl_804AD1BC[];
extern u8 lbl_804AD688[];
extern u8 lbl_804AD6B8[];
extern u8 lbl_804ADAE8[];
extern u8 lbl_804ADB1C[];
extern u8 lbl_804AF758[];
u32 fn_80049D10(u32, u32);
u32 fn_80049D98(u32, u32);
u32 fn_80055DA0();
u32 fn_800721D4(u32, u32, float, float, float);
u32 fn_800CEF84(u32, u32);
u32 fn_800CEFB4(u32);
u32 fn_801A5A74(u32);
u32 fn_801C1A20(u32);
u32 fn_801C7C88(u32);
u32 fn_801C8C38(u32);
u32 fn_801C8C44(u32);
void HSD_LObjSetColor(u32, u32);
void HSD_LObjSetPosition(u32, u32);
void fn_800551A8(u32, u32);
void fn_800644AC(u32, u32, u32, u32);
void fn_8006B048(u32, u32, float);
void fn_80072458(u32, u32, u32);
void fn_8007A38C(u32, u32, u32, u32);
void fn_80123BC0(void);
void fn_801281D8(u32);
void fn_8013BEA0(u32, u32, u32, u32);
void fn_8013C740(u32, u32, u32, u32);
void fn_80144A1C(u32);
void fn_80146A90(u32);
void fn_8014E340(u32);
void fn_80150208(u32, u32, u32);
void fn_80155C80(u32);
void fn_8015AA5C(u32, u32, u32);
void fn_801633F8(u32);
void fn_80164DDC(void);
void fn_801658A8(u32);
void fn_80168A28(u32);
void fn_8016B200(u32);
void fn_8016B2A0(u32);
void fn_8016D2B8(u32);
void fn_8016F9E8(u32);
void fn_80170F94(u32);
void fn_80172294(u32);
void fn_8017690C(u32);
void fn_8017697C(u32);
void fn_801774A0(u32);
void fn_80177508(u32);
void fn_801778B0(u32);
void fn_8017B778(u32);
void fn_80194780(u32);
void fn_801AF71C(u32);
void fn_801AF84C(u32);
void fn_801AF8AC(void);
void fn_801C07E0(u32, u32);
void fn_801C4178(u32, u32);
void fn_801DECBC(u32, u32, u32);
void fn_80409340(u32, u32, u32, u32);
void fn_8040C0D8(u32, u32);
void splArcLengthPoint(u32, u32, float);
void fn_801168E8(void) {
    u32 s31;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_8044F674(0, 0, 28, 19, 0, 27, 1, 7);
    M8((s31+68)) = c1;
}

void fn_8011693C() {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = fn_80112044();
    v1 = M32((s31+72));
    if ((u32)v1 != (u32)0) {
        fn_8044F350(v1);
        M32((s31+72)) = 0;
    }
    v2 = M32((s31+76));
    if ((u32)v2 != (u32)0) {
        fn_8044F350(v2);
        M32((s31+76)) = 0;
    }
    v3 = M32((s31+80));
    if ((u32)v3 != (u32)0) {
        fn_8044F350(v3);
        M32((s31+80)) = 0;
    }
    v4 = M32((s31+84));
    if ((u32)v4 == (u32)0) {
    return;
    }
    fn_8044F350(v4);
    M32((s31+84)) = 0;
}

void fn_801169C8(void) {
    fn_8044F800(0, (u32)lbl_804A7CA0, (u32)lbl_804A7CB4);
}

void fn_80116AC0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+52+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80116B04(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+52+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80117A10(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+52+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    if ((u32)v2 == (u32)0) {
    return;
    }
    v3 = lbl_805DFC18;
    MF((v2+24)) = v3;
    if ((u32)v2 != (u32)0) {
    return;
    }
}

void fn_80117A68(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+52+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    if ((u32)v2 == (u32)0) {
    return;
    }
    v3 = lbl_805DFC18;
    MF((v2+28)) = v3;
    if ((u32)v2 != (u32)0) {
    return;
    }
}

void fn_80117AC0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s29 = 0;
    s31 = 0;
    s30 = c0;
    do {
        v1 = M32((s30+52));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+52)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_80117B28(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+112+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80117B6C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+112+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_801181EC(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+88);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+24));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+24)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_80118254(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+164+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80118298(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+164+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80118E88(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+128);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+36));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+36)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_80118EF0(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+188));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80118F20(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+188));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_801191A0(void) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c1;
    fn_80112044();
    c1 = fn_80112044();
    s30 = (c1+180);
    s31 = fn_80112050();
    v1 = M32(s31);
    fn_80059520(v1, s30, (u32)lbl_804A7EDC, 0);
    v2 = M32(s31);
    fn_80059520(v2, (s30+4), (u32)lbl_804A7EF4, 0);
}

void fn_8011944C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+188));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+188)) = 0;
}

void fn_80119490(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+456+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_801194D4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+456+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011959C(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    float v13;
    float v14;
    u32 v15;
    u32 v16;
    u32 v17;
    u32 v18;
    float v19;
    float v20;
    u32 v21;
    u32 v22;
    u32 c1;
    u32 c3;
    u32 c5;
    u32 c6;
    u32 c8;
    s27 = p3;
    s30 = M32((p3+44));
    s31 = M32((p3+40));
    v3 = M8((s30+8));
    s29 = ((v3>>4)&0xf);
    s28 = ((v3>>2)&0x3);
    fn_8040A64C(s31);
    v4 = M8((s30+20));
    switch ((s32)((s8)v4)) {
    case 0:
        c1 = fn_800547E0(s31);
        if ((s32)c1 != (s32)0) {
        return;
        }
        v5 = M32((s27+40));
        v6 = M32((s27+44));
        v7 = lbl_805DFC78;
        M8((v6+20)) = 1;
        v8 = lbl_805DFC7C;
        v9 = M32((v6+24));
        v10 = M32(v9);
        fn_80114D08(v5, 1, v10, v7, v8);
        break;
    case 1:
        c3 = fn_800547E0(s31);
        if ((s32)c3 == (s32)0) {
            v11 = M32((s27+40));
            v12 = M32((s27+44));
            v13 = lbl_805DFC78;
            M8((v12+20)) = 1;
            v14 = lbl_805DFC7C;
            v15 = M32((v12+24));
            v16 = M32(v15);
            fn_80114D08(v11, 1, v16, v13, v14);
        }
        c5 = fn_8022CB8C(s29);
        if ((s32)c5 != (s32)-1) {
        return;
        }
        c6 = fn_8022CBC0(s29);
        if ((s32)c6 != (s32)-1) {
        return;
        }
        v17 = M32((s27+40));
        v18 = M32((s27+44));
        v19 = lbl_805DFC78;
        M8((v18+20)) = 2;
        v20 = lbl_805DFC7C;
        v21 = M32((v18+24));
        v22 = M32(v21);
        fn_80114D08(v17, 2, v22, v19, v20);
        break;
    case 2:
        c8 = fn_800547E0(s31);
        if ((s32)c8 != (s32)0) {
        return;
        }
        fn_80119C38(((s8)s28));
    }
}

void fn_801196EC(void) {
    u32 s29;
    u32 s30;
    u32 s31;
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
    s29 = (u32)jumptable_804A7F10;
    s30 = fn_80112044();
    s31 = fn_80112050();
    v1 = M32(s31);
    fn_80059520(v1, (s30+412), (s29+48), 0);
    v2 = M32(s31);
    fn_80059520(v2, (s30+416), (s29+80), 0);
    v3 = M32(s31);
    fn_80059520(v3, (s30+420), (s29+112), 0);
    v4 = M32(s31);
    fn_80059520(v4, (s30+424), (s29+144), 0);
    v5 = M32(s31);
    fn_80059520(v5, (s30+428), (s29+176), 0);
    v6 = M32(s31);
    fn_80059520(v6, (s30+432), (s29+208), 0);
    v7 = M32(s31);
    fn_80059520(v7, (s30+436), (s29+240), 0);
    v8 = M32(s31);
    fn_80059520(v8, (s30+440), (s29+272), 0);
    v9 = M32(s31);
    fn_80059520(v9, (s30+444), (s29+304), 0);
    v10 = M32(s31);
    fn_80059520(v10, (s30+448), (s29+336), 0);
    v11 = M32(s31);
    fn_80059520(v11, (s30+448), (s29+336), 0);
    v12 = M32(s31);
    fn_80059520(v12, (s30+452), (s29+368), 0);
}

void fn_80119C38(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+456)) = 0;
}

void fn_80119C88(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c1;
    fn_80112044();
    s29 = 0;
    s31 = 0;
    do {
        c1 = fn_80112044();
        s30 = (c1+(((s8)s29)<<2));
        v1 = M32((s30+456));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+456)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80119CF8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+496+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80119D3C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+496+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80119D80(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_80112044();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_8011A078(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+496));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+496)) = 0;
}

void fn_8011A0C8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c1;
    fn_80112044();
    s29 = 0;
    s31 = 0;
    do {
        c1 = fn_80112044();
        s30 = (c1+(((s8)s29)<<2));
        v1 = M32((s30+496));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+496)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8011A138(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+524+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011A17C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+524+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011A60C(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+512);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+12));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+12)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8011A674(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+552+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011A6B8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+552+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011B1C4(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+540);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+12));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+12)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8011B678(void) {
    u32 s31;
    u32 v1;
    u32 c2;
    fn_80112044();
    s31 = fn_80112044();
    c2 = fn_80112050();
    v1 = M32(c2);
    fn_80059520(v1, (s31+568), (u32)lbl_804A8280, 0);
}

void fn_8011B91C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s29 = (c0+568);
    s28 = 0;
    s31 = 0;
    do {
        s27 = 0;
        s30 = s29;
        do {
            v1 = M32((s30+4));
            if ((u32)v1 != (u32)0) {
                fn_8011582C(v1);
                M32((s30+4)) = s31;
            }
            s27 = (s27+1);
            s30 = (s30+4);
        } while ((s32)s27 < (s32)3);
        s28 = (s28+1);
        s29 = (s29+12);
    } while ((s32)s28 < (s32)4);
}

void fn_8011B994(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+624+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011B9D8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+624+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011BCB4(void) {
    u32 s31;
    u32 v1;
    u32 c2;
    fn_80112044();
    s31 = fn_80112044();
    c2 = fn_80112050();
    v1 = M32(c2);
    fn_80059520(v1, (s31+620), (u32)lbl_804A82A0, 0);
}

void fn_8011BD04(u32 p3, u32 p4) {
    u32 s27;
    u32 s28;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    u32 c0;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    u32 c9;
    u32 c10;
    u32 c11;
    s27 = p3;
    s28 = p4;
    c0 = fn_80112044();
    s30 = (c0+620);
    v1 = M32(s30);
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80114904(s28, v3);
    v4 = M32((s29+40));
    s31 = v4;
    fn_8040BE00(s31, 16);
    HSD_GObj_AddProc(s29, (u32)fn_8011BA1C, 20);
    v5 = lbl_805DFCC4;
    v6 = M32(s30);
    v7 = M32(v6);
    fn_80114D9C(s31, v7, v5, v5);
    c5 = fn_80114E24(s29, 11, s27, s28);
    s31 = c5;
    M32((c5+24)) = 0;
    M32((s31+28)) = 0;
    M32((s31+32)) = 0;
    M32((s31+36)) = 0;
    M32((s31+40)) = 0;
    M32((s31+44)) = 0;
    c6 = fn_80055AF0(s29, 7);
    M32((s31+68)) = c6;
    c7 = fn_80055AF0(s29, 6);
    M32((s31+64)) = c7;
    c8 = fn_80055AF0(s29, 5);
    M32((s31+60)) = c8;
    c9 = fn_80055AF0(s29, 4);
    M32((s31+56)) = c9;
    c10 = fn_80055AF0(s29, 3);
    M32((s31+52)) = c10;
    c11 = fn_80055AF0(s29, 2);
    M32((s31+48)) = c11;
    M32((s31+20)) = 0;
    M32(((u32)s30+4+(s28<<2))) = s29;
}

void fn_8011BE3C(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+620);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8011BEA4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+696+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011BEE8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+696+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011BFF4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+692), (u32)lbl_804A82C0, 0);
}

void fn_8011C13C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+696));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+696)) = 0;
}

void fn_8011C18C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_80112044();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+696));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+696)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8011C1F8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+716+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011C23C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+716+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011C3B4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+712), (u32)lbl_804A82E0, 0);
}

void fn_8011C5D0(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s30 = p3;
    c0 = fn_80112044();
    s31 = (c0+(((s8)s30)<<2));
    v1 = M32((s31+716));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    s30 = v2;
    v3 = M32((s30+24));
    if ((s32)v3 != (s32)0) {
        fn_8005E7D8(v3);
        M32((s30+24)) = 0;
    }
    v4 = M32((s31+716));
    fn_8011582C(v4);
    M32((s31+716)) = 0;
}

void fn_8011C648(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v3;
    u32 v4;
    u32 c0;
    s31 = 0;
    s28 = 0;
    do {
        c0 = fn_80112044();
        s30 = (c0+(((s8)s28)<<2));
        v1 = M32((s30+716));
        if ((u32)v1 != (u32)0) {
            s29 = M32((v1+44));
            v3 = M32((s29+24));
            if ((s32)v3 != (s32)0) {
                fn_8005E7D8(v3);
                M32((s29+24)) = s31;
            }
            v4 = M32((s30+716));
            fn_8011582C(v4);
            M32((s30+716)) = s31;
        }
        s28 = (s28+1);
    } while ((s32)s28 < (s32)4);
}

void fn_8011C6D8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+744+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011C71C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+744+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011C760(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c2;
    s30 = p3;
    fn_80112044();
    s31 = M32((s30+40));
    v2 = M32((s30+44));
    s30 = v2;
    fn_8040A64C(s31);
    v3 = M8((s30+20));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = M8((s30+8));
    fn_8011CA98(((s8)((v4>>2)&0x3)));
}

void fn_8011CA98(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+744));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+744)) = 0;
}

void fn_8011CB68(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+764+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011CBAC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+764+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011CBF0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c2;
    s31 = p3;
    fn_80112044();
    v1 = M32((s31+40));
    s31 = v1;
    fn_8040A64C(s31);
    c2 = sAObjAnimeAll(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_8011CE64();
}

void fn_8011CC3C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+760), (u32)lbl_804A8358, 0);
}

void fn_8011CEDC(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+1824));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011CF0C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+1824));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011CF3C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c2;
    s31 = p3;
    fn_80112044();
    v1 = M32((s31+40));
    s31 = v1;
    fn_8040A64C(s31);
    c2 = fn_800547E0(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_8011D0D0();
}

void fn_8011D0D0(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+1824));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1824)) = 0;
}

void fn_8011D114(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+780));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011D144(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+780));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011D7FC(void) {
    fn_80112044();
}

void fn_8011DA04(u32 p3) {
    u32 s29;
    u32 s31;
    u32 s30;
    float v1;
    u32 c4;
    s29 = p3;
    s31 = fn_80112044();
    s30 = func_80428F28(27, 26, 0);
    HSD_GObj_AddGXLink(s30, (u32)fn_8011D40C, 19, 1);
    HSD_GObj_AddProc(s30, (u32)fn_8011D7FC, 20);
    c4 = fn_80114E24(s30, 16, 0, 0);
    M8((c4+20)) = s29;
    v1 = lbl_805DFD38;
    MF((c4+24)) = v1;
    fn_8011D81C();
    M32((s31+780)) = s30;
}

void fn_8011DB3C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+788+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011DB80(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+788+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011DCAC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+784), (u32)lbl_804A8408, 0);
}

void fn_8011E354(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+812));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011E384(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+812));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011E3B8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+808), (u32)lbl_804A8428, 0);
}

void fn_8011E824(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+812));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+812)) = 0;
}

void fn_8011E868(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+676+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8011E8AC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+676+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8011F114(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+32));
    if ((s32)v2 == (s32)0) {
    return;
    }
    fn_80114F1C(p3, p4, v1);
}

void fn_8011F688(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+676+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    s31 = v2;
    if ((u32)s31 == (u32)0) {
    return;
    }
    v3 = M32((s31+36));
    if ((s32)v3 == (s32)-1) {
    return;
    }
    fn_8005E7D8(v3);
    M32((s31+36)) = -1;
}

void fn_8011F6EC(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+640);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+36));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+36)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8011F8A8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+192), (u32)lbl_804A8520, 0);
}

void fn_80121100(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s29 = (c0+316);
    s28 = 0;
    s31 = 0;
    do {
        s27 = 0;
        s30 = s29;
        do {
            v1 = M32((s30+12));
            if ((u32)v1 != (u32)0) {
                fn_8011582C(v1);
                M32((s30+12)) = s31;
            }
            s27 = (s27+1);
            s30 = (s30+4);
        } while ((s32)s27 < (s32)5);
        s28 = (s28+1);
        s29 = (s29+20);
    } while ((s32)s28 < (s32)4);
}

void fn_8012122C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+884), (u32)lbl_804A85C0, 0);
}

void fn_80121AA4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M32((p3+40));
    v3 = M8((v1+8));
    if ((s32)((v3>>1)&0x1) == (s32)0) {
    return;
    }
    fn_8040A64C(v2, v1);
}

void fn_80121AD8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112444();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1828), (u32)lbl_804A85E0, 0);
}

void fn_80122320(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+2348));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80122350(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+2348));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

u32 fn_80122CBC(u32 p3) {
    u32 v1;
    v1 = M32((u32)lbl_804A85F8+(p3<<2));
    return v1;
}

void fn_80122CD0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1404+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80122D14(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1404+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80122D58(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 c2;
    u32 c4;
    s30 = p3;
    fn_80112044();
    v1 = M32((s30+44));
    v2 = M32((s30+40));
    s30 = v2;
    v3 = M8((v1+8));
    s31 = ((v3>>4)&0xf);
    fn_8040A64C(s30);
    c2 = fn_800547E0(s30);
    if ((s32)c2 == (s32)0) {
        v4 = lbl_805DFE68;
        fn_80409250(s30, v4);
    }
    c4 = fn_8022CAD8(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    fn_80122F04(s31);
}

void fn_80122DD8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1400), (u32)lbl_804A8680, 0);
}

void fn_80122E24(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 s26;
    u32 s25;
    u32 s24;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v6;
    float v7;
    u32 v8;
    float v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 c4;
    s24 = p3;
    s25 = p4;
    s31 = fn_80112044();
    s30 = (s25<<2);
    s28 = (s31+1400);
    s29 = (s28+s30);
    v1 = M32((s29+4));
    if ((u32)v1 != (u32)0 || (s32)s24 >= (s32)4 || (s32)s25 >= (s32)4) {
        return;
    }
    v2 = M32(s28);
    v3 = M32(v2);
    v4 = M32(v3);
    s27 = fn_80114904(s25, v4);
    s26 = M32((s27+40));
    HSD_GObj_AddProc(s27, (u32)fn_80122D58, 20);
    v6 = M32(s28);
    v7 = lbl_805DFE68;
    v8 = M32(v6);
    v9 = lbl_805DFE6C;
    fn_80114D9C(s26, v8, v7, v9);
    c4 = fn_80114E24(s27, 27, s24, s25);
    v10 = M8((c4+8));
    v11 = M32(((u32)s31+52+s30));
    v12 = M32((v11+44));
    v13 = M8((v12+8));
    ((BFu8_6_1*)((c4+8)))->f = (v13>>1);
    M32((s29+4)) = s27;
}

void fn_80122F04(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(s31<<2));
    v1 = M32((s31+1404));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1404)) = 0;
}

void fn_80122FC8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1424+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012300C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1424+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012322C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1420), (u32)lbl_804A86A0, 0);
}

void fn_801234B0(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 c0;
    s30 = p3;
    c0 = fn_80112044();
    s31 = (c0+(s30<<2));
    v1 = M32((s31+1424));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1424)) = 0;
    fn_80117A10(((s8)s30));
}

void fn_8012358C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1444+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_801235D0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1444+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_801237E4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1440), (u32)lbl_804A86C0, 0);
}

void fn_80123A5C(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 c0;
    s30 = p3;
    c0 = fn_80112044();
    s31 = (c0+(s30<<2));
    v1 = M32((s31+1444));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1444)) = 0;
    fn_80117A68(((s8)s30));
}

void fn_80123B38(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1472+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80123B7C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1472+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

#pragma push
#pragma opt_loop_invariants off
void fn_80123D50(u32 p3, u32 p4) {
    u32 h1;
    u32 s31;
    u32 c3;
    u32 v6;
    u32 s30;
    u32 h6;
    s32 s28;
    float v10;
    s30 = (fn_80112044()+1460);
    s31 = (s30+(p4<<2));
    if (0 != M32((s31+12))) {
    return;
    }
    if ((s32)((s8)getPlayerCount()) == 1) {
        s28 = M32(s30);
    } else {
        if (((s8)getPlayerCount()) == (s32)2) {
            s28 = M32((4+s30));
        } else {
            h1 = M32((8+s30));
            s28 = h1;
        }
    }
    v6 = M32(M32(s28));
    c3 = fn_80114A34(p4, v6, (u32)fn_80114F1C, 2);
    s30 = c3;
    h6 = M32((40+c3));
    HSD_GObj_AddProc(c3, fn_80123BC0, 20);
    v10 = lbl_805DFEAC;
    fn_80114D9C(h6, M32(s28), lbl_805DFEA8, v10);
    fn_80114E24(s30, 62, p3, p4);
    M32((12+s31)) = s30;
}
#pragma pop

void fn_80123E34(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(s31<<2));
    v1 = M32((s31+1472));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1472)) = 0;
}

void fn_80123EF8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1524+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80123F3C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1524+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80123F80(u32 p3) {
    u32 v1;
    u32 s31;
    u32 v3;
    u32 s30;
    u32 c0;
    v1 = M32((p3+44));
    s31 = M32((p3+40));
    v3 = M8((v1+8));
    s30 = ((v3>>2)&0x3);
    c0 = fn_8022D434(((v3>>4)&0xf), v1);
    if ((s32)c0 == (s32)0) {
        fn_80124300(s30);
        return;
    }
    fn_8040A64C(s31);
}

void fn_80124300(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(s31<<2));
    v1 = M32((s31+1524));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1524)) = 0;
}

void fn_801243C4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1552+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80124408(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1552+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012444C(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v3;
    u32 c0;
    u32 c2;
    v1 = M32((p3+44));
    s30 = M32((p3+40));
    v3 = M8((v1+8));
    s31 = ((v3>>4)&0xf);
    s29 = ((v3>>2)&0x3);
    c0 = fn_8022D468(s31, v1);
    if ((s32)c0 == (s32)0) {
        fn_8012468C(s29);
        return;
    }
    c2 = fn_8022D434(s31);
    if ((s32)c2 != (s32)0) {
        fn_8012468C(s29);
        return;
    }
    fn_8040A64C(s30);
}

void fn_8012468C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(s31<<2));
    v1 = M32((s31+1552));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1552)) = 0;
}

void fn_80124750(void) {
    u32 s31;
    u32 v1;
    fn_80112044();
    s31 = fn_80112044();
    v1 = M32((s31+3640));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+3640)) = 0;
}

void fn_80124798(void) {
    u32 s31;
    u32 v1;
    fn_80112044();
    s31 = fn_80112044();
    v1 = M32((s31+3648));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+3648)) = 0;
}

void drawHUD_renderMap(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+820));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80124810(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+820));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80124844(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+816), (u32)lbl_804A88B0, 0);
}

void fn_80124AE4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+820));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+820)) = 0;
}

void fn_80124B28(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+828+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80124B6C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+828+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80124BB0(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80124BD4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+824), (u32)lbl_804A88D0, 0);
}

void fn_80124E98(u32 p3, u32 p4) {
    u32 s27;
    u32 s28;
    u32 s31;
    u32 v1;
    u32 s30;
    u32 v2;
    u32 v3;
    u32 s29;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c0;
    u32 c8;
    s27 = p3;
    s28 = p4;
    c0 = fn_80112044();
    s31 = (c0+824);
    s30 = func_80428F28(27, 26, 0);
    v1 = M32(s31);
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = HSD_JObjLoadJoint(v3, v1);
    v4 = lbl_805DE351;
    fn_80429C14(s30, v4, s29);
    HSD_GObj_AddGXLink(s30, (u32)fn_80124C20, 20, 1);
    fn_80052FB8(s29, (10240<<16));
    HSD_GObj_AddProc(s30, (u32)fn_80124BB0, 20);
    v5 = M32(s31);
    v6 = lbl_805DFEE0;
    v7 = M32(v5);
    v8 = lbl_805DFEE4;
    fn_80114D9C(s29, v7, v6, v8);
    c8 = fn_80114E24(s30, 69, 0, 0);
    M32((c8+20)) = 0;
    *(S12*)((c8+24)) = *(S12*)(s28);
    M32(((u32)s31+4+(s27<<2))) = s30;
}

void fn_80124F9C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+828+(s30<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)((v2+24)) = *(S12*)(s31);
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80125004(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+824);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012506C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+852));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012509C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+852));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_801250D0(void) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c2;
    c0 = fn_80112044();
    s30 = (c0+844);
    s31 = fn_80112058();
    c2 = getPlayerCount();
    switch ((s32)((s8)c2)) {
    case 1:
        v1 = M32(s31);
        fn_80059520(v1, s30, (u32)lbl_804A88F0, 0);
        break;
    case 3:
        v2 = M32(s31);
        fn_80059520(v2, (s30+4), (u32)lbl_804A8908, 0);
    }
}

void fn_801252E8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+852));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+852)) = 0;
}

void fn_8012532C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+860));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012535C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+860));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_801256BC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+860));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+860)) = 0;
}

void fn_80125700(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+2876));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80125730(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+2876));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80125760(void) {
    fn_80112044();
}

void fn_80125780(void) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c1;
    u32 c3;
    fn_80112044();
    c1 = fn_80112044();
    s30 = (c1+2868);
    s31 = fn_80112058();
    c3 = getPlayerCount();
    switch ((s32)((s8)c3)) {
    case 1:
        break;
    case 2:
        v1 = M32(s31);
        fn_80059520(v1, s30, (u32)lbl_804A89D0, 0);
        break;
    default:
        v2 = M32(s31);
        fn_80059520(v2, (s30+4), (u32)lbl_804A89EC, 0);
    }
}

void fn_8012581C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v6;
    u32 v7;
    u32 c1;
    u32 c2;
    s31 = fn_80112044();
    c1 = getPlayerCount();
    if ((s32)((s8)c1) == (s32)1) {
    return;
    }
    c2 = getPlayerCount();
    if ((s32)((s8)c2) == (s32)2) {
        v1 = M32((s31+2868));
        s28 = v1;
    } else {
        v2 = M32((s31+2872));
        s28 = v2;
    }
    v3 = M32(s28);
    v4 = M32(v3);
    s30 = fn_8011487C(v4);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80125760, 20);
    v6 = lbl_805DFF00;
    v7 = M32(s28);
    fn_80114D9C(s29, v7, v6, v6);
    fn_80114E24(s30, 34, 0, 0);
    M32((s31+2876)) = s30;
}

void fn_801258DC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+2876));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+2876)) = 0;
}

void fn_80125920(void) {
    fn_80112044();
}

void fn_80125940(void) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c1;
    u32 c3;
    fn_80112044();
    c1 = fn_80112044();
    s30 = (c1+2880);
    s31 = fn_80112058();
    c3 = getPlayerCount();
    switch ((s32)((s8)c3)) {
    case 1:
        break;
    case 2:
        v1 = M32(s31);
        fn_80059520(v1, s30, (u32)lbl_804A8A08, 0);
        break;
    default:
        v2 = M32(s31);
        fn_80059520(v2, (s30+4), (u32)lbl_804A8A20, 0);
    }
}

void fn_80125DAC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+2888));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+2888)) = 0;
}

void fn_80125DF0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+2852+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80125E34(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+2852+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_801262A8(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+2828);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+24));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+24)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_80126310(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+2896));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80126340(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+2896));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80126370(void) {
    fn_80112044();
}

void fn_80126390(void) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 c1;
    u32 c3;
    fn_80112044();
    c1 = fn_80112044();
    s30 = (c1+2892);
    s31 = fn_80112050();
    c3 = getPlayerCount();
    switch ((s32)((s8)c3)) {
    case 1:
        break;
    case 2:
    default:
        v1 = M32(s31);
        fn_80059520(v1, s30, (u32)lbl_804A8AF0, 0);
    }
}

void fn_80126574(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+2896));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+2896)) = 0;
}

void fn_801265B8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+2912+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_801265FC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+2912+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80126BE4(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+2900);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+12));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+12)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_80126C4C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3024+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80126C90(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3024+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80126CD4(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v3;
    u32 c1;
    u32 c2;
    s31 = M32((p3+40));
    s30 = M32((p3+44));
    fn_8040A64C(s31);
    c1 = sAObjAnimeAll(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v3 = M8((s30+8));
    fn_80127564(((s8)((v3>>2)&0x3)));
}

void fn_80127564(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+3024));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+3024)) = 0;
}

void fn_801275B4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c1;
    fn_80112044();
    s29 = 0;
    s31 = 0;
    do {
        c1 = fn_80112044();
        s30 = (c1+(((s8)s29)<<2));
        v1 = M32((s30+3024));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+3024)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80127624(void) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_80112044();
    s31 = M32((c0+3048));
    if ((u32)s31 == (u32)0) {
    return;
    }
    fn_80114EEC(s31);
    v2 = M32((s31+44));
    v3 = M8((v2+20));
    if ((s32)((s8)v3) == (s32)0) {
    return;
    }
    v4 = M32((v2+24));
    v5 = M32((u32)lbl_804A7B98+(v4<<2));
    fn_801169FC(((s8)v5));
}

void fn_8012768C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+3048));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
    fn_8011693C();
}

void fn_801277F0(void) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3040);
    s31 = fn_80112444();
    v1 = M32(s31);
    fn_80059520(v1, s30, (u32)lbl_804A8E48, 0);
    v2 = M32(s31);
    fn_80059520(v2, (s30+4), (u32)lbl_804A8E64, 0);
}

void fn_80127A04(void) {
    u32 s31;
    u32 v1;
    u32 ph0;
    u32 c1;
    s31 = fn_80112044();
    v1 = M32((s31+3048));
    ph0 = v1;
    if ((u32)v1 != (u32)0) {
        c1 = fn_8011582C(v1);
        M32((s31+3048)) = 0;
        ph0 = c1;
    }
    fn_8011693C(ph0);
}

void fn_80127A4C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3064+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80127A90(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3064+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80127E94(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c1;
    u32 c3;
    s30 = (u32)lbl_804A8E80;
    fn_80112044();
    c1 = fn_80112044();
    s29 = (c1+3052);
    s31 = fn_8011244C();
    c3 = getPlayerCount();
    switch ((s32)((s8)c3)) {
    case 1:
        v1 = M32(s31);
        fn_80059520(v1, s29, (s30+40), 0);
        return;
    case 2:
        v2 = M32(s31);
        fn_80059520(v2, (s29+4), (s30+72), 0);
        return;
    }
    v3 = M32(s31);
    fn_80059520(v3, (s29+8), (s30+104), 0);
}

void fn_80128108(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3064+(s30<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)((v2+52)) = *(S12*)(s31);
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80128170(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3052);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+12));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+12)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_801281D8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c1;
    s31 = p3;
    fn_80112044();
    v1 = M32((s31+44));
    s31 = v1;
    c1 = fn_8000A9E4();
    if ((s32)((s8)c1) == (s32)-1) {
        fn_80128448(((s8)c1));
        return;
    }
    v2 = M32((s31+20));
    if ((s32)v2 == (s32)((s8)c1)) {
    return;
    }
    M32((s31+20)) = ((s8)c1);
    v3 = M32((s31+28));
    if ((u32)v3 == (u32)0) {
    return;
    }
    v4 = M32((s31+20));
    fn_8011503C(v3, v4);
}

void fn_80128328(u32 p3) {
    u32 v14;
    u32 v3;
    u32 c1;
    u32 v6;
    u32 c8;
    s32 s31;
    u32 c2;
    u32 s27;
    u32 s29;
    u32 c7;
    u32 v1;
    u32 v5;
    u32 s28;
    u32 c6;
    float v11;
    u32 v13;
    u32 v9;
    u32 v12;
    u32 v7;
    u32 s30;
    u32 v8;
    float v10;
    u32 v4;
    u32 v2;
    s27 = p3;
    s30 = fn_80112044();
    v1 = lbl_805DD638;
    if ((s32)v1 != (s32)0) {
        v2 = M32((s30+2928));
        s28 = v2;
    } else {
        c1 = getPlayerCount();
        if ((s32)((s8)c1) == (s32)1) {
            v3 = M32((s30+2928));
            s28 = v3;
        } else {
            c2 = getPlayerCount();
            if ((s32)((s8)c2) == (s32)2) {
                v4 = M32((s30+2932));
                s28 = v4;
            } else {
                v5 = M32((s30+2936));
                s28 = v5;
            }
        }
    }
    v6 = M32(s28);
    v7 = M32(v6);
    s29 = fn_801147DC(v7, 27, 21, 1);
    v8 = M32((s29+40));
    s31 = v8;
    HSD_GObj_AddProc(s29, (u32)fn_801281D8, 20);
    v9 = M32(s28);
    v10 = lbl_805DFF98;
    v11 = lbl_805DFF9C;
    fn_80114D9C(s31, v9, v10, v11);
    c6 = fn_80114E24(s29, 42, s27, 0);
    s31 = c6;
    M32((c6+20)) = 0;
    c7 = fn_80055AF0(s29, 3);
    M32((s31+24)) = c7;
    c8 = fn_80055AF0(s29, 2);
    M32((s31+28)) = c8;
    v12 = M32((s31+24));
    fn_8011503C(v12, (s27+1));
    v13 = M32((s31+28));
    v14 = M32((s31+20));
    fn_8011503C(v13, v14);
    M32((s30+2940)) = s29;
}

void fn_80128448(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+2940));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+2940)) = 0;
}

void fn_8012848C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c1;
    s31 = p3;
    fn_80112044();
    v1 = M32((s31+44));
    s31 = v1;
    c1 = fn_8000A9E4();
    if ((s32)((s8)c1) == (s32)-1) {
        fn_80128A68(((s8)c1));
        return;
    }
    v2 = M32((s31+20));
    if ((s32)v2 == (s32)((s8)c1)) {
    return;
    }
    M32((s31+20)) = ((s8)c1);
    v3 = M32((s31+28));
    if ((u32)v3 == (u32)0) {
    return;
    }
    v4 = M32((s31+20));
    fn_8011503C(v3, v4);
}

void fn_80128A68(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+1580));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1580)) = 0;
}

void fn_80128AAC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c1;
    s31 = p3;
    fn_80112044();
    v1 = M32((s31+44));
    v2 = M8((v1+8));
    s31 = ((v2>>2)&0x3);
    c1 = fn_8000A9E4(v1);
    if ((s32)((s8)c1) != (s32)-1) {
    return;
    }
    fn_80128FE8(s31);
}

void fn_80128FE8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    s31 = (c0+(s31<<2));
    v1 = M32((s31+1596));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1596)) = 0;
}

void fn_801290AC(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v2;
    u32 v3;
    u32 c1;
    s30 = p3;
    fn_80112044();
    s31 = M32((s30+44));
    v2 = M8((s31+8));
    s30 = ((v2>>2)&0x3);
    c1 = fn_8000A9E4();
    if ((s32)((s8)c1) != (s32)-1) {
    return;
    }
    v3 = M32((s31+20));
    fn_80129448(s30, v3);
}

void fn_80129108(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1612), (u32)lbl_804A9020, 0);
}

void fn_8012979C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112058();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1760), (u32)lbl_804A9050, 0);
}

void fn_8012993C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+1764));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1764)) = 0;
}

void fn_80129980(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c2;
    s31 = p3;
    fn_80112044();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
    c2 = fn_8000AAC4();
    if ((s32)((s8)c2) != (s32)-1) {
    return;
    }
    fn_80129AB8();
}

void fn_801299C8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112050();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1784), (u32)lbl_804A9070, 0);
}

void fn_80129A14(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    float v7;
    s31 = fn_80112044();
    s28 = M32((s31+1784));
    v2 = M32(s28);
    v3 = M32(v2);
    s30 = fn_801147DC(v3, 27, 21, 1);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80129980, 20);
    v5 = M32(s28);
    v6 = lbl_805DFFC0;
    v7 = lbl_805DFFC4;
    fn_80114D9C(s29, v5, v6, v7);
    fn_80114E24(s30, 74, 0, 0);
    M32((s31+1788)) = s30;
}

void fn_80129AB8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+1788));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+1788)) = 0;
}

void fn_80129D90(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112058();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1768), (u32)lbl_804A9090, 0);
}

void fn_80129F0C(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80129F30(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_80112044();
    c1 = fn_80112058();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1776), (u32)lbl_804A90B8, 0);
}

void fn_8012A02C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+3424));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012A05C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    v1 = M32((c0+3424));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012A08C(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 c2;
    s29 = p3;
    s31 = fn_80112044();
    s30 = M32((s29+40));
    fn_8040A64C(s30);
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_8011582C(s29);
    v2 = M32((s31+3424));
    if ((u32)v2 == (u32)0) {
    return;
    }
    M32((s31+3424)) = 0;
    if ((u32)v2 != (u32)0) {
    return;
    }
}

void fn_8012A36C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_80112044();
    v1 = M32((s31+3424));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8011582C(v1);
    M32((s31+3424)) = 0;
}

void fn_8012AAA0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s29 = (c0+3428);
    s28 = 0;
    s31 = 0;
    do {
        s27 = 0;
        s30 = s29;
        do {
            v1 = M32((s30+8));
            if ((u32)v1 != (u32)0) {
                fn_8011582C(v1);
                M32((s30+8)) = s31;
            }
            s27 = (s27+1);
            s30 = (s30+4);
        } while ((s32)s27 < (s32)8);
        s28 = (s28+1);
        s29 = (s29+32);
    } while ((s32)s28 < (s32)4);
}

void fn_8012AB18(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s30 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3596+(s30<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    s31 = v2;
    fn_80114EEC(v1);
    s30 = 0;
    do {
        v3 = M32((s31+44));
        if ((u32)v3 != (u32)0) {
            fn_80114EEC(v3);
        }
        v4 = M32((s31+56));
        if ((u32)v4 != (u32)0) {
            fn_80114EEC(v4);
        }
        s30 = (s30+1);
        s31 = (s31+4);
    } while ((s32)s30 < (s32)3);
}

void fn_8012AB9C(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s30 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3596+(s30<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    s31 = v2;
    fn_80114F04(v1);
    s30 = 0;
    do {
        v3 = M32((s31+44));
        if ((u32)v3 != (u32)0) {
            fn_80114F04(v3);
        }
        v4 = M32((s31+56));
        if ((u32)v4 != (u32)0) {
            fn_80114F04(v4);
        }
        s30 = (s30+1);
        s31 = (s31+4);
    } while ((s32)s30 < (s32)3);
}

void fn_8012AC20(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8012B6C8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 s26;
    u32 v1;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c0;
    c0 = fn_80112044();
    s28 = 0;
    s29 = (c0+3564);
    do {
        v1 = M32((s29+32));
        if ((u32)v1 != (u32)0) {
            s26 = M32((v1+44));
            v3 = M32((s26+68));
            if ((u32)v3 != (u32)0) {
                fn_8011582C(v3);
                M32((s26+68)) = 0;
            }
            s30 = s26;
            s27 = 0;
            s31 = 0;
            do {
                v4 = M32((s30+44));
                if ((u32)v4 != (u32)0) {
                    fn_8011582C(v4);
                    M32((s30+44)) = s31;
                }
                v5 = M32((s30+56));
                if ((u32)v5 != (u32)0) {
                    fn_8011582C(v5);
                    M32((s30+56)) = s31;
                }
                s27 = (s27+1);
                s30 = (s30+4);
            } while ((s32)s27 < (s32)3);
            M8((s26+72)) = 0;
            M8((s26+73)) = 0;
            v6 = M32((s29+32));
            fn_8011582C(v6);
            M32((s29+32)) = 0;
        }
        s28 = (s28+1);
        s29 = (s29+4);
    } while ((s32)s28 < (s32)4);
}

void fn_8012B798(u32 p3) {
    u32 v2;
    u32 h1;
    u32 v1;
    u32 s31;
    s31 = p3;
    s31 = (s31<<2);
    h1 = fn_80112044()+3168;
    v1 = M32(((u32)h1+8+s31));
    if ((u32)0 != (u32)v1) {
        fn_80114EEC(v1);
    }
    v2 = M32(((u32)h1+24+s31));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_80114EEC(v2);
}

void fn_8012B7FC(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    s31 = p3;
    s30 = (fn_80112044()+3168);
    s31 = (s31<<2);
    v1 = M32(((u32)s30+8+s31));
    if ((u32)v1 != (u32)0) {
        fn_80114F04(v1);
    }
    v2 = M32(((u32)s30+24+s31));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_80114F04(v2);
}

void fn_8012C4FC(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3168);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+8));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+8)) = s31;
        }
        v2 = M32((s30+24));
        if ((u32)v2 != (u32)0) {
            fn_8011582C(v2);
            M32((s30+24)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012C578(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3220+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012C5BC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3220+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012D344(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3212);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+8));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+8)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012D3AC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1796+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012D3F0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+1796+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012DC48(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+1792);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012DCB0(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    s31 = p3;
    s30 = (fn_80112044()+3256);
    s31 = (s31<<2);
    v1 = M32(((u32)s30+8+s31));
    if ((u32)v1 != (u32)0) {
        fn_80114EEC(v1);
    }
    v2 = M32(((u32)s30+24+s31));
    if ((u32)v2 == (s32)0) {
    return;
    }
    fn_80114EEC(v2);
}

void fn_8012DD14(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    s31 = p3;
    s30 = (fn_80112044()+3256);
    s31 = (s31<<2);
    v1 = M32(((u32)s30+24+s31));
    if ((s32)v1 != (u32)0) {
        fn_80114F04(v1);
    }
    v2 = M32(((u32)s30+8+s31));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_80114F04(v2);
}

void fn_8012DD78(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    s30 = p3;
    c0 = gmGetGlobalP();
    s31 = M32((s30+44));
    v2 = M8((s31+8));
    v3 = M32((s31+20));
    v4 = M32(((u32)c0+2616+(v2&0xc)));
    s30 = v4;
    if ((s32)v3 == (s32)s30) {
    return;
    }
    M32((s31+20)) = s30;
    v5 = M32((s31+24));
    fn_80115114(v5, ((s32)((s32)s30/100)%10), ((s32)s30/100));
    v6 = M32((s31+28));
    fn_80115114(v6, ((s32)((s32)s30/10)%10), ((s32)s30/10));
    v7 = M32((s31+32));
    fn_80115114(v7, ((s32)s30%10));
}

void fn_8012EA90(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3256);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+24));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+24)) = s31;
        }
        v2 = M32((s30+8));
        if ((u32)v2 != (u32)0) {
            fn_8011582C(v2);
            M32((s30+8)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012EB0C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3304+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012EB50(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3304+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012EC50(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3300);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012ECB8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3324+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012ECFC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3324+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012ED40(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c0;
    s29 = p3;
    c0 = gmGetGlobalP();
    s30 = M32((s29+44));
    s31 = M32((s29+40));
    v3 = M8((s30+8));
    v4 = M32((s30+20));
    v5 = M32(((u32)c0+2616+((v3>>2)&0x3c)));
    s29 = v5;
    if ((s32)v4 != (s32)s29) {
        M32((s30+20)) = s29;
        v6 = M32((s30+24));
        fn_80115114(v6, ((s32)((s32)s29/100)%10), ((s32)s29/100));
        v7 = M32((s30+28));
        fn_80115114(v7, ((s32)((s32)s29/10)%10), ((s32)s29/10));
        v8 = M32((s30+32));
        fn_80115114(v8, ((s32)s29%10));
    }
    fn_8040A64C(s31);
}

void fn_8012EF08(u32 p3, u32 p4) {
    u32 s27;
    u32 s28;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    u32 v8;
    float v9;
    u32 c0;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    s27 = p3;
    s28 = p4;
    c0 = fn_80112044();
    s30 = (c0+3320);
    if ((s32)s27 >= (s32)4 || (s32)s28 >= (s32)4) {
        return;
    }
    v1 = M32(s30);
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80114BA4(s28, v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_8012ED40, 20);
    v5 = lbl_805E0100;
    v6 = M32(s30);
    v7 = M32(v6);
    fn_80114D9C(s31, v7, v5, v5);
    c4 = fn_80114E24(s29, 52, s27, s28);
    s31 = c4;
    M32(((u32)s30+4+(s28<<2))) = s29;
    M32((s31+20)) = -1;
    c5 = fn_80055AF0(s29, 4);
    M32((s31+24)) = c5;
    c6 = fn_80055AF0(s29, 3);
    M32((s31+28)) = c6;
    c7 = fn_80055AF0(s29, 2);
    M32((s31+32)) = c7;
    c8 = fn_80055AF0(s29, 1);
    v8 = M32((c8+124));
    v9 = lbl_805E0104;
    HSD_AObjSetRate(v8, v9);
    fn_8006176C(((19<<16)+6));
}

void fn_8012F01C(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3320);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012F084(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3344+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012F0C8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3344+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012F338(u32 p3, u32 p4) {
    u32 s27;
    u32 s28;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    float v10;
    u32 c0;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    u32 c9;
    s27 = p3;
    s28 = p4;
    c0 = fn_80112044();
    s30 = (c0+3340);
    if ((s32)s27 >= (s32)4 || (s32)s28 >= (s32)4) {
        return;
    }
    v1 = M32(s30);
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80114BA4(s28, v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_8012F10C, 20);
    v5 = lbl_805E010C;
    v6 = M32(s30);
    v7 = M32(v6);
    fn_80114D9C(s31, v7, v5, v5);
    c4 = fn_80114E24(s29, 53, s27, s28);
    s31 = c4;
    v8 = lbl_805E010C;
    M32(((u32)s30+4+(s28<<2))) = s29;
    MF((s31+20)) = v8;
    c5 = fn_80055AF0(s29, 5);
    M32((s31+24)) = c5;
    c6 = fn_80055AF0(s29, 4);
    M32((s31+28)) = c6;
    c7 = fn_80055AF0(s29, 3);
    M32((s31+32)) = c7;
    c8 = fn_80055AF0(s29, 2);
    M32((s31+36)) = c8;
    c9 = fn_80055AF0(s29, 1);
    v9 = M32((c9+124));
    v10 = lbl_805E0110;
    HSD_AObjSetRate(v9, v10);
    fn_8006176C(((19<<16)+6));
}

void fn_8012F45C(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3340);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012F4C4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3364+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012F508(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3364+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012F800(u32 p3, u32 p4) {
    u32 s27;
    u32 s28;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    float v10;
    u32 c0;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    u32 c9;
    u32 c10;
    u32 c11;
    s27 = p3;
    s28 = p4;
    c0 = fn_80112044();
    s30 = (c0+3360);
    if ((s32)s27 >= (s32)4 || (s32)s28 >= (s32)4) {
        return;
    }
    v1 = M32(s30);
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80114BA4(s28, v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_8012F54C, 20);
    v5 = lbl_805E011C;
    v6 = M32(s30);
    v7 = M32(v6);
    fn_80114D9C(s31, v7, v5, v5);
    c4 = fn_80114E24(s29, 54, s27, s28);
    s31 = c4;
    v8 = lbl_805E011C;
    M32(((u32)s30+4+(s28<<2))) = s29;
    MF((s31+20)) = v8;
    c5 = fn_80055AF0(s29, 7);
    M32((s31+24)) = c5;
    c6 = fn_80055AF0(s29, 6);
    M32((s31+28)) = c6;
    c7 = fn_80055AF0(s29, 5);
    M32((s31+32)) = c7;
    c8 = fn_80055AF0(s29, 4);
    M32((s31+36)) = c8;
    c9 = fn_80055AF0(s29, 3);
    M32((s31+40)) = c9;
    c10 = fn_80055AF0(s29, 2);
    M32((s31+44)) = c10;
    c11 = fn_80055AF0(s29, 1);
    v9 = M32((c11+124));
    v10 = lbl_805E0128;
    HSD_AObjSetRate(v9, v10);
    fn_8006176C(((19<<16)+6));
}

void fn_8012F944(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3360);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012F9AC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3384+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012F9F0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3384+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8012FE48(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3380);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_8012FEB0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3404+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8012FEF4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3404+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8013016C(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3400);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_801301D4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3620+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80130218(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3620+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_8013025C(u32 p3) {
    HSD_ObjFree((u32)lbl_80558758, p3);
}

void fn_80130288(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_801302AC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M32(v1);
    v3 = M8((v2+8));
    if ((s32)((v3>>1)&0x1) == (s32)0) {
    return;
    }
    fn_8042A258(p3, p4, v2);
}

void fn_80130760(u32 p3) {
    u32 s23;
    u32 v1;
    u32 s31;
    u32 v3;
    u32 s30;
    u32 v5;
    u32 s29;
    u32 v7;
    u32 s28;
    u32 v9;
    u32 s27;
    u32 v11;
    u32 s26;
    u32 v13;
    u32 s25;
    u32 v15;
    u32 s24;
    u32 v17;
    u32 c0;
    s23 = p3;
    v1 = M32((p3+44));
    s31 = M32((v1+4));
    if ((u32)s31 != (u32)0) {
        v3 = M32((s31+44));
        s30 = M32((v3+4));
        if ((u32)s30 != (u32)0) {
            v5 = M32((s30+44));
            s29 = M32((v5+4));
            if ((u32)s29 != (u32)0) {
                v7 = M32((s29+44));
                s28 = M32((v7+4));
                if ((u32)s28 != (u32)0) {
                    v9 = M32((s28+44));
                    s27 = M32((v9+4));
                    if ((u32)s27 != (u32)0) {
                        v11 = M32((s27+44));
                        s26 = M32((v11+4));
                        if ((u32)s26 != (u32)0) {
                            v13 = M32((s26+44));
                            s25 = M32((v13+4));
                            if ((u32)s25 != (u32)0) {
                                v15 = M32((s25+44));
                                s24 = M32((v15+4));
                                if ((u32)s24 != (u32)0) {
                                    c0 = fn_80130870(s24);
                                    v17 = M32((c0+4));
                                    if ((u32)v17 != (u32)0) {
                                        fn_80130760(v17);
                                    }
                                    fn_8011582C(s24);
                                }
                                fn_8011582C(s25);
                            }
                            fn_8011582C(s26);
                        }
                        fn_8011582C(s27);
                    }
                    fn_8011582C(s28);
                }
                fn_8011582C(s29);
            }
            fn_8011582C(s30);
        }
        fn_8011582C(s31);
    }
    fn_8011582C(s23);
}

u32 fn_80130870(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    return v1;
}

void fn_80130878(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3612);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+8));
        if ((u32)v1 != (u32)0) {
            v2 = M32((v1+44));
            v3 = M32((v2+40));
            if ((u32)v3 != (u32)0) {
                fn_80130760(v3);
            }
            v4 = M32((s30+8));
            fn_8011582C(v4);
            M32((s30+8)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_801308F8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3092+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_8013093C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3092+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80130A3C(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3088);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_80130AA4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3112+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80130AE8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3112+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80130BE8(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3108);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_80130C50(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3132+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80130C94(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3132+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

void fn_80130CD8(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80130DB8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c0;
    s27 = p3;
    s28 = p4;
    c0 = fn_80112044();
    s31 = (c0+3128);
    if ((s32)s27 >= (s32)4 || (s32)s28 >= (s32)4) {
        return;
    }
    v1 = M32(s31);
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80114A34(s28, v3, (u32)fn_80114F1C, 2);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80130CD8, 20);
    v5 = M32(s31);
    v6 = lbl_805E0150;
    v7 = M32(v5);
    v8 = lbl_805E0154;
    fn_80114D9C(s29, v7, v6, v8);
    fn_80114E24(s30, 45, s27, s28);
    M32(((u32)s31+4+(s28<<2))) = s30;
    fn_8006176C(((2<<16)+14), (s31+(s28<<2)));
}

void fn_80130E84(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3128);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

void fn_80130EEC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3152+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114EEC(v1);
}

void fn_80130F30(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80112044();
    v1 = M32(((u32)c0+3152+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80114F04(v1);
}

u32 fn_801310C4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c0;
    s27 = p3;
    s28 = p4;
    c0 = fn_80112044();
    s31 = (c0+3148);
    if ((s32)s27 >= (s32)4 || (s32)s28 >= (s32)4) {
        return c0;
    }
    v1 = M32(s31);
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80114BA4(s28, v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80130F74, 20);
    v5 = M32(s31);
    v6 = lbl_805E0158;
    v7 = M32(v5);
    v8 = lbl_805E015C;
    fn_80114D9C(s29, v7, v6, v8);
    fn_80114E24(s30, 46, s27, s28);
    M32(((u32)s31+4+(s28<<2))) = s30;
    return (s31+(s28<<2));
}

void fn_80131178(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_80112044();
    s30 = (c0+3148);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8011582C(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)4);
}

u32 fn_801311E0() {
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

void fn_80131804(void) {
    u32 s31;
    u32 v1;
    s31 = (u32)lbl_80558788;
    v1 = M32((s31+236));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+236)) = 0;
}

void fn_80131848(void) {
    M8(&lbl_80558788[0]) = 1;
}

void fn_80131858(void) {
    M8(&lbl_80558788[0]) = 0;
}

u32 fn_80131868(void) {
    u32 v1;
    v1 = M8((u32)lbl_80558788);
    return v1;
}

void fn_80131878(void) {
    u32 s31;
    s31 = (u32)lbl_80558788;
    memset(s31, 0, 4872);
    lbl_805DD7E0 = 0;
    lbl_805DD7DC = 0;
    lbl_805DD7D8 = 0;
    lbl_805DD7D4 = 0;
    lbl_805DD7D0 = 0;
    lbl_805DD7CC = 0;
    lbl_805DD7C8 = 0;
    lbl_805DD7C4 = 0;
    lbl_805DD7C0 = 0;
    lbl_805DD7BC = 0;
    lbl_805DD7B8 = 0;
    lbl_805DD7B4 = 0;
    lbl_805DD7B0 = 0;
    lbl_805DD7AC = 0;
    lbl_805DD7A8 = 0;
    lbl_805DD7A4 = 0;
    lbl_805DD7A0 = 0;
    lbl_805DD79C = 0;
    lbl_805DD798 = 0;
    lbl_805DD794 = 0;
    lbl_805DD790 = 0;
    lbl_805DD78C = 0;
    lbl_805DD788 = 0;
    lbl_805DD784 = 0;
    lbl_805DD780 = 0;
    M32((s31+36)) = -1;
    M32((s31+32)) = -1;
}

void fn_80131EC4(void) {
    fn_8013B83C();
    fn_8013B648();
}

void fn_80131EE8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_80147EFC();
    fn_80147408();
    fn_80146F34(s30);
    fn_8014963C();
    fn_80146E14(s31);
}

void fn_80131F38(void) {
    fn_801473A8();
}

void fn_80131F58(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 v1;
    s31 = p5;
    s30 = p4;
    fn_80147C78(p3, p6);
    fn_801478BC(s30);
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_80146EEC();
}

void fn_80131FBC(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 v1;
    s31 = p4;
    fn_80147C78(p3, p5);
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
}

void fn_80132008(void) {
    fn_80147D08();
}

void fn_80132028(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p4;
    fn_80146FBC();
    fn_80147488();
    fn_801478BC(0);
    fn_80147E88();
    fn_80148550(0);
    fn_80149450(s30, s31);
    fn_80146DCC(s31);
}

void fn_8013208C(void) {
    fn_80147044();
    fn_80147D9C();
    fn_80147508();
    fn_801485FC(0);
    fn_8014953C();
    fn_80146DCC(0);
    fn_8014A090();
}

void fn_801320CC(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 s29;
    s31 = p6;
    s30 = p5;
    s29 = p3;
    fn_80146F34(p4);
    fn_80149450(s30, s31);
    fn_80146E14(s31);
    fn_80148550(s29);
}

void fn_80132130(void) {
    fn_80148358();
}

void fn_80132150(void) {
    fn_80148A70();
}

void fn_80132170(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 v1;
    s31 = p6;
    s30 = p5;
    fn_80148C74();
    v1 = M32((u32)lbl_804AA008+(((s8)s30)<<2));
    fn_8013B870(((s16)v1));
    fn_80146EEC();
    fn_801495C4(s31);
    switch ((s32)((s8)s31)) {
    case 10:
        fn_80149EA4();
        return;
    case 20:
        fn_80149F48();
        return;
    case 30:
        fn_80149FEC();
        return;
    }
    fn_8014A090();
}

void fn_80132214(void) {
    fn_80148D50();
}

void fn_80132234(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 v1;
    s31 = p5;
    fn_80148C74();
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
}

void fn_8013227C(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p3;
    fn_80146FBC(p4);
    fn_801484A4(((s8)(s30-1)));
    fn_80148550(s30);
    fn_801493BC(s31);
}

void fn_801322D4(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p3;
    fn_80147044(p4);
    fn_801485FC(((s8)(s30+1)));
    fn_801483F8(s30);
    fn_801493BC(s31);
}

void fn_8013232C(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    s31 = p8;
    s30 = p7;
    s29 = p6;
    s28 = p3;
    fn_8014A2B8(p5);
    v1 = M32((u32)lbl_804AA008+(((s8)s29)<<2));
    fn_8013B870(((s16)v1));
    fn_80146F34(s28);
    fn_80149450(s31, s30);
    fn_80146E14(s30);
}

void fn_801323B8(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    s31 = p7;
    s30 = p4;
    s29 = p3;
    fn_8014A2B8(p6, p5);
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_80146FBC(s30);
    fn_801484A4(s29);
}

void fn_80132430(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    s31 = p4;
    fn_8014A0D4();
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_80146EEC();
}

void fn_8013247C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_8014A124();
    fn_801483F8(s30);
    fn_80147044(s31);
}

void fn_801324C4(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    s31 = p7;
    s30 = p6;
    s29 = p5;
    s28 = p3;
    fn_8014A7D0(p4);
    fn_8014A584();
    v1 = M32((u32)lbl_804AA008+(((s8)s29)<<2));
    fn_8013B870(((s16)v1));
    fn_80146F34(s28);
    fn_80149450(s31, s30);
    fn_80146E14(s30);
}

void fn_80132554(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    s31 = p6;
    s30 = p4;
    s29 = p3;
    fn_8014A7D0(p5);
    fn_8014A584();
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_801484A4(s29);
    fn_80146FBC(s30);
}

void fn_801325CC(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    s31 = p4;
    fn_8014A6A0();
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_80146EEC();
}

void fn_80132618(void) {
    fn_8014A9D8();
}

void fn_80132638(void) {
    fn_8014A8EC();
}

void fn_80132658(void) {
    fn_8014AAA8();
}

void fn_80132678(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_8014A438();
    fn_801483F8(s30);
    fn_80147044(s31);
}

void fn_801326C0(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    s31 = p4;
    s30 = p6;
    s29 = p5;
    s28 = p3;
    fn_8014ACD0();
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_80146F34(s28);
    s31 = 0;
    do {
        fn_8014B63C(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
    fn_80149450(s30, s29);
    fn_80146E14(s29);
}

void fn_80132760(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    fn_8014ACD0();
    v1 = M32((u32)lbl_804AA008+(((s8)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_801484A4(s29);
    fn_80146FBC(s30);
    s31 = 0;
    do {
        fn_8014B63C(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_801327E8(void) {
    fn_8014AF94();
}

void fn_80132808(void) {
    fn_8014AE10();
}

void fn_80132828(void) {
    fn_8014B0F0();
}

void fn_80132848(void) {
    fn_8014B2C4();
}

void fn_80132868(void) {
    fn_8014B3FC();
}

void fn_80132888(void) {
    fn_8014B4B8();
}

void fn_801328A8(u32 p3, u32 p4) {
    u32 s31;
    s31 = p4;
    fn_801483F8();
    fn_8014AB58();
    fn_80147044(s31);
}

void fn_801328E0(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    s31 = p7;
    s30 = p6;
    s29 = p5;
    s28 = p3;
    fn_8014BBA8(p4);
    fn_8014BE10();
    fn_8014C160();
    fn_8014C518();
    fn_8014C958();
    fn_8014B944();
    v1 = M32((u32)lbl_804AA008+(((s16)s29)<<2));
    fn_8013B870(((s16)v1));
    fn_80146F34(s28);
    fn_80149450(s31, s30);
    fn_80146E14(s30);
}

void fn_80132980(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    s31 = p6;
    s30 = p4;
    s29 = p3;
    fn_8014BBA8(p5);
    fn_8014BE10();
    fn_8014C160();
    fn_8014C518();
    fn_8014C958();
    fn_8014B944();
    v1 = M32((u32)lbl_804AA008+(((s16)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_801484A4(s29);
    fn_80146FBC(s30);
}

void fn_80132A08(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    s31 = p4;
    fn_8014BA6C();
    v1 = M32((u32)lbl_804AA008+(((s16)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_80146EEC();
}

void fn_80132A54(u32 p3) {
    switch ((s32)((s8)p3)) {
    case 0:
        fn_8014BF30(1);
        break;
    case 1:
        fn_8014C284(1);
        break;
    case 2:
        fn_8014C720(1);
    }
}

void fn_80132AB8(u32 p3) {
    switch ((s32)((s8)p3)) {
    case 0:
        fn_8014BF30(0);
        break;
    case 1:
        fn_8014C284(0);
        break;
    case 2:
        fn_8014C720(0);
    }
}

void fn_80132B1C(u32 p3, u32 p4, float q1) {
    float g31;
    u32 s31;
    g31 = q1;
    s31 = p4;
    fn_8014BFD4();
    fn_8014C2E4(g31);
    fn_8014C7B4(s31);
}

void fn_80132B64(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    s31 = p4;
    fn_8014BFD4();
    v1 = M32((u32)lbl_804AA008+(((s16)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_80146EEC();
}

void fn_80132BB0(void) {
    fn_8014C2E4();
}

void fn_80132BD0(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    s31 = p4;
    fn_8014C7B4();
    v1 = M32((u32)lbl_804AA008+(((s16)s31)<<2));
    fn_8013B870(((s16)v1));
    fn_80146EEC();
}

void fn_80132C1C(u32 p3, u32 p4) {
    u32 s31;
    s31 = p4;
    fn_801483F8();
    fn_8014B7E0();
    fn_8014BCCC();
    fn_80147044(s31);
}

void fn_80132C58(void) {
    fn_80131928();
    fn_80146EA8();
    fn_80147364();
    fn_8014780C();
    fn_80147C34();
    fn_8014820C();
    fn_80148A04();
    fn_8014932C();
    fn_80149DA8();
    fn_8014A090();
    fn_8014A3F4();
    fn_8014A65C();
    fn_8014A8A8();
    fn_8014AAA8();
    fn_8014ADCC();
    fn_8014B140();
    fn_8014B44C();
    fn_8014B774();
    fn_8014BA28();
    fn_8014BEEC();
    fn_8014BC88();
    fn_8014C240();
    fn_8014C6DC();
    fn_8014CAF8();
    fn_8013B6F0();
    fn_80161C08();
}

void fn_80132F64(void) {
    fn_80177F5C();
    fn_8017816C();
}

void fn_80132F88(void) {
    fn_8013B974();
    fn_8013B648();
}

void fn_80132FAC(void) {
    fn_801788AC();
}

void fn_80132FCC(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 s29;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    fn_80178DB0(p3, p4, p6);
    fn_80179664(s29, s30, s31);
}

void fn_80133024(void) {
    fn_80178B1C();
}

void fn_80133044(void) {
    fn_80178B98();
}

void fn_80133064(void) {
    fn_80178C14();
}

void fn_80133084(void) {
    fn_801791DC();
}

void fn_801330A4(void) {
    fn_80178FD8();
}

void fn_801330C4(void) {
    fn_8017904C();
}

void fn_801330E4(void) {
    fn_80179DB0();
}

void fn_80133104(void) {
    fn_80179A68();
}

void fn_80133124(void) {
    fn_80179B00();
}

void fn_80133144(void) {
    fn_80179B78();
}

void fn_80133164(void) {
    fn_80179940();
}

void fn_80133184(void) {
    fn_801799D4();
}

void fn_801331A4(void) {
    fn_8017A4F8();
}

void fn_801331C4(u32 p3) {
    fn_8017A26C(((s8)p3));
}

void fn_801331E8(void) {
    fn_8017A0B4();
}

void fn_80133208(void) {
    fn_8017A190();
}

void fn_80133228(void) {
    fn_8017AAFC();
}

void fn_80133248(void) {
    fn_8017A994();
}

void fn_80133268(void) {
    fn_8017A7DC();
}

void fn_80133288(void) {
    fn_8017A8B8();
}

void fn_801332A8(void) {
    fn_8017B18C();
}

void fn_801332C8(void) {
    fn_8017ADDC();
}

void fn_801332E8(void) {
    fn_8017AD80();
}

void fn_80133308(void) {
    fn_8017AF78();
}

void fn_80133328(void) {
    fn_8017AFA8();
}

void fn_80133348(void) {
    fn_8017AC90();
}

void fn_80133368(void) {
    fn_8017ACCC();
}

void fn_80133388(void) {
    fn_8017AD08();
}

void fn_801333A8(void) {
    fn_8017AD44();
}

void fn_80133418(u32 p3) {
    u32 v1;
    v1 = M32((u32)lbl_804AA2D0+(((s8)p3)<<2));
    fn_8013B9A8(((s8)v1));
}

void fn_801334A0(void) {
    fn_80146800();
}

void fn_801334C0(void) {
    fn_80178040();
    fn_801783BC(0);
    fn_801784A4(1);
}

void fn_801334F0(void) {
    fn_80178088();
    fn_801782D4(0);
    fn_8017858C(1);
}

void fn_80133520(void) {
    fn_80131928();
    fn_80177FFC();
    fn_8017820C();
    fn_80178AB0();
    fn_80178F48();
    fn_80179324();
    fn_801798B0();
    fn_8017A014();
    fn_8017A798();
    fn_8017AC4C();
    fn_8017B388();
    fn_8013B6F0();
    fn_80161C08();
}

void fn_8013363C(void) {
    fn_8014CBAC();
    fn_8014CCEC();
    fn_8014D3F0();
    fn_8014D9F4();
    fn_8014D718();
    fn_8014DCCC();
}

void fn_80133670(void) {
    fn_8013CA80();
    fn_8013B648();
}

void fn_80133694(u32 p3, u32 p4) {
    fn_8013CAB4(p3, ((s8)p4));
}

void fn_801336B8(void) {
    fn_8013CEB8();
}

void fn_801336D8(void) {
    fn_8013D250();
}

void fn_801336F8(void) {
    fn_8013D54C();
}

void fn_80133718(void) {
    fn_8014D09C();
}

void fn_80133738(void) {
    fn_8014D59C();
}

void fn_80133758(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    fn_8014CDBC();
    fn_8014D4C0(s29);
    fn_8014D250(s30);
    fn_8014DB98(s31);
}

void fn_801337B4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_8014CDBC();
    fn_8014D4C0(s30);
    fn_8014D2D8(s31);
}

void fn_801337FC(void) {
    fn_8014CEA8();
}

void fn_8013381C(void) {
    fn_80131928();
    fn_8014CC38();
    fn_8014CD78();
    fn_8014D1E4();
    fn_8014D47C();
    fn_8014D84C();
    fn_8014DB54();
    fn_8014DD84();
    fn_8013B6F0();
    fn_80161C08();
}

void fn_80133914(void) {
    fn_8014DE38();
    fn_8014DF78();
    fn_8014E1E8();
    fn_8014E438();
    fn_8014EC5C();
    fn_8014EF08();
}

void fn_80133948(void) {
    fn_8013D570();
    fn_8013B648();
}

void fn_8013396C(u32 p3) {
    fn_8013D5A4(((s8)p3));
}

void fn_80133990(void) {
    fn_8013D82C();
}

void fn_801339B0(void) {
    fn_8013DBC4();
}

void fn_801339D0(void) {
    fn_8013DEC0();
}

void fn_801339F0(void) {
    fn_8014E8D4();
}

void fn_80133A10(void) {
    fn_8014EAE0();
}

void fn_80133A30(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    fn_8014E5CC();
    fn_8014EA04(s29);
    fn_8014E048(s30);
    fn_8014EDD4(s31);
}

void fn_80133A8C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_8014E5CC();
    fn_8014EA04(s30);
    fn_8014E0D0(s31);
}

void fn_80133AD4(void) {
    fn_8014E6C8();
}

void fn_80133AF4(void) {
    fn_80131928();
    fn_8014DEC4();
    fn_8014E004();
    fn_8014E274();
    fn_8014E588();
    fn_8014E998();
    fn_8014ED90();
    fn_8014EFC0();
    fn_8013B6F0();
    fn_80161C08();
    fn_80162940();
}

void fn_80133CF0(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8014F074();
    fn_8014F2E4();
    fn_80150458();
    fn_801510FC();
    fn_8014FC54();
    fn_80150E80(s31);
    fn_80152F6C(s31);
    fn_80154C34(s31);
    fn_80153AD0(s31);
    fn_80151CE8(s31);
}

void fn_80133D54(void) {
    fn_8013BACC();
    fn_8013B648();
}

void fn_80133D78(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8014F15C();
    fn_8014F4F0(s31);
    fn_8014FF3C(s31);
}

void fn_80133DB4(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    fn_8014F43C();
    fn_8014F3C8(s29, s30, s31);
}

void fn_80133E08(void) {
    fn_8014F8A4();
}

void fn_80133E28(void) {
    fn_8014F644();
}

void fn_80133E48(void) {
    fn_8014F71C();
}

void fn_80133E68(void) {
    fn_80150C2C();
}

void fn_80133E88(void) {
    fn_801506B8();
}

void fn_80133EA8(void) {
    fn_801507A8();
}

void fn_80133EC8(void) {
    fn_80150898();
}

void fn_80133EE8(void) {
    fn_80150AC0();
}

void fn_80133F08(void) {
    fn_80150BA0();
}

void fn_80133F28(void) {
    fn_80150CC8();
}

void fn_80133F48(void) {
    fn_80151644();
}

void fn_80133F68(void) {
    fn_80151258();
}

void fn_80133F88(void) {
    fn_801513AC();
}

void fn_80133FA8(void) {
    fn_80151B78();
}

void fn_80133FC8(void) {
    fn_80151AB4();
}

void fn_80133FE8(void) {
    fn_80151C50();
}

void fn_80134008(void) {
    fn_80151FCC();
}

void fn_80134028(void) {
    fn_801520AC();
}

void fn_80134048(void) {
    fn_80152194();
}

void fn_80134068(void) {
    fn_80154EBC();
}

void fn_80134088(void) {
    fn_80155064();
}

void fn_801340A8(void) {
    fn_80152E8C();
}

void fn_801340C8(void) {
    fn_801526D4();
}

void fn_801340E8(u32 p3, u32 p4, u32 p5) {
    fn_801529C4(p3, p4, ((s8)(p5+3)));
}

void fn_80134110(u32 p3, u32 p4, u32 p5) {
    fn_801529C4(p3, p4, ((s8)(p5+5)));
}

void fn_80134138(void) {
    fn_80152864();
}

void fn_80134158(void) {
    fn_8015273C();
}

void fn_80134178(void) {
    fn_801527D0();
}

void fn_80134198(void) {
    fn_8015261C();
}

void fn_801341B8(void) {
    fn_80152678();
}

void fn_801341D8(void) {
    fn_80152ED4();
}

void fn_801341F8(u32 p3, u32 p4, u32 p5) {
    fn_80153458(p3, p5, p4);
}

void fn_80134224(void) {
    fn_8015318C();
}

void fn_80134244(void) {
    fn_80153298();
}

void fn_80134264(void) {
    fn_801532EC();
}

void fn_80134284(void) {
    fn_80153340();
}

void fn_801342A4(void) {
    fn_80153394();
}

void fn_801342C4(void) {
    fn_80153608();
}

void fn_801342E4(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p3;
    fn_801539B8();
    fn_80153840(s30, s31);
}

void fn_80134328(void) {
    fn_801537B4();
}

void fn_80134348(void) {
    fn_801536C4();
}

void fn_80134368(void) {
    fn_80153A0C();
}

void fn_80134388(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p3;
    fn_80153E10();
    fn_80153D2C(s30, s31);
    fn_801518B0(s30, 0);
}

void fn_801343D8(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_80154090();
    fn_8013C160(s31);
    fn_801518B0(s31, 1);
}

void fn_80134418(void) {
    fn_80154238();
}

void fn_80134438(void) {
    fn_80154340();
}

void fn_80134458(u32 p3) {
    fn_801544B4(p3, 1);
}

void fn_8013447C(u32 p3) {
    fn_801544B4(p3, 0);
}

void fn_801344A0(void) {
    fn_801546D0();
}

void fn_801344C0(void) {
    fn_80154A48();
}

void fn_801344E0(void) {
    fn_80154ACC();
}

void fn_80134500(void) {
    fn_80154874();
}

void fn_80134520(void) {
    fn_801548DC();
}

void fn_80134540(void) {
    fn_8015478C();
}

void fn_80134560(void) {
    fn_80154800();
}

void fn_80134580(void) {
    fn_80154B14();
}

void fn_801345A0(void) {
    fn_801552F4();
}

void fn_801345C0(void) {
    fn_8015515C();
}

void fn_801345E0(void) {
    fn_801554F8();
}

void fn_80134600(void) {
    fn_80131928();
    fn_8014F118();
    fn_8014F384();
    fn_8014F4AC();
    fn_8014FEF8();
    fn_80150674();
    fn_80150F60();
    fn_80151368();
    fn_80151844();
    fn_80151F60();
    fn_8015258C();
    fn_80153068();
    fn_80153120();
    fn_80153658();
    fn_80153CC0();
    fn_801540E0();
    fn_80154340();
    fn_80154720();
    fn_80154D5C();
    fn_801550CC();
    fn_80155548();
    fn_8013B6F0();
    fn_80161C08();
    fn_80162940();
}

void fn_80134840(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_80155624();
    fn_801557E8();
    fn_80155D3C();
    fn_80156528();
    fn_8015693C(s31);
    fn_80158914(s31);
    fn_80159264(s31);
    fn_80159604(s31);
    fn_80158D48(s31);
    fn_80158588(s31);
}

void fn_801348A8(void) {
    fn_8013C1E0();
    fn_8013B648();
}

void fn_801348CC(void) {
    fn_80155A9C();
}

void fn_801348EC(void) {
    fn_801559B8();
}

void fn_8013490C(void) {
    fn_80155A58();
}

void fn_8013492C(void) {
    fn_801560F4();
}

void fn_8013494C(void) {
    fn_8015613C();
}

void fn_8013496C(void) {
    fn_80155E78();
}

void fn_8013498C(void) {
    fn_80155EEC();
}

void fn_801349AC(void) {
    fn_80155F60();
}

void fn_801349CC(void) {
    fn_80156010();
}

void fn_801349EC(void) {
    fn_80156088();
}

void fn_80134A0C(void) {
    fn_8015643C();
}

void fn_80134A2C(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s27;
    u32 s28;
    u32 s29;
    u32 s30;
    u32 s31;
    s27 = p3;
    s28 = p5;
    s29 = p6;
    s30 = p7;
    s31 = p8;
    fn_801566B4();
    fn_80156A78(s27, s28);
    fn_80156DF0(s27, s29);
    fn_80157144(s27, s30);
    fn_801586D0(s27, s31);
}

void fn_80134AA0(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    s31 = p6;
    s30 = p3;
    fn_801566B4();
    fn_801586D0(s30, s31);
}

void fn_80134AE4(void) {
    fn_8015738C();
}

void fn_80134B04(void) {
    fn_8015741C();
}

void fn_80134B24(void) {
    fn_80157504();
}

void fn_80134B44(void) {
    fn_80157328();
}

void fn_80134B64(void) {
    fn_80158EF0();
}

void fn_80134B84(void) {
    fn_80158FD8();
}

void fn_80134BA4(void) {
    fn_80158E8C();
}

void fn_80134BC4(void) {
    fn_80157898();
}

void fn_80134BE4(void) {
    fn_80159370();
}

void fn_80134C04(void) {
    fn_80158B2C();
}

void fn_80134C24(void) {
    fn_80158A2C();
}

void fn_80134C44(void) {
    fn_80158AAC();
}

void fn_80134C64(void) {
    fn_80158B84();
}

void fn_80134C84(void) {
    fn_80158354();
}

void fn_80134CA4(void) {
    fn_80158204();
}

void fn_80134CC4(void) {
    fn_80158258();
}

void fn_80134CE4(void) {
    fn_801582AC();
}

void fn_80134D04(void) {
    fn_80158300();
}

void fn_80134D24(void) {
    fn_80157E3C();
}

void fn_80134D44(void) {
    fn_80157C44();
}

void fn_80134D64(void) {
    fn_80157D34();
}

void fn_80134D84(void) {
    fn_80156644();
}

void fn_80134DA4(void) {
    fn_8015979C();
}

void fn_80134DC4(void) {
    fn_801598E4();
}

void fn_80134DE4(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8015670C();
    fn_80156B04(s31);
    fn_80156E70(s31);
    fn_801571C4(s31);
    fn_80158750(s31);
}

void fn_80134E30(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8015676C();
    fn_80156B68(s31);
    fn_80156ED4(s31);
    fn_80157228(s31);
    fn_801587B4(s31);
}

void fn_80134E7C(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8015670C();
    fn_80158750(s31);
}

void fn_80134EB0(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8015676C();
    fn_801587B4(s31);
}

void fn_80134EE4(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_80157984();
    fn_801583E0(s31);
    fn_80157E3C(s31);
    fn_80158B84(s31);
}

void fn_80134F28(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_801579CC();
    fn_80158428(s31);
    fn_80157EA0(s31);
    fn_80158BE8(s31);
}

void fn_80134F6C(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8015945C();
    fn_801583E0(s31);
    fn_80158B84(s31);
}

void fn_80134FA8(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_801594A4();
    fn_80158428(s31);
    fn_80158BE8(s31);
}

void fn_80134FE4(void) {
    fn_80131928();
    fn_801556B8();
    fn_80155888();
    fn_80155A58();
    fn_80155BD0();
    fn_80155E34();
    fn_801563D0();
    fn_80156600();
    fn_80156A0C();
    fn_80156D84();
    fn_801570D8();
    fn_801572BC();
    fn_8015782C();
    fn_80157BD8();
    fn_80158198();
    fn_80158664();
    fn_801589C0();
    fn_80158E20();
    fn_80159304();
    fn_801596B0();
    fn_80159934();
    fn_8013B6F0();
    fn_80161C08();
    fn_80162940();
}

void CSS_initDescriptionText(void) {
    fn_8013C4A8();
    fn_8013B648();
}

void fn_80135430(void) {
    fn_80159AF8();
}

void fn_80135450(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_80159D74();
    fn_80159D04(s30, s31);
}

void fn_80135494(void) {
    fn_8015A088();
}

void fn_801354B4(void) {
    fn_80159E28();
}

void CSS_updatePlayerIndicatorColorInside(void) {
    fn_80159F00();
}

void CSS_updatePlayerSelectFrame(void) {
    fn_8015B6E8();
}

void fn_80135514(void) {
    fn_8015B174();
}

void fn_80135534(void) {
    fn_8015B264();
}

void fn_80135554(void) {
    fn_8015B354();
}

void fn_80135574(void) {
    fn_8015B57C();
}

void fn_80135594(void) {
    fn_8015B65C();
}

void fn_801355B4(void) {
    fn_8015B784();
}

void fn_801355D4(void) {
    fn_8015C100();
}

void fn_801355F4(void) {
    fn_8015BD14();
}

void fn_80135614(void) {
    fn_8015BE68();
}

void fn_80135634(void) {
    fn_8015C638();
}

void fn_80135654(void) {
    fn_8015C574();
}

void fn_80135674(void) {
    fn_8015C710();
}

void fn_80135694(void) {
    fn_8015CA8C();
}

void fn_801356B4(void) {
    fn_8015CB6C();
}

void fn_801356D4(void) {
    fn_8015CC54();
}

void fn_801356F4(void) {
    fn_8015F8B4();
}

void fn_80135714(void) {
    fn_8015FA5C();
}

void fn_80135734(void) {
    fn_8015D8A4();
}

void fn_80135754(void) {
    fn_8015D0E4();
}

void fn_80135774(u32 p3, u32 p4, u32 p5) {
    fn_8015D3D4(p3, p4, ((s8)(p5+3)));
}

void fn_8013579C(u32 p3, u32 p4, u32 p5) {
    fn_8015D3D4(p3, p4, ((s8)(p5+5)));
}

void fn_801357C4(void) {
    fn_8015D274();
}

void fn_801357E4(void) {
    fn_8015D14C();
}

void fn_80135804(void) {
    fn_8015D1E0();
}

void fn_80135824(void) {
    fn_8015D02C();
}

void fn_80135844(void) {
    fn_8015D088();
}

void fn_80135864(void) {
    fn_8015D8EC();
}

void fn_80135884(u32 p3, u32 p4, u32 p5) {
    fn_8015DE70(p3, p5, p4);
}

void fn_801358B0(void) {
    fn_8015DBA4();
}

void fn_801358D0(void) {
    fn_8015DCB0();
}

void fn_801358F0(void) {
    fn_8015DD04();
}

void fn_80135910(void) {
    fn_8015DD58();
}

void fn_80135930(void) {
    fn_8015DDAC();
}

void fn_80135950(void) {
    fn_8015E020();
}

void fn_80135970(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p3;
    fn_8015E3D0();
    fn_8015E258(s30, s31);
}

void fn_801359B4(void) {
    fn_8015E1CC();
}

void fn_801359D4(void) {
    fn_8015E0DC();
}

void fn_801359F4(void) {
    fn_8015E424();
}

void fn_80135A14(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p3;
    fn_8015E824();
    fn_8015E740(s30, s31);
    fn_8015C370(s30, 0);
}

void fn_80135A64(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8015EAA4();
    fn_8013CA00(s31);
    fn_8015C370(s31, 1);
}

void fn_80135AA4(void) {
    fn_8015EC98();
}

void fn_80135AC4(void) {
    fn_8015ED38();
}

void fn_80135AE4(u32 p3) {
    fn_8015EEAC(p3, 1);
}

void fn_80135B08(u32 p3) {
    fn_8015EEAC(p3, 0);
}

void fn_80135B2C(void) {
    fn_8015F0C8();
}

void fn_80135B4C(void) {
    fn_8015F440();
}

void fn_80135B6C(void) {
    fn_8015F4C4();
}

void fn_80135B8C(void) {
    fn_8015F26C();
}

void fn_80135BAC(void) {
    fn_8015F2D4();
}

void fn_80135BCC(void) {
    fn_8015F184();
}

void fn_80135BEC(void) {
    fn_8015F1F8();
}

void fn_80135C0C(void) {
    fn_8015F50C();
}

void fn_80135C2C(void) {
    fn_8015FCEC();
}

void fn_80135C4C(void) {
    fn_8015FB54();
}

void fn_80135C6C(void) {
    fn_8015FEF0();
}

void fn_80135C8C(void) {
    fn_80131928();
    fn_80159AB4();
    fn_80159CC0();
    fn_80159DE4();
    fn_8015AA18();
    fn_8015B130();
    fn_8015BA1C();
    fn_8015BE24();
    fn_8015C304();
    fn_8015CA20();
    fn_8015CF9C();
    fn_8015DA80();
    fn_8015DB38();
    fn_8015E070();
    fn_8015E6D4();
    fn_8015EAF4();
    fn_8015ED38();
    fn_8015F118();
    fn_8015F754();
    fn_8015FAC4();
    fn_8015FF40();
    fn_8013B6F0();
    fn_80161C08();
    fn_80162940();
}

void fn_80135E00(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_80162594();
    fn_80162710(s30, s31);
}

void fn_80135F14(void) {
    u32 s31;
    fn_80162B2C();
    fn_80162E30();
    fn_801632E0();
    fn_801634B4();
    s31 = 0;
    do {
        fn_801639C4(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)8);
    fn_80163D90();
    fn_80164000();
    fn_80164280();
}

void fn_80135F6C(void) {
    fn_8013DEE4();
    fn_8013B648();
}

void fn_80135F90(void) {
    float v1;
    fn_80163260();
    fn_80162D54();
    fn_80163F60();
    fn_801641E0();
    fn_80163698(0);
    v1 = lbl_805E0160;
    fn_80163B50(v1);
}

void fn_80135FCC(u32 p3, u32 p4, u32 p5, float q1) {
    float g31;
    u32 s31;
    u32 s30;
    g31 = q1;
    s31 = p5;
    s30 = p4;
    fn_80162FB4();
    fn_80162FD8(s30);
    fn_80163698(s31);
    fn_80163B50(g31);
}

void fn_80136028(u32 p3, u32 p4, u32 p5, float q1) {
    float g31;
    u32 s31;
    u32 s30;
    g31 = q1;
    s31 = p5;
    s30 = p4;
    fn_80163130();
    fn_80163150(s30);
    fn_801637B4(s31);
    fn_80163C28(g31);
}

void fn_80136084(void) {
    fn_80162C08();
    fn_80146834();
    fn_80146868();
}

void fn_801360AC(void) {
    fn_80162CC0();
}

void fn_801360CC(void) {
    fn_80162F30();
}

void fn_801360EC(void) {
    fn_801630BC();
}

void fn_8013610C(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p4;
    fn_80163EB8();
    fn_8016411C(s30, s31);
    fn_80163F60();
    fn_801641E0();
}

void fn_80136158(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p4;
    fn_80163EB8();
    fn_8016411C(s30, s31);
}

void fn_8013639C(void) {
    fn_8016338C();
}

void fn_801363BC(void) {
    fn_80131928();
    fn_80162BC4();
    fn_80162EC4();
    fn_80163348();
    fn_801635EC();
    fn_80163AC0();
    fn_80163E30();
    fn_80164094();
    fn_80164318();
    fn_8013B6F0();
    fn_80161C08();
}

#pragma push
#pragma opt_common_subs off
void fn_80136504(void) {
    u32 s30;
    u32 h4;
    s32 s31;
    u32 h3;
    float v4;
    u32 loc8[8];
    float v3;
    float v5;
    s30 = (s32)lbl_80558788;
    h3 = M32((s30+20));
    if (h3 == 0) {
    return;
    }
    v4 = lbl_805E0178;
    h4 = M32((40+h3));
    M32((loc8)) = h4;
    v3 = lbl_805E0160;
    MF(((s32)loc8+12)) = v3;
    v5 = lbl_805E017C;
    MF(((s32)loc8+4)) = v3;
    MF(((s32)loc8+8)) = v4;
    MF(((u32)loc8+16)) = v5;
    MF(((u32)loc8+24)) = lbl_805E0180;
    M32(((u32)loc8+20)) = 22;
    s31 = fn_800721D4(((u32)loc8), h4, v5, v4, v3);
    if (s31 != (s32)0) {
        fn_80072458(s31, 16, 0);
    }
    M32((s30+24)) = s31;
}
#pragma pop

void fn_801367F4(void) {
    fn_801644C8();
    fn_801646F0();
    fn_80165964();
    fn_8016507C();
    fn_80165C64();
}

void fn_80136824(void) {
    fn_8013B648();
}

void fn_80136844(void) {
    fn_80164630();
}

void fn_80136864(void) {
    u32 s31;
    fn_8016435C();
    fn_801645AC();
    fn_80164AE4();
    s31 = 0;
    do {
        fn_801666CC(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_801368AC(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 s28;
    u32 s27;
    u32 s29;
    u32 s30;
    u32 s31;
    s28 = p4;
    s27 = p3;
    s29 = p5;
    s30 = p6;
    s31 = p7;
    fn_80164914(s28);
    fn_80165314(s27, s28);
    fn_80165AB0(s29);
    fn_80167250(s30, s28);
    fn_801662EC(s31, s28);
}

void fn_80136920(void) {
    fn_80164964();
}

void fn_80136940(void) {
    fn_80164A24();
}

void fn_80136960(void) {
    fn_80164AE4();
}

void fn_80136980(void) {
    fn_80164C38();
}

void fn_801369A0(void) {
    fn_80164804();
}

void fn_801369C0(void) {
    fn_80164874();
}

void fn_801369E0(void) {
    fn_801648DC();
}

void fn_80136A00(void) {
    fn_80165694();
}

void fn_80136A20(void) {
    fn_80165728();
}

void fn_80136A40(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    s31 = p7;
    s30 = p6;
    s29 = p5;
    s28 = p3;
    fn_80166DCC(p3, p4, p5, p8);
    fn_80165E5C(s30, s28);
    fn_80166458(s31, s28, s29);
}

void fn_80136AB0(void) {
    fn_801668D0();
}

void fn_80136AD0(void) {
    fn_80166954();
}

void fn_80136CE4(void) {
    fn_8013B648();
}

void fn_80136D04(void) {
    fn_80167734();
}

void fn_80136D24(void) {
    u32 s31;
    fn_80167460();
    fn_801676B0();
    s31 = 0;
    do {
        fn_80167BEC(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)2);
    s31 = 0;
    do {
        fn_8016A434(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_80136D80(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s28;
    u32 s27;
    u32 s26;
    u32 s29;
    u32 s30;
    u32 s31;
    s28 = p5;
    s27 = p4;
    s26 = p3;
    s29 = p6;
    s30 = p7;
    s31 = p8;
    fn_80167A90(p3, s28);
    fn_801687F0(s26, s27, s28);
    fn_801695E0(s26, s29);
    fn_8016AFF4(s26, s30, s28);
    fn_8016A04C(s26, s31, s28);
}

void fn_80136E08(void) {
    fn_80167908();
}

void fn_80136E28(void) {
    fn_80167AF8();
}

void fn_80136E48(void) {
    fn_80167BEC();
}

void fn_80136E68(void) {
    fn_80167DA8();
}

void fn_80136E88(void) {
    fn_80167940();
}

void fn_80136EA8(void) {
    fn_801679C0();
}

void fn_80136EC8(void) {
    fn_80167A40();
}

void fn_80136EE8(void) {
    fn_80169098();
}

void fn_80136F08(void) {
    fn_801691E0();
}

void fn_80136F28(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    s31 = p7;
    s30 = p6;
    s29 = p5;
    s28 = p3;
    fn_8016AB34(p3, p4, p5, p8);
    fn_80169B74(s30, s28);
    fn_8016A1C0(s31, s28, s29);
}

void fn_80136F98(void) {
    fn_8016A638();
}

void fn_80136FB8(void) {
    fn_8016A6BC();
}

void fn_80137178(void) {
    u32 s31;
    fn_8016B490();
    fn_8016B744();
    fn_8016D374();
    fn_8016CEDC();
    s31 = 0;
    do {
        fn_8016DAA4(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_801371C4(void) {
    fn_8013B648();
}

void fn_801371E4(void) {
    fn_8016B684();
}

void fn_80137204(void) {
    u32 s31;
    fn_8016B340();
    fn_8016B600();
    s31 = 0;
    do {
        fn_8016CB18(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_80137248(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s28;
    u32 s27;
    u32 s29;
    u32 s30;
    u32 s31;
    s28 = p5;
    s27 = p3;
    s29 = p6;
    s30 = p7;
    s31 = p8;
    fn_8016C8A4(p3, s28);
    fn_8016D850(s27, s29);
    fn_8016E924(s27, s30, s28);
    fn_8016DEE8(s27, s31, s28);
}

void fn_801372BC(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s27;
    u32 s28;
    u32 s29;
    u32 s30;
    u32 s31;
    s27 = p3;
    s28 = p5;
    s29 = p6;
    s30 = p7;
    s31 = p8;
    fn_8016C8A4(p3, 10);
    fn_8016D850(s27, s29);
    fn_8016E924(s27, s30, s28);
    fn_8016DEE8(s27, s31, s28);
}

void fn_80137330(void) {
    fn_8016C5A0();
}

void fn_80137350(void) {
    fn_8016C954();
}

void fn_80137370(void) {
    fn_8016CB18();
}

void fn_80137390(void) {
    fn_8016CB54();
}

void fn_801373B0(void) {
    fn_8016C5F4();
}

void fn_801373D0(void) {
    fn_8016C6C4();
}

void fn_801373F0(void) {
    fn_8016C78C();
}

void fn_80137410(void) {
    fn_8016C818();
}

void fn_80137430(void) {
    fn_8016D5D8();
}

void fn_80137450(void) {
    fn_8016D720();
}

void fn_80137628(void) {
    fn_8016ECBC();
    fn_8016EEE4();
    fn_8016F7D0();
    fn_8016FAA4();
}

void fn_80137654(void) {
    fn_8013B648();
}

void fn_80137674(void) {
    fn_8016EE24();
}

void fn_80137694(void) {
    fn_8016EB50();
    fn_8016EDA0();
    fn_8016F1E8();
}

void fn_801376BC(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_8016FE14();
    fn_801701F8(s30, s31);
    fn_80170550(s30);
}

void fn_80137708(void) {
    fn_8016EFF8();
}

void fn_80137728(void) {
    fn_8016F0E0();
}

void fn_80137748(void) {
    fn_8016F158();
}

void fn_80137768(void) {
    fn_8016F1B0();
}

void fn_80137788(void) {
    fn_8016F240();
}

void fn_801377A8(void) {
    fn_8016F308();
}

void fn_801377C8(void) {
    fn_8016F41C();
}

void fn_80137994(void) {
    fn_80170784();
    fn_801709BC();
    fn_80171050();
    fn_80172A50();
    fn_80172E08();
    fn_80174060();
}

void fn_801379C8(void) {
    fn_80170784();
    fn_801709BC();
    fn_80170C00();
    fn_80171050();
    fn_80172A50();
    fn_80172E08();
    fn_801751A0();
}

void fn_80137A00(void) {
    fn_80170784();
    fn_80170E44();
    fn_80172B24();
    fn_80172E08();
    fn_801764A8();
}

void fn_80137A30(void) {
    fn_8013B648();
    fn_801435D8();
}

void fn_80137A54(void) {
    fn_80172990();
}

void fn_80137A74(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s29;
    u32 s27;
    u32 s28;
    u32 s30;
    u32 s31;
    s29 = p5;
    s27 = p3;
    s28 = p4;
    s30 = p7;
    s31 = p8;
    fn_80176B28(p3, p4, p6);
    fn_80177AE8(s27, s28, s30, s29);
    fn_80172504(s27, s28, s31, s29);
}

void fn_80137AE4(void) {
    u32 s31;
    fn_80172934();
    fn_8017085C();
    fn_80173918();
    s31 = 0;
    do {
        fn_8017130C(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_80137B2C(u32 p3, u32 p4) {
    u32 s31;
    s31 = p3;
    fn_8017365C(p4);
    fn_8017360C(s31);
}

void fn_80137B64(void) {
    fn_801735D4();
    fn_80177688(0, 1);
}

void fn_80137B90(void) {
    fn_80173394();
}

void fn_80137BB0(void) {
    fn_80173434();
}

void fn_80137BD0(void) {
    fn_801733D4();
}

void fn_80137BF0(void) {
    fn_80173594();
}

void fn_80137C10(void) {
    fn_801736E0();
}

void fn_80137C30(void) {
    fn_80173800();
}

void fn_80137C50(void) {
    fn_80173918();
}

void fn_80137C70(void) {
    fn_80173AF4();
}

void fn_80137C90(void) {
    u32 s31;
    fn_80172934();
    fn_8017085C();
    fn_80170AA0();
    fn_801745E0();
    s31 = 0;
    do {
        fn_8017130C(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_80137CDC(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_801746F0(p3, p5);
    fn_80174688(s30, s31);
}

void fn_80137D24(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_80174638();
    fn_80177688(s31, 2);
}

void fn_80137D5C(void) {
    fn_8017426C();
}

void fn_80137D7C(void) {
    fn_8017437C();
}

void fn_80137D9C(void) {
    fn_801742AC();
}

void fn_80137DBC(void) {
    fn_80174324();
}

void fn_80137DDC(void) {
    fn_801745A8();
}

void fn_80137DFC(void) {
    fn_80174794();
}

void fn_80137E1C(void) {
    fn_801748CC();
}

void fn_80137E3C(void) {
    fn_80174AD4();
}

void fn_80137E5C(void) {
    fn_80172934();
    fn_80170CE4();
    fn_801757D4();
}

void fn_80137E84(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_80175934(p3, p5);
    fn_801758CC(s30, s31);
}

void fn_80137ECC(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_80175934(p3, 10);
    fn_801758CC(s31, 4);
}

void fn_80137F08(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8017587C();
    fn_80177688(s31, 4);
}

void fn_80137F40(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8017582C();
    fn_80177290(s31);
}

void fn_80137F74(void) {
    fn_80175460();
}

void fn_80137F94(void) {
    fn_80175570();
}

void fn_80137FB4(void) {
    fn_801754A0();
}

void fn_80137FD4(void) {
    fn_80175518();
}

void fn_80137FF4(void) {
    fn_8017579C();
}

void fn_80138014(void) {
    fn_801759D8();
}

void fn_80138034(void) {
    fn_80175B14();
}

void fn_80138054(void) {
    fn_80175D34();
}

void fn_80138074(void) {
    fn_80173164();
}

void fn_80138094(void) {
    fn_80172FAC();
}

void fn_801380B4(void) {
    fn_801732D8();
}

void fn_801380D4(void) {
    fn_80176E8C();
}

void fn_801380F4(void) {
    fn_80177000();
}

void fn_80138114(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    s31 = p7;
    s30 = p6;
    s29 = p5;
    s28 = p3;
    fn_80171AF8(p3, p4, p5, p8);
    fn_80171FA0(s30, s28);
    fn_801726B8(s31, s28, s29);
}

void fn_80138184(void) {
    fn_80171560();
}

void fn_801381A4(void) {
    fn_801715B8();
}

void fn_801381C4(void) {
    fn_80171620();
}

void fn_801381E4(void) {
    fn_80171698();
}

void fn_80138404(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_80162594();
    fn_80162710(s30, s31);
}

void fn_80138448(void) {
    fn_80161BC8();
    fn_801628D0();
}

void fn_8013846C(void) {
    fn_8013B69C();
    fn_8013F2DC();
}

void fn_80138490(u32 p3) {
    u32 v1;
    v1 = M32((u32)lbl_804AA538+(((s8)p3)<<2));
    fn_8013F310(((s8)v1));
}

void fn_801384C8(void) {
    fn_80131928();
    fn_80161C08();
    fn_80162940();
    fn_801629FC();
}

void fn_801384F4(void) {
    u32 s31;
    u32 v1;
    s31 = (u32)lbl_804A9B50;
    M8(&lbl_80558788[0]) = 1;
    fn_80059818((u32)&lbl_805DD794, (s31+316));
    v1 = lbl_805DD794;
    fn_80059520(v1, ((u32)lbl_80558788+3752), (s31+908), ((u32)lbl_80558788+3776), (s31+932), ((u32)lbl_80558788+3780), (s31+956), 0);
    HSD_ObjAllocInit((u32)lbl_80559A90, 496, 4);
    fn_8017B3CC();
}

void fn_80138580(void) {
    fn_8013A288();
    fn_8013B2E4();
    HSD_CObjGetCurrent();
    fn_803FE4B8();
    fn_8017B4C0();
}

void fn_801385B0(void) {
    fn_80131928();
    fn_8017B5F8();
}

void fn_801386B8(void) {
    u32 s31;
    u32 s30;
    fn_8016001C();
    fn_8016036C();
    fn_80160698();
    s30 = 0;
    do {
        s31 = fn_801602B0(s30);
        if ((s32)s31 != (s32)-1) {
            fn_801607D0(s31, s30);
            fn_80160CB8(s31, s30);
        }
        s30 = (s30+1);
    } while ((s32)s30 < (s32)4);
}

void fn_80138728(void) {
    fn_80160A2C();
}

void fn_80138748(void) {
    fn_80160AB8();
    fn_80160594();
}

void fn_8013876C(void) {
    fn_80131928();
    fn_801600B0();
    fn_801605DC();
    fn_8016073C();
    fn_80160944();
    fn_80160AF8();
    fn_80160FA8();
    fn_80161714();
}

void fn_801387A8(void) {
    u32 s31;
    u32 c0;
    u32 c5;
    s31 = (u32)lbl_804A9B50;
    M8(&lbl_80558788[0]) = 1;
    c0 = getTrialFlag();
    if ((s32)((s8)c0) != (s32)0) {
        M32(((u32)(u32)lbl_80558788+156)) = 1;
        fn_80073FA4((u32)lbl_80558788);
        fn_80073FBC();
        fn_80059818((u32)&lbl_805DD7D4, (s31+60));
        fn_80161998();
        return;
    }
    c5 = fn_8000AD48();
    if ((s32)((s8)c5) != (s32)0) {
        M32(((u32)(u32)lbl_80558788+160)) = 1;
        fn_80073FA4((u32)lbl_80558788);
        fn_80073FBC();
        fn_80059818((u32)&lbl_805DD7D0, (s31+80));
        fn_801619E4();
        fn_801621F4();
        return;
    }
    M32(((u32)(u32)lbl_80558788+148)) = 1;
    fn_80073FA4((u32)lbl_80558788);
    fn_80073FBC();
    fn_80059818((u32)&lbl_805DD7DC, (s31+16));
    fn_80161900();
    fn_80161FDC();
}

void fn_80138880(void) {
    fn_80131928();
    fn_80161C08();
    fn_80162940();
}

u32 fn_801388A8(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 c1;
    s30 = p3;
    s31 = func_80428F28(38, 30, 0);
    c1 = HSD_JObjLoadJoint(s30);
    s30 = c1;
    v1 = lbl_805DE351;
    fn_80429C14(s31, v1, s30);
    HSD_GObj_AddGXLink(s31, (u32)fn_80138AE0, 2, 0);
    fn_80052FB8(s30, (10240<<16));
    return s31;
}

u32 fn_80138934(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s31;
    u32 v1;
    u32 c1;
    s30 = p3;
    s29 = p5;
    s28 = p4;
    s31 = func_80428F28(38, 30, 0);
    c1 = HSD_JObjLoadJoint(s30);
    s30 = c1;
    v1 = lbl_805DE351;
    fn_80429C14(s31, v1, s30);
    HSD_GObj_AddGXLink(s31, (u32)fn_80138AE0, s28, s29);
    fn_80052FB8(s30, (10240<<16));
    return s31;
}

void fn_801389D8(u32 p3, u32 p4, float q1, float q2) {
    fn_80138B10(p3, 0, p4);
}

u32 fn_80138A00(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    s30 = p4;
    s29 = p3;
    s31 = HSD_ObjAlloc((u32)lbl_80559A90);
    if ((s32)s31 == (s32)0) {
        OSReport((u32)lbl_804A9F48);
        __assert((u32)&lbl_805D65F0, 6867, (u32)&lbl_805D65F8);
    }
    memset(s31, 0, 496);
    fn_80429D0C(s29, 38, (u32)fn_80138D04, s31);
    M32((s31+4)) = s30;
    v1 = M8((s31+8));
    ((BFu8_0_1*)((s31+8)))->f = 1;
    return s31;
}

u32 fn_80138AB0(p3) u32 p3; {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+8));
    ((BFu8_0_1*)((v1+8)))->f = 1;
    return v1;
}

u32 fn_80138AC8(p3) u32 p3; {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+8));
    ((BFu8_0_1*)((v1+8)))->f = 0;
    return v1;
}

void fn_80138AE0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+8));
    if ((s32)((v2>>7)&0x1) == (s32)0) {
    return;
    }
    fn_8042A258(p3, p4, v1);
}

void fn_80138D04(u32 p3) {
    HSD_ObjFree((u32)lbl_80559A90, p3);
}

u32 fn_80138D30(void) {
    return (u32)&lbl_805DD790;
}

void fn_80138E00(void) {
    fn_80131928();
    fn_80182CAC();
}

u32 fn_80138E24(void) {
    return (u32)&lbl_805DD78C;
}

void fn_80138EF4(void) {
    fn_8017BD54();
    fn_8017C140();
    fn_8017BF78();
}

void fn_80138F1C(void) {
    fn_8017C390();
    fn_8017C3C4();
    fn_8017C418();
}

void fn_80138F44(void) {
    fn_80131928();
    fn_8017BE84();
    fn_8017C1DC();
    fn_8017C244();
}

void fn_80139034(void) {
    fn_8013B69C();
    fn_8017CA90();
}

void fn_80139058(void) {
    fn_801831D8();
}

void fn_80139078(void) {
    fn_80131928();
    fn_80183250();
}

u32 fn_8013909C(void) {
    return (u32)&lbl_805DD784;
}

void fn_80139188(void) {
    fn_80183364();
    fn_801838C4();
    fn_801843BC();
    fn_80184ABC();
    fn_80184CAC();
    fn_80184F10();
    fn_80185128();
    fn_801853D8();
    fn_801856D4();
}

void fn_801391C8(void) {
    fn_8017C648();
    fn_8017C678();
    fn_8017C6CC();
}

void fn_801391F0(void) {
    fn_80131928();
    fn_801833F0();
    fn_80183994();
    fn_801844EC();
    fn_80184B98();
    fn_80184D38();
    fn_80184F9C();
    fn_801851B4();
    fn_80185464();
    fn_80185794();
    fn_8017CA70();
}

u32 fn_80139238(void) {
    return (u32)&lbl_805DD780;
}

void fn_80139314(void) {
    fn_80185848();
    fn_80185B44();
    fn_80185E08();
    fn_801866E8();
    fn_80186B9C();
    fn_80139348();
}

void fn_80139348(void) {
    fn_80186F50();
    fn_80186F84();
    fn_80186FD8();
}

void fn_80139370(void) {
    fn_80131928();
    fn_801858FC();
    fn_80185C44();
    fn_80186070();
    fn_80186820();
    fn_80186CD4();
    fn_80186FDC();
}

void fn_801393A8(u32 p3) {
    u32 s30;
    u32 s31;
    u32 c0;
    u32 c1;
    s30 = p3;
    s31 = M32((p3+40));
    c0 = fn_80131868();
    if ((s32)c0 == (s32)0) {
    return;
    }
    c1 = HSD_CObjSetCurrent(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    HSD_CObjEraseScreen(s31, 0, 0, 1);
    HSD_GObj_DispatchGXLink(s30, 7);
    HSD_CObjEndCurrent();
}

void fn_8013941C(void) {
    u32 s31;
    u32 v1;
    u32 s30;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c2;
    s31 = fn_801311E0();
    s30 = func_80428F28(40, 17, 0);
    v1 = M32((s31+240));
    v2 = M32((v1+4));
    v3 = M32(v2);
    c2 = fn_80066DF8(v3, v1);
    v4 = lbl_805DE353;
    fn_80429C14(s30, v4, c2);
    fn_80429728(s30, (u32)fn_801393A8, 20);
    M32((s30+36)) = ((8192<<16)+1);
    M32((s30+32)) = 0;
    M32((s31+236)) = s30;
}

void fn_801394B0(u32 p3) {
    u32 s30;
    u32 s31;
    u32 c0;
    u32 c1;
    s30 = p3;
    s31 = M32((p3+40));
    c0 = fn_80131868();
    if ((s32)c0 == (s32)0) {
    return;
    }
    c1 = HSD_CObjSetCurrent(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    HSD_GObj_DispatchGXLink(s30, 7);
    HSD_CObjEndCurrent();
}

void fn_8013AE6C(void) {
    u32 s31;
    u32 v1;
    u32 s30;
    u32 v2;
    u32 v3;
    u32 c2;
    s31 = fn_801311E0();
    s30 = func_80428F28(1, 1, 0);
    v1 = M32((s31+520));
    v2 = M32((v1+8));
    c2 = fn_80057468(v2, v1);
    v3 = lbl_805DE352;
    fn_80429C14(s30, v3, c2);
    HSD_GObj_AddGXLink(s30, (u32)fn_8042A22C, 0, 0);
    M32((s31+512)) = s30;
}

void fn_8013B264(void) {
    u32 s31;
    u32 v1;
    u32 s30;
    u32 v2;
    u32 v3;
    u32 c2;
    s31 = fn_801311E0();
    s30 = func_80428F28(1, 1, 0);
    v1 = M32((s31+3004));
    v2 = M32((v1+8));
    c2 = fn_80057468(v2, v1);
    v3 = lbl_805DE352;
    fn_80429C14(s30, v3, c2);
    HSD_GObj_AddGXLink(s30, (u32)fn_8042A22C, 0, 0);
    M32((s31+3016)) = s30;
}

void fn_8013B2E4(void) {
    u32 s31;
    u32 v1;
    u32 s30;
    u32 v2;
    u32 c2;
    s31 = fn_801311E0();
    s30 = func_80428F28(1, 1, 0);
    v1 = M32((s31+3780));
    c2 = fn_80057468(v1);
    v2 = lbl_805DE352;
    fn_80429C14(s30, v2, c2);
    HSD_GObj_AddGXLink(s30, (u32)fn_8042A22C, 0, 0);
    M32((s31+12)) = s30;
}

void fn_8013B648(void) {
    u32 s31;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8044F674(0, 0, 41, 17, 0, 3, 0, 5);
    M8((s31+40)) = c1;
}

void fn_8013B69C(void) {
    u32 s31;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8044F674(0, 0, 41, 17, 0, 3, 0, 21);
    M8((s31+40)) = c1;
}

void fn_8013B83C(void) {
    fn_8044F800(0, (u32)lbl_804AA638, (u32)lbl_804AA644);
}

void fn_8013B974(void) {
    fn_8044F800(0, (u32)lbl_804AA654, (u32)lbl_804AA664);
}

void fn_8013BACC(void) {
    fn_8044F800(0, (u32)lbl_804AA674, (u32)lbl_804AA684);
}

void fn_8013C1E0(void) {
    fn_8044F800(0, (u32)lbl_804AA6B0, (u32)lbl_804AA6C0);
}

void fn_8013C484(void) {
    fn_80146930();
    fn_801469FC();
}

void fn_8013C4A8(void) {
    fn_8044F800(0, (u32)lbl_804AA6F4, (u32)lbl_804AA704);
}

void fn_8013CA80(void) {
    fn_8044F800(0, (u32)lbl_804AA7AC, (u32)lbl_804AA7BC);
}

void fn_8013D504(void) {
    fn_801466D0();
    fn_8014676C();
}

void fn_8013D528(void) {
    fn_80146800();
    fn_8014689C();
}

void fn_8013D54C(void) {
    fn_80146930();
    fn_801469FC();
}

void fn_8013D570(void) {
    fn_8044F800(0, (u32)lbl_804AA7CC, (u32)lbl_804AA7DC);
}

void fn_8013DE78(void) {
    fn_801466D0();
    fn_8014676C();
}

void fn_8013DE9C(void) {
    fn_80146800();
    fn_8014689C();
}

void fn_8013DEC0(void) {
    fn_80146930();
    fn_801469FC();
}

void fn_8013DEE4(void) {
    fn_8044F800(0, (u32)lbl_804AA7F0, (u32)lbl_804AA804);
}

void fn_8013F2B8(u32 p3, u32 p4) {
    fn_8013EF40(p3, p4, 0);
}

void fn_8013F2DC(void) {
    fn_8044F800(0, (u32)lbl_804AA818, (u32)lbl_804AA82C);
}

void fn_801435D8(void) {
    fn_8044F800(0, (u32)lbl_804AA844, (u32)lbl_804AA854);
}

void fn_80143910(u32 p3, u32 p4, u32 p5, u32 p6) {
    fn_8014360C(0, 0, p3, p4, p5, p6);
}

void fn_80143948(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    fn_8014360C(1, p3, p4, p5, p6, p7, p5, p4);
}

void fn_8014398C(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    fn_8014360C(2, p3, p4, p5, p6, p7, p5, p4);
}

void fn_80143FB8(u32 p3, u32 p4, u32 p5) {
    fn_801439D0(0, 0, p3, p4, p5);
}

void fn_80143FF0(u32 p3, u32 p4, u32 p5, u32 p6) {
    fn_801439D0(1, p3, p4, p5, p6, p4);
}

void fn_8014402C(u32 p3, u32 p4, u32 p5, u32 p6) {
    fn_801439D0(2, p3, p4, p5, p6, p4);
}

void fn_80144500(u32 p3, u32 p4, u32 p5) {
    fn_80144068(0, 0, p3, p4, p5);
}

void fn_80144538(u32 p3, u32 p4, u32 p5, u32 p6) {
    fn_80144068(1, p3, p4, p5, p6, p4);
}

void fn_80144574(u32 p3, u32 p4, u32 p5, u32 p6) {
    fn_80144068(2, p3, p4, p5, p6, p4);
}

void fn_80144960(u32 p3, u32 p4, u32 p5) {
    fn_801445B0(0, 0, p3, p4, p5, 0);
}

void fn_8014499C(u32 p3, u32 p4, u32 p5, u32 p6) {
    fn_801445B0(1, p3, p4, p5, p6, 0);
}

void fn_801449DC(u32 p3, u32 p4, u32 p5, u32 p6) {
    fn_801445B0(2, p3, p4, p5, p6, 0);
}

void fn_801466A8(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    fn_801461DC(p3, p4, p5, p6, 0, p7);
}

void fn_801466D0() {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+44));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M8((v1+77)) = 0;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80146704(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+48));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M8((v1+77)) = 0;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80146738(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+52));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M8((v1+77)) = 0;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8014676C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+60));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M8((v1+77)) = 0;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_801467A0(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 c0;
    s31 = 0;
    s30 = 0;
    do {
        c0 = fn_801311E0();
        v1 = M32(((u32)c0+64+(((s8)s30)<<2)));
        if ((u32)v1 != (u32)0) {
            M8((v1+77)) = s31;
        }
        s30 = (s30+1);
    } while ((s32)s30 < (s32)8);
}

void fn_80146800(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+44));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M8((v1+77)) = 1;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80146834(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+48));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M8((v1+77)) = 1;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80146868(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+52));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M8((v1+77)) = 1;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8014689C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+60));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M8((v1+77)) = 1;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_801468D0(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 c0;
    s31 = 1;
    s30 = 0;
    do {
        c0 = fn_801311E0();
        v1 = M32(((u32)c0+64+(((s8)s30)<<2)));
        if ((u32)v1 != (u32)0) {
            M8((v1+77)) = s31;
        }
        s30 = (s30+1);
    } while ((s32)s30 < (s32)8);
}

void fn_80146930(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+44));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8044F350(v1);
    M32((s31+44)) = 0;
}

void fn_80146974(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+48));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8044F350(v1);
    M32((s31+48)) = 0;
}

void fn_801469B8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+52));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8044F350(v1);
    M32((s31+52)) = 0;
}

void fn_801469FC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+60));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8044F350(v1);
    M32((s31+60)) = 0;
}

void fn_80146A40(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+64));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8044F350(v1);
    M32((s31+64)) = 0;
}

void fn_80146A90(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+96));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8044F350(v1);
    M32((s31+96)) = 0;
}

void fn_80146AE0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+112));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8044F350(v1);
    M32((s31+112)) = 0;
}

void fn_80146CB4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+748), (u32)lbl_804AAA30, 0);
}

void fn_80146DCC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+752));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+12)) = s31;
    M32((v2+16)) = 8;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80146E14(u32 p3) {
    u32 s31;
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
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+752));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+12)) = s31;
    M32((v2+16)) = 0;
    v3 = M8((v2+12));
    v4 = M32((u32)lbl_804AA21C+(((s8)v3)<<2));
    M32((v2+20)) = v4;
    v5 = M32((v2+24));
    v6 = M8((v2+20));
    v7 = M32((v5+24));
    v8 = M32((v7+8));
    v9 = M32((v8+12));
    M8((v9+4)) = v6;
    v10 = M8((v2+21));
    v11 = M32((v8+12));
    M8((v11+5)) = v10;
    v12 = M8((v2+22));
    v13 = M32((v8+12));
    M8((v13+6)) = v12;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80146EA8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+752));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+752)) = 0;
}

void fn_80146EEC(void) {
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+760));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = lbl_805E04E8;
    M8((v2+15)) = 6;
    v4 = M32((v2+16));
    fn_80138C1C(v4, 0, v3);
}

void fn_80146F34(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    u32 c0;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+760));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E04E8;
    M8((s31+12)) = s30;
    M8((s31+13)) = 1;
    M8((s31+14)) = 10;
    v4 = M32((s31+20));
    fn_80138BA4(v4, 20, v3);
    v5 = M32((s31+24));
    v6 = lbl_805E04EC;
    fn_80138C90(v5, 0, v6);
    v7 = M32((s31+28));
    fn_8040BE00(v7, 16);
    fn_80146800();
}

void fn_80146FBC(p3) u32 p3; {
    u32 s30;
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    u32 c0;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+760));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E04E8;
    M8((s31+12)) = s30;
    M8((s31+13)) = 1;
    M8((s31+14)) = 10;
    v4 = M32((s31+20));
    fn_80138BA4(v4, 0, v3);
    v5 = M32((s31+24));
    v6 = lbl_805E04E8;
    fn_80138C90(v5, 5, v6);
    v7 = M32((s31+28));
    fn_8040BE00(v7, 16);
    fn_80146800();
}

void fn_80147044(p3) u32 p3; {
    u32 s30;
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    u32 c0;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+760));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E04E8;
    M8((s31+12)) = s30;
    M8((s31+13)) = 1;
    M8((s31+14)) = 10;
    v4 = M32((s31+20));
    fn_80138BA4(v4, 10, v3);
    v5 = M32((s31+24));
    v6 = lbl_805E04E8;
    fn_80138C90(v5, 5, v6);
    v7 = M32((s31+28));
    fn_8040BE00(v7, 16);
    fn_80146800();
}

void fn_80147230(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+756), (u32)lbl_804AAA48, 0);
}

void fn_8014727C(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    s30 = fn_801311E0();
    v1 = M32((s30+756));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 2, 30);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_801470CC, 1);
    v5 = lbl_805E04EC;
    v6 = M32((s30+756));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 3);
    s31 = c4;
    c5 = fn_80055AF0(s29, 3);
    M32((s31+16)) = c5;
    c6 = fn_80055AF0(s29, 6);
    M32((s31+20)) = c6;
    c7 = fn_80055AF0(s29, 9);
    M32((s31+24)) = c7;
    c8 = fn_80055AF0(s29, 1);
    M32((s31+28)) = c8;
    M8((s31+13)) = 0;
    M8((s31+14)) = 0;
    M8((s31+15)) = 0;
    M32((s30+760)) = s29;
}

void fn_80147364(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+760));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+760)) = 0;
}

void fn_801476F0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+764), (u32)lbl_804AAA60, 0);
}

void fn_8014773C(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    u32 c5;
    u32 c6;
    u32 c7;
    s30 = fn_801311E0();
    fn_80188308();
    v1 = M32((s30+764));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80147588, 1);
    v5 = lbl_805E04F8;
    v6 = M32((s30+764));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c5 = fn_80138A00(s29, 7);
    s31 = c5;
    M8((c5+12)) = 0;
    M8((s31+13)) = 0;
    M8((s31+14)) = 0;
    c6 = fn_80055AF0(s29, 4);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 5);
    M32((s31+20)) = c7;
    M32((s30+768)) = s29;
    lbl_805DD7EC = 0;
    lbl_805DD7E8 = 0;
}

void fn_8014780C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    fn_801885E8();
    lbl_805DD7F0 = 0;
    v1 = M32((s31+768));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+768)) = 0;
}

void fn_80147AFC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+772), (u32)lbl_804AAA78, 0);
}

void fn_80147B48(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 c4;
    u32 c5;
    u32 c6;
    s30 = fn_801311E0();
    v1 = M32((s30+772));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_801479C0, 1);
    v5 = lbl_805E0504;
    v6 = M32((s30+772));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 8);
    s31 = c4;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+16)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+20)) = c6;
    v8 = lbl_805E0504;
    M8((s31+12)) = 0;
    M8((s31+13)) = 0;
    v9 = M32((s31+16));
    fn_80138BA4(v9, 0, v8);
    v10 = M32((s31+20));
    v11 = lbl_805E0504;
    fn_80138BA4(v10, 0, v11);
    v12 = M32((s31+20));
    fn_800550F4(v12, ((1<<16)-1));
    M32((s30+776)) = s29;
}

void fn_80147C34(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+776));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+776)) = 0;
}

void fn_80147E88(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+784));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    s30 = 0;
    M8((v2+13)) = 0;
    s31 = v2;
    M8((v2+14)) = 0;
    M8((v2+16)) = 0;
    do {
        v3 = M32((s31+20));
        fn_8040BE00(v3, 16);
        s30 = (s30+1);
        s31 = (s31+4);
    } while ((s32)s30 < (s32)5);
}

void fn_80147FE8(u32 p3) {
    u32 s31;
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
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((s31+44));
    s31 = v1;
    v2 = M8((s31+13));
    if ((s32)((s8)v2) == (s32)0) {
    return;
    }
    v3 = M8((s31+14));
    M8((s31+14)) = (v3+1);
    v4 = M8((s31+14));
    if ((s32)v4 == (s32)6) {
        v5 = M8((s31+15));
        if ((s32)v5 != (s32)3) {
            fn_8014785C(v3);
        }
    }
    v6 = M8((s31+16));
    v7 = M8((s31+14));
    v8 = M8((u32)&lbl_805D6670+((s8)v6));
    if ((s32)((s8)v8) != (s32)((s8)v7)) {
    return;
    }
    v9 = M32(((u32)s31+20+(((s8)v6)<<2)));
    fn_8040C174(v9, 16);
    v10 = M8((s31+16));
    M8((s31+16)) = (v10+1);
    v11 = M8((s31+16));
    if ((s32)v11 != (s32)5) {
    return;
    }
    M8((s31+13)) = 0;
    M8((s31+14)) = 0;
    if ((s32)v11 != (s32)5) {
    return;
    }
}

void fn_801480A8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+780), (u32)lbl_804AAA90, 0);
}

void fn_8014820C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+784));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+784)) = 0;
}

void fn_80148250(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+792+(((s8)s29)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+108+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_801482D4(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+792+(((s8)s29)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+36+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_801487EC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+788), (u32)lbl_804AAAB0, 0);
}

void fn_80148A04(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+792));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+792)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)2);
}

void fn_8014906C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+800), (u32)lbl_804AAAD0, 0);
}

void fn_801493BC(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    u32 v8;
    u32 v9;
    float v10;
    u32 v11;
    float v12;
    u32 c0;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+856));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0530;
    M8((s31+15)) = s30;
    M8((s31+14)) = 19;
    v4 = M32((s31+40));
    v5 = M32((v4+124));
    HSD_AObjReqAnim(v5, v3);
    v6 = M32((s31+40));
    v7 = lbl_805E0534;
    v8 = M32((v6+124));
    HSD_AObjSetRate(v8, v7);
    v9 = M32((s31+40));
    fn_8040A1A0(v9);
    v10 = lbl_805E0538;
    MF((s31+28)) = v10;
    v11 = M32((s31+52));
    v12 = MF((s31+28));
    fn_800550BC(v11, ((1<<16)-1), v12);
}

void fn_80149450(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    u32 v1;
    u32 s31;
    u32 v3;
    u32 v4;
    float v5;
    float v6;
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
    float v17;
    u32 c0;
    s30 = p4;
    s29 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+856));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    fn_80138AB0(v1);
    M8((s31+12)) = 1;
    M8((s31+13)) = 9;
    M8((s31+14)) = 0;
    v3 = M32((s31+40));
    fn_8040BE00(v3, 16);
    v4 = M32((s31+48));
    v5 = lbl_805E0534;
    fn_80138BA4(v4, 0, v5);
    M8((s31+16)) = s30;
    v6 = lbl_805E0530;
    M32((s31+20)) = 8;
    M8((s31+15)) = s29;
    v7 = (*(s8*)((s31+15)));
    v8 = M32((s31+44));
    fn_80138BA4(v8, v7, v6);
    v9 = M32((s31+40));
    v10 = lbl_805E053C;
    fn_80409274(v9, v10);
    v11 = M32((s31+40));
    v12 = lbl_805E0534;
    v13 = M32((v11+124));
    HSD_AObjSetRate(v13, v12);
    v14 = M32((s31+40));
    fn_8040A1A0(v14);
    v15 = lbl_805E0538;
    MF((s31+28)) = v15;
    v16 = M32((s31+52));
    v17 = MF((s31+28));
    fn_800550BC(v16, ((1<<16)-1), v17);
}

void fn_8014953C(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+856));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    fn_80138AB0(v1);
    M8((s31+12)) = 2;
    v3 = lbl_805E0534;
    M8((s31+13)) = 9;
    M8((s31+14)) = 0;
    v4 = M32((s31+48));
    fn_80138BA4(v4, 10, v3);
    v5 = M32((s31+40));
    v6 = lbl_805E0530;
    fn_80409274(v5, v6);
    v7 = M32((s31+40));
    v8 = lbl_805E0534;
    v9 = M32((v7+124));
    HSD_AObjSetRate(v9, v8);
    v10 = M32((s31+40));
    fn_8040A1A0(v10);
}

void fn_801495C4(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c0;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+856));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0530;
    M8((s31+15)) = s30;
    v4 = (*(s8*)((s31+15)));
    v5 = M32((s31+44));
    fn_80138BA4(v5, v4, v3);
    v6 = lbl_805E0538;
    MF((s31+28)) = v6;
    v7 = M32((s31+52));
    v8 = MF((s31+28));
    fn_800550BC(v7, ((1<<16)-1), v8);
}

void fn_8014963C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+856));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80149B2C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+852), (u32)lbl_804AAAF0, 0);
}

void fn_80149DA8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+856));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+856)) = 0;
}

void fn_80149DEC(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80149EA4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v6;
    float v7;
    u32 v8;
    float v9;
    s31 = fn_801311E0();
    v1 = M32((s31+872));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s31+872)) = 0;
    }
    v2 = M32((s31+860));
    v3 = M32(v2);
    v4 = M32(v3);
    s30 = fn_801388A8(v4);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80149DEC, 1);
    v6 = M32((s31+860));
    v7 = lbl_805E0550;
    v8 = M32(v6);
    v9 = lbl_805E0554;
    fn_801389D8(s29, v8, v7, v9);
    fn_80138A00(s30, 2);
    M32((s31+872)) = s30;
}

void fn_80149F48(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v6;
    float v7;
    u32 v8;
    float v9;
    s31 = fn_801311E0();
    v1 = M32((s31+872));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s31+872)) = 0;
    }
    v2 = M32((s31+864));
    v3 = M32(v2);
    v4 = M32(v3);
    s30 = fn_801388A8(v4);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80149DEC, 1);
    v6 = M32((s31+864));
    v7 = lbl_805E0550;
    v8 = M32(v6);
    v9 = lbl_805E0554;
    fn_801389D8(s29, v8, v7, v9);
    fn_80138A00(s30, 2);
    M32((s31+872)) = s30;
}

void fn_80149FEC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v6;
    float v7;
    u32 v8;
    float v9;
    s31 = fn_801311E0();
    v1 = M32((s31+872));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s31+872)) = 0;
    }
    v2 = M32((s31+868));
    v3 = M32(v2);
    v4 = M32(v3);
    s30 = fn_801388A8(v4);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80149DEC, 1);
    v6 = M32((s31+868));
    v7 = lbl_805E0550;
    v8 = M32(v6);
    v9 = lbl_805E0554;
    fn_801389D8(s29, v8, v7, v9);
    fn_80138A00(s30, 2);
    M32((s31+872)) = s30;
}

void fn_8014A090(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+872));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+872)) = 0;
}

void fn_8014A124(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    u32 v8;
    u32 v9;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+880));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E055C;
    M8((s31+20)) = 2;
    M8((s31+21)) = 4;
    v4 = M32((s31+12));
    v5 = M32((v4+124));
    HSD_AObjReqAnim(v5, v3);
    v6 = M32((s31+12));
    v7 = lbl_805E0560;
    v8 = M32((v6+124));
    HSD_AObjSetRate(v8, v7);
    v9 = M32((s31+12));
    fn_8040A1A0(v9);
}

void fn_8014A194(u32 p3) {
    u32 s29;
    u32 s31;
    u32 s30;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    u32 v11;
    u32 v12;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+44));
    v2 = M32((s29+40));
    fn_8040A64C(v2);
    v3 = M8((s30+20));
    if ((s32)((s8)v3) == (s32)1) {
        v4 = M8((s30+21));
        M8((s30+21)) = (v4-1);
        if ((s32)((s8)(v4-1)) > (s32)0) {
        return;
        }
        v5 = M32((s30+12));
        v6 = lbl_805E0558;
        v7 = M32((v5+124));
        HSD_AObjSetRate(v7, v6);
        M8((s30+20)) = 0;
        M8((s30+21)) = 0;
        return;
    }
    if ((s32)((s8)v3) != (s32)2) {
    return;
    }
    v8 = M8((s30+21));
    M8((s30+21)) = (v8-1);
    if ((s32)((s8)(v8-1)) > (s32)0) {
    return;
    }
    v9 = M32((s30+12));
    v10 = lbl_805E0558;
    v11 = M32((v9+124));
    HSD_AObjSetRate(v11, v10);
    M8((s30+20)) = 0;
    M8((s30+21)) = 0;
    v12 = M32((s31+880));
    func_80428F64(v12);
    M32((s31+880)) = 0;
}

void fn_8014A26C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+876), (u32)lbl_804AAB60, 0);
}

void fn_8014A3F4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+880));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+880)) = 0;
}

void fn_8014A438(void) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    float v6;
    float v7;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+888));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((c0+884));
    s31 = M32((v1+44));
    v4 = M32((v1+40));
    v5 = M32(v2);
    v6 = lbl_805E0568;
    v7 = lbl_805E056C;
    fn_80138B10(v4, 1, v5, v1, v6, v7);
    M8((s31+12)) = 2;
    fn_8014A8A8();
}

void fn_8014A498(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) == (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = M8((s29+12));
    if ((s32)v4 == (s32)2) {
        M8((s29+12)) = 0;
        v5 = M32((s31+888));
        func_80428F64(v5);
        M32((s31+888)) = 0;
        return;
    }
    M8((s29+12)) = 0;
    fn_8014A6F0();
}

void fn_8014A538(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+884), (u32)lbl_804AAB80, 0);
}

void fn_8014A584(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    u32 v11;
    float v12;
    s30 = fn_801311E0();
    v1 = M32((s30+888));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s30+888)) = 0;
    }
    v2 = M32((s30+884));
    v3 = M32(v2);
    v4 = M32(v3);
    s29 = fn_801388A8(v4);
    s28 = M32((s29+40));
    HSD_GObj_AddProc(s29, (u32)fn_8014A498, 1);
    v6 = lbl_805E0568;
    v7 = M32((s30+884));
    v8 = M32(v7);
    fn_801389D8(s28, v8, v6, v6);
    s31 = fn_80138A00(s29, 10);
    v9 = M32((s30+884));
    v10 = lbl_805E0568;
    v11 = M32(v9);
    v12 = lbl_805E056C;
    fn_80138B10(s28, 0, v11, v10, v12);
    M8((s31+12)) = 1;
    fn_8014A720();
    M32((s30+888)) = s29;
}

void fn_8014A65C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+888));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+888)) = 0;
}

void fn_8014A6F0(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+896));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014A720(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+896));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8014A750(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_8014A784(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+892), (u32)lbl_804AABA0, 0);
}

void fn_8014A7D0(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v6;
    u32 v7;
    float v8;
    u32 c5;
    s28 = p3;
    s31 = fn_801311E0();
    v1 = M32((s31+896));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s31+896)) = 0;
    }
    v2 = M32((s31+892));
    v3 = M32(v2);
    v4 = M32(v3);
    s30 = fn_80138934(v4, 2, 80);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014A750, 1);
    v6 = M32((s31+892));
    v7 = M32(v6);
    v8 = lbl_805E0570;
    fn_801389D8(s29, v7, ((float)(s32)((s8)s28)), v8);
    c5 = fn_80138A00(s30, 11);
    M8((c5+12)) = s28;
    M32((s31+896)) = s30;
}

void fn_8014A8A8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+896));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+896)) = 0;
}

void fn_8014A958(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_8014A98C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+900), (u32)lbl_804AABC0, 0);
}

void fn_8014AAA8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+904));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+904)) = 0;
}

void fn_8014AAEC(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+912));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+28+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8014AB58(void) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    float v6;
    float v7;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+912));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((c0+908));
    s31 = M32((v1+44));
    v4 = M32((v1+40));
    v5 = M32(v2);
    v6 = lbl_805E0588;
    v7 = lbl_805E058C;
    fn_80138B10(v4, 1, v5, v1, v6, v7);
    M8((s31+76)) = 2;
}

#pragma push
#pragma optimization_level 3
void fn_8014ABB4(u32 p3) {
    u32 h1;
    s32 s30;
    u32 s29;
    u32 s28;
    s32 s31;
    u32 s27;
    u32 s26;
    s28 = p3;
    s31 = fn_801311E0();
    s27 = M32((s28+40));
    s26 = M32((44+s28));
    fn_8040A64C(s27);
    s30 = 0;
    s29 = M32((s28+44));
    s28 = s29;
    do {
        h1 = M32((s28+12));
        fn_80053F34(h1, 0, (s29+28));
        s30 = (s30+1);
        s29 = (s29+12);
        s28 = (4+s28);
    } while ((s32)s30 < (s32)4);
    if (((s8)M8((s26+76))) == 0) {
    return;
    }
    if ((s32)fn_800547E0(s27) != (s32)0) {
    return;
    }
    if ((s32)M8((s26+76)) == 2) {
        M8((76+s26)) = 0;
        fn_8014B140();
        fn_8014B44C();
        fn_8014B774();
        func_80428F64(M32((s31+912)));
        M32((s31+912)) = 0;
        return;
    }
    M8((76+s26)) = 0;
}
#pragma pop

void fn_8014AC84(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+908), (u32)lbl_804AABE0, 0);
}

void fn_8014ACD0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    s30 = fn_801311E0();
    v1 = M32((s30+912));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s30+912)) = 0;
    }
    v2 = M32((s30+908));
    v3 = M32(v2);
    v4 = M32(v3);
    s29 = fn_801388A8(v4);
    s28 = M32((s29+40));
    HSD_GObj_AddProc(s29, (u32)fn_8014ABB4, 1);
    s31 = fn_80138A00(s29, 13);
    c5 = fn_80055AF0(s29, 3);
    M32((s31+12)) = c5;
    c6 = fn_80055AF0(s29, 4);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 5);
    M32((s31+20)) = c7;
    c8 = fn_80055AF0(s29, 6);
    M32((s31+24)) = c8;
    v6 = lbl_805E0588;
    v7 = M32((s30+908));
    v8 = lbl_805E058C;
    v9 = M32(v7);
    fn_80138B10(s28, 0, v9, v6, v8);
    M8((s31+76)) = 1;
    M32((s30+912)) = s29;
}

void fn_8014ADCC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+912));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+912)) = 0;
}

void fn_8014AF48(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+916), (u32)lbl_804AAC00, 0);
}

void fn_8014B140(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+920));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+920)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8014B278(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+936), (u32)lbl_804AAC20, 0);
}

void fn_8014B44C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+940));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+940)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8014B5F0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+956), (u32)lbl_804AAC40, 0);
}

void fn_8014B774(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+960));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+960)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8014B7E0(void) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    float v6;
    float v7;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+980));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((c0+976));
    s31 = M32((v1+44));
    v4 = M32((v1+40));
    v5 = M32(v2);
    v6 = lbl_805E05A8;
    v7 = lbl_805E05AC;
    fn_80138B10(v4, 1, v5, v1, v6, v7);
    M8((s31+12)) = 2;
    fn_8014BC88();
    fn_8014C240();
    fn_8014C6DC();
    fn_8014CAF8();
}

void fn_8014B84C(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) == (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = M8((s29+12));
    if ((s32)v4 == (s32)2) {
        M8((s29+12)) = 0;
        v5 = M32((s31+980));
        func_80428F64(v5);
        M32((s31+980)) = 0;
        return;
    }
    M8((s29+12)) = 0;
    fn_8014BAC8();
    fn_8014C080();
    fn_8014C3F8();
    fn_8014C878();
}

void fn_8014B8F8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+976), (u32)lbl_804AAC60, 0);
}

void fn_8014B944(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    u32 v11;
    float v12;
    s30 = fn_801311E0();
    v1 = M32((s30+980));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s30+980)) = 0;
    }
    v2 = M32((s30+976));
    v3 = M32(v2);
    v4 = M32(v3);
    s29 = fn_801388A8(v4);
    s28 = M32((s29+40));
    HSD_GObj_AddProc(s29, (u32)fn_8014B84C, 1);
    v6 = lbl_805E05A8;
    v7 = M32((s30+976));
    v8 = M32(v7);
    fn_801389D8(s28, v8, v6, v6);
    s31 = fn_80138A00(s29, 17);
    v9 = M32((s30+976));
    v10 = lbl_805E05A8;
    v11 = M32(v9);
    v12 = lbl_805E05AC;
    fn_80138B10(s28, 0, v11, v10, v12);
    M8((s31+12)) = 1;
    fn_8014BAF8();
    fn_8014C0B0();
    fn_8014C428();
    fn_8014C8A8();
    M32((s30+980)) = s29;
}

void fn_8014BA28(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+980));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+980)) = 0;
}

void fn_8014BAC8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+988));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014BAF8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+988));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8014BB28(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_8014BB5C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+984), (u32)lbl_804AAC80, 0);
}

void fn_8014BC88(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+988));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+988)) = 0;
}

void fn_8014BCCC(void) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    float v6;
    float v7;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+996));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((c0+992));
    s31 = M32((v1+44));
    v4 = M32((v1+40));
    v5 = M32(v2);
    v6 = lbl_805E05B8;
    v7 = lbl_805E05BC;
    fn_80138B10(v4, 1, v5, v1, v6, v7);
    M8((s31+12)) = 2;
}

void fn_8014BD28(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) == (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = M8((s29+12));
    if ((s32)v4 == (s32)2) {
        M8((s29+12)) = 0;
        v5 = M32((s31+996));
        func_80428F64(v5);
        M32((s31+996)) = 0;
        return;
    }
    M8((s29+12)) = 0;
}

void fn_8014BDC4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+992), (u32)lbl_804AACA0, 0);
}

void fn_8014BE10(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    u32 v11;
    float v12;
    s30 = fn_801311E0();
    v1 = M32((s30+996));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s30+996)) = 0;
    }
    v2 = M32((s30+992));
    v3 = M32(v2);
    v4 = M32(v3);
    s29 = fn_80138934(v4, 2, 80);
    s28 = M32((s29+40));
    HSD_GObj_AddProc(s29, (u32)fn_8014BD28, 1);
    v6 = lbl_805E05B8;
    v7 = M32((s30+992));
    v8 = M32(v7);
    fn_801389D8(s28, v8, v6, v6);
    s31 = fn_80138A00(s29, 19);
    v9 = M32((s30+992));
    v10 = lbl_805E05B8;
    v11 = M32(v9);
    v12 = lbl_805E05BC;
    fn_80138B10(s28, 0, v11, v10, v12);
    M8((s31+12)) = 1;
    M32((s30+996)) = s29;
}

void fn_8014BEEC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+996));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+996)) = 0;
}

void fn_8014C080(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1004));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014C0B0(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1004));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8014C0E0(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_8014C114(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1000), (u32)lbl_804AACC0, 0);
}

void fn_8014C160(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 s31;
    u32 s29;
    float v6;
    u32 v7;
    u32 v8;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    s30 = fn_801311E0();
    v1 = M32((s30+1004));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s30+1004)) = 0;
    }
    v2 = M32((s30+1000));
    v3 = M32(v2);
    v4 = M32(v3);
    s29 = fn_80138934(v4, 2, 80);
    v5 = M32((s29+40));
    s31 = v5;
    HSD_GObj_AddProc(s29, (u32)fn_8014C0E0, 1);
    v6 = lbl_805E05C0;
    v7 = M32((s30+1000));
    v8 = M32(v7);
    fn_801389D8(s31, v8, v6, v6);
    c5 = fn_80138A00(s29, 20);
    s31 = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 1);
    M32((s31+20)) = c7;
    c8 = fn_80055AF0(s29, 3);
    M32((s31+24)) = c8;
    M32((s30+1004)) = s29;
}

void fn_8014C240(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1004));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1004)) = 0;
}

void fn_8014C3F8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1012));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014C428(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1012));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8014C458(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    u32 v5;
    s30 = p3;
    fn_801311E0();
    s31 = M32((s30+44));
    v2 = M32((s30+40));
    fn_8040A64C(v2);
    v3 = M8((s31+14));
    if ((s32)((s8)v3) <= (s32)0) {
    return;
    }
    M8((s31+14)) = (v3-1);
    if ((s32)((s8)(v3-1)) > (s32)0) {
    return;
    }
    v4 = lbl_805E05C8;
    M8((s31+14)) = 0;
    v5 = M32((s31+20));
    fn_80138BA4(v5, 0, v4);
}

void fn_8014C4CC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1008), (u32)lbl_804AACE0, 0);
}

void fn_8014C6DC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1012));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1012)) = 0;
}

void fn_8014C878(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1020));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014C8A8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1020));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8014C8D8(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_8014C90C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311EC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1016), (u32)lbl_804AAD00, 0);
}

void fn_8014CAF8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1020));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1020)) = 0;
}

void fn_8014CB3C(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8014CB60(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311FC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1028), (u32)lbl_804AAD20, 0);
}

void fn_8014CBAC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+1028));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014CB3C, 1);
    v5 = M32((s31+1028));
    v6 = lbl_805E05E0;
    v7 = M32(v5);
    v8 = lbl_805E05E4;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 31);
    M32((s31+1032)) = s30;
}

void fn_8014CC38(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1032));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1032)) = 0;
}

void fn_8014CC7C(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8014CCA0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311FC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1036), (u32)lbl_804AAD40, 0);
}

void fn_8014CCEC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+1036));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014CC7C, 1);
    v5 = M32((s31+1036));
    v6 = lbl_805E05E8;
    v7 = M32(v5);
    v8 = lbl_805E05EC;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 32);
    M32((s31+1040)) = s30;
}

void fn_8014CD78(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1040));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1040)) = 0;
}

void fn_8014D050(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311FC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1044), (u32)lbl_804AAD60, 0);
}

void fn_8014D1E4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1048));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1048)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)10);
}

void fn_8014D350(void) {
    fn_8014D370();
}

void fn_8014D370(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1092));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014D3A4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311FC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1088), (u32)lbl_804AAD80, 0);
}

void fn_8014D3F0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    float v5;
    u32 v6;
    u32 v7;
    s31 = fn_801311E0();
    v1 = M32((s31+1088));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014D3A0, 1);
    v5 = lbl_805E0600;
    v6 = M32((s31+1088));
    v7 = M32(v6);
    fn_801389D8(s29, v7, v5, v5);
    fn_80138A00(s30, 33);
    M32((s31+1092)) = s30;
}

void fn_8014D47C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1092));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1092)) = 0;
}

void fn_8014D6CC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311FC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1096), (u32)lbl_804AADA8, 0);
}

void fn_8014D84C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1100));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1100)) = 0;
}

void fn_8014D890(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+1108));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+16+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8014D9A8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311FC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1104), (u32)lbl_804AADD0, 0);
}

void fn_8014DB54(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1108));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1108)) = 0;
}

void fn_8014DB98(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v2;
    float v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    float v11;
    u32 c0;
    s30 = p3;
    c0 = fn_801311E0();
    s31 = M32((c0+1116));
    if ((u32)s31 == (u32)0) {
    return;
    }
    v2 = M32((s31+44));
    M8((v2+13)) = s30;
    if ((s32)((s8)s30) == (s32)0) {
        v3 = lbl_805E0620;
        v4 = M32((c0+1112));
        v5 = M32((s31+40));
        v6 = M32(v4);
        fn_801389D8(v5, v6, v3, v3);
    } else {
        v7 = M32((c0+1112));
        v8 = M32((s31+40));
        v9 = M32(v7);
        v10 = lbl_805E0624;
        v11 = lbl_805E0620;
        fn_801389D8(v8, v9, v10, v11);
    }
    fn_80138AC8(s31);
    fn_8013D528();
}

void fn_8014DC28(void) {
    fn_8014DC4C();
    fn_8013D504();
}

void fn_8014DC4C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1116));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014DC80(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311FC();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1112), (u32)lbl_804AADF0, 0);
}

void fn_8014DD84(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1116));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1116)) = 0;
}

void fn_8014DDC8(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8014DDEC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131204();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1124), (u32)lbl_804AAE10, 0);
}

void fn_8014DE38(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+1124));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014DDC8, 1);
    v5 = M32((s31+1124));
    v6 = lbl_805E0630;
    v7 = M32(v5);
    v8 = lbl_805E0634;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 38);
    M32((s31+1128)) = s30;
}

void fn_8014DEC4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1128));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1128)) = 0;
}

void fn_8014DF08(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8014DF2C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131204();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1132), (u32)lbl_804AAE30, 0);
}

void fn_8014DF78(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+1132));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014DF08, 1);
    v5 = M32((s31+1132));
    v6 = lbl_805E0638;
    v7 = M32(v5);
    v8 = lbl_805E063C;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 39);
    M32((s31+1136)) = s30;
}

void fn_8014E004(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1136));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1136)) = 0;
}

void fn_8014E148(void) {
    fn_8014E168();
}

void fn_8014E168(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1144));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014E19C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131204();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1140), (u32)lbl_804AAE58, 0);
}

void fn_8014E1E8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    float v5;
    u32 v6;
    u32 v7;
    s31 = fn_801311E0();
    v1 = M32((s31+1140));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014E198, 1);
    v5 = lbl_805E0640;
    v6 = M32((s31+1140));
    v7 = M32(v6);
    fn_801389D8(s29, v7, v5, v5);
    fn_80138A00(s30, 40);
    M32((s31+1144)) = s30;
}

void fn_8014E274(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1144));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1144)) = 0;
}

void fn_8014E2B8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+1152));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+16+(((s8)s30)*12)));
    v3 = lbl_805DD638;
    if ((s32)v3 == (s32)0) {
    return;
    }
    v4 = MF(s31);
    v5 = lbl_805E0650;
    MF(s31) = (v4-v5);
    if ((s32)v3 != (s32)0) {
    return;
    }
}

void fn_8014E3EC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131204();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1148), (u32)lbl_804AAE80, 0);
}

void fn_8014E438(void) {
    u32 c5;
    u32 s29;
    u32 s30;
    u32 c4;
    s32 s31;
    u32 h1;
    u32 s28;
    s32 h2;
    u32 s27;
    u32 h4;
    u32 h5;
    s30 = fn_801311E0();
    h5 = M32((s30+1148));
    s27 = fn_801388A8(M32(M32(h5)));
    h2 = M32((40+s27));
    HSD_GObj_AddProc(s27, fn_8014E340, 1);
    s28 = h2;
    h1 = M32((1148+s30));
    fn_801389D8(s28, M32(h1), lbl_805E0654, lbl_805E0658);
    c4 = fn_80138A00(s27, 41);
    s31 = c4;
    M8((c4+12)) = 10;
    c5 = fn_80055AF0(s27, 1);
    M32((s31+136)) = c5;
    M32((140+s31)) = fn_80055AF0(s27, 2);
    M32((s31+144)) = fn_80055AF0(s27, 3);
    M32((s31+148)) = fn_80055AF0(s27, 4);
    M32((s31+152)) = fn_80055AF0(s27, 5);
    M32((s31+156)) = fn_80055AF0(s27, 6);
    M32((160+s31)) = fn_80055AF0(s27, 7);
    M32((s31+164)) = fn_80055AF0(s27, 8);
    M32((s31+168)) = fn_80055AF0(s27, 9);
    s31 = 0;
    s29 = M32((44+s27));
    s28 = s29;
    do {
        h4 = s29+12;
        fn_80053F34(M32((s28+136)), 0, (s29+16));
        s29 = h4;
        s31 = (s31+1);
        s28 = (s28+4);
    } while (s31 < 10);
    M32((s30+1152)) = s27;
}

void fn_8014E588(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1152));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1152)) = 0;
}

void fn_8014E888(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131204();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1156), (u32)lbl_804AAEA0, 0);
}

void fn_8014E998(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1160));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1160)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)10);
}

void fn_8014EC10(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131204();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1200), (u32)lbl_804AAEC8, 0);
}

void fn_8014ED90(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1204));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1204)) = 0;
}

void fn_8014EDD4(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v2;
    float v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    float v11;
    u32 c0;
    s30 = p3;
    c0 = fn_801311E0();
    s31 = M32((c0+1212));
    if ((u32)s31 == (u32)0) {
    return;
    }
    v2 = M32((s31+44));
    M8((v2+13)) = s30;
    if ((s32)((s8)s30) == (s32)0) {
        v3 = lbl_805E0670;
        v4 = M32((c0+1208));
        v5 = M32((s31+40));
        v6 = M32(v4);
        fn_801389D8(v5, v6, v3, v3);
    } else {
        v7 = M32((c0+1208));
        v8 = M32((s31+40));
        v9 = M32(v7);
        v10 = lbl_805E0674;
        v11 = lbl_805E0670;
        fn_801389D8(v8, v9, v10, v11);
    }
    fn_80138AC8(s31);
    fn_8013DE9C();
}

void fn_8014EE64(void) {
    fn_8014EE88();
    fn_8013DE78();
}

void fn_8014EE88(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1212));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8014EEBC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131204();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1208), (u32)lbl_804AAEF0, 0);
}

void fn_8014EFC0(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1212));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1212)) = 0;
}

void fn_8014F004(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8014F028(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1220), (u32)lbl_804AAF18, 0);
}

void fn_8014F074(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+1220));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014F004, 1);
    v5 = M32((s31+1220));
    v6 = lbl_805E0680;
    v7 = M32(v5);
    v8 = lbl_805E0684;
    fn_801389D8(s29, v7, v6, v8);
    fn_800550F4(s29, ((1<<16)-1));
    fn_80138A00(s30, 62);
    M32((s31+1224)) = s30;
}

void fn_8014F118(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1224));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1224)) = 0;
}

#pragma push
#pragma opt_propagation off
void fn_8014F1F8(u32 p3) {
    s32 h1;
    s32 s30;
    u32 s31;
    s32 c1;
    s30 = p3;
    s31 = fn_801311E0();
    h1 = M32((44+s30));
    s30 = M32((s30+40));
    if ((u32)((s8)M8((12+h1))) == (s32)0) {
        c1 = fn_800547E0(s30);
        if (c1 == (s32)0) {
            M8((12+h1)) = 1;
            fn_80138B10(s30, 1, M32(M32((1228+s31))), lbl_805E0688, lbl_805E068C);
            fn_800550F4(s30, ((1<<16)-1));
        }
    }
    fn_8040A64C(s30);
}
#pragma pop

void fn_8014F298(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1228), (u32)lbl_804AAF38, 0);
}

void fn_8014F2E4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+1228));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8014F1F8, 1);
    v5 = M32((s31+1228));
    v6 = lbl_805E0688;
    v7 = M32(v5);
    v8 = lbl_805E068C;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 63);
    M8((c4+12)) = 0;
    M32((s31+1232)) = s30;
}

void fn_8014F384(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1232));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1232)) = 0;
}

void fn_8014F3C8(u32 p3, u32 p4, u32 p5) {
    fn_8013BB00(p3, ((s8)p4));
}

void fn_8014F3F0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1236), (u32)lbl_804AAF58, 0);
}

void fn_8014F43C(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s30;
    s31 = fn_801311E0();
    v1 = M32((s31+1236));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 4, 80);
    HSD_GObj_AddProc(s30, (u32)fn_8014F3EC, 1);
    fn_80138A00(s30, 64);
    M32((s31+1240)) = s30;
}

void fn_8014F4AC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1240));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1240)) = 0;
}

void fn_8014F7CC(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+1268));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+36+(((s8)s30)*56)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8014F838(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+1268));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+48+(((s8)s30)*56)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8014F8A4(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+1268));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s30 = 0;
    v2 = M32((v1+44));
    s31 = v2;
    do {
        v3 = M32((s31+32));
        fn_8040BE00(v3, 16);
        s30 = (s30+1);
        s31 = (s31+56);
    } while ((s32)s30 < (s32)4);
}

void fn_8014FC08(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1264), (u32)lbl_804AAF90, 0);
}

void fn_8014FEF8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1268));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1268)) = 0;
}

void fn_8015040C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1412), (u32)lbl_804AAFBC, 0);
}

void fn_80150674(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1416));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1416)) = 0;
}

void fn_80150C80(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1248+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80150D1C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1248+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80150E34(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1244), (u32)lbl_804AB008, 0);
}

void fn_80150F60(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1248));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1248)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80150FCC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+1424));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+336));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80151020(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+1424));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+96+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8015108C(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_801510B0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1420), (u32)lbl_804AB028, 0);
}

void fn_80151368(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1424));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1424)) = 0;
}

void fn_801515D8(void) {
    fn_80151430();
}

void fn_801515F8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1308), (u32)lbl_804AB060, 0);
}

void fn_80151844(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1312));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1312)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)20);
}

void fn_80151C9C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1392), (u32)lbl_804AB080, 0);
}

void fn_80151F60(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1396));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1396)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015234C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1272), (u32)lbl_804AB0A0, 0);
}

#pragma push
#pragma opt_propagation off
void fn_8015258C(void) {
    u32 v2;
    u32 s31;
    u32 s30;
    u32 c0;
    u32 c2;
    u32 s29;
    s32 h1;
    u32 ph0;
    u32 s28;
    s30 = 0;
    s28 = 0;
    do {
        c0 = fn_801311E0();
        s29 = (((s8)s28)<<3);
        s31 = (c0+s29);
        h1 = M32((1276+s31));
        ph0 = h1;
        if ((u32)0 != (s32)h1) {
            ph0 = func_80428F64(h1);
            M32((s31+1276)) = s30;
        }
        c2 = fn_801311E0(ph0);
        s31 = (c2+s29);
        v2 = M32((s31+1280));
        if (0 != v2) {
            func_80428F64(v2);
            M32((s31+1280)) = s30;
        }
        s28 = (s28+1);
    } while ((s32)s28 < (s32)4);
}
#pragma pop

void fn_80152F20(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1428), (u32)lbl_804AB138, 0);
}

void fn_80153068(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1432));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1432)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801530D4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1448), (u32)lbl_804AB158, 0);
}

void fn_80153120(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1452));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1452)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801533E8(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8015340C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1468), (u32)lbl_804AB178, 0);
}

void fn_80153658(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1472));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1472)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80153A60(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80153A84(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1488), (u32)lbl_804AB198, 0);
}

void fn_80153CC0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1492));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1492)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80153D2C(u32 p3, u32 p4) {
    u32 s30;
    u32 loc8[4];
    s30 = p3;
    fn_80150208(p3, 0, ((u32)loc8));
    fn_8013BEA0(s30, ((s8)(M32((u32)lbl_804AA3D8+(((s8)p4)<<2)))), ((s8)(M32(lbl_804AA428+(((s8)p4)<<2)))), ((s32)loc8));
}

void fn_80153DA0(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80153DC4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1508), (u32)lbl_804AB1B8, 0);
}

void fn_801540E0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1512));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1512)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015414C(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0748;
    M8((s29+12)) = 1;
    v5 = lbl_805E074C;
    v6 = M32((s31+1528));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_801541EC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1528), (u32)lbl_804AB200, 0);
}

void fn_80154340(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1532));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1532)) = 0;
}

void fn_80154384(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    float v10;
    u32 v11;
    float v12;
    u32 v13;
    u32 v14;
    float v15;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = (*(s8*)((s29+21)));
    if ((s32)v3 != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    M8((s29+21)) = 1;
    v4 = (*(s8*)((s29+20)));
    if ((s32)v4 >= (s32)2) {
        v5 = M32((s31+1536));
        v6 = lbl_805E0750;
        v7 = M32(v5);
        v8 = lbl_805E0754;
        fn_80138B10(s30, 3, v7, v6, v8);
    } else {
        v9 = M32((s31+1536));
        v10 = lbl_805E0750;
        v11 = M32(v9);
        v12 = lbl_805E0754;
        fn_80138B10(s30, 1, v11, v10, v12);
    }
    fn_800550F4(s30, ((1<<16)-1));
    v13 = (*(s8*)((s29+20)));
    v14 = M32((s29+16));
    v15 = lbl_805E0750;
    fn_80138C1C(v14, v13, v15);
}

void fn_80154468(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1536), (u32)lbl_804AB220, 0);
}

void fn_80154720(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1540));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1540)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80154B5C(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    s31 = M32((p3+44));
    v2 = M32((p3+40));
    fn_8040A64C(v2);
    v3 = M8((s31+29));
    if ((s32)((s8)v3) <= (s32)0) {
    return;
    }
    M8((s31+29)) = (v3-1);
    if ((s32)((s8)(v3-1)) > (s32)0) {
    return;
    }
    v4 = M8((s31+28));
    if ((s32)((s8)v4) == (s32)0) {
        M8((s31+28)) = 1;
    }
    v5 = lbl_805E0764;
    M8((s31+29)) = 15;
    v6 = M32((s31+12));
    fn_80409274(v6, v5);
    v7 = M32((s31+12));
    v8 = lbl_805E0760;
    v9 = M32((v7+124));
    HSD_AObjSetRate(v9, v8);
    v10 = M32((s31+12));
    fn_8040A1A0(v10);
}

void fn_80154BE8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1556), (u32)lbl_804AB240, 0);
}

void fn_80154D5C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1560));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1560)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80154E70(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1576), (u32)lbl_804AB260, 0);
}

void fn_80155274(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_801552A8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013120C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1612), (u32)lbl_804AB280, 0);
}

void fn_80155548(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1616));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1616)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801555B4(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_801555D8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1636), (u32)lbl_804AB2A0, 0);
}

void fn_80155624(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+1636));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801555B4, 1);
    v5 = M32((s31+1636));
    v6 = lbl_805E0780;
    v7 = M32(v5);
    v8 = lbl_805E0784;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 45);
    M32((s31+1640)) = s30;
}

void fn_801556B8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1640));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1640)) = 0;
}

void fn_8015579C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1644), (u32)lbl_804AB2C0, 0);
}

void fn_801557E8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+1644));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801556FC, 1);
    v5 = M32((s31+1644));
    v6 = lbl_805E0788;
    v7 = M32(v5);
    v8 = lbl_805E078C;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 46);
    M8((c4+12)) = 0;
    M32((s31+1648)) = s30;
}

void fn_80155888(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1648));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1648)) = 0;
}

void fn_801558CC(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0790;
    M8((s29+12)) = 1;
    v5 = lbl_805E0794;
    v6 = M32((s31+1652));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_8015596C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1652), (u32)lbl_804AB2E8, 0);
}

void fn_801559B8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+1652));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 4, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801558CC, 1);
    v5 = M32((s31+1652));
    v6 = lbl_805E0790;
    v7 = M32(v5);
    v8 = lbl_805E0794;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 47);
    M8((c4+12)) = 0;
    M32((s31+1656)) = s30;
}

void fn_80155A58(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1656));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1656)) = 0;
}

void fn_80155B1C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1660), (u32)lbl_804AB310, 0);
}

void fn_80155B68(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s30;
    s31 = fn_801311E0();
    v1 = M32((s31+1660));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    HSD_GObj_AddProc(s30, (u32)fn_80155B18, 1);
    fn_80138A00(s30, 48);
    M32((s31+1664)) = s30;
}

void fn_80155BD0(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1664));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1664)) = 0;
}

void fn_80155C14(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+1672));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+12+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

#pragma push
#pragma opt_lifetimes off
void fn_80155C80(u32 p3) {
    s32 s31;
    u32 s30;
    s32 s29;
    fn_8040A64C(M32((p3+40)));
    s29 = p3;
    s30 = M32((44+s29));
    s29 = s30;
    s31 = 0;
    do {
        fn_80053F34(M32((s29+60)), 0, (12+s30));
        s31 = (1+s31);
        s30 = (s30+12);
        s29 = (s29+4);
    } while (s31 < 4);
}
#pragma pop

void fn_80155CF0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1668), (u32)lbl_804AB338, 0);
}

void fn_80155E34(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1672));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1672)) = 0;
}

void fn_8015627C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1676), (u32)lbl_804AB368, 0);
}

void fn_801563D0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1680));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1680)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801564DC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1696), (u32)lbl_804AB3A0, 0);
}

void fn_80156528(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    s30 = fn_801311E0();
    v1 = M32((s30+1696));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 1, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_801564D8, 1);
    v5 = lbl_805E07A8;
    v6 = M32((s30+1696));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 51);
    s31 = c4;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 7);
    M32((s31+24)) = c6;
    c7 = fn_80055AF0(s29, 13);
    M32((s31+28)) = c7;
    c8 = fn_80055AF0(s29, 19);
    M32((s31+32)) = c8;
    M32((s30+1700)) = s29;
}

void fn_80156600(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1700));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1700)) = 0;
}

void fn_801568F0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1704), (u32)lbl_804AB3C8, 0);
}

void fn_80156A0C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1708));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1708)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80156B04(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1728+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M8((v2+13));
    if ((s32)((s8)v3) == (s32)-1) {
        fn_80138AC8(v1, v2);
        return;
    }
    fn_80138AB0(v1, v2);
}

void fn_80156B68(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1728+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80156C7C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1724), (u32)lbl_804AB3F0, 0);
}

void fn_80156D84(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1728));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1728)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80156E70(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1748+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M8((v2+13));
    if ((s32)((s8)v3) == (s32)-1) {
        fn_80138AC8(v1, v2);
        return;
    }
    fn_80138AB0(v1, v2);
}

void fn_80156ED4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1748+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80156FE0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1744), (u32)lbl_804AB418, 0);
}

void fn_801570D8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1748));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1748)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801571C4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1768+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M8((v2+13));
    if ((s32)((s8)v3) == (s32)-1) {
        fn_80138AC8(v1, v2);
        return;
    }
    fn_80138AB0(v1, v2);
}

void fn_80157228(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1768+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80157270(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1764), (u32)lbl_804AB438, 0);
}

void fn_801572BC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1768));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1768)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80157744(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1784), (u32)lbl_804AB460, 0);
}

void fn_8015782C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1788));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1788)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80157AE0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1804), (u32)lbl_804AB480, 0);
}

void fn_80157BD8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1808));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1808)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80157E3C(p3) u32 p3; {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1828+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M8((v2+14));
    if ((s32)((s8)v3) == (s32)-1) {
        fn_80138AC8(v1, v2);
        return;
    }
    fn_80138AB0(v1, v2);
}

void fn_80157EA0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1828+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8015802C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1824), (u32)lbl_804AB4A8, 0);
}

void fn_80158198(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1828));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1828)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801583E0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1848+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80158428(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1848+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8015853C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1844), (u32)lbl_804AB4D0, 0);
}

void fn_80158664(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1848));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1848)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80158750(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1868+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M8((v2+13));
    if ((s32)((s8)v3) == (s32)-1) {
        fn_80138AC8(v1, v2);
        return;
    }
    fn_80138AB0(v1, v2);
}

void fn_801587B4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1868+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_801588C8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1864), (u32)lbl_804AB4F8, 0);
}

void fn_801589C0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1868));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1868)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80158B84(p3) u32 p3; {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1888+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M8((v2+13));
    if ((s32)((s8)v3) <= (s32)1) {
        fn_80138AB0(v1, v2);
        return;
    }
    fn_80138AC8(v1, v2);
}

void fn_80158BE8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1888+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80158CFC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1884), (u32)lbl_804AB518, 0);
}

void fn_80158E20(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1888));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1888)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80159218(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1904), (u32)lbl_804AB540, 0);
}

void fn_80159304(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1908));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1908)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801595B8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1924), (u32)lbl_804AB560, 0);
}

void fn_801596B0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1928));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1928)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015971C(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_80159750(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131214();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1944), (u32)lbl_804AB588, 0);
}

void fn_80159934(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1948));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1948)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801599A0(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_801599C4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1968), (u32)lbl_804AB5A8, 0);
}

void fn_80159A10(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+1968));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801599A0, 1);
    v5 = M32((s31+1968));
    v6 = lbl_805E0848;
    v7 = M32(v5);
    v8 = lbl_805E084C;
    fn_801389D8(s29, v7, v6, v8);
    fn_800550F4(s29, ((1<<16)-1));
    fn_80138A00(s30, 82);
    M32((s31+1972)) = s30;
}

void fn_80159AB4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1972));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1972)) = 0;
}

void fn_80159AF8(void) {
    u32 v1;
    u32 c0;
    u32 c1;
    c0 = fn_801311E0();
    v1 = M32((c0+1980));
    if ((u32)v1 == (u32)0) {
    return;
    }
    c1 = fn_80055AF0(v1, 7);
    fn_8040BE00(c1, 16);
}

void fn_80159B34(u32 p3) {
    u32 h1;
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v2;
    u32 v7;
    u32 v3;
    float v5;
    float v4;
    u32 c1;
    s30 = p3;
    s31 = fn_801311E0();
    s29 = M32((s30+44));
    h1 = M32((s30+40));
    v2 = h1;
    s30 = v2;
    v3 = M8((s29+12));
    if ((s32)((s8)v3) == (s32)0) {
        c1 = fn_800547E0(s30);
        if ((s32)c1 == (s32)0) {
            v4 = lbl_805E0850;
            M8((s29+12)) = 1;
            v7 = M32(M32((s31+1976)));
            v5 = lbl_805E0854;
            fn_80138B10(s30, 1, v7, v4, v5);
            fn_800550F4(s30, ((1<<16)-1));
        }
    }
    fn_8040A64C(s30);
}

void fn_80159BD4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1976), (u32)lbl_804AB5C8, 0);
}

void fn_80159C20(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+1976));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80159B34, 1);
    v5 = M32((s31+1976));
    v6 = lbl_805E0850;
    v7 = M32(v5);
    v8 = lbl_805E0854;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 83);
    M8((c4+12)) = 0;
    M32((s31+1980)) = s30;
}

void fn_80159CC0(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1980));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1980)) = 0;
}

void fn_80159D04(u32 p3, u32 p4) {
    fn_8013C4DC();
}

void fn_80159D28(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1984), (u32)lbl_804AB5E8, 0);
}

void fn_80159D74(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s30;
    s31 = fn_801311E0();
    v1 = M32((s31+1984));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 4, 80);
    HSD_GObj_AddProc(s30, (u32)fn_80159D24, 1);
    fn_80138A00(s30, 84);
    M32((s31+1988)) = s30;
}

void fn_80159DE4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+1988));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+1988)) = 0;
}

void fn_80159FB0(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2016));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+36+(((s8)s30)*56)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8015A01C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2016));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+48+(((s8)s30)*56)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8015A088(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2016));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s30 = 0;
    v2 = M32((v1+44));
    s31 = v2;
    do {
        v3 = M32((s31+32));
        fn_8040BE00(v3, 16);
        s30 = (s30+1);
        s31 = (s31+56);
    } while ((s32)s30 < (s32)4);
}

void fn_8015A438(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2012), (u32)lbl_804AB620, 0);
}

void fn_8015A484(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2012), (u32)lbl_804AB640, 0);
}

void fn_8015AA18(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2016));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2016)) = 0;
}

void fn_8015AC60(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2160), (u32)lbl_804AB674, 0);
}

void fn_8015ACAC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2160), (u32)lbl_804AB694, 0);
}

void fn_8015B130(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2164));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2164)) = 0;
}

void fn_8015B73C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1996+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8015B7D8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+1996+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8015B8F0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+1992), (u32)lbl_804AB6E0, 0);
}

void fn_8015BA1C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+1996));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+1996)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015BA88(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2172));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+340));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8015BADC(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2172));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+96+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8015BB48(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8015BB6C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2168), (u32)lbl_804AB708, 0);
}

void fn_8015BE24(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2172));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2172)) = 0;
}

void fn_8015C094(void) {
    fn_8015BEEC();
}

void fn_8015C0B4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2056), (u32)lbl_804AB740, 0);
}

void fn_8015C304(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2060));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2060)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)20);
}

void fn_8015C75C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2140), (u32)lbl_804AB760, 0);
}

void fn_8015CA20(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2144));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2144)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015CD5C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2020), (u32)lbl_804AB788, 0);
}

void fn_8015D938(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2176), (u32)lbl_804AB820, 0);
}

void fn_8015DA80(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2180));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2180)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015DAEC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2196), (u32)lbl_804AB848, 0);
}

void fn_8015DB38(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2200));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2200)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015DE00(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8015DE24(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2216), (u32)lbl_804AB870, 0);
}

void fn_8015E070(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2220));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2220)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015E478(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8015E49C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2236), (u32)lbl_804AB898, 0);
}

void fn_8015E6D4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2240));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2240)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015E740(u32 p3, u32 p4) {
    u32 s31;
    u32 loc8[4];
    u32 v1;
    s31 = p4;
    fn_8015AA5C(p3, 0, ((u32)loc8));
    v1 = M32((u32)lbl_804AA598+(((s8)s31)<<2));
    fn_8013C740(p3, ((s8)v1), ((s8)(M32((u32)lbl_804AA5E8+(((s8)s31)<<2)))), ((s32)loc8));
}

void fn_8015E7B4(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8015E7D8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2256), (u32)lbl_804AB8C0, 0);
}

void fn_8015EAF4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2260));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2260)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

#pragma push
#pragma opt_loop_invariants off
void fn_8015EB60(u32 p3) {
    u32 s30;
    float v5;
    u32 v2;
    u32 h3;
    u32 h1;
    u32 h2;
    u32 v6;
    u32 h4;
    u32 s29;
    u32 v3;
    float v4;
    u32 s31;
    u32 c1;
    s30 = p3;
    s31 = fn_801311E0();
    h1 = M32((s30+44));
    h3 = h1;
    s29 = h3;
    v2 = M32((40+s30));
    v3 = M8((s29+12));
    s30 = v2;
    if ((s32)((s8)v3) == (s32)0) {
        c1 = fn_800547E0(s30);
        if ((s32)c1 == 0) {
            v4 = lbl_805E08F0;
            M8((12+s29)) = 1;
            v5 = lbl_805E08F4;
            h4 = M32((s31+2276));
            h2 = h4;
            v6 = h2;
            fn_80138B10(s30, 1, M32(v6), v4, v5);
            fn_800550F4(s30, ((1<<16)-1));
        }
    }
    fn_8040A64C(s30);
}
#pragma pop

void fn_8015EC00(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2276), (u32)lbl_804AB908, 0);
}

void fn_8015EC4C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2276), (u32)lbl_804AB92C, 0);
}

void fn_8015EC98(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+2276));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 4, 80);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8015EB60, 1);
    v5 = M32((s31+2276));
    v6 = lbl_805E08F0;
    v7 = M32(v5);
    v8 = lbl_805E08F4;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 97);
    M8((c4+12)) = 0;
    M32((s31+2280)) = s30;
}

void fn_8015ED38(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2280));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2280)) = 0;
}

void fn_8015ED7C(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    float v10;
    u32 v11;
    float v12;
    u32 v13;
    u32 v14;
    float v15;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = (*(s8*)((s29+21)));
    if ((s32)v3 != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    M8((s29+21)) = 1;
    v4 = (*(s8*)((s29+20)));
    if ((s32)v4 >= (s32)2) {
        v5 = M32((s31+2284));
        v6 = lbl_805E08F8;
        v7 = M32(v5);
        v8 = lbl_805E08FC;
        fn_80138B10(s30, 3, v7, v6, v8);
    } else {
        v9 = M32((s31+2284));
        v10 = lbl_805E08F8;
        v11 = M32(v9);
        v12 = lbl_805E08FC;
        fn_80138B10(s30, 1, v11, v10, v12);
    }
    fn_800550F4(s30, ((1<<16)-1));
    v13 = (*(s8*)((s29+20)));
    v14 = M32((s29+16));
    v15 = lbl_805E08F8;
    fn_80138C1C(v14, v13, v15);
}

void fn_8015EE60(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2284), (u32)lbl_804AB950, 0);
}

void fn_8015F118(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2288));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2288)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015F554(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    s31 = M32((p3+44));
    v2 = M32((p3+40));
    fn_8040A64C(v2);
    v3 = M8((s31+29));
    if ((s32)((s8)v3) <= (s32)0) {
    return;
    }
    M8((s31+29)) = (v3-1);
    if ((s32)((s8)(v3-1)) > (s32)0) {
    return;
    }
    v4 = M8((s31+28));
    if ((s32)((s8)v4) == (s32)0) {
        M8((s31+28)) = 1;
    }
    v5 = lbl_805E090C;
    M8((s31+29)) = 15;
    v6 = M32((s31+12));
    fn_80409274(v6, v5);
    v7 = M32((s31+12));
    v8 = lbl_805E0908;
    v9 = M32((v7+124));
    HSD_AObjSetRate(v9, v8);
    v10 = M32((s31+12));
    fn_8040A1A0(v10);
}

void fn_8015F5E0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2304), (u32)lbl_804AB970, 0);
}

void fn_8015F754(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2308));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2308)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015F868(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2324), (u32)lbl_804AB998, 0);
}

void fn_8015FC6C(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_8015FCA0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013121C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2360), (u32)lbl_804AB9B8, 0);
}

void fn_8015FF40(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2364));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2364)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8015FFAC(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8015FFD0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013124C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+524), (u32)lbl_804AB9D8, 0);
}

void fn_8016001C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+524));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8015FFAC, 1);
    v5 = M32((s31+524));
    v6 = lbl_805E0928;
    v7 = M32(v5);
    v8 = lbl_805E092C;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 173);
    M32((s31+528)) = s30;
}

void fn_801600B0(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+528));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+528)) = 0;
}

void fn_801600F8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013124C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+532), (u32)lbl_804AB9F8, 0);
}

u32 fn_80160284(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+536));
    v2 = M32((v1+44));
    v3 = M32((v2+12));
    return v3;
}

u32 fn_801602B0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+536));
    v2 = M32((v1+44));
    v3 = M32(((u32)v2+16+(s31<<2)));
    return v3;
}

void fn_801602F0(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+536));
    v2 = M32((v1+44));
    *(S12*)(s30) = *(S12*)(((u32)v2+36+(s29*12)));
    if ((u32)s31 == (u32)0) {
    return;
    }
    v3 = MF((v2+32));
    MF(s31) = v3;
    if ((u32)s31 != (u32)0) {
    return;
    }
}

void fn_80160594(void) {
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+536));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    v3 = lbl_805E0938;
    v4 = M32((v1+44));
    MF((v4+32)) = v3;
    fn_800550BC(v2, ((1<<16)-1), v4, v3);
}

void fn_801605DC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+536));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+536)) = 0;
}

void fn_80160624(void) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_801311E0();
    s30 = (c0+540);
    s31 = fn_8013124C();
    v1 = M32(s31);
    fn_80059520(v1, s30, (u32)lbl_804ABA28, 0);
    v2 = M32(s31);
    fn_80059520(v2, (s30+4), (u32)lbl_804ABA48, 0);
}

void fn_80160698(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v6;
    float v7;
    float v8;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80160284();
    if ((s32)c1 <= (s32)2) {
        v1 = M32((s31+540));
        s28 = v1;
    } else {
        v2 = M32((s31+544));
        s28 = v2;
    }
    v3 = M32(s28);
    v4 = M32(v3);
    s30 = fn_801388A8(v4);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80160620, 1);
    v6 = M32(s28);
    v7 = lbl_805E0940;
    v8 = lbl_805E0944;
    fn_801389D8(s29, v6, v7, v8);
    fn_80138A00(s30, 177);
    M32((s31+548)) = s30;
}

void fn_8016073C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+548));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+548)) = 0;
}

void fn_80160784(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013124C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+552), (u32)lbl_804ABA68, 0);
}

void fn_801609BC(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_801609E0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013124C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+572), (u32)lbl_804ABA88, 0);
}

void fn_80160A2C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+572));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801609BC, 1);
    v5 = M32((s31+572));
    v6 = lbl_805E0950;
    v7 = M32(v5);
    v8 = lbl_805E0954;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 179);
    M32((s31+576)) = s30;
}

void fn_80160AB8(void) {
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+572));
    v2 = M32((c0+576));
    v3 = lbl_805E0950;
    v4 = M32((v2+40));
    v5 = M32(v1);
    v6 = lbl_805E0954;
    fn_80138B10(v4, 1, v5, v2, v3, v6);
}

void fn_80160AF8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+576));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+576)) = 0;
}

void fn_80160C6C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013124C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+580), (u32)lbl_804ABAB0, 0);
}

void fn_80160F18(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p6;
    s30 = p5;
    s29 = p4;
    s28 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+584+(s28<<2)));
    v2 = M32((v1+44));
    *(S12*)(s30) = *(S12*)(((u32)v2+28+(s29*12)));
    if ((u32)s31 == (u32)0) {
    return;
    }
    v3 = MF((v2+24));
    MF(s31) = v3;
    if ((u32)s31 != (u32)0) {
    return;
    }
}

void fn_801613B0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013124C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+600), (u32)lbl_804ABAD0, 0);
}

void fn_80161798(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v3;
    u32 v4;
    u32 c1;
    s31 = M32((p3+44));
    s30 = M32((p3+40));
    v3 = M8((s31+13));
    if ((s32)((s8)v3) > (s32)0) {
        M8((s31+13)) = (v3-1);
        return;
    }
    fn_8040A64C(s30);
    v4 = M8((s31+12));
    if ((s32)v4 != (s32)2) {
    return;
    }
    c1 = fn_800547E0(s30);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80161C08();
}

void fn_80161900(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013122C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+272), (u32)lbl_804ABBE4, 0);
}

void fn_8016194C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131234();
    v1 = M32(c1);
    fn_80059520(v1, (s31+276), (u32)lbl_804ABC08, 0);
}

void fn_80161998(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013123C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+280), (u32)lbl_804ABC28, 0);
}

void fn_801619E4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131244();
    v1 = M32(c1);
    fn_80059520(v1, (s31+284), (u32)lbl_804ABC48, 0);
}

void fn_80161BC8(void) {
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    v3 = lbl_805E0990;
    fn_800550BC(v2, ((1<<16)-1), v3);
}

void fn_80161C08(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+288)) = 0;
}

void fn_80161C4C(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v3;
    u32 v4;
    u32 c1;
    s31 = M32((p3+44));
    s30 = M32((p3+40));
    v3 = M8((s31+13));
    if ((s32)((s8)v3) > (s32)0) {
        M8((s31+13)) = (v3-1);
        return;
    }
    fn_8040A64C(s30);
    v4 = M8((s31+12));
    if ((s32)v4 != (s32)2) {
    return;
    }
    c1 = fn_800549A0(s30);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80162940();
}

void fn_80161CC0(void) {
    u32 s29;
    u32 s30;
    u32 s31;
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
    u32 v29;
    u32 v30;
    s29 = (u32)lbl_804ABC70;
    s30 = fn_801311E0();
    s31 = fn_80131244();
    v1 = M32(s31);
    fn_80059520(v1, (s30+356), (s29+576), 0);
    v2 = M32(s31);
    fn_80059520(v2, (s30+360), (s29+616), 0);
    v3 = M32(s31);
    fn_80059520(v3, (s30+364), (s29+656), 0);
    v4 = M32(s31);
    fn_80059520(v4, (s30+368), (s29+692), 0);
    v5 = M32(s31);
    fn_80059520(v5, (s30+372), (s29+732), 0);
    v6 = M32(s31);
    fn_80059520(v6, (s30+376), (s29+772), 0);
    v7 = M32(s31);
    fn_80059520(v7, (s30+380), (s29+812), 0);
    v8 = M32(s31);
    fn_80059520(v8, (s30+384), (s29+852), 0);
    v9 = M32(s31);
    fn_80059520(v9, (s30+392), (s29+892), 0);
    v10 = M32(s31);
    fn_80059520(v10, (s30+396), (s29+932), 0);
    v11 = M32(s31);
    fn_80059520(v11, (s30+388), (s29+976), 0);
    v12 = M32(s31);
    fn_80059520(v12, (s30+400), (s29+1016), 0);
    v13 = M32(s31);
    fn_80059520(v13, (s30+404), (s29+1056), 0);
    v14 = M32(s31);
    fn_80059520(v14, (s30+408), (s29+1096), 0);
    v15 = M32(s31);
    fn_80059520(v15, (s30+412), (s29+1136), 0);
    v16 = M32(s31);
    fn_80059520(v16, (s30+416), (s29+1176), 0);
    v17 = M32(s31);
    fn_80059520(v17, (s30+420), (s29+1216), 0);
    v18 = M32(s31);
    fn_80059520(v18, (s30+424), (s29+1256), 0);
    v19 = M32(s31);
    fn_80059520(v19, (s30+428), (s29+1296), 0);
    v20 = M32(s31);
    fn_80059520(v20, (s30+432), (s29+1336), 0);
    v21 = M32(s31);
    fn_80059520(v21, (s30+436), (s29+1376), 0);
    v22 = M32(s31);
    fn_80059520(v22, (s30+440), (s29+1416), 0);
    v23 = M32(s31);
    fn_80059520(v23, (s30+444), (s29+1456), 0);
    v24 = M32(s31);
    fn_80059520(v24, (s30+448), (s29+1496), 0);
    v25 = M32(s31);
    fn_80059520(v25, (s30+452), (s29+1536), 0);
    v26 = M32(s31);
    fn_80059520(v26, (s30+456), (s29+1576), 0);
    v27 = M32(s31);
    fn_80059520(v27, (s30+460), (s29+1616), 0);
    v28 = M32(s31);
    fn_80059520(v28, (s30+464), (s29+1656), 0);
    v29 = M32(s31);
    fn_80059520(v29, (s30+468), (s29+1696), 0);
    v30 = M32(s31);
    fn_80059520(v30, (s30+472), (s29+1736), 0);
}

void fn_80162100(void) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    s29 = (u32)lbl_804ABC70;
    s30 = fn_801311E0();
    s31 = fn_80131234();
    v1 = M32(s31);
    fn_80059520(v1, (s30+328), (s29+324), 0);
    v2 = M32(s31);
    fn_80059520(v2, (s30+332), (s29+360), 0);
    v3 = M32(s31);
    fn_80059520(v3, (s30+336), (s29+396), 0);
    v4 = M32(s31);
    fn_80059520(v4, (s30+340), (s29+432), 0);
    v5 = M32(s31);
    fn_80059520(v5, (s30+344), (s29+468), 0);
    v6 = M32(s31);
    fn_80059520(v6, (s30+348), (s29+504), 0);
    v7 = M32(s31);
    fn_80059520(v7, (s30+352), (s29+540), 0);
}

void fn_801621F4(void) {
    fn_80161CC0();
}

void fn_80162880(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+476));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+476)) = 0;
}

void fn_801628D0(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    s30 = (c0+292);
    s29 = 0;
    s31 = (1<<16);
    do {
        v1 = M32((s30+184));
        if ((u32)v1 != (u32)0) {
            v2 = M32((v1+40));
            v3 = lbl_805E09A0;
            fn_800550BC(v2, (s31-1), v3);
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)2);
}

void fn_80162940(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c1;
    fn_801311E0();
    s29 = 0;
    s31 = 0;
    do {
        c1 = fn_801311E0();
        s30 = (c1+(((s8)s29)<<2));
        v1 = M32((s30+476));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+476)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)2);
}

void fn_801629B0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131244();
    v1 = M32(c1);
    fn_80059520(v1, (s31+484), (u32)lbl_804AC5A0, 0);
}

void fn_801629FC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+488));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+488)) = 0;
}

void fn_80162A40(u32 p3) {
    s32 c1;
    u32 v2;
    u32 h1;
    float v5;
    u32 v4;
    u32 h2;
    u32 s30;
    u32 s31;
    u32 v3;
    s30 = p3;
    s31 = fn_801311E0();
    h1 = M32((s30+44));
    v2 = M32((40+s30));
    s30 = v2;
    h2 = M8((h1+12));
    v3 = h2;
    if ((s32)((s8)v3) == (u32)0) {
        c1 = fn_800547E0(s30);
        if ((s32)c1 == (s32)0) {
            v4 = M32((2384+s31));
            v5 = lbl_805E09A8;
            fn_80138B10(s30, 1, M32(v4), v5, lbl_805E09AC);
            M8((h1+12)) = 1;
            fn_800550F4(s30, ((1<<16)-1));
        }
    }
    fn_8040A64C(s30);
}

void fn_80162AE0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131254();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2384), (u32)lbl_804AC5C8, 0);
}

void fn_80162B2C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+2384));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80162A40, 1);
    v5 = M32((s31+2384));
    v6 = lbl_805E09A8;
    v7 = M32(v5);
    v8 = lbl_805E09AC;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 25);
    M8((c4+12)) = 0;
    M32((s31+2388)) = s30;
}

void fn_80162BC4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2388));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2388)) = 0;
}

void fn_80162D54(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2396));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80162D84(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+12));
    if ((s32)((s8)v2) <= (s32)0) {
    return;
    }
    M8((v1+12)) = (v2-1);
    if ((s32)((s8)(v2-1)) > (s32)0) {
    return;
    }
    fn_80138AB0(p3, (v2-1), v1);
    fn_8014676C();
    fn_80146704();
    fn_80146738();
    fn_80162F08();
    fn_80163630();
    fn_80163B30();
    fn_80163E74();
    fn_801640D8();
}

void fn_80162DE4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131254();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2392), (u32)lbl_804AC5E8, 0);
}

void fn_80162E30(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    float v5;
    u32 v6;
    u32 v7;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+2392));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80162D84, 1);
    v5 = lbl_805E09B0;
    v6 = M32((s31+2392));
    v7 = M32(v6);
    fn_801389D8(s29, v7, v5, v5);
    c4 = fn_80138A00(s30, 26);
    M8((c4+12)) = 0;
    M32((s31+2396)) = s30;
}

void fn_80162EC4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2396));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2396)) = 0;
}

void fn_80162F08(void) {
    fn_80163230();
    fn_801466D0();
    fn_801467A0();
}

void fn_80162FB4(void) {
    fn_8013DF18();
    fn_80146800();
}

void fn_80163130(void) {
    fn_8013DF18();
}

void fn_80163230(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2404));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80163260(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2404));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80163294(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131254();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2400), (u32)lbl_804AC610, 0);
}

void fn_801632E0(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s30;
    s31 = fn_801311E0();
    v1 = M32((s31+2400));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    HSD_GObj_AddProc(s30, (u32)fn_80163290, 1);
    fn_80138A00(s30, 27);
    M32((s31+2404)) = s30;
}

void fn_80163348(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2404));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2404)) = 0;
}

void fn_80163468(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131254();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2408), (u32)lbl_804AC638, 0);
}

#pragma push
#pragma optimization_level 3
void fn_801634B4(void) {
    u32 h1;
    u32 c10;
    u32 v1;
    s32 s31;
    u32 c6;
    s32 s29;
    u32 c8;
    u32 s28;
    u32 v7;
    float v8;
    u32 v5;
    u32 s27;
    u32 c9;
    float v6;
    u32 v4;
    u32 c7;
    u32 c4;
    u32 v9;
    s32 c5;
    u32 s30;
    s30 = fn_801311E0();
    v1 = M32((s30+2408));
    s27 = fn_801388A8(M32(M32(v1)));
    v4 = M32((s27+40));
    s28 = v4;
    HSD_GObj_AddProc(s27, (u32)fn_801633F8, 1);
    v5 = M32((s30+2408));
    v6 = lbl_805E09D0;
    v8 = lbl_805E09D4;
    v7 = M32(v5);
    fn_801389D8(s28, v7, v6, v8);
    c4 = fn_80138A00(s27, 28);
    s31 = c4;
    c5 = fn_80055AF0(s27, 1);
    M32((s31+12)) = c5;
    c6 = fn_80055AF0(s27, 2);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s27, 3);
    M32((s31+20)) = c7;
    c8 = fn_80055AF0(s27, 4);
    M32((s31+24)) = c8;
    c9 = fn_80055AF0(s27, 5);
    M32((s31+28)) = c9;
    c10 = fn_80055AF0(s27, 6);
    M32((s31+32)) = c10;
    M32((s31+36)) = fn_80055AF0(s27, 7);
    M32((s31+40)) = fn_80055AF0(s27, 8);
    s31 = 0;
    v9 = M32((s27+44));
    s29 = v9;
    s28 = s29;
    do {
        h1 = s29+44;
        fn_80053F34(M32((s28+12)), 0, h1);
        s29 = (s29+12);
        s31 = (s31+1);
        s28 = (s28+4);
    } while ((s32)s31 < (s32)8);
    M32((s30+2412)) = s27;
}
#pragma pop

void fn_801635EC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2412));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2412)) = 0;
}

void fn_80163630(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    s30 = 0;
    s31 = (c0+2416);
    do {
        v1 = M32((s31+4));
        if ((u32)v1 != (u32)0) {
            v2 = M32((v1+44));
            v3 = M8((v2+12));
            if ((s32)((s8)v3) != (s32)0) {
                fn_80138AB0(v1, v2);
            }
        }
        s30 = (s30+1);
        s31 = (s31+4);
    } while ((s32)s30 < (s32)8);
}

void fn_80163820(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2420+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80163868(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2420+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80163978(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131254();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2416), (u32)lbl_804AC658, 0);
}

void fn_801639C4(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v6;
    u32 v7;
    u32 v8;
    u32 c0;
    u32 c5;
    s27 = p3;
    c0 = fn_801311E0();
    s30 = (c0+2416);
    s31 = (s30+(((s8)s27)<<2));
    v1 = M32((s31+4));
    if ((u32)v1 != (u32)0) {
        fn_80163A70(s27);
    }
    v2 = M32(s30);
    v3 = M32(v2);
    v4 = M32(v3);
    s29 = fn_801388A8(v4);
    s28 = M32((s29+40));
    HSD_GObj_AddProc(s29, (u32)fn_801638B0, 1);
    v6 = lbl_805E09D8;
    v7 = M32(s30);
    v8 = M32(v7);
    fn_801389D8(s28, v8, v6, v6);
    c5 = fn_80138A00(s29, 29);
    M8((c5+13)) = s27;
    M32((s31+4)) = s29;
}

void fn_80163A70(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+2420));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2420)) = 0;
}

void fn_80163AC0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c1;
    fn_801311E0();
    s29 = 0;
    s31 = 0;
    do {
        c1 = fn_801311E0();
        s30 = (c1+(((s8)s29)<<2));
        v1 = M32((s30+2420));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2420)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)8);
}

void fn_80163B30(void) {
    fn_80163CF0();
}

void fn_80163CF0(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80163D20(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80163D44(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131254();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2452), (u32)lbl_804AC678, 0);
}

void fn_80163D90(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    u32 c5;
    s30 = fn_801311E0();
    v1 = M32((s30+2452));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80163D20, 1);
    v5 = M32((s30+2452));
    v6 = lbl_805E09E4;
    v7 = M32(v5);
    v8 = lbl_805E09E8;
    fn_801389D8(s31, v7, v6, v8);
    c4 = fn_80138A00(s29, 30);
    s31 = c4;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+12)) = c5;
    M32((s30+2456)) = s29;
}

void fn_80163E30(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2456)) = 0;
}

void fn_80163E74(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2464));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M8((v2+12));
    if ((s32)((s8)v3) == (s32)-1) {
    return;
    }
    fn_80138AB0(v1, v2);
}

void fn_80163F60(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2464));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80163F90(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80163FB4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131254();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2460), (u32)lbl_804AC6A0, 0);
}

void fn_80164000(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    float v5;
    u32 v6;
    u32 v7;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+2460));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80163F90, 1);
    v5 = lbl_805E09F0;
    v6 = M32((s31+2460));
    v7 = M32(v6);
    fn_801389D8(s29, v7, v5, v5);
    c4 = fn_80138A00(s30, 181);
    M8((c4+12)) = 0;
    M32((s31+2464)) = s30;
}

void fn_80164094(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2464));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2464)) = 0;
}

void fn_801640D8(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2472));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M8((v2+12));
    if ((s32)((s8)v3) == (s32)-1) {
    return;
    }
    fn_80138AB0(v1, v2);
}

void fn_801641E0(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2472));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80164210(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80164234(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131254();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2468), (u32)lbl_804AC6C8, 0);
}

void fn_80164280(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    float v5;
    u32 v6;
    u32 v7;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+2468));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80164210, 1);
    v5 = lbl_805E0A00;
    v6 = M32((s31+2468));
    v7 = M32(v6);
    fn_801389D8(s29, v7, v5, v5);
    c4 = fn_80138A00(s30, 182);
    M8((c4+12)) = 0;
    M8((c4+13)) = 0;
    M32((s31+2472)) = s30;
}

void fn_80164318(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2472));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2472)) = 0;
}

#pragma push
#pragma #pragma #pragma optimization_level 3
#pragma #pragma inline_depth(0)
#pragma opt_common_subs off
void fn_8016435C(void) {
    u32 s31;
    u32 c0;
    u32 h2;
    u32 v2;
    u32 h1;
    c0 = fn_801311E0();
    h2 = M32((2484+c0));
    if ((u32)0 == h2) {
    return;
    }
    v2 = M32((44+h2));
    s31 = M32((h2+40));
    if ((s32)((s8)M8((v2+12))) != 0) {
    return;
    }
    M8((12+v2)) = 1;
    h1 = M32((c0+2480));
    fn_80138B10(s31, 1, M32(h1), lbl_805E0A10, lbl_805E0A14);
    fn_800550F4(s31, ((1<<16)-1));
}
#pragma pop

void fn_801643DC(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0A10;
    M8((s29+12)) = 1;
    v5 = lbl_805E0A14;
    v6 = M32((s31+2480));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_8016447C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2480), (u32)lbl_804AC6F0, 0);
}

void fn_801644C8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+2480));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801643DC, 1);
    v5 = M32((s31+2480));
    v6 = lbl_805E0A10;
    v7 = M32(v5);
    v8 = lbl_805E0A14;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 102);
    M8((c4+12)) = 0;
    M32((s31+2484)) = s30;
}

void fn_80164568(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2484));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2484)) = 0;
}

void fn_801645AC(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2492));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s30 = M32((v1+44));
    v3 = M32((s30+20));
    s31 = M32((v3+124));
    if ((u32)s31 == (u32)0) {
        __assert((u32)&lbl_805D6A70, 171, (u32)&lbl_805D6A78);
    }
    v5 = M32((s30+20));
    v6 = MF((s31+12));
    fn_80409274(v5, v6);
    v7 = M32((s30+20));
    v8 = lbl_805E0A18;
    v9 = M32((v7+124));
    HSD_AObjSetRate(v9, v8);
    v10 = M32((s30+20));
    fn_8040A1A0(v10);
}

void fn_80164680(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_801646A4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2488), (u32)lbl_804AC710, 0);
}

void fn_801646F0(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 c4;
    u32 c5;
    u32 c6;
    s30 = fn_801311E0();
    v1 = M32((s30+2488));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 1, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80164680, 1);
    v5 = lbl_805E0A18;
    v6 = M32((s30+2488));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 103);
    s31 = c4;
    M8((c4+12)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    v8 = lbl_805E0A1C;
    v9 = M32((s31+20));
    fn_80138BA4(v9, 0, v8);
    M32((s30+2492)) = s29;
}

void fn_801647C0(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2492));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2492)) = 0;
}

void fn_801648DC(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2500));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+90)) = 1;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80164914(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2500));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = lbl_805E0A20;
    M8((v2+12)) = s31;
    v4 = M32((v2+20));
    fn_80138C90(v4, ((s8)s31), v3);
}

void fn_80164C38(void) {
    u32 v1;
    u32 s31;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 v8;
    float v9;
    u32 v10;
    u32 v11;
    u32 v12;
    float v13;
    u32 v14;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2500));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = M32((v1+40));
    v4 = (*(s8*)((s31+90)));
    if ((s32)v4 != (s32)0) {
        fn_801655E0(v3, c0);
        return;
    }
    v5 = lbl_805E0A20;
    v6 = M32((c0+2496));
    v7 = M32(v6);
    fn_80138B10(v3, 1, v7, v5, v5);
    v8 = M32((s31+16));
    v9 = lbl_805E0A24;
    v10 = M32((v8+124));
    HSD_AObjSetRate(v10, v9);
    v11 = (*(s8*)((s31+12)));
    v12 = M32((s31+20));
    v13 = lbl_805E0A20;
    fn_80138C90(v12, v11, v13);
    fn_80165B9C();
    fn_80146930();
    v14 = M32((s31+24));
    fn_8040BE00(v14, 16);
    fn_80146974();
}

void fn_80164CE0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2500));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+52));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80164D34(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2500));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+64));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80164D88(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2500));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+76));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80165030(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2496), (u32)lbl_804AC730, 0);
}

void fn_8016507C(void) {
    u32 v4;
    u32 c4;
    u32 v2;
    u32 c5;
    u32 s31;
    u32 v6;
    u32 v1;
    u32 c7;
    float v5;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 c9;
    u32 c8;
    u32 c6;
    u32 v9;
    u32 v7;
    u32 c0;
    u32 s30;
    u32 v8;
    u32 v3;
    u32 s29;
    c0 = fn_801311E0();
    s30 = c0;
    v1 = M32((c0+2496));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 2, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80164DDC, 1);
    v5 = lbl_805E0A20;
    v6 = M32((s30+2496));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 104);
    s31 = c4;
    M8((c4+89)) = 0;
    M8((s31+90)) = 0;
    M8((s31+91)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+16)) = c5;
    c6 = fn_80055AF0(s29, 3);
    M32((s31+20)) = c6;
    c7 = fn_80055AF0(s29, 8);
    M32((s31+24)) = c7;
    c8 = fn_80055AF0(s29, 7);
    M32((s31+28)) = c8;
    c9 = fn_80055AF0(s29, 5);
    M32((s31+32)) = c9;
    M32((s31+36)) = fn_80055AF0(s29, 6);
    M32((s30+2500)) = s29;
    v8 = M32((s29+44));
    s30 = v8;
    v9 = M32((s30+28));
    fn_80053F34(v9, 0, (s30+52));
    v10 = M32((s30+32));
    fn_80053F34(v10, 0, (s30+64));
    v11 = M32((s30+36));
    fn_80053F34(v11, 0, (s30+76));
    v12 = M32((s30+16));
    fn_80053F34(v12, 0, (s30+40));
}

void fn_801651C8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2500));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2500)) = 0;
}

void fn_801652C8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2504), (u32)lbl_804AC750, 0);
}

void fn_8016545C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2508));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2508)) = 0;
}

void fn_801654A0(void) {
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2516));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    v3 = lbl_805E0A30;
    fn_80138BA4(v2, 50, v3);
}

void fn_801654DC(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80165500(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2512), (u32)lbl_804AC770, 0);
}

void fn_8016554C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+2512));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 2, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801654DC, 1);
    v5 = M32((s31+2512));
    v6 = lbl_805E0A30;
    v7 = M32(v5);
    v8 = lbl_805E0A34;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 106);
    M32((s31+2516)) = s30;
}

void fn_801655E0(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2516));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2516)) = 0;
}

void fn_80165624(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80165648(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2520), (u32)lbl_804AC790, 0);
}

void fn_80165694(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+2520));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 4, 80);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80165624, 1);
    v5 = M32((s31+2520));
    v6 = lbl_805E0A38;
    v7 = M32(v5);
    v8 = lbl_805E0A3C;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 107);
    M32((s31+2524)) = s30;
}

void fn_80165728(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2524));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2524)) = 0;
}

void fn_8016583C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2584));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+28+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

#pragma push
#pragma optimization_level 2
void fn_801658A8(u32 p3) {
    u32 s31;
    u32 s30;
    s32 s29;
    s29 = p3;
    fn_8040A64C(M32((p3+40)));
    s30 = M32((s29+44));
    s29 = s30;
    s31 = 0;
    do {
        fn_80053F34(M32((s29+12)), 0, (28+s30));
        s31 = (s31+1);
        s30 = (12+s30);
        s29 = (s29+4);
    } while ((s32)s31 < (s32)4);
}
#pragma pop

void fn_80165918(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2580), (u32)lbl_804AC7B0, 0);
}

void fn_80165964(void) {
    u32 c1;
    u32 s29;
    u32 c0;
    u32 s31;
    u32 s30;
    c0 = fn_801311E0();
    s30 = c0;
    c1 = fn_80138934(M32(M32(M32((c0+2580)))), 2, 0);
    s31 = M32((40+c1));
    HSD_GObj_AddProc(c1, fn_801658A8, 1);
    s29 = c1;
    fn_801389D8(s31, M32(M32((s30+2580))), lbl_805E0A40, lbl_805E0A44);
    s31 = fn_80138A00(s29, 111);
    M32((s31+12)) = fn_80055AF0(s29, 1);
    M32((s31+16)) = fn_80055AF0(s29, 2);
    M32((s31+20)) = fn_80055AF0(s29, 3);
    M32((s31+24)) = fn_80055AF0(s29, 4);
    s31 = 0;
    M32((2584+s30)) = s29;
    s30 = M32((s29+44));
    s29 = s30;
    do {
        fn_80053F34(M32((s29+12)), 0, (s30+28));
        s30 = (s30+12);
        s29 = (4+s29);
        s31 = (s31+1);
    } while ((s32)s31 < 4);
}

void fn_80165A6C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2584));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2584)) = 0;
}

void fn_80165AB0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2532));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+12)) = s31;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80165AF0(void) {
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2532));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = lbl_805E0A48;
    v4 = M8((v2+12));
    v5 = M32((c0+2528));
    v6 = M32((v1+40));
    v7 = M32(v5);
    fn_80138B10(v6, ((((s8)v4)<<1)+1), v7, (((s8)v4)<<1), v3, v3);
}

void fn_80165B48(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    float v8;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2532));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((c0+2528));
    v4 = M8((v2+12));
    v5 = M32((v1+40));
    v6 = M32(v3);
    v7 = lbl_805E0A48;
    v8 = lbl_805E0A4C;
    fn_80138B10(v5, (((s8)v4)<<1), v6, v1, v7, v8);
}

void fn_80165B9C(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    float v8;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2532));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((c0+2528));
    v4 = M8((v2+12));
    v5 = M32((v1+40));
    v6 = M32(v3);
    v7 = lbl_805E0A48;
    v8 = lbl_805E0A4C;
    fn_80138B10(v5, ((((s8)v4)<<1)+1), v6, v1, v7, v8);
}

void fn_80165BF4(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80165C18(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2528), (u32)lbl_804AC7D0, 0);
}

void fn_80165C64(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    float v5;
    u32 v6;
    u32 v7;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+2528));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 4, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80165BF4, 1);
    v5 = lbl_805E0A48;
    v6 = M32((s31+2528));
    v7 = M32(v6);
    fn_801389D8(s29, v7, v5, v5);
    c4 = fn_80138A00(s30, 108);
    M8((c4+12)) = 0;
    M32((s31+2532)) = s30;
}

void fn_80165D00(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2532));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2532)) = 0;
}

void fn_80165E10(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2536), (u32)lbl_804AC7F0, 0);
}

void fn_8016604C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2540));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2540)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801660B8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2576));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_801660E8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2576));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_801662A0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2556), (u32)lbl_804AC810, 0);
}

void fn_80166660(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2560));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2560)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)5);
}

void fn_801669D0(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2592+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+52));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80166A3C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2592+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+64));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80166AA8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2592+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+28));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80166B14(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2592+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+40));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80166D80(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2588), (u32)lbl_804AC830, 0);
}

void fn_8016707C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2592));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2592)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801670E8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2612));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80167118(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2612));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80167204(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013125C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2608), (u32)lbl_804AC850, 0);
}

void fn_801673F4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2612));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2612)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

#pragma push
#pragma #pragma opt_lifetimes off
void fn_80167460(void) {
    u32 h1;
    u32 s31;
    s32 c0;
    u32 v2;
    float v5;
    c0 = fn_801311E0();
    h1 = M32((c0+2636));
    if ((s32)h1 == (u32)0) {
    return;
    }
    v2 = M32((h1+44));
    s31 = M32((h1+40));
    if (((s8)M8((12+v2))) != 0) {
    return;
    }
    M8((v2+12)) = 1;
    v5 = lbl_805E0A88;
    fn_80138B10(s31, 1, M32(M32((c0+2632))), v5, lbl_805E0A8C);
    fn_800550F4(s31, ((1<<16)-1));
}
#pragma pop

void fn_801674E0(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0A88;
    M8((s29+12)) = 1;
    v5 = lbl_805E0A8C;
    v6 = M32((s31+2632));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_80167580(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2632), (u32)lbl_804AC878, 0);
}

void fn_801675CC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+2632));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801674E0, 1);
    v5 = M32((s31+2632));
    v6 = lbl_805E0A88;
    v7 = M32(v5);
    v8 = lbl_805E0A8C;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 113);
    M8((c4+12)) = 0;
    M32((s31+2636)) = s30;
}

void fn_8016766C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2636));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2636)) = 0;
}

void fn_801676B0(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2644));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s30 = M32((v1+44));
    v3 = M32((s30+20));
    s31 = M32((v3+124));
    if ((u32)s31 == (u32)0) {
        __assert((u32)&lbl_805D6AF8, 171, (u32)&lbl_805D6B00);
    }
    v5 = M32((s30+20));
    v6 = MF((s31+12));
    fn_80409274(v5, v6);
    v7 = M32((s30+20));
    v8 = lbl_805E0A90;
    v9 = M32((v7+124));
    HSD_AObjSetRate(v9, v8);
    v10 = M32((s30+20));
    fn_8040A1A0(v10);
}

void fn_80167784(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_801677A8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2640), (u32)lbl_804AC898, 0);
}

void fn_801677F4(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 c4;
    u32 c5;
    u32 c6;
    s30 = fn_801311E0();
    v1 = M32((s30+2640));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 1, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80167784, 1);
    v5 = lbl_805E0A90;
    v6 = M32((s30+2640));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 114);
    s31 = c4;
    M8((c4+12)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    v8 = lbl_805E0A94;
    v9 = M32((s31+20));
    fn_80138BA4(v9, 0, v8);
    M32((s30+2644)) = s29;
}

void fn_801678C4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2644));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2644)) = 0;
}

void fn_80167908(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2652));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+205)) = 6;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80167A90(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2652));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = lbl_805E0A98;
    M8(((u32)v2+12+(((s8)s30)*96))) = s31;
    v4 = M32(((u32)v2+20+(((s8)s30)*96)));
    fn_80138BA4(v4, ((s8)s31), v3);
}

void fn_80167E8C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2652));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+52+(((s8)s30)*96)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80167EF8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2652));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+64+(((s8)s30)*96)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80167F64(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2652));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+76+(((s8)s30)*96)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80168478(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2648), (u32)lbl_804AC8B8, 0);
}

void fn_801684C4(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 c0;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    u32 c9;
    u32 c10;
    u32 c11;
    u32 c12;
    u32 c13;
    u32 c14;
    u32 c15;
    u32 c16;
    c0 = fn_801311E0();
    s30 = c0;
    v1 = M32((c0+2648));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 2, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80167FD0, 1);
    v5 = lbl_805E0A98;
    v6 = M32((s30+2648));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 115);
    s31 = c4;
    M8((c4+102)) = 0;
    M8((s31+103)) = 0;
    M8((s31+100)) = 0;
    M8((s31+198)) = 0;
    M8((s31+199)) = 0;
    M8((s31+196)) = 0;
    M8((s31+205)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+16)) = c5;
    c6 = fn_80055AF0(s29, 3);
    M32((s31+20)) = c6;
    c7 = fn_80055AF0(s29, 7);
    M32((s31+24)) = c7;
    c8 = fn_80055AF0(s29, 5);
    M32((s31+28)) = c8;
    c9 = fn_80055AF0(s29, 8);
    M32((s31+32)) = c9;
    c10 = fn_80055AF0(s29, 6);
    M32((s31+36)) = c10;
    c11 = fn_80055AF0(s29, 9);
    M32((s31+112)) = c11;
    c12 = fn_80055AF0(s29, 11);
    M32((s31+116)) = c12;
    c13 = fn_80055AF0(s29, 15);
    M32((s31+120)) = c13;
    c14 = fn_80055AF0(s29, 13);
    M32((s31+124)) = c14;
    c15 = fn_80055AF0(s29, 16);
    M32((s31+128)) = c15;
    c16 = fn_80055AF0(s29, 14);
    M32((s31+132)) = c16;
    s31 = 0;
    M32((s30+2652)) = s29;
    v8 = M32((s29+44));
    s30 = v8;
    do {
        v9 = M32((s30+24));
        fn_80053F34(v9, 0, (s30+52));
        v10 = M32((s30+28));
        fn_80053F34(v10, 0, (s30+64));
        v11 = M32((s30+36));
        fn_80053F34(v11, 0, (s30+76));
        v12 = M32((s30+16));
        fn_80053F34(v12, 0, (s30+40));
        s31 = (s31+1);
        s30 = (s30+96);
    } while ((s32)s31 < (s32)2);
}

void fn_80168694(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2652));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2652)) = 0;
}

void fn_801687A4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2656), (u32)lbl_804AC8D8, 0);
}

void fn_80168950(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2660));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2660)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)2);
}

void fn_801689BC(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2672));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+20+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

#pragma push
#pragma opt_lifetimes off
void fn_80168A28(u32 p3) {
    u32 h1;
    s32 s31;
    u32 s30;
    s32 s29;
    s29 = p3;
    fn_8040A64C(M32((40+p3)));
    s31 = 0;
    s30 = M32((s29+44));
    s29 = s30;
    do {
        fn_80053F34(M32((s29+12)), 0, (20+s30));
        s31 = (s31+1);
        h1 = s29+4;
        s30 = (s30+12);
        s29 = h1;
    } while (s31 < (s32)2);
}
#pragma pop

void fn_80168A98(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2668), (u32)lbl_804AC8F8, 0);
}

void fn_80168AE4(void) {
    s32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 c0;
    u32 c1;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 h1;
    c0 = fn_801311E0();
    s30 = c0;
    v1 = M32((c0+2668));
    v2 = M32(v1);
    v3 = M32(v2);
    c1 = fn_80138934(v3, 2, 0);
    h1 = M32((c1+40));
    v4 = h1;
    s31 = v4;
    s29 = c1;
    HSD_GObj_AddProc(c1, (u32)fn_80168A28, 1);
    v5 = M32((s30+2668));
    v6 = lbl_805E0AB0;
    v7 = M32(v5);
    v8 = lbl_805E0AB4;
    fn_801389D8(s31, v7, v6, v8);
    c4 = fn_80138A00(s29, 117);
    s31 = c4;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+12)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    s31 = 0;
    M32((s30+2672)) = s29;
    v9 = M32((s29+44));
    s30 = v9;
    s29 = s30;
    do {
        v10 = M32((s29+12));
        fn_80053F34(v10, 0, (s30+20));
        s31 = (s31+1);
        s30 = (s30+12);
        s29 = (s29+4);
    } while ((s32)s31 < (s32)2);
}

void fn_80168BCC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2672));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2672)) = 0;
}

void fn_80168C10(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2780+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    v3 = lbl_805E0AB8;
    fn_80138BA4(v2, 50, v3);
}

void fn_80168D30(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2776), (u32)lbl_804AC918, 0);
}

void fn_80168EC4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+2780));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2780)) = 0;
}

void fn_80168F14(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2780));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2780)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)2);
}

void fn_8016904C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2676), (u32)lbl_804AC938, 0);
}

void fn_80169230(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2680));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2680)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)2);
}

void fn_8016936C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2752));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+28+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80169448(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2748), (u32)lbl_804AC958, 0);
}

void fn_8016959C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2752));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2752)) = 0;
}

void fn_801695E0(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2692+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+13)) = s31;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8016985C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2688), (u32)lbl_804AC978, 0);
}

void fn_801699F0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2692));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2692)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)2);
}

void fn_80169B28(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2700), (u32)lbl_804AC998, 0);
}

void fn_80169D64(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2704));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2704)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80169DD0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2740+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80169E18(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2740+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8016A000(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2720), (u32)lbl_804AC9B8, 0);
}

void fn_8016A3C8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2724));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2724)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)6);
}

void fn_8016A738(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2760+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+52));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8016A7A4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2760+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+64));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8016A810(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2760+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+28));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8016A87C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2760+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+40));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8016AAE8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2756), (u32)lbl_804AC9D8, 0);
}

void fn_8016ADE0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2760));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2760)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8016AE4C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2792+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8016AE94(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2792+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8016AFA8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131264();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2788), (u32)lbl_804ACA00, 0);
}

void fn_8016B194(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2792));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2792)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8016B200(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0B10;
    M8((s29+12)) = 1;
    v5 = lbl_805E0B14;
    v6 = M32((s31+2812));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_8016B2A0(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0B10;
    M8((s29+12)) = 1;
    v5 = lbl_805E0B14;
    v6 = M32((s31+2820));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_8016B41C(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c1;
    u32 c3;
    u32 c4;
    c0 = fn_801311E0();
    s31 = c0;
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2812), (u32)lbl_804ACA28, 0);
    c3 = fn_801311E0();
    s31 = c3;
    c4 = fn_8013126C();
    v2 = M32(c4);
    fn_80059520(v2, (s31+2820), (u32)lbl_804ACA48, 0);
}

void fn_8016B490(void) {
    s32 v11;
    s32 v5;
    s32 v3;
    u32 c9;
    u32 h1;
    u32 s30;
    u32 h3;
    u32 c0;
    u32 c6;
    u32 c1;
    u32 s31;
    u32 h2;
    u32 c4;
    u32 h5;
    u32 s29;
    u32 h7;
    u32 h6;
    u32 c5;
    c0 = fn_801311E0();
    s31 = c0;
    v3 = M32(M32(M32((c0+2812))));
    c1 = fn_80138934(v3, 1, 0);
    h5 = M32((c1+40));
    h3 = h5;
    s29 = h3;
    s30 = c1;
    HSD_GObj_AddProc(c1, fn_8016B200, 1);
    h7 = M32((2812+s31));
    h1 = h7;
    v5 = h1;
    fn_80138B10(s29, 0, M32(v5), lbl_805E0B10, lbl_805E0B14);
    c4 = fn_80138A00(s30, 125);
    M8((c4+12)) = 0;
    M32((s31+2816)) = s30;
    c5 = fn_801311E0();
    s31 = c5;
    h6 = M32((c5+2820));
    h2 = h6;
    v11 = M32(M32(h2));
    c6 = fn_80138934(v11, 2, 0);
    s29 = M32((40+c6));
    HSD_GObj_AddProc(c6, fn_8016B2A0, 1);
    s30 = c6;
    fn_80138B10(s29, 0, M32(M32((2820+s31))), lbl_805E0B10, lbl_805E0B14);
    c9 = fn_80138A00(s30, 126);
    M8((12+c9)) = 0;
    M32((s31+2824)) = s30;
}

void fn_8016B59C(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 ph0;
    u32 c0;
    u32 c1;
    u32 c2;
    c0 = fn_801311E0();
    s31 = c0;
    v1 = M32((c0+2816));
    ph0 = v1;
    if ((u32)v1 != (u32)0) {
        c1 = func_80428F64(v1);
        M32((s31+2816)) = 0;
        ph0 = c1;
    }
    c2 = fn_801311E0(ph0);
    s31 = c2;
    v2 = M32((c2+2824));
    if ((u32)v2 == (u32)0) {
    return;
    }
    func_80428F64(v2);
    M32((s31+2824)) = 0;
}

void fn_8016B600(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+2832));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s30 = M32((v1+44));
    v3 = M32((s30+20));
    s31 = M32((v3+124));
    if ((u32)s31 == (u32)0) {
        __assert((u32)&lbl_805D6BA0, 171, (u32)&lbl_805D6BA8);
    }
    v5 = M32((s30+20));
    v6 = MF((s31+12));
    fn_80409274(v5, v6);
    v7 = M32((s30+20));
    v8 = lbl_805E0B18;
    v9 = M32((v7+124));
    HSD_AObjSetRate(v9, v8);
    v10 = M32((s30+20));
    fn_8040A1A0(v10);
}

void fn_8016B6D4(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8016B6F8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2828), (u32)lbl_804ACA68, 0);
}

void fn_8016B744(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 c4;
    u32 c5;
    u32 c6;
    s30 = fn_801311E0();
    v1 = M32((s30+2828));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 1, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_8016B6D4, 1);
    v5 = lbl_805E0B18;
    v6 = M32((s30+2828));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 127);
    s31 = c4;
    M8((c4+12)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    v8 = lbl_805E0B1C;
    v9 = M32((s31+20));
    fn_80138BA4(v9, 0, v8);
    M32((s30+2832)) = s29;
}

void fn_8016B814(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2832));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2832)) = 0;
}

void fn_8016C5A0(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 ph0;
    u32 c0;
    u32 c1;
    c0 = fn_801311E0();
    v1 = M32((c0+2840));
    ph0 = v1;
    if ((u32)v1 != (u32)0) {
        v2 = M32((v1+44));
        M8((v2+173)) = 6;
        ph0 = v2;
    }
    c1 = fn_801311E0(ph0);
    v3 = M32((c1+2848));
    if ((u32)v3 == (u32)0) {
    return;
    }
    v4 = M32((v3+44));
    M8((v4+173)) = 16;
    if ((u32)v3 != (u32)0) {
    return;
    }
}

void fn_8016CB18(p3) u32 p3; {
    if ((s32)((s8)p3) < (s32)2) {
        fn_8016B858();
        return;
    }
    fn_8016BED8(((s8)(p3-2)));
}

void fn_8016CE68(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c1;
    u32 c3;
    u32 c4;
    c0 = fn_801311E0();
    s31 = c0;
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2836), (u32)lbl_804ACA88, 0);
    c3 = fn_801311E0();
    s31 = c3;
    c4 = fn_8013126C();
    v2 = M32(c4);
    fn_80059520(v2, (s31+2844), (u32)lbl_804ACAA8, 0);
}

void fn_8016D1E8(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 ph0;
    u32 c0;
    u32 c1;
    u32 c2;
    c0 = fn_801311E0();
    s31 = c0;
    v1 = M32((c0+2840));
    ph0 = v1;
    if ((u32)v1 != (u32)0) {
        c1 = func_80428F64(v1);
        M32((s31+2840)) = 0;
        ph0 = c1;
    }
    c2 = fn_801311E0(ph0);
    s31 = c2;
    v2 = M32((c2+2848));
    if ((u32)v2 == (u32)0) {
    return;
    }
    func_80428F64(v2);
    M32((s31+2848)) = 0;
}

void fn_8016D24C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+2856));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+28+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8016D2B8(u32 p3) {
    u32 s31;
    u32 v2;
    s32 s30;
    u32 s29;
    s29 = p3;
    fn_8040A64C(M32((p3+40)));
    v2 = M32((s29+44));
    s30 = v2;
    s29 = s30;
    s31 = 0;
    do {
        fn_80053F34(M32((s29+12)), 0, (s30+28));
        s31 = (s31+1);
        s30 = (s30+12);
        s29 = (s29+4);
    } while ((s32)s31 < (s32)4);
}

void fn_8016D328(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2852), (u32)lbl_804ACAC8, 0);
}

void fn_8016D47C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+2856));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2856)) = 0;
}

void fn_8016D58C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2860), (u32)lbl_804ACAE8, 0);
}

void fn_8016D770(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2864));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2864)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8016D850(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2884+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+13)) = s31;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8016DA58(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2880), (u32)lbl_804ACB08, 0);
}

void fn_8016DC1C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2884));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2884)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8016DC88(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2900), (u32)lbl_804ACB28, 0);
}

void fn_8016DCD4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2904));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2904)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8016DD40(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2924+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8016DD88(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2924+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8016DE9C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2920), (u32)lbl_804ACB48, 0);
}

void fn_8016E080(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2924));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2924)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8016E0EC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2944+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    v3 = lbl_805E0B58;
    fn_80138BA4(v2, 35, v3);
}

void fn_8016E20C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2940), (u32)lbl_804ACB68, 0);
}

void fn_8016E3A0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2944));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2944)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8016E40C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2964+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    v3 = lbl_805E0B60;
    fn_80138BA4(v2, 50, v3);
}

void fn_8016E52C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2960), (u32)lbl_804ACB88, 0);
}

void fn_8016E6C0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    s31 = (c0+(((s8)s31)<<2));
    v1 = M32((s31+2964));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+2964)) = 0;
}

void fn_8016E710(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2964));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2964)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8016E77C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2984+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8016E7C4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+2984+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8016E8D8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013126C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+2980), (u32)lbl_804ACBA8, 0);
}

void fn_8016EAE4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+2984));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+2984)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

#pragma push
#pragma #pragma optimization_level 2
#pragma opt_common_subs off
void fn_8016EB50(void) {
    u32 v1;
    u32 v2;
    u32 v4;
    float v5;
    u32 v7;
    u32 v8;
    s32 c0;
    u32 h1;
    c0 = fn_801311E0();
    v1 = M32((3024+c0));
    if (!v1) {
    return;
    }
    v2 = M32((v1+44));
    h1 = M32((v1+40));
    v4 = M8((v2+12));
    if ((s32)((s8)v4) != (s32)0) {
    return;
    }
    M8((v2+12)) = 1;
    v5 = lbl_805E0B78;
    v7 = M32((c0+3020));
    v8 = M32(v7);
    fn_80138B10(h1, 1, v8, v5, lbl_805E0B7C);
    fn_800550F4(h1, ((1<<16)-1));
}
#pragma pop

void fn_8016EBD0(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0B78;
    M8((s29+12)) = 1;
    v5 = lbl_805E0B7C;
    v6 = M32((s31+3020));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_8016EC70(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131274();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3020), (u32)lbl_804ACBD0, 0);
}

void fn_8016ECBC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+3020));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_8016EBD0, 1);
    v5 = M32((s31+3020));
    v6 = lbl_805E0B78;
    v7 = M32(v5);
    v8 = lbl_805E0B7C;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 155);
    M8((c4+12)) = 0;
    M32((s31+3024)) = s30;
}

void fn_8016ED5C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3024));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3024)) = 0;
}

void fn_8016EDA0(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3032));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s30 = M32((v1+44));
    v3 = M32((s30+20));
    s31 = M32((v3+124));
    if ((u32)s31 == (u32)0) {
        __assert((u32)&lbl_805D6C10, 171, (u32)&lbl_805D6C18);
    }
    v5 = M32((s30+20));
    v6 = MF((s31+12));
    fn_80409274(v5, v6);
    v7 = M32((s30+20));
    v8 = lbl_805E0B80;
    v9 = M32((v7+124));
    HSD_AObjSetRate(v9, v8);
    v10 = M32((s30+20));
    fn_8040A1A0(v10);
}

void fn_8016EE74(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8016EE98(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131274();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3028), (u32)lbl_804ACBF0, 0);
}

void fn_8016EEE4(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 c4;
    u32 c5;
    u32 c6;
    s30 = fn_801311E0();
    v1 = M32((s30+3028));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 1, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_8016EE74, 1);
    v5 = lbl_805E0B80;
    v6 = M32((s30+3028));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 156);
    s31 = c4;
    M8((c4+12)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    v8 = lbl_805E0B84;
    v9 = M32((s31+20));
    fn_80138BA4(v9, 0, v8);
    M32((s30+3032)) = s29;
}

void fn_8016EFB4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3032));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3032)) = 0;
}

void fn_8016F1B0(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3040));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+140)) = 39;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8016F1E8(void) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3040));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    s31 = 0;
    M8((v2+140)) = 0;
    do {
        fn_8016F308(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_8016F784(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131274();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3036), (u32)lbl_804ACC10, 0);
}

void fn_8016F7D0(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 c0;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    u32 c9;
    u32 c10;
    u32 c11;
    u32 c12;
    c0 = fn_801311E0();
    s30 = c0;
    v1 = M32((c0+3036));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 2, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_8016F4E4, 1);
    v5 = lbl_805E0B88;
    v6 = M32((s30+3036));
    v7 = M32(v6);
    fn_801389D8(s31, v7, v5, v5);
    c4 = fn_80138A00(s29, 157);
    s31 = c4;
    M16((c4+40)) = 0;
    M8((s31+42)) = 0;
    M16((s31+72)) = 0;
    M8((s31+74)) = 0;
    M16((s31+104)) = 0;
    M8((s31+106)) = 0;
    M16((s31+136)) = 0;
    M8((s31+138)) = 0;
    M8((s31+140)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+16)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+20)) = c6;
    c7 = fn_80055AF0(s29, 8);
    M32((s31+48)) = c7;
    c8 = fn_80055AF0(s29, 9);
    M32((s31+52)) = c8;
    c9 = fn_80055AF0(s29, 15);
    M32((s31+80)) = c9;
    c10 = fn_80055AF0(s29, 16);
    M32((s31+84)) = c10;
    c11 = fn_80055AF0(s29, 22);
    M32((s31+112)) = c11;
    c12 = fn_80055AF0(s29, 23);
    M32((s31+116)) = c12;
    s31 = 0;
    M32((s30+3040)) = s29;
    v8 = M32((s29+44));
    s30 = v8;
    do {
        v9 = M32((s30+16));
        fn_80053F34(v9, 0, (s30+24));
        s31 = (s31+1);
        s30 = (s30+32);
    } while ((s32)s31 < (s32)4);
}

void fn_8016F938(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3040));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3040)) = 0;
}

void fn_8016F97C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3048));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+28+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

#pragma push
#pragma optimization_level 3
void fn_8016F9E8(u32 p3) {
    u32 s31;
    s32 s30;
    u32 s29;
    fn_8040A64C(M32((40+p3)));
    s29 = p3;
    s30 = M32((s29+44));
    s29 = s30;
    s31 = 0;
    do {
        fn_80053F34(M32((s29+12)), 0, (s30+28));
        s31 = (s31+1);
        s30 = (12+s30);
        s29 = (s29+4);
    } while ((s32)s31 < 4);
}
#pragma pop

void fn_8016FA58(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131274();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3044), (u32)lbl_804ACC38, 0);
}

void fn_8016FAA4(void) {
    u32 h3;
    u32 h1;
    u32 s30;
    u32 v3;
    u32 v4;
    u32 s29;
    u32 s31;
    u32 v7;
    float v8;
    u32 c0;
    u32 c1;
    u32 c6;
    u32 c7;
    c0 = fn_801311E0();
    s30 = c0;
    v3 = M32(M32(M32((3044+c0))));
    c1 = fn_80138934(v3, 2, 0);
    s29 = c1;
    v4 = M32((c1+40));
    HSD_GObj_AddProc(c1, fn_8016F9E8, 1);
    s31 = v4;
    h3 = M32((s30+3044));
    v7 = M32(h3);
    v8 = lbl_805E0B9C;
    fn_801389D8(s31, v7, lbl_805E0B98, v8);
    s31 = fn_80138A00(s29, 158);
    M32((12+s31)) = fn_80055AF0(s29, 1);
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 3);
    M32((20+s31)) = c7;
    M32((24+s31)) = fn_80055AF0(s29, 4);
    s31 = 0;
    M32((3048+s30)) = s29;
    s30 = M32((s29+44));
    s29 = s30;
    do {
        fn_80053F34(M32((s29+12)), 0, (s30+28));
        s31 = (1+s31);
        h1 = s30+12;
        s30 = h1;
        s29 = (s29+4);
    } while ((s32)s31 < (s32)4);
}

void fn_8016FBAC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3048));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3048)) = 0;
}

void fn_8016FC58(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3056+(((s8)s31)<<2)));
    s31 = v1;
    if ((u32)s31 == (u32)0) {
    return;
    }
    v2 = M32((s31+40));
    v3 = lbl_805E0BA0;
    fn_80138BA4(v2, 15, v3);
    fn_80138AB0(s31);
}

void fn_8016FCB4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3056+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8016FDC8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131274();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3052), (u32)lbl_804ACC58, 0);
}

void fn_8016FF5C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3056));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3056)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8017003C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3076+(((s8)s31)<<2)));
    s31 = v1;
    if ((u32)s31 == (u32)0) {
    return;
    }
    v2 = M32((s31+40));
    v3 = lbl_805E0BA8;
    fn_80138BA4(v2, 19, v3);
    fn_80138AB0(s31);
}

void fn_80170098(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3076+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_801701AC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131274();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3072), (u32)lbl_804ACC80, 0);
}

void fn_8017033C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3076));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3076)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801703A8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3096+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_801703F0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3096+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80170504(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80131274();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3092), (u32)lbl_804ACCA0, 0);
}

void fn_80170698(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3096));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3096)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80170704(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801311E0();
    v1 = M32((s31+40));
    fn_8040A64C(v1);
}

void fn_80170738(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3116), (u32)lbl_804ACCC0, 0);
}

void fn_80170784(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+3116));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80170704, 1);
    v5 = M32((s31+3116));
    v6 = lbl_805E0BB8;
    v7 = M32(v5);
    v8 = lbl_805E0BBC;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 137);
    M32((s31+3120)) = s30;
}

void fn_80170818(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3120));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3120)) = 0;
}

void fn_801708D0(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0BC0;
    M8((s29+12)) = 1;
    v5 = lbl_805E0BC4;
    v6 = M32((s31+3124));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_80170970(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3124), (u32)lbl_804ACCE0, 0);
}

void fn_801709BC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+3124));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801708D0, 1);
    v5 = M32((s31+3124));
    v6 = lbl_805E0BC0;
    v7 = M32(v5);
    v8 = lbl_805E0BC4;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 138);
    M8((c4+12)) = 0;
    M32((s31+3128)) = s30;
}

void fn_80170A5C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3128));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3128)) = 0;
}

void fn_80170B14(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0BC8;
    M8((s29+12)) = 1;
    v5 = lbl_805E0BCC;
    v6 = M32((s31+3132));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_80170BB4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3132), (u32)lbl_804ACD00, 0);
}

void fn_80170C00(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+3132));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80170B14, 1);
    v5 = M32((s31+3132));
    v6 = lbl_805E0BC8;
    v7 = M32(v5);
    v8 = lbl_805E0BCC;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 139);
    M8((c4+12)) = 0;
    M32((s31+3136)) = s30;
}

void fn_80170CA0(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3136));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3136)) = 0;
}

void fn_80170D58(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0BD0;
    M8((s29+12)) = 1;
    v5 = lbl_805E0BD4;
    v6 = M32((s31+3140));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_80170DF8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3140), (u32)lbl_804ACD28, 0);
}

void fn_80170E44(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+3140));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 2, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80170D58, 1);
    v5 = M32((s31+3140));
    v6 = lbl_805E0BD0;
    v7 = M32(v5);
    v8 = lbl_805E0BD4;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 140);
    M8((c4+12)) = 0;
    M32((s31+3144)) = s30;
}

void fn_80170EE4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3144));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3144)) = 0;
}

void fn_80170F28(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3152));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+28+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80170F94(u32 p3) {
    u32 h1;
    u32 s31;
    u32 s30;
    u32 s29;
    s29 = p3;
    h1 = M32((p3+40));
    fn_8040A64C(h1);
    s30 = M32((s29+44));
    s31 = 0;
    s29 = s30;
    do {
        fn_80053F34(M32((12+s29)), 0, (s30+28));
        s30 = (s30+12);
        s29 = (s29+4);
        s31 = (1+s31);
    } while ((s32)s31 < (s32)4);
}

void fn_80171004(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3148), (u32)lbl_804ACD50, 0);
}

void fn_80171158(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3152));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3152)) = 0;
}

void fn_801716E8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3160+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+64));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80171754(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3160+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+76));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_801717C0(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3160+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+40));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8017182C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3160+(((s8)s30)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+52));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80171AAC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3156), (u32)lbl_804ACD94, 0);
}

void fn_80171DD4(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3160));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3160)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80171E40(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3180+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80171F54(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3176), (u32)lbl_804ACDB8, 0);
}

void fn_80172198(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3180));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3180)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80172204(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3216+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8017224C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3200+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80172294(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3216+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_801724B8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3196), (u32)lbl_804ACDD8, 0);
}

void fn_801728C8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3200));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3200)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)8);
}

void fn_80172934(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    u32 v8;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3236));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0C08;
    v4 = M32((s31+20));
    fn_80409274(v4, v3);
    v5 = M32((s31+20));
    v6 = lbl_805E0C0C;
    v7 = M32((v5+124));
    HSD_AObjSetRate(v7, v6);
    v8 = M32((s31+20));
    fn_8040A1A0(v8);
}

void fn_801729E0(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80172A04(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3232), (u32)lbl_804ACDF8, 0);
}

void fn_80172A50(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 c4;
    u32 c5;
    u32 c6;
    s30 = fn_801311E0();
    v1 = M32((s30+3232));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 2, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_801729E0, 1);
    v5 = lbl_805E0C0C;
    v6 = M32((s30+3232));
    v7 = M32(v6);
    fn_80138B10(s31, 0, v7, v5, v5);
    c4 = fn_80138A00(s29, 145);
    s31 = c4;
    M8((c4+12)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    v8 = lbl_805E0C10;
    v9 = M32((s31+20));
    v10 = M32((v9+124));
    HSD_AObjSetRate(v10, v8);
    M32((s30+3236)) = s29;
}

void fn_80172B24(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    float v5;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 c4;
    u32 c5;
    u32 c6;
    s30 = fn_801311E0();
    v1 = M32((s30+3232));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_80138934(v3, 2, 0);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_801729E0, 1);
    v5 = lbl_805E0C0C;
    v6 = M32((s30+3232));
    v7 = M32(v6);
    fn_80138B10(s31, 1, v7, v5, v5);
    c4 = fn_80138A00(s29, 145);
    s31 = c4;
    M8((c4+12)) = 0;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    v8 = lbl_805E0C10;
    v9 = M32((s31+20));
    v10 = M32((v9+124));
    HSD_AObjSetRate(v10, v8);
    M32((s30+3236)) = s29;
}

void fn_80172BF8(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3236));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3236)) = 0;
}

void fn_80172C3C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3244));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+92+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80172CA8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3244));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+44+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80172DBC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3240), (u32)lbl_804ACE18, 0);
}

void fn_80172F68(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3244));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3244)) = 0;
}

void fn_80173118(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3248), (u32)lbl_804ACE38, 0);
}

void fn_80173328(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3252));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3252)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801735D4(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3272));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+116)) = 1;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8017360C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3272));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = lbl_805E0C30;
    M8((v2+12)) = s31;
    v4 = M32((v2+40));
    fn_80138C1C(v4, ((s8)s31), v3);
}

#pragma push
#pragma #pragma opt_strength_reduction off
#pragma peephole off
void fn_801736E0(void) {
    u32 h8;
    s32 h7;
    u32 h3;
    s32 h6;
    u32 h4;
    u32 h9;
    u32 h1;
    s32 h5;
    u32 h2;
    h5 = M32((fn_801311E0()+3272));
    if (h5 == (u32)0) {
    return;
    }
    h9 = M32((h5+44));
    h1 = h9;
    switch ((s32)((s8)M8((h1+116)))) {
    case 0:
        M8((112+h1)) = 1;
        M16((h1+114)) = 128;
        fn_80409274(M32((16+h1)), lbl_805E0C30);
        fn_80409274(M32((32+h1)), lbl_805E0C30);
        h8 = M32((h1+48));
        fn_80409250(h8, lbl_805E0C30);
        h4 = M32((M32((h1+16))+124));
        HSD_AObjSetRate(h4, lbl_805E0C28);
        HSD_AObjSetRate(M32((M32((32+h1))+124)), lbl_805E0C28);
        fn_800550BC(M32((48+h1)), ((1<<16)-1), lbl_805E0C28);
        h3 = M32((h1+16));
        h7 = h3;
        fn_8040A1A0(h7);
        fn_8040A1A0(M32((h1+32)));
        h2 = M32((48+h1));
        fn_8040A64C(h2);
        fn_8017690C(0);
        fn_801778B0(0);
        fn_80172294(0);
        fn_80144A1C(0);
        h6 = M32((h1+44));
        fn_8040BE00(h6, 16);
        fn_80146A90(0);
        break;
    case 1:
        M8((112+h1)) = 1;
        M16((114+h1)) = 17;
    }
}
#pragma pop

void fn_80173800(void) {
    u32 v1;
    u32 s31;
    u32 v3;
    u32 v5;
    u32 v6;
    float v7;
    u32 v8;
    float v9;
    float v11;
    u32 v12;
    u32 v13;
    float v14;
    u32 v15;
    u32 v16;
    float v17;
    u32 v18;
    u32 v19;
    u32 v20;
    u32 v21;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3272));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = M8((s31+116));
    switch ((s32)((s8)v3)) {
    case 0:
        M8((s31+112)) = 2;
        M16((s31+114)) = 128;
        v5 = M32((s31+16));
        fn_80409274(v5, lbl_805E0C30);
        v6 = M32((s31+32));
        v7 = lbl_805E0C30;
        fn_80409274(v6, v7);
        v8 = M32((s31+48));
        v9 = lbl_805E0C30;
        fn_80409250(v8, v9);
        v11 = lbl_805E0C28;
        v12 = M32((M32((s31+16))+124));
        HSD_AObjSetRate(v12, v11);
        v13 = M32((s31+32));
        v14 = lbl_805E0C28;
        v15 = M32((v13+124));
        HSD_AObjSetRate(v15, v14);
        v16 = M32((s31+48));
        v17 = lbl_805E0C28;
        fn_800550BC(v16, ((1<<16)-1), v17);
        v18 = M32((s31+16));
        fn_8040A1A0(v18);
        v19 = M32((s31+32));
        fn_8040A1A0(v19);
        v20 = M32((s31+48));
        fn_8040A64C(v20);
        fn_8017690C(0);
        fn_801778B0(0);
        fn_80172294(0);
        fn_80144A1C(0);
        v21 = M32((s31+44));
        fn_8040BE00(v21, 16);
        fn_80146A90(0);
        break;
    case 1:
        fn_801774A0(0);
    }
}

void fn_80173AF4(void) {
    u32 h6;
    u32 h5;
    s32 h4;
    float v9;
    u32 v3;
    u32 v21;
    u32 v20;
    u32 v19;
    u32 v8;
    u32 h1;
    u32 v15;
    float v7;
    u32 v13;
    float v14;
    u32 h3;
    u32 v1;
    u32 s31;
    u32 c0;
    u32 h2;
    u32 v18;
    float v11;
    u32 v12;
    u32 v16;
    float v17;
    u32 v6;
    u32 v5;
    c0 = fn_801311E0();
    v1 = M32((c0+3272));
    if (v1 == 0) {
    return;
    }
    h3 = M32((v1+44));
    s31 = h3;
    v3 = M8((s31+116));
    switch ((s32)((s8)v3)) {
    case 0:
        M8((112+s31)) = 3;
        M16((114+s31)) = 10;
        v5 = M32((s31+16));
        fn_80409274(v5, lbl_805E0C34);
        v6 = M32((s31+32));
        v7 = lbl_805E0C34;
        fn_80409274(v6, v7);
        h4 = M32((s31+48));
        v8 = h4;
        v9 = lbl_805E0C34;
        fn_80409250(v8, v9);
        h1 = M32((M32((s31+16))+124));
        v11 = lbl_805E0C28;
        v12 = h1;
        HSD_AObjSetRate(v12, v11);
        v13 = M32((32+s31));
        v14 = lbl_805E0C28;
        v15 = M32((v13+124));
        HSD_AObjSetRate(v15, v14);
        h2 = M32((s31+48));
        v16 = h2;
        v17 = lbl_805E0C28;
        fn_800550BC(v16, ((1<<16)-1), v17);
        h6 = M32((s31+16));
        h5 = h6;
        v18 = h5;
        fn_8040A1A0(v18);
        v19 = M32((s31+32));
        fn_8040A1A0(v19);
        v20 = M32((s31+48));
        fn_8040A64C(v20);
        fn_8017697C(0);
        fn_801778B0(0);
        fn_80172294(0);
        fn_80144A1C(0);
        v21 = M32((s31+44));
        fn_8040BE00(v21, 16);
        fn_80146A90(0);
        break;
    case 1:
        fn_80177508(0);
    }
}

void fn_80173C0C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3272));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+120));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80173C60(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3272));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+64));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80173CB4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3272));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)((v2+76));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80174014(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3268), (u32)lbl_804ACE84, 0);
}

void fn_80174228(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3272));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3272)) = 0;
}

void fn_801745A8(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3280));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+253)) = 8;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_801745E0(void) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3280));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    s31 = 0;
    M8((v2+253)) = 0;
    do {
        fn_801748CC(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)2);
}

void fn_80174688(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3280));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = lbl_805E0C40;
    M8(((u32)v2+13+(((s8)s30)*120))) = s31;
    v4 = M32(((u32)v2+40+(((s8)s30)*120)));
    fn_80138C1C(v4, ((s8)s31), v3);
}

void fn_80174C0C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3280));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+120+(((s8)s30)*120)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80174C78(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3280));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+64+(((s8)s30)*120)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80174CE4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3280));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+76+(((s8)s30)*120)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80175154(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3276), (u32)lbl_804ACECC, 0);
}

void fn_8017541C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3280));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3280)) = 0;
}

void fn_8017579C(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    M8((v2+493)) = 22;
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_801757D4(void) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    s31 = 0;
    M8((v2+493)) = 0;
    do {
        fn_80175B14(((s8)s31));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)4);
}

void fn_801758CC(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = lbl_805E0C50;
    M8(((u32)v2+12+(((s8)s30)*120))) = s31;
    v4 = M32(((u32)v2+40+(((s8)s30)*120)));
    fn_80138C1C(v4, ((s8)s31), v3);
}

void fn_80175E70(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+120+(((s8)s30)*120)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80175EDC(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+64+(((s8)s30)*120)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80175F48(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+3288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+76+(((s8)s30)*120)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_8017645C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3284), (u32)lbl_804ACF14, 0);
}

void fn_80176854(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3288));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3288)) = 0;
}

void fn_80176ADC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3292), (u32)lbl_804ACF38, 0);
}

void fn_80176C84(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3296));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3296)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80176E40(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3312), (u32)lbl_804ACF58, 0);
}

void fn_80177050(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3316));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3316)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801770BC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3336+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    v3 = lbl_805E0C68;
    fn_80138BA4(v2, 30, v3);
}

void fn_80177244(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3332), (u32)lbl_804ACF78, 0);
}

void fn_801773E0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3336));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3336)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_8017744C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3356+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    v3 = lbl_805E0C78;
    fn_80138BA4(v2, 50, v3);
}

void fn_80177508(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3356+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8017763C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3352), (u32)lbl_804ACF98, 0);
}

void fn_801777FC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3356));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3356)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80177868(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3376+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_801778B0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3376+(((s8)s31)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80177A9C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013127C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3372), (u32)lbl_804ACFC0, 0);
}

void fn_80177D6C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3376));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3376)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_80177DD8(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 c2;
    s29 = p3;
    s31 = fn_801311E0();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M8((s29+12));
    if ((s32)((s8)v3) != (s32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
    return;
    }
    v4 = lbl_805E0C98;
    M8((s29+12)) = 1;
    v5 = lbl_805E0C9C;
    v6 = M32((s31+3396));
    v7 = M32(v6);
    fn_80138B10(s30, 1, v7, v4, v5);
    fn_800550F4(s30, ((1<<16)-1));
}

void fn_80177E78(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3396), (u32)lbl_804ACFE8, 0);
}

void fn_80177EC4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3396), (u32)lbl_804AD004, 0);
}

void fn_80177F10(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3396), (u32)lbl_804AD024, 0);
}

void fn_80177F5C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+3396));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80177DD8, 1);
    v5 = M32((s31+3396));
    v6 = lbl_805E0C98;
    v7 = M32(v5);
    v8 = lbl_805E0C9C;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 162);
    M8((c4+12)) = 0;
    M32((s31+3400)) = s30;
}

void fn_80177FFC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3400));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3400)) = 0;
}

void fn_80178040(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    float v6;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3408));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((c0+3404));
    v3 = M32((v1+40));
    v4 = M32(v2);
    v5 = lbl_805E0CA0;
    v6 = lbl_805E0CA4;
    fn_80138B10(v3, 1, v4, v1, v5, v6);
}

void fn_80178088(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    float v6;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3408));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((c0+3404));
    v3 = M32((v1+40));
    v4 = M32(v2);
    v5 = lbl_805E0CA0;
    v6 = lbl_805E0CA4;
    fn_80138B10(v3, 2, v4, v1, v5, v6);
}

void fn_801780D0(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    s31 = M32((p3+44));
    v2 = M32((p3+40));
    fn_8040A64C(v2);
    v3 = M8((s31+12));
    if ((s32)((s8)v3) <= (s32)0) {
    return;
    }
    M8((s31+12)) = (v3-1);
    if ((s32)((s8)(v3-1)) > (s32)0) {
    return;
    }
    fn_801466D0((v3-1));
}

void fn_80178120(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3404), (u32)lbl_804AD048, 0);
}

void fn_8017816C(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    s31 = fn_801311E0();
    v1 = M32((s31+3404));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_80138934(v3, 1, 0);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801780D0, 1);
    v5 = M32((s31+3404));
    v6 = lbl_805E0CA0;
    v7 = M32(v5);
    v8 = lbl_805E0CA4;
    fn_80138B10(s29, 0, v7, v6, v8);
    c4 = fn_80138A00(s30, 163);
    M8((c4+12)) = 5;
    M32((s31+3408)) = s30;
}

void fn_8017820C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3408));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3408)) = 0;
}

void fn_80178250(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+3416+(((s8)s29)<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    *(S12*)(s31) = *(S12*)(((u32)v2+32+(((s8)s30)*12)));
    if ((u32)v1 != (u32)0) {
    return;
    }
}

void fn_80178860(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3412), (u32)lbl_804AD068, 0);
}

void fn_80178AB0(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3416));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3416)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)2);
}

void fn_80178D64(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3424), (u32)lbl_804AD088, 0);
}

void fn_80179190(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3468), (u32)lbl_804AD0A8, 0);
}

void fn_80179324(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 c0;
    s31 = 0;
    s29 = 0;
    do {
        c0 = fn_801311E0();
        s30 = (c0+(((s8)s29)<<2));
        v1 = M32((s30+3472));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+3472)) = s31;
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)2);
}

void fn_80179618(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3480), (u32)lbl_804AD0C8, 0);
}

void fn_80179D64(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3524), (u32)lbl_804AD0E8, 0);
}

void fn_8017A4AC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3728), (u32)lbl_804AD110, 0);
}

void fn_8017A798(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3732));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3732)) = 0;
}

void fn_8017AAB0(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3736), (u32)lbl_804AD130, 0);
}

void fn_8017AC4C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3740));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3740)) = 0;
}

void fn_8017AC90(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3748));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((v2+12));
    fn_8040C174(v3, 16);
}

void fn_8017ACCC(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3748));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((v2+12));
    fn_8040BE00(v3, 16);
}

void fn_8017AD08(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3748));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((v2+16));
    fn_8040C174(v3, 16);
}

void fn_8017AD44(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3748));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((v2+16));
    fn_8040BE00(v3, 16);
}

void fn_8017AF78(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3748));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8017AFA8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3748));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8017B140(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_801311F4();
    v1 = M32(c1);
    fn_80059520(v1, (s31+3744), (u32)lbl_804AD158, 0);
}

void fn_8017B388(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+3748));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+3748)) = 0;
}

void fn_8017B3CC(void) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    c0 = fn_801311E0();
    s31 = (c0+3756);
    c1 = fn_80131284();
    v1 = M32(c1);
    fn_80059520(v1, s31, (u32)lbl_804AD178, (s31+4), (u32)lbl_804AD194, 0);
}

void fn_8017B424(u32 p3) {
    u32 s29;
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    float v6;
    u32 v7;
    u32 v8;
    u32 c2;
    s29 = p3;
    s31 = fn_8000CDBC();
    s30 = M32((s29+40));
    v2 = M32((s29+44));
    s29 = v2;
    fn_8040A64C(s30);
    v3 = M16((s29+16));
    if ((u32)v3 != (u32)0) {
    return;
    }
    c2 = fn_800547E0(s30);
    if ((s32)c2 != (s32)0) {
        v4 = M8(s31);
        if ((u32)v4 < (u32)3) {
        return;
        }
    }
    v5 = lbl_805E0D08;
    M16((s29+16)) = 1;
    v6 = lbl_805E0D0C;
    v7 = M32((s29+12));
    v8 = M32(v7);
    fn_80138B10(s30, 1, v8, v5, v6);
}

void fn_8017B5F8(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = fn_801311E0();
    v1 = M32((s31+3764));
    if ((u32)v1 != (u32)0) {
        func_80428F64(v1);
        M32((s31+3764)) = 0;
    }
    v2 = M32((s31+3768));
    if ((u32)v2 == (u32)0) {
    return;
    }
    func_80428F64(v2);
    M32((s31+3768)) = 0;
}

void fn_8017B654(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    s30 = p4;
    c0 = fn_801311E0();
    v1 = M32((c0+4408));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32(((u32)v2+12+(((s8)s31)<<2)));
    s31 = v3;
    if ((u32)s31 == (u32)0) {
        __assert((u32)&lbl_805D6DD0, 996, (u32)&lbl_805D6DD8);
    }
    if ((u32)s30 == (u32)0) {
        __assert((u32)&lbl_805D6DD0, 997, (u32)lbl_804AD1B0);
    }
    *(S12*)(s30) = *(S12*)((s31+56));
}

#pragma push
#pragma optimization_level 2
void fn_8017B778(u32 p3) {
    u32 s31;
    u32 v1;
    s32 v2;
    u32 loc8[4];
    u32 h3;
    u32 c0;
    u32 v5;
    s32 c2;
    u32 h2;
    u32 h1;
    u32 v7;
    c0 = fn_801311E0();
    v1 = M32((c0+4408));
    if ((u32)0 == (s32)v1) {
    return;
    }
    v2 = M32((44+v1));
    s31 = M32((v2+20));
    if (s31 == 0) {
        __assert((u32)&lbl_805D6DD0, 996, (u32)&lbl_805D6DD8);
    }
    h3 = M32((s31+56));
    h1 = h3;
    v5 = M32((s31+60));
    M32(((u32)loc8)) = h1;
    M32(((u32)loc8+4)) = v5;
    M32(((u32)loc8+8)) = M32((s31+64));
    c2 = fn_801311E0(h1);
    v7 = M32((c2+8));
    if (v7 != 0) {
        h2 = M32((v7+40));
        fn_800644AC(h2, ((s32)loc8), p3, 0);
        return;
    }
    __assert((u32)lbl_804AD1BC, 62, (u32)&lbl_805D6DE0);
}
#pragma pop

void fn_8017B82C(u32 p3) {
    u32 v5;
    u32 v7;
    u32 s31;
    u32 loc8[4];
    u32 v1;
    u32 h1;
    v1 = M32((fn_801311E0()+4408));
    if (0 == (u32)v1) {
    return;
    }
    s31 = M32((M32((44+v1))+24));
    if (s31 == (u32)0) {
        __assert((u32)&lbl_805D6DD0, 996, (u32)&lbl_805D6DD8);
    }
    h1 = M32((s31+56));
    v5 = M32((s31+60));
    M32(((u32)loc8)) = h1;
    M32(((u32)loc8+4)) = v5;
    M32(((u32)loc8+8)) = M32((64+s31));
    v7 = M32((fn_801311E0(h1)+8));
    if (v7 != (u32)0) {
        fn_800644AC(M32((40+v7)), ((s32)loc8), p3, 0);
        return;
    }
    __assert((s32)lbl_804AD1BC, 62, (u32)&lbl_805D6DE0);
}

void fn_8017BCE4(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8017BD08(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80138E24();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4404), (u32)lbl_804AD1CC, 0);
}

void fn_8017BD54(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    u32 c9;
    u32 c10;
    u32 c11;
    u32 c12;
    u32 c13;
    u32 c14;
    s30 = fn_801311E0();
    v1 = M32((s30+4404));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_8017BCE4, 1);
    v5 = M32((s30+4404));
    v6 = lbl_805E0D10;
    v7 = M32(v5);
    v8 = lbl_805E0D14;
    fn_801389D8(s31, v7, v6, v8);
    c4 = fn_80138A00(s29, 186);
    s31 = c4;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+12)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 3);
    M32((s31+20)) = c7;
    c8 = fn_80055AF0(s29, 4);
    M32((s31+24)) = c8;
    c9 = fn_80055AF0(s29, 5);
    M32((s31+28)) = c9;
    c10 = fn_80055AF0(s29, 6);
    M32((s31+32)) = c10;
    c11 = fn_80055AF0(s29, 7);
    M32((s31+36)) = c11;
    c12 = fn_80055AF0(s29, 8);
    M32((s31+40)) = c12;
    c13 = fn_80055AF0(s29, 9);
    M32((s31+44)) = c13;
    c14 = fn_80055AF0(s29, 10);
    M32((s31+48)) = c14;
    M32((s30+4408)) = s29;
}

void fn_8017BE84(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4408));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4408)) = 0;
}

void fn_8017BEC8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+4416+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    s31 = v2;
    v3 = lbl_805E0D18;
    fn_80409250(s31, v3);
    fn_8040A1A0(s31);
}

void fn_8017BF20(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+4416+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+40));
    s31 = v2;
    v3 = lbl_805E0D1C;
    fn_80409250(s31, v3);
    fn_8040A1A0(s31);
}

void fn_8017C068(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+4416+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_8017C0AC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32(((u32)c0+4416+(s31<<2)));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8017C0F4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80138E24();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4412), (u32)lbl_804AD1F0, 0);
}

void fn_8017C1DC(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    s30 = (c0+4412);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)2);
}

void fn_8017C390(void) {
    fn_8044F800(0, (u32)lbl_804AD218, (u32)lbl_804AD228);
}

void fn_8017C3C4(void) {
    u32 s31;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8044F674(0, 0, 41, 17, 0, 3, 0, 5);
    M8((s31+40)) = c1;
}

void fn_8017C5A0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+44));
    fn_8044F8C8(v1, ((s8)s31));
}

void fn_8017C5D8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+48));
    fn_8044F8C8(v1, ((s8)s31));
}

void fn_8017C610(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+52));
    fn_8044F8C8(v1, ((s8)s31));
}

void fn_8017C648(void) {
    fn_8044F800(0, (u32)lbl_804AD238, (u32)&lbl_805D6DF8);
}

void fn_8017C678(void) {
    u32 s31;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8044F674(0, 0, 41, 17, 0, 3, 0, 5);
    M8((s31+40)) = c1;
}

void fn_8017C990(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+48));
    fn_8044F8C8(v1, ((s8)s31));
}

void fn_8017C9C8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+52));
    fn_8044F8C8(v1, ((s8)s31));
}

void fn_8017CA00(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+56));
    fn_8044F8C8(v1, ((s8)s31));
}

void fn_8017CA38(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801311E0();
    v1 = M32((c0+60));
    fn_8044F8C8(v1, ((s8)s31));
}

void fn_8017CA70(void) {
    fn_8017C244();
}

void fn_8017CA90(void) {
    fn_8044F800(0, (u32)lbl_804AD244, (u32)lbl_804AD258);
}

void fn_8017CC88() {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = fn_801311E0();
    v1 = M32((s31+44));
    if ((u32)v1 != (u32)0) {
        fn_8044F350(v1);
        M32((s31+44)) = 0;
    }
    v2 = M32((s31+48));
    if ((u32)v2 != (u32)0) {
        fn_8044F350(v2);
        M32((s31+48)) = 0;
    }
    v3 = M32((s31+52));
    if ((u32)v3 == (u32)0) {
    return;
    }
    fn_8044F350(v3);
    M32((s31+52)) = 0;
}

u32 fn_8017CF14(void) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+3792));
    if ((u32)v1 != (u32)0) {
        v2 = M32((v1+44));
        s31 = v2;
    } else {
        s31 = 0;
    }
    if ((u32)s31 == (u32)0) {
        OSReport((u32)lbl_804AD2F8);
        __assert((u32)lbl_804AD318, 192, (u32)&lbl_805D6E00);
    }
    v3 = M8((s31+21));
    return v3;
}

void fn_8017CF84(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_8017CFA8(u32 p3) {
    u32 v1;
    u32 s31;
    u32 v2;
    u32 c1;
    u32 c2;
    v1 = M32((p3+40));
    s31 = v1;
    fn_8040A64C(s31);
    c1 = fn_800547E0(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801311E0();
    s31 = c2;
    v2 = M32((c2+4380));
    func_80428F64(v2);
    M32((s31+4380)) = 0;
}

#pragma push
#pragma opt_propagation off
void fn_801820B4(u32 p3) {
    u32 h9;
    u32 h3;
    s32 v4;
    s32 v6;
    u32 v11;
    s32 s31;
    u32 s30;
    u32 h8;
    s32 h1;
    u32 c0;
    u32 h2;
    s32 v14;
    u32 v7;
    u32 h4;
    c0 = fn_801311E0();
    h4 = M32((c0+4364));
    h1 = M32((44+p3));
    s30 = M32((h4+44));
    v4 = M32((fn_801311E0(h4)+3792));
    if ((u32)v4 != 0) {
        h3 = M32((v4+44));
        s31 = h3;
    } else {
        s31 = 0;
    }
    v6 = M8((20+h1));
    v7 = M8((16+s30));
    if ((s32)((s8)v6) == (s32)((s8)v7)) {
    return;
    }
    M8((h1+20)) = v7;
    h8 = M8((h1+20));
    if ((s32)((s8)h8) < (s32)0) {
        fn_8040BE00(M32((p3+40)), 16);
        return;
    }
    if ((fn_80049D98(M8((20+s31)), h8)&0xff) != 0) {
        v11 = M32((16+h1));
        fn_8040C0D8(v11, 16);
    } else {
        h9 = M32((p3+40));
        fn_8040BE00(h9, 16);
    }
    fn_8040C0D8(M32((12+h1)), 16);
    v14 = M8((20+h1));
    h2 = M8((20+s31));
    fn_80138C1C(M32((12+h1)), (fn_80049D10(h2, v14)&0xff), lbl_805E0D90);
}
#pragma pop

void fn_80182E68(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80183004(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040BE00(v1, 16);
}

void fn_8018302C(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040C174(v1, 16);
}

void fn_80183054(void) {
    fn_8017CAC4();
}

void fn_80183074(void) {
    fn_8017CC88();
}

void fn_80183094(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4428));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0E58;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_801830E0(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4428));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0E5C;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_8018312C(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 ph0;
    u32 c0;
    u32 c2;
    c0 = fn_801311E0();
    v1 = M32((c0+4428));
    ph0 = v1;
    if ((u32)v1 != (u32)0) {
        s31 = M32((v1+40));
        v3 = lbl_805E0E60;
        fn_80409250(s31, v3);
        c2 = fn_8040A64C(s31);
        ph0 = c2;
    }
    fn_8017CC88(ph0);
    fn_8017CCFC();
}

void fn_80183180(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 ph0;
    u32 c0;
    u32 c2;
    c0 = fn_801311E0();
    v1 = M32((c0+4428));
    ph0 = v1;
    if ((u32)v1 != (u32)0) {
        s31 = M32((v1+40));
        v3 = lbl_805E0E64;
        fn_80409250(s31, v3);
        c2 = fn_8040A64C(s31);
        ph0 = c2;
    }
    fn_8017CC88(ph0);
    fn_8017CE08();
}

void fn_801831D8(void) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 s30;
    float v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    s31 = fn_801311E0();
    v1 = M32((s31+4424));
    v2 = M32(v1);
    v3 = M32(v2);
    v4 = M32(v3);
    s30 = fn_801388A8(v4);
    v5 = M32((s31+4424));
    v6 = lbl_805E0E58;
    v7 = M32(v5);
    v8 = M32((s30+40));
    v9 = M32(v7);
    v10 = lbl_805E0E5C;
    fn_801389D8(v8, v9, v6, v10);
    fn_80138A00(s30, 200);
    M32((s31+4428)) = s30;
}

void fn_80183250(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4428));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4428)) = 0;
}

void fn_80183294(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4440));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_801832C4(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4440));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_801832F4(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80183318(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4436), (u32)lbl_804AD670, 0);
}

void fn_80183364(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+4436));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801832F4, 1);
    v5 = M32((s31+4436));
    v6 = lbl_805E0E68;
    v7 = M32(v5);
    v8 = lbl_805E0E6C;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 186);
    M32((s31+4440)) = s30;
}

void fn_801833F0(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4440));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4440)) = 0;
}

void fn_80183434(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4448));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((v2+24));
    fn_8040C174(v3, 16);
}

void fn_80183470(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4448));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((v2+24));
    fn_8040BE00(v3, 16);
}

#pragma push
#pragma opt_dead_code off
void fn_80183694(u32 p3) {
    u32 h1;
    u32 v5;
    s32 h4;
    u32 v7;
    u32 loc8[4];
    u32 h2;
    u32 c2;
    u32 v2;
    u32 h5;
    h4 = M32((fn_801311E0()+4448));
    if ((u32)h4 == 0) {
    return;
    }
    v2 = M32((h4+44));
    h2 = M32((20+v2));
    if (h2 == 0) {
        __assert((u32)&lbl_805D6E20, 996, (u32)&lbl_805D6E28);
    }
    h5 = M32((h2+56));
    v5 = M32((60+h2));
    M32((loc8)) = h5;
    M32(((s32)loc8+4)) = v5;
    M32(((s32)loc8+8)) = M32((64+h2));
    c2 = fn_801311E0(h5);
    h1 = M32((c2+8));
    v7 = h1;
    if ((u32)v7 != (s32)0) {
        fn_800644AC(M32((v7+40)), ((u32)loc8), p3, 0);
        return;
    }
    __assert((u32)lbl_804AD688, 117, (u32)&lbl_805D6E30);
}
#pragma pop

void fn_80183748(void) {
    u32 v1;
    float v2;
    u32 s31;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4448));
    v2 = lbl_805E0E70;
    s31 = M32((v1+40));
    fn_80409250(s31, v2);
    fn_8040A64C(s31);
}

void fn_8018378C(void) {
    u32 v1;
    float v2;
    u32 s31;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4448));
    v2 = lbl_805E0E74;
    s31 = M32((v1+40));
    fn_80409250(s31, v2);
    fn_8040A64C(s31);
}

void fn_801837D0(void) {
    u32 v1;
    float v2;
    u32 s31;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4448));
    v2 = lbl_805E0E78;
    s31 = M32((v1+40));
    fn_80409250(s31, v2);
    fn_8040A64C(s31);
}

void fn_80183814(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4448));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80183844(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4448));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80183878(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4444), (u32)lbl_804AD698, 0);
}

void fn_801838C4(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    s30 = fn_801311E0();
    v1 = M32((s30+4444));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80183874, 1);
    v5 = M32((s30+4444));
    v6 = lbl_805E0E70;
    v7 = M32(v5);
    v8 = lbl_805E0E74;
    fn_801389D8(s31, v7, v6, v8);
    c4 = fn_80138A00(s29, 186);
    s31 = c4;
    c5 = fn_80055AF0(s29, 8);
    M32((s31+12)) = c5;
    c6 = fn_80055AF0(s29, 9);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 10);
    M32((s31+20)) = c7;
    c8 = fn_80055AF0(s29, 4);
    M32((s31+24)) = c8;
    M32((s30+4448)) = s29;
}

void fn_80183994(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4448));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4448)) = 0;
}

#pragma push
#pragma opt_loop_invariants off
void fn_80183B0C(u32 p3) {
    u32 loc8[4];
    u32 h11;
    u32 h10;
    u32 v7;
    s32 h1;
    u32 h9;
    s32 h2;
    s32 h7;
    s32 h3;
    u32 c2;
    u32 v1;
    u32 h5;
    v1 = M32((fn_801311E0()+4456));
    if (!v1) {
    return;
    }
    h9 = M32((16+M32((v1+44))));
    if (0 == h9) {
        __assert((u32)&lbl_805D6E38, 996, (u32)&lbl_805D6E40);
    }
    h1 = M32((h9+56));
    h2 = M32((60+h9));
    M32((loc8)) = h1;
    M32(((s32)loc8+4)) = h2;
    h5 = M32((h9+64));
    h7 = h5;
    h11 = h7;
    h10 = h11;
    M32(((s32)loc8+8)) = h10;
    c2 = fn_801311E0(h1);
    v7 = M32((8+c2));
    if ((s32)0 != (u32)v7) {
        h3 = M32((40+v7));
        fn_800644AC(h3, ((u32)loc8), p3, 0);
        return;
    }
    __assert((u32)lbl_804AD6B8, 79, (u32)&lbl_805D6E48);
}
#pragma pop

#pragma push
#pragma #pragma #pragma opt_loop_invariants off
#pragma #pragma opt_propagation off
#pragma opt_common_subs off
void fn_80183DA8(u32 p3) {
    u32 v4;
    u32 v5;
    u32 c0;
    u32 h6;
    s32 v7;
    u32 h1;
    s32 h2;
    u32 h4;
    u32 loc8[4];
    u32 v6;
    u32 c2;
    u32 v8;
    u32 v1;
    u32 h7;
    u32 s31;
    u32 h5;
    c0 = fn_801311E0();
    h7 = M32((c0+4456));
    v1 = h7;
    if ((u32)v1 == (u32)0) {
    return;
    }
    h1 = M32((44+v1));
    h5 = M32((28+h1));
    s31 = h5;
    if ((u32)s31 == (u32)0) {
        __assert((u32)&lbl_805D6E38, 996, (u32)&lbl_805D6E40);
    }
    h2 = M32((56+s31));
    v4 = h2;
    v5 = M32((60+s31));
    M32(((u32)loc8)) = v4;
    M32(((u32)loc8+4)) = v5;
    h4 = M32((s31+64));
    v6 = h4;
    M32(((u32)loc8+8)) = v6;
    c2 = fn_801311E0(v4);
    v7 = M32((8+c2));
    if ((u32)v7 != (u32)0) {
        h6 = M32((v7+40));
        v8 = h6;
        fn_800644AC(v8, ((u32)loc8), p3, 0);
        return;
    }
    __assert((u32)lbl_804AD6B8, 79, (u32)&lbl_805D6E48);
}
#pragma pop

void fn_80183F10(u32 p3) {
    u32 h8;
    u32 h7;
    u32 h6;
    u32 h5;
    u32 h1;
    u32 v4;
    u32 h2;
    u32 loc8[4];
    s32 h4;
    u32 v7;
    u32 s31;
    u32 h3;
    h2 = M32((4456+fn_801311E0()));
    if (h2 == 0) {
    return;
    }
    s31 = M32((M32((44+h2))+32));
    if ((u32)s31 == (u32)0) {
        __assert((u32)&lbl_805D6E38, 996, (u32)&lbl_805D6E40);
    }
    v4 = M32((56+s31));
    h4 = M32((60+s31));
    M32((loc8)) = v4;
    M32(((s32)loc8+4)) = h4;
    h3 = M32((s31+64));
    h8 = h3;
    h1 = h8;
    h7 = h1;
    h6 = h7;
    h5 = h6;
    M32(((s32)loc8+8)) = h5;
    v7 = M32((fn_801311E0(v4)+8));
    if (v7 != 0) {
        fn_800644AC(M32((40+v7)), ((u32)loc8), p3, 0);
        return;
    }
    __assert((s32)lbl_804AD6B8, 79, (u32)&lbl_805D6E48);
}

void fn_80183FC4(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E80;
    v4 = M32((s31+44));
    fn_80409250(v4, v3);
    v5 = M32((s31+44));
    fn_8040A64C(v5);
}

void fn_80184010(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E84;
    v4 = M32((s31+44));
    fn_80409250(v4, v3);
    v5 = M32((s31+44));
    fn_8040A64C(v5);
}

void fn_8018405C(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E88;
    v4 = M32((s31+44));
    fn_80409250(v4, v3);
    v5 = M32((s31+44));
    fn_8040A64C(v5);
}

void fn_801840A8(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E8C;
    v4 = M32((s31+44));
    fn_80409250(v4, v3);
    v5 = M32((s31+44));
    fn_8040A64C(v5);
}

void fn_801840F4(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E90;
    v4 = M32((s31+44));
    fn_80409250(v4, v3);
    v5 = M32((s31+44));
    fn_8040A64C(v5);
}

void fn_80184140(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E80;
    v4 = M32((s31+48));
    fn_80409250(v4, v3);
    v5 = M32((s31+48));
    fn_8040A64C(v5);
    fn_8017C9C8(3);
    fn_8017CA00(4);
}

void fn_8018419C(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E84;
    v4 = M32((s31+48));
    fn_80409250(v4, v3);
    v5 = M32((s31+48));
    fn_8040A64C(v5);
    fn_8017C9C8(3);
    fn_8017CA00(4);
}

void fn_801841F8(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E80;
    v4 = M32((s31+48));
    fn_80409250(v4, v3);
    v5 = M32((s31+48));
    fn_8040A64C(v5);
    fn_8017C9C8(5);
    fn_8017CA00(6);
}

void fn_80184254(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 v4;
    u32 v5;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    v3 = lbl_805E0E84;
    v4 = M32((s31+48));
    fn_80409250(v4, v3);
    v5 = M32((s31+48));
    fn_8040A64C(v5);
    fn_8017C9C8(5);
    fn_8017CA00(6);
}

void fn_801842B0(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((v1+44));
    v3 = M32((v2+48));
    fn_8040BE00(v3, 16);
}

void fn_801842EC(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    u32 c2;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
    c2 = fn_801311E0();
    v2 = M32((c2+4456));
    if ((u32)v2 == (u32)0) {
    return;
    }
    v3 = M32((v2+44));
    v4 = M32((v3+48));
    fn_8040C174(v4, 16);
}

void fn_8018433C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80184370(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4452), (u32)lbl_804AD6C8, 0);
}

void fn_801843BC(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    u32 c9;
    u32 c10;
    u32 c11;
    u32 c12;
    u32 c13;
    u32 c14;
    s30 = fn_801311E0();
    v1 = M32((s30+4452));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_8018436C, 1);
    v5 = M32((s30+4452));
    v6 = lbl_805E0E80;
    v7 = M32(v5);
    v8 = lbl_805E0E84;
    fn_801389D8(s31, v7, v6, v8);
    c4 = fn_80138A00(s29, 186);
    s31 = c4;
    c5 = fn_80055AF0(s29, 2);
    M32((s31+12)) = c5;
    c6 = fn_80055AF0(s29, 3);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 4);
    M32((s31+20)) = c7;
    c8 = fn_80055AF0(s29, 5);
    M32((s31+24)) = c8;
    c9 = fn_80055AF0(s29, 6);
    M32((s31+28)) = c9;
    c10 = fn_80055AF0(s29, 7);
    M32((s31+32)) = c10;
    c11 = fn_80055AF0(s29, 8);
    M32((s31+36)) = c11;
    c12 = fn_80055AF0(s29, 9);
    M32((s31+40)) = c12;
    c13 = fn_80055AF0(s29, 13);
    M32((s31+44)) = c13;
    c14 = fn_80055AF0(s29, 10);
    M32((s31+48)) = c14;
    M32((s30+4456)) = s29;
}

void fn_801844EC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4456));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4456)) = 0;
}

void fn_80184530(void) {
    u32 h1;
    u32 v1;
    s32 s31;
    u32 s30;
    u32 c0;
    u32 v5;
    float v4;
    c0 = fn_801311E0();
    v1 = M32((4464+c0));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    M32((s31+28)) = 0;
    v4 = lbl_805E0E9C;
    v5 = M32((c0+4460));
    s30 = M32((v1+40));
    h1 = M32((s31+28));
    fn_80138B10(s30, h1, M32(v5), lbl_805E0E98, v4);
    M32((s31+32)) = 0;
    fn_80409250(s30, lbl_805E0E98);
}

void fn_801845AC(void) {
    u32 v1;
    u32 s31;
    float v4;
    u32 v5;
    u32 s30;
    u32 v7;
    u32 v8;
    float v9;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4464));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+44));
    M32((s31+28)) = 1;
    v4 = lbl_805E0E9C;
    v5 = M32((c0+4460));
    s30 = M32((v1+40));
    v7 = M32((s31+28));
    v8 = M32(v5);
    fn_80138B10(s30, v7, v8, lbl_805E0E98, v4);
    v9 = lbl_805E0E98;
    M32((s31+32)) = 0;
    fn_80409250(s30, v9);
}

void fn_80184628(void) {
    u32 v1;
    u32 s31;
    float v4;
    u32 v5;
    u32 s30;
    u32 v7;
    u32 v8;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4464));
    if ((u32)v1 == (s32)0) {
    return;
    }
    s31 = M32((v1+44));
    M32((s31+28)) = 3;
    v4 = lbl_805E0E9C;
    v5 = M32((c0+4460));
    s30 = M32((v1+40));
    v7 = M32((s31+28));
    v8 = M32(v5);
    fn_80138B10(s30, v7, v8, lbl_805E0E98, v4);
    M32((s31+32)) = 0;
    fn_80409250(s30, lbl_805E0E98);
}

#pragma push
#pragma #pragma #pragma #pragma fp_contract on
#pragma #pragma opt_dead_code off
void fn_801846A4(void) {
    s32 s31;
    u32 h6;
    s32 h2;
    u32 h3;
    u32 c0;
    c0 = fn_801311E0();
    h3 = M32((c0+4464));
    if (h3 == 0) {
    return;
    }
    s31 = M32((44+h3));
    M32((28+s31)) = 5;
    h6 = M32((4460+c0));
    h2 = M32((h3+40));
    fn_80138B10(h2, M32((s31+28)), M32(h6), lbl_805E0E98, lbl_805E0E9C);
    M32((32+s31)) = 0;
    fn_80409250(h2, lbl_805E0E98);
}
#pragma pop

void fn_801847F8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4464));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80184828(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4464));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80184A70(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4460), (u32)lbl_804AD6E8, 0);
}

void fn_80184ABC(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    s30 = fn_801311E0();
    v1 = M32((s30+4460));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80184858, 1);
    v5 = M32((s30+4460));
    v6 = lbl_805E0E98;
    v7 = M32(v5);
    v8 = lbl_805E0E9C;
    fn_801389D8(s31, v7, v6, v8);
    c4 = fn_80138A00(s29, 186);
    s31 = c4;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+12)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 3);
    M32((s31+20)) = c7;
    c8 = fn_80055AF0(s29, 4);
    M32((s31+24)) = c8;
    M32((s31+28)) = 0;
    M32((s31+32)) = 0;
    M32((s30+4464)) = s29;
}

void fn_80184B98(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4464));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4464)) = 0;
}

void fn_80184BDC(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4472));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80184C0C(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4472));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80184C3C(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_80184C60(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4468), (u32)lbl_804AD708, 0);
}

void fn_80184CAC(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+4468));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80184C3C, 1);
    v5 = M32((s31+4468));
    v6 = lbl_805E0EA0;
    v7 = M32(v5);
    v8 = lbl_805E0EA4;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 186);
    M32((s31+4472)) = s30;
}

void fn_80184D38(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4472));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4472)) = 0;
}

void fn_80184D7C(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4480));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0EA8;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_80184DC8(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4480));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0EAC;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_80184E14(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4480));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0EB0;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_80184E60(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4480));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80184E90(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4480));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80184EC4(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4476), (u32)lbl_804AD728, 0);
}

void fn_80184F10(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+4476));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80184EC0, 1);
    v5 = M32((s31+4476));
    v6 = lbl_805E0EA8;
    v7 = M32(v5);
    v8 = lbl_805E0EAC;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 186);
    M32((s31+4480)) = s30;
}

void fn_80184F9C(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4480));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4480)) = 0;
}

void fn_80184FE0(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4488));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0EB8;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_8018502C(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4488));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0EBC;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_80185078(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4488));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_801850A8(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4488));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_801850DC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4484), (u32)lbl_804AD748, 0);
}

void fn_80185128(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+4484));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_801850D8, 1);
    v5 = M32((s31+4484));
    v6 = lbl_805E0EB8;
    v7 = M32(v5);
    v8 = lbl_805E0EBC;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 186);
    M32((s31+4488)) = s30;
}

void fn_801851B4(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4488));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4488)) = 0;
}

void fn_801851F8(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4496));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0EC0;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_80185244(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4496));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0EC4;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_80185290(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4496));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0EC8;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_801852DC(void) {
    u32 v1;
    u32 s31;
    float v3;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4496));
    if ((u32)v1 == (u32)0) {
    return;
    }
    s31 = M32((v1+40));
    v3 = lbl_805E0ECC;
    fn_80409250(s31, v3);
    fn_8040A64C(s31);
}

void fn_80185328(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4496));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80185358(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4496));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_8018538C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4492), (u32)lbl_804AD768, 0);
}

void fn_801853D8(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    s31 = fn_801311E0();
    v1 = M32((s31+4492));
    v2 = M32(v1);
    v3 = M32(v2);
    s30 = fn_801388A8(v3);
    s29 = M32((s30+40));
    HSD_GObj_AddProc(s30, (u32)fn_80185388, 1);
    v5 = M32((s31+4492));
    v6 = lbl_805E0EC0;
    v7 = M32(v5);
    v8 = lbl_805E0EC4;
    fn_801389D8(s29, v7, v6, v8);
    fn_80138A00(s30, 186);
    M32((s31+4496)) = s30;
}

void fn_80185464(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4496));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4496)) = 0;
}

void fn_80185624(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4504));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AB0(v1);
}

void fn_80185654(void) {
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    v1 = M32((c0+4504));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80138AC8(v1);
}

void fn_80185688(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8013909C();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4500), (u32)lbl_804AD788, 0);
}

void fn_801856D4(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 s29;
    u32 v5;
    float v6;
    u32 v7;
    float v8;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    s30 = fn_801311E0();
    v1 = M32((s30+4500));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    v4 = M32((s29+40));
    s31 = v4;
    HSD_GObj_AddProc(s29, (u32)fn_80185684, 1);
    v5 = M32((s30+4500));
    v6 = lbl_805E0ED8;
    v7 = M32(v5);
    v8 = lbl_805E0EDC;
    fn_801389D8(s31, v7, v6, v8);
    c4 = fn_80138A00(s29, 186);
    s31 = c4;
    c5 = fn_80055AF0(s29, 1);
    M32((s31+12)) = c5;
    c6 = fn_80055AF0(s29, 2);
    M32((s31+16)) = c6;
    c7 = fn_80055AF0(s29, 3);
    M32((s31+20)) = c7;
    M32((s30+4504)) = s29;
}

void fn_80185794(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4504));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4504)) = 0;
}

void fn_801857D8(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_8040A64C(v1);
}

void fn_801857FC(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80139238();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4512), (u32)lbl_804AD7A8, 0);
}

void fn_80185848(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s29;
    u32 s31;
    u32 c3;
    u32 c4;
    u32 c5;
    u32 c6;
    s30 = fn_801311E0();
    v1 = M32((s30+4512));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    s31 = fn_80138A00(s29, 195);
    c3 = fn_80055AF0(s29, 20);
    M32((s31+12)) = c3;
    c4 = fn_80055AF0(s29, 19);
    M32((s31+16)) = c4;
    c5 = fn_80055AF0(s29, 13);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 18);
    M32((s31+24)) = c6;
    HSD_GObj_AddProc(s29, (u32)fn_801857D8, 1);
    M32((s30+4516)) = s29;
}

void fn_801858FC(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4516));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4516)) = 0;
}

void fn_80185AF8(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80139238();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4520), (u32)lbl_804AD810, 0);
}

void fn_80185B44(void) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s29;
    u32 s31;
    u32 c3;
    u32 c4;
    u32 c5;
    u32 c6;
    u32 c7;
    u32 c8;
    u32 c9;
    u32 c10;
    u32 c11;
    u32 c12;
    s30 = fn_801311E0();
    v1 = M32((s30+4520));
    v2 = M32(v1);
    v3 = M32(v2);
    s29 = fn_801388A8(v3);
    s31 = fn_80138A00(s29, 196);
    c3 = fn_80055AF0(s29, 1);
    M32((s31+12)) = c3;
    c4 = fn_80055AF0(s29, 3);
    M32((s31+16)) = c4;
    c5 = fn_80055AF0(s29, 4);
    M32((s31+20)) = c5;
    c6 = fn_80055AF0(s29, 5);
    M32((s31+24)) = c6;
    c7 = fn_80055AF0(s29, 6);
    M32((s31+28)) = c7;
    c8 = fn_80055AF0(s29, 7);
    M32((s31+32)) = c8;
    c9 = fn_80055AF0(s29, 8);
    M32((s31+36)) = c9;
    c10 = fn_80055AF0(s29, 9);
    M32((s31+40)) = c10;
    c11 = fn_80055AF0(s29, 10);
    M32((s31+44)) = c11;
    c12 = fn_80055AF0(s29, 2);
    M32((s31+48)) = c12;
    M32((s30+4524)) = s29;
}

void fn_80185C44(void) {
    u32 s31;
    u32 v1;
    s31 = fn_801311E0();
    v1 = M32((s31+4524));
    if ((u32)v1 == (u32)0) {
    return;
    }
    func_80428F64(v1);
    M32((s31+4524)) = 0;
}

void fn_80185D94(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80139238();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4528), (u32)lbl_804AD888, 0);
}

void fn_80185DE0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+52));
    fn_8040A64C(v2);
}

void fn_80186070(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    s30 = (c0+4528);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)18);
}

void fn_8018669C(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80139238();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4604), (u32)lbl_804AD8D0, 0);
}

void fn_80186820(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    s30 = (c0+4604);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)18);
}

void fn_80186B50(void) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_80139238();
    v1 = M32(c1);
    fn_80059520(v1, (s31+4680), (u32)lbl_804AD908, 0);
}

void fn_80186CD4(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    s30 = (c0+4680);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            func_80428F64(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)18);
}

void fn_80186F50(void) {
    fn_8044F800(0, (u32)lbl_804AD94C, (u32)lbl_804AD95C);
}

void fn_80186F84(void) {
    u32 s31;
    u32 c1;
    s31 = fn_801311E0();
    c1 = fn_8044F674(0, 0, 41, 17, 0, 3, 0, 5);
    M8((s31+4756)) = c1;
}

void fn_80186FDC(void) {
    fn_801871EC();
    fn_801882A0();
}

void fn_801871EC(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    s30 = (c0+4756);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+4));
        if ((u32)v1 != (u32)0) {
            fn_8044F350(v1);
            M32((s30+4)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)9);
}

void fn_801882A0(void) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    c0 = fn_801311E0();
    s30 = (c0+4756);
    s29 = 0;
    s31 = 0;
    do {
        v1 = M32((s30+40));
        if ((u32)v1 != (u32)0) {
            fn_8044F350(v1);
            M32((s30+40)) = s31;
        }
        s29 = (s29+1);
        s30 = (s30+4);
    } while ((s32)s29 < (s32)18);
}

void fn_80188308(void) {
    lbl_805DD804 = 0;
}

void fn_801886C8(void) {
    u32 v1;
    v1 = lbl_805DD804;
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80077F50(v1);
}

void fn_801886F4(void) {
    u32 v1;
    v1 = lbl_805DD804;
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80077F88(v1);
}

void fn_80189B78(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p3;
    v1 = M32((p3+24));
    fn_80053F34(v1, (s31+4), (s31+28));
    v2 = M8((s31+20));
    if ((s32)((v2>>7)&0x1) != (s32)0) {
        v3 = M32((s31+24));
        fn_80053F34(v3, 0, (s31+40));
        return;
    }
    *(S12*)((s31+40)) = *(S12*)((s31+28));
}

void fn_80189C18(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p3;
    M32(p3) = p4;
    v1 = M32((p3+24));
    fn_80053F34(v1, (s31+4), (s31+28));
    v2 = M8((s31+20));
    if ((s32)((v2>>7)&0x1) != (s32)0) {
        v3 = M32((s31+24));
        fn_80053F34(v3, 0, (s31+40));
        return;
    }
    *(S12*)((s31+40)) = *(S12*)((s31+28));
}

void fn_80189C8C(u32 p3, float q1) {
    u32 v1;
    float g31;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    v1 = M8((p3+20));
    g31 = q1;
    s31 = p3;
    if ((s32)((v1>>7)&0x1) != (s32)0) {
        v2 = M32((s31+24));
        fn_80053F34(v2, 0, (s31+40));
    } else {
        *(S12*)((s31+40)) = *(S12*)((s31+28));
    }
    v3 = M32((s31+24));
    fn_80053F34(v3, (s31+4), (s31+28));
    v4 = MF((s31+16));
    MF((s31+52)) = (v4*g31);
}

void fn_80189D1C(u32 p3) {
    M32(p3) = 0;
}

void fn_80189D28(u32 p3) {
    M32(p3) = 1;
}

void fn_80189D34(u32 p3) {
    M32((p3+104)) = 0;
    M32((p3+112)) = 0;
    M32((p3+120)) = 0;
    M32((p3+128)) = 0;
    M32((p3+136)) = 0;
    M32((p3+144)) = 0;
    M32((p3+152)) = 0;
    M32((p3+160)) = 0;
    M32((p3+168)) = 0;
    M32((p3+176)) = 0;
    M32((p3+184)) = 0;
    M32((p3+192)) = 0;
    M8((p3+60)) = 0;
}

void fn_8018A0C0(u32 p3) {
    memset(p3, 0, 52);
}

void fn_8018A0E8(u32 p3, u32 p4) {
    M32(p3) = 1;
    if ((u32)p4 == (u32)0) {
    return;
    }
    fn_8018A118();
}

void fn_8018A498(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    v1 = M8((p3+52));
    if ((s32)((v1>>3)&0x1) != (s32)0) {
        v2 = lbl_805E0FF0;
        MF((p5+8)) = v2;
        MF((p5+4)) = v2;
        MF(p5) = v2;
        return;
    }
    if ((u32)p4 != (u32)0) {
        v3 = MF(p4);
        v4 = MF((p4+12));
        MF(p5) = (v3-v4);
        v5 = MF((p4+4));
        v6 = MF((p4+16));
        MF((p5+4)) = (v5-v6);
        v7 = MF((p4+8));
        v8 = MF((p4+20));
        MF((p5+8)) = (v7-v8);
        return;
    }
    v9 = MF((p3+64));
    v10 = MF((p3+80));
    MF(p5) = (v9-v10);
    v11 = MF((p3+68));
    v12 = MF((p3+84));
    MF((p5+4)) = (v11-v12);
    v13 = MF((p3+72));
    v14 = MF((p3+88));
    MF((p5+8)) = (v13-v14);
}

void fn_8018A528(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    v1 = M8((p3+20));
    if ((s32)((v1>>7)&0x1) != (s32)0) {
        v2 = lbl_805E0FF0;
        MF((p5+8)) = v2;
        MF((p5+4)) = v2;
        MF(p5) = v2;
        return;
    }
    if ((u32)p4 != (u32)0) {
        v3 = MF(p4);
        v4 = MF((p4+12));
        MF(p5) = (v3-v4);
        v5 = MF((p4+4));
        v6 = MF((p4+16));
        MF((p5+4)) = (v5-v6);
        v7 = MF((p4+8));
        v8 = MF((p4+20));
        MF((p5+8)) = (v7-v8);
        return;
    }
    v9 = MF((p3+28));
    v10 = MF((p3+40));
    MF(p5) = (v9-v10);
    v11 = MF((p3+32));
    v12 = MF((p3+44));
    MF((p5+4)) = (v11-v12);
    v13 = MF((p3+36));
    v14 = MF((p3+48));
    MF((p5+8)) = (v13-v14);
}

float fn_8018AB10(u32 p3, u32 p4, u32 p5, u32 p6) {
    float v1;
    float v2;
    float v3;
    float d0;
    v1 = lbl_805E0FF0;
    v2 = MF((p3+32));
    if (v2 != v1) {
        v3 = lbl_805E0FF4;
        if (v2 < v3) {
            d0 = fn_80063610(p4, p5, p6, v2);
            return d0;
        }
        *(S12*)(p6) = *(S12*)(p5);
        return v2;
    }
    *(S12*)(p6) = *(S12*)(p4);
    return v2;
}

void fn_8018B0C0(u32 p3, float q1, float q2) {
    float g31;
    float g30;
    u32 s31;
    g31 = q2;
    g30 = q1;
    s31 = p3;
    fn_80189D28((s31+4));
    fn_8018B118(s31, g30, g31);
}

void fn_8018B17C(u32 p3, u32 p4, float q1, float q2) {
    MF((p3+204)) = q2;
    MF((p3+28)) = q1;
}

float fn_8018B188(u32 p3, u32 p4) {
    float v1;
    float v2;
    v1 = MF((p4+4));
    v2 = lbl_805E1018;
    MF((p3+204)) = v2;
    MF((p3+28)) = v1;
    return v1;
}

void fn_8018B6C8(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    s31 = p5;
    s30 = p4;
    fn_80189F54((p6+4), p3);
    fn_80189F54((s30+4), s31);
}

void fn_8018B718(u32 p3, u32 p4) {
    u32 v1;
    float v2;
    float v3;
    v1 = M32(p4);
    if ((s32)v1 == (s32)1) {
        fn_8018BD74();
        return;
    }
    v2 = MF((p3+208));
    v3 = MF((p4+208));
    fn_80189784((p3+4), (p4+4), v2, v3);
}

void fn_8018C0D0(u32 p3, u32 p4) {
    *(S12*)(p4) = *(S12*)((p3+96));
}

void fn_8018C4E8(u32 p3, u32 p4, u32 p5, u32 p6, float q1) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 ph0;
    s31 = p3;
    v1 = M32((p3+104));
    ph0 = v1;
    if ((u32)v1 != (u32)0) {
        *(S12*)((v1+12)) = *(S12*)(v1);
        v2 = M32((s31+104));
        *(S12*)(v2) = *(S12*)(p4);
        ph0 = v2;
    }
    MF((s31+108)) = q1;
    v3 = M8((s31+156));
    ((BFu8_2_2*)((s31+156)))->f = p5;
    if ((u32)p6 != (u32)0) {
        *(S12*)((s31+112)) = *(S12*)(p6);
    }
    fn_8018C6EC(s31, p4, p5, p6, ph0);
    fn_8018C998(s31);
    fn_8018CA20(s31);
}

void fn_8018C598(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    v1 = M32((p3+20));
    fn_80189BE8((v1+(p4*68)), p6);
}

void fn_8018C5C8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = 0;
    s30 = 0;
    s29 = p4;
    s28 = p3;
    while ((v2 = M32((s28+16)), (s32)s30 < (s32)v2)) {
        v1 = M32((s28+20));
        fn_80189C18((v1+s31), s29);
        s31 = (s31+68);
        s30 = (s30+1);
    }
    if ((s32)s29 == (s32)0) {
        v3 = M8((s28+156));
        ((BFu8_5_1*)((s28+156)))->f = 0;
        return;
    }
    v4 = M8((s28+156));
    ((BFu8_5_1*)((s28+156)))->f = 1;
}

void fn_8018C6EC(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    float v2;
    u32 v3;
    s31 = 0;
    s30 = 0;
    s29 = p3;
    while ((v3 = M32((s29+16)), (s32)s30 < (s32)v3)) {
        v1 = M32((s29+20));
        v2 = MF((s29+108));
        fn_80189C8C((v1+s31), v2);
        s31 = (s31+68);
        s30 = (s30+1);
    }
}

void fn_8018C7F8(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+12));
    fn_80189D1C((v1+(p4*200)));
}

void fn_8018CA20(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    s31 = 0;
    s30 = 0;
    s29 = p3;
    while ((v2 = M32((s29+8)), (s32)s30 < (s32)v2)) {
        v1 = M32((s29+12));
        fn_80189FD4((v1+s31));
        s31 = (s31+200);
        s30 = (s30+1);
    }
}

void fn_8018CB04(u32 p3) {
    u32 v1;
    v1 = M8((p3+156));
    ((BFu8_0_1*)((p3+156)))->f = 1;
    M32((p3+148)) = 0;
    M32((p3+136)) = 2;
}

void fn_8018CB28(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M8((p3+156));
    ((BFu8_0_1*)((p3+156)))->f = 0;
    v2 = M32((p3+148));
    if ((s32)v2 != (s32)0) {
    return;
    }
    v3 = M32((p3+152));
    M32((p3+136)) = (((-(s32)v3)|v3)>>31);
    if ((s32)v2 != (s32)0) {
    return;
    }
}

u32 fn_8018CB78(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32((p3+148));
    if ((s32)v1 != (s32)0) {
        M32((p3+148)) = (v1-1);
        v2 = M32((p3+148));
        if ((s32)v2 == (s32)0) {
            v3 = M8((p3+156));
            if ((s32)((v3>>7)&0x1) == (s32)0) {
                v4 = M32((p3+152));
                M32((p3+136)) = (((-(s32)v4)|v4)>>31);
                return 1;
            }
        }
    }
    return 0;
}

void fn_8018CBC8(u32 p3) {
    u32 v1;
    v1 = M8((p3+156));
    ((BFu8_1_1*)((p3+156)))->f = 1;
    M32((p3+152)) = 0;
    M32((p3+136)) = 1;
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
    float v1;
    v1 = lbl_805E1040;
    MF((p3+36)) = v1;
    MF((p3+40)) = v1;
    MF((p3+44)) = v1;
    MF((p3+88)) = v1;
    M32((p3+92)) = 0;
    MF((p3+96)) = v1;
    M32((p3+100)) = 0;
}

u32 fn_8018D9C0(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 s26;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 v5;
    u32 v6;
    u32 c0;
    s26 = p3;
    s27 = p4;
    s28 = p5;
    s30 = 0;
    s31 = 0;
    while ((v6 = M32((s26+8)), (s32)s30 < (s32)v6)) {
        v1 = M32((s26+12));
        s29 = (v1+s31);
        v2 = M32(s29);
        if ((s32)v2 != (s32)0) {
            v3 = M8((s29+52));
            if ((s32)((v3>>4)&0x1) != (s32)0) {
                v4 = MF((s26+108));
                c0 = fn_80188720(s29, s27, v4);
                if ((s32)c0 != (s32)0) {
                    v5 = M8((s29+48));
                    M32(s28) = ((v5>>3)&0x1f);
                    return 1;
                }
            }
        }
        s31 = (s31+200);
        s30 = (s30+1);
    }
    return 0;
}

u32 fn_8018DA68(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    u32 c1;
    s29 = p4;
    s28 = p3;
    v1 = M32(p3);
    if ((s32)v1 != (s32)0) {
        c0 = fn_8018CD9C(s29);
        if ((s32)c0 != (s32)2) {
            s30 = 0;
            s31 = 0;
            while ((v3 = M32((s29+16)), (s32)s30 < (s32)v3)) {
                v2 = M32((s29+20));
                c1 = fn_80189860(s28, (v2+s31), 0);
                if ((s32)c1 != (s32)0) {
                    return 1;
                }
                s31 = (s31+68);
                s30 = (s30+1);
            }
        }
    }
    return 0;
}

#pragma push
#pragma opt_dead_code off
u32 fn_8018DB10(u32 p3, u32 p4) {
    if ((s32)p3 != (u32)(M32(((u32)(u32)lbl_80559BF4+576)))) {
        OSReport((u32)lbl_804ADB1C, (u32)lbl_80559BF4);
        __assert((u32)lbl_804ADAE8, 1021, (u32)&lbl_805D6EE0);
    }
    return (((s32)lbl_80559BF4+(p4*28))+12);
}
#pragma pop

void fn_8018E9A8(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = M32((p3+44));
    v2 = M32((s31+36));
    M32((s31+36)) = (v2+1);
    fn_80190760(s31, v2);
    fn_801907BC(s31);
    v3 = M32((s31+912));
    fn_8018D850(v3);
    fn_8019E930(s31);
    fn_8019DFF0(s31);
    v4 = M32((s31+1996));
    if ((u32)v4 == (u32)0) {
    return;
    }
    ((void (*)())(v4))(s31);
}

float fn_8018F4E8(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    float v15;
    float v16;
    float v17;
    float v18;
    float v19;
    float v20;
    float v21;
    float v22;
    float v23;
    float v24;
    float v25;
    float v26;
    float v27;
    float v28;
    float v29;
    float v30;
    float v31;
    float v32;
    float v33;
    u32 v34;
    float v35;
    float v36;
    float v37;
    float v38;
    float v39;
    float v40;
    float v41;
    float v42;
    float v43;
    float v44;
    float v45;
    float v46;
    u32 v47;
    float v48;
    float v49;
    float v50;
    float v51;
    float v52;
    float v53;
    float v54;
    float v55;
    float v56;
    float v57;
    float v58;
    float v59;
    u32 c0;
    s31 = M32((p3+44));
    c0 = fn_80191680(s31);
    if ((s32)c0 == (s32)0) {
        v2 = M8((s31+2081));
        if ((s32)((v2>>2)&0x1) == (s32)0) {
            v3 = M32((s31+1980));
            if ((u32)v3 != (u32)0) {
                ((void (*)())(v3))(s31);
            }
            v4 = MF((s31+732));
            v5 = MF((s31+720));
            MF((s31+732)) = (v4+v5);
            v6 = MF((s31+736));
            v7 = MF((s31+724));
            MF((s31+736)) = (v6+v7);
            v8 = MF((s31+740));
            v9 = MF((s31+728));
            MF((s31+740)) = (v8+v9);
            v10 = MF((s31+768));
            v11 = MF((s31+732));
            MF((s31+768)) = (v10+v11);
            v12 = MF((s31+772));
            v13 = MF((s31+736));
            MF((s31+772)) = (v12+v13);
            v14 = MF((s31+776));
            v15 = MF((s31+740));
            MF((s31+776)) = (v14+v15);
            fn_80199D9C(s31, v14);
            v16 = MF((s31+768));
            v17 = MF((s31+1488));
            MF((s31+768)) = (v16+v17);
            v18 = MF((s31+772));
            v19 = MF((s31+1492));
            MF((s31+772)) = (v18+v19);
            v20 = MF((s31+776));
            v21 = MF((s31+1496));
            MF((s31+776)) = (v20+v21);
            v22 = MF((s31+768));
            v23 = MF((s31+1536));
            MF((s31+768)) = (v22+v23);
            v24 = MF((s31+772));
            v25 = MF((s31+1540));
            MF((s31+772)) = (v24+v25);
            v26 = MF((s31+776));
            v27 = MF((s31+1544));
            MF((s31+776)) = (v26+v27);
            v28 = MF((s31+768));
            v29 = MF((s31+1568));
            MF((s31+768)) = (v28+v29);
            v30 = MF((s31+772));
            v31 = MF((s31+1572));
            MF((s31+772)) = (v30+v31);
            v32 = MF((s31+776));
            v33 = MF((s31+1576));
            MF((s31+776)) = (v32+v33);
            return v32;
        }
        v34 = M32((s31+2012));
        if ((u32)v34 != (u32)0) {
            ((void (*)())(v34))(s31);
        }
        v35 = MF((s31+768));
        v36 = MF((s31+1536));
        MF((s31+768)) = (v35+v36);
        v37 = MF((s31+772));
        v38 = MF((s31+1540));
        MF((s31+772)) = (v37+v38);
        v39 = MF((s31+776));
        v40 = MF((s31+1544));
        MF((s31+776)) = (v39+v40);
        v41 = MF((s31+768));
        v42 = MF((s31+1568));
        MF((s31+768)) = (v41+v42);
        v43 = MF((s31+772));
        v44 = MF((s31+1572));
        MF((s31+772)) = (v43+v44);
        v45 = MF((s31+776));
        v46 = MF((s31+1576));
        MF((s31+776)) = (v45+v46);
        return v45;
    }
    v47 = M32((s31+1980));
    if ((u32)v47 != (u32)0) {
        ((void (*)())(v47))(s31);
    }
    v48 = MF((s31+732));
    v49 = MF((s31+720));
    MF((s31+732)) = (v48+v49);
    v50 = MF((s31+736));
    v51 = MF((s31+724));
    MF((s31+736)) = (v50+v51);
    v52 = MF((s31+740));
    v53 = MF((s31+728));
    MF((s31+740)) = (v52+v53);
    v54 = MF((s31+768));
    v55 = MF((s31+732));
    MF((s31+768)) = (v54+v55);
    v56 = MF((s31+772));
    v57 = MF((s31+736));
    MF((s31+772)) = (v56+v57);
    v58 = MF((s31+776));
    v59 = MF((s31+740));
    MF((s31+776)) = (v58+v59);
    return v58;
}

void fn_8018F734(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 c1;
    s31 = M32((p3+44));
    v2 = M8((s31+2083));
    ((BFu8_3_1*)((s31+2083)))->f = 0;
    v3 = M32((s31+1984));
    if ((u32)v3 != (u32)0) {
        ((void (*)())(v3))(s31);
    }
    c1 = fn_80191680(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_801A305C(s31);
}

void fn_8018F79C(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = M32((p3+44));
    v2 = M32((s31+1988));
    if ((u32)v2 != (u32)0) {
        ((void (*)())(v2))(s31);
    }
    fn_80190848(s31);
    v3 = M32((s31+688));
    v4 = M32((v3+32));
    fn_80053F34(v4, 0, (s31+792));
    fn_801916FC(s31);
}

void fn_8018F8E0(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c1;
    s31 = M32((p3+44));
    v2 = M32((s31+2004));
    if ((u32)v2 != (u32)0) {
        ((void (*)())(v2))(s31);
    }
    c1 = fn_80191798(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    v3 = M32((s31+4));
    v4 = M32((u32)lbl_804ADBD8+(v3<<2));
    v5 = M32((v4+56));
    if ((u32)v5 == (u32)0) {
    return;
    }
    ((void (*)())(v5))(s31);
}

void fn_8018FBFC(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    s31 = M32((p3+44));
    v2 = M32((s31+1992));
    if ((u32)v2 != (u32)0) {
        ((void (*)())(v2))(s31);
    }
    fn_8019DC74(s31, (s31+1868));
    fn_801913D4(s31);
    v3 = M8((s31+8));
    fn_80231340(v3);
}

void fn_8018FC58(u32 p3) {
    u32 s31;
    u32 v2;
    u32 c0;
    s31 = M32((p3+44));
    v2 = M8((s31+8));
    c0 = plGetPlayerKind(v2);
    if ((s32)c0 != (s32)1) {
    return;
    }
    fn_80275C70(s31);
}

void fn_8019019C(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    HSD_LObjAnimAll(v1);
}

void fn_801901C0(u32 p3) {
    u32 v1;
    v1 = M32((p3+40));
    fn_803FF570(v1);
    HSD_CObjGetCurrent();
    fn_803FE4B8();
}

void fn_801902B8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD820;
    v2 = lbl_805DD81C;
    fn_8006A508((p3+92), v1, v2);
}

void fn_801902E4(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80079988();
    M32((s31+660)) = c0;
}

void fn_80190314(u32 p3) {
    u32 v1;
    v1 = M32((p3+660));
    fn_8007A2A0(v1, (p3+792));
}

void fn_80190340(u32 p3) {
    u32 v1;
    v1 = M32((p3+660));
    fn_8007A2C0(v1, (p3+792));
}

#pragma push
#pragma opt_common_subs off
void fn_8019036C(u32 p3) {
    u32 loc20[1];
    u32 loc16[1];
    u32 loc12[1];
    u32 loc8[1];
    u32 v1;
    u32 h1;
    u32 loc24[6];
    s32 v4;
    u32 v6;
    u32 v2;
    v1 = lbl_805DD820;
    if (v1 == 0) {
    return;
    }
    h1 = M32((p3+660));
    v2 = h1;
    fn_8007A38C(v2, ((u32)loc20), ((u32)loc16), ((u32)loc24));
    v4 = lbl_805DD818;
    M32(((s32)loc12)) = (M32(((u32)loc20)));
    HSD_LObjSetColor(v4, ((u32)loc12));
    v6 = lbl_805DD81C;
    M32(((u32)loc8)) = (M32(((u32)loc16)));
    HSD_LObjSetColor(v6, ((u32)loc8));
    HSD_LObjSetPosition(lbl_805DD81C, ((u32)loc24));
}
#pragma pop

void fn_801903DC(u32 p3) {
    u32 v1;
    v1 = M32((p3+660));
    fn_800799BC(v1);
}

u32 fn_80190418(void) {
    u32 loc8[2];
    u32 v1;
    u32 v2;
    lbLoadArchive(0, (u32)lbl_804ADBE4, ((u32)loc8), (u32)lbl_804ADBF4, 0);
    v1 = M32(((u32)loc8));
    lbl_805DD810 = v1;
    v2 = M32(v1);
    lbl_805DD814 = v2;
    return v1;
}

void fn_8019065C(u32 p3) {
    u32 loc8[2];
    M32(((u32)loc8)) = 0;
    fn_80072C90(2, p3, 4, 4, 0, 1, 4, 32);
}

void fn_80190708(p3) u32 p3; {
    float v1;
    u32 s31;
    v1 = lbl_805E1088;
    s31 = p3;
    MF((p3+740)) = v1;
    MF((p3+736)) = v1;
    MF((p3+732)) = v1;
    MF((p3+1496)) = v1;
    MF((p3+1492)) = v1;
    MF((p3+1488)) = v1;
    fn_80190760();
    fn_801907BC(s31);
    fn_8019079C(s31);
}

void fn_80190760(p3) u32 p3; {
    float v1;
    v1 = lbl_805E1088;
    MF((p3+728)) = v1;
    MF((p3+724)) = v1;
    MF((p3+720)) = v1;
}

void fn_80190774(p3) u32 p3; {
    float v1;
    float v2;
    v1 = MF((p3+888));
    MF((p3+1452)) = v1;
    v2 = MF((p3+1456));
    MF((p3+1460)) = v2;
}

void fn_80190788(u32 p3) {
    float v1;
    float v2;
    v1 = MF((p3+884));
    MF((p3+1456)) = v1;
    v2 = MF((p3+1456));
    MF((p3+1460)) = v2;
}

void fn_8019079C(u32 p3) {
    float v1;
    v1 = lbl_805E1088;
    MF((p3+1484)) = v1;
    MF((p3+1480)) = v1;
    MF((p3+1476)) = v1;
    MF((p3+1472)) = v1;
    MF((p3+1468)) = v1;
    MF((p3+1464)) = v1;
}

void fn_801907BC(u32 p3) {
    float v1;
    v1 = lbl_805E1088;
    MF((p3+1544)) = v1;
    MF((p3+1540)) = v1;
    MF((p3+1536)) = v1;
    M32((p3+1560)) = -1;
    MF((p3+1576)) = v1;
    MF((p3+1572)) = v1;
    MF((p3+1568)) = v1;
    M32((p3+1592)) = -1;
}

void fn_801907E8(u32 p3, u32 p4, u32 p5, float q1) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_80062CA4(p5, (s30+816));
    fn_80062DD0((s30+816), s31, (s30+828));
    fn_80062DD0((s30+828), (s30+816), (s30+804));
}

void fn_80190848(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    v1 = MF((p3+712));
    v2 = MF((p3+840));
    v3 = M32((p3+688));
    v4 = M32(v3);
    fn_80054414(v4, (p3+804), (p3+816), (p3+768), v3, (v1*v2));
}

void fn_801908E8(u32 p3) {
    float v1;
    v1 = lbl_805E1088;
    MF((p3+928)) = v1;
    MF((p3+924)) = v1;
    MF((p3+920)) = v1;
    MF((p3+916)) = v1;
    MF((p3+952)) = v1;
    MF((p3+948)) = v1;
    MF((p3+944)) = v1;
    MF((p3+940)) = v1;
    MF((p3+968)) = v1;
    MF((p3+964)) = v1;
    M32((p3+988)) = 0;
    M32((p3+1000)) = 0;
    M32((p3+996)) = 0;
    M32((p3+984)) = 0;
    M8((p3+1207)) = 254;
    M8((p3+1206)) = 254;
    M8((p3+1205)) = 254;
    M8((p3+1204)) = 254;
    MF((p3+980)) = v1;
    MF((p3+976)) = v1;
}

void fn_80190A88(p3) u32 p3; {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+2040));
    if ((u32)v1 != (u32)0) {
        ((void (*)())(v1))();
    }
    v2 = M32((s31+2044));
    if ((u32)v2 == (u32)0) {
    return;
    }
    ((void (*)())(v2))(s31);
}

void fn_80190ADC(p3, p4, p5) u32 p3; u32 p4; u32 p5; {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    v1 = M8((p3+8));
    c0 = fn_8022CBF4(v1);
    if ((s32)c0 == (s32)0) {
    return;
    }
    v2 = M8((s29+9));
    Rumble(v2, s30, s30, s31);
}

void fn_80190BC4(p3, p4) u32 p3; u32 p4; {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p4;
    s30 = p3;
    v1 = M8((p3+8));
    c0 = fn_8022CBF4(v1);
    if ((s32)c0 == (s32)0) {
    return;
    }
    v2 = M8((s30+9));
    HSD_PadRumbleRemoveId(v2, s31);
}

void fn_80190C14(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    v1 = M8((p3+8));
    c0 = fn_8022CBF4(v1);
    if ((s32)c0 == (s32)0) {
    return;
    }
    v2 = M8((s31+9));
    fn_80071D48(v2);
}

void fn_80190D98(u32 p3) {
    u32 v1;
    v1 = M8((p3+8));
    ((BFu8_0_1*)((p3+8)))->f = 0;
}

void fn_80190DAC(u32 p3) {
    u32 v1;
    v1 = M8((p3+1200));
    ((BFu8_0_1*)((p3+1200)))->f = 0;
}

void fn_80190DC0(u32 p3) {
    M8((p3+7)) = 0;
    M8((p3+6)) = 0;
}

void fn_80190DD0(u32 p3) {
    M8((p3+1199)) = 0;
    M8((p3+1198)) = 0;
}

void fn_80190DE0(u32 p3, u32 p4, u32 p5, float q1) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    MF(p3) = q1;
    M8((p3+5)) = 0;
    M8((p3+4)) = 0;
    v1 = M8((p3+8));
    ((BFu8_1_1*)((p3+8)))->f = p4;
    v2 = M8((p3+8));
    ((BFu8_2_1*)((p3+8)))->f = p5;
    v3 = M8((p3+8));
    if ((s32)((v3>>6)&0x1) == (s32)0) {
    return;
    }
    M8((p3+6)) = 0;
    v4 = lbl_805DD810;
    v5 = M32((v4+8));
    v6 = M32((v5+4));
    M8((p3+7)) = v6;
    if ((s32)((v3>>6)&0x1) != (s32)0) {
    return;
    }
}

float fn_801910E0(u32 p3) {
    float v1;
    v1 = MF((p3+920));
    return v1;
}

void fn_801910E8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+4));
    v2 = M32((u32)lbl_804ADBD8+(v1<<2));
    v3 = M32((v2+88));
    if ((u32)v3 == (u32)0) {
    return;
    }
    ((void (*)())(v3))(p3, v2);
}

void fn_8019112C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+4));
    v2 = M32((u32)lbl_804ADBD8+(v1<<2));
    v3 = M32((v2+92));
    if ((u32)v3 == (u32)0) {
    return;
    }
    ((void (*)())(v3))(p3, v2);
}

void fn_80191170(p3) u32 p3; {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+4));
    v2 = M32((u32)lbl_804ADBD8+(v1<<2));
    v3 = M32((v2+96));
    if ((u32)v3 == (u32)0) {
    return;
    }
    ((void (*)())(v3))(p3, v2);
}

void fn_8019121C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1220));
    c0 = fn_80072664(v1);
    M32((s31+1220)) = c0;
}

void fn_80191250(u32 p3, u32 p4, u32 p5) {
    M32((p3+1224)) = p4;
    M32((p3+2016)) = p5;
}

void fn_8019125C(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    s31 = p3;
    fn_80194D80((s31+1868));
    fn_80193718(s31);
}

void fn_80191294(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 c1;
    s31 = p5;
    s30 = p4;
    fn_80194E60(p3, s31);
    c1 = fn_8022D024(s30);
    fn_8022D03C(s30, (s31+c1));
}

void fn_80191334(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M8((p3+2085));
    if ((s32)((v1>>6)&0x1) == (s32)0) {
    return;
    }
    fn_80193E78();
    fn_80191374(s31);
}

void fn_80191374(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    s31 = p3;
    v1 = M32((p3+1012));
    cityTrial_getMasterStats(v1, (s31+1868));
    v2 = M8((s31+8));
    fn_8022CFC8(v2, (s31+1868));
    v3 = M32((s31+1012));
    fn_801C8410(v3);
    v4 = M8((s31+8));
    fn_8022CA20(v4);
    v5 = M32((s31+1012));
    fn_801C8404(v5);
    v6 = M8((s31+8));
    fn_8022CA90(v6);
}

u32 fn_801914E8(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M8((p3+8));
    c0 = fn_80009534(v1);
    return ((s8)c0);
}

u32 fn_80191530(u32 p3) {
    u32 v1;
    v1 = M8((p3+2085));
    if ((s32)((v1>>1)&0x1) == (s32)0) {
        if ((s32)(v1&0x1) == (s32)0) {
            return 1;
        }
    }
    return 0;
}

void fn_801915C4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+1112));
    if ((s32)v1 == (s32)-1) {
        v2 = M32((s31+1120));
        if ((s32)v2 == (s32)-1) {
        return;
        }
    }
    fn_801A65E8(s31);
    M32((s31+1112)) = -1;
    M32((s31+1120)) = -1;
}

u32 fn_80191618(u32 p3) {
    u32 v1;
    v1 = M8((p3+2085));
    if ((s32)((v1>>5)&0x1) == (s32)0) {
        if ((s32)((v1>>4)&0x1) == (s32)0) {
            if ((s32)((v1>>1)&0x1) == (s32)0) {
                if ((s32)(v1&0x1) == (s32)0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

u32 fn_8019164C(u32 p3) {
    u32 v1;
    v1 = M8((p3+2085));
    if ((s32)((v1>>3)&0x1) == (s32)0) {
        if ((s32)((v1>>2)&0x1) == (s32)0) {
            if ((s32)((v1>>1)&0x1) == (s32)0) {
                if ((s32)(v1&0x1) == (s32)0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

u32 fn_80191680(p3) u32 p3; {
    u32 v1;
    v1 = M32((p3+1012));
    return (((-(s32)v1)|v1)>>31);
}

float fn_80191694(u32 p3, u32 p4) {
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    v1 = MF((p3+732));
    v2 = MF(p4);
    MF((p3+732)) = (v1+v2);
    v3 = MF((p3+736));
    v4 = MF((p4+4));
    MF((p3+736)) = (v3+v4);
    v5 = MF((p3+740));
    v6 = MF((p4+8));
    MF((p3+740)) = (v5+v6);
    return v5;
}

u32 fn_801916C8(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+4));
    if ((s32)v1 == (s32)0) {
        c0 = fn_801A842C();
        return c0;
    }
    return 0;
}

void fn_801916FC(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    float v3;
    float d0;
    s31 = p3;
    d0 = fn_800CEB18((s31+768), (s31+1156));
    MF((s31+1152)) = d0;
    v1 = MF((s31+1156));
    MF((s31+1168)) = (-v1);
    v2 = MF((s31+1160));
    MF((s31+1172)) = (-v2);
    v3 = MF((s31+1164));
    MF((s31+1176)) = (-v3);
}

u32 fn_80191758(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+4));
    if ((s32)v1 == (s32)0) {
        c0 = fn_801A83EC();
        return c0;
    }
    return 0;
}

u32 fn_8019178C(u32 p3) {
    u32 v1;
    v1 = M8((p3+2083));
    return ((v1>>1)&0x1);
}

u32 fn_80191798(p3) u32 p3; {
    u32 v1;
    v1 = M8((p3+2083));
    return (v1&0x1);
}

u32 fn_801917B0(u32 p3) {
    u32 v1;
    v1 = M8((p3+2084));
    return ((v1>>6)&0x1);
}

u32 fn_801917BC(u32 p3) {
    u32 v1;
    v1 = M32((p3+1116));
    return (v1 == 3);
}

u32 fn_801917D0(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C86B0(v1);
}

u32 fn_801917F4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C86DC(v1);
}

u32 fn_80191818(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+1008));
    fn_80223158(v1);
}

u32 fn_8019183C(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+1008));
    fn_80223168(v1);
}

void fn_801918BC(p3) u32 p3; {
    float v1;
    v1 = lbl_805E1088;
    M32((p3+2072)) = 0;
    MF((p3+2076)) = v1;
}

u32 fn_801918D0(void) {
    u32 c0;
    c0 = getTrialFlag();
    return (((-(u32)((s8)c0))|((s8)c0))>>31);
}

void fn_80191960(void) {
    fn_8000A1D8();
}

u32 fn_80191980(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 v5;
    u32 v6;
    float v7;
    u32 c0;
    s31 = p4;
    s30 = p3;
    c0 = fn_801950A8();
    if ((s32)c0 != (s32)0) {
        return 0;
    }
    v1 = M8((s30+2624));
    if ((u32)v1 == (u32)0) {
        v2 = M8((s30+2625));
        v3 = lbl_805DD814;
        v4 = MF((v3+432));
        if (((float)(u32)v2) < v4) {
            M32(s31) = 1;
            return 1;
        }
    }
    v5 = M8((s30+2625));
    if ((u32)v5 == (u32)0) {
        v6 = lbl_805DD814;
        v7 = MF((v6+432));
        if (((float)(u32)v1) < v7) {
            M32(s31) = -1;
            return 1;
        }
    }
    return 0;
}

u32 fn_80191B40(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+1012));
    return v2;
}

void fn_80191B4C(u32 p3, u32 p4) {
    u32 s30;
    u32 s31;
    float v2;
    u32 c0;
    s30 = p4;
    s31 = M32((p3+44));
    c0 = fn_80191680(s31);
    if ((s32)c0 != (s32)0) {
        fn_8019407C(s31, s30);
        return;
    }
    v2 = lbl_805E10A0;
    MF((s30+8)) = v2;
    MF((s30+4)) = v2;
    MF(s30) = v2;
}

float fn_80191BB0(u32 p3) {
    u32 s31;
    u32 v2;
    float v3;
    u32 c0;
    float d1;
    s31 = M32((p3+44));
    c0 = fn_80191680(s31);
    if ((s32)c0 != (s32)0) {
        v2 = M32((s31+1012));
        d1 = fn_801C7668(v2);
        return d1;
    }
    v3 = lbl_805E10A0;
    return v3;
}

void fn_80191BF8(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+744));
}

void fn_80191C18(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+1512));
}

void fn_80191C38(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    s31 = M32((p3+44));
    v2 = M32((s31+28));
    if ((s32)v2 == (s32)26) {
    return;
    }
    fn_8019F850(s31);
    v3 = M8((s31+2085));
    ((BFu8_1_1*)((s31+2085)))->f = 1;
}

u32 fn_80191C84(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 c0;
    u32 c1;
    s31 = M32((p3+44));
    c0 = fn_80191680(s31);
    if ((s32)c0 != (s32)0) {
        v2 = M32((s31+1012));
        c1 = fn_801C7730(v2);
        if ((s32)c1 != (s32)0) {
            v3 = M32((s31+28));
            if ((s32)v3 == (s32)26) {
                fn_801910E8(s31);
                return 0;
            }
            fn_801A1950(s31);
            return 1;
        }
    }
    return 0;
}

u32 fn_80191CFC(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+2083));
    return ((v2>>3)&0x1);
}

float fn_80191D0C(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+44));
    v2 = MF((v1+1264));
    return v2;
}

void fn_80191DD8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+1104));
    fn_800BAF70(v2);
}

void fn_80191EB0(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801A7EF4(v1);
}

void fn_80191ED4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801A7E68(v1);
}

void fn_80191EF8(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+804));
}

void fn_80191F18(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+816));
}

u32 fn_80191F38(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    fn_80193484(v1);
}

u32 fn_80191F5C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+1104));
    return v2;
}

u32 fn_80191F68(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+17));
    return v2;
}

u32 fn_80191F74(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+1108));
    return v2;
}

u32 fn_80191F80(u32 p3) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    if ((s32)v2 == (s32)0) {
        c0 = fn_801A8848(v1);
        return c0;
    }
    return -1;
}

void fn_80191FB8(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801AE4EC(v1);
}

void fn_80191FDC(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+768));
}

void fn_80191FFC(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+792));
}

void fn_8019201C(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+732));
}

u32 fn_8019203C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+8));
    return v2;
}

void fn_80192048(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801A0D7C(v1);
}

u32 fn_8019206C(u32 p3, float q1) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+1012));
    if ((u32)v2 == (u32)0) {
    return v1;
    }
    MF((v1+1184)) = q1;
    if ((u32)v2 != (u32)0) {
    return v1;
    }
    return v1;
}

void fn_80192084(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+1140));
}

u32 fn_801920A4(u32 p3) {
    u32 v1;
    if ((u32)p3 != (u32)0) {
        v1 = M16(p3);
        if ((u32)v1 == (u32)17) {
            return 1;
        }
    }
    return 0;
}

void fn_801920C8(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_80190ADC(v1);
}

void fn_801920EC(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_80190BC4(v1);
}

void fn_80192110(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 c0;
    s30 = p5;
    s29 = p4;
    s31 = M32((p3+44));
    v2 = M8((s31+8));
    c0 = fn_8022CBF4(v2);
    if ((s32)c0 == (s32)0) {
    return;
    }
    v3 = M8((s31+9));
    Rumble(v3, 2, s29, s30);
}

void fn_801921F8(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801A7FA8(v1);
}

void fn_8019221C(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801A7FFC(v1);
}

void fn_80192240(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801A8010(v1);
}

void fn_80192264(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801A8018(v1);
}

u32 fn_80192288(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+2082));
    return ((v2>>4)&0x1);
}

void fn_801922B0(u32 p3) {
    u32 s31;
    u32 v2;
    u32 c0;
    s31 = M32((p3+44));
    v2 = M32((s31+1220));
    c0 = fn_80072544(v2);
    M32((s31+1220)) = c0;
}

void fn_801922E4(u32 p3) {
    u32 s31;
    u32 v2;
    u32 c0;
    s31 = M32((p3+44));
    v2 = M32((s31+1220));
    c0 = fn_800725C8(v2);
    M32((s31+1220)) = c0;
}

u32 fn_80192318(u32 p3) {
    u32 s31;
    u32 v2;
    u32 c0;
    u32 c1;
    s31 = M32((p3+44));
    c0 = fn_80191680(s31);
    if ((s32)c0 != (s32)0) {
        v2 = M32((s31+1012));
        c1 = fn_801C8010(v2);
        return c1;
    }
    return -1;
}

u32 fn_80192360(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32((p3+44));
    v2 = M32((v1+24));
    v3 = M32((v1+688));
    v4 = M32((v2+4));
    v5 = M8((v4+10));
    v6 = M32(v3+(v5<<4));
    return v6;
}

float fn_80192380(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    float d0;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    if ((s32)v2 == (s32)0) {
        d0 = fn_801B1464(v1);
        return d0;
    }
    v3 = lbl_805E10A0;
    return v3;
}

float fn_801923B8(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    float d0;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    if ((s32)v2 == (s32)0) {
        d0 = fn_801B29C8(v1);
        return d0;
    }
    v3 = lbl_805E10A0;
    return v3;
}

void fn_801923F0(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_8019F4B0(v1);
}

void fn_80192414(u32 p3, u32 p4) {
    u32 s30;
    u32 s31;
    s30 = p4;
    s31 = M32((p3+44));
    fn_80193F24(s31);
    fn_80193D38(s31);
    fn_8019F80C(s31);
    fn_801C8058(s30);
}

void fn_80192468(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801A1B5C(v1);
}

void fn_8019248C(u32 p3, u32 p4) {
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    s30 = p4;
    s31 = M32((p3+44));
    v2 = M32((s31+4));
    if ((s32)v2 != (s32)0) {
    return;
    }
    fn_80190A88(s31);
    v3 = M8((s31+2082));
    ((BFu8_2_1*)((s31+2082)))->f = 1;
    fn_8019EB58(s31);
    fn_801BDA34(s31, s30);
}

void fn_801924F8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    if ((s32)v2 != (s32)0) {
    return;
    }
    fn_801BDBAC(v1);
}

void fn_80192528(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v2;
    u32 c0;
    s30 = p5;
    s29 = p4;
    s31 = M32((p3+44));
    c0 = fn_80191680(s31);
    if ((s32)c0 != (s32)0) {
        v2 = M32((s31+1012));
        fn_801C8210(v2, s29, s30);
        return;
    }
    fn_8019125C(s31, s29, s30);
}

void fn_8019259C(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801912E8(v1);
}

void fn_801925C0(void) {
    fn_80194D80();
}

u32 fn_801925E0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+2083));
    if ((s32)((v2>>6)&0x1) == (s32)0) {
        if ((s32)((v2>>7)&0x1) == (s32)0) {
            return 1;
        }
    }
    return 0;
}

void fn_80192608(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801914B8(v1);
}

void fn_8019262C(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_80191618(v1);
}

u32 fn_80192650(u32 p3) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    if ((s32)v2 == (s32)0) {
        c0 = cityTrial_collideWithAbility(v1);
        return c0;
    }
    return 0;
}

void fn_80192688(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_8019164C(v1);
}

u32 fn_801926AC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    if ((s32)v2 == (s32)0) {
        c0 = fn_801A828C(v1);
        return c0;
    }
    return 0;
}

u32 fn_801926E4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+2086));
    return ((v2>>6)&0x1);
}

void fn_80192720(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32((p3+44));
    v2 = M32((v1+24));
    v3 = M8((v1+10));
    v4 = M32((v2+4));
    v5 = M8(((u32)v4+36+v3));
    fn_80009658(v5, p4, v1);
}

u32 fn_80192758(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+10));
    return v2;
}

void fn_80192764(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_80191680(v1);
}

u32 fn_80192788(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+912));
    return v2;
}

u32 fn_80192794(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 c0;
    v1 = M32((p3+44));
    v2 = M32((v1+1012));
    v3 = M8((v1+2082));
    s31 = ((v3>>7)&0x1);
    if ((u32)v2 != (u32)0) {
        c0 = fn_801917D0(v1, v3);
        s31 = (s31|c0);
    }
    return s31;
}

u32 fn_801927DC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 c0;
    v1 = M32((p3+44));
    v2 = M32((v1+1012));
    v3 = M8((v1+2082));
    s31 = ((v3>>6)&0x1);
    if ((u32)v2 != (u32)0) {
        c0 = fn_801917F4(v1, v3);
        s31 = (s31|c0);
    }
    return s31;
}

u32 fn_80192824(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 c0;
    v1 = M32((p3+44));
    v2 = M32((v1+1008));
    v3 = M8((v1+2082));
    s31 = ((v3>>7)&0x1);
    if ((u32)v2 != (u32)0) {
        c0 = fn_80191818(v1, v3);
        s31 = (s31|c0);
    }
    return s31;
}

u32 fn_8019286C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 c0;
    v1 = M32((p3+44));
    v2 = M32((v1+1008));
    v3 = M8((v1+2082));
    s31 = ((v3>>6)&0x1);
    if ((u32)v2 != (u32)0) {
        c0 = fn_8019183C(v1, v3);
        s31 = (s31|c0);
    }
    return s31;
}

u32 fn_801928B4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    return (v1+1940);
}

float fn_801928C0(void) {
    u32 v1;
    float v2;
    v1 = lbl_805DD814;
    v2 = MF((v1+264));
    return v2;
}

float fn_801928CC(void) {
    u32 v1;
    float v2;
    v1 = lbl_805DD814;
    v2 = MF((v1+268));
    return v2;
}

float fn_801928D8(void) {
    u32 v1;
    float v2;
    v1 = lbl_805DD814;
    v2 = MF((v1+272));
    return v2;
}

void fn_801928E4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_80194900(v1);
}

float fn_80192908(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    fn_8019AE50(v1);
}

void fn_8019292C(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_8019E6DC(v1);
}

u32 fn_80192950(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    return v2;
}

void fn_8019295C(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_80195288(v1);
}

void fn_80192980(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_8019CDFC(v1);
}

void fn_801929A4(u32 p3, u32 p4) {
    float v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805E10A4;
    v2 = M32((p3+44));
    M32((v2+1416)) = p4;
    v3 = M32((v2+1260));
    fn_80195548(v2, v3, 47, v1);
}

u32 fn_801929D8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+1416));
    return v2;
}

void fn_801929E4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_8019E120(v1);
}

u32 fn_80192A08(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    v1 = M32((p3+44));
    M32(((u32)v1+1404+(p4<<2))) = p5;
    return (v1+(p4<<2));
}

void fn_80192A1C(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s30;
    u32 s29;
    u32 s31;
    s30 = p5;
    s29 = p4;
    s31 = M32((p3+44));
    fn_8019DE48(s31, s30, p6);
    fn_8019DE9C(s31, s29);
    M32(((u32)s31+1284+(s30<<2))) = s29;
}

u32 fn_80192A84(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 s31;
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
    v1 = M32((p3+44));
    s31 = (v1+(p4<<2));
    v2 = M32((s31+1284));
    if ((s32)v2 != (s32)0) {
        v3 = M32(((u32)v1+1296+(p4*36)));
        M32(p5) = v3;
        v4 = M32(((u32)v1+1300+(p4*36)));
        M32((p5+4)) = v4;
        v5 = M32(((u32)v1+1304+(p4*36)));
        M32((p5+8)) = v5;
        v6 = M32(((u32)v1+1308+(p4*36)));
        M32((p5+12)) = v6;
        v7 = M32(((u32)v1+1312+(p4*36)));
        M32((p5+16)) = v7;
        v8 = M32(((u32)v1+1316+(p4*36)));
        M32((p5+20)) = v8;
        v9 = M32(((u32)v1+1320+(p4*36)));
        M32((p5+24)) = v9;
        v10 = M32(((u32)v1+1324+(p4*36)));
        M32((p5+28)) = v10;
        v11 = M32(((u32)v1+1328+(p4*36)));
        M32((p5+32)) = v11;
        v12 = M32((s31+1284));
        fn_8019DE9C(v1, v12);
        v13 = M32((s31+1284));
        return v13;
    }
    return 0;
}

void fn_80192B24(u32 p3) {
    u32 s31;
    u32 v2;
    s31 = M32((p3+44));
    v2 = M32((s31+40));
    fn_8019970C(s31, v2);
    fn_80198568(s31);
}

void fn_80192B60(u32 p3) {
    u32 s31;
    s31 = M32((p3+44));
    fn_80190ADC(s31, 27, -2);
    fn_80193500(s31, 21, 0, 0);
    fn_8019E6DC(s31, 2);
}

void fn_80192BB8(void) {
    fn_80190468();
}

void fn_80192BD8(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    v1 = M32((u32)lbl_804ADBC0+(s29<<3));
    fn_8019065C(v1);
    v2 = M32((u32)lbl_804ADBD8+(s29<<2));
    v3 = M32((v2+8));
    if ((u32)v3 == (u32)0) {
    return;
    }
    ((void (*)())(v3))(s30, s31);
}

void fn_80192D58(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_800B81CC();
    M32((s31+1104)) = c0;
    v1 = M32((s31+1104));
    v2 = M8((s31+8));
    fn_800B8DBC(v1, v2);
}

void fn_80192D94(u32 p3) {
    u32 v1;
    v1 = M32((p3+1104));
    fn_800B836C(v1);
}

void fn_80192DB8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    v1 = M32((p3+1104));
    fn_800B8DC4(v1, (s31+804));
    v2 = M32((s31+1104));
    fn_800B8DE0(v2, (s31+816));
    v3 = M32((s31+1104));
    fn_800B8E18(v3, (s31+768));
    v4 = M32((s31+1104));
    fn_800B8DFC(v4, (s31+792));
}

u32 fn_80193388(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    float v1;
    float v2;
    u32 s31;
    float v3;
    float d0;
    u32 c1;
    s30 = p4;
    s29 = p3;
    v1 = MF((p3+848));
    d0 = fn_800BAD8C(s30, (s29+792), v1);
    v2 = MF((s29+856));
    if (d0 > v2) {
        s31 = 0;
    } else {
        v3 = MF((s29+860));
        if (d0 > v3) {
            s31 = 1;
        } else {
            s31 = 2;
        }
    }
    c1 = fn_80193484(s29, s30);
    if ((s32)s31 < (s32)c1) {
        s31 = c1;
    }
    return s31;
}

u32 fn_80193484(p3, p4) u32 p3; u32 p4; {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p4;
    s30 = p3;
    v1 = M32((p3+1104));
    c0 = fn_800BAF70(v1);
    if ((u32)s31 == (u32)c0) {
        v2 = M8((s30+8));
        fn_8022C978(v2);
        return;
    }
    v3 = M8((s30+8));
    fn_8022C9A8(v3);
}

void fn_801934DC(u32 p3) {
    u32 v1;
    v1 = M32((p3+1104));
    fn_800B9004(v1);
}

void fn_80193500(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    if ((s32)p6 == (s32)1) {
        fn_800BBE0C(p4, p5);
        return;
    }
    v1 = M32((p3+1104));
    fn_800BBCEC(v1);
}

void fn_8019353C(u32 p3, u32 p4) {
    u32 v1;
    if ((s32)p4 == (s32)1) {
        fn_800BBFC4();
        return;
    }
    v1 = M32((p3+1104));
    fn_800BBF14(v1);
}

void fn_80193644(u32 p3) {
    u32 v1;
    v1 = M8((p3+8));
    fn_800B8BB4(v1);
}

void fn_80193668(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = HSD_ObjAlloc((u32)lbl_80559F7C);
    M32((s31+908)) = c0;
}

void fn_80193B84(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    fn_80193900(p3, p4, p5, p6, 1, 0, p7, 1);
}

void fn_80193BB4(u32 p3) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C8080(v1);
}

void fn_80193BD8(u32 p3) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C80A4(v1);
}

void fn_80193BFC(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C80C8(v1);
}

void fn_80193C20(u32 p3) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C80EC(v1);
}

u32 fn_80193C7C(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+4));
    if ((s32)v1 == (s32)0) {
        c0 = fn_801A8A7C();
        return c0;
    }
    return 0;
}

void fn_80193CB0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C878C(v1);
    M32((s31+1020)) = c0;
}

void fn_80193CE4(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    if ((u32)p4 == (u32)0) {
    return;
    }
    c0 = fn_801C878C(p4);
    v1 = M32((s31+1020));
    if ((u32)v1 == (u32)c0) {
    return;
    }
    fn_8019D330(s31, (s31+1868), 1);
}

void fn_80193EC4(u32 p3, u32 p4) {
    M32((p3+1012)) = p4;
}

void fn_80193ECC(u32 p3, u32 p4) {
    M32((p3+1016)) = p4;
}

u32 fn_80193ED4(u32 p3) {
    u32 v1;
    v1 = M32((p3+1016));
    return v1;
}

void fn_80193F24(p3, p4) u32 p3; u32 p4; {
    u32 v1;
    M32((p3+1016)) = p4;
    v1 = M32(p3);
    fn_801C82EC(p4, v1, p3);
}

void fn_80193F54(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+4));
    if ((s32)v1 == (s32)0) {
        v2 = M8((p3+2086));
        if ((s32)(v2&0x1) != (s32)0) {
            fn_801A89D8(p3, 1);
            return;
        }
    }
    fn_80193F98();
}

void fn_8019407C(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C7628(v1);
}

void fn_801940A0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80191680();
    if ((s32)c0 != (s32)0) {
        v1 = M32((s31+1012));
        c1 = fn_801C84AC(v1);
        if ((s32)c1 != (s32)0) {
            v2 = M8((s31+2083));
            ((BFu8_2_1*)((s31+2083)))->f = 1;
            return;
        }
        v3 = M8((s31+2083));
        ((BFu8_2_1*)((s31+2083)))->f = 0;
        return;
    }
    v4 = M8((s31+2083));
    ((BFu8_2_1*)((s31+2083)))->f = 0;
}

u32 fn_80194120(p3) u32 p3; {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C7C70(v1);
}

u32 fn_80194144(p3) u32 p3; {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C852C(v1);
}

u32 fn_80194168(p3) u32 p3; {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C853C(v1);
}

void fn_801941F8(u32 p3) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C7E30(v1);
}

void fn_8019421C(u32 p3) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C7E3C(v1);
}

u32 fn_80194264(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+1012));
    fn_801C854C(v1);
}

u32 fn_801942E0(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+1012));
    if ((u32)v1 != (u32)0) {
        c0 = fn_801C7F44(v1);
        return c0;
    }
    return 0;
}

u32 fn_80194314(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+1012));
    if ((u32)v1 != (u32)0) {
        c0 = fn_801C7F78(v1);
        return c0;
    }
    return 4;
}

u32 fn_80194348(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+1012));
    if ((u32)v1 != (u32)0) {
        c0 = fn_801C7F84(v1);
        return c0;
    }
    return -1;
}

u32 fn_8019437C(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+1012));
    if ((u32)v1 != (u32)0) {
        c0 = fn_801C7F90(v1);
        return c0;
    }
    return 0;
}

void fn_80194418(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 s31;
    s30 = p5;
    s31 = M32((p3+1016));
    fn_801C7944(s31);
    fn_801C787C(s31, s30);
}

void fn_80194460(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    float d1;
    s31 = p3;
    c0 = fn_80191680();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M32((s31+1012));
    d1 = fn_801C868C(v1);
    v2 = M32((s31+912));
    MF((v2+124)) = d1;
}

u32 fn_801944A4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80191680();
    if ((s32)c0 != (s32)0) {
        v1 = M32((s31+1012));
        c1 = fn_801C7ED4(v1);
        return c1;
    }
    return 0;
}

u32 fn_801944E8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80191680();
    if ((s32)c0 != (s32)0) {
        v1 = M32((s31+1012));
        c1 = fn_801C7EF4(v1);
        return c1;
    }
    return 0;
}

u32 fn_8019452C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80191680();
    if ((s32)c0 != (s32)0) {
        v1 = M32((s31+1012));
        c1 = fn_801C7F04(v1);
        return c1;
    }
    return 0;
}

u32 fn_80194570(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80191680();
    if ((s32)c0 != (s32)0) {
        v1 = M32((s31+1012));
        c1 = fn_801C7F24(v1);
        return c1;
    }
    return 0;
}

u32 fn_801945B4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80191680();
    if ((s32)c0 != (s32)0) {
        v1 = M32((s31+1012));
        c1 = fn_801C8110(v1);
        return c1;
    }
    return 0;
}

u32 fn_80194740(u32 p3) {
    u32 s31;
    u32 v1;
    u32 ph0;
    u32 c0;
    s31 = p3;
    v1 = M32(p3);
    ph0 = v1;
    if ((u32)v1 != (u32)0) {
        c0 = fn_8040B718(v1);
        ph0 = c0;
    }
    M32(s31) = 0;
    return ph0;
}

#pragma push
#pragma opt_lifetimes off
void fn_80194780(u32 p3) {
    s32 h1;
    u32 v2;
    u32 h2;
    u32 h5;
    u32 h4;
    u32 v9;
    u32 h7;
    float v10;
    fn_800551A8(M32(p3), fn_80055DA0());
    v2 = lbl_805DD810;
    h7 = M32((16+v2));
    h5 = h7;
    h2 = h5;
    fn_80409340(M32(p3), M32(h2), 0, 0);
    fn_80409250(M32(p3), lbl_805E10B0);
    fn_800550F4(M32(p3), ((1<<16)-1));
    v10 = lbl_805E10B4;
    v9 = M32(p3);
    h4 = M32((124+v9));
    h1 = h4;
    HSD_AObjSetRate(h1, v10);
}
#pragma pop

u32 fn_801950DC(u32 p3, u32 p4) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+4));
    if ((s32)v1 == (s32)0) {
        if ((u32)p4 != (u32)0) {
            c0 = fn_801C8798(p4);
            return c0;
        }
    }
    return 0;
}

u32 fn_8019511C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = M32((p3+4));
    v2 = M32((p3+1012));
    if ((s32)v1 == (s32)0) {
        if ((u32)v2 != (u32)0) {
            c0 = fn_801C8798(v2);
            return c0;
        }
    }
    return 0;
}

void fn_8019515C(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c1;
    s30 = p4;
    s29 = p3;
    v1 = M32((p3+1012));
    if ((u32)v1 != (u32)0) {
        v2 = M32((v1+44));
        s31 = fn_801D6360(v2);
        c1 = fn_8019C460(s29);
        if ((s32)c1 < (s32)s31) {
            v3 = M32((s29+1012));
            v4 = M32((v3+44));
            fn_801D63BC(v4, s30);
            v5 = M8((s29+2086));
            ((BFu8_3_1*)((s29+2086)))->f = 1;
        }
    }
    v6 = M8((s29+2086));
    if ((s32)((v6>>4)&0x1) != (s32)0) {
    return;
    }
    fn_8019C4BC(s29, s30);
}

void fn_801951F8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    v1 = M8((p3+2086));
    if ((s32)((v1>>4)&0x1) != (s32)0) {
        v2 = M32((s31+1012));
        v3 = M32((v2+44));
        fn_801D6488(v3);
        v4 = M8((s31+2086));
        ((BFu8_3_1*)((s31+2086)))->f = 0;
        return;
    }
    fn_8019C588();
}

float fn_80195250(void) {
    u32 v1;
    float v2;
    v1 = lbl_805DD840;
    v2 = MF(v1);
    return v2;
}

void fn_8019525C(u32 p3) {
    u32 v1;
    v1 = M32((p3+1012));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_801C76EC(v1);
}

u32 fn_801952F4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    if ((u32)v1 != (u32)0) {
        c0 = fn_801C7C7C(v1);
        M32((s31+12)) = c0;
        return c0;
    }
    M32((s31+12)) = -1;
    return v1;
}

void fn_8019533C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32((p3+4));
    if ((s32)v1 != (s32)0) {
    return;
    }
    v2 = M32((p3+12));
    if ((s32)v2 == (s32)1) {
        v3 = M8((p3+2608));
        ((BFu8_4_1*)((p3+2608)))->f = 1;
        return;
    }
    v4 = M8((p3+2608));
    ((BFu8_4_1*)((p3+2608)))->f = 0;
}

void fn_8019537C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+4));
    if ((s32)v1 != (s32)0) {
    return;
    }
    v2 = M8((p3+2608));
    ((BFu8_4_1*)((p3+2608)))->f = 0;
    if ((s32)v1 != (s32)0) {
    return;
    }
}

void fn_8019539C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+1012));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_801C89D8(v1);
    v2 = M8((s31+2082));
    ((BFu8_2_1*)((s31+2082)))->f = 1;
}

void fn_801953E4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+1012));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_801C89F0(v1);
    v2 = M8((s31+2082));
    ((BFu8_2_1*)((s31+2082)))->f = 0;
}

void fn_8019542C(u32 p3) {
    u32 s29;
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    u32 c5;
    u32 c6;
    s29 = p3;
    c0 = fn_8005D440();
    M32((s29+1232)) = c0;
    c1 = fn_8005D440();
    M32((s29+1236)) = c1;
    c2 = fn_8005D12C();
    M32((s29+1240)) = c2;
    c3 = fn_8005D12C();
    M32((s29+1244)) = c3;
    s31 = s29;
    s30 = 0;
    do {
        c4 = fn_8005D12C();
        s30 = (s30+1);
        M32((s31+1248)) = c4;
        s31 = (s31+4);
    } while ((s32)s30 < (s32)3);
    c5 = fn_8005D12C();
    M32((s29+1260)) = c5;
    v1 = M8((s29+8));
    c6 = fn_8005DC5C(v1);
    M32((s29+1228)) = c6;
    fn_80195250();
    v2 = M32((s29+1228));
    fn_8005DB44(v2, (s29+768));
}

void fn_801954C8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    s31 = p3;
    v1 = M32((p3+1232));
    fn_8005EA20(v1, 1);
    v2 = M32((s31+1232));
    fn_8005D64C(v2);
    v3 = M32((s31+1236));
    fn_8005EA20(v3, 1);
    v4 = M32((s31+1236));
    fn_8005D64C(v4);
    v5 = M32((s31+1240));
    fn_8005EA20(v5, 1);
    v6 = M32((s31+1240));
    fn_8005D64C(v6);
    v7 = M32((s31+1244));
    fn_8005EA20(v7, 1);
    v8 = M32((s31+1244));
    fn_8005D64C(v8);
    v9 = M32((s31+1228));
    fn_8005E08C(v9);
}

void fn_80195548(u32 p3, u32 p4, u32 p5, float q1) {
    float v1;
    u32 v2;
    v1 = lbl_805E10C8;
    v2 = M32((p3+1228));
    fn_8005F034(p5, p4, v2, ((s32)(v1*q1)));
}

u32 fn_80195588(u32 p3, u32 p4, float q1) {
    float v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805E10C8;
    v2 = M32((p3+1232));
    v3 = M32((p3+1228));
    fn_8005F034(p4, v2, v3, ((s32)(v1*q1)));
}

void fn_801955CC(u32 p3, u32 p4, u32 p5, float q1) {
    float v1;
    u32 v2;
    v1 = lbl_805E10C8;
    v2 = M32((p3+1232));
    fn_8005F034(p4, v2, p5, ((s32)(v1*q1)));
}

void fn_8019560C(u32 p3, u32 p4, float q1) {
    float v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805E10C8;
    v2 = M32((p3+1236));
    v3 = M32((p3+1228));
    fn_8005F034(p4, v2, v3, ((s32)(v1*q1)));
}

void fn_80195650(u32 p3, u32 p4, float q1) {
    float v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805E10C8;
    v2 = M32((p3+1240));
    v3 = M32((p3+1228));
    fn_8005F034(p4, v2, v3, ((s32)(v1*q1)));
}

void fn_80195694(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+1236));
    fn_8005EA20(v1, 1);
    v2 = M32((s31+1240));
    fn_8005EA20(v2, 1);
}

void fn_801956D4(u32 p3, u32 p4) {
    fn_8005EA20(p4, 1);
}

void fn_801956FC(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_80195250();
    v1 = M32((s31+1228));
    fn_8005DB44(v1, (s31+768));
}

void fn_80195734(u32 p3, u32 p4) {
    fn_8005DB44(p4, (p3+768), p3);
}

void fn_80195760(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_8027B418(0);
    M32((s31+1644)) = c0;
    v1 = M32((s31+1644));
    fn_8027B534(v1);
    v2 = M8((s31+2085));
    ((BFu8_0_1*)((s31+2085)))->f = 0;
}

void fn_80195800(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M8((p3+2085));
    if ((s32)((v1>>7)&0x1) != (s32)0) {
        v2 = M8((p3+2081));
        if ((s32)((v2>>6)&0x1) != (s32)0) {
            v3 = M32((p3+1644));
            fn_8027B524(v3);
            return;
        }
    }
    v4 = M32((p3+1644));
    fn_8027B534(v4);
}

void fn_80195F28(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M32((p3+912));
    fn_8018CC38(v1);
    fn_8019BFB4(s31, 3, 0);
}

void fn_80195F68(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M32((p3+912));
    fn_8018CB5C(v1);
    fn_8019BFB4(s31, 2, 0);
}

void fn_8019600C(u32 p3, u32 p4, u32 p5, u32 p6, float q1, float q2) {
    float g31;
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    g31 = q2;
    s30 = p6;
    s29 = p4;
    s31 = M32((p3+44));
    v2 = M32(s31);
    v3 = M32((s31+1084));
    fn_8018DBA0(v2, v3, s29, p5, s30, g31);
    v4 = M32((s31+1232));
    v5 = M32((s31+1228));
    fn_8018DC88(v4, v5, s29, s30, (u32)lbl_804AE028, (u32)lbl_804AE0A0, g31);
}

void fn_801960A0(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+688));
    v2 = M32((p3+912));
    v3 = M32(v1+(p5<<4));
    fn_8018C8C4(v2, p4, v3);
}

void fn_801960D0(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    s31 = 0;
    s29 = 0;
    s28 = p3;
    v1 = M32((p3+24));
    s30 = M32((v1+16));
    while ((v8 = M32((s30+4)), (s32)s29 < (s32)v8)) {
        v3 = M32(s30);
        v4 = M32((s28+688));
        v5 = M32((s28+912));
        v6 = M32((v3+s31));
        v7 = M32(v4+(v6<<4));
        fn_8018C598(v5, s29, v7, ((v3+s31)+4));
        s31 = (s31+24);
        s29 = (s29+1);
    }
    v9 = M8((s28+2086));
    ((BFu8_0_1*)((s28+2086)))->f = 0;
}

void fn_80196244(u32 p3) {
    u32 v1;
    v1 = M32((p3+912));
    fn_8018C2E4(v1);
}

void fn_801967A8(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+4));
    v2 = M8((p3+10));
    fn_8022D778(p4, v1, v2);
}

void fn_80196C54(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = HSD_ObjAlloc((u32)lbl_80559F40);
    M32((s31+1936)) = c0;
}

void fn_80196F18(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    M8(((u32)p3+1044+(p4<<1))) = p5;
    v1 = M8((p3+2080));
    ((BFu8_6_1*)((p3+2080)))->f = 1;
}

#pragma push
#pragma optimization_level 2
void fn_80196F38(u32 p3, u32 p4) {
    s32 v2;
    u32 v1;
    v1 = M8(((u32)p3+1045+(p4<<1)));
    v2 = M8(((u32)p3+1044+(p4<<1)));
    if (((s8)v1) == (s32)((s8)v2)) {
    return;
    }
    fn_80197074(p3, p4, ((s8)v2));
}
#pragma pop

void fn_80197074(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 v2;
    s30 = p3;
    v1 = M8(((u32)s30+1045+(p4<<1)));
    if ((s32)p5 == (s32)((s8)v1)) {
    return;
    }
    M8(((u32)s30+1045+(p4<<1))) = p5;
    s31 = 0;
    v2 = M8((s30+2080));
    ((BFu8_6_1*)((s30+2080)))->f = 1;
    do {
        fn_801971D8((s30+1036), s31, (s30+692));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)3);
}

void fn_801970F0(p3, p4, p5) u32 p3; u32 p4; u32 p5; {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 s26;
    u32 s25;
    u32 s24;
    u32 s23;
    u32 s22;
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
    s30 = p3;
    v1 = M32(p3);
    s31 = p5;
    v2 = M32(((u32)v1+4+(p4<<2)));
    if ((u32)v2 == (u32)0) {
    return;
    }
    s26 = (s30+p4);
    v3 = M8((s26+4));
    if ((u32)v3 != (u32)0) {
    return;
    }
    s27 = v2;
    s25 = 0;
    while ((v11 = M32(s30), v12 = M32(v11), (s32)s25 < (s32)v12)) {
        s24 = 0;
        s28 = 0;
        while ((v10 = M32(s27), (s32)s24 < (s32)v10)) {
            v4 = M32((s27+4));
            s22 = 0;
            s23 = (v4+s28);
            v5 = M32((s23+4));
            s29 = v5;
            while ((v9 = M32(s23), (s32)s22 < (s32)v9)) {
                v6 = M8(s29);
                v7 = M32((s31+4));
                v8 = M32(v7+(v6<<2));
                HSD_DObjClearFlags(v8, 1);
                s22 = (s22+1);
                s29 = (s29+1);
            }
            s28 = (s28+8);
            s24 = (s24+1);
        }
        s27 = (s27+8);
        s25 = (s25+1);
    }
    M8((s26+4)) = 1;
}

void fn_801971D8(p3, p4, p5) u32 p3; u32 p4; u32 p5; {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 s26;
    u32 s25;
    u32 s24;
    u32 s23;
    u32 s22;
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
    s30 = p3;
    v1 = M32(p3);
    s31 = p5;
    v2 = M32(((u32)v1+4+(p4<<2)));
    if ((u32)v2 == (u32)0) {
    return;
    }
    s26 = (s30+p4);
    v3 = M8((s26+4));
    if ((u32)v3 == (u32)0) {
    return;
    }
    s27 = v2;
    s25 = 0;
    while ((v11 = M32(s30), v12 = M32(v11), (s32)s25 < (s32)v12)) {
        s24 = 0;
        s28 = 0;
        while ((v10 = M32(s27), (s32)s24 < (s32)v10)) {
            v4 = M32((s27+4));
            s22 = 0;
            s23 = (v4+s28);
            v5 = M32((s23+4));
            s29 = v5;
            while ((v9 = M32(s23), (s32)s22 < (s32)v9)) {
                v6 = M8(s29);
                v7 = M32((s31+4));
                v8 = M32(v7+(v6<<2));
                HSD_DObjSetFlags(v8, 1);
                s22 = (s22+1);
                s29 = (s29+1);
            }
            s28 = (s28+8);
            s24 = (s24+1);
        }
        s27 = (s27+8);
        s25 = (s25+1);
    }
    M8((s26+4)) = 0;
}

void fn_80197664(u32 p3, u32 p4) {
    u32 s31;
    s31 = p3;
    switch ((s32)p4) {
    case 0:
        fn_801972C0(p3, 1, 0);
        fn_801972C0(s31, 2, 0);
        fn_801972C0(s31, 0, 1);
        break;
    case 1:
        fn_801972C0(p3, 0, 0);
        fn_801972C0(s31, 2, 0);
        fn_801972C0(s31, 1, 1);
        break;
    case 2:
        fn_801972C0(p3, 0, 0);
        fn_801972C0(s31, 1, 0);
        fn_801972C0(s31, 2, 1);
    }
}

void fn_8019773C(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 s31;
    u32 v2;
    s30 = p4;
    s31 = M32((p4+16));
    M32((p4+16)) = 0;
    v2 = M32(((u32)(u32)hsdJObj+60));
    ((void (*)())(v2))(p3, p4, p5, (u32)hsdJObj);
    M32((s30+16)) = s31;
}

u32 fn_801977EC(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_8040AD74((u32)lbl_804AE0E8);
    c1 = HSD_JObjLoadJoint(s31);
    s31 = c1;
    fn_8040AD74(0);
    return s31;
}

void fn_80197A30(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+688));
    v2 = M32(v1);
    c0 = fn_80055130(v2);
    v3 = M32((s31+688));
    M32((v3+784)) = c0;
}

void fn_80197A6C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+688));
    v2 = M32((v1+784));
    fn_8040B718(v2);
}

void fn_80198910(p3) u32 p3; {
    fn_80408BD0(p3, 1);
}

void fn_80198D1C(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    M8(((u32)p3+1066+(p4*3))) = p5;
    v1 = M8((p3+2081));
    ((BFu8_0_1*)((p3+2081)))->f = 1;
}

void fn_80198F7C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 s26;
    u32 s25;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    s25 = p3;
    s26 = p4;
    s29 = 0;
    s30 = 0;
    while ((v9 = M32((s25+4)), (u32)s29 < (u32)v9)) {
        v1 = M32(s25);
        s27 = 0;
        s31 = 0;
        s28 = (v1+s30);
        while ((v8 = M32((s28+4)), (u32)s27 < (u32)v8)) {
            v2 = M32(s28);
            v3 = M32((s26+4));
            v4 = M16(v2+s31);
            v5 = lbl_805E1138;
            v6 = M32(v3+(v4<<2));
            v7 = M32((v6+100));
            HSD_AObjSetRate(v7, v3, v5);
            s31 = (s31+2);
            s27 = (s27+1);
        }
        s30 = (s30+8);
        s29 = (s29+1);
    }
}

void fn_80199118(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+20));
    c0 = fn_801977EC(v1);
    M32((s31+684)) = c0;
    v2 = lbl_805E1138;
    MF((s31+676)) = v2;
    MF((s31+680)) = v2;
    fn_8019783C(s31);
}

void fn_8019970C(u32 p3, u32 p4) {
    u32 v1;
    u32 c0;
    c0 = fn_80199734();
    v1 = M32(c0);
    fn_8006E58C(v1);
}

void fn_80199D84(u32 p3) {
    u32 v1;
    v1 = M32((p3+1216));
    if ((s32)v1 == (s32)0) {
    return;
    }
    M32((p3+1216)) = (v1-1);
    if ((s32)v1 != (s32)0) {
    return;
    }
}

void fn_80199E8C(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    float v5;
    v1 = M32((p3+1648));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((p3+24));
    v3 = MF((p3+844));
    v4 = M32((v2+20));
    v5 = MF(v4);
    fn_80245C10(v1, (p3+768), (p3+804), (p3+816), (v4+4), 0, v5, v3);
}

void fn_80199FE0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32(p3);
    c0 = fn_80245B4C(v1);
    M32((s31+1648)) = c0;
}

u32 fn_8019A3D4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32((p3+1648));
    v2 = M32((v1+68));
    s31 = M32((v2+284));
    v4 = M8((s31+1));
    if ((s32)(v4&0x1) == (s32)0) {
        __assert((u32)&lbl_805D6F20, 148, (u32)lbl_804AE160);
    }
    v5 = M32((s31+4));
    v6 = M32(v5);
    return v6;
}

void fn_8019A42C(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    s30 = p4;
    v1 = M32((p3+1648));
    v2 = M32((v1+68));
    s31 = M32((v2+284));
    v4 = M8((s31+1));
    if ((s32)(v4&0x1) == (s32)0) {
        __assert((u32)&lbl_805D6F20, 169, (u32)lbl_804AE160);
    }
    v5 = M32((s31+4));
    *(S12*)(s30) = *(S12*)((v5+8));
}

void fn_8019A4A4(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    s30 = p4;
    v1 = M32((p3+1648));
    v2 = M32((v1+68));
    s31 = M32((v2+284));
    v4 = M8((s31+1));
    if ((s32)(v4&0x1) == (s32)0) {
        __assert((u32)&lbl_805D6F20, 190, (u32)lbl_804AE160);
    }
    v5 = M32((s31+4));
    *(S12*)(s30) = *(S12*)((v5+20));
}

void fn_8019A51C(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    u32 v6;
    s30 = p4;
    v1 = M32((p3+1648));
    v2 = M32((v1+68));
    s31 = M32((v2+284));
    v4 = M8((s31+1));
    if ((s32)(v4&0x1) == (s32)0) {
        __assert((u32)&lbl_805D6F20, 148, (u32)lbl_804AE160);
    }
    v5 = M32((s31+4));
    v6 = M32(v5);
    fn_800D1860(v6, s30);
}

void fn_8019A588(u32 p3) {
    u32 v1;
    v1 = M32((p3+1600));
    fn_800D1860(v1);
}

void fn_8019A638(u32 p3) {
    M32((p3+716)) = 0;
}

void fn_8019A644(u32 p3) {
    u32 v1;
    v1 = M8((p3+2083));
    ((BFu8_3_1*)((p3+2083)))->f = 0;
    M32((p3+716)) = 1;
}

u32 fn_8019AA54(u32 p3) {
    u32 v1;
    v1 = M8((p3+2083));
    return (((-(s32)((v1>>4)&0x1))|((v1>>4)&0x1))>>31);
}

float fn_8019AE50(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    s31 = M32((p3+1648));
    v2 = M32((s31+828));
    if ((s32)v2 != (s32)0) {
        __assert((u32)&lbl_805D6F20, 505, (u32)lbl_804AE184);
    }
    v3 = M32((s31+828));
    if ((s32)v3 != (s32)0) {
        __assert((u32)lbl_804AE1B8, 249, (u32)lbl_804AE184);
    }
    v4 = M32((s31+832));
    v5 = MF((v4+48));
    return v5;
}

void fn_8019AEC4(u32 p3, u32 p4) {
    u32 s30;
    u32 s31;
    u32 v2;
    s30 = p4;
    s31 = M32((p3+1648));
    v2 = M32((s31+828));
    if ((s32)v2 != (s32)0) {
        __assert((u32)&lbl_805D6F20, 483, (u32)lbl_804AE184);
    }
    *(S12*)(s30) = *(S12*)((s31+8));
}

u32 fn_8019B078(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 v5;
    u32 v6;
    v1 = M32((p4+8));
    v2 = M32(v1);
    switch ((s32)(v2&0x3ffffff)) {
    case 0:
        v3 = M8((p3+2072));
        ((BFu8_1_1*)((p3+2072)))->f = 1;
        v4 = MF(p4);
        MF((p3+2076)) = v4;
        break;
    case 1:
        v5 = M8((p3+2072));
        ((BFu8_2_1*)((p3+2072)))->f = 1;
    }
    v6 = M32((p4+8));
    M32((p4+8)) = (v6+4);
    return v6;
}

u32 fn_8019B0D8(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M8((p3+2072));
    ((BFu8_0_1*)((p3+2072)))->f = 1;
    v2 = M32((p4+8));
    M32((p4+8)) = (v2+4);
    return v2;
}

void fn_8019B378(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = p4;
    v1 = M32((p4+8));
    v2 = M32((p3+912));
    v3 = M32(v1);
    fn_8018C7F8(v2, (v3&0x3ffffff));
    v4 = M32((s31+8));
    M32((s31+8)) = (v4+4);
}

void fn_8019B3C0(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p4;
    v1 = M32((p3+912));
    fn_8018C824(v1);
    v2 = M32((s31+8));
    M32((s31+8)) = (v2+4);
}

void fn_8019B3FC(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p4;
    v1 = M32((p4+8));
    v2 = M32(v1);
    fn_80195FA8(p3, (v2&0x3ffffff));
    v3 = M32((s31+8));
    M32((s31+8)) = (v3+4);
}

void fn_8019B494(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    s31 = p4;
    fn_80196F78();
    v1 = M32((s31+8));
    M32((s31+8)) = (v1+4);
}

void fn_8019B4CC(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    s31 = p4;
    fn_80197008();
    v1 = M32((s31+8));
    M32((s31+8)) = (v1+4);
}

void fn_8019B6F0(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p4;
    v1 = M32((p4+8));
    v2 = M8((v1+3));
    if ((s32)(v2&0x1) != (s32)0) {
        fn_8019C15C(p3, v1);
    } else {
        fn_8019BFF8(p3, v1);
    }
    v3 = M32((s31+8));
    M32((s31+8)) = (v3+4);
}

void fn_8019B7D0(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    s31 = p4;
    v1 = M32((p4+8));
    v2 = M8(v1);
    if ((s32)((v2>>1)&0x1) != (s32)0) {
        v3 = M32(v1);
        v4 = M16((v1+2));
        fn_80190B40(((v3>>13)&0xfff), (v4&0x1fff), v1);
    } else {
        v5 = M32(v1);
        v6 = M16((v1+2));
        fn_80190ADC(p3, ((v5>>13)&0xfff), (v6&0x1fff));
    }
    v7 = M32((s31+8));
    M32((s31+8)) = (v7+4);
}

void fn_8019B840(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p4;
    v1 = M32((p4+8));
    v2 = M32(v1);
    fn_80190BC4(p3, (v2&0x3ffffff));
    v3 = M32((s31+8));
    M32((s31+8)) = (v3+4);
}

u32 fn_8019B98C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = M32((p4+8));
    v2 = M8(v1);
    switch ((s32)(v2&0x3)) {
    case 0:
        v3 = M32(v1);
        M32((p3+2056)) = (v3&0xffffff);
        break;
    case 1:
        v4 = M32(v1);
        M32((p3+2060)) = (v4&0xffffff);
        break;
    case 2:
        v5 = M32(v1);
        M32((p3+2064)) = (v5&0xffffff);
        break;
    case 3:
        v6 = M32(v1);
        M32((p3+2068)) = (v6&0xffffff);
    }
    v7 = M32((p4+8));
    M32((p4+8)) = (v7+4);
    return v7;
}

void fn_8019BA0C(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    s31 = p4;
    v1 = M32((p4+8));
    v2 = M16(v1);
    v3 = M32(v1);
    v4 = M8((v1+1));
    fn_80193500(p3, ((v2>>2)&0xff), (v3&0x1ffff), ((v4>>1)&0x1));
    v5 = M32((s31+8));
    M32((s31+8)) = (v5+4);
}

void fn_8019BA60(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p4;
    v1 = M32((p4+8));
    v2 = M8(v1);
    fn_8019353C(p3, ((v2>>1)&0x1));
    v3 = M32((s31+8));
    M32((s31+8)) = (v3+4);
}

void fn_8019BE60(u32 p3, u32 p4) {
    float v1;
    M32((p3+64)) = p4;
    v1 = lbl_805E11AC;
    M32((p3+68)) = 0;
    MF((p3+56)) = v1;
}

void fn_8019BE78(u32 p3) {
    fn_80068D68((p3+56));
}

void fn_8019BE9C(void) {
    fn_8019B504();
}

void fn_8019BEBC(void) {
    fn_8019B884();
}

u32 fn_8019BF14(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = M32(((u32)(u32)lbl_804AE2B0+4+((p5-25)*12)));
    if ((u32)v1 != (u32)0) {
        c0 = ((u32 (*)())(v1))(p3, p4, ((u32)lbl_804AE2B0+((p5-25)*12)), ((p5-25)*12));
        return c0;
    }
    v2 = M8(((u32)(u32)lbl_804AE2B0+8+((p5-25)*12)));
    v3 = M32((p4+8));
    M32((p4+8)) = (v3+(v2<<2));
    return v3;
}

u32 fn_8019BF70(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DD810;
    v2 = M32((v1+4));
    c0 = fn_8006A3F0((p3+264), v2, p4, p5, v1);
    return (((-(s32)c0)|c0)>>31);
}

u32 fn_8019BFB4(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = lbl_805DD810;
    v2 = M32((v1+4));
    c0 = fn_8006A3F0((p3+92), v2, p4, p5, v1);
    return (((-(s32)c0)|c0)>>31);
}

void fn_8019BFF8(u32 p3, u32 p4) {
    u32 s31;
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
    s31 = p3;
    fn_8006A250((s31+92));
    v1 = M32((s31+912));
    c1 = fn_8018CD9C(v1);
    if ((s32)c1 == (s32)2) {
        v2 = lbl_805DD810;
        v3 = M32((v2+4));
        fn_8006A3F0((s31+92), v3, 2, 0);
    }
    v4 = M32((s31+912));
    c3 = fn_8018CD9C(v4);
    if ((s32)c3 == (s32)1) {
        v5 = lbl_805DD810;
        v6 = M32((v5+4));
        fn_8006A3F0((s31+92), v6, 3, 0);
    }
    v7 = M32((s31+4));
    v8 = M32((u32)lbl_804ADBD8+(v7<<2));
    v9 = M32((v8+68));
    if ((u32)v9 == (u32)0) {
    return;
    }
    ((void (*)())(v9))(s31);
}

void fn_8019C0A4(u32 p3, u32 p4) {
    u32 s31;
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
    u32 c1;
    u32 c3;
    s31 = p3;
    v1 = M32((p3+132));
    if ((s32)p4 != (s32)v1) {
    return;
    }
    fn_8006A250((s31+92));
    v2 = M32((s31+912));
    c1 = fn_8018CD9C(v2);
    if ((s32)c1 == (s32)2) {
        v3 = lbl_805DD810;
        v4 = M32((v3+4));
        fn_8006A3F0((s31+92), v4, 2, 0);
    }
    v5 = M32((s31+912));
    c3 = fn_8018CD9C(v5);
    if ((s32)c3 == (s32)1) {
        v6 = lbl_805DD810;
        v7 = M32((v6+4));
        fn_8006A3F0((s31+92), v7, 3, 0);
    }
    v8 = M32((s31+4));
    v9 = M32((u32)lbl_804ADBD8+(v8<<2));
    v10 = M32((v9+68));
    if ((u32)v10 == (u32)0) {
    return;
    }
    ((void (*)())(v10))(s31);
}

void fn_8019C15C(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p3;
    fn_8006AD80((s31+92));
    v1 = M32((s31+4));
    v2 = M32((u32)lbl_804ADBD8+(v1<<2));
    v3 = M32((v2+68));
    if ((u32)v3 == (u32)0) {
    return;
    }
    ((void (*)())(v3))(s31);
}

void fn_8019C3E0(u32 p3) {
    fn_8006AD20((p3+92));
}

u32 fn_8019C404(u32 p3) {
    u32 v1;
    u32 c0;
    c0 = fn_8006AD20((p3+92));
    if ((u32)c0 != (u32)0) {
        v1 = M32((c0+40));
        return v1;
    }
    return 0;
}

void fn_8019C43C(u32 p3) {
    fn_8006ADA4((p3+92));
}

u32 fn_8019C460(u32 p3) {
    u32 v1;
    u32 c0;
    c0 = fn_8006AD20((p3+92));
    if ((u32)c0 != (u32)0) {
        v1 = M8((c0+169));
        return v1;
    }
    return 0;
}

void fn_8019C498(u32 p3) {
    fn_8006ADE0((p3+92));
}

void fn_8019C898(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+24));
    v2 = M32((v1+32));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_802201E0(v2);
}

void fn_8019DDB8(u32 p3) {
    u32 s31;
    u32 s30;
    s31 = 0;
    s30 = p3;
    do {
        fn_8019DE04(s30, s31);
        s31 = (s31+1);
    } while ((s32)s31 < (s32)3);
}

u32 fn_8019DE04(u32 p3, u32 p4) {
    M32(((u32)p3+1296+(p4*36))) = 0;
    M32(((u32)p3+1300+(p4*36))) = 0;
    M32(((u32)p3+1304+(p4*36))) = 0;
    M32(((u32)p3+1308+(p4*36))) = 0;
    M32(((u32)p3+1312+(p4*36))) = 0;
    M32(((u32)p3+1316+(p4*36))) = 0;
    M32(((u32)p3+1320+(p4*36))) = 0;
    M32(((u32)p3+1324+(p4*36))) = 0;
    M32(((u32)p3+1328+(p4*36))) = 0;
    M32(((u32)p3+1404+(p4<<2))) = 0;
    M32(((u32)p3+1284+(p4<<2))) = 0;
    return (p3+(p4*36));
}

u32 fn_8019DE48(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    v1 = M32(p5);
    M32(((u32)p3+1296+(p4*36))) = v1;
    v2 = M32((p5+4));
    M32(((u32)p3+1300+(p4*36))) = v2;
    v3 = M32((p5+8));
    M32(((u32)p3+1304+(p4*36))) = v3;
    v4 = M32((p5+12));
    M32(((u32)p3+1308+(p4*36))) = v4;
    v5 = M32((p5+16));
    M32(((u32)p3+1312+(p4*36))) = v5;
    v6 = M32((p5+20));
    M32(((u32)p3+1316+(p4*36))) = v6;
    v7 = M32((p5+24));
    M32(((u32)p3+1320+(p4*36))) = v7;
    v8 = M32((p5+28));
    M32(((u32)p3+1324+(p4*36))) = v8;
    v9 = M32((p5+32));
    M32(((u32)p3+1328+(p4*36))) = v9;
    return (p3+(p4*36));
}

void fn_8019DF88(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    s30 = 0;
    s29 = p3;
    s31 = s29;
    do {
        v1 = M32((s31+1248));
        fn_801956D4(s29, v1);
        s30 = (s30+1);
        s31 = (s31+4);
    } while ((s32)s30 < (s32)3);
    v2 = M32((s29+1260));
    fn_801956D4(s29, v2);
}

void fn_8019E0C0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    v1 = M32((p3+1416));
    if ((s32)v1 == (s32)0) {
    return;
    }
    M32((s31+1416)) = (v1-1);
    v2 = M32((s31+1416));
    if ((s32)v2 > (s32)0) {
    return;
    }
    v3 = M32((s31+1260));
    fn_801956D4(p3, v3);
    v4 = M32((s31+1012));
    if ((u32)v4 == (u32)0) {
    return;
    }
    fn_801C87D4(v4);
}

void fn_8019E268(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_802364E0();
    M32((s31+1084)) = c0;
    c1 = fn_802364E0();
    M32((s31+1088)) = c1;
}

void fn_8019E2A0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    v1 = M32((p3+1084));
    fn_8023641C(v1);
    v2 = M32((s31+1088));
    fn_8023641C(v2);
    v3 = M32((s31+1084));
    fn_80236778(v3);
    v4 = M32((s31+1088));
    fn_80236778(v4);
}

void fn_8019E2E8(u32 p3) {
    u32 v1;
    v1 = M32((p3+1088));
    fn_80236358(v1);
}

void fn_8019E930(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32((p3+1188));
    if ((s32)v1 == (s32)0) {
    return;
    }
    M32((p3+1188)) = (v1-1);
    v2 = M32((p3+1188));
    if ((s32)v2 != (s32)0) {
    return;
    }
    v3 = M8((p3+2082));
    if ((s32)((v3>>6)&0x1) != (s32)0) {
        ((BFu8_1_1*)((p3+2082)))->f = 0;
    }
    v4 = M8((p3+2082));
    ((BFu8_0_1*)((p3+2082)))->f = 0;
}

void fn_8019EB0C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+2048));
    if ((u32)v1 != (u32)0) {
        ((void (*)())(v1))();
    }
    v2 = M8((s31+2081));
    ((BFu8_5_1*)((s31+2081)))->f = 1;
}

void fn_8019EBF8(u32 p3) {
    u32 v1;
    v1 = M32((p3+1268));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80194800((p3+1268), (p3+1272));
}

void fn_8019EC58(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+1904));
    if ((s32)v1 < (s32)20) {
        M32((p3+1904)) = (v1+1);
    }
    v2 = M32((p3+1908));
    if ((s32)v2 >= (s32)20) {
    return;
    }
    M32((p3+1908)) = (v2+1);
    if ((s32)v2 != (s32)20) {
    return;
    }
}

void fn_8019EC84(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 v5;
    float v6;
    u32 v7;
    u32 v8;
    s31 = p3;
    v1 = M32((p3+24));
    v2 = M32((s31+688));
    v3 = M32((v1+24));
    v4 = MF((s31+712));
    v5 = M32(v3);
    v6 = MF((s31+844));
    v7 = M32(v2+(v5<<4));
    fn_8018AFE4((s31+1652), (v3+4), v7, v4, v6);
    v8 = M8((s31+2082));
    ((BFu8_7_1*)((s31+2082)))->f = 0;
}

void fn_8019ED48(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    float v4;
    v1 = lbl_805E11F0;
    v2 = M32((p3+24));
    v3 = M32((v2+24));
    v4 = MF((v3+8));
    fn_8018B17C((p3+1652), v3, (v4*v1), v1);
}

void fn_8019F37C(void) {
    fn_80190C54();
}

void fn_8019F39C(void) {
    fn_80199C40();
}

void fn_8019F3BC(void) {
    fn_8019FC5C();
}

void fn_8019F3DC(void) {
    fn_8019FC60();
}

void fn_8019F3FC(void) {
    fn_8019FC80();
}

void fn_8019F41C(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    u32 v4;
    v1 = lbl_805E11F8;
    v2 = lbl_805E11FC;
    s31 = p3;
    fn_8018E580(p3, 0, -1, 0, v1, v2, v1);
    v3 = M8((s31+2081));
    ((BFu8_2_1*)((s31+2081)))->f = 1;
    v4 = M8((s31+2080));
    ((BFu8_0_1*)((s31+2080)))->f = 1;
}

void fn_8019F490(void) {
    fn_80192E10();
}

void fn_8019F5BC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 ph0;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_8019F6CC(s31);
        return;
    }
    v1 = M8((s31+2072));
    if ((s32)((v1>>6)&0x1) != (s32)0) {
        ((BFu8_1_1*)((s31+2072)))->f = 0;
        ph0 = 1;
    } else {
        ph0 = 0;
    }
    if ((s32)ph0 == (s32)0) {
    return;
    }
    M32((s31+2620)) = 1;
    if ((s32)ph0 != (s32)0) {
    return;
    }
}

void fn_8019F7A0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_8019F80C(s31);
}

void fn_8019F7E8(void) {
    fn_80193830();
}

void fn_8019F80C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+4));
    v2 = M32((u32)lbl_804ADBD8+(v1<<2));
    v3 = M32((v2+76));
    if ((u32)v3 == (u32)0) {
    return;
    }
    ((void (*)())(v3))(p3, v2);
}

void fn_8019F850(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+4));
    v2 = M32((u32)lbl_804ADBD8+(v1<<2));
    v3 = M32((v2+80));
    if ((u32)v3 == (u32)0) {
    return;
    }
    ((void (*)())(v3))(p3, v2);
}

void fn_8019FBF4(p3) u32 p3; {
    u32 loc12[1];
    u32 loc8[1];
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    s31 = p3;
    fn_80190948(p3, ((u32)loc12), ((u32)loc8));
    v1 = M32((s31+1012));
    v2 = MF(((u32)loc8));
    v3 = MF(((u32)loc12));
    fn_801C75F4(v1, 0, v2, v3);
}

void fn_8019FC3C(void) {
    fn_80199C14();
}

void fn_8019FC60(void) {
    fn_80193830();
}

void fn_8019FC80(void) {
    fn_80193004();
}

void fn_8019FCA0(u32 p3) {
    fn_8019F894(p3, 7, 8);
}

void fn_8019FD38(void) {
    fn_80199C14();
}

void fn_8019FD5C(void) {
    fn_80193830();
}

void fn_8019FD7C(void) {
    fn_80193004();
}

void fn_8019FD9C(u32 p3) {
    u32 loc12[1];
    u32 loc8[1];
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    s31 = p3;
    fn_80190948(p3, ((u32)loc12), ((u32)loc8));
    v1 = M32((s31+1012));
    v2 = MF(((u32)loc8));
    v3 = MF(((u32)loc12));
    fn_801C75F4(v1, 0, v2, v3);
}

void fn_8019FDE4(void) {
    fn_80199C14();
}

void fn_8019FE08(void) {
    fn_80193830();
}

void fn_8019FE28(void) {
    fn_80193004();
}

void fn_8019FE48(u32 p3) {
    fn_8019F894(p3, 10, 11);
}

void fn_8019FEE0(void) {
    fn_80199C14();
}

void fn_8019FF04(void) {
    fn_80193830();
}

void fn_8019FF24(void) {
    fn_80193004();
}

void fn_8019FF44(u32 p3) {
    fn_8019F894(p3, 14, 15);
}

void fn_8019FFDC(void) {
    fn_80199C14();
}

void fn_801A0000(void) {
    fn_80193830();
}

void fn_801A0020(void) {
    fn_80193004();
}

void fn_801A008C(void) {
    fn_80199C14();
}

void fn_801A00B0(void) {
    fn_80193830();
}

void fn_801A00D0(void) {
    fn_80193004();
}

void fn_801A013C(void) {
    fn_80199C14();
}

void fn_801A0160(void) {
    fn_80193830();
}

void fn_801A0180(void) {
    fn_80193004();
}

void fn_801A01EC(void) {
    fn_80199C14();
}

void fn_801A0210(void) {
    fn_80193830();
}

void fn_801A0230(void) {
    fn_80193004();
}

void fn_801A0300(p3) u32 p3; {
    u32 loc12[1];
    u32 loc8[1];
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    s31 = p3;
    fn_80190948(p3, ((u32)loc12), ((u32)loc8));
    v1 = M32((s31+1012));
    v2 = MF(((u32)loc8));
    v3 = MF(((u32)loc12));
    fn_801C75F4(v1, 1, v2, v3);
}

void fn_801A0348(void) {
    fn_80199C40();
}

void fn_801A0368(void) {
    fn_8019FC5C();
}

void fn_801A0388(void) {
    fn_8019FC60();
}

void fn_801A03A8(void) {
    fn_8019FC80();
}

u32 fn_801A03C8(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+1012));
    c0 = fn_801C7AE4(v1);
    return (((-(s32)c0)|c0)>>31);
}

void fn_801A04B8(void) {
    fn_80199C40();
}

void fn_801A04DC(void) {
    fn_80193830();
}

void fn_801A04FC(void) {
    fn_80193004();
}

void fn_801A0520(void) {
    fn_80199C14();
}

void fn_801A0544(void) {
    fn_80193830();
}

void fn_801A0564(void) {
    fn_80193004();
}

void fn_801A0584(u32 p3) {
    u32 s31;
    float d0;
    s31 = p3;
    d0 = fn_800D4F20((s31+768));
    MF((s31+1264)) = d0;
}

void fn_801A05B8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    v1 = M32((p3+4));
    v2 = M32((u32)lbl_804ADBD8+(v1<<2));
    v3 = M32((v2+100));
    if ((u32)v3 != (u32)0) {
        ((void (*)())(v3))(p3, v2);
    }
    v4 = M8((s31+2083));
    ((BFu8_5_1*)((s31+2083)))->f = 1;
}

void fn_801A0620(void) {
    fn_80199C14();
}

void fn_801A0644(void) {
    fn_80193830();
}

void fn_801A0664(void) {
    fn_80193004();
}

void fn_801A0684(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8((p3+8));
    fn_8027A60C(v1);
}

u32 fn_801A06A8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_801943E4();
    if ((s32)c0 != (s32)0) {
        fn_801A3274(s31);
        return 1;
    }
    return 0;
}

void fn_801A08AC(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M32((p3+2028));
    if ((u32)v1 != (u32)0) {
        ((void (*)())(v1))();
    }
    M32((s31+2028)) = 0;
}

u32 fn_801A08F0(float q1) {
    u32 v1;
    float v2;
    v1 = lbl_805DD814;
    v2 = MF((v1+240));
    return ((s32)(q1*v2));
}

void fn_801A0C64(void) {
    fn_801A7C84();
}

void fn_801A0C84(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801942AC();
    if ((s32)c0 != (s32)0) {
    return;
    }
    v1 = M8((s31+2081));
    ((BFu8_4_1*)((s31+2081)))->f = 0;
    fn_80191170(s31);
    v2 = M32((s31+2028));
    if ((u32)v2 != (u32)0) {
        ((void (*)())(v2))(s31);
    }
    M32((s31+2028)) = 0;
    fn_801910E8(s31);
}

void fn_801A0CF8(void) {
    fn_80190C54();
}

void fn_801A0D18(void) {
    fn_80199C40();
}

void fn_801A0D3C(void) {
    fn_80193830();
}

void fn_801A0D5C(void) {
    fn_80193004();
}

float fn_801A0D7C(u32 p3) {
    float v1;
    v1 = MF((p3+1184));
    return v1;
}

void fn_801A0E3C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M8((p3+2084));
    ((BFu8_0_1*)((p3+2084)))->f = 1;
    v2 = M8((p3+2082));
    ((BFu8_3_1*)((p3+2082)))->f = 1;
    M32((p3+2020)) = (u32)fn_801A0F88;
    M32((p3+2040)) = (u32)fn_801A0F8C;
}

void fn_801A0F24(void) {
    fn_80199C40();
}

void fn_801A0F48(void) {
    fn_80193830();
}

void fn_801A0F68(void) {
    fn_80193004();
}

void fn_801A1144(u32 p3) {
    u32 v1;
    v1 = M8((p3+2084));
    ((BFu8_1_1*)((p3+2084)))->f = 1;
    M32((p3+2020)) = (u32)fn_801A1320;
    M32((p3+2040)) = (u32)fn_801A135C;
}

void fn_801A129C(void) {
    fn_80190C54();
}

void fn_801A12BC(void) {
    fn_80199C40();
}

void fn_801A12E0(void) {
    fn_80193830();
}

void fn_801A1300(void) {
    fn_80193004();
}

void fn_801A1320(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_801943B0();
    if ((s32)c0 == (s32)6) {
    return;
    }
    fn_801A135C(s31);
}

void fn_801A1460(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1250;
    v2 = lbl_805E1254;
    s31 = p3;
    fn_8018E580(p3, 3, -1, 0, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801A1724;
    M32((s31+2020)) = (u32)fn_801A1720;
}

void fn_801A14BC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A15B4(s31);
}

void fn_801A14F8(void) {
    fn_801A1650();
}

void fn_801A1518(void) {
    fn_801A16BC();
}

void fn_801A1538(void) {
    fn_801A16DC();
}

void fn_801A1558(void) {
    fn_801A16E0();
}

void fn_801A1578(void) {
    fn_801A1700();
}

void fn_801A1598(u32 p3) {
    u32 v1;
    v1 = M8((p3+2082));
    ((BFu8_3_1*)((p3+2082)))->f = 1;
    M32((p3+1420)) = 0;
}

void fn_801A15B4(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805E1258;
    v2 = lbl_805E125C;
    s31 = p3;
    fn_8018E580(p3, 4, -1, 4, v1, v2, v1);
    v3 = M8((s31+2082));
    ((BFu8_3_1*)((s31+2082)))->f = 1;
    M32((s31+1420)) = 0;
    M32((s31+2040)) = (u32)fn_801A1724;
    M32((s31+2020)) = (u32)fn_801A1720;
    v4 = M8((s31+2083));
    ((BFu8_6_1*)((s31+2083)))->f = 1;
    v5 = M8((s31+2083));
    ((BFu8_7_1*)((s31+2083)))->f = 1;
}

void fn_801A1640(u32 p3) {
    u32 v1;
    v1 = M32((p3+1420));
    M32((p3+1420)) = (v1+1);
}

void fn_801A16BC(void) {
    fn_80199C14();
}

void fn_801A16E0(void) {
    fn_80193830();
}

void fn_801A1700(void) {
    fn_80193004();
}

void fn_801A1790(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    fn_801918BC();
    v1 = lbl_805E1270;
    v2 = lbl_805E1274;
    fn_8018E580(s31, 5, -1, 4, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801A1724;
    M32((s31+2020)) = (u32)fn_801A1720;
    v3 = M8((s31+2083));
    ((BFu8_7_1*)((s31+2083)))->f = 1;
    v4 = M8((s31+2083));
    ((BFu8_6_1*)((s31+2083)))->f = 1;
}

void fn_801A18D0(void) {
    fn_801A16BC();
}

void fn_801A18F0(void) {
    fn_801A16DC();
}

void fn_801A1910(void) {
    fn_801A16E0();
}

void fn_801A1930(void) {
    fn_801A1700();
}

void fn_801A1950(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    v1 = lbl_805E1278;
    v2 = lbl_805E127C;
    s31 = p3;
    fn_8018E580(p3, 26, -1, 0, v1, v2, v1);
    v3 = M8((s31+2086));
    ((BFu8_4_1*)((s31+2086)))->f = 1;
}

void fn_801A1AF8(void) {
    fn_80199C40();
}

void fn_801A1B1C(void) {
    fn_80193830();
}

void fn_801A1B3C(void) {
    fn_80193004();
}

void fn_801A1C80(void) {
    fn_80193830();
}

void fn_801A1CA0(void) {
    fn_80193004();
}

void fn_801A1D70(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    u32 v3;
    s31 = p3;
    M32((p3+2056)) = 0;
    M32((p3+2060)) = 0;
    M32((p3+2064)) = 0;
    fn_80190A88();
    v1 = lbl_805E1288;
    v2 = lbl_805E128C;
    fn_8018E580(s31, 28, -1, 4, v1, v2, v1);
    fn_80190708(s31);
    M32((s31+2680)) = 0;
    v3 = M8((s31+2080));
    ((BFu8_0_1*)((s31+2080)))->f = 1;
}

void fn_801A1F3C(u32 p3) {
    u32 v1;
    v1 = M32((p3+2060));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80199C14();
}

void fn_801A1F68(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801A4850);
}

void fn_801A1F90(u32 p3) {
    u32 v1;
    v1 = M32((p3+2060));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80193830();
}

void fn_801A1FBC(u32 p3) {
    u32 v1;
    v1 = M32((p3+2060));
    if ((u32)v1 != (u32)0) {
        fn_80193004();
        return;
    }
    fn_801A2D58();
}

void fn_801A1FF0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    M32((p3+1944)) = 0;
    M32((p3+1940)) = 0;
    M32((p3+1948)) = 0;
    v1 = M16((p3+1954));
    ((BFu16_7_8*)((p3+1954)))->f = 0;
    v2 = M8((p3+1955));
    ((BFu8_7_1*)((p3+1955)))->f = 0;
    M32((p3+1956)) = 0;
    v3 = M16((p3+1962));
    ((BFu16_7_8*)((p3+1962)))->f = 0;
    v4 = M8((p3+1963));
    ((BFu8_7_1*)((p3+1963)))->f = 0;
    M16((p3+1966)) = 0;
    M16((p3+1964)) = 0;
    M32((p3+1968)) = 5;
}

void fn_801A20C4(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = M32((p3+44));
    c0 = fn_80231B68();
    M16((s31+1964)) = c0;
}

u32 fn_801A20F4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    return (v1+1940);
}

void fn_801A2100(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    v1 = M8((p3+2086));
    if ((s32)((v1>>6)&0x1) == (s32)0) {
    return;
    }
    c0 = fn_80191900();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v2 = M32((s31+2680));
    if ((s32)v2 < (s32)0) {
        v3 = M8((s31+2080));
        ((BFu8_1_1*)((s31+2080)))->f = 1;
        return;
    }
    M32((s31+2680)) = (v2-1);
}

void fn_801A2AA4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 c1;
    s31 = p4;
    s30 = p3;
    fn_8019A014();
    c1 = fn_8019AA54(s30);
    if ((s32)c1 == (s32)0) {
    return;
    }
    fn_8019A638(s30);
    if ((u32)s31 == (u32)0) {
    return;
    }
    ((void (*)())(s31))(s30);
}

u32 fn_801A2CEC(void) {
    fn_8019A5AC();
}

void fn_801A2D0C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_8019A3B8();
    if ((s32)c0 == (s32)0) {
    return;
    }
    c1 = fn_8019A3D4(s31);
    v1 = M8((s31+8));
    fn_8027A7C4(v1, c1);
}

void fn_801A2D58(void) {
    fn_80192E10();
}

void fn_801A2D80(u32 p3) {
    M32((p3+1996)) = (u32)fn_801A2D78;
    M32((p3+2008)) = (u32)fn_801A2D7C;
}

void fn_801A2D9C(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_80190774();
    fn_80190788(s31);
    fn_8019079C(s31);
    fn_801907BC(s31);
}

void fn_801A2DE0(u32 p3) {
    u32 s31;
    float v1;
    s31 = p3;
    fn_80190708();
    fn_80190774(s31);
    fn_80190788(s31);
    fn_8019079C(s31);
    fn_801907BC(s31);
    v1 = lbl_805E1290;
    MF((s31+1556)) = v1;
    MF((s31+1552)) = v1;
    MF((s31+1548)) = v1;
    MF((s31+1588)) = v1;
    MF((s31+1584)) = v1;
    MF((s31+1580)) = v1;
    MF((s31+1508)) = v1;
    MF((s31+1504)) = v1;
    MF((s31+1500)) = v1;
    MF((s31+1520)) = v1;
    MF((s31+1516)) = v1;
    MF((s31+1512)) = v1;
    MF((s31+1532)) = v1;
    MF((s31+1528)) = v1;
    MF((s31+1524)) = v1;
    MF((s31+2620)) = v1;
    MF((s31+2616)) = v1;
    fn_801A2E7C(s31);
}

void fn_801A2E7C(u32 p3) {
    float v1;
    v1 = lbl_805E1290;
    MF((p3+2652)) = v1;
    MF((p3+2648)) = v1;
    MF((p3+2644)) = v1;
    MF((p3+2664)) = v1;
    MF((p3+2660)) = v1;
    MF((p3+2656)) = v1;
    *(S12*)((p3+2668)) = *(S12*)((p3+2656));
}

void fn_801A2EB4(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1290;
    v2 = lbl_805E1294;
    MF((p3+824)) = v1;
    MF((p3+816)) = v1;
    MF((p3+820)) = v2;
    fn_801907E8(p3, (p3+804), (p3+816), v1);
}

void fn_801A2EF0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c0;
    s31 = p3;
    c0 = fn_80191680();
    if ((s32)c0 != (s32)0) {
    return;
    }
    v1 = M8((s31+2624));
    ((BFu8_0_1*)((s31+2624)))->f = 0;
    v2 = M8((s31+2624));
    ((BFu8_1_1*)((s31+2624)))->f = 0;
    v3 = M8((s31+2624));
    ((BFu8_2_1*)((s31+2624)))->f = 0;
    v4 = M8((s31+2624));
    ((BFu8_3_1*)((s31+2624)))->f = 0;
    v5 = M8((s31+2624));
    ((BFu8_5_1*)((s31+2624)))->f = 0;
    v6 = M8((s31+2624));
    ((BFu8_4_1*)((s31+2624)))->f = 0;
    M32((s31+2684)) = 0;
    M32((s31+2688)) = 0;
    if ((s32)c0 != (s32)0) {
    return;
    }
}

u32 fn_801A2F78(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    return ((v1>>7)&0x1);
}

u32 fn_801A2F84(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    return ((v1>>5)&0x1);
}

u32 fn_801A2F90(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    return ((v1>>6)&0x1);
}

u32 fn_801A2F9C(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    return ((v1>>4)&0x1);
}

u32 fn_801A2FA8(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    return ((v1>>3)&0x1);
}

u32 fn_801A2FB4(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    return ((v1>>2)&0x1);
}

void fn_801A2FC0(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    ((BFu8_0_1*)((p3+2624)))->f = 1;
}

void fn_801A2FD4(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    ((BFu8_2_1*)((p3+2624)))->f = 1;
}

void fn_801A2FE8(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    ((BFu8_1_1*)((p3+2624)))->f = 1;
}

void fn_801A2FFC(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    ((BFu8_3_1*)((p3+2624)))->f = 1;
}

void fn_801A3010(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    ((BFu8_4_1*)((p3+2624)))->f = 1;
}

void fn_801A3024(u32 p3) {
    u32 v1;
    v1 = M8((p3+2624));
    ((BFu8_5_1*)((p3+2624)))->f = 1;
}

void fn_801A3038(u32 p3) {
    u32 v1;
    v1 = M8((p3+2084));
    ((BFu8_2_1*)((p3+2084)))->f = 1;
}

void fn_801A304C(u32 p3, u32 p4) {
    M32((p3+2684)) = p4;
}

void fn_801A3054(u32 p3, u32 p4) {
    M32((p3+2688)) = p4;
}

u32 fn_801A305C(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 s31;
    float v3;
    u32 c1;
    float d3;
    s30 = p3;
    v1 = M8((p3+2083));
    if ((s32)((v1>>3)&0x1) == (s32)0) {
        v2 = M32((s30+1648));
        s31 = fn_80247FAC(v2);
        c1 = fn_800D1F3C();
        if ((s32)c1 == (s32)0) {
            fn_801A3388(s30, s31, (s30+1140));
            return 1;
        }
        d3 = fn_800D4F20((s30+768));
        v3 = lbl_805E1290;
        if (d3 < v3) {
            fn_801A3388(s30, s31, (s30+1140));
            return 1;
        }
    }
    return 0;
}

void fn_801A317C(u32 p3) {
    u32 v1;
    v1 = M8((p3+8));
    fn_8022CC80(v1);
}

void fn_801A3388(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    float v6;
    u32 v7;
    u32 v8;
    s31 = p3;
    M32((p3+2692)) = p4;
    v1 = M32(p5);
    v2 = M32((p5+4));
    M32((p3+2700)) = v1;
    M32((p3+2704)) = v2;
    v3 = M32((p5+8));
    M32((p3+2708)) = v3;
    M32((p3+2696)) = 120;
    fn_80190A88(p3, v3, p5, v1);
    v4 = M8((s31+8));
    fn_8027A08C(v4);
    v5 = lbl_805E12A8;
    v6 = lbl_805E12AC;
    fn_8018E580(s31, 24, -1, 0, v5, v6, v5);
    v7 = M8((s31+2083));
    ((BFu8_4_1*)((s31+2083)))->f = 1;
    v8 = M8((s31+2080));
    ((BFu8_0_1*)((s31+2080)))->f = 1;
}

void fn_801A341C(void) {
    u32 c0;
    c0 = fn_801A30F8();
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801A3444(u32 p3) {
    u32 v1;
    v1 = M32((p3+2696));
    if ((s32)v1 > (s32)0) {
        M32((p3+2696)) = (v1-1);
        fn_801A2818(p3, v1);
        return;
    }
    fn_80190708(p3, v1);
}

void fn_801A3488(void) {
    fn_801A2D58();
}

void fn_801A3518(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    u32 v5;
    u32 v6;
    s31 = p3;
    v1 = M8((p3+8));
    fn_8027A08C(v1);
    v2 = lbl_805E12B0;
    v3 = lbl_805E12B4;
    fn_8018E580(s31, 25, -1, 0, v2, v3, v2);
    fn_80190708(s31);
    fn_80190774(s31);
    fn_80190788(s31);
    fn_8019079C(s31);
    fn_801907BC(s31);
    v4 = M8((s31+2083));
    ((BFu8_4_1*)((s31+2083)))->f = 1;
    v5 = M8((s31+2080));
    ((BFu8_0_1*)((s31+2080)))->f = 1;
    v6 = M8((s31+2081));
    ((BFu8_3_1*)((s31+2081)))->f = 1;
}

void fn_801A35CC(void) {
    fn_801A2D58();
}

u32 fn_801A3E6C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s31 = p3;
    c0 = fn_801917A4();
    if ((s32)c0 != (s32)0) {
        v1 = M32((s31+28));
        if ((s32)v1 == (s32)19) {
            v2 = M32((s31+40));
            return v2;
        }
    }
    v3 = M8((s31+2626));
    v4 = M32((u32)lbl_804AE3C0+(v3<<2));
    return v4;
}

void fn_801A3F74(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    v1 = M32((p3+28));
    switch ((s32)v1) {
    case 19:
        if ((s32)p5 != (s32)0) {
            fn_801A4A90();
            return;
        }
        fn_801A4990();
        break;
    case 16:
        if ((s32)p6 != (s32)0) {
            fn_801A4D60();
            return;
        }
        fn_801A4CC0();
    }
}

void fn_801A413C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 c2;
    s31 = p4;
    s30 = p3;
    fn_801A0828();
    v1 = M32((s31+56));
    fn_801A0684(s30, v1);
    c2 = fn_80191758(s30);
    if ((s32)c2 != (s32)0) {
        fn_801B98C0(s30, s31);
    } else {
        fn_801A3FD8(s30, s31);
    }
    v2 = M8((s30+2082));
    ((BFu8_7_1*)((s30+2082)))->f = 1;
}

void fn_801A4830(void) {
    fn_801A2D58();
}

void fn_801A4850(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_801A4884();
    fn_8019079C(s31);
}

void fn_801A48FC(u32 p3) {
    fn_801A423C(p3, 1);
}

void fn_801A4924(void) {
    fn_801A2818();
}

void fn_801A4944(u32 p3) {
    fn_801A2AA4(p3, (u32)fn_801A5250);
}

void fn_801A4970(void) {
    fn_801A2D58();
}

float fn_801A4AC8(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = lbl_805DD814;
    v2 = MF((p3+1192));
    v3 = MF((v1+356));
    MF((p3+1192)) = (v2-v3);
    return v2;
}

void fn_801A4AE0(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    float v4;
    s31 = p3;
    v1 = lbl_805DD814;
    v2 = MF((v1+360));
    fn_80190FAC(p3, v1, v2);
    v3 = MF((s31+1192));
    v4 = lbl_805E12E4;
    if (v3 <= v4) {
        fn_801A4C04(s31, v3);
    }
}

void fn_801A4B30(void) {
    fn_801A4648();
}

void fn_801A4B50(void) {
    fn_801A47E8();
}

void fn_801A4B74(void) {
    fn_801A2D58();
}

void fn_801A4E48(void) {
    fn_801A4648();
}

void fn_801A4E68(u32 p3) {
    u32 s30;
    u32 s31;
    u32 v2;
    s30 = p3;
    s31 = M32((p3+28));
    fn_801A47E8();
    v2 = M32((s30+28));
    if ((s32)s31 == (s32)v2) {
    return;
    }
    fn_801A4F24(s30);
}

void fn_801A4EB8(void) {
    fn_801A2D58();
}

void fn_801A4ED8(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p4+56));
    if ((s32)v1 == (s32)6) {
    return;
    }
    fn_801A4F04();
}

void fn_801A4F04(void) {
    fn_801A4F24();
}

void fn_801A519C(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801A24C8();
    c1 = fn_801BD8D8(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801A561C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801A51E4(void) {
    fn_801A4610();
}

void fn_801A5204(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801A4850);
}

void fn_801A5230(void) {
    fn_801A2D58();
}

void fn_801A5484(void) {
    fn_801A24C8();
}

void fn_801A54A4(void) {
    fn_801A4610();
}

void fn_801A55FC(void) {
    fn_801A2D58();
}

void fn_801A57B8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    u32 c2;
    s31 = p3;
    v1 = M8((p3+2692));
    if ((s32)((v1>>7)&0x1) != (s32)0) {
    return;
    }
    c0 = fn_80199668();
    if ((s32)c0 == (s32)0) {
    return;
    }
    c1 = fn_80198B90(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    c2 = fn_801A5020(s31, 0);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801A5818(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = p3;
    fn_801A24C8();
    v1 = M8((s31+2692));
    if ((s32)((v1>>7)&0x1) == (s32)0) {
    return;
    }
    c1 = fn_801A5020(s31, 0);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801A5A28(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801A4850);
}

void fn_801A5A54(void) {
    fn_801A2D58();
}

u32 fn_801A5A74(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M8((p3+10));
    v2 = M32((u32)lbl_804AF51C+(v1<<2));
    return v2;
}

void fn_801A5B98(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = (u32)lbl_804AE428;
    s30 = p4;
    if ((s32)p3 != (s32)0) {
        fn_8019065C((s31+4372));
        return;
    }
    fn_8019065C((s31+4416));
    if ((s32)s30 != (s32)0) {
        fn_8019065C((s31+4452));
    }
    fn_8019065C((s31+4496));
    fn_801C8C8C(1, 1);
    fn_801C8C8C(0, 17);
}

void fn_801A5F54(u32 p3) {
    u32 v1;
    v1 = M8((p3+2608));
    ((BFu8_2_1*)((p3+2608)))->f = 0;
}

void fn_801A5F68(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
        fn_8040A64C(v1);
    }
    v2 = M32((s31+2348));
    if ((u32)v2 == (u32)0) {
    return;
    }
    ((void (*)())(v2))(s31);
}

void randomAbility_mainLoop(u32 p3) {
    u32 v1;
    v1 = M32((p3+2352));
    if ((u32)v1 == (u32)0) {
    return;
    }
    ((void (*)())(v1))();
}

void fn_801A5FE8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c1;
    u32 c2;
    s31 = p3;
    v1 = M32((p3+2356));
    if ((u32)v1 != (u32)0) {
        ((void (*)())(v1))();
    }
    c1 = fn_80191680(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    c2 = fn_801ACFD0(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801A6040(u32 p3) {
    u32 v1;
    v1 = M32((p3+2360));
    if ((u32)v1 == (u32)0) {
    return;
    }
    ((void (*)())(v1))();
}

void fn_801A63BC(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+2308));
    if ((u32)v1 == (u32)0) {
    return;
    }
    if ((s32)p5 != (s32)0) {
        v2 = M32((p3+2300));
        if ((u32)v2 != (u32)0) {
            fn_801970F0((p3+2320), p4, (p3+2304), p3);
            return;
        }
        fn_801970F0((p3+2320), p4, (p3+2304), p3);
        return;
    }
    fn_801971D8((p3+2320), p4, (p3+2304), p3);
}

void fn_801A65E8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8040B920(v1);
    M32((s31+2300)) = 0;
    v2 = M32((s31+2308));
    HSD_ObjFree((u32)lbl_80559EE8, v2);
    M32((s31+2308)) = 0;
}

void fn_801A66D0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_8040B920(v1);
    M32((s31+2300)) = 0;
    v2 = M32((s31+2308));
    HSD_ObjFree((u32)lbl_80559EE8, v2);
    M32((s31+2308)) = 0;
}

void fn_801A6728(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    float v18;
    u32 v19;
    u32 v20;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    v4 = M32(v3);
    s31 = v4;
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 != (u32)0) {
        v9 = M32((s30+2300));
        fn_80409480(v9, 0, v8, 0);
        v10 = M32((s30+2300));
        v11 = lbl_805E1328;
        fn_80409250(v10, v11);
        v12 = M32((s30+2300));
        fn_800550F4(v12, ((1<<16)-1));
        v13 = M32((s30+2300));
        fn_8040A64C(v13);
    }
    v14 = M32((s31+24));
    s31 = v14;
    v15 = M32((s30+2300));
    fn_80198910(v15);
    v16 = M32((s30+2300));
    fn_80409480(v16, s31, 0, 0);
    v17 = M32((s30+2300));
    v18 = lbl_805E1328;
    fn_80409250(v17, v18);
    v19 = M32((s30+2300));
    fn_800550F4(v19, ((1<<16)-1153));
    v20 = M32((s30+2300));
    fn_8040A64C(v20);
}

void fn_801A6840(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    float v18;
    u32 v19;
    u32 v20;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 == (u32)0) {
        v2 = M32((s30+24));
        v3 = M32((v2+36));
        v4 = M32(v3);
        s31 = v4;
        c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
        M32((s30+2308)) = c0;
        v5 = M32(s31);
        c1 = HSD_JObjLoadJoint(v5);
        M32((s30+2300)) = c1;
        v6 = M8((s30+2608));
        ((BFu8_0_1*)((s30+2608)))->f = 1;
        v7 = M32((s30+2300));
        fn_801A6428(s30, v7, (s30+2304));
        fn_80196DF4((s31+8), (s30+2320), (s30+2304));
        v8 = M32((s31+4));
        if ((u32)v8 != (u32)0) {
            v9 = M32((s30+2300));
            fn_80409480(v9, 0, v8, 0);
            v10 = M32((s30+2300));
            v11 = lbl_805E1328;
            fn_80409250(v10, v11);
            v12 = M32((s30+2300));
            fn_800550F4(v12, ((1<<16)-1));
            v13 = M32((s30+2300));
            fn_8040A64C(v13);
        }
        v14 = M32((s31+24));
        s31 = v14;
        v15 = M32((s30+2300));
        fn_80198910(v15);
        v16 = M32((s30+2300));
        fn_80409480(v16, s31, 0, 0);
        v17 = M32((s30+2300));
        v18 = lbl_805E1328;
        fn_80409250(v17, v18);
        v19 = M32((s30+2300));
        fn_800550F4(v19, ((1<<16)-1153));
        v20 = M32((s30+2300));
        fn_8040A64C(v20);
    }
    fn_80198D3C(s30, 0, 8);
}

void fn_801A6968(u32 p3) {
    fn_80198D3C(p3, 0, 0);
}

void fn_801A6990(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+4));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A6A64(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+8));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A6B38(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+8));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A6C10(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+12));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A6CE4(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+12));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A6DBC(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+16));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A6E90(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+16));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A6F68(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    float v18;
    u32 v19;
    u32 v20;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    v4 = M32((v3+20));
    s31 = v4;
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 != (u32)0) {
        v9 = M32((s30+2300));
        fn_80409480(v9, 0, v8, 0);
        v10 = M32((s30+2300));
        v11 = lbl_805E1328;
        fn_80409250(v10, v11);
        v12 = M32((s30+2300));
        fn_800550F4(v12, ((1<<16)-1));
        v13 = M32((s30+2300));
        fn_8040A64C(v13);
    }
    v14 = M32((s31+24));
    s31 = v14;
    v15 = M32((s30+2300));
    fn_80198910(v15);
    v16 = M32((s30+2300));
    fn_80409480(v16, s31, 0, 0);
    v17 = M32((s30+2300));
    v18 = lbl_805E1328;
    fn_80409250(v17, v18);
    v19 = M32((s30+2300));
    fn_800550F4(v19, ((1<<16)-1153));
    v20 = M32((s30+2300));
    fn_8040A64C(v20);
}

void fn_801A7080(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    float v18;
    u32 v19;
    u32 v20;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    v4 = M32((v3+20));
    s31 = v4;
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 != (u32)0) {
        v9 = M32((s30+2300));
        fn_80409480(v9, 0, v8, 0);
        v10 = M32((s30+2300));
        v11 = lbl_805E1328;
        fn_80409250(v10, v11);
        v12 = M32((s30+2300));
        fn_800550F4(v12, ((1<<16)-1));
        v13 = M32((s30+2300));
        fn_8040A64C(v13);
    }
    v14 = M32((s31+24));
    s31 = v14;
    v15 = M32((s30+2300));
    fn_80198910(v15);
    v16 = M32((s30+2300));
    fn_80409480(v16, s31, 0, 0);
    v17 = M32((s30+2300));
    v18 = lbl_805E1328;
    fn_80409250(v17, v18);
    v19 = M32((s30+2300));
    fn_800550F4(v19, ((1<<16)-1153));
    v20 = M32((s30+2300));
    fn_8040A64C(v20);
}

void fn_801A719C(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+24));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 != (u32)0) {
        v9 = M32((s30+2300));
        fn_80409480(v9, 0, v8, 0);
        v10 = M32((s30+2300));
        v11 = lbl_805E1328;
        fn_80409250(v10, v11);
        v12 = M32((s30+2300));
        fn_800550F4(v12, ((1<<16)-1));
        v13 = M32((s30+2300));
        fn_8040A64C(v13);
    }
    fn_801A735C(s30, 0);
}

void fn_801A727C(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+24));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 != (u32)0) {
        v9 = M32((s30+2300));
        fn_80409480(v9, 0, v8, 0);
        v10 = M32((s30+2300));
        v11 = lbl_805E1328;
        fn_80409250(v10, v11);
        v12 = M32((s30+2300));
        fn_800550F4(v12, ((1<<16)-1));
        v13 = M32((s30+2300));
        fn_8040A64C(v13);
    }
    fn_801A735C(s30, 0);
}

void fn_801A735C(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 s31;
    u32 v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    float v14;
    u32 v15;
    u32 v16;
    u32 v17;
    u32 v18;
    float v19;
    u32 v20;
    u32 v21;
    u32 v22;
    u32 v23;
    u32 v24;
    float v25;
    u32 v26;
    u32 v27;
    s30 = p4;
    s29 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((s29+24));
    v3 = M32((v2+36));
    v4 = M32((v3+24));
    switch ((s32)s30) {
    case 0:
        v5 = M32((v4+24));
        s31 = v5;
        fn_80198910(v1, v4);
        v6 = M32((s29+2300));
        fn_80409480(v6, s31, 0, 0);
        v7 = M32((s29+2300));
        v8 = lbl_805E1328;
        fn_80409250(v7, v8);
        v9 = M32((s29+2300));
        fn_800550F4(v9, ((1<<16)-1153));
        v10 = M32((s29+2300));
        fn_8040A64C(v10);
        break;
    case 1:
        v11 = M32((v4+28));
        s31 = v11;
        fn_80198910(v1, v4);
        v12 = M32((s29+2300));
        fn_80409480(v12, s31, 0, 0);
        v13 = M32((s29+2300));
        v14 = lbl_805E1328;
        fn_80409250(v13, v14);
        v15 = M32((s29+2300));
        fn_8040A64C(v15);
        break;
    case 2:
        v16 = M32((v4+32));
        s31 = v16;
        fn_80198910(v1, v4);
        v17 = M32((s29+2300));
        fn_80409480(v17, s31, 0, 0);
        v18 = M32((s29+2300));
        v19 = lbl_805E1328;
        fn_80409250(v18, v19);
        v20 = M32((s29+2300));
        fn_800550F4(v20, ((1<<16)-1153));
        v21 = M32((s29+2300));
        fn_8040A64C(v21);
        break;
    case 3:
        v22 = M32((v4+36));
        s31 = v22;
        fn_80198910(v1, v4);
        v23 = M32((s29+2300));
        fn_80409480(v23, s31, 0, 0);
        v24 = M32((s29+2300));
        v25 = lbl_805E1328;
        fn_80409250(v24, v25);
        v26 = M32((s29+2300));
        fn_8040A64C(v26);
    }
    v27 = M8((s29+2560));
    ((BFu8_1_3*)((s29+2560)))->f = s30;
}

void fn_801A74D4(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+28));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A75A8(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+28));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A7680(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+32));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A7754(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+32));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A782C(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    float v18;
    u32 v19;
    u32 v20;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    v4 = M32((v3+36));
    s31 = v4;
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 != (u32)0) {
        v9 = M32((s30+2300));
        fn_80409480(v9, 0, v8, 0);
        v10 = M32((s30+2300));
        v11 = lbl_805E1328;
        fn_80409250(v10, v11);
        v12 = M32((s30+2300));
        fn_800550F4(v12, ((1<<16)-1));
        v13 = M32((s30+2300));
        fn_8040A64C(v13);
    }
    v14 = M32((s31+24));
    s31 = v14;
    v15 = M32((s30+2300));
    fn_80198910(v15);
    v16 = M32((s30+2300));
    fn_80409480(v16, s31, 0, 0);
    v17 = M32((s30+2300));
    v18 = lbl_805E1328;
    fn_80409250(v17, v18);
    v19 = M32((s30+2300));
    fn_800550F4(v19, ((1<<16)-1153));
    v20 = M32((s30+2300));
    fn_8040A64C(v20);
}

void fn_801A7944(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    float v18;
    u32 v19;
    u32 v20;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    v4 = M32((v3+36));
    s31 = v4;
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 != (u32)0) {
        v9 = M32((s30+2300));
        fn_80409480(v9, 0, v8, 0);
        v10 = M32((s30+2300));
        v11 = lbl_805E1328;
        fn_80409250(v10, v11);
        v12 = M32((s30+2300));
        fn_800550F4(v12, ((1<<16)-1));
        v13 = M32((s30+2300));
        fn_8040A64C(v13);
    }
    v14 = M32((s31+24));
    s31 = v14;
    v15 = M32((s30+2300));
    fn_80198910(v15);
    v16 = M32((s30+2300));
    fn_80409480(v16, s31, 0, 0);
    v17 = M32((s30+2300));
    v18 = lbl_805E1328;
    fn_80409250(v17, v18);
    v19 = M32((s30+2300));
    fn_800550F4(v19, ((1<<16)-1153));
    v20 = M32((s30+2300));
    fn_8040A64C(v20);
}

void fn_801A7A60(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    u32 c0;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = M32((s30+24));
    v3 = M32((v2+36));
    s31 = M32((v3+40));
    c0 = HSD_ObjAlloc((u32)lbl_80559EE8, v3);
    M32((s30+2308)) = c0;
    v5 = M32(s31);
    c1 = HSD_JObjLoadJoint(v5);
    M32((s30+2300)) = c1;
    v6 = M8((s30+2608));
    ((BFu8_0_1*)((s30+2608)))->f = 1;
    v7 = M32((s30+2300));
    fn_801A6428(s30, v7, (s30+2304));
    fn_80196DF4((s31+8), (s30+2320), (s30+2304));
    v8 = M32((s31+4));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = M32((s30+2300));
    fn_80409480(v9, 0, v8, 0);
    v10 = M32((s30+2300));
    v11 = lbl_805E1328;
    fn_80409250(v10, v11);
    v12 = M32((s30+2300));
    fn_800550F4(v12, ((1<<16)-1));
    v13 = M32((s30+2300));
    fn_8040A64C(v13);
}

void fn_801A7B34(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p3;
    v1 = M32((p3+24));
    v2 = M32((v1+36));
    v3 = M32((v2+40));
    fn_8019813C(p3, (s31+2304), (s31+2312), (s31+2320), (v3+24));
    fn_80198D3C(s31, 0, 24);
}

void fn_801A7D00(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 v5;
    float d0;
    s31 = p3;
    v1 = M32((p3+1012));
    if ((u32)v1 == (u32)0) {
    return;
    }
    d0 = fn_801C7FA8(v1);
    v2 = M32((s31+908));
    v3 = M32((s31+2332));
    v4 = MF((v2+356));
    M32((s31+2332)) = (v3-((s32)(d0*v4)));
    v5 = M32((s31+2332));
    if ((s32)v5 > (s32)0) {
    return;
    }
    M32((s31+2332)) = 0;
    if ((s32)v5 != (s32)0) {
    return;
    }
}

void fn_801A7D70(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+2300));
    if ((u32)v1 != (u32)0) {
        fn_8040B920(v1);
        M32((s31+2300)) = 0;
        v2 = M32((s31+2308));
        HSD_ObjFree((u32)lbl_80559EE8, v2);
        M32((s31+2308)) = 0;
    }
    fn_801A810C(s31);
    M32((s31+2348)) = 0;
    M32((s31+2352)) = 0;
    M32((s31+2356)) = 0;
    M32((s31+2360)) = 0;
    M32((s31+2044)) = 0;
    M32((s31+2024)) = 0;
    M32((s31+2028)) = 0;
}

void fn_801A7DF0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    s31 = p3;
    v1 = M32((p3+1916));
    if ((u32)v1 != (u32)0) {
    return;
    }
    v2 = lbl_805DD810;
    v3 = M32((v2+12));
    v4 = M32(v3);
    fn_801AA1B8(p3, v4);
    v5 = M32((s31+1936));
    v6 = M32((s31+688));
    v7 = M32((v5+4));
    v8 = M32((v6+400));
    fn_80055C7C(v7, v8);
}

void fn_801A7E48(void) {
    fn_8019C95C();
}

float fn_801A7FFC(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = M32((p3+908));
    v2 = MF((p3+2572));
    v3 = MF((v1+412));
    return (v2/v3);
}

float fn_801A8010(u32 p3) {
    float v1;
    v1 = MF((p3+2572));
    return v1;
}

u32 fn_801A8038(u32 p3) {
    u32 v1;
    v1 = M32((p3+1108));
    return (v1 == 9);
}

void fn_801A804C(u32 p3) {
    fn_80198C20(p3, 1, 3);
}

void fn_801A8074(u32 p3) {
    fn_80198C20(p3, 1, 0);
}

void fn_801A809C(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    M32((p3+1108)) = p4;
    if ((s32)p4 == (s32)10) {
        v1 = M8((p3+2608));
        ((BFu8_3_1*)((p3+2608)))->f = 1;
    } else {
        v2 = M8((p3+2608));
        ((BFu8_1_1*)((p3+2608)))->f = p5;
    }
    v3 = M32((p3+688));
    v4 = M32(p3);
    v5 = M32((p3+1084));
    v6 = M32((v3+32));
    fn_80236C40(v4, ((4<<16)-22129), v5, 200, v6);
}

u32 fn_801A8304(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 s29;
    s31 = 0;
    s30 = p4;
    s29 = p3;
    fn_80191554();
    fn_801915C4(s29);
    switch ((s32)s30) {
    case 0:
        fn_801AA414(s29, s30);
        fn_801B5C24(s29);
        s31 = 1;
        break;
    case 1:
        fn_801AA414(s29, s30);
        fn_801B684C(s29);
        s31 = 1;
        break;
    case 2:
        fn_801AA414(s29, s30);
        fn_801B6FD0(s29);
        s31 = 1;
        break;
    case 3:
        fn_801AA414(s29, s30);
        fn_801B7AB4(s29, 1);
        s31 = 1;
    }
    return s31;
}

void fn_801A8820(u32 p3, u32 p4) {
    if ((s32)p4 != (s32)3) {
    return;
    }
    fn_8019F6CC();
}

u32 fn_801A8848(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M8((p3+2608));
    if ((s32)((v1>>2)&0x1) != (s32)0) {
        c0 = fn_801AEA30();
        return c0;
    }
    return -1;
}

void fn_801A887C(void) {
    fn_801B29DC();
}

void fn_801A889C(u32 p3, u32 p4) {
    fn_80196710(p3, p4, (p3+2088));
}

void fn_801A8B90(u32 p3, u32 p4) {
    u32 s31;
    s31 = p4;
    fn_80193F24(s31, p3);
    fn_801A2DE0(s31);
}

void fn_801A93B0(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+1008));
    if ((u32)v1 == (u32)0) {
    return;
    }
    switch ((s32)p4) {
    case 0:
        fn_80225170(v1);
        break;
    case 1:
        fn_80228184(v1);
        break;
    case 2:
        fn_8022847C(v1);
    }
}

void fn_801A9580(void) {
    fn_80225824();
}

void fn_801A9B08(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M32((p3+1008));
    fn_802281BC(v1);
    fn_8019BFB4(s31, 39, 0);
}

void fn_801A9B48(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M32((p3+1008));
    fn_80228184(v1);
    fn_8019C0A4(s31, 39);
}

void fn_801A9C38(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M32((p3+1008));
    fn_802284A0(v1);
    fn_8019BFB4(s31, 41, 0);
}

void fn_801A9FE8(void) {
    fn_80228F08();
}

void fn_801AA008(void) {
    fn_8022A244();
}

void fn_801AA198(void) {
    fn_8022A544();
}

void fn_801AA414(u32 p3, u32 p4) {
    M32((p3+1116)) = p4;
}

void fn_801AA41C(p3) u32 p3; {
    M32((p3+1116)) = -1;
    fn_80191510();
}

void fn_801AABBC(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1390;
    v2 = lbl_805E1394;
    fn_8018E580(p3, 29, -1, 0, v1, v2, v1);
}

void fn_801AABF8(void) {
    u32 c0;
    c0 = fn_801AAC80();
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801AAC1C(void) {
    fn_80199C40();
}

void fn_801AAC40(void) {
    fn_80193830();
}

void fn_801AAC60(void) {
    fn_80193004();
}

u32 fn_801AAC80(p3) u32 p3; {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801AACB8();
        return 1;
    }
    return 0;
}

void fn_801AAD10(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801AAE04(s31);
}

void fn_801AAD4C(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801AAE40();
    c1 = fn_801AAF38(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801AAD84(void) {
    fn_801AAEB8();
}

void fn_801AADA4(void) {
    fn_801AAED8();
}

void fn_801AADC4(void) {
    fn_801AAEF8();
}

void fn_801AADE4(void) {
    fn_801AAF18();
}

void fn_801AAE04(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E13A0;
    v2 = lbl_805E13A4;
    fn_8018E580(p3, 31, -1, 0, v1, v2, v1);
}

void fn_801AAE70(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    u32 c1;
    v1 = lbl_805E13A0;
    s31 = p3;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 1, v1, v1);
    c1 = fn_801AAF38(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801AAEB8(void) {
    fn_80199C40();
}

void fn_801AAED8(void) {
    fn_8019FC5C();
}

void fn_801AAEF8(void) {
    fn_8019FC60();
}

void fn_801AAF18(void) {
    fn_8019FC80();
}

u32 fn_801AAF38(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801AAF70();
        return 1;
    }
    return 0;
}

void fn_801AAFBC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801AABBC(s31);
}

void fn_801AAFF8(u32 p3) {
    float v1;
    u32 v2;
    v1 = lbl_805E13A8;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 0, v1, v1);
}

void fn_801AB028(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    u32 c1;
    v1 = lbl_805E13A8;
    s31 = p3;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 0, v1, v1);
    c1 = fn_801AAC80(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801AB070(void) {
    fn_80199C40();
}

void fn_801AB090(void) {
    fn_801AAED8();
}

void fn_801AB0B0(void) {
    fn_801AAEF8();
}

void fn_801AB0D0(void) {
    fn_801AAF18();
}

void fn_801AB0F0(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    float v4;
    v1 = M32((p3+28));
    switch ((s32)v1) {
    case 29:
        fn_801AB1A0();
        break;
    case 30:
        v2 = MF((p3+664));
        fn_801AB734(p3, 1, v2);
        break;
    case 31:
        v3 = MF((p3+664));
        fn_801AB9D0(p3, 1, v3);
        break;
    case 32:
        v4 = MF((p3+664));
        fn_801ABCB0(v4);
    }
}

u32 fn_801AB168(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801AB1A0();
        return 1;
    }
    return 0;
}

u32 fn_801AB1A0(p3) u32 p3; {
    u32 s31;
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    fn_801918BC();
    v1 = lbl_805E13B0;
    v2 = lbl_805E13B4;
    fn_8018E580(s31, 33, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 3;
    fn_8019F980(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
    v3 = M32((s31+908));
    v4 = M32((v3+68));
    M8((s31+2626)) = v4;
    return v3;
}

void fn_801AB300(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c4;
    u32 c5;
    s31 = p3;
    fn_80190C54();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c4 = fn_801B4D04(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_801B7E80(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
}

void fn_801AB370(void) {
    fn_8019FC3C();
}

void fn_801AB390(void) {
    fn_8019FC5C();
}

void fn_801AB428(void) {
    fn_8019FC80();
}

void fn_801AB4DC(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E13B8;
    v2 = lbl_805E13BC;
    fn_8018E580(p3, 34, -1, 0, v1, v2, v1);
}

void fn_801AB514(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    c1 = fn_801AB168(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801AB5A4(void) {
    fn_801AB370();
}

void fn_801AB5C4(void) {
    fn_801AB390();
}

void fn_801AB5E4(void) {
    fn_801AB3B0();
}

void fn_801AB604(void) {
    fn_801AB428();
}

u32 fn_801AB624(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_801B2C4C();
    if ((s32)c0 != (s32)0) {
        return 1;
    }
    v1 = M32((s31+984));
    if ((s32)(v1&0x100) != (s32)0) {
        v2 = M32((s31+996));
        fn_801AB688(s31, ((v2>>8)&0x1));
        return 1;
    }
    return 0;
}

void fn_801AB688(u32 p3, u32 p4) {
    float v1;
    float v2;
    u32 s31;
    u32 s30;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805E13C4;
    v2 = lbl_805E13C0;
    s31 = p4;
    s30 = p3;
    fn_8018E580(p3, 40, -1, 0, v1, v2, v1);
    if ((s32)s31 != (s32)0) {
        v3 = M32((s30+1108));
        if ((s32)v3 == (s32)-1) {
            v4 = M8((s30+2085));
            if ((s32)((v4>>1)&0x1) == (s32)0) {
                v5 = M8((s30+2080));
                ((BFu8_5_1*)((s30+2080)))->f = 1;
                M32((s30+2000)) = (u32)fn_801AB8E0;
                M32((s30+2004)) = (u32)fn_801AB900;
                v6 = M32((s30+908));
                fn_801A889C(s30, v6);
            }
        }
    }
    fn_801A0300(s30);
}

void fn_801AB734(u32 p3, u32 p4, float q1) {
    float v1;
    float v2;
    u32 s31;
    u32 s30;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805E13C0;
    v2 = lbl_805E13C4;
    s31 = p4;
    s30 = p3;
    fn_8018E580(p3, 40, -1, 0, q1, v1, v2);
    if ((s32)s31 != (s32)0) {
        v3 = M32((s30+1108));
        if ((s32)v3 == (s32)-1) {
            v4 = M8((s30+2085));
            if ((s32)((v4>>1)&0x1) == (s32)0) {
                v5 = M8((s30+2080));
                ((BFu8_5_1*)((s30+2080)))->f = 1;
                M32((s30+2000)) = (u32)fn_801AB8E0;
                M32((s30+2004)) = (u32)fn_801AB900;
                v6 = M32((s30+908));
                fn_801A889C(s30, v6);
            }
        }
    }
    fn_801A0300(s30);
}

void fn_801AB7DC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M8((s31+2080));
    fn_801AB940(s31, ((v1>>2)&0x1));
}

void fn_801AB820(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0300();
    c1 = fn_801ABC2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801AB858(void) {
    fn_801ABB28();
}

void fn_801AB878(void) {
    fn_801ABB48();
}

void fn_801AB898(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801ABB68();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801AB8E0(void) {
    fn_801ABBCC();
}

void fn_801AB900(void) {
    fn_801ABBEC();
}

void fn_801AB920(void) {
    fn_801ABC0C();
}

void fn_801AB940(u32 p3, u32 p4) {
    float v1;
    float v2;
    u32 s31;
    u32 s30;
    u32 v3;
    v1 = lbl_805E13CC;
    v2 = lbl_805E13C8;
    s31 = p4;
    s30 = p3;
    fn_8018E580(p3, 41, -1, 64, v1, v2, v1);
    if ((s32)s31 != (s32)0) {
        v3 = M8((s30+2080));
        ((BFu8_5_1*)((s30+2080)))->f = 1;
        M32((s30+2000)) = (u32)fn_801ABBCC;
        M32((s30+2004)) = (u32)fn_801ABBEC;
    }
    M32((s30+1124)) = 101;
    fn_801ABA5C(s30);
}

void fn_801AB9D0(u32 p3, u32 p4, float q1) {
    float v1;
    float v2;
    u32 s31;
    u32 s30;
    u32 v3;
    v1 = lbl_805E13C8;
    v2 = lbl_805E13CC;
    s31 = p4;
    s30 = p3;
    fn_8018E580(p3, 41, -1, 64, q1, v1, v2);
    if ((s32)s31 != (s32)0) {
        v3 = M8((s30+2080));
        ((BFu8_5_1*)((s30+2080)))->f = 1;
        M32((s30+2000)) = (u32)fn_801ABBCC;
        M32((s30+2004)) = (u32)fn_801ABBEC;
    }
    M32((s30+1124)) = 101;
    fn_801ABA5C(s30);
}

void fn_801ABA5C(u32 p3) {
    fn_8019F894(p3, 102, 103);
}

void fn_801ABA84(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    v1 = M8((p3+2608));
    if ((s32)((v1>>4)&0x1) != (s32)0) {
        v2 = M32((p3+908));
        v3 = MF((v2+740));
        fn_801A0250(p3, 102, 103, v2, v3);
        return;
    }
    fn_8019F894(p3, 102, 103);
}

void fn_801ABAD0(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_801A0300();
    c1 = fn_801B9D6C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B4D60(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801ABC2C(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801ABB28(void) {
    fn_801A0348();
}

void fn_801ABB48(void) {
    fn_801A0368();
}

void fn_801ABBCC(void) {
    fn_801A5F2C();
}

void fn_801ABBEC(void) {
    fn_8019C5AC();
}

void fn_801ABC0C(void) {
    fn_801A03A8();
}

u32 fn_801ABC2C(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801ABC64();
        return 1;
    }
    return 0;
}

void fn_801ABC64(p3) u32 p3; {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E13D4;
    v2 = lbl_805E13D0;
    s31 = p3;
    fn_8018E580(p3, 42, -1, 0, v1, v2, v1);
    fn_80190C54(s31);
}

void fn_801ABCF8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M32((s31+908));
    v2 = M32((v1+56));
    M32((s31+1216)) = v2;
    fn_801A8454(s31, v1);
}

void fn_801ABD40(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_80190C54();
    c1 = fn_801AB624(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801ABD78(void) {
    fn_801ABB28();
}

void fn_801ABD98(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801ABB48();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801ABDE0(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801ABB68();
    c1 = fn_801AC63C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AC27C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801ABE28(void) {
    fn_801ABC0C();
}

void fn_801ABE48(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E13D8;
    v2 = lbl_805E13DC;
    fn_8018E580(p3, 43, -1, 0, v1, v2, v1);
}

void fn_801ABE80(void) {
    fn_801A03F8();
}

void fn_801ABEA0(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_801A0470();
    c1 = fn_801A0430(s31);
    if ((s32)c1 != (s32)0) {
        fn_801ABC64(s31);
        return;
    }
    c3 = fn_801A0444(s31);
    if ((s32)c3 == (s32)0) {
    return;
    }
    fn_801AB940(s31, 0);
}

void fn_801ABF04(void) {
    fn_801A04B8();
}

void fn_801ABF24(void) {
    fn_801A04D8();
}

void fn_801ABF44(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801A04DC();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801ABF8C(void) {
    fn_801A04FC();
}

u32 fn_801ABFAC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194120();
    if ((s32)c0 == (s32)1) {
        fn_801ABFF4(s31);
        return 1;
    }
    return 0;
}

void fn_801ABFF4(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    s31 = p3;
    fn_801918BC();
    v1 = lbl_805E13E0;
    v2 = lbl_805E13E4;
    fn_8018E580(s31, 35, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 4;
    fn_8019FCA0(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801AC128(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c4;
    s31 = p3;
    fn_8019FCF0();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c4 = fn_801B4D04(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
}

void fn_801AC188(void) {
    fn_8019FD38();
}

void fn_801AC1A8(void) {
    fn_8019FD58();
}

void fn_801AC1C8(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    u32 c5;
    u32 c6;
    s31 = p3;
    fn_8019FD5C();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801AC9FC(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_801ACC18(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_801ACDF8(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
    c6 = fn_80194120(s31);
    if ((s32)c6 != (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801AC25C(void) {
    fn_8019FD7C();
}

u32 fn_801AC27C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194144();
    if ((s32)c0 != (s32)0) {
        fn_801AC2C4(s31);
        return 1;
    }
    return 0;
}

void fn_801AC2C4(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E13E8;
    v2 = lbl_805E13EC;
    s31 = p3;
    fn_8018E580(p3, 36, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 9;
    fn_8019FE48(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801AC324(void) {
    fn_8019FE70();
}

void fn_801AC344(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c4;
    u32 c5;
    s31 = p3;
    fn_8019FE98();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c4 = fn_801B4D04(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_801B7E80(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
}

void fn_801AC3B4(void) {
    fn_8019FEE0();
}

void fn_801AC3D4(void) {
    fn_8019FF00();
}

void fn_801AC3F4(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_8019FF04();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801ABFAC(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_80194144(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    fn_801AC488(s31);
}

void fn_801AC468(void) {
    fn_8019FF24();
}

void fn_801AC488(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E13F0;
    v2 = lbl_805E13F4;
    s31 = p3;
    fn_8018E580(p3, 37, -1, 0, v1, v2, v1);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801AC4D8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801AC514(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c4;
    u32 c5;
    s31 = p3;
    fn_8019FE98();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c4 = fn_801B4D04(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_801B7E80(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
}

void fn_801AC584(void) {
    fn_8019FEE0();
}

void fn_801AC5A4(void) {
    fn_8019FF00();
}

void fn_801AC5C4(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_8019FF04();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801ABFAC(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801AC61C(void) {
    fn_8019FF24();
}

u32 fn_801AC63C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194168();
    if ((s32)c0 != (s32)0) {
        fn_801AC684(s31);
        return 1;
    }
    return 0;
}

void fn_801AC684(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E13F8;
    v2 = lbl_805E13FC;
    s31 = p3;
    fn_8018E580(p3, 38, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 13;
    fn_8019FF44(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801AC6E4(void) {
    fn_8019FF6C();
}

void fn_801AC704(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c4;
    u32 c5;
    s31 = p3;
    fn_8019FF94();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c4 = fn_801B4D04(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_801B7E80(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
}

void fn_801AC774(void) {
    fn_8019FFDC();
}

void fn_801AC794(void) {
    fn_8019FFFC();
}

void fn_801AC7B4(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_801A0000();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801ABFAC(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_80194168(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    fn_801AC848(s31);
}

void fn_801AC828(void) {
    fn_801A0020();
}

void fn_801AC848(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1400;
    v2 = lbl_805E1404;
    s31 = p3;
    fn_8018E580(p3, 39, -1, 0, v1, v2, v1);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801AC898(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801AC8D4(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c4;
    u32 c5;
    s31 = p3;
    fn_8019FF94();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c4 = fn_801B4D04(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_801B7E80(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
}

void fn_801AC944(void) {
    fn_8019FFDC();
}

void fn_801AC964(void) {
    fn_8019FFFC();
}

void fn_801AC984(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_801A0000();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801ABFAC(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801AC9DC(void) {
    fn_801A0020();
}

u32 fn_801AC9FC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_801941D4();
    if ((s32)c0 != (s32)0) {
        fn_801ACA44(s31);
        return 1;
    }
    return 0;
}

void fn_801ACAB8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801A8454(s31);
        return;
    }
    fn_801A0040(s31);
}

void fn_801ACB00(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c4;
    u32 c5;
    s31 = p3;
    fn_801A0044();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c4 = fn_801B4D04(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_801B7E80(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
}

void fn_801ACB70(void) {
    fn_801A008C();
}

void fn_801ACB90(void) {
    fn_801A00AC();
}

void fn_801ACBB0(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801A00B0();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801ACBF8(void) {
    fn_801A00D0();
}

u32 fn_801ACC18(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_801941B0();
    if ((s32)c0 != (s32)0) {
        fn_801ACC60(s31);
        return 1;
    }
    return 0;
}

void fn_801ACC60(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1410;
    v2 = lbl_805E1414;
    fn_8018E580(p3, 106, -1, 0, v1, v2, v1);
}

void fn_801ACC98(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801A8454(s31);
        return;
    }
    fn_801A00F0(s31);
}

void fn_801ACCE0(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c4;
    u32 c5;
    s31 = p3;
    fn_801A00F4();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c4 = fn_801B4D04(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_801B7E80(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
}

void fn_801ACD50(void) {
    fn_801A013C();
}

void fn_801ACD70(void) {
    fn_801A015C();
}

void fn_801ACD90(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801A0160();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801ACDD8(void) {
    fn_801A0180();
}

u32 fn_801ACDF8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_8019418C();
    if ((s32)c0 != (s32)0) {
        fn_801ACE40(s31);
        return 1;
    }
    return 0;
}

void fn_801ACE40(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_80194240();
    v1 = lbl_805E1418;
    v2 = lbl_805E141C;
    v3 = M32((u32)lbl_804AF630+(c0<<2));
    fn_8018E580(s31, 107, v3, 0, v1, v2, v1);
}

void fn_801ACE98(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_8019418C();
    if ((s32)c0 == (s32)0) {
        fn_801A8454(s31);
        return;
    }
    fn_801A01A0(s31);
}

void fn_801ACEE0(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801A01A4();
    c1 = fn_801B2C4C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801ACF28(void) {
    fn_801A01EC();
}

void fn_801ACF48(void) {
    fn_801A020C();
}

void fn_801ACF68(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801A0210();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801ACFB0(void) {
    fn_801A0230();
}

u32 fn_801ACFD0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M8((p3+2083));
    if ((s32)((v1>>2)&0x1) == (s32)0) {
        if ((s32)((v1>>3)&0x1) == (s32)0) {
            c0 = fn_80194264(p3, v1);
            if ((s32)c0 != (s32)0) {
                fn_801AD02C(s31);
                return 1;
            }
        }
    }
    return 0;
}

void fn_801AD02C(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    u32 v5;
    s31 = p3;
    fn_80190A88();
    v1 = M8((s31+8));
    fn_8027A08C(v1);
    v2 = lbl_805E1420;
    v3 = lbl_805E1424;
    fn_8018E580(s31, 108, -1, 0, v2, v3, v2);
    v4 = M8((s31+2083));
    ((BFu8_4_1*)((s31+2083)))->f = 1;
    v5 = M8((s31+8));
    fn_80231020(v5);
}

void fn_801AD098(void) {
    u32 c0;
    c0 = fn_801AD15C();
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801AD0BC(void) {
    fn_801A051C();
}

void fn_801AD0DC(void) {
    fn_801A0520();
}

void fn_801AD0FC(void) {
    fn_801A0540();
}

void fn_801AD11C(void) {
    fn_801A0544();
}

void fn_801AD13C(void) {
    fn_801A0564();
}

void fn_801AD1A4(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1428;
    v2 = lbl_805E142C;
    fn_8018E580(p3, 109, -1, 0, v1, v2, v1);
}

void fn_801AD1DC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801A8454(s31);
        return;
    }
    fn_801A0618(s31);
}

void fn_801AD224(void) {
    fn_801A061C();
}

void fn_801AD244(void) {
    fn_801A0620();
}

void fn_801AD264(void) {
    fn_801A0640();
}

void fn_801AD284(void) {
    fn_801A0644();
}

void fn_801AD2A4(void) {
    fn_801A0664();
}

void fn_801AD2C4(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    float v10;
    v1 = lbl_805E1430;
    v2 = lbl_805E1434;
    s31 = p3;
    fn_8018E580(p3, 47, -1, 0, v1, v2, v1);
    fn_801ADEB0(s31);
    v3 = M8((s31+2608));
    ((BFu8_2_1*)((s31+2608)))->f = 1;
    M32((s31+2000)) = (u32)fn_801AD46C;
    M32((s31+2004)) = (u32)fn_801AD48C;
    M32((s31+2040)) = (u32)fn_801ADD38;
    M32((s31+2020)) = (u32)fn_801ADD18;
    v4 = M32((s31+908));
    fn_801A889C(s31, (v4+20));
    v5 = M32((s31+688));
    v6 = M32(s31);
    v7 = M32((v5+288));
    v8 = M32((s31+1088));
    v9 = M8((s31+8));
    fn_80236C40(v6, ((4<<16)-22142), v8, 218, v7, v7, v9);
    v10 = lbl_805E1434;
    fn_8019560C(s31, ((2<<16)+55), v10);
}

void fn_801AD3A0(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_801AD550();
    if ((s32)c0 != (s32)0) {
    return;
    }
    c1 = fn_80198B00(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    fn_801AD4CC(s31);
}

void fn_801AD3EC(void) {
    fn_80190C54();
}

void fn_801AD40C(void) {
    fn_801AD974();
}

void fn_801AD42C(void) {
    fn_801AD994();
}

void fn_801AD44C(void) {
    fn_801ADC18();
}

void fn_801AD46C(void) {
    fn_801ADC4C();
}

void fn_801AD48C(void) {
    fn_801ADC78();
}

void fn_801AD4AC(void) {
    fn_801ADCA4();
}

void fn_801AD954(void) {
    fn_80190C54();
}

void fn_801AD974(void) {
    fn_80199C40();
}

void fn_801ADCA4(void) {
    fn_8019FC80();
}

u32 fn_801ADCC4(u32 p3) {
    u32 s30;
    u32 s31;
    s30 = p3;
    s31 = M32((p3+2328));
    fn_801ADE4C();
    M32((s30+2040)) = (u32)fn_801ADD38;
    M32((s30+2020)) = (u32)fn_801ADD18;
    return s31;
}

void fn_801ADD18(void) {
    fn_801ADD38();
}

void fn_801ADEB0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = M32((p3+24));
    v2 = M32((v1+28));
    M32((p3+2288)) = 0;
    v3 = M32((v2+40));
    M32((p3+2364)) = v3;
    M32((p3+2412)) = -1;
    M32((p3+2292)) = 0;
    v4 = M32((v2+40));
    M32((p3+2368)) = v4;
    M32((p3+2416)) = -1;
    M32((p3+2296)) = 0;
    v5 = M32((v2+40));
    M32((p3+2372)) = v5;
    M32((p3+2420)) = -1;
    M32((p3+2328)) = 0;
    *(S12*)((p3+2424)) = *(S12*)((p3+804));
    *(S12*)((p3+2436)) = *(S12*)((p3+816));
    *(S12*)((p3+2448)) = *(S12*)((p3+828));
}

void fn_801ADF98(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805E1450;
    v2 = lbl_805E1454;
    s31 = p3;
    fn_8018E580(p3, 49, -1, 2, v1, v2, v1);
    v3 = M32((s31+688));
    v4 = M32(s31);
    v5 = M32((s31+1088));
    v6 = M32((v3+288));
    fn_80236C40(v4, ((6<<16)-23209), v5, 200, v6);
}

void fn_801AE000(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801AE03C(void) {
    fn_80190C54();
}

void fn_801AE05C(void) {
    fn_80199C14();
}

void fn_801AE07C(void) {
    fn_801AD994();
}

void fn_801AE09C(void) {
    fn_801ADC18();
}

void fn_801AE0BC(void) {
    fn_801ADCA4();
}

void fn_801AE0DC(u32 p3, u32 p4) {
    float v1;
    float v2;
    u32 s31;
    u32 s30;
    u32 v3;
    v1 = lbl_805E1458;
    v2 = lbl_805E145C;
    s31 = p4;
    s30 = p3;
    fn_8018E580(p3, 50, -1, 2, v1, v2, v1);
    M32((s30+2364)) = s31;
    v3 = M32((s30+2328));
    if ((s32)v3 == (s32)1) {
        M32((s30+2368)) = 0;
        return;
    }
    M32((s30+2368)) = 1;
}

void fn_801AE24C(void) {
    fn_80190C54();
}

void fn_801AE26C(void) {
    fn_80199C40();
}

void fn_801AE4CC(void) {
    fn_8019FC80();
}

void fn_801AE7C8(u32 p3) {
    u32 v1;
    v1 = M32((p3+996));
    if ((s32)(v1&0x100) == (s32)0) {
    return;
    }
    fn_801AE7F4();
}

void fn_801AEA5C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    float v1;
    float v2;
    s31 = p4;
    s30 = p3;
    fn_801918BC();
    v1 = lbl_805E1478;
    v2 = lbl_805E147C;
    fn_8018E580(s30, 51, -1, 2, v1, v2, v1);
    M32((s30+2000)) = (u32)fn_801AEB6C;
    M32((s30+2368)) = s31;
    M32((s30+2364)) = 0;
}

void fn_801AEACC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801AEB08(void) {
    fn_80190C54();
}

void fn_801AEB28(void) {
    fn_80199C40();
}

void fn_801AEB4C(void) {
    fn_8019FC60();
}

void fn_801AEC08(void) {
    fn_801AB428();
}

void fn_801AEC28(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1480;
    v2 = lbl_805E1484;
    fn_8018E580(p3, 52, -1, 2, v1, v2, v1);
}

void fn_801AECCC(void) {
    fn_80190C54();
}

void fn_801AECEC(void) {
    fn_80199C40();
}

void fn_801AED10(void) {
    fn_8019FC60();
}

void fn_801AED30(void) {
    fn_8019FC80();
}

void fn_801AF2A0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_801AEFE0();
    v1 = M8((s31+2564));
    if ((s32)((v1>>7)&0x1) == (s32)0) {
    return;
    }
    v2 = M32(s31);
    c1 = fn_80222F8C(2, v2);
    v3 = M32((s31+2584));
    if ((s32)c1 >= (s32)v3) {
        v4 = M32(s31);
        fn_80222FDC(2, v4);
        fn_802230A0();
    }
    fn_801A8F68(s31, (s31+768), (s31+816), (s31+804));
    v5 = M8((s31+2564));
    ((BFu8_0_1*)((s31+2564)))->f = 0;
    v6 = M32((s31+908));
    v7 = M32((v6+428));
    M32((s31+2580)) = v7;
}

void fn_801AF39C(u32 p3, u32 p4) {
    M32((p3+2028)) = (u32)fn_801AF3CC;
    fn_801A9350(p3, 0);
}

void fn_801AF3CC(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801A93B0(p3, 0);
    v1 = M32((s31+1012));
    fn_801C7784(v1, (s31+2548));
}

void fn_801AF408(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+1008));
    if ((u32)v1 != (u32)0) {
        v2 = M8((s31+2084));
        if ((s32)((v2>>5)&0x1) != (s32)0) {
            func_80428F64(v1);
            M32((s31+1008)) = 0;
        } else {
            fn_802230A0(v1);
            M32((s31+1008)) = 0;
        }
    }
    fn_801A6968(s31);
    fn_801A7D70(s31);
}

void fn_801AF474(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E14A0;
    v2 = lbl_805E14A4;
    s31 = p3;
    fn_8018E580(p3, 57, -1, 0, v1, v2, v1);
    fn_801A809C(s31, 0, 1);
    M32((s31+1008)) = 0;
    M32((s31+2040)) = (u32)fn_801AF618;
    M32((s31+2020)) = (u32)fn_801AF5D4;
    fn_801A6840(s31);
}

void fn_801AF4F0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801AED50(s31);
    fn_801A8454(s31);
}

void fn_801AF534(void) {
    fn_80190C54();
}

void fn_801AF554(void) {
    fn_80199C40();
}

void fn_801AF574(void) {
    fn_8019FC5C();
}

void fn_801AF594(void) {
    fn_8019FC60();
}

void fn_801AF5B4(void) {
    fn_8019FC80();
}

void fn_801AF5D4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_801AED50();
    fn_801AF39C(s30, s31);
}

void fn_801AF618(void) {
    fn_801AF330();
}

#pragma push
#pragma opt_loop_invariants off
void fn_801AF638(u32 p3) {
    u32 h1;
    u32 v1;
    u32 v2;
    u32 v4;
    s32 v8;
    u32 v10;
    s32 c3;
    u32 v9;
    u32 c6;
    fn_801A809C(p3, 1, 0);
    ((BFu8_3_1*)((2081+p3)))->f = 1;
    M32((p3+2044)) = (u32)fn_801AF8AC;
    M32((p3+2024)) = (u32)fn_801AF84C;
    M32((p3+2348)) = (u32)fn_801AF71C;
    v2 = M32((p3+908));
    h1 = M32((v2+432));
    fn_801A7BDC(p3, h1);
    v4 = M32((p3+1012));
    M32((p3+2544)) = fn_801C7C7C(v4);
    c3 = fn_801C7C88(M32((p3+1012)));
    M32((2548+p3)) = c3;
    M32((p3+2552)) = fn_801C8C38(M32((p3+1012)));
    M32((p3+2556)) = fn_801C8C44(M32((1012+p3)));
    v8 = M32((p3+2548));
    v9 = M32((p3+2544));
    c6 = fn_801C85A8(v9, (v8&0xff));
    v10 = M32((p3+2552));
    fn_801DECBC(c6, v10, M32((p3+2556)));
    fn_80193B84(p3, 1, 1, 1, (fn_801A5A74(p3)&0xff));
}
#pragma pop

void fn_801AF71C(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801A7C84();
    v1 = M32((s31+2332));
    if ((s32)v1 != (s32)0) {
    return;
    }
    fn_801AF7A8(s31);
    fn_801B0ADC(s31);
}

void fn_801AF764(u32 p3) {
    u32 v1;
    float v2;
    u32 v3;
    u32 s31;
    v1 = M32((p3+912));
    v2 = MF((p3+712));
    v3 = M32((v1+12));
    s31 = (v3+600);
    fn_8018A188(s31, v1, v2);
    fn_80189FD4(s31);
}

void fn_801AF84C(u32 p3) {
    u32 v1;
    M32((p3+2028)) = (u32)fn_801AF880;
    v1 = M32((p3+912));
    fn_8018C7F8(v1, 3);
}

void fn_801AF880(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+912));
    v2 = M32((v1+12));
    fn_80189D28((v2+600));
}

void fn_801AF950(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    s31 = p3;
    fn_801918BC();
    v1 = lbl_805E14A8;
    v2 = lbl_805E14AC;
    fn_8018E580(s31, 65, -1, 0, v1, v2, v1);
    fn_801AF638(s31);
}

void fn_801AFA14(void) {
    fn_80190C54();
}

void fn_801AFA34(void) {
    fn_80199C40();
}

void fn_801AFA54(void) {
    fn_8019FC5C();
}

void fn_801AFA74(void) {
    fn_8019FC60();
}

void fn_801AFA94(void) {
    fn_8019FC80();
}

void fn_801AFB30(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c2;
    s31 = p3;
    fn_801A7C84();
    v1 = M32((s31+2332));
    if ((s32)v1 == (s32)0) {
        fn_801AFC70(s31);
        c2 = fn_801B0ADC(s31);
        return;
    }
    v2 = M32((s31+2544));
    if ((s32)v2 == (s32)0) {
    return;
    }
    M32((s31+2544)) = (v2-1);
    if ((s32)v2 != (s32)0) {
    return;
    }
}

void fn_801AFB90(void) {
    fn_801A5F2C();
}

void fn_801AFBB0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_80191798();
    if ((s32)c0 != (s32)0) {
    return;
    }
    v1 = M8((s31+2548));
    if ((s32)((v1>>7)&0x1) != (s32)0) {
    return;
    }
    v2 = M32((s31+2544));
    if ((s32)v2 != (s32)0) {
    return;
    }
    fn_8019F288(s31, (s31+2088), (u32)fn_801AFFEC);
}

void fn_801AFC10(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_80191798();
    if ((s32)c0 != (s32)0) {
    return;
    }
    v1 = M8((s31+2548));
    if ((s32)((v1>>7)&0x1) != (s32)0) {
    return;
    }
    v2 = M32((s31+2544));
    if ((s32)v2 != (s32)0) {
    return;
    }
    fn_8019F288(s31, (s31+2088), (u32)fn_801AFF9C);
}

void fn_801AFC70(p3) u32 p3; {
    u32 s31;
    s31 = p3;
    fn_801A6DB8();
    fn_80196F18(s31, 2, -1);
    fn_80196F38(s31, 2);
    fn_801A7D70(s31);
}

void fn_801AFCC0(u32 p3, u32 p4) {
    u32 v1;
    v1 = M8((p3+2548));
    ((BFu8_0_1*)((p3+2548)))->f = 0;
    M32((p3+2028)) = (u32)fn_801AFCE0;
}

void fn_801AFCE0(u32 p3) {
    fn_801AFF3C(p3, 0);
}

void fn_801AFD04(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_801A6DB8();
    fn_80196F18(s31, 2, -1);
    fn_80196F38(s31, 2);
    fn_801A7D70(s31);
}

void fn_801AFD54(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    v1 = lbl_805E14B0;
    v2 = lbl_805E14B4;
    s31 = p3;
    fn_8018E580(p3, 58, -1, 0, v1, v2, v1);
    fn_801A809C(s31, 3, 1);
    M32((s31+2040)) = (u32)fn_801AFF1C;
    M32((s31+2020)) = (u32)fn_801AFED8;
    fn_801A6CE4(s31);
    fn_80196F18(s31, 2, 0);
    fn_80196F38(s31, 2);
    v3 = M8((s31+2548));
    ((BFu8_0_1*)((s31+2548)))->f = 1;
}

void fn_801AFDF4(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801AFAB4(s31);
    fn_801A8454(s31);
}

void fn_801AFE38(void) {
    fn_80190C54();
}

void fn_801AFE58(void) {
    fn_80199C40();
}

void fn_801AFE78(void) {
    fn_8019FC5C();
}

void fn_801AFE98(void) {
    fn_8019FC60();
}

void fn_801AFEB8(void) {
    fn_8019FC80();
}

void fn_801AFED8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_801AFAB4();
    fn_801AFCC0(s30, s31);
}

void fn_801AFF1C(void) {
    fn_801AFC70();
}

void fn_801AFF9C(u32 p3) {
    u32 v1;
    v1 = M32((p3+28));
    switch ((s32)v1) {
    case 85:
        fn_801B0434();
        break;
    case 87:
        fn_801B0750();
    }
}

void fn_801AFFEC(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    v1 = lbl_805E14B8;
    v2 = lbl_805E14BC;
    s31 = p3;
    fn_8018E580(p3, 83, -1, 0, v1, v2, v1);
    M32((s31+1100)) = 0;
    M32((s31+1096)) = 0;
    v3 = M8((s31+2548));
    ((BFu8_0_1*)((s31+2548)))->f = 1;
}

void fn_801B004C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B0128(s31);
}

void fn_801B0088(void) {
    fn_8019F37C();
}

void fn_801B00A8(void) {
    fn_8019F39C();
}

void fn_801B00C8(void) {
    fn_8019F3BC();
}

void fn_801B00E8(void) {
    fn_8019F3DC();
}

void fn_801B0108(void) {
    fn_8019F3FC();
}

void fn_801B01B0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B02A0(s31);
}

void fn_801B01EC(void) {
    fn_8019F37C();
}

void fn_801B020C(void) {
    fn_8019F39C();
}

void fn_801B022C(void) {
    fn_8019F3BC();
}

void fn_801B024C(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F3DC();
    fn_8019E78C(s31);
}

void fn_801B0280(void) {
    fn_8019F3FC();
}

void fn_801B0320(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M8((s31+2548));
    ((BFu8_0_1*)((s31+2548)))->f = 0;
    M32((s31+2360)) = (u32)fn_801AFBB0;
    v2 = M32((s31+908));
    v3 = M32((v2+440));
    M32((s31+2544)) = v3;
    v4 = M32((s31+908));
    fn_801A889C(s31, (v4+444));
    fn_801A8454(s31);
}

void fn_801B0394(void) {
    fn_8019F37C();
}

void fn_801B03B4(void) {
    fn_8019F39C();
}

void fn_801B03D4(void) {
    fn_8019F3BC();
}

void fn_801B03F4(void) {
    fn_8019F3DC();
}

void fn_801B0414(void) {
    fn_8019F3FC();
}

void fn_801B04CC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B05BC(s31);
}

void fn_801B0508(void) {
    fn_8019F37C();
}

void fn_801B0528(void) {
    fn_8019F39C();
}

void fn_801B0548(void) {
    fn_8019F3BC();
}

void fn_801B0568(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F3DC();
    fn_8019E78C(s31);
}

void fn_801B059C(void) {
    fn_8019F3FC();
}

void fn_801B063C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M8((s31+2548));
    ((BFu8_0_1*)((s31+2548)))->f = 0;
    M32((s31+2360)) = (u32)fn_801AFBB0;
    v2 = M32((s31+908));
    v3 = M32((v2+440));
    M32((s31+2544)) = v3;
    v4 = M32((s31+908));
    fn_801A889C(s31, (v4+444));
    fn_801A8454(s31);
}

void fn_801B06B0(void) {
    fn_8019F37C();
}

void fn_801B06D0(void) {
    fn_8019F39C();
}

void fn_801B06F0(void) {
    fn_8019F3BC();
}

void fn_801B0710(void) {
    fn_8019F3DC();
}

void fn_801B0730(void) {
    fn_8019F3FC();
}

void fn_801B07E8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B08D8(s31);
}

void fn_801B0824(void) {
    fn_8019F37C();
}

void fn_801B0844(void) {
    fn_8019F39C();
}

void fn_801B0864(void) {
    fn_8019F3BC();
}

void fn_801B0884(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F3DC();
    fn_8019E78C(s31);
}

void fn_801B08B8(void) {
    fn_8019F3FC();
}

void fn_801B08D8(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805E14B8;
    v2 = lbl_805E14BC;
    s31 = p3;
    M32((p3+2056)) = 0;
    fn_8018E580(p3, 89, -1, 0, v1, v2, v1);
    v3 = M8((s31+2548));
    ((BFu8_0_1*)((s31+2548)))->f = 0;
    M32((s31+2360)) = (u32)fn_801AFBB0;
    M32((s31+2544)) = 0;
    v4 = M32((s31+908));
    fn_801A889C(s31, (v4+444));
    v5 = M8((s31+2548));
    ((BFu8_0_1*)((s31+2548)))->f = 1;
}

void fn_801B0964(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+2056));
    if ((u32)v1 != (u32)0) {
        v2 = M8((s31+2548));
        ((BFu8_0_1*)((s31+2548)))->f = 0;
        M32((s31+2056)) = 0;
    }
    c0 = fn_80198B00(s31);
    if ((s32)c0 == (s32)0) {
    return;
    }
    v3 = M8((s31+2548));
    ((BFu8_0_1*)((s31+2548)))->f = 0;
    M32((s31+2360)) = (u32)fn_801AFBB0;
    v4 = M32((s31+908));
    v5 = M32((v4+440));
    M32((s31+2544)) = v5;
    v6 = M32((s31+908));
    fn_801A889C(s31, (v6+444));
    fn_801A8454(s31);
}

void fn_801B09FC(void) {
    fn_8019F37C();
}

void fn_801B0A1C(void) {
    fn_8019F39C();
}

void fn_801B0A3C(void) {
    fn_8019F3BC();
}

void fn_801B0A5C(void) {
    fn_8019F3DC();
}

void fn_801B0A7C(void) {
    fn_8019F3FC();
}

void fn_801B0A9C(u32 p3) {
    u32 v1;
    v1 = M8((p3+2087));
    ((BFu8_0_1*)((p3+2087)))->f = 1;
}

void fn_801B0AB0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+1096));
    v2 = M32((p3+1100));
    fn_8019E72C(v1, v2);
}

u32 fn_801B0ADC(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E14C0;
    v2 = lbl_805E14C4;
    fn_8018E580(p3, 104, -1, 0, v1, v2, v1);
}

void fn_801B0B14(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801B0B50(void) {
    fn_80190C54();
}

void fn_801B0B70(void) {
    fn_80199C40();
}

void fn_801B0B90(void) {
    fn_8019FC5C();
}

void fn_801B0BB0(void) {
    fn_8019FC60();
}

void fn_801B0BD0(void) {
    fn_8019FC80();
}

void fn_801B0BF0(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    s31 = p3;
    v1 = M8((p3+8));
    fn_8027A0B8(v1);
    v2 = lbl_805E14C8;
    v3 = lbl_805E14CC;
    fn_8018E580(s31, 53, -1, 0, v2, v3, v2);
    fn_801A809C(s31, 2, 0);
    fn_801A6B38(s31);
    fn_801A7BDC(s31, 0);
    M32((s31+2044)) = (u32)fn_801B1084;
    M32((s31+2024)) = (u32)fn_801B103C;
}

void fn_801B0C7C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B0E34(s31);
}

void fn_801B0CB8(void) {
    fn_80190C54();
}

void fn_801B0CD8(void) {
    fn_80199C40();
}

void fn_801B0CF8(void) {
    fn_8019FC5C();
}

void fn_801B0D18(void) {
    fn_8019FC60();
}

void fn_801B0D38(void) {
    fn_8019FC80();
}

void fn_801B0D58(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B0E34(s31);
}

void fn_801B0D94(void) {
    fn_801B0F24();
}

void fn_801B0DB4(void) {
    fn_801B0F74();
}

void fn_801B0DD4(void) {
    fn_801B0F94();
}

void fn_801B0DF4(void) {
    fn_801B0FB4();
}

void fn_801B0E14(void) {
    fn_801B0FD4();
}

void fn_801B0E34(u32 p3) {
    float v1;
    float v2;
    u32 s30;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    float v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    v1 = lbl_805E14D0;
    v2 = lbl_805E14D4;
    s30 = p3;
    v3 = M32((p3+688));
    s31 = M32(v3);
    fn_8018E580(p3, 55, -1, 4, v1, v2, v1);
    v5 = M8((s30+2083));
    ((BFu8_6_1*)((s30+2083)))->f = 1;
    fn_801A1598(s30);
    v6 = lbl_805DD814;
    v7 = MF((v6+332));
    fn_80190E2C(s30, 0, 1, v6, v7);
    fn_80193BB4(s30);
    v8 = M32(s30);
    v9 = M32((s30+1088));
    fn_80236C40(v8, ((6<<16)-23169), v9, 200, s31);
    v10 = M32(s30);
    v11 = M32((s30+1088));
    fn_80236C40(v10, ((6<<16)-23168), v11, 200, s31);
}

float fn_801B0F00(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    v1 = lbl_805DD814;
    v2 = MF((p3+1192));
    v3 = MF((v1+336));
    MF((p3+1192)) = (v2-v3);
    v4 = M32((p3+1420));
    M32((p3+1420)) = (v4+1);
    return v2;
}

void fn_801B0F74(void) {
    fn_801A16BC();
}

void fn_801B0F94(void) {
    fn_801A16DC();
}

void fn_801B0FB4(void) {
    fn_801A16E0();
}

void fn_801B0FD4(void) {
    fn_801A1700();
}

void fn_801B0FF4(u32 p3) {
    u32 s31;
    s31 = p3;
    M32((p3+2044)) = 0;
    M32((p3+2024)) = 0;
    fn_801A6C0C();
    fn_801A7D70(s31);
    fn_80193BD8(s31);
}

void fn_801B103C(u32 p3) {
    u32 s31;
    s31 = p3;
    M32((p3+2044)) = 0;
    M32((p3+2024)) = 0;
    fn_801A6C0C();
    fn_801A7D70(s31);
    fn_80193BD8(s31);
}

void fn_801B1084(u32 p3) {
    u32 s31;
    s31 = p3;
    M32((p3+2044)) = 0;
    M32((p3+2024)) = 0;
    fn_801A6C0C();
    fn_801A7D70(s31);
    fn_80193BD8(s31);
}

void fn_801B10CC(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E14D8;
    v2 = lbl_805E14DC;
    fn_8018E580(p3, 56, -1, 4, v1, v2, v1);
}

void fn_801B1104(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A1728(s31);
    fn_801B0FF4(s31);
    fn_801A8454(s31);
}

void fn_801B1154(void) {
    fn_801B0F74();
}

void fn_801B1174(void) {
    fn_801B0F94();
}

void fn_801B1194(void) {
    fn_801B0FB4();
}

void fn_801B11B4(void) {
    fn_801B0FD4();
}

void fn_801B11D4(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    s31 = p3;
    v1 = M8((p3+8));
    fn_8027A0E4(v1);
    fn_801918BC(s31);
    v2 = lbl_805E14E0;
    v3 = lbl_805E14E4;
    fn_8018E580(s31, 59, -1, 0, v2, v3, v2);
    fn_801A809C(s31, 4, 1);
    M32((s31+2040)) = (u32)fn_801B13AC;
    M32((s31+2020)) = (u32)fn_801B138C;
    M32((s31+2544)) = 0;
    M32((s31+2548)) = 0;
    fn_801A6E90(s31, (u32)fn_801B138C);
    fn_801A7BDC(s31, 0);
}

void fn_801B12EC(void) {
    fn_80190C54();
}

void fn_801B130C(void) {
    fn_80199C40();
}

void fn_801B132C(void) {
    fn_8019FC5C();
}

void fn_801B134C(void) {
    fn_8019FC60();
}

void fn_801B136C(void) {
    fn_8019FC80();
}

void fn_801B138C(void) {
    fn_801B13AC();
}

void fn_801B13EC(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_801A6F64();
    fn_801A7D70(s31);
}

float fn_801B1464(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+908));
    v2 = M32((p3+2548));
    v3 = M32((v1+484));
    return (((float)(s32)v2)/((float)(s32)v3));
}

void fn_801B14B0(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E14F8;
    v2 = lbl_805E14FC;
    s31 = p3;
    fn_8018E580(p3, 90, -1, 0, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801B15E8;
    M32((s31+2020)) = (u32)fn_801B15C8;
}

void fn_801B1510(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_80190C54();
    c1 = fn_801B161C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801B1548(void) {
    fn_801AB370();
}

void fn_801B1568(void) {
    fn_801AB390();
}

void fn_801B1588(void) {
    fn_8019FC60();
}

void fn_801B15A8(void) {
    fn_801AB428();
}

void fn_801B15C8(void) {
    fn_801B15E8();
}

u32 fn_801B161C(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801B1654();
        return 1;
    }
    return 0;
}

void fn_801B16B0(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801B1830();
    c1 = fn_80198B00(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    fn_801B17D4(s31);
}

void fn_801B16F4(void) {
    fn_801B1880();
}

void fn_801B1714(void) {
    fn_801B18D4();
}

void fn_801B1734(void) {
    fn_801B18F4();
}

void fn_801B1754(void) {
    fn_801B1914();
}

void fn_801B1774(void) {
    fn_801B1934();
}

void fn_801B1794(void) {
    fn_801B1974();
}

void fn_801B17B4(void) {
    fn_801B1974();
}

void fn_801B17D4(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1508;
    v2 = lbl_805E150C;
    s31 = p3;
    fn_8018E580(p3, 92, -1, 0, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801B1974;
    M32((s31+2020)) = (u32)fn_801B1954;
}

void fn_801B1858(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32((p3+2548));
    M32((p3+2548)) = (v1+1);
    v2 = M32((p3+908));
    v3 = M32((p3+2548));
    v4 = M32((v2+484));
    if ((s32)v3 <= (s32)v4) {
    return;
    }
    M32((p3+2548)) = v4;
    if ((s32)v3 != (s32)v4) {
    return;
    }
}

void fn_801B18D4(void) {
    fn_801B1548();
}

void fn_801B18F4(void) {
    fn_801B1568();
}

void fn_801B1914(void) {
    fn_801B1588();
}

void fn_801B1934(void) {
    fn_801B15A8();
}

void fn_801B1954(void) {
    fn_801B1974();
}

void fn_801B1974(void) {
    fn_801B15E8();
}

u32 fn_801B1994(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801B19CC();
        return 1;
    }
    return 0;
}

void fn_801B1A34(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B13EC(s31);
    fn_801A8454(s31);
}

void fn_801B1A78(void) {
    fn_80190C54();
}

void fn_801B1A98(void) {
    fn_80199C40();
}

void fn_801B1AB8(void) {
    fn_801AB390();
}

void fn_801B1AD8(void) {
    fn_8019FC60();
}

void fn_801B24D8(void) {
    fn_801AB428();
}

void fn_801B24F8(void) {
    fn_801B2518();
}

void fn_801B2658(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801A7C84();
    v1 = M32((s31+2332));
    if ((s32)v1 > (s32)0) {
    return;
    }
    fn_801B2868(s31);
    fn_801B0ADC(s31);
}

void fn_801B298C(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805E1580;
    MF((p3+2552)) = v1;
    v2 = M32((p3+908));
    v3 = M32((v2+516));
    MF((p3+2556)) = ((float)(s32)v3);
}

float fn_801B29C8(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E159C;
    v2 = MF((p3+1192));
    return ((v1-v2)/v1);
}

void fn_801B2B04(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B254C(s31);
    fn_801A8454(s31);
}

void fn_801B2B48(void) {
    fn_80190C54();
}

void fn_801B2B68(void) {
    fn_80199C40();
}

void fn_801B2B88(void) {
    fn_8019FC5C();
}

void fn_801B2BA8(void) {
    fn_8019FC60();
}

void fn_801B2BC8(void) {
    fn_8019FC80();
}

void fn_801B2BE8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_801B254C();
    fn_801B28F8(s30, s31);
}

void fn_801B2C2C(void) {
    fn_801B2868();
}

u32 fn_801B2C4C(p3) u32 p3; {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1108));
    if ((s32)v1 == (s32)5) {
        c0 = fn_801B2FC8();
        if ((s32)c0 != (s32)0) {
            return 1;
        }
        v2 = M32((s31+984));
        if ((s32)(v2&0x100) != (s32)0) {
            fn_801B2CB4(s31);
            return 1;
        }
    }
    return 0;
}

void fn_801B2CB4(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    float v3;
    v1 = lbl_805E15B0;
    v2 = lbl_805E15B4;
    s31 = p3;
    fn_8018E580(p3, 94, -1, 0, v1, v2, v1);
    v3 = lbl_805E15B4;
    fn_8019560C(s31, ((2<<16)+102), v3);
}

void fn_801B2D0C(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801B2E50();
    c1 = fn_80198B00(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    fn_801B2E18(s31);
}

void fn_801B2D50(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801B2E58();
    c1 = fn_801B9D6C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B2FC8(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801B2D98(void) {
    fn_801B2F48();
}

void fn_801B2DB8(void) {
    fn_801B2F68();
}

void fn_801B2DD8(void) {
    fn_801B2F88();
}

void fn_801B2DF8(void) {
    fn_801B2FA8();
}

void fn_801B2E18(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E15B8;
    v2 = lbl_805E15BC;
    fn_8018E580(p3, 95, -1, 32, v1, v2, v1);
}

void fn_801B2EA0(u32 p3) {
    u32 loc12[1];
    u32 loc8[1];
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    u32 v5;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_80190948(p3, ((u32)loc8), ((u32)loc12));
    v1 = M32((s31+1012));
    v2 = MF(((u32)loc12));
    v3 = MF(((u32)loc8));
    fn_801C75F4(v1, 1, v2, v3);
    c2 = fn_801B9D6C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801B2FC8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_801AB168(s31);
    if ((s32)c4 == (s32)0) {
    return;
    }
    M32((s31+1224)) = 0;
    v4 = M32((s31+908));
    v5 = M32((v4+512));
    MF((s31+2552)) = ((float)(s32)v5);
    if ((s32)c4 != (s32)0) {
    return;
    }
}

void fn_801B2F48(void) {
    fn_80199C40();
}

void fn_801B2F68(void) {
    fn_8019FC5C();
}

void fn_801B2F88(void) {
    fn_8019FC60();
}

void fn_801B2FA8(void) {
    fn_8019FC80();
}

u32 fn_801B2FC8(p3) u32 p3; {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    float v7;
    u32 v8;
    float v9;
    u32 v10;
    float v11;
    u32 v12;
    u32 v13;
    float v14;
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
    s31 = p3;
    v1 = M32((p3+996));
    if ((s32)(v1&0x100) != (s32)0) {
        v2 = M32((s31+28));
        if ((s32)v2 != (s32)96) {
            v3 = M8((s31+2582));
            if ((s32)((s8)v3) == (s32)0) {
                v4 = M8((s31+2580));
                v5 = lbl_805E15C8;
                if (v5 == ((float)(s32)((s8)v4))) {
                    M32((s31+2576)) = 5;
                    v6 = M32((s31+908));
                    *(S12*)((s31+2560)) = *(S12*)((v6+544));
                } else {
                    v7 = lbl_805E15CC;
                    if (v7 == ((float)(s32)((s8)v4))) {
                        M32((s31+2576)) = 6;
                        v8 = M32((s31+908));
                        *(S12*)((s31+2560)) = *(S12*)((v8+576));
                    } else {
                        v9 = lbl_805E15D0;
                        if (v9 == ((float)(s32)((s8)v4))) {
                            M32((s31+2576)) = 7;
                            v10 = M32((s31+908));
                            *(S12*)((s31+2560)) = *(S12*)((v10+600));
                        } else {
                            v11 = lbl_805E15D4;
                            if (v11 == ((float)(s32)((s8)v4))) {
                                M32((s31+2576)) = 9;
                                v12 = M32((s31+908));
                                *(S12*)((s31+2560)) = *(S12*)((v12+620));
                            } else {
                                M32((s31+2576)) = 10;
                                v13 = M32((s31+908));
                                *(S12*)((s31+2560)) = *(S12*)((v13+640));
                            }
                        }
                    }
                }
                v14 = lbl_805E15D8;
                fn_80190E2C(s31, 0, 0, v14);
                M8((s31+2582)) = 1;
                v15 = M8((s31+2082));
                ((BFu8_3_1*)((s31+2082)))->f = 0;
                v16 = M32((s31+2576));
                if ((s32)v16 == (s32)6) {
                    v17 = M32((s31+908));
                    v18 = M32((v17+560));
                    M8((s31+2583)) = v18;
                    v19 = M32((s31+908));
                    v20 = M32((v19+572));
                    M8((s31+2581)) = v20;
                } else {
                    if ((s32)v16 == (s32)5) {
                        v21 = M32((s31+908));
                        v22 = M32((v21+532));
                        M8((s31+2583)) = v22;
                        v23 = M32((s31+908));
                        v24 = M32((v23+540));
                        M8((s31+2581)) = v24;
                    } else {
                        M8((s31+2583)) = 1;
                        M8((s31+2581)) = 1;
                    }
                }
                M8((s31+2584)) = 0;
                M8((s31+2580)) = 0;
                fn_8019C0A4(s31, 37);
                fn_801B3208(s31);
                return 1;
            }
        }
    }
    return 0;
}

void fn_801B3468(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_80190C54();
    c1 = fn_801B9D6C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801B34A0(void) {
    fn_80199C40();
}

void fn_801B34C0(void) {
    fn_801B2F68();
}

void fn_801B34E0(void) {
    fn_801B2F88();
}

void fn_801B3668(void) {
    fn_801B2FA8();
}

void fn_801B3714(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B385C(s31);
    fn_801A8454(s31);
}

void fn_801B3758(void) {
    fn_80190C54();
}

void fn_801B3778(void) {
    fn_80199C40();
}

void fn_801B3798(void) {
    fn_8019FC5C();
}

void fn_801B37B8(void) {
    fn_8019FC60();
}

void fn_801B37D8(void) {
    fn_8019FC80();
}

void fn_801B37F8(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_801B385C();
    fn_801B3C4C(s30, s31);
}

void fn_801B383C(void) {
    fn_801B3B44();
}

void fn_801B3A74(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 c2;
    s31 = p3;
    v1 = M32((p3+1008));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((s31+984));
    if ((s32)(v2&0x100) != (s32)0) {
        v3 = M8((s31+2560));
        if ((s32)((v3>>7)&0x1) != (s32)0) {
        return;
        }
        fn_801A735C(p3, 1);
        fn_801A9B08(s31);
        v4 = lbl_805E15F0;
        c2 = fn_80195588(s31, ((2<<16)+94), v4);
        M32((s31+2548)) = c2;
        v5 = M8((s31+2560));
        ((BFu8_0_1*)((s31+2560)))->f = 1;
        v6 = M32((s31+688));
        v7 = M32(s31);
        v8 = M32((s31+1084));
        v9 = M32((v6+32));
        fn_80236C40(v7, 10104, v8, 204, v9);
        return;
    }
    v10 = M8((s31+2560));
    if ((s32)((v10>>7)&0x1) == (s32)0) {
    return;
    }
    fn_801B3BD8();
    v11 = M32((s31+2548));
    if ((s32)v11 != (s32)-1) {
        fn_8005E7D8(v11);
    }
    M32((s31+2548)) = -1;
}

void fn_801B3CF4(u32 p3) {
    fn_801A93B0(p3, 1);
}

void fn_801B3DAC(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E15F8;
    v2 = lbl_805E15FC;
    s31 = p3;
    M32((p3+2056)) = 0;
    fn_8018E580(p3, 62, -1, 0, v1, v2, v1);
    fn_801B43A4(s31);
    fn_801A809C(s31, 7, 1);
    M32((s31+2044)) = (u32)fn_801B42F8;
    M32((s31+2024)) = (u32)fn_801B424C;
    M32((s31+2556)) = -1;
    fn_801A75A8(s31, (u32)fn_801B424C);
    fn_801A7BDC(s31, 0);
    fn_80196F18(s31, 2, 1);
    fn_80196F38(s31, 2);
}

void fn_801B3E60(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801B3F48(s31);
        return;
    }
    fn_801B43A4(s31);
}

void fn_801B3EA8(void) {
    fn_80190C54();
}

void fn_801B3EC8(void) {
    fn_80199C40();
}

void fn_801B3EE8(void) {
    fn_8019FC5C();
}

void fn_801B3F08(void) {
    fn_8019FC60();
}

void fn_801B3F28(void) {
    fn_8019FC80();
}

void fn_801B40BC(void) {
    fn_80190C54();
}

void fn_801B40DC(void) {
    fn_801AB370();
}

void fn_801B40FC(void) {
    fn_801AB390();
}

void fn_801B4180(void) {
    fn_801AB428();
}

void fn_801B4408(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1608;
    v2 = lbl_805E160C;
    s31 = p3;
    M32((p3+2056)) = 0;
    fn_8018E580(p3, 98, -1, 8, v1, v2, v1);
    fn_801B43A4(s31);
}

void fn_801B445C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801B41A0(s31);
        fn_801B0ADC(s31);
        return;
    }
    fn_801B43A4(s31);
}

void fn_801B44AC(void) {
    fn_80190C54();
}

void fn_801B44CC(void) {
    fn_801AB370();
}

void fn_801B44EC(void) {
    fn_801AB390();
}

void fn_801B450C(void) {
    fn_8019FC60();
}

void fn_801B452C(void) {
    fn_801AB428();
}

void fn_801B45D0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B4718(s31);
    fn_801A8454(s31);
}

void fn_801B4614(void) {
    fn_80190C54();
}

void fn_801B4634(void) {
    fn_80199C40();
}

void fn_801B4654(void) {
    fn_8019FC5C();
}

void fn_801B4674(void) {
    fn_8019FC60();
}

void fn_801B4694(void) {
    fn_8019FC80();
}

void fn_801B46B4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_801B4718();
    fn_801B4944(s30, s31);
}

void fn_801B46F8(void) {
    fn_801B48A0();
}

void fn_801B47A0(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801A7C84();
    v1 = M32((s31+2332));
    if ((s32)v1 != (s32)0) {
    return;
    }
    fn_801B48A0(s31);
    fn_801B0ADC(s31);
}

void fn_801B47E8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c0;
    u32 c2;
    s31 = p3;
    v1 = M32((p3+1008));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M32((s31+984));
    if ((s32)(v2&0x100) != (s32)0) {
        v3 = M32((s31+1012));
        c0 = fn_801C7C94(v3);
        if ((s32)c0 == (s32)0) {
        return;
        }
        v4 = M8((s31+2548));
        if ((s32)((v4>>7)&0x1) != (s32)0) {
        return;
        }
        fn_801A9C38(s31);
        v5 = lbl_805E1618;
        c2 = fn_80195588(s31, ((2<<16)+112), v5);
        M32((s31+2544)) = c2;
        v6 = M8((s31+2548));
        ((BFu8_0_1*)((s31+2548)))->f = 1;
        return;
    }
    v7 = M8((s31+2548));
    if ((s32)((v7>>7)&0x1) == (s32)0) {
    return;
    }
    fn_801B4908();
    v8 = M32((s31+2544));
    if ((s32)v8 != (s32)-1) {
        fn_8005E7D8(v8);
    }
    M32((s31+2544)) = -1;
}

void fn_801B48A0(p3) u32 p3; {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+2544));
    if ((s32)v1 != (s32)-1) {
        fn_8005E7D8(v1);
    }
    M32((s31+2544)) = -1;
    v2 = M32((s31+1008));
    if ((u32)v2 != (u32)0) {
        fn_802230A0(v2);
        M32((s31+1008)) = 0;
    }
    fn_801A7828(s31);
    fn_801A7D70(s31);
}

void fn_801B4944(u32 p3, u32 p4) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 ph0;
    u32 c1;
    s31 = p3;
    M32((p3+2028)) = (u32)fn_801B49B0;
    fn_801A9350(p3, 2);
    v1 = M8((s31+2548));
    if ((s32)((v1>>7)&0x1) == (s32)0) {
    return;
    }
    ((BFu8_0_1*)((s31+2548)))->f = 0;
    v2 = M32((s31+2544));
    ph0 = v2;
    if ((s32)v2 != (s32)-1) {
        c1 = fn_8005E7D8(v2);
        ph0 = c1;
    }
    M32((s31+2544)) = -1;
}

void fn_801B49B0(u32 p3) {
    fn_801A93B0(p3, 2);
}

void fn_801B49D4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+2544));
    if ((s32)v1 != (s32)-1) {
        fn_8005E7D8(v1);
    }
    M32((s31+2544)) = -1;
    v2 = M32((s31+1008));
    if ((u32)v2 != (u32)0) {
        fn_802230A0(v2);
        M32((s31+1008)) = 0;
    }
    fn_801A7828(s31);
    fn_801A7D70(s31);
}

void fn_801B4A3C(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    u32 v4;
    v1 = lbl_805E1620;
    v2 = lbl_805E1624;
    s31 = p3;
    fn_8018E580(p3, 64, -1, 0, v1, v2, v1);
    fn_801A809C(s31, 9, 1);
    v3 = M32((s31+908));
    v4 = M32((v3+708));
    fn_801A7BDC(s31, v4);
    M32((s31+2040)) = (u32)fn_801B4BE8;
    M32((s31+2020)) = (u32)fn_801B4BA4;
    fn_801A7944(s31);
}

void fn_801B4AC0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B4C08(s31);
    fn_801A8454(s31);
}

void fn_801B4B04(void) {
    fn_80190C54();
}

void fn_801B4B24(void) {
    fn_80199C40();
}

void fn_801B4B44(void) {
    fn_8019FC5C();
}

void fn_801B4B64(void) {
    fn_8019FC60();
}

void fn_801B4B84(void) {
    fn_8019FC80();
}

void fn_801B4BA4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    s31 = p4;
    s30 = p3;
    fn_801B4C08();
    fn_801B4CCC(s30, s31);
}

void fn_801B4BE8(void) {
    fn_801B4C98();
}

void fn_801B4C08(p3) u32 p3; {
    u32 v1;
    M32((p3+2348)) = (u32)fn_801B4C40;
    M32((p3+2044)) = (u32)fn_801B4CD0;
    M32((p3+2024)) = (u32)fn_801B4CCC;
    v1 = M8((p3+2544));
    ((BFu8_1_1*)((p3+2544)))->f = 0;
}

void fn_801B4C40(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c1;
    s31 = p3;
    fn_801A7C84();
    v1 = M32((s31+2332));
    if ((s32)v1 != (s32)0) {
    return;
    }
    v2 = M32((s31+1012));
    c1 = fn_801C7C04(v2);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_801B4C98(s31);
    fn_801B0ADC(s31);
}

void fn_801B4C98(p3) u32 p3; {
    u32 s31;
    s31 = p3;
    fn_801A7A5C();
    fn_801A7D70(s31);
}

void fn_801B4CD0(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_801A7A5C();
    fn_801A7D70(s31);
}

u32 fn_801B4D04(u32 p3) {
    u32 loc8[1];
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1108));
    if ((s32)v1 == (s32)9) {
        c0 = fn_80191980(p3, ((u32)loc8));
        if ((s32)c0 != (s32)0) {
            v2 = M32(((u32)loc8));
            fn_801B4F10(s31, v2);
            return 1;
        }
    }
    return 0;
}

u32 fn_801B4D60(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    float v6;
    u32 v7;
    u32 ph0;
    float d0;
    s31 = p3;
    v1 = M32((p3+1108));
    if ((s32)v1 == (s32)9) {
        v2 = M32((s31+984));
        if ((s32)(v2&0x100) == (s32)0) {
            v3 = M32(s31);
            d0 = fn_80191BB0(v3);
            v4 = lbl_805E1628;
            if (d0 >= v4) {
                v5 = MF((s31+916));
                v6 = lbl_805E162C;
                if (v5 < v6) {
                    ph0 = -1;
                } else {
                    ph0 = 1;
                }
                v7 = M8((s31+2544));
                ((BFu8_1_1*)((s31+2544)))->f = 1;
                fn_801B4F10(s31, ph0, v5);
                return 1;
            }
        }
    }
    return 0;
}

#pragma push
#pragma #pragma #pragma #pragma opt_strength_reduction off
#pragma opt_strength_reduction off
u32 fn_801B4DF8(u32 p3, u32 p4, u32 p5) {
    u32 ph0;
    ph0 = 0;
    if (((M8((p3+2544))>>6)&0x1) != 0) {
        ph0 = 4;
    }
    return (M32((lbl_804AF758+((p4+ph0)*12))+(p5<<2)));
}
#pragma pop

u32 fn_801B4E2C(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7C30(v1);
    if ((s32)c0 != (s32)0) {
        v2 = lbl_805E162C;
        fn_801B50EC(s31, v2);
        return 1;
    }
    return 0;
}

u32 fn_801B4E7C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 c0;
    u32 c1;
    s31 = p3;
    v1 = M32((p3+1108));
    if ((s32)v1 == (s32)9) {
        v2 = M32((s31+1012));
        c0 = fn_801C7C04(v2);
        if ((s32)c0 != (s32)0) {
            v3 = M32((s31+1012));
            c1 = fn_801C812C(v3);
            if ((s32)c1 > (s32)0) {
                v4 = M8((s31+2544));
                ((BFu8_0_1*)((s31+2544)))->f = 1;
            } else {
                v5 = M8((s31+2544));
                ((BFu8_0_1*)((s31+2544)))->f = 0;
            }
            v6 = M32((s31+1012));
            fn_801C8138(v6);
            fn_801B50EC(s31);
            return 1;
        }
    }
    return 0;
}

void fn_801B4F10(p3, p4) u32 p3; u32 p4; {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    u32 c0;
    s31 = p3;
    if ((s32)p4 > (s32)0) {
        v1 = M8((s31+2544));
        ((BFu8_0_1*)((s31+2544)))->f = 1;
    } else {
        v2 = M8((s31+2544));
        ((BFu8_0_1*)((s31+2544)))->f = 0;
    }
    v3 = M8((s31+2544));
    c0 = fn_801B4DF8(s31, ((v3>>7)&0x1), 0);
    v4 = lbl_805E1630;
    v5 = lbl_805E1634;
    fn_8018E580(s31, 99, c0, 0, v4, v5, v4);
    M32((s31+2040)) = (u32)fn_801B50CC;
    M32((s31+2020)) = (u32)fn_801B50C8;
}

void fn_801B5010(void) {
    fn_80190C54();
}

void fn_801B5030(void) {
    fn_801AB370();
}

void fn_801B5050(void) {
    fn_801AB390();
}

void fn_801B5070(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_8019FC60();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801B50A8(void) {
    fn_801AB428();
}

void fn_801B50CC(void) {
    fn_801B4C98();
}

void fn_801B51AC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = p3;
    fn_801A7C84();
    v1 = M32((s31+1012));
    c1 = fn_801C7C04(v1);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_801B52B4(s31);
}

void fn_801B51F0(void) {
    fn_80190C54();
}

void fn_801B5210(void) {
    fn_801AB370();
}

void fn_801B5230(void) {
    fn_801AB390();
}

void fn_801B5250(void) {
    fn_8019FC60();
}

void fn_801B5270(void) {
    fn_801AB428();
}

void fn_801B5294(void) {
    fn_801B4C98();
}

void fn_801B5350(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c1;
    s31 = p3;
    fn_801A7C84();
    c1 = fn_80198B00(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    v1 = M32((s31+2332));
    if ((s32)v1 == (s32)0) {
        fn_801B4C98(s31);
        fn_801B0ADC(s31);
        return;
    }
    fn_801B4C08(s31);
    fn_801A8454(s31);
}

void fn_801B53BC(void) {
    fn_80190C54();
}

void fn_801B53DC(void) {
    fn_801AB370();
}

void fn_801B53FC(void) {
    fn_801AB390();
}

void fn_801B541C(void) {
    fn_8019FC60();
}

void fn_801B543C(void) {
    fn_801AB428();
}

void fn_801B5460(void) {
    fn_801B4C98();
}

void fn_801B5584(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801B55C0(void) {
    fn_80190C54();
}

void fn_801B55E0(void) {
    fn_80199C40();
}

void fn_801B5600(void) {
    fn_8019FC5C();
}

void fn_801B5620(void) {
    fn_8019FC60();
}

void fn_801B5640(void) {
    fn_8019FC80();
}

void fn_801B5660(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801A7C84();
    v1 = M32((s31+2332));
    if ((s32)v1 != (s32)0) {
    return;
    }
    fn_801B56A8(s31);
    fn_801B0ADC(s31);
}

void fn_801B56A8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c3;
    s31 = p3;
    fn_801A7B8C();
    v1 = M8((s31+2082));
    ((BFu8_5_1*)((s31+2082)))->f = 0;
    fn_801A7D70(s31);
    v2 = M8((s31+2086));
    if ((s32)((v2>>6)&0x1) == (s32)0) {
        v3 = M32((s31+2544));
        v4 = M32((s31+2548));
        fn_80193B84(s31, v3, v4, 0, 0);
        return;
    }
    v5 = M32((s31+2548));
    v6 = M32((s31+2544));
    c3 = fn_801C85A8(v6, (v5&0xff));
    v7 = M32((s31+2552));
    v8 = M32((s31+2556));
    fn_801DED8C(c3, v7, v8);
}

void fn_801B5734(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c3;
    s31 = p3;
    fn_801A7B8C();
    v1 = M8((s31+2082));
    ((BFu8_5_1*)((s31+2082)))->f = 0;
    fn_801A7D70(s31);
    v2 = M8((s31+2086));
    if ((s32)((v2>>6)&0x1) == (s32)0) {
        v3 = M32((s31+2544));
        v4 = M32((s31+2548));
        fn_80193B84(s31, v3, v4, 0, 0);
        return;
    }
    v5 = M32((s31+2548));
    v6 = M32((s31+2544));
    c3 = fn_801C85A8(v6, (v5&0xff));
    v7 = M32((s31+2552));
    v8 = M32((s31+2556));
    fn_801DED8C(c3, v7, v8);
}

u32 fn_801B57BC(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = M32((p3+908));
    v2 = MF((p3+920));
    v3 = MF((v1+736));
    if (v2 < (-v3)) {
        fn_801B5800(p3, v1, v2);
        return 1;
    }
    return 0;
}

void fn_801B597C(void) {
    fn_8019FDE4();
}

void fn_801B599C(void) {
    fn_8019FE04();
}

void fn_801B59BC(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_8019FE08();
    c1 = fn_801AC9FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801ACC18(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801ACDF8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_80194120(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    fn_801AB1A0(s31);
}

void fn_801B5A30(void) {
    fn_8019FE28();
}

u32 fn_801B5A50(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = M32((p3+908));
    v2 = MF((p3+920));
    v3 = MF((v1+736));
    if (v2 > v3) {
        fn_801B5A90(p3, v1, v2);
        return 1;
    }
    return 0;
}

void fn_801B5A90(u32 p3, u32 p4, float q1) {
    float v1;
    float v2;
    v1 = lbl_805E1658;
    v2 = lbl_805E165C;
    fn_8018E580(p3, 103, -1, 0, v1, v2, v1);
}

void fn_801B5B50(void) {
    fn_8019FDE4();
}

void fn_801B5B70(void) {
    fn_8019FE04();
}

void fn_801B5B90(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_8019FE08();
    c1 = fn_801AC9FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801ACC18(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801ACDF8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_80194120(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    fn_801AB1A0(s31);
}

void fn_801B5C04(void) {
    fn_8019FE28();
}

void fn_801B5C24(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    float v3;
    float v4;
    float v5;
    float v6;
    u32 v7;
    u32 v8;
    u32 c2;
    v1 = lbl_805E1660;
    s31 = p3;
    v2 = M32((p3+908));
    v3 = MF((v2+744));
    MF((p3+2596)) = (v1/v3);
    fn_801918BC(p3, v2, v1);
    v4 = lbl_805E1664;
    v5 = lbl_805E1668;
    fn_8018E580(s31, 67, -1, 0, v4, v5, v4);
    v6 = lbl_805E1664;
    M32((s31+2040)) = (u32)fn_801B5DEC;
    M32((s31+2020)) = (u32)fn_801B5DCC;
    v7 = M32((s31+908));
    v8 = M32((v7+752));
    M32((s31+2600)) = v8;
    MF((s31+2592)) = v6;
    c2 = fn_8005D12C(v7);
    M32((s31+2604)) = c2;
}

void fn_801B5D2C(void) {
    fn_80190C54();
}

void fn_801B5D4C(void) {
    fn_80199C40();
}

void fn_801B5D6C(void) {
    fn_8019FC5C();
}

void fn_801B5D8C(void) {
    fn_8019FC60();
}

void fn_801B5DAC(void) {
    fn_8019FC80();
}

void fn_801B5DCC(void) {
    fn_801B5DEC();
}

void fn_801B5E34(u32 p3, u32 p4) {
    float v1;
    u32 s31;
    float v2;
    float v3;
    v1 = lbl_805E1670;
    s31 = p3;
    v2 = MF((p3+2596));
    v3 = MF((p3+2592));
    fn_8018E580(p3, 68, -1, 0, (v3*v2), v2, v1);
    M32((s31+2000)) = (u32)fn_801B60B4;
    M32((s31+2040)) = (u32)fn_801B5DEC;
    M32((s31+2020)) = (u32)fn_801B5DCC;
}

void fn_801B5EA4(void) {
    fn_80190C54();
}

void fn_801B5EC4(void) {
    fn_801AB370();
}

void fn_801B5EE4(void) {
    fn_801AB390();
}

void fn_801B5F04(void) {
    fn_8019FC60();
}

void fn_801B6264(void) {
    fn_801AB428();
}

u32 fn_801B6284(u32 p3, u32 p4, float q1, float q2) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801B62BC();
        return 1;
    }
    return 0;
}

void fn_801B6324(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B6468(s31);
}

void fn_801B6360(void) {
    fn_80190C54();
}

void fn_801B6380(void) {
    fn_801B652C();
}

void fn_801B63A0(void) {
    fn_801B654C();
}

void fn_801B63C0(void) {
    fn_801B656C();
}

void fn_801B63E0(u32 p3) {
    float v1;
    u32 v2;
    float v3;
    float v4;
    u32 v5;
    float v6;
    float v7;
    float v8;
    u32 c0;
    v1 = lbl_805E167C;
    v2 = M32((p3+908));
    v3 = MF((p3+2592));
    v4 = MF((v2+748));
    if (v3 != (v4-v1)) {
        MF((p3+2592)) = (v3+v1);
    }
    v5 = M32((p3+908));
    v6 = MF((p3+2592));
    v7 = MF((v5+744));
    if (v6 >= v7) {
        v8 = lbl_805E1678;
        MF((p3+2592)) = v8;
    }
    c0 = fn_801B65F8(p3, v5, v6, v3);
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801B6448(void) {
    fn_801B65D8();
}

void fn_801B6468(u32 p3) {
    float v1;
    u32 s31;
    float v2;
    float v3;
    v1 = lbl_805E1680;
    s31 = p3;
    v2 = MF((p3+2596));
    v3 = MF((p3+2592));
    fn_8018E580(p3, 70, -1, 0, (v3*v2), v2, v1);
    M32((s31+2000)) = (u32)fn_801B658C;
    M32((s31+2040)) = (u32)fn_801B5DEC;
    M32((s31+2020)) = (u32)fn_801B5DCC;
}

void fn_801B64D8(u32 p3) {
    u32 loc12[1];
    u32 loc8[1];
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    u32 c2;
    s31 = p3;
    fn_80190948(p3, ((u32)loc12), ((u32)loc8));
    v1 = M32((s31+1012));
    v2 = MF(((u32)loc8));
    v3 = MF(((u32)loc12));
    fn_801C75F4(v1, 1, v2, v3);
    c2 = fn_801B9D6C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801B652C(void) {
    fn_801B5EC4();
}

void fn_801B654C(void) {
    fn_801B5EE4();
}

void fn_801B656C(void) {
    fn_801B5F04();
}

void fn_801B658C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_801B5F24();
    if ((s32)c0 != (s32)0) {
    return;
    }
    v1 = M32((s31+2600));
    if ((s32)v1 == (s32)0) {
    return;
    }
    c1 = fn_801B65F8(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801B65D8(void) {
    fn_801B6264();
}

u32 fn_801B65F8(p3) u32 p3; {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801B6630();
        return 1;
    }
    return 0;
}

void fn_801B66A0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M32((s31+908));
    v2 = M32((v1+56));
    M32((s31+1216)) = v2;
    fn_801B5E34(s31, v1);
}

void fn_801B66E8(void) {
    fn_80190C54();
}

void fn_801B6708(void) {
    fn_80199C40();
}

void fn_801B6728(void) {
    fn_801B5EE4();
}

void fn_801B6748(void) {
    fn_801B5F04();
}

void fn_801B6768(u32 p3) {
    float v1;
    u32 v2;
    float v3;
    float v4;
    u32 v5;
    float v6;
    float v7;
    float v8;
    u32 c0;
    v1 = lbl_805E168C;
    v2 = M32((p3+908));
    v3 = MF((p3+2592));
    v4 = MF((v2+748));
    if (v3 != (v4-v1)) {
        MF((p3+2592)) = (v3+v1);
    }
    v5 = M32((p3+908));
    v6 = MF((p3+2592));
    v7 = MF((v5+744));
    if (v6 >= v7) {
        v8 = lbl_805E1688;
        MF((p3+2592)) = v8;
    }
    c0 = fn_801B6284(p3, v5, v6, v3);
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801B67D0(void) {
    fn_801B6264();
}

void fn_801B684C(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    s31 = p3;
    fn_801918BC();
    v1 = lbl_805E1690;
    v2 = lbl_805E1694;
    fn_8018E580(s31, 72, -1, 0, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801B69F0;
    M32((s31+2020)) = (u32)fn_801B69D0;
    M32((s31+2592)) = 0;
}

void fn_801B6930(void) {
    fn_80190C54();
}

void fn_801B6950(void) {
    fn_80199C40();
}

void fn_801B6970(void) {
    fn_8019FC5C();
}

void fn_801B6990(void) {
    fn_8019FC60();
}

void fn_801B69B0(void) {
    fn_8019FC80();
}

void fn_801B69D0(void) {
    fn_801B69F0();
}

void fn_801B6A44(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1698;
    v2 = lbl_805E169C;
    s31 = p3;
    fn_8018E580(p3, 73, -1, 0, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801B69F0;
    M32((s31+2020)) = (u32)fn_801B69D0;
}

void fn_801B6AA0(void) {
    u32 c0;
    c0 = fn_801B67F0();
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801B6AC4(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_80190C54();
    c1 = fn_801B6B7C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801B6AFC(void) {
    fn_801AB370();
}

void fn_801B6B1C(void) {
    fn_801AB390();
}

void fn_801B6B3C(void) {
    fn_8019FC60();
}

void fn_801B6B5C(void) {
    fn_801AB428();
}

u32 fn_801B6B7C(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801B6BB4();
        return 1;
    }
    return 0;
}

void fn_801B6C10(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_801B67F0();
    if ((s32)c0 != (s32)0) {
    return;
    }
    c1 = fn_80198B00(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    fn_801B6CFC(s31);
}

void fn_801B6C5C(void) {
    fn_801B6DC0();
}

void fn_801B6C7C(void) {
    fn_801B6DF8();
}

void fn_801B6C9C(void) {
    fn_801B6E18();
}

void fn_801B6CBC(void) {
    fn_801B6E38();
}

void fn_801B6CDC(void) {
    fn_801B6FB0();
}

void fn_801B6CFC(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    s31 = p3;
    fn_801918BC();
    v1 = lbl_805E16A8;
    v2 = lbl_805E16AC;
    fn_8018E580(s31, 75, -1, 0, v1, v2, v1);
    M32((s31+2000)) = (u32)fn_801B6E58;
    M32((s31+2040)) = (u32)fn_801B69F0;
    M32((s31+2020)) = (u32)fn_801B69D0;
}

void fn_801B6D6C(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_801B67F0();
    if ((s32)c0 != (s32)0) {
    return;
    }
    c1 = fn_80198B00(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    fn_801A8454(s31);
    fn_801AA41C(s31);
}

void fn_801B6DF8(void) {
    fn_80199C40();
}

void fn_801B6E18(void) {
    fn_801AB390();
}

void fn_801B6E38(void) {
    fn_8019FC60();
}

void fn_801B6FB0(void) {
    fn_801AB428();
}

void fn_801B6FD0(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    fn_801918BC();
    v1 = lbl_805E16B8;
    v2 = lbl_805E16BC;
    fn_8018E580(s31, 76, -1, 0, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801B71E4;
    M32((s31+2020)) = (u32)fn_801B71C4;
    M32((s31+2592)) = 0;
    v3 = M32((s31+908));
    v4 = M32((v3+792));
    M32((s31+2596)) = v4;
}

void fn_801B7048(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E16B8;
    v2 = lbl_805E16BC;
    s31 = p3;
    fn_8018E580(p3, 76, -1, 0, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801B71E4;
    M32((s31+2020)) = (u32)fn_801B71C4;
    M32((s31+2592)) = 0;
}

void fn_801B7124(void) {
    fn_80190C54();
}

void fn_801B7144(void) {
    fn_80199C40();
}

void fn_801B7164(void) {
    fn_8019FC5C();
}

void fn_801B7184(void) {
    fn_8019FC60();
}

void fn_801B71A4(void) {
    fn_8019FC80();
}

void fn_801B71C4(void) {
    fn_801B71E4();
}

void fn_801B7264(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E16C0;
    v2 = lbl_805E16C4;
    s31 = p3;
    fn_8018E580(p3, 77, -1, 0, v1, v2, v1);
    M32((s31+2040)) = (u32)fn_801B71E4;
    M32((s31+2020)) = (u32)fn_801B71C4;
}

void fn_801B72C4(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_80190C54();
    c1 = fn_801B737C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801B72FC(void) {
    fn_801AB370();
}

void fn_801B731C(void) {
    fn_801AB390();
}

void fn_801B733C(void) {
    fn_8019FC60();
}

void fn_801B735C(void) {
    fn_801AB428();
}

u32 fn_801B737C(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801B73B4();
        return 1;
    }
    return 0;
}

void fn_801B7410(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B74EC(s31);
}

void fn_801B744C(void) {
    fn_801B75B8();
}

void fn_801B746C(void) {
    fn_801B75F0();
}

void fn_801B748C(void) {
    fn_801B7610();
}

void fn_801B74AC(void) {
    fn_801B7630();
}

void fn_801B74CC(void) {
    fn_801B77D4();
}

void fn_801B74EC(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    s31 = p3;
    fn_801918BC();
    v1 = lbl_805E16D0;
    v2 = lbl_805E16D4;
    fn_8018E580(s31, 79, -1, 0, v1, v2, v1);
    M32((s31+2000)) = (u32)fn_801B7650;
    M32((s31+2040)) = (u32)fn_801B71E4;
    M32((s31+2020)) = (u32)fn_801B71C4;
}

void fn_801B755C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M32((s31+2596));
    if ((s32)v1 != (s32)0) {
        fn_801B7048(s31);
        return;
    }
    fn_801A8454(s31);
    fn_801AA41C(s31);
}

void fn_801B75F0(void) {
    fn_80199C40();
}

void fn_801B7610(void) {
    fn_801AB390();
}

void fn_801B7630(void) {
    fn_8019FC60();
}

void fn_801B77D4(void) {
    fn_801AB428();
}

u32 fn_801B77F4(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7BC4(v1);
    if ((s32)c0 != (s32)0) {
        v2 = lbl_805E16E0;
        fn_801B78D0(s31, v2);
        return 1;
    }
    return 0;
}

u32 fn_801B7844(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    u32 c1;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B98(v1);
    if ((s32)c0 != (s32)0) {
        v2 = M32((s31+1012));
        c1 = fn_801C812C(v2);
        v3 = M8((s31+2592));
        ((BFu8_0_1*)((s31+2592)))->f = c1;
        v4 = M32((s31+1012));
        fn_801C8138(v4);
        fn_801B78D0(s31);
        return 1;
    }
    return 0;
}

void fn_801B78AC(u32 p3) {
    u32 v1;
    v1 = M32(p3);
    fn_801A20C4(v1);
}

void fn_801B7954(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B98(v1);
    if ((s32)c0 != (s32)0) {
    return;
    }
    fn_801B7C6C(s31);
}

void fn_801B79F4(void) {
    fn_80199C40();
}

void fn_801B7A14(void) {
    fn_8019FC5C();
}

void fn_801B7A34(void) {
    fn_8019FC60();
}

void fn_801B7A54(void) {
    fn_8019FC80();
}

void fn_801B7A74(void) {
    fn_801AA41C();
}

void fn_801B7A94(void) {
    fn_801AA41C();
}

void fn_801B7B28(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M32((s31+908));
    v2 = M8((s31+2592));
    v3 = M32((v1+796));
    fn_80193BFC(s31, v3, ((v2>>7)&0x1));
}

void fn_801B7B74(void) {
    fn_801B7994();
}

void fn_801B7B94(void) {
    fn_801B79F4();
}

void fn_801B7BB4(void) {
    fn_801B7A14();
}

void fn_801B7BD4(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801B7A34();
    c1 = fn_801B77F4(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801B7C0C(void) {
    fn_801B7A54();
}

void fn_801B7C2C(void) {
    fn_801AA41C();
}

void fn_801B7C4C(void) {
    fn_801AA41C();
}

void fn_801B7CD8(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c2;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801AA41C(s31);
    c2 = fn_801AB624(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801B7D2C(void) {
    fn_801B7994();
}

void fn_801B7D4C(void) {
    fn_801B79F4();
}

void fn_801B7D6C(void) {
    fn_801B7A14();
}

void fn_801B7D8C(void) {
    fn_801B7A34();
}

void fn_801B7DAC(void) {
    fn_801B7A54();
}

void fn_801B7DCC(void) {
    fn_801AA41C();
}

void fn_801B7DEC(void) {
    fn_801AA41C();
}

u32 fn_801B7E0C(u32 p3) {
    u32 s31;
    u32 v1;
    float g31;
    u32 v2;
    u32 c0;
    float d1;
    u32 c2;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B00(v1);
    if ((s32)c0 != (s32)0) {
        d1 = fn_80193C44(s31);
        g31 = d1;
        v2 = M32((s31+1012));
        c2 = fn_801C812C(v2);
        fn_801B7EE4(s31, c2, 0, g31);
        return 1;
    }
    return 0;
}

u32 fn_801B7E80(u32 p3) {
    u32 loc8[1];
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1108));
    if ((s32)v1 != (s32)5) {
        c0 = fn_80191980(p3, ((u32)loc8));
        if ((s32)c0 != (s32)0) {
            v2 = M32(((u32)loc8));
            v3 = lbl_805E16F8;
            fn_801B7EE4(s31, v2, 1, v3);
            return 1;
        }
    }
    return 0;
}

void fn_801B7F70(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B00(v1);
    if ((s32)c0 != (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801B7FB0(void) {
    fn_801B8210();
}

void fn_801B7FD0(void) {
    fn_801B8270();
}

void fn_801B7FF0(void) {
    fn_801B8290();
}

void fn_801B8010(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801B82B0();
    c1 = fn_801B4E2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801B8078(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801B8058(void) {
    fn_801B82D0();
}

u32 fn_801B8078(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    u32 c1;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B58(v1);
    if ((s32)c0 != (s32)0) {
        v2 = M32((s31+1012));
        c1 = fn_801C812C(v2);
        v3 = lbl_805E1700;
        fn_801B8168(s31, c1, v3);
        return 1;
    }
    return 0;
}

u32 fn_801B80D4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float g31;
    u32 v3;
    u32 c0;
    float d1;
    u32 c2;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B2C(v1);
    if ((s32)c0 != (s32)0) {
        v2 = M32((s31+1012));
        d1 = fn_801C8138(v2);
        g31 = d1;
        v3 = M32((s31+1012));
        c2 = fn_801C812C(v3);
        fn_801B8168(s31, c2, g31);
        return 1;
    }
    return 0;
}

void fn_801B8144(u32 p3) {
    u32 v1;
    v1 = M32(p3);
    fn_801A20C4(v1);
}

void fn_801B81D0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B2C(v1);
    if ((s32)c0 != (s32)0) {
    return;
    }
    fn_801B82F0(s31);
}

void fn_801B8270(void) {
    fn_80199C40();
}

void fn_801B8290(void) {
    fn_8019FC5C();
}

void fn_801B82B0(void) {
    fn_8019FC60();
}

void fn_801B82D0(void) {
    fn_8019FC80();
}

void fn_801B8338(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    c1 = fn_801AB624(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_801A8454(s31);
}

void fn_801B8384(void) {
    fn_801B8210();
}

void fn_801B83A4(void) {
    fn_801B8270();
}

void fn_801B83C4(void) {
    fn_801B8290();
}

void fn_801B83E4(void) {
    fn_801B82B0();
}

void fn_801B8404(void) {
    fn_801B82D0();
}

void fn_801B84E4(u32 p3, float q1) {
    u32 v1;
    float v2;
    v1 = M32((p3+908));
    v2 = MF((v1+172));
    fn_801A2168(p3, v1, v2, q1);
}

void fn_801B8510(u32 p3) {
    float v1;
    u32 v2;
    float v3;
    v1 = lbl_805E1714;
    v2 = M32((p3+908));
    v3 = MF((v2+172));
    fn_801A2168(p3, v2, v3, v1);
}

u32 fn_801B853C(u32 p3, u32 p4, float q1) {
    u32 s31;
    float g31;
    u32 v1;
    float v2;
    float v3;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    g31 = q1;
    fn_801A24C8();
    c1 = fn_801BBB98(s31);
    if ((s32)c1 != (s32)0) {
        return 1;
    }
    c2 = fn_801BAADC(s31);
    if ((s32)c2 != (s32)0) {
        return 1;
    }
    c3 = fn_801BC2D8(s31);
    if ((s32)c3 != (s32)0) {
        return 1;
    }
    fn_801A234C(s31, g31);
    v1 = M32((s31+908));
    v2 = lbl_805E1714;
    v3 = MF((v1+172));
    fn_801A2168(s31, v1, v3, v2);
    return 0;
}

void fn_801B9620(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32((p3+908));
    v2 = M32((v1+268));
    M32((p3+2500)) = v2;
    v3 = M8((p3+2496));
    ((BFu8_1_1*)((p3+2496)))->f = 0;
    v4 = M8((p3+2508));
    ((BFu8_0_1*)((p3+2508)))->f = 1;
    M32((p3+2504)) = 0;
    M32((p3+2512)) = 0;
    v5 = M32((p3+908));
    v6 = M32((v5+80));
    M32((p3+2516)) = v6;
}

u32 fn_801B9714(u32 p3, float q1) {
    u32 v1;
    float v2;
    float v3;
    float v4;
    v1 = M32((p3+908));
    v2 = MF((v1+336));
    if (q1 < v2) {
        return 0;
    }
    v3 = MF((v1+340));
    if (q1 < v3) {
        return 1;
    }
    v4 = MF((v1+344));
    if (q1 < v4) {
        return 2;
    }
    return 3;
}

void fn_801B99B8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    v1 = M8((p3+2625));
    switch ((s32)v1) {
    case 0:
    case 1:
        v2 = M32((s31+716));
        if ((s32)v2 == (s32)0) {
            c0 = fn_801A2CEC();
            if ((s32)c0 != (s32)0) {
                fn_801BCCB8(s31);
                return;
            }
            fn_801BABD4(s31);
            return;
        }
        fn_801BAF14();
        break;
    case 2:
        v3 = M32((s31+716));
        if ((s32)v3 == (s32)0) {
            fn_801A50F0();
            return;
        }
        fn_80191170();
        fn_801A4850(s31);
    }
}

void fn_801B9A54(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1730;
    v2 = lbl_805E1734;
    fn_8018E580(p3, 126, -1, 0, v1, v2, v1);
}

void fn_801B9A8C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801B9B30(s31);
}

void fn_801B9ACC(void) {
    fn_801A4610();
}

void fn_801B9AEC(void) {
    fn_801A47E8();
}

void fn_801B9B10(void) {
    fn_801A2D58();
}

void fn_801B9B30(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    float v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805E1738;
    v2 = lbl_805E173C;
    s31 = p3;
    fn_8018E580(p3, 127, -1, 4, v1, v2, v1);
    fn_801A1598(s31);
    v3 = lbl_805DD814;
    v4 = MF((v3+332));
    fn_80190E2C(s31, 0, 1, v3, v4);
    v5 = M8((s31+2083));
    ((BFu8_6_1*)((s31+2083)))->f = 1;
    v6 = M8((s31+2083));
    ((BFu8_7_1*)((s31+2083)))->f = 1;
}

float fn_801B9BB0(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    v1 = lbl_805DD814;
    v2 = MF((p3+1192));
    v3 = MF((v1+336));
    MF((p3+1192)) = (v2-v3);
    v4 = M32((p3+1420));
    M32((p3+1420)) = (v4+1);
    return v2;
}

void fn_801B9BD4(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    float v4;
    s31 = p3;
    v1 = lbl_805DD814;
    v2 = MF((v1+340));
    fn_80190FAC(p3, v1, v2);
    v3 = MF((s31+1192));
    v4 = lbl_805E1738;
    if (v3 <= v4) {
        fn_801B9C88(s31, v3);
    }
}

void fn_801B9C24(void) {
    fn_801A4648();
}

void fn_801B9C44(void) {
    fn_801A47E8();
}

void fn_801B9C68(void) {
    fn_801A2D58();
}

void fn_801B9C88(u32 p3, float q1) {
    float v1;
    float v2;
    v1 = lbl_805E1740;
    v2 = lbl_805E1744;
    fn_8018E580(p3, 128, -1, 4, v1, v2, v1);
}

void fn_801B9CC0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801A1728(s31);
    fn_801A41BC(s31);
}

void fn_801B9D08(void) {
    fn_801A4648();
}

void fn_801B9D28(void) {
    fn_801A47E8();
}

void fn_801B9D4C(void) {
    fn_801A2D58();
}

void fn_801B9DF8(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    u32 v3;
    s31 = p3;
    M32((p3+2056)) = 0;
    fn_801A89D8(p3, 0);
    v1 = lbl_805E1748;
    v2 = lbl_805E1750;
    fn_8018E580(s31, 110, -1, 0, v1, v2, v1);
    fn_801A2D80(s31);
    fn_8019A638(s31);
    fn_801A2FC0(s31);
    fn_801A2D9C(s31);
    fn_801B9620(s31);
    v3 = M8((s31+2082));
    ((BFu8_7_1*)((s31+2082)))->f = 1;
}

void fn_801B9FB4(u32 p3) {
    u32 v1;
    v1 = M32((p3+716));
    if ((s32)v1 != (s32)1) {
    return;
    }
    fn_801A2818();
}

void fn_801B9FE0(u32 p3) {
    u32 v1;
    v1 = M32((p3+716));
    if ((s32)v1 != (s32)1) {
    return;
    }
    fn_801A2AA4(p3, (u32)fn_801BA658);
}

void fn_801BA014(void) {
    fn_801B9570();
}

void fn_801BA034(void) {
    fn_801A2D58();
}

void fn_801BA1D4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c1;
    s31 = p3;
    v1 = M32((p3+2056));
    if ((u32)v1 != (u32)0) {
        M32((s31+2056)) = 0;
        v2 = M32((s31+1016));
        fn_80193CE4(p3, v2);
        v3 = M8((s31+2082));
        ((BFu8_7_1*)((s31+2082)))->f = 1;
        v4 = M8((s31+2080));
        ((BFu8_0_1*)((s31+2080)))->f = 1;
    }
    c1 = fn_80198B00(s31);
    if ((s32)c1 != (s32)0) {
        v5 = M32((s31+2064));
        if ((u32)v5 == (u32)0) {
            M32((s31+2064)) = 1;
        }
        fn_801A2DE0(s31);
        v6 = M32((s31+2060));
        if ((u32)v6 != (u32)3) {
        return;
        }
        fn_801A8BD0(s31);
        return;
    }
    v7 = M32((s31+2520));
    if ((s32)v7 != (s32)0) {
        M32((s31+2520)) = (v7-1);
        return;
    }
    v8 = M32((s31+2068));
    if ((u32)v8 != (u32)0) {
    return;
    }
    fn_801A2DE0(s31);
    M32((s31+2068)) = 1;
}

void fn_801BA4B0(void) {
    fn_801A2D58();
}

void fn_801BA4D0(void) {
    fn_801BA4F0();
}

void fn_801BA4F0(void) {
    fn_80193EDC();
}

void fn_801BA5F0(u32 p3) {
    u32 v1;
    v1 = M32((p3+2520));
    if ((s32)v1 != (s32)0) {
        M32((p3+2520)) = (v1-1);
        return;
    }
    fn_801BAF14(p3, v1);
}

void fn_801BA638(void) {
    fn_801A2D58();
}

void fn_801BAA54(void) {
    fn_801B8EC4();
}

void fn_801BAA74(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BAA9C(void) {
    fn_801B9570();
}

void fn_801BAABC(void) {
    fn_801A2D58();
}

void fn_801BAEA8(void) {
    fn_801B8EC4();
}

void fn_801BAEC8(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BAEF4(void) {
    fn_801A2D58();
}

void fn_801BAF14(p3) u32 p3; {
    u32 s31;
    s31 = p3;
    fn_801BAF48();
    fn_8019079C(s31);
}

void fn_801BAF48(p3) u32 p3; {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1790;
    v2 = lbl_805E1794;
    s31 = p3;
    fn_8018E580(p3, 112, -1, 0, v1, v2, v1);
    fn_801A2D80(s31);
    fn_801A2FD4(s31);
    fn_80190788(s31);
}

void fn_801BAFA8(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+908));
    v2 = MF((v1+136));
    fn_801B8424(p3, v1, v2);
}

void fn_801BAFD0(void) {
    fn_801B886C();
}

void fn_801BAFF0(u32 p3) {
    fn_801A2AA4(p3, (u32)fn_801BA658);
}

void fn_801BB018(void) {
    fn_801B9570();
}

void fn_801BB038(void) {
    fn_801A2D58();
}

u32 fn_801BB058(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+28));
    if ((s32)v1 == (s32)114) {
        v2 = M32((p3+2520));
        if ((s32)v2 >= (s32)2) {
            return 1;
        }
    }
    return 0;
}

u32 fn_801BB080(u32 p3) {
    u32 s31;
    float v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801BB350();
    if ((s32)c0 == (s32)2) {
        v1 = MF((s31+664));
        fn_801BB2B0(s31, v1);
        return 1;
    }
    return 0;
}

void fn_801BBA94(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    u32 c0;
    u32 c1;
    s31 = p3;
    v1 = M32((p3+908));
    v2 = MF((v1+136));
    c0 = fn_801B853C(p3, v1, v2);
    if ((s32)c0 != (s32)0) {
    return;
    }
    c1 = fn_801BC730(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_801BB578(s31);
}

void fn_801BBB30(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BBB58(void) {
    fn_801B9570();
}

void fn_801BBB78(void) {
    fn_801A2D58();
}

void fn_801BBCE8(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E17A8;
    v2 = lbl_805E17AC;
    s31 = p3;
    M32((p3+2056)) = 0;
    fn_8018E580(p3, 116, -1, 0, v1, v2, v1);
    fn_801A2D80(s31);
    fn_801A2FE8(s31);
}

void fn_801BBDB4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    u32 c3;
    s31 = p3;
    c0 = fn_801BC2D8();
    if ((s32)c0 != (s32)0) {
    return;
    }
    v1 = M32((s31+2056));
    if ((u32)v1 != (u32)0) {
    return;
    }
    fn_801A24C8(s31);
    v2 = M32((s31+908));
    v3 = MF((v2+136));
    fn_801A234C(s31, v2, v3);
    c3 = fn_801BBEBC(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BBE18(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    s31 = p3;
    v1 = M32((p3+908));
    v2 = MF((v1+92));
    fn_801A25B8(p3, v1, v2);
    fn_801A29F8(s31);
}

void fn_801BBE54(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BBE7C(void) {
    fn_801B9570();
}

void fn_801BBE9C(void) {
    fn_801A2D58();
}

void fn_801BC104(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    u32 c2;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    c1 = fn_801BAADC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801BC730(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_801BB1A0(s31);
}

void fn_801BC220(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    float v3;
    s31 = p3;
    v1 = M32((p3+2056));
    if ((u32)v1 != (u32)0) {
        fn_801B8EC4();
        return;
    }
    v2 = M32((s31+908));
    v3 = MF((v2+96));
    fn_801A25B8(p3, v2, v3);
    fn_801A29F8(s31);
}

void fn_801BC270(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BC298(void) {
    fn_801B9570();
}

void fn_801BC2B8(void) {
    fn_801A2D58();
}

u32 fn_801BC2D8(p3) u32 p3; {
    u32 v1;
    v1 = M32((p3+996));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801BC310();
        return 1;
    }
    return 0;
}

void fn_801BC384(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BC468(s31);
}

void fn_801BC3C0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
    return;
    }
    v2 = M8((p3+2508));
    ((BFu8_0_1*)((p3+2508)))->f = 0;
    if ((s32)(v1&0x100) != (s32)0) {
    return;
    }
}

void fn_801BC3E0(void) {
    fn_801A29F8();
}

void fn_801BC400(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BC428(void) {
    fn_801B9570();
}

void fn_801BC448(void) {
    fn_801A2D58();
}

void fn_801BC654(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+908));
    v2 = MF((v1+136));
    fn_801B8424(p3, v1, v2);
}

void fn_801BC67C(u32 p3) {
    u32 v1;
    v1 = M32((p3+716));
    if ((s32)v1 != (s32)1) {
    return;
    }
    fn_801B886C();
}

void fn_801BC6A8(u32 p3) {
    u32 v1;
    v1 = M32((p3+716));
    if ((s32)v1 != (s32)1) {
    return;
    }
    fn_801A2AA4(p3, (u32)fn_801BA658);
}

void fn_801BC6DC(void) {
    fn_801B9570();
}

void fn_801BC6FC(void) {
    fn_801A2D58();
}

u32 fn_801BC71C(u32 p3) {
    u32 v1;
    v1 = M32((p3+28));
    return (v1 == 120);
}

void fn_801BC80C(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805E17E0;
    s31 = p3;
    fn_801BC86C(v1);
    fn_801A2E7C(s31);
    v2 = M8((s31+2528));
    ((BFu8_0_2*)((s31+2528)))->f = 0;
    v3 = M32((s31+908));
    v4 = M32((v3+176));
    M32((s31+2524)) = v4;
    v5 = M32((s31+908));
    v6 = M32((v5+204));
    M32((s31+2532)) = v6;
}

void fn_801BC908(void) {
    fn_801BB3BC();
}

void fn_801BCC50(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BCC78(void) {
    fn_801B9570();
}

void fn_801BCC98(void) {
    fn_801A2D58();
}

void fn_801BCCB8(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = M32((p3+28));
    if ((s32)v1 == (s32)122) {
        v2 = MF((p3+664));
        fn_801BCCFC(v2);
        return;
    }
    v3 = lbl_805E17F0;
    M32((p3+2060)) = 0;
    fn_801BCCFC(v3);
}

void fn_801BCE28(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = p3;
    v1 = M32((p3+2536));
    if ((s32)v1 <= (s32)0) {
        fn_801B9664();
        v2 = M32((s31+908));
        v3 = M32((v2+284));
        M32((s31+2536)) = v3;
    }
    v4 = M32((s31+2536));
    M32((s31+2536)) = (v4-1);
}

void fn_801BCF2C(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    u32 v3;
    float v4;
    float v5;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_801A24C8();
    c1 = fn_801BD2FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801BD07C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801BC2D8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    v1 = M32((s31+908));
    v2 = MF((v1+288));
    fn_801A234C(s31, v1, v2);
    v3 = M32((s31+908));
    v4 = MF((v3+276));
    v5 = MF((v3+280));
    fn_801BAD18(s31, v3, v4, v5);
}

void fn_801BCFAC(void) {
    fn_801B9368();
}

void fn_801BCFCC(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BCFF8(void) {
    fn_801A2D58();
}

void fn_801BD100(u32 p3) {
    float v1;
    v1 = lbl_805E17F8;
    M32((p3+2060)) = 0;
    fn_801BD12C(v1);
}

void fn_801BD22C(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    u32 c0;
    u32 c1;
    s31 = p3;
    v1 = M32((p3+908));
    v2 = MF((v1+288));
    c0 = fn_801B853C(p3, v1, v2);
    if ((s32)c0 != (s32)0) {
    return;
    }
    c1 = fn_801BD2FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BD274(void) {
    fn_801B9368();
}

void fn_801BD294(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BD2BC(void) {
    fn_801B9570();
}

void fn_801BD2DC(void) {
    fn_801A2D58();
}

void fn_801BD3AC(u32 p3) {
    u32 s31;
    float v1;
    u32 v2;
    s31 = p3;
    v1 = MF((p3+664));
    fn_801BD3F4(v1);
    fn_801A2E7C(s31);
    v2 = M8((s31+2528));
    ((BFu8_0_2*)((s31+2528)))->f = 0;
}

void fn_801BD498(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_801BCDA0();
    fn_801BCE28(s31);
}

void fn_801BD590(void) {
    fn_801B9368();
}

void fn_801BD5B0(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BD5D8(void) {
    fn_801B9570();
}

void fn_801BD5F8(void) {
    fn_801A2D58();
}

void fn_801BD7E0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BAF48(s31);
}

void fn_801BD81C(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+908));
    v2 = MF((v1+136));
    fn_801B8424(p3, v1, v2);
}

void fn_801BD844(void) {
    fn_801B886C();
}

void fn_801BD864(u32 p3) {
    u32 v1;
    v1 = M32((p3+716));
    if ((s32)v1 != (s32)1) {
    return;
    }
    fn_801A2AA4(p3, (u32)fn_801BA658);
}

void fn_801BD898(void) {
    fn_801B9570();
}

void fn_801BD8B8(void) {
    fn_801A2D58();
}

void fn_801BD940(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1810;
    v2 = lbl_805E1814;
    s31 = p3;
    fn_8018E580(p3, 125, -1, 0, v1, v2, v1);
    fn_801A2D80(s31);
    fn_80190708(s31);
    fn_801A2FE8(s31);
    fn_801B9620(s31);
}

void fn_801BD9A4(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BABD4(s31);
}

void fn_801BD9E8(u32 p3) {
    fn_801A2B0C(p3, (u32)fn_801BAF14);
}

void fn_801BDA14(void) {
    fn_801A2D58();
}

void fn_801BDA34(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    float v7;
    float v8;
    u32 v9;
    u32 v10;
    s31 = p4;
    s30 = p3;
    fn_80190708();
    fn_8019C43C(s30);
    M32((s30+2368)) = 0;
    M32((s30+2364)) = 0;
    v1 = M32(s30);
    v2 = M32((v1+8));
    M32((s30+2364)) = v2;
    v3 = M32(s30);
    fn_804293F4(v3, 32, 0);
    v4 = M32(s30);
    v5 = M32((v4+16));
    M32((s30+2368)) = v5;
    v6 = M32(s30);
    fn_80429B24(v6, 26, 1);
    v7 = lbl_805E1818;
    M32((s30+2056)) = 0;
    v8 = lbl_805E181C;
    M32((s30+2060)) = 0;
    fn_8018E580(s30, 130, (s31+544), 0, v7, v8, v7);
    if ((s32)s31 == (s32)0) {
        M32((s30+2372)) = 0;
        M32((s30+2376)) = 8;
    } else {
        M32((s30+2372)) = 0;
        M32((s30+2376)) = 4;
    }
    v9 = M8((s30+2080));
    ((BFu8_0_1*)((s30+2080)))->f = 1;
    v10 = M8((s30+2084));
    ((BFu8_3_1*)((s30+2084)))->f = 1;
}

void fn_801BDB2C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p3;
    v1 = M32((p3+2056));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M32((s31+2056)) = 0;
    v2 = M32((s31+2372));
    v3 = M32((s31+2376));
    fn_80193900(p3, v2, v3, 0, 0, 1, 0, 0);
    fn_80193830(s31);
    fn_80193004(s31);
}

void fn_801BDBAC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    s31 = p3;
    v1 = M32((p3+2364));
    if ((u32)v1 != (u32)0) {
        v2 = M32(s31);
        fn_80429430(v2, v1);
    } else {
        v3 = M32(s31);
        fn_804293F4(v3, 10, 0);
    }
    v4 = M32((s31+2368));
    if ((u32)v4 != (u32)0) {
        v5 = M32(s31);
        fn_80429BE0(v5, v4);
    } else {
        v6 = M32(s31);
        fn_80429B24(v6, 6, 1);
    }
    fn_801910E8(s31);
}

void fn_801BDC2C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M8((p3+2086));
    if ((s32)((v1>>1)&0x1) == (s32)0) {
    return;
    }
    v2 = M8((p3+2087));
    ((BFu8_1_1*)((p3+2087)))->f = 1;
    if ((s32)((v1>>1)&0x1) != (s32)0) {
    return;
    }
}

void fn_801BDC4C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    s31 = p3;
    fn_80196F18(p3, 0, 0);
    fn_80196F18(s31, 1, 0);
    fn_80196F18(s31, 2, -1);
    v1 = M8((s31+10));
    fn_80198D1C(s31, 0, v1);
    fn_80198D1C(s31, 1, 0);
    fn_80198D1C(s31, 2, 0);
    M32((s31+2292)) = 0;
    M32((s31+2312)) = 0;
    M32((s31+2316)) = 0;
    M32((s31+2320)) = 0;
    M32((s31+2324)) = 0;
    v2 = M8((s31+2085));
    ((BFu8_3_1*)((s31+2085)))->f = 1;
    v3 = M8((s31+2085));
    ((BFu8_5_1*)((s31+2085)))->f = 1;
    v4 = M8((s31+2085));
    ((BFu8_7_1*)((s31+2085)))->f = 1;
    v5 = M8((s31+2344));
    ((BFu8_1_1*)((s31+2344)))->f = 0;
    v6 = M8((s31+2086));
    if ((s32)((v6>>1)&0x1) != (s32)0) {
        M32((s31+2336)) = 5;
        return;
    }
    M32((s31+2336)) = 0;
}

void fn_801BDD74(u32 p3) {
    float v1;
    v1 = MF((p3+712));
    fn_8018A188((p3+2088), v1);
}

void fn_801BDDA0(u32 p3) {
    u32 v1;
    v1 = M32((p3+2312));
    if ((u32)v1 == (u32)0) {
    return;
    }
    ((void (*)())(v1))();
}

void fn_801BDDD0(u32 p3) {
    u32 v1;
    v1 = M32((p3+2316));
    if ((u32)v1 == (u32)0) {
    return;
    }
    ((void (*)())(v1))();
}

void fn_801BDE00(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c1;
    u32 c2;
    s31 = p3;
    v1 = M32((p3+2320));
    if ((u32)v1 != (u32)0) {
        ((void (*)())(v1))();
    }
    c1 = fn_80191680(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    c2 = fn_801C02B8(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801BDE58(u32 p3) {
    u32 v1;
    v1 = M32((p3+2324));
    if ((u32)v1 == (u32)0) {
    return;
    }
    ((void (*)())(v1))();
}

u32 fn_801BDE88(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 c0;
    u32 c1;
    s31 = p4;
    s30 = p3;
    v1 = M8((p3+2717));
    if ((s32)((v1>>3)&0x1) != (s32)0) {
        c0 = fn_8019F238();
        if ((s32)c0 != (s32)0) {
            v2 = M8((s30+2344));
            if ((s32)((v2>>7)&0x1) == (s32)0) {
                v3 = M32((s30+2340));
                if ((s32)v3 == (s32)0) {
                    v4 = MF((s30+712));
                    c1 = fn_8008238C((s30+2088), s31, v4);
                    if ((s32)c1 != (s32)0) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

u32 fn_801BDF10(u32 p3, u32 p4) {
    return p4;
}

void fn_801BDF18(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 v1;
    s31 = p4;
    s30 = p3;
    v1 = M32((p3+2292));
    if ((u32)v1 == (u32)0) {
    return;
    }
    if ((s32)p5 != (s32)0) {
        fn_801971D8((s30+1036), p4, (s30+692));
        fn_801970F0((s30+2304), s31, (s30+2288));
        return;
    }
    fn_801971D8((s30+2304), p4, (s30+2288));
}

void fn_801BDF8C(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_80198C20(p3, 1, 3);
    fn_801BE060(s31);
}

void fn_801BDFC8(u32 p3) {
    fn_80198C20(p3, 1, 0);
}

void fn_801BDFF0(u32 p3, u32 p4) {
    if ((s32)p4 != (s32)3) {
    return;
    }
    fn_8019F6CC();
}

void fn_801BE018(p3) u32 p3; {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801C0D28(p3, 0);
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_801BE934(s31);
}

void fn_801BE060(u32 p3) {
    u32 v1;
    u32 s31;
    u32 v2;
    float g31;
    u32 v3;
    u32 v4;
    float v5;
    float v6;
    float d0;
    float d1;
    v1 = M8((p3+2086));
    s31 = p3;
    if ((s32)((v1>>1)&0x1) == (s32)0) {
    return;
    }
    v2 = M32((s31+1012));
    if ((u32)v2 == (u32)0) {
    return;
    }
    d0 = fn_801C8410(v2);
    g31 = d0;
    v3 = M32((s31+1012));
    d1 = fn_801C8404(v3);
    v4 = M32((s31+908));
    v5 = MF((v4+24));
    if (g31 <= (d1*v5)) {
        fn_8019BFB4(s31, 47, 0);
        return;
    }
    v6 = MF((v4+20));
    if (g31 <= (d1*v6)) {
        fn_8019BFB4(s31, 46, 0);
    }
}

void fn_801BE110(u32 p3) {
    u32 v1;
    u32 s31;
    u32 v2;
    float g31;
    u32 v3;
    u32 v4;
    float v5;
    float v6;
    float d0;
    float d1;
    v1 = M8((p3+2086));
    s31 = p3;
    if ((s32)((v1>>1)&0x1) == (s32)0) {
    return;
    }
    v2 = M32((s31+1012));
    if ((u32)v2 == (u32)0) {
    return;
    }
    d0 = fn_801C8410(v2);
    g31 = d0;
    v3 = M32((s31+1012));
    d1 = fn_801C8404(v3);
    v4 = M32((s31+908));
    v5 = MF((v4+24));
    if (g31 <= (d1*v5)) {
        fn_8019BFB4(s31, 47, 0);
        return;
    }
    v6 = MF((v4+20));
    if (g31 <= (d1*v6)) {
        fn_8019BFB4(s31, 46, 0);
    }
}

void fn_801BE1C0(u32 p3) {
    u32 v1;
    M32((p3+2332)) = 0;
    M32((p3+2328)) = 0;
    v1 = M8((p3+2080));
    ((BFu8_7_1*)((p3+2080)))->f = 0;
}

void fn_801BE440(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1838;
    v2 = lbl_805E183C;
    s31 = p3;
    fn_8018E580(p3, 30, -1, 0, v1, v2, v1);
    fn_801BE5BC(s31);
}

void fn_801BE48C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BE580(s31);
}

void fn_801BE4C8(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801BE5BC();
    c1 = fn_801BE6B4(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BE500(void) {
    fn_801BE634();
}

void fn_801BE520(void) {
    fn_801BE654();
}

void fn_801BE540(void) {
    fn_801BE674();
}

void fn_801BE560(void) {
    fn_801BE694();
}

void fn_801BE580(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1840;
    v2 = lbl_805E1844;
    fn_8018E580(p3, 31, -1, 0, v1, v2, v1);
}

void fn_801BE5BC(p3) u32 p3; {
    float v1;
    u32 v2;
    v1 = lbl_805E1840;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 1, v1, v1);
}

void fn_801BE5EC(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    u32 c1;
    v1 = lbl_805E1840;
    s31 = p3;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 1, v1, v1);
    c1 = fn_801BE6B4(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BE634(void) {
    fn_80199C40();
}

void fn_801BE654(void) {
    fn_8019FC5C();
}

void fn_801BE674(void) {
    fn_8019FC60();
}

void fn_801BE694(void) {
    fn_8019FC80();
}

u32 fn_801BE6B4(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801BE6EC();
        return 1;
    }
    return 0;
}

void fn_801BE738(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BE344(s31);
}

void fn_801BE774(u32 p3) {
    float v1;
    u32 v2;
    v1 = lbl_805E1848;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 0, v1, v1);
}

void fn_801BE7A4(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    u32 c1;
    v1 = lbl_805E1848;
    s31 = p3;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 0, v1, v1);
    c1 = fn_801BE408(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BE7EC(void) {
    fn_80199C40();
}

void fn_801BE80C(void) {
    fn_801BE654();
}

void fn_801BE82C(void) {
    fn_801BE674();
}

void fn_801BE84C(void) {
    fn_801BE694();
}

void fn_801BE86C(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    float v4;
    s31 = p3;
    fn_801C0A74();
    v1 = M32((s31+28));
    switch ((s32)v1) {
    case 29:
        fn_801BE934(s31);
        break;
    case 30:
        v2 = MF((s31+664));
        fn_801BED88(s31, v2);
        break;
    case 31:
        v3 = MF((s31+664));
        fn_801BEF38(s31, v3);
        break;
    case 32:
        v4 = MF((s31+664));
        fn_801BF178(s31, v4);
    }
}

u32 fn_801BE8FC(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801BE934();
        return 1;
    }
    return 0;
}

u32 fn_801BE934(p3) u32 p3; {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    u32 v4;
    v1 = lbl_805E1850;
    v2 = lbl_805E1854;
    s31 = p3;
    fn_8018E580(p3, 33, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 3;
    fn_8019F980(s31);
    fn_801BE1C0(s31);
    fn_801BE1DC(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
    v3 = M32((s31+908));
    v4 = M32((v3+12));
    M8((s31+2626)) = v4;
    return v3;
}

void fn_801BE9B0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_8019FABC();
    fn_801BE1DC(s31);
    c2 = fn_80198B90(s31);
    if ((s32)c2 == (s32)0) {
    return;
    }
    v1 = M8((s31+2626));
    M8((s31+2626)) = (v1-1);
    v2 = M8((s31+2626));
    if ((u32)v2 != (u32)0) {
    return;
    }
    v3 = M32((s31+908));
    v4 = M32((v3+12));
    M8((s31+2626)) = v4;
    c3 = fn_801BEB3C(s31, v3);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BEA24(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FBF4();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C05A8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BEA74(void) {
    fn_8019FC3C();
}

void fn_801BEA94(void) {
    fn_8019FC5C();
}

void fn_801BEB1C(void) {
    fn_8019FC80();
}

void fn_801BEBBC(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1858;
    v2 = lbl_805E185C;
    fn_8018E580(p3, 34, -1, 0, v1, v2, v1);
}

void fn_801BEBF4(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    c1 = fn_801BE8FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BEC84(void) {
    fn_801BEA74();
}

void fn_801BECA4(void) {
    fn_801BEA94();
}

void fn_801BECC4(void) {
    fn_801BEAB4();
}

void fn_801BECE4(void) {
    fn_801BEB1C();
}

u32 fn_801BED04(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801BED3C();
        return 1;
    }
    return 0;
}

void fn_801BED88(u32 p3, float q1) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1860;
    v2 = lbl_805E1864;
    s31 = p3;
    fn_8018E580(p3, 40, -1, 0, q1, v1, v2);
    fn_801A0300(s31);
}

void fn_801BEDD0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BEEDC(s31);
}

void fn_801BEE0C(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0300();
    c1 = fn_801BF0F4(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BEE44(void) {
    fn_801BF040();
}

void fn_801BEE64(void) {
    fn_801BF060();
}

void fn_801BEE84(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801BF080();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BEEBC(void) {
    fn_801BF0D4();
}

void fn_801BEEDC(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E186C;
    v2 = lbl_805E1868;
    s31 = p3;
    fn_8018E580(p3, 41, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 101;
    fn_801BE1C0(s31);
    fn_801BEF90(s31);
}

void fn_801BEF38(u32 p3, float q1) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1868;
    v2 = lbl_805E186C;
    s31 = p3;
    fn_8018E580(p3, 41, -1, 64, q1, v1, v2);
    M32((s31+1124)) = 101;
    fn_801BE1C0(s31);
    fn_801BEF90(s31);
}

void fn_801BEF90(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F894(p3, 102, 103);
    fn_801BE1DC(s31);
}

void fn_801BEFCC(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F894(p3, 102, 103);
    fn_801BE1DC(s31);
}

void fn_801BF008(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0300();
    c1 = fn_801BF0F4(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BF040(void) {
    fn_801A0348();
}

void fn_801BF060(void) {
    fn_801A0368();
}

void fn_801BF0D4(void) {
    fn_801A03A8();
}

u32 fn_801BF0F4(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801BF12C();
        return 1;
    }
    return 0;
}

void fn_801BF12C(p3) u32 p3; {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1874;
    v2 = lbl_805E1870;
    s31 = p3;
    fn_8018E580(p3, 42, -1, 0, v1, v2, v1);
    fn_8019FBF4(s31);
}

void fn_801BF178(u32 p3, float q1) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1870;
    v2 = lbl_805E1874;
    s31 = p3;
    fn_8018E580(p3, 42, -1, 0, q1, v1, v2);
    fn_8019FBF4(s31);
}

void fn_801BF1C0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M32((s31+908));
    v2 = M32(v1);
    M32((s31+1216)) = v2;
    fn_801BE018(s31, v1);
}

void fn_801BF208(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_8019FBF4();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BF240(void) {
    fn_801BF040();
}

void fn_801BF260(void) {
    fn_801BF060();
}

void fn_801BF280(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_801BF080();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801BF9E0(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801BF65C(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BF2D8(void) {
    fn_801BF0D4();
}

void fn_801BF2F8(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1878;
    v2 = lbl_805E187C;
    fn_8018E580(p3, 43, -1, 0, v1, v2, v1);
}

void fn_801BF330(void) {
    fn_801A03F8();
}

void fn_801BF350(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_801A0470();
    c1 = fn_801A0430(s31);
    if ((s32)c1 != (s32)0) {
        fn_801BF12C(s31);
        return;
    }
    c3 = fn_801A0444(s31);
    if ((s32)c3 == (s32)0) {
    return;
    }
    fn_801BEEDC(s31);
}

void fn_801BF3B0(void) {
    fn_801A04B8();
}

void fn_801BF3D0(void) {
    fn_801A04D8();
}

void fn_801BF3F0(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A04DC();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BF428(void) {
    fn_801A04FC();
}

u32 fn_801BF448(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194120();
    if ((s32)c0 == (s32)1) {
        fn_801BF490(s31);
        return 1;
    }
    return 0;
}

void fn_801BF490(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1880;
    v2 = lbl_805E1884;
    s31 = p3;
    fn_8018E580(p3, 35, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 4;
    fn_8019FCA0(s31);
    fn_801BE1C0(s31);
    fn_801BE1DC(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801BF500(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019FCC8();
    fn_801BE1DC(s31);
}

void fn_801BF534(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_8019FCF0();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
}

void fn_801BF578(void) {
    fn_8019FD38();
}

void fn_801BF598(void) {
    fn_8019FD58();
}

void fn_801BF5B8(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    u32 c5;
    s31 = p3;
    fn_8019FD5C();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801BFD64(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801BFF50(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_801C0100(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    c5 = fn_80194120(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
    fn_801BE018(s31);
}

void fn_801BF63C(void) {
    fn_8019FD7C();
}

u32 fn_801BF65C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194144();
    if ((s32)c0 != (s32)0) {
        fn_801BF6A4(s31);
        return 1;
    }
    return 0;
}

void fn_801BF6A4(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1888;
    v2 = lbl_805E188C;
    s31 = p3;
    fn_8018E580(p3, 36, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 9;
    fn_8019FE48(s31);
    fn_801BE1C0(s31);
    fn_801BE1DC(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801BF714(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019FE70();
    fn_801BE1DC(s31);
}

void fn_801BF748(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FE98();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C05A8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BF798(void) {
    fn_8019FEE0();
}

void fn_801BF7B8(void) {
    fn_8019FF00();
}

void fn_801BF7D8(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_8019FF04();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801BF448(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_80194144(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    fn_801BF85C(s31);
}

void fn_801BF83C(void) {
    fn_8019FF24();
}

void fn_801BF85C(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1890;
    v2 = lbl_805E1894;
    s31 = p3;
    fn_8018E580(p3, 37, -1, 0, v1, v2, v1);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801BF8AC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BE018(s31);
}

void fn_801BF8E8(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FE98();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C05A8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BF938(void) {
    fn_8019FEE0();
}

void fn_801BF958(void) {
    fn_8019FF00();
}

void fn_801BF978(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_8019FF04();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801BF448(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801BF9C0(void) {
    fn_8019FF24();
}

u32 fn_801BF9E0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194168();
    if ((s32)c0 != (s32)0) {
        fn_801BFA28(s31);
        return 1;
    }
    return 0;
}

void fn_801BFA28(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1898;
    v2 = lbl_805E189C;
    s31 = p3;
    fn_8018E580(p3, 38, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 13;
    fn_8019FF44(s31);
    fn_801BE1C0(s31);
    fn_801BE1DC(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801BFA98(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019FF6C();
    fn_801BE1DC(s31);
}

void fn_801BFACC(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FF94();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C05A8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BFB1C(void) {
    fn_8019FFDC();
}

void fn_801BFB3C(void) {
    fn_8019FFFC();
}

void fn_801BFB5C(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_801A0000();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801BF448(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_80194168(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    fn_801BFBE0(s31);
}

void fn_801BFBC0(void) {
    fn_801A0020();
}

void fn_801BFBE0(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E18A0;
    v2 = lbl_805E18A4;
    s31 = p3;
    fn_8018E580(p3, 39, -1, 0, v1, v2, v1);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801BFC30(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BE018(s31);
}

void fn_801BFC6C(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FF94();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C05A8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BFCBC(void) {
    fn_8019FFDC();
}

void fn_801BFCDC(void) {
    fn_8019FFFC();
}

void fn_801BFCFC(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801A0000();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801BF448(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801BFD44(void) {
    fn_801A0020();
}

u32 fn_801BFD64(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_801941D4();
    if ((s32)c0 != (s32)0) {
        fn_801BFDAC(s31);
        return 1;
    }
    return 0;
}

void fn_801BFE20(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801BE934(s31);
        return;
    }
    fn_801A0040(s31);
}

void fn_801BFE68(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_801A0044();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C05A8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801BFEB8(void) {
    fn_801A008C();
}

void fn_801BFED8(void) {
    fn_801A00AC();
}

void fn_801BFEF8(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A00B0();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801BFF30(void) {
    fn_801A00D0();
}

u32 fn_801BFF50(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_801941B0();
    if ((s32)c0 != (s32)0) {
        fn_801BFF98(s31);
        return 1;
    }
    return 0;
}

void fn_801BFF98(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E18B0;
    v2 = lbl_805E18B4;
    fn_8018E580(p3, 48, -1, 0, v1, v2, v1);
}

void fn_801BFFD0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801BE018(s31);
        return;
    }
    fn_801A00F0(s31);
}

void fn_801C0018(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_801A00F4();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C05A8(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C0068(void) {
    fn_801A013C();
}

void fn_801C0088(void) {
    fn_801A015C();
}

void fn_801C00A8(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0160();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C00E0(void) {
    fn_801A0180();
}

u32 fn_801C0100(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_8019418C();
    if ((s32)c0 != (s32)0) {
        fn_801C0148(s31);
        return 1;
    }
    return 0;
}

void fn_801C0148(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_80194240();
    v1 = lbl_805E18B8;
    v2 = lbl_805E18BC;
    v3 = M32((u32)lbl_804AFFC0+(c0<<2));
    fn_8018E580(s31, 49, v3, 0, v1, v2, v1);
}

void fn_801C01A0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801BE018(s31);
        return;
    }
    fn_801A01A0(s31);
}

void fn_801C01E8(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A01A4();
    c1 = fn_801BED04(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C0220(void) {
    fn_801A01EC();
}

void fn_801C0240(void) {
    fn_801A020C();
}

void fn_801C0260(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0210();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C0298(void) {
    fn_801A0230();
}

u32 fn_801C02B8(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M8((p3+2083));
    if ((s32)((v1>>2)&0x1) == (s32)0) {
        if ((s32)((v1>>3)&0x1) == (s32)0) {
            c0 = fn_80194264(p3, v1);
            if ((s32)c0 != (s32)0) {
                fn_801C0314(s31);
                return 1;
            }
        }
    }
    return 0;
}

void fn_801C0314(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    u32 v5;
    s31 = p3;
    v1 = M8((p3+8));
    fn_8027A08C(v1);
    v2 = lbl_805E18C0;
    v3 = lbl_805E18C4;
    fn_8018E580(s31, 50, -1, 0, v2, v3, v2);
    v4 = M8((s31+2083));
    ((BFu8_4_1*)((s31+2083)))->f = 1;
    v5 = M8((s31+8));
    fn_80231020(v5);
}

void fn_801C037C(void) {
    u32 c0;
    c0 = fn_801C0440();
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801C03A0(void) {
    fn_801A051C();
}

void fn_801C03C0(void) {
    fn_801A0520();
}

void fn_801C03E0(void) {
    fn_801A0540();
}

void fn_801C0400(void) {
    fn_801A0544();
}

void fn_801C0420(void) {
    fn_801A0564();
}

void fn_801C0488(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E18C8;
    v2 = lbl_805E18CC;
    fn_8018E580(p3, 51, -1, 0, v1, v2, v1);
}

void fn_801C04C0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801BE018(s31);
        return;
    }
    fn_801A0618(s31);
}

void fn_801C0508(void) {
    fn_801A061C();
}

void fn_801C0528(void) {
    fn_801A0620();
}

void fn_801C0548(void) {
    fn_801A0640();
}

void fn_801C0568(void) {
    fn_801A0644();
}

void fn_801C0588(void) {
    fn_801A0664();
}

u32 fn_801C05A8(u32 p3) {
    u32 loc8[1];
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80191980(p3, ((u32)loc8));
    if ((s32)c0 != (s32)0) {
        v1 = M32(((u32)loc8));
        fn_801C05F8(s31, v1);
        return 1;
    }
    return 0;
}

void fn_801C066C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B00(v1);
    if ((s32)c0 != (s32)0) {
    return;
    }
    fn_801BE018(s31);
}

void fn_801C06AC(void) {
    fn_801C088C();
}

void fn_801C06CC(void) {
    fn_801C08AC();
}

void fn_801C06EC(void) {
    fn_801C08CC();
}

void fn_801C070C(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801C08EC();
    c1 = fn_801C0764(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C0744(void) {
    fn_801C090C();
}

#pragma push
#pragma optimization_level 3
u32 fn_801C0764(u32 p3) {
    s32 v1;
    u32 h2;
    h2 = M32((p3+1012));
    v1 = h2;
    if ((s32)fn_801C7B58(v1) != 0) {
        fn_801C07E0(p3, fn_801C812C(M32((1012+p3))));
        return 1;
    }
    return 0;
}
#pragma pop

void fn_801C07BC(u32 p3) {
    u32 v1;
    v1 = M32(p3);
    fn_801A20C4(v1);
}

void fn_801C084C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B2C(v1);
    if ((s32)c0 != (s32)0) {
    return;
    }
    fn_801C092C(s31);
}

void fn_801C088C(void) {
    fn_80190C54();
}

void fn_801C08AC(void) {
    fn_80199C40();
}

void fn_801C08CC(void) {
    fn_8019FC5C();
}

void fn_801C08EC(void) {
    fn_8019FC60();
}

void fn_801C090C(void) {
    fn_8019FC80();
}

void fn_801C0974(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801BE018(s31);
}

void fn_801C09B0(void) {
    fn_801C088C();
}

void fn_801C09D0(void) {
    fn_801C08AC();
}

void fn_801C09F0(void) {
    fn_801C08CC();
}

void fn_801C0A10(void) {
    fn_801C08EC();
}

void fn_801C0A30(void) {
    fn_801C090C();
}

void fn_801C0A50(u32 p3, u32 p4) {
    fn_80196710(p3, p4, (p3+2088));
}

void fn_801C0AB4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_8019F238();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M8((s31+2344));
    if ((s32)((v1>>6)&0x1) == (s32)0) {
    return;
    }
    v2 = M32((s31+2340));
    if ((s32)v2 == (s32)0) {
    return;
    }
    M32((s31+2340)) = (v2-1);
    if ((s32)v2 != (s32)0) {
    return;
    }
}

void fn_801C0B08(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_8019F238();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M8((s31+2344));
    if ((s32)((v1>>6)&0x1) == (s32)0) {
    return;
    }
    fn_801BDD74(s31);
}

void fn_801C0C28(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M8((p3+2344));
    ((BFu8_0_1*)((p3+2344)))->f = 1;
    fn_80196F18(p3, 2, -1);
    fn_80196F38(s31, 2);
}

void fn_801C0C78(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M8((p3+2344));
    ((BFu8_0_1*)((p3+2344)))->f = 1;
    fn_80196F18(p3, 2, -1);
    fn_80196F38(s31, 2);
    M32((s31+2024)) = 0;
}

void fn_801C0CD0(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    v1 = M8((p3+2344));
    ((BFu8_0_1*)((p3+2344)))->f = 1;
    fn_80196F18(p3, 2, -1);
    fn_80196F38(s31, 2);
    M32((s31+2044)) = 0;
}

void fn_801C0DB8(void) {
    fn_801C123C();
}

void fn_801C0DD8(u32 p3) {
    u32 s31;
    float v1;
    u32 v2;
    float v3;
    u32 v4;
    s31 = p3;
    fn_80196F18(p3, 2, 0);
    fn_80196F38(s31, 2);
    v1 = lbl_805E18E8;
    v2 = M32((s31+2336));
    v3 = lbl_805E18EC;
    fn_8018E580(s31, 52, (v2+113), 0, v1, v3, v1);
    M32((s31+1100)) = 0;
    M32((s31+1096)) = 0;
    v4 = M8((s31+2344));
    ((BFu8_0_1*)((s31+2344)))->f = 1;
}

void fn_801C0E58(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C0F34(s31);
}

void fn_801C0E94(void) {
    fn_8019F37C();
}

void fn_801C0EB4(void) {
    fn_8019F39C();
}

void fn_801C0ED4(void) {
    fn_8019F3BC();
}

void fn_801C0EF4(void) {
    fn_8019F3DC();
}

void fn_801C0F14(void) {
    fn_8019F3FC();
}

void fn_801C0FD8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C10C8(s31);
}

void fn_801C1014(void) {
    fn_8019F37C();
}

void fn_801C1034(void) {
    fn_8019F39C();
}

void fn_801C1054(void) {
    fn_8019F3BC();
}

void fn_801C1074(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F3DC();
    fn_8019E78C(s31);
}

void fn_801C10A8(void) {
    fn_8019F3FC();
}

void fn_801C114C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C0C28(s31);
    fn_801BE018(s31);
    v1 = M32((s31+908));
    v2 = M32((v1+28));
    M32((s31+2340)) = v2;
}

void fn_801C119C(void) {
    fn_8019F37C();
}

void fn_801C11BC(void) {
    fn_8019F39C();
}

void fn_801C11DC(void) {
    fn_8019F3BC();
}

void fn_801C11FC(void) {
    fn_8019F3DC();
}

void fn_801C121C(void) {
    fn_8019F3FC();
}

void fn_801C134C(void) {
    fn_8019F37C();
}

void fn_801C136C(void) {
    fn_8019F39C();
}

void fn_801C138C(void) {
    fn_8019F3BC();
}

void fn_801C13AC(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F3DC();
    fn_8019E78C(s31);
}

void fn_801C13E0(void) {
    fn_8019F3FC();
}

void fn_801C14CC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+2056));
    if ((u32)v1 != (u32)0) {
        v2 = M8((s31+2344));
        ((BFu8_0_1*)((s31+2344)))->f = 0;
        M32((s31+2056)) = 0;
    }
    c0 = fn_80198B00(s31);
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C0C28(s31);
    fn_801BE018(s31);
    v3 = M32((s31+908));
    v4 = M32((v3+28));
    M32((s31+2340)) = v4;
}

void fn_801C1540(void) {
    fn_8019F37C();
}

void fn_801C1560(void) {
    fn_8019F39C();
}

void fn_801C1580(void) {
    fn_8019F3BC();
}

void fn_801C15A0(void) {
    fn_8019F3DC();
}

void fn_801C15C0(void) {
    fn_8019F3FC();
}

void fn_801C15E0(u32 p3) {
    u32 v1;
    v1 = M8((p3+2087));
    ((BFu8_0_1*)((p3+2087)))->f = 1;
}

void fn_801C15F4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+1096));
    v2 = M32((p3+1100));
    fn_8019E72C(v1, v2);
}

void fn_801C1620(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    s31 = p3;
    fn_80196F18(p3, 0, 0);
    fn_80196F18(s31, 1, 0);
    fn_80196F18(s31, 2, 0);
    v1 = M8((s31+10));
    fn_80198D1C(s31, 0, v1);
    fn_80198D1C(s31, 1, 0);
    fn_80198D1C(s31, 2, 0);
    M32((s31+2292)) = 0;
    M32((s31+2312)) = 0;
    M32((s31+2316)) = 0;
    M32((s31+2320)) = 0;
    M32((s31+2324)) = 0;
    v2 = M8((s31+2085));
    ((BFu8_3_1*)((s31+2085)))->f = 1;
    v3 = M8((s31+2085));
    ((BFu8_5_1*)((s31+2085)))->f = 1;
    v4 = M8((s31+2085));
    ((BFu8_7_1*)((s31+2085)))->f = 1;
    v5 = M8((s31+2340));
    ((BFu8_1_1*)((s31+2340)))->f = 0;
    v6 = M8((s31+2082));
    ((BFu8_5_1*)((s31+2082)))->f = 1;
}

void fn_801C1740(u32 p3) {
    float v1;
    v1 = MF((p3+712));
    fn_8018A188((p3+2088), v1);
}

void fn_801C176C(u32 p3) {
    u32 v1;
    v1 = M32((p3+2312));
    if ((u32)v1 == (u32)0) {
    return;
    }
    ((void (*)())(v1))();
}

void fn_801C179C(u32 p3) {
    u32 v1;
    v1 = M32((p3+2316));
    if ((u32)v1 == (u32)0) {
    return;
    }
    ((void (*)())(v1))();
}

void fn_801C17CC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c1;
    u32 c2;
    s31 = p3;
    v1 = M32((p3+2320));
    if ((u32)v1 != (u32)0) {
        ((void (*)())(v1))();
    }
    c1 = fn_80191680(s31);
    if ((s32)c1 == (s32)0) {
    return;
    }
    c2 = fn_801C3C50(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801C1824(u32 p3) {
    u32 v1;
    v1 = M32((p3+2324));
    if ((u32)v1 == (u32)0) {
    return;
    }
    ((void (*)())(v1))();
}

u32 fn_801C1854(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    u32 c0;
    u32 c1;
    s31 = p4;
    s30 = p3;
    v1 = M8((p3+2717));
    if ((s32)((v1>>3)&0x1) != (s32)0) {
        c0 = fn_8019F238();
        if ((s32)c0 != (s32)0) {
            v2 = M8((s30+2340));
            if ((s32)((v2>>7)&0x1) == (s32)0) {
                v3 = M32((s30+2332));
                if ((s32)v3 == (s32)0) {
                    v4 = MF((s30+712));
                    c1 = fn_8008238C((s30+2088), s31, v4);
                    if ((s32)c1 != (s32)0) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

u32 fn_801C18DC(u32 p3, u32 p4) {
    return p4;
}

void fn_801C18E4(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 v1;
    s31 = p4;
    s30 = p3;
    v1 = M32((p3+2292));
    if ((u32)v1 == (u32)0) {
    return;
    }
    if ((s32)p5 != (s32)0) {
        fn_801971D8((s30+1036), p4, (s30+692));
        fn_801970F0((s30+2304), s31, (s30+2288));
        return;
    }
    fn_801971D8((s30+2304), p4, (s30+2288));
}

void fn_801C1958(u32 p3) {
    fn_80198C20(p3, 1, 3);
}

void fn_801C1980(u32 p3) {
    fn_80198C20(p3, 1, 0);
}

void fn_801C19A8(void) {
    fn_8019F6CC();
}

void fn_801C19C8(p3) u32 p3; {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801C460C(p3, 0);
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C297C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    fn_801C2020(s31);
}

u32 fn_801C1A20(u32 p3) {
    s32 c1;
    fn_801C460C(p3, 0);
    c1 = fn_801C2268(p3);
    return (((-(u32)c1)|c1)>>31);
}

void fn_801C1A68(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E18F0;
    v2 = lbl_805E18F4;
    fn_8018E580(p3, 29, -1, 0, v1, v2, v1);
}

void fn_801C1AA4(void) {
    u32 c0;
    c0 = fn_801C1B2C();
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801C1AC8(void) {
    fn_80199C40();
}

void fn_801C1AEC(void) {
    fn_80193830();
}

void fn_801C1B0C(void) {
    fn_80193004();
}

u32 fn_801C1B2C(p3) u32 p3; {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801C1B64();
        return 1;
    }
    return 0;
}

void fn_801C1BB0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C1CA4(s31);
}

void fn_801C1BEC(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801C1CE0();
    c1 = fn_801C1DD8(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C1C24(void) {
    fn_801C1D58();
}

void fn_801C1C44(void) {
    fn_801C1D78();
}

void fn_801C1C64(void) {
    fn_801C1D98();
}

void fn_801C1C84(void) {
    fn_801C1DB8();
}

void fn_801C1CA4(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1900;
    v2 = lbl_805E1904;
    fn_8018E580(p3, 31, -1, 0, v1, v2, v1);
}

void fn_801C1D10(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    u32 c1;
    v1 = lbl_805E1900;
    s31 = p3;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 1, v1, v1);
    c1 = fn_801C1DD8(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C1D58(void) {
    fn_80199C40();
}

void fn_801C1D78(void) {
    fn_8019FC5C();
}

void fn_801C1D98(void) {
    fn_8019FC60();
}

void fn_801C1DB8(void) {
    fn_8019FC80();
}

u32 fn_801C1DD8(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801C1E10();
        return 1;
    }
    return 0;
}

void fn_801C1E5C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C1A68(s31);
}

void fn_801C1E98(u32 p3) {
    float v1;
    u32 v2;
    v1 = lbl_805E1908;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 0, v1, v1);
}

void fn_801C1EC8(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    u32 c1;
    v1 = lbl_805E1908;
    s31 = p3;
    v2 = M32((p3+1012));
    fn_801C75F4(v2, 0, v1, v1);
    c1 = fn_801C1B2C(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C1F10(void) {
    fn_80199C40();
}

void fn_801C1F30(void) {
    fn_801C1D78();
}

void fn_801C1F50(void) {
    fn_801C1D98();
}

void fn_801C1F70(void) {
    fn_801C1DB8();
}

void fn_801C1F90(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    float v4;
    s31 = p3;
    fn_801C440C();
    v1 = M32((s31+28));
    switch ((s32)v1) {
    case 29:
        fn_801C2020(s31);
        break;
    case 30:
        v2 = MF((s31+664));
        fn_801C22EC(s31, v2);
        break;
    case 31:
        v3 = MF((s31+664));
        fn_801C2494(s31, v3);
        break;
    case 32:
        v4 = MF((s31+664));
        fn_801C26AC(s31, v4);
    }
}

void fn_801C2020(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    v1 = lbl_805E1910;
    v2 = lbl_805E1914;
    s31 = p3;
    fn_8018E580(p3, 33, -1, 64, v1, v2, v1);
    v3 = M8((s31+2328));
    ((BFu8_0_1*)((s31+2328)))->f = 0;
    M32((s31+1124)) = 3;
    fn_8019F980(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801C2150(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FBF4();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C3F40(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C21A0(void) {
    fn_8019FC3C();
}

void fn_801C21C0(void) {
    fn_8019FC5C();
}

void fn_801C21E0(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_8019FC60();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C297C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801C339C(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_801C303C(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
}

void fn_801C2248(void) {
    fn_8019FC80();
}

u32 fn_801C2268(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        fn_801C22A0();
        return 1;
    }
    return 0;
}

void fn_801C22EC(u32 p3, float q1) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1920;
    v2 = lbl_805E1924;
    s31 = p3;
    fn_8018E580(p3, 41, -1, 0, q1, v1, v2);
    fn_801A0300(s31);
}

void fn_801C2334(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C2440(s31);
}

void fn_801C2370(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0300();
    c1 = fn_801C2628(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C23A8(void) {
    fn_801C2574();
}

void fn_801C23C8(void) {
    fn_801C2594();
}

void fn_801C23E8(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801C25B4();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C2420(void) {
    fn_801C2608();
}

void fn_801C2440(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E192C;
    v2 = lbl_805E1928;
    s31 = p3;
    fn_8018E580(p3, 42, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 101;
    fn_801C24E4(s31);
}

void fn_801C2494(u32 p3, float q1) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1928;
    v2 = lbl_805E192C;
    s31 = p3;
    fn_8018E580(p3, 42, -1, 64, q1, v1, v2);
    M32((s31+1124)) = 101;
    fn_801C24E4(s31);
}

void fn_801C24E4(u32 p3) {
    fn_8019F894(p3, 102, 103);
}

void fn_801C250C(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+908));
    v2 = MF((v1+20));
    fn_801A0250(p3, 102, 103, v1, v2);
}

void fn_801C253C(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0300();
    c1 = fn_801C2628(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C2574(void) {
    fn_801A0348();
}

void fn_801C2594(void) {
    fn_801A0368();
}

void fn_801C2608(void) {
    fn_801A03A8();
}

u32 fn_801C2628(u32 p3) {
    u32 v1;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) == (s32)0) {
        fn_801C2660();
        return 1;
    }
    return 0;
}

void fn_801C2660(p3) u32 p3; {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1934;
    v2 = lbl_805E1930;
    s31 = p3;
    fn_8018E580(p3, 43, -1, 0, v1, v2, v1);
    fn_8019FBF4(s31);
}

void fn_801C26AC(u32 p3, float q1) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1930;
    v2 = lbl_805E1934;
    s31 = p3;
    fn_8018E580(p3, 43, -1, 0, q1, v1, v2);
    fn_8019FBF4(s31);
}

void fn_801C26F4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M32((s31+908));
    v2 = M32(v1);
    M32((s31+1216)) = v2;
    fn_801C19C8(s31, v1);
}

void fn_801C273C(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_8019FBF4();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C2774(void) {
    fn_80199C40();
}

void fn_801C2794(void) {
    fn_801C2594();
}

void fn_801C27B4(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_801C25B4();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C339C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801C303C(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C280C(void) {
    fn_801C2608();
}

void fn_801C282C(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1938;
    v2 = lbl_805E193C;
    fn_8018E580(p3, 44, -1, 0, v1, v2, v1);
}

void fn_801C2864(void) {
    fn_801A03F8();
}

void fn_801C2884(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_801A0470();
    c1 = fn_801A0430(s31);
    if ((s32)c1 != (s32)0) {
        fn_801C2660(s31);
        return;
    }
    c3 = fn_801A0444(s31);
    if ((s32)c3 == (s32)0) {
    return;
    }
    fn_801C2440(s31);
}

void fn_801C28E4(void) {
    fn_801A04B8();
}

void fn_801C2904(void) {
    fn_801A04D8();
}

void fn_801C2924(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A04DC();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C295C(void) {
    fn_801A04FC();
}

u32 fn_801C297C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194120();
    if ((s32)c0 == (s32)1) {
        fn_801C29C4(s31);
        return 1;
    }
    return 0;
}

void fn_801C29C4(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    u32 v3;
    v1 = lbl_805E1940;
    v2 = lbl_805E1944;
    s31 = p3;
    fn_8018E580(p3, 34, -1, 64, v1, v2, v1);
    v3 = M8((s31+2328));
    ((BFu8_0_1*)((s31+2328)))->f = 0;
    M32((s31+1124)) = 4;
    fn_8019FCA0(s31);
}

void fn_801C2B08(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_8019FCF0();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C2B40(void) {
    fn_8019FD38();
}

void fn_801C2B60(void) {
    fn_8019FD58();
}

void fn_801C2B80(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_8019FD5C();
    c1 = fn_801C36FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C38E8(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801C3A98(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_80194120(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    fn_801C2020(s31);
}

void fn_801C2BF4(void) {
    fn_8019FD7C();
}

u32 fn_801C2C14(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = M32((p3+908));
    v2 = MF((p3+920));
    v3 = MF((v1+16));
    if (v2 < (-v3)) {
        fn_801C2C58(p3, v1, v2);
        return 1;
    }
    return 0;
}

void fn_801C2CB8(u32 p3) {
    u32 v1;
    v1 = M32((p3+1448));
    if ((s32)v1 == (s32)0) {
    return;
    }
    M32((p3+1448)) = (v1-1);
    if ((s32)v1 != (s32)0) {
    return;
    }
}

void fn_801C2D58(void) {
    fn_8019FDE4();
}

void fn_801C2D78(void) {
    fn_8019FE04();
}

void fn_801C2D98(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_8019FE08();
    c1 = fn_801C36FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C38E8(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801C3A98(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_80194120(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    fn_801C2020(s31);
}

void fn_801C2E0C(void) {
    fn_8019FE28();
}

u32 fn_801C2E2C(u32 p3) {
    u32 v1;
    float v2;
    float v3;
    v1 = M32((p3+908));
    v2 = MF((p3+920));
    v3 = MF((v1+16));
    if (v2 > v3) {
        fn_801C2E6C(p3, v1, v2);
        return 1;
    }
    return 0;
}

void fn_801C2ECC(u32 p3) {
    u32 v1;
    v1 = M32((p3+1448));
    if ((s32)v1 == (s32)0) {
    return;
    }
    M32((p3+1448)) = (v1-1);
    if ((s32)v1 != (s32)0) {
    return;
    }
}

void fn_801C2F68(void) {
    fn_8019FDE4();
}

void fn_801C2F88(void) {
    fn_8019FE04();
}

void fn_801C2FA8(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    s31 = p3;
    fn_8019FE08();
    c1 = fn_801C36FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C38E8(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_801C3A98(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    c4 = fn_80194120(s31);
    if ((s32)c4 != (s32)0) {
    return;
    }
    fn_801C2020(s31);
}

void fn_801C301C(void) {
    fn_8019FE28();
}

u32 fn_801C303C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194144();
    if ((s32)c0 != (s32)0) {
        fn_801C3084(s31);
        return 1;
    }
    return 0;
}

void fn_801C3084(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1960;
    v2 = lbl_805E1964;
    s31 = p3;
    fn_8018E580(p3, 35, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 9;
    fn_8019FE48(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801C30E4(void) {
    fn_8019FE70();
}

void fn_801C3104(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FE98();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C3F40(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C3154(void) {
    fn_8019FEE0();
}

void fn_801C3174(void) {
    fn_8019FF00();
}

void fn_801C3194(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_8019FF04();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C297C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_80194144(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    fn_801C3218(s31);
}

void fn_801C31F8(void) {
    fn_8019FF24();
}

void fn_801C3218(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1968;
    v2 = lbl_805E196C;
    s31 = p3;
    fn_8018E580(p3, 36, -1, 0, v1, v2, v1);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801C3268(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C19C8(s31);
}

void fn_801C32A4(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FE98();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C3F40(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C32F4(void) {
    fn_8019FEE0();
}

void fn_801C3314(void) {
    fn_8019FF00();
}

void fn_801C3334(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_8019FF04();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C297C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801C337C(void) {
    fn_8019FF24();
}

u32 fn_801C339C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80194168();
    if ((s32)c0 != (s32)0) {
        fn_801C33E4(s31);
        return 1;
    }
    return 0;
}

void fn_801C33E4(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1970;
    v2 = lbl_805E1974;
    s31 = p3;
    fn_8018E580(p3, 37, -1, 64, v1, v2, v1);
    M32((s31+1124)) = 13;
    fn_8019FF44(s31);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801C3444(void) {
    fn_8019FF6C();
}

void fn_801C3464(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FF94();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C3F40(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C34B4(void) {
    fn_8019FFDC();
}

void fn_801C34D4(void) {
    fn_8019FFFC();
}

void fn_801C34F4(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    u32 c3;
    s31 = p3;
    fn_801A0000();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C297C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
    c3 = fn_80194168(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
    fn_801C3578(s31);
}

void fn_801C3558(void) {
    fn_801A0020();
}

void fn_801C3578(u32 p3) {
    float v1;
    float v2;
    u32 s31;
    v1 = lbl_805E1978;
    v2 = lbl_805E197C;
    s31 = p3;
    fn_8018E580(p3, 38, -1, 0, v1, v2, v1);
    M8((s31+2625)) = 254;
    M8((s31+2624)) = 254;
}

void fn_801C35C8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C19C8(s31);
}

void fn_801C3604(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_8019FF94();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C3F40(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C3654(void) {
    fn_8019FFDC();
}

void fn_801C3674(void) {
    fn_8019FFFC();
}

void fn_801C3694(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c2;
    s31 = p3;
    fn_801A0000();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    c2 = fn_801C297C(s31);
    if ((s32)c2 != (s32)0) {
    return;
    }
}

void fn_801C36DC(void) {
    fn_801A0020();
}

u32 fn_801C36FC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_801941D4();
    if ((s32)c0 != (s32)0) {
        fn_801C3744(s31);
        return 1;
    }
    return 0;
}

void fn_801C37B8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801C2020(s31);
        return;
    }
    fn_801A0040(s31);
}

void fn_801C3800(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_801A0044();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C3F40(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C3850(void) {
    fn_801A008C();
}

void fn_801C3870(void) {
    fn_801A00AC();
}

void fn_801C3890(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A00B0();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C38C8(void) {
    fn_801A00D0();
}

u32 fn_801C38E8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_801941B0();
    if ((s32)c0 != (s32)0) {
        fn_801C3930(s31);
        return 1;
    }
    return 0;
}

void fn_801C3930(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1988;
    v2 = lbl_805E198C;
    fn_8018E580(p3, 49, -1, 0, v1, v2, v1);
}

void fn_801C3968(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801C19C8(s31);
        return;
    }
    fn_801A00F0(s31);
}

void fn_801C39B0(u32 p3) {
    u32 s31;
    u32 c1;
    u32 c3;
    s31 = p3;
    fn_801A00F4();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
    fn_80191A58(s31);
    c3 = fn_801C3F40(s31);
    if ((s32)c3 != (s32)0) {
    return;
    }
}

void fn_801C3A00(void) {
    fn_801A013C();
}

void fn_801C3A20(void) {
    fn_801A015C();
}

void fn_801C3A40(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0160();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C3A78(void) {
    fn_801A0180();
}

u32 fn_801C3A98(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_8019418C();
    if ((s32)c0 != (s32)0) {
        fn_801C3AE0(s31);
        return 1;
    }
    return 0;
}

void fn_801C3AE0(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_80194240();
    v1 = lbl_805E1990;
    v2 = lbl_805E1994;
    v3 = M32((u32)lbl_804B0798+(c0<<2));
    fn_8018E580(s31, 50, v3, 0, v1, v2, v1);
}

void fn_801C3B38(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801C19C8(s31);
        return;
    }
    fn_801A01A0(s31);
}

void fn_801C3B80(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A01A4();
    c1 = fn_801C2268(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C3BB8(void) {
    fn_801A01EC();
}

void fn_801C3BD8(void) {
    fn_801A020C();
}

void fn_801C3BF8(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801A0210();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C3C30(void) {
    fn_801A0230();
}

u32 fn_801C3C50(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M8((p3+2083));
    if ((s32)((v1>>2)&0x1) == (s32)0) {
        if ((s32)((v1>>3)&0x1) == (s32)0) {
            c0 = fn_80194264(p3, v1);
            if ((s32)c0 != (s32)0) {
                fn_801C3CAC(s31);
                return 1;
            }
        }
    }
    return 0;
}

void fn_801C3CAC(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    u32 v5;
    s31 = p3;
    v1 = M8((p3+8));
    fn_8027A08C(v1);
    v2 = lbl_805E1998;
    v3 = lbl_805E199C;
    fn_8018E580(s31, 51, -1, 0, v2, v3, v2);
    v4 = M8((s31+2083));
    ((BFu8_4_1*)((s31+2083)))->f = 1;
    v5 = M8((s31+8));
    fn_80231020(v5);
}

void fn_801C3D14(void) {
    u32 c0;
    c0 = fn_801C3DD8();
    if ((s32)c0 != (s32)0) {
    return;
    }
}

void fn_801C3D38(void) {
    fn_801A051C();
}

void fn_801C3D58(void) {
    fn_801A0520();
}

void fn_801C3D78(void) {
    fn_801A0540();
}

void fn_801C3D98(void) {
    fn_801A0544();
}

void fn_801C3DB8(void) {
    fn_801A0564();
}

void fn_801C3E20(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E19A0;
    v2 = lbl_805E19A4;
    fn_8018E580(p3, 52, -1, 0, v1, v2, v1);
}

void fn_801C3E58(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 != (s32)0) {
        fn_801C19C8(s31);
        return;
    }
    fn_801A0618(s31);
}

void fn_801C3EA0(void) {
    fn_801A061C();
}

void fn_801C3EC0(void) {
    fn_801A0620();
}

void fn_801C3EE0(void) {
    fn_801A0640();
}

void fn_801C3F00(void) {
    fn_801A0644();
}

void fn_801C3F20(void) {
    fn_801A0664();
}

u32 fn_801C3F40(u32 p3) {
    u32 loc8[1];
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_80191980(p3, ((u32)loc8));
    if ((s32)c0 != (s32)0) {
        v1 = M32(((u32)loc8));
        fn_801C3F90(s31, v1);
        return 1;
    }
    return 0;
}

void fn_801C4004(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B00(v1);
    if ((s32)c0 != (s32)0) {
    return;
    }
    fn_801C19C8(s31);
}

void fn_801C4044(void) {
    fn_801C4224();
}

void fn_801C4064(void) {
    fn_801C4244();
}

void fn_801C4084(void) {
    fn_801C4264();
}

void fn_801C40A4(u32 p3) {
    u32 s31;
    u32 c1;
    s31 = p3;
    fn_801C4284();
    c1 = fn_801C40FC(s31);
    if ((s32)c1 != (s32)0) {
    return;
    }
}

void fn_801C40DC(void) {
    fn_801C42A4();
}

u32 fn_801C40FC(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B58(v1);
    if ((s32)c0 != (s32)0) {
        v2 = M32((s31+1012));
        fn_801C4178(s31, fn_801C812C(v2));
        return 1;
    }
    return 0;
}

void fn_801C4154(u32 p3) {
    u32 v1;
    v1 = M32(p3);
    fn_801A20C4(v1);
}

void fn_801C41E4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+1012));
    c0 = fn_801C7B2C(v1);
    if ((s32)c0 != (s32)0) {
    return;
    }
    fn_801C42C4(s31);
}

void fn_801C4224(void) {
    fn_80190C54();
}

void fn_801C4244(void) {
    fn_80199C40();
}

void fn_801C4264(void) {
    fn_8019FC5C();
}

void fn_801C4284(void) {
    fn_8019FC60();
}

void fn_801C42A4(void) {
    fn_8019FC80();
}

void fn_801C430C(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C19C8(s31);
}

void fn_801C4348(void) {
    fn_801C4224();
}

void fn_801C4368(void) {
    fn_801C4244();
}

void fn_801C4388(void) {
    fn_801C4264();
}

void fn_801C43A8(void) {
    fn_801C4284();
}

void fn_801C43C8(void) {
    fn_801C42A4();
}

void fn_801C43E8(u32 p3, u32 p4) {
    fn_80196710(p3, p4, (p3+2088));
}

void fn_801C444C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_8019F238();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M8((s31+2340));
    if ((s32)((v1>>6)&0x1) == (s32)0) {
    return;
    }
    v2 = M32((s31+2332));
    if ((s32)v2 == (s32)0) {
    return;
    }
    M32((s31+2332)) = (v2-1);
    if ((s32)v2 != (s32)0) {
    return;
    }
}

void fn_801C44A0(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_8019F238();
    if ((s32)c0 == (s32)0) {
    return;
    }
    v1 = M8((s31+2340));
    if ((s32)((v1>>6)&0x1) == (s32)0) {
    return;
    }
    fn_801C1740(s31);
}

void fn_801C45C0(u32 p3) {
    u32 v1;
    v1 = M8((p3+2340));
    ((BFu8_0_1*)((p3+2340)))->f = 1;
}

void fn_801C45D4(u32 p3) {
    u32 v1;
    v1 = M8((p3+2340));
    ((BFu8_0_1*)((p3+2340)))->f = 1;
    M32((p3+2024)) = 0;
}

void fn_801C45F0(u32 p3) {
    u32 v1;
    v1 = M8((p3+2340));
    ((BFu8_0_1*)((p3+2340)))->f = 1;
    M32((p3+2044)) = 0;
}

void fn_801C469C(void) {
    fn_801C4B10();
}

void fn_801C46BC(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    u32 v3;
    float v4;
    u32 v5;
    s31 = p3;
    v1 = M32((p3+984));
    if ((s32)(v1&0x100) != (s32)0) {
        M32((s31+2336)) = 5;
    } else {
        M32((s31+2336)) = 0;
    }
    v2 = lbl_805E19C0;
    v3 = M32((s31+2336));
    v4 = lbl_805E19C4;
    fn_8018E580(s31, 53, (v3+112), 0, v2, v4, v2);
    M32((s31+1100)) = 0;
    M32((s31+1096)) = 0;
    v5 = M8((s31+2340));
    ((BFu8_0_1*)((s31+2340)))->f = 1;
}

void fn_801C4744(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C4820(s31);
}

void fn_801C4780(void) {
    fn_8019F37C();
}

void fn_801C47A0(void) {
    fn_8019F39C();
}

void fn_801C47C0(void) {
    fn_8019F3BC();
}

void fn_801C47E0(void) {
    fn_8019F3DC();
}

void fn_801C4800(void) {
    fn_8019F3FC();
}

void fn_801C48AC(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C499C(s31);
}

void fn_801C48E8(void) {
    fn_8019F37C();
}

void fn_801C4908(void) {
    fn_8019F39C();
}

void fn_801C4928(void) {
    fn_8019F3BC();
}

void fn_801C4948(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F3DC();
    fn_8019E78C(s31);
}

void fn_801C497C(void) {
    fn_8019F3FC();
}

void fn_801C4A20(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p3;
    c0 = fn_80198B00();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C45C0(s31);
    fn_801C19C8(s31);
    v1 = M32((s31+908));
    v2 = M32((v1+24));
    M32((s31+2332)) = v2;
}

void fn_801C4A70(void) {
    fn_8019F37C();
}

void fn_801C4A90(void) {
    fn_8019F39C();
}

void fn_801C4AB0(void) {
    fn_8019F3BC();
}

void fn_801C4AD0(void) {
    fn_8019F3DC();
}

void fn_801C4AF0(void) {
    fn_8019F3FC();
}

void fn_801C4C08(void) {
    fn_8019F37C();
}

void fn_801C4C28(void) {
    fn_8019F39C();
}

void fn_801C4C48(void) {
    fn_8019F3BC();
}

void fn_801C4C68(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_8019F3DC();
    fn_8019E78C(s31);
}

void fn_801C4C9C(void) {
    fn_8019F3FC();
}

void fn_801C4D88(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+2056));
    if ((u32)v1 != (u32)0) {
        v2 = M8((s31+2340));
        ((BFu8_0_1*)((s31+2340)))->f = 0;
        M32((s31+2056)) = 0;
    }
    c0 = fn_80198B00(s31);
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_801C45C0(s31);
    fn_801C19C8(s31);
    v3 = M32((s31+908));
    v4 = M32((v3+24));
    M32((s31+2332)) = v4;
}

void fn_801C4DFC(void) {
    fn_8019F37C();
}

void fn_801C4E1C(void) {
    fn_8019F39C();
}

void fn_801C4E3C(void) {
    fn_8019F3BC();
}

void fn_801C4E5C(void) {
    fn_8019F3DC();
}

void fn_801C4E7C(void) {
    fn_8019F3FC();
}

void fn_801C4E9C(u32 p3) {
    u32 v1;
    v1 = M8((p3+2087));
    ((BFu8_0_1*)((p3+2087)))->f = 1;
}

void fn_801C4EB0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+1096));
    v2 = M32((p3+1100));
    fn_8019E72C(v1, v2);
}

void fn_801C65A8(u32 p3) {
    u32 s31;
    u32 v2;
    float v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 c5;
    u32 c6;
    s31 = M32((p3+44));
    fn_801CEA60(s31);
    v2 = M8((s31+3132));
    v3 = lbl_805E19C8;
    ((BFu8_3_1*)((s31+3132)))->f = 0;
    v4 = M8((s31+3132));
    ((BFu8_5_1*)((s31+3132)))->f = 0;
    MF((s31+1880)) = v3;
    v5 = M32((s31+3040));
    if ((u32)v5 != (u32)0) {
        ((void (*)())(v5))(s31);
    }
    v6 = M32((s31+16));
    v7 = M32((u32)&lbl_805D6F98+(v6<<2));
    v8 = M32((v7+52));
    if ((u32)v8 != (u32)0) {
        ((void (*)())(v8))(s31);
    }
    fn_801CE810(s31);
    fn_801E6464(s31);
    c5 = fn_801E5108(s31);
    if ((s32)c5 != (s32)0) {
    return;
    }
    c6 = fn_801E4610(s31);
    if ((s32)c6 != (s32)0) {
    return;
    }
}

void fn_801C6668(u32 p3) {
    u32 s31;
    u32 v2;
    s31 = M32((p3+44));
    v2 = M32((s31+3044));
    if ((u32)v2 != (u32)0) {
        ((void (*)())(v2))(s31);
    }
    fn_801E5014(s31);
    fn_801C9074(s31);
    fn_801CBAC8(s31);
    fn_801CBA00(s31);
    fn_801C98C4(s31);
}

void fn_801C67A0(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    s31 = M32((p3+44));
    v2 = M8((s31+3121));
    if ((s32)((v2>>7)&0x1) != (s32)0) {
    return;
    }
    v3 = M32((s31+1632));
    fn_8018CF64(v3);
    fn_801D6FD0(s31);
    fn_801D706C(s31);
    fn_801D7118(s31);
    fn_801D71EC(s31);
    fn_801D7248(s31);
    fn_801D72A4(s31);
    fn_801DAAC4(s31);
    fn_801DAD58(s31);
    fn_801DBA74(s31);
    v4 = M32((s31+1632));
    fn_8018D878(v4);
    fn_801D7308(s31);
}

void fn_801C69F0(u32 p3) {
    u32 s31;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    s31 = M32((p3+44));
    v2 = MF((s31+1000));
    v3 = MF((s31+1012));
    MF((s31+852)) = (v2-v3);
    v4 = MF((s31+1004));
    v5 = MF((s31+1016));
    MF((s31+856)) = (v4-v5);
    v6 = MF((s31+1008));
    v7 = MF((s31+1020));
    MF((s31+860)) = (v6-v7);
    *(S12*)((s31+1012)) = *(S12*)((s31+1000));
    v8 = MF((s31+876));
    v9 = MF((s31+888));
    MF((s31+864)) = (v8-v9);
    v10 = MF((s31+880));
    v11 = MF((s31+892));
    MF((s31+868)) = (v10-v11);
    v12 = MF((s31+884));
    v13 = MF((s31+896));
    MF((s31+872)) = (v12-v13);
    *(S12*)((s31+888)) = *(S12*)((s31+876));
    *(S12*)((s31+1036)) = *(S12*)((s31+1024));
    *(S12*)((s31+948)) = *(S12*)((s31+936));
    v14 = M32((s31+960));
    M32((s31+964)) = v14;
    *(S12*)((s31+980)) = *(S12*)((s31+968));
    v15 = M32((s31+992));
    M32((s31+996)) = v15;
    v16 = M8((s31+3120));
    ((BFu8_0_1*)((s31+3120)))->f = (v16>>6);
    *(S12*)((s31+1828)) = *(S12*)((s31+1848));
    v17 = M32((s31+1844));
    M32((s31+1840)) = v17;
    fn_801E0D8C(s31, v12);
    fn_801D10D4(s31);
    fn_801DB320(s31);
}

u32 vcLoadCommon(void) {
    u32 loc8[2];
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    lbLoadArchive(0, (u32)lbl_804B080C, ((u32)loc8), (u32)lbl_804B081C, 0);
    v1 = M32(((u32)loc8));
    lbl_805DD838 = v1;
    v2 = M32(v1);
    lbl_805DD848 = v2;
    v3 = M32((v1+8));
    lbl_805DD840 = v3;
    v4 = M32((v1+12));
    lbl_805DD83C = v4;
    v5 = M32((v1+16));
    lbl_805DD844 = v5;
    return v1;
}

void fn_801C6E3C(u32 p3) {
    u32 loc8[2];
    M32(((u32)loc8)) = 0;
    fn_80072C90(2, p3, 4, 4, 0, 1, 4, 2);
}

void fn_801C71A8(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = HSD_ObjAlloc((u32)lbl_8055A03C);
    M32((s31+1616)) = c0;
}

u32 fn_801C7534(u32 p3) {
    u32 v1;
    v1 = M16(p3);
    return (v1 == 16);
}

void fn_801C7548(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+1000));
}

void fn_801C7568(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+1060));
}

float fn_801C7588(u32 p3) {
    u32 v1;
    u32 v2;
    u32 s31;
    float v4;
    v1 = M32((p3+44));
    v2 = M32((v1+788));
    s31 = M32((v2+8));
    if ((u32)s31 == (u32)0) {
        __assert((u32)&lbl_805D6FB8, 776, (u32)&lbl_805D6FC0);
    }
    v4 = MF((s31+36));
    return v4;
}

void fn_801C75D4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+1048));
}

u32 fn_801C75F4(u32 p3, u32 p4, float q1, float q2) {
    u32 v1;
    v1 = M32((p3+44));
    MF((v1+1636)) = q1;
    MF((v1+1640)) = q2;
    M32((v1+1644)) = p4;
    return v1;
}

void fn_801C7608(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+804));
}

void fn_801C7648(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+876));
}

float fn_801C7668(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+44));
    v2 = MF((v1+1932));
    return v2;
}

void fn_801C7674(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801CC238(v1);
}

void fn_801C7698(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+48));
    if ((s32)v2 == (s32)4) {
    return;
    }
    fn_801E1E84(v1);
}

void fn_801C76C8(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E0E28(v1);
}

void fn_801C76EC(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801D6C50(v1);
}

u32 fn_801C7710(u32 p3, u32 p4, u32 p5, float q1, float q2, float q3, float q4) {
    u32 v1;
    v1 = M32((p3+44));
    MF((v1+6984)) = q1;
    MF((v1+6988)) = q2;
    MF((v1+6992)) = q3;
    MF((v1+6996)) = q4;
    M32((v1+7000)) = p4;
    M32((v1+7004)) = p5;
    return v1;
}

u32 fn_801C7730(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M32((v1+48));
    if ((s32)v2 == (s32)4) {
        fn_801CC238(v1);
        return 1;
    }
    v3 = M32((v1+2808));
    if ((u32)v3 == (u32)0) {
        fn_801D262C(v1);
        return 1;
    }
    return 0;
}

void fn_801C7784(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+1024));
}

void fn_801C77A4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801CAA08(v1);
}

u32 fn_801C7AD4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    return (v2&0x1);
}

u32 fn_801C7AE4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    return ((v2>>7)&0x1);
}

float fn_801C7AF4(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+44));
    v2 = MF((v1+6984));
    return v2;
}

u32 fn_801C7B00(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        v3 = M8((v1+7092));
        if ((s32)((v3>>5)&0x1) != (s32)0) {
            return 1;
        }
    }
    return 0;
}

u32 fn_801C7B2C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        v3 = M8((v1+7092));
        if ((s32)((v3>>4)&0x1) != (s32)0) {
            return 1;
        }
    }
    return 0;
}

u32 fn_801C7B58(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        v3 = M8((v1+7092));
        if ((s32)((v3>>4)&0x1) != (s32)0) {
            v4 = M32((v1+7084));
            if ((s32)v4 != (s32)0) {
                M32((v1+7084)) = 0;
                return 1;
            }
        }
    }
    return 0;
}

u32 fn_801C7B98(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        v3 = M8((v1+7092));
        if ((s32)((v3>>6)&0x1) != (s32)0) {
            return 1;
        }
    }
    return 0;
}

u32 fn_801C7BC4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        v3 = M8((v1+7092));
        if ((s32)((v3>>6)&0x1) != (s32)0) {
            v4 = M32((v1+7084));
            if ((s32)v4 != (s32)0) {
                M32((v1+7084)) = 0;
                return 1;
            }
        }
    }
    return 0;
}

u32 fn_801C7C04(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        v3 = M8((v1+7092));
        if ((s32)((v3>>7)&0x1) != (s32)0) {
            return 1;
        }
    }
    return 0;
}

u32 fn_801C7C30(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        v3 = M8((v1+7092));
        if ((s32)((v3>>7)&0x1) != (s32)0) {
            v4 = M32((v1+7084));
            if ((s32)v4 != (s32)0) {
                M32((v1+7084)) = 0;
                return 1;
            }
        }
    }
    return 0;
}

u32 fn_801C7C70(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+1876));
    return v2;
}

u32 fn_801C7C7C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+16));
    return v2;
}

u32 fn_801C7C88(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+36));
    return v2;
}

u32 fn_801C7C94(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3120));
    return ((v2>>6)&0x1);
}

u32 fn_801C7CA4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3122));
    return ((v2>>4)&0x1);
}

void fn_801C7CB4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+1948));
}

void fn_801C7CD4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+2000));
}

void fn_801C7CF4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801CAA40(v1);
}

u32 fn_801C7D18(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    return v2;
}

u32 fn_801C7D24(u32 p3) {
    u32 v1;
    u32 v2;
    u32 c0;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    if ((u32)v2 != (u32)0) {
        c0 = fn_80191F68(v2);
        return c0;
    }
    return 255;
}

float fn_801C7D5C(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    float d0;
    v1 = M32((p3+44));
    v2 = M32((v1+16));
    if ((s32)v2 == (s32)1) {
        d0 = fn_801F5C14(v1);
        return d0;
    }
    v3 = lbl_805E19E8;
    return v3;
}

u32 fn_801C7D94(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3122));
    return (v2&0x1);
}

u32 fn_801C7DA4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    return ((v2>>7)&0x1);
}

u32 fn_801C7DB4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    return ((v2>>6)&0x1);
}

u32 fn_801C7DC4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    return ((v2>>5)&0x1);
}

u32 fn_801C7DD4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    return ((v2>>4)&0x1);
}

u32 fn_801C7DE4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3125));
    return ((v2>>2)&0x1);
}

u32 fn_801C7DF4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3125));
    return ((v2>>1)&0x1);
}

u32 fn_801C7E04(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+25));
    return (((5-v2)|(v2-5))>>31);
}

u32 fn_801C7E20(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3121));
    return ((v2>>1)&0x1);
}

u32 fn_801C7E30(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+2848));
    return v2;
}

u32 fn_801C7E3C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+2852));
    return v2;
}

u32 fn_801C7E48(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+2856));
    return v2;
}

float fn_801C7E54(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+44));
    v2 = MF((v1+1136));
    return v2;
}

void fn_801C7E60(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+2812));
}

void fn_801C7E80(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+2824));
}

u32 fn_801C7ED4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    return ((v2>>3)&0x1);
}

u32 fn_801C7EE4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3126));
    return ((v2>>3)&0x1);
}

u32 fn_801C7EF4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    return ((v2>>3)&0x1);
}

u32 fn_801C7F04(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    return ((v2>>2)&0x1);
}

u32 fn_801C7F14(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3126));
    return ((v2>>2)&0x1);
}

u32 fn_801C7F24(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    return ((v2>>1)&0x1);
}

u32 fn_801C7F34(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    return ((v2>>6)&0x1);
}

u32 fn_801C7F44(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>6)&0x1) != (s32)0) {
        v3 = M32((v1+7080));
        if ((s32)v3 != (s32)0) {
            M32((v1+7080)) = 0;
            return 1;
        }
    }
    return 0;
}

u32 fn_801C7F78(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+7084));
    return v2;
}

u32 fn_801C7F84(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+7088));
    return v2;
}

u32 fn_801C7F90(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+7092));
    return v2;
}

u32 fn_801C7F9C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+7076));
    return v2;
}

float fn_801C7FA8(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+44));
    v2 = MF((v1+7096));
    return v2;
}

u32 fn_801C7FD4(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+2836));
    return v2;
}

void fn_801C7FE0(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)(p4) = *(S12*)((v1+2052));
}

u32 fn_801C8000(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3122));
    return ((v2>>1)&0x1);
}

u32 fn_801C8010(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801CE590(v1);
}

void fn_801C8034(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E1908(v1);
}

void fn_801C8058(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E1D64(v1, 0);
}

void fn_801C8080(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E2FDC(v1);
}

void fn_801C80A4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E3040(v1);
}

void fn_801C80C8(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E32F8(v1);
}

void fn_801C80EC(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E3098(v1);
}

u32 fn_801C8110(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    return (((-(s32)((v2>>4)&0x1))|((v2>>4)&0x1))>>31);
}

u32 fn_801C812C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+7080));
    return v2;
}

float fn_801C8138(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    float v4;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    if ((s32)((v2>>4)&0x1) != (s32)0) {
        v3 = MF((v1+180));
        return v3;
    }
    v4 = lbl_805E19E8;
    return v4;
}

void fn_801C8158(u32 p3) {
    float v1;
    u32 s31;
    v1 = lbl_805E19E8;
    s31 = M32((p3+44));
    MF((s31+2380)) = v1;
    MF((s31+2384)) = v1;
    MF((s31+2388)) = v1;
    MF((s31+2392)) = v1;
    MF((s31+2396)) = v1;
    MF((s31+2400)) = v1;
    MF((s31+2404)) = v1;
    MF((s31+2408)) = v1;
    MF((s31+2412)) = v1;
    M32((s31+2976)) = -1;
    fn_801C7278(s31);
    fn_801D5CE4(s31);
}

void cityTrial_getMasterStats(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S36*)(p4) = *(S36*)((v1+2380));
}

void fn_801C8210(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801CACF4(v1);
}

void fn_801C8234(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801CADDC(v1);
}

void fn_801C8258(u32 p3) {
    u32 s31;
    s31 = M32((p3+44));
    fn_801E098C((s31+2536));
    fn_801C7278(s31);
}

void fn_801C8290(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    *(S36*)(p4) = *(S36*)((v1+2536));
}

u32 fn_801C82E0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+8));
    return v2;
}

u32 fn_801C82EC(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    v1 = M32((p3+44));
    M32((v1+8)) = p4;
    return v1;
}

float fn_801C8404(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+44));
    v2 = MF((v1+1228));
    return v2;
}

float fn_801C8410(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32((p3+44));
    v2 = MF((v1+2584));
    return v2;
}

u32 fn_801C841C(u32 p3, float q1) {
    u32 v1;
    v1 = M32((p3+44));
    MF((v1+2584)) = q1;
    return v1;
}

void fn_801C8428(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E40A0(v1, p4, 0, -1, 0);
}

void fn_801C8458(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E40A0(v1, p4, 0, p5, 1);
}

void fn_801C8488(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801E4FC8(v1);
}

u32 fn_801C84AC(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3127));
    return ((v2>>1)&0x1);
}

float fn_801C84BC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    float d0;
    v1 = M32((p3+44));
    v2 = M32((v1+16));
    v3 = M32((u32)&lbl_805D6F98+(v2<<2));
    v4 = M32((v3+140));
    if ((u32)v4 != (u32)0) {
        d0 = ((float (*)())(v4))(v1, v3);
        return d0;
    }
    v5 = lbl_805E19E8;
    return v5;
}

u32 fn_801C8508(u32 p3) {
    u32 v1;
    if ((u32)p3 != (u32)0) {
        v1 = M16(p3);
        if ((u32)v1 == (u32)16) {
            return 1;
        }
    }
    return 0;
}

u32 fn_801C852C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    return ((v2>>1)&0x1);
}

u32 fn_801C853C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3124));
    return (v2&0x1);
}

u32 fn_801C854C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3125));
    return ((v2>>7)&0x1);
}

u32 fn_801C855C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3125));
    return ((v2>>6)&0x1);
}

u32 fn_801C856C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3125));
    return ((v2>>5)&0x1);
}

void fn_801C857C(u32 p3, u32 p4, u32 p5) {
    if ((s32)p3 < (s32)19) {
        M32(p4) = 0;
        M8(p5) = p3;
        return;
    }
    M32(p4) = 1;
    M8(p5) = (p3-19);
}

u32 fn_801C85BC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M32((v1+16));
    v3 = M8((v1+36));
    if ((s32)v2 != (s32)1) {
    return v3;
    }
    if ((s32)v2 != (s32)1) {
    return (v3+19);
    }
    return (v3+19);
}

u32 fn_801C85D8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    if ((s32)((v2>>1)&0x1) != (s32)0) {
        v3 = M32((v1+6984));
        return v3;
    }
    return -1;
}

float fn_801C85F8(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    float v4;
    v1 = M32((p3+44));
    v2 = M8((v1+3123));
    if ((s32)((v2>>1)&0x1) != (s32)0) {
        v3 = MF((v1+6988));
        return v3;
    }
    v4 = lbl_805E19E8;
    return v4;
}

void fn_801C8618(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801CE954(v1);
}

void fn_801C863C(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801D297C(v1);
}

u32 fn_801C8660(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+1632));
    return v2;
}

void fn_801C866C(void) {
    fn_801E02E8();
}

float fn_801C868C(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801D7E28(v1);
}

u32 fn_801C8708(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    return (v1+2988);
}

void fn_801C8714(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    float v2;
    v1 = M32((p3+44));
    v2 = lbl_805E19E8;
    MF((p5+8)) = v2;
    MF((p5+4)) = v2;
    MF(p5) = v2;
    *(S12*)(p4) = *(S12*)((v1+1720));
}

void fn_801C8744(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801945F8((v1+1716));
}

void fn_801C876C(void) {
    fn_80194B30();
}

u32 fn_801C878C(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+20));
    return v2;
}

u32 fn_801C8798(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3125));
    return ((v2>>3)&0x1);
}

u32 fn_801C87A8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3125));
    return (v2&0x1);
}

u32 fn_801C87B8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3126));
    return ((v2>>7)&0x1);
}

u32 fn_801C87C8(u32 p3, float q1) {
    u32 v1;
    v1 = M32((p3+44));
    MF((v1+2876)) = q1;
    return v1;
}

void fn_801C87D4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801CB074(v1);
}

void fn_801C87F8(u32 p3) {
    u32 s31;
    s31 = M32((p3+44));
    fn_801CAEE4(s31);
    fn_801C7278(s31);
}

u32 fn_801C89D8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3128));
    ((BFu8_5_1*)((v1+3128)))->f = 1;
    return v1;
}

u32 fn_801C89F0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3128));
    ((BFu8_5_1*)((v1+3128)))->f = 0;
    return v1;
}

void fn_801C8A08(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = M32((p3+44));
    v2 = M32((v1+2964));
    M32((v1+2960)) = v2;
    v3 = lbl_805DE340;
    if ((u32)v3 != (u32)0) {
        v4 = M8((v3+12));
        if ((u32)v4 > (u32)4) {
            v5 = M32((v1+2960));
            M32((v1+2960)) = (v5+1);
        }
    }
    v6 = lbl_805DD848;
    v7 = M32((v6+32));
    fn_801D3AF4(v1, v7);
}

u32 fn_801C8A60(u32 p3, u32 p4, float q1) {
    u32 v1;
    v1 = M32((p3+44));
    M32((v1+2964)) = p4;
    MF((v1+2968)) = q1;
    return v1;
}

void fn_801C8BA8(u32 p3) {
    u32 s31;
    u32 v2;
    s31 = M32((p3+44));
    v2 = M32((s31+60));
    fn_801D4638(s31, v2);
    fn_801D40B8(s31);
}

void fn_801C8BE4(u32 p3) {
    u32 v1;
    v1 = M32((p3+44));
    fn_801D4038(v1);
}

u32 fn_801C8C08(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3132));
    return ((v2>>6)&0x1);
}

u32 fn_801C8C38(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+32));
    return v2;
}

u32 fn_801C8C44(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M8((v1+3131));
    return ((v2>>4)&0x1);
}

u32 fn_801C8C54(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((p3+44));
    v2 = M32((v1+2024));
    return v2;
}

u32 fn_801C8C60(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+44));
    M32((v1+2024)) = p4;
    return v1;
}

void fn_801C8C6C(void) {
    vcLoadVehicleArchive();
}

void fn_801C8C8C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = p4;
    s30 = p3;
    v1 = M32((u32)lbl_804B07E0+(s30<<3));
    fn_801C6E3C(v1);
    v2 = M32((u32)&lbl_805D6F90+(s30<<2));
    v3 = M32(v2+(s31<<3));
    fn_801C6E3C(v3);
}

void fn_801C8E50(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805E1A00;
    s31 = p3;
    MF((p3+812)) = v1;
    MF((p3+808)) = v1;
    MF((p3+804)) = v1;
    MF((p3+932)) = v1;
    fn_801C8F14();
    fn_801C8EC8(s31);
    fn_801C8F40(s31);
    v2 = M32((s31+16));
    v3 = M32((u32)&lbl_805D6F98+(v2<<2));
    v4 = M32((v3+20));
    if ((u32)v4 == (u32)0) {
    return;
    }
    ((void (*)())(v4))(s31);
}

void fn_801C8EC8(u32 p3) {
    float v1;
    v1 = lbl_805E1A00;
    MF((p3+836)) = v1;
    MF((p3+832)) = v1;
    MF((p3+828)) = v1;
}

void fn_801C8EDC(u32 p3) {
    float v1;
    v1 = lbl_805E1A00;
    MF((p3+1640)) = v1;
    MF((p3+1636)) = v1;
    M32((p3+1644)) = 0;
}

void fn_801C8EF4(u32 p3) {
    float v1;
    v1 = lbl_805E1A00;
    MF((p3+1640)) = v1;
    MF((p3+1636)) = v1;
    M32((p3+1644)) = 0;
    M8((p3+1649)) = 0;
    M8((p3+1648)) = 0;
}

void fn_801C8F40(u32 p3) {
    float v1;
    v1 = lbl_805E1A00;
    MF((p3+824)) = v1;
    MF((p3+820)) = v1;
    MF((p3+816)) = v1;
    MF((p3+944)) = v1;
    MF((p3+940)) = v1;
    MF((p3+936)) = v1;
    M32((p3+960)) = -1;
    MF((p3+976)) = v1;
    MF((p3+972)) = v1;
    MF((p3+968)) = v1;
    M32((p3+992)) = -1;
    MF((p3+848)) = v1;
    MF((p3+844)) = v1;
    MF((p3+840)) = v1;
}

void fn_801C8F84(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 v1;
    s31 = p4;
    s30 = p3;
    fn_80062CA4(p5, (s30+1060));
    fn_80062DD0((s30+1060), s31, (s30+1072));
    fn_80062DD0((s30+1072), (s30+1060), (s30+1048));
    v1 = M8((s30+3120));
    ((BFu8_7_1*)((s30+3120)))->f = 1;
    fn_801C9308(s30);
}

void fn_801C8FFC(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 v1;
    s31 = p5;
    s30 = p3;
    fn_80062CA4(p4, (s30+1048));
    fn_80062DD0(s31, (s30+1048), (s30+1072));
    fn_80062DD0((s30+1048), (s30+1072), (s30+1060));
    v1 = M8((s30+3120));
    ((BFu8_7_1*)((s30+3120)))->f = 1;
    fn_801C9308(s30);
}

void fn_801C9074(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    u32 v5;
    u32 v6;
    s31 = p3;
    v1 = M8((p3+3130));
    if ((s32)((v1>>1)&0x1) != (s32)0) {
    return;
    }
    v2 = MF((s31+784));
    v3 = MF((s31+1128));
    v4 = M32((s31+788));
    v5 = M32(v4);
    fn_80054414(v5, (s31+1048), (s31+1060), (s31+1000), (v2*v3));
    v6 = M8((s31+3120));
    ((BFu8_7_1*)((s31+3120)))->f = 0;
}

float fn_801C90DC(float q1, float q2) {
    float v1;
    u32 v2;
    float v3;
    v1 = lbl_805E1A04;
    v2 = lbl_805DD848;
    v3 = MF(v2);
    return (q2/(v3*(v1*(q1*q1))));
}

void fn_801C98C4(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    float v4;
    float d0;
    s31 = p3;
    v1 = M8((p3+3130));
    if ((s32)((v1>>1)&0x1) != (s32)0) {
    return;
    }
    d0 = fn_800CEB18((s31+1000), (s31+1896));
    MF((s31+1892)) = d0;
    v2 = MF((s31+1896));
    MF((s31+1908)) = (-v2);
    v3 = MF((s31+1900));
    MF((s31+1912)) = (-v3);
    v4 = MF((s31+1904));
    MF((s31+1916)) = (-v4);
}

void fn_801CA2FC(u32 p3) {
    u32 v1;
    float v2;
    u32 v3;
    v1 = M8((p3+3122));
    ((BFu8_1_1*)((p3+3122)))->f = 1;
    v2 = lbl_805E1A08;
    v3 = M8((p3+3122));
    ((BFu8_3_1*)((p3+3122)))->f = 0;
    MF((p3+1932)) = v2;
    MF((p3+1944)) = v2;
    M32((p3+1936)) = 0;
    M32((p3+1940)) = 0;
}

void fn_801CA334(u32 p3, float q1) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    float v6;
    float v7;
    u32 v8;
    u32 v9;
    u32 v10;
    s31 = p3;
    v1 = M8((p3+3125));
    if ((s32)(v1&0x1) != (s32)0) {
    return;
    }
    v2 = M8((s31+3126));
    if ((s32)((v2>>7)&0x1) != (s32)0) {
    return;
    }
    v3 = M32((s31+1940));
    if ((s32)v3 != (s32)0) {
    return;
    }
    v4 = MF((s31+1932));
    v5 = lbl_805E1A08;
    if (v4 < v5) {
        MF((s31+1932)) = (v4+q1);
        v6 = MF((s31+1932));
        if (v6 > v5) {
            MF((s31+1932)) = v5;
            fn_801DD17C(p3, 3, v5, v5);
            fn_801D5CA0(s31, 29, 0);
        }
    }
    v7 = MF((s31+1932));
    MF((s31+1944)) = v7;
    v8 = M8((s31+3122));
    ((BFu8_1_1*)((s31+3122)))->f = 1;
    v9 = M8((s31+3122));
    ((BFu8_3_1*)((s31+3122)))->f = 0;
    v10 = M8((s31+3122));
    ((BFu8_2_1*)((s31+3122)))->f = 0;
}

u32 fn_801CA798(u32 p3, u32 p4, u32 p5) {
    u32 loc8[4];
    if ((s32)(fn_800CEF84(p4, ((u32)loc8))) != (s32)0) {
        fn_8006B048(p5, (fn_800CEFB4((M32((loc8))))), (MF(((s32)loc8+8))));
        fn_80062CA4(p5, p5);
        if ((s32)((M8((3122+p3))>>1)&0x1) != (s32)0) {
            MF(p5) = (-MF(p5));
            MF((4+p5)) = (-MF((4+p5)));
            MF((p5+8)) = (-MF((p5+8)));
        }
        return 1;
    }
    return 0;
}

u32 fn_801CA844(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 h4;
    u32 v4;
    float h2;
    float v3;
    u32 s29;
    u32 v1;
    u32 s30;
    u32 s28;
    u32 loc8[6];
    u32 s31;
    s30 = p6;
    s29 = p5;
    s28 = p3;
    if ((s32)(fn_800CEF84(p4, ((s32)loc8))) != (s32)0) {
        v1 = M32(((u32)loc8));
        s31 = fn_800CEFB4(v1);
        fn_8006B048(s29, s31, (MF(((u32)loc8+8))));
        v3 = MF(((u32)loc8+8));
        splArcLengthPoint(s30, s31, v3);
        fn_80062CA4(s29, s29);
        h4 = M8((3122+s28));
        v4 = h4;
        if ((s32)((v4>>1)&0x1) != 0) {
            MF(s29) = (-MF(s29));
            MF((s29+4)) = (-MF((s29+4)));
            h2 = MF((s29+8));
            MF((8+s29)) = (-h2);
        }
        return 1;
    }
    return 0;
}

void fn_801CA914(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+3080));
    if ((u32)v1 != (u32)0) {
        ((void (*)())(v1))();
    }
    v2 = M32((s31+3084));
    if ((u32)v2 == (u32)0) {
    return;
    }
    ((void (*)())(v2))(s31);
}

float fn_801CA9A8(u32 p3, u32 p4) {
    u32 v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float d0;
    v1 = M8((p3+3123));
    if ((s32)((v1>>1)&0x1) != (s32)0) {
        d0 = fn_801E4CC0();
        return d0;
    }
    v2 = MF((p3+804));
    v3 = MF(p4);
    MF((p3+804)) = (v2+v3);
    v4 = MF((p3+808));
    v5 = MF((p4+4));
    MF((p3+808)) = (v4+v5);
    v6 = MF((p3+812));
    v7 = MF((p4+8));
    MF((p3+812)) = (v6+v7);
    return v6;
}

u32 fn_801CAA40(p3) u32 p3; {
    u32 v1;
    u32 c0;
    v1 = M32((p3+4));
    if ((u32)v1 != (u32)0) {
        c0 = fn_8019203C(v1);
        return c0;
    }
    return 5;
}

float fn_801CAA74(u32 p3) {
    float v1;
    float v2;
    float v3;
    v1 = MF((p3+920));
    v2 = MF((p3+924));
    v3 = MF((p3+928));
    return (v3+(v1+v2));
}

#pragma push
#pragma #pragma #pragma #pragma #pragma #pragma #pragma opt_loop_invariants off
#pragma #pragma #pragma #pragma #pragma opt_lifetimes off
#pragma #pragma optimization_level 2
#pragma fp_contract on
float fn_801CAB94(u32 p3, float q1) {
    float v1;
    v1 = lbl_805E1A00;
    if (q1 != v1) {
        if (q1 > v1) {
            return (q1*(MF((p3+4))-v1)+v1);
        }
        return ((-q1)*(MF(p3)-v1)+v1);
    }
    return v1;
}
#pragma pop

void fn_801CACF4(u32 p3) {
    u32 s31;
    u32 v1;
    s31 = p3;
    fn_801E094C((s31+2380));
    fn_801D6668(s31);
    v1 = M8((s31+3131));
    if ((s32)((v1>>7)&0x1) != (s32)0) {
    return;
    }
    fn_801C7278(s31);
}

void fn_801CAD40(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    u32 v1;
    u32 s31;
    u32 v2;
    u32 c1;
    u32 c2;
    s30 = p4;
    s29 = p3;
    fn_801E096C((s29+2380));
    v1 = M32((s29+4));
    if ((u32)v1 != (u32)0) {
        c1 = fn_8019203C(v1);
        s31 = c1;
    } else {
        s31 = 5;
    }
    if ((s32)s31 != (s32)5) {
        c2 = fn_8022D024(s31);
        fn_8022D03C(s31, (s30+c2));
    }
    fn_801D6668(s29);
    v2 = M8((s29+3131));
    if ((s32)((v2>>7)&0x1) != (s32)0) {
    return;
    }
    fn_801C7278(s29);
}

void fn_801CADDC(u32 p3) {
    u32 s31;
    s31 = p3;
    fn_801E098C((s31+2380));
    fn_801D6668(s31);
    fn_801C73D0(s31);
}

void fn_801CAE1C(u32 p3) {
    float v1;
    v1 = lbl_805E1A00;
    MF((p3+2536)) = v1;
    MF((p3+2540)) = v1;
    MF((p3+2544)) = v1;
    MF((p3+2548)) = v1;
    MF((p3+2552)) = v1;
    MF((p3+2556)) = v1;
    MF((p3+2560)) = v1;
    MF((p3+2564)) = v1;
    MF((p3+2568)) = v1;
}

void fn_801CB074(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M8((s31+3126));
    ((BFu8_1_1*)((s31+3126)))->f = 0;
    v2 = M32((s31+1632));
    fn_8018CBE8(v2);
    fn_801D5E34(s31, 6);
}

u32 fn_801CB0C0(u32 p3) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 c0;
    s30 = 0;
    s29 = 0;
    s28 = p3;
    s31 = s28;
    do {
        v1 = M32((s31+2524));
        c0 = fn_801CB138(s28, v1);
        if ((s32)c0 == (s32)1) {
            s29 = 1;
        }
        s30 = (s30+1);
        s31 = (s31+4);
    } while ((s32)s30 < (s32)3);
    return s29;
}

void fn_801CB2BC(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    s31 = p3;
    s30 = p4;
    s29 = p5;
    fn_801C7278();
    switch ((s32)s30) {
    case 21:
        M32(((u32)s31+2524+(s29<<2))) = 42;
        break;
    case 22:
        M32(((u32)s31+2524+(s29<<2))) = 43;
        break;
    case 23:
        M32(((u32)s31+2524+(s29<<2))) = 40;
        break;
    case 24:
        M32(((u32)s31+2524+(s29<<2))) = 41;
        break;
    case 25:
        M32(((u32)s31+2524+(s29<<2))) = 44;
        break;
    case 26:
        M32(((u32)s31+2524+(s29<<2))) = 45;
    }
    s30 = 0;
    s29 = s31;
    do {
        v1 = M32((s29+2524));
        if ((s32)v1 != (s32)0) {
            fn_801D5CA0(s31, v1, 0);
        }
        s30 = (s30+1);
        s29 = (s29+4);
    } while ((s32)s30 < (s32)3);
}

float fn_801CB4A4(u32 p3) {
    float v1;
    float v2;
    float v3;
    v1 = MF((p3+2584));
    v2 = lbl_805E1A00;
    if (v1 != v2) {
    return v1;
    }
    v3 = MF((p3+1228));
    MF((p3+2584)) = v3;
    return v1;
}

float fn_801CB934(float q1, float q2) {
    float v1;
    float v2;
    v1 = lbl_805E1A00;
    if (q1 <= v1) {
        return v1;
    }
    if (q1 >= q2) {
        v2 = lbl_805E1A08;
        return v2;
    }
    return (q1/q2);
}

void fn_801CBA00(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32((p3+16));
    v2 = M32((p3+788));
    v3 = M32((u32)&lbl_805DD850+(v1<<2));
    v4 = M32((v3+4));
    v5 = M32(v4);
    v6 = M32(v2+(v5<<3));
    fn_80053F34(v6, 0, (p3+1024), (u32)&lbl_805DD850, v2);
}

void fn_801CBA4C(u32 p3) {
    float v1;
    float v2;
    v1 = lbl_805E1A00;
    v2 = lbl_805E1A08;
    fn_801C5DD4(p3, 0, -1, 0, v1, v2);
}

void fn_801CBA80(u32 p3) {
    u32 v1;
    v1 = M32((p3+4));
    fn_80192824(v1);
}

void fn_801CBAA4(u32 p3) {
    u32 v1;
    v1 = M32((p3+4));
    fn_8019286C(v1);
}

void fn_801CBE34(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD848;
    v2 = M32((v1+296));
    fn_801DAFAC(p3, v2);
}

void fn_801CC238(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+16));
    v2 = M32((u32)&lbl_805D6F98+(v1<<2));
    v3 = M32((v2+84));
    if ((u32)v3 == (u32)0) {
    return;
    }
    ((void (*)())(v3))(p3, v2);
}

void fn_801CC278(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M8((p3+3121));
    ((BFu8_0_1*)((p3+3121)))->f = 1;
    v2 = M8((p3+3129));
    ((BFu8_4_1*)((p3+3129)))->f = 1;
    v3 = M8((p3+3129));
    ((BFu8_5_1*)((p3+3129)))->f = 1;
}

float fn_801CC2A4(u32 p3, u32 p4) {
    float v1;
    float v2;
    float v3;
    float v4;
    v1 = MF((p3+1892));
    v2 = MF((p3+1896));
    MF(p4) = (v2*v1);
    v3 = MF((p3+1900));
    MF((p4+4)) = (v3*v1);
    v4 = MF((p3+1904));
    MF((p4+8)) = (v4*v1);
    return v1;
}

float fn_801CC2D0(u32 p3) {
    float v1;
    u32 v2;
    float v3;
    float v4;
    float v5;
    v1 = MF((p3+1468));
    v2 = lbl_805DD848;
    v3 = lbl_805E1A04;
    v4 = MF(v2);
    v5 = lbl_805E1A20;
    MF((p3+1780)) = (v5/(v4*(v3*(v1*v1))));
    return v3;
}

void fn_801CC378(u32 p3, float q1) {
    u32 v1;
    float g31;
    u32 s31;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    float v6;
    u32 v7;
    float v8;
    u32 v9;
    u32 v10;
    u32 v11;
    float v12;
    float v13;
    float v14;
    u32 v15;
    v1 = M8((p3+3125));
    g31 = q1;
    s31 = p3;
    if ((s32)(v1&0x1) == (s32)0) {
        v2 = M8((s31+3126));
        if ((s32)((v2>>7)&0x1) == (s32)0) {
            v3 = M32((s31+1940));
            if ((s32)v3 == (s32)0) {
                v4 = MF((s31+1932));
                v5 = lbl_805E1A08;
                if (v4 < v5) {
                    MF((s31+1932)) = (v4+g31);
                    v6 = MF((s31+1932));
                    if (v6 > v5) {
                        MF((s31+1932)) = v5;
                        v7 = M32((s31+1200));
                        M32((s31+1936)) = v7;
                        fn_801DD17C(p3, 3, v5);
                        fn_801D5CA0(s31, 29, 0);
                    }
                }
                v8 = MF((s31+1932));
                MF((s31+1944)) = v8;
                v9 = M8((s31+3122));
                ((BFu8_1_1*)((s31+3122)))->f = 1;
                v10 = M8((s31+3122));
                ((BFu8_3_1*)((s31+3122)))->f = 0;
                v11 = M8((s31+3122));
                ((BFu8_2_1*)((s31+3122)))->f = 1;
            }
        }
    }
    v12 = lbl_805E1A00;
    if (g31 == v12) {
    return;
    }
    v13 = lbl_805E1A08;
    v14 = MF((s31+1932));
    if (v13 == v14) {
    return;
    }
    v15 = M8((s31+3122));
    ((BFu8_4_1*)((s31+3122)))->f = 1;
}

float fn_801CC660(float q1, float q2) {
    float v1;
    u32 v2;
    float v3;
    v1 = lbl_805E1A04;
    v2 = lbl_805DD848;
    v3 = MF(v2);
    return (v3*((v1*q2)*(q1*q1)));
}

void fn_801CC680(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32((p3+16));
    v2 = M32((u32)&lbl_805D6F98+(v1<<2));
    v3 = M32((v2+136));
    if ((u32)v3 == (u32)0) {
    return;
    }
    if ((s32)v1 == (s32)0) {
        v4 = M8((p3+36));
        if ((u32)v4 == (u32)4) {
        return;
        }
        if ((u32)v4 == (u32)5) {
        return;
        }
        ((void (*)())(v3))(p3, v2, v1);
        return;
    }
    ((void (*)())(v3))(p3, v2, v1);
}

void fn_801CC6E8(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M8((p3+3120));
    ((BFu8_1_1*)((p3+3120)))->f = 0;
    v2 = M8((p3+3120));
    ((BFu8_2_1*)((p3+3120)))->f = 0;
}

void fn_801CC948(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 s31;
    float v4;
    u32 v5;
    float v6;
    u32 v7;
    u32 v8;
    float v9;
    float v10;
    float ph1;
    float d0;
    s30 = p3;
    v1 = M32((p3+4));
    v2 = M32((s30+44));
    s31 = M32((v2+12));
    if ((u32)v1 != (u32)0) {
        d0 = fn_80192908(v1, v2);
        ph1 = d0;
    } else {
        v4 = MF(s31);
        ph1 = v4;
    }
    v5 = M32((s30+1784));
    v6 = MF((s30+1132));
    fn_80245C10(v5, (s30+1000), (s30+1084), (s30+1096), (s31+4), 0, ph1, v6);
    v7 = M32((s30+1784));
    fn_802463A8(v7, (s31+16), (s31+28), (s31+40));
    v8 = M32((s30+1792));
    if ((u32)v8 == (u32)0) {
    return;
    }
    v9 = MF(s31);
    v10 = lbl_805E1A30;
    fn_80245C10(v8, (s30+1000), (s30+1084), (s30+1096), (s31+4), 0, v9, v10);
}

void fn_801CC9F8(u32 p3) {
    u32 s31;
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
    u32 c1;
    s31 = p3;
    v1 = M32(p3);
    c0 = fn_80245B4C(v1);
    M32((s31+1784)) = c0;
    v2 = M32((s31+44));
    v3 = M32((v2+12));
    v4 = M32((v3+52));
    if ((s32)v4 != (s32)0) {
        v5 = M32(s31);
        c1 = fn_80245B4C(v5);
        M32((s31+1792)) = c1;
    }
    v6 = M32((s31+1784));
    fn_80247E84(v6, 1);
    v7 = M32((s31+1784));
    fn_80246300(v7);
    v8 = M32((s31+1784));
    fn_80247EB0(v8, 1);
    v9 = M32((s31+1784));
    fn_80247E58(v9, 1);
}

void fn_801CCA78(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+1784));
    fn_80245ED0(v1);
    v2 = M32((s31+1792));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_80245ED0(v2);
}

u32 fn_801CCAB8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+1784));
    v2 = M32((v1+68));
    v3 = M32((v2+324));
    return v3;
}

u32 fn_801CCAC8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+1784));
    v2 = M32((v1+68));
    v3 = M32((v2+284));
    return v3;
}

void fn_801CCAD8(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v4;
    u32 v5;
    s30 = p4;
    v1 = M32((p3+1784));
    v2 = M32((v1+68));
    s31 = M32((v2+284));
    v4 = M8((s31+1));
    if ((s32)(v4&0x1) == (s32)0) {
        __assert((u32)&lbl_805D6FE8, 190, (u32)lbl_804B0A30);
    }
    v5 = M32((s31+4));
    *(S12*)(s30) = *(S12*)((v5+20));
}

void fn_801CD618(void) {
    fn_801CCEB8();
}

void fn_801CD638(void) {
    fn_801CD24C();
}

u32 fn_801CDB6C(void) {
    fn_801CD7D8();
}

void fn_801CDB8C(u32 p3) {
    u32 s31;
    u32 v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7;
    u32 c0;
    s31 = p3;
    c0 = fn_801CDB6C();
    if ((s32)c0 != (s32)0) {
        v1 = M8((s31+3120));
        ((BFu8_2_1*)((s31+3120)))->f = 1;
    }
    v2 = MF((s31+1000));
    v3 = MF((s31+1012));
    MF((s31+876)) = (v2-v3);
    v4 = MF((s31+1004));
    v5 = MF((s31+1016));
    MF((s31+880)) = (v4-v5);
    v6 = MF((s31+1008));
    v7 = MF((s31+1020));
    MF((s31+884)) = (v6-v7);
}

u32 fn_801CDE84(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    M32((p3+1808)) = 0;
    v1 = M32((p3+1784));
    v2 = M32((v1+68));
    v3 = M32((v2+368));
    return v3;
}

u32 fn_801CDE9C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = M32((p3+1784));
    v2 = M32((p3+1808));
    v3 = M32((v1+68));
    s31 = M32(((u32)v3+328+(v2<<2)));
    v5 = M8((s31+1));
    if ((s32)(v5&0x2) == (s32)0) {
        __assert((u32)&lbl_805D6FE8, 263, (u32)lbl_804B0A94);
    }
    v6 = M32((s31+12));
    v7 = M32(v6);
    return v7;
}

void fn_801CDF00(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 s31;
    u32 v5;
    u32 v6;
    s30 = p4;
    v1 = M32((p3+1784));
    v2 = M32((p3+1808));
    v3 = M32((v1+68));
    s31 = M32(((u32)v3+328+(v2<<2)));
    v5 = M8((s31+1));
    if ((s32)(v5&0x2) == (s32)0) {
        __assert((u32)&lbl_805D6FE8, 284, (u32)lbl_804B0A94);
    }
    v6 = M32((s31+12));
    *(S12*)(s30) = *(S12*)((v6+8));
}

void fn_801CE49C(u32 p3) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 s31;
    u32 v3;
    u32 v4;
    u32 c1;
    s30 = p3;
    v1 = M8((p3+3120));
    if ((s32)((v1>>6)&0x1) != (s32)0) {
        v2 = M32((s30+1784));
        s31 = fn_80246CF4(v2);
        c1 = fn_800D1F3C();
        if ((s32)c1 == (s32)0) {
            v3 = M32((s30+2016));
            if ((s32)s31 == (s32)v3) {
            return;
            }
            v4 = M32(s30);
            fn_800D29DC(v4, s31);
            M32((s30+2016)) = s31;
            fn_801CBE34(s30);
            return;
        }
    }
    M32((s30+2016)) = -1;
}

void fn_801CE520(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 c1;
    s30 = p3;
    v1 = M32((p3+1784));
    s31 = fn_80246DB8(v1);
    c1 = fn_800D1F3C();
    if ((s32)c1 == (s32)0) {
        v2 = M32((s30+2020));
        if ((s32)s31 == (s32)v2) {
        return;
        }
        M32((s30+2020)) = s31;
        v3 = M32(s30);
        fn_800D29FC(v3, s31);
        return;
    }
    M32((s30+2020)) = -1;
}

void fn_801CE590(u32 p3) {
    u32 v1;
    v1 = M32((p3+1784));
    fn_80247004(v1);
}

void fn_801CE650(u32 p3) {
    float v1;
    u32 s31;
    u32 v2;
    float v3;
    u32 v4;
    float v5;
    float v6;
    float v7;
    float v8;
    float v9;
    float v10;
    v1 = lbl_805E1A4C;
    s31 = p3;
    v2 = M32((p3+1784));
    v3 = MF((s31+1132));
    fn_80245F70(v2, (s31+1000), (s31+1084), (s31+1096), 0, v3, v1);
    v4 = M32((s31+1784));
    fn_802461B4(v4);
    v5 = MF((s31+1000));
    v6 = MF((s31+1012));
    MF((s31+876)) = (v5-v6);
    v7 = MF((s31+1004));
    v8 = MF((s31+1016));
    MF((s31+880)) = (v7-v8);
    v9 = MF((s31+1008));
    v10 = MF((s31+1020));
    MF((s31+884)) = (v9-v10);
}

float fn_801CE8E0(u32 p3) {
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    float v5;
    s31 = M32((p3+1784));
    v2 = M32((s31+828));
    if ((s32)v2 != (s32)0) {
        __assert((u32)&lbl_805D6FE8, 505, (u32)lbl_804B0A54);
    }
    v3 = M32((s31+828));
    if ((s32)v3 != (s32)0) {
        __assert((u32)lbl_804B0A88, 249, (u32)lbl_804B0A54);
    }
    v4 = M32((s31+832));
    v5 = MF((v4+48));
    return v5;
}

u32 fn_801CE9C0(u32 p3, u32 p4) {
    fn_800D1944(p4);
}

void fn_801CE9E4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 c0;
    s31 = p3;
    c0 = fn_801CAA40();
    v1 = M32((s31+2904));
    fn_8027A7C4(c0, v1);
}

void fn_801CEA18(u32 p3, u32 p4) {
    fn_800D19A0(p4);
}

void fn_801CEA3C(u32 p3, u32 p4) {
    fn_800D19C8(p4);
}

u32 fn_801CF340(u32 p3) {
    u32 v1;
    v1 = M32((p3+2904));
    if ((s32)v1 != (s32)-1) {
        fn_800D1860(v1);
        return 1;
    }
    return 0;
}

void fn_801CF5D0(u32 p3) {
    u32 v1;
    v1 = M32((p3+1812));
    M32((p3+2904)) = v1;
    *(S12*)((p3+2908)) = *(S12*)((p3+1816));
    *(S12*)((p3+2920)) = *(S12*)((p3+1000));
}

void fn_801D0424(u32 p3, u32 p4, float q1) {
    float g31;
    u32 s31;
    u32 v1;
    u32 c0;
    g31 = q1;
    s31 = p3;
    c0 = fn_801CB4C0();
    if ((s32)c0 != (s32)0) {
        fn_801CFFE0(s31, g31);
    } else {
        fn_801CF88C(s31, g31);
    }
    v1 = M32((s31+4));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_801CAA40(s31);
    fn_80231088();
}

void fn_801D0498(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    M32((p3+1808)) = 0;
    v1 = M32((p3+1784));
    v2 = M32((v1+68));
    v3 = M32((v2+368));
    if ((s32)v3 == (s32)0) {
    return;
    }
    v4 = MF((p3+2944));
    fn_801D0424(p3, v2, v4);
}

void fn_801D0BE4(u32 p3) {
    float v1;
    v1 = MF((p3+2944));
    fn_801D0610(v1);
}

void fn_801D0FF4(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c0;
    s31 = p3;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    v3 = M32((v2+40));
    c0 = fn_8027B418(v3);
    M32((s31+1652)) = c0;
    v4 = M32((s31+1652));
    fn_8027B534(v4);
    v5 = M8((s31+3127));
    ((BFu8_5_1*)((s31+3127)))->f = 0;
}

void fn_801D108C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M8((p3+3127));
    if ((s32)((v1>>2)&0x1) != (s32)0) {
        v2 = M8((p3+3120));
        if ((s32)((v2>>1)&0x1) != (s32)0) {
            v3 = M32((p3+1652));
            fn_8027B524(v3);
            return;
        }
    }
    v4 = M32((p3+1652));
    fn_8027B534(v4);
}

void fn_801D1CD0(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    M8(((u32)p3+1668+(p4<<1))) = p5;
    v1 = M8((p3+3122));
    ((BFu8_5_1*)((p3+3122)))->f = 1;
}

void fn_801D1D80(u32 p3) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    s31 = 0;
    s30 = p3;
    while ((v1 = M32((s30+1656)), v2 = M32(v1), (s32)s31 < (s32)v2)) {
        fn_801D1DEC(s30, s31, -1);
        s31 = (s31+1);
    }
    v3 = M8((s30+3122));
    ((BFu8_5_1*)((s30+3122)))->f = 0;
}

void fn_801D1DEC(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 v2;
    s30 = p3;
    v1 = M8(((u32)s30+1669+(p4<<1)));
    if ((s32)p5 == (s32)((s8)v1)) {
    return;
    }
    M8(((u32)s30+1669+(p4<<1))) = p5;
    s31 = 0;
    v2 = M8((s30+3122));
    ((BFu8_5_1*)((s30+3122)))->f = 1;
    do {
        fn_801D1E68((s30+1656), s31, (s30+772));
        s31 = (s31+1);
    } while ((s32)s31 < (s32)6);
}

void fn_801D1E68(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 s27;
    u32 s26;
    u32 s25;
    u32 s24;
    u32 s23;
    u32 s22;
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
    s30 = p3;
    v1 = M32(p3);
    s31 = p5;
    v2 = M32(((u32)v1+4+(p4<<2)));
    if ((u32)v2 == (u32)0) {
    return;
    }
    s26 = (s30+p4);
    v3 = M8((s26+4));
    if ((u32)v3 == (u32)0) {
    return;
    }
    s27 = v2;
    s25 = 0;
    while ((v11 = M32(s30), v12 = M32(v11), (s32)s25 < (s32)v12)) {
        s24 = 0;
        s28 = 0;
        while ((v10 = M32(s27), (s32)s24 < (s32)v10)) {
            v4 = M32((s27+4));
            s22 = 0;
            s23 = (v4+s28);
            v5 = M32((s23+4));
            s29 = v5;
            while ((v9 = M32(s23), (s32)s22 < (s32)v9)) {
                v6 = M8(s29);
                v7 = M32((s31+4));
                v8 = M32(v7+(v6<<2));
                HSD_DObjSetFlags(v8, 1);
                s22 = (s22+1);
                s29 = (s29+1);
            }
            s28 = (s28+8);
            s24 = (s24+1);
        }
        s27 = (s27+8);
        s25 = (s25+1);
    }
    M8((s26+4)) = 0;
}

void fn_801D22D0(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 s31;
    u32 v6;
    s30 = p4;
    v1 = M32((p3+44));
    v2 = M32((v1+4));
    v3 = M32((v2+4));
    if ((u32)v3 == (u32)0) {
    return;
    }
    v4 = M32(p3);
    s31 = M32((v4+40));
    fn_80409480(s31, 0, v3, 0);
    v6 = M8((s30+128));
    fn_80408F88(s31, 16, v6, ((float)(u32)v6));
    fn_8040A64C(s31);
    fn_80408EDC(s31);
}

u32 fn_801D2364(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    u32 v1;
    float v2;
    float v3;
    u32 s31;
    float v4;
    u32 v5;
    float d0;
    u32 c1;
    s30 = p4;
    s29 = p3;
    v1 = M32((p3+4));
    if ((u32)v1 == (u32)0) {
        return 2;
    }
    v2 = MF((s29+1136));
    d0 = fn_800BAD8C(s30, (s29+1024), v2);
    v3 = MF((s29+1168));
    if (d0 > v3) {
        s31 = 0;
    } else {
        v4 = MF((s29+1172));
        if (d0 > v4) {
            s31 = 1;
        } else {
            s31 = 2;
        }
    }
    v5 = M32((s29+4));
    c1 = fn_80191F38(v5, s30);
    if ((s32)s31 < (s32)c1) {
        s31 = c1;
    }
    return s31;
}

u32 fn_801D2474(u32 p3, u32 p4) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 c1;
    s30 = p4;
    v1 = M32((p3+4));
    if ((u32)v1 != (u32)0) {
        s31 = fn_8019203C(v1);
        if ((s32)s31 != (s32)5) {
            c1 = fn_800BBC0C(s30);
            if ((s32)s31 == (s32)c1) {
                return 1;
            }
        }
    }
    return 0;
}

void fn_801D24DC(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 s31;
    u32 s30;
    u32 c1;
    s31 = p5;
    s30 = p4;
    if ((s32)p6 == (s32)1) {
        fn_800BBE0C(s30, s31);
        return;
    }
    if ((s32)p7 == (s32)5) {
    return;
    }
    c1 = fn_800B8188(p7);
    fn_800BBCEC(c1, s30, s31);
}

void fn_801D2544(u32 p3, u32 p4, u32 p5) {
    if ((s32)p4 == (s32)1) {
        fn_800BBFC4();
        return;
    }
    if ((s32)p5 == (s32)5) {
    return;
    }
    fn_800B8188(p5);
    fn_800BBF14();
}

void fn_801D295C(void) {
    fn_801CD618();
}

void fn_801D2AB0(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M8((p3+120));
    if ((s32)((v1>>6)&0x1) == (s32)0) {
    return;
    }
    v2 = M32((p3+16));
    if ((s32)v2 == (s32)0) {
        fn_801EB97C();
        return;
    }
    if ((s32)v2 != (s32)1) {
    return;
    }
    fn_801F5C1C();
}

u32 fn_801D2D2C(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    v1 = M8((p3+3120));
    if ((s32)((v1>>6)&0x1) != (s32)0) {
        v2 = M32((s31+1812));
        c0 = fn_801CE9C0(p3, v2);
        if ((s32)c0 != (s32)0) {
            v3 = M32((s31+1812));
            fn_801D2D8C(s31, v3, (s31+1816));
            return 1;
        }
    }
    return 0;
}

void fn_801D2FB8(u32 p3) {
    u32 s31;
    u32 c0;
    u32 c1;
    u32 c2;
    s31 = p3;
    c0 = fn_802364E0();
    M32((s31+1692)) = c0;
    c1 = fn_802364E0();
    M32((s31+1696)) = c1;
    c2 = fn_802364E0();
    M32((s31+1700)) = c2;
    M32((s31+1704)) = -1;
}

void fn_801D3000(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    s31 = p3;
    v1 = M32((p3+1692));
    fn_8023641C(v1);
    v2 = M32((s31+1696));
    fn_8023641C(v2);
    v3 = M32((s31+1700));
    fn_8023641C(v3);
    v4 = M32((s31+1692));
    fn_80236778(v4);
    v5 = M32((s31+1696));
    fn_80236778(v5);
    v6 = M32((s31+1700));
    fn_80236778(v6);
    fn_801D3060(s31);
}

void fn_801D3060(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    s31 = p3;
    v1 = M32((p3+1704));
    if ((s32)v1 == (s32)-1) {
    return;
    }
    fn_8023641C(v1);
    v2 = M32((s31+1704));
    fn_80236778(v2);
    M32((s31+1704)) = -1;
}

void fn_801D30A8(u32 p3) {
    u32 v1;
    v1 = M32((p3+1696));
    fn_80236358(v1);
}

void fn_801D30CC(u32 p3) {
    u32 v1;
    v1 = M32((p3+1700));
    fn_80236358(v1);
}

void fn_801D30F0(u32 p3) {
    u32 v1;
    float v2;
    v1 = lbl_805DD848;
    v2 = MF((v1+380));
    MF((p3+2884)) = v2;
}

void fn_801D3AF4(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((p3+2844));
    if ((s32)v1 >= (s32)p4) {
    return;
    }
    M32((p3+2844)) = p4;
    if ((s32)v1 != (s32)p4) {
    return;
    }
}

void fn_801D3B08(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32((p3+2840));
    if ((s32)v1 != (s32)0) {
        M32((p3+2840)) = (v1-1);
    }
    v2 = M16((p3+2980));
    if ((u32)v2 != (u32)0) {
        M16((p3+2980)) = (v2-1);
    }
    v3 = M8((p3+3122));
    ((BFu8_4_1*)((p3+3122)))->f = 0;
    v4 = M16((p3+2982));
    if ((u32)v4 != (u32)0) {
        M16((p3+2982)) = (v4-1);
    }
    v5 = M8((p3+3131));
    ((BFu8_5_1*)((p3+3131)))->f = 0;
    v6 = M8((p3+3131));
    ((BFu8_6_1*)((p3+3131)))->f = 0;
}

void fn_801D3FF8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32((p3+92));
    v2 = M32((v1+44));
    M32((v2+80)) = 300;
    v3 = M32((p3+92));
    HSD_GObj_AddProc(v3, (u32)fn_801D3EC0, 11, v2);
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

void fn_801A0040(u32 p3) {}

void fn_801A00AC(void) {}

void fn_801A00F0(u32 p3) {}

void fn_801A015C(void) {}

void fn_801A01A0(u32 p3) {}

void fn_801A020C(void) {}

void fn_801A04D8(void) {}

void fn_801A051C(void) {}

void fn_801A0540(void) {}

void fn_801A0618(u32 p3) {}

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

void fn_801A7828(u32 p3) {}

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

void fn_801B28F8(u32 p3, u32 p4) {}

void fn_801B2E50(void) {}

void fn_801B2E54(void) {}

void fn_801B4CCC(u32 p3, u32 p4) {}

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
