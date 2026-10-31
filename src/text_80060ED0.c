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
typedef struct { u8 :6; u8 f:2; } BFu8_6_2;
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
extern u8 lbl_80499CD8[];
extern u8 lbl_80499CE8[];
extern u32 lbl_805DD5C8;
extern u8 lbl_80499CF8[];
extern u8 lbl_80499D08[];
extern u32 lbl_805DD5D0;
extern u32 lbl_805DD5D8;
extern u32 lbl_805D53CC;
extern u32 lbl_805DD5EC;
extern const float lbl_805DED50;
extern const float lbl_805DED70;
extern u32 lbl_805DD628;
extern u32 lbl_805D540C;
extern u8 lbl_8049B0F4[];
void fn_8007D718(void);
void fn_8007D7F0(void);
extern u32 lbl_805D5478;
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
void fn_803D798C(u32, u32, u32);
void fn_803D7A54(u32, u32, u32);
void fn_80413A6C(void);
void fn_80413AA4(void);
void fn_800638F8(u32, float, float);
float PSVECMag(u32);
void fn_80063F8C(u32, u32, float);
u32 HSD_CObjLoadDesc(u32);
void HSD_CObjGetViewportf(u32, u32);
void HSD_CObjSetAspect(u32, float);
void HSD_CObjSetViewport(u32, u32);
void HSD_CObjSetScissor(u32, u32);
void fn_80064770(u32, u32);
u32 fn_80057468(u32, u32, u32);
u32 fn_8006DCC0(u32, u32, u32, u32, u32, u32, u32);
void lbLoadArchive(u32, ...);
void HSD_FogSet(u32, u32);
void fn_80438C50(u32, float, float);
void fn_80071E40(u32, u32, float, float);
void HSD_FogGetCurrent(void);
void fn_8006A3F0(u32, u32, u32, u32);
void fn_80078CF0(u32);
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
void fn_803EE8B8(u32, u32);
void fn_803F28A4(u32);
void fn_8007744C(u32, u32);
u32 HVQM4PlayerExControlExit(u32);
void fn_80459FBC(u32, u32);
void fn_80062CA4(u32, u32);
void fn_80079A60(u32, u32, u32, float);
void fn_8048846C(void);
void __assert(u32, u32, u32);
void fn_80413EE0(u32, u32, u32);
void fn_80413F34(void);
void fn_80413F9C(void);
void fn_80413FF0(void);
void fn_804125F8(u32);
void fn_80412740(u32);
u32 DBIsDebuggerPresent(void);
u32 fn_803D3C04(u32, u32);
void fn_8043A1CC(u32, u32);
void fn_80440130(u32, u32, u32);
u32 fn_80191C84(u32);
void fn_8008C718(u32);
void fn_8008C63C(u32);
u32 fn_80192764(u32, u32, u32);
void fn_80080804(u32, u32);
void fn_80083D20(u32, u32);
void fn_80080858(u32, u32);
void fn_801957AC(u32);
void fn_8007E500(u32, u32, u32);
u32 fn_80005D04(u32);
void gmSetFreezeGameFlag(u32);
u32 func_80428F28(u32, u32, u32);
void HSD_GObj_AddGXLink(u32, u32, u32, u32);
void fn_80088110(u32);
void OSReport(u32, ...);
void fn_80245ED0(u32);
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
u32 HSD_CObjGetCurrent(u32, u32, u32);
void HSD_CObjGetViewingMtx(u32, u32);
void fn_803CAC04(void);
void GXSetVtxAttrFmt(u32, u32, u32, u32, u32);
void GXSetVtxDesc(u32, u32);
void GXLoadPosMtxImm(u32, u32);
void fn_803D1670(u32, u32);
void fn_803D078C(u32, u32);
void GXSetCurrentMtx(u32);
void fn_80098E30(u32);
void fn_803CD3AC(u32, u32);
void fn_803CD2B8(u32, u32);
void fn_803CC518(u32);
void fn_800A1680(u32, u32, u32, u32);
void HSD_GObj_AddProc(u32, u32, u32);
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

void fn_80062AE0(u32 p3) {
    u32 c0;
    c0 = OSDisableInterrupts(p3);
    M32(((u32)(u32)lbl_80550CA8+168)) = p3;
    OSRestoreInterrupts(c0, (u32)lbl_80550CA8);
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

void fn_800795C0(u32 p3) {
    float v1;
    float v2;
    float d0;
    float d2;
    d0 = PSVECMag((p3+8));
    v1 = lbl_805DED50;
    if (v1 != d0) {
        fn_80062CA4((p3+8), (p3+8));
    } else {
        MF(((u32)p3+8)) = v1;
        MF(((u32)p3+12)) = v1;
        MF(((u32)p3+16)) = v1;
    }
    d2 = PSVECMag((p3+24));
    v2 = lbl_805DED50;
    if (v2 != d2) {
        fn_80062CA4((p3+24), (p3+24));
        return;
    }
    MF(((u32)p3+24)) = v2;
    MF(((u32)p3+28)) = v2;
    MF(((u32)p3+32)) = v2;
}

void fn_8007A51C(u32 p3, u32 p4) {
    fn_80079A60((p3+56), p4, 0, (lbl_805DED70));
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

void fn_8007FE4C(u32 p3) {
    u32 v1;
    u32 v6;
    u32 c0;
    v1 = M32(((u32)p3+44));
    M8(((u32)v1+2712)) = ((M8(((u32)v1+2712)))+1);
    if ((u32)(M8(((u32)v1+2712))) >= (u32)6) {
        M8(((u32)v1+2712)) = 0;
    }
    M16(((u32)v1+2716)) = ((M16(((u32)v1+2716)))&-42);
    v6 = M16(((u32)v1+2716));
    M16(((u32)v1+2716)) = (v6|(M8((u32)&lbl_805D5478+(M8(((u32)v1+2712))))));
    c0 = fn_80192764(p3, (u32)&lbl_805D5478, v6);
    if ((s32)c0 != (s32)0) {
        fn_80080804((M32(((u32)v1+1012))), (M8(((u32)v1+2712))));
    }
    fn_80083D20(p3, ((M16(((u32)v1+2716)))&0xff));
}

void fn_8007FEF4(u32 p3) {
    u32 v1;
    u32 v6;
    u32 c0;
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
        fn_80080858((M32(((u32)v1+1012))), (M8(((u32)v1+2714))));
    } else {
        fn_801957AC(v1);
    }
    fn_80083D20(p3, ((M16(((u32)v1+2716)))&0xff));
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

void fn_80083644(u32 p3, u32 p4) {
    fn_8007E1A0(p4, ((M32(((u32)p3+44)))+760), ((M32(((u32)p3+44)))+820), ((M32(((u32)p3+44)))+832));
}

u32 fn_80083714(void) {
    return (((M8(&lbl_80552E40[0]))>>7)&0x1);
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
    float L8[3];
    float L20[5];
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




















