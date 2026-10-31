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

extern float lbl_805E4120;
extern float lbl_805E4160;
extern u8 lbl_804E2DC0[];
extern u8 lbl_804E2D6C[];
extern u8 lbl_804E3B54[];
extern u8 lbl_804E3A98[];
extern u8 lbl_804E5614[];
extern u8 lbl_804E55E0[];

void* fn_803253A4(void* p) { return p == 0 ? (void*)lbl_804E2D6C : (void*)lbl_804E2DC0; }
void* fn_80328D10(void* p) { return p == 0 ? (void*)lbl_804E3A98 : (void*)lbl_804E3B54; }
void* fn_80334C8C(void* p) { return p == 0 ? (void*)lbl_804E55E0 : (void*)lbl_804E5614; }

void* fn_80328C54(char* p)
{
    char* e = p + *(s32*)(p + 0x3500) * 0x1a8;
    *(s32*)(p + 0x3500) = *(s32*)e;
    *(s32*)(p + 0x3504) = *(s32*)(p + 0x3504) - 1;
    return e;
}

void* fn_80334BD0(char* p)
{
    char* e = p + *(s32*)(p + 0x3a80) * 0x1d4;
    *(s32*)(p + 0x3a80) = *(s32*)e;
    *(s32*)(p + 0x3a84) = *(s32*)(p + 0x3a84) - 1;
    return e;
}

#if 0 /* instruction scheduling mismatches */
void fn_8032A590(char* p)
{
    s32 z = 0;
    float t = lbl_805E4120;
    *(s32*)(p + 0x68) = z;
    *(s32*)(p + 0x70) = z;
    *(float*)(p + 0x74) = t;
    p[0x6c] = 0;
    p[0x6d] = 0;
    p[0x6e] = 0;
}

void fn_80331538(char* p)
{
    s32 z = 0;
    float t = lbl_805E4120;
    *(s32*)(p + 0) = z;
    *(s32*)(p + 4) = z;
    *(float*)(p + 0x10) = t;
    *(float*)(p + 0xc) = t;
    *(float*)(p + 8) = t;
}

void fn_803343AC(char* p, float* q)
{
    float b = lbl_805E4120;
    float a = lbl_805E4160;
    q[0] = a;
    q[1] = b;
    q[2] = *(float*)(p + 0x68);
    q[3] = b;
    q[4] = a;
    q[5] = *(float*)(p + 0x68);
}
#endif
