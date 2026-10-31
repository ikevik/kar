#pragma dont_inline on
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
#define M8(a) (*(u8*)(a))
#define M16(a) (*(u16*)(a))
#define M32(a) (*(u32*)(a))
#define MF(a) (*(float*)(a))
#define MS16(a) (*(s16*)(a))







typedef struct {
    u8 pad0[0x44];
    u8 b44;
    u8 b45;
    u8 pad46[2];
    float f48;
    u8 b4c;
    u8 b4d;
    u8 b4e;
    u8 b4f;
    u8 b50;
    u8 b51;
    u8 b52;
    u8 pad53[3];
    u8 b56;
    u8 b57;
    u8 pad58;
    u8 b59;
} PadCfg;

typedef struct {
    u8 a[0x104];
    u8 b[0x410];
    u8 c[0x40];
} PadBuf;

extern PadBuf lbl_80535300;
extern PadCfg lbl_8058B080;
extern const float lbl_805DE700;
extern void HSD_PadInit(s32, void*, void*, s32, void*);

#if 0
void Pad_InitCallback(void)
{
    PadBuf* b = &lbl_80535300;
    HSD_PadInit(5, b->a, b->b, 0xc, b->c);
    lbl_8058B080.b4c = 0;
    lbl_8058B080.b4d = 1;
    lbl_8058B080.b4e = 0x50;
    lbl_8058B080.b4f = 0;
    lbl_8058B080.b56 = 0x50;
    lbl_8058B080.b50 = 1;
    lbl_8058B080.b51 = 0x8c;
    lbl_8058B080.b52 = 0;
    lbl_8058B080.b57 = 0x8c;
    lbl_8058B080.b44 = 0;
    lbl_8058B080.b45 = 0x32;
    lbl_8058B080.f48 = lbl_805DE700;
    lbl_8058B080.b59 = 3;
}
#endif

void fn_80005894(void) {}

