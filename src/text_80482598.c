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
