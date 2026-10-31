#pragma dont_inline on
typedef unsigned long size_t;

typedef struct __va_list_struct {
    char gpr;
    char fpr;
    char reserved[2];
    char* input_arg_area;
    char* reg_save_area;
} __va_list[1];
typedef __va_list va_list;
#define va_start(ap, fmt) ((void)fmt, __builtin_va_info(&ap))

typedef struct file_modes {
    unsigned int open_mode : 2;
    unsigned int io_mode : 3;
    unsigned int buffer_mode : 2;
    unsigned int file_kind : 3;
    unsigned int file_orientation : 2;
    unsigned int binary_io : 1;
} file_modes;
typedef struct FILE {
    unsigned long handle;
    file_modes file_mode;
    unsigned char pad[0x50 - 8];
} FILE;

typedef struct OutStrCtrl {
    char* CharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} OutStrCtrl;

extern FILE __files[];
extern int __pformatter(void* write, void* ctrl, const char* format, va_list args);
extern void* memcpy(void* dst, const void* src, size_t n);
extern size_t fwrite(const void* buf, size_t size, size_t count, FILE* file);
extern void __begin_critical_region(int index);
extern void __end_critical_region(int index);
extern void exit(int status);
extern void (*lbl_80569E48[6])(int);
extern double fn_803BC738(double x, double y, int iy);
extern int fn_803BB3B0(double x, double* y);
extern const double lbl_805E5750;


extern double fn_803B9A0C(double);
extern double fn_803B9D1C(double);
extern double fn_803B9F80(double);
extern double fn_803BA210(double);
extern double fn_803BA434(double, double);
extern double fn_803BA770(double);
extern double fn_803BA9EC(double);
extern double fn_803BAAFC(double);
extern double fn_803BD468(double);
extern double tan(double);
extern double fn_803BD238(double);
extern double fn_803BCCD0(double);
extern double fn_803B3C64(double);

char* strchr(const char* str, int chr)
{
    const unsigned char* p = (const unsigned char*)str - 1;
    unsigned long c = chr & 0xff;
    unsigned long ch;
    while ((ch = *++p) != 0) {
        if (ch == c) {
            return (char*)p;
        }
    }
    return (c == 0) ? (char*)p : 0;
}

int fn_803B7E70(const char* s1, const char* s2, size_t n)
{
    const unsigned char* p1 = (const unsigned char*)s1 - 1;
    const unsigned char* p2 = (const unsigned char*)s2 - 1;
    unsigned long c1, c2;
    n++;
    while (--n) {
        c1 = *++p1;
        c2 = *++p2;
        if (c1 != c2) {
            return c1 - c2;
        }
        if (!c1) {
            break;
        }
    }
    return 0;
}

char* fn_803B7FD8(char* dst, const char* src)
{
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;
    while (*++q) {
    }
    q--;
    while ((*++q = *++p) != 0) {
    }
    return dst;
}

size_t strlen(const char* str)
{
    int len = -1;
    const unsigned char* p = (const unsigned char*)str - 1;
    do {
        len++;
    } while (*++p);
    return len;
}

int fn_803B98AC(void)
{
    return 0;
}

double fn_803BD388(double x) { return fn_803B9A0C(x); }
double fn_803BD3A8(double x) { return fn_803B9D1C(x); }
double fn_803BD3C8(double x) { return fn_803B9F80(x); }
double fn_803BD3E8(double x) { return fn_803BA210(x); }
double fmod(double x, double y) { return fn_803BA434(x, y); }
double fn_803BD428(double x) { return fn_803BA770(x); }
double fn_803BD448(double x) { return fn_803BA9EC(x); }
double fn_803BD468(double x) { return fn_803BAAFC(x); }
float fn_803BD4F4(float x) { return (float)fn_803BD468((double)x); }
float fn_803BD518(float x) { return (float)tan((double)x); }
float fn_803BD53C(float x) { return (float)fn_803BD238((double)x); }
float fn_803BD560(float x) { return (float)fn_803BCCD0((double)x); }
double fn_803BD584(double x) { return fn_803B3C64(x); }

int __StringWrite(void* arg, const char* buf, size_t n)
{
    OutStrCtrl* osc = (OutStrCtrl*)arg;
    size_t chars;
    chars = osc->MaxCharCount - osc->CharsWritten;
    if (osc->CharsWritten + n <= osc->MaxCharCount) {
        chars = n;
    }
    memcpy(osc->CharStr + osc->CharsWritten, buf, chars);
    osc->CharsWritten += chars;
    return 1;
}

void* __FileWrite(void* file, const char* buf, size_t n)
{
    return (fwrite(buf, 1, n, (FILE*)file) == n) ? file : 0;
}

int vsnprintf(char* s, size_t n, const char* format, va_list arg)
{
    int end;
    OutStrCtrl osc;
    osc.CharStr = s;
    osc.MaxCharCount = n;
    osc.CharsWritten = 0;
    end = __pformatter(__StringWrite, &osc, format, arg);
    if (s) {
        s[(end < n) ? end : n - 1] = 0;
    }
    return end;
}

int sprintf(char* s, const char* format, ...)
{
    va_list args;
    int ret;
    OutStrCtrl osc;
    va_start(args, format);
    osc.CharStr = s;
    osc.MaxCharCount = (size_t)-1;
    osc.CharsWritten = 0;
    ret = __pformatter(__StringWrite, &osc, format, args);
    if (s) {
        *(s + ((ret < (size_t)-1) ? ret : (size_t)-2)) = 0;
    }
    return ret;
}

int fwide(FILE* file, int mode)
{
    int orientation;
    if (file == 0 || file->file_mode.file_kind == 0) {
        return 0;
    }
    orientation = file->file_mode.file_orientation;
    switch (orientation) {
    case 0:
        if (mode > 0) {
            file->file_mode.file_orientation = 2;
        } else if (mode < 0) {
            file->file_mode.file_orientation = 1;
        }
        return mode;
    case 2:
        return 1;
    case 1:
        return -1;
    }
}

int vprintf(const char* format, va_list arg)
{
    int ret;
    if (fwide(&__files[1], -1) >= 0) {
        return -1;
    }
    __begin_critical_region(2);
    ret = __pformatter(__FileWrite, &__files[1], format, arg);
    __end_critical_region(2);
    return ret;
}

int fn_803B7CD0(int sig)
{
    void (*signal_func)(int);
    if (sig < 1 || sig > 6) {
        return -1;
    }
    __begin_critical_region(4);
    signal_func = lbl_80569E48[sig - 1];
    if (signal_func != (void (*)(int))1) {
        lbl_80569E48[sig - 1] = 0;
    }
    __end_critical_region(4);
    if (signal_func == (void (*)(int))1 || (signal_func == 0 && sig == 1)) {
        return 0;
    }
    if (signal_func == 0) {
        exit(0);
    }
    (*signal_func)(sig);
    return 0;
}

char* fn_803B7D90(const char* str, const char* pat)
{
    const unsigned char* s1 = (const unsigned char*)str - 1;
    const unsigned char* p1 = (const unsigned char*)pat - 1;
    unsigned long firstc, c1, c2;
    const unsigned char* ps1;
    const unsigned char* pp;
    if (pat == 0) {
        return (char*)str;
    }
    if (!(firstc = *++p1)) {
        return (char*)str;
    }
    while ((c1 = *++s1) != 0) {
        if (c1 == firstc) {
            const unsigned char* ps = s1 - 1;
            const unsigned char* pp2 = p1 - 1;
            while ((c1 = *++ps) == (c2 = *++pp2) && c1) {
            }
            if (!c2) {
                return (char*)s1;
            }
        }
    }
    return 0;
}

char* fn_803B7DF8(const char* str, int chr)
{
    const unsigned char* p = (const unsigned char*)str - 1;
    unsigned long c = chr & 0xff;
    const unsigned char* found = 0;
    unsigned long ch;
    while ((ch = *++p) != 0) {
        if (ch == c) {
            found = p;
        }
    }
    if (found) {
        return (char*)found;
    }
    return c ? 0 : (char*)p;
}

double tan(double x)
{
    double y[2];
    int n, ix;
    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_803BC738(x, lbl_805E5750, 1);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_803BB3B0(x, y);
        return fn_803BC738(y[0], y[1], 1 - ((n & 1) << 1));
    }
}

extern const float lbl_805E5758;
extern const double lbl_805E5760;
extern const double lbl_805E5768;

#pragma fp_contract on
float fn_803BD490(float x)
{
    volatile float y;
    if (x > lbl_805E5758) {
        double guess = __frsqrte((double)x);
        guess = lbl_805E5760 * guess * (lbl_805E5768 - guess * guess * x);
        guess = lbl_805E5760 * guess * (lbl_805E5768 - guess * guess * x);
        guess = lbl_805E5760 * guess * (lbl_805E5768 - guess * guess * x);
        y = (float)(x * guess);
        return y;
    }
    return x;
}
#pragma fp_contract off

double fn_803BD488(double x)
{
    return __fabs(x);
}

double fn_803BCCA8(double x, double y)
{
    *(int*)&x = (*(int*)&x & 0x7fffffff) | (*(int*)&y & 0x80000000);
    return x;
}

#if 1
int strcmp(const char* str1, const char* str2)
{
    const unsigned char* p1 = (const unsigned char*)str1;
    const unsigned char* p2 = (const unsigned char*)str2;
    unsigned long c1, k, c2;
    unsigned long w1, w2;
    unsigned long align;

    c1 = *p1;
    c2 = *p2;
    if ((k = c1 - c2) != 0) {
        return k;
    }
    if (((unsigned long)p2 & 3) != (align = (unsigned long)p1 & 3)) {
        goto bytes;
    }
    if (align != 0) {
        if (c1 == 0) {
            return 0;
        }
        for (k = 3 - align; k > 0; k--) {
            c1 = *++p1;
            c2 = *++p2;
            if ((c1 - c2) != 0) {
                return c1 - c2;
            }
            if (c1 == 0) {
                return 0;
            }
        }
        p1++;
        p2++;
    }
    w1 = *(unsigned long*)p1;
    w2 = *(unsigned long*)p2;
    if (((w1 - 0x01010101) & 0x80808080) == 0) {
        while (w1 == w2) {
            w1 = *(unsigned long*)(p1 += 4);
            w2 = *(unsigned long*)(p2 += 4);
            if (((w1 - 0x01010101) & 0x80808080) != 0) {
                goto fix;
            }
        }
        return (w1 > w2) ? 1 : -1;
    }
fix:
    c1 = *p1;
    c2 = *p2;
    if ((k = c1 - c2) != 0) {
        return k;
    }
bytes:
    if (c1 == 0) {
        return 0;
    }
    for (;;) {
        w1 = *++p1;
        w2 = *++p2;
        if ((k = w1 - w2) != 0) {
            return k;
        }
        if (w1 == 0) {
            return 0;
        }
    }
}
#endif

char* fn_803B8004(char* dst, const char* src, unsigned long n)
{
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;

    n++;
    while (--n) {
        if (!(*++q = *++p)) {
            while (--n) {
                *++q = 0;
            }
            break;
        }
    }
    return dst;
}

typedef struct InStrCtrl {
    char* NextChar;
    int NullCharDetected;
} InStrCtrl;

int fn_803B6D4C(void* isc, int ch, int behavior)
{
    char c;
    InStrCtrl* ctrl = (InStrCtrl*)isc;

    switch (behavior) {
    case 0:
        c = *ctrl->NextChar;
        if (c == '\0') {
            ctrl->NullCharDetected = 1;
            return -1;
        }
        ctrl->NextChar++;
        return (unsigned char)c;
    case 1:
        if (ctrl->NullCharDetected == 0) {
            ctrl->NextChar--;
        } else {
            ctrl->NullCharDetected = 0;
        }
        return ch;
    case 2:
        return ctrl->NullCharDetected;
    }
    return 0;
}

extern const double lbl_805E5718;

double fn_803BCEEC(double x, int* eptr)
{
    int hx;
    int ix;
    int lx;

    hx = *(int*)&x;
    ix = hx & 0x7FFFFFFF;
    lx = *((int*)&x + 1);
    *eptr = 0;
    if (ix >= 0x7FF00000 || ((ix | lx) == 0)) {
        return x;
    }
    if (ix < 0x00100000) {
        x *= lbl_805E5718;
        hx = *(int*)&x;
        ix = hx & 0x7FFFFFFF;
        *eptr = -54;
    }
    *eptr += (ix >> 20) - 1022;
    hx = (hx & 0x800FFFFF) | 0x3FE00000;
    *(int*)&x = hx;
    return x;
}

extern const double lbl_805E5700;
extern double fn_803BC698(int iy, double x, double y);
extern double fn_803BB750(double x, double y);


double fn_803BCCD0(double x)
{
    double y[2];
    int n, ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_803BB750(x, lbl_805E5700);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_803BB3B0(x, y);
        switch (n & 3) {
        case 0:
            return fn_803BB750(y[0], y[1]);
        case 1:
            return -fn_803BC698(1, y[0], y[1]);
        case 2:
            return -fn_803BB750(y[0], y[1]);
        default:
            return fn_803BC698(1, y[0], y[1]);
        }
    }
}

extern const double lbl_805E5658;
extern const double lbl_805E5660;
extern const double lbl_805E5668;
extern const double lbl_805E5670;
extern const double lbl_805E5678;
extern const double lbl_805E5680;
extern const double lbl_805E5688;

#pragma fp_contract on
double fn_803BC698(int iy, double x, double y)
{
    double z, r, v;
    int ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix < 0x3e400000) {
        if ((int)x == 0) {
            return x;
        }
    }
    z = x * x;
    v = z * x;
    r = lbl_805E5658 + z * (lbl_805E5660 + z * (lbl_805E5668 + z * (lbl_805E5670 + lbl_805E5678 * z)));
    if (iy == 0) {
        return x + v * (lbl_805E5680 + z * r);
    }
    return x - ((z * (lbl_805E5688 * y - v * r) - y) - lbl_805E5680 * v);
}
#pragma fp_contract off

extern const double lbl_805E55D0;
extern const double lbl_805E55D8;
extern const double lbl_805E55E0;
extern const double lbl_805E55E8;
extern const double lbl_805E55F0;
extern const double lbl_805E55F8;
extern const double lbl_805E5600;
extern const double lbl_805E5608;
extern const double lbl_805E5610;

#pragma fp_contract on
double fn_803BB750(double x, double y)
{
    double a, hz, z, r, qx;
    int ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix < 0x3e400000) {
        if (((int)x) == 0) {
            return lbl_805E55D0;
        }
    }
    z = x * x;
    r = z * (lbl_805E55D8 + z * (lbl_805E55E0 + z * (lbl_805E55E8 + z * (lbl_805E55F0 + z * (lbl_805E55F8 + lbl_805E5600 * z)))));
    if (ix < 0x3FD33333) {
        return lbl_805E55D0 - (lbl_805E5608 * z - (z * r - x * y));
    } else {
        if (ix > 0x3fe90000) {
            qx = lbl_805E5610;
        } else {
            *(int*)&qx = ix - 0x00200000;
            *((int*)&qx + 1) = 0;
        }
        hz = lbl_805E5608 * z - qx;
        a = lbl_805E55D0 - qx;
        return a - (hz - (z * r - x * y));
    }
}
#pragma fp_contract off

extern const double lbl_805E5748;

double fn_803BD238(double x)
{
    double y[2];
    int n, ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_803BC698(0, x, lbl_805E5748);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_803BB3B0(x, y);
        switch (n & 3) {
        case 0:
            return fn_803BC698(1, y[0], y[1]);
        case 1:
            return fn_803BB750(y[0], y[1]);
        case 2:
            return -fn_803BC698(1, y[0], y[1]);
        default:
            return -fn_803BB750(y[0], y[1]);
        }
    }
}

double fn_803BD13C(double x, double* iptr)
{
    int i0, i1, j0;
    unsigned int i;

    i0 = *(int*)&x;
    i1 = *((int*)&x + 1);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            *(int*)iptr = i0 & 0x80000000;
            *((int*)iptr + 1) = 0;
            return x;
        } else {
            i = (0x000fffff) >> j0;
            if (((i0 & i) | i1) == 0) {
                *iptr = x;
                *(int*)&x = i0 & 0x80000000;
                *((int*)&x + 1) = 0;
                return x;
            } else {
                *(int*)iptr = i0 & ~i;
                *((int*)iptr + 1) = 0;
                return x - *iptr;
            }
        }
    } else if (j0 > 51) {
        *iptr = x;
        *(int*)&x = i0 & 0x80000000;
        *((int*)&x + 1) = 0;
        return x;
    } else {
        i = ((unsigned int)(0xffffffff)) >> (j0 - 20);
        if ((i1 & i) == 0) {
            *iptr = x;
            *(int*)&x = i0 & 0x80000000;
            *((int*)&x + 1) = 0;
            return x;
        } else {
            *(int*)iptr = i0;
            *((int*)iptr + 1) = i1 & ~i;
            return x - *iptr;
        }
    }
}

extern const double lbl_805E5708;
extern const double lbl_805E5710;

double fn_803BCDA4(double x)
{
    int i0, i1, j0;
    unsigned int i, j;

    i0 = *(int*)&x;
    i1 = *((int*)&x + 1);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            if (lbl_805E5708 + x > lbl_805E5710) {
                if (i0 >= 0) {
                    i0 = i1 = 0;
                } else if (((i0 & 0x7fffffff) | i1) != 0) {
                    i0 = 0xbff00000;
                    i1 = 0;
                }
            }
        } else {
            i = (0x000fffff) >> j0;
            if (((i0 & i) | i1) == 0) {
                return x;
            }
            if (lbl_805E5708 + x > lbl_805E5710) {
                if (i0 < 0) {
                    i0 += (0x00100000) >> j0;
                }
                i0 &= (~i);
                i1 = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 0x400) {
            return x + x;
        }
        return x;
    } else {
        i = ((unsigned int)(0xffffffff)) >> (j0 - 20);
        if ((i1 & i) == 0) {
            return x;
        }
        if (lbl_805E5708 + x > lbl_805E5710) {
            if (i0 < 0) {
                if (j0 == 20) {
                    i0 += 1;
                } else {
                    j = i1 + (1 << (52 - j0));
                    if (j < i1) {
                        i0 += 1;
                    }
                    i1 = j;
                }
            }
            i1 &= (~i);
        }
    }
    *(int*)&x = i0;
    *((int*)&x + 1) = i1;
    return x;
}

extern const double lbl_805E5720;
extern const double lbl_805E5728;
extern const double lbl_805E5730;
extern const double lbl_805E5738;
extern const double lbl_805E5740;

#pragma dont_inline reset
static inline int fpclassify_d(double x)
{
    switch (*(int*)&x & 0x7ff00000) {
    case 0x7ff00000:
        if ((*(int*)&x & 0x000fffff) || *((int*)&x + 1)) {
            return 1;
        }
        return 2;
    case 0:
        if ((*(int*)&x & 0x000fffff) || *((int*)&x + 1)) {
            return 5;
        }
        return 3;
    default:
        return 4;
    }
}

double fn_803BCF78(double x, int n)
{
    int k, hx, lx;

    if (fpclassify_d(x) <= 2 || lbl_805E5720 == x) {
        return x;
    }
    {
        hx = *(int*)&x;
        lx = *((int*)&x + 1);
        k = (hx & 0x7ff00000) >> 20;
        if (k == 0) {
            if ((lx | (hx & 0x7fffffff)) == 0) {
                return x;
            }
            x *= lbl_805E5728;
            hx = *(int*)&x;
            k = ((hx & 0x7ff00000) >> 20) - 54;
            if (n < -50000) {
                return lbl_805E5730 * x;
            }
        }
        if (k == 0x7ff) {
            return x + x;
        }
        k = k + n;
        if (k > 0x7fe) {
            return lbl_805E5738 * fn_803BCCA8(lbl_805E5738, x);
        }
        if (k > 0) {
            *(int*)&x = (hx & 0x800fffff) | (k << 20);
            return x;
        }
        if (k <= -54) {
            if (n > 50000) {
                return lbl_805E5738 * fn_803BCCA8(lbl_805E5738, x);
            }
            return lbl_805E5730 * fn_803BCCA8(lbl_805E5730, x);
        }
        k += 54;
        *(int*)&x = (hx & 0x800fffff) | (k << 20);
        return lbl_805E5740 * x;
    }
    return x;
}

extern const double lbl_805E56F0;
extern const double lbl_805E56F8;

double fn_803BCB64(double x)
{
    int i0, i1, j0;
    unsigned int i, j;

    i0 = *(int*)&x;
    i1 = *((int*)&x + 1);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            if (lbl_805E56F0 + x > lbl_805E56F8) {
                if (i0 < 0) {
                    i0 = 0x80000000;
                    i1 = 0;
                } else if ((i0 | i1) != 0) {
                    i0 = 0x3ff00000;
                    i1 = 0;
                }
            }
        } else {
            i = (0x000fffff) >> j0;
            if (((i0 & i) | i1) == 0) {
                return x;
            }
            if (lbl_805E56F0 + x > lbl_805E56F8) {
                if (i0 > 0) {
                    i0 += (0x00100000) >> j0;
                }
                i0 &= (~i);
                i1 = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 0x400) {
            return x + x;
        }
        return x;
    } else {
        i = ((unsigned int)(0xffffffff)) >> (j0 - 20);
        if ((i1 & i) == 0) {
            return x;
        }
        if (lbl_805E56F0 + x > lbl_805E56F8) {
            if (i0 > 0) {
                if (j0 == 20) {
                    i0 += 1;
                } else {
                    j = i1 + (1 << (52 - j0));
                    if (j < i1) {
                        i0 += 1;
                    }
                    i1 = j;
                }
            }
            i1 &= (~i);
        }
    }
    *(int*)&x = i0;
    *((int*)&x + 1) = i1;
    return x;
}

static const double atanhi[] = {
    4.63647609000806093515e-01, 7.85398163397448278999e-01, 9.82793723247329054082e-01,
    1.57079632679489655800e+00,
};
static const double atanlo[] = {
    2.26987774529616870924e-17, 3.06161699786838301793e-17, 1.39033110312309984516e-17,
    6.12323399573676603587e-17,
};
static const double aT[] = {
    3.33333333333329318027e-01,  -1.99999999998764832476e-01, 1.42857142725034663711e-01,
    -1.11111104054623557880e-01, 9.09088713343650656196e-02,  -7.69187620504482999495e-02,
    6.66107313738753120669e-02,  -5.83357013379057348645e-02, 4.97687799461593236017e-02,
    -3.65315727442169155270e-02, 1.62858201153657823623e-02,
};
extern const double lbl_805E56C8;
extern const double lbl_805E56D0;
extern const double lbl_805E56D8;
extern const double lbl_805E56E0;
extern const double lbl_805E56E8;


#pragma fp_contract on
double fn_803BC94C(double x)
{
    double w, s1, s2, z;
    int ix, hx, id;

    hx = *(int*)&x;
    ix = hx & 0x7fffffff;
    if (ix >= 0x44100000) {
        if (ix > 0x7ff00000 || (ix == 0x7ff00000 && (*((int*)&x + 1) != 0))) {
            return x + x;
        }
        if (hx > 0) {
            return atanhi[3] + atanlo[3];
        } else {
            return -atanhi[3] - atanlo[3];
        }
    }
    if (ix < 0x3fdc0000) {
        if (ix < 0x3e200000) {
            if (lbl_805E56C8 + x > lbl_805E56D0) {
                return x;
            }
        }
        id = -1;
    } else {
        {
            double ax = __fabs(x);
            x = ax;
        }
        if (ix < 0x3ff30000) {
            if (ix < 0x3fe60000) {
                id = 0;
                x = (lbl_805E56D8 * x - lbl_805E56D0) / (lbl_805E56D8 + x);
            } else {
                id = 1;
                x = (x - lbl_805E56D0) / (lbl_805E56D0 + x);
            }
        } else {
            if (ix < 0x40038000) {
                id = 2;
                x = (x - lbl_805E56E0) / (lbl_805E56D0 + lbl_805E56E0 * x);
            } else {
                id = 3;
                x = lbl_805E56E8 / x;
            }
        }
    }
    z = x * x;
    w = z * z;
    s1 = z * (aT[0] + w * (aT[2] + w * (aT[4] + w * (aT[6] + w * (aT[8] + w * aT[10])))));
    s2 = w * (aT[1] + w * (aT[3] + w * (aT[5] + w * (aT[7] + w * aT[9]))));
    if (id < 0) {
        return x - x * (s1 + s2);
    } else {
        z = atanhi[id] - ((x * (s1 + s2) - atanlo[id]) - x);
        return (hx < 0) ? -z : z;
    }
}
#pragma fp_contract off
#pragma dont_inline on
