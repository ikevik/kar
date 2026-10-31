typedef unsigned int u32;
typedef int s32;

extern s32 fn_8005E184();
extern void fn_8005E574();
extern void fn_8005E788();
extern void fn_8005B8AC();
extern void fn_8005E7D8(s32);
extern void fn_8005F59C(s32, u32, u32);
extern s32 fn_8005F6A8(s32, s32);
extern s32 fn_8005F5BC(s32, s32);
extern void lbLoadMusicLocation(s32);
extern u32 lbl_804F2978[];
extern u32 lbl_80569840[];

void fn_80378D9C(s32 a, s32 b)
{
    if (fn_8005E184()) {
        fn_8005E574();
    }
    lbLoadMusicLocation(b);
}

void fn_80378DDC(void)
{
    fn_8005E574();
    fn_8005E788();
    fn_8005B8AC();
}

void fn_80378E04(u32* p, s32 b) { fn_8005F59C(b, p[0x88 / 4], p[0x8c / 4]); }

void fn_80379298(void) { fn_8005E788(); }

void fn_803792B8(s32 a, s32 b) { fn_8005E7D8(b); }

s32 fn_803792DC(s32 a, s32 b, s32 c) { return fn_8005F6A8(b, c) != 0; }

s32 fn_80379310(s32 a, s32 b, s32 c) { return fn_8005F5BC(b, c) != 0; }

u32 fn_80379344(s32 a, s32 b)
{
    s32 i = b - 0x10000;
    if (i >= 0 && (u32)i < 0x3f) {
        return lbl_804F2978[i];
    }
    return 0;
}

u32 fn_80379374(s32 a, s32 b)
{
    if (b < 0x44) {
        return lbl_80569840[b];
    }
    return 0;
}

extern s32 lbl_805DDC70;

s32 fn_803799B8(s32* p)
{
    s32 r4 = p[0x10 / 4];
    if (r4 != -1) {
        fn_803792B8(lbl_805DDC70, r4);
        p[0x10 / 4] = -1;
        p[0x14 / 4] = -1;
        return 1;
    }
    return 0;
}
