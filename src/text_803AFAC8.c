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

/* ---- w3f batch 1 ---- */
extern unsigned char lbl_804F8BF0[];
extern unsigned char lbl_804F8AF0[];
extern char __files[];
extern void* memset();
extern void fn_803AFB90();
extern void fn_803AFCE8();
extern int fn_803B3D08();

int fn_803B3870(c) int c; {
    if (c == -1) return -1;
    return lbl_804F8BF0[(unsigned char)c];
}

int fn_803B3894(c) int c; {
    return lbl_804F8AF0[(unsigned char)c] & 0x20;
}

int fn_803B38AC(c) int c; {
    return lbl_804F8AF0[(unsigned char)c] & 0x10;
}


void fn_803AFAC8(p) void* p; {
    __begin_critical_region(1);
    if (lbl_805DDCD8 == 0) {
        memset(lbl_80569B10, 0, 0x34);
        lbl_805DDCD8 = 1;
    }
    fn_803AFB38(lbl_80569B10, p);
    __end_critical_region(1);
}

int fn_803AFF7C() {
    int ret = 0;
    char* f = __files;
    while (f != 0) {
        if (((*(unsigned short*)(f + 4)) >> 6) & 7) {
            if (fn_803B3D08(f) != 0) ret = -1;
        }
        f = *(char**)(f + 0x4C);
    }
    return ret;
}

int fn_803B38C4(c) int c; {
    return lbl_804F8AF0[(unsigned char)c] & 0xC0;
}

#if 0 /* w3f near misses */
void fn_803AFB38(heap, p) void* heap; unsigned* p; {
    if (p != 0) {
        unsigned* h = (unsigned*)p[-1];
        unsigned sz;
        if (((unsigned)h & 1) == 0) {
            sz = h[2];
        } else {
            sz = (p[-2] & ~7) - 8;
        }
        if (sz <= 0x44) fn_803AFB90(heap, p);
        else fn_803AFCE8(heap, p);
    }
}


#endif /* w3f near misses */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
#define M8(a) (*(u8*)(a))
#define M16(a) (*(u16*)(a))
#define M32(a) (*(u32*)(a))
#define MF(a) (*(float*)(a))
#define MS16(a) (*(s16*)(a))
typedef struct { u16 :7; u16 f:3; } BFu16_7_3;
u32 __fwrite(u32, u32, u32, u32);
u32 fn_803B4068(u32, u32, u32);

u32 fwrite(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 c1;
    __begin_critical_region(2, p4, p5, p6);
    c1 = __fwrite(p3, p4, p5, p6);
    __end_critical_region(2);
    return c1;
}



u32 fseek(u32 p3, u32 p4, u32 p5) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 c1;
    s31 = p5;
    s30 = p4;
    s29 = p3;
    __begin_critical_region(2);
    c1 = fn_803B4068(s29, s30, s31);
    s31 = c1;
    __end_critical_region(2);
    return s31;
}




