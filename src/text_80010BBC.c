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
typedef struct { u8 :5; u8 f:2; } BFu8_5_2;
typedef struct { u8 :4; u8 f:1; } BFu8_4_1;
typedef struct { u8 :3; u8 f:1; } BFu8_3_1;
typedef struct { u8 :2; u8 f:1; } BFu8_2_1;
typedef struct { u8 :1; u8 f:1; } BFu8_1_1;
extern u8 lbl_80497280[];
extern u32 lbl_805D51B8;
extern u8 lbl_804972D8[];
extern u32 lbl_805D51C0;
extern u32 lbl_805DD578;
extern const float lbl_805DE900;
extern const float lbl_805DE904;
extern const float lbl_805DE908;
extern u32 lbl_805DD598;
extern u8 lbl_80497BA8[];
extern u32 lbl_805D51D8;
extern u8 lbl_80537430[];
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
u32 fn_8002D0EC(void);
u32 fn_8002D9E8(void);
u32 fn_80135D08(u32, u32, u32, float);
void loadMainMenuMusic(u32, float);
void debug_memCard_reqSave(void);
void memset(u32, u32, u32);
void fn_8002CFD8(u32, u32, u32);
float fn_8003D03C(void);
void fn_8003EDEC(u32, float);
u32 fn_8000CC18(void);
void fn_8000BC10(void);
void fn_8000CCB8(void);
void fn_800088C8(u32);
void fn_8005A348(void);
u32 fn_80136AF0(void);
u32 fn_80136FD8(void);
u32 fn_80137470(void);
void fn_80071D7C(u32, float);
void fn_801377E8(void);
void fn_8000B884(void);
void fn_80138204(void);
u32 fn_8000AD48(void);
u32 fn_8000AE50(void);
u32 fn_8007863C(void);
void fn_8007875C(void);
u32 __assert(u32, u32, u32);
void fn_80078720(void);
u32 fn_80078CC0(void);
u32 menu_getCurrentMenuID(void);
float fn_800064F0(void);
void fn_80008220(void);
u32 fn_8042A0A0(u32, u32);
void fn_80078028(u32, u32, u32, u32);
void fn_80076F8C(u32, u32, u32, u32, u32, float, float, float, float);
u32 func_80428F64(u32);
void fn_80077A5C(u32, float);
void menuGetNextMenuID(u32);
void fn_8007859C(void);
u32 fn_8027C830(void);
void fn_8027C838(void);
void fn_80077980(void);
void fn_8006595C(void);
u32 fn_8027E574(void);
u32 fn_80077B50(u32, u32, u32, u32, u32, u32);
void fn_80077ED4(u32, float);
void fn_8027CCA8(void);
void lbLoadMusicLocation(u32);
void fn_800780D0(u32);
void fn_8027CD10(void);
u32 fn_8027EF64(void);
void fn_80233A74(void);
void fn_8005AB84(void);
void fn_8005A440(void);
void fn_8005A608(void);
void fn_8027EF6C(void);
void fn_8027F5B4(void);
void fn_8027F610(void);
u32 gmGetClearcheckerTypeP(u32, u32);
u32 fn_8007B650(void);
void OSReport(u32, ...);
void fn_8006176C(u32);
void fn_80138D74(void);
u32 fn_8000AECC(void);
void fn_801822F4(u32, u32);
u32 fn_8000AAC4(void);
u32 fn_8000AF5C(void);
u32 plGetPlayerKind(u32);
u32 fn_8000A300(void);
u32 fn_8000916C(void);
void fn_8004D248(u32);
void fn_8004D5D4(u32, float);
void fn_802339E4(void);
void fn_8007ADB8(void);
void fn_80281660(void);
void fn_80281AD4(void);
void fn_80281BB4(void);
void fn_802823FC(u32);
void fn_8005A5B0(void);
void fn_804119E4(u32);
u32 HSD_AObjGetFlags(u32);
void fn_803FCDB8(u32, ...);
u32 fn_8040BD4C(u32, u32, u32);
float fn_8040BD64(u32, u32);
float fn_8040C0D8(u32, u32);
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
void HSD_JObjUnref(u32);
void fn_800571A4(u32, u32, u32, u32, u32);
u32 OSDisableInterrupts(u32, u32);
void HSD_GetHeap(u32, float);
float HSD_SetHeap(u32);
void HSD_Free(u32);
float fn_80057A9C(u32, u32, float);
void OSRestoreInterrupts(float);
void fn_80059CFC(void);
u32 fn_80058E84(void);
u32 DVDConvertPathToEntrynum(void);
u32 DVDFastOpen(u32, u32);
void fn_803C5304(u32, float);
void fn_80058920(u32, u32);
u32 fn_8007603C(void);
void fn_80075DC0(void);
void fn_803D360C(u32, u32);
void fn_803D3708(u32, u32);
void fn_8005FA48(u32);
void fn_8005FAE4(u32);
void fn_8005FB64(u32);
u32 fn_8005FBDC(u32);
void fn_8005FD38(u32);
float fn_8005FD9C(u32);
void fn_8005BA38(u32, u32);
float fn_8005C298(u32, u32, u32);
void fn_8005B934(u32, float);
u32 fn_80444984(u32, u32);
void fn_8005BEE4(u32, u32);
void fn_80448220(u32);
void fn_804484D0(u32);
u32 fn_8005C6DC(void);
void fn_80445A84(u32);
void fn_80445810(u32, u32);
void fn_804458D0(u32, u32);
void fn_8044327C(u32, u32, u32);
void fn_80443398(u32, u32);

void fn_800153AC(u32 p3) {
    u32 v1;
    u32 c0;
    u32 c1;
    c0 = fn_8000FCB0(p3);
    v1 = M32(c0);
    c1 = fn_8022D230(p3);
    if ((u32)c1 == (u32)0) {
    return;
    }
    fn_801C8A60(c1, (M32(((u32)v1+128))), (MF(((u32)v1+152))));
}

void fn_8002DC74(void) {
    fn_8000B2B8();
    fn_80072770();
    fn_80073FBC();
}

void fn_800483C0(void) {
    u32 c1;
    fn_80047844();
    c1 = fn_8007863C();
    if ((s32)c1 == (s32)11) {
    return;
    }
    if ((s32)c1 == (s32)0) {
        fn_8007875C();
        fn_8004788C(5);
        return;
    }
    fn_8004788C(3);
}

void fn_80048490(void) {
    u32 c1;
    fn_80047844();
    c1 = fn_8007863C();
    if ((s32)c1 == (s32)11) {
    return;
    }
    if ((s32)c1 == (s32)0) {
        fn_8004788C(6);
        return;
    }
    fn_8004788C(7);
}

void fn_80048600(void) {
    u32 c0;
    c0 = fn_8007863C();
    if ((s32)c0 == (s32)11) {
    return;
    }
    if ((s32)c0 == (s32)0) {
        fn_8004788C(12);
        return;
    }
    fn_8004788C(13);
}

void fn_8004877C(void) {
    __assert((u32)lbl_80497280, 482, (u32)&lbl_805D51B8);
}

void fn_80048888(void) {
    __assert((u32)lbl_80497280, 548, (u32)&lbl_805D51B8);
}

void fn_80048A70(void) {
    fn_80078720();
    fn_8004788C(24);
}

void fn_80048A98(void) {
    u32 c0;
    c0 = fn_80078CC0();
    if ((s32)c0 != (s32)0) {
        fn_8004788C(19);
        return;
    }
    fn_8004788C(20);
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

void fn_80049250(u32 p3, u32 p4) {
    u32 L16[4];
    u32 L12;
    u32 L8;
    u32 c0;
    c0 = fn_8042A0A0(p4, p4);
    if ((s32)c0 != (s32)2) {
    return;
    }
    fn_80078028((lbl_805DD578), (u32)L16, (u32)&L12, (u32)&L8);
    fn_80076F8C((L16[0]), (L12), (L8), 70, 0, (lbl_805DE900), (lbl_805DE900), (lbl_805DE904), (lbl_805DE908));
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

void fn_80049B9C(void) {
    fn_80233A74();
    fn_8006595C();
    fn_8005AB84();
    fn_8005A440();
    fn_8005A608();
    fn_8027EF6C();
    fn_8027F5B4();
    fn_8005E5D0();
    lbLoadMusicLocation(12);
}

void fn_80049BE0(void) {
    u32 c2;
    fn_8027F610();
    fn_8005E5D0();
    c2 = menu_getCurrentMenuID();
    if ((s32)((s8)c2) != (s32)11) {
    return;
    }
    menuGetNextMenuID(16);
    fn_80008220();
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

void fn_8004F418(void) {
    u32 c1;
    fn_8005E5D0();
    c1 = menu_getCurrentMenuID();
    if ((s32)((s8)c1) != (s32)12) {
    return;
    }
    menuGetNextMenuID(16);
    fn_80008220();
}

void fn_8004F5E0(u32 p3) {
    if ((s32)p3 >= (s32)3) {
        __assert((u32)lbl_80497BA8, 167, (u32)&lbl_805D51D8);
    }
    if ((s32)p3 >= (s32)3) {
        __assert((u32)lbl_80497BA8, 134, (u32)&lbl_805D51D8);
    }
    fn_804119E4((M32((u32)lbl_80497B9C+(p3<<2))));
}

void fn_8004F714(void) {
    if ((s32)((s8)(M8(((u32)(u32)lbl_80537430+17)))) != (s32)0) {
        M8(((u32)(u32)lbl_80537430+17)) = 0;
        M8(((u32)(u32)lbl_80537430+16)) = 1;
        return;
    }
    if ((s32)((s8)(M8(((u32)(u32)lbl_80537430+16)))) == (s32)0) {
    return;
    }
    fn_800088C8(40);
    M8(((u32)(u32)lbl_80537430+16)) = 0;
}

u32 fn_80054798(u32 p3) {
    u32 v1;
    u32 ph2;
    u32 c0;
    v1 = M32(((u32)p3+124));
    ph2 = 0;
    if ((u32)v1 != (u32)0) {
        c0 = HSD_AObjGetFlags(v1);
        if ((s32)(c0&0x40000000) == (s32)0) {
            ph2 = 1;
        }
    }
    return ph2;
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
    if ((s32)p3 == (s32)0) {
    return;
    }
    HSD_JObjCheckDepend(p3);
    HSD_AObjInterpretAnim((M32(((u32)p3+124))), p3, (M32(((u32)(M32(p3))+80))));
    HSD_RObjAnimAll((M32(((u32)p3+128))));
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
    if ((u32)p3 == (u32)0) {
    return;
    }
    HSD_AObjInterpretAnim((M32(((u32)p3+20))), p3, (M32(((u32)(M32(p3))+76))));
}

void fn_800570E8(u32 p3, u32 p4) {
    u32 v1;
    fn_8040BD64(p3, 4096);
    M32(((u32)p3+16)) = p4;
    v1 = M32(((u32)p3+16));
    if ((u32)v1 == (u32)0) {
    return;
    }
    M16(((u32)v1+4)) = ((M16(((u32)v1+4)))+1);
    if ((u32)(M16(((u32)v1+4))) != (u32)65535) {
    return;
    }
    __assert((u32)lbl_80497D98, 93, (u32)lbl_80497DA4);
}

void fn_80057164(u32 p3) {
    fn_8040C0D8(p3, 4096);
    HSD_JObjUnref((M32(((u32)p3+16))));
    M32(((u32)p3+16)) = 0;
}

void fn_8005729C(u32 p3, u32 p4, u32 p5) {
    fn_800571A4(p3, (M32(((u32)p4+24))), (M32(((u32)p4+28))), p5, p4);
}

u32 fn_80058E60(void) {
    fn_80059CFC();
    return (lbl_805DD5A8);
}

u32 fn_80059098(void) {
    u32 c1;
    fn_80058E84();
    c1 = DVDConvertPathToEntrynum();
    return (((-1-c1)|(c1+1))>>31);
}

void fn_80059628(u32 p3, u32 p4) {
    if ((s32)p4 == (s32)0) {
        __assert((u32)lbl_804981A4, 273, (u32)&lbl_805D5274);
    }
    if ((s32)((M32(((u32)p4+60)))&0x1) == (s32)0) {
        __assert((u32)lbl_804981A4, 274, (u32)lbl_804981C8);
    }
    fn_80058920(p3, ((M32(((u32)p4+32)))-32));
    fn_80058920(p3, p4);
}

void fn_80059798(u32 p3) {
    if ((s32)p3 == (s32)0) {
        __assert((u32)lbl_804981A4, 273, (u32)&lbl_805D5274);
    }
    if ((s32)((M32(((u32)p3+60)))&0x1) == (s32)0) {
        __assert((u32)lbl_804981A4, 274, (u32)lbl_804981C8);
    }
    fn_80058920(0, ((M32(((u32)p3+32)))-32));
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
    fn_803D360C((lbl_805D528C), p3);
}

void HasCamera(u32 p3) {
    fn_803D3708((lbl_805D528C), p3);
}

void fn_8005A064(void) {
    u32 v1;
    float fph0;
    float d5;
    float d10;
    fn_8005FA48(255);
    fn_8005FAE4(255);
    fn_8005FB64(255);
    fn_8005FBDC(255);
    fn_8005FD38(1);
    d5 = fn_8005FD9C(1);
    v1 = M32(&lbl_80538088[0]);
    fph0 = d5;
    if ((s32)v1 == (s32)0) {
        fn_8005E788();
        fn_8005BA38(0, 17);
        fn_8005C298(17, 0, 1);
        fn_8005BA38(1, 6);
        d10 = fn_8005C298(6, 1, 1);
        fph0 = d10;
    }
    fn_8005B934(1, fph0);
    fn_80444984(10, 999);
    fn_80444984(12, 2);
    fn_80444984(13, 2);
    fn_80444984(14, 2);
    fn_80444984(15, 2);
    fn_80444984(16, 2);
    fn_80444984(17, 2);
    fn_80444984(18, 2);
    fn_80444984(19, 2);
    fn_80444984(20, 2);
    fn_80444984(21, 2);
    fn_80444984(22, 2);
    fn_80444984(23, 2);
    fn_80444984(24, 2);
    fn_80444984(25, 2);
    fn_80444984(26, 2);
    fn_80444984(27, 2);
    fn_80444984(28, 2);
    fn_80444984(29, 2);
    fn_80444984(30, 2);
    fn_80444984(31, 2);
    fn_80444984(32, 2);
    fn_80444984(33, 2);
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

void fn_8005A5B0(void) {
    u32 c0;
    c0 = fn_8005B924();
    fn_8005BA38(5, 8);
    fn_8005C298(8, 5, c0);
    fn_80448220((u32)fn_80059CFC);
}

void fn_8005A608(void) {
    u32 c0;
    c0 = fn_8005B924();
    fn_8005BA38(2, 1);
    fn_8005C298(1, 2, c0);
    fn_80448220((u32)fn_80059CFC);
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

void fn_8005F5BC(u32 p3, u32 p4) {
    u32 ph1;
    if ((s32)p4 > (s32)255) {
        ph1 = 255;
    } else {
        ph1 = p4;
        if ((s32)p4 < (s32)0) {
            ph1 = 0;
        }
    }
    fn_8044327C(p3, (ph1&0xff), 1);
}

void fn_8005F6A8(u32 p3, u32 p4) {
    u32 ph1;
    if ((s32)p4 > (s32)2400) {
        ph1 = 2400;
    } else {
        ph1 = p4;
        if ((s32)p4 < (s32)-10800) {
            ph1 = -10800;
        }
    }
    fn_80443398(p3, ((s16)ph1));
}

u32 fn_8005FBDC(u32 p3) {
    u32 ph1;
    if ((s32)p3 > (s32)255) {
        ph1 = 255;
    } else {
        ph1 = p3;
        if ((s32)p3 < (s32)0) {
            ph1 = 0;
        }
    }
    M16(((u32)(u32)lbl_80538088+62)) = ph1;
    return ph1;
}

typedef struct { u8 :6; u8 f:1; } BFu8_6_1;
typedef struct { u8 :5; u8 f:1; } BFu8_5_1;
typedef struct { u8 f:1; } BFu8_0_1;
void fn_8004D8A8(u32);

typedef struct { u8 :4; u8 f:2; } BFu8_4_2;
typedef struct { u8 f:2; } BFu8_0_2;
extern u8 lbl_80497E00[];
extern u32 lbl_805D5238;
u32 gmGetClearcheckerType0Ptr(void);
u32 fn_8000979C(u32);
u32 fn_8022E7E0(u32);
u32 fn_802309E0(u32);
u32 fn_800092D8(void);
u32 fn_80261CE8(u32);
u32 fn_8022E788(u32);
u32 fn_8022E838(u32);
u32 fn_8022DEC8(u32);
u32 fn_80230AE0(u32);
u32 fn_8023088C(u32);
u32 gmGetClearcheckerType2Ptr(void);
u32 fn_8022F19C(u32);
float fn_8004A054(u32, u32);
u32 fn_80231510(u32, float);
u32 fn_8000C228(u32, float);
u32 fn_8004A130(u32, u32);
u32 HSD_LObjGetFlags(u32);
void fn_80057D94(u32, u32, u32, u32);
u32 fn_80446ACC(u32, u32, u32, u32, u32, u32, u32, u32);
u32 HSD_ArchiveParse(u32);
u32 HSD_ArchiveGetExtern(u32, u32, float);
u32 HSD_ArchiveLocateExtern(u32, u32, u32);
u32 fn_8005915C(u32);
u32 fn_8005884C(u32, u32);
void fn_80059364(u32, u32, u32);
u32 fn_80440BB0(u32);
void fn_8044511C(u32, float);

u32 fn_8004BABC(void) {
    u32 ph0;
    u32 c0;
    u32 c1;
    ph0 = 0;
    do {
        c0 = plGetPlayerKind(ph0);
        if ((s32)c0 == (s32)0) {
            c1 = fn_8022E7E0(ph0);
            if ((s32)c1 != (s32)0) {
                return 1;
            }
        }
        ph0 = (ph0+1);
    } while ((s32)ph0 < (s32)5);
    return 0;
}

u32 fn_8004C254(void) {
    u32 ph0;
    u32 c0;
    u32 c1;
    ph0 = 0;
    do {
        c0 = plGetPlayerKind(ph0);
        if ((s32)c0 == (s32)0) {
            c1 = fn_802309E0(ph0);
            if ((u32)c1 >= (u32)3) {
                return 1;
            }
        }
        ph0 = (ph0+1);
    } while ((s32)ph0 < (s32)5);
    return 0;
}

u32 fn_80057514(u32 p3) {
    u32 ph1;
    u32 c0;
    ph1 = p3;
    while ((u32)ph1 != (u32)0) {
        if ((s32)((M16(((u32)ph1+8)))&0x3) == (s32)0) {
            c0 = HSD_LObjGetFlags(ph1);
            if ((s32)(c0&0x20) == (s32)0) {
                return ph1;
            }
        }
        if ((u32)ph1 == (u32)0) {
            ph1 = 0;
        } else {
            ph1 = (M32(((u32)ph1+12)));
        }
    }
    __assert((u32)lbl_80497E00, 46, (u32)&lbl_805D5238);
    return 0;
}

u32 fn_80057598(u32 p3) {
    u32 ph1;
    u32 c0;
    ph1 = p3;
    while ((u32)ph1 != (u32)0) {
        if ((u32)((M16(((u32)ph1+8)))&0x3) == (u32)1) {
            c0 = HSD_LObjGetFlags(ph1);
            if ((s32)(c0&0x20) == (s32)0) {
                return ph1;
            }
        }
        if ((u32)ph1 == (u32)0) {
            ph1 = 0;
        } else {
            ph1 = (M32(((u32)ph1+12)));
        }
    }
    __assert((u32)lbl_80497E00, 60, (u32)&lbl_805D5238);
    return 0;
}

u32 fn_80057D14(u32 p3, u32 p4, u32 p5) {
    u32 v3;
    u32 ph2;
    u32 ph4;
    M32(((u32)(u32)lbl_80537510+2600)) = p4;
    M32(((u32)(u32)lbl_80537510+2592)) = p5;
    M32(((u32)(u32)lbl_80537510+2596)) = (M32(((u32)p3+4)));
    ph2 = (M32(((u32)p3+12)));
    ph4 = (u32)lbl_80537510;
    while ((u32)ph2 != (u32)0) {
        v3 = M32(((u32)ph2+4));
        if ((u32)v3 != (u32)(M32(((u32)ph4+2596)))) {
            fn_80057D94(0, ph2, 0, 0);
            return 1;
        }
        M32(((u32)ph4+2596)) = (v3+(M32(((u32)ph2+8))));
        ph2 = (M32(ph2));
    }
    return 0;
}





