#include "dolphin/types.h"

typedef struct {
    f32 x, y, z;
} Vec;

asm void func_803D2098(const register Vec* a, const register Vec* b, register Vec* ab)
{
    nofralloc
    psq_l f2, 0(r3), 0, 0
    psq_l f4, 0(r4), 0, 0
    ps_add f6, f2, f4
    psq_st f6, 0(r5), 0, 0
    psq_l f3, 8(r3), 1, 0
    psq_l f5, 8(r4), 1, 0
    ps_add f7, f3, f5
    psq_st f7, 8(r5), 1, 0
    blr
}

asm void PSVECSubtract(const register Vec* a, const register Vec* b, register Vec* ab)
{
    nofralloc
    psq_l f2, 0(r3), 0, 0
    psq_l f4, 0(r4), 0, 0
    ps_sub f6, f2, f4
    psq_st f6, 0(r5), 0, 0
    psq_l f3, 8(r3), 1, 0
    psq_l f5, 8(r4), 1, 0
    ps_sub f7, f3, f5
    psq_st f7, 8(r5), 1, 0
    blr
}

asm void PSVECScale(const register Vec* src, register Vec* dst, register f32 scale)
{
    nofralloc
    psq_l f0, 0(r3), 0, 0
    psq_l f2, 8(r3), 1, 0
    ps_muls0 f0, f0, f1
    psq_st f0, 0(r4), 0, 0
    ps_muls0 f0, f2, f1
    psq_st f0, 8(r4), 1, 0
    blr
}

const f32 lbl_805E58E8[1] = {0.5f};
const f32 lbl_805E58EC[1] = {3.0f};

void PSVECNormalize(const register Vec* src, register Vec* dst)
{
    register f32 c_half = lbl_805E58E8[0];
    register f32 c_three = lbl_805E58EC[0];
    register f32 v1_xy, v1_z, xx_zz, xx_yy_zz;
    register f32 rsqrt, rsq2, tmp0, tmp1;
    asm {
        psq_l v1_xy, 0(src), 0, 0
        ps_mul xx_yy_zz, v1_xy, v1_xy
        psq_l v1_z, 8(src), 1, 0
        ps_madd xx_zz, v1_z, v1_z, xx_yy_zz
        ps_sum0 xx_zz, xx_zz, v1_z, xx_yy_zz
        frsqrte rsqrt, xx_zz
        fmuls tmp0, rsqrt, rsqrt
        fmuls rsq2, rsqrt, c_half
        fnmsubs tmp0, tmp0, xx_zz, c_three
        fmuls rsqrt, tmp0, rsq2
        ps_muls0 v1_xy, v1_xy, rsqrt
        psq_st v1_xy, 0(dst), 0, 0
        ps_muls0 v1_z, v1_z, rsqrt
        psq_st v1_z, 8(dst), 1, 0
    }
}

asm f32 fn_803D2140(const register Vec* v)
{
    nofralloc
    psq_l f0, 0(r3), 0, 0
    ps_mul f0, f0, f0
    lfs f1, 8(r3)
    ps_madd f1, f1, f1, f0
    ps_sum0 f1, f1, f0, f0
    blr
}


asm f32 PSVECMag(const register Vec* v)
{
    nofralloc
    lfs f4, lbl_805E58E8(r0)
    psq_l f0, 0(r3), 0, 0
    ps_mul f0, f0, f0
    lfs f1, 8(r3)
    fsubs f2, f4, f4
    ps_madd f1, f1, f1, f0
    ps_sum0 f1, f1, f0, f0
    fcmpu cr0, f1, f2
    beq L_end
    frsqrte f0, f1
    lfs f3, lbl_805E58EC(r0)
    fmuls f2, f0, f0
    fmuls f0, f0, f4
    fnmsubs f2, f2, f1, f3
    fmuls f0, f2, f0
    fmuls f1, f1, f0
L_end:
    blr
}

asm f32 PSVECDotProduct(const register Vec* a, const register Vec* b)
{
    nofralloc
    psq_l f2, 4(r3), 0, 0
    psq_l f3, 4(r4), 0, 0
    ps_mul f2, f2, f3
    psq_l f5, 0(r3), 0, 0
    psq_l f4, 0(r4), 0, 0
    ps_madd f3, f5, f4, f2
    ps_sum0 f1, f3, f2, f2
    blr
}

asm void PSVECCrossProduct(const register Vec* a, const register Vec* b, register Vec* axb)
{
    nofralloc
    psq_l f1, 0(r4), 0, 0
    lfs f2, 8(r3)
    psq_l f0, 0(r3), 0, 0
    ps_merge10 f6, f1, f1
    lfs f3, 8(r4)
    ps_mul f4, f1, f2
    ps_muls0 f7, f1, f0
    ps_msub f5, f0, f3, f4
    ps_msub f8, f0, f6, f7
    ps_merge11 f9, f5, f5
    ps_merge01 f10, f5, f8
    psq_st f9, 0(r5), 1, 0
    ps_neg f10, f10
    psq_st f10, 4(r5), 0, 0
    blr
}

extern f32 PSVECDotProduct(const Vec*, const Vec*);
extern void PSVECNormalize(const Vec*, Vec*);
void fn_803D21F8(const Vec* src, const Vec* normal, Vec* dst)
{
    f32 cosA;
    Vec uI, uN;

    uI.x = -src->x;
    uI.y = -src->y;
    uI.z = -src->z;
    PSVECNormalize(&uI, &uI);
    PSVECNormalize(normal, &uN);
    cosA = PSVECDotProduct(&uI, &uN);
    dst->x = 2.0f * uN.x * cosA - uI.x;
    dst->y = 2.0f * uN.y * cosA - uI.y;
    dst->z = 2.0f * uN.z * cosA - uI.z;
    PSVECNormalize(dst, dst);
}

asm f32 fn_803D22CC(const register Vec* a, const register Vec* b)
{
    nofralloc
    psq_l f0, 4(r3), 0, 0
    psq_l f1, 4(r4), 0, 0
    ps_sub f2, f0, f1
    psq_l f0, 0(r3), 0, 0
    psq_l f1, 0(r4), 0, 0
    ps_mul f2, f2, f2
    ps_sub f0, f0, f1
    ps_madd f1, f0, f0, f2
    ps_sum0 f1, f1, f2, f2
    blr
}

asm f32 fn_803D22F4(const register Vec* a, const register Vec* b)
{
    nofralloc
    psq_l f0, 4(r3), 0, 0
    psq_l f1, 4(r4), 0, 0
    ps_sub f2, f0, f1
    psq_l f0, 0(r3), 0, 0
    psq_l f1, 0(r4), 0, 0
    ps_mul f2, f2, f2
    ps_sub f0, f0, f1
    lfs f3, lbl_805E58E8(r0)
    ps_madd f1, f0, f0, f2
    fsubs f0, f3, f3
    ps_sum0 f1, f1, f2, f2
    fcmpu cr0, f0, f1
    beq L_end
    lfs f4, lbl_805E58EC(r0)
    frsqrte f0, f1
    fmuls f2, f0, f0
    fmuls f0, f0, f3
    fnmsubs f2, f2, f1, f4
    fmuls f0, f2, f0
    fmuls f1, f1, f0
L_end:
    blr
}
