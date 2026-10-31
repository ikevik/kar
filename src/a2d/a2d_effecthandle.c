typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

void fn_8037B614(u32* p, u32 v) { p[0x2c / 4] = v; }
s32 fn_8037CAF0(void) { return 0; }
void fn_8037CE94(u32* p, u32 v) { p[0x4b4 / 4] = v; }
void fn_8037E374(u8* p, u32 v)
{
    p[0xc] = 1;
    *(u32*)(p + 0x10) = v;
}

extern const float lbl_805E4C30;
extern const float lbl_805E4C34;
extern const float lbl_805E4C38;

void fn_8037D528(void* a, float* q)
{
    q[0] = lbl_805E4C30;
    q[1] = lbl_805E4C34;
    q[2] = lbl_805E4C38;
    q[3] = lbl_805E4C34;
    q[4] = lbl_805E4C30;
    q[5] = lbl_805E4C38;
}

extern const float lbl_805E4B64;
extern const float lbl_805E4B7C;
extern const float lbl_805E4B80;
extern const float lbl_805E4BA8;
extern const float lbl_805E4BB0;
extern const float lbl_805E4BDC;
extern const float lbl_805E4BC0;
extern const float lbl_805E4C10;
extern const float lbl_805E4C04;
typedef unsigned short u16;
typedef struct Nd {
    struct Nd* next;
    u8 pad[0x18];
    u16 h1c;
} Nd;
extern Nd* lbl_805DE378;
extern u32 lbl_804F3424[];

s32 fn_8037B3DC(char* p, float* q)
{
    if (*(s32*)(p + 0x10) == 2) {
        *(float*)(p + 0x18) = q[0];
        *(float*)(p + 0x1c) = q[1];
        *(float*)(p + 0x20) = q[2];
        p[0x39] = 1;
        return 1;
    }
    return 0;
}

s32 fn_8037B61C(char* p)
{
    Nd* n;
    u16 h;
    h = *(u16*)(p + 0x48);
    n = lbl_805DE378;
    while (n != 0) {
        if (n->h1c == h) {
            return 1;
        }
        n = n->next;
    }
    return 0;
}

s32 fn_8037B694(float* p)
{
    float f = p[2];
    if (f >= lbl_805E4B64) {
        p[2] = f - lbl_805E4B64;
        return 1;
    }
    if (f < lbl_805E4B7C) {
        p[2] = lbl_805E4B80;
    }
    return 0;
}

void fn_8037C7DC(s32* p)
{
    p[0] = 0x7531;
    p[1] = -1;
    p[2] = 0;
    ((float*)p)[4] = lbl_805E4BA8;
    ((float*)p)[5] = lbl_805E4BA8;
    ((float*)p)[3] = lbl_805E4BB0;
}

void fn_8037CB18(char* p, float* q)
{
    q[0] = lbl_805E4BDC;
    q[1] = lbl_805E4BC0;
    q[2] = *(float*)(p + 0x60);
    q[3] = lbl_805E4BC0;
    q[4] = lbl_805E4BDC;
    q[5] = *(float*)(p + 0x60);
}

void fn_8037CF28(char* p, float* q)
{
    q[0] = lbl_805E4C10;
    q[1] = lbl_805E4C04;
    q[2] = *(float*)(p + 0x68);
    q[3] = lbl_805E4C04;
    q[4] = lbl_805E4C10;
    q[5] = *(float*)(p + 0x68);
}

u32 fn_8037CF54(u32 i)
{
    if (i < 7) {
        return lbl_804F3424[i * 2 + 1];
    }
    return 0;
}
