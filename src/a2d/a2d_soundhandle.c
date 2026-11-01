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
extern u32 lbl_805DBBE8;
extern u32 lbl_805DBBE0;
extern u32 lbl_805DDAF4;
extern u8 lbl_804F2B30[];
extern u8 fn_80433098[];
extern u8 fn_804328A0[];
extern u8 fn_8042B6A0[];
void fn_80379D28(void);
extern u32 lbl_805DE36C;
void __assert();
u32 fn_8005E108();
u32 fn_80061834();
u32 fn_803AD760();
void fn_80379DE4();
void fn_8042AD44();
void fn_80430298();
void fn_80437BF0();
void fn_8040ADCC();
void fn_8040DC60();
void fn_8040DC68();
void fn_80059520(u32, ...);
void fn_8042ABE8();



u32 fn_80379CDC(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = lbl_805DDB90;
    c0 = fn_803AD760(v1, 0, (u32)&lbl_805DBBF8, (u32)&lbl_805DBBF0, 0);
    fn_80379DE4(c0, p3);
    return 0;
}




