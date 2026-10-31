typedef unsigned char u8;

extern u8 lbl_80557248[];
extern int lbl_805DD6C0;
extern int lbl_805DD6C4;
extern int lbl_805DD6C8;
extern int lbl_805DD6CC;
extern int lbl_805DD6F8;

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

