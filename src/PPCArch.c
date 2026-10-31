#pragma optimization_level 0
typedef unsigned long u32;
typedef unsigned long long u64;
typedef double f64;

asm u32 PPCMfmsr(void)
{
    nofralloc
    mfmsr r3
    blr
}

asm void PPCMtmsr(register u32 newMSR)
{
    nofralloc
    mtmsr newMSR
    blr
}

asm u32 PPCMfhid0(void)
{
    nofralloc
    mfspr r3, 1008
    blr
}

asm void PPCMthid0(register u32 newHID0)
{
    nofralloc
    mtspr 1008, newHID0
    blr
}

asm u32 PPCMfl2cr(void)
{
    nofralloc
    mfspr r3, 1017
    blr
}

asm void PPCMtl2cr(register u32 newL2cr)
{
    nofralloc
    mtspr 1017, newL2cr
    blr
}

__declspec(weak) asm void PPCMtdec(register u32 newDec)
{
    nofralloc
    mtdec newDec
    blr
}

asm void PPCSync(void)
{
    nofralloc
    sc
    blr
}

__declspec(weak) asm void PPCHalt(void)
{
    nofralloc
    sync
loop:
    nop
    li r3, 0
    nop
    b loop
}

asm void PPCMtmmcr0(register u32 newMMCR0)
{
    nofralloc
    mtspr 952, newMMCR0
    blr
}

asm void PPCMtmmcr1(register u32 newMMCR1)
{
    nofralloc
    mtspr 956, newMMCR1
    blr
}

asm void PPCMtpmc1(register u32 newPMC1)
{
    nofralloc
    mtspr 953, newPMC1
    blr
}

asm void PPCMtpmc2(register u32 newPMC2)
{
    nofralloc
    mtspr 954, newPMC2
    blr
}

asm void PPCMtpmc3(register u32 newPMC3)
{
    nofralloc
    mtspr 957, newPMC3
    blr
}

asm void PPCMtpmc4(register u32 newPMC4)
{
    nofralloc
    mtspr 958, newPMC4
    blr
}

asm u32 PPCMffpscr(void)
{
    nofralloc
    stwu r1, -0x18(r1)
    stfd f31, 0x10(r1)
    mffs f31
    stfd f31, 0x8(r1)
    lwz r3, 0xc(r1)
    lfd f31, 0x10(r1)
    addi r1, r1, 0x18
    blr
}

asm void PPCMtfpscr(register u32 newFPSCR)
{
    nofralloc
    stwu r1, -0x20(r1)
    stfd f31, 0x18(r1)
    li r4, 0
    stw r4, 0x10(r1)
    stw r3, 0x14(r1)
    lfd f31, 0x10(r1)
    mtfsf 255, f31
    lfd f31, 0x18(r1)
    addi r1, r1, 0x20
    blr
}

asm u32 PPCMfhid2(void)
{
    nofralloc
    mfspr r3, 920
    blr
}

asm void PPCMthid2(register u32 newhid2)
{
    nofralloc
    mtspr 920, newhid2
    blr
}

asm void PPCMtwpar(register u32 newwpar)
{
    nofralloc
    mtspr 921, newwpar
    blr
}

asm void PPCDisableSpeculation(void)
{
    nofralloc
    mflr r0
    stw r0, 4(r1)
    stwu r1, -8(r1)
    bl PPCMfhid0
    ori r3, r3, 0x200
    bl PPCMthid0
    lwz r0, 0xc(r1)
    addi r1, r1, 8
    mtlr r0
    blr
}

asm void PPCSetFpNonIEEEMode(void)
{
    nofralloc
    mtfsb1 29
    blr
}
