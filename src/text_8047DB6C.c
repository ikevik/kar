/* auto small functions */
#pragma dont_inline on
int fn_8048137C();
int fn_80481384();
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




int fn_8048137C() { return 1; }

int fn_80481384() { return 1; }



/* ---- w3f batch 1 ---- */
typedef unsigned char u8;
typedef unsigned short u16;
extern int lbl_805DE6B0;
extern int lbl_805DE68C;
extern int lbl_805C29B0[];
extern char lbl_805C2978[];
extern void OSWakeupThread();
extern void OSCancelAlarm();
extern void* memmove();
extern int memcmp();
extern void fn_8047F578();
extern void fn_8047F3DC();
extern void fn_8047F648();
extern void fn_8046E828();
extern void fn_80481510();
extern void fn_8047FCFC();
extern void fn_8046F190();
extern int fn_80480D88();
extern void fn_8048138C();

void fn_8047DB6C() {
    OSWakeupThread(&lbl_805DE6B0);
}

int fn_8047DE78() {
    lbl_805DE68C = 3;
    return 1;
}

int fn_8047FAD4(base, len, opt) u8* base; int len; u8* opt; {
    int l = opt[1];
    memmove(opt, opt + l, base + (u16)len - (opt + l));
    return len - l;
}

int fn_8047FB24(base, len, a, b) u8* base; int len; u8* a; u8* b; {
    u8* dst = a + b[1];
    memmove(dst, a, base + (u16)len - a);
    memmove(a, b, b[1]);
    return len + b[1];
}

int fn_80480B50(s, p) char* s; char* p; {
    if (*(u16*)(p + 2) != *(u16*)(s + 0x230) + 4 || memcmp(p + 4, s + 0x21C, *(u16*)(s + 0x230)) != 0) return 0;
    return 1;
}

int fn_80481008(s, p) char* s; char* p; {
    if (*(u16*)(p + 2) != *(u16*)(s + 0x230) + 4 || memcmp(p + 4, s + 0x21C, *(u16*)(s + 0x230)) != 0) return 0;
    return 1;
}

int fn_80480BA4(a, p) int a; u8* p; {
    int l = *(u16*)(p + 2);
    u8* e;
    p += 4;
    e = p + (u16)(l - 4);
    while (p < e) p += p[1];
    return 1;
}

int fn_80480D10(a) char* a; {
    fn_8047F578(*(int*)(a + 0x284));
    return 1;
}

int fn_80480D38(a) char* a; {
    fn_8047F3DC(*(int*)(a + 0x284));
    return 1;
}

int fn_80480D60(a) char* a; {
    fn_8047F648(*(int*)(a + 0x284));
    return 1;
}

int fn_8048134C() {
    fn_8046E828(0, 0, 0);
    return 1;
}


void fn_804819F0(a) int a; {
    lbl_805C29B0[24] = a;
    lbl_805C29B0[0] = 0;
}

void fn_8048172C(x) int x; {
    char* s = lbl_805C2978;
    *(int*)(s + 0x34) = x;
    OSCancelAlarm(s + 8);
    *(u8*)s = *(u8*)s + 1;
    *(int*)(s + 0x30) = 0;
    fn_80481510(x, s);
}

int fn_8047FB9C(a, b, c, d, e) char* a; char* b; char* c; int d; int e; {
    if (fn_80480D88(b, a, d, e) == 0) return 0;
    fn_8048138C(c, a);
    *(char**)(b + 0x284) = c;
    *(int*)(c + 0x284) = 0;
    *(char**)(a + 0x58) = b;
    *(char**)(a + 0x5C) = c;
    return 1;
}

#if 0 /* w3f near misses */
void fn_8047FE2C(p) char* p; {
    char* s = p - 0x10;
    *(u16*)(s + 0x61C) = *(u16*)(p + 0x60C) + 1;
    if (*(u16*)(s + 0x61C) > 6) {
        fn_8046F190(*(int*)(s + 0x620), -0x67);
        OSCancelAlarm(s + 0x10);
        *(u8*)s = 0;
        *(u16*)(s + 2) = 0xFFFF;
        *(u16*)(s + 4) = 0xFFFF;
        *(int*)(*(int*)(s + 0x620) + 0x40) = 0x5DC;
    } else {
        fn_8047FCFC(*(int*)(s + 0x620), s);
    }
}

void fn_804814C4(p) char* p; {
    char* s = (char*)((unsigned)p - 8);
    int n = *(int*)(p + 0x28) + 1;
    *(int*)(s + 0x30) = n;
    if (n < 5) {
        fn_80481510(*(int*)(s + 0x34));
    } else {
        fn_8047F648(*(int*)(*(int*)(s + 0x34) + 0x58));
    }
}


#endif /* w3f near misses */

/* ---- w3f batch 2 ---- */
extern int OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern int fn_8047FAD4();
extern void fn_804819F0();
extern void fn_8048172C();
extern void fn_8047F4C8();
extern void fn_8047DE88();

int fn_80480C90(p) char* p; {
    int* s = *(int**)(p + 0x260);
    int a = *(u16*)(p + 0x288);
    if (a < s[16]) s[16] = a;
    switch (*(u16*)(p + 0x28A)) {
    case 0xC023:
        fn_8048172C(*(int*)(p + 0x260));
        break;
    case 0xC223:
        fn_804819F0(*(int*)(p + 0x260));
        break;
    default:
        fn_8047F4C8(*(int*)(p + 0x284));
        break;
    }
    return 1;
}

int fn_80480BD4(s, pkt) char* s; u8* pkt; {
    u8* p = pkt + 4;
    u8* q = (u8*)s + 0x21C;
    u8* e = p + (u16)(*(u16*)(pkt + 2) - 4);
    while (p < e) {
        int len = *(u16*)(s + 0x230);
        u8 t = p[0];
        u8* lim = (u8*)s + (len + 0x21C);
        while (t != q[0]) {
            if (q >= lim) return 0;
            q += q[1];
        }
        *(u16*)(s + 0x230) = fn_8047FAD4(s + 0x21C, len, q);
        p += p[1];
    }
    return 1;
}

int fn_80481184(s, pkt) char* s; u8* pkt; {
    u8* p = pkt + 4;
    u8* q = (u8*)s + 0x21C;
    u8* e = p + (u16)(*(u16*)(pkt + 2) - 4);
    while (p < e) {
        int len = *(u16*)(s + 0x230);
        u8 t = p[0];
        u8* lim = (u8*)s + (len + 0x21C);
        while (t != q[0]) {
            if (q >= lim) return 0;
            q += q[1];
        }
        *(u16*)(s + 0x230) = fn_8047FAD4(s + 0x21C, len, q);
        p += p[1];
    }
    return 1;
}

void fn_80481678(s, pkt, n) char* s; u8* pkt; int n; {
    char* g = lbl_805C2978;
    if (n >= 4) {
        int l = *(u16*)(pkt + 2);
        if (n >= l) {
            if ((unsigned)l >= 4) {
                if (pkt[1] == *(u8*)g) {
                    switch (pkt[0]) {
                    case 2:
                        OSCancelAlarm(g + 8);
                        fn_8047F4C8(*(int*)(s + 0x5C));
                        break;
                    case 3:
                        fn_8046F190(0, -0x6C);
                        OSCancelAlarm(g + 8);
                        fn_8047F648(*(int*)(s + 0x58));
                        break;
                    }
                }
            }
        }
    }
}

void fn_80481790(s, pkt) char* s; char* pkt; {
    int en = OSDisableInterrupts();
    char* m = (*(char* (**)())(s + 0x68))(s, *(u16*)(pkt + 2) + 0x3E);
    if (m != 0) {
        char* hd = m + 0x3C;
        *(u16*)(m + 0x3C) = 0xC223;
        memmove(m + 0x3E, pkt, *(u16*)(pkt + 2));
        *(int*)(m + 0x30) = 1;
        *(char**)(m + 0x34) = hd;
        *(int*)(m + 0x38) = *(u16*)(pkt + 2) + 2;
        *(int*)(m + 0x28) = 0;
        *(int*)(m + 0x2C) = 0;
        *(u16*)(m + 0x10) = 0x8864;
        *(u8*)(m + 0x25) = 0;
        *(int*)(m + 4) = 0;
        (*(void (**)())(s + 0x60))(s, m);
    }
    OSRestoreInterrupts(en);
}

void fn_8047F4C8(s) char* s; {
    switch (*(int*)(s + 4)) {
    case 0:
        *(int*)(s + 4) = 2;
        break;
    case 1:
        *(int*)(s + 0xC) = 0;
        *(int*)(s + 0x10) = 10;
        *(int*)(s + 0x14) = 2;
        *(int*)(s + 0x18) = 5;
        *(u8*)(s + 8) = *(u8*)(s + 8) + 1;
        if (*(int*)(s + 0x10) > 0) {
            *(int*)(s + 0x10) = *(int*)(s + 0x10) - 1;
            fn_8047DE88(s, 1, *(u8*)(s + 8), *(u16*)(s + 0x230), s + 0x21C);
        }
        *(int*)(s + 4) = 6;
        break;
    }
}
