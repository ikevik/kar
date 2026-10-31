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
extern "C" {
extern u32 lbl_805DB0D0;
extern u32 lbl_805DB0C8;
extern u32 lbl_805DDBC0;
extern u8 lbl_804E8474[];
extern u8 lbl_804E83B0[];
float fn_8034011C(u32);
void fn_80340D88(u32, float);
float fn_803411F4(u32, u32);
void fn_80341490(u32, u32, float);
float fn_80341360(u32, u32);
void fn_80341694(u32, u32, float);
u32 fn_803AD760(u32, u32, u32, u32, u32);

void fn_8033FBC4(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    float d0;
    v1 = M32(((u32)p3+12));
    d0 = fn_803411F4(v1, p4);
    v2 = M32(((u32)p3+16));
    fn_80341490(v2, p4, d0);
}

void fn_8033FC0C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    float d0;
    v1 = M32(((u32)p3+12));
    d0 = fn_80341360(v1, p4);
    v2 = M32(((u32)p3+16));
    fn_80341694(v2, p4, d0);
}



void fn_8033FBBC(void) {}

void fn_8033FBC0(void) {}

void fn_8034148C(void) {}

void fn_8034185C(void) {}




u32 fn_80341FE0(u32 p3) {
    return p3 == 0 ? (u32)lbl_804E83B0 : (u32)lbl_804E8474;
}


u32 fn_80341F90(void) {
    return M32(fn_803AD760(lbl_805DDBC0, 0, (u32)&lbl_805DB0D0, (u32)&lbl_805DB0C8, 0) + 20) == 1 ? (u32)lbl_804E83B0 : (u32)lbl_804E8474;
}

}
