typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;

typedef struct {
    u64 a;
    u64 b;
    u64 c;
    u64 d;
    u64 e;
    u64 f;
} Ent;

extern Ent lbl_80537000[];
extern s32 lbl_805DD574;
extern u8 lbl_80496028[];
extern u8 lbl_80496034[];
extern u8 lbl_8049F608[];

extern void lbLoadArchive(s32, void*, void*, void*, ...);
extern void CSS_playerQuit();
extern void fn_8000CD10(s32);
extern void menuGetNextMenuID(s32);
extern void fn_800064F0();
extern void fn_80008220();
extern void* gmGetGlobalP();
extern void fn_8005FD38(s32);
extern void fn_8005FD9C(s32);
extern void fn_8005FA48(s32);
extern void fn_8005FAE4(s32);
extern void fn_8005FB64(s32);
extern void fn_800AEBC0();
extern void dbLoadCommon();
extern void fn_800ACF40();
extern void fn_800AD0C8();
extern void debug_openSubMenu(s32, void*, s32, s32);
extern s32 fn_800ABA6C();
extern void fn_800ABA74(s32, void*);
extern void fn_800AD1A4();

typedef struct {
    u8 pad[0x344];
    void* f344;
    void* f348;
} G;

u64 fn_8000ECD0(u8 i) { return lbl_80537000[i].a; }
u64 fn_8000ECF0(u8 i) { return lbl_80537000[i].b; }
u64 fn_8000ED10(u8 i) { return lbl_80537000[i].c; }
u64 fn_8000ED30(u8 i) { return lbl_80537000[i].e; }

s32 fn_8000FB6C(s32 a)
{
    if (a == 0) {
        CSS_playerQuit();
        fn_8000CD10(1);
        menuGetNextMenuID(2);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}

void fn_8000FBB0(void)
{
    G* g = gmGetGlobalP();
    fn_8005FD38(1);
    fn_8005FD9C(1);
    fn_8005FA48(0xff);
    fn_8005FAE4(0xff);
    fn_8005FB64(0xff);
    fn_800AEBC0();
    g->f344 = lbl_8049F608;
    g->f348 = fn_8000FB6C;
    dbLoadCommon();
    fn_800ACF40();
    fn_800AD0C8();
    debug_openSubMenu(0, g->f344, 10, 10);
    fn_800ABA74(fn_800ABA6C(), g->f348);
}

void fn_8000FC4C(void)
{
    gmGetGlobalP();
    fn_800AD1A4();
}

void gmLoadData(void)
{
    lbLoadArchive(0, lbl_80496028, &lbl_805DD574, lbl_80496034, 0);
}

s32 fn_8000FCB0(void) { return lbl_805DD574; }
