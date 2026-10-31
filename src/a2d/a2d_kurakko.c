typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;

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
