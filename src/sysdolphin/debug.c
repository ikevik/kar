#include <dolphin/types.h>
#include <functions.h>

u8 lbl_8058BEC8[0x2C8];
void (*lbl_805DE314)(int, int);
void (*lbl_805DE310)(void*, ...);
s32 lbl_805DE30C;
void (*lbl_805DE308)(int, int, int, int);
extern u8 __files[];
int fn_80428430(int a, int b, int* c, int d);
extern void fn_803D4BBC(void);
extern void OSReport(const char*, ...);
extern void OSPanic(const char*, int, const char*, ...);
void HSD_Panic(const char* file, int line, const char* msg);

asm void HSD_SaveContext(void)
{
    nofralloc
    mtsprg 0, r3
    lis r3, lbl_8058BEC8@ha
    addi r3, r3, lbl_8058BEC8@l
    stmw r0, 0(r3)
    mfsprg r4, 0
    stw r4, 0xc(r3)
    mfspr r4, GQR0
    stw r4, 0x1a4(r3)
    mfspr r4, GQR1
    stw r4, 0x1a8(r3)
    mfspr r4, GQR2
    stw r4, 0x1ac(r3)
    mfspr r4, GQR3
    stw r4, 0x1b0(r3)
    mfspr r4, GQR4
    stw r4, 0x1b4(r3)
    mfspr r4, GQR5
    stw r4, 0x1b8(r3)
    mfspr r4, GQR6
    stw r4, 0x1bc(r3)
    mfspr r4, GQR7
    stw r4, 0x1c0(r3)
    mfcr r4
    stw r4, 0x80(r3)
    mflr r4
    stw r4, 0x84(r3)
    mfctr r4
    stw r4, 0x88(r3)
    mfxer r4
    stw r4, 0x8c(r3)
    mfsrr0 r4
    stw r4, 0x198(r3)
    mfsrr1 r4
    stw r4, 0x19c(r3)
    lhz r4, 0x1a2(r3)
    ori r4, r4, 1
    sth r4, 0x1a2(r3)
    b fn_803D4BBC
}

int fn_80428430(int a, int b, int* c, int d)
{
    if (lbl_805DE314 != NULL)
        lbl_805DE314(b, *c);
    lbl_805DE308(a, b, (int) c, d);
    return 0;
}

void __assert(const char* file, unsigned long line, const char* expr)
{
    OSReport("assertion \"%s\" failed", expr);
    HSD_Panic(file, line, "");
}

void HSD_Panic(const char* file, int line, const char* msg)
{
    if (lbl_805DE310 != NULL) {
        HSD_SaveContext();
        OSReport("%s in %s on line %d.\n", msg, file, line);
        lbl_805DE310(lbl_8058BEC8);
    }
    OSPanic(file, line, msg);
}

void* fn_804285AC(void* arg)
{
    void* old = lbl_805DE314;
    if (lbl_805DE30C == 0) {
        if (lbl_805DE308 == NULL) {
            lbl_805DE308 = *(void**) (__files + 0x90);
        }
        *(void**) (__files + 0x90) = fn_80428430;
        __files[0x5A] = 0;
        lbl_805DE30C = 1;
    }
    lbl_805DE314 = arg;
    return old;
}

void* fn_80428608(void* arg)
{
    void* old = lbl_805DE310;
    lbl_805DE310 = arg;
    return old;
}
