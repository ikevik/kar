#pragma dont_inline on
extern int fn_800ABA6C(void);
extern void fn_800ABA74(int, void*);
extern void playSoundFX_menuSound(void);
extern void debug_openSubMenu(int, void*, int, int);
extern char lbl_804A0368[];
extern char lbl_804A05F4[];
extern char lbl_804A0818[];
extern char lbl_804A0900[];
extern char lbl_804A09EC[];
extern char lbl_804A0B94[];
extern char lbl_804A0C68[];
extern char lbl_804A0D3C[];
extern char lbl_804A0E1C[];
extern char lbl_804A0F34[];
extern char lbl_804A1060[];
extern char lbl_804A1120[];
extern char lbl_804A15FC[];
extern char lbl_804A172C[];
extern char lbl_804A18E4[];
extern char lbl_804A1C2C[];
extern char lbl_804A1CF8[];
extern char lbl_804A1D98[];
extern char lbl_804A1E20[];
extern void debug_movieTestinBetween();
extern void debug_subMenu_InBetween1();
extern void fn_800AD410();
extern void fn_800AD5BC();
extern void fn_800AD79C();
extern void fn_800AF4E4();
extern void fn_800AF77C();
extern void fn_800AFD78();
extern void fn_800AFE30();
extern int fn_8007D610(void);
extern char lbl_8049FE04[];
extern char lbl_8049F7F8[];
extern char lbl_804A13C4[];
extern char lbl_804A0AC0[];
extern char lbl_805570A0[];
extern char lbl_8049F898[];
extern int lbl_8049F448[];
extern int lbl_80557108[];
extern void fn_800AEC18(void);
extern void fn_800AEBDC();
extern void fn_800AD410();
extern void debug_subMenu_InBetween1();
extern void fn_800AD5BC();
extern void* fn_800ADF84(void);
extern void fn_8005F6E8(void);
extern void fn_800811CC(void*);
extern int fn_804484C8(void);
extern void fn_804484D0(void);
extern void fn_8000C604(void);
extern void fn_80061734(void);
extern void menuGetNextMenuID(int);
extern void fn_800064F0(void);
extern void fn_80008220(void);


int debug_openOptionMode(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A1060, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), debug_subMenu_InBetween1);
    }
    return 0;
}

int debug_openClearCheck(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A1120, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), debug_subMenu_InBetween1);
    }
    return 0;
}

int debug_openRumbleTest(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A15FC, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AF4E4);
    }
    return 0;
}

int debug_openMovieTest(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A172C, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), debug_movieTestinBetween);
    }
    return 0;
}

int debug_openMemcardTest(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A18E4, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AF77C);
    }
    return 0;
}

int debug_openEndingTest(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A1C2C, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), debug_movieTestinBetween);
    }
    return 0;
}

int debug_openLANEmulate(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A1CF8, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AFD78);
    }
    return 0;
}

int debug_openLANMenuTest(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A1D98, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AFD78);
    }
    return 0;
}

int debug_openSyncTest(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A1E20, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AFE30);
    }
    return 0;
}

int fn_800ADEBC(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0368, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800ADF20(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A05F4, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD79C);
    }
    return 0;
}

int fn_800ADF90(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0818, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD410);
    }
    return 0;
}

int fn_800ADFF4(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0900, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD410);
    }
    return 0;
}

int fn_800AE0CC(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0B94, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD410);
    }
    return 0;
}

int fn_800AE130(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0C68, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD410);
    }
    return 0;
}

int fn_800AE194(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0D3C, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD410);
    }
    return 0;
}

int fn_800AE1F8(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0E1C, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD410);
    }
    return 0;
}

int fn_800AE3F4(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0818, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800AE458(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0900, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800AE4BC(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A09EC, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800AE594(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0B94, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800AE5F8(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0C68, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800AE65C(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0D3C, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800AE6C0(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0E1C, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800AE724(int arg)
{
    int menu;
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0F34, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int debug_openRace3DMode(int arg)
{
    int menu;
    *(int*)(lbl_8049FE04 + 0x6c) = fn_8007D610();
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_8049F7F8, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), debug_subMenu_InBetween1);
    }
    return 0;
}

int debug_openSoundTest(int arg)
{
    int menu;
    fn_800AEC18();
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A13C4, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AEBDC);
    }
    return 0;
}

int fn_800ADE4C(int arg)
{
    int menu;
    fn_800ADF84();
    fn_8005F6E8();
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_8049FE04, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD410);
    }
    return 0;
}

int fn_800AE058(int arg)
{
    int menu;
    fn_800811CC(lbl_805570A0);
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0AC0, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD410);
    }
    return 0;
}

int fn_800AE520(int arg)
{
    int menu;
    fn_800811CC(lbl_805570A0);
    if (arg == 1) {
        menu = fn_800ABA6C();
        playSoundFX_menuSound();
        debug_openSubMenu(menu, lbl_804A0AC0, -0x3c, 0);
        fn_800ABA74(fn_800ABA6C(), fn_800AD5BC);
    }
    return 0;
}

int fn_800AEB20(int arg)
{
    int v;
    if (arg == 6) {
        lbl_8049F448[2] = fn_804484C8();
    }
    v = lbl_8049F448[2];
    if (v == 1 || v == 0 || v == 2 || v == 3 || v == 4) {
        fn_804484D0();
    }
    return 0;
}

int fn_800AEB90(int arg)
{
    if (arg == 1) {
        fn_8000C604();
        playSoundFX_menuSound();
    }
    return 0;
}

int fn_800ADAF8(int arg)
{
    if (arg == 1) {
        fn_80061734();
    }
    return 0;
}

void* fn_800ADF84(void)
{
    return lbl_8049F898;
}

void fn_800AEBC0(void)
{
    lbl_80557108[9] = 1;
    lbl_80557108[11] = 0;
}

int debug_openRace2DMode(int arg)
{
    if (arg == 1) {
        playSoundFX_menuSound();
        menuGetNextMenuID(8);
        fn_800064F0();
        fn_80008220();
    }
    return 0;
}
