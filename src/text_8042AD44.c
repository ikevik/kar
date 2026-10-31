/* auto small functions */
#pragma dont_inline on
extern unsigned short lbl_805DCDD0;
extern int lbl_805DCE08;
extern int lbl_805DCE0C;
extern float lbl_805DE41C;
extern float lbl_805DE420;
extern float lbl_805DE424;
extern int lbl_805DE428;
extern int lbl_805DE430;
extern float lbl_805E60C8;
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

void fn_8042BA60(char* p, int v) { *(int*)(p + 88) = v; }

int fn_80430190(char* p) { return *(int*)(p + 0); }

void fn_8043D520(void) {}

void fn_8043E018(void) {}

void fn_8043E6E8(void) {}

void fn_8043E6EC(void) {}

void fn_8043E6F0(void) {}

void fn_8043E6F4(void) {}

void fn_8043E6F8(void) {}

void fn_8043E6FC(void) {}

void fn_8043E700(void) {}

void fn_8043E704(void) {}

void fn_8043E708(void) {}

void fn_8043E70C(void) {}

void fn_8043E710(void) {}

void fn_8043E714(void) {}

void fn_8043E718(void) {}

void fn_8043E71C(void) {}

void fn_8043F0A0(void) {}

void fn_8043010C(void) {
    fn_80417580();
}

void fn_8043750C(void) {
    lbl_805DE3D8 = -1;
}

void fn_8043979C(void) {
    lbl_805DE3F0 = 0;
}

void fn_804397A8(int a0) {
    int t0;
    t0 = *(int*)(a0 + 0);
    lbl_805DCE00 = t0;
}

void fn_8043FD04(int a0, int a1) {
    OSLoadContext(a1);
}

void fn_8043FFAC(int a0) {
    lbl_805DE434 = a0;
}

void fn_80440718(int a0) {
    int t0;
    t0 = *(int*)(a0 + 40);
    HSD_CObjSetCurrent(t0);
    fn_80439C40();
    fn_80439854();
}

int fn_804407D8(void) {
    return lbl_805DE480;
}

int fn_80430270(void) {
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

void fn_80439D14(int a0, int a1, int a2) {
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

void fn_8043FFB4(int a0) {
lbl_805DE430 = ((unsigned)(a0 + 15) >> 4);
}
