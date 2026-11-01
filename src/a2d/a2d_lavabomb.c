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
extern u8 lbl_804E2110[];
extern u32 lbl_805DDB2C;
extern u32 lbl_805DD9B0;
extern u32 lbl_805DD9B4;
extern u32 lbl_805DD9AC;
extern const float lbl_805E4008;
extern const float lbl_805E4018;
void fn_8038CB78();
void fn_80289590(u32, u32, float);
void fn_80289768(u32, u32, float);
void fn_80289730(u32, u32, float);
typedef struct Node {
    s32 pad;
    struct Node* prev;
    struct Node* next;
} Node;

u32 fn_8032188C(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804E2110;
        lbl_805DDB2C = 0;
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3, (u32)lbl_804E2110);
        }
    }
    return p3;
}

s32 fn_80321CC0(Node* n)
{
    s32 r = 0;
    if (n->prev != 0 || n->next != 0 || (Node*)lbl_805DD9B0 == n) {
        r = 1;
    }
    return r;
}

u32 fn_80321CF4(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    v1 = lbl_805DD9B0;
    if ((u32)v1 != (u32)0) {
        M32(((u32)p3+8)) = v1;
        v2 = lbl_805DD9B0;
        M32(((u32)v2+4)) = p3;
        lbl_805DD9B0 = p3;
    } else {
        lbl_805DD9B4 = p3;
        lbl_805DD9B0 = p3;
    }
    v3 = lbl_805DD9AC;
    lbl_805DD9AC = (v3+1);
    return v3;
}

u32 fn_80321D2C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    v1 = lbl_805DD9B0;
    if ((u32)v1 != (u32)0) {
        v2 = lbl_805DD9B4;
        M32(((u32)p3+4)) = v2;
        v3 = lbl_805DD9B4;
        M32(((u32)v3+8)) = p3;
        lbl_805DD9B4 = p3;
        v4 = v2;
    } else {
        lbl_805DD9B4 = p3;
        lbl_805DD9B0 = p3;
        v4 = v1;
    }
    v5 = lbl_805DD9AC;
    lbl_805DD9AC = (v5+1);
    return v5;
}

u32 fn_80321D68(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 == (u32)0) {
        v2 = M32(((u32)p3+8));
        lbl_805DD9B0 = v2;
        if ((u32)v2 == (u32)0) goto L12;
        M32(((u32)v2+4)) = 0;
    } else {
        v3 = M32(((u32)p3+8));
        M32(((u32)v1+8)) = v3;
    }
    L12:;
    v4 = M32(((u32)p3+8));
    if ((u32)v4 == (u32)0) {
        v5 = M32(((u32)p3+4));
        lbl_805DD9B4 = v5;
        if ((u32)v5 == (u32)0) goto L24;
        M32(((u32)v5+8)) = 0;
    } else {
        v6 = M32(((u32)p3+4));
        M32(((u32)v4+4)) = v6;
    }
    L24:;
    M32(((u32)p3+8)) = 0;
    M32(((u32)p3+4)) = 0;
    v7 = lbl_805DD9AC;
    lbl_805DD9AC = (v7-1);
    return v7;
}

void fn_80321E54(u32 p3, u32 p4) {
    float v8;
    float v7;
    float v6;
    u32 v5;
    float v4;
    u32 v3;
    u32 v2;
    float v1;
    v1 = lbl_805E4008;
    v2 = M32(((u32)p4+4));
    fn_80289590(v2, ((1<<16)-1), v1);
    v3 = M32(((u32)p4+4));
    v4 = lbl_805E4008;
    fn_80289768(v3, ((1<<16)-1), v4);
    v5 = M32(((u32)p4+4));
    v6 = lbl_805E4008;
    fn_80289730(v5, ((1<<16)-1), v6);
    v7 = lbl_805E4008;
    M32(p4) = 0;
    v8 = lbl_805E4018;
    M32(((u32)p4+8)) = 0;
    MF(((u32)p4+16)) = v7;
    MF(((u32)p4+12)) = v7;
    MF(((u32)p4+76)) = v8;
}

void fn_80321CBC(void) {}


