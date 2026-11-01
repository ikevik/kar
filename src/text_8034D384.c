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






















