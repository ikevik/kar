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
extern "C" {
extern const float lbl_805E429C;
extern const float lbl_805E4288;
extern const float lbl_805E42C8;
extern u32 lbl_805DADE8;
extern u32 lbl_805DADE0;
extern u32 lbl_805DDBC0;
extern u8 lbl_804E63A4[];
extern u8 lbl_804E6320[];
void fn_80289768(u32, u32, float);
void fn_80289730(u32, u32, float);
float fn_80337848(u32, u32);
float fn_8033A40C(u32, u32, float);
void fn_80338DEC(u32, u32, float);
float fn_80337E58(u32, u32);
void fn_8033A61C(u32, u32, float);
void fn_8028967C(u32, u32, float, float);
void fn_80289590(u32, u32, float);
u32 fn_803AD760(u32, u32, u32, u32, u32);

void fn_80335A1C(u32 p3) {
    float v1;
    u32 v2;
    u32 v3;
    float v4;
    v1 = lbl_805E429C;
    v2 = M32(((u32)p3+148));
    fn_80289768(v2, ((1<<16)-1), v1);
    v3 = M32(((u32)p3+148));
    v4 = lbl_805E4288;
    fn_80289730(v3, ((1<<16)-1), v4);
}

void fn_803367D8(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    float d0;
    float d1;
    v1 = M32(((u32)p3+124));
    d0 = fn_80337848(v1, p4);
    v2 = M32(((u32)p3+132));
    d1 = fn_8033A40C(v2, p4, d0);
    v3 = M32(((u32)p3+128));
    fn_80338DEC(v3, p4, d1);
}

void fn_8033682C(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    float d0;
    v1 = M32(((u32)p3+124));
    d0 = fn_80337E58(v1, p4);
    v2 = M32(((u32)p3+132));
    fn_8033A61C(v2, p4, d0);
}

void fn_80336D94(u32 p3) {
    float v1;
    float v2;
    u32 v3;
    u32 v4;
    float v5;
    v1 = lbl_805E4288;
    v2 = lbl_805E42C8;
    v3 = M32(((u32)p3+16));
    fn_8028967C(v3, ((1<<16)-1), v1, v2);
    v4 = M32(((u32)p3+16));
    v5 = lbl_805E4288;
    fn_80289590(v4, ((1<<16)-1), v5);
    M32(((u32)p3+52)) = 0;
}



void fn_803367D4(void) {}



}
