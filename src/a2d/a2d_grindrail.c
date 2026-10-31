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
extern u8 lbl_804F51DC[];
extern u8 lbl_804BDB74[];
extern u8 lbl_804BDBC0[];
extern u8 lbl_804BDBE8[];
extern const float lbl_805E4088;
extern const float lbl_805E408C;
extern const float lbl_805E4090;
u32 HSD_Randf(u32);
u32 fn_80341F90(u32, float);
u32 __cvt_fp2unsigned(u32, float);
void fn_8040BE00(u32, u32, float);
float fn_80289768(u32, u32, float);
void fn_80384A80(u32, float);
void fn_80384A98(u32);
u32 fn_8038D0A8(u32, u32, u32, u32);
void fn_803251CC(u32, float);
void fn_802895C8(u32, u32, float, float);
void fn_8040C174(u32, u32);
void fn_80289590(u32, u32, float);
u32 fn_802897E0(u32);
u32 fn_80289874(u32, float);
u32 fn_80391F10(u32, u32);
float fn_8038D0E8(u32, u32, u32, float);
float fn_803FCDB8(u32, ...);
void fn_8031E558(u32);
void HSD_AObjLoadDesc_(u32, u32, u32);
void fn_80332300(u32);
u32 fn_803AD760(u32, u32, u32, u32, u32);
float fn_8037AFD0(u32, u32, float);
void fn_8037B028(u32, u32, u32, u32, u32, u32, float);
void fn_8037B33C(u32, u32);
void fn_8037CFB4(void);
void PSMTXIdentity(u32, u32);
void fn_803346E4(u32, u32, u32);

void fn_80323CE8(u32 p3) {
    M32(((u32)p3+40)) = 2;
    fn_80384A98((p3+48));
}


void fn_803251CC(u32 p3, float q1) {
    u32 v1;
    float v2;
    float v3;
    u32 v4;
    float v5;
    u32 v6;
    float d1;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = lbl_805E4088;
        v3 = lbl_805E408C;
        fn_802895C8(v1, ((1<<16)-1), v2, v3);
        v4 = M32(((u32)p3+4));
        v5 = lbl_805E4090;
        d1 = fn_80289768(v4, ((1<<16)-1), v5);
        v6 = M32(((u32)p3+4));
        fn_8040BE00(v6, 16, d1);
    }
    M32(((u32)p3+8)) = 0;
    M8(((u32)p3+12)) = 0;
    M8(((u32)p3+13)) = 0;
}

void fn_80326968(u32 p3) {
    u32 v1;
    v1 = M32(p3);
    ((void(*)(u32))(M32(((u32)M32(v1)+16))))(v1);
}

void fn_8032876C(u32 p3) {
    fn_8031E558((p3+44));
}

void fn_80328A14(u32 p3, u32 p4, u32 p5) {
    if ((u32)p4 == (u32)0) {
    return;
    }
    HSD_AObjLoadDesc_(p4, p5, p5);
}

void fn_8032A88C(u32 p3) {
    ((void(*)(u32))(M32(((u32)M32(p3)+16))))(p3);
}

void fn_8032A998(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+32));
    fn_80332300(v1);
}

void fn_803343D8(void) {
    fn_8037CFB4();
}

void fn_803343F8(u32 p3, u32 p4) {
    PSMTXIdentity(p4, p4);
}

void fn_803346B4(u32 p3, u32 p4, u32 p5) {
    if ((u32)p4 == (u32)0) {
    return;
    }
    fn_803346E4(p4, p5, p5);
}



extern float lbl_805E4124;

void fn_803238F0(u32* p) { *p = 0; }

void fn_80325244(u8* p) { p[0xd] = 1; }

s32 fn_80326844(u32* p) { return p[0x60 / 4] == 0; }

void fn_80327660(void) {}

s32 fn_8032A754(u32* p) { return p[0x60 / 4] == 0; }

s32 fn_8032EBB4(s32* p) { return p[0x48 / 4] == 0x1e; }

void fn_80331558(u8* p) { p[0x14] = 0; }

void fn_80333D20(void) {}

s32 fn_80334340(void) { return 0; }

void fn_8033441C(void* a, float* b, float* c)
{
    float t = lbl_805E4124;
    *c = t;
    *b = t;
}

void fn_8033442C(void) {}

extern const float lbl_805E4120;
extern const float lbl_805E4160;
extern u8 lbl_804E2DC0[];
extern u8 lbl_804E2D6C[];
extern u8 lbl_804E3B54[];
extern u8 lbl_804E3A98[];
extern u8 lbl_804E5614[];
extern u8 lbl_804E55E0[];

void* fn_803253A4(void* p) { return p == 0 ? (void*)lbl_804E2D6C : (void*)lbl_804E2DC0; }
void* fn_80328D10(void* p) { return p == 0 ? (void*)lbl_804E3A98 : (void*)lbl_804E3B54; }
void* fn_80334C8C(void* p) { return p == 0 ? (void*)lbl_804E55E0 : (void*)lbl_804E5614; }

void* fn_80328C54(char* p)
{
    char* e = p + *(s32*)(p + 0x3500) * 0x1a8;
    *(s32*)(p + 0x3500) = *(s32*)e;
    *(s32*)(p + 0x3504) = *(s32*)(p + 0x3504) - 1;
    return e;
}

void* fn_80334BD0(char* p)
{
    char* e = p + *(s32*)(p + 0x3a80) * 0x1d4;
    *(s32*)(p + 0x3a80) = *(s32*)e;
    *(s32*)(p + 0x3a84) = *(s32*)(p + 0x3a84) - 1;
    return e;
}

void fn_8032A590(char* p)
{
    *(s32*)(p + 0x68) = 0;
    *(s32*)(p + 0x70) = 0;
    *(float*)(p + 0x74) = lbl_805E4120;
    p[0x6c] = 0;
    p[0x6d] = 0;
    p[0x6e] = 0;
}

void fn_80331538(char* p)
{
    *(s32*)(p + 0) = 0;
    *(s32*)(p + 4) = 0;
    *(float*)(p + 0x10) = lbl_805E4120;
    *(float*)(p + 0xc) = lbl_805E4120;
    *(float*)(p + 8) = lbl_805E4120;
}

void fn_803343AC(char* p, float* q)
{
    q[0] = lbl_805E4160;
    q[1] = lbl_805E4120;
    q[2] = *(float*)(p + 0x68);
    q[3] = lbl_805E4120;
    q[4] = lbl_805E4160;
    q[5] = *(float*)(p + 0x68);
}

void fn_80328C7C(char* p, char* e)
{
    *(u32*)e = *(u32*)(p + 0x3500);
    *(u32*)(p + 0x3500) = ((u32)e - (u32)p) / 0x1a8;
    *(s32*)(p + 0x3504) = *(s32*)(p + 0x3504) + 1;
}

extern void fn_80379784();
extern void fn_803334CC();

void fn_80327600(u8* p, float* q)
{
    if (p[0x65] == 0) {
        p[0x65] = 1;
        *(float*)(p + 0x17c) = q[4];
        *(float*)(p + 0x180) = q[5];
        *(float*)(p + 0x184) = q[6];
        fn_80379784(p + 0x140, 0x80003, p + 0x17c);
    }
}

void fn_8033343C(char* p, float* q)
{
    *(float*)(p + 0x168) = q[4];
    *(float*)(p + 0x16c) = q[5];
    *(float*)(p + 0x170) = q[6];
    fn_803334CC();
}

