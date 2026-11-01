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
extern u8 lbl_804F08DC[];
extern u32 lbl_805DD964;
extern u32 lbl_805DDC8C;
extern u8 lbl_804F130C[];
extern u8 lbl_804F1318[];
extern u32 lbl_805DDC88;
extern u8 lbl_804F20F0[];
extern u8 lbl_804F2308[];
u32 fn_8034D1F8();
u32 __cvt_fp2unsigned(float);
void fn_8038D0E8();
void fn_8036F214();
void fn_803749C4();
void fn_8038CB78();
void fn_803E7264();
u32 strcmp();
typedef struct {
    float a, b;
} FP;
typedef struct {
    FP* arr;
    s32 n;
} FA;
extern u8 lbl_804F1004[];
extern u8 lbl_804BCF64[];
extern const float lbl_805E4A08;
extern u8 lbl_804F0ECC[];
extern u32 lbl_805DDB6C;
void __assert(u32, u32, u32, float);
u32 fn_8038D0A8(u32, u32);
float fn_8037AE18(u32, u32, u32, float);
float fn_8037E9C8(u32, u32, u32, u32, u32, u32, float);
float fn_803795AC(u32, u32, float);
float fn_8036EDD8(u32, u32, float);
u32 fn_803AD760(u32, u32, u32, u32, u32, float);
u32 fn_8038CCAC(u32, u32, float);
u32 HSD_CObjLoadDesc(u32, u32);
u32 fn_80296264(u32, u32, u32, u32, float);
void fn_80374214(u32, u32, float, float, float);

void fn_8036F1B8(u32 p3) {
    float v1;
    u32 c0;
    u32 c1;
    M32(((u32)p3+160)) = 0;
    c0 = fn_8034D1F8();
    v1 = MF(((u32)c0+1344));
    c1 = __cvt_fp2unsigned(v1);
    M32(((u32)p3+208)) = c1;
    fn_8038D0E8((p3+140), (u32)lbl_804F08DC, 1);
    fn_8036F214(p3);
}

u32 HVQM4PlayerExControlCheckNormal(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+24));
    return ((u32)__cntlzw(v1)>>5);
}

void fn_803718F8(u32 p3) {
    M32(((u32)p3+336)) = 0;
    lbl_805DD964 = p3;
    M32(p3) = 1;
    M32(((u32)p3+56)) = 2;
    M32(((u32)p3+112)) = 3;
    M32(((u32)p3+168)) = 4;
    M32(((u32)p3+224)) = 5;
    M32(((u32)p3+280)) = -1;
    M32(((u32)p3+340)) = 6;
}

u32 fn_80371940(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+336));
    v2 = M32((p3+(v1*56)));
    M32(((u32)p3+336)) = v2;
    v3 = M32(((u32)p3+340));
    M32(((u32)p3+340)) = (v3-1);
    return (p3+(v1*56));
}

u32 fn_80374964(u32 p3, u32 p4) {
    u32 v1;
    if ((s32)p3 != (s32)0) {
        fn_803749C4();
        v1 = M32(((u32)p3+8));
        if ((u32)v1 != (u32)0) {
            fn_8038CB78(v1);
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_803764CC(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+6656));
    v2 = M32((p3+(v1*52)));
    M32(((u32)p3+6656)) = v2;
    v3 = M32(((u32)p3+6660));
    M32(((u32)p3+6660)) = (v3-1);
    return (p3+(v1*52));
}

void fn_803773C8(u32 p3) {
    M8((u32)&lbl_805DDC8C+p3) = 0;
}

u32 fn_803773D8(u32 p3, u32 p4) {
    u32 v1;
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F130C;
        v1 = M32(((u32)p3+24));
        if ((s32)v1 != (s32)-1) {
            fn_803E7264((p3+4));
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

void fn_80377444(u32 p3) {
    M8((u32)&lbl_805DDC8C+p3) = 0;
}

void fn_80377454(u32 p3) {
    M8((u32)&lbl_805DDC8C+p3) = 0;
}

u32 fn_80377464(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F1318;
        lbl_805DDC88 = 0;
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

void fn_80377920(u32 p3, u32 p4, u32 p5) {
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
    u32 v13;
    u32 c1;
    u32 c0;
    v1 = M32(((u32)p4+4));
    v2 = p3;
    v3 = (p4+4);
    v4 = v1;
    goto L20;
    L11:;
    v7 = M32(((u32)v4+12));
    v8 = M32(p5);
    c1 = strcmp(v7, v8);
    if ((s32)c1 >= (s32)0) {
        v9 = M32(v4);
        v11 = c1;
        v12 = v4;
        v13 = v9;
        v2 = v11;
        v3 = v12;
        v4 = v13;
    } else {
        v10 = M32(((u32)v4+4));
        v2 = c1;
        v4 = v10;
    }
    L20:;
    if ((u32)v4 != (u32)0) goto L11;
    if ((u32)v3 != (u32)(p4+4)) {
        v5 = M32(p5);
        v6 = M32(((u32)v3+12));
        c0 = strcmp(v5, v6);
        if ((s32)c0 >= (s32)0) goto L33;
    }
    M32(p3) = (p4+4);
    goto L34;
    L33:;
    M32(p3) = v3;
    L34:;
}

u32 fn_80377BF4(void) {
    return 22;
}

u32 fn_80377BFC(u32 p3, u32 p4) {
    u32 v1;
    v1 = M32((u32)lbl_804F20F0+(p4<<4));
    return v1;
}

u32 fn_803785B0(void) {
    return (u32)lbl_804F2308;
}


