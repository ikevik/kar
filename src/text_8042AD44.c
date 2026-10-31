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
extern int lbl_8058D198[];
extern void* lbl_805DE3E4;
extern void* lbl_805DE37C;
extern void HSD_Free();
extern void fn_80437F2C();
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
    if (a) *a = lbl_8058D198[5];
    if (b) *b = lbl_8058D198[6];
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
