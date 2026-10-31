typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

typedef struct {
    u8 r, g, b, a;
} Col;

typedef struct {
    u8 p[0x3c];
    void* f3c;
    void* f40;
    void* f44;
} CI;

extern void hsdInitClassInfo(void*, void*, void*, void*, s32, s32);
typedef struct {
    u8 p0[0x30];
    u8 m30[0x54];
    u8 m84[0x54];
    u8 md8[0x48];
    u8 m120[0x4c];
    u8 m16c[0x18];
    u8 m184[0x124];
    u8 m2a8[0x10];
    u8 m2b8[0x10];
} D;
extern D lbl_804F43D0;
extern u8 lbl_80502AC0[];
extern u8 lbl_80503488[];
extern u8 hsdDObj[];
extern s32 lbl_805DDC80;
extern Col lbl_805DDC84;
extern void fn_80382E10();
extern void fn_80383C98();
extern void fn_80383CE0();
extern void HSD_DObjDisp();
extern void fn_8040AD74();
extern void HSD_DObjSetDefaultClass();
extern void fn_803F9FA4();
extern void HSD_PObjSetDefaultClass();
extern void fn_8038397C(Col*, void*);

#if 0 /* base address kept in r31 in target */
void fn_80383458(void)
{
    D* d = &lbl_804F43D0;
        hsdInitClassInfo(d->m84, lbl_80502AC0, d->m16c, d->m184, 0x54, 0x20);
    ((CI*)d->m84)->f3c = fn_80382E10;
}

#endif

void fn_803834B4(void)
{
    switch (lbl_805DDC80) {
    case 2:
    case 3:
        fn_80383C98();
        break;
    default:
        HSD_DObjDisp();
        break;
    }
}

#if 0
void fn_803834F4(void)
{
    D* d = &lbl_804F43D0;
        hsdInitClassInfo(d->md8, hsdDObj, d->m16c, d->m2a8, 0x48, 0x18);
    ((CI*)d->md8)->f3c = fn_803834B4;
}

void fn_80383550(void)
{
    D* d = &lbl_804F43D0;
        hsdInitClassInfo(d->m120, lbl_80503488, d->m16c, d->m2b8, 0x4c, 0x1c);
    ((CI*)d->m120)->f44 = fn_80383CE0;
}

void fn_803835AC(void)
{
    D* d = &lbl_804F43D0;
    fn_8040AD74(d->m30);
    HSD_DObjSetDefaultClass(d->md8);
    fn_803F9FA4(d->m84);
    HSD_PObjSetDefaultClass(d->m120);
}

#endif

void fn_803835F8(void)
{
    D* d = &lbl_804F43D0;
    fn_8040AD74(0);
    HSD_DObjSetDefaultClass(0);
    fn_803F9FA4(0);
    HSD_PObjSetDefaultClass(0);
}

typedef struct {
    u8 pad[0xc];
    s32 kind;
    Col c0;
    u8 c1[4];
} P;

void fn_80383634(P* p)
{
    lbl_805DDC80 = p->kind;
    switch (p->kind) {
    case 2:
    case 3:
        lbl_805DDC84.r = p->c0.r;
        lbl_805DDC84.g = p->c0.g;
        lbl_805DDC84.b = p->c0.b;
        lbl_805DDC84.a = p->c0.a;
        break;
    case 1:
    case 4: {
        Col t;
        fn_8038397C(&t, p->c1);
        lbl_805DDC84.r = t.r;
        lbl_805DDC84.g = t.g;
        lbl_805DDC84.b = t.b;
        lbl_805DDC84.a = t.a;
        break;
    }
    }
}
