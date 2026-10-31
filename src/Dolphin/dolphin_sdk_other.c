#pragma dont_inline on
typedef unsigned long size_t;

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
