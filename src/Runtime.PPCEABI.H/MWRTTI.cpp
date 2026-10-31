extern "C" {

extern char lbl_8048B5FC[];

asm void fn_803AD738(void)
{
    nofralloc
    lwz r0, 0(r12)
    lwz r11, 4(r12)
    lwz r12, 8(r12)
    add r3, r3, r0
    cmpwi r11, 0
    blt L_end
    lwzx r12, r3, r12
    lwzx r12, r12, r11
L_end:
    mtctr r12
    bctr
}

char* fn_803ADA20(void)
{
    return lbl_8048B5FC;
}

}
