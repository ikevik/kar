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
void fn_80437CD8();
void fn_80439D14();
void fn_8043A15C();
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
extern char lbl_8058D198[];
extern unsigned short lbl_805DCDD0;
extern int lbl_805DCE08;
extern int lbl_805DCE0C;
extern unsigned short lbl_805DE35C;
extern unsigned short lbl_805DE362;
extern unsigned short lbl_805DE3E0;
extern int lbl_805DE3E4;
extern float lbl_805DE41C;
extern float lbl_805DE420;
extern float lbl_805DE424;
extern int lbl_805DE428;
extern int lbl_805DE430;
extern float lbl_805E6038;
extern float lbl_805E603C;
extern float lbl_805E60C8;
extern int HSD_Alloc();
extern void __rlwimi();
extern void fn_803CEC68();
extern void fn_803CECD0();
extern void fn_803CEF6C();
extern void fn_803CF134();
extern void fn_804285AC();
extern void fn_8043A010();
extern int memset();
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

void fn_80437CD8(a0, a1) int a0; int a1; {
int t0;
int t1;
int t2;
float t3;
int t4;
float t5;
int m0;
int m1;
int m2;
int m3;
m1 = *(unsigned short*)(a0 + 28);
m2 = a0;
if ((unsigned)lbl_805DE3E4 == (unsigned)0) {
t0 = *(unsigned short*)(a0 + 28);
t1 = HSD_Alloc(lbl_805DE3E0);
lbl_805DE3E4 = t1;
m0 = t1;
if ((unsigned)t1 != (unsigned)0) {
t2 = memset(t1, 0, lbl_805DE3E0);
m0 = t2;
}
m1 = t0;
m2 = m0;
}
m3 = lbl_805DE3E4;
if ((unsigned)lbl_805DE3E4 != (unsigned)0) {
t3 = lbl_805E6038;
t4 = *(int*)(lbl_805DE3E4 + 0);
lbl_805DE3E4 = t4;
t5 = lbl_805E603C;
*(int*)(lbl_805DE3E4 + 0) = 0;
*(unsigned short*)(lbl_805DE3E4 + 62) = 1;
*(unsigned char*)(lbl_805DE3E4 + 61) = 0;
*(unsigned char*)(lbl_805DE3E4 + 60) = a1;
*(float*)(lbl_805DE3E4 + 16) = t3;
*(float*)(lbl_805DE3E4 + 12) = t3;
*(float*)(lbl_805DE3E4 + 8) = t3;
*(float*)(lbl_805DE3E4 + 28) = t3;
*(float*)(lbl_805DE3E4 + 24) = t3;
*(float*)(lbl_805DE3E4 + 20) = t3;
*(float*)(lbl_805DE3E4 + 44) = t5;
*(float*)(lbl_805DE3E4 + 40) = t5;
*(float*)(lbl_805DE3E4 + 36) = t5;
*(float*)(lbl_805DE3E4 + 56) = t3;
*(float*)(lbl_805DE3E4 + 52) = t3;
*(float*)(lbl_805DE3E4 + 48) = t3;
*(int*)(lbl_805DE3E4 + 120) = 0;
*(unsigned char*)(lbl_805DE3E4 + 126) = 0;
*(int*)(lbl_805DE3E4 + 4) = 0;
*(unsigned short*)(lbl_805DE3E4 + 124) = m1;
lbl_805DE362 = (lbl_805DE362 + 1);
if ((unsigned)((lbl_805DE362 + 1) & 0xffff) > (unsigned)lbl_805DE35C) {
lbl_805DE35C = ((lbl_805DE362 + 1) & 0xffff);
}
m3 = lbl_805DE35C;
}
*(int*)(a0 + 84) = lbl_805DE3E4;
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

void fn_8043A15C(a0) int a0; {
int t0;
int t1;
int t2;
int t3;
int m0;
int m1;
if (a0 != 0) {
t0 = __rlwimi(*(unsigned char*)((int)lbl_8058D198 + 0), 1, 6, 25, 25);
t1 = (((unsigned)*(unsigned char*)((int)lbl_8058D198 + 0) >> 6) & 0x1);
*(unsigned char*)((int)lbl_8058D198 + 0) = t0;
fn_804285AC((int)fn_8043A010, t0, (int)lbl_8058D198);
m0 = 1;
m1 = t1;
} else {
t2 = __rlwimi(*(unsigned char*)((int)lbl_8058D198 + 0), 0, 6, 25, 25);
t3 = (((unsigned)*(unsigned char*)((int)lbl_8058D198 + 0) >> 6) & 0x1);
*(unsigned char*)((int)lbl_8058D198 + 0) = t2;
fn_804285AC(0, t2, (int)lbl_8058D198);
m0 = 0;
m1 = t3;
}
}

void fn_8043FFB4(a0) int a0; {
lbl_805DE430 = ((unsigned)(a0 + 15) >> 4);
}
