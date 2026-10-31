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

typedef signed char s8;
extern void fn_8013381C();
extern void fn_80133AF4();
extern void fn_801363BC();
extern void fn_8000BC30();
void fn_8003C710(void) { gmGetGlobalP(); fn_8013381C(); }
void fn_8003D550(void) { gmGetGlobalP(); fn_80133AF4(); }
void fn_8004730C(void) { gmGetGlobalP(); fn_801363BC(); }
void fn_8003EDC4(void) { gmGetGlobalP(); fn_8000BC30(3); }
void fn_8003D5B8(u8 v) { char* g = gmGetGlobalP(); AT(u8, g, 0x35e) = AT(u8, g, 0x35d); AT(u8, g, 0x35d) = v; }
void fn_8003EA64(u8 v) { char* g = gmGetGlobalP(); AT(u8, g, 0x382) = AT(u8, g, 0x381); AT(u8, g, 0x381) = v; }
void fn_8003F694(u8 v) { char* g = gmGetGlobalP(); AT(u8, g, 0x39a) = AT(u8, g, 0x399); AT(u8, g, 0x399) = v; }
void fn_8003EC10(u8 v) { char* g = gmGetGlobalP(); AT(short, g, 0x38e) = v; }
u8 fn_8003EC44(void) { char* g = gmGetGlobalP(); return AT(u16, g, 0x38e); }
typedef struct { char pad[0x366]; u8 a; } B366;
u8 fn_8003D804(s8 i) { char* g = gmGetGlobalP(); g += i; return ((B366*)g)->a; }
typedef struct { char pad[0x38a]; u8 a; } B38A;
u8 fn_8003ECB8(s8 i) { char* g = gmGetGlobalP(); g += i; return ((B38A*)g)->a; }
void fn_8003D7B8(s8 i) { char* q = gmGetGlobalP() + i; if ((s8)AT(u8, q, 0x366) < 99) AT(u8, q, 0x366)++; }
void fn_8003EC6C(s8 i) { char* q = gmGetGlobalP() + i; if ((s8)AT(u8, q, 0x38a) < 99) AT(u8, q, 0x38a)++; }
int fn_8003D83C(void) { char* g = gmGetGlobalP(); if ((s8)AT(u8, g, 0x35d) == 0 && AT(char, g, 0x362) == 1) return 0; return 1; }
int fn_8003ECF0(void) { char* g = gmGetGlobalP(); if ((s8)AT(u8, g, 0x381) == 0 && AT(char, g, 0x386) == 1) return 0; return 1; }
int fn_80047350(void) { char* g = gmGetGlobalP(); return (s8)AT(u8, g, 0xd4d) == 0; }
extern void fn_8004788C();
void fn_8004840C(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1a); }
void fn_80048514(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1a); }
void fn_80048548(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1b); }
void fn_8004857C(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1b); }
void fn_80048644(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x4); }
void fn_80048678(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1a); }
void fn_800486AC(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1b); }
void fn_800486E0(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1b); }
void fn_80048714(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1b); }
void fn_80048748(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1b); }
void fn_80048854(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x1b); }
void fn_800488B8(void) { if (AT(char, fn_80047844(), 7) != 2) fn_8004788C(0x0); }
void fn_80048B78(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0xa; AT(u8, g, 6) = 0x1; }
void fn_80048BAC(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0xb; AT(u8, g, 6) = 0x0; }
void fn_80048C2C(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x0; AT(u8, g, 2) = 0xd; AT(u8, g, 6) = 0x1; }
void fn_80048C64(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0xe; AT(u8, g, 6) = 0x0; }
void fn_80048C9C(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0xf; AT(u8, g, 6) = 0x0; }
void fn_80048D1C(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x11; AT(u8, g, 6) = 0x0; }
void fn_80048D54(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x12; AT(u8, g, 6) = 0x0; }
void fn_80048D8C(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x13; AT(u8, g, 6) = 0x1; }
void fn_80048DC0(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x14; AT(u8, g, 6) = 0x0; }
void fn_80048DF8(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x15; AT(u8, g, 6) = 0x0; }
void fn_80048E78(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x17; AT(u8, g, 6) = 0x0; }
void fn_80048EB0(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x18; AT(u8, g, 6) = 0x0; }
void fn_80048F30(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x1a; AT(u8, g, 6) = 0x0; }
void fn_80048F98(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x1c; AT(u8, g, 6) = 0x2; }
void fn_80048FD0(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x1d; AT(u8, g, 6) = 0x2; }
void fn_80049008(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x1e; AT(u8, g, 6) = 0x0; }
void fn_80049070(void) { char* g = fn_80047844(); AT(u8, g, 1) = 0x1; AT(u8, g, 2) = 0x20; AT(u8, g, 6) = 0x0; }

extern void fn_80113F10(), fn_80133520(), fn_8001ACC4(), fn_8001D74C(), fn_8005E5D0(), fn_8013876C(), fn_801384C8(), fn_8005E788();
extern void fn_80078E5C(), fn_80138F44(), fn_80281F10(), fn_80281ECC(), HSD_MObjSetFlags(), HSD_MObjClearFlags();
extern void fn_8005299C(), fn_80052CA4();
extern char* fn_8040BCA0();
extern int fn_80005CE0();
extern int lbl_805DD590;
void fn_80010FAC(int a, int b, int c) { fn_80113F10(a, 0, c + b * 10); }
#if 0
void fn_80010FD8(int i, int c) { fn_80113F10(i, 1, c); ((struct { char pad[0xd0]; int a[1]; }*)lbl_805DD570)->a[i]++; }
#endif
void fn_8001AE58(void) { fn_80133520(); fn_8001ACC4(); }
void fn_8001ECD0(void) { fn_80133520(); fn_8001D74C(); }
void fn_800461A0(void) { fn_8005E5D0(); fn_8013876C(); }
void fn_800462A4(void) { fn_801384C8(); fn_8005E788(); }
void fn_80047F0C(void) { fn_80078E5C(); fn_80138F44(); }
void fn_8004F39C(void) { fn_80281F10(); fn_80281ECC(7); }
void fn_8004A10C(void) { lbl_805DD590 = fn_80005CE0(); }
void fn_80052C58(int* p, int f) { HSD_MObjSetFlags(p ? (void*)p[2] : 0, f); }
void fn_80052F48(int* p, int f) { HSD_MObjClearFlags(p ? (void*)p[2] : 0, f); }
void fn_80052F7C(int a, int b) { char* r = fn_8040BCA0(a); if (r != 0) fn_8005299C(r, b); }
void fn_80053770(int a, int b) { char* r = fn_8040BCA0(a); if (r != 0) fn_80052CA4(r, b); }
typedef struct { char pad[0x5c1]; u8 a; } B5C1;
#if 0
void fn_80042200(int i) { char* g = gmGetClearcheckerP(); g += i * 0x14; ((B5C1*)g)->a = 0; }
#endif

typedef short s16;
typedef int s32;
#define M8(a) (*(u8*)(a))
#define M16(a) (*(u16*)(a))
#define M32(a) (*(u32*)(a))
#define MF(a) (*(float*)(a))
#define MS16(a) (*(s16*)(a))
typedef struct { u8 :7; u8 f:1; } BFu8_7_1;
typedef struct { u8 :6; u8 f:1; } BFu8_6_1;
typedef struct { u8 :5; u8 f:2; } BFu8_5_2;
typedef struct { u8 :5; u8 f:1; } BFu8_5_1;
typedef struct { u8 :4; u8 f:2; } BFu8_4_2;
typedef struct { u8 :4; u8 f:1; } BFu8_4_1;
typedef struct { u8 :3; u8 f:1; } BFu8_3_1;
typedef struct { u8 :2; u8 f:1; } BFu8_2_1;
typedef struct { u8 :1; u8 f:1; } BFu8_1_1;
typedef struct { u8 f:2; } BFu8_0_2;
typedef struct { u8 f:1; } BFu8_0_1;
extern u8 lbl_80497280[];
extern u32 lbl_805D51B8;
extern u8 lbl_804972D8[];
extern u32 lbl_805D51C0;
extern u32 lbl_805DD598;
extern u8 lbl_80497BA8[];
extern u32 lbl_805D51D8;
extern u8 HSD_AObjSetFlags[];
extern u8 lbl_80497D98[];
extern u8 lbl_80497DA4[];
extern u32 lbl_805DD5A8;
extern u8 lbl_804981A4[];
extern u32 lbl_805D5274;
extern u8 lbl_804981C8[];
extern u32 lbl_805D528C;
extern u8 lbl_80498FEC[];
u32 fn_8000FCB0(u32);
u32 fn_8022D230(u32);
void fn_801C8A60(u32, u32, float);
void fn_8000B2B8(void);
void fn_80072770(void);
void fn_80073FBC(void);
u32 fn_8000CC18(void);
void fn_8000BC10(void);
void fn_8000CCB8(void);
void fn_800088C8(u32);
void fn_8005A348(void);
void __assert(u32, u32, u32);
u32 menu_getCurrentMenuID(void);
void fn_800064F0(void);
void fn_80008220(void);
void fn_8007859C(void);
u32 fn_8027C830(void);
void fn_8027C838(void);
void fn_80077980(void);
void fn_8006595C(void);
u32 fn_8027E574(void);
u32 fn_80077B50(u32, u32, u32, u32, u32, u32);
void fn_80077ED4(u32);
void fn_8027CCA8(void);
void lbLoadMusicLocation(u32);
u32 fn_8027EF64(void);
void fn_802339E4(void);
void fn_8007ADB8(void);
void fn_80281660(void);
void fn_80281AD4(void);
void fn_80281BB4(void);
void fn_802823FC(u32);
void fn_8005AB84(void);
void fn_8005A5B0(void);
void fn_804119E4(u32);
void fn_803FCDB8(u32, ...);
void fn_80408F88(u32, u32);
u32 HSD_RObjAlloc(u32, u32);
void HSD_RObjSetFlags(u32, u32);
void fn_8041A438(u32, u32);
void fn_8040BCCC(u32, u32);
void HSD_JObjCheckDepend(u32);
void HSD_AObjInterpretAnim(u32, u32, u32);
void HSD_RObjAnimAll(u32);
void HSD_AObjInitEndCallBack(u32);
void fn_80055DF8(u32);
void HSD_AObjInvokeCallBacks(void);
void fn_8040BD64(u32, u32);
void fn_8040C0D8(u32, u32);
void HSD_JObjUnref(u32);
void fn_800571A4(u32, u32, u32, u32, u32);
void OSDisableInterrupts(u32, u32);
void HSD_GetHeap(void);
void HSD_SetHeap(u32);
void HSD_Free(u32);
void fn_80057A9C(u32, u32);
void OSRestoreInterrupts(void);
void fn_80059CFC(void);
void fn_80058E84(void);
u32 DVDConvertPathToEntrynum(void);
void fn_80058920(u32, u32);
u32 fn_8007603C(void);
void fn_80075DC0(void);
void fn_803D360C(u32, u32);
void fn_803D3708(u32, u32);
void fn_8005BA38(u32, u32);
void fn_8005BEE4(u32, u32);
void OSReport(u32, ...);
void fn_804484D0(u32);
void fn_80445A84(u32);
void fn_80445810(u32, u32);
void fn_804458D0(u32, u32);

void fn_800153AC(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    u32 c0;
    u32 c1;
    c0 = fn_8000FCB0(p3);
    v1 = M32(c0);
    c1 = fn_8022D230(p3);
    if ((u32)c1 == (u32)0) {
    return;
    }
    v2 = M32(((u32)v1+128));
    v3 = MF(((u32)v1+152));
    fn_801C8A60(c1, v2, v3);
}

void fn_8002DC74(void) {
    fn_8000B2B8();
    fn_80072770();
    fn_80073FBC();
}

void fn_8004877C(void) {
    __assert((u32)lbl_80497280, 482, (u32)&lbl_805D51B8);
}

void fn_80048888(void) {
    __assert((u32)lbl_80497280, 548, (u32)&lbl_805D51B8);
}

void fn_80048AD4(void) {
    u32 c0;
    c0 = menu_getCurrentMenuID();
    if ((s32)((s8)c0) == (s32)18) {
        fn_800064F0();
        fn_80008220();
        return;
    }
    fn_800064F0();
}

void fn_80048F68(void) {
    __assert((u32)lbl_804972D8, 335, (u32)&lbl_805D51C0);
}

void fn_80049040(void) {
    __assert((u32)lbl_804972D8, 388, (u32)&lbl_805D51C0);
}

void fn_80049A40(void) {
    u32 c1;
    fn_8007859C();
    c1 = fn_8027C830();
    if ((s32)c1 == (s32)0) {
    return;
    }
    fn_800088C8(-1);
    fn_800064F0();
}

void fn_80049B68(void) {
    u32 c0;
    c0 = fn_8027EF64();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_800088C8(-1);
    fn_800064F0();
}

void fn_8004F3C4(void) {
    lbl_805DD598 = 0;
    fn_802339E4();
    fn_8007ADB8();
    fn_80281660();
    fn_80281AD4();
    fn_80281BB4();
    fn_802823FC(1);
    fn_8005AB84();
    lbLoadMusicLocation(44);
    fn_8005A5B0();
    fn_8006595C();
}

void fn_8004F5E0(u32 p3) {
    u32 v1;
    if ((s32)p3 >= (s32)3) {
        __assert((u32)lbl_80497BA8, 167, (u32)&lbl_805D51D8);
    }
    if ((s32)p3 >= (s32)3) {
        __assert((u32)lbl_80497BA8, 134, (u32)&lbl_805D51D8);
    }
    v1 = M32((u32)lbl_80497B9C+(p3<<2));
    fn_804119E4(v1);
}

void fn_800550F4(u32 p3, u32 p4) {
    fn_803FCDB8(p3, 6, p4, (u32)HSD_AObjSetFlags, 3, (8192<<16));
}

void fn_80055AA8(u32 p3) {
    fn_80408F88(p3, 4);
}

void fn_80055ACC(u32 p3) {
    fn_80408F88(p3, 16);
}

void fn_80055C14(u32 p3, u32 p4) {
    u32 c0;
    c0 = HSD_RObjAlloc(p3, p4);
    HSD_RObjSetFlags(c0, ((36864<<16)+1));
    fn_8041A438(c0, p4);
    fn_8040BCCC(p3, c0);
}

void fn_80055DAC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    if ((s32)p3 == (s32)0) {
    return;
    }
    HSD_JObjCheckDepend(p3);
    v1 = M32(p3);
    v2 = M32(((u32)p3+124));
    v3 = M32(((u32)v1+80));
    HSD_AObjInterpretAnim(v2, p3, v3);
    v4 = M32(((u32)p3+128));
    HSD_RObjAnimAll(v4);
}

void fn_80056038(u32 p3) {
    if ((s32)p3 == (s32)0) {
    return;
    }
    HSD_AObjInitEndCallBack(p3);
    fn_80055DF8(p3);
    HSD_AObjInvokeCallBacks();
}

void fn_80056074(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    if ((u32)p3 == (u32)0) {
    return;
    }
    v1 = M32(p3);
    v2 = M32(((u32)p3+20));
    v3 = M32(((u32)v1+76));
    HSD_AObjInterpretAnim(v2, p3, v3);
}

void fn_800570E8(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    fn_8040BD64(p3, 4096);
    M32(((u32)p3+16)) = p4;
    v1 = M32(((u32)p3+16));
    if ((u32)v1 == (u32)0) {
    return;
    }
    v2 = M16(((u32)v1+4));
    M16(((u32)v1+4)) = (v2+1);
    v3 = M16(((u32)v1+4));
    if ((u32)v3 != (u32)65535) {
    return;
    }
    __assert((u32)lbl_80497D98, 93, (u32)lbl_80497DA4);
}

void fn_80057164(u32 p3) {
    u32 v1;
    fn_8040C0D8(p3, 4096);
    v1 = M32(((u32)p3+16));
    HSD_JObjUnref(v1);
    M32(((u32)p3+16)) = 0;
}

void fn_8005729C(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p4+24));
    v2 = M32(((u32)p4+28));
    fn_800571A4(p3, v1, v2, p5, p4);
}

u32 fn_80058E60(void) {
    u32 v1;
    fn_80059CFC();
    v1 = lbl_805DD5A8;
    return v1;
}

u32 fn_80059098(void) {
    u32 c1;
    fn_80058E84();
    c1 = DVDConvertPathToEntrynum();
    return (((-1-c1)|(c1+1))>>31);
}

void fn_80059628(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    if ((s32)p4 == (s32)0) {
        __assert((u32)lbl_804981A4, 273, (u32)&lbl_805D5274);
    }
    v1 = M32(((u32)p4+60));
    if ((s32)(v1&0x1) == (s32)0) {
        __assert((u32)lbl_804981A4, 274, (u32)lbl_804981C8);
    }
    v2 = M32(((u32)p4+32));
    fn_80058920(p3, (v2-32));
    fn_80058920(p3, p4);
}

void fn_80059798(u32 p3) {
    u32 v1;
    u32 v2;
    if ((s32)p3 == (s32)0) {
        __assert((u32)lbl_804981A4, 273, (u32)&lbl_805D5274);
    }
    v1 = M32(((u32)p3+60));
    if ((s32)(v1&0x1) == (s32)0) {
        __assert((u32)lbl_804981A4, 274, (u32)lbl_804981C8);
    }
    v2 = M32(((u32)p3+32));
    fn_80058920(0, (v2-32));
    fn_80058920(0, p3);
}

void fn_80059CFC(void) {
    u32 c0;
    c0 = fn_8007603C();
    if ((s32)c0 == (s32)-1) {
    return;
    }
    fn_80075DC0();
}

void fn_80059D28(u32 p3) {
    u32 v1;
    v1 = lbl_805D528C;
    fn_803D360C(v1, p3);
}

void HasCamera(u32 p3) {
    u32 v1;
    v1 = lbl_805D528C;
    fn_803D3708(v1, p3);
}

void fn_8005A348(void) {
    fn_8005BA38(3, 18);
    fn_8005BEE4(18, 3);
    fn_8005BA38(4, 4);
    fn_8005BEE4(4, 4);
    fn_8005BA38(6, 5);
    fn_8005BEE4(5, 6);
    fn_8005BA38(7, 19);
    fn_8005BEE4(19, 7);
    fn_8005BA38(8, 20);
    fn_8005BEE4(20, 8);
}

void fn_8005A3DC(void) {
    fn_8005BA38(2, 1);
    fn_8005BEE4(1, 2);
    fn_8005BA38(4, 0);
    fn_8005BEE4(0, 4);
    fn_8005BA38(5, 2);
    fn_8005BEE4(2, 5);
}

void fn_8005A440(void) {
    fn_8005BA38(2, 1);
    fn_8005BEE4(1, 2);
}

void fn_8005B8AC(void) {
    OSReport((u32)lbl_80498FEC);
}

void fn_8005B9D0(u32 p3) {
    if ((s32)p3 != (s32)1) {
        if ((s32)p3 != (s32)0) {
            if ((s32)p3 != (s32)2) {
                if ((s32)p3 != (s32)3) {
                    if ((s32)p3 != (s32)4) {
                    return;
                    }
                }
            }
        }
    }
    fn_804484D0(p3);
}

void fn_8005E184(void) {
    fn_80445A84(1);
}





