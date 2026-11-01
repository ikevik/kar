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
extern u8 lbl_804F55B0[];
extern u8 lbl_80502AC0[];
void fn_80396724(void);
extern u8 lbl_80503488[];
void fn_803969A4(void);
extern u8 lbl_804F57A0[];
extern u32 lbl_805DC198;
extern u32 lbl_805DC1A0;
extern u32 lbl_805DDAA0;
extern u8 lbl_804F5A18[];
extern u32 lbl_805DDBB4;
extern u8 lbl_804BC15C[];
extern u8 lbl_804BC184[];
extern u8 lbl_804F6278[];
extern u8 lbl_804BC3BC[];
extern u8 lbl_804F59EC[];
extern u8 __files[];
extern u8 lbl_804F6018[];
extern u8 lbl_804F5FCC[];
extern u8 lbl_8058B634[];
extern u32 lbl_805DC2D0;
extern u32 lbl_805DC2C8;
extern u32 lbl_805DDBB8;
extern u32 lbl_805DC2D8;
extern const float lbl_805E5018;
extern u8 lbl_804BC374[];
extern u8 lbl_804BC3DC[];
extern u8 lbl_804BC344[];
extern u8 lbl_804C0D38[];
extern u8 lbl_804F7694[];
extern u8 lbl_804C0DB8[];
extern u8 lbl_804F8660[];
void hsdInitClassInfo();
u32 fn_803AD760();
void fn_8038CB78();
void fn_8039967C();
u32 fn_80399A84();
void fn_80399A80();
u32 fn_80399A78();
void fn_80399A54();
void fn_80399A50();
void fn_80399A4C();
void GXInvalidateTexAll();
float fn_80391B1C();
void fn_80391C70();
void fn_80391C1C();
void fn_803B4D80(u32, ...);
void abort();
float fn_803973A4();
void fn_8038DB14();
void fn_803979A4();
void GXInvalidateVtxCache();
void fn_803CAC04();
void GXSetVtxAttrFmt();
void GXSetVtxDesc();
float fn_802A07D8(u32, u32, float);
float fn_803A7730();
u32 fn_8034D044();
u32 fn_8034CD48();
void fn_803A8858();
float fn_803A8570();
u32 strlen();
u32 fn_803A8450();
void fn_803A2BE4();
void fn_80395FBC();





u32 fn_80397080(u32 p3) {
    u32 v1;
    v1 = M32((u32)lbl_804F57A0+(p3<<2));
    return v1;
}

void fn_80397970(void) {
    u32 v1;
    v1 = lbl_805DDAA0;
    fn_803AD760(v1, 0, (u32)&lbl_805DC198, (u32)&lbl_805DC1A0, 0);
}

u32 fn_80398C30(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5A18;
        lbl_805DDBB4 = 0;
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399158(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)v1+4));
        return v2;
    }
    return 0;
}

u32 fn_80399174(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)v1+5));
        return v2;
    }
    return 0;
}

u32 fn_80399190(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)v1+6));
        return v2;
    }
    return 0;
}

u32 fn_803991AC(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)v1+7));
        return v2;
    }
    return 0;
}



void fn_80399A54(u32 p3, u32 p4, u32 p5) {
    fn_8038CB78(p4);
}

u32 fn_80399A78(u32 p3) {
    return (p3+4);
}























void fn_8039BB54(u32 p3) {
    M32(p3) = (u32)lbl_804BC3BC;
    M32(p3) = (u32)lbl_804F59EC;
    M32(((u32)p3+4)) = 0;
}





void fn_8039D1D4(u32 p3, u32 p4) {
    M16(((u32)p3+36)) = p4;
    M16(((u32)p3+38)) = p4;
}



void fn_803A2BA4(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32(((u32)p3+72));
    v2 = MF(v1);
    MF(((u32)p3+68)) = v2;
}

void fn_803A2CEC(void) {
    GXInvalidateVtxCache();
    fn_803CAC04();
    GXSetVtxAttrFmt(0, 9, 1, 4, 0);
    GXSetVtxDesc(9, 1);
}

void fn_803A60F4(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    float d0;
    v1 = M32(((u32)p3+124));
    v2 = M32(((u32)p3+116));
    v3 = MF(v2+(v1*12));
    MF(((u32)p3+264)) = v3;
    v4 = M32(((u32)p3+124));
    v5 = M32(((u32)p3+116));
    v6 = MF(v5+(v4*12));
    d0 = fn_802A07D8((p3+116), v5, v6);
    MF(((u32)p3+336)) = d0;
}

void fn_803A765C(u32 p3, u32 p4, float q1) {
    fn_802A07D8((p3+68), p4, q1);
}

void fn_803A7680(u32 p3) {
    fn_803A7730((p3+68));
}







u32 fn_803AA10C(u32 p3) {
    fn_803A8450(p3, (u32)lbl_804F7694, 3);
    M32(p3) = (u32)lbl_804C0DB8;
    return p3;
}

void fn_803AA3D4(u32 p3) {
    M32(((u32)p3+344)) = (p3+666);
}

u32 fn_803AB968(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    u32 v2;
    fn_803A2BE4();
    M32(p3) = (u32)lbl_804F8660;
    M32(((u32)p3+68)) = p5;
    M32(((u32)p3+72)) = p6;
    M8(((u32)p3+76)) = 0;
    M32(((u32)p3+80)) = 0;
    v1 = M32(p4);
    M32(((u32)p3+84)) = v1;
    v2 = M32(((u32)p4+4));
    M32(((u32)p3+88)) = v2;
    return p3;
}

void fn_803ACA64(u32 p3) {
    fn_80395FBC((p3+84));
}

void fn_80399A4C(void) {}

void fn_80399A50(void) {}

void fn_80399A80(void) {}

u32 fn_80399A84(void) {}

void fn_803AA3D0(void) {}
