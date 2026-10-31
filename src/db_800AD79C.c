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

