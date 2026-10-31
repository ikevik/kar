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
    unsigned char* d = (unsigned char*)dst + len;
    const unsigned char* s = (const unsigned char*)src + len;
    unsigned long i;
    unsigned long* wd;
    unsigned long* ws;

    i = (unsigned long)d & 3;
    if (i) {
        len -= i;
        do {
            *--d = *--s;
        } while (--i);
    }
    wd = (unsigned long*)d;
    ws = (unsigned long*)s;
    i = len >> 5;
    if (i) {
        do {
            wd[-1] = ws[-1];
            wd[-2] = ws[-2];
            wd[-3] = ws[-3];
            wd[-4] = ws[-4];
            wd[-5] = ws[-5];
            wd[-6] = ws[-6];
            wd[-7] = ws[-7];
            ws -= 8;
            wd -= 8;
            *wd = *ws;
        } while (--i);
    }
    i = (len & 0x1c) >> 2;
    if (i) {
        do {
            *--wd = *--ws;
        } while (--i);
    }
    len &= 3;
    if (len) {
        d = (unsigned char*)wd;
        s = (const unsigned char*)ws;
        do {
            *--d = *--s;
        } while (--len);
    }
}

void __copy_longs_aligned(void* dst, const void* src, size_t len)
{
    unsigned char* d = (unsigned char*)dst - 1;
    const unsigned char* s = (const unsigned char*)src - 1;
    unsigned long i;
    unsigned long* wd;
    unsigned long* ws;

    i = (-(unsigned long)dst) & 3;
    if (i) {
        len -= i;
        do {
            *++d = *++s;
        } while (--i);
    }
    wd = (unsigned long*)(d - 3);
    ws = (unsigned long*)(s - 3);
    i = len >> 5;
    if (i) {
        do {
            wd[1] = ws[1];
            wd[2] = ws[2];
            wd[3] = ws[3];
            wd[4] = ws[4];
            wd[5] = ws[5];
            wd[6] = ws[6];
            wd[7] = ws[7];
            ws += 8;
            wd += 8;
            *wd = *ws;
        } while (--i);
    }
    i = (len & 0x1c) >> 2;
    if (i) {
        do {
            *++wd = *++ws;
        } while (--i);
    }
    len &= 3;
    if (len) {
        d = (unsigned char*)wd + 3;
        s = (const unsigned char*)ws + 3;
        do {
            *++d = *++s;
        } while (--len);
    }
}

void __stdio_atexit(void)
{
    __stdio_exit = __close_all;
}
