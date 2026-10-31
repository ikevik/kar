typedef unsigned int u32;
typedef int s32;

extern void __assert(const char*, int, const char*);
extern s32 fn_803FB178(void*);
extern void fn_803FCDB8(void*, s32, s32, void*, s32, ...);
extern void HSD_AObjReqAnim();
extern void HSD_AObjSetCurrentFrame();
extern void HSD_AObjSetRate();
extern void fn_80052FB8();
extern char lbl_805D7600[7];
extern char lbl_805D7608[5];
extern char lbl_805D7610[4];
extern float lbl_805E3318;

void fn_80289590(void* obj, s32 mask, float f)
{
    fn_803FCDB8(obj, 6, mask, HSD_AObjReqAnim, 1, f);
}

void fn_80289730(void* obj, s32 mask, float f)
{
    fn_803FCDB8(obj, 6, mask, HSD_AObjSetCurrentFrame, 1, f);
}

void fn_80289768(void* obj, s32 mask, float f)
{
    fn_803FCDB8(obj, 6, mask, HSD_AObjSetRate, 1, f);
}

void fn_802897A0(void* a, s32* b)
{
    if (!(fn_803FB178(a) & 0x40000000)) {
        (*b)++;
    }
}

s32 fn_802897E0(void* obj)
{
    s32 x = 0;
    fn_803FCDB8(obj, 6, 0xffff, fn_802897A0, 2, &x);
    return x == 0;
}

void fn_80289834(void* a, s32* b)
{
    if (fn_803FB178(a) & 0x04000000) {
        (*b)++;
    }
}

s32 fn_80289874(void* obj)
{
    s32 x = 0;
    fn_803FCDB8(obj, 6, 0xffff, fn_80289834, 2, &x);
    return x != 0;
}

void fn_802898CC(float* j, float* out)
{
    if (j == 0) {
        __assert(lbl_805D7600, 0xab, lbl_805D7608);
    }
    {
        float v = j[0xc / 4];
        if (*out < v) {
            *out = v;
        }
    }
}

float fn_80289928(void* obj)
{
    float x = 0.0f;
    fn_803FCDB8(obj, 6, 0xffff, fn_802898CC, 2, &x);
    return x;
}

void fn_80289974(float* j, float* out)
{
    if (j == 0) {
        __assert(lbl_805D7600, 0x95, lbl_805D7608);
    }
    {
        float v = j[4 / 4];
        if (*out < v) {
            *out = v;
        }
    }
}

float fn_802899D0(void* obj)
{
    float x = 0.0f;
    fn_803FCDB8(obj, 6, 0xffff, fn_80289974, 2, &x);
    return x;
}

char* fn_80289D64(char** p)
{
    char* q = p[-1];
    if (q != 0) return q;
    return lbl_805D7610;
}

char* fn_8028A10C(char** p)
{
    char* q = p[-1];
    if (q != 0) return q;
    return lbl_805D7610;
}

void fn_8028AC78(void) { fn_80052FB8(); }
