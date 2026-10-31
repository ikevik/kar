#pragma dont_inline on

extern char* fn_80073F94();

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
typedef struct { int a,b,c,d,e; } S14;
extern S14 lbl_80552D88[];
typedef struct { int a,b,c,d,e,f; } S18;
extern S18 lbl_80550CA8[];
#define AT(T, base, off) (*(T*)((char*)(base) + (off)))

typedef struct { short s0, s2, s4, s6, s8, sa, sc, se; short pad[0x5c - 8]; } E538;
extern struct { char pad[0x382]; E538 arr[1]; } lbl_80538088[];
extern char lbl_80550F68[];
extern char lbl_805528F8[];
extern char lbl_8049AB40[];
extern char lbl_80552338[];
extern char lbl_80552A30[];
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
extern const float lbl_805DEAD8, lbl_805DEAD4, lbl_805DEB68, lbl_805DECB8, lbl_805DEB70;

extern void fn_8006A250();
extern void fn_80073984();
extern void fn_8045B760();

void fn_80062134(void) { AT(short, lbl_80538088, 0x3e) = 0xcc; }
void fn_80062148(void) { AT(short, lbl_80538088, 0x3e) = 0xff; }
int fn_8006245C(int x) { return (x >> 16) == 0; }
void fn_80062874(int a, int b) { AT(int, lbl_80550CA8, 0x24) = b; AT(int, lbl_80550CA8, 0x20) = a; }
void fn_80062888(void) { AT(int, lbl_80550CA8, 0xc) = 0; AT(int, lbl_80550CA8, 8) = 0; }
int fn_80062A68(int i) { return lbl_80550CA8[i].e; }
#if 0
#if 0
float fn_80064E88(float x) { float t = lbl_805DEAD8 * x; t = t * x; t = x * t; return lbl_805DEAD4 * x + t; }
#endif
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
int fn_8007D42C(int i) { return lbl_80552D88[i].a; }
int fn_8007D440(int i) { return lbl_80552D88[i].c; }
int fn_8007D458(int i) { return lbl_80552D88[i].e; }
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

typedef struct VM {
    float f0;
    float f4;
    int* pc;
    int sp;
    int stack[0x24];
    float fa0;
    float fa4;
    u8 xa8;
    u8 xa9;
    u8 xaa_0 : 1;
    u8 xaa_1 : 1;
} VM;
typedef struct { int a, b, c; } V3;

void fn_80068C90(VM* p) { int n = p->sp - 1; p->sp = n; p->pc = (int*)p->stack[n]; }
void fn_80068CB0(VM* p) { p->pc++; p->pc = (int*)*p->pc; }
void fn_80068CCC(VM* p) { float f = lbl_805DEB68; p->pc++; p->f0 = f; }
int fn_80069C14(VM* p) { p->xaa_1 = 0; p->pc++; return 0; }
int fn_80069E68(VM* p) { p->xaa_0 = 0; p->pc++; return 0; }
int fn_80069F58(VM* p) { p->xa8 = 0xff; p->pc++; return 0; }
float fn_8006E58C(float* p) { if (p) return p[2]; return lbl_805DECB8; }
typedef struct { char pad[0x18]; u16 a[1]; } T18;
u16 fn_8006E9EC(T18*** p, int i, int j) { return (*(T18***)p)[i]->a[j]; }
char* fn_8006EE34(char* p, int i) { return p + i * 8 + 0x1c; }
char* fn_8006EE48(char* p, int i) { return p + i * 8 + 0x1c; }
typedef struct { int a, b; u8 c; u8 pad[3]; } S0C;
u8 fn_8006EE5C(S0C* p, int i) { return p[i].c; }
char* fn_8007116C(int i) { return lbl_80499BA0 + i * 0xc; }
void fn_80078604(char* p) { lbl_805DD610 = 1; if (AT(int, p, 0x1c) == 0) lbl_805DD60C = 1; }
void fn_80078620(char* p) { lbl_805DD610 = 0; if (AT(int, p, 0x1c) == 0) lbl_805DD60C = 0; }
typedef struct { int a, b; u8* p; int pad[6]; } S24;
#if 0
#if 0
void fn_80078D58(int i, int j, u8 v) { S24* q = AT(S24*, lbl_8049AB40, 0x60); j[q[i].p] = v; }
#endif
#endif
void fn_8007A900(char* p, V3* d) { *d = AT(V3, AT(char*, p, 0x34), 0x24); }
void fn_8007A920(char* p, V3* s) { AT(V3, AT(char*, p, 0x34), 0x24) = *s; }
void fn_8007AD38(char* p, V3* s) { AT(V3, AT(char*, p, 0x34), 0x28) = *s; }
void fn_8007CCAC(void) { *lbl_805DCD38 = AT(int, lbl_80552A30, 0x40); }
void fn_8008EEF8(void) { lbl_805DD674 = 0; AT(int, lbl_8049D74C, 8) = 0; }
void fn_80098AC0(void) { AT(int, lbl_80553DB8, 0) = 0; AT(int, lbl_80553DB8, 8) = 0; AT(int, lbl_80553DB8, 4) = 0; }
void fn_800A8468(void) { AT(int, lbl_80553E50, 0x2f18) = 0; AT(int, lbl_80553E50, 0x2f1c) = 0; AT(int, lbl_80553E50, 0x2f20) = 1; }
u8 fn_80085D0C(void) { return AT(u8, lbl_80552FB0, 0); }

typedef struct { int id, pad, x8, xc; } Obj65;
typedef struct Node65 { char pad[8]; struct Node65* next; char pad2[0x20]; Obj65* d; } Node65;
extern struct { char pad[0x74]; Node65* head; }* lbl_805DE334;
typedef struct Node6E { struct Node6E* next; int pad; u32 id; char pad2[0x64]; int x70; } Node6E;
extern struct { char pad[0x5c]; Node6E* head; } lbl_80550DC0[];
typedef struct { int a[9]; } S9;
typedef struct { int a[0x16]; } S58;

short fn_80061550(int i) { if (i == -1) return 0x7f; return lbl_80538088[0].arr[i].s2; }
short fn_80061578(int i) { if (i == -1) return 0x7f; return lbl_80538088[0].arr[i].s4; }
short fn_800615A0(int i) { if (i == -1) return 0; return lbl_80538088[0].arr[i].s0; }
short fn_800615C8(int i) { if (i == -1) return 0; return lbl_80538088[0].arr[i].sc; }
void fn_80065B40(int id, int v) { Node65* n; for (n = lbl_805DE334->head; n != 0; n = n->next) { if (n->d->id == id) break; } if (n != 0) n->d->x8 = v; }
void fn_80065DC4(int id, int v) { Node65* n; for (n = lbl_805DE334->head; n != 0; n = n->next) { if (n->d->id == id) break; } if (n != 0) n->d->xc = v; }
void fn_80068B18(VM* p) { p->f0 = p->f0 + (float)(u32)(*p->pc & 0x3FFFFFF); p->pc++; }
void fn_80068B60(VM* p) { p->f0 = (float)(u32)(*p->pc & 0x3FFFFFF) - p->f4; p->pc++; }
void fn_80068BA8(VM* p) { p->stack[p->sp++ - 0] = (int)(p->pc + 1); p->stack[p->sp++] = *p->pc & 0x3FFFFFF; p->pc++; }
void fn_80068C54(VM* p) { p->pc++; p->stack[p->sp++] = (int)(p->pc + 1); p->pc = (int*)*p->pc; }
int fn_80068DC4(VM* p) { AT(int, p, 0) = AT(int, p, 0) + (*p->pc & 0x3FFFFFF); p->pc++; return 0; }
#if 0
int fn_80068DF0(VM* p) { p->xaa_1 = 0; p->xaa_0 = p->xaa_1; p->xa8 = 0xff; p->pc++; return 0; }
#endif
int fn_80069E8C(VM* p) { p->xa8 = AT(u8, p->pc, 3); p->fa4 = (float)p->xa8; p->fa0 = lbl_805DEB70; p->pc++; return 0; }
#if 0
void fn_8006E03C(u32 id, int v) { Node6E* n; for (n = lbl_80550DC0[0].head; n != 0; n = n->next) { if (n->id == id) break; } if (n != 0) n->x70 = v; }
#endif
typedef struct { char pad[4]; u16 a[200]; u16 n; } X;
int fn_8007171C(X* p, u16 v) { u16 n = p->n; if (n < 200) { p->n = n + 1; p->a[n] = v; return 1; } return 0; }
void fn_8007A548(int unused, char** src, S9* dst) { *dst = *(S9*)(*src + 0x10); }
void fn_8007ABA8(char* p, V3* a, V3* b) { char* q = AT(char*, p, 0x34); *a = AT(V3, q, 0x24); *b = AT(V3, q, 0x30); }
void fn_8007ABE0(char* p, V3* a, V3* b) { char* q = AT(char*, p, 0x34); AT(V3, q, 0x24) = *a; AT(V3, q, 0x30) = *b; }
void fn_80083B90(float* a, float* b) { float* d = (float*)(lbl_80552E40 + 0xbc); d[0] = a[0]; d[1] = a[1]; d[2] = a[2]; d[3] = b[0]; d[4] = b[1]; d[5] = b[2]; }
int fn_8009A3A8(u8* p, u32 r) { u32 c = p[3]; int res = 0; if ((c == 0xff && r == 0) || (c != 0xff && r == 2)) res = 1; return res; }
void fn_8009BDAC(char* p, int i) { u8* b = AT(u8*, p, 0x54); b[i / 8] |= 1 << (i % 8); }
int fn_8009BDE4(char* p, int i) { u8* b = AT(u8*, p, 0x54); return (b[i / 8] >> (i % 8)) & 1; }

/* accessors */
void fn_800726F0(int v) { AT(int, fn_80073F94(), 0x18) = v; }
void fn_80072720(void) { char* g = fn_80073F94(); AT(int, g, 0x24) = 0x1; }
void fn_80072748(void) { char* g = fn_80073F94(); AT(int, g, 0x28) = 0x1; }
void fn_80072770(u8 v) { AT(u8, fn_80073F94(), 0x7c) = v; }

extern int fn_800BBE0C(), fn_800BBFC4(), fn_8006E6D8(), fn_8006EAD8(), fn_8006EE9C(), fn_8006F13C(), fn_80071024();
extern void HSD_ObjAllocInit(), HSD_ObjFree(), fn_80072EE4(), fn_8007138C(), fn_80071840(), fn_804889C0();
extern void fn_8006A250();
extern int fn_80006384(), fn_804533C4(), fn_8045B7F8(), fn_80459C40(), fn_80459D6C(), fn_80079428(), fn_80487C48();
extern int* HSD_ObjAlloc();
extern void HSD_ShadowSetActive();
extern char lbl_80550ED8[], lbl_80550F08[], lbl_80550F38[], lbl_80552A00[], lbl_805529D0[];

void fn_80068CE4(VM* p) { fn_800BBE0C((*(u16*)p->pc >> 2) & 0xFF, *p->pc & 0x3FFFF); p->pc++; }
void fn_80068D30(VM* p) { fn_800BBFC4(p); p->pc++; }
int fn_8006EA08(int a, int b) { int r = 0; fn_8006E6D8(a, b, &r); return r; }
int fn_8006EE6C(int a, int b) { int r = 0; fn_8006EAD8(a, b, &r); return r; }
int fn_8006F10C(int a, int b, int c) { int r = 0; fn_8006EE9C(a, b, c, &r); return r; }
int fn_8006F400(int a, int b, int c) { int r = 0; fn_8006F13C(a, b, c, &r); return r; }
int fn_8006FBF0(int a, int* p) { return fn_80071024(p[0], p[1], p[2], a); }
void fn_80071224(void) { lbl_805DD5C0 = 0; HSD_ObjAllocInit(lbl_80550ED8, 0x19c, 4); }
void fn_8007125C(void) { int* p = HSD_ObjAlloc(lbl_80550ED8); p[0] = lbl_805DD5C0; lbl_805DD5C0 = (int)p; }
void fn_80071E14(int p) { HSD_ObjFree(lbl_80550F08, p); }
void fn_80072514(void) { HSD_ObjAllocInit(lbl_80550F38, 0xc, 4); }
void fn_8007ADB8(void) { HSD_ObjAllocInit(lbl_80552A00, 0x24, 4); }
void fn_80072430(char* p) { fn_8006A250(AT(char*, p, 0x2c) + 0x20); }
void fn_80072EB4(void) { AT(int, lbl_80550F68, 0x13c4) = 10; fn_80072EE4(); }
int fn_80075D90(void) { return (u8)fn_80006384() != 0; }
int fn_80078D24(void) { return fn_804533C4(0) != -3; }
void fn_800786F8(void) { fn_8045B7F8(0, 0); }
void fn_80078720(void) { AT(int, lbl_805528F8, 0x20) = 1; fn_80459C40(0, lbl_8049AB40); }
void fn_80078C7C(void) { AT(int, lbl_805528F8, 0x20) = 1; fn_80459D6C(0); }
void fn_80079988(void) { int* p = HSD_ObjAlloc(lbl_805529D0); p[0] = lbl_805DD620; lbl_805DD620 = (int)p; }
void fn_8007A4D0(int a) { fn_80079428(0, a, 0); }
void fn_8007B66C(void) { AT(int, lbl_80552A30, 0x20) = 0; fn_804889C0(); }
void fn_80071810(char* p, int a, int b) { AT(short, p, 0x194) = 0; fn_8007138C(p, a, 0, b); }
void fn_80071C90(char* p, int a, int b, int c) { AT(short, p, 0x194) = 0; fn_80071840(p, a, b, 0, c); }
typedef struct { void* p0; char pad[0x1c]; u8 a : 1; u8 b : 1; } SH;
void fn_8007B3C4(char* o) { SH* s = AT(SH*, o, 0x2c); if (s->a) { s->a = 0; HSD_ShadowSetActive(s->p0, 1); } }
void fn_8007B408(char* o) { SH* s = AT(SH*, o, 0x2c); if (!s->a) { s->a = 1; HSD_ShadowSetActive(s->p0, 0); } }
void fn_8007B470(char* o) { AT(SH*, o, 0x2c)->b = 1; }
int fn_8007B954(void) { if (AT(u8, lbl_80552A30, 0x24) != 0) return AT(u8, lbl_80552A30, 0x25); return fn_80487C48(); }
