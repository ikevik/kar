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
