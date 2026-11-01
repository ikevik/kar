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
extern u8 lbl_804F43D0[];
extern u8 lbl_80502AC0[];
void fn_80382E10(void);
extern u32 lbl_805DDC80;
extern u8 hsdDObj[];
void fn_803834B4(void);
extern u8 lbl_80503488[];
extern u8 fn_80383CE0[];
extern u32 lbl_805DDC84;
void hsdInitClassInfo();
void fn_80383C98();
void HSD_DObjDisp();
void fn_8040AD74();
void HSD_DObjSetDefaultClass();
void HSD_MObjSetDefaultClass();
void HSD_PObjSetDefaultClass();
void fn_8038397C();

u32 fn_80383458(void) {
    hsdInitClassInfo(((u32)lbl_804F43D0+132), (u32)lbl_80502AC0, ((u32)lbl_804F43D0+364), ((u32)lbl_804F43D0+388), 84, 32);
    M32(((u32)((u32)lbl_804F43D0+132)+60)) = (u32)fn_80382E10;
    return ((u32)lbl_804F43D0+132);
}

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

u32 fn_803834F4(void) {
    hsdInitClassInfo(((u32)lbl_804F43D0+216), (u32)hsdDObj, ((u32)lbl_804F43D0+364), ((u32)lbl_804F43D0+680), 72, 24);
    M32(((u32)((u32)lbl_804F43D0+216)+60)) = (u32)fn_803834B4;
    return ((u32)lbl_804F43D0+216);
}

u32 fn_80383550(void) {
    hsdInitClassInfo(((u32)lbl_804F43D0+288), (u32)lbl_80503488, ((u32)lbl_804F43D0+364), ((u32)lbl_804F43D0+696), 76, 28);
    M32(((u32)((u32)lbl_804F43D0+288)+68)) = (u32)fn_80383CE0;
    return ((u32)lbl_804F43D0+288);
}

void fn_803835AC(void) {
    fn_8040AD74(((u32)lbl_804F43D0+48));
    HSD_DObjSetDefaultClass(((u32)lbl_804F43D0+216));
    HSD_MObjSetDefaultClass(((u32)lbl_804F43D0+132));
    HSD_PObjSetDefaultClass(((u32)lbl_804F43D0+288));
}

void fn_803835F8(void) {
    fn_8040AD74(0);
    HSD_DObjSetDefaultClass(0);
    HSD_MObjSetDefaultClass(0);
    HSD_PObjSetDefaultClass(0);
}

typedef struct { u8 r, g, b, a; } Col;
typedef struct { u8 pad[0xc]; s32 kind; Col c0; u8 c1[4]; } P;
#define LC (*(Col*)&lbl_805DDC84)
void fn_80383634(P* p)
{
    lbl_805DDC80 = p->kind;
    switch (p->kind) {
    case 2:
    case 3:
        LC.r = p->c0.r;
        LC.g = p->c0.g;
        LC.b = p->c0.b;
        LC.a = p->c0.a;
        break;
    case 1:
    case 4: {
        Col t;
        fn_8038397C(&t, p->c1);
        LC.r = t.r;
        LC.g = t.g;
        LC.b = t.b;
        LC.a = t.a;
        break;
    }
    }
}

u32 fn_803836D4(u32 p3) {
    u32 stk[1];
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    v1 = M32(((u32)p3+12));
    if ((s32)v1 == (s32)1) goto L9;
    if ((s32)v1 != (s32)3) goto L12;
    L9:;
    lbl_805DDC80 = 0;
    goto L13;
    L12:;
    lbl_805DDC80 = v1;
    L13:;
    v2 = M32(((u32)p3+12));
    if ((s32)v2 == (s32)4) goto L31;
    if ((s32)v2 >= (s32)4) {
        v11 = p3;
        goto L43;
    }
    if ((s32)v2 == (s32)1) goto L31;
    if ((s32)v2 >= (s32)1) goto L21;
    v11 = p3;
    goto L43;
    L21:;
    v3 = M8(((u32)p3+16));
    lbl_805DDC84 = v3;
    v4 = M8(((u32)p3+17));
    M8(((u32)(u32)&lbl_805DDC84+1)) = v4;
    v5 = M8(((u32)p3+18));
    M8(((u32)(u32)&lbl_805DDC84+2)) = v5;
    v6 = M8(((u32)p3+19));
    M8(((u32)(u32)&lbl_805DDC84+3)) = v6;
    v11 = (u32)&lbl_805DDC84;
    goto L43;
    L31:;
    fn_8038397C((u32)((u8*)stk+0), (p3+20));
    v7 = M8((u8*)stk+0);
    v8 = M8((u8*)stk+1);
    v9 = M8((u8*)stk+2);
    v10 = M8((u8*)stk+3);
    lbl_805DDC84 = v7;
    M8(((u32)(u32)&lbl_805DDC84+1)) = v8;
    M8(((u32)(u32)&lbl_805DDC84+2)) = v9;
    M8(((u32)(u32)&lbl_805DDC84+3)) = v10;
    v11 = v9;
    L43:;
    return v11;
}

u32 fn_80383790(u32 p3) {
    u32 stk[1];
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    v1 = M32(((u32)p3+12));
    if ((s32)v1 == (s32)3) {
        v2 = v1;
        goto L8;
    }
    v2 = 0;
    L8:;
    lbl_805DDC80 = v2;
    v3 = M32(((u32)p3+12));
    if ((s32)v3 == (s32)4) goto L27;
    if ((s32)v3 >= (s32)4) {
        v12 = p3;
        goto L39;
    }
    if ((s32)v3 == (s32)1) goto L27;
    if ((s32)v3 >= (s32)1) goto L17;
    v12 = p3;
    goto L39;
    L17:;
    v4 = M8(((u32)p3+16));
    lbl_805DDC84 = v4;
    v5 = M8(((u32)p3+17));
    M8(((u32)(u32)&lbl_805DDC84+1)) = v5;
    v6 = M8(((u32)p3+18));
    M8(((u32)(u32)&lbl_805DDC84+2)) = v6;
    v7 = M8(((u32)p3+19));
    M8(((u32)(u32)&lbl_805DDC84+3)) = v7;
    v12 = (u32)&lbl_805DDC84;
    goto L39;
    L27:;
    fn_8038397C((u32)((u8*)stk+0), (p3+20));
    v8 = M8((u8*)stk+0);
    v9 = M8((u8*)stk+1);
    v10 = M8((u8*)stk+2);
    v11 = M8((u8*)stk+3);
    lbl_805DDC84 = v8;
    M8(((u32)(u32)&lbl_805DDC84+1)) = v9;
    M8(((u32)(u32)&lbl_805DDC84+2)) = v10;
    M8(((u32)(u32)&lbl_805DDC84+3)) = v11;
    v12 = v10;
    L39:;
    return v12;
}
