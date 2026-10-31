typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;

extern float lbl_805E4DE0;
extern u8 lbl_804F4F70[];

void fn_80383978(void) {}

u8 fn_80384540(u8* p) { return p[0x25]; }

void fn_803845F4(u32* p) { *p = 0; }

void fn_80384AB0(u32** p, u32 v)
{
    u32* q = *p;
    if (q == 0) return;
    q[0x20 / 4] = v;
}

void fn_80384AC4(float** p, float v)
{
    float* q = *p;
    if (q == 0) return;
    q[0x1c / 4] = v;
}

void fn_80385748(float* p)
{
    float t = lbl_805E4DE0;
    p[2] = t;
    p[1] = t;
    p[0] = t;
}

void fn_8038BD04(void* a, char* b) { *(u8*)(*(char**)(b + 0x2c) + 9) = 1; }

void fn_8038BEEC(u32* p, u32 v) { p[0x2c / 4] = v; }

void* fn_8038DE08(void) { return lbl_804F4F70; }

void fn_8038E83C(void) {}
void fn_8038E840(void) {}
void fn_803910AC(void) {}

u16 fn_80391F00(u16* p) { return p[2]; }
u16 fn_80391F08(u16* p) { return p[3]; }

#if 0
void fn_80395A2C(u32* p, u32* a, u32* b)
{
    u32 y = *b;
    u32 x = *a;
    p[0] = x;
    p[1] = y;
}

#endif

void fn_80395B04(u32* p)
{
    p[0] = 0;
    p[1] = 0;
}

void fn_80395F8C(s32* p) { p[0x18 / 4] = p[0x18 / 4] + 2; }
void fn_80395F9C(s32* p) { p[0x18 / 4] = p[0x18 / 4] + 2; }
void fn_80395FAC(s32* p) { p[0x18 / 4] = p[0x18 / 4] + 2; }
