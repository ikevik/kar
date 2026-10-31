typedef unsigned char u8;
typedef unsigned long u32;

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
extern void fn_80261ECC();
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
extern void fn_800EE660();
extern void fn_800EE73C();

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
