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
typedef struct { u8 p[96]; u32 f[1024]; } E96_u32;
typedef struct { u8 p[12]; u32 f; u8 q[8]; } A24_12_u32;
extern u8 lbl_804F2978[];
extern u8 lbl_80569840[];
extern u32 lbl_805DDC70;
u32 fn_8005E184();
void fn_8005E574();
void lbLoadMusicLocation();
void fn_8005E788();
void fn_8005B8AC();
void fn_8005F59C();
u32 fn_8005F57C();
void fn_8005E7D8();
u32 fn_8005F6A8();
u32 fn_8005F5BC();
void fn_803792B8();
u32 fn_803792DC();
void fn_80378F44();
u32 fn_80379310();
void fn_80378E34();


void fn_80378D9C(u32 p3, u32 p4) {
    u32 c0;
    c0 = fn_8005E184();
    if ((s32)c0 != (s32)0) {
        fn_8005E574();
    }
    lbLoadMusicLocation(p4);
}

void fn_80378DDC(void) {
    fn_8005E574();
    fn_8005E788();
    fn_8005B8AC();
}

void fn_80378E04(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+136));
    v2 = M32(((u32)p3+140));
    fn_8005F59C(p4, v1, v2);
}

u32 fn_8037919C(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 v1;
    u32 v2;
    E96_u32* v3;
    u32 v4;
    A24_12_u32* v5;
    u32 v6;
    u32 v7;
    u32 c0;
    v1 = M32(((u32)p3+112));
    v2 = M32(p3+(p5*24));
    v3 = (E96_u32*)(p3);
    v4 = v3->f[p6];
    if ((s32)v1 != (s32)v2) {
        if ((s32)v1 != (s32)3) goto L15;
    }
    v7 = -1;
    goto L20;
    L15:;
    v5 = (A24_12_u32*)(p3);
    v6 = v5[p5].f;
    c0 = fn_8005F57C(p4, v4, v6, v1, (p5*24));
    v7 = c0;
    L20:;
    return v7;
}

void fn_80379298(void) {
    fn_8005E788();
}

void fn_803792B8(u32 p3, u32 p4) {
    fn_8005E7D8(p4);
}

u32 fn_803792DC(u32 p3, u32 p4, u32 p5) {
    u32 c0;
    c0 = fn_8005F6A8(p4, p5);
    return (((-(s32)c0)|c0)>>31);
}

u32 fn_80379310(u32 p3, u32 p4, u32 p5) {
    u32 c0;
    c0 = fn_8005F5BC(p4, p5);
    return (((-(s32)c0)|c0)>>31);
}

u32 fn_80379344(u32 p3, u32 p4) {
    u32 v1;
    if ((s32)(p4-65536) >= (s32)0) {
        if ((u32)(p4-65536) < (u32)63) {
            v1 = M32((u32)lbl_804F2978+((p4-65536)<<2));
            return v1;
        }
    }
    return 0;
}

u32 fn_80379374(u32 p3, u32 p4) {
    u32 v1;
    if ((s32)p4 < (s32)68) {
        v1 = M32((u32)lbl_80569840+(p4<<2));
        return v1;
    }
    return 0;
}

u32 fn_803799B8(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(((u32)p3+16));
    if ((s32)v1 != (s32)-1) {
        v2 = lbl_805DDC70;
        fn_803792B8(v2, v1);
        M32(((u32)p3+16)) = -1;
        M32(((u32)p3+20)) = -1;
        v3 = 1;
    } else {
        v3 = 0;
    }
    return v3;
}

u32 fn_80379A0C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    v1 = lbl_805DDC70;
    v2 = M32(((u32)p3+16));
    c0 = fn_803792DC(v1, v2, p4);
    if ((s32)(c0&0xff) != (s32)0) {
        v3 = M32(((u32)p3+12));
        if ((s32)v3 == (s32)1) {
            v4 = M32(((u32)p3+32));
            if ((s32)v4 != (s32)0) {
                v5 = lbl_805DDC70;
                v6 = M32(((u32)p3+16));
                v7 = M32(((u32)p3+24));
                fn_80378F44(v5, v6, v7, p4);
            }
        }
    }
    return c0;
}

u32 fn_80379A94(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 c0;
    v1 = lbl_805DDC70;
    v2 = M32(((u32)p3+16));
    c0 = fn_80379310(v1, v2, p4);
    if ((s32)(c0&0xff) != (s32)0) {
        v3 = M32(((u32)p3+12));
        if ((s32)v3 == (s32)1) {
            v4 = M32(((u32)p3+32));
            if ((s32)v4 != (s32)0) {
                v5 = lbl_805DDC70;
                v6 = M32(((u32)p3+16));
                v7 = M32(((u32)p3+24));
                fn_80378E34(v5, v6, v7, p4);
            }
        }
    }
    return c0;
}


