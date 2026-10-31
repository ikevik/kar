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

void fn_801116D4(void* a)
{
    lbl_805DD740 = 0;
    fn_80114154();
    fn_800EE660(a);
}

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

int fn_80112B20(void)
{
    return lbl_805578B8[5];
}

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
