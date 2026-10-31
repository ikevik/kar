/* auto small functions */
#pragma dont_inline on
void __end_critical_region();
void __begin_critical_region();
void __kill_critical_regions();
void __prep_buffer();
int fn_803B3670();
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
extern char lbl_80569B10[];
extern unsigned char lbl_805DDCD8;



void __end_critical_region() {}

void __begin_critical_region() {}

void __kill_critical_regions() {}


void __prep_buffer(a0) int a0; {
int t0;
int t1;
int t2;
int t3;
int t4;
int t5;
t0 = *(int*)(a0 + 28);
*(int*)(a0 + 36) = t0;
t1 = *(int*)(a0 + 32);
*(int*)(a0 + 40) = t1;
t2 = (*(int*)(a0 + 24) & *(int*)(a0 + 44));
t3 = *(int*)(a0 + 24);
t4 = (*(int*)(a0 + 40) - (*(int*)(a0 + 24) & *(int*)(a0 + 44)));
*(int*)(a0 + 40) = t4;
t5 = *(int*)(a0 + 24);
*(int*)(a0 + 52) = t5;
}

int fn_803B3670(a0) int a0; {
return (((a0 >> 31) ^ a0) - (a0 >> 31));
}
