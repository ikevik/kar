/* auto small functions */
#pragma dont_inline on
int fn_804858FC();
void fn_80487674();
void fn_80487D4C();
void fn_80488268();
int fn_8048841C();
void fn_80489224();
void fn_80489270();
void fn_804892D0();
void fn_804893D8();
void fn_804828C4();
void fn_80483C1C();
void fn_804859C8();
void fn_804859E8();
void fn_80485AB8();
void fn_80486CD8();
void fn_80486D58();
void fn_80486E84();
void fn_80487CC0();
void fn_80487D00();
void fn_804881DC();
void fn_8048821C();
void fn_8048842C();
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
extern char lbl_805DE6E8;
extern int lbl_805DE6F4;
extern int lbl_805DE6F8;
extern int lbl_805DE6FC;
extern void OSCreateThread();
extern int OSInitThreadQueue();
extern void OSResumeThread();
extern void fn_803BD5A4();
extern void fn_803D9B10();
extern void fn_803DA558();
extern void fn_8046D7FC();
extern void fn_8046D86C();
extern void fn_80482598();
extern void fn_8048263C();
extern void fn_80482730();
extern void fn_804830A4();
extern void fn_80486BBC();
extern char lbl_80535238[];
extern char lbl_805C2AF8[];
extern char lbl_805C3C40[];
extern char lbl_805CC3C8[];
extern char lbl_805CCA40[];
extern int lbl_805DE6D0;
extern int OSRestoreInterrupts();
extern void OSWakeupThread();
extern void fn_80485064();
extern void fn_80485180();
extern void fn_80485314();
extern void fn_80486D58();
extern void memset();

int fn_8048530C() {
    return lbl_805DE6D0;
}

int fn_804858FC() {
    return (int)lbl_805C2AF8;
}

void fn_80487674() {
    OSWakeupThread(((int)lbl_805C3C40 + 136));
}

void fn_80487D4C() {
    OSWakeupThread(((int)lbl_805C3C40 + 200));
}

void fn_80488268() {
    OSWakeupThread(((int)lbl_805C3C40 + 256));
}

int fn_8048841C() {
    return *(int*)((int)lbl_805C3C40 + 248);
}

void fn_80489224() {
    int t0;
    t0 = OSDisableInterrupts();
    memset((int)lbl_805CCA40, 0, 96);
    OSRestoreInterrupts(t0);
}

void fn_80489270() {
    int t0;
    int t1;
    t0 = OSDisableInterrupts();
    memset((int)lbl_805CCA40, 0, 96);
    t1 = OSRestoreInterrupts(t0);
    fn_80485064((int)lbl_805CC3C8, 3);
    fn_80486D58();
}

void fn_804892D0() {
    fn_80485314((int)lbl_80535238);
}

void fn_804893D8() {
    fn_80485180();
}

void fn_804828C4(a0) int a0; {
int t0;
int m0;
fn_8046D7FC(0, ((a0 + 0) + 0));
m0 = *(int*)((a0 + 0) + 0);
if ((unsigned)*(int*)((a0 + 0) + 0) == (unsigned)0) {
t0 = *(int*)((a0 + 0) + 0);
fn_8046D86C(0, ((a0 + 0) + 0));
m0 = t0;
}
}

void fn_80483C1C() {
fn_804830A4();
}

void fn_804859C8() {
fn_80482598();
}

void fn_804859E8() {
fn_8048263C();
}

void fn_80485AB8() {
fn_80482730();
}

void fn_80486CD8(a0) int a0; {
int t0;
int t1;
int t2;
int t3;
int t4;
int t5;
int t6;
int t7;
int m0;
m0 = lbl_805DE6FC;
if (lbl_805DE6FC == 0) {
lbl_805DE6FC = 1;
t0 = OSInitThreadQueue((int)&lbl_805DE6E8);
t1 = *(int*)((a0 + 0) + 16);
lbl_805DE6F4 = t1;
t2 = *(int*)((a0 + 0) + 20);
lbl_805DE6F8 = t2;
t3 = *(int*)((a0 + 0) + 0);
t4 = *(int*)((a0 + 0) + 4);
t5 = *(int*)((a0 + 0) + 8);
t6 = *(int*)((a0 + 0) + 12);
OSCreateThread(t3, (int)fn_80486BBC, 0, t4, t5, t6, 0);
t7 = *(int*)((a0 + 0) + 0);
OSResumeThread(t7);
m0 = t2;
}
}

void fn_80486D58() {
int m0;
m0 = lbl_805DE6FC;
if (lbl_805DE6FC == 1) {
lbl_805DE6FC = 2;
OSWakeupThread((int)&lbl_805DE6E8);
m0 = 2;
}
}

void fn_80486E84(a0, a1) int a0; int a1; {
int t0;
t0 = *(int*)(a1 + 0);
fn_803BD5A4(a0, t0);
}

void fn_80487CC0() {
int t0;
int m0;
if (*(int*)((int)lbl_805C3C40 + 128) == 1) {
t0 = *(int*)((int)lbl_805C3C40 + 128);
fn_803D9B10(((int)lbl_805C3C40 + 272));
m0 = t0;
} else {
m0 = *(int*)((int)lbl_805C3C40 + 128);
}
}

void fn_80487D00() {
int t0;
int m0;
m0 = *(int*)((int)lbl_805C3C40 + 128);
if (*(int*)((int)lbl_805C3C40 + 128) == 1) {
t0 = *(int*)((int)lbl_805C3C40 + 128);
fn_803DA558(((int)lbl_805C3C40 + 272), 0);
*(int*)((int)lbl_805C3C40 + 128) = 0;
m0 = 0;
}
}

void fn_804881DC() {
int t0;
int m0;
if (*(int*)((int)lbl_805C3C40 + 192) == 1) {
t0 = *(int*)((int)lbl_805C3C40 + 192);
fn_803D9B10(((int)lbl_805C3C40 + 272));
m0 = t0;
} else {
m0 = *(int*)((int)lbl_805C3C40 + 192);
}
}

void fn_8048821C() {
int t0;
int m0;
m0 = *(int*)((int)lbl_805C3C40 + 192);
if (*(int*)((int)lbl_805C3C40 + 192) == 1) {
t0 = *(int*)((int)lbl_805C3C40 + 192);
fn_803DA558(((int)lbl_805C3C40 + 272), 0);
*(int*)((int)lbl_805C3C40 + 192) = 0;
m0 = 0;
}
}

void fn_8048842C() {
int t0;
int m0;
if (*(int*)((int)lbl_805C3C40 + 248) == 1) {
t0 = *(int*)((int)lbl_805C3C40 + 248);
fn_803D9B10(((int)lbl_805C3C40 + 272));
m0 = t0;
} else {
m0 = *(int*)((int)lbl_805C3C40 + 248);
}
}
