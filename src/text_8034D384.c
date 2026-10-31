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
void fn_80367110();
int fn_80369B14();
void fn_8036ABD4();
void fn_8036AF10();
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
extern char lbl_804C12E4[];
extern char lbl_804C148C[];
extern char lbl_804C1CA8[];
extern char lbl_804EBCB0[];
extern char lbl_805DB580;
extern float lbl_805E4710;
extern float lbl_805E4730;
extern float lbl_805E4744;
extern float lbl_805E4778;
extern int fn_802B57F4();
extern void fn_802BE1B8();
extern int fn_8034D1F8();
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

void fn_80367110(a0) int a0; {
int t0;
int t1;
float t2;
float t3;
int t4;
float t5;
float t6;
int t7;
float t8;
float t9;
int t10;
int t11;
int t12;
t0 = fn_802B57F4(a0, ((int)lbl_804EBCB0 + 3228));
*(int*)(a0 + 0) = (int)lbl_804C1CA8;
*(int*)(a0 + 8) = ((int)lbl_804C1CA8 + 16);
*(int*)(a0 + 56) = ((int)lbl_804C1CA8 + 88);
t1 = fn_8034D1F8(((int)lbl_804C1CA8 + 16), (int)lbl_804C1CA8);
t2 = lbl_805E4710;
t3 = lbl_805E4730;
fn_802BE1B8((a0 + 428), ((int)lbl_804EBCB0 + 1236), 0, (t1 + 1240), t2, t3);
t4 = fn_8034D1F8();
t5 = lbl_805E4710;
t6 = lbl_805E4730;
fn_802BE1B8((a0 + 688), ((int)lbl_804EBCB0 + 3204), 0, (t4 + 1244), t5, t6);
t7 = fn_8034D1F8();
t8 = lbl_805E4710;
t9 = lbl_805E4778;
fn_802BE1B8((a0 + 948), (int)&lbl_805DB580, 0, (t7 + 1248), t8, t9);
t10 = *(int*)(*(int*)(a0 + 436) + 16);
((void(*)())*(int*)(*(int*)(a0 + 436) + 16))((a0 + 436), (a0 + 364));
t11 = *(int*)(*(int*)(a0 + 696) + 16);
((void(*)())*(int*)(*(int*)(a0 + 696) + 16))((a0 + 696), (a0 + 364));
t12 = *(int*)(*(int*)(a0 + 956) + 16);
((void(*)())*(int*)(*(int*)(a0 + 956) + 16))((a0 + 956), (a0 + 364));
}

void fn_80367F3C(a0) int a0; {
int t0;
int t1;
float t2;
float t3;
int t4;
float t5;
float t6;
int t7;
float t8;
float t9;
int t10;
int t11;
int t12;
t0 = fn_802B57F4(a0, ((int)lbl_804EBCB0 + 3812));
*(int*)(a0 + 0) = (int)lbl_804C148C;
*(int*)(a0 + 8) = ((int)lbl_804C148C + 16);
*(int*)(a0 + 56) = ((int)lbl_804C148C + 88);
t1 = fn_8034D1F8(((int)lbl_804C148C + 16), (int)lbl_804C148C);
t2 = lbl_805E4710;
t3 = lbl_805E4730;
fn_802BE1B8((a0 + 428), ((int)lbl_804EBCB0 + 1236), 0, (t1 + 1528), t2, t3);
t4 = fn_8034D1F8();
t5 = lbl_805E4710;
t6 = lbl_805E4730;
fn_802BE1B8((a0 + 688), ((int)lbl_804EBCB0 + 3204), 0, (t4 + 1532), t5, t6);
t7 = fn_8034D1F8();
t8 = lbl_805E4710;
t9 = lbl_805E4744;
fn_802BE1B8((a0 + 948), ((int)lbl_804EBCB0 + 3828), 0, (t7 + 1536), t8, t9);
t10 = *(int*)(*(int*)(a0 + 436) + 16);
((void(*)())*(int*)(*(int*)(a0 + 436) + 16))((a0 + 436), (a0 + 364));
t11 = *(int*)(*(int*)(a0 + 696) + 16);
((void(*)())*(int*)(*(int*)(a0 + 696) + 16))((a0 + 696), (a0 + 364));
t12 = *(int*)(*(int*)(a0 + 956) + 16);
((void(*)())*(int*)(*(int*)(a0 + 956) + 16))((a0 + 956), (a0 + 364));
}

void fn_80368050(a0) int a0; {
int t0;
int t1;
float t2;
float t3;
int t4;
float t5;
float t6;
int t7;
int t8;
t0 = fn_802B57F4(a0, ((int)lbl_804EBCB0 + 3848));
*(int*)(a0 + 0) = (int)lbl_804C12E4;
*(int*)(a0 + 8) = ((int)lbl_804C12E4 + 16);
*(int*)(a0 + 56) = ((int)lbl_804C12E4 + 88);
t1 = fn_8034D1F8(((int)lbl_804C12E4 + 16), (int)lbl_804C12E4);
t2 = lbl_805E4710;
t3 = lbl_805E4730;
fn_802BE1B8((a0 + 428), ((int)lbl_804EBCB0 + 1236), 0, (t1 + 1564), t2, t3);
t4 = fn_8034D1F8();
t5 = lbl_805E4710;
t6 = lbl_805E4730;
fn_802BE1B8((a0 + 688), ((int)lbl_804EBCB0 + 3204), 0, (t4 + 1568), t5, t6);
t7 = *(int*)(*(int*)(a0 + 436) + 16);
((void(*)())*(int*)(*(int*)(a0 + 436) + 16))((a0 + 436), (a0 + 364));
t8 = *(int*)(*(int*)(a0 + 696) + 16);
((void(*)())*(int*)(*(int*)(a0 + 696) + 16))((a0 + 696), (a0 + 364));
}

void fn_80368DB4(a0, a1, a2) int a0; int a1; int a2; {
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

void fn_8036AF10(a0, a1, a2) int a0; int a1; int a2; {
if ((unsigned)a1 != (unsigned)0) {
fn_8036A408(a1, a2);
}
}
