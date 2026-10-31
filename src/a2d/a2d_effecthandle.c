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
