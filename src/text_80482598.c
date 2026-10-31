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
