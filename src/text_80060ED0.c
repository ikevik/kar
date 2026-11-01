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
#if 0
float fn_80064E88(float x) { float t = lbl_805DEAD8 * x; t = t * x; t = x * t; return lbl_805DEAD4 * x + t; }
#endif
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
#if 0
void fn_80078D58(int i, int j, u8 v) { S24* q = AT(S24*, lbl_8049AB40, 0x60); j[q[i].p] = v; }
#endif
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
#if 0
int fn_80068DF0(VM* p) { p->xaa_1 = 0; p->xaa_0 = p->xaa_1; p->xa8 = 0xff; p->pc++; return 0; }
#endif
#endif
int fn_80069E8C(VM* p) { p->xa8 = AT(u8, p->pc, 3); p->fa4 = (float)p->xa8; p->fa0 = lbl_805DEB70; p->pc++; return 0; }
#if 0
#if 0
void fn_8006E03C(u32 id, int v) { Node6E* n; for (n = lbl_80550DC0[0].head; n != 0; n = n->next) { if (n->id == id) break; } if (n != 0) n->x70 = v; }
#endif
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

extern void* memset();
extern void* memcpy();
extern void HSD_PadRumbleRemove(u8), HSD_PadRumbleOffH(u8), HSD_ShadowFree(), fn_80059CFC(), fn_80073FBC(), fn_8013128C(), OSRestoreInterrupts();
extern void func_80428F64(), fn_801AE4EC(), fn_801DB278(), fn_8007E1A0(), fn_8007E40C(), fn_8007A7E0(), fn_80079518();
extern int fn_80069F74(), fn_80072964(), fn_80074F10(), fn_8007514C(), fn_80078D7C(), fn_8045A238(), OSDisableInterrupts();
extern int fn_8007B9CC();
extern int fn_80487C84();
extern char lbl_80499D20[], lbl_80552338[], lbl_8055294C[], lbl_80552978[], lbl_805529A4[], lbl_80552C2C[];

void fn_8007133C(char* p, char* q) { memset(AT(void*, q, 0x54), 0, ((u32)AT(u16, q, 0x58) >> 3) + 1); AT(short, p, 0x198) = 0; AT(short, p, 0x196) = 0; }
void fn_80071D48(u8 a) { HSD_PadRumbleRemove(a); HSD_PadRumbleOffH(a); }
void fn_80071D7C(void) { int i; for (i = 0; i < 4; i++) { HSD_PadRumbleRemove((u8)i); HSD_PadRumbleOffH((u8)i); } }
void fn_80072490(char* p) { char* o = AT(char*, p, 0x2c); while (fn_80069F74(o, o + 0x20, fn_8007242C) != 0) fn_8006A250(o + 0x20); }
void fn_800724EC(void* p) { if (p != 0) func_80428F64(); }
void fn_80072A28(int p) { while (fn_80072964(p) != 0) fn_80059CFC(); }
void fn_8007510C(int p) { while (fn_80074F10(p) == 1) fn_80059CFC(); }
void fn_80075360(int p) { while (fn_8007514C(p) == 1) fn_80059CFC(); }
void fn_80072D18(void) { char* g = fn_80073F94(); AT(int, g, 0x10) = 1; fn_80073FBC(); }
void fn_80072D44(void) { char* g = fn_80073F94(); AT(int, g, 0x10) = 3; fn_80073FBC(); }
void fn_800753FC(void) { fn_8013128C(); AT(int, lbl_80550F68, 0x10) = AT(int, lbl_80499D20, 0xc); }
void fn_80075D44(void) { memset(lbl_80552338, 0, 16); AT(int, lbl_80552338, 8) = -1; AT(int, lbl_80552338, 0) = -1; AT(int, lbl_80552338, 4) = -1; AT(int, lbl_80552338, 0xc) = -1; }
void fn_8007604C(void) { int e = OSDisableInterrupts(); AT(int, lbl_80552338, 0) = AT(int, lbl_80552338, 4); AT(int, lbl_80552338, 4) = AT(int, lbl_80552338, 0xc); OSRestoreInterrupts(e); }
int fn_80078BEC(void) { if (fn_80078D7C() != 0) return -1; AT(int, lbl_805528F8, 0x20) = 1; return fn_8045A238(0, lbl_8049AB40); }
void fn_8007A62C(char* p) { HSD_ObjFree(lbl_8055294C, AT(int, p, 0x34)); fn_80079518(p); }
void fn_8007A9E4(char* p) { HSD_ObjFree(lbl_80552978, AT(int, p, 0x34)); fn_80079518(p); }
void fn_8007ACC8(char* p) { HSD_ObjFree(lbl_805529A4, AT(int, p, 0x34)); fn_80079518(p); }
void fn_8007AB78(int a, char* b, int c) { fn_8007A7E0(a, b, AT(u8, AT(char*, *(char**)b, 0x34), 0x44), c); }
void fn_8007AD08(int a, char* b, int c) { fn_8007A7E0(a, b, AT(u8, AT(char*, *(char**)b, 0x34), 0x34), c); }
void fn_8007B488(char* p) { HSD_ShadowFree(*(int*)p); HSD_ObjFree(lbl_80552A00, p); }
int fn_8007B990(void) { if (AT(u8, lbl_80552A30, 0x24) != 0) return AT(u8, lbl_80552A30, 0x26); return fn_80487C84(); }
void fn_8007C888(void) { fn_8007B9CC(lbl_80552C2C, lbl_80552C2C); AT(int, lbl_80552C2C, 0) = AT(int, lbl_80552C2C, 0) + 1; }
void fn_8007FFB0(char* p, int a) { char* q = AT(char*, p, 0x2c); fn_8007E1A0(a, q + 0x300, q + 0x324, q + 0x330); }
void fn_8008003C(char* p, int a) { char* q = AT(char*, p, 0x2c); fn_8007E1A0(a, q + 0x318, q + 0x978, q + 0x984); }
void fn_800808D0(char* p, int a) { char* q = AT(char*, p, 0x2c); fn_8007E1A0(a, q + 0x3e8, q + 0x418, q + 0x424); }
void fn_80082250(char* p, int a) { char* q = AT(char*, p, 0x2c); fn_8007E1A0(a, q + 0xdc, q + 0x100, q + 0x10c); }
void fn_80080904(char* p, int a) { char* q = AT(char*, p, 0x2c); fn_8007E40C(a, q + 0x3e8, q + 0x324); }
void fn_80082284(char* p, int a) { char* q = AT(char*, p, 0x2c); fn_8007E40C(a, q + 0xdc, q + 0xc4); }
void fn_800807E0(char* p) { fn_801AE4EC(AT(int, p, 0x2c)); }
void fn_80081208(char* p) { fn_801DB278(AT(int, p, 0x2c)); }
void fn_800811CC(void* d) { memcpy(d, (void*)fn_8007D580(), 0x68); }

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
typedef struct { u8 :5; u8 f:2; } BFu8_5_2;
typedef struct { u8 :4; u8 f:1; } BFu8_4_1;
typedef struct { u8 :3; u8 f:1; } BFu8_3_1;
typedef struct { u8 :2; u8 f:1; } BFu8_2_1;
typedef struct { u8 :1; u8 f:7; } BFu8_1_7;
typedef struct { u8 :1; u8 f:4; } BFu8_1_4;
typedef struct { u8 :1; u8 f:2; } BFu8_1_2;
typedef struct { u8 :1; u8 f:1; } BFu8_1_1;
typedef struct { u8 f:3; } BFu8_0_3;
typedef struct { u8 f:2; } BFu8_0_2;
typedef struct { u8 f:1; } BFu8_0_1;
extern u8 lbl_80550D58[];
extern u8 lbl_80499468[];
extern const float lbl_805DEB24;
extern const float lbl_805DEB20;
extern u32 lbl_805D5308;
extern u8 lbl_80499548[];
extern u8 lbl_80499568[];
extern u8 lbl_80499578[];
extern u8 lbl_804995B8[];
extern u8 lbl_804995D8[];
extern u8 lbl_804995F8[];
extern u32 lbl_805D5310;
extern u32 lbl_805D5318;
extern u32 lbl_805D5320;
extern u32 lbl_805D5328;
extern u32 lbl_805D5330;
extern u32 lbl_805D5338;
extern u8 lbl_80550D88[];
extern u32 lbl_805D5358;
extern const float lbl_805DEC00;
extern const float lbl_805DEBFC;
extern const float lbl_805DEBF0;
extern u8 lbl_80499CD8[];
extern u8 lbl_80499CE8[];
extern u32 lbl_805DD5C8;
extern u8 lbl_80499CF8[];
extern u8 lbl_80499D08[];
extern u32 lbl_805DD5D0;
extern u32 lbl_805DD5D8;
extern u32 lbl_805DED30;
extern u32 lbl_805DED34;
extern u32 lbl_805DED38;
extern u32 lbl_805DED3C;
extern u32 lbl_805DED40;
extern u32 lbl_805DED44;
extern u32 lbl_805D53CC;
extern u32 lbl_805DD5EC;
extern const float lbl_805DED70;
extern u32 lbl_805DD628;
extern u32 lbl_805D540C;
extern u8 lbl_8049B0F4[];
void fn_8007D718(void);
void fn_8007D7F0(void);
extern u8 lbl_8049B9D0[];
extern const float lbl_805DEE10;
extern u8 lbl_80552F78[];
void fn_800849B8(void);
extern u8 lbl_80553044[];
extern u8 lbl_8049BF54[];
extern u8 lbl_8049BF18[];
extern u32 lbl_805D5750;
extern u8 lbl_8049BFA0[];
extern u8 lbl_8049BFB0[];
extern u32 lbl_805D5758;
extern u8 lbl_805530D8[];
void fn_80098548(void);
extern const float lbl_805DF004;
extern const float lbl_805DF010;
extern const float lbl_805DF070;
extern const float lbl_805DF074;
extern u8 lbl_8049E6B4[];
extern const float lbl_805DF080;
extern const float lbl_805DF084;
extern const float lbl_805DF098;
extern const float lbl_805DF09C;
extern u32 lbl_805DD6CC;
extern const float lbl_805DF140;
extern const float lbl_805DF144;
extern u8 lbl_80556E20[];
extern u8 lbl_80557034[];
extern u32 lbl_805DD69C;
extern u8 lbl_80557008[];
extern u8 lbl_80557060[];
extern u32 lbl_805DD6A4;
void fn_800AC8CC(void);
extern u8 lbl_805DD6B0;
extern u32 lbl_805DD6AC;
extern u32 lbl_805DD6A8;
u32 fn_80442A10(u32, u32, u32, u32, u32);
void fn_80442CFC(u32, u32);
u32 fn_80443D8C();
u32 fn_80411CAC(void);
u32 fn_80411CE8(void);
void fn_803D798C(u32, u32, u32);
void fn_803D7A54(u32, u32, u32);
void fn_80413A6C(void);
void fn_80413AA4(void);
void fn_800638F8(u32, float, float);
float PSVECMag();
void fn_80063F8C(u32, u32, float);
u32 HSD_CObjLoadDesc();
void HSD_CObjGetViewportf(u32, u32);
void HSD_CObjSetAspect();
void HSD_CObjSetViewport(u32, u32);
void HSD_CObjSetScissor(u32, u32);
void fn_80064770(u32, u32);
u32 fn_80057468(u32, u32, u32);
u32 fn_8006DCC0(u32, u32, u32, u32, u32, u32, u32);
void lbLoadArchive(u32, ...);
void HSD_FogSet();
void fn_80438C50(u32, float, float);
void fn_80071E40(u32, u32, float, float);
void HSD_FogGetCurrent(void);
void fn_8006A3F0(u32, u32, u32, u32);
void fn_80078CF0();
void fn_80414058(void);
void VISetPreRetraceCallback(u32);
void VISetPostRetraceCallback(u32);
void fn_803DF384(u32);
void fn_803DF1E8(void);
void VIWaitForRetrace(void);
void OSResetSystem(u32, u32, u32);
void fn_800760DC(void);
void GXInvalidateVtxCache(void);
void GXInvalidateTexAll(void);
void HSD_StartRender(u32);
void fn_804516E4(u32, u32);
void HSD_IsEFBCopyPass(void);
void fn_804112B4(u32);
void fn_803CC518(u32);
void GXSetTexCoordGen2(u32, u32, u32, u32, u32, u32);
void GXSetNumTexGens(u32);
void fn_803CD4A0(u32);
void fn_803CF30C(u32);
void fn_803CF874(u32);
void fn_803CF8A0(u32);
void fn_803CEF00(u32, u32);
void fn_803CEF6C(u32, u32, u32);
void fn_803CF134(u32, u32, u32, u32);
void fn_803CEBE0(u32, u32, u32, u32, u32);
void fn_803CEC68(u32, u32, u32, u32, u32, u32);
void fn_803CEC24(u32, u32, u32, u32, u32);
void fn_803CECD0(u32, u32, u32, u32, u32, u32);
void fn_803CEE94(u32, u32);
void fn_803CEDAC(u32, u32, u32);
void fn_803CEE20(u32, u32);
void fn_803CEFC0(u32, u32, u32, u32, u32);
void fn_803CF05C(u32, u32, u32, u32, u32);
void fn_803CF820(u32, u32, u32, u32);
void fn_803EE8B8(u32, u32);
void fn_803F28A4(u32);
void fn_8007744C(u32, u32);
void fn_8045E978(void);
void OSEnableInterrupts(u32);
u32 HSD_Alloc();
float __assert(u32, u32, u32);
u32 OSCreateThread();
void OSResumeThread();
u32 HVQM4PlayerExControlExit(u32);
void fn_80459FBC(u32, u32);
float fn_80062CA4();
void fn_80079A60(u32, u32, u32, float);
void fn_80052F7C(u32, u32);
void fn_80052FB8(u32, u32);
void fn_8048846C(void);
void fn_80412740();
void fn_80413EE0(u32, u32, u32);
void fn_80413F34(void);
void fn_80413F9C(void);
void fn_80413FF0(void);
void fn_804125F8(u32);
u32 DBIsDebuggerPresent(void);
u32 fn_803D3C04(u32, u32);
void fn_8043A1CC(u32, u32);
void fn_80440130(u32, u32, u32);
u32 fn_80191C84(u32);
void fn_8008C718(u32);
void fn_8008C63C(u32);
u32 fn_80192764();
float fn_80080804(u32, u32);
void fn_80083D20(u32, u32, float);
float fn_80080858(u32, u32);
float fn_801957AC(u32);
void fn_8007E500(u32, u32, u32);
void fn_801D1048(u32, u32, u32, u32);
u32 fn_80005D04();
void gmSetFreezeGameFlag(u32);
u32 func_80428F28();
void HSD_GObj_AddGXLink(u32, u32, u32, u32);
float fn_80085D1C(u32);
u32 fn_80084FA0();
u32 fn_80085674();
u32 fn_8008A1F8();
void fn_80084D0C();
void fn_80086120(void);
void fn_80088078(u32, u32);
void fn_80088110(u32);
void OSReport(u32, ...);
u32 fn_80245ED0(u32);
void fn_80062ECC(u32, u32);
void fn_80411590(void);
u32 fn_80411874(void);
float fn_8009DB18(void);
void fn_8009A5CC(void);
void fn_800A0650(void);
void fn_800A3E64(void);
void fn_800A9AE4(void);
void fn_800A9F60(void);
void fn_8008B1E0(u32, u32, u32, float, float, float);
void fn_800A12F0(u32, u32, u32, u32, u32, float, float);
u32 fn_800E2C84(u32, u32, u32, u32, u32, float, float);
u32 fn_800CF600(u32);
u32 fn_800CF66C(u32);
void fn_800A16A8(float, float);
void fn_800A24AC(u32, u32, u32, u32, float);
u32 HSD_CObjGetCurrent();
void HSD_CObjGetViewingMtx(u32, u32);
void fn_803CAC04(void);
void GXSetVtxAttrFmt(u32, u32, u32, u32, u32);
void GXSetVtxDesc(u32, u32);
float GXLoadPosMtxImm(u32, u32);
void fn_803D1670(u32, u32);
float fn_803D078C(u32, u32);
void GXSetCurrentMtx();
void fn_80098E30();
void fn_803CD3AC();
void fn_803CD2B8(u32, u32);
void fn_800A1680(u32, u32, u32, u32);
void HSD_GObj_AddProc();
u32 fn_8044F674(u32, u32, u32, u32, u32, u32, u32, u32);
u32 fn_8044FA70(u32, u32);
u32 fn_8044F128(u32, u32, float, float, float, float, float);
void fn_8044F800(u32, u32, u32);
void fn_8044F8C8(u32, u32);
void fn_8044F350(u32);
u32 fn_800AB1B4(u32, u32, u32, u32, u32, u32);
u32 fn_800AC998(u32);
void CSS_playerQuit(u32);
void fn_800ACE08(void);

void fn_800615F0(u32 p3) {
    fn_80442A10(p3, 255, 127, 0, 1);
}

void fn_80061620(void) {
    fn_80442A10(((1<<16)+3), 255, 127, 4, 1);
}

void playSoundFX_menuSound(void) {
    fn_80442A10(((1<<16)+1), 255, 127, 6, 1);
}

void fn_80061690(void) {
    fn_80442A10(((1<<16)+2), 255, 127, 7, 1);
}

void CSS_playerQuit(u32 p3) {
    fn_80442A10((1<<16), 255, 127, 5, 1);
}

void CSS_playSoundFX(void) {
    fn_80442A10(((2<<16)+4), 255, 127, 9, 1);
}

void fn_80061734(void) {
    fn_80442A10(((1<<16)+4), 255, 127, 8, 1);
}

void fn_8006176C(u32 p3) {
    fn_80442A10(p3, 255, 127, 10, 2);
}

void fn_8006179C(u32 p3, u32 p4, u32 p5) {
    fn_80442A10(p3, (p4&0xff), (p5&0xff), 10, 2);
}

void fn_800617CC(u32 p3) {
    fn_80442A10(p3, 255, 127, 11, 2);
}

void fn_800617FC(void) {
    fn_80442A10(((2<<16)+2), 255, 127, 3, 1);
}

u32 fn_80061834(u32 p3, u32 p4, u32 p5) {
    u32 c0;
    c0 = fn_80442A10(p3, 255, (p4&0xff), 10, 2);
    fn_80442CFC(c0, (p5&0xff));
    return c0;
}

void fn_80062900(u32 p3) {
    fn_803D798C((((u32)lbl_80550CA8+(p3*36))+52), 1, 0);
}

void fn_8006293C(u32 p3) {
    u32 L8[2];
    fn_803D7A54((((u32)lbl_80550CA8+(p3*36))+52), (u32)L8, 1);
}

void fn_80062978(void) {
    u32 c0;
    c0 = fn_8007B640();
    if ((s32)c0 == (s32)0) {
        fn_80413A6C();
        return;
    }
    fn_80413AA4();
}

float fn_80063F1C(u32 p3, float q1, float q2) {
    float d1;
    fn_800638F8(p3, q1, q2);
    d1 = PSVECMag(p3);
    MF(p3) = ((MF(p3))*(q2/d1));
    MF(((u32)p3+4)) = ((MF(((u32)p3+4)))*(q2/d1));
    MF(((u32)p3+8)) = ((MF(((u32)p3+8)))*(q2/d1));
    return (q2/d1);
}

u32 fn_80064448(u32 p3, u32 p4) {
    fn_80063F8C(p3, 1, (MF(p4)));
    fn_80063F8C(p3, 2, (MF(((u32)p4+4))));
    fn_80063F8C(p3, 4, (MF(((u32)p4+8))));
    return p3;
}

void fn_800657E0(u32 p3) {
    HSD_ObjFree((u32)lbl_80550D58, p3);
}

void InitCamera(void) {
    HSD_CObjLoadDesc((u32)lbl_80499468);
}

float fn_80066D44(u32 p3) {
    float L8[6];
    HSD_CObjGetViewportf(p3, (u32)L8);
    return ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24)));
}

void fn_80066D94(u32 p3) {
    float L8[4];
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_80066E64(u32 p3) {
    float L8[4];
    HSD_CObjSetViewport(p3, (u32)&lbl_805D52F8);
    HSD_CObjSetScissor(p3, (u32)&lbl_805D5300);
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_80066EE0(u32 p3) {
    float L8[4];
    HSD_CObjSetViewport(p3, (u32)&lbl_805D5308);
    HSD_CObjSetScissor(p3, (u32)&lbl_805D5300);
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_80066F5C(u32 p3, u32 p4) {
    float L8[4];
    if ((s32)p3 == (s32)0) {
    return;
    }
    if ((s32)p4 < (s32)0) {
    return;
    }
    if ((u32)p4 >= (u32)2) {
    return;
    }
    HSD_CObjSetViewport(p3, ((u32)lbl_80499548+(p4<<3)));
    HSD_CObjSetScissor(p3, ((u32)lbl_80499558+(p4<<3)));
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_80067008(u32 p3, u32 p4) {
    float L8[4];
    if ((s32)p3 == (s32)0) {
    return;
    }
    if ((s32)p4 < (s32)0) {
    return;
    }
    if ((u32)p4 >= (u32)2) {
    return;
    }
    HSD_CObjSetViewport(p3, ((u32)lbl_80499568+(p4<<3)));
    HSD_CObjSetScissor(p3, ((u32)lbl_80499558+(p4<<3)));
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_800670B4(u32 p3, u32 p4) {
    float L8[4];
    if ((s32)p3 == (s32)0) {
    return;
    }
    if ((s32)p4 < (s32)0) {
    return;
    }
    if ((u32)p4 >= (u32)4) {
    return;
    }
    HSD_CObjSetViewport(p3, ((u32)lbl_80499578+(p4<<3)));
    HSD_CObjSetScissor(p3, ((u32)lbl_80499598+(p4<<3)));
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_80067160(u32 p3, u32 p4) {
    float L8[4];
    if ((s32)p3 == (s32)0) {
    return;
    }
    if ((s32)p4 < (s32)0) {
    return;
    }
    if ((u32)p4 >= (u32)4) {
    return;
    }
    HSD_CObjSetViewport(p3, ((u32)lbl_804995B8+(p4<<3)));
    HSD_CObjSetScissor(p3, ((u32)lbl_80499598+(p4<<3)));
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_8006720C(u32 p3, u32 p4) {
    float L8[4];
    if ((s32)p3 == (s32)0) {
    return;
    }
    if ((s32)p4 < (s32)0) {
    return;
    }
    if ((u32)p4 >= (u32)4) {
    return;
    }
    HSD_CObjSetViewport(p3, ((u32)lbl_804995D8+(p4<<3)));
    HSD_CObjSetScissor(p3, ((u32)lbl_804995F8+(p4<<3)));
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_800672B8(u32 p3) {
    float L8[4];
    if ((s32)p3 == (s32)0) {
    return;
    }
    HSD_CObjSetViewport(p3, (u32)&lbl_805D5310);
    HSD_CObjSetScissor(p3, (u32)&lbl_805D5318);
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_80067338(u32 p3) {
    float L8[4];
    if ((s32)p3 == (s32)0) {
    return;
    }
    HSD_CObjSetViewport(p3, (u32)&lbl_805D5320);
    HSD_CObjSetScissor(p3, (u32)&lbl_805D5328);
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_800673B8(u32 p3) {
    float L8[4];
    if ((s32)p3 == (s32)0) {
    return;
    }
    HSD_CObjSetViewport(p3, (u32)&lbl_805D5330);
    HSD_CObjSetScissor(p3, (u32)&lbl_805D5338);
    HSD_CObjGetViewportf(p3, (u32)L8);
    HSD_CObjSetAspect(p3, ((lbl_805DEB20)*((((L8[1])-(L8[0]))/((L8[3])-(L8[2])))/(lbl_805DEB24))));
}

void fn_80068538(u32 p3) {
    fn_80064770(p3, (u32)lbl_80550D88);
}

void fn_8006A508(u32 p3, u32 p4, u32 p5) {
    u32 c0;
    c0 = fn_80057468((u32)&lbl_805D5358, p4, p5);
    M32(((u32)p3+516)) = c0;
    M32(((u32)p3+520)) = p4;
    M32(((u32)p3+524)) = p5;
}

void fn_8006ADA4(u32 p3) {
    fn_8006A250(p3);
    fn_8006A250((p3+172));
    fn_8006A250((p3+344));
}

float fn_8006C180(u32 p3, u32 p4, float q1, float q2) {
    float v1;
    float v5;
    float fph2;
    float fph3;
    if ((s32)p4 != (s32)0) {
        v1 = lbl_805DEC00;
        fph2 = (q2-q1);
        if ((q2-q1) < v1) {
            fph2 = (-(q2-q1));
        }
        if (fph2 > (lbl_805DEBFC)) {
            fph2 = ((lbl_805DEBF0)-fph2);
        }
        return ((MF(((u32)p3+12)))*fph2);
    }
    v5 = lbl_805DEC00;
    fph3 = (q2-q1);
    if ((q2-q1) < v5) {
        fph3 = (-(q2-q1));
    }
    return ((MF(((u32)p3+12)))*fph3);
}

u32 fn_8006DE2C(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, u32 p8, u32 p9) {
    u32 c0;
    if ((s32)p7 != (s32)0) {
        c0 = fn_8006DCC0(p3, p4, p5, p6, p8, p9, p9);
        if ((u32)c0 != (u32)0) {
            M8(((u32)c0+24)) = 3;
            M32(((u32)c0+32)) = p7;
            return (M32(((u32)c0+8)));
        }
        return 0;
    }
    return 0;
}

void lbLoadRumble(void) {
    lbLoadArchive(0, (u32)lbl_80499CD8, (u32)&lbl_805DD5C8, (u32)lbl_80499CE8, 0);
}

void fn_80071DC0(void) {
    HSD_ObjAllocInit((u32)lbl_80550F08, 216, 4);
    lbLoadArchive(0, (u32)lbl_80499CF8, (u32)&lbl_805DD5D0, (u32)lbl_80499D08, 0);
}

void fn_80072458(u32 p3, u32 p4, u32 p5) {
    fn_8006A3F0(((M32(((u32)p3+44)))+32), (lbl_805DD5D0), p4, p5);
}

u32 fn_80075CD8(u32 p3) {
    if ((s32)p3 == (s32)4) {
        return 0;
    }
    fn_80078CF0(p3);
    fn_80414058();
    VISetPreRetraceCallback(0);
    VISetPostRetraceCallback(0);
    fn_803DF384(1);
    fn_803DF1E8();
    VIWaitForRetrace();
    VIWaitForRetrace();
    OSResetSystem(1, 0, 0);
    return 0;
}

void fn_80076504(void) {
    GXInvalidateVtxCache();
    GXInvalidateTexAll();
    HSD_StartRender(0);
    fn_804516E4(0, (lbl_805DD5D8));
    HSD_IsEFBCopyPass();
    fn_804112B4(0);
}

void fn_80076A90(void) {
    u32 L24[2];
    u32 L20;
    u32 L16;
    u32 L12;
    u32 L8;
    u32 v1;
    u32 v2;
    fn_803CC518(0);
    GXSetTexCoordGen2(0, 1, 4, 60, 0, 125);
    GXSetTexCoordGen2(1, 1, 4, 60, 0, 125);
    GXInvalidateTexAll();
    GXSetNumTexGens(2);
    fn_803CD4A0(1);
    fn_803CF30C(6);
    fn_803CF874(1);
    fn_803CF8A0(0);
    fn_803CEF00(0, 4);
    fn_803CEF6C(0, 0, 1);
    fn_803CF134(0, 0, 0, 4);
    fn_803CEBE0(0, 13, 8, 10, 8);
    fn_803CEC68(0, 0, 2, 0, 1, 2);
    fn_803CEC24(0, 6, 4, 5, 4);
    fn_803CECD0(0, 0, 2, 0, 1, 2);
    fn_803CEF00(1, 4);
    fn_803CEF6C(1, 0, 2);
    fn_803CF134(1, 0, 0, 4);
    fn_803CEBE0(1, 13, 8, 10, 8);
    fn_803CEC68(1, 0, 2, 0, 1, 3);
    fn_803CEC24(1, 6, 4, 5, 4);
    fn_803CECD0(1, 0, 2, 0, 1, 3);
    fn_803CF134(2, 255, 255, 255);
    fn_803CEBE0(2, 15, 4, 14, 2);
    fn_803CEC68(2, 0, 0, 0, 0, 0);
    fn_803CEC24(2, 7, 2, 6, 1);
    fn_803CECD0(2, 1, 0, 0, 0, 0);
    fn_803CEE94(2, 12);
    fn_803CEF00(2, 28);
    fn_803CF134(3, 1, 1, 255);
    fn_803CEBE0(3, 15, 8, 14, 0);
    fn_803CEC68(3, 0, 0, 1, 0, 0);
    fn_803CEC24(3, 7, 4, 6, 0);
    fn_803CECD0(3, 0, 0, 1, 0, 0);
    fn_803CEE94(3, 13);
    fn_803CEF00(3, 29);
    fn_803CEF6C(3, 0, 0);
    fn_803CF134(4, 255, 255, 255);
    fn_803CEBE0(4, 15, 6, 14, 0);
    fn_803CEC68(4, 0, 0, 0, 1, 0);
    fn_803CEC24(4, 7, 3, 6, 0);
    fn_803CECD0(4, 1, 0, 0, 1, 0);
    fn_803CEE94(4, 14);
    fn_803CEF00(4, 30);
    fn_803CF134(5, 255, 255, 255);
    fn_803CEBE0(5, 0, 1, 14, 15);
    fn_803CEC68(5, 0, 0, 0, 1, 0);
    fn_803CEC24(5, 7, 7, 7, 7);
    fn_803CECD0(5, 0, 0, 0, 1, 0);
    fn_803CEF6C(5, 0, 0);
    fn_803CEE94(5, 15);
    v1 = lbl_805DED30;
    v2 = lbl_805DED34;
    L24[0] = v1;
    L24[1] = v2;
    fn_803CEDAC(1, (u32)L24, v1);
    L20 = (lbl_805DED38);
    fn_803CEE20(0, (u32)&L20);
    L16 = (lbl_805DED3C);
    fn_803CEE20(1, (u32)&L16);
    L12 = (lbl_805DED40);
    fn_803CEE20(2, (u32)&L12);
    L8 = (lbl_805DED44);
    fn_803CEE20(3, (u32)&L8);
    fn_803CEFC0(0, 0, 1, 2, 3);
    fn_803CEFC0(1, 0, 3, 3, 3);
    fn_803CEFC0(2, 0, 0, 3, 0);
    fn_803CF05C(7, 0, 1, 7, 0);
    fn_803CF820(0, 1, 0, 0);
}

void fn_80077404(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805D53CC;
    if ((u32)v1 != (u32)0) {
        fn_803EE8B8(v1, 1);
    }
    v2 = M32(((u32)(u32)&lbl_805D53CC+4));
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_803EE8B8(v2, 1);
}

void fn_80077938(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD610;
    lbl_805DD60C = (((-(s32)v1)|v1)>>31);
    fn_803F28A4(v1);
    v2 = lbl_805DD5EC;
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_8007744C(v2, 0);
}

u32 fn_80078284(u32 p3) {
    u32 v1;
    u32 c0;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+4));
        if ((u32)v1 != (u32)0) {
            c0 = HVQM4PlayerExControlExit(v1);
            if ((s32)c0 != (s32)0) {
                return 1;
            }
        }
    }
    return 0;
}

void debug_memCard_reqDelete(void) {
    M32(((u32)(u32)lbl_805528F8+32)) = 1;
    fn_80459FBC(0, ((u32)lbl_8049AB40+64));
}

void fn_8007A51C(u32 p3, u32 p4) {
    fn_80079A60((p3+56), p4, 0, (lbl_805DED70));
}

void fn_8007B4C8(u32 p3) {
    u32 ph0;
    fn_80052F7C(p3, (1024<<16));
    if ((u32)p3 == (u32)0) {
        ph0 = 0;
    } else {
        ph0 = (M32(((u32)p3+16)));
    }
    if ((u32)ph0 == (u32)0) {
    return;
    }
    fn_80052FB8(p3, (1024<<16));
}

u32 fn_8007B880(void) {
    fn_8048846C();
    if ((u32)(lbl_805DD628) != (u32)0) {
        __assert((u32)&lbl_805D540C, 436, (u32)lbl_8049B0F4);
    }
    M32(((u32)(u32)lbl_80552A30+32)) = 0;
    M32(((u32)(u32)lbl_80552A30+24)) = 0;
    return (u32)lbl_80552A30;
}

void fn_8007D934(void) {
    u32 c0;
    u32 c1;
    c0 = DBIsDebuggerPresent();
    if ((s32)c0 != (s32)0) {
    return;
    }
    c1 = fn_803D3C04(8192, 4);
    fn_8043A1CC(c1, 8192);
    fn_80440130((u32)fn_8007D718, (u32)fn_8007D7F0, 1);
}

void fn_8007FE04(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32(((u32)p3+44));
    c0 = fn_80191C84(p3);
    if ((s32)c0 != (s32)0) {
        fn_8008C718((M8(((u32)v1+9))));
        return;
    }
    fn_8008C63C((M8(((u32)v1+9))));
}

void fn_8007FEF4(u32 p3) {
    u32 v1;
    u32 v6;
    float fph2;
    u32 c0;
    float d1;
    float d2;
    v1 = M32(((u32)p3+44));
    M8(((u32)v1+2714)) = ((M8(((u32)v1+2714)))+1);
    if ((u32)(M8(((u32)v1+2714))) >= (u32)14) {
        M8(((u32)v1+2714)) = 0;
    }
    M16(((u32)v1+2716)) = ((M16(((u32)v1+2716)))&-471);
    v6 = M16(((u32)v1+2716));
    M16(((u32)v1+2716)) = (v6|(M16((u32)lbl_8049B9D0+((M8(((u32)v1+2714)))<<1))));
    c0 = fn_80192764(p3, (u32)lbl_8049B9D0, v6);
    if ((s32)c0 != (s32)0) {
        d1 = fn_80080858((M32(((u32)v1+1012))), (M8(((u32)v1+2714))));
        fph2 = d1;
    } else {
        d2 = fn_801957AC(v1);
        fph2 = d2;
    }
    fn_80083D20(p3, ((M16(((u32)v1+2716)))&0xff), fph2);
}

void fn_8007FFE4(u32 p3, u32 p4) {
    float L8[6];
    float v1;
    u32 v2;
    v1 = lbl_805DEE10;
    v2 = M32(((u32)p3+44));
    L8[0] = ((MF(((u32)v2+732)))*v1);
    L8[1] = ((MF(((u32)v2+736)))*v1);
    L8[2] = ((MF(((u32)v2+740)))*v1);
    fn_8007E40C(p4, (v2+768), (u32)L8, v2);
}

u32 fn_800822B4(void) {
    return (((M8(&lbl_80552E08[0]))>>7)&0x1);
}

u32 fn_800822C4(void) {
    u32 v1;
    u32 v2;
    u32 v4;
    v1 = M32(((u32)(u32)lbl_80552E08+44));
    v2 = M8((u32)lbl_80552E08);
    ((BFu8_0_1*)((u32)lbl_80552E08))->f = 0;
    if ((u32)v1 == (u32)0) {
    return (u32)lbl_80552E08;
    }
    M8(((u32)v1+38)) = ((M8(((u32)v1+38)))|64);
    v4 = M32(((u32)(u32)lbl_80552E08+44));
    M8(((u32)v4+38)) = ((M8(((u32)v4+38)))|128);
    return v4;
}

void fn_80083644(u32 p3, u32 p4) {
    fn_8007E1A0(p4, ((M32(((u32)p3+44)))+760), ((M32(((u32)p3+44)))+820), ((M32(((u32)p3+44)))+832));
}

u32 fn_80083714(void) {
    return (((M8(&lbl_80552E40[0]))>>7)&0x1);
}

u32 fn_80083724(void) {
    u32 v1;
    u32 v2;
    u32 v4;
    v1 = M32(((u32)(u32)lbl_80552E40+24));
    v2 = M8((u32)lbl_80552E40);
    ((BFu8_0_1*)((u32)lbl_80552E40))->f = 0;
    if ((u32)v1 == (u32)0) {
    return (u32)lbl_80552E40;
    }
    M8(((u32)v1+38)) = ((M8(((u32)v1+38)))|64);
    v4 = M32(((u32)(u32)lbl_80552E40+24));
    M8(((u32)v4+38)) = ((M8(((u32)v4+38)))|128);
    return v4;
}

u32 fn_800837AC(void) {
    return (((M8(&lbl_80552E40[0]))>>5)&0x3);
}

u32 fn_8008397C(void) {
    return (((M8(&lbl_80552E40[0]))>>3)&0x1);
}

void fn_80083D90(u32 p3, u32 p4) {
    fn_8007E1A0(p4, ((M32(((u32)p3+44)))+172), ((M32(((u32)p3+44)))+208), ((M32(((u32)p3+44)))+220));
}

void fn_80084B80(void) {
    u32 c0;
    if ((u32)(M32(((u32)(u32)lbl_80552F78+48))) != (u32)0) {
    return;
    }
    c0 = func_80428F28(36, 63, 0);
    if ((s32)c0 != (s32)0) {
        HSD_GObj_AddGXLink(c0, (u32)fn_800849B8, 36, 1);
    }
    M32(((u32)(u32)lbl_80552F78+48)) = c0;
}

void fn_80086120(void) {
    u32 v1;
    u32 v3;
    u32 ph0;
    v1 = M32(((u32)(u32)lbl_80552FB0+68));
    M8((u32)lbl_80552FB0) = 0;
    ph0 = (u32)lbl_80552FB0;
    if ((u32)v1 != (u32)0) {
        M8(((u32)v1+38)) = ((M8(((u32)v1+38)))|64);
        v3 = M32(((u32)(u32)lbl_80552FB0+68));
        M8(((u32)v3+38)) = ((M8(((u32)v3+38)))|128);
        ph0 = v3;
    }
    fn_80088078(ph0, v1);
}

u32 fn_80086D44(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    v1 = M32(((u32)p3+44));
    M32(((u32)v1+128)) = (M32(p4));
    M32(((u32)v1+132)) = (M32(p5));
    M32(((u32)v1+136)) = (M32(p6));
    return v1;
}

u32 fn_80087420(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+44));
    v2 = M8(((u32)v1+112));
    ((BFu8_0_1*)(((u32)v1+112)))->f = 0;
    return v1;
}

void fn_80087F0C(u32 p3) {
    fn_80088110(p3);
    HSD_ObjFree((u32)lbl_80553044, p3);
}

void fn_80087F48(u32 p3) {
    if ((u32)(M32(((u32)p3+44))) == (u32)0) {
        OSReport((u32)lbl_8049BF54);
        __assert((u32)lbl_8049BF18, 1995, (u32)&lbl_805D5750);
    }
    func_80428F64(p3);
}

void fn_80088110(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+108));
    if ((u32)v1 == (u32)0) {
    return;
    }
    fn_80245ED0(v1);
    M32(((u32)p3+108)) = 0;
}

void fn_8008A7E4(u32 p3) {
    memset(((M32(((u32)p3+44)))+116), 0, 12);
}

void fn_8008A980(void) {
    u32 v1;
    u32 c1;
    v1 = M32(((u32)(u32)lbl_805530C8+4));
    if ((u32)v1 == (u32)1) {
        fn_80411590();
        c1 = fn_80411874();
        if ((s32)c1 == (s32)-1) {
            OSReport((u32)lbl_8049BFA0);
            __assert((u32)lbl_8049BFB0, 123, (u32)&lbl_805D5758);
        }
        M32(((u32)(u32)lbl_805530C8+4)) = 0;
        return;
    }
    if ((u32)v1 != (u32)2) {
    return;
    }
    M32(((u32)(u32)lbl_805530C8+4)) = 0;
}

u32 fn_8008C614(u32 p3) {
    return (((-(s32)(M32((u32)lbl_805530D8+((MS16(((u32)(M32(((u32)p3+44)))+104)))*88))))|(M32((u32)lbl_805530D8+((MS16(((u32)(M32(((u32)p3+44)))+104)))*88))))>>31);
}

u32 fn_80095C94(u32 p3) {
    if ((u32)(M8(((u32)(u32)lbl_80553C00+102))) == (u32)0) {
        M32(((u32)(u32)lbl_80553C00+124)) = p3;
        M16(((u32)(u32)lbl_80553C00+52)) = 10;
        M32(((u32)(u32)lbl_80553C00+112)) = 11;
        M32(((u32)(u32)lbl_80553C00+116)) = 9;
        M32(((u32)(u32)lbl_80553C00+120)) = 13;
        M8(((u32)(u32)lbl_80553C00+102)) = 8;
        return 1;
    }
    return 0;
}

u32 fn_80095CE4(void) {
    if ((s32)(MS16(((u32)(u32)lbl_80553C00+52))) == (s32)0) {
        M32(((u32)(u32)lbl_80553C00+128)) = 0;
        M16(((u32)(u32)lbl_80553C00+52)) = 8;
        return 1;
    }
    return 0;
}

void fn_80098940(void) {
    u32 c0;
    c0 = func_80428F28(37, 63, 0);
    if ((u32)c0 == (u32)0) {
    return;
    }
    HSD_GObj_AddGXLink(c0, (u32)fn_80098548, 33, 1);
}

void fn_80098AD8(void) {
    M8(&lbl_80553E50[0]) = 0;
    fn_8009DB18();
    fn_8009A5CC();
    fn_800A0650();
    fn_800A8468();
    fn_800A3E64();
    fn_800A8A30();
    fn_800A98DC();
    fn_800A98FC();
    fn_800A9AE4();
    fn_800A9F60();
}

void fn_8009A3D8(u32 p3, float q1, float q2) {
    float L20[5];
    float L8[3];
    float v1;
    float v2;
    v1 = lbl_805DF004;
    v2 = lbl_805DF010;
    L20[0] = v1;
    L20[1] = v1;
    L20[2] = v1;
    L8[0] = v1;
    L8[1] = v2;
    L8[2] = v1;
    fn_8008B1E0(p3, (u32)L20, (u32)L8, q1, q2, v1);
    fn_80062CA4(p3, p3);
}

float fn_8009DB18(void) {
    float v1;
    float v2;
    v1 = lbl_805DF070;
    v2 = lbl_805DF074;
    M32(((u32)(u32)lbl_80553E50+4)) = 0;
    M32(((u32)(u32)lbl_80553E50+8)) = 0;
    MF(((u32)(u32)lbl_80553E50+12)) = v1;
    MF(((u32)(u32)lbl_80553E50+16)) = v2;
    MF(((u32)(u32)lbl_80553E50+20)) = v1;
    M32(((u32)(u32)lbl_80553E50+24)) = -1;
    return v1;
}

void fn_800A14C4(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7, float q1, float q2) {
    u32 c1;
    u32 c3;
    u32 c5;
    if ((u32)p6 != (u32)0) {
        fn_800A12F0(p3, p4, p6, p5, p7, q1, q2);
        return;
    }
    c1 = fn_800E2C84(p3, p4, p5, p6, p7, q1, q2);
    if ((s32)c1 == (s32)0) {
        fn_800A12F0(p3, p4, ((u32)lbl_8049E6B4+8), p5, p7, q1, q2);
        return;
    }
    c3 = fn_800CF600(p4);
    if ((s32)c3 != (s32)0) {
        fn_800A12F0(p3, p4, ((u32)lbl_8049E6B4+16), p5, p7, q1, q2);
        return;
    }
    c5 = fn_800CF66C(p4);
    if ((s32)c5 != (s32)0) {
        fn_800A12F0(p3, p4, ((u32)lbl_8049E6B4+24), p5, p7, q1, q2);
        return;
    }
    fn_800A12F0(p3, p4, (u32)lbl_8049E6B4, p5, p7, q1, q2);
}

void fn_800A1680(u32 p3, u32 p4, u32 p5, u32 p6) {
    fn_800A16A8((lbl_805DF080), (lbl_805DF084));
}

void fn_800A2464(u32 p3, u32 p4) {
    float L20[3];
    float L8[3];
    float v1;
    float v2;
    v1 = lbl_805DF098;
    v2 = lbl_805DF09C;
    L20[0] = v1;
    L20[1] = v1;
    L20[2] = v2;
    L8[0] = v1;
    L8[1] = v2;
    L8[2] = v1;
    fn_800A24AC(p3, p4, (u32)L20, (u32)L8, v1);
}

void fn_800A9618(u32 p3, u32 p4) {
    fn_800A1680((lbl_805DD6CC), 0, p3, p4);
}

void fn_800A96B0(u32 p3, u32 p4) {
    fn_800A1680((lbl_805DD6CC), 2, p3, p4);
}

void fn_800A96E0(u32 p3, u32 p4) {
    fn_800A1680((lbl_805DD6CC), 3, p3, p4);
}

void fn_800A9710(u32 p3, u32 p4) {
    fn_800A1680((lbl_805DD6CC), 4, p3, p4);
}

void fn_800A9740(u32 p3, u32 p4) {
    fn_800A1680((lbl_805DD6CC), 5, p3, p4);
}

u32 fn_800A9820(u32 p3, u32 p4, u32 p5) {
    u32 v3;
    u32 v4;
    M32(p3) = (M32(((u32)(u32)lbl_80553E50+12124)));
    M32(p4) = (M32(((u32)(u32)lbl_80553E50+12128)));
    v3 = M32(((u32)(u32)lbl_80553E50+12132));
    v4 = M32(((u32)(u32)lbl_80553E50+12136));
    M32(p5) = v3;
    M32(((u32)p5+4)) = v4;
    M32(((u32)p5+8)) = (M32(((u32)(u32)lbl_80553E50+12140)));
    return v3;
}

float fn_800AA654(void) {
    float v1;
    float v2;
    u32 v3;
    v1 = lbl_805DF140;
    v2 = lbl_805DF144;
    v3 = M8(((u32)(u32)lbl_80553E50+12173));
    M32(((u32)(u32)lbl_80553E50+12116)) = 0;
    M32(((u32)(u32)lbl_80553E50+12120)) = 1;
    ((BFu8_1_1*)(((u32)(u32)lbl_80553E50+12173)))->f = 0;
    M8(((u32)(u32)lbl_80553E50+12126)) = 0;
    M8(((u32)(u32)lbl_80553E50+12125)) = 0;
    M8(((u32)(u32)lbl_80553E50+12124)) = 0;
    M8(((u32)(u32)lbl_80553E50+12127)) = 255;
    M8(((u32)(u32)lbl_80553E50+12130)) = 0;
    M8(((u32)(u32)lbl_80553E50+12129)) = 0;
    M8(((u32)(u32)lbl_80553E50+12128)) = 0;
    M8(((u32)(u32)lbl_80553E50+12131)) = 255;
    MF(((u32)(u32)lbl_80553E50+12132)) = v1;
    MF(((u32)(u32)lbl_80553E50+12136)) = v1;
    MF(((u32)(u32)lbl_80553E50+12140)) = v2;
    M8(((u32)(u32)lbl_80553E50+12146)) = 0;
    M8(((u32)(u32)lbl_80553E50+12145)) = 0;
    M8(((u32)(u32)lbl_80553E50+12144)) = 0;
    M8(((u32)(u32)lbl_80553E50+12147)) = 255;
    MF(((u32)(u32)lbl_80553E50+12148)) = v1;
    MF(((u32)(u32)lbl_80553E50+12152)) = v1;
    MF(((u32)(u32)lbl_80553E50+12156)) = v2;
    return v1;
}

void fn_800AAC90(void) {
    memset((u32)lbl_80556E20, 0, 488);
}

void fn_800AACF8(u32 p3) {
    u32 v3;
    u32 v5;
    u32 v7;
    if ((u32)(M32(((u32)p3+52))) == (u32)0) {
        HSD_ObjFree((u32)lbl_80557034, (M32(((u32)p3+40))));
    }
    v3 = M32(((u32)p3+48));
    if ((u32)v3 != (u32)0) {
        M32(((u32)v3+44)) = (M32(((u32)p3+44)));
    }
    v5 = M32(((u32)p3+44));
    if ((u32)v5 != (u32)0) {
        M32(((u32)v5+48)) = (M32(((u32)p3+48)));
    } else {
        v7 = M32(((u32)p3+48));
        if ((u32)v7 != (u32)0) {
            lbl_805DD69C = v7;
        } else {
            lbl_805DD69C = 0;
        }
    }
    HSD_ObjFree((u32)lbl_80557008, p3);
}

void fn_800AB4C0(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 ph1;
    u32 ph3;
    v1 = M8(((u32)p3+4));
    if ((s32)v1 <= (s32)p4) {
        ph1 = (v1-1);
    } else {
        ph1 = p4;
        if ((s32)p4 < (s32)0) {
            ph1 = 0;
        }
    }
    M8(((u32)p3+6)) = ph1;
    v2 = M8(((u32)p3+5));
    if ((s32)v2 <= (s32)p5) {
        ph3 = (v2-1);
    } else {
        ph3 = p5;
        if ((s32)p5 < (s32)0) {
            ph3 = 0;
        }
    }
    M8(((u32)p3+7)) = ph3;
}

void debugPutSpace(u32 p3, u32 p4) {
    u32 v1;
    u32 ph1;
    v1 = M8(((u32)p3+4));
    if ((s32)v1 <= (s32)p4) {
        ph1 = (v1-1);
    } else {
        ph1 = p4;
        if ((s32)p4 < (s32)0) {
            ph1 = 0;
        }
    }
    M8(((u32)p3+6)) = ph1;
}

void fn_800AB5A4(u32 p3) {
    memset((M32(((u32)p3+40))), 0, ((M8(((u32)p3+5)))*((M8(((u32)p3+4)))<<1)));
}

u32 fn_800AC998(u32 p3) {
    u32 c1;
    HSD_ObjAllocInit((u32)lbl_80557060, 32, 4);
    lbl_805DD6A4 = 0;
    c1 = fn_800AB9B4();
    if ((s32)c1 != (s32)0) {
        HSD_GObj_AddProc(c1, (u32)fn_800AC8CC, (p3&0xff));
    }
    return c1;
}

void fn_800ACF40(void) {
    u32 c0;
    c0 = fn_8044F674(0, 0, 28, 19, 0, 18, 1, 0);
    lbl_805DD6B0 = c0;
}

void fn_800AD1A4(void) {
    u32 v1;
    u32 v2;
    v1 = lbl_805DD6AC;
    if ((u32)v1 != (u32)0) {
        fn_8044F350(v1);
        lbl_805DD6AC = 0;
    }
    v2 = lbl_805DD6A8;
    if ((u32)v2 == (u32)0) {
    return;
    }
    fn_8044F350(v2);
    lbl_805DD6A8 = 0;
}

u32 fn_800AD1F0(void) {
    u32 c0;
    c0 = fn_800AB1B4(8, 61, 0, 28, 1, 22);
    if ((s32)c0 != (s32)0) {
        fn_800AC998(0);
    }
    return c0;
}

u32 debug_subMenu_InBetween1(u32 p3) {
    if ((s32)p3 == (s32)0) {
        CSS_playerQuit(p3);
        fn_800ABA6C();
        fn_800ACE08();
    }
    return 0;
}

typedef struct { u8 :6; u8 f:2; } BFu8_6_2;
u32 fn_80060FA0(u32);
u32 fn_800604BC();
u32 fn_80060ED0();
u32 fn_80444CC4(u32);
u32 fn_80444FE0(u32);
u32 fn_8006580C(u32, u32);
u32 fn_802414D4();
u32 fn_800A3AB0();
u32 fn_800AAD94();

u32 fn_80061ACC(void) {
    u32 ph0;
    u32 c0;
    ph0 = 4;
    do {
        c0 = fn_80444CC4(ph0);
        ph0 = (ph0+1);
    } while ((s32)ph0 <= (s32)62);
    return c0;
}

u32 fn_80061B08(void) {
    u32 ph0;
    u32 c0;
    ph0 = 4;
    do {
        c0 = fn_80444FE0(ph0);
        ph0 = (ph0+1);
    } while ((s32)ph0 <= (s32)62);
    return c0;
}

void fn_800836E4(u32 p3, u32 p4) {
    fn_8007E40C(p4, ((M32(((u32)p3+44)))+760), ((M32(((u32)p3+44)))+748));
}

void fn_80083DC4(u32 p3, u32 p4) {
    fn_8007E40C(p4, ((M32(((u32)p3+44)))+172), ((M32(((u32)p3+44)))+148));
}

typedef struct { u8 f:6; } BFu8_0_6;
typedef struct { u32 w[7]; } S28;
typedef struct { u32 w[4]; } S16;
typedef struct { u32 w[3]; } S12;
extern u8 lbl_8054FAB0[];
extern const float lbl_805DEA50;
extern const float lbl_805DEA54;
extern u8 lbl_80499628[];
extern u32 lbl_805DD5E8;
extern const float lbl_805DED50;
extern const float lbl_805DEE14;
extern const float lbl_805DEE18;
extern const float lbl_805DEE98;
extern u32 lbl_805D5430;
void fn_80094174(void);
void fn_8009440C(void);
extern u8 lbl_80553BD8[];
extern u32 lbl_805D59B8;
extern u8 lbl_8049F070[];
extern const float lbl_805DF18C;
void OSCancelAlarm(u32);
void fn_80062F94(void);
u32 gmGet_Dist(void);
u32 fn_8045F70C(u32);
u32 fn_8045F714(u32);
u32 fn_800A97E0(void);
u32 fn_800A9854(u32, u32);
u32 fn_8020438C(u32);
void HSD_StateInvalidate();
void fn_8040E390(u32, u32);
void GXSetLineWidth(u32, u32);
void GXBegin();
void fn_8007E128();
void fn_803CC474(u32, u32);

void fn_800611B0(void) {
    u32 s30;
    u32 s31;
    s30 = (u32)lbl_8054FAB0;
    fn_80060FA0((u32)lbl_8054FAB0);
    s31 = 0;
    do {
        fn_800604BC(s30, s31);
        s31 = (s31+1);
    } while ((s32)s31 < (s32)512);
    s31 = 0;
    do {
        fn_80060ED0(s30, s31);
        s31 = (s31+1);
    } while ((s32)s31 < (s32)512);
}

void fn_80061A44(void) {
    u32 s31;
    fn_80444CC4(2);
    s31 = 4;
    do {
        fn_80444CC4(s31);
        s31 = (s31+1);
    } while ((s32)s31 <= (s32)62);
}

void fn_80061A88(void) {
    u32 s31;
    fn_80444FE0(2);
    s31 = 4;
    do {
        fn_80444FE0(s31);
        s31 = (s31+1);
    } while ((s32)s31 <= (s32)62);
}

u32 fn_800628A0(void) {
    u32 s31;
    u32 s30;
    u32 c1;
    u32 c2;
    u32 c3;
    s30 = OSDisableInterrupts();
    c1 = fn_8007B640();
    if ((s32)c1 == (s32)0) {
        c2 = fn_80411CAC();
        s31 = c2;
    } else {
        c3 = fn_80411CE8();
        s31 = c3;
    }
    OSRestoreInterrupts(s30);
    return s31;
}

void fn_80062A80(void) {
    u32 s30;
    u32 s31;
    u32 v1;
    s30 = OSDisableInterrupts();
    s31 = (u32)lbl_80550CA8;
    v1 = M32((s31+48));
    if ((s32)v1 != (s32)0) {
        OSCancelAlarm((s31+128));
        M32((s31+48)) = 0;
    }
    OSRestoreInterrupts(s30);
}

void fn_80062AE0(u32 p3) {
    u32 s31;
    u32 c0;
    s31 = p3;
    c0 = OSDisableInterrupts();
    M32(((u32)(u32)lbl_80550CA8+168)) = s31;
    OSRestoreInterrupts(c0, (u32)lbl_80550CA8);
}

void fn_80063610(u32 p3, u32 p4, u32 p5, float q1) {
    float v1;
    float v2;
    v1 = lbl_805DEA50;
    if (q1 <= v1) {
        *(S12*)(p5) = *(S12*)(p3);
        return;
    }
    v2 = lbl_805DEA54;
    if (q1 >= v2) {
        *(S12*)(p5) = *(S12*)(p4);
        return;
    }
    fn_80062F94();
}

u32 fn_80068D74(u32 p3, u32 p4) {
    u32 v1;
    if ((u32)p4 < (u32)11) {
        v1 = M32((u32)lbl_80499628+(p4<<2));
        ((void (*)())(v1))(p3, (u32)lbl_80499628);
        return 1;
    }
    return 0;
}

u32 fn_80076088(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c3;
    c0 = OSDisableInterrupts();
    v1 = M32(((u32)(u32)lbl_80552338+4));
    v2 = M32(((u32)(u32)lbl_80552338+12));
    M32((u32)lbl_80552338) = v1;
    M32(((u32)(u32)lbl_80552338+4)) = v2;
    OSRestoreInterrupts(c0, v1, (u32)lbl_80552338);
    fn_800760DC();
    c3 = fn_8007616C();
    return (((-1-c3)|(c3+1))>>31);
}

void fn_800766C8(void) {
    u32 s31;
    u32 c0;
    s31 = (u32)&lbl_805DD5D8;
    c0 = gmGet_Dist();
    switch ((s32)(c0&0xff)) {
    case 0:
        M32((s31+4)) = 0;
        return;
    case 1:
        M32((s31+4)) = 1;
        return;
    }
    M32((s31+4)) = 0;
}

u32 HVQM4PlayerExSetAudioFilter(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+4));
    if ((u32)v1 != (u32)0) {
        c0 = fn_8045F70C(v1);
        return c0;
    }
    return 0;
}

u32 HVQM4PlayerExGetAudioFilter(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((p3+4));
    if ((u32)v1 != (u32)0) {
        c0 = fn_8045F714(v1);
        return c0;
    }
    return 0;
}

void fn_8007854C(void) {
    u32 v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD5E8;
    s31 = v1;
    while ((u32)s31 != (u32)0) {
        v2 = M32(s31);
        v3 = M32((v2+32));
        if ((u32)v3 != (u32)0) {
            ((void (*)())(v3))(v2);
        }
        v4 = M32((s31+4));
        s31 = v4;
    }
}

u32 fn_8007859C(void) {
    u32 v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    c0 = fn_80075D90();
    if ((s32)c0 != (s32)0) {
        v1 = lbl_805DD5E8;
        s31 = v1;
        while ((u32)s31 != (u32)0) {
            v2 = M32(s31);
            v3 = M32((v2+36));
            if ((u32)v3 != (u32)0) {
                ((void (*)())(v3))(v2);
            }
            v4 = M32((s31+4));
            s31 = v4;
        }
        return 1;
    }
    return 0;
}

void fn_800795C0(u32 p3) {
    u32 s31;
    float v1;
    float v2;
    float d0;
    float d2;
    s31 = p3;
    d0 = PSVECMag((s31+8));
    v1 = lbl_805DED50;
    if (v1 != d0) {
        fn_80062CA4((s31+8), (s31+8));
    } else {
        MF((s31+8)) = v1;
        MF((s31+12)) = v1;
        MF((s31+16)) = v1;
    }
    d2 = PSVECMag((s31+24));
    v2 = lbl_805DED50;
    if (v2 != d2) {
        fn_80062CA4((s31+24), (s31+24));
        return;
    }
    MF((s31+24)) = v2;
    MF((s31+28)) = v2;
    MF((s31+32)) = v2;
}

void fn_80079648(u32 p3, u32 p4) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    float d0;
    float d2;
    s30 = p3;
    s31 = (s30+24);
    v1 = M32(p4);
    v2 = M32((p4+4));
    M32((s30+24)) = v1;
    M32((s30+28)) = v2;
    v3 = M32((p4+8));
    M32((s30+32)) = v3;
    d0 = PSVECMag(s31, p4, v1);
    v4 = lbl_805DED50;
    if (v4 != d0) {
        fn_80062CA4(s31, s31);
    } else {
        MF((s30+24)) = v4;
        MF((s30+28)) = v4;
        MF((s30+32)) = v4;
    }
    s31 = (s30+40);
    d2 = PSVECMag(s31);
    v5 = lbl_805DED50;
    if (v5 != d2) {
        fn_80062CA4(s31, s31);
        return;
    }
    MF((s30+40)) = v5;
    MF((s30+44)) = v5;
    MF((s30+48)) = v5;
}

void fn_800796F8(u32 p3, u32 p4) {
    u32 s30;
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    float v4;
    float v5;
    float d0;
    float d2;
    s30 = p3;
    s31 = (s30+24);
    v1 = M32(p4);
    v2 = M32((p4+4));
    M32((s30+40)) = v1;
    M32((s30+44)) = v2;
    v3 = M32((p4+8));
    M32((s30+48)) = v3;
    d0 = PSVECMag(s31, p4, v1);
    v4 = lbl_805DED50;
    if (v4 != d0) {
        fn_80062CA4(s31, s31);
    } else {
        MF((s30+24)) = v4;
        MF((s30+28)) = v4;
        MF((s30+32)) = v4;
    }
    s31 = (s30+40);
    d2 = PSVECMag(s31);
    v5 = lbl_805DED50;
    if (v5 != d2) {
        fn_80062CA4(s31, s31);
        return;
    }
    MF((s30+40)) = v5;
    MF((s30+44)) = v5;
    MF((s30+48)) = v5;
}

void fn_8007A38C(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 c0;
    s31 = p6;
    s30 = p5;
    s29 = p4;
    s28 = p3;
    c0 = fn_800A97E0();
    if ((s32)c0 != (s32)0) {
        fn_800A9820(s29, s30, s31);
        return;
    }
    v1 = M32((s28+20));
    M32(s29) = v1;
    v2 = M32((s28+24));
    M32(s30) = v2;
    *(S12*)(s31) = *(S12*)((s28+28));
}

u32 fn_8007A420(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p6;
    s30 = p5;
    s29 = p4;
    s28 = p3;
    c0 = fn_800A9854(s29, s30);
    if ((s32)c0 != (s32)0) {
        return 1;
    }
    v1 = M8((s28+17));
    if ((s32)(v1&0x4) != (s32)0) {
        v2 = M32((s28+40));
        M32(s29) = v2;
        *(S12*)(s30) = *(S12*)((s28+44));
        v3 = M8((s28+16));
        M8(s31) = v3;
        return 1;
    }
    return 0;
}

void fn_8007A7E0(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    v1 = M32(p4);
    v2 = M32((v1+16));
    M32(p6) = v2;
    v3 = M32((v1+20));
    M32((p6+4)) = v3;
    v4 = M32((v1+36));
    M32((p6+20)) = v4;
    if ((s32)(p5&0xff) != (s32)0) {
        *(S12*)((p6+8)) = *(S12*)((v1+24));
        *(S12*)((p6+24)) = *(S12*)((v1+40));
        return;
    }
    *(S12*)((p6+8)) = *(S12*)((p4+8));
    *(S12*)((p6+24)) = *(S12*)((p4+8));
}

void fn_8007A86C(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = M32(p4);
    v2 = M32((v1+52));
    v3 = M32((v1+16));
    v4 = M8((v2+56));
    M32(p5) = v3;
    v5 = M32((v1+20));
    M32((p5+4)) = v5;
    v6 = M32((v1+36));
    M32((p5+20)) = v6;
    if ((u32)v4 != (u32)0) {
        *(S12*)((p5+8)) = *(S12*)((v1+24));
        *(S12*)((p5+24)) = *(S12*)((v1+40));
        return;
    }
    *(S12*)((p5+8)) = *(S12*)((p4+8));
    *(S12*)((p5+24)) = *(S12*)((p4+8));
}

void fn_8007AD58(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 s31;
    float v2;
    u32 v3;
    s30 = p4;
    s31 = M32((p5+52));
    fn_800797A8();
    v2 = MF((s30+44));
    MF((s31+36)) = v2;
    *(S12*)((s31+40)) = *(S12*)((s30+48));
    v3 = M8((s30+60));
    M8((s31+52)) = v3;
}

void fn_8007B44C(u32 p3, u32 p4, float q1) {
    u32 v1;
    v1 = M32((p3+44));
    *(S12*)((v1+8)) = *(S12*)(p4);
    MF((v1+20)) = q1;
}

void fn_80080070(u32 p3, u32 p4) {
    u32 loc8[4];
    u32 s30;
    u32 s31;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float d0;
    s30 = p4;
    s31 = M32((p3+44));
    d0 = PSVECMag((s31+2668));
    v2 = lbl_805DEE14;
    if (d0 != v2) {
        v3 = lbl_805DEE18;
        v4 = MF((s31+2668));
        MF(((u32)loc8)) = (v4*(v3/d0));
        v5 = MF((s31+2672));
        MF(((u32)loc8+4)) = (v5*(v3/d0));
        v6 = MF((s31+2676));
        MF(((u32)loc8+8)) = (v6*(v3/d0));
    } else {
        MF(((u32)loc8+8)) = v2;
        MF(((u32)loc8+4)) = v2;
        MF(((u32)loc8)) = v2;
    }
    fn_8007E500(s30, (s31+768), ((u32)loc8));
}

void fn_80083BCC(void) {
    u32 s31;
    u32 s30;
    u32 v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float v8;
    u32 c0;
    u32 c3;
    s31 = (u32)lbl_80552E40;
    s30 = (s31+188);
    v1 = M32((s31+12));
    c0 = fn_8020438C(v1);
    if ((s32)c0 == (s32)0) {
        v2 = lbl_805DEE98;
        M32((s31+12)) = 0;
        MF((s30+8)) = v2;
        MF((s30+4)) = v2;
        MF(s30) = v2;
        MF((s30+20)) = v2;
        MF((s30+16)) = v2;
        MF((s30+12)) = v2;
        return;
    }
    v3 = MF(s30);
    v4 = MF((s30+12));
    if (v3 == v4) {
        v5 = MF((s30+4));
        v6 = MF((s30+16));
        if (v5 == v6) {
            v7 = MF((s30+8));
            v8 = MF((s30+20));
            if (v7 == v8) {
            return;
            }
        }
    }
    HSD_StateInvalidate(-1);
    fn_8040E390(0, 2);
    c3 = HSD_CObjGetCurrent();
    GXLoadPosMtxImm((c3+84), 0);
    GXSetLineWidth(12, 5);
    GXBegin(168, 0, 2);
    fn_8007E128(s30, (s30+12), (u32)&lbl_805D5430);
}

void fn_80083CBC(void) {
    u32 c1;
    fn_80005D04(0);
    c1 = fn_80005D04();
    if ((s32)c1 != (s32)0) {
    return;
    }
    gmSetFreezeGameFlag(0);
}

void fn_80086710(void) {
    u32 v1;
    v1 = M8(((u32)(u32)lbl_80552FB0+112));
    M32(((u32)(u32)lbl_80552FB0+116)) = -1;
    ((BFu8_3_1*)(((u32)(u32)lbl_80552FB0+112)))->f = 1;
}

void fn_80088278(u32 p3, u32 p4) {
    u32 s30;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 ph0;
    u32 c0;
    s30 = p4;
    s31 = M32((p3+44));
    v2 = M8((s31+112));
    ((BFu8_1_2*)((s31+112)))->f = 0;
    v3 = M32((s31+108));
    ph0 = v3;
    if ((u32)v3 != (u32)0) {
        c0 = fn_80245ED0(v3);
        M32((s31+108)) = 0;
        ph0 = c0;
    }
    if ((s32)s30 != (s32)1) {
    return;
    }
    v4 = M8(((u32)(u32)lbl_80552FB0+112));
    ((BFu8_5_2*)(((u32)(u32)lbl_80552FB0+112)))->f = 0;
    if ((s32)s30 != (s32)1) {
    return;
    }
}

void fn_800948A4(void) {
    u32 s31;
    s31 = func_80428F28(35, 63, 0);
    if ((s32)s31 != (s32)0) {
        HSD_GObj_AddGXLink(s31, (u32)fn_80094174, 35, 1);
        HSD_GObj_AddProc(s31, (u32)fn_8009440C, 13);
    }
    M32(((u32)(u32)lbl_80553BD8+36)) = s31;
}

u32 fn_80094A88(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    s31 = p3;
    c0 = fn_8007D604();
    if ((u32)c0 == (u32)0) {
        v1 = lbl_805D59B8;
        return v1;
    }
    if ((s32)s31 == (s32)-1) {
        v2 = lbl_805D59B8;
        return v2;
    }
    v3 = M32(c0+(s31<<2));
    return v3;
}

void fn_800A3E00(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c0;
    s30 = p4;
    s29 = p3;
    c0 = fn_802414D4();
    s31 = c0;
    while ((u32)s31 != (u32)0) {
        fn_800A3AB0(s31, s29, s30);
        v1 = M32(s31);
        s31 = v1;
    }
}

void fn_800A95AC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 ph0;
    v1 = M32((p3+44));
    v2 = M32((v1+1108));
    if ((u32)v2 != (u32)0) {
        v3 = M32((v2+4));
        ph0 = v3;
    } else {
        ph0 = 0;
    }
    if ((s32)ph0 == (s32)0) {
    return;
    }
    v4 = M32(((u32)(u32)lbl_80553E50+12084));
    v5 = M32(((u32)(u32)lbl_80553E50+12088));
    v6 = M32((u32)lbl_8049F070+(v4<<2));
    ((void (*)())(v6))(v1, v5, p4, (u32)lbl_8049F070, (u32)lbl_80553E50);
}

u32 fn_800AACC4(u32 p3) {
    u32 l3;
    u32 l4;
    u32 v1;
    if ((u32)p3 != (u32)0) {
        l3 = p3;
        l4 = 0;
        while ((v1 = M8(l3), l3 = (l3+1), (s32)((s8)v1) != (s32)0)) {
            l4 = (l4+1);
        }
        l3 = l4;
        return l3;
    }
    return 0;
}

void fn_800AB15C(u32 p3, u32 p4) {
    u32 v1;
    u32 s31;
    u32 v2;
    if ((u32)p4 != (u32)2) {
    return;
    }
    HSD_FogSet(0);
    v1 = lbl_805DD69C;
    s31 = v1;
    while ((u32)s31 != (u32)0) {
        fn_800AAD94(s31);
        v2 = M32((s31+48));
        s31 = v2;
    }
    HSD_FogGetCurrent();
    HSD_FogSet();
}

void fn_800AB9BC(float q1) {
    float v1;
    v1 = lbl_805DF18C;
    fn_803CC474(((s32)(v1*q1)), 5);
}

extern u8 lbl_80553C9C[];
u32 fn_800CF058(void);

u32 fn_8008FCA4(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 c0;
    s31 = 0;
    s30 = p4;
    c0 = fn_800CF058();
    if ((s32)c0 > (s32)1) {
        if ((s32)(s30&0xc0000) != (s32)0) {
            s31 = 1;
            v1 = M32(((u32)(u32)lbl_80553C9C+120));
            M32(((u32)(u32)lbl_80553C9C+120)) = (v1^1);
        }
    }
    return s31;
}

u32 fn_8008FD08(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 v1;
    u32 c0;
    s31 = 0;
    s30 = p4;
    c0 = fn_800CF058();
    if ((s32)c0 > (s32)1) {
        if ((s32)(s30&0xc0000) != (s32)0) {
            s31 = 1;
            v1 = M32(((u32)(u32)lbl_80553C9C+120));
            M32(((u32)(u32)lbl_80553C9C+120)) = (v1^2);
        }
    }
    return s31;
}





















#define MD(a) (*(double*)(a))
float __fabsf(float);
typedef struct { u8 :5; u8 f:1; } BFu8_5_1;
typedef struct { u8 p[8]; u32 f[1024]; } E8_u32;
typedef struct { u8 p[76]; u32 f[1024]; } E76_u32;
typedef struct { u8 p[4]; u32 f[1024]; } E4_u32;
typedef struct { u8 p[4]; float f[1024]; } E4_float;
typedef struct { u8 p[32]; u32 f[1024]; } E32_u32;
typedef struct { u8 p[176]; u32 f[1024]; } E176_u32;
typedef struct { u8 p[12]; u32 f[1024]; } E12_u32;
typedef struct { u8 p[4]; u8 f; u8 q[3]; } A8_4_u8;
typedef struct { u8 p[4]; u32 f; } A8_4_u32;
typedef struct { u8 p[8]; u32 f; u8 q[76]; } A88_8_u32;
typedef struct { u8 p[8]; float f; u8 q[76]; } A88_8_float;
typedef struct { u8 p[84]; u8 f; u8 q[3]; } A88_84_u8;
typedef struct { u8 p[80]; u32 f; u8 q[4]; } A88_80_u32;
typedef struct { u8 p[80]; float f; u8 q[4]; } A88_80_float;
typedef struct { u8 p[76]; u32 f; u8 q[8]; } A88_76_u32;
typedef struct { u8 p[76]; float f; u8 q[8]; } A88_76_float;
typedef struct { u8 p[72]; u32 f; u8 q[12]; } A88_72_u32;
typedef struct { u8 p[72]; float f; u8 q[12]; } A88_72_float;
typedef struct { u8 p[68]; u32 f; u8 q[16]; } A88_68_u32;
typedef struct { u8 p[68]; float f; u8 q[16]; } A88_68_float;
typedef struct { u8 p[64]; u32 f; u8 q[20]; } A88_64_u32;
typedef struct { u8 p[64]; float f; u8 q[20]; } A88_64_float;
typedef struct { u8 p[60]; u32 f; u8 q[24]; } A88_60_u32;
typedef struct { u8 p[60]; float f; u8 q[24]; } A88_60_float;
typedef struct { u8 p[56]; u32 f; u8 q[28]; } A88_56_u32;
typedef struct { u8 p[52]; u32 f; u8 q[32]; } A88_52_u32;
typedef struct { u8 p[4]; u32 f; u8 q[80]; } A88_4_u32;
typedef struct { u8 p[48]; u32 f; u8 q[36]; } A88_48_u32;
typedef struct { u8 p[44]; u32 f; u8 q[40]; } A88_44_u32;
typedef struct { u8 p[44]; float f; u8 q[40]; } A88_44_float;
typedef struct { u8 p[40]; u32 f; u8 q[44]; } A88_40_u32;
typedef struct { u8 p[40]; float f; u8 q[44]; } A88_40_float;
typedef struct { u8 p[36]; u32 f; u8 q[48]; } A88_36_u32;
typedef struct { u8 p[36]; float f; u8 q[48]; } A88_36_float;
typedef struct { u8 p[32]; u32 f; u8 q[52]; } A88_32_u32;
typedef struct { u8 p[32]; float f; u8 q[52]; } A88_32_float;
typedef struct { u8 p[28]; u32 f; u8 q[56]; } A88_28_u32;
typedef struct { u8 p[28]; float f; u8 q[56]; } A88_28_float;
typedef struct { u8 p[24]; u32 f; u8 q[60]; } A88_24_u32;
typedef struct { u8 p[24]; float f; u8 q[60]; } A88_24_float;
typedef struct { u8 p[20]; u32 f; u8 q[64]; } A88_20_u32;
typedef struct { u8 p[20]; float f; u8 q[64]; } A88_20_float;
typedef struct { u8 p[16]; u32 f; u8 q[68]; } A88_16_u32;
typedef struct { u8 p[16]; float f; u8 q[68]; } A88_16_float;
typedef struct { u8 p[12]; u32 f; u8 q[72]; } A88_12_u32;
typedef struct { u8 p[12]; float f; u8 q[72]; } A88_12_float;
typedef struct { u8 p[8]; u32 f; u8 q[56]; } A68_8_u32;
typedef struct { u8 p[44]; float f; u8 q[20]; } A68_44_float;
typedef struct { u8 p[40]; float f; u8 q[24]; } A68_40_float;
typedef struct { u8 p[36]; float f; u8 q[28]; } A68_36_float;
typedef struct { u8 p[32]; float f; u8 q[32]; } A68_32_float;
typedef struct { u8 p[12]; u32 f; u8 q[52]; } A68_12_u32;
typedef struct { u8 p[2]; u16 f; } A4_2_u16;
typedef struct { u8 p[40]; u32 f; } A44_40_u32;
typedef struct { u8 p[40]; float f; } A44_40_float;
typedef struct { u8 p[8]; u32 f; u8 q[24]; } A36_8_u32;
typedef struct { u8 p[8]; float f; u8 q[24]; } A36_8_float;
typedef struct { u8 p[4]; u32 f; u8 q[28]; } A36_4_u32;
typedef struct { u8 p[4]; u16 f; u8 q[30]; } A36_4_u16;
typedef struct { u8 p[4]; float f; u8 q[28]; } A36_4_float;
typedef struct { u8 p[32]; float f; } A36_32_float;
typedef struct { u8 p[28]; float f; u8 q[4]; } A36_28_float;
typedef struct { u8 p[24]; float f; u8 q[8]; } A36_24_float;
typedef struct { u8 p[20]; u32 f; u8 q[12]; } A36_20_u32;
typedef struct { u8 p[20]; float f; u8 q[12]; } A36_20_float;
typedef struct { u8 p[16]; u32 f; u8 q[16]; } A36_16_u32;
typedef struct { u8 p[16]; float f; u8 q[16]; } A36_16_float;
typedef struct { u8 p[12]; u32 f; u8 q[20]; } A36_12_u32;
typedef struct { u8 p[12]; float f; u8 q[20]; } A36_12_float;
typedef struct { u8 p[4]; u16 f; u8 q[26]; } A32_4_u16;
typedef struct { u8 p[4]; u32 f; u8 q[16]; } A24_4_u32;
typedef struct { u8 p[8]; u32 f; u8 q[8]; } A20_8_u32;
typedef struct { u8 p[4]; u32 f; u8 q[12]; } A20_4_u32;
typedef struct { u8 p[4]; float f; u8 q[12]; } A20_4_float;
typedef struct { u8 p[16]; u32 f; } A20_16_u32;
typedef struct { u8 p[12]; u32 f; u8 q[4]; } A20_12_u32;
typedef struct { u8 p[12]; float f; u8 q[4]; } A20_12_float;
typedef struct { u8 p[8]; u32 f; u8 q[4]; } A16_8_u32;
typedef struct { u8 p[4]; u32 f; u8 q[8]; } A16_4_u32;
typedef struct { u8 p[8]; u8 f; u8 q[3]; } A12_8_u8;
typedef struct { u8 p[8]; u32 f; } A12_8_u32;
typedef struct { u8 p[8]; float f; } A12_8_float;
typedef struct { u8 p[4]; u32 f; u8 q[4]; } A12_4_u32;
typedef struct { u8 p[4]; float f; u8 q[4]; } A12_4_float;
extern u8 lbl_80498750[];
extern u32 lbl_805D529C;
extern u8 lbl_80550AB8[];
extern const float lbl_805DEA58;
extern const float lbl_805DEA70;
extern const float lbl_805DEA74;
extern const float lbl_805DEAEC;
extern const float lbl_805DEAD8;
extern const float lbl_805DEAD4;
extern u32 lbl_805D52E8;
extern u8 lbl_80499440[];
extern u32 lbl_805D52EC;
extern const float lbl_805DEB38;
extern const float lbl_805DEBD0;
extern const float lbl_805DEB70;
extern u32 lbl_805D5348;
extern u8 lbl_804996C0[];
extern u8 lbl_80502AC0[];
extern u8 lbl_8049979C[];
void fn_8006A7B4(void);
extern const float lbl_805DEC24;
extern u8 lbl_80550E28[];
void fn_8006FAEC(void);
void fn_8006FC24(void);
void fn_8006FC70(void);
float fn_8006FD70(u32, u32, u32);
float fn_8006FFF0(u32, u32, u32, float);
float fn_8006FEF4(u32, u32, u32, u32);
float fn_80070100(u32, u32);
extern u8 lbl_80499860[];
extern u8 lbl_80499AF8[];
extern u8 lbl_80550E80[];
extern const float lbl_805DECC0;
extern const float lbl_805DECC4;
extern u8 lbl_80499BE8[];
extern u8 lbl_80499C48[];
extern u8 lbl_80499CA8[];
extern u8 lbl_80499CCC[];
extern u32 lbl_805D5390;
extern const float lbl_805DECD8;
extern const float lbl_805DECDC;
extern u32 lbl_805DE320;
extern const float lbl_805DECF0;
u32 fn_8007212C(u32, u32);
void fn_80072304(void);
extern u8 lbl_80499DA0[];
extern u32 lbl_805D5398;
extern u32 lbl_805D53A8;
extern u8 lbl_8049A338[];
extern const float lbl_805DED00;
extern const float lbl_805DED04;
extern const float lbl_805DED08;
extern const float lbl_805DED0C;
extern u32 lbl_805D53BC;
extern u8 lbl_8049A608[];
extern const float lbl_805DED10;
extern const float lbl_805DED14;
extern const float lbl_805DED18;
extern u8 lbl_8049A968[];
extern u32 lbl_805DD540;
extern u8 lbl_8058B634[];
extern const float lbl_805DED20;
extern const float lbl_805DED48;
extern u32 lbl_805DD604;
extern u32 lbl_805DD5FC;
extern u8 lbl_80552348[];
extern u32 lbl_805DD5F8;
extern u32 lbl_805DD5F0;
extern u32 lbl_805DD600;
extern u8 lbl_8049AA28[];
extern u32 lbl_805D53D4;
extern u8 lbl_80552678[];
extern u32 lbl_805D53C4;
extern u32 lbl_805DD608;
extern u8 lbl_8049AA34[];
extern u8 lbl_80552360[];
u32 fn_80077320(void);
extern u32 lbl_805D53C8;
extern u32 lbl_805D53DC;
extern u32 lbl_805DD5F4;
void fn_8007772C(u32);
extern u32 lbl_805D53C0;
extern u8 fn_8044C728[];
extern u8 lbl_8049AAA8[];
extern u8 lbl_80552920[];
extern u8 lbl_8049AC60[];
extern u8 lbl_8049AC90[];
extern u8 lbl_8049ACAC[];
extern u32 lbl_805D53E8;
extern const float lbl_805DED54;
extern u8 lbl_8049AD38[];
extern u8 lbl_8049AD54[];
extern u32 lbl_805D53F0;
extern const float lbl_805DED7C;
extern u8 lbl_8049AD98[];
extern u8 lbl_8049ADAC[];
extern u8 lbl_8049ADB8[];
extern u32 lbl_805DE32C;
extern u32 lbl_805D53F8;
extern const float lbl_805DED90;
extern const float lbl_805DED94;
extern const float lbl_805DED98;
extern const float lbl_805DED9C;
extern const float lbl_805DEDA0;
extern const float lbl_805DEDA4;
extern u32 lbl_805D53FC;
extern const float lbl_805DEDA8;
extern const float lbl_805DEDAC;
extern const float lbl_805DEDB0;
extern u32 lbl_805DE31C;
extern const float lbl_805DEDB4;
extern u8 lbl_8049AE00[];
extern const float lbl_805DEDB8;
extern const float lbl_805DEDBC;
extern u32 lbl_805D5408;
u32 fn_8007B520(u32, u32);
void fn_8007B5AC(u32, u32, u32);
extern u8 lbl_8058B080[];
extern u16 lbl_805DD644;
extern u32 lbl_805DD630;
extern u8 lbl_8049B260[];
extern u8 lbl_8049B270[];
extern u8 lbl_8049B284[];
extern u32 lbl_805D5418;
extern u32 lbl_805D5420;
extern u8 lbl_8049B2A4[];
extern u8 lbl_8049B300[];
extern const float lbl_805DEDC0;
extern const float lbl_805DEDC4;
extern const float lbl_805DEDCC;
extern const float lbl_805DEDC8;
extern const double lbl_805DEDD0;
extern u32 lbl_805D543C;
extern const float lbl_805DEDD8;
extern u32 lbl_805D5440;
extern u32 lbl_805DD64C;
extern u32 lbl_805DD648;
extern u8 lbl_80552DD8[];
extern u32 lbl_805DEDE8;
extern u32 lbl_805D546C;
extern u8 lbl_80552DE8[];
extern u32 lbl_805D5470;
extern u32 lbl_805D5478;
extern u32 lbl_805D5480;
extern u32 lbl_805DD650;
extern u32 lbl_805D5484;
extern u32 lbl_805D5488;
extern u32 lbl_805D548C;
extern const float lbl_805DEE1C;
extern u32 lbl_805D5498;
extern u32 lbl_805D5494;
extern u32 lbl_805D549C;
extern u32 lbl_805D54A0;
extern u8 lbl_8049B9E0[];
extern u32 lbl_805D54A4;
extern u32 lbl_805D54A8;
extern u32 lbl_805D54B0;
extern u8 lbl_8049B9F0[];
extern u32 lbl_805DD658;
extern u32 lbl_805D54BC;
extern u32 lbl_805D54C0;
extern u32 lbl_805D54B8;
extern u32 lbl_805D54C4;
extern const float lbl_805DEE30;
extern u32 lbl_805D54D4;
extern u32 lbl_805D54D8;
extern const float lbl_805DEE34;
extern u8 lbl_8049BA00[];
extern const float lbl_805DEE3C;
extern const float lbl_805DEE38;
extern u32 lbl_805D54CC;
extern u32 lbl_805D5550;
extern const float lbl_805DEEAC;
extern const float lbl_805DEEB0;
extern u32 lbl_805DD660;
extern u32 lbl_805DEEC8;
extern u32 lbl_805DEECC;
extern const float lbl_805DEED0;
extern u8 lbl_8049BB98[];
extern u32 lbl_805D56E8;
extern u32 lbl_805D56F0;
extern u32 lbl_805D56F8;
extern u32 lbl_805D5700;
extern u8 lbl_80553070[];
extern const float lbl_805DEEE4;
extern u8 lbl_8049BE84[];
extern u8 lbl_8049BE90[];
extern u32 lbl_805D574C;
extern u8 lbl_8049BBA8[];
extern const float lbl_805DEEE0;
void fn_80086D64(void);
extern u32 lbl_805D5434;
extern u32 lbl_805D5438;
extern const float lbl_805DEEF0;
extern const float lbl_805DEEEC;
extern u8 lbl_80489C68[];
extern const float lbl_805DEF00;
extern const float lbl_805DEF2C;
extern const float lbl_805DEF30;
extern const float lbl_805DEF20;
extern const float lbl_805DEF38;
extern const float lbl_805DEF34;
extern u8 lbl_80557248[];
extern const float lbl_805DEF24;
extern const float lbl_805DEF54;
extern const float lbl_805DEF58;
extern const float lbl_805DEF5C;
extern const float lbl_805DEF60;
extern u32 lbl_805DD680;
extern u32 lbl_805DD67C;
extern u32 lbl_805DD678;
extern u8 lbl_8049D7FC[];
extern u32 lbl_805D58FC;
extern u32 lbl_805DD684;
extern u8 lbl_80553D38[];
extern u8 lbl_8049DE50[];
extern u8 lbl_8049DE5C[];
extern u8 lbl_8049DDB0[];
extern u32 lbl_805D59CC;
extern u32 lbl_805D59C8;
extern u32 lbl_805D59D4;
extern u32 lbl_805D59D8;
extern u32 lbl_805D59E0;
extern u32 lbl_805D59E8;
extern u32 lbl_805D59F0;
extern u32 lbl_805D59F8;
extern u16 lbl_805DE366;
extern u8 lbl_8055D7A0[];
extern u16 lbl_805DE364;
extern u16 lbl_805DE362;
extern const float lbl_805DEFD0;
extern u8 lbl_80553D60[];
extern const float lbl_805DEFD4;
extern u8 lbl_8049DEE8[];
extern u32 lbl_805D5AF8;
extern u32 lbl_805D5B00;
extern u8 lbl_8055DE08[];
extern u32 lbl_805D5B08;
extern u32 lbl_805D5B10;
extern u32 lbl_805D5B0C;
extern u32 lbl_805D5B14;
extern u32 lbl_805D5B18;
extern u32 lbl_805D5B24;
extern u32 lbl_805D5B20;
extern u32 lbl_805D5AD8;
extern const float lbl_805DEFF0;
extern u32 lbl_805D5ADC;
extern const float lbl_805DEFF4;
extern u32 lbl_805D5AF0;
extern u32 lbl_805D5AE0;
extern u32 lbl_805D5AEC;
extern u32 lbl_805D5AE4;
extern u32 lbl_805D5AE8;
extern u32 lbl_805D5AF4;
extern u8 lbl_80553DC4[];
extern u8 lbl_8049E108[];
extern u32 lbl_805DEFF8;
extern u8 lbl_8049E1C8[];
extern u32 lbl_805DD688;
extern u8 lbl_8049E2F0[];
extern u8 lbl_8049E2FC[];
extern u32 lbl_805D5B34;
extern u8 lbl_8058B0E4[];
extern u32 lbl_805DD6DC;
extern u8 lbl_8049E65C[];
extern const float lbl_805DF0A0;
extern u8 lbl_8049EA00[];
extern u32 lbl_805DF0B8;
extern u8 lbl_8049EA40[];
extern u32 lbl_805D5B64;
extern u32 lbl_805D5B58;
extern u32 lbl_805D5B5C;
extern const float lbl_805DF0C8;
extern const float lbl_805DF0CC;
extern const float lbl_805DF0D0;
extern u32 lbl_805D5B60;
extern u32 lbl_805D5B68;
extern u32 lbl_805DD690;
extern u8 lbl_8049EE10[];
extern u32 lbl_805D5B70;
extern u32 lbl_805D5B78;
extern u8 lbl_8049EF90[];
extern u8 lbl_8049F040[];
extern const float lbl_805DF104;
extern u32 lbl_805D5B80;
extern const float lbl_805DF108;
extern const float lbl_805DF10C;
extern u32 lbl_805D5B90;
extern const float lbl_805DF110;
extern u32 lbl_805D5B98;
extern u32 lbl_805D5BA0;
extern u32 lbl_805D5BA4;
extern u8 lbl_8049E398[];
extern const float lbl_805DF118;
extern u8 lbl_8049F120[];
extern u8 lbl_8049F140[];
extern u8 lbl_8049F154[];
extern u32 lbl_805D5BA8;
extern u32 lbl_805D5BAC;
extern u8 lbl_8049F298[];
extern const float lbl_805DF14C;
extern u32 lbl_805D5BBC;
extern const float lbl_805DF148;
extern const float lbl_805D5BB8;
extern u32 lbl_805D5BB0;
extern u32 lbl_805D5BB4;
extern const float lbl_805DF1B0;
extern u8 lbl_80557090[];
extern const float lbl_805DF1B4;
extern const float lbl_805DF1B8;
extern const float lbl_805DF1BC;
extern const float lbl_805DF1C0;
extern const float lbl_805DF1D0;
extern const float lbl_805DF1D4;
extern const float lbl_805DF1D8;
extern const float lbl_805DF1DC;
extern u32 lbl_805D5C08;
float fn_800ACF84(void);
extern u8 lbl_8049F428[];
extern u8 lbl_8049F438[];
extern u8 lbl_8049F448[];
u32 fn_804457E0();
void fn_803B8048();
void fn_803B7FD8();
u32 fn_804456C0();
void fn_80445810();
u32 fn_8044576C();
void fn_80445704();
void fn_80075FB0();
void fn_80412598();
void HSD_PadRumbleInterpret();
void fn_80411D40();
void fn_804124F8();
void fn_80412480();
float fn_803BD388(float, float, float, float, float);
float fn_80064C18(u32, u32, u32, float, float, float, float);
void HSD_CObjGetEyePosition();
u32 HSD_CObjGetEyeVector();
u32 HSD_CObjGetProjectionType(u32, u32, u32, float, float, float, float);
void C_MTXPerspective(u32, float, float, float, float);
void C_MTXOrtho(u32, float, float, float, float, float, float);
void HSD_CObjGetUpVector();
void HSD_CObjGetInterest();
void C_MTXLookAt();
u32 HSD_CObjGetViewingMtxPtr();
float fn_803D03F4(u32, u32, u32, u32, u32, u32, float, float, float, float, float, float);
float HSD_CObjGetNear(u32, float, float, float, float);
void fn_80064EA4();
void fn_80429D0C();
float fn_80064A30();
u32 fn_80064900(u32, u32, u32, u32, u32, float, float, float);
float HSD_CObjGetScissor(u32, u32, float, float, float);
float fn_80062DD0();
u32 HSD_CObjGetFov();
float tan(u32, float, float);
float HSD_CObjGetAspect();
float fn_80067BE8();
u32 fn_80067D64();
u32 fn_80067FD0(u32, u32, u32, float, float);
void hsdInitClassInfo();
void splArcLengthPoint();
void fn_803D22CC();
float fn_803BCDA4(float);
void fn_8024A684(u32, u32, u32, float, float, float, float);
void fn_8024A6C4();
void fn_8024A704();
u32 fn_800701A0();
void fn_8024347C();
u32 fn_80243B00(u32, u32, u32, float, float);
void HSD_PadRumbleActiveId();
void fn_80058920();
u32 fn_800727E8();
u32 fn_800728B0();
void fn_800753A0();
void fn_80058E84();
u32 DVDConvertPathToEntrynum();
u32 fn_80072AD8();
u32 fn_800589E4();
u32 fn_800590CC();
u32 fn_8005884C();
u32 fn_8007327C();
u32 fn_80059288();
u32 fn_80072D70();
void fn_80059484();
void fn_80059228();
void fn_800629AC();
u32 fn_80411D24();
void fn_80006354();
void fn_8044E698();
void fn_80445860();
void fn_80444E00();
void fn_8007CCC4();
void fn_8007634C();
void fn_8044E6BC();
void fn_80445920();
void fn_8044511C();
void fn_8007666C();
void fn_80076548();
u32 fn_8000AECC();
void HSD_PadRumblePauseAll();
void fn_80286F74();
void fn_8044FEC4(u32, ...);
void fn_8045031C(u32, ...);
void HSD_PadRumbleActiveAll();
void fn_80286FEC();
void fn_8005E788();
void fn_8005E5D0();
void __cvt_dbl_usll(u32, float, float);
void fn_80062660();
void PSMTXConcat();
void fn_803CD7D4();
void fn_803CDA90(u32, u32, u32, u32, u32, u32, float, float, float);
void fn_803CDDE4();
void fn_803CD4E4();
void HSD_StateInitTev();
void HSD_ClearVtxDesc();
void fn_803F85C8();
u32 fn_8045DF38();
u32 fn_8045F734();
u32 fn_8045F724();
void fn_8045FA84();
void fn_8045F72C();
void UpdatePlay();
u32 fn_8045F85C();
u32 fn_8045F828();
u32 fn_8045F830();
void DCFlushRange();
void ARQPostRequest();
u32 fn_8045F71C();
void OSPanic(u32, ...);
u32 AXAcquireVoice();
void fn_803F1A08();
void fn_803EECCC();
void fn_803EE7F4();
void fn_8045E9A4();
void fn_803DA558();
void HSD_Free();
u32 fn_8045EB6C();
void fn_803D7E58();
void fn_803D7F34();
void fn_8045F4D0();
void DCFlushRangeNoSync();
u32 ARAlloc();
void ARFree();
void fn_803F1940();
void fn_803ED76C();
void setDoneCallFunc();
void HVQM4PlayerExStart();
u32 fn_8045F704();
u32 HVQM4PlayerExControlStep();
u32 HVQM4PlayerExControlNormal();
u32 fn_8045F6EC();
void fn_803F2884();
void AXFreeVoice();
void fn_8045F4D8();
void fn_8045DE2C();
void fn_8045DE54();
u32 fn_804533F0();
u32 fn_8018302C();
u32 fn_80183004();
u32 fn_80182E8C();
u32 fn_80006C30();
u32 gmGetClearcheckerP();
void fn_80079C04(u32, u32, u32, float);
u32 HSD_LObjGetPosition();
u32 HSD_LObjGetInterest();
void HSD_CObjSetEyePosition();
void HSD_CObjSetInterest();
void HSD_CObjSetUpVector();
void HSD_ViewingRectInit();
void HSD_ViewingRectAddPoint(u32, u32, float, float, float, float);
u32 HSD_ViewingRectIsValid();
void HSD_ShadowSetViewingRect(u32, float, float, float, float);
void HSD_CObjSetOrtho(u32, float, float, float, float);
void HSD_ShadowInit();
void HSD_ShadowStartRender();
void HSD_ShadowEndRender();
u32 HSD_ShadowAlloc();
void HSD_CObjSetProjectionType();
void HSD_CObjSetNear(u32, float);
void HSD_CObjSetFar(u32, float);
void HSD_CObjSetFlags();
void HSD_ShadowSetSize();
void HSD_ShadowAddObject(u32, u32, float);
void fn_803D7E20();
void fn_804872CC();
void fn_8007C8C8();
void fn_80488114();
void fn_803DC8E8();
void fn_8008AA0C();
u32 fn_8007E8CC();
void fn_8008122C();
void fn_8007FCDC();
void fn_80080714();
void fn_80081090();
void fn_80095D18();
void fn_8008294C();
u32 fn_80083CF4();
void fn_80083DF4();
void fn_80084BF0();
void fn_8007EF88();
void fn_80096CBC();
void fn_803CF8CC();
void fn_803CF900();
void fn_803CF058();
void fn_803CEB54();
u32 HSD_LObjGetLightMaskDiffuse();
void fn_803D19AC(u32, float, float, float);
void PSMTXIdentity();
void fn_803D1978(u32, float, float, float);
void GXSetArray();
void fn_804159A0();
void fn_803D1528();
void fn_803D0384();
void fn_8007E93C();
void fn_8007E964();
u32 dbPutString(u32, ...);
u32 menu_getCurrentMenuID();
u32 fn_8007F0A0();
u32 fn_8007F2E8();
void cityTrial_getMasterStats();
void fn_801C8290();
void fn_8019259C();
u32 fn_80080104();
u32 fn_801C7CF4();
float fn_801C84BC(u32, float);
u32 fn_800AB9F4();
void fn_8022C5C0();
void fn_8022C568();
void fn_801DFFDC(u32, u32, u32, u32, u32, u32, u32, float);
u32 fn_8007D988(u32, u32, u32, u32, u32, u32, u32, float);
void fn_8018B75C();
u32 fn_8007E61C();
u32 fn_8018CD9C();
u32 fn_80082480(u32, u32, float);
u32 fn_8008252C(u32, u32, u32, float);
u32 fn_8008238C(u32, u32, float);
void fn_800D0B7C();
void fn_800CEE24();
void fn_800F3F4C();
float fn_800D066C(u32, u32, float, float);
u32 fn_8022312C();
void fn_800848E0();
u32 fn_8006BA28();
u32 strlen();
void fn_8008647C();
float fn_800D3058();
void sprintf(u32, ...);
float fn_80088150();
u32 fn_800B8054();
u32 fn_80245B4C();
u32 fn_80245C10(u32, u32, u32, u32, u32, u32, float, float);
u32 fn_800D1AC4(u32, u32, u32, u32, float, float);
void fn_800D1860(u32, u32, float);
float fn_800B8570();
void fn_800B8518();
void fn_800B85C4();
float fn_8008AC14();
void fn_803D1908(u32, u32, float);
void PSMTXMultVec();
void fn_800B09CC();
u32 fn_8022CB74();
u32 fn_8022C824();
u32 fn_800B8188();
u32 fn_800B8A38();
void fn_800B9244();
void fn_800BAA90();
void fn_800BC370();
void fn_800BABD0();
void fn_8000AA8C();
void fn_801126F4();
void fn_80113A98();
void fn_800B989C();
void fn_800BAC5C();
u32 fn_800C2F94();
u32 fn_800C2FB4();
u32 fn_800CEFB4();
u32 fn_8008FD6C();
void fn_8006B048(u32, float);
void fn_803FE4B8();
void fn_800932D4();
void fn_800A9648();
void fn_80093740(u32, u32, u32, float, float);
u32 fn_800D1D3C();
void fn_80059818();
void fn_80059520(u32, ...);
void fn_80096BE4();
u32 fn_80236C30();
u32 fn_80236C20();
u32 fn_802361A0();
u32 fn_802361D0();
void fn_800980A8(u32, u32, u32, float);
u32 fn_80098180(u32, u32, float, float, float);
u32 fn_80098460();
u32 fn_80005CE0();
u32 fn_803D026C();
u32 fn_8009C284();
u32 fn_8009C6D0();
u32 fn_8006EA38();
u32 fn_8009C9B0();
void fn_8009CD34();
void HSD_LObjSetPosition();
u32 fn_800CEC28();
void fn_800D7118();
u32 fn_800A08A8();
void fn_800A0DD0(u32, u32, u32, u32, float, float);
u32 fn_800CF598(u32, float);
void fn_80054320();
void fn_800DD608();
void fn_800D7940();
void fn_80099564(u32, u32, u32, u32, u32, float);
void fn_800D5250();
void fn_800D790C();
void fn_800D78B4();
void fn_800D78E0();
void fn_80071180();
float fn_800A3138();
void fn_800DC9A0();
void fn_800992C4();
u32 fn_800D0B30();
u32 fn_800D0C88();
u32 fn_800D0DCC();
void fn_800D0DE4();
u32 fn_800D0EB8();
void fn_800D0ED0();
u32 fn_800D0FA4();
void fn_800D0FBC();
u32 fn_800D1090();
void fn_800D10DC();
u32 fn_800D11D4();
void fn_800D11FC();
u32 fn_800D12F0();
void fn_800D133C();
u32 fn_800E5318();
void fn_800E5340();
u32 fn_800E5438();
void fn_800E5460();
void fn_800D0CD4();
void fn_80067734();
u32 fn_800BBC0C();
void fn_800B8BB4();
void fn_800B8C0C();
void fn_800B8C64();
void fn_800B8CBC();
void HSD_CObjSetFov(u32, float);
void fn_800B8D04();
void fn_80401014();
void fn_800E5FA4();
void fn_800D8148();
void fn_800D7DD4();
void fn_800F64D0();
void fn_800D1DCC();
void fn_800A2394();
u32 fn_800A4A28();
void fn_800A50F0();
void fn_800A718C();
void fn_800CEB18();
void fn_800A6374(u32, u32, u32, u32, float, float);
float fn_800E92CC();
u32 fn_800E918C();
void fn_800A1614();
u32 fn_800EE964();
void fn_8022CE94();
void fn_800AA074();
void fn_800AA790();
u32 fn_800990AC(u32, u32, u32, float);
u32 fn_8009A438();
u32 fn_800CF6D8();
float fn_800CF724();
void fn_800CF874();
u32 fn_800CFB34();
void fn_800E3994();
void fn_8044F9D4();
u32 gmGetGlobalP();
void fn_80006D80();
void fn_801C857C();

void fn_800620E8(void) {
    if ((s32)((M8(((u32)(u32)lbl_80538088+66))>>3)&0x1) == (s32)0) {
        M16(((u32)(u32)lbl_80538088+60)) = 255;
        M32(((u32)((u32)lbl_80538088+65536)+29828)) = 0;
        fn_80445704(2, ((u32)lbl_80538088+65536), (u32)lbl_80538088);
    }
}

#pragma fp_contract on
u32 fn_8006417C(u32 p3, u32 p4, u32 p5, float q1) {
    MF(p5) = (MF(p4)-MF(p3));
    MF(((u32)p5+4)) = (MF(((u32)p4+4))-MF(((u32)p3+4)));
    MF(((u32)p5+8)) = (MF(((u32)p4+8))-MF(((u32)p3+8)));
    MF(p5) = ((MF(p5)*q1)+MF(p3));
    MF(((u32)p5+4)) = ((MF(((u32)p5+4))*q1)+MF(((u32)p3+4)));
    MF(((u32)p5+8)) = ((MF(((u32)p5+8))*q1)+MF(((u32)p3+8)));
    return p5;
}
#pragma fp_contract off

float fn_80064D30(u32 p3, float q1) {
    float v1;
    float v5;
    float d0;
    d0 = PSVECMag(p3);
    v1 = lbl_805DEA50;
    if (v1 == d0) {
        v5 = v1;
    } else {
        MF(p3) = (MF(p3)*(q1/d0));
        MF(((u32)p3+4)) = (MF(((u32)p3+4))*(q1/d0));
        MF(((u32)p3+8)) = (MF(((u32)p3+8))*(q1/d0));
        v5 = d0;
    }
    return v5;
}

u32 fn_8006EDF4(u32 p3, u32 p4, u32 p5) {
    u32 v2;
    A12_8_u8* v3;
    u32 v4;
    v2 = M32(M32(p3)+(p5<<2));
    v3 = (A12_8_u8*)(p3);
    v4 = v3[p4].f;
    if ((s32)(v4&0x1) != (s32)0) {
        return M16(v2+(p4<<3)+30);
    }
    return M16(v2+(p4<<3)+32);
}

void fn_80071290(u32 p3) {
    u32 v1;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD5C0;
    if ((u32)v1 == (u32)p3) {
        lbl_805DD5C0 = M32(p3);
    } else {
        v3 = v1;
        while ((u32)v3 != (u32)0) {
            v4 = M32(v3);
            if ((u32)v4 == (u32)p3) {
                M32(v3) = M32(p3);
                goto L32;
            }
            v3 = v4;
        }
        OSReport((u32)lbl_80499CA8, p3);
        __assert((u32)lbl_80499CCC, 93, (u32)&lbl_805D5390);
    }
    L32:;
    HSD_ObjFree((u32)lbl_80550ED8, p3);
}

void fn_80072A68(void) {
    fn_800753FC();
    goto L6;
    L5:;
    fn_80059CFC();
    L6:;
    if ((s32)fn_800728B0(6) != (s32)0) goto L5;
}

void fn_80072AA0(void) {
    fn_800753A0();
    goto L6;
    L5:;
    fn_80059CFC();
    L6:;
    if ((s32)fn_800728B0(4) != (s32)0) goto L5;
}

u32 fn_80077A5C(void) {
    u32 stk[1];
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v7;
    u32 v9;
    u32 v12;
    u32 v13;
    fn_8045E9A4();
    v1 = lbl_805DD604;
    if ((s32)v1 == (s32)0) goto L54;
    lbl_805DD604 = 0;
    fn_803DA558((u32)lbl_80552360, (u32)((u8*)stk+0));
    v2 = lbl_805DD608;
    if ((u32)v2 == (u32)0) goto L54;
    HSD_Free(v2);
    lbl_805DD608 = 0;
    goto L54;
    L20:;
    v4 = M32(v3);
    if ((u32)v4 != (u32)0) {
        if ((u32)v3 != (u32)0) {
            v5 = v3;
            while ((u32)v5 != (u32)0) {
                if ((u32)v4 == (u32)M32(v5)) {
                    v7 = M32(((u32)v5+8));
                    if ((u32)v7 != (u32)0) {
                        M32(((u32)v7+4)) = M32(((u32)v5+4));
                    }
                    v9 = M32(((u32)v5+4));
                    if ((u32)v9 != (u32)0) {
                        M32(((u32)v9+8)) = M32(((u32)v5+8));
                    }
                    if ((u32)M32(((u32)v5+8)) == (u32)0) {
                        v12 = M32(((u32)v5+4));
                        if ((u32)v12 == (u32)0) {
                            lbl_805DD5E8 = 0;
                        } else {
                            lbl_805DD5E8 = v12;
                        }
                    }
                    HSD_Free(v5);
                    break;
                }
                v5 = M32(((u32)v5+4));
            }
        }
    }
    L54:;
    v3 = lbl_805DD5E8;
    if ((u32)v3 != (u32)0) goto L20;
    return v3;
}

u32 fn_80077ED4(u32 p3) {
    u32 v1;
    u32 v2;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+4));
        if ((u32)v1 != (u32)0) goto L10;
    }
    v2 = 0;
    goto L12;
    L10:;
    HVQM4PlayerExStart(v1);
    v2 = 1;
    L12:;
    return v2;
}

u32 fn_80077F14(u32 p3) {
    u32 v1;
    u32 v2;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+4));
        if ((u32)v1 != (u32)0) goto L10;
    }
    v2 = 0;
    goto L11;
    L10:;
    v2 = fn_8045F704(v1);
    L11:;
    return v2;
}

u32 fn_80077F50(u32 p3) {
    u32 v1;
    u32 v2;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+4));
        if ((u32)v1 == (u32)0) {
            v2 = v1;
        } else {
            v2 = HVQM4PlayerExControlStep(v1);
        }
    } else {
        v2 = p3;
    }
    return v2;
}

u32 fn_80077F88(u32 p3) {
    u32 v1;
    u32 v2;
    if ((u32)p3 != (u32)0) {
        v1 = M32(((u32)p3+4));
        if ((u32)v1 == (u32)0) {
            v2 = v1;
        } else {
            v2 = HVQM4PlayerExControlNormal(v1);
        }
    } else {
        v2 = p3;
    }
    return v2;
}

u32 fn_80078D58(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    A36_8_u32* v2;
    u32 v3;
    v1 = M32(((u32)(u32)lbl_8049AB40+96));
    v2 = (A36_8_u32*)(v1);
    v3 = v2[p3].f;
    M8(p4+v3) = p5;
    return (v1+(p3*36));
}

void fn_800799BC(u32 p3) {
    u32 v1;
    u32 v3;
    u32 v4;
    v1 = lbl_805DD620;
    if ((u32)v1 == (u32)p3) {
        lbl_805DD620 = M32(p3);
    } else {
        v3 = v1;
        while ((u32)v3 != (u32)0) {
            v4 = M32(v3);
            if ((u32)v4 == (u32)p3) {
                M32(v3) = M32(p3);
                goto L32;
            }
            v3 = v4;
        }
        OSReport((u32)lbl_8049AD38, p3);
        __assert((u32)lbl_8049AD54, 67, (u32)&lbl_805D53F0);
    }
    L32:;
    HSD_ObjFree((u32)lbl_805529D0, p3);
}

