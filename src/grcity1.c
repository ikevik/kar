typedef unsigned char u8;
typedef unsigned long u32;

#define P(p, o) (*(void**)((u8*)(p) + (o)))
#define W(p, o) (*(u32*)((u8*)(p) + (o)))

extern void* lbl_805DD6CC;
extern char lbl_804A77F4[];
extern char lbl_804A7800[];

extern void grLoadCityEventArchive(void*);
extern int fn_800F8B74(void*, int);
extern void fn_800DB5D4(void*, void*, int);
extern void fn_800DB654(void*, void*, int);
extern void __assert(char*, int, char*);
extern char lbl_805D6368[8];
extern int lbl_804A77E4[];
extern void fn_800DBE48();
extern void fn_800DB774();
extern int fn_800DB2B8();
extern void fn_800DC630();
extern void fn_800DC1B4();
extern int fn_80261ECC();
extern void fn_800FA2A0();
extern void fn_800FA610();
extern void fn_800FE5D4();
extern void fn_80109DB4();
extern void fn_8010D228();
extern void fn_8010DB64();
extern void fn_80106824();
extern void fn_80108F10();
extern void fn_80108CE8();
extern void fn_80109138();
extern void fn_80107BFC();
extern void fn_80107D64();
extern void fn_80107ECC();
extern void fn_801043C8();

void fn_8010F114(void* a)
{
    void* r;
    void* c;
    void* t;
    u32 q;
    int k;
    c = P(a, 0x2c);
    t = P(P(c, 8), 8);
    if (t != 0) {
        q = W(t, 0);
        if (q != 0) {
            fn_800DBE48(c);
        }
    }
    k = fn_80261ECC();
    r = P(P(c, 8), 8);
    switch (k) {
    case 9:
        fn_800DB774(c, P(r, 4));
        fn_800DB774(c, P(r, 8));
        fn_800DC630(c, lbl_804A77E4[fn_800DB2B8(P(P(P(c, 8), 8), 0xc), 4)]);
        break;
    case 0x16:
        fn_800DB774(c, P(r, 8));
        fn_800DC630(c, 0xf);
        break;
    case 0x17:
        fn_800DB774(c, P(r, 4));
        fn_800DC630(c, 0x10);
        break;
    case 0x34:
        fn_800DB774(c, P(r, 4));
        fn_800DB774(c, P(r, 8));
        fn_800DC630(c, 0);
        break;
    default:
        __assert(lbl_804A77F4, 0x6a, lbl_805D6368);
        break;
    }
    fn_800DC1B4(c);
}

void grYakuUpdate(void* a)
{
    fn_800FA2A0(a, 0);
    fn_800FA610(a, 1);
    fn_800FE5D4(a, 2);
    fn_800FE5D4(a, 3);
    fn_800FE5D4(a, 4);
    fn_800FE5D4(a, 5);
    fn_800FE5D4(a, 6);
    fn_800FE5D4(a, 7);
    fn_800FE5D4(a, 8);
    fn_800FE5D4(a, 9);
    fn_800FE5D4(a, 10);
    fn_800FE5D4(a, 11);
    fn_800FE5D4(a, 12);
    fn_800FE5D4(a, 13);
    fn_800FE5D4(a, 14);
    fn_800FE5D4(a, 15);
    fn_800FE5D4(a, 16);
    fn_800FE5D4(a, 17);
    fn_80109DB4(a, 0x12);
    fn_80109DB4(a, 0x13);
    fn_8010D228(a, 0x14);
    fn_8010DB64(a, 0x15);
    fn_80106824(a, 0x16);
    fn_80106824(a, 0x17);
    fn_80108F10(a, 0x18);
    fn_80108CE8(a, 0x19);
    fn_80109138(a, 0x1a);
    fn_80107BFC(a, 0x1b);
    fn_80107D64(a, 0x1c);
    fn_80107ECC(a, 0x1d);
    fn_801043C8(a, 0x1e);
}

int fn_8010F5A4(int arg)
{
    void* p = P(P(lbl_805DD6CC, 8), 8);
    p = P(p, 0x10);
    if (p != 0) {
        return fn_800F8B74(p, arg);
    }
    return 0;
}

void fn_8010F5E8(void)
{
    fn_800DB5D4(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 0);
}

void fn_8010F61C(void)
{
    fn_800DB5D4(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 1);
}

void fn_8010F650(void)
{
    fn_800DB5D4(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 2);
}

void fn_8010F684(void)
{
    fn_800DB5D4(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 3);
}

void fn_8010F6B8(void)
{
    fn_800DB654(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 4);
}

void fn_8010F6EC(void)
{
    fn_800DB654(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 5);
}

void grSetupCityEventData(void* self)
{
    void* data;
    void* obj;
    grLoadCityEventArchive(&data);
    W(self, 0x30) = W(data, 0);
    obj = P(self, 0x40);
    W(P(obj, 0), 0x7c) = W(P(P(data, 4), 0), 0);
    W(P(obj, 0), 0x80) = W(P(P(data, 4), 0), 4);
    W(obj, 8) = W(P(data, 4), 8);
    W(obj, 0xc) = W(P(data, 4), 0xc);
}

int fn_8010F720(int v)
{
    void* c = P(P(lbl_805DD6CC, 8), 8);
    void* e;
    int i;
    if (!((int)W(P(c, 0x14), 4) > 6)) {
        __assert(lbl_804A77F4, 0x1c3, lbl_804A7800);
    }
    e = P(P(c, 0x14), 0);
    for (i = 0; i < (int)W(e, 0x34); i++) {
        if (v == ((int*)P(e, 0x30))[i]) {
            return 1;
        }
    }
    return 0;
}

typedef unsigned short u16;
typedef signed char s8;
typedef short s16;
typedef int s32;
#define M8(a) (*(u8*)(a))
#define M16(a) (*(u16*)(a))
#define M32(a) (*(u32*)(a))
#define MF(a) (*(float*)(a))
#define MS16(a) (*(s16*)(a))





