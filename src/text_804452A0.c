/* auto small functions */
#pragma dont_inline on
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

void fn_8045C950(char* p, int v) { *(int*)(p + 120) = v; }

int fn_8045D63C(char* p) { return *(int*)(p + 84); }

int fn_8045DADC(char* p) { return *(int*)(p + 12); }

int fn_8045DE24(char* p) { return *(int*)(p + 16); }

void fn_8045F4D0(char* p, int v) { *(int*)(p + 936) = v; }

int fn_8045F704(char* p) { return *(int*)(p + 928); }

int fn_8045F70C(char* p) { return *(int*)(p + 84); }

int fn_8045F714(char* p) { return *(int*)(p + 88); }

int fn_8045F71C(char* p) { return *(int*)(p + 68); }

int fn_8045F724(char* p) { return *(int*)(p + 16); }

void fn_8045F72C(char* p, int v) { *(int*)(p + 20) = v; }

int fn_8045F828(char* p) { return *(int*)(p + 12); }

int fn_8045F830(char* p) { return *(int*)(p + 8); }

void fn_8046F250(void) {}

int fn_80471034(void) { return 1; }

void fn_8047558C(void) {}

void fn_80479AF0(void) {}

int HVQM4BufvChkDisp(int a0) {
    int t0;
    OSDisableInterrupts();
    t0 = *(int*)(a0 + 4);
    OSRestoreInterrupts();
    return t0;
}

int HVQM4BufvChkFree(int a0) {
    int t0;
    OSDisableInterrupts();
    t0 = *(int*)(a0 + 8);
    OSRestoreInterrupts();
    return t0;
}

void HVQM4DecodePpic(int a0, int a1, int a2, int a3) {
    HVQM4DecodeBpic(a0, a1, a2, a3, a2);
}

void HVQM4InitSeqObj(int a0, int a1) {
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

int HVQM4PlayerExControlExit(int a0) {
    *(int*)(a0 + 960) = 1;
    *(int*)(a0 + 948) = 1;
    return 1;
}

int HVQM4PlayerExStart(int a0) {
    OSResumeThread((a0 + 120));
    return 1;
}

int LexicalCast(void) {
    fn_8045D6CC();
    return 1;
}

void UpdatePlay(int a0) {
    int t0;
    t0 = *(int*)(a0 + 104);
    HVQM4BufaSetFree(t0);
}

void cPlayer_PostPhysicsUpdate(void) {
    HSD_Free();
}

void fn_80446D3C(int a0, int a1) {
    OSDisableInterrupts();
    lbl_805DE4C0 = a0;
    lbl_805DE4C4 = a1;
    OSRestoreInterrupts();
}

void fn_804479D4(int a0, int a1) {
    lbl_805DE4E4 = a0;
    lbl_805DE4E8 = a1;
}

void fn_80447A4C(void) {
    ((void(*)())lbl_805DE4E8)();
}

int fn_804484C8(void) {
    return lbl_805DE538;
}

void fn_8044C710(int a0) {
    lbl_805DE4F8 = a0;
}

void fn_8044C718(int a0) {
    lbl_805DE4FC = a0;
}

void fn_8044C720(int a0) {
    lbl_805DE500 = a0;
}

void fn_8044E698(void) {
    AISetStreamPlayState(0);
}

void fn_8044E6BC(void) {
    AISetStreamPlayState(1);
}

void fn_8044ECCC(void) {
    HSD_ObjAllocInit((int)lbl_8059A818, 156, 4);
}

void fn_80452750(void) {
    fn_800596B4();
}

void fn_80452770(void) {
    fn_80059798();
}

int fn_80452790(void) {
    return *(int*)((int)lbl_8059A880 + 1432);
}

int fn_8045ADAC(void) {
    return *(int*)((int)lbl_8059A880 + 0);
}

int fn_8045ADBC(void) {
    return *(int*)((int)lbl_8059A880 + 1300);
}

int fn_8045ADCC(void) {
    return *(int*)((int)lbl_8059A880 + 1296);
}

void fn_8045BE44(int a0, int a1) {
    *(int*)((int)lbl_805B4698 + 792) = a0;
    *(int*)((int)lbl_805B4698 + 796) = a1;
}

void fn_8045BE58(int a0) {
    *(int*)((int)lbl_805B4698 + 808) = a0;
}

void fn_8045BF84(void) {
    OSSuspendThread((int)lbl_805B4698);
}

void fn_8045C958(void) {
    lbl_805DE580 = 1;
}

void fn_8045C964(void) {
    lbl_805DE580 = 0;
}

void fn_8045D644(void) {
    DVDGetCommandBlockStatus();
}

void fn_8045D664(void) {
    HSD_Alloc();
}

void fn_8045D6A4(void) {
    ((void(*)())lbl_805DD1C8)();
}

void fn_8045D6CC(void) {
    ((void(*)())lbl_805DD1CC)();
}

int fn_8045D850(void) {
    fn_8045D6CC();
    return 1;
}

void fn_8045DE2C(void) {
    lbl_805DE58C = 1;
    fn_8045C958();
}

void fn_8045E978(void) {
    lbl_805DE588 = 0;
    lbl_805DE58C = 0;
    fn_8045C964();
}

void fn_80471D90(int a0, int a1, int a2) {
    *(int*)(a0 + 4) = a2;
    *(int*)(a0 + 0) = a1;
    *(int*)(a0 + 8) = a1;
    *(int*)(a0 + 12) = 0;
}

void setDoneCallFunc(int a0, int a1, int a2) {
    *(int*)(a0 + 984) = a1;
    *(int*)(a0 + 988) = a2;
}
