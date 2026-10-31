#pragma dont_inline on
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
#define M8(a) (*(u8*)(a))
#define M16(a) (*(u16*)(a))
#define M32(a) (*(u32*)(a))
#define MF(a) (*(float*)(a))
#define MS16(a) (*(s16*)(a))
typedef struct { u32 :30; u32 f:2; } BFu32_30_2;
typedef struct { u32 :28; u32 f:3; } BFu32_28_3;
typedef struct { u32 f:30; } BFu32_0_30;
typedef struct { u32 f:28; } BFu32_0_28;
extern u8 hsdDObj[];
extern u8 lbl_804BCDD8[];
extern u8 lbl_804BCDF0[];
extern const float lbl_805E4DB8;
extern const float lbl_805E4DBC;
extern u32 lbl_805DDB80;
extern u8 lbl_805699F4[];
void fn_803881A8(void);
extern u8 lbl_805699E8[];
extern u8 lbl_804F4D68[];
extern u8 lbl_804F4E38[];
extern u8 lbl_804F55B0[];
extern u8 hsdJObj[];
void fn_803960C8(void);
void fn_80396154(void);
float fn_803CEA1C(u32, float);
float fn_803CE9F4(u32, float);
void HSD_StateInvalidate(u32, float);
void fn_8038CB78(u32, float);
void __register_global_object(u32, u32, u32, float);
void fn_802889D0(u32, u32, float, float);
u32 DVDConvertPathToEntrynum(u32, u32);
u32 fn_80073984(u32, float);
float memcpy(u32, u32, u32, u32, u32);
void DVDReadAsyncPrio(u32, u32, u32, u32, u32, u32);
void fn_803C563C(u32, u32, u32, u32, u32);
u32 HSD_JObjLoadJoint(u32, u32);
u32 fn_80396F54(u32, u32, u32);
float HSD_JObjDispAll(u32, u32, u32, u32);
float __construct_array(u32, u32, u32, u32, u32);
float fn_803CD4A0(u32);
float fn_803CD4E4(u32, u32, u32, u32, u32, u32, u32, float);
float GXSetTexCoordGen2(u32, u32, u32, u32, u32, u32, float);
float fn_803CF820(u32, u32, u32, u32, float);
float GXSetNumTexGens(u32, float);
float fn_803CF30C(u32, float);
float fn_803CF134(u32, u32, u32, u32, float);
float fn_803CEBE0(u32, u32, u32, u32, u32, float);
float fn_803CEC68(u32, u32, u32, u32, u32, u32, float);
float fn_803CEC24(u32, u32, u32, u32, u32, float);
void fn_803CECD0(u32, u32, u32, u32, u32, u32, float);
void fn_803955BC(u32, u32, u32);
u32 fn_80396068(u32, float);
u32 fn_80378568(u32, float);
void fn_8038B844(u32, u32, float);
void hsdInitClassInfo(u32, u32, u32, u32, u32, u32);

void fn_80383C98(u32 p3, u32 p4, u32 p5, u32 p6) {
    float d0;
    float d1;
    float d2;
    d0 = ((float(*)(u32, u32, u32, u32, u32))(M32(((u32)(u32)hsdDObj+60))))(p3, p4, p5, p6, (u32)hsdDObj);
    d1 = fn_803CEA1C(0, d0);
    d2 = fn_803CE9F4(0, d1);
    HSD_StateInvalidate(-1, d2);
}








u32 fn_8038CCAC(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 c0;
    M32(p3) = (u32)lbl_804F4E38;
    M32(((u32)p3+8)) = p4;
    v1 = M32(((u32)p3+8));
    v2 = M32(v1);
    c0 = HSD_JObjLoadJoint(v2, p4);
    M32(((u32)p3+4)) = c0;
    return p3;
}

void fn_80390C74(void) {
    float d0;
    float d1;
    float d2;
    float d3;
    float d4;
    float d5;
    float d6;
    float d7;
    float d8;
    float d9;
    d0 = fn_803CD4A0(1);
    d1 = fn_803CD4E4(4, 0, 0, 0, 0, 0, 2, d0);
    d2 = GXSetTexCoordGen2(0, 1, 4, 60, 0, 125, d1);
    d3 = fn_803CF820(1, 4, 5, 0, d2);
    d4 = GXSetNumTexGens(1, d3);
    d5 = fn_803CF30C(1, d4);
    d6 = fn_803CF134(0, 0, 0, 255, d5);
    d7 = fn_803CEBE0(0, 15, 8, 2, 15, d6);
    d8 = fn_803CEC68(0, 0, 0, 0, 1, 0, d7);
    d9 = fn_803CEC24(0, 7, 4, 1, 7, d8);
    fn_803CECD0(0, 0, 0, 0, 1, 0, d9);
}

void fn_8039254C(u32 p3) {
    M16(p3) = 10;
    M16(((u32)p3+2)) = 10;
    M16(((u32)p3+4)) = 50;
    M16(((u32)p3+6)) = 50;
    M16(((u32)p3+8)) = 100;
    M16(((u32)p3+10)) = 100;
    M8(((u32)p3+12)) = 255;
    M8(((u32)p3+13)) = 0;
    M8(((u32)p3+14)) = 255;
    M8(((u32)p3+15)) = 64;
    M8(((u32)p3+16)) = 255;
    M8(((u32)p3+17)) = 0;
    M8(((u32)p3+18)) = 255;
    M8(((u32)p3+19)) = 128;
    M8(((u32)p3+20)) = 255;
    M8(((u32)p3+21)) = 0;
    M8(((u32)p3+22)) = 255;
    M8(((u32)p3+23)) = 255;
}

void fn_8039558C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+4));
    v2 = M32(p3);
    v3 = M32(((u32)p3+8));
    fn_803955BC(v2, v1, v3);
}

void fn_80395A40(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+8));
    if ((u32)v1 == (u32)0) {
        M32(((u32)p3+4)) = p4;
        M32(((u32)p3+8)) = 1;
        return;
    }
    v2 = M32(((u32)p3+4));
    if ((u32)p4 != (u32)v2) {
        v3 = M32(p3);
        fn_803955BC(v3, v2, v1);
        M32(((u32)p3+4)) = p4;
        M32(((u32)p3+8)) = 1;
        return;
    }
    M32(((u32)p3+8)) = (v1+1);
}





extern const float lbl_805E4DE0;
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
extern const float lbl_805E4DC0;
extern const float lbl_805E4DC4;
extern const float lbl_805E4DC8;
extern const float lbl_805E4DCC;
extern const float lbl_805E4DD0;
extern const float lbl_805E4EB8;
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

void fn_80384D5C(float* p)
{
    ((s32*)p)[1] = 0;
    p[6] = lbl_805E4DC0;
    p[5] = lbl_805E4DC0;
    p[4] = lbl_805E4DC0;
    p[7] = p[4];
    p[8] = p[5];
    p[9] = p[6];
}

void fn_80384EA4(s32* p, s32 i, float a, float b)
{
    if (a >= ((float*)p)[2]) {
        p[1] = i;
        ((float*)p)[2] = a;
        ((float*)p)[3] = b;
    }
}

void fn_80384F18(s32* p)
{
    if (lbl_805E4DC4 >= ((float*)p)[2]) {
        p[1] = 12;
        ((float*)p)[2] = lbl_805E4DC4;
        ((float*)p)[3] = lbl_805E4DC8;
    }
}

void fn_80384F44(s32* p)
{
    if (lbl_805E4DCC >= ((float*)p)[2]) {
        p[1] = 20;
        ((float*)p)[2] = lbl_805E4DCC;
        ((float*)p)[3] = lbl_805E4DD0;
    }
}

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

typedef struct R1 {
    char pad[0x38];
    s32 cnt;
} R1;
typedef struct R2 {
    s32 f0;
    R1* r;
} R2;

#if 0
void fn_80386F2C(R2* a, R2* b)
{
    if (b == a) return;
    a->r = b->r;
    a->r->cnt++;
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
    return (u32)(lbl_805E4EB8 * p[2]);
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

