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
int fn_80369B14();
void fn_8036ABD4();
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
if (*(unsigned short*)(a0 + 126) == 0) {
t0 = *(unsigned short*)(a0 + 126);
fn_8036AC00();
m0 = t0;
}
}
