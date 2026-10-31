#include <dolphin/gx/gxtypes.h>

typedef struct HSD_MatState {
    GXColor ambient;
    GXColor diffuse;
    GXColor specular;
    u8 alpha;
    f32 shininess;
} HSD_MatState;

extern HSD_MatState lbl_80589260;

extern u8 lbl_805DE1C4;
extern s32 lbl_805DE1C0;
extern s32 lbl_805DE1B4;
extern s32 lbl_805DE1B0;
extern s32 lbl_805DE1AC;
extern s32 lbl_805DE1A8;
extern s32 lbl_805DE1A4;
extern u8 lbl_805DE1A0;
extern s32 lbl_805DE19C;
extern u8 lbl_805DE198;
extern u8 lbl_805DE1BC;
extern s32 lbl_805DE1B8;
extern s32 lbl_805DE194;
extern u8 lbl_805DE190;
extern s32 lbl_805DE18C;
extern s32 lbl_805DE188;
extern u8 lbl_805DE186;
extern u8 lbl_805DE185;
extern u8 lbl_805DE184;
extern u8 lbl_805DE183;
extern u8 lbl_805DE182;
extern u8 lbl_805DE181;
extern u8 lbl_805DE180;

extern void GXSetLineWidth(u8 width, s32 fmt);
extern void fn_803CC518(s32 mode);
extern void fn_803CF820(s32 type, s32 src, s32 dst, s32 op);
extern void fn_803CF8CC(u8 enable, s32 func, u8 update);
extern void fn_803CC474(u8 size, s32 fmt);
extern void fn_803CF05C(s32 comp0, u8 ref0, s32 op, s32 comp1, u8 ref1);
extern void fn_803CF874(u8 enable);
extern void fn_803CF8A0(u8 enable);
extern void fn_803CFA4C(u8 enable, u8 alpha);
extern void fn_803CF900(u8 enable);
extern void fn_803CFA20(u8 enable);

void HSD_SetMaterialColor(GXColor* ambient, GXColor* diffuse, GXColor* specular, f32 alpha)
{
    f32 a;
    lbl_80589260.ambient = *ambient;
    lbl_80589260.diffuse = *diffuse;
    lbl_80589260.specular = *specular;
    a = 0.0f;
    if (!(alpha <= a)) {
        a = 1.0f;
        if (!(alpha >= a))
            a = alpha;
    }
    lbl_80589260.alpha = (u8) (255.0f * a);
}

void HSD_SetMaterialShininess(f32 shininess)
{
    lbl_80589260.shininess = shininess;
}

void HSD_StateSetLineWidth(u8 width, s32 fmt)
{
    if (lbl_805DE1C4 != width || lbl_805DE1C0 != fmt) {
        GXSetLineWidth(width, fmt);
        lbl_805DE1C4 = width;
        lbl_805DE1C0 = fmt;
    }
}

void HSD_StateSetCullMode(s32 mode)
{
    if (lbl_805DE1B4 != mode) {
        fn_803CC518(mode);
        lbl_805DE1B4 = mode;
    }
}

void HSD_StateSetBlendMode(s32 type, s32 src, s32 dst, s32 op)
{
    if (lbl_805DE1B0 != type || lbl_805DE1AC != src || lbl_805DE1A8 != dst || lbl_805DE1A4 != op) {
        fn_803CF820(type, src, dst, op);
        lbl_805DE1B0 = type;
        lbl_805DE1AC = src;
        lbl_805DE1A8 = dst;
        lbl_805DE1A4 = op;
    }
}

void fn_803F85C8(s32 enable, s32 func, s32 update)
{
    u32 e = enable != 0;
    u32 u = update != 0;
    if (lbl_805DE1A0 != e || lbl_805DE19C != func || lbl_805DE198 != u) {
        fn_803CF8CC(e, func, u);
        lbl_805DE1A0 = e;
        lbl_805DE19C = func;
        lbl_805DE198 = u;
    }
}

void HSD_StateSetPointSize(u8 size, s32 fmt)
{
    if (lbl_805DE1BC != size || lbl_805DE1B8 != fmt) {
        fn_803CC474(size, fmt);
        lbl_805DE1BC = size;
        lbl_805DE1B8 = fmt;
    }
}

void HSD_StateSetAlphaCompare(s32 comp0, u8 ref0, s32 op, s32 comp1, u8 ref1)
{
    if (lbl_805DE194 != comp0 || lbl_805DE190 != ref0 || lbl_805DE18C != op || lbl_805DE188 != comp1 || lbl_805DE186 != ref1) {
        fn_803CF05C(comp0, ref0, op, comp1, ref1);
        lbl_805DE194 = comp0;
        lbl_805DE190 = ref0;
        lbl_805DE18C = op;
        lbl_805DE188 = comp1;
        lbl_805DE186 = ref1;
    }
}

void HSD_StateSetColorUpdate(s32 enable)
{
    u32 e = enable != 0;
    if (lbl_805DE185 != e) {
        fn_803CF874(e);
        lbl_805DE185 = e;
    }
}

void HSD_StateSetAlphaUpdate(s32 enable)
{
    u32 e = enable != 0;
    if (lbl_805DE184 != e) {
        fn_803CF8A0(e);
        lbl_805DE184 = e;
    }
}

void HSD_StateSetDstAlpha(s32 enable, u8 alpha)
{
    u32 e = enable != 0;
    if (lbl_805DE183 != e || lbl_805DE182 != alpha) {
        fn_803CFA4C(e, alpha);
        lbl_805DE183 = e;
        lbl_805DE182 = alpha;
    }
}

void HSD_StateSetZCompLoc(s32 enable)
{
    u32 e = enable != 0;
    if (lbl_805DE181 != e) {
        fn_803CF900(e);
        lbl_805DE181 = e;
    }
}

void HSD_StateSetColorDither(s32 enable)
{
    u32 e = enable != 0;
    if (lbl_805DE180 != e) {
        fn_803CFA20(e);
        lbl_805DE180 = e;
    }
}

void _HSD_StateInvalidatePrimitive(void)
{
    lbl_805DE1BC = 0;
    lbl_805DE1B4 = -1;
    lbl_805DE1C4 = 0xFF;
}

extern void HSD_ClearVtxDesc(void);

void _HSD_StateInvalidateVtxAttr(void)
{
    HSD_ClearVtxDesc();
}

void _HSD_StateInvalidateRenderMode(void)
{
    lbl_805DE1B0 = -1;
    lbl_805DE1AC = -1;
    lbl_805DE1A8 = -1;
    lbl_805DE1A4 = -1;
    lbl_805DE1A0 = 0xFF;
    lbl_805DE19C = -1;
    lbl_805DE198 = 0xFF;
    lbl_805DE194 = -1;
    lbl_805DE190 = 0;
    lbl_805DE18C = -1;
    lbl_805DE188 = -1;
    lbl_805DE186 = 0;
    lbl_805DE185 = 0xFF;
    lbl_805DE184 = 0xFF;
    lbl_805DE183 = 0xFF;
    lbl_805DE182 = 0;
    lbl_805DE181 = 0xFF;
    lbl_805DE180 = 0xFF;
}

#include <sysdolphin/objalloc.h>

extern HSD_ObjAllocData lbl_80589278[];
extern HSD_ObjAllocData lbl_805892A4;
extern HSD_ObjAllocData lbl_805892D0;
extern s32 lbl_805DE1CC;
extern s32 lbl_805DE1C8;
extern s32 lbl_805DE1E0;
extern s32 lbl_80502978[];
extern s32 lbl_805028E8[];

typedef struct HSD_StateInvalidateEntry {
    u32 flag;
    void (*fn)(void);
} HSD_StateInvalidateEntry;
extern HSD_StateInvalidateEntry lbl_80502420[];

extern void HSD_ObjAllocInit(HSD_ObjAllocData* data, u32 size, u32 align);
extern void fn_803CD4A0(u8);
extern void GXSetNumTexGens(u8);
extern void fn_803CF30C(u8);

void HSD_StateInvalidate(u32 flags)
{
    HSD_StateInvalidateEntry* e = lbl_80502420;
    for (; e->flag != 0; e++) {
        if (flags & e->flag)
            e->fn();
    }
}

void HSD_RenderInitAllocData(void)
{
    HSD_ObjAllocData* d = lbl_80589278;
    HSD_ObjAllocInit(&d[0], 0x1C, 4);
    HSD_ObjAllocInit(&d[1], 0x14, 4);
    HSD_ObjAllocInit(&d[2], 0x30, 4);
}

HSD_ObjAllocData* HSD_RenderGetAllocData(void)
{
    return lbl_80589278;
}

HSD_ObjAllocData* HSD_TevRegGetAllocData(void)
{
    return &lbl_805892A4;
}

HSD_ObjAllocData* HSD_ChanGetAllocData(void)
{
    return &lbl_805892D0;
}

void fn_803F8F08(s32 n)
{
    if (lbl_805DE1CC != n) {
        fn_803CD4A0(n);
        lbl_805DE1CC = n;
    }
}

void fn_803F8FC4(s32 x)
{
    s32 n;
    if (x == 0xFF) {
        n = 0;
    } else {
        n = lbl_80502978[x];
    }
    if (n > lbl_805DE1C8)
        lbl_805DE1C8 = n;
}

void HSD_StateSetNumTexGens(void)
{
    GXSetNumTexGens(lbl_805DE1C8);
    lbl_805DE1C8 = 0;
}

void HSD_StateInitTev(void)
{
    lbl_805DE1E0 = 0;
}

s32 fn_803F9034(void)
{
    return lbl_805DE1E0;
}

s32 fn_803F903C(void)
{
    return lbl_805028E8[lbl_805DE1E0++];
}

void fn_803F905C(void)
{
    fn_803CF30C(lbl_805DE1E0);
    lbl_805DE1E0 = 0;
}
