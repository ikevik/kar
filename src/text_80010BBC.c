#pragma dont_inline on

extern void CSS_airRide_Main();
extern void cityTrial_gameSettingsThink();
extern void fn_80012E64();
extern void fn_800196E4();
extern void fn_8001C608();
extern void fn_80037A90();
extern void fn_8003B6D4();
extern void fn_8003C8BC();
extern void fn_800425F0();
extern void fn_80043B30();
extern void fn_800444F8();
extern void fn_80045CA4();
extern void fn_80046430();
extern void fn_80047844();
extern void fn_80051AA4();
extern void fn_8005ECA0();
extern void fn_8007D050();
extern void fn_80132C58();
extern void fn_80134600();
extern void fn_80134FE4();
extern void fn_80135C8C();
extern void fn_80138E00();
extern void fn_80139078();
extern void fn_801391F0();
extern void fn_80282004();
extern void fn_80282300();
extern void fn_8028236C();
extern void fn_80442FA4();
extern void fn_804484C8();
extern void gmGetGlobalP();
extern void menuInputGrabber();
extern void pauseMain();
extern void shadowRendering();

void fn_80010FA8(void) {}
void fn_80012E64(void) { pauseMain(); }
void fn_8001528C(void) { fn_80012E64(); }
void fn_800152AC(void) { fn_8007D050(); }
void fn_800189C4(void) { fn_80132C58(); }
void goTo_menuInputGrabber(void) { menuInputGrabber(); }
void hwIRQLeaveCritical(void) { fn_800196E4(); }
void fn_8001ECF4(void) { fn_8001C608(); }
void fn_80020168(void) { cityTrial_gameSettingsThink(); }
void fn_8002A3C0(void) { fn_80134600(); }
void goToCSS_airRide_Main(void) { CSS_airRide_Main(); }
void fn_8002DD14(void) { fn_80134FE4(); }
void fn_8003B4A8(void) { fn_80135C8C(); }
void fn_8003B4C8(void) { fn_80037A90(); }
void fn_8003C734(void) { fn_8003B6D4(); }
void fn_8003D574(void) { fn_8003C8BC(); }
void fn_80042570(void) { gmGetGlobalP(); }
void fn_80042590(void) { gmGetGlobalP(); }
void fn_800425B0(void) { gmGetGlobalP(); }
void fn_800425D0(void) { gmGetGlobalP(); }
void fn_80043B10(void) { fn_800425F0(); }
void fn_800444D8(void) { fn_80043B30(); }
void fn_80045A6C(void) { fn_800444F8(); }
void fn_800461C4(void) { fn_80045CA4(); }
void fn_80047330(void) { fn_80046430(); }
void fn_800473D0(void) { fn_80139078(); }
void fn_80047844(void) { gmGetGlobalP(); }
void fn_80049120(void) { fn_80047844(); }
void fn_8004A7D0(void) { fn_80138E00(); }
void fn_8004F33C(void) { fn_80282300(); }
void fn_8004F35C(void) { fn_8028236C(); }
void fn_8004F37C(void) { fn_80282004(); }
void fn_8004F5B0(void) { shadowRendering(); }
void fn_8004F83C(void) { fn_801391F0(); }
void fn_80051D7C(void) { fn_80051AA4(); }
void fn_800528EC(void) {}
void fn_80052998(void) {}
void fn_80054DC4(void) {}
void fn_8005BA18(void) { fn_804484C8(); }
void fn_8005F57C(void) { fn_8005ECA0(); }
void fn_8005F59C(void) { fn_8005ECA0(); }
void fn_8005F688(void) { fn_80442FA4(); }


typedef unsigned int u32;
typedef unsigned char u8;

extern int* lbl_805DD570;
extern int lbl_80497B9C[];
extern int lbl_80497D28[];
extern int lbl_80497CA8[];
extern int lbl_80497CC8[];
extern int lbl_80497CE8[];
extern int lbl_80497D08[];
extern int lbl_80538088[];
extern struct { int a; int b; } lbl_80537510[];
typedef struct { int a; int b; int pad[5]; } S1C;
extern struct { char pad[0x24]; S1C arr[1]; } lbl_80537F40[];

int fn_800132B8(void) { return *lbl_805DD570; }
int fn_8004F5D0(void) { return lbl_80497B9C[0]; }
int* fn_80055DA0(void) { return lbl_80497D28; }
int fn_800572CC(int i) { return lbl_80497CA8[i]; }
int fn_800572E0(int i) { return lbl_80497CC8[i]; }
int fn_800572F4(int i) { return lbl_80497CE8[i]; }
int fn_80057308(int i) { return lbl_80497D08[i]; }
void fn_8005811C(int* a, int* b) { *a = lbl_80537510[0].a; *b = lbl_80537510[0].b; }
void fn_80058534(int i, int v) { lbl_80537F40[0].arr[i].a = v; }
int fn_8005854C(int i) { return lbl_80537F40[0].arr[i].a; }
int fn_80058834(int i) { return lbl_80537F40[0].arr[i].b; }
void fn_8005B918(int v) { lbl_80538088[0] = v; }
int fn_8005B924(void) { return lbl_80538088[0]; }
void fn_8005E0DC(u32 x, u32* a, u32* b) { *a = (x >> 4) & 0x7FFFFFF; *b = x & 0xF; }
int fn_8005E0F0(int x) { if (x == -1) { return 0; } return x < 0; }
int HSD_FogAdjGetFlags(int* p) { if (p) return p[2]; return 0; }
int HSD_DObjGetNext(int* p) { if (p) return p[1]; return 0; }
int fn_80053740(int* p) { if (p == 0) return 0; return p[2]; }
int fn_80053758(int* p) { if (p == 0) return 0; return p[4]; }
