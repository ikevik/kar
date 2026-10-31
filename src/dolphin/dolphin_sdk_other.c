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
