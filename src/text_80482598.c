/* auto small functions */
#pragma dont_inline on
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

int fn_8048530C(void) {
    return lbl_805DE6D0;
}

int fn_804858FC(void) {
    return (int)lbl_805C2AF8;
}

void fn_80487674(void) {
    OSWakeupThread(((int)lbl_805C3C40 + 136));
}

void fn_80487D4C(void) {
    OSWakeupThread(((int)lbl_805C3C40 + 200));
}

void fn_80488268(void) {
    OSWakeupThread(((int)lbl_805C3C40 + 256));
}

int fn_8048841C(void) {
    return *(int*)((int)lbl_805C3C40 + 248);
}

void fn_80489224(void) {
    int t0;
    t0 = OSDisableInterrupts();
    memset((int)lbl_805CCA40, 0, 96);
    OSRestoreInterrupts(t0);
}

void fn_80489270(void) {
    int t0;
    int t1;
    t0 = OSDisableInterrupts();
    memset((int)lbl_805CCA40, 0, 96);
    t1 = OSRestoreInterrupts(t0);
    fn_80485064((int)lbl_805CC3C8, 3);
    fn_80486D58();
}

void fn_804892D0(void) {
    fn_80485314((int)lbl_80535238);
}

void fn_804893D8(void) {
    fn_80485180();
}

void fn_80487D00(void) {
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

void fn_8048821C(void) {
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
