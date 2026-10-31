#include <dolphin/types.h>

extern void HSD_Free(void*);
extern int _HSD_MemCheckOwn(void*);
extern u32 lbl_805DCD30;
extern u32* lbl_805DCD38;

void fn_8041E540(u32* p)
{
    if (p != NULL) {
        if ((p[0xF] & 1) == 0) {
            if (p[8] != 0)
                HSD_Free((void*) p[8]);
            if (p[9] != 0)
                HSD_Free((void*) p[9]);
            if (p[10] != 0)
                HSD_Free((void*) p[10]);
            if (p[11] != 0)
                HSD_Free((void*) p[11]);
            if (p[12] != 0)
                HSD_Free((void*) p[12]);
            if (p[14] != 0)
                HSD_Free((void*) p[14]);
        }
        HSD_Free(p);
    }
}

u32 HSD_Rand(void)
{
    *lbl_805DCD38 = *lbl_805DCD38 * 0x343FD + 0x269EC3;
    return *lbl_805DCD38 >> 16;
}

f32 HSD_Randf(void)
{
    *lbl_805DCD38 = *lbl_805DCD38 * 0x343FD + 0x269EC3;
    return (f32) (*lbl_805DCD38 >> 16) / 65536.0f;
}

s32 HSD_Randi(s32 max_val)
{
    *lbl_805DCD38 = *lbl_805DCD38 * 0x343FD + 0x269EC3;
    return (s32) (max_val * (*lbl_805DCD38 >> 16)) / 65536;
}

void fn_8041E6A4(void)
{
    if (_HSD_MemCheckOwn(lbl_805DCD38) != 0)
        lbl_805DCD38 = &lbl_805DCD30;
}
