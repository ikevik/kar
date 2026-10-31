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
extern int OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void OSResumeThread();
extern void OSSuspendThread();
extern void fn_800596B4();
extern void fn_80059798();
extern void fn_8045C958();
extern void fn_8045C964();
extern void fn_8045D6CC();

void fn_8046F250() {}
int fn_80471034() { return 1; }
void fn_8047558C() {}
void fn_80479AF0() {}
void fn_80471D90(a0, a1, a2) int a0; int a1; int a2; {
    *(int*)(a0 + 4) = a2;
    *(int*)(a0 + 0) = a1;
    *(int*)(a0 + 8) = a1;
    *(int*)(a0 + 12) = 0;
}
int fn_80472174(a0, a1, a2, a3, a4, a5) int a0; int a1; int a2; int a3; int a4; int a5; {
int m0;
m0 = a2;
if ((unsigned)(a0 + a1) <= (unsigned)a2) {
m0 = (a2 - a1);
}
if ((unsigned)(m0 + a5) <= (unsigned)(a0 + a1)) {
*(int*)(a4 + 0) = m0;
*(int*)(a4 + 4) = a5;
return 1;
}
*(int*)(a4 + 0) = m0;
*(int*)(a4 + 4) = ((a0 + a1) - m0);
*(int*)(a4 + 8) = a0;
*(int*)(a4 + 12) = (a5 - ((a0 + a1) - m0));
return 2;
}
int fn_804755EC(a0) int a0; {
if ((unsigned)*(unsigned char*)(a0 + 0) != (unsigned)6) {
return -12;
}
return *(int*)(a0 + 140);
}

/* ---- w3f batch 1 ---- */
extern int lbl_805DE5A0;
extern char lbl_805B9C90[];
extern int fn_80471DA8();
extern int fn_80479750();
extern void OSWakeupThread();
extern int fn_8046B890();
extern int fn_80471E7C();
extern int fn_8046FD10();
extern void* memcpy();

int fn_8046DC28(a, p) int a; unsigned char* p; {
    if (*p == 0x7F) return 1;
    return 0;
}
int fn_8046F174(a) char* a; {
    char* b = (a != 0) ? a : lbl_805BDD20;
    return *(int*)(b + 8);
}
int fn_80471E5C(a) int a; {
    return fn_80471DA8(a);
}
int fn_80478794(a) int a; {
    return fn_80479750(a);
}
void fn_80465F54() {
    OSWakeupThread(&lbl_805DE5A0);
}
int fn_8046B9EC(a) int a; {
    return fn_8046B890(a - 8);
}
void fn_8046F254(a) int a; {
    OSWakeupThread(a + 0x20);
}
void fn_80475590(a) int a; {
    OSWakeupThread(a + 0x20);
}
int fn_804787B4(a) int a; {
    return fn_80479750(a - 0x328);
}
void fn_80468148(d) void* d; {
    memcpy(d, &lbl_805DE598, 6);
}
int fn_80471918() {
    return fn_80471E5C(lbl_805B9C90);
}
int fn_80471940() {
    return fn_80471E7C(lbl_805B9C90);
}
unsigned fn_804721C0(a, b, c, d, e) unsigned a; unsigned b; unsigned c; unsigned d; unsigned e; {
    b = a + b;
    if (c + e < b) return c + e;
    return a + e - (b - c);
}
int fn_80470110(a, b, c, d, e, f, g) int a; int b; int c; int d; int e; int f; int g; {
    return fn_8046FD10(a, b, c, d, e, 0, f, g);
}

/* ---- w3f batch 2 ---- */
extern int lbl_805DE5C4;
extern int lbl_805DE5C8;
extern int lbl_805DE5A8;
extern int lbl_805DE5BC;
extern void fn_80467F80();
extern void fn_804707C0();
extern void fn_804742B0();
extern int fn_8047033C();
extern int fn_80476C44();
extern void fn_8047103C();
extern void fn_8047477C();
extern void fn_8046A7A0();
extern void fn_8046F190();
extern void OSCancelAlarm();

void fn_80467F44(a, b, c) int a; int b; int c; {
    lbl_805DE5C4 = a;
    lbl_805DE5C8 = b;
    lbl_805DE5A8 = 1;
    lbl_805DE5BC = c;
    fn_80467F80(0, 0);
}

void fn_80468680(a, b) int a; int b; {
    int en = OSDisableInterrupts();
    lbl_805DE5AC = a;
    lbl_805DE5B0 = b;
    OSRestoreInterrupts(en);
}

void MD5Init(c) unsigned* c; {
    c[5] = 0;
    c[4] = 0;
    c[0] = 0x67452301;
    c[1] = 0xEFCDAB89;
    c[2] = 0x98BADCFE;
    c[3] = 0x10325476;
}

int fn_8046AE54(a, b) char* a; void* b; {
    memcpy(b, a + 0x10, 8);
    return 0;
}

void fn_8046B7C4(p) int* p; {
    char* q = (char*)*p;
    if (q != 0) (*(void (**)())(q + 0x64))(q, p);
}

void fn_8046C4A8(p) char* p; {
    char* r = p + 0x48;
    char* q = *(char**)r;
    if (q != 0) (*(void (**)())(q + 0x64))(q, r);
}

void fn_8046CF80(p) unsigned char* p; {
    switch (p[9]) {
    case 0x11:
        fn_804707C0(p);
        break;
    case 6:
        fn_804742B0(p);
        break;
    }
}

int fn_804704E4(p) char* p; {
    int r;
    if (*(unsigned char*)p != 0x11) return 0x80;
    r = 0;
    if (*(unsigned*)(p + 0x2C) == 0 || *(unsigned*)(p + 0xE4) != 0) r |= 8;
    if (*(int*)(p + 0xE0) > 0) r |= 1;
    return r;
}



void fn_8047126C(a, b) int a; int b; {
    if (b >= 0x12) fn_8047103C(lbl_805BDD20, a, b - 4);
}

void fn_80474744(p, v) char* p; int v; {
    *(int*)(p + 0xA0) = 0;
    if (v < 0) *(int*)(p + 0x2C) = v;
    fn_8047477C(p, 0);
}

void fn_804751E0(p) char* p; {
    *(unsigned*)(p + 0x90) &= ~0x200;
    *(int*)(p + 0x1DC) = 0;
    OSCancelAlarm(p + 0x1F8);
}

void fn_804755B4(p, q) char* p; unsigned short* q; {
    fn_8046A7A0(&lbl_805DE650, p + 0xC, p + 0x10, q[0], q[1], 0);
}

void fn_80478650(p) char* p; {
    char* q = p - 0x3A0;
    fn_8046F190(0, -0x65);
    fn_80479750(q);
}

#if 0 /* w3f near misses */
int fn_804708C4() {
    if ((unsigned)lbl_805DE628 == 0) return 1;
    while ((unsigned)lbl_805DE628 != 0) fn_8047033C((unsigned)lbl_805DE628);
    return 0;
}

int fn_804774BC() {
    if (*(unsigned*)&lbl_805DE650 == 0) return 1;
    while (*(unsigned*)&lbl_805DE650 != 0) fn_80476C44(*(unsigned*)&lbl_805DE650);
    return 0;
}


#endif /* w3f near misses */
