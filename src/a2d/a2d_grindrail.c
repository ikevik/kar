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
extern const float lbl_805E4008;
extern const float lbl_805E4088;
extern const float lbl_805E408C;
extern const float lbl_805E4090;
extern u32 lbl_805DA7D0;
extern u32 lbl_805DA7C8;
extern u32 lbl_805DDBC0;
extern u8 lbl_804E2DC0[];
extern u8 lbl_804E2D6C[];
extern u8 lbl_804E2BF8[];
extern u8 HSD_AObjSetRate[];
extern u8 HSD_AObjSetCurrentFrame[];
extern const double lbl_805E4100;
extern u32 lbl_805DA9A8;
extern u32 lbl_805DA9A0;
extern u8 lbl_804E3B54[];
extern u8 lbl_804E3A98[];
extern const float lbl_805E4120;
extern u8 lbl_804E47D8[];
extern const double lbl_805E41C8;
extern const double lbl_805E4138;
extern const float lbl_805E415C;
extern u32 lbl_805DA908;
extern u32 lbl_805DA900;
extern u32 lbl_805DDBC8;
extern u8 lbl_804E48C0[];
extern const float lbl_805E4160;
extern const float lbl_805E4124;
extern u32 lbl_805DABF0;
extern u32 lbl_805DABE8;
extern u8 lbl_804E5614[];
extern u8 lbl_804E55E0[];
void fn_8038CB78();
float HSD_Randf();
u32 fn_80341F90();
u32 __cvt_fp2unsigned(float);
u32 fn_8040BE00();
void fn_80289768(u32, u32, float);
void fn_80384A80();
void fn_80384A98();
void fn_802895C8(u32, u32, float, float);
void fn_8040C174();
void fn_80289590(u32, u32, float);
u32 fn_802897E0();
u32 fn_80289874();
u32 fn_803AD760();
u32 fn_80391F10();
void fn_8038D0E8();
void fn_803FCDB8(u32, ...);
void fn_8031E558();
void HSD_AObjLoadDesc_();
void fn_80332300();
u32 fn_8038D0A8();
void fn_8037AFD0();
void fn_8037B028();
void fn_8037B33C();
void fn_803334CC();
void fn_8037CFB4();
void PSMTXIdentity();
void fn_803346E4();
extern u8 lbl_804F51DC[];
extern u8 lbl_804BDB74[];
extern u8 lbl_804BDBC0[];
extern u8 lbl_804BDBE8[];
extern void fn_80379784();

u32 fn_80323894(u32 p3, u32 p4) {
    u32 v1;
    if ((s32)p3 != (s32)0) {
        v1 = M32(p3);
        if ((u32)v1 != (u32)0) {
            fn_8038CB78(v1);
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

void fn_803238F0(u32 p3) {
    M32(p3) = 0;
}

void fn_80323C58(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    float v4;
    float d0;
    u32 c1;
    u32 c2;
    M32(((u32)p3+40)) = 0;
    M32(((u32)p3+24)) = -1;
    d0 = HSD_Randf();
    c1 = fn_80341F90();
    v1 = MF(((u32)c1+4));
    c2 = __cvt_fp2unsigned((v1*d0));
    M32(((u32)p3+44)) = (c2+1);
    v2 = M32(((u32)p3+8));
    fn_8040BE00(v2, 16);
    v3 = M32(((u32)p3+8));
    v4 = lbl_805E4008;
    fn_80289768(v3, ((1<<16)-1), v4);
    fn_80384A80((p3+48));
}

void fn_80323CE8(u32 p3) {
    M32(((u32)p3+40)) = 2;
    fn_80384A98((p3+48));
}

void fn_803251CC(u32 p3) {
    u32 v7;
    u32 v6;
    float v5;
    u32 v4;
    float v3;
    float v2;
    u32 v1;
    u32 c2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = lbl_805E4088;
        v3 = lbl_805E408C;
        fn_802895C8(v1, ((1<<16)-1), v2, v3);
        v4 = M32(((u32)p3+4));
        v5 = lbl_805E4090;
        fn_80289768(v4, ((1<<16)-1), v5);
        v6 = M32(((u32)p3+4));
        c2 = fn_8040BE00(v6, 16);
        v7 = c2;
    } else {
        v7 = v1;
    }
    M32(((u32)p3+8)) = 0;
    M8(((u32)p3+12)) = 0;
    M8(((u32)p3+13)) = 0;
}

void fn_80325244(u32 p3) {
    M8(((u32)p3+13)) = 1;
}

void fn_80325250(u32 p3) {
    u32 v18;
    u32 v17;
    u32 v16;
    float v15;
    u32 v14;
    float v13;
    float v12;
    u32 v11;
    u32 v10;
    u32 v9;
    u32 v8;
    u32 v7;
    float v6;
    u32 v5;
    float v4;
    u32 v3;
    u32 v2;
    u32 v1;
    u32 c3;
    u32 c4;
    u32 c7;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)p3+13));
        if ((u32)v2 != (u32)0) {
            fn_8040C174(v1, 16);
            v3 = M32(((u32)p3+4));
            v4 = lbl_805E4088;
            fn_80289590(v3, ((1<<16)-1), v4);
            v5 = M32(((u32)p3+4));
            v6 = lbl_805E4088;
            fn_80289768(v5, ((1<<16)-1), v6);
            M8(((u32)p3+13)) = 0;
            M8(((u32)p3+12)) = 1;
            v7 = 0;
        } else {
            v7 = v1;
        }
        v8 = M8(((u32)p3+12));
        if ((u32)v8 != (u32)0) {
            v9 = M32(((u32)p3+4));
            c3 = fn_802897E0(v9);
            if ((s32)(c3&0xff) == (s32)0) {
                v10 = M32(((u32)p3+4));
                c4 = fn_80289874(v10);
                if ((s32)(c4&0xff) == (s32)0) {
                    v18 = c4;
                    goto L60;
                }
            }
            M8(((u32)p3+12)) = 0;
            v11 = M32(((u32)p3+4));
            if ((u32)v11 != (u32)0) {
                v12 = lbl_805E4088;
                v13 = lbl_805E408C;
                fn_802895C8(v11, ((1<<16)-1), v12, v13);
                v14 = M32(((u32)p3+4));
                v15 = lbl_805E4090;
                fn_80289768(v14, ((1<<16)-1), v15);
                v16 = M32(((u32)p3+4));
                c7 = fn_8040BE00(v16, 16);
                v17 = c7;
            } else {
                v17 = v11;
            }
            M32(((u32)p3+8)) = 0;
            M8(((u32)p3+12)) = 0;
            M8(((u32)p3+13)) = 0;
            v18 = v17;
        } else {
            v18 = v7;
        }
    } else {
        v18 = v1;
    }
    L60:;
}

u32 fn_80325354(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DDBC0;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DA7D0, (u32)&lbl_805DA7C8, 0);
    v2 = M32(((u32)c0+20));
    if ((u32)v2 == (u32)1) {
        v3 = (u32)lbl_804E2D6C;
    } else {
        v3 = (u32)lbl_804E2DC0;
    }
    return v3;
}

u32 fn_80326844(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+96));
    return ((u32)__cntlzw(v1)>>5);
}

void fn_80327AE8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    float v6;
    u32 v7;
    u32 v8;
    double v9;
    u32 c0;
    v1 = M32(((u32)p3+16));
    c0 = fn_80391F10(v1, ((u32)lbl_804E2BF8+1444));
    if ((s32)(c0&0xff) != (s32)0) {
        v2 = M32(p3);
        fn_8038D0E8(v2, ((u32)lbl_804E2BF8+1460), 1);
    } else {
        v3 = M32(p3);
        fn_8038D0E8(v3, ((u32)lbl_804E2BF8+1476), 1);
    }
    v4 = M32(p3);
    v5 = M32(((u32)v4+4));
    v6 = MF(((u32)p3+32));
    fn_803FCDB8(v5, 6, ((1<<16)-1), (u32)HSD_AObjSetRate, 1, v6);
    v7 = M32(p3);
    v8 = M32(((u32)v7+4));
    v9 = lbl_805E4100;
    fn_803FCDB8(v8, 6, ((1<<16)-1), (u32)HSD_AObjSetCurrentFrame, 1, v9);
}

void fn_8032876C(u32 p3) {
    fn_8031E558((p3+44));
}

void fn_80328A14(u32 p3, u32 p4, u32 p5) {
    if ((u32)p4 != (u32)0) {
        HSD_AObjLoadDesc_(p4, p5);
    }
}

u32 fn_80328C54(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+13568));
    v2 = M32((p3+(v1*424)));
    M32(((u32)p3+13568)) = v2;
    v3 = M32(((u32)p3+13572));
    M32(((u32)p3+13572)) = (v3-1);
    return (p3+(v1*424));
}

u32 fn_80328CC0(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DDBC0;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DA9A8, (u32)&lbl_805DA9A0, 0);
    v2 = M32(((u32)c0+20));
    if ((u32)v2 == (u32)1) {
        v3 = (u32)lbl_804E3A98;
    } else {
        v3 = (u32)lbl_804E3B54;
    }
    return v3;
}

void fn_8032A590(u32 p3) {
    float v1;
    v1 = lbl_805E4120;
    M32(((u32)p3+104)) = 0;
    M32(((u32)p3+112)) = 0;
    MF(((u32)p3+116)) = v1;
    M8(((u32)p3+108)) = 0;
    M8(((u32)p3+109)) = 0;
    M8(((u32)p3+110)) = 0;
}

u32 fn_8032A754(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+96));
    return ((u32)__cntlzw(v1)>>5);
}

void fn_8032A998(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+32));
    fn_80332300(v1);
}

void fn_8032DE10(u32 p3) {
    float v1;
    u32 v2;
    v1 = lbl_805E4120;
    M32(((u32)p3+72)) = 0;
    M8(((u32)p3+60)) = 0;
    MF(((u32)p3+64)) = v1;
    M32(((u32)p3+76)) = 0;
    v2 = M32(p3);
    fn_80289768(v2, ((1<<16)-1), v1);
}

u32 fn_8032EBB4(u32 p3) {
    u32 v1;
    v1 = M32(((u32)p3+72));
    return (v1 == 30);
}

void fn_8032F084(u32 p3) {
    float v9;
    float v8;
    double v7;
    u32 v6;
    u32 v5;
    double v4;
    u32 v3;
    u32 v2;
    u32 v1;
    v1 = M32(p3);
    fn_8038D0E8(v1, (u32)lbl_804E47D8, 1);
    v2 = M32(p3);
    v3 = M32(((u32)v2+4));
    v4 = lbl_805E41C8;
    fn_803FCDB8(v3, 6, ((1<<16)-1), (u32)HSD_AObjSetRate, 1, v4);
    v5 = M32(p3);
    v6 = M32(((u32)v5+4));
    v7 = lbl_805E4138;
    fn_803FCDB8(v6, 6, ((1<<16)-1), (u32)HSD_AObjSetCurrentFrame, 1, v7);
    v8 = lbl_805E4120;
    v9 = lbl_805E415C;
    MF(((u32)p3+360)) = v8;
    MF(((u32)p3+356)) = v8;
    M32(((u32)p3+368)) = 0;
    MF(((u32)p3+364)) = v8;
    MF(((u32)p3+384)) = v9;
}

void fn_803311D4(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 c0;
    u32 c1;
    v1 = lbl_805DDBC8;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DA908, (u32)&lbl_805DA900, 0);
    v2 = M32(((u32)c0+24));
    c1 = fn_8038D0A8(v2, (u32)lbl_804E48C0);
    if ((s32)p4 != (s32)3) {
        if ((s32)p4 < (s32)3) {
            if ((s32)p4 == (s32)1) goto L30;
            if ((s32)p4 >= (s32)1) goto L41;
            goto L85;
        }
        if ((s32)p4 == (s32)5) goto L74;
        if ((s32)p4 >= (s32)5) goto L85;
        goto L63;
    L30:;
        fn_8037AFD0((p3+100), 0);
        fn_8037B028((p3+100), 10111, 1, c1, 0, 0);
        goto L88;
    L41:;
        fn_8037AFD0((p3+100), 0);
        fn_8037B028((p3+100), 10115, 1, c1, 0, 0);
        goto L88;
    }
    fn_8037AFD0((p3+100), 0);
    fn_8037B028((p3+100), 10123, 1, c1, 0, 0);
    goto L88;
    L63:;
    fn_8037AFD0((p3+100), 0);
    fn_8037B028((p3+100), 10128, 1, c1, 0, 0);
    goto L88;
    L74:;
    fn_8037AFD0((p3+100), 0);
    fn_8037B028((p3+100), 10107, 1, c1, 0, 0);
    goto L88;
    L85:;
    fn_8037B33C((p3+100), 0);
    L88:;
}

u32 fn_803314FC(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

void fn_80331538(u32 p3) {
    float v1;
    v1 = lbl_805E4120;
    M32(p3) = 0;
    M32(((u32)p3+4)) = 0;
    MF(((u32)p3+16)) = v1;
    MF(((u32)p3+12)) = v1;
    MF(((u32)p3+8)) = v1;
}

void fn_80331558(u32 p3) {
    M8(((u32)p3+20)) = 0;
}

void fn_8033343C(u32 p3, u32 p4) {
    float v1;
    float v2;
    float v3;
    v1 = MF(((u32)p4+16));
    MF(((u32)p3+360)) = v1;
    v2 = MF(((u32)p4+20));
    MF(((u32)p3+364)) = v2;
    v3 = MF(((u32)p4+24));
    MF(((u32)p3+368)) = v3;
    fn_803334CC();
}

u32 fn_80334340(void) {
    return 0;
}

float fn_803343AC(u32 p3, u32 p4) {
    float v1;
    float v2;
    float v3;
    float v4;
    v1 = lbl_805E4160;
    v2 = lbl_805E4120;
    MF(p4) = v1;
    MF(((u32)p4+4)) = v2;
    v3 = MF(((u32)p3+104));
    MF(((u32)p4+8)) = v3;
    MF(((u32)p4+12)) = v2;
    MF(((u32)p4+16)) = v1;
    v4 = MF(((u32)p3+104));
    MF(((u32)p4+20)) = v4;
    return v2;
}

void fn_803343D8(void) {
    fn_8037CFB4();
}

void fn_803343F8(u32 p3, u32 p4) {
    PSMTXIdentity(p4);
}

void fn_8033441C(u32 p3, u32 p4, u32 p5) {
    float v1;
    v1 = lbl_805E4124;
    MF(p5) = v1;
    MF(p4) = v1;
}

void fn_803346B4(u32 p3, u32 p4, u32 p5) {
    if ((u32)p4 != (u32)0) {
        fn_803346E4(p4, p5);
    }
}

u32 fn_80334BD0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+14976));
    v2 = M32((p3+(v1*468)));
    M32(((u32)p3+14976)) = v2;
    v3 = M32(((u32)p3+14980));
    M32(((u32)p3+14980)) = (v3-1);
    return (p3+(v1*468));
}

u32 fn_80334C3C(void) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 c0;
    v1 = lbl_805DDBC0;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DABF0, (u32)&lbl_805DABE8, 0);
    v2 = M32(((u32)c0+20));
    if ((u32)v2 == (u32)1) {
        v3 = (u32)lbl_804E55E0;
    } else {
        v3 = (u32)lbl_804E5614;
    }
    return v3;
}

void fn_80327660(void) {}

void fn_80333D20(void) {}

void fn_8033442C(void) {}

void* fn_803253A4(void* p) { return p == 0 ? (void*)lbl_804E2D6C : (void*)lbl_804E2DC0; }

void* fn_80328D10(void* p) { return p == 0 ? (void*)lbl_804E3A98 : (void*)lbl_804E3B54; }

void* fn_80334C8C(void* p) { return p == 0 ? (void*)lbl_804E55E0 : (void*)lbl_804E5614; }
