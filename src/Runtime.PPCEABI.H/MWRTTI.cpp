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

extern char lbl_804F874C[];
extern char lbl_804F8730[];
extern void fn_8038CB78(void*);

void* fn_803AD9C4(void* self, short flags)
{
    if (self != 0) {
        *(void**)self = lbl_804F874C;
        if (self != 0) {
            *(void**)self = lbl_804F8730;
        }
        if (flags > 0) {
            fn_8038CB78(self);
        }
    }
    return self;
}

char* fn_803ADA20(void)
{
    return lbl_8048B5FC;
}

}
