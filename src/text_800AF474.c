#pragma dont_inline on
typedef unsigned char u8;

extern int HSD_CObjGetViewportf();
extern int HSD_FogSetCurrent();
extern int HSD_Free();
extern int HSD_LObjAnimAll();
extern int HSD_ObjAlloc();
extern int fn_80053F34();
extern int fn_80056494();
extern int fn_8005D64C();
extern int fn_8005DED0();
extern int fn_8005E08C();
extern int fn_8005E108();
extern int fn_80065AE4();
extern int fn_80068D68();
extern int fn_8006E5A4();
extern int fn_8007125C();
extern int fn_8007133C();
extern int fn_800793B8();
extern int fn_8007A598();
extern int fn_8007AD58();
extern int fn_8018C2E4();
extern int fn_802339C4();
extern int fn_802361A0();
extern int fn_8023624C();
extern int fn_8027B600();
extern int fn_8040A64C();
extern int fn_8042A22C();
typedef struct { u8 pad[168]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_168_1_1;
typedef struct { u8 pad[168]; unsigned a:2; unsigned f:1; unsigned b:5; } BF_168_2_1;
typedef struct { u8 pad[168]; unsigned a:3; unsigned f:1; unsigned b:4; } BF_168_3_1;
typedef struct { u8 pad[168]; unsigned a:4; unsigned f:1; unsigned b:3; } BF_168_4_1;
typedef struct { u8 pad[168]; unsigned a:5; unsigned f:1; unsigned b:2; } BF_168_5_1;
typedef struct { u8 pad[168]; unsigned a:6; unsigned f:1; unsigned b:1; } BF_168_6_1;
typedef struct { u8 pad[168]; unsigned a:7; unsigned f:1; } BF_168_7_1;
typedef struct { u8 pad[168]; unsigned f:1; unsigned b:7; } BF_168_0_1;
typedef struct { u8 pad[169]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_169_1_1;
typedef struct { u8 pad[169]; unsigned a:2; unsigned f:1; unsigned b:5; } BF_169_2_1;
typedef struct { u8 pad[169]; unsigned a:3; unsigned f:1; unsigned b:4; } BF_169_3_1;
typedef struct { u8 pad[169]; unsigned a:4; unsigned f:1; unsigned b:3; } BF_169_4_1;
typedef struct { u8 pad[169]; unsigned a:5; unsigned f:1; unsigned b:2; } BF_169_5_1;
typedef struct { u8 pad[169]; unsigned a:6; unsigned f:1; unsigned b:1; } BF_169_6_1;
typedef struct { u8 pad[169]; unsigned a:7; unsigned f:1; } BF_169_7_1;
typedef struct { u8 pad[169]; unsigned f:1; unsigned b:7; } BF_169_0_1;
typedef struct { u8 pad[170]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_170_1_1;
typedef struct { u8 pad[170]; unsigned a:2; unsigned f:1; unsigned b:5; } BF_170_2_1;
typedef struct { u8 pad[170]; unsigned f:1; unsigned b:7; } BF_170_0_1;
typedef struct { u8 pad[300]; unsigned a:1; unsigned f:1; unsigned b:6; } BF_300_1_1;
typedef struct { u8 pad[300]; unsigned a:3; unsigned f:1; unsigned b:4; } BF_300_3_1;
typedef struct { u8 pad[300]; unsigned f:1; unsigned b:7; } BF_300_0_1;
typedef struct { unsigned a:1; unsigned f:2; unsigned b:5; } BF_0_1_2;
typedef struct { unsigned a:3; unsigned f:2; unsigned b:3; } BF_0_3_2;
typedef struct { unsigned f:1; unsigned b:7; } BF_0_0_1;
extern u8 lbl_80557248[];
extern int lbl_805D6360;
extern int lbl_805DD6C0;
extern int lbl_805DD6C4;
extern int lbl_805DD6C8;
extern int lbl_805DD6CC;
extern int lbl_805DD6F8;
extern int lbl_805DD714;
typedef struct { int w[3]; } S12;
typedef struct { int w[10]; } S40;

int fn_800AFC9C(void)
{

    return 0;
}

int fn_800AFE60(void)
{

    return 0;
}

void fn_800AFE68(void)
{

}

void fn_800AFF14(void)
{

}

int fn_800AFF18(void)
{

    return 0;
}

void fn_800B00C0(void)
{

}

int fn_800B7FD4(void)
{

    return 32;
}

void fn_800B8DBC(int a1, int a2)
{
    *(short*)((u8*)(a1) + 166) = a2;
}

float fn_800B8F20(int a1, float fa1)
{
    *(float*)((u8*)(a1) + 140) = fa1;
    return fa1;
}

float fn_800B8F28(int a1, float fa1)
{
    *(float*)((u8*)(a1) + 216) = fa1;
    return fa1;
}

float fn_800B8F30(int a1, float fa1)
{
    *(float*)((u8*)(a1) + 148) = fa1;
    return fa1;
}

float fn_800B8FA8(int a1, int a2, float fa1)
{
    *(int*)((u8*)(a1) + 220) = a2;
    *(float*)((u8*)(a1) + 224) = fa1;
    return fa1;
}

void fn_800B9090(int a1, int a2)
{
    *(int*)((u8*)(a1) + 208) = a2;
}

float fn_800B9098(int a1, float fa1)
{
    *(float*)((u8*)(a1) + 212) = fa1;
    return fa1;
}

void fn_800B90A0(int a1, int a2)
{
    *(int*)((u8*)(a1) + 228) = a2;
}

float fn_800BBC3C(void)
{

    return (*(float*)((u8*)((*(int*)((u8*)((int)lbl_80557248) + 564))) + 0));
}

float fn_800BBC50(void)
{

    return (*(float*)((u8*)((*(int*)((u8*)((int)lbl_80557248) + 564))) + 4));
}

float fn_800BBC64(void)
{

    return (*(float*)((u8*)((*(int*)((u8*)((int)lbl_80557248) + 564))) + 8));
}

float fn_800BBC78(void)
{

    return (*(float*)((u8*)((*(int*)((u8*)((int)lbl_80557248) + 564))) + 12));
}

void fn_800BC3DC(void)
{

}

void fn_800BCBA0(void)
{

}

void fn_800C2BF0(void)
{

}

void fn_800C9294(void)
{

}

int fn_800C9298(void)
{

    return 20;
}

int fn_800C9A38(void)
{

    return (*(int*)((u8*)((*(int*)((u8*)((int)lbl_80557248) + 564))) + 868));
}

void fn_800C9DB8(void)
{

}

int fn_800C9DBC(void)
{

    return (*(int*)((u8*)((*(int*)((u8*)((int)lbl_80557248) + 564))) + 896));
}

void fn_800CA160(void)
{

}

int fn_800CA164(void)
{

    return 15;
}

int fn_800CB3A0(void)
{

    return (*(short*)((u8*)((*(int*)((u8*)((int)lbl_80557248) + 564))) + 924));
}

void fn_800CC1F4(void)
{

}

int fn_800CC1F8(void)
{

    return (*(int*)((u8*)((*(int*)((u8*)((int)lbl_80557248) + 564))) + 1036));
}

void fn_800CD5E0(void)
{

}

int fn_800CDCA4(void)
{

    return 60;
}

void fn_800CE1D0(void)
{

}

void fn_800CE6D4(void)
{

}

int fn_800CEAA4(void)
{

    return (*(unsigned char*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 4))) + 129));
}

float grGetGroundMinimapScale(void)
{

    return (*(float*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 4))) + 96));
}

int fn_800D0DCC(void)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 32))) + 12))) + 8));
}

int fn_800D0EB8(void)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 32))) + 16))) + 8));
}

int fn_800D0FA4(void)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 32))) + 20))) + 8));
}

int fn_800D1D3C(void)
{

    return (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 4));
}

float fn_800D4684(void)
{

    return (*(float*)((u8*)((*(int*)&lbl_805DD6C8)) + 1416));
}

int fn_800D51BC(void)
{

    return (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 144));
}

int fn_800D540C(void)
{

    return 15;
}

int fn_800D55E4(void)
{

    return (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 120));
}

void fn_800D8A4C(int a1)
{
    *(int*)((u8*)(a1) + 0) = 0;
    *(int*)((u8*)(a1) + 4) = 0;
    *(int*)((u8*)(a1) + 8) = 0;
}

int fn_800DC988(int a1, int a2)
{

    return (((unsigned)(*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 40))) + (a2 * 28)))) + 48)) >> 4) & 255);
}

int fn_800DD998(int a1, int a2)
{

    return (*(unsigned short*)((u8*)((*(int*)((u8*)(a1) + 0))) + (a2 << 1)));
}

int fn_800DD9A8(int a1)
{

    return (*(unsigned short*)((u8*)(a1) + 4));
}

int fn_800DF4B0(int a1, int a2)
{

    return (*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + (a2 << 3)));
}

int fn_800DF4C0(int a1, int a2, int a3)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 48))) + (a2 << 3)))) + (a3 << 2)));
}

float fn_800E1E18(int a1, int a2, int a3, int a4, float fa1)
{
    *(int*)((u8*)(a1) + 0) = a2;
    *(float*)((u8*)(a1) + 4) = fa1;
    *(int*)((u8*)(a1) + 12) = a3;
    *(int*)((u8*)(a1) + 8) = a4;
    return fa1;
}

void fn_800E5B0C(int a1)
{
    *(int*)((u8*)(a1) + 0) = 0;
    *(int*)((u8*)(a1) + 4) = 0;
    *(int*)((u8*)(a1) + 8) = 0;
}

void fn_800E674C(int a1, int a2)
{
    *(int*)((u8*)(a1) + 0) = a2;
}

void fn_800E6754(void)
{

}

int fn_800E86CC(int a1, int a2, int a3)
{
    *(int*)((u8*)((a1 + (a3 * 72))) + 536) = a2;
    return (a1 + (a3 * 72));
}

void fn_800E9A4C(int a1)
{
    *(int*)((u8*)(a1) + 0) = 0;
    *(int*)((u8*)(a1) + 4) = 0;
    *(int*)((u8*)(a1) + 8) = 0;
    *(int*)((u8*)(a1) + 12) = 0;
    *(int*)((u8*)(a1) + 16) = 0;
}

void fn_800EC754(void)
{

}

int fn_800EE6C4(int a1)
{

    return (*(int*)((u8*)(a1) + 16));
}

int fn_800EE770(void)
{

    return (*(int*)&lbl_805DD6F8);
}

void fn_800F43FC(void)
{
    *(int*)&lbl_805DD6C0 = 0;
    *(int*)&lbl_805DD6C4 = 0;
}

void fn_800F5798(void)
{

}

int fn_800F8248(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 236));
}

void fn_800F8780(void)
{

}

void fn_800F8BC4(void)
{

}

void fn_800F8BC8(void)
{

}

void fn_800F902C(void)
{

}

int fn_800FAA88(int a1)
{

    return (((unsigned)(*(unsigned char*)((u8*)((*(int*)((u8*)(a1) + 44))) + 388)) >> 7) & 1);
}

int fn_80102034(void)
{

    return 0;
}

int fn_801097AC(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 308));
}

int fn_801097B8(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 308));
}

int fn_80109D74(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 308));
}

void fn_8010E098(void)
{

}

void fn_8010EC0C(void)
{

}

void fn_800D6724(int a1)
{
    *(int*)((u8*)(a1) + 0) = 0;
    *(int*)((u8*)(a1) + 8) = 0;
    *(int*)((u8*)(a1) + 16) = 0;
    *(int*)((u8*)(a1) + 24) = 0;
    *(int*)((u8*)(a1) + 32) = 0;
    *(int*)((u8*)(a1) + 40) = 0;
    *(int*)((u8*)(a1) + 48) = 0;
    *(int*)((u8*)(a1) + 56) = 0;
    *(int*)((u8*)(a1) + 64) = 0;
    *(int*)((u8*)(a1) + 4) = 0;
    *(int*)((u8*)(a1) + 12) = 0;
    *(int*)((u8*)(a1) + 20) = 0;
    *(int*)((u8*)(a1) + 28) = 0;
    *(int*)((u8*)(a1) + 36) = 0;
    *(int*)((u8*)(a1) + 44) = 0;
    *(int*)((u8*)(a1) + 52) = 0;
    *(int*)((u8*)(a1) + 60) = 0;
    *(int*)((u8*)(a1) + 68) = 0;
}

void fn_800AFE6C(int a1)
{
    *(S40*)((u8*)(a1) + 232) = *(S40*)((u8*)(a1) + 192);
}

void fn_800AFEC0(int a1, int a2)
{
    *(S40*)((u8*)(a1) + 192) = *(S40*)((u8*)(a2) + 0);
}

void fn_800B8DC4(int a1, int a2)
{
    *(S12*)((u8*)(a1) + 32) = *(S12*)((u8*)(a2) + 0);
}

void fn_800B8DE0(int a1, int a2)
{
    *(S12*)((u8*)(a1) + 44) = *(S12*)((u8*)(a2) + 0);
}

void fn_800B8DFC(int a1, int a2)
{
    *(S12*)((u8*)(a1) + 20) = *(S12*)((u8*)(a2) + 0);
}

void fn_800B8E18(int a1, int a2)
{
    *(S12*)((u8*)(a1) + 8) = *(S12*)((u8*)(a2) + 0);
}

void fn_800B8E34(int a1, int a2)
{
    *(S12*)((u8*)(a1) + 56) = *(S12*)((u8*)(a2) + 0);
}

void fn_800B8EE8(int a1, int a2)
{
    *(S12*)((u8*)(a1) + 184) = *(S12*)((u8*)(a2) + 0);
}

void fn_800B8F04(int a1, int a2)
{
    *(S12*)((u8*)(a1) + 196) = *(S12*)((u8*)(a2) + 0);
}

void fn_800B9054(int a1, int a2)
{
    *(S12*)((u8*)(a1) + 172) = *(S12*)((u8*)(a2) + 0);
}

void fn_800CEACC(int a1)
{
    *(S12*)((u8*)(a1) + 0) = *(S12*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 4))) + 100);
}

void fn_800D1E44(int a1, int a2)
{
    *(S12*)((u8*)(a2) + 0) = *(S12*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 124))) + (a1 * 28)))) + 12);
}

void fn_800DC630(int a1, int a2)
{
    *(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 360))) + 44))) + 28) = a2;
}

void fn_800FF44C(int a1, int a2)
{
    *(int*)((u8*)(a2) + 0) = (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 36))) + 12))) + 0))) + ((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 8))) + 0))) + 16)) << 2)));
}

int fn_800CEC28(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 48)) >> 4) & 255);
}

int fn_800CEC44(int a1)
{
    int t0;
    t0 = (*(int*)&lbl_805DD6C8);
    t0 += (a1 * 28);
    return (*(int*)((u8*)(t0) + 16));
}

int fn_800CEC58(int a1)
{
    int t0;
    t0 = (*(int*)&lbl_805DD6C8);
    t0 += (a1 * 28);
    return (*(int*)((u8*)(t0) + 20));
}

int fn_800CEC6C(int a1)
{
    int t0;
    t0 = (*(int*)&lbl_805DD6C8);
    t0 += (a1 * 28);
    return (*(int*)((u8*)(t0) + 24));
}

int fn_800D18F0(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 5) & 1);
}

int fn_800D190C(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 13) & 1);
}

int fn_800D1928(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 14) & 1);
}

int fn_800D1944(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 17) & 1);
}

int fn_800D19C8(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 19) & 1);
}

int fn_800D19E4(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 20) & 1);
}

int fn_800D1A00(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 21) & 1);
}

int fn_800D1A1C(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 22) & 1);
}

int fn_800D1A38(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    return (((unsigned)(*(int*)((u8*)(t0) + 52)) >> 23) & 1);
}

int fn_800DF49C(int a1, int a2)
{
    int t0;
    t0 = (*(int*)((u8*)(a1) + 48));
    t0 += (a2 << 3);
    return (*(int*)((u8*)(t0) + 4));
}

int fn_800DF4D8(int a1, int a2)
{
    int t0;
    t0 = (*(int*)((u8*)(a1) + 44));
    t0 += (a2 << 3);
    return (*(int*)((u8*)(t0) + 4));
}

int fn_800F3F34(int a1)
{
    int t0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD714)) + 4));
    t0 += (a1 * 92);
    return (*(short*)((u8*)(t0) + 76));
}

int fn_800B31B0(int a1, int a2)
{
    int c0;
    c0 = fn_800B2C6C(a1, a2, 1);
    return c0;
}

int fn_800B55B0(void)
{
    int c0;
    c0 = HSD_ObjAlloc((int)lbl_80557248);
    return c0;
}

int fn_800B6018(int a1)
{
    int c0;
    c0 = HSD_CObjGetViewportf((*(int*)((u8*)((*(int*)((u8*)(a1) + 380))) + 4)));
    return c0;
}

int fn_800B94C8(void)
{
    int c0;
    c0 = fn_800B3C10();
    return c0;
}

int fn_800C2F94(void)
{
    int c0;
    c0 = fn_800D4EC8();
    return c0;
}

int fn_800C2FB4(void)
{
    int c0;
    c0 = fn_800D4EF4();
    return c0;
}

int fn_800C34C8(int a1, int a2)
{
    int c0;
    c0 = fn_800C2FD4(a1, a2, 1);
    return c0;
}

int fn_800C34EC(int a1, int a2)
{
    int c0;
    c0 = fn_800C2FD4(a1, a2, 0);
    return c0;
}

int fn_800C9D84(int a1, int a2)
{
    int c0;
    *(int*)((u8*)(a1) + 384) = (*(int*)((u8*)(a2) + 0));
    c0 = fn_800CD924(((*(int*)((u8*)(a1) + 380)) + 208), 1);
    return c0;
}

int fn_800CEF84(int a1, int a2)
{
    int c0;
    c0 = fn_800E0E04((*(int*)&lbl_805DD6CC), a1, a2);
    return c0;
}

int fn_800D1960(int a1, int a2)
{
    int t0;
    int c0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    c0 = fn_800F50D8((*(int*)((u8*)((*(int*)((u8*)(t0) + 56))) + 144)), a1, a2, (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92)));
    return c0;
}

int fn_800D1F0C(int a1, int a2)
{
    int c0;
    c0 = fn_800DC9A0(((*(int*)&lbl_805DD6CC) + 84), a1, a2, (*(int*)&lbl_805DD6CC));
    return c0;
}

int fn_800D2750(void)
{
    int c0;
    c0 = fn_800F9F78();
    return c0;
}

int fn_800D2770(void)
{
    int c0;
    c0 = fn_800FA594();
    return c0;
}

int fn_800D2790(void)
{
    int c0;
    c0 = fn_800FA3C0();
    return c0;
}

int fn_800D29DC(void)
{
    int c0;
    c0 = fn_800E86DC();
    return c0;
}

int fn_800D29FC(void)
{
    int c0;
    c0 = fn_800E86DC();
    return c0;
}

int fn_800D2C5C(void)
{
    int c0;
    c0 = fn_800FB2BC();
    return c0;
}

int fn_800D518C(int a1, int a2)
{
    int c0;
    c0 = fn_800D790C(((*(int*)&lbl_805DD6CC) + 84), a1, a2, (*(int*)&lbl_805DD6CC));
    return c0;
}

int fn_800D53CC(int a1, int a2)
{
    int t0;
    int c0;
    t0 = (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92));
    t0 += (a1 << 6);
    c0 = fn_800F51A4((*(int*)((u8*)((*(int*)((u8*)(t0) + 56))) + 144)), a1, a2, (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92)));
    return c0;
}

int fn_800D5444(int a1)
{
    int c0;
    c0 = fn_800DC354((*(int*)&lbl_805DD6CC), a1);
    return c0;
}

int fn_800D546C(void)
{
    int c0;
    c0 = fn_800DC4C0((*(int*)&lbl_805DD6CC));
    return c0;
}

int fn_800D5F1C(void)
{
    int c0;
    c0 = fn_800EF6B0();
    return c0;
}

int fn_800D5FB0(void)
{
    int c0;
    c0 = fn_8042A22C();
    return c0;
}

int fn_800D6094(int a1)
{
    int c0;
    c0 = HSD_LObjAnimAll((*(int*)((u8*)(a1) + 40)));
    return c0;
}

int fn_800D60B8(void)
{
    int c0;
    c0 = fn_8042A22C();
    return c0;
}

int fn_800DBD18(int a1)
{
    int c0;
    c0 = fn_8040A64C((*(int*)((u8*)(a1) + 40)));
    return c0;
}

int fn_800DBD3C(int a1, int a2)
{
    int c0;
    c0 = fn_8040A64C((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 260))) + (a2 << 3))), a2);
    return c0;
}

int fn_800DBE18(int a1)
{
    int c0;
    c0 = fn_80056494((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 260))) + (a1 << 3))), (*(int*)&lbl_805DD6CC));
    return c0;
}

int fn_800DBF84(int a1)
{
    int c0;
    c0 = HSD_FogSetCurrent((*(int*)((u8*)(a1) + 40)));
    return c0;
}

int fn_800DE004(int a1, int a2)
{
    int c0;
    c0 = fn_800DA6BC(a2, (a1 + 84), 26, a1);
    return c0;
}

int fn_800DE0C8(void)
{
    int c0;
    c0 = fn_8006E5A4();
    return c0;
}

int fn_800DE264(void)
{
    int c0;
    c0 = fn_8007125C();
    return c0;
}

int fn_800DE2D4(int a1)
{
    int c0;
    c0 = fn_8007133C(a1, (*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 1792)));
    return c0;
}

int fn_800E63B0(int a1)
{
    int c0;
    c0 = fn_800E5798((a1 + 228));
    return c0;
}

int fn_800E9F30(void)
{
    int c0;
    c0 = fn_8005DED0();
    return c0;
}

int fn_800EA01C(int a1)
{
    int c0;
    c0 = fn_8005D64C((*(int*)((u8*)(a1) + 8)));
    return c0;
}

int fn_800EA040(int a1)
{
    int c0;
    c0 = fn_8005E08C((*(int*)((u8*)(a1) + 12)));
    return c0;
}

int fn_800EA064(void)
{
    int c0;
    c0 = fn_8005E08C();
    return c0;
}

int fn_800EA1D0(int a1)
{
    int c0;
    c0 = fn_8005E108((*(int*)((u8*)(a1) + 16)));
    return c0;
}

int fn_800EA6B8(int a1)
{
    int c0;
    c0 = fn_802339C4((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 4)));
    return c0;
}

int fn_800EDB68(void)
{
    int c0;
    c0 = HSD_Free();
    return c0;
}

int fn_800EEFB0(int a1)
{
    int c0;
    c0 = fn_80065AE4((*(int*)((u8*)(a1) + 1812)));
    return c0;
}

int fn_800EF6B0(void)
{
    int c0;
    c0 = fn_800793B8();
    return c0;
}

int fn_800EF864(int a1, int a2, int a3)
{
    int c0;
    c0 = fn_8007A598(a2, a3, (*(int*)((u8*)(a1) + 1816)));
    return c0;
}

int fn_800F440C(void)
{
    int c0;
    int c1;
    c0 = fn_800F8254();
    c1 = fn_800F82A0(c0);
    return c1;
}

int fn_800F579C(int a1, int a2, int a3, int a4, int a5)
{
    int t0;
    int c0;
    t0 = (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 8))) + 8));
    t0 += (a2 * 20);
    c0 = fn_800DB9A0(((*(int*)((u8*)(a1) + 44)) + 100), t0, a2, a3, a4, a5, (*(int*)((u8*)(a1) + 44)), a4);
    return c0;
}

int fn_800F5C68(int a1, int a2)
{
    int c0;
    c0 = fn_8040A64C((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 100))) + (a2 << 3))), a2);
    return c0;
}

int fn_800F6030(int a1, int a2)
{
    int c0;
    c0 = fn_80056494((*(int*)((u8*)((*(int*)((u8*)(a1) + 100))) + (a2 << 3))), a2);
    return c0;
}

int fn_800F63F0(int a1)
{
    int c0;
    c0 = fn_800E5F5C((a1 + 12));
    return c0;
}

int fn_800F6414(int a1)
{
    int c0;
    c0 = fn_800E5F6C((a1 + 12));
    return c0;
}

int fn_800F6438(int a1)
{
    int c0;
    c0 = fn_800E5798((a1 + 12));
    return c0;
}

int fn_800F728C(void)
{
    int c0;
    c0 = fn_802361A0();
    return c0;
}

int fn_800F72AC(void)
{
    int c0;
    c0 = fn_8023624C();
    return c0;
}

int fn_800F7368(int a1)
{
    int c0;
    c0 = fn_800D8B40((a1 + 100));
    return c0;
}

int fn_800F784C(int a1)
{
    int c0;
    c0 = fn_800E9A68((a1 + 280));
    return c0;
}

int fn_800F7E10(void)
{
    int c0;
    c0 = fn_80102464();
    return c0;
}

int fn_800F7E30(void)
{
    int c0;
    c0 = fn_800FB4E0();
    return c0;
}

int fn_800F7E50(void)
{
    int c0;
    c0 = fn_8010D9C0();
    return c0;
}

int fn_800F857C(int a1)
{
    int c0;
    c0 = fn_8018C2E4((*(int*)((u8*)(a1) + 236)));
    return c0;
}

int fn_800F9164(int a1)
{
    int c0;
    c0 = fn_80068D68((a1 + 188));
    return c0;
}

int fn_800FC078(int a1)
{
    int c0;
    c0 = HSD_Free((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 304)));
    return c0;
}

int fn_800FCE94(int a1)
{
    int c0;
    c0 = HSD_Free((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 304)));
    return c0;
}

int fn_800FED20(void)
{
    int c0;
    int c1;
    c0 = fn_800F446C(48);
    c1 = fn_800FED48(c0);
    return c1;
}

int fn_801097C4(int a1, int a2)
{
    int c0;
    c0 = fn_80053F34((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 304))) + 0)), 0, a2);
    return c0;
}

int fn_80109D80(int a1, int a2)
{
    int c0;
    c0 = fn_80053F34((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 304))) + 0)), 0, a2);
    return c0;
}

int fn_8010AB70(void)
{
    int c0;
    c0 = fn_8010AB90();
    return c0;
}

int fn_8010D200(int a1)
{
    int c0;
    c0 = fn_8027B600((*(int*)((u8*)((*(int*)((u8*)(a1) + 44))) + 320)));
    return c0;
}

int fn_8010E280(void)
{
    int c0;
    c0 = fn_800DB5D4((*(int*)&lbl_805DD6CC), (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 8))) + 8)), 0);
    return c0;
}

int fn_8010E2B4(void)
{
    int c0;
    c0 = fn_800DB654((*(int*)&lbl_805DD6CC), (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 8))) + 8)), 1);
    return c0;
}

int fn_8010E5B0(int a1)
{
    int c0;
    c0 = fn_800E85A8((*(int*)((u8*)(a1) + 44)), (int)&lbl_805D6360, 1);
    return c0;
}

int fn_8010E768(int a1, int a2)
{
    int t0;
    int c0;
    t0 = (*(int*)&lbl_805DD6CC);
    t0 += (a2 * 72);
    c0 = fn_800FD890((*(int*)((u8*)(t0) + 536)), a2);
    return c0;
}

int fn_8010E928(void)
{
    int c0;
    c0 = fn_800DB654((*(int*)&lbl_805DD6CC), (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 8))) + 8))) + 8)), 0);
    return c0;
}

int fn_800CEE08(int a1)
{

    return (((unsigned)(*(unsigned char*)((u8*)((*(int*)((u8*)((*(int*)&lbl_805DD6CC)) + 92))) + 60 + (a1 << 6))) >> 6) & 1);
}

int fn_800DDD1C(int a1, int a2)
{

    return (*(int*)((u8*)((*(int*)((u8*)(a1) + 116))) + 312 + (a2 * 320)));
}

int fn_800DDFEC(int a1, int a2)
{

    return ((*(int*)((u8*)((*(int*)((u8*)(a1) + 116))) + 312 + (a2 * 320))) + 8);
}

int fn_800EE6CC(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 0))) + 48))) + 4 + ((*(int*)((u8*)(a1) + 8)) * 12)));
}

int fn_800EE6EC(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 8 + ((*(int*)((u8*)(a1) + 8)) * 20)));
}

int fn_800EE708(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 12 + ((*(int*)((u8*)(a1) + 8)) * 20)));
}

int fn_800EE724(int a1, int a2)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 8 + (a2 * 20)));
}

int fn_800EE73C(int a1)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 16 + ((*(int*)((u8*)(a1) + 8)) * 20)));
}

int fn_800EE758(int a1, int a2)
{

    return (*(int*)((u8*)((*(int*)((u8*)((*(int*)((u8*)(a1) + 0))) + 4))) + 16 + (a2 * 20)));
}

int fn_800EF894(int a1, int a2, int a3, int a4)
{
    int c0;
    c0 = fn_8007AD58(a3, a4, (*(int*)((u8*)((*(int*)((u8*)(a1) + 32))) + 312 + (a2 * 320))), a4, (*(int*)((u8*)(a1) + 32)));
    return c0;
}

int fn_8010E504(int a1, int a2)
{
    int c0;
    c0 = fn_800FCBB4((*(int*)((u8*)(((*(int*)&lbl_805DD6CC) + (a2 * 72))) + 536)), a1, ((*(int*)&lbl_805DD6CC) + (a2 * 72)));
    return c0;
}

int fn_8010E538(int a1, int a2)
{
    int c0;
    c0 = fn_80101148((*(int*)((u8*)(((*(int*)&lbl_805DD6CC) + (a2 * 72))) + 536)), a1, ((*(int*)&lbl_805DD6CC) + (a2 * 72)));
    return c0;
}

void fn_800B8F38(int a1, int a2)
{
    ((BF_168_2_1*)(a1))->f = a2;
}

void fn_800B8F48(int a1, int a2)
{
    ((BF_168_3_1*)(a1))->f = a2;
}

void fn_800B8F58(int a1, int a2)
{
    ((BF_168_4_1*)(a1))->f = a2;
}

void fn_800B8F68(int a1, int a2)
{
    ((BF_168_5_1*)(a1))->f = a2;
}

void fn_800B8F78(int a1, int a2)
{
    ((BF_168_6_1*)(a1))->f = a2;
}

void fn_800B8F88(int a1, int a2)
{
    ((BF_168_7_1*)(a1))->f = a2;
}

void fn_800B8F98(int a1, int a2)
{
    ((BF_169_0_1*)(a1))->f = a2;
}

void fn_800B8FB4(int a1, int a2)
{
    ((BF_169_1_1*)(a1))->f = a2;
}

void fn_800B8FC4(int a1, int a2)
{
    ((BF_169_2_1*)(a1))->f = a2;
}

void fn_800B8FD4(int a1, int a2)
{
    ((BF_169_3_1*)(a1))->f = a2;
}

void fn_800B8FE4(int a1, int a2)
{
    ((BF_169_4_1*)(a1))->f = a2;
}

void fn_800B8FF4(int a1, int a2)
{
    ((BF_169_5_1*)(a1))->f = a2;
}

void fn_800B9004(int a1, int a2)
{
    ((BF_169_6_1*)(a1))->f = a2;
}

void fn_800B9014(int a1, int a2)
{
    ((BF_169_7_1*)(a1))->f = a2;
}

void fn_800B9024(int a1, int a2)
{
    ((BF_170_0_1*)(a1))->f = a2;
}

void fn_800B9034(int a1, int a2)
{
    ((BF_170_1_1*)(a1))->f = a2;
}

void fn_800B9044(int a1, int a2)
{
    ((BF_170_2_1*)(a1))->f = a2;
}

void fn_800B9070(int a1, int a2)
{
    ((BF_168_0_1*)(a1))->f = a2;
}

void fn_800B9080(int a1, int a2)
{
    ((BF_168_1_1*)(a1))->f = a2;
}

void fn_800CD8E4(int a1)
{
    ((BF_0_1_2*)(a1))->f = 0;
    ((BF_0_3_2*)(a1))->f = 0;
    *(int*)((u8*)(a1) + 4) = 0;
    ((BF_0_0_1*)(a1))->f = 0;
    *(int*)((u8*)(a1) + 44) = 0;
    *(int*)((u8*)(a1) + 40) = 0;
    *(int*)((u8*)(a1) + 60) = 0;
    *(int*)((u8*)(a1) + 56) = 0;
}

void fn_800F91C8(int a1)
{
    ((BF_300_0_1*)(a1))->f = 1;
    ((BF_300_1_1*)(a1))->f = 1;
}

void fn_800F91E8(int a1)
{
    ((BF_300_3_1*)(a1))->f = 1;
}

void fn_800F91FC(int a1)
{
    ((BF_300_3_1*)(a1))->f = 1;
}

