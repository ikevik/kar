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
