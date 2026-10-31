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
