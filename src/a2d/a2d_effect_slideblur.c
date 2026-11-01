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
typedef struct { u8 p[5]; u8 f; } A6_5_u8;
typedef struct { u8 p[4]; u8 f; u8 q[1]; } A6_4_u8;
typedef struct { u8 p[3]; u8 f; u8 q[2]; } A6_3_u8;
typedef struct { u8 p[2]; u8 f; u8 q[3]; } A6_2_u8;
typedef struct { u8 p[1]; u8 f; u8 q[4]; } A6_1_u8;
extern u8 lbl_804F40A0[];
extern u32 lbl_805DDC78;
extern u8 lbl_804F4280[];
extern u8 hsdJObj[];
u32 HSD_CObjLoadDesc();
u32 fn_8028B11C();
void memset();
void fn_8028B050();
void fn_80382B44();


u32 fn_80381A44(void) {
    return (u32)lbl_804F40A0;
}

u32 fn_803824EC(u32 p3) {
    u32 c0;
    u32 c1;
    lbl_805DDC78 = p3;
    c0 = HSD_CObjLoadDesc((u32)lbl_804F4280);
    M32(p3) = c0;
    M8(((u32)p3+24)) = 0;
    M32(((u32)p3+56)) = 0;
    c1 = fn_8028B11C(640, 480);
    M32(((u32)p3+28)) = c1;
    memset((p3+32), 24, 0);
    fn_8028B050((p3+32), 128, 128, 5);
    return p3;
}

void fn_8038256C(u32 p3) {
    u32 v35;
    u32 v34;
    u32 v33;
    A6_5_u8* v32;
    u32 v31;
    u32 v30;
    u32 v29;
    A6_4_u8* v28;
    u32 v27;
    A6_3_u8* v26;
    u32 v25;
    A6_2_u8* v24;
    u32 v23;
    A6_1_u8* v22;
    u32 v21;
    u32 v20;
    u32 v19;
    u32 v18;
    u32 v17;
    u32 v16;
    u32 v15;
    A6_4_u8* v14;
    u32 v13;
    A6_3_u8* v12;
    u32 v11;
    A6_2_u8* v10;
    u32 v9;
    A6_1_u8* v8;
    u32 v7;
    u32 v6;
    A6_1_u8* v5;
    u32 v4;
    u32 v3;
    u32 v2;
    u32 v1;
    u32 stk[3];
    v1 = M32(((u32)p3+56));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)p3+62));
        if ((u32)v2 != (u32)0) {
            M8(((u32)p3+62)) = (v2-1);
            v35 = p3;
        } else {
            v3 = M16(((u32)p3+60));
            v4 = M8((v1+(v3*6)));
            if ((s32)v4 != (s32)2) {
                if ((s32)v4 < (s32)2) {
                    if ((s32)v4 == (s32)0) goto L29;
                    if ((s32)v4 >= (s32)0) goto L32;
                    v35 = p3;
                    goto L89;
                }
                if ((s32)v4 == (s32)4) goto L83;
                if ((s32)v4 >= (s32)4) {
                    v35 = p3;
                    goto L89;
                }
                goto L59;
    L29:;
                M16(((u32)p3+60)) = (v3+1);
                v35 = p3;
                goto L89;
    L32:;
                v5 = (A6_1_u8*)(v1);
                v6 = v5[v3].f;
                M8(((u32)p3+62)) = v6;
                v7 = M16(((u32)p3+60));
                M16(((u32)p3+60)) = (v7+1);
                v35 = v7;
                goto L89;
            }
            v22 = (A6_1_u8*)(v1);
            v23 = v22[v3].f;
            v24 = (A6_2_u8*)(v1);
            v25 = v24[v3].f;
            v26 = (A6_3_u8*)(v1);
            v27 = v26[v3].f;
            v28 = (A6_4_u8*)(v1);
            v29 = v28[v3].f;
            M8((u8*)stk+8) = v23;
            M8((u8*)stk+9) = v25;
            M8((u8*)stk+10) = v27;
            M8((u8*)stk+11) = v29;
            v30 = M32((u8*)stk+8);
            M32((u8*)stk+0) = v30;
            v31 = M32(((u32)p3+12));
            M32((u8*)stk+4) = v31;
            v32 = (A6_5_u8*)(v1);
            v33 = v32[v3].f;
            fn_80382B44(p3, (u32)((u8*)stk+4), (u32)((u8*)stk+0), v33, 1, v25, v23, (v1+(v3*6)));
            v34 = M16(((u32)p3+60));
            M16(((u32)p3+60)) = (v34+1);
            v35 = v34;
            goto L89;
    L59:;
            v8 = (A6_1_u8*)(v1);
            v9 = v8[v3].f;
            v10 = (A6_2_u8*)(v1);
            v11 = v10[v3].f;
            v12 = (A6_3_u8*)(v1);
            v13 = v12[v3].f;
            v14 = (A6_4_u8*)(v1);
            v15 = v14[v3].f;
            M8((u8*)stk+8) = v9;
            M8(((u32)p3+12)) = v9;
            M8(((u32)p3+13)) = v11;
            M8(((u32)p3+14)) = v13;
            M8(((u32)p3+15)) = v15;
            v16 = M8(((u32)p3+12));
            M8((u8*)stk+9) = v11;
            M8(((u32)p3+4)) = v16;
            v17 = M8(((u32)p3+13));
            M8((u8*)stk+10) = v13;
            M8(((u32)p3+5)) = v17;
            v18 = M8(((u32)p3+14));
            M8((u8*)stk+11) = v15;
            M8(((u32)p3+6)) = v18;
            v19 = M8(((u32)p3+15));
            M8(((u32)p3+7)) = v19;
            v20 = M16(((u32)p3+60));
            M16(((u32)p3+60)) = (v20+1);
            v35 = v20;
            goto L89;
    L83:;
            M32(((u32)p3+56)) = 0;
            v21 = M8(((u32)p3+63));
            if ((u32)v21 == (u32)0) {
                M8(((u32)p3+24)) = 0;
                v35 = 0;
            } else {
                v35 = 0;
            }
        }
    } else {
        v35 = p3;
    }
    L89:;
}

void fn_80382BC8(u32 p3, u32 p4, u32 p5) {
    M8(((u32)p3+24)) = 0;
    M8(((u32)p3+62)) = 0;
    M16(((u32)p3+60)) = 0;
    M32(((u32)p3+56)) = p4;
    M8(((u32)p3+63)) = p5;
    M8(((u32)p3+12)) = 0;
    M8(((u32)p3+13)) = 0;
    M8(((u32)p3+14)) = 0;
    M8(((u32)p3+15)) = 0;
}

void fn_80382C8C(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 v1;
    v1 = M32(((u32)(u32)hsdJObj+72));
    ((void (*)(u32,u32,u32,u32,u32,u32))(v1))(p3, p4, p5, p6, p7, (u32)hsdJObj);
}


