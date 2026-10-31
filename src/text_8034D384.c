/* auto small functions */
#pragma dont_inline on
unsigned char fn_80369C94();
unsigned char fn_8036B180();
int fn_8036BF04();
unsigned char fn_8036C064();
unsigned char fn_8036E8CC();
int fn_80369010();
int fn_8036B0B8();
void fn_8036E748();
float fn_80368DB4();
int fn_80369B14();
void fn_8036ABD4();
float fn_8036AF10();
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
extern char lbl_804BDB74[];
extern char lbl_804BDF2C[];
extern char lbl_804BDF70[];
extern char lbl_804BE210[];
extern char lbl_804BE238[];
extern char lbl_804BF48C[];
extern char lbl_804BF4DC[];
extern char lbl_804D74D0[];
extern char lbl_804D7700[];
extern char lbl_804F02A4[];
extern char lbl_804F02B0[];
extern char lbl_804F0350[];
extern char lbl_804F4E38[];
extern char lbl_804F51DC[];
extern void fn_80368DE4();
extern void fn_8036A408();
extern void fn_8036AC00();



void fn_803589F4(p) char* p; { *(int*)(p + 0) = 0; }

unsigned char fn_80369C94(p) char* p; { return *(unsigned char*)(p + 124); }

unsigned char fn_8036B180(p) char* p; { return *(unsigned char*)(p + 180); }

int fn_8036BF04() { return 0; }

unsigned char fn_8036C064(p) char* p; { return *(unsigned char*)(p + 112); }

unsigned char fn_8036E8CC(p) char* p; { return *(unsigned char*)(p + 204); }

int fn_80369010(a0) int a0; {
    int t0;
    int t1;
    int t2;
    int t3;
    t0 = *(int*)((a0 + (*(int*)(a0 + 17920) * 280)) + 0);
    t1 = (a0 + (*(int*)(a0 + 17920) * 280));
    *(int*)(a0 + 17920) = t0;
    t2 = (*(int*)(a0 + 17924) - 1);
    t3 = *(int*)(a0 + 17924);
    *(int*)(a0 + 17924) = t2;
    return t1;
}

int fn_8036B0B8(a0) int a0; {
    int t0;
    int t1;
    int t2;
    int t3;
    t0 = *(int*)((a0 + (*(int*)(a0 + 26112) * 408)) + 0);
    t1 = (a0 + (*(int*)(a0 + 26112) * 408));
    *(int*)(a0 + 26112) = t0;
    t2 = (*(int*)(a0 + 26116) - 1);
    t3 = *(int*)(a0 + 26116);
    *(int*)(a0 + 26116) = t2;
    return t1;
}

void fn_8036E748(a0, a1) int a0; int a1; {
    float t0;
    float t1;
    float t2;
    t0 = *(float*)(a1 + 28);
    *(float*)(a0 + 436) = t0;
    t1 = *(float*)(a1 + 32);
    *(float*)(a0 + 440) = t1;
    t2 = *(float*)(a1 + 36);
    *(float*)(a0 + 444) = t2;
}

float fn_80368DB4(a0, a1, a2) int a0; int a1; int a2; {
if ((unsigned)a1 != (unsigned)0) {
fn_80368DE4(a1, a2);
}
}

int fn_80369B14(a0) int a0; {
int t0;
int t1;
int t2;
int t3;
t0 = (a0 + (*(int*)(a0 + 16384) << 8));
t1 = *(int*)((a0 + (*(int*)(a0 + 16384) << 8)) + 0);
*(int*)(a0 + 16384) = t1;
t2 = *(int*)(a0 + 16388);
t3 = (*(int*)(a0 + 16388) - 1);
*(int*)(a0 + 16388) = t3;
return t0;
}

void fn_8036ABD4(a0) int a0; {
int t0;
int m0;
m0 = *(unsigned short*)(a0 + 126);
if ((unsigned)*(unsigned short*)(a0 + 126) == (unsigned)0) {
t0 = *(unsigned short*)(a0 + 126);
fn_8036AC00();
m0 = t0;
}
}

float fn_8036AF10(a0, a1, a2) int a0; int a1; int a2; {
if ((unsigned)a1 != (unsigned)0) {
fn_8036A408(a1, a2);
}
}
int fn_803683A4();
int fn_803690D8();


int fn_803683A4(r3) int r3; {
int r0;
r0 = __cntlzw(*(unsigned short*)(r3 + 98));
r3 = ((unsigned)r0 >> 5);
return r3;
}

int fn_803690D8(r3) int r3; {
int r0;
int r4;
r4 = __cntlzw(*(int*)(r3 + 244));
r0 = ((unsigned)r4 >> 5);
if ((((unsigned)r4 >> 5) & 0xff) == 0) goto L_803690F8;
r0 = ((unsigned)__cntlzw(*(int*)(r3 + 224)) >> 5);
L_803690F8:
r3 = r0;
return r3;
}
extern int lbl_805DD994;
extern char lbl_804BD56C[];
extern char lbl_804BD578[];
extern char lbl_804C12E4[];
extern char lbl_804C148C[];
extern char lbl_804C1CA8[];
extern char lbl_804EBCB0[];
extern char lbl_804EF9F4[];
extern char lbl_804EFA04[];
extern char lbl_804EFAA8[];
extern char lbl_804EFCCC[];
extern char lbl_804EFCD8[];
extern char lbl_804F0278[];
extern char lbl_804F0334[];
extern char lbl_804F0344[];
extern char lbl_804F04EC[];
extern char lbl_804F07EC[];
extern char lbl_805DB580;
extern char lbl_805DB668;
extern char lbl_805DB66C;
extern char lbl_805DB808;
extern char lbl_805DB80C;
extern int lbl_805DD984;
extern int lbl_805DDB64;
extern unsigned char lbl_805DDCB0;
extern float lbl_805E4710;
extern float lbl_805E4730;
extern float lbl_805E4744;
extern float lbl_805E4778;
void PSVECSubtract();
float fn_80296D3C();
float fn_8029B2A4();
float fn_8029B310();
void fn_802B57F4();
void fn_802BE1B8();
int fn_8034D1F8();
float fn_80367110();
float fn_80367F3C();
float fn_80368050();
void fn_80368BA0();
float fn_80368D00();
float fn_80369048();
void fn_803696C8();
float fn_80369830();
void fn_80369B3C();
float fn_80369C04();
void fn_80369D5C();
void fn_8036A89C();
float fn_8036AD58();
float fn_8036AE5C();
void fn_8036AF40();
int fn_8036B00C();
float fn_8036B0F0();
void fn_8036B9A4();
void fn_8036BE48();
float fn_8036BF0C();
float fn_8036BFD4();
void fn_8036DBF8();
float fn_8036E764();
float fn_8036E82C();
void fn_8036FA8C();
float fn_80370E24();
int fn_8038BBE8();
int fn_8038CB28();
void fn_8038CB78();
void fn_80391644();
int fn_803919FC();
int fn_803B7E70();
float fn_80369CE8(int, int, int, int, float);
float fn_8036B188(int, float);
float fn_8036C06C(int, float);
float fn_8036E8D4(int, float);


float fn_80367110(r30) int r30; {
int t0;
float t1;
float t2;
int t3;
float t4;
float t5;
int t6;
float t7;
float t8;
int t9;
int t10;
int t11;
int t12;
int t13;
int t14;
float t15;
fn_802B57F4(r30, ((int)lbl_804EBCB0 + 3228));
*(int*)r30 = (int)lbl_804C1CA8;
*(int*)(r30 + 8) = ((int)lbl_804C1CA8 + 16);
*(int*)(r30 + 56) = ((int)lbl_804C1CA8 + 88);
t0 = fn_8034D1F8();
t1 = lbl_805E4710;
t2 = lbl_805E4730;
fn_802BE1B8((r30 + 428), ((int)lbl_804EBCB0 + 1236), 0, (t0 + 1240), t1, t2);
t3 = fn_8034D1F8();
t4 = lbl_805E4710;
t5 = lbl_805E4730;
fn_802BE1B8((r30 + 688), ((int)lbl_804EBCB0 + 3204), 0, (t3 + 1244), t4, t5);
t6 = fn_8034D1F8();
t7 = lbl_805E4710;
t8 = lbl_805E4778;
fn_802BE1B8((r30 + 948), (int)&lbl_805DB580, 0, (t6 + 1248), t7, t8);
t9 = *(int*)(r30 + 436);
t10 = *(int*)(t9 + 16);
((void(*)())t10)((r30 + 436), (r30 + 364));
t11 = *(int*)(r30 + 696);
t12 = *(int*)(t11 + 16);
((void(*)())t12)((r30 + 696), (r30 + 364));
t13 = *(int*)(r30 + 956);
t14 = *(int*)(t13 + 16);
t15 = ((float(*)())t14)((r30 + 956), (r30 + 364));
return t15;
}

float fn_80367F3C(r30) int r30; {
int t0;
float t1;
float t2;
int t3;
float t4;
float t5;
int t6;
float t7;
float t8;
int t9;
int t10;
int t11;
int t12;
int t13;
int t14;
float t15;
fn_802B57F4(r30, ((int)lbl_804EBCB0 + 3812));
*(int*)r30 = (int)lbl_804C148C;
*(int*)(r30 + 8) = ((int)lbl_804C148C + 16);
*(int*)(r30 + 56) = ((int)lbl_804C148C + 88);
t0 = fn_8034D1F8();
t1 = lbl_805E4710;
t2 = lbl_805E4730;
fn_802BE1B8((r30 + 428), ((int)lbl_804EBCB0 + 1236), 0, (t0 + 1528), t1, t2);
t3 = fn_8034D1F8();
t4 = lbl_805E4710;
t5 = lbl_805E4730;
fn_802BE1B8((r30 + 688), ((int)lbl_804EBCB0 + 3204), 0, (t3 + 1532), t4, t5);
t6 = fn_8034D1F8();
t7 = lbl_805E4710;
t8 = lbl_805E4744;
fn_802BE1B8((r30 + 948), ((int)lbl_804EBCB0 + 3828), 0, (t6 + 1536), t7, t8);
t9 = *(int*)(r30 + 436);
t10 = *(int*)(t9 + 16);
((void(*)())t10)((r30 + 436), (r30 + 364));
t11 = *(int*)(r30 + 696);
t12 = *(int*)(t11 + 16);
((void(*)())t12)((r30 + 696), (r30 + 364));
t13 = *(int*)(r30 + 956);
t14 = *(int*)(t13 + 16);
t15 = ((float(*)())t14)((r30 + 956), (r30 + 364));
return t15;
}

float fn_80368050(r30) int r30; {
int t0;
float t1;
float t2;
int t3;
float t4;
float t5;
int t6;
int t7;
int t8;
int t9;
float t10;
fn_802B57F4(r30, ((int)lbl_804EBCB0 + 3848));
*(int*)r30 = (int)lbl_804C12E4;
*(int*)(r30 + 8) = ((int)lbl_804C12E4 + 16);
*(int*)(r30 + 56) = ((int)lbl_804C12E4 + 88);
t0 = fn_8034D1F8();
t1 = lbl_805E4710;
t2 = lbl_805E4730;
fn_802BE1B8((r30 + 428), ((int)lbl_804EBCB0 + 1236), 0, (t0 + 1564), t1, t2);
t3 = fn_8034D1F8();
t4 = lbl_805E4710;
t5 = lbl_805E4730;
fn_802BE1B8((r30 + 688), ((int)lbl_804EBCB0 + 3204), 0, (t3 + 1568), t4, t5);
t6 = *(int*)(r30 + 436);
t7 = *(int*)(t6 + 16);
((void(*)())t7)((r30 + 436), (r30 + 364));
t8 = *(int*)(r30 + 696);
t9 = *(int*)(t8 + 16);
t10 = ((float(*)())t9)((r30 + 696), (r30 + 364));
return t10;
}

void fn_80368BA0(r3, r4) int r3; int r4; {
int t0;
int t1;
int t2;
int t3;
int t4;
int t5;
int r30;
int r31;
r30 = r3;
t0 = *(int*)(r4 + 4);
t1 = *(int*)(t0 + 4);
t2 = *(int*)(t1 + 12);
r31 = *(int*)(t2 + -4);
if ((unsigned)r31 == (unsigned)0) goto L_80368BD4;
goto L_80368BD8;
L_80368BD4:
r31 = (int)&lbl_805DB668;
L_80368BD8:
t3 = fn_803B7E70((int)&lbl_805DB66C, r31, 1);
if (t3 == 0) goto L_80368C28;
t4 = fn_803B7E70((int)lbl_804EF9F4, r31, 13);
if (t4 == 0) goto L_80368C28;
t5 = fn_803B7E70((int)lbl_804EFA04, r31, 10);
if (t5 != 0) return;
L_80368C28:
*(unsigned short*)(r30 + 98) = 0;
}

float fn_80368D00(r28, r29, r30, r31) int r28; int r29; int r30; int r31; {
int t0;
int t1;
float t2;
int t3;
int t4;
int t5;
int t6;
int t7;
float t8;
int loc[2];
t0 = lbl_805DD984;
t1 = fn_80369010(t0, r29, r30, r31);
*(int*)((char*)loc) = (r29 + 8);
*(int*)((char*)loc + 4) = t1;
t2 = fn_80368DB4(r29, (t1 + 8), r31);
t3 = *(int*)r30;
t4 = *(int*)((char*)loc + 4);
t5 = *(int*)t3;
*(int*)((char*)loc + 4) = 0;
*(int*)(t5 + 4) = t4;
t6 = *(int*)t3;
*(int*)t4 = t6;
*(int*)t3 = t4;
*(int*)(t4 + 4) = t3;
t7 = *(int*)(r29 + 4);
*(int*)(r29 + 4) = (t7 + 1);
*(int*)r28 = t4;
return t2;
t8 = fn_8029B2A4();
return t8;
}

float fn_80369048(r3) int r3; {
int t0;
int t1;
int t2;
float t3;
int r29;
int r30;
int r31;
int loc[7];
r29 = r3;
r30 = (r29 + 16);
r31 = *(int*)(r3 + 20);
goto L_8036907C;
L_80369070:
fn_803696C8((r31 + 8));
r31 = *(int*)(r31 + 4);
L_8036907C:
if ((unsigned)r31 != (unsigned)r30) goto L_80369070;
t0 = *(int*)(int)lbl_804EFAA8;
t1 = *(int*)((int)lbl_804EFAA8 + 4);
t2 = *(int*)((int)lbl_804EFAA8 + 8);
*(int*)((char*)loc) = t0;
*(int*)((char*)loc + 4) = t1;
*(int*)((char*)loc + 8) = t2;
*(int*)((char*)loc + 12) = t0;
*(int*)((char*)loc + 16) = t1;
*(int*)((char*)loc + 20) = t2;
t3 = fn_80369830((r29 + 4), ((int)loc + 12));
return t3;
}

void fn_80369B3C(r3, r4) int r3; int r4; {
int t0;
int t1;
int t2;
unsigned char t3;
int r0;
int r30;
int r31;
r31 = r3;
*(int*)r31 = (int)lbl_804BD56C;
lbl_805DDB64 = r31;
*(int*)r31 = (int)lbl_804BD578;
fn_8036AF40((r31 + 4));
r0 = 0;
*(int*)(r31 + 28) = r0;
t0 = fn_8038BBE8(r4, (int)lbl_804EFCCC);
t1 = fn_803919FC(20, t0);
t2 = r4;
r4 = t1;
if (r4 == 0) goto L_80369BC8;
t3 = lbl_805DDCB0;
r30 = r4;
if ((unsigned)t3 == (unsigned)0) goto L_80369BC4;
fn_80391644();
L_80369BC4:
r4 = r30;
L_80369BC8:
r3 = *(int*)r4;
if ((unsigned)r3 == (unsigned)0) goto L_80369BE0;
r0 = *(int*)r3;
if ((unsigned)r0 != (unsigned)0) goto L_80369BE4;
L_80369BE0:
r0 = 0;
L_80369BE4:
*(int*)(r31 + 24) = r0;
}

float fn_80369C04(r3) int r3; {
int t0;
int t1;
int t2;
float t3;
int r29;
int r30;
int r31;
int loc[7];
r29 = r3;
r30 = (r29 + 16);
r31 = *(int*)(r3 + 20);
goto L_80369C38;
L_80369C2C:
fn_8036A89C((r31 + 8));
r31 = *(int*)(r31 + 4);
L_80369C38:
if ((unsigned)r31 != (unsigned)r30) goto L_80369C2C;
t0 = *(int*)(int)lbl_804EFCD8;
t1 = *(int*)((int)lbl_804EFCD8 + 4);
t2 = *(int*)((int)lbl_804EFCD8 + 8);
*(int*)((char*)loc) = t0;
*(int*)((char*)loc + 4) = t1;
*(int*)((char*)loc + 8) = t2;
*(int*)((char*)loc + 12) = t0;
*(int*)((char*)loc + 16) = t1;
*(int*)((char*)loc + 20) = t2;
t3 = fn_8036AD58((r29 + 4), ((int)loc + 12));
return t3;
}

float fn_80369CE8(int r31, int r4, int r5, int r6, float f1) {
int t0;
int t1;
float t2;
int loc[105];
t0 = *(int*)(r31 + 8);
if ((unsigned)(64 - t0) == (unsigned)0) return f1;
t1 = *(int*)r6;
*(int*)((char*)loc + 8) = t1;
fn_80369D5C(((int)loc + 12), r4, r5, ((int)loc + 8), f1);
*(int*)((char*)loc + 4) = (r31 + 16);
fn_8036AE5C(((int)loc), (r31 + 4), ((int)loc + 4), ((int)loc + 12));
t2 = fn_80296D3C(((int)loc + 12), -1);
return t2;
}

float fn_8036AE5C(r28, r29, r30, r31) int r28; int r29; int r30; int r31; {
int t0;
int t1;
float t2;
int t3;
int t4;
int t5;
int t6;
int t7;
float t8;
int loc[2];
t0 = lbl_805DD994;
t1 = fn_8036B0B8(t0, r29, r30, r31);
*(int*)((char*)loc) = (r29 + 8);
*(int*)((char*)loc + 4) = t1;
t2 = fn_8036AF10(r29, (t1 + 8), r31);
t3 = *(int*)r30;
t4 = *(int*)((char*)loc + 4);
t5 = *(int*)t3;
*(int*)((char*)loc + 4) = 0;
*(int*)(t5 + 4) = t4;
t6 = *(int*)t3;
*(int*)t4 = t6;
*(int*)t3 = t4;
*(int*)(t4 + 4) = t3;
t7 = *(int*)(r29 + 4);
*(int*)(r29 + 4) = (t7 + 1);
*(int*)r28 = t4;
return t2;
t8 = fn_8029B310();
return t8;
}

void fn_8036AF40(r3) int r3; {
int t0;
int t1;
int t2;
int t3;
int r0;
int r31;
int r4;
int loc[5];
r31 = r3;
*(int*)r3 = 0;
r3 = 26120;
*(int*)(r31 + 4) = 0;
*(int*)((char*)loc + 12) = 0;
r3 = fn_8038CB28(r3);
r4 = r3;
if (r4 == 0) goto L_8036AF7C;
t0 = fn_8036B00C(r3, r4);
r4 = t0;
L_8036AF7C:
r3 = *(int*)((char*)loc + 12);
r0 = 0;
*(int*)((char*)loc + 8) = r4;
*(int*)((char*)loc + 8) = r0;
*(int*)((char*)loc) = r4;
*(int*)((char*)loc + 4) = r4;
if ((unsigned)r3 == (unsigned)r4) goto L_8036AFB4;
if ((unsigned)r3 == (unsigned)0) goto L_8036AFAC;
lbl_805DD994 = r0;
fn_8038CB78();
L_8036AFAC:
t1 = *(int*)((char*)loc + 4);
*(int*)((char*)loc + 12) = t1;
L_8036AFB4:
t2 = *(int*)((char*)loc + 8);
if ((unsigned)t2 == (unsigned)0) goto L_8036AFCC;
lbl_805DD994 = 0;
fn_8038CB78();
L_8036AFCC:
t3 = *(int*)((char*)loc + 12);
*(int*)((char*)loc + 12) = 0;
*(int*)(r31 + 8) = t3;
goto L_8036AFE8;
lbl_805DD994 = r0;
fn_8038CB78();
L_8036AFE8:
*(int*)((r31 + 12) + 4) = (r31 + 12);
*(int*)(r31 + 12) = (r31 + 12);
}

float fn_8036B0F0(r3) int r3; {
int t0;
int t1;
int t2;
float t3;
int r29;
int r30;
int r31;
int loc[7];
r29 = r3;
r30 = (r29 + 16);
r31 = *(int*)(r3 + 20);
goto L_8036B124;
L_8036B118:
fn_8036B9A4((r31 + 8));
r31 = *(int*)(r31 + 4);
L_8036B124:
if ((unsigned)r31 != (unsigned)r30) goto L_8036B118;
t0 = *(int*)(int)lbl_804F0278;
t1 = *(int*)((int)lbl_804F0278 + 4);
t2 = *(int*)((int)lbl_804F0278 + 8);
*(int*)((char*)loc) = t0;
*(int*)((char*)loc + 4) = t1;
*(int*)((char*)loc + 8) = t2;
*(int*)((char*)loc + 12) = t0;
*(int*)((char*)loc + 16) = t1;
*(int*)((char*)loc + 20) = t2;
t3 = fn_8036BF0C((r29 + 4), ((int)loc + 12));
return t3;
}

float fn_8036B188(int r3, float f1) {
int t0;
int t1;
int r30;
int r31;
r30 = (r3 + 16);
r31 = *(int*)(r3 + 20);
goto L_8036B1C0;
L_8036B1A8:
t0 = *(int*)(r31 + 176);
t1 = *(int*)(t0 + 16);
f1 = ((float(*)())t1)((r31 + 176));
r31 = *(int*)(r31 + 4);
L_8036B1C0:
if ((unsigned)r31 != (unsigned)r30) goto L_8036B1A8;
return f1;
}

void fn_8036BE48(r3, r4) int r3; int r4; {
int t0;
int t1;
int t2;
int t3;
int t4;
int t5;
int r30;
int r31;
r30 = r3;
t0 = *(int*)(r4 + 4);
t1 = *(int*)(t0 + 4);
t2 = *(int*)(t1 + 12);
r31 = *(int*)(t2 + -4);
if ((unsigned)r31 == (unsigned)0) goto L_8036BE7C;
goto L_8036BE80;
L_8036BE7C:
r31 = (int)&lbl_805DB808;
L_8036BE80:
t3 = fn_803B7E70((int)&lbl_805DB80C, r31, 1);
if (t3 != 0) goto L_8036BEA4;
*(unsigned char*)(r30 + 180) = 1;
return;
L_8036BEA4:
t4 = fn_803B7E70((int)lbl_804F0334, r31, 13);
if (t4 == 0) goto L_8036BEDC;
t5 = fn_803B7E70((int)lbl_804F0344, r31, 10);
if (t5 != 0) return;
L_8036BEDC:
PSVECSubtract((r30 + 44), (r30 + 64), (r30 + 44));
}

float fn_8036BFD4(r3) int r3; {
int t0;
int t1;
int t2;
float t3;
int r29;
int r30;
int r31;
int loc[7];
r29 = r3;
r30 = (r29 + 16);
r31 = *(int*)(r3 + 20);
goto L_8036C008;
L_8036BFFC:
fn_8036DBF8((r31 + 8));
r31 = *(int*)(r31 + 4);
L_8036C008:
if ((unsigned)r31 != (unsigned)r30) goto L_8036BFFC;
t0 = *(int*)(int)lbl_804F04EC;
t1 = *(int*)((int)lbl_804F04EC + 4);
t2 = *(int*)((int)lbl_804F04EC + 8);
*(int*)((char*)loc) = t0;
*(int*)((char*)loc + 4) = t1;
*(int*)((char*)loc + 8) = t2;
*(int*)((char*)loc + 12) = t0;
*(int*)((char*)loc + 16) = t1;
*(int*)((char*)loc + 20) = t2;
t3 = fn_8036E764((r29 + 4), ((int)loc + 12));
return t3;
}

float fn_8036C06C(int r3, float f1) {
unsigned short t0;
int t1;
int t2;
int r30;
int r31;
r30 = (r3 + 16);
r31 = *(int*)(r3 + 20);
goto L_8036C0B0;
L_8036C08C:
t0 = *(unsigned short*)(r31 + 130);
if ((unsigned)t0 != (unsigned)0) goto L_8036C0AC;
t1 = *(int*)(r31 + 108);
t2 = *(int*)(t1 + 16);
f1 = ((float(*)())t2)((r31 + 108));
L_8036C0AC:
r31 = *(int*)(r31 + 4);
L_8036C0B0:
if ((unsigned)r31 != (unsigned)r30) goto L_8036C08C;
return f1;
}

float fn_8036E82C(r3, r4) int r3; int r4; {
int t0;
int t1;
int t2;
float t3;
int r28;
int r29;
int r30;
int r31;
int loc[6];
r29 = r4;
r28 = r3;
r30 = (r28 + 16);
r31 = *(int*)(r3 + 20);
goto L_8036E86C;
L_8036E85C:
fn_8036FA8C((r31 + 8), r29);
r31 = *(int*)(r31 + 4);
L_8036E86C:
if ((unsigned)r31 != (unsigned)r30) goto L_8036E85C;
t0 = *(int*)(int)lbl_804F07EC;
t1 = *(int*)((int)lbl_804F07EC + 4);
t2 = *(int*)((int)lbl_804F07EC + 8);
*(int*)((char*)loc) = t0;
*(int*)((char*)loc + 4) = t1;
*(int*)((char*)loc + 8) = t2;
*(int*)((char*)loc + 12) = t0;
*(int*)((char*)loc + 16) = t1;
*(int*)((char*)loc + 20) = t2;
t3 = fn_80370E24((r28 + 4), ((int)loc + 12));
return t3;
}

float fn_8036E8D4(int r3, float f1) {
int t0;
int t1;
int r30;
int r31;
r30 = (r3 + 16);
r31 = *(int*)(r3 + 20);
goto L_8036E90C;
L_8036E8F4:
t0 = *(int*)(r31 + 148);
t1 = *(int*)(t0 + 16);
f1 = ((float(*)())t1)((r31 + 148));
r31 = *(int*)(r31 + 4);
L_8036E90C:
if ((unsigned)r31 != (unsigned)r30) goto L_8036E8F4;
return f1;
}



