/* auto small functions */
#pragma dont_inline on
int fn_80481384();
void fn_8047DB6C();
void fn_8047DE78();
void fn_8047FAD4();
void fn_8047FB24();
void fn_8047FB9C();
void fn_8047FE2C();
void fn_80480D10();
void fn_80480D38();
void fn_80480D60();
void fn_8048134C();
void fn_8048138C();
void fn_804819F0();
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
extern char lbl_80534558[];
extern char lbl_805BDD20[];
extern char lbl_805C2448[];
extern char lbl_805C29B0[];
extern int lbl_805DE68C;
extern char lbl_805DE6B0;
extern int OSCancelAlarm();
extern int OSCreateAlarm();
extern void OSWakeupThread();
extern void fn_8046E828();
extern void fn_8046F190();
extern void fn_8047F3DC();
extern void fn_8047F578();
extern void fn_8047F648();
extern void fn_8047FCFC();
extern int fn_80480D88();
extern void fn_80480EDC();
extern void fn_80481008();
extern void fn_8048105C();
extern void fn_80481184();
extern void fn_80481240();
extern int fn_80481510();
extern void memmove();
extern int memset();



int fn_8048137C() { return 1; }

int fn_80481384() { return 1; }


void fn_8047DB6C() {
OSWakeupThread((int)&lbl_805DE6B0);
}

void fn_8047DE78() {
lbl_805DE68C = 3;
}

void fn_8047FAD4(a0, a1, a2) int a0; int a1; int a2; {
int t0;
int t1;
int t2;
t0 = (a2 + *(unsigned char*)(a2 + 1));
t1 = ((a0 + (a1 & 0xffff)) - (a2 + *(unsigned char*)(a2 + 1)));
t2 = *(unsigned char*)(a2 + 1);
memmove((a2 + 0), t0, t1);
}

void fn_8047FB24(a0, a1, a2, a3) int a0; int a1; int a2; int a3; {
int t0;
int t1;
t0 = (((a2 + 0) + *(unsigned char*)(a3 + 1)) + 0);
memmove(t0, ((a2 + 0) + 0), ((a0 + ((a1 + 0) & 0xffff)) - (a2 + 0)));
t1 = *(unsigned char*)((a3 + 0) + 1);
memmove(((a2 + 0) + 0), ((a3 + 0) + 0), t1);
}

void fn_8047FB9C(a0, a1, a2, a3, a4) int a0; int a1; int a2; int a3; int a4; {
int t0;
int m0;
t0 = fn_80480D88(((a1 + 0) + 0), ((a0 + 0) + 0), (a3 + 0), (a4 + 0));
if (t0 == 0) {
m0 = 0;
} else {
fn_8048138C(((a2 + 0) + 0), ((a0 + 0) + 0));
*(int*)((a1 + 0) + 644) = (a2 + 0);
*(int*)((a2 + 0) + 644) = 0;
*(int*)((a0 + 0) + 88) = (a1 + 0);
*(int*)((a0 + 0) + 92) = (a2 + 0);
m0 = 1;
}
}

void fn_8047FE2C(a0) int a0; {
int t0;
int t1;
int t2;
int t3;
int t4;
int t5;
int t6;
int t7;
int m0;
t0 = *(unsigned short*)(a0 + 1548);
t1 = (*(unsigned short*)(a0 + 1548) + 1);
*(unsigned short*)((a0 - 16) + 1564) = t1;
if ((unsigned)*(unsigned short*)((a0 - 16) + 1564) > (unsigned)6) {
t2 = *(int*)((a0 - 16) + 1568);
t3 = *(unsigned short*)((a0 - 16) + 1564);
fn_8046F190(t2, -103);
t4 = OSCancelAlarm(((a0 - 16) + 16));
*(unsigned char*)((a0 - 16) + 0) = 0;
*(unsigned short*)((a0 - 16) + 2) = (0x10000 - 1);
*(unsigned short*)((a0 - 16) + 4) = (0x10000 - 1);
t5 = *(int*)((a0 - 16) + 1568);
*(int*)(t5 + 64) = 1500;
m0 = 1500;
} else {
t6 = *(int*)((a0 - 16) + 1568);
t7 = *(unsigned short*)((a0 - 16) + 1564);
fn_8047FCFC(t6, (a0 - 16));
m0 = t7;
}
}

void fn_80480D10(a0) int a0; {
int t0;
t0 = *(int*)(a0 + 644);
fn_8047F578(t0);
}

void fn_80480D38(a0) int a0; {
int t0;
t0 = *(int*)(a0 + 644);
fn_8047F3DC(t0);
}

void fn_80480D60(a0) int a0; {
int t0;
t0 = *(int*)(a0 + 644);
fn_8047F648(t0);
}

void fn_8048134C() {
fn_8046E828(0, 0, 0);
}

void fn_8048138C(a0, a1) int a0; int a1; {
int t0;
int t1;
int t2;
int t3;
int t4;
int t5;
int t6;
int t7;
int t8;
t0 = memset(a0, 0, 664);
*(unsigned short*)((a0 + 0) + 0) = (0x10000 - 32735);
t1 = OSCreateAlarm(((a0 + 0) + 568));
*(int*)((a0 + 0) + 608) = (a1 + 0);
*(int*)((a0 + 0) + 612) = (int)fn_80480EDC;
*(int*)((a0 + 0) + 616) = (int)fn_80481008;
*(int*)((a0 + 0) + 620) = (int)fn_8048105C;
*(int*)((a0 + 0) + 624) = (int)fn_80481184;
*(int*)((a0 + 0) + 628) = (int)fn_80481240;
*(int*)((a0 + 0) + 632) = (int)fn_8048134C;
*(int*)((a0 + 0) + 636) = (int)fn_8048137C;
*(int*)((a0 + 0) + 640) = (int)fn_80481384;
t2 = ((a0 + 0) + (*(unsigned short*)((a0 + 0) + 560) + 540));
*(unsigned char*)(t2 + 0) = 3;
*(unsigned char*)(t2 + 1) = 6;
*(int*)(t2 + 2) = 0;
t3 = (*(unsigned short*)((a0 + 0) + 560) + 6);
*(unsigned short*)((a0 + 0) + 560) = t3;
t4 = ((a0 + 0) + (*(unsigned short*)((a0 + 0) + 560) + 540));
*(unsigned char*)(t4 + 0) = 129;
*(unsigned char*)(t4 + 1) = 6;
*(int*)(t4 + 2) = 0;
t5 = (*(unsigned short*)((a0 + 0) + 560) + 6);
*(unsigned short*)((a0 + 0) + 560) = t5;
t6 = ((a0 + 0) + (*(unsigned short*)((a0 + 0) + 560) + 540));
*(unsigned char*)(t6 + 0) = 131;
*(unsigned char*)(t6 + 1) = 6;
*(int*)(t6 + 2) = 0;
t7 = *(unsigned short*)((a0 + 0) + 560);
t8 = (*(unsigned short*)((a0 + 0) + 560) + 6);
*(unsigned short*)((a0 + 0) + 560) = t8;
}

void fn_804814C4(a0) int a0; {
int t0;
int t1;
int t2;
int t3;
int t4;
t0 = *(int*)(a0 + 40);
t1 = (*(int*)(a0 + 40) + 1);
*(int*)((a0 - 8) + 48) = t1;
if ((*(int*)(a0 + 40) + 1) < 5) {
t2 = *(int*)((a0 - 8) + 52);
t3 = fn_80481510(t2, (a0 - 8));
} else {
t4 = *(int*)(*(int*)((a0 - 8) + 52) + 88);
fn_8047F648(t4, (a0 - 8));
}
}

void fn_804819F0(a0) int a0; {
*(int*)((int)lbl_805C29B0 + 96) = a0;
*(int*)((int)lbl_805C29B0 + 0) = 0;
}
