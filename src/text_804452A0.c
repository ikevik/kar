/* auto small functions */
#pragma dont_inline on
int fn_8045D63C();
int fn_8045DADC();
int fn_8045DE24();
void fn_8045F4D0();
int fn_8045F704();
int fn_8045F70C();
int fn_8045F714();
int fn_8045F71C();
int fn_8045F724();
void fn_8045F72C();
int fn_8045F828();
int fn_8045F830();
void fn_8046F250();
int fn_80471034();
void fn_8047558C();
void fn_80479AF0();
int HVQM4BufvChkDisp();
int HVQM4BufvChkFree();
void HVQM4DecodePpic();
void HVQM4InitSeqObj();
int HVQM4PlayerExControlExit();
int HVQM4PlayerExStart();
int LexicalCast();
void UpdatePlay();
void cPlayer_PostPhysicsUpdate();
void fn_80446D3C();
void fn_804479D4();
void fn_80447A4C();
int fn_804484C8();
void fn_8044C710();
void fn_8044C718();
void fn_8044C720();
void fn_8044E698();
void fn_8044E6BC();
void fn_8044ECCC();
void fn_80452750();
void fn_80452770();
int fn_80452790();
int fn_8045ADAC();
int fn_8045ADBC();
int fn_8045ADCC();
void fn_8045BE44();
void fn_8045BE58();
void fn_8045BF84();
void fn_8045C958();
void fn_8045C964();
void fn_8045D644();
void fn_8045D664();
void fn_8045D6A4();
void fn_8045D6CC();
int fn_8045D850();
void fn_8045DE2C();
void fn_8045E978();
void fn_80471D90();
void setDoneCallFunc();
int HVQM4DecSoundClose();
int HVQM4PlayerExGetMaxAudioTrack();
int fn_804457E0();
int fn_80448264();
void fn_804567E4();
int fn_8045F6EC();
int fn_80472174();
int fn_804755EC();
typedef struct { int w[2]; } KS2;
typedef struct { int w[3]; } KS3;
typedef struct { int w[4]; } KS4;
typedef struct { int w[5]; } KS5;
typedef struct { int w[6]; } KS6;
typedef struct { int w[7]; } KS7;
typedef struct { int w[8]; } KS8;
typedef struct { int w[9]; } KS9;
typedef struct { int w[10]; } KS10;
typedef struct { int w[11]; } KS11;
typedef struct { int w[12]; } KS12;
typedef struct { int w[13]; } KS13;
typedef struct { int w[14]; } KS14;
typedef struct { int w[15]; } KS15;
typedef struct { int w[16]; } KS16;
extern char lbl_80596DA0[];
extern char lbl_80596E40[];
extern char lbl_805BE470[];
extern int lbl_805DD16C;
extern char lbl_805DD200;
extern char lbl_805DD228;
extern int lbl_805DE4F0;
extern int lbl_805DE4F4;
extern int lbl_805DE5AC;
extern int lbl_805DE5B0;
extern int lbl_805DE628;
extern int lbl_805DE634;
extern char lbl_805DE650;
extern char lbl_805E6298;
extern char lbl_805E62A0;
extern void fn_8044C284();
extern void fn_80455FEC();
extern void fn_804563AC();
extern char lbl_8059A818[];
extern char lbl_8059A880[];
extern char lbl_805B4698[];
extern char lbl_805BDD20[];
extern char lbl_805BE430[];
extern char lbl_805DE598;
extern int lbl_805DD1C8;
extern int lbl_805DD1CC;
extern int lbl_805DE4C0;
extern int lbl_805DE4C4;
extern int lbl_805DE4E4;
extern int lbl_805DE4E8;
extern int lbl_805DE4F8;
extern int lbl_805DE4FC;
extern int lbl_805DE500;
extern int lbl_805DE538;
extern int lbl_805DE580;
extern int lbl_805DE588;
extern int lbl_805DE58C;
extern void AISetStreamPlayState();
extern void DVDGetCommandBlockStatus();
extern void HSD_Alloc();
extern void HSD_Free();
extern void HSD_ObjAllocInit();
extern void HVQM4BufaSetFree();
extern void HVQM4DecodeBpic();
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void OSResumeThread();
extern void OSSuspendThread();
extern void fn_800596B4();
extern void fn_80059798();
extern void fn_8045C958();
extern void fn_8045C964();
extern void fn_8045D6CC();

void fn_8045C950(p, v) char* p; int v; { *(int*)(p + 120) = v; }
int fn_8045D63C(p) char* p; { return *(int*)(p + 84); }
int fn_8045DADC(p) char* p; { return *(int*)(p + 12); }
int fn_8045DE24(p) char* p; { return *(int*)(p + 16); }
void fn_8045F4D0(p, v) char* p; int v; { *(int*)(p + 936) = v; }
int fn_8045F704(p) char* p; { return *(int*)(p + 928); }
int fn_8045F70C(p) char* p; { return *(int*)(p + 84); }
int fn_8045F714(p) char* p; { return *(int*)(p + 88); }
int fn_8045F71C(p) char* p; { return *(int*)(p + 68); }
int fn_8045F724(p) char* p; { return *(int*)(p + 16); }
void fn_8045F72C(p, v) char* p; int v; { *(int*)(p + 20) = v; }
int fn_8045F828(p) char* p; { return *(int*)(p + 12); }
int fn_8045F830(p) char* p; { return *(int*)(p + 8); }
int HVQM4BufvChkDisp(a0) int a0; {
    int t0;
    OSDisableInterrupts();
    t0 = *(int*)(a0 + 4);
    OSRestoreInterrupts();
    return t0;
}
int HVQM4BufvChkFree(a0) int a0; {
    int t0;
    OSDisableInterrupts();
    t0 = *(int*)(a0 + 8);
    OSRestoreInterrupts();
    return t0;
}
void HVQM4DecodePpic(a0, a1, a2, a3) int a0; int a1; int a2; int a3; {
    HVQM4DecodeBpic(a0, a1, a2, a3, a2);
}
void HVQM4InitSeqObj(a0, a1) int a0; int a1; {
    int t0;
    int t1;
    int t2;
    int t3;
    t0 = *(unsigned short*)(a1 + 0);
    *(unsigned short*)(a0 + 4) = t0;
    t1 = *(unsigned short*)(a1 + 2);
    *(unsigned short*)(a0 + 6) = t1;
    t2 = *(unsigned char*)(a1 + 4);
    *(unsigned char*)(a0 + 8) = t2;
    t3 = *(unsigned char*)(a1 + 5);
    *(unsigned char*)(a0 + 9) = t3;
}
int HVQM4PlayerExControlExit(a0) int a0; {
    *(int*)(a0 + 960) = 1;
    *(int*)(a0 + 948) = 1;
    return 1;
}
int HVQM4PlayerExStart(a0) int a0; {
    OSResumeThread((a0 + 120));
    return 1;
}
int LexicalCast() {
    fn_8045D6CC();
    return 1;
}
void UpdatePlay(a0) int a0; {
    int t0;
    t0 = *(int*)(a0 + 104);
    HVQM4BufaSetFree(t0);
}
void cPlayer_PostPhysicsUpdate() {
    HSD_Free();
}
void fn_80446D3C(a0, a1) int a0; int a1; {
    OSDisableInterrupts();
    lbl_805DE4C0 = a0;
    lbl_805DE4C4 = a1;
    OSRestoreInterrupts();
}
void fn_804479D4(a0, a1) int a0; int a1; {
    lbl_805DE4E4 = a0;
    lbl_805DE4E8 = a1;
}
void fn_80447A4C() {
    ((void(*)())lbl_805DE4E8)();
}
int fn_804484C8() {
    return lbl_805DE538;
}
void fn_8044C710(a0) int a0; {
    lbl_805DE4F8 = a0;
}
void fn_8044C718(a0) int a0; {
    lbl_805DE4FC = a0;
}
void fn_8044C720(a0) int a0; {
    lbl_805DE500 = a0;
}
void fn_8044E698() {
    AISetStreamPlayState(0);
}
void fn_8044E6BC() {
    AISetStreamPlayState(1);
}
void fn_8044ECCC() {
    HSD_ObjAllocInit((int)lbl_8059A818, 156, 4);
}
void fn_80452750() {
    fn_800596B4();
}
void fn_80452770() {
    fn_80059798();
}
int fn_80452790() {
    return *(int*)((int)lbl_8059A880 + 1432);
}
int fn_8045ADAC() {
    return *(int*)((int)lbl_8059A880 + 0);
}
int fn_8045ADBC() {
    return *(int*)((int)lbl_8059A880 + 1300);
}
int fn_8045ADCC() {
    return *(int*)((int)lbl_8059A880 + 1296);
}
void fn_8045BE44(a0, a1) int a0; int a1; {
    *(int*)((int)lbl_805B4698 + 792) = a0;
    *(int*)((int)lbl_805B4698 + 796) = a1;
}
void fn_8045BE58(a0) int a0; {
    *(int*)((int)lbl_805B4698 + 808) = a0;
}
void fn_8045BF84() {
    OSSuspendThread((int)lbl_805B4698);
}
void fn_8045C958() {
    lbl_805DE580 = 1;
}
void fn_8045C964() {
    lbl_805DE580 = 0;
}
void fn_8045D644() {
    DVDGetCommandBlockStatus();
}
void fn_8045D664() {
    HSD_Alloc();
}
void fn_8045D6A4() {
    ((void(*)())lbl_805DD1C8)();
}
void fn_8045D6CC() {
    ((void(*)())lbl_805DD1CC)();
}
int fn_8045D850() {
    fn_8045D6CC();
    return 1;
}
void fn_8045DE2C() {
    lbl_805DE58C = 1;
    fn_8045C958();
}
void fn_8045E978() {
    lbl_805DE588 = 0;
    lbl_805DE58C = 0;
    fn_8045C964();
}
void setDoneCallFunc(a0, a1, a2) int a0; int a1; int a2; {
    *(int*)(a0 + 984) = a1;
    *(int*)(a0 + 988) = a2;
}
int HVQM4DecSoundClose(a0) int a0; {
int m0;
if ((unsigned)a0 == (unsigned)0) {
m0 = 0;
} else {
fn_8045D6CC();
m0 = 1;
}
return m0;
}
int HVQM4PlayerExGetMaxAudioTrack(a0) int a0; {
return (*(unsigned char*)(a0 + 67) & 0xf);
}
int fn_804457E0(a0, a1) int a0; int a1; {
fn_8044C284((a0 & 0xff), a1, 63, 0);
return 1;
}
int fn_80448264() {
return (lbl_805DE4F0 - lbl_805DE4F4);
}
void fn_804567E4(a0) int a0; {
if (a0 == 0) {
fn_804563AC();
} else {
fn_80455FEC();
}
}
int fn_8045F6EC(a0) int a0; {
if ((unsigned)a0 != (unsigned)0) {
return *(int*)(a0 + 992);
}
return 0;
}

/* ---- w3f batch 1 ---- */
typedef struct { int f0, f4, f8, fc, f10, f14, f18; } E1C;
typedef struct { char pad[0x600]; E1C a[2]; } S600;
extern int lbl_805DE5A0;
extern char lbl_805B9C90[];
extern int fn_80471DA8();
extern int fn_80479750();
extern void OSWakeupThread();
extern int fn_8046B890();
extern int fn_80471E7C();
extern int fn_8046FD10();
extern void* memcpy();

int fn_8045BC08(a, b) int a; int b; {
    return (a + b - 1) / b;
}
int fn_8045BC18(a, b) int a; int b; {
    return (a + b - 33) / (b - 32);
}
void fn_8045ADDC(i, v) int i; int v; {
    ((S600*)lbl_8059A880)->a[i].f18 = v;
}
void fn_8045BE20(a) int a; {
    char* b = lbl_805B4698;
    if (a < 0 || a > 31) a = 31;
    *(int*)(b + 0x320) = a;
}
void fn_8045BDC4(d, s) char* d; char* s; {
    char c;
    while ((c = *s) != 0) {
        *d = c;
        d++;
        s++;
    }
    *d = 0;
}
int fn_8045336C(i) int i; {
    S600* b = (S600*)lbl_8059A880;
    if (i < 0 || i > 1) i = 0;
    return b->a[i].f8;
}
int fn_80453398(i) int i; {
    S600* b = (S600*)lbl_8059A880;
    if (i < 0 || i > 1) i = 0;
    return b->a[i].f14;
}
int fn_804533C4(i) int i; {
    S600* b = (S600*)lbl_8059A880;
    if (i < 0 || i > 1) i = 0;
    return b->a[i].f0;
}

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
extern u8 lbl_80508BC8[];
extern u32 lbl_805DE504;
extern u32 lbl_805DE56C;
extern const float lbl_805E6228;
extern const float lbl_805E622C;
extern const float lbl_805E6230;
u32 fn_80449AE4(u32);
void fn_8044EFA8();
u32 fn_8044F128(float, float, float, float, float);
u32 fn_8044EDEC(u32);
void fn_8044F8C8(u32, u32, u32);
void fn_803D7E58(u32);
u32 fn_8045BDEC(u32);
float OSReport(u32, ...);
void fn_803D7F34();
float fn_803DA558(u32, u32);
float fn_8045CEB8(u32);

u32 fn_80445A84(u32 p3) {
    u32 v1;
    u32 c0;
    v1 = M32((u32)lbl_80508BC8+(p3<<2));
    if ((s32)v1 == (s32)-1) {
        return 0;
    }
    c0 = fn_80449AE4(v1);
    return (((-1-c0)|(c0+1))>>31);
}

void fn_8044ADB4(u32 p3) {
    OSDisableInterrupts(p3);
    if ((u32)(M8(((u32)p3+46))) == (u32)0) {
        if ((s32)((M8(((u32)p3+9)))&0x8) == (s32)0) {
            M8(((u32)p3+46)) = 1;
            M32(((u32)p3+36)) = (lbl_805DE504);
            lbl_805DE504 = p3;
        }
    }
    OSRestoreInterrupts();
}

void fn_8044F644(u32 p3) {
    u32 ph0;
    ph0 = (lbl_805DE56C);
    while ((u32)ph0 != (u32)0) {
        if ((u32)(M32(((u32)ph0+4))) == (u32)p3) {
            M32(((u32)ph0+4)) = 0;
            return;
        }
        ph0 = (M32(ph0));
    }
}

u32 fn_8044FA70(void) {
    u32 v4;
    u32 c0;
    u32 c1;
    u32 c2;
    c0 = fn_8044F128((lbl_805E6228), (lbl_805E6228), (lbl_805E6228), (lbl_805E622C), (lbl_805E6230));
    c1 = fn_8044EDEC(16);
    M32(((u32)c0+100)) = c1;
    c2 = fn_8044EDEC(128);
    M32(((u32)c1+4)) = c2;
    M32(c1) = c2;
    M32(((u32)c1+8)) = 128;
    v4 = M32(c1);
    M8(v4) = 0;
    M32(((u32)c1+12)) = 0;
    fn_8044F8C8(c0, 0, v4);
    M32(((u32)c0+92)) = (M32(((u32)c1+4)));
    return c0;
}

u32 fn_8045BC2C(u32 p3, u32 p4) {
    if ((s32)p3 < (s32)0) {
        return -1;
    }
    if ((s32)p4 < (s32)0) {
        return 1;
    }
    if ((s32)p3 == (s32)0) {
        if ((s32)p4 == (s32)255) {
            return 1;
        }
    }
    if ((s32)p3 == (s32)255) {
        if ((s32)p4 == (s32)0) {
            return -1;
        }
    }
    if ((s32)(p3-p4) > (s32)128) {
        return -1;
    }
    if ((s32)(p3-p4) < (s32)-128) {
    return 1;
    }
    return (p3-p4);
}

u32 HVQM4BufaGetFree(u32 p3) {
    u32 v1;
    u32 v2;
    OSDisableInterrupts(p3);
    v1 = M32(p3);
    if ((u32)v1 != (u32)0) {
        v2 = M32(v1);
        if ((u32)v2 == (u32)0) {
            M32(p3) = 0;
            M32(((u32)p3+4)) = 0;
        } else {
            M32(p3) = v2;
        }
        M32(v1) = 0;
    }
    OSRestoreInterrupts();
    return v1;
}

typedef struct { u32 w[4]; } S16;
extern u8 lbl_80508D58[];
extern u32 lbl_805DD160;
extern u32 lbl_805DD168;
extern u8 lbl_80597140[];
extern u8 lbl_80509398[];
extern u32 lbl_805DE50C;
extern u32 lbl_805DE568;
void fn_804452A0(u32, u32, u32, u32, u32, u32, u32, u32);
void __assert(u32, u32, u32);
void fn_804498CC(u32, u32);
u32 fn_80453484(u32, u32);
u32 fn_8045B848(void);
u32 fn_803D9AF4(u32);
u32 fn_8045C38C(u32, u32);

void fn_804456C0(u32 p3, u32 p4, u32 p5, u32 p6) {
    u32 loc12[1];
    u32 loc8[1];
    M32(((u32)loc8)) = p6;
    M32(((u32)loc12)) = 0;
    fn_804452A0(p3, p4, 127, 0, 0, 0, 0, p5);
}

u32 fn_804479E0(u32 p3) {
    u32 s30;
    u32 v1;
    u32 s31;
    s30 = p3;
    v1 = lbl_805DE4E4;
    s31 = ((u32 (*)())(v1))();
    if ((s32)s31 == (s32)0) {
        OSReport((u32)lbl_80508D58, s30);
        __assert((u32)&lbl_805DD160, 174, (u32)&lbl_805DD168);
    }
    return s31;
}

void fn_80449958(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32((u32)lbl_80597140+(p3<<2));
    v2 = M32(((u32)(u32)lbl_80597140+4+(p3<<2)));
    fn_804498CC((v1<<1), (v2<<1));
}

void fn_8044A010(u32 p3) {
    u32 s31;
    u32 v1;
    u32 v2;
    u32 l3;
    u32 v3;
    s31 = p3;
    v1 = M32(p3);
    if ((s32)v1 != (s32)-2) {
        __assert((u32)&lbl_805DD160, 2117, (u32)lbl_80509398);
    }
    v2 = lbl_805DE50C;
    l3 = v2;
    while ((u32)l3 != (u32)0) {
        if ((u32)l3 == (u32)s31) {
        return;
        }
        v3 = M32((l3+48));
        l3 = v3;
    }
    M32((s31+48)) = v2;
    lbl_805DE50C = s31;
}

void fn_8044F088(u32 p3) {
    u32 v1;
    u32 s31;
    u32 l4;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    v1 = lbl_805DE568;
    s31 = v1;
    l4 = 0;
    while ((u32)s31 != (u32)0) {
        v2 = M32((s31+80));
        if ((u32)s31 == (u32)p3) {
            if ((u32)l4 != (u32)0) {
                M32((l4+80)) = v2;
            } else {
                lbl_805DE568 = v2;
            }
            v3 = M32((s31+100));
            if ((u32)v3 != (u32)0) {
                v4 = M32((v3+4));
                if ((u32)v4 != (u32)0) {
                    fn_8044EFA8(v4, l4);
                }
                v5 = M32((s31+100));
                fn_8044EFA8(v5);
            }
            v6 = M32((s31+104));
            if ((u32)v6 != (u32)0) {
                fn_8044EFA8(v6);
            }
            fn_8044EFA8(s31);
            return;
        }
        l4 = s31;
        s31 = v2;
    }
}

u32 fn_80453440(u32 p3, u32 p4, u32 p5) {
    u32 v1;
    u32 s31;
    u32 c0;
    v1 = M32(p3);
    s31 = v1;
    c0 = fn_80453484(p4, p5);
    if ((s32)s31 >= (s32)c0) {
        s31 = c0;
    }
    return s31;
}

u32 fn_8045BDEC(u32 p3) {
    u32 l3;
    u32 l4;
    u32 v1;
    if ((u32)p3 != (u32)0) {
        l3 = p3;
        l4 = 0;
        while ((v1 = M8(l3), l3 = (l3+1), (s32)((s8)v1) != (s32)0)) {
            l4 = (l4+1);
        }
        l3 = l4;
        return l3;
    }
    return 0;
}

void fn_8045BE68(void) {
    u32 s31;
    u32 c0;
    s31 = (u32)lbl_805B4698;
    c0 = fn_8045B848();
    if ((s32)c0 == (s32)0) {
    return;
    }
    fn_803D9AF4(s31);
}

void fn_8045BFAC(void) {
    u32 s31;
    u32 c0;
    s31 = (u32)lbl_805B4698;
    c0 = fn_803D9AF4((u32)lbl_805B4698);
    if ((s32)c0 == (s32)0) {
    return;
    }
    OSResumeThread(s31);
}

u32 fn_8045C52C(u32 p3, u32 p4) {
    u32 s31;
    u32 s30;
    u32 s29;
    u32 s28;
    u32 v1;
    u32 v2;
    u32 c0;
    s29 = p4;
    s28 = p3;
    if ((s32)s28 == (s32)0) {
        return -1;
    }
    s30 = 16;
    while ((s32)s30 < (s32)s29) {
        s31 = (s28+s30);
        v1 = M8((s31+-1));
        v2 = M8(s31);
        c0 = fn_8045C38C(v1, v2);
        M8(s31) = c0;
        s30 = (s30+1);
    }
    return 0;
}

