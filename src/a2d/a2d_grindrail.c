typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

extern float lbl_805E4124;

void fn_803238F0(u32* p) { *p = 0; }

void fn_80325244(u8* p) { p[0xd] = 1; }

s32 fn_80326844(u32* p) { return p[0x60 / 4] == 0; }

void fn_80327660(void) {}

s32 fn_8032A754(u32* p) { return p[0x60 / 4] == 0; }

s32 fn_8032EBB4(s32* p) { return p[0x48 / 4] == 0x1e; }

void fn_80331558(u8* p) { p[0x14] = 0; }

void fn_80333D20(void) {}

s32 fn_80334340(void) { return 0; }

void fn_8033441C(void* a, float* b, float* c)
{
    float t = lbl_805E4124;
    *c = t;
    *b = t;
}

void fn_8033442C(void) {}
