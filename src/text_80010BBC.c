#pragma dont_inline on

extern char* gmGetClearcheckerP();
extern char* gmGetGlobalP();

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
char* fn_80047844(void) { return (char*)gmGetGlobalP(); }
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
typedef unsigned short u16;
#define AT(T, base, off) (*(T*)((char*)(base) + (off)))

extern int* lbl_805DD570;
extern int lbl_80497B9C[];
extern int lbl_80497D28[];
extern int lbl_80497CA8[];
extern int lbl_80497CC8[];
extern int lbl_80497CE8[];
extern int lbl_80497D08[];
typedef struct { int a, b, c; } V3;
typedef struct {
    int x0, x4, x8;
    V3 v;
    char pad18[0x30 - 0x18];
    float f30;
    int x34;
    char pad38[0x40 - 0x38];
    short s40, s42;
    char pad44[0x55 - 0x44];
    u8 b55_0 : 1;
    u8 b55_1 : 1;
    u8 b55_2 : 1;
    u8 b55_3 : 1;
    u8 b55_4 : 1;
    char pad56[0xb8 - 0x56];
} Q;
extern struct { int a0; char pad[0x33c - 4]; Q arr[1]; } lbl_80538088[];
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
void fn_8005B918(int v) { lbl_80538088[0].a0 = v; }
int fn_8005B924(void) { return lbl_80538088[0].a0; }
void fn_8005E0DC(u32 x, u32* a, u32* b) { *a = (x >> 4) & 0x7FFFFFF; *b = x & 0xF; }
int fn_8005E0F0(int x) { if (x == -1) { return 0; } return x < 0; }
int HSD_FogAdjGetFlags(int* p) { if (p) return p[2]; return 0; }
int HSD_DObjGetNext(int* p) { if (p) return p[1]; return 0; }
int fn_80053740(int* p) { if (p == 0) return 0; return p[2]; }
int fn_80053758(int* p) { if (p == 0) return 0; return p[4]; }

u32 fn_80054CAC(int* p) { int* q = (int*)p[0x7c / 4]; if (q != 0 && (q[0] & 0x04000000)) return 1; return 0; }
void fn_8005DB44(int i, V3* v, float f) { Q* q; if (i == -1) return; q = &lbl_80538088[0].arr[i]; q->x8 = 3; q->v = *v; q->f30 = f; q->b55_4 = 1; }
void fn_8005DB98(int i, int v, float f) { Q* q; if (i == -1) return; q = &lbl_80538088[0].arr[i]; q->x8 = 4; q->x34 = v; q->f30 = f; }
void fn_8005DCEC(int i, int v) { Q* q; if (i == -1) return; q = &lbl_80538088[0].arr[i]; if (q->x0 == 2) q->x4 = v; }
void fn_8005E08C(int i) { Q* q; if (i == -1) return; q = &lbl_80538088[0].arr[i]; if (q->s40 != -1 || q->s42 != -1) { q->x8 = 1; return; } q->x8 = 0; q->x0 = 0; }

/* accessors */
void fn_800132C4(void) { char* g = gmGetGlobalP(); AT(u8, g, 0xaa4) = 0x1; }
void fn_800132EC(void) { char* g = gmGetGlobalP(); AT(u8, g, 0xaa4) = 0x0; }
void fn_80015E10(void) { char* g = gmGetGlobalP(); AT(short, g, 0x4e) = -0x1; }
u8 fn_80015E38(void) { return AT(u8, gmGetGlobalP(), 0x39); }
u8 fn_80015E5C(void) { return AT(u8, gmGetGlobalP(), 0x3a); }
void fn_80018A04(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x34) = 0x4; }
void fn_8001A604(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x6d) = 0x0; }
void fn_8001D9EC(void) { char* g = gmGetGlobalP(); AT(u8, g, 0xba) = 0x0; }
void fn_8001FBB0(void) { char* g = gmGetGlobalP(); AT(u8, g, 0xd2) = 0x0; }
void fn_80028838(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x196) = 0x1; }
void fn_80028860(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x196) = 0x0; }
void fn_8002D09C(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x1cf) = 0x1; }
void fn_8002D0C4(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x1cf) = 0x0; }
void fn_80038D1C(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x25b) = 0x1; }
void fn_80038D44(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x25b) = 0x0; }
void fn_8003C0C4(void) { char* g = gmGetGlobalP(); AT(u8, g, 0xf4) = 0x1; }
void fn_8003C0EC(void) { char* g = gmGetGlobalP(); AT(u8, g, 0xf4) = 0x0; }
void fn_8003D08C(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x100) = 0x1; }
void fn_8003D0B4(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x100) = 0x0; }
char* fn_8003D594(void) { return (char*)gmGetGlobalP() + 0x354; }
u8 fn_8003D5F0(void) { return AT(u8, gmGetGlobalP(), 0x35d); }
void fn_8003D614(u8 v) { AT(u8, gmGetGlobalP(), 0x35f) = v; }
u8 fn_8003D644(void) { return AT(u8, gmGetGlobalP(), 0x35f); }
void fn_8003D668(u8 v) { AT(u8, gmGetGlobalP(), 0x362) = v; }
u8 fn_8003D698(void) { return AT(u8, gmGetGlobalP(), 0x362); }
void fn_8003D6BC(u8 v) { AT(u8, gmGetGlobalP(), 0x363) = v; }
u8 fn_8003D6EC(void) { return AT(u8, gmGetGlobalP(), 0x363); }
void fn_8003D710(u8 v) { AT(u8, gmGetGlobalP(), 0x364) = v; }
u8 fn_8003D740(void) { return AT(u8, gmGetGlobalP(), 0x364); }
void fn_8003D764(int v) { AT(int, gmGetGlobalP(), 0x36c) = v; }
int fn_8003D794(void) { return AT(int, gmGetGlobalP(), 0x36c); }
char* fn_8003EA40(void) { return (char*)gmGetGlobalP() + 0x374; }
u8 fn_8003EA9C(void) { return AT(u8, gmGetGlobalP(), 0x381); }
void fn_8003EAC0(u8 v) { AT(u8, gmGetGlobalP(), 0x383) = v; }
u8 fn_8003EAF0(void) { return AT(u8, gmGetGlobalP(), 0x383); }
void fn_8003EB14(u8 v) { AT(u8, gmGetGlobalP(), 0x386) = v; }
u8 fn_8003EB44(void) { return AT(u8, gmGetGlobalP(), 0x386); }
void fn_8003EB68(u8 v) { AT(u8, gmGetGlobalP(), 0x387) = v; }
u8 fn_8003EB98(void) { return AT(u8, gmGetGlobalP(), 0x387); }
void fn_8003EBBC(u8 v) { AT(u8, gmGetGlobalP(), 0x388) = v; }
u8 fn_8003EBEC(void) { return AT(u8, gmGetGlobalP(), 0x388); }
char* fn_8003F670(void) { return (char*)gmGetGlobalP() + 0x394; }
u8 menu_cityTrial_checkMode(void) { return AT(u8, gmGetGlobalP(), 0x399); }
char* fn_800415F8(void) { return (char*)gmGetClearcheckerP() + 0x354; }
char* fn_8004161C(void) { return (char*)gmGetClearcheckerP() + 0x4bc; }
char* fn_80041640(void) { return (char*)gmGetClearcheckerP() + 0x5bc; }
void fn_800429DC(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x2b5) = 0x1; }
void fn_80043E08(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x2d4) = 0x1; }
void fn_8004498C(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x331) = 0x1; }
char* fn_8004640C(void) { return (char*)gmGetGlobalP() + 0x484; }
void fn_80046DA0(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x485) = 0x1; }
void fn_80046DC8(void) { char* g = gmGetGlobalP(); AT(u8, g, 0x485) = 0x0; }
void fn_80047864(void) { char* g = gmGetGlobalP(); AT(u8, g, 0xb) = 0x1; }
void fn_800490A8(void) { char* g = fn_80047844(); AT(u8, g, 0x1) = 0x2; }
void fn_800490D0(void) { char* g = fn_80047844(); AT(u8, g, 0x1) = 0x2; }
void fn_800490F8(void) { char* g = fn_80047844(); AT(u8, g, 0x1) = 0x2; }
void fn_80049140(void) { char* g = fn_80047844(); AT(u8, g, 0x1) = 0x2; }
void fn_80049168(u8 v) { AT(u8, gmGetGlobalP(), 0x7c4) = v; }
