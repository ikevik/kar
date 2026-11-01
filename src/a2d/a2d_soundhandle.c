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
extern u8 lbl_804F2B00[];
extern u8 lbl_804F2B14[];
extern u8 lbl_8048B3D0[];
extern u32 lbl_805DBBF8;
extern u32 lbl_805DBBF0;
extern u32 lbl_805DDB90;
void __assert();
u32 fn_8005E108();
u32 fn_80061834();
u32 fn_803AD760();
void fn_80379DE4();



u32 fn_80379CDC(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBBF8, (u32)&lbl_805DBBF0, 0);
    fn_80379DE4(c0, p3);
    return 0;
}
