#pragma dont_inline on

extern void fn_80079518();
extern void fn_800797A8();
extern void fn_8007A2C0();
extern void fn_8007E1A0();
extern void fn_80452790();
extern void fn_804871EC();
extern void fn_8048723C();
extern void fn_8048763C();
extern void fn_80487B58();
extern void fn_80487C0C();
extern void fn_80487CC0();
extern void fn_80487D00();
extern void fn_804881DC();
extern void fn_8048821C();
extern void fn_80488364();
extern void fn_8048841C();
extern void fn_8048842C();

void fn_8007242C(void) {}
void fn_8007863C(void) { fn_80452790(); }
void fn_80078D78(void) {}
void fn_8007A2A0(void) { fn_8007A2C0(); }
void fn_8007A4FC(void) { fn_80079518(); }
void fn_8007A598(void) { fn_800797A8(); }
void initBroadbandInfo(void) { fn_804871EC(); }
void fn_8007B790(void) { fn_8048723C(); }
void fn_8007B800(void) { fn_8048763C(); }
void fn_8007B820(void) { fn_80488364(); }
void fn_8007B840(void) { fn_8048841C(); }
void fn_8007B860(void) { fn_8048842C(); }
void fn_8007B8D4(void) { fn_80487B58(); }
void fn_8007B8F4(void) { fn_80487CC0(); }
void fn_8007B914(void) { fn_80487D00(); }
void fn_8007B934(void) { fn_80487C0C(); }
void fn_8007CE14(void) { fn_804881DC(); }
void fn_8007CE34(void) { fn_8048821C(); }
void fn_8007D714(void) {}
void fn_8007FC50(void) {}
void fn_80080710(void) {}
void fn_8008108C(void) {}
void fn_80083D8C(void) {}
void fn_8008AA08(void) {}
void fn_8009908C(void) { fn_8007E1A0(); }
void fn_800A7B94(void) {}
void fn_800A98DC(void) {}
void fn_800A98E0(void) {}
void fn_800A98E4(void) {}
void fn_800A98E8(void) {}
void fn_800A98EC(void) {}
void fn_800A98F0(void) {}
void fn_800A98F4(void) {}
void fn_800A98F8(void) {}
void fn_800A9BA0(void) {}
void fn_800AACC0(void) {}


typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
#define AT(T, base, off) (*(T*)((char*)(base) + (off)))

extern char lbl_80538088[];
extern char lbl_80550CA8[];
extern char lbl_80550F68[];
extern char lbl_805528F8[];
extern char lbl_8049AB40[];
extern char lbl_80552338[];
extern char lbl_80552A30[];
extern char lbl_80552D88[];
extern char lbl_80552E08[];
extern char lbl_80552E40[];
extern char lbl_80552FB0[];
extern char lbl_805530C8[];
extern char lbl_80553C00[];
extern char lbl_80553DB8[];
extern char lbl_80553E50[];
extern char lbl_8049E690[];
extern char lbl_8049D74C[];
extern char lbl_80499BA0[];
extern char lbl_80499558[];
extern char lbl_80499598[];
extern char* lbl_805DD63C;
extern char* lbl_805DD618;
extern int lbl_805DD640;
extern int lbl_805DD5B8, lbl_805DD5C0, lbl_805DD5E0, lbl_805DD610, lbl_805DD60C, lbl_805DD620, lbl_805DD674;
extern int lbl_805DD698, lbl_805DD6A0;
typedef struct { int a, b; } S8;
extern S8 lbl_805D52F8, lbl_805D5300;
extern int* lbl_805DCD38;
extern const float lbl_805DEAD8, lbl_805DEAD4, lbl_805DEB68, lbl_805DECB8;

extern void fn_8006A250();
extern void fn_80073984();
extern void fn_8045B760();

void fn_80062134(void) { AT(short, lbl_80538088, 0x3e) = 0xcc; }
void fn_80062148(void) { AT(short, lbl_80538088, 0x3e) = 0xff; }
int fn_8006245C(int x) { return (x >> 16) == 0; }
void fn_80062874(int a, int b) { AT(int, lbl_80550CA8, 0x24) = b; AT(int, lbl_80550CA8, 0x20) = a; }
void fn_80062888(void) { AT(int, lbl_80550CA8, 0xc) = 0; AT(int, lbl_80550CA8, 8) = 0; }
typedef struct { int a,b,c,d,e,f; } S18;
#if 0
int fn_80062A68(int i) { return ((struct { char pad[0x10]; S18 arr[1]; }*)lbl_80550CA8)->arr[i].a; }
#endif
#if 0
float fn_80064E88(float x) { float t = lbl_805DEAD8 * x; t = t * x; t = x * t; return lbl_805DEAD4 * x + t; }
#endif
void fn_80068560(S8* p) { *p = lbl_805D52F8; }
void fn_80068574(S8* p) { *p = lbl_805D5300; }
void fn_80068588(int i, S8* p) { *p = *(S8*)(lbl_80499558 + i * 8); }
void fn_800685AC(int i, S8* p) { *p = *(S8*)(lbl_80499598 + i * 8); }
void fn_80068B0C(int* p) { p[2] = 0; }
void fn_80068D68(int* p) { p[2] = 0; }
int fn_80068DBC(void) { return 1; }
void fn_8006AD80(char* p) { fn_8006A250(p + 0xac); }
void fn_8006B03C(void) { lbl_805DD5B8 = 0; }
int fn_80071334(void) { return lbl_805DD5C0; }
int fn_800726E0(void) { return AT(int, lbl_80550F68, 0); }
void fn_800727A0(void) { fn_80073984(0x7d1); }
void fn_800727C4(void) { fn_80073984(0x7d2); }
char* fn_80073F94(void) { return lbl_80550F68 + 4; }
void fn_80073FA4(void) { AT(int, lbl_80550F68, 0x18) = AT(int, lbl_80550F68, 0x98) + 1; }
int fn_8007603C(void) { return AT(int, lbl_80552338, 0xc); }
int fn_8007616C(void) { return AT(int, lbl_80552338, 0x8); }
void fn_80076A84(void) { lbl_805DD5E0 = -1; }
void fn_800786D4(void) { fn_8045B760(0); }
void fn_80078CB0(int v) { AT(int, lbl_805528F8, 0x1c) = v; }
int fn_80078CC0(void) { return AT(int, lbl_805528F8, 8); }
void fn_80078CD0(int v) { AT(int, lbl_805528F8, 8) = v; }
int fn_80078CE0(void) { return AT(int, lbl_805528F8, 0xc); }
int fn_80078E30(void) { return AT(int, lbl_805528F8, 0); }
void fn_80078E40(int v) { AT(int, lbl_805528F8, 0) = v; }
int fn_80078E4C(void) { return AT(int, lbl_805528F8, 4); }
int fn_80078E5C(void) { AT(int, lbl_805528F8, 4) = 0; return 0; }
void fn_800791F8(void) { AT(int, lbl_805528F8, 8) = 0; AT(int, lbl_805528F8, 0x1c) = 1; }
void fn_800793AC(int v) { AT(int, lbl_805DD618, 4) = v; }
void fn_8007997C(void) { lbl_805DD620 = 0; }
int fn_8007A4C8(void) { return lbl_805DD620; }
float fn_8007A940(char* p) { return AT(float, AT(char*, p, 0x34), 0x30); }
void fn_8007A94C(char* p, float f) { AT(float, AT(char*, p, 0x34), 0x30) = f; }
float fn_8007AC18(char* p) { return AT(float, AT(char*, p, 0x34), 0x3c); }
void fn_8007AC24(char* p, float f) { AT(float, AT(char*, p, 0x34), 0x3c) = f; }
int fn_8007B624(void) { return AT(int, lbl_80552A30, 0x18) != 0; }
int fn_8007B640(void) { return AT(int, lbl_80552A30, 0x1c); }
int fn_8007B650(void) { return AT(int, lbl_80552A30, 0x1c) != 0; }
void fn_8007B69C(int v) { AT(int, lbl_80552A30, 0x20) = v; }
char* fn_8007CC90(u8 i) { return lbl_80552A30 + i * 0x19 + 0x45; }
void fn_8007CE54(void) { AT(int, lbl_80552A30, 0x18) = 0; AT(int, lbl_80552A30, 0x1c) = 0; AT(int, lbl_80552A30, 0x20) = 0; }
int fn_8007D42C(int i) { return AT(int, lbl_80552D88, i * 0x14); }
typedef struct { int a,b,c,d,e; } S14;
#if 0
int fn_8007D440(int i) { return ((S14*)lbl_80552D88)[i].c; }
#endif
#if 0
int fn_8007D458(int i) { return ((S14*)lbl_80552D88)[i].e; }
#endif
int fn_8007D470(void) { return lbl_805DD640 == 1; }
int fn_8007D484(void) { return lbl_805DD640 == 2; }
int fn_8007D498(void) { return lbl_805DD640 == 3; }
int fn_8007D4AC(void) { return lbl_805DD640 == 4; }
int fn_8007D4C0(void) { return lbl_805DD640 == 5; }
int fn_8007D4D4(void) { return lbl_805DD640 == 6; }
int fn_8007D4E8(void) { return lbl_805DD640 == 7; }
int fn_8007D4FC(void) { return lbl_805DD640 == 8; }
int fn_8007D510(void) { return lbl_805DD640 == 9; }
int fn_8007D524(void) { return lbl_805DD640 == 10; }
int fn_8007D538(void) { return AT(int, lbl_805DD63C, 0x24); }
int fn_8007D544(void) { return AT(int, lbl_805DD63C, 0x28); }
int fn_8007D550(void) { return AT(int, lbl_805DD63C, 0x2c); }
int fn_8007D55C(void) { return AT(int, lbl_805DD63C, 0x0); }
int fn_8007D568(void) { return AT(int, lbl_805DD63C, 0x4); }
int fn_8007D574(void) { return AT(int, lbl_805DD63C, 0x8); }
int fn_8007D580(void) { return AT(int, lbl_805DD63C, 0xc); }
int fn_8007D58C(void) { return AT(int, lbl_805DD63C, 0x30); }
int fn_8007D598(void) { return AT(int, lbl_805DD63C, 0x34); }
int fn_8007D5A4(void) { return AT(int, lbl_805DD63C, 0x38); }
int fn_8007D5B0(void) { return AT(int, lbl_805DD63C, 0x10); }
int fn_8007D5BC(void) { return AT(int, lbl_805DD63C, 0x14); }
int fn_8007D5C8(void) { return AT(int, lbl_805DD63C, 0x18); }
int fn_8007D5D4(void) { return AT(int, lbl_805DD63C, 0x1c); }
int fn_8007D5E0(void) { return AT(int, lbl_805DD63C, 0x20); }
int fn_8007D5EC(void) { return AT(int, lbl_805DD63C, 0x3c); }
int fn_8007D5F8(void) { return AT(int, lbl_805DD63C, 0x40); }
int fn_8007D604(void) { return AT(int, lbl_805DD63C, 0x44); }
int fn_8007D610(void) { return AT(int, lbl_805DD63C, 0x48); }
void fn_8008A8B8(void) { AT(int, lbl_805530C8, 4) = 0; AT(int, lbl_805530C8, 0) = 0; }
void fn_800949A4(float f) { AT(float, lbl_80553C00, 0x84) = f; }
void fn_800949B4(float f) { AT(float, lbl_80553C00, 0x88) = f; }
void fn_800949C4(float f) { AT(float, lbl_80553C00, 0x8c) = f; }
void fn_800949D4(float f) { AT(float, lbl_80553C00, 0x90) = f; }
void fn_800949E4(float f) { AT(float, lbl_80553C00, 0x94) = f; }
void fn_800949F4(float f) { AT(float, lbl_80553C00, 0x98) = f; }
char* fn_800A21C8(int i) { return lbl_8049E690 + i * 4; }
void fn_800A8A30(void) { AT(int, lbl_80553E50, 0x2f34) = 0; AT(int, lbl_80553E50, 0x2f38) = 0; }
void fn_800A98FC(void) { AT(int, lbl_80553E50, 0x2f3c) = 0; }
void fn_800AAA80(void) { AT(int, lbl_80553E50, 0x2f80) = 0; AT(int, lbl_80553E50, 0x2f88) = 0; AT(int, lbl_80553E50, 0x2f84) = 0; }
void fn_800AB534(float* p, float a, float b) { p[2] = a; p[3] = b; }
int fn_800AB9B4(void) { return lbl_805DD698; }
int fn_800ABA6C(void) { return lbl_805DD6A0; }
void fn_800ABA74(int* p, int v) { p[3] = v; }
