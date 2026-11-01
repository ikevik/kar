/* auto small functions */
#pragma dont_inline on
int fn_80430190();
void fn_8043D520();
void fn_8043E018();
void fn_8043E6E8();
void fn_8043E6EC();
void fn_8043E6F0();
void fn_8043E6F4();
void fn_8043E6F8();
void fn_8043E6FC();
void fn_8043E700();
void fn_8043E704();
void fn_8043E708();
void fn_8043E70C();
void fn_8043E710();
void fn_8043E714();
void fn_8043E718();
void fn_8043E71C();
void fn_8043F0A0();
void fn_8043010C();
void fn_8043750C();
void fn_8043979C();
void fn_804397A8();
void fn_8043FD04();
void fn_8043FFAC();
void fn_80440718();
int fn_804407D8();
int fn_80430270();
void fn_804373DC();
void fn_80439D14();
void fn_8043FFB4();
typedef struct { int w[2]; } KS2;
typedef struct { int w[3]; } KS3;
typedef struct { int w[4]; } KS4;
typedef struct { int w[5]; } KS5;
typedef struct { int w[6]; } KS6;
typedef struct { int w[7]; } KS7;
typedef struct { int w[8]; } KS8;
typedef struct { int w[9]; } KS9;
typedef struct { int w[10]; } KS10;
typedef struct { int w[11]; } KS11;
typedef struct { int w[12]; } KS12;
typedef struct { int w[13]; } KS13;
typedef struct { int w[14]; } KS14;
typedef struct { int w[15]; } KS15;
typedef struct { int w[16]; } KS16;
extern char lbl_805051E8[];
extern char lbl_805051F4[];
extern unsigned short lbl_805DCDD0;
extern int lbl_805DCE08;
extern int lbl_805DCE0C;
extern float lbl_805DE41C;
extern float lbl_805DE420;
extern float lbl_805DE424;
extern int lbl_805DE428;
extern int lbl_805DE430;
extern float lbl_805E60C8;
extern void fn_803CEC68();
extern void fn_803CECD0();
extern void fn_803CEF6C();
extern void fn_803CF134();
extern int lbl_805DCE00;
extern int lbl_805DE3D8;
extern int lbl_805DE3F0;
extern int lbl_805DE434;
extern int lbl_805DE480;
extern void HSD_CObjSetCurrent();
extern void OSLoadContext();
extern void fn_80417580();
extern void fn_80439854();
extern void fn_80439C40();

void fn_8042BA60(p, v) char* p; int v; { *(int*)(p + 88) = v; }

int fn_80430190(p) char* p; { return *(int*)(p + 0); }

void fn_8043D520() {}

void fn_8043E018() {}

void fn_8043E6E8() {}

void fn_8043E6EC() {}

void fn_8043E6F0() {}

void fn_8043E6F4() {}

void fn_8043E6F8() {}

void fn_8043E6FC() {}

void fn_8043E700() {}

void fn_8043E704() {}

void fn_8043E708() {}

void fn_8043E70C() {}

void fn_8043E710() {}

void fn_8043E714() {}

void fn_8043E718() {}

void fn_8043E71C() {}

void fn_8043F0A0() {}

void fn_8043010C() {
    fn_80417580();
}

void fn_8043750C() {
    lbl_805DE3D8 = -1;
}

void fn_8043979C() {
    lbl_805DE3F0 = 0;
}

void fn_804397A8(a0) int a0; {
    int t0;
    t0 = *(int*)(a0 + 0);
    lbl_805DCE00 = t0;
}

void fn_8043FD04(a0, a1) int a0; int a1; {
    OSLoadContext(a1);
}

void fn_8043FFAC(a0) int a0; {
    lbl_805DE434 = a0;
}

void fn_80440718(a0) int a0; {
    int t0;
    t0 = *(int*)(a0 + 40);
    HSD_CObjSetCurrent(t0);
    fn_80439C40();
    fn_80439854();
}

int fn_804407D8() {
    return lbl_805DE480;
}

int fn_80430270() {
unsigned short t0;
unsigned short t1;
int m0;
t0 = lbl_805DCDD0;
lbl_805DCDD0 = (t0 + 1);
m0 = ((t0 + 1) & 0xffff);
if ((unsigned)((t0 + 1) & 0xffff) < (unsigned)256) {
lbl_805DCDD0 = 256;
m0 = 256;
}
t1 = lbl_805DCDD0;
return t1;
}

void fn_804373DC() {
fn_803CF134(0, 0, 0, 4);
fn_803CEC68(0, 0, 0, 0, 1, 0);
fn_803CECD0(0, 0, 0, 0, 1, 0);
fn_803CF134(1, 0, 0, 4);
fn_803CEC68(1, 0, 0, 0, 1, 0);
fn_803CECD0(1, 0, 0, 0, 1, 0);
fn_803CF134(2, 0, 0, 4);
fn_803CEC68(2, 0, 0, 0, 1, 0);
fn_803CECD0(2, 0, 0, 0, 1, 0);
fn_803CEF6C(0, 0, 0);
fn_803CEF6C(1, 0, 0);
fn_803CEF6C(2, 0, 0);
}

void fn_80439D14(a0, a1, a2) int a0; int a1; int a2; {
float t0;
lbl_805DCE08 = a0;
lbl_805DCE0C = a1;
if (lbl_805DE428 == 0) {
if (a2 != 0) {
t0 = lbl_805E60C8;
lbl_805DE41C = t0;
lbl_805DE420 = t0;
lbl_805DE424 = t0;
}
}
lbl_805DE428 = a2;
}

void fn_8043FFB4(a0) int a0; {
lbl_805DE430 = ((unsigned)(a0 + 15) >> 4);
}

/* ---- w3f batch 1 ---- */
extern unsigned lbl_805085FC[];
typedef struct {
    unsigned char f7 : 1;
    unsigned char f6 : 1;
    unsigned char f0r : 6;
    unsigned char p1[3];
    unsigned char* buf;
    unsigned sz;
    unsigned wc;
    unsigned char p10;
    unsigned char b11;
    unsigned char p12[2];
    unsigned w14;
    unsigned w18;
    unsigned w1c;
    unsigned w20;
} W58D;
extern W58D lbl_8058D198;
extern void* lbl_805DE3E4;
extern void* lbl_805DE37C;
extern void HSD_Free();
extern int fn_80437F2C();
extern void fn_8042B4AC();
extern void fn_8043051C();
extern void fn_80433154();

void fn_8043D524() {
    lbl_805085FC[4] = (lbl_805085FC[4] & 0x0FFFFFF0) | 0x80000000;
}

void fn_80439480(d, f, a, b, s) unsigned char* d; int f; int a; int b; unsigned char* s; {
    d[0] = s[0];
    d[1] = (f & 1) ? s[2] : s[1];
}

void fn_8043A264(a, b) int* a; int* b; {
    if (a) *a = lbl_8058D198.w14;
    if (b) *b = lbl_8058D198.w18;
}

unsigned char* fn_8042BC10(p, q) unsigned char* p; unsigned short* q; {
    *q = *p++;
    if (*q & 0x80) {
        *q = ((*q & 0x7F) << 8) + *p++;
    }
    return p;
}

int fn_80437DDC(a, b) char* a; char* b; {
    if (b == 0 || a == 0 || *(unsigned*)(a + 0x90) != 0) return -1;
    *(int*)(a + 0x90) = (int)b;
    return ++*(unsigned short*)(b + 0x3E);
}

int fn_80437E18(a, b) char* a; char* b; {
    if (b == 0 || a == 0 || *(unsigned*)(a + 0x54) != 0) return -1;
    *(int*)(a + 0x54) = (int)b;
    return ++*(unsigned short*)(b + 0x3E);
}

int fn_80437E54(a, b) char* a; char* b; {
    if (b == 0 || a == 0) return -1;
    if (*(unsigned*)(a + 0x90) != 0) fn_80437F2C(a);
    *(int*)(a + 0x90) = (int)b;
    return ++*(unsigned short*)(b + 0x3E);
}

void fn_80437C90() {
    int* p = (int*)lbl_805DE3E4;
    int* n;
    while (p != 0) {
        n = (int*)*p;
        HSD_Free(p);
        p = n;
    }
    lbl_805DE3E4 = 0;
}

void fn_8043033C() {
    int* p;
    int* n;
    fn_8042B4AC();
    fn_8043051C();
    p = (int*)lbl_805DE37C;
    while (p != 0) {
        n = (int*)*p;
        HSD_Free(p);
        p = n;
    }
    lbl_805DE37C = 0;
    fn_80433154(0);
}

/* ---- w3f batch 2 ---- */
extern unsigned lbl_8058C808[];
extern int lbl_8058CCE8[3][32];
extern void HSD_JObjUnref();
extern void HSD_JObjSetupMatrixSub();
extern void __assert(char*, int, char*);
extern char lbl_80505390[];
extern char lbl_805053D4[];

void fn_8042B7E4(p) int* p; {
    unsigned v = p[1];
    if (v & 0x8000) {
        unsigned* t = lbl_8058C808;
        int i = (v >> 10) & 0x1C;
        if (*(unsigned*)((char*)t + i) != 0) {
            HSD_JObjUnref(*(unsigned*)((char*)t + i));
            *(unsigned*)((char*)t + i) = 0;
        }
    }
}

void fn_8042B77C() {
    int i;
    for (i = 0; i < 256; i++) {
        if (lbl_8058C808[i] != 0) {
            HSD_JObjUnref(lbl_8058C808[i]);
            lbl_8058C808[i] = 0;
        }
    }
}

void fn_8043012C(a, b) char* a; char* b; {
    if (a != 0) {
        *(char**)(a + 0x10) = b;
        if (b != 0) {
            if (b != 0) {
                (*(unsigned short*)(b + 4))++;
                if (*(unsigned short*)(b + 4) == 0xFFFF) {
                    __assert(lbl_805051E8, 0x5D, lbl_805051F4);
                }
            }
        }
    }
}

int fn_804383F0(i) int i; {
    int ok = 0;
    if (i >= 0 && i < 32) ok = 1;
    if (ok == 0) __assert(lbl_80505390, 0x98, lbl_805053D4);
    return lbl_8058CCE8[0][i];
}

/* ---- w3f batch 3 ---- */
extern void* lbl_805DE3E8;
extern unsigned short lbl_805DE362;
extern unsigned short lbl_805DE35C;
extern unsigned short lbl_805DE3E0;
extern unsigned char lbl_805DE353;
extern char lbl_805089A8[];
extern void* HSD_Alloc();
extern void* memset();
extern void fn_804285AC();
extern void fn_8043A010();
extern void fn_80439D48();
extern void fn_80440718();
extern void fn_804397B4();
extern void* func_80428F28();
extern void* HSD_CObjLoadDesc();
extern void fn_80429C14();
extern void fn_80429728();
extern void fn_8043A778(int, int);
extern void fn_8043FD28();

int fn_80437F2C(a) char* a; {
    char* b = *(char**)(a + 0x90);
    char* o;
    void (*f)(void*);
    unsigned short n;
    if (b == 0) return -1;
    n = *(unsigned short*)(b + 0x3E) - 1;
    *(unsigned short*)(b + 0x3E) = n;
    if (n == 0) {
        o = *(char**)(a + 0x90);
        f = *(void (**)(void*))(o + 0x78);
        if (f != 0) f(o);
        *(void**)o = lbl_805DE3E4;
        lbl_805DE3E4 = o;
        lbl_805DE362--;
    }
    *(int*)(a + 0x90) = 0;
    return n;
}

int fn_80437FCC(a) char* a; {
    char* b = *(char**)(a + 0x54);
    char* o;
    void (*f)(void*);
    unsigned short n;
    if (b == 0) return -1;
    if (*(char**)(b + 4) == a) *(int*)(b + 4) = 0;
    n = *(unsigned short*)(*(char**)(a + 0x54) + 0x3E) - 1;
    *(unsigned short*)(*(char**)(a + 0x54) + 0x3E) = n;
    if (n == 0) {
        o = *(char**)(a + 0x54);
        f = *(void (**)(void*))(o + 0x78);
        if (f != 0) f(o);
        *(void**)o = lbl_805DE3E4;
        lbl_805DE3E4 = o;
        lbl_805DE362--;
    }
    *(int*)(a + 0x54) = 0;
    return n;
}

int fn_8043A15C(on) int on; {
    int old = lbl_8058D198.f6;
    if (on != 0) {
        lbl_8058D198.f6 = 1;
        fn_804285AC(fn_8043A010);
    } else {
        lbl_8058D198.f6 = 0;
        fn_804285AC(0);
    }
    return old;
}

void fn_8043A1CC(buf, size) void* buf; int size; {
    memset(&lbl_8058D198, 0, 0x24);
    lbl_8058D198.buf = buf;
    lbl_8058D198.sz = size;
    memset(buf, 0, size);
    lbl_8058D198.f7 = 1;
    lbl_8058D198.f6 = 1;
    fn_804285AC(fn_8043A010);
}


void* fn_80440744(a, b, c, d) int a; int b; int c; int d; {
    void* r = func_80428F28();
    void* x;
    if (r == 0) return 0;
    x = HSD_CObjLoadDesc(lbl_805089A8);
    fn_80429C14(r, lbl_805DE353, x);
    fn_80429728(r, fn_80440718, d);
    fn_804397B4(fn_80439D48);
    fn_80439D14(4, 1, 0);
    return r;
}

void fn_8043FFC4(int a, ...) {
    fn_8043A778(a, 16);
    fn_8043FD28(a);
}

extern const float lbl_805E5E88;
extern const float lbl_805E5F18;
/* ---- w3f batch 4 ---- */
extern char lbl_805DCDB8;
extern char lbl_805DCDC0;

int fn_80437EC0(a, b) char* a; char* b; {
    if (b == 0 || a == 0) return -1;
    if (*(unsigned*)(a + 0x54) != 0) fn_80437FCC(a);
    *(int*)(a + 0x54) = (int)b;
    return ++*(unsigned short*)(b + 0x3E);
}

#if 0 /* w3f near misses */
int fn_80437BF0(int n, short size) {
    int* p;
    int i;
    lbl_805DE362 = 0;
    lbl_805DE35C = 0;
    lbl_805DE3E0 = size;
    lbl_805DE3E4 = 0;
    for (i = 0; i < n; i++) {
        p = HSD_Alloc(size);
        if (p == 0) return i;
        memset(p, 0, size);
        *p = (int)lbl_805DE3E4;
        lbl_805DE3E4 = p;
    }
    return i;
}

void fn_80438190() {
    int* p;
    int* nx;
    int i;
    p = (int*)lbl_805DE3E8;
    while (p != 0) {
        nx = (int*)*p;
        HSD_Free(p);
        p = nx;
    }
    lbl_805DE3E8 = 0;
    {
    int* a0 = lbl_8058CCE8[0];
    int* a1 = lbl_8058CCE8[1];
    int* a2 = lbl_8058CCE8[2];
    for (i = 0; i < 32; i++) {
        p = (int*)a0[i];
        while (p != 0) {
            nx = (int*)*p;
            HSD_Free(p);
            p = nx;
        }
        a0[i] = 0;
        a1[i] = 0;
        a2[i] = 0;
    }
    }
}

void fn_8043A298(a, n) unsigned a; unsigned n; {
    unsigned char c;
    unsigned sz;
    unsigned cnt;
    unsigned pos;
    unsigned char* buf;
    unsigned end;
    if (!lbl_8058D198.f7) return;
    c = lbl_8058D198.b11;
    cnt = 0;
    sz = lbl_8058D198.sz;
    end = lbl_8058D198.wc + sz;
    pos = c;
    buf = lbl_8058D198.buf;
    while (cnt < n && pos < sz) {
        pos++;
        cnt++;
        c = buf[(end - pos) % sz];
        pos += c;
    }
    lbl_8058D198.w18 = cnt;
    lbl_8058D198.w1c = pos;
    lbl_8058D198.w20 = c;
    if (a < c) lbl_8058D198.w14 = a;
    else lbl_8058D198.w14 = c;
}


int fn_804300B4(unsigned char a, float x) {
    float t = (float)a + x;
    if (t < lbl_805E5E88) t = lbl_805E5E88;
    if (t > lbl_805E5F18) t = lbl_805E5F18;
    return (int)t;
}
void fn_80430044(p) char* p; {
    if (p != 0) {
        int ok;
        unsigned fl;
        if (p == 0) __assert(&lbl_805DCDB8, 0x25D, &lbl_805DCDC0);
        fl = *(unsigned*)(p + 0x14);
        ok = 0;
        if (!(fl & 0x800000) && (fl & 0x40)) ok = 1;
        if (ok == 0) return;
        HSD_JObjSetupMatrixSub(p);
    }
}


#endif /* w3f near misses */

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
typedef struct { u8 :2; u8 f:1; } BFu8_2_1;
extern u8 lbl_80507308[];
extern u32 lbl_805DD028;
extern u32 lbl_805DD030;
extern u32 lbl_805DD038;
extern u32 lbl_805DD040;
extern u32 lbl_805DD048;
extern u32 lbl_805DD050;
extern u32 lbl_805DD054;
extern u32 lbl_805DD05C;
extern u32 lbl_805DD064;
extern u32 lbl_805DD06C;
extern u32 lbl_805DD070;
void OSReport(u32, ...);

void fn_8043A850(u32 p3) {
    OSReport(((u32)lbl_80507308+2364), (M32(((u32)p3+404))));
    if ((s32)((M32(((u32)p3+404)))&0x20000000) != (s32)0) {
        OSReport(((u32)lbl_80507308+2380));
        if ((s32)((M32(((u32)p3+404)))&0x1000000) != (s32)0) {
            OSReport((u32)&lbl_805DD028);
        }
        if ((s32)((M32(((u32)p3+404)))&0x800000) != (s32)0) {
            OSReport((u32)&lbl_805DD030);
        }
        if ((s32)((M32(((u32)p3+404)))&0x400000) != (s32)0) {
            OSReport((u32)&lbl_805DD038);
        }
        if ((s32)((M32(((u32)p3+404)))&0x200000) != (s32)0) {
            OSReport((u32)&lbl_805DD040);
        }
        if ((s32)((M32(((u32)p3+404)))&0x100000) != (s32)0) {
            OSReport((u32)&lbl_805DD048);
        }
        if ((s32)((M32(((u32)p3+404)))&0x80000) != (s32)0) {
            OSReport((u32)&lbl_805DD050);
        }
        if ((s32)((M32(((u32)p3+404)))&0x400) != (s32)0) {
            OSReport((u32)&lbl_805DD054);
        }
        if ((s32)((M32(((u32)p3+404)))&0x200) != (s32)0) {
            OSReport((u32)&lbl_805DD05C);
        }
        if ((s32)((M32(((u32)p3+404)))&0x100) != (s32)0) {
            OSReport((u32)&lbl_805DD064);
        }
        OSReport((u32)&lbl_805DD06C);
    }
    if ((s32)((M32(((u32)p3+404)))&0x10000000) != (s32)0) {
        OSReport(((u32)lbl_80507308+2404));
    }
    if ((s32)((M32(((u32)p3+404)))&0x8000000) != (s32)0) {
        OSReport(((u32)lbl_80507308+2416));
    }
    if ((s32)((M32(((u32)p3+404)))&0x4000000) != (s32)0) {
        OSReport(((u32)lbl_80507308+2428));
    }
    if ((s32)((M32(((u32)p3+404)))&0x2000000) != (s32)0) {
        OSReport(((u32)lbl_80507308+2444));
    }
    OSReport((u32)&lbl_805DD070);
}


























#define MD(a) (*(double*)(a))
float __fabsf(float);
typedef struct { u8 p[36]; u32 f[1024]; } E36_u32;
typedef struct { u8 p[88]; u32 f; u8 q[4]; } A96_88_u32;
typedef struct { u8 p[4]; u32 f; } A8_4_u32;
extern u8 lbl_8058C208[];
extern u16 lbl_805DE366;
extern u16 lbl_805DE360;
extern u32 lbl_805DE358;
extern u32 lbl_805DE368;
extern u8 lbl_8050521C[];
extern u32 lbl_805DCDC8;
extern u32 lbl_805DE378;
extern u16 lbl_805DE364;
extern u16 lbl_805DE35E;
extern u32 lbl_805DE370;
extern u32 lbl_805DE380;
extern u32 lbl_805DE388;
extern u32 lbl_805DE384;
extern u32 lbl_805DE374;
extern u32 lbl_805DE36C;
extern u32 lbl_805DCDD4;
extern u32 lbl_805DCDDC;
extern const float lbl_805E5F20;
extern const float lbl_805E5F24;
extern u8 lbl_8050528C[];
extern u8 lbl_80505298[];
extern u32 lbl_805DE390;
extern u8 lbl_80505300[];
extern u8 lbl_8050530C[];
extern u8 lbl_8058CC08[];
extern const float lbl_805DE3C8;
extern const float lbl_805DE3C4;
extern const float lbl_805DE3C0;
extern const float lbl_805DE3BC;
extern const float lbl_805DE3B8;
extern const float lbl_805DE3B4;
extern const float lbl_805E5FA0;
extern const float lbl_805E6000;
extern u8 lbl_805DC8B8[];
extern const float lbl_805E6004;
extern const float lbl_805E6008;
extern const double lbl_805E6010;
extern u8 lbl_805DCDE8;
extern const float lbl_805E5FC0;
extern u32 lbl_805DE394;
extern const double lbl_805E5FF8;
extern const float lbl_805E5FEC;
extern const float lbl_805E5FF0;
extern u32 lbl_805DE3CC;
extern u8 lbl_805DE3A8;
extern u8 lbl_805DE3A4;
extern u8 lbl_8058CD68[];
extern float lbl_805DCDF0;
extern float lbl_805DCDF4;
extern u8 lbl_805DCDF8;
extern u8 lbl_80505660[];
extern u8 lbl_8058D1C0[];
extern u8 lbl_80507328[];
extern u8 lbl_805084B0[];
extern u32 lbl_805DD098;
extern u32 lbl_805DD09C;
extern u32 lbl_805DD0A0;
extern u32 lbl_805DD0C4;
extern u32 lbl_805DD0C8;
extern u32 lbl_805DD0D8;
extern u32 lbl_805DD0DC;
extern u32 lbl_805DD0E0;
extern u32 lbl_805DD0CC;
extern u32 lbl_805DD0D0;
extern u32 lbl_805DD0D4;
extern u32 lbl_805DD0E4;
extern u32 lbl_805DD0E8;
extern u8 lbl_80508884[];
extern u32 lbl_805DD0F0;
extern u32 lbl_805DD104;
extern u32 lbl_805DD0FC;
extern u32 lbl_805DD110;
extern u32 lbl_805DD118;
extern u32 lbl_805DD114;
extern u32 lbl_805DD10C;
extern u32 lbl_805DD0EC;
extern u32 lbl_805DD0F8;
extern u32 lbl_805DD0F4;
u32 fn_80438084();
void fn_8042B054();
void fn_80430394();
u32 fn_80438314();
u32 fn_8042CCE8();
u32 fn_8042B94C(u32, float);
void fn_80416B24();
void fn_80416048();
float HSD_Randf(float);
float generateParticle(u32, float);
void fn_8043070C();
u32 HSD_SListRemove();
u32 fn_8043294C();
u32 HSD_SListAppend();
float fn_804333D4(u32, u32, u32, u32, float);
void PSMTXMultVec();
float fn_803BD3C8(float, float, float);
void fn_803D1908(u32, u32, float, float, float);
void fn_80435268(u32, u32, float, float, float, float, float, float, float, float);
void PSMTXCopy();
void fn_803D19AC(u32, u32, float, float, float);
void PSMTXConcat();
void GXSetCurrentMtx();
void GXSetLineWidth(u32, u32, float);
void fn_803CAC04();
void GXSetVtxDesc();
void GXBegin();
void fn_803CD3AC();
u32 HSD_LObjGetActiveByID();
void HSD_MulColor();
u32 fn_803CD2B8();
void HSD_ClearVtxDesc();
u32 HSD_CObjGetCurrent();
void HSD_CObjGetViewingMtx();
void GXLoadPosMtxImm();
void HSD_StateSetLineWidth();
void HSD_StateSetPointSize();
void HSD_SetupRenderMode();
void GXSetVtxAttrFmt();
void HSD_StateSetCullMode();
float fn_80438898(u32, u32, float, float);
u32 HSD_SListPrepend();
u32 OSDisableInterrupts();
void OSRestoreInterrupts();
void fn_8043A324();
u32 strlen();
void fn_80439604();
void fn_804394A4();
u32 OSGetPhysicalMemSize();
void sprintf(u32, ...);
u32 fn_80440240();
u32 OSGetResetSwitchState();
void OSResetSystem();
void memcpy();
void fn_803DC8E8();
void PADClamp();
void fn_803DC4CC();
extern u8 lbl_8058CCB4[];
extern u32 lbl_805DE3D0;
extern const float lbl_805E6038;
extern const float lbl_805E603C;
extern u8 lbl_80508248[];
void HSD_JObjSetMtxDirtySub();
void fn_80433E54();
void fn_803CC474(u32, u32, float);
typedef struct { u32 w[2]; } S8;

void fn_8043F0A4(u32 p3) {
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
    if ((s32)p3 != (s32)0) {
        v1 = M32(p3);
        if ((u32)v1 != (u32)0) {
            if ((u32)v1 != (u32)0) {
                v2 = M32(v1);
                if ((u32)v2 != (u32)0) {
                    if ((u32)v2 != (u32)0) {
                        v3 = M32(v2);
                        if ((u32)v3 != (u32)0) {
                            if ((u32)v3 != (u32)0) {
                                v4 = M32(v3);
                                if ((u32)v4 != (u32)0) {
                                    if ((u32)v4 != (u32)0) {
                                        v5 = M32(v4);
                                        if ((u32)v5 != (u32)0) {
                                            if ((u32)v5 != (u32)0) {
                                                v6 = M32(v5);
                                                if ((u32)v6 != (u32)0) {
                                                    if ((u32)v6 != (u32)0) {
                                                        v7 = M32(v6);
                                                        if ((u32)v7 != (u32)0) {
                                                            if ((u32)v7 != (u32)0) {
                                                                v8 = M32(v7);
                                                                if ((u32)v8 != (u32)0) {
                                                                    if ((u32)v8 != (u32)0) {
                                                                        v9 = M32(v8);
                                                                        if ((u32)v9 != (u32)0) {
                                                                            fn_8043F0A4(v9);
                                                                        } else {
                                                                        }
                                                                        v11 = M32(((u32)v8+8));
                                                                        if ((u32)v11 != (u32)0) {
                                                                            ((void (*)(u32))(v11))(v8);
                                                                        } else {
                                                                        }
                                                                    } else {
                                                                    }
                                                                } else {
                                                                }
                                                                v13 = M32(((u32)v7+8));
                                                                if ((u32)v13 != (u32)0) {
                                                                    ((void (*)(u32))(v13))(v7);
                                                                } else {
                                                                }
                                                            } else {
                                                            }
                                                        } else {
                                                        }
                                                        v15 = M32(((u32)v6+8));
                                                        if ((u32)v15 != (u32)0) {
                                                            ((void (*)(u32))(v15))(v6);
                                                        } else {
                                                        }
                                                    } else {
                                                    }
                                                } else {
                                                }
                                                v17 = M32(((u32)v5+8));
                                                if ((u32)v17 != (u32)0) {
                                                    ((void (*)(u32))(v17))(v5);
                                                } else {
                                                }
                                            } else {
                                            }
                                        } else {
                                        }
                                        v19 = M32(((u32)v4+8));
                                        if ((u32)v19 != (u32)0) {
                                            ((void (*)(u32))(v19))(v4);
                                        } else {
                                        }
                                    } else {
                                    }
                                } else {
                                }
                                v21 = M32(((u32)v3+8));
                                if ((u32)v21 != (u32)0) {
                                    ((void (*)(u32))(v21))(v3);
                                } else {
                                }
                            } else {
                            }
                        } else {
                        }
                        v23 = M32(((u32)v2+8));
                        if ((u32)v23 != (u32)0) {
                            ((void (*)(u32))(v23))(v2);
                        } else {
                        }
                    } else {
                    }
                } else {
                }
                v25 = M32(((u32)v1+8));
                if ((u32)v25 != (u32)0) {
                    ((void (*)(u32))(v25))(v1);
                } else {
                }
            } else {
            }
        } else {
        }
        v27 = M32(((u32)p3+8));
        if ((u32)v27 != (u32)0) {
            ((void (*)(u32))(v27))(p3);
        } else {
        }
    } else {
    }
}

