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
void fn_80487D00();
void fn_8048821C();
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
extern void fn_803DA558();
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

/* ---- w3f batch 1 ---- */
#define G32(o) (*(int*)((int)lbl_805C3C40 + (o)))
extern int lbl_805DE6FC;
extern int lbl_805DE6E8;
extern int fn_803D9B10();
extern void fn_803BD5A4();
extern void fn_80487368();
extern void fn_804887EC();
extern void OSExitThread();
extern void fn_804830A4();
extern void fn_80482598();
extern void fn_8048263C();
extern void fn_80482730();

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

void fn_80486D58() {
    if (lbl_805DE6FC == 1) {
        lbl_805DE6FC = 2;
        OSWakeupThread(&lbl_805DE6E8);
    }
}

void fn_80486E84(a, b) int a; int* b; {
    fn_803BD5A4(a, *b);
}

int fn_8048763C() {
    fn_80487368();
    return G32(0x24) == 2;
}

int fn_80487C0C() {
    int en = OSDisableInterrupts();
    int v = *(unsigned char*)((int)lbl_805C3C40 + 0x39);
    OSRestoreInterrupts(en);
    return v;
}

int fn_80487C48() {
    int en = OSDisableInterrupts();
    int v = *(unsigned char*)((int)lbl_805C3C40 + 0x4C);
    OSRestoreInterrupts(en);
    return v;
}

int fn_80487CC0() {
    if (G32(0x80) == 1) return fn_803D9B10((int)lbl_805C3C40 + 0x110);
    return 1;
}

int fn_804881C0() {
    return G32(0x90) == 1;
}

int fn_804881DC() {
    if (G32(0xC0) == 1) return fn_803D9B10((int)lbl_805C3C40 + 0x110);
    return 1;
}

int fn_8048842C() {
    if (G32(0xF8) == 1) return fn_803D9B10((int)lbl_805C3C40 + 0x110);
    return 1;
}

int fn_80488938() {
    int en;
    int v;
    fn_804887EC();
    en = OSDisableInterrupts();
    v = G32(0xC);
    OSRestoreInterrupts(en);
    return v;
}

void fn_80488978(a) int a; {
    int en = OSDisableInterrupts();
    if (G32(0xC) == 0) G32(0xC) = a;
    OSRestoreInterrupts(en);
}

void fn_804889C0() {
    int en = OSDisableInterrupts();
    G32(0xC) = 0;
    OSRestoreInterrupts(en);
}

void fn_804889F4() {
    int en = OSDisableInterrupts();
    G32(0x108) = 1;
    OSRestoreInterrupts(en);
}

void fn_80488A28() {
    int en = OSDisableInterrupts();
    int v = G32(0x108);
    OSRestoreInterrupts(en);
    if (v == 1) OSExitThread(0);
}

int fn_804893F8() {
    return fn_8048530C() == 1;
}
