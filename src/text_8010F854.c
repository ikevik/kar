typedef unsigned char u8;
typedef unsigned long u32;
typedef struct { float a, b; } F2;
typedef struct { float x, y, z; } V3;

#define P(p, o) (*(void**)((u8*)(p) + (o)))
#define W(p, o) (*(u32*)((u8*)(p) + (o)))

extern void* lbl_805DD6CC;
extern char lbl_805D6370[8];
extern char lbl_805D6380[8];
extern void* lbl_805DD72C;
extern void* lbl_805DD728;
extern void* lbl_805DD730;
extern void* lbl_805DD734;
extern void* lbl_805DD738;
extern void* lbl_805DD740;
extern void* lbl_805DD748;
extern char lbl_80557838[];
extern const float lbl_805DFB30;

typedef struct { u8 pad[0x18]; void* f; u8 pad2[0x48-0x1c]; } Ent48;
typedef struct { u8 pad[0x200]; Ent48 a[4]; } G48;
static inline void* entf(int i){ int o = i * 0x48; u8* b = lbl_805DD6CC; b += o; return P(b, 0x218); }
#define ent(i) entf(i)
extern void fn_800E85A8();
extern void fn_800FCD44();
extern void fn_800FD890();
extern void fn_800FDF6C();
extern void fn_800FE2DC();
extern int fn_80261ECC();
extern void fn_80102B28();
extern void fn_800EEB9C();
extern void fn_8007A958();
extern void fn_800FB5D0();
extern void fn_80106658();
extern void fn_800ED784();
extern void fn_800ED800();
extern void fn_80254188();
extern void HSD_ObjFree();
extern void fn_801116D4();
extern void fn_80114154();

extern char lbl_804A7984[];
extern char lbl_804A7A48[];
extern signed char lbl_805578B8[];
extern void* lbl_805DD750;
extern int lbl_805DD638;
extern void* fn_800EE73C();
extern u32 fn_800EE6CC();
extern u32 fn_800EE6C4();
extern void* fn_800EE708();
extern void* fn_800EE6EC();
extern void fn_80236C40(void*, ...);
extern void fn_8010FBFC();
extern void fn_8010A774();
extern int fn_8010AAC4();
extern void fn_80254238();
extern void fn_80254290();
extern void fn_802542AC();
extern void fn_802542C0();
extern void fn_8025421C();
extern void fn_802541A4(float, float, float, float, float);
extern void fn_801DFC64(float, float, float);
extern int fn_801DFDF8();
extern int fn_801DFE84();
extern void fn_80114010();
extern void fn_801140E4();
extern void fn_8010D770();
extern void fn_80072C90();
extern void* fn_800EE770();
extern int fn_800EE8C4();
extern void fn_8022D5C8();
extern int plGetPlayerKind();
extern void fn_801126F4();
extern signed char menu_getCurrentMenuID();
extern signed char fn_8003D5F0();
extern void fn_80118EF0();
extern void fn_80118F20();
extern int fn_800098C0();
extern void fn_8011C864();
extern void fn_8011CFF0();
extern void fn_80126B54();
extern signed char getTrialFlag();
extern signed char fn_8000AD48();
extern signed char fn_80009888();
extern void fn_80128448();
extern void fn_8012993C();
extern void fn_80128A68();
extern void fn_80129034();
extern void fn_801294A8();
extern void fn_80129A14();
extern void fn_801310C4();
extern void fn_8012BAE0();
extern void fn_8012C908();
extern void fn_8012EF08();
extern void fn_8012F338();
extern void fn_8012F800();
extern void fn_8012FAF0();
extern void fn_8012FFF4();
extern void fn_8013065C();
extern void fn_8010A5DC();

extern int lbl_805DD770, lbl_805DD76C, lbl_805DD768, lbl_805DD764, lbl_805DD760, lbl_805DD75C;
extern char lbl_805586FC[];
extern u8 lbl_804A7B84[];
extern const float lbl_805DFB48, lbl_805DFB58, lbl_805DFB5C, lbl_805DFB60;
extern void stadiumPrediction();
extern void fn_80128108();
extern void fn_80124F9C();
extern void fn_80128170();
extern void fn_80125004();
extern void fn_801218A4();
extern void fn_801217AC();
extern void fn_801216B4();
extern void fn_801221C8();
extern void fn_8042A258();
extern void fn_80409250(void*, float);
extern void fn_800550BC(void*, float, int);
extern void fn_8040A64C(void*);
extern void fn_80055ACC(void*, float);
extern void fn_80055AA8(void*, float);
extern signed char getPlayerCount();
extern void func_80428F64();
extern int fn_80112B20();
extern int HSD_CObjSetCurrent();
extern void HSD_GObj_DispatchGXLink();
extern void HSD_CObjEndCurrent();
extern void fn_8012B580();
typedef struct { u8 pad[8]; unsigned a : 6; unsigned f : 1; unsigned g : 1; } Flg;

extern char lbl_805D6378[8];
extern u8 lbl_80557820[];
extern int lbl_805DD718, lbl_805DD71C, lbl_805DD720, lbl_805DD724;
extern char lbl_804A78B4[];
extern char lbl_804A7A20[];
extern char lbl_804A7A34[];
extern void* plinklow_gobjs;
extern void __assert(char*, int, char*);
extern void fn_800DB774();
extern void fn_80254144();
extern void fn_80254158();
extern void fn_80254174();
extern int HSD_Randi();
extern void HSD_ObjAllocInit();
extern void* HSD_ObjAlloc();
extern void fn_801106F4();
extern void fn_8022D620();
extern u32 fn_800F7E70();
extern void fn_800FAA98(void*, void*, int, float);
extern void* fn_8011120C();
extern int fn_800F7A64();
extern void fn_801018F8();
extern void* fn_8010181C();
extern void fn_800F7D64(void*, float);
extern void fn_8022C568();
extern float fn_803D22F4();
extern int fn_800F7AB8();
extern void fn_80101A00();
extern void fn_80101B34();
extern void fn_8010A8D4();
extern void fn_800D11FC();
extern void fn_8010D6C0();
extern void fn_800D4BF4();
extern void fn_8011DB80();
extern void fn_8011D144();
extern void fn_8011E384();
extern void fn_80124810();
extern void fn_8012509C();
extern void fn_8012535C();
extern void fn_80112464();
extern void fn_8011DB3C();
extern void fn_8011D114();
extern void fn_8011E354();
extern void drawHUD_renderMap();
extern void fn_8012506C();
extern void fn_8012532C();
extern void fn_800EE660();


void fn_8010F854(void* a)
{
    fn_800E85A8(P(a, 0x2c), lbl_805D6370, 2);
}

void fn_8010F880(void* a)
{
    fn_800FCD44(a, 0);
    fn_800FCD44(a, 1);
}

void fn_8010F8BC(void* a, int i)
{
    fn_800FD890(ent(i));
}

void fn_8010F8EC(void* a, int i)
{
    fn_800FD890(ent(i));
}

void fn_8010F91C(void) {}
void fn_8010F920(void) {}
void fn_8010F924(void) {}
void fn_8010F928(void) {}
void fn_8010FAA8(void) {}
void fn_8010FAAC(void) {}
void fn_8010FAB0(void) {}
void fn_8010FAB4(void) {}
void fn_8010FADC(void) {}
void fn_8010FB84(void) {}
void fn_8010FB88(void) {}
void fn_8010FB8C(void) {}
void fn_8010FB90(void) {}
void fn_801100E4(void) {}
void fn_80110148(void) {}
void fn_8011014C(void) {}
void fn_80110150(void) {}
void fn_80110444(void) {}
void fn_80110634(void) {}
void fn_80110F34(void) {}

void fn_8010FAB8(void* a)
{
    fn_800EEB9C(P(a, 0x2c));
}

void fn_8010FAE0(void* a)
{
    fn_800E85A8(P(a, 0x2c), lbl_805D6380, 1);
}

void fn_8010FB0C(void* a)
{
    fn_800FCD44(a, 0);
    fn_800FCD44(a, 1);
    fn_800FDF6C(a, 2);
}

void fn_8010FB54(void* a, int i)
{
    fn_800FE2DC(ent(i));
}

void fn_8010FB94(void* a)
{
    void* p = P(P(a, 0x2c), 8);
    p = P(p, 8);
    fn_8007A958(p);
    fn_8007A958((u8*)p + 0x50);
}

void fn_8010FBD4(void* a)
{
    fn_800FB5D0(a, 0, 1);
}

void fn_801100E8(void* a, int i)
{
    fn_800FD890(ent(i));
}

void fn_80110118(void* a, int i)
{
    fn_800FD890(ent(i));
}

void fn_80110154(void* a, int i)
{
    fn_80106658(ent(i));
}

void event_tac_start(void)
{
    lbl_805DD72C = 0;
    lbl_805DD728 = 0;
    fn_800ED784(1);
}

void fn_80110638(void)
{
    lbl_805DD72C = 0;
    lbl_805DD728 = 0;
    fn_800ED800(1);
}

void fn_801116B4(void)
{
    fn_801116D4();
}

#pragma dont_inline on
void fn_801116D4(void* a)
{
    lbl_805DD740 = 0;
    fn_80114154();
    fn_800EE660(a);
}
#pragma dont_inline off

void fn_8010FA0C(void* a)
{
    if (fn_80261ECC() == 0x13) {
        fn_80102B28(a, 0);
        fn_80102B28(a, 1);
    }
}

void fn_8010FA58(void* a)
{
    void* c = P(a, 0x2c);
    void* t = P(P(c, 8), 8);
    fn_80236C40(a, 0x9C47, 4, 0xcf, ((void**)P(c, 0x104))[(int)W(t, 0) * 2]);
}

void fn_8010FE9C(void* a)
{
    void* e = P(a, 0x2c);
    W(e, 0x728) = 0;
    W(e, 0x72c) = 0;
    W(e, 0x730) = 0;
    W(e, 0x734) = 0;
    W(e, 0x738) = 0;
    W(e, 0x73c) = 0;
    W(e, 0x740) = 0;
    W(e, 0x744) = 0;
    W(e, 0x748) = 0;
    fn_800E85A8(e, lbl_804A7984, 6);
    fn_8010FBFC(a);
}

void fn_80110668(int i, float* out)
{
    u8* e;
    int o;
    if (lbl_805DD730 == 0) return;
    if (lbl_805DD734 == 0) return;
    o = i * 8;
    e = P(lbl_805DD734, 4);
    e += o;
    *out = lbl_805DFB30 * *(float*)(e + 4);
}

void fn_801106A0(int i, float* x, float* y, float* z)
{
    int o;
    u32 b;
    void* l;
    if (lbl_805DD730 == 0) return;
    l = lbl_805DD734;
    if (l == 0) return;
    o = i * 12;
    *x = *(float*)(W(l, 0xc) + o);
    b = W(lbl_805DD734, 0xc);
    b += o;
    *y = *(float*)(b + 4);
    b = W(lbl_805DD734, 0xc);
    b += o;
    *z = *(float*)(b + 8);
}

void fn_80110F38(void)
{
    void* t = lbl_805DD730;
    if (t != 0) {
        HSD_ObjFree(lbl_80557838, t);
    }
    lbl_805DD730 = 0;
    lbl_805DD734 = 0;
    lbl_805DD738 = 0;
    fn_80254188();
    fn_800ED800(2);
}

void fn_80110F88(void* a)
{
    u32 v;
    int i;
    v = fn_800EE6CC(a);
    for (i = 0; i < 5; i++) {
        int k = plGetPlayerKind(i);
        if (k == 0 || k == 1) {
            fn_8022D5C8(i, v);
        }
    }
}

void fn_80111710(void* a)
{
    fn_800EE73C(a);
    fn_800ED800(3);
}

void fn_80111738(void* a)
{
    void* p = fn_800EE73C(a);
    void* q = fn_800EE708(a);
    fn_8010A5DC(P(p, 0), fn_800EE6EC(a), q);
}

void fn_8011179C(void* a)
{
    u32 n = fn_800EE6CC(a);
    if (fn_800EE6C4(a) >= n) {
        fn_8010A774();
        fn_800EE660(a);
    }
}

void fn_80111884(void* a)
{
    u32 n = fn_800EE6CC(a);
    if (fn_800EE6C4(a) >= n) {
        fn_800EE660(a);
        fn_80114154();
    }
}

void fn_801118DC(void* a)
{
    u32 n = fn_800EE6CC(a);
    if (fn_800EE6C4(a) >= n) {
        fn_800EE660(a);
    }
}

void fn_80111934(void* a)
{
    lbl_805DD748 = (void*)fn_8010AAC4(P(fn_800EE73C(a), 0));
    fn_800ED784(0xc);
}

void fn_8011196C(void* a)
{
    void* p = fn_800EE770(a);
    void* c = P(p, 0x2c);
    lbl_805DD748 = 0;
    fn_800EE660(c);
    fn_800ED800(0xc);
}

void* fn_801119A4(void* a)
{
    if (fn_800EE8C4(a) == 0xc) {
        return lbl_805DD748;
    }
    return 0;
}

void fn_801119D8(void* a)
{
    fn_800EE73C(a);
    fn_80254238();
    fn_800ED784(0xf);
}

void fn_80111A04(void* a)
{
    u32 n = fn_800EE6CC(a);
    if (fn_800EE6C4(a) >= n) {
        fn_80254290();
        fn_800ED800(0xf);
        fn_800EE660(a);
    }
}

void fn_80111B9C(void)
{
    fn_802542AC();
    fn_800ED784(7);
}

void fn_80111BC4(void* a)
{
    u32 n = fn_800EE6CC(a);
    if (fn_800EE6C4(a) >= n) {
        fn_802542C0();
        fn_800ED800(7);
        fn_800EE660(a);
    }
}

void fn_80111C20(void* a)
{
    float* p = P(fn_800EE73C(a), 0);
    fn_802541A4(p[0], p[1], p[2], p[3], p[4]);
    fn_800ED784(0xd);
}

void fn_80111C64(void* a)
{
    u32 n = fn_800EE6CC(a);
    if (fn_800EE6C4(a) >= n) {
        fn_8025421C();
        fn_800ED800(0xd);
        fn_800EE660(a);
    }
}

void fn_80111CC0(void* a)
{
    u8 buf[12];
    float* p = P(fn_800EE73C(a), 0);
    fn_801DFC64(p[0], p[1], p[2]);
    if (fn_801DFDF8(buf)) {
        fn_80114010(buf);
    }
}

void fn_80111D0C(void* a)
{
    u8 buf[12];
    if (fn_801DFE84()) {
        fn_800EE660(a);
        fn_80114154();
    } else if (fn_801DFDF8(buf)) {
        fn_801140E4(buf);
    }
}

void fn_80111FB0(void* a)
{
    u32 n;
    fn_800EE73C(a);
    n = fn_800EE6CC(a);
    if (n - fn_800EE6C4(a) == 0) {
        fn_8010D770(lbl_805DD750);
    }
}

void fn_80112008(void* a)
{
    lbl_805DD750 = 0;
    fn_80114154();
    fn_800EE660(a);
}

void fn_80112060(void)
{
    fn_80072C90(2, lbl_804A7A48, 3, 3, 0, 1, 1, 0x40, 0);
}

void fn_80112984(void)
{
    fn_801126F4();
    if (menu_getCurrentMenuID() == 4 && fn_8003D5F0() == 2) {
        fn_80118EF0();
    } else if (menu_getCurrentMenuID() == 4 && fn_8003D5F0() == 1) {
        fn_80118EF0();
    } else {
        fn_80118F20();
    }
}

void THPSimpleAudioStop(void)
{
    lbl_805578B8[5] = 1;
}

void THPSimpleAudioStop2(void)
{
    lbl_805578B8[5] = 0;
}

#pragma dont_inline on
int fn_80112B20(void)
{
    return lbl_805578B8[5];
}
#pragma dont_inline off

void fn_801136A8(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        signed char c = b[p + 1];
        if (c != -1) {
            fn_8011C864(c, p, 0);
        }
    }
}

void fn_801138D4(void)
{
    fn_8011CFF0();
}

void fn_801138F4(void)
{
    fn_80126B54();
}

void fn_80113A24(void)
{
    if (lbl_805DD638) {
        fn_80128448();
    } else if (getTrialFlag() == 0 && fn_8000AD48() == 0) {
        if (fn_8003D5F0() == 2) {
            fn_8012993C();
        } else {
            fn_80128448();
        }
    } else {
        fn_80128A68();
        fn_80129034();
        fn_801294A8();
    }
}

void fn_80113A98(void)
{
    int i;
    fn_80129A14();
    for (i = 0; i < 4; i++) {
        fn_80009888(i);
    }
}

void fn_80113AD8(void)
{
    int i;
    for (i = 0; i < 4; i++) {
        if (fn_80009888(i) != 4) {
            fn_80009888(i);
        }
    }
}

void fn_80113BE0(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        fn_801310C4(b[p + 1], p);
    }
}

void fn_80113CA8(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        fn_8012EF08(b[p + 1], p);
    }
}

void fn_80113D00(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        fn_8012F338(b[p + 1], p);
    }
}

void fn_80113D58(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        fn_8012F800(b[p + 1], p);
    }
}

void fn_80113DB0(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        fn_8012FAF0(b[p + 1], p);
    }
}

void fn_80113E08(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        fn_8012FFF4(b[p + 1], p);
    }
}

void fn_80113E60(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        fn_8013065C(b[p + 1], p);
    }
}

void fn_80113C38(int p)
{
    fn_8012BAE0(lbl_805578B8[p + 1], p);
}

void fn_80113C70(int p)
{
    fn_8012C908(lbl_805578B8[p + 1], p);
}

void* fn_80112044(void)
{
    return lbl_805578B8;
}

void* fn_80112050(void) { return &lbl_805DD770; }
void* fn_80112058(void) { return &lbl_805DD76C; }
void* fn_80112444(void) { return &lbl_805DD768; }
void* fn_8011244C(void) { return &lbl_805DD764; }
void* fn_80112454(void) { return &lbl_805DD760; }
void* fn_8011245C(void) { return &lbl_805DD75C; }

void fn_80113EB8(int p)
{
    signed char* b = lbl_805578B8;
    if (fn_800098C0(p)) {
        fn_8012B580(b[p + 1], p);
    }
}

void fn_80113FB4(void* a, void* b)
{
    if (getTrialFlag() != 0 || fn_8000AD48() != 0) {
        stadiumPrediction(a, b, 1);
    }
}

void fn_801140E4(void* a)
{
    if (getTrialFlag() != 0 || fn_8000AD48() != 0) {
        int i;
        for (i = 0; i < 4; i++) {
            fn_80128108(i, a);
        }
        fn_80124F9C(0, a);
    }
}

void fn_80114154(void)
{
    fn_80128170();
    fn_80125004();
}

void fn_80114524(void) { fn_801218A4(); }
void fn_80114544(void) { fn_801217AC(); }
void fn_80114564(void) { fn_801216B4(); }
void fn_80114584(void) { fn_801221C8(); }

void fn_80114EEC(void* a)
{
    ((Flg*)P(a, 0x2c))->f = 1;
}

void fn_80114F04(void* a)
{
    ((Flg*)P(a, 0x2c))->f = 0;
}

void fn_8011500C(void* a)
{
    Flg* c = P(a, 0x2c);
    if (c->f) {
        fn_8042A258();
    }
}

void fn_8011503C(void* a, int i)
{
    fn_80409250(a, (float)i);
    fn_800550BC(a, lbl_805DFB48, 0xffff);
    fn_8040A64C(a);
}

void fn_801150A0(void* a, float f, int i)
{
    fn_80055ACC(a, (float)i);
    fn_800550BC(a, f, 0x400);
    fn_8040A64C(a);
}

void fn_80115114(void* a, int i)
{
    fn_80055ACC(a, (float)i);
    fn_800550BC(a, lbl_805DFB48, 0x400);
    fn_8040A64C(a);
}

void fn_80115174(void* a, float f, int i)
{
    fn_80055AA8(a, (float)i);
    fn_800550BC(a, f, 0x80);
    fn_8040A64C(a);
}

void fn_801151E8(void* x)
{
    HSD_ObjFree(lbl_805586FC, x);
}

float fn_80115214(void)
{
    if (getPlayerCount() <= 1) {
        return lbl_805DFB58;
    } else if (getPlayerCount() == 2) {
        return lbl_805DFB5C;
    }
    return lbl_805DFB60;
}

void fn_80115264(void* a)
{
    void* c = P(a, 0x2c);
    float v;
    *(float*)((u8*)c + 0xc) = lbl_805DFB58;
    if (getPlayerCount() <= 1) {
        v = lbl_805DFB58;
    } else if (getPlayerCount() == 2) {
        v = lbl_805DFB5C;
    } else {
        v = lbl_805DFB60;
    }
    *(float*)((u8*)c + 0x10) = v;
}

void fn_8011582C(void)
{
    func_80428F64();
}

u8 fn_8011584C(signed char a, signed char b)
{
    return lbl_804A7B84[a * 12 + b];
}

void fn_8011586C(void* a)
{
    if (fn_80112B20()) {
        if (HSD_CObjSetCurrent(P(a, 0x28))) {
            HSD_GObj_DispatchGXLink(a, 7);
            HSD_CObjEndCurrent();
        }
    }
}

void fn_8011596C(void* a)
{
    if (fn_80112B20()) {
        if (HSD_CObjSetCurrent(P(a, 0x28))) {
            HSD_GObj_DispatchGXLink(a, 7);
            HSD_CObjEndCurrent();
        }
    }
}

void fn_8010F92C(void* a)
{
    int i;
    void* t;
    void* c = P(a, 0x2c);
    t = P(P(c, 8), 8);
    switch (fn_80261ECC()) {
    case 0x13:
        for (i = 0; i < (int)W(t, 0xc); i++) {
            fn_800DB774(c, ((void**)P(t, 8))[i]);
        }
        break;
    case 0x21:
        for (i = 0; i < (int)W(t, 4); i++) {
            fn_800DB774(c, ((void**)P(t, 0))[i]);
        }
        break;
    default:
        __assert(lbl_804A78B4, 0x43, lbl_805D6378);
        break;
    }
}

void event_dynablade_start(void* a)
{
    int i;
    int n;
    lbl_805DD720 = 0;
    lbl_805DD718 = 0;
    lbl_805DD71C = 0;
    lbl_805DD724 = 0;
    fn_80254144();
    fn_800ED784(0);
    for (i = 0; i < 20; i++) {
        lbl_80557820[i] = i + (int)fn_800EE6EC(a);
    }
    n = (int)fn_800EE708(a);
    for (i = n - 1; i > 1; i--) {
        int j = HSD_Randi(i + 1);
        u8 t = lbl_80557820[i];
        lbl_80557820[i] = lbl_80557820[j];
        lbl_80557820[j] = t;
    }
}

void event_dynablade_end2(void* a)
{
    int i;
    lbl_805DD720 = 0;
    lbl_805DD718 = 0;
    lbl_805DD71C = 0;
    lbl_805DD724 = 0;
    fn_80254158();
    fn_800ED800(0);
    for (i = 0; i < 20; i++) {
        lbl_80557820[i] = i + (int)fn_800EE6EC(a);
    }
}

void fn_80110B74(void* a)
{
    HSD_ObjAllocInit(lbl_80557838, 0x218, 4);
    lbl_805DD730 = HSD_ObjAlloc(lbl_80557838);
    if (lbl_805DD730 != 0 && (lbl_805DD734 = fn_800EE73C(a)) != 0) {
        fn_801106F4(a);
        fn_80254174();
        fn_800ED784(2);
        lbl_805DD738 = 0;
    } else {
        lbl_805DD730 = 0;
        lbl_805DD734 = 0;
        lbl_805DD738 = 0;
    }
}

void fn_80110FF0(void* a)
{
    u32 n = fn_800EE6CC(a);
    if (fn_800EE6C4(a) >= n) {
        int i;
        for (i = 0; i < 5; i++) {
            int k = plGetPlayerKind(i);
            if (k == 0 || k == 1) {
                fn_8022D620(i);
            }
        }
        fn_800EE660(a);
    }
}

void fn_80111078(void* a)
{
    void* p = fn_800EE73C(a);
    int q = (int)fn_800EE6EC(a);
    int n = (int)fn_800EE708(a);
    int i;
    u32 mask = fn_800F7E70(n, P(p, 4));
    for (i = 0; i < n; i++, mask >>= 1) {
        if (mask & 1) {
            fn_800FAA98(a, P(p, 0), q + i, ((float*)P(p, 8))[i]);
        }
    }
    fn_800EE660(a);
}

void fn_8011111C(void* a)
{
    u8 b1[12];
    u8 b2[12];
    u8 b3[12];
    void* p = fn_800EE73C(a);
    void* g;
    void* r;
    fn_800EE708(a);
    r = fn_8011120C(a, b1, b2, b3);
    lbl_805DD740 = 0;
    for (g = P(plinklow_gobjs, 0x20); g != 0; g = P(g, 0xc)) {
        if (fn_800F7A64(g) == 0x28) {
            lbl_805DD740 = g;
            break;
        }
    }
    if (lbl_805DD740 != 0) {
        fn_801018F8(g, a, r);
    } else {
        lbl_805DD740 = fn_8010181C(a, P(p, 0), r);
    }
    fn_800F7D64(b1, *(float*)((u8*)p + 0xc));
    fn_80114010(b1);
    fn_800ED784(3);
}

int fn_80111574(void* a, float f)
{
    u8 buf[12];
    int i;
    for (i = 0; i < 5; i++) {
        int k = plGetPlayerKind(i);
        if (k == 0 || k == 1) {
            fn_8022C568(i, buf);
            if (fn_803D22F4(a, buf) < f) {
                return 0;
            }
        }
    }
    return 1;
}

void fn_80111604(void* a)
{
    if (lbl_805DD740 != 0) {
        void* p = fn_800EE73C(a);
        u32 n = fn_800EE6CC(a);
        u32 d = n - fn_800EE6C4(a);
        if (d != 0) {
            if (d <= W(p, 4)) {
                if (fn_800F7AB8(lbl_805DD740) != 3) {
                    fn_80101A00(lbl_805DD740);
                }
            }
        } else if (fn_800F7AB8(lbl_805DD740) == 3) {
            fn_80101B34(lbl_805DD740);
            fn_801116D4(a);
        }
    }
}

void fn_801117F0(void* a)
{
    u8 b1[12];
    u8 b2[12];
    u8 b3[12];
    void* q;
    void* p;
    void* g;
    g = lbl_805DD6CC;
    p = fn_800EE73C(a);
    q = fn_800EE708(a);
    fn_8010A8D4(P(g, 0), P(p, 0), fn_800EE6EC(a), q);
    fn_800D11FC(fn_800EE6EC(a), b1, b2, b3);
    fn_80114010(b1);
}

void fn_80111F00(void* a)
{
    u8 buf[12];
    void* p = fn_800EE73C(a);
    lbl_805DD750 = P(plinklow_gobjs, 0x20);
    while (lbl_805DD750 != 0) {
        if (fn_800F7A64(lbl_805DD750) == 0x44) {
            break;
        }
        lbl_805DD750 = P(lbl_805DD750, 0xc);
    }
    if (lbl_805DD750 == 0) {
        __assert(lbl_804A7A20, 0x31, lbl_804A7A34);
    }
    fn_8010D6C0(lbl_805DD750, a);
    fn_800D4BF4(P(p, 0), buf);
    fn_80114010(buf);
}

void fn_801129F8(void)
{
    int i;
    signed char c;
    fn_801126F4();
    c = lbl_805578B8[0];
    if (c <= 1 || (c == 4 && getPlayerCount() == 3)) {
        for (i = 0; i < 5; i++) {
            fn_8011DB80(i);
        }
        fn_8011D144();
        fn_8011E384();
        fn_80124810();
        fn_8012509C();
        fn_8012535C();
    }
}

void fn_80112A78(void)
{
    int i;
    signed char c;
    fn_80112464();
    c = lbl_805578B8[0];
    if (c <= 1 || (c == 4 && getPlayerCount() == 3)) {
        for (i = 0; i < 5; i++) {
            fn_8011DB3C(i);
        }
        fn_8011D114();
        fn_8011E354();
        drawHUD_renderMap();
        fn_8012506C();
        fn_8012532C();
    }
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
typedef struct { u8 :7; u8 f:1; } BFu8_7_1;
typedef struct { u8 :6; u8 f:1; } BFu8_6_1;
typedef struct { u8 :5; u8 f:3; } BFu8_5_3;
typedef struct { u8 :5; u8 f:1; } BFu8_5_1;
typedef struct { u8 :4; u8 f:1; } BFu8_4_1;
typedef struct { u8 :3; u8 f:1; } BFu8_3_1;
typedef struct { u8 f:5; } BFu8_0_5;
typedef struct { u8 f:4; } BFu8_0_4;
typedef struct { u8 f:3; } BFu8_0_3;
typedef struct { u32 :15; u32 f:7; } BFu32_15_7;
typedef struct { u16 :6; u16 f:8; } BFu16_6_8;
extern u8 lbl_805DE351;
void fn_800F9D80(u32, u32);
void fn_800FA2A0(u32, u32);
void fn_800FA610(u32, u32);
void fn_800FA708(u32, u32);
void fn_800FB378(u32, u32);
void fn_800FBF60(u32, u32);
void fn_800FE5D4(u32, u32);
void fn_800FED20(u32, u32);
void fn_80102C40(u32, u32);
void fn_80103654(u32, u32);
void fn_80105DB8(u32, u32);
void fn_80106144(u32, u32);
void fn_801063BC(u32, u32);
void fn_80106824(u32, u32);
void fn_801044CC(u32, u32);
void fn_8010250C(u32, u32);
void fn_80103C58(u32, u32);
void fn_80107120(u32, u32);
void fn_80107BFC(u32, u32);
void fn_80107D64(u32, u32);
void fn_80109138(u32, u32);
u32 fn_8000AE2C(void);
void fn_8011C040(u32, u32);
void fn_8011CC88(u32, u32);
void fn_80130DB8(u32, u32);
u32 fn_8000AAC4();
u32 fn_8000AF5C(void);
u32 fn_8000A97C(void);
void fn_8012A640(u32, u32, u32, u32);
void fn_801143E8(u32);
void fn_80121534();
u32 func_80428F28();
u32 HSD_JObjLoadJoint(u32);
void fn_80429C14(u32, u32, u32);
void HSD_GObj_AddGXLink(u32, u32, u32, u32);
void fn_80052FB8(u32, u32);
u32 fn_80066DF8(u32);
void fn_80429728(u32, u32, u32);
void fn_80066EE0();

void fn_8010FF08(u32 p3) {
    fn_800F9D80(p3, 0);
    fn_800FA2A0(p3, 1);
    fn_800FA2A0(p3, 2);
    fn_800FA610(p3, 3);
    fn_800FA708(p3, 4);
    fn_800FA708(p3, 5);
    fn_800FA708(p3, 6);
    fn_800FA708(p3, 7);
    fn_800FB378(p3, 8);
    fn_800FB5D0(p3, 9, 0);
    fn_800FB5D0(p3, 10, 0);
    fn_800FB5D0(p3, 11, 0);
    fn_800FB5D0(p3, 12, 0);
    fn_800FB5D0(p3, 13, 0);
    fn_800FBF60(p3, 14);
    fn_800FCD44(p3, 15);
    fn_800FCD44(p3, 16);
    fn_800FE5D4(p3, 17);
    fn_800FED20(p3, 18);
    fn_80102C40(p3, 19);
    fn_80102C40(p3, 20);
    fn_80103654(p3, 21);
    fn_80105DB8(p3, 22);
    fn_80106144(p3, 23);
    fn_801063BC(p3, 24);
    fn_80106824(p3, 25);
    fn_801044CC(p3, 26);
    fn_8010250C(p3, 27);
    fn_80103C58(p3, 28);
    fn_80107120(p3, 29);
    fn_80107120(p3, 30);
    fn_80107120(p3, 31);
    fn_80107BFC(p3, 32);
    fn_80107D64(p3, 33);
    fn_80109138(p3, 34);
}

u32 fn_801147DC(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 c0;
    u32 c1;
    c0 = func_80428F28(27, p4, 0, p6);
    c1 = HSD_JObjLoadJoint(p3);
    fn_80429C14(c0, (lbl_805DE351), c1);
    HSD_GObj_AddGXLink(c0, (u32)fn_8011500C, p5, p6);
    fn_80052FB8(c1, (10240<<16));
    return c0;
}





















void fn_80111070(void) {}

void fn_80111074(void) {}

void fn_801118D8(void) {}

void fn_8011192C(void) {}

void fn_80111930(void) {}

void fn_80111968(void) {}

void fn_80111D68(void) {}

void fn_80111D6C(void) {}

typedef struct { u32 w[3]; } S12;
void fn_8011F688(u32);

void fn_8011370C(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    u32 c1;
    u32 c2;
    u32 c3;
    s30 = p3;
    c0 = menu_getCurrentMenuID();
    if ((s32)((s8)c0) == (s32)6) {
        c1 = fn_8000AE2C();
        if ((s32)((s8)c1) == (s32)0) {
            c2 = getTrialFlag();
            if ((s32)((s8)c2) == (s32)1) {
            return;
            }
        }
    }
    v1 = M8(((u32)(u32)lbl_805578B8+1));
    if ((s32)((s8)v1) == (s32)s30) {
        s31 = 0;
    } else {
        v2 = M8(((u32)(u32)lbl_805578B8+2));
        if ((s32)((s8)v2) == (s32)s30) {
            s31 = 1;
        } else {
            v3 = M8(((u32)(u32)lbl_805578B8+3));
            if ((s32)((s8)v3) == (s32)s30) {
                s31 = 2;
            } else {
                v4 = M8(((u32)(u32)lbl_805578B8+4));
                if ((s32)((s8)v4) == (s32)s30) {
                    s31 = 3;
                } else {
                    s31 = -1;
                }
            }
        }
    }
    c3 = fn_800098C0(s31);
    if ((s32)c3 == (s32)0) {
    return;
    }
    fn_8011C040(s30, s31);
}

void fn_801137F0(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    u32 c1;
    u32 c2;
    u32 c3;
    s30 = p3;
    c0 = menu_getCurrentMenuID();
    if ((s32)((s8)c0) == (s32)6) {
        c1 = fn_8000AE2C();
        if ((s32)((s8)c1) == (s32)0) {
            c2 = getTrialFlag();
            if ((s32)((s8)c2) == (s32)1) {
            return;
            }
        }
    }
    v1 = M8(((u32)(u32)lbl_805578B8+1));
    if ((s32)((s8)v1) == (s32)s30) {
        s31 = 0;
    } else {
        v2 = M8(((u32)(u32)lbl_805578B8+2));
        if ((s32)((s8)v2) == (s32)s30) {
            s31 = 1;
        } else {
            v3 = M8(((u32)(u32)lbl_805578B8+3));
            if ((s32)((s8)v3) == (s32)s30) {
                s31 = 2;
            } else {
                v4 = M8(((u32)(u32)lbl_805578B8+4));
                if ((s32)((s8)v4) == (s32)s30) {
                    s31 = 3;
                } else {
                    s31 = -1;
                }
            }
        }
    }
    c3 = fn_800098C0(s31);
    if ((s32)c3 == (s32)0) {
    return;
    }
    fn_8011CC88(s30, s31);
}

void fn_80113B28(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s30 = p3;
    v1 = M8(((u32)(u32)lbl_805578B8+1));
    if ((s32)((s8)v1) == (s32)s30) {
        s31 = 0;
    } else {
        v2 = M8(((u32)(u32)lbl_805578B8+2));
        if ((s32)((s8)v2) == (s32)s30) {
            s31 = 1;
        } else {
            v3 = M8(((u32)(u32)lbl_805578B8+3));
            if ((s32)((s8)v3) == (s32)s30) {
                s31 = 2;
            } else {
                v4 = M8(((u32)(u32)lbl_805578B8+4));
                if ((s32)((s8)v4) == (s32)s30) {
                    s31 = 3;
                } else {
                    s31 = -1;
                }
            }
        }
    }
    c0 = fn_800098C0(s31);
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_80130DB8(s30, s31);
}

void fn_80114178(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s30 = p3;
    v1 = M8(((u32)(u32)lbl_805578B8+1));
    if ((s32)((s8)v1) == (s32)s30) {
        s31 = 0;
    } else {
        v2 = M8(((u32)(u32)lbl_805578B8+2));
        if ((s32)((s8)v2) == (s32)s30) {
            s31 = 1;
        } else {
            v3 = M8(((u32)(u32)lbl_805578B8+3));
            if ((s32)((s8)v3) == (s32)s30) {
                s31 = 2;
            } else {
                v4 = M8(((u32)(u32)lbl_805578B8+4));
                if ((s32)((s8)v4) == (s32)s30) {
                    s31 = 3;
                } else {
                    s31 = -1;
                }
            }
        }
    }
    c0 = fn_800098C0(s31);
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_8011C864(s30, s31, 1);
}

void fn_80114234(void) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    s31 = (u32)lbl_805578B8;
    s29 = 0;
    do {
        v1 = M8((s31+1));
        if ((s32)((s8)v1) == (s32)s29) {
            s30 = 0;
        } else {
            v2 = M8((s31+2));
            if ((s32)((s8)v2) == (s32)s29) {
                s30 = 1;
            } else {
                v3 = M8((s31+3));
                if ((s32)((s8)v3) == (s32)s29) {
                    s30 = 2;
                } else {
                    v4 = M8((s31+4));
                    if ((s32)((s8)v4) == (s32)s29) {
                        s30 = 3;
                    } else {
                        s30 = -1;
                    }
                }
            }
        }
        c0 = fn_800098C0(s30);
        if ((s32)c0 != (s32)0) {
            fn_8011F688(s30);
        }
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
}

void fn_801142FC(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    u32 c1;
    u32 c4;
    s30 = p3;
    v1 = M8(((u32)(u32)lbl_805578B8+1));
    if ((s32)((s8)v1) == (s32)s30) {
        s31 = 0;
    } else {
        v2 = M8(((u32)(u32)lbl_805578B8+2));
        if ((s32)((s8)v2) == (s32)s30) {
            s31 = 1;
        } else {
            v3 = M8(((u32)(u32)lbl_805578B8+3));
            if ((s32)((s8)v3) == (s32)s30) {
                s31 = 2;
            } else {
                v4 = M8(((u32)(u32)lbl_805578B8+4));
                if ((s32)((s8)v4) == (s32)s30) {
                    s31 = 3;
                } else {
                    s31 = -1;
                }
            }
        }
    }
    c0 = menu_getCurrentMenuID((u32)lbl_805578B8);
    if ((s32)((s8)c0) == (s32)4) {
        c1 = fn_8003D5F0();
        if ((s32)((s8)c1) == (s32)1) {
            fn_801143E8(s31);
            fn_80118F20();
            return;
        }
    }
    c4 = fn_800098C0(s31);
    if ((s32)c4 == (s32)0) {
    return;
    }
    fn_8011C864(s30, s31, 2);
}

u32 fn_80114904(u32 p3, u32 p4) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c1;
    s30 = p4;
    s29 = p3;
    s31 = func_80428F28(27, 26, 0);
    c1 = HSD_JObjLoadJoint(s30);
    s30 = c1;
    v1 = lbl_805DE351;
    fn_80429C14(s31, v1, s30);
    HSD_GObj_AddGXLink(s31, (u32)fn_8011500C, ((s29+22)&0xff), 1);
    fn_80052FB8(s30, (10240<<16));
    return s31;
}

u32 fn_801149A0(u32 p3, u32 p4, u32 p5) {
    u32 s30;
    u32 s29;
    u32 s31;
    u32 v1;
    u32 c2;
    s30 = p5;
    s29 = p4;
    s31 = func_80428F28(27, 26, 0);
    HSD_GObj_AddGXLink(s31, s30, 18, 1);
    if ((u32)s29 != (u32)0) {
        c2 = HSD_JObjLoadJoint(s29);
        s30 = c2;
        v1 = lbl_805DE351;
        fn_80429C14(s31, v1, s30);
        fn_80052FB8(s30, (10240<<16));
    }
    return s31;
}

void fn_80116AC0(u32);
void fn_80117B28(u32);
void fn_80118254(u32);
void fn_80119490(u32);
void fn_80119CF8(u32);
void fn_8011A138(u32);
void fn_8011A674(u32);
void fn_8011B22C(u32, u32);
void fn_8011F754(u32, u32);
void fn_8011FFFC(u32, u32);
void fn_8011B994(u32);
void fn_8011E868(u32);
void fn_8011BEA4(u32);
void fn_8011C1F8(u32);
void fn_8011C6D8(u32);
void fn_8011CB68(u32);
void fn_80121178(u32, u32);
void fn_80122CD0(u32);
void fn_80122FC8(u32);
void fn_8012358C(u32);
void fn_80125DF0(u32);
void fn_80123B38(u32);
void fn_80123EF8(u32);
void fn_801243C4(u32);
void fn_8012A3B0(u32);
void fn_80130C50(u32);
void fn_8012D3AC(u32);
void fn_801219F4(u32, u32);
void fn_80122320(void);
void fn_80126C4C(u32);
void fn_80127A4C(u32);
void fn_801265B8(u32);
void fn_801308F8(u32);
void fn_80130AA4(u32);
void fn_80130EEC(u32);
void fn_8012B798(u32);
void fn_8012C578(u32);
void fn_8012DCB0(u32);
void fn_8012EB0C(u32);
void fn_8012ECB8(u32);
void fn_8012F084(u32);
void fn_8012F4C4(u32);
void fn_8012F9AC(u32);
void fn_8012FEB0(u32);
void fn_801301D4(u32);
void fn_8012AB18(u32);
void fn_80124B28(u32);
void fn_8011CEDC(void);
void fn_80125700(void);
void fn_80126310(void);
void fn_80127624(void);
void fn_8012A02C(void);
void fn_80116B04(u32);
void fn_80117B6C(u32);
void fn_80118298(u32);
void fn_801194D4(u32);
void fn_80119D3C(u32);
void fn_8011A17C(u32);
void fn_8011A6B8(u32);
void fn_8011B284(u32, u32);
void fn_8011F7AC(u32, u32);
void fn_80120054(u32, u32);
void fn_8011B9D8(u32);
void fn_8011E8AC(u32);
void fn_8011BEE8(u32);
void fn_8011C23C(u32);
void fn_8011C71C(u32);
void fn_8011CBAC(u32);
void fn_801211D0(u32, u32);
void fn_80122D14(u32);
void fn_8012300C(u32);
void fn_801235D0(u32);
void fn_80125E34(u32);
void fn_80123B7C(u32);
void fn_80123F3C(u32);
void fn_80124408(u32);
void fn_8012A414(u32);
void fn_80130C94(u32);
void fn_8012D3F0(u32);
void fn_80121A4C(u32, u32);
void fn_80122350(void);
void fn_80126C90(u32);
void fn_80127A90(u32);
void fn_801265FC(u32);
void fn_8013093C(u32);
void fn_80130AE8(u32);
void fn_80130F30(u32);
void fn_8012B7FC(u32);
void fn_8012C5BC(u32);
void fn_8012DD14(u32);
void fn_8012EB50(u32);
void fn_8012ECFC(u32);
void fn_8012F0C8(u32);
void fn_8012F508(u32);
void fn_8012F9F0(u32);
void fn_8012FEF4(u32);
void fn_80130218(u32);
void fn_8012AB9C(u32);
void fn_80124B6C(u32);
void fn_8011CF0C(void);
void fn_80125730(void);
void fn_80126340(void);
void fn_8012768C(void);
void fn_8012A05C(void);

void fn_80112464(void) {
    u32 s31;
    u32 s29;
    u32 s30;
    u32 v1;
    u32 v2;
    s31 = (u32)lbl_805578B8;
    s29 = 0;
    do {
        fn_80116AC0(s29);
        fn_80117B28(s29);
        fn_80118254(s29);
        fn_80119490(s29);
        fn_80119CF8(s29);
        fn_8011A138(s29);
        fn_8011A674(s29);
        s30 = 0;
        do {
            fn_8011B22C(s29, s30);
            s30 = (s30+1);
        } while ((s32)s30 < (s32)3);
        s30 = 0;
        do {
            fn_8011F754(s29, s30);
            fn_8011FFFC(s29, s30);
            s30 = (s30+1);
        } while ((s32)s30 < (s32)5);
        fn_8011B994(s29);
        fn_8011E868(s29);
        fn_8011BEA4(s29);
        fn_8011C1F8(s29);
        fn_8011C6D8(s29);
        fn_8011CB68(s29);
        s30 = 0;
        do {
            fn_80121178(s29, s30);
            s30 = (s30+1);
        } while ((s32)s30 < (s32)32);
        fn_80122CD0(s29);
        fn_80122FC8(s29);
        fn_8012358C(s29);
        fn_80125DF0(s29);
        fn_80123B38(s29);
        fn_80123EF8(s29);
        fn_801243C4(s29);
        fn_8012A3B0(s29);
        fn_80130C50(s29);
        fn_8012D3AC(s29);
        s30 = 0;
        do {
            fn_801219F4(s29, s30);
            s30 = (s30+1);
        } while ((s32)s30 < (s32)32);
        fn_80122320();
        fn_80126C4C(s29);
        fn_80127A4C(s29);
        fn_801265B8(s29);
        fn_801308F8(s29);
        fn_80130AA4(s29);
        fn_80130EEC(s29);
        fn_8012B798(s29);
        fn_8012C578(s29);
        fn_8012DCB0(s29);
        fn_8012EB0C(s29);
        fn_8012ECB8(s29);
        fn_8012F084(s29);
        fn_8012F4C4(s29);
        fn_8012F9AC(s29);
        fn_8012FEB0(s29);
        fn_801301D4(s29);
        fn_8012AB18(s29);
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
    fn_80118EF0();
    s30 = 0;
    do {
        fn_80124B28(s30);
        s30 = (s30+1);
    } while ((s32)s30 < (s32)4);
    v1 = M8(s31);
    if ((s32)((s8)v1) <= (s32)1) {
        fn_8011D114();
        fn_8011E354();
        fn_8012506C();
        fn_8012532C();
    }
    v2 = M8(s31);
    if (((s32)((s8)v2) <= (s32)1) || ((s32)((s8)v2) == (s32)2)) {
        drawHUD_renderMap();
        s31 = 0;
        do {
            fn_8011DB3C(s31);
            s31 = (s31+1);
        } while ((s32)s31 < (s32)5);
    }
    fn_8011CEDC();
    fn_80125700();
    fn_80126310();
    fn_80127624();
    fn_8012A02C();
}

void fn_801126F4(void) {
    u32 s31;
    u32 s29;
    u32 s30;
    u32 v1;
    u32 v2;
    s31 = (u32)lbl_805578B8;
    s29 = 0;
    do {
        fn_80116B04(s29);
        fn_80117B6C(s29);
        fn_80118298(s29);
        fn_801194D4(s29);
        fn_80119D3C(s29);
        fn_8011A17C(s29);
        fn_8011A6B8(s29);
        s30 = 0;
        do {
            fn_8011B284(s29, s30);
            s30 = (s30+1);
        } while ((s32)s30 < (s32)3);
        s30 = 0;
        do {
            fn_8011F7AC(s29, s30);
            fn_80120054(s29, s30);
            s30 = (s30+1);
        } while ((s32)s30 < (s32)5);
        fn_8011B9D8(s29);
        fn_8011E8AC(s29);
        fn_8011BEE8(s29);
        fn_8011C23C(s29);
        fn_8011C71C(s29);
        fn_8011CBAC(s29);
        s30 = 0;
        do {
            fn_801211D0(s29, s30);
            s30 = (s30+1);
        } while ((s32)s30 < (s32)32);
        fn_80122D14(s29);
        fn_8012300C(s29);
        fn_801235D0(s29);
        fn_80125E34(s29);
        fn_80123B7C(s29);
        fn_80123F3C(s29);
        fn_80124408(s29);
        fn_8012A414(s29);
        fn_80130C94(s29);
        fn_8012D3F0(s29);
        s30 = 0;
        do {
            fn_80121A4C(s29, s30);
            s30 = (s30+1);
        } while ((s32)s30 < (s32)32);
        fn_80122350();
        fn_80126C90(s29);
        fn_80127A90(s29);
        fn_801265FC(s29);
        fn_8013093C(s29);
        fn_80130AE8(s29);
        fn_80130F30(s29);
        fn_8012B7FC(s29);
        fn_8012C5BC(s29);
        fn_8012DD14(s29);
        fn_8012EB50(s29);
        fn_8012ECFC(s29);
        fn_8012F0C8(s29);
        fn_8012F508(s29);
        fn_8012F9F0(s29);
        fn_8012FEF4(s29);
        fn_80130218(s29);
        fn_8012AB9C(s29);
        s29 = (s29+1);
    } while ((s32)s29 < (s32)4);
    fn_80118F20();
    s30 = 0;
    do {
        fn_80124B6C(s30);
        s30 = (s30+1);
    } while ((s32)s30 < (s32)4);
    v1 = M8(s31);
    if ((s32)((s8)v1) <= (s32)1) {
        fn_8011D144();
        fn_8011E384();
        fn_8012509C();
        fn_8012535C();
    }
    v2 = M8(s31);
    if (((s32)((s8)v2) <= (s32)1) || ((s32)((s8)v2) == (s32)2)) {
        fn_80124810();
        s31 = 0;
        do {
            fn_8011DB80(s31);
            s31 = (s31+1);
        } while ((s32)s31 < (s32)5);
    }
    fn_8011CF0C();
    fn_80125730();
    fn_80126340();
    fn_8012768C();
    fn_8012A05C();
}






























#define MD(a) (*(double*)(a))
float __fabsf(float);
typedef struct { u8 :4; u8 f:2; } BFu8_4_2;
typedef struct { u8 p[4]; float f; } A8_4_float;
typedef struct { u8 p[8]; float f; u8 q[8]; } A20_8_float;
typedef struct { u8 p[4]; u32 f; u8 q[12]; } A20_4_u32;
typedef struct { u8 p[16]; u8 f; u8 q[3]; } A20_16_u8;
typedef struct { u8 p[12]; float f; u8 q[4]; } A20_12_float;
typedef struct { u8 p[8]; float f; } A12_8_float;
typedef struct { u8 p[4]; float f; u8 q[4]; } A12_4_float;
extern const float lbl_805DFB10;
extern const float lbl_805DFB14;
extern const double lbl_805DFB18;
extern const float lbl_805DFB20;
extern u32 lbl_805DE334;
extern const float lbl_805DFB28;
extern const float lbl_805DFB2C;
extern u8 lbl_804B1D64[];
extern u8 lbl_804B1D4C[];
extern const float lbl_805DFB34;
extern const float lbl_805DFB38;
extern const float lbl_805DFB3C;
extern const float lbl_805DFB40;
extern u8 lbl_804A7B08[];
extern u8 lbl_805DE352;
extern u8 fn_8042A22C[];
extern u32 lbl_805DD758;
extern u8 lbl_804A7B6C[];
extern u32 lbl_805D6398;
extern u32 lbl_805D63A0;
extern u32 lbl_805D6388;
extern u32 lbl_805D6390;
extern const float lbl_805DFB64;
extern const float lbl_805DFB68;
extern u8 lbl_805DE353;
extern u8 lbl_804A7C60[];
float fn_80062DD0(u32, u32, u32, float);
float HSD_Randf();
void fn_800638F8(u32, u32, float);
u32 fn_801FBB50();
void fn_802049E4();
u32 fn_802049F0();
void fn_80203FAC();
u32 fn_800EE758();
u32 fn_800EE724();
void fn_801DFAA0();
void fn_801DFBB4();
void memset();
u32 fn_80009940();
void fn_80059818();
void fn_80059520(u32, ...);
void fn_801158C0();
void fn_801159C0();
void HSD_LObjLoadDescAll();
void fn_80117DE8();
void fn_8011878C();
void fn_801191A0();
void fn_8011F8A8();
void fn_801202CC();
void fn_801196EC();
void fn_80119DB4();
void fn_8011EF70();
void fn_8011C3B4();
void fn_8011C7D0();
void fn_8011DCAC();
void fn_8011E3B8();
void fn_80124844();
void fn_80124BD4();
void fn_80125390();
void fn_80122DD8();
void fn_8012322C();
void fn_801237E4();
void fn_80125E7C();
void fn_80125780();
void fn_80125940();
void fn_80123C90();
void fn_80123FE0();
void fn_801244D4();
void fn_8012A56C();
void fn_80130CFC();
void fn_801284F8();
void fn_80128AFC();
void fn_80129108();
void fn_8011A374();
void fn_8011AC3C();
void fn_8011B678();
void fn_8011BCB4();
void fn_8011BFF4();
void fn_8011CC3C();
void fn_801250D0();
void fn_8012122C();
void fn_80126390();
void fn_801267EC();
void fn_80128244();
void fn_8012A104();
void fn_801299C8();
void fn_8012D6F8();
void fn_8012979C();
void fn_80129D90();
void fn_80129F30();
void fn_80121AD8();
void fn_801226E8();
void fn_80126D40();
void fn_801277F0();
void fn_80127E94();
void fn_8012B39C();
void fn_801169C8();
void fn_801168E8();
void fn_8011CF88();
void fn_80130980();
void fn_80130B2C();
void fn_80131008();
void fn_8012B9BC();
void fn_8012C7E4();
void fn_8012DE70();
void fn_8012EB94();
void fn_8012EE4C();
void fn_8012F27C();
void fn_8012F744();
void fn_8012FA34();
void fn_8012FF38();
void fn_80130574();
u32 gmGetGlobalP();
void fn_8012581C();
u32 fn_8000AE74();
void fn_80126408();
void fn_80126B1C();
void fn_801166B4();
u32 fn_80115A64();
void fn_80124890();
void fn_8011E258();
void fn_801254F4();
u32 fn_8000ADA0();
void fn_80125174();
void fn_8011DA04();
void fn_8011E704();
void fn_801285DC();
u32 fn_8000C768();
void fn_80128BB8();
void fn_80129154();
void fn_801297E8();
void fn_80128328();
u32 fn_80127F54();
u32 fn_80124E98();
void fn_8011693C();
void fn_80117AC0();
void fn_801181EC();
void fn_80118E88();
void fn_8011944C();
void fn_8011FF78();
void fn_80121100();
void fn_80119C88();
void fn_8011A0C8();
void fn_8011A60C();
void fn_8011B1C4();
void fn_8011B91C();
void fn_8011BE3C();
void fn_8011F6EC();
void fn_8011C18C();
void fn_8011C648();
void fn_8011CAE8();
void fn_8011CE64();
void fn_8011DAA8();
void fn_8011E2DC();
void fn_8011E824();
void fn_80124AE4();
void fn_801252E8();
void fn_801256BC();
void fn_80121970();
void fn_80122F50();
void fn_8012350C();
void fn_80123AB8();
void fn_80124750();
void fn_80124798();
void fn_801262A8();
void fn_801258DC();
void fn_80125DAC();
void fn_80126574();
void fn_80126BE4();
void fn_8012A36C();
void fn_80123E80();
void fn_8012434C();
void fn_801246D8();
void fn_8012AAA0();
void fn_80130E84();
void fn_8011D0D0();
void fn_8012229C();
void fn_80122A6C();
void fn_801275B4();
void fn_80127A04();
void fn_80129AB8();
void fn_8012DC48();
void fn_80130A3C();
void fn_80130BE8();
void fn_80131178();
void fn_8012C4FC();
void fn_8012D344();
void fn_8012EA90();
void fn_8012EC50();
void fn_8012F01C();
void fn_8012F45C();
void fn_8012F944();
void fn_8012FE48();
void fn_8013016C();
void fn_80130878();
void fn_8012B6C8();
u32 fn_80009908();
float HSD_JObjSetMtxDirtySub(u32, u32, float);
void fn_80408EDC();
void sAddAnimAll();
void OSReport(u32, ...);
void fn_80429D0C();
void fn_800685AC();
u32 GXSetScissor();
void fn_80068588();
void fn_80068574();
extern const float lbl_805DFB74;
extern const float lbl_805DFB70;
extern const float lbl_805DFB6C;
extern const float lbl_805DFB78;
void fn_80129DDC();
u32 fn_800092FC();
u32 fn_800419B8();
u32 fn_800097D0();
void fn_80129F7C();

