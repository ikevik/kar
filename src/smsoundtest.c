#pragma dont_inline on

extern int lbl_80557108[];
extern char lbl_804A129C[];
extern char lbl_804A12B8[];

extern void fn_8005E788(void);
extern void fn_8005E5D0(void);
extern void CSS_playerQuit(void);
extern void fn_800ABA6C(void);
extern void fn_800ACE08(void);
extern void* fn_800596B4(char*);
extern void fn_80059520(void*, void*, char*, ...);
extern void fn_80444984(int, int);
extern void fn_8005EB60(int);
extern void fn_80445990(short);
extern char lbl_80557138[];
extern void fn_8005FD38(int);
extern void fn_8005FD9C(int);
extern void fn_8005FA48(int);
extern void fn_8005FAE4(int);
extern void fn_8005FB64(int);
extern int fn_8005B924(void);
extern void fn_8005B918(int);
extern void fn_8005F6A8(int, int);
extern void fn_80442A54(int, int);
extern void fn_80442CFC(int, int);
extern void fn_8005F6E8();
extern void lbLoadMusicLocation(int);

int fn_800AEBDC(int arg)
{
    if (arg == 0) {
        fn_8005E788();
        fn_8005E5D0();
        CSS_playerQuit();
        fn_800ABA6C();
        fn_800ACE08();
    }
    return 0;
}

void fn_800AEC18(void)
{
    void* r;
    if ((unsigned)lbl_80557108[11] == 0) {
        r = fn_800596B4(lbl_804A129C);
        if (r != 0) {
            fn_80059520(r, &lbl_80557108[11], lbl_804A12B8, 0);
        }
    }
}

int fn_800AF2A0(int arg)
{
    int flag = 0;
    if (arg == 4) {
        lbl_80557108[6] = 1;
        flag = 1;
    } else if (arg == 2 || arg == 3) {
        flag = 1;
    }
    if (flag != 0) {
        fn_80444984(2, lbl_80557108[6]);
    }
    return 0;
}

int fn_800AF314(int arg)
{
    if (arg == 1) {
        fn_8005EB60(2);
    }
    return 0;
}

int fn_800AF3C8(int arg)
{
    if (arg == 4) {
        lbl_80557108[8] = 0;
    } else if (arg == 1) {
        if (lbl_80557108[8] == 0) {
            lbl_80557108[8] = 0x4b0;
        } else {
            lbl_80557108[8] = 0;
        }
        fn_80445990(lbl_80557108[8]);
    }
    return 0;
}

int fn_800AF440(int arg)
{
    if (arg == 1) {
        fn_8005E5D0();
    }
    return 0;
}

int fn_800AF46C(void)
{
    return 0;
}

int fn_800AEC80(int arg)
{
    int flag = 0;
    int* p;
    if (arg == 4) {
        fn_8005FD38(1);
        fn_8005FD9C(1);
        fn_8005FA48(0xff);
        fn_8005FAE4(0xff);
        fn_8005FB64(0xff);
        flag = 1;
    } else if (arg == 2 || arg == 3) {
        flag = 1;
    }
    if (flag != 0) {
        int r = fn_8005B924();
        p = lbl_80557108;
        if (p[9] != r) {
            fn_8005E788();
            fn_8005E5D0();
            fn_8005B918(p[9]);
        }
    }
    return 0;
}

int fn_800AF078(int arg)
{
    int flag = 0;
    int* p;
    if (arg == 4) {
        lbl_80557108[2] = 0;
        flag = 1;
    } else if (arg == 2 || arg == 3) {
        flag = 1;
    }
    if (flag != 0) {
        p = lbl_80557108;
        if (p[10] != -1) {
            fn_8005F6A8(p[10], p[2]);
        }
    }
    return 0;
}

int fn_800AF0F4(int arg)
{
    int flag = 0;
    int* p;
    if (arg == 4) {
        lbl_80557108[3] = 0x7f;
        flag = 1;
    } else if (arg == 2 || arg == 3) {
        flag = 1;
    }
    if (flag != 0) {
        p = lbl_80557108;
        if (p[10] != -1) {
            fn_80442A54(p[10], (unsigned char)p[3]);
        }
    }
    return 0;
}

int fn_800AF174(int arg)
{
    int flag = 0;
    int* p;
    if (arg == 4) {
        lbl_80557108[4] = 0;
        flag = 1;
    } else if (arg == 2 || arg == 3) {
        flag = 1;
    }
    if (flag != 0) {
        p = lbl_80557108;
        if (p[10] != -1) {
            fn_80442CFC(p[10], (unsigned char)p[4]);
        }
    }
    return 0;
}

int fn_800AF344(int arg)
{
    if (arg == 4) {
        lbl_80557108[7] = 0;
        fn_8005F6E8(lbl_80557138);
    } else if (arg == 1) {
        fn_8005E5D0();
        lbLoadMusicLocation(lbl_80557108[7]);
        fn_8005FB64(0xff);
        lbl_80557108[8] = 0;
        fn_80445990(0);
    }
    return 0;
}
