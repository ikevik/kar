/* auto small functions */
#pragma dont_inline on
int fn_804858FC();
void fn_80487674();
void fn_80487D4C();
void fn_80488268();
int fn_8048841C();
void fn_80489224();
void fn_80489270();
void fn_804892D0();
void fn_804893D8();
void fn_80487D00();
void fn_8048821C();
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

extern int sprintf(char*, const char*, ...);
extern char* fn_803B7D90();
extern char* fn_803B7DF8();
extern char lbl_805DD24C[4];
extern char lbl_80534C14[];

char* fn_80482B08(p) char* p; {
    for (;;) {
        char c = p[0];
        if (c == 0xd && p[1] == 0xa) {
            char c2 = p[2];
            int ok = 1;
            if (c2 != 0x20 && c2 != 9) {
                ok = 0;
            }
            if (ok == 0) {
                return p + 2;
            }
        } else if (c == 0) {
            return p;
        }
        p++;
    }
}
int fn_80483C3C(buf, a, b) char* buf; int a; int b; {
    char* p = fn_803B7D90(buf, lbl_805DD24C);
    if (p == 0) {
        return -1;
    }
    {
        int n = sprintf(p, lbl_80534C14, a, b);
        return n + (p - buf);
    }
}
char* fn_80485C30(buf, ch) char* buf; int ch; {
    char* p = fn_803B7DF8(buf, ch);
    char* q;
    if (p == 0) {
        return 0;
    }
    if (p == buf) {
        *++p = 0;
        return p;
    }
    *p = 0;
    q = fn_803B7DF8(buf, ch);
    if (q == 0) {
        buf[0] = 0;
        return buf;
    }
    *++q = 0;
    return q;
}
extern int OSDisableInterrupts();
extern void MD5Init();
extern void MD5Update();
extern void MD5Final();
extern int fn_803B38AC();
extern int fn_804838C0();
extern int fn_80483B34();
extern char lbl_80534C54[];
extern char lbl_805DD2BC[8];
typedef struct QNode {
    int x0;
    void (*x4)();
    struct QNode* x8;
    struct QNode* xc;
    int x10;
    int x14;
} QNode;
extern struct { QNode* head; QNode* tail; } lbl_805DE6D4;

#if 0 /* 97% */
void fn_80485864() {
    int en = OSDisableInterrupts();
    QNode* n;
    while (lbl_805DE6D4.head != 0) {
        QNode* next;
        QNode* cur;
        n = lbl_805DE6D4.head;
        cur = n;
        next = cur->x8;
        if (next == 0) {
            lbl_805DE6D4.tail = 0;
        } else {
            next->xc = 0;
        }
        lbl_805DE6D4.head = next;
        OSRestoreInterrupts(en);
        en = OSDisableInterrupts();
        cur->x14 = 0;
        OSRestoreInterrupts(en);
        cur->x4(0, 0, cur);
        en = OSDisableInterrupts();
    }
    OSRestoreInterrupts(en);
}
#endif
void fn_80485A08(out, a, b, len) char* out; void* a; void* b; int len; {
    char ctx[0x58];
    MD5Init(ctx);
    MD5Update(ctx, a, 0x10);
    MD5Update(ctx, b, len);
    MD5Final(out, ctx);
    *(unsigned short*)(out + 6) &= ~0xF000;
    *(unsigned short*)(out + 6) |= 0x3000;
    *(unsigned char*)(out + 8) &= ~0xC0;
    *(unsigned char*)(out + 8) |= 0x80;
}
int fn_80485908(a) int a; {
    char tok[0x18];
    char num[0x18];
    int n;
    char* p;
    if (fn_804838C0(a, lbl_80534C54, tok, 0x18) <= 0) {
        return -1;
    }
    if (fn_80483B34(tok, lbl_805DD2BC, num) <= 0) {
        return -1;
    }
    p = num;
    n = 0;
    while (fn_803B38AC(*p) != 0) {
        n = n * 10;
        n = *p + n;
        n -= 0x30;
        p++;
    }
    if (*p != 0) {
        return -1;
    }
    return n;
}
#pragma dont_inline off
static inline int lws(char c) {
    int r = 1;
    if (c != 0x20 && c != 9) {
        r = 0;
    }
    return r;
}
char* fn_80482980(p, out) char* p; char** out; {
    while (lws(*p)) {
        p++;
    }
    if ((int)*(unsigned char*)p == 0xd && p[1] == 0xa) {
        if (!lws(p[2])) {
            *out = 0;
            return p + 2;
        }
        p += 2;
        while (lws(*p)) {
            p++;
        }
    }
    *out = p;
    return p;
}
#pragma dont_inline on
int fn_8048530C() {
    return lbl_805DE6D0;
}
int fn_804858FC() {
    return (int)lbl_805C2AF8;
}

/* ---- w3f batch 1 ---- */
#define G32(o) (*(int*)((int)lbl_805C3C40 + (o)))
extern int lbl_805DE6FC;
extern int lbl_805DE6E8;
extern int fn_803D9B10();
extern void fn_803BD5A4();
extern void fn_80487368();
extern void fn_804887EC();
extern void OSExitThread();
extern void fn_804830A4();
extern void fn_80482598();
extern void fn_8048263C();
extern void fn_80482730();

void fn_80483C1C() {
    fn_804830A4();
}
void fn_804859C8() {
    fn_80482598();
}
void fn_804859E8() {
    fn_8048263C();
}
void fn_80485AB8() {
    fn_80482730();
}
void fn_80486D58() {
    if (lbl_805DE6FC == 1) {
        lbl_805DE6FC = 2;
        OSWakeupThread(&lbl_805DE6E8);
    }
}
void fn_80486E84(a, b) int a; int* b; {
    fn_803BD5A4(a, *b);
}

/* ---- w3f batch 2 ---- */
extern char* strchr();
extern int sprintf(char*, const char*, ...);
extern void fn_803B8048();
extern char lbl_805DD268;
extern char lbl_80534C24[];
extern void OSInitThreadQueue();
extern void OSCreateThread();
extern void OSResumeThread();
extern int lbl_805DE6F4;
extern int lbl_805DE6F8;
extern void fn_80486BBC();
extern void fn_8046D7FC();
extern void fn_8046D86C();
extern void fn_8046D78C();

void fn_804828C4(out) unsigned* out; {
    fn_8046D7FC(0, out);
    if (*out == 0) fn_8046D86C(0, out);
}

void fn_80482910(out) unsigned* out; {
    unsigned t;
    fn_8046D7FC(0, &t);
    if (t == 0) {
        fn_8046D86C(0, &t);
        if (t != 0) {
            *out = 0xFFFF0000;
            return;
        }
    }
    fn_8046D78C(0, out);
}


char* fn_80482D48(s, d, st, ln) char* s; char* d; char** st; int* ln; {
    char* p = s;
    *st = 0;
    *ln = 0;
    for (; *p != 0 && strchr(d, *p) == 0; p++) {
    }
    *st = s;
    *ln = p - s;
    return p;
}

int fn_80483DD4(buf, a, b, c) char* buf; int a; int b; int c; {
    char* start = buf;
    buf += sprintf(buf, lbl_80534C24, c, a, b);
    fn_803B8048(buf, &lbl_805DD268);
    return (buf + 2) - start;
}

void fn_80486CD8(cfg) int* cfg; {
    if (lbl_805DE6FC == 0) {
        lbl_805DE6FC = 1;
        OSInitThreadQueue(&lbl_805DE6E8);
        lbl_805DE6F4 = cfg[4];
        lbl_805DE6F8 = cfg[5];
        OSCreateThread(cfg[0], fn_80486BBC, 0, cfg[1], cfg[2], cfg[3], 0);
        OSResumeThread(cfg[0]);
    }
}

#if 0 /* w3f near misses */
char* fn_80482B08(p) char* p; {
    if (p[0] == 13 && p[1] == 10) {
        int ok = 1;
        char c = p[2];
        if (c != 32 && c != 9) ok = 0;
        if (ok == 0) return p + 2;
    } else if (p[0] == 0) {
        return p;
    }
    return fn_80482B08(p + 1);
}


#endif /* w3f near misses */
