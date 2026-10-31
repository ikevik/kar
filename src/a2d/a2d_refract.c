typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;

extern float lbl_805E4DE0;
extern u8 lbl_804F4F70[];

void fn_80383978(void) {}

u8 fn_80384540(u8* p) { return p[0x25]; }

void fn_803845F4(u32* p) { *p = 0; }

void fn_80384AB0(u32** p, u32 v)
{
    u32* q = *p;
    if (q == 0) return;
    q[0x20 / 4] = v;
}

void fn_80384AC4(float** p, float v)
{
    float* q = *p;
    if (q == 0) return;
    q[0x1c / 4] = v;
}

void fn_80385748(float* p)
{
    float t = lbl_805E4DE0;
    p[2] = t;
    p[1] = t;
    p[0] = t;
}

void fn_8038BD04(void* a, char* b) { *(u8*)(*(char**)(b + 0x2c) + 9) = 1; }

void fn_8038BEEC(u32* p, u32 v) { p[0x2c / 4] = v; }

void* fn_8038DE08(void) { return lbl_804F4F70; }

void fn_8038E83C(void) {}
void fn_8038E840(void) {}
void fn_803910AC(void) {}

u16 fn_80391F00(u16* p) { return p[2]; }
u16 fn_80391F08(u16* p) { return p[3]; }

#if 0
void fn_80395A2C(u32* p, u32* a, u32* b)
{
    u32 y = *b;
    u32 x = *a;
    p[0] = x;
    p[1] = y;
}

#endif

void fn_80395B04(u32* p)
{
    p[0] = 0;
    p[1] = 0;
}

void fn_80395F8C(s32* p) { p[0x18 / 4] = p[0x18 / 4] + 2; }
void fn_80395F9C(s32* p) { p[0x18 / 4] = p[0x18 / 4] + 2; }
void fn_80395FAC(s32* p) { p[0x18 / 4] = p[0x18 / 4] + 2; }

typedef struct {
    u8 r, g, b, a;
} Col;
extern s32 lbl_805DDC80;
extern Col lbl_805DDC84;
extern float lbl_805E4DC0;
extern float lbl_805E4DC4;
extern float lbl_805E4DC8;
extern float lbl_805E4DCC;
extern float lbl_805E4DD0;
extern float lbl_805E4EB8;
extern void* lbl_805DDCA0;
extern u8 lbl_804C0470[];
extern char lbl_804F5440[];
extern char lbl_804F547C[];
extern void OSReport(const char*, ...);
extern void fn_80385F18();
extern void fn_8038B438();
extern void fn_8038C560();
extern void fn_80388CE8();
extern void fn_80390974();
extern void fn_803C5304();
extern s32 fn_80073834();
extern void DVDFastOpen();

void fn_8038395C(void)
{
    lbl_805DDC80 = 0;
    lbl_805DDC84.r = 0;
    lbl_805DDC84.g = 0;
    lbl_805DDC84.b = 0;
}

void fn_80384A80(u8** pp)
{
    u8* p = *pp;
    if (p == 0) return;
    p[0x24] = 0;
}

void fn_80384A98(u8** pp)
{
    u8* p = *pp;
    if (p == 0) return;
    p[0x24] = 1;
}

void fn_80384AD8(float** pp, float* q)
{
    float* p = *pp;
    if (p == 0) return;
    p[3] = q[0];
    p[4] = q[1];
    p[5] = q[2];
}

void* fn_80384CC8(char* p)
{
    char* e = p + *(s32*)(p + 0x600) * 0x30;
    *(s32*)(p + 0x600) = *(s32*)e;
    *(s32*)(p + 0x604) = *(s32*)(p + 0x604) - 1;
    return e;
}

#if 0
void fn_80384D5C(float* p)
{
    float t;
    ((s32*)p)[1] = 0;
    t = lbl_805E4DC0;
    p[6] = t;
    p[5] = t;
    p[4] = t;
    p[7] = p[4];
    p[8] = p[5];
    p[9] = p[6];
}
#endif

void fn_80384EA4(s32* p, s32 i, float a, float b)
{
    if (a >= ((float*)p)[2]) {
        p[1] = i;
        ((float*)p)[2] = a;
        ((float*)p)[3] = b;
    }
}

#if 0
void fn_80384F18(s32* p)
{
    float a = lbl_805E4DC4;
    if (a >= ((float*)p)[2]) {
        float c = lbl_805E4DC8;
        p[1] = 12;
        ((float*)p)[2] = a;
        ((float*)p)[3] = c;
    }
}
#endif

#if 0
void fn_80384F44(s32* p)
{
    float a = lbl_805E4DCC;
    if (a >= ((float*)p)[2]) {
        float c = lbl_805E4DD0;
        p[1] = 20;
        ((float*)p)[2] = a;
        ((float*)p)[3] = c;
    }
}
#endif

void fn_8038528C(char* p, u8 a, s32 b, s32 c)
{
    *(s32*)(p + 0) = 0;
    *(s32*)(p + 4) = 0;
    p[0x50] = 1;
    p[0x51] = 1;
    *(s32*)(p + 8) = b;
    *(s32*)(p + 0x28) = c;
    p[0x48] = a;
}

#if 0
void fn_80386F2C(s32* a, s32* b)
{
    if (b == a) return;
    a[1] = b[1];
    {
        s32* t = (s32*)a[1];
        t[0x38 / 4] = t[0x38 / 4] + 1;
    }
}
#endif

typedef struct N {
    struct N* a;
    struct N* b;
} N;
typedef struct {
    s32 f0;
    N n;
} L;

void fn_80387D78(L* l)
{
    N* n;
    l->f0 = 0;
    n = &l->n;
    n->b = n;
    n->a = n;
}

void fn_80387F08(L* l)
{
    N* n;
    l->f0 = 0;
    n = &l->n;
    n->b = n;
    n->a = n;
}

void fn_80388190(L* l)
{
    N* n;
    l->f0 = 0;
    n = &l->n;
    n->b = n;
    n->a = n;
}

void fn_803888BC(char** p) { fn_80385F18(p[1] + 8); }

void fn_8038B408(s32 a, void* b, s32 c)
{
    if (b != 0) {
        fn_8038B438(b, c);
    }
}

char* fn_8038BC80(char* p, s32 i)
{
    char* q = p + i * 8;
    return (char*)(*(u32*)(q + 0xc) + (u32)p) + 4;
}

void fn_8038BDB4(s32 a, s32 b) { DVDFastOpen(b, a); }

void fn_8038BDE0(void) { fn_803C5304(); }

s32 fn_8038BEB4(u32* p)
{
    if (p[0x40 / 4] != 0) {
        return fn_80073834(p[0x3c / 4]);
    }
    return p[0x34 / 4];
}

void fn_8038BEF4(char* p)
{
    *(void**)(p + 0) = lbl_804C0470;
    *(s32*)(p + 4) = 0;
    *(s32*)(p + 8) = 0;
    *(u16*)(p + 0xc) = 0;
    *(u16*)(p + 0xe) = 0;
    *(u16*)(p + 0x10) = 0x280;
    *(u16*)(p + 0x12) = 0x1e0;
}

void fn_8038CB28(s32 a) { fn_8038C560(lbl_805DDCA0, a); }
void fn_8038CB50(s32 a) { fn_8038C560(lbl_805DDCA0, a); }

void fn_80390258(s32 a, void* b, s32 c)
{
    if (b != 0) {
        fn_80388CE8(b, c);
    }
}

void fn_80390954(void) { fn_80390974(); }

#if 0
u32 fn_80391080(float* p)
{
    float f = p[2];
    return (u32)(lbl_805E4EB8 * f);
}
#endif

s32 fn_803911B8(u32** pp)
{
    u32* q = *pp;
    s32 n;
    if (q == 0) return 0;
    n = 0;
    while (*q != 0) {
        q++;
        n++;
    }
    return n;
}

s32 fn_80391264(u32* pp)
{
    u32* q = (u32*)pp[2];
    s32 n;
    if (q == 0) return 0;
    n = 0;
    while (*q != 0) {
        q++;
        n++;
    }
    return n;
}

void fn_80395490(void) { OSReport(lbl_804F5440); }
void fn_80395560(void) { OSReport(lbl_804F547C); }
