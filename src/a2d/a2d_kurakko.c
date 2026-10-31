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
extern u8 lbl_804F1004[];
extern u8 lbl_804BCF64[];
extern const float lbl_805E4A08;
extern u8 lbl_804F0ECC[];
extern u32 lbl_805DDB6C;
u32 fn_8034D1F8(u32);
u32 __cvt_fp2unsigned(u32, float);
float fn_8038D0E8(u32, u32, u32, float);
void fn_8036F214(u32, float);
u32 HSD_CObjLoadDesc(u32, u32);
u32 fn_80296264(u32, u32, u32, u32, float);
void fn_80374214(u32, u32, float, float, float);





extern u8 lbl_805DDC8C[1];
extern u8 lbl_804F20F0[];
extern u8 lbl_804F2308[];

s32 HVQM4PlayerExControlCheckNormal(s32* p) { return p[0x18 / 4] == 0; }

void fn_803773C8(s32 i) { lbl_805DDC8C[i] = 0; }

void fn_80377444(s32 i) { lbl_805DDC8C[i] = 0; }

void fn_80377454(s32 i) { lbl_805DDC8C[i] = 0; }

s32 fn_80377BF4(void) { return 0x16; }

u32 fn_80377BFC(s32 a, s32 i) { return ((u32*)lbl_804F20F0)[i * 4]; }

void* fn_803785B0(void) { return lbl_804F2308; }

void* fn_80371940(char* p)
{
    char* e = p + *(s32*)(p + 0x150) * 0x38;
    *(s32*)(p + 0x150) = *(s32*)e;
    *(s32*)(p + 0x154) = *(s32*)(p + 0x154) - 1;
    return e;
}

void* fn_803764CC(char* p)
{
    char* e = p + *(s32*)(p + 0x1a00) * 0x34;
    *(s32*)(p + 0x1a00) = *(s32*)e;
    *(s32*)(p + 0x1a04) = *(s32*)(p + 0x1a04) - 1;
    return e;
}

extern s32 lbl_805DD964;

void fn_803718F8(s32* p)
{
    p[0x150 / 4] = 0;
    lbl_805DD964 = (s32)p;
    p[0] = 1;
    p[0x38 / 4] = 2;
    p[0x70 / 4] = 3;
    p[0xa8 / 4] = 4;
    p[0xe0 / 4] = 5;
    p[0x118 / 4] = -1;
    p[0x154 / 4] = 6;
}

typedef struct {
    float a, b;
} FP;
typedef struct {
    FP* arr;
    s32 n;
} FA;

#if 0
s32 fn_80378568(FA* p)
{
    s32 n = p->n;
    float* arr = (float*)p->arr;
    s32 i;
    for (i = 1; i < n; i++) {
        if (arr[i * 2] < arr[i * 2 - 2]) {
            break;
        }
    }
    return i;
}
#endif

