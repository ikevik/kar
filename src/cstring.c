#pragma dont_inline on

typedef unsigned long size_t;

#define cps ((unsigned char*)src)
#define cpd ((unsigned char*)dst)
#define lps ((unsigned long*)src)
#define lpd ((unsigned long*)dst)

extern void __close_all(void);
extern void (*__stdio_exit)(void);

int memcmp(const void* s1, const void* s2, size_t n)
{
    const unsigned char* p1 = (const unsigned char*)s1 - 1;
    const unsigned char* p2 = (const unsigned char*)s2 - 1;
    n++;
    while (--n) {
        if (*++p1 != *++p2) {
            return (*p1 < *p2) ? -1 : 1;
        }
    }
    return 0;
}

void* __memrchr(const void* s, int c, size_t n)
{
    const unsigned char* p = (const unsigned char*)s + n;
    c = (unsigned char)c;
    n++;
    while (--n) {
        if (*--p == c) {
            return (void*)p;
        }
    }
    return 0;
}

void* memchr(const void* s, int c, size_t n)
{
    const unsigned char* p = (const unsigned char*)s - 1;
    c = (unsigned char)c;
    n++;
    while (--n) {
        if (*++p == c) {
            return (void*)p;
        }
    }
    return 0;
}

void __copy_longs_rev_unaligned(void* dst, const void* src, size_t n);
void __copy_longs_unaligned(void* dst, const void* src, size_t n);
void __copy_longs_rev_aligned(void* dst, const void* src, size_t n);
void __copy_longs_aligned(void* dst, const void* src, size_t n);

void* memmove(void* dst, const void* src, size_t n)
{
    int rev = (unsigned long)src < (unsigned long)dst;

    if (n >= 32) {
        if ((((int)dst ^ (int)src)) & 3) {
            if (!rev) {
                __copy_longs_unaligned(dst, src, n);
            } else {
                __copy_longs_rev_unaligned(dst, src, n);
            }
        } else {
            if (!rev) {
                __copy_longs_aligned(dst, src, n);
            } else {
                __copy_longs_rev_aligned(dst, src, n);
            }
        }
        return dst;
    }
    if (!rev) {
        src = (const unsigned char*)src - 1;
        dst = (unsigned char*)dst - 1;
        n++;
        while (--n) {
            *++cpd = *++cps;
        }
    } else {
        src = (const unsigned char*)src + n;
        dst = (unsigned char*)dst + n;
        n++;
        while (--n) {
            *--cpd = *--cps;
        }
    }
    return dst;
}

void __copy_longs_aligned(void* dst, const void* src, size_t len)
{
    unsigned long i = (-(unsigned long)dst) & 3;
    src = (const unsigned char*)src - 1;
    dst = (unsigned char*)dst - 1;
    if (i) {
        len -= i;
        do {
            *++cpd = *++cps;
        } while (--i);
    }
    src = (const unsigned char*)src - 3;
    dst = (unsigned char*)dst - 3;
    i = len >> 5;
    if (i) {
        do {
            unsigned long v1 = lps[1];
            unsigned long v2 = lps[2];
            unsigned long v3 = lps[3];
            unsigned long v4 = lps[4];
            unsigned long v5 = lps[5];
            unsigned long v6 = lps[6];
            unsigned long v7 = lps[7];
            unsigned long v8 = lps[8];
            src = lps + 8;
            lpd[1] = v1;
            lpd[2] = v2;
            lpd[3] = v3;
            lpd[4] = v4;
            lpd[5] = v5;
            lpd[6] = v6;
            lpd[7] = v7;
            lpd[8] = v8;
            dst = lpd + 8;
        } while (--i);
    }
    i = (len & 0x1c) >> 2;
    if (i) {
        do {
            *++lpd = *++lps;
        } while (--i);
    }
    src = (const unsigned char*)src + 3;
    dst = (unsigned char*)dst + 3;
    len &= 3;
    if (len) {
        do {
            *++cpd = *++cps;
        } while (--len);
    }
}

void __copy_longs_rev_aligned(void* dst, const void* src, size_t len)
{
    unsigned long i;
    src = (const unsigned char*)src + len;
    dst = (unsigned char*)dst + len;
    i = (unsigned long)dst & 3;
    if (i) {
        len -= i;
        do {
            *--cpd = *--cps;
        } while (--i);
    }
    i = len >> 5;
    if (i) {
        do {
            unsigned long v1 = lps[-1];
            unsigned long v2 = lps[-2];
            unsigned long v3 = lps[-3];
            unsigned long v4 = lps[-4];
            unsigned long v5 = lps[-5];
            unsigned long v6 = lps[-6];
            unsigned long v7 = lps[-7];
            unsigned long v8 = lps[-8];
            src = lps - 8;
            lpd[-1] = v1;
            lpd[-2] = v2;
            lpd[-3] = v3;
            lpd[-4] = v4;
            lpd[-5] = v5;
            lpd[-6] = v6;
            lpd[-7] = v7;
            lpd[-8] = v8;
            dst = lpd - 8;
        } while (--i);
    }
    i = (len & 0x1c) >> 2;
    if (i) {
        do {
            *--lpd = *--lps;
        } while (--i);
    }
    len &= 3;
    if (len) {
        do {
            *--cpd = *--cps;
        } while (--len);
    }
}

void __stdio_atexit(void)
{
    __stdio_exit = __close_all;
}
