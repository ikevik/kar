
typedef unsigned long size_t;

#define cps ((unsigned char*)src)
#define cpd ((unsigned char*)dst)
#define lps ((unsigned long*)src)
#define lpd ((unsigned long*)dst)

extern void __close_all(void);
extern void (*__stdio_exit)(void);

int fn_803B4584(const char* s, size_t n)
{
    int c;
    if (n == 0) {
        return -1;
    }
    c = *(const unsigned char*)s;
    if ((signed char)c == 0) {
        return 0;
    }
    c = (signed char)c;
    if ((c & 0x80) == 0) {
        return 1;
    }
    if ((c & 0xe0) == 0xc0) {
        if (n >= 2) {
            if ((s[1] & 0x80) == 0x80) {
                return 2;
            }
            return -1;
        }
        return -2;
    }
    if ((c & 0xf0) == 0xe0) {
        if (n >= 3) {
            if ((s[1] & 0x80) == 0x80 && (s[2] & 0x80) == 0x80) {
                return 3;
            }
            return -1;
        }
        if ((n == 2 && (s[1] & 0x80) == 0x80) || n == 1) {
            return -2;
        }
        return -1;
    }
    return -1;
}

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
    unsigned long ch = (unsigned char)c;
    const unsigned char* p = (const unsigned char*)s + n;
    n++;
    while (--n) {
        if (*--p == ch) {
            return (void*)p;
        }
    }
    return 0;
}

void* memchr(const void* s, int c, size_t n)
{
    unsigned long ch = (unsigned char)c;
    const unsigned char* p = (const unsigned char*)s - 1;
    n++;
    while (--n) {
        if (*++p == ch) {
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
    const unsigned char* p;
    unsigned char* q;
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
        p = (const unsigned char*)src - 1;
        q = (unsigned char*)dst - 1;
        n++;
        while (--n) {
            *++q = *++p;
        }
    } else {
        p = (const unsigned char*)src + n;
        q = (unsigned char*)dst + n;
        n++;
        while (--n) {
            *--q = *--p;
        }
    }
    return dst;
}

void __copy_longs_rev_unaligned(void* dst, const void* src, size_t len)
{
    unsigned char* d = (unsigned char*)dst + len;
    const unsigned char* s = (const unsigned char*)src + len;
    unsigned long i;
    unsigned long v1, v2;
    unsigned long* wd;
    unsigned long* ws;
    unsigned long ls, rs, offs;

    i = (unsigned long)d & 3;
    if (i) {
        len -= i;
        do {
            *--d = *--s;
        } while (--i);
    }
    ls = ((unsigned long)s & 3) << 3;
    offs = (unsigned long)s & 3;
    rs = 32 - ls;
    i = len >> 3;
    s += 4 - offs;
    wd = (unsigned long*)d;
    ws = (unsigned long*)s;
    v1 = *--ws;
    do {
        v2 = ws[-1];
        wd[-1] = (v2 << ls) | (v1 >> rs);
        ws -= 2;
        v1 = *ws;
        wd -= 2;
        *wd = (v1 << ls) | (v2 >> rs);
    } while (--i);
    if (len & 4) {
        v2 = *--ws;
        *--wd = (v2 << ls) | (v1 >> rs);
    }
    len &= 3;
    if (len) {
        s = (const unsigned char*)ws + offs;
        d = (unsigned char*)wd;
        do {
            *--d = *--s;
        } while (--len);
    }
}

void __copy_longs_unaligned(void* dst, const void* src, size_t len)
{
    unsigned char* d = (unsigned char*)dst - 1;
    const unsigned char* s = (const unsigned char*)src - 1;
    unsigned long i;
    unsigned long v1, v2;
    unsigned long* wd;
    unsigned long* ws;
    unsigned long ls, rs, offs;

    i = (-(unsigned long)dst) & 3;
    if (i) {
        len -= i;
        do {
            *++d = *++s;
        } while (--i);
    }
    s++;
    offs = (unsigned long)s & 3;
    s -= offs;
    ls = ((unsigned long)(s + offs) & 3) << 3;
    rs = 32 - ls;
    i = len >> 3;
    wd = (unsigned long*)(d - 3);
    ws = (unsigned long*)(s - 1);
    v1 = *++ws;
    do {
        v2 = ws[1];
        wd[1] = (v1 << ls) | (v2 >> rs);
        ws += 2;
        v1 = *ws;
        wd += 2;
        *wd = (v2 << ls) | (v1 >> rs);
    } while (--i);
    if (len & 4) {
        v2 = *++ws;
        *++wd = (v1 << ls) | (v2 >> rs);
    }
    len &= 3;
    if (len) {
        s = (const unsigned char*)ws + 3 - (4 - offs);
        d = (unsigned char*)wd + 3;
        do {
            *++d = *++s;
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
            lpd[-1] = v1;
            v1 = lps[-3];
            lpd[-2] = v2;
            v2 = lps[-4];
            lpd[-3] = v1;
            v1 = lps[-5];
            lpd[-4] = v2;
            v2 = lps[-6];
            lpd[-5] = v1;
            v1 = lps[-7];
            lpd[-6] = v2;
            src = lps - 8;
            v2 = *lps;
            lpd[-7] = v1;
            dst = lpd - 8;
            *lpd = v2;
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

void __copy_longs_aligned(void* dst, const void* src, size_t len)
{
    unsigned long i;

    i = (-(unsigned long)dst) & 3;
    src = (const unsigned char*)src - 1;
    dst = (unsigned char*)dst - 1;
    if (i) {
        len -= i;
        do {
            *++cpd = *++cps;
        } while (--i);
    }
    i = len >> 5;
    src = (const unsigned char*)src - 3;
    dst = (unsigned char*)dst - 3;
    if (i) {
        do {
            unsigned long v1 = lps[1];
            unsigned long v2 = lps[2];
            lpd[1] = v1;
            v1 = lps[3];
            lpd[2] = v2;
            v2 = lps[4];
            lpd[3] = v1;
            v1 = lps[5];
            lpd[4] = v2;
            v2 = lps[6];
            lpd[5] = v1;
            v1 = lps[7];
            lpd[6] = v2;
            src = lps + 8;
            v2 = *lps;
            lpd[7] = v1;
            dst = lpd + 8;
            *lpd = v2;
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

void __stdio_atexit(void)
{
    __stdio_exit = __close_all;
}
