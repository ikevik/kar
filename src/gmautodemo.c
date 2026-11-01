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
#define MD(a) (*(double*)(a))
float __fabsf(float);
extern u8 lbl_8049F608[];
u32 fn_8000FB6C(u32);
extern u8 lbl_80496028[];
extern u8 lbl_80496034[];
extern u32 lbl_805DD574;
void CSS_playerQuit();
void fn_8000CD10();
void menuGetNextMenuID();
void fn_800064F0();
void fn_80008220();
u32 gmGetGlobalP();
void fn_8005FD38();
void fn_8005FD9C();
void fn_8005FA48();
void fn_8005FAE4();
void fn_8005FB64();
void fn_800AEBC0();
void dbLoadCommon();
void fn_800ACF40();
void fn_800AD0C8();
void debug_openSubMenu();
u32 fn_800ABA6C();
void fn_800ABA74();
void fn_800AD1A4();
void lbLoadArchive(u32, ...);
typedef unsigned long long u64;
typedef struct {
    u64 a;
    u64 b;
    u64 c;
    u64 d;
    u64 e;
    u64 f;
} Ent;
typedef struct {
    u8 pad[0x344];
    void* f344;
    void* f348;
} G;
extern Ent lbl_80537000[];

u32 fn_8000FB6C(u32 p3) {
    if ((s32)p3 == (s32)0) {
        CSS_playerQuit();
        fn_8000CD10(1);
        menuGetNextMenuID(2);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

void fn_8000FBB0(void) {
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c11;
    c0 = gmGetGlobalP();
    fn_8005FD38(1);
    fn_8005FD9C(1);
    fn_8005FA48(255);
    fn_8005FAE4(255);
    fn_8005FB64(255);
    fn_800AEBC0();
    M32(((u32)c0+836)) = (u32)lbl_8049F608;
    M32(((u32)c0+840)) = (u32)fn_8000FB6C;
    dbLoadCommon();
    fn_800ACF40();
    fn_800AD0C8();
    v1 = M32(((u32)c0+836));
    debug_openSubMenu(0, v1, 10, 10);
    c11 = fn_800ABA6C();
    v2 = M32(((u32)c0+840));
    fn_800ABA74(c11, v2);
}

void fn_8000FC4C(void) {
    gmGetGlobalP();
    fn_800AD1A4();
}

void gmLoadData(void) {
    lbLoadArchive(0, (u32)lbl_80496028, (u32)&lbl_805DD574, (u32)lbl_80496034, 0);
}

u32 fn_8000FCB0(void) {
    u32 v1;
    v1 = lbl_805DD574;
    return v1;
}

u64 fn_8000ECD0(u8 i) { return lbl_80537000[i].a; }

u64 fn_8000ECF0(u8 i) { return lbl_80537000[i].b; }

u64 fn_8000ED10(u8 i) { return lbl_80537000[i].c; }

u64 fn_8000ED30(u8 i) { return lbl_80537000[i].e; }
