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
extern u8 HSD_AObjClearFlags[];
extern u8 HSD_AObjSetRewindFrame[];
extern u8 HSD_AObjSetEndFrame[];
extern u8 HSD_AObjSetFlags[];
u32 fn_802897A0(u32, u32);
u32 fn_80289834(u32, u32);
extern u32 lbl_805D7600;
extern u32 lbl_805D7608;
extern const float lbl_805E3318;
float fn_802898CC(u32, u32);
float fn_80289974(u32, u32);
extern u32 lbl_805DDBF8;
void fn_803FCDB8(u32, ...);
u32 HSD_AObjGetFlags();
void __assert();
void fn_80052FB8();
u32 GXGetTexBufferSize();
u32 HSD_Alloc();
void HSD_Free();
extern s32 fn_803FB178(void*);
extern void HSD_AObjReqAnim();
extern void HSD_AObjSetCurrentFrame();
extern void HSD_AObjSetRate();
extern char lbl_805D7610[4];

void fn_802895C8(u32 p3, u32 p4, float q1, float q2) {
    fn_803FCDB8(p3, 6, p4, (u32)HSD_AObjClearFlags, 3, (8192<<16));
    fn_803FCDB8(p3, 6, p4, (u32)HSD_AObjSetRewindFrame, 1, q1);
    fn_803FCDB8(p3, 6, p4, (u32)HSD_AObjSetEndFrame, 1, q2);
}

void fn_8028967C(u32 p3, u32 p4, float q1, float q2) {
    fn_803FCDB8(p3, 6, p4, (u32)HSD_AObjSetFlags, 3, (8192<<16));
    fn_803FCDB8(p3, 6, p4, (u32)HSD_AObjSetRewindFrame, 1, q1);
    fn_803FCDB8(p3, 6, p4, (u32)HSD_AObjSetEndFrame, 1, q2);
}

u32 fn_802897A0(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = HSD_AObjGetFlags();
    if ((s32)(c0&0x40000000) == (s32)0) {
        v1 = M32(p4);
        M32(p4) = (v1+1);
        v2 = v1;
    } else {
        v2 = c0;
    }
    return v2;
}

u32 fn_802897E0(u32 p3) {
    u32 stk[1];
    u32 v1;
    M32((u8*)stk+0) = 0;
    fn_803FCDB8(p3, 6, ((1<<16)-1), (u32)fn_802897A0, 2, (u32)((u8*)stk+0));
    v1 = M32((u8*)stk+0);
    return ((u32)__cntlzw(v1)>>5);
}

u32 fn_80289834(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 c0;
    c0 = HSD_AObjGetFlags();
    if ((s32)(c0&0x4000000) != (s32)0) {
        v1 = M32(p4);
        M32(p4) = (v1+1);
        v2 = v1;
    } else {
        v2 = c0;
    }
    return v2;
}

u32 fn_80289874(u32 p3) {
    u32 stk[1];
    u32 v1;
    M32((u8*)stk+0) = 0;
    fn_803FCDB8(p3, 6, ((1<<16)-1), (u32)fn_80289834, 2, (u32)((u8*)stk+0));
    v1 = M32((u8*)stk+0);
    return (((-(s32)v1)|v1)>>31);
}

float fn_802898CC(u32 p3, u32 p4) {
    float v1;
    float v2;
    if ((s32)p3 == (s32)0) {
        __assert((u32)&lbl_805D7600, 171, (u32)&lbl_805D7608);
    }
    v1 = MF(((u32)p3+12));
    v2 = MF(p4);
    if (v2 < v1) {
        MF(p4) = v1;
    }
    return v1;
}

float fn_80289928(u32 p3) {
    u32 stk[1];
    float v1;
    float v2;
    v1 = lbl_805E3318;
    MF((u8*)stk+0) = v1;
    fn_803FCDB8(p3, 6, ((1<<16)-1), (u32)fn_802898CC, 2, (u32)((u8*)stk+0));
    v2 = MF((u8*)stk+0);
    return v2;
}

float fn_80289974(u32 p3, u32 p4) {
    float v1;
    float v2;
    if ((s32)p3 == (s32)0) {
        __assert((u32)&lbl_805D7600, 149, (u32)&lbl_805D7608);
    }
    v1 = MF(((u32)p3+4));
    v2 = MF(p4);
    if (v2 < v1) {
        MF(p4) = v1;
    }
    return v1;
}

float fn_802899D0(u32 p3) {
    u32 stk[1];
    float v1;
    float v2;
    v1 = lbl_805E3318;
    MF((u8*)stk+0) = v1;
    fn_803FCDB8(p3, 6, ((1<<16)-1), (u32)fn_80289974, 2, (u32)((u8*)stk+0));
    v2 = MF((u8*)stk+0);
    return v2;
}

void fn_8028AC78(void) {
    fn_80052FB8();
}

u32 fn_8028B050(u32 p3, u32 p4, u32 p5, u32 p6) {
    float v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 c0;
    u32 c1;
    v1 = lbl_805E3318;
    M16(((u32)p3+4)) = p4;
    M16(((u32)p3+6)) = p5;
    M32(((u32)p3+12)) = 0;
    MF(((u32)p3+16)) = v1;
    MF(((u32)p3+20)) = v1;
    M32(((u32)p3+8)) = p6;
    v2 = M16(((u32)p3+4));
    v3 = M16(((u32)p3+6));
    v4 = M32(((u32)p3+8));
    c0 = GXGetTexBufferSize(v2, v3, v4, 0, 0);
    c1 = HSD_Alloc(((c0+31)&0xffffffe0));
    M32(p3) = c1;
    v5 = lbl_805DDBF8;
    lbl_805DDBF8 = (v5+1);
    return p3;
}

u32 fn_8028B0D0(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = M32(p3);
    if ((u32)v1 != (u32)0) {
        HSD_Free(v1);
        M32(p3) = 0;
        v2 = lbl_805DDBF8;
        lbl_805DDBF8 = (v2-1);
        v3 = v2;
    } else {
        v3 = v1;
    }
    return v3;
}


