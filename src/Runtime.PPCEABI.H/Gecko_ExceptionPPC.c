typedef struct FragmentInfo {
    void* exception_info;
    void* TOC;
    int active;
} FragmentInfo;

extern FragmentInfo fragmentinfo_80569A00[];
extern char lbl_8048B698[];
extern char lbl_804F8838[];
extern char lbl_804F8730[];
extern void fn_8038CB78(void*);
extern void ExPPC_ThrowHandler(void);

void __unregister_fragment(int id)
{
    FragmentInfo* f;
    if (id >= 0 && id < 1) {
        f = &fragmentinfo_80569A00[id];
        f->exception_info = 0;
        f->TOC = 0;
        f->active = 0;
    }
}

int __register_fragment(void* info, void* toc)
{
    if (fragmentinfo_80569A00[0].active == 0) {
        fragmentinfo_80569A00[0].exception_info = info;
        fragmentinfo_80569A00[0].TOC = toc;
        fragmentinfo_80569A00[0].active = 1;
        return 0;
    }
    return -1;
}

char* fn_803AF878(void)
{
    return lbl_8048B698;
}

void* fn_803AEC9C(void* self, short flags)
{
    if (self != 0) {
        *(void**)self = lbl_804F8838;
        if (self != 0) {
            *(void**)self = lbl_804F8730;
        }
        if (flags > 0) {
            fn_8038CB78(self);
        }
    }
    return self;
}

asm void ExPPC_UnwindStack(void)
{
    nofralloc
    mflr r5
    mfcr r6
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r1, 0x8(r3)
    stw r2, 0xc(r3)
    stmw r13, 0x14(r3)
    mffs f0
    stfd f14, 0x60(r3)
    addi r4, r3, 0x68
    psq_stx f14, r0, r4, 0, 0
    stfd f15, 0x70(r3)
    addi r4, r3, 0x78
    psq_stx f15, r0, r4, 0, 0
    stfd f16, 0x80(r3)
    addi r4, r3, 0x88
    psq_stx f16, r0, r4, 0, 0
    stfd f17, 0x90(r3)
    addi r4, r3, 0x98
    psq_stx f17, r0, r4, 0, 0
    stfd f18, 0xa0(r3)
    addi r4, r3, 0xa8
    psq_stx f18, r0, r4, 0, 0
    stfd f19, 0xb0(r3)
    addi r4, r3, 0xb8
    psq_stx f19, r0, r4, 0, 0
    stfd f20, 0xc0(r3)
    addi r4, r3, 0xc8
    psq_stx f20, r0, r4, 0, 0
    stfd f21, 0xd0(r3)
    addi r4, r3, 0xd8
    psq_stx f21, r0, r4, 0, 0
    stfd f22, 0xe0(r3)
    addi r4, r3, 0xe8
    psq_stx f22, r0, r4, 0, 0
    stfd f23, 0xf0(r3)
    addi r4, r3, 0xf8
    psq_stx f23, r0, r4, 0, 0
    stfd f24, 0x100(r3)
    addi r4, r3, 0x108
    psq_stx f24, r0, r4, 0, 0
    stfd f25, 0x110(r3)
    addi r4, r3, 0x118
    psq_stx f25, r0, r4, 0, 0
    stfd f26, 0x120(r3)
    addi r4, r3, 0x128
    psq_stx f26, r0, r4, 0, 0
    stfd f27, 0x130(r3)
    addi r4, r3, 0x138
    psq_stx f27, r0, r4, 0, 0
    stfd f28, 0x140(r3)
    addi r4, r3, 0x148
    psq_stx f28, r0, r4, 0, 0
    stfd f29, 0x150(r3)
    addi r4, r3, 0x158
    psq_stx f29, r0, r4, 0, 0
    stfd f30, 0x160(r3)
    addi r4, r3, 0x168
    psq_stx f30, r0, r4, 0, 0
    stfd f31, 0x170(r3)
    addi r4, r3, 0x178
    psq_stx f31, r0, r4, 0, 0
    stfd f0, 0x180(r3)
    li r3, 0x0
    blr
}

asm void ExPPC_LongJump(void)
{
    nofralloc
    mr r8, r5
    mr r2, r4
    lwz r0, 0x280(r3)
    mtcrf 255, r0
    lmw r13, 0x234(r3)
    addi r7, r3, 0xe8
    psq_lx f14, r0, r7, 0, 0
    lfd f14, 0xe0(r3)
    addi r7, r3, 0xf8
    psq_lx f15, r0, r7, 0, 0
    lfd f15, 0xf0(r3)
    addi r7, r3, 0x108
    psq_lx f16, r0, r7, 0, 0
    lfd f16, 0x100(r3)
    addi r7, r3, 0x118
    psq_lx f17, r0, r7, 0, 0
    lfd f17, 0x110(r3)
    addi r7, r3, 0x128
    psq_lx f18, r0, r7, 0, 0
    lfd f18, 0x120(r3)
    addi r7, r3, 0x138
    psq_lx f19, r0, r7, 0, 0
    lfd f19, 0x130(r3)
    addi r7, r3, 0x148
    psq_lx f20, r0, r7, 0, 0
    lfd f20, 0x140(r3)
    addi r7, r3, 0x158
    psq_lx f21, r0, r7, 0, 0
    lfd f21, 0x150(r3)
    addi r7, r3, 0x168
    psq_lx f22, r0, r7, 0, 0
    lfd f22, 0x160(r3)
    addi r7, r3, 0x178
    psq_lx f23, r0, r7, 0, 0
    lfd f23, 0x170(r3)
    addi r7, r3, 0x188
    psq_lx f24, r0, r7, 0, 0
    lfd f24, 0x180(r3)
    addi r7, r3, 0x198
    psq_lx f25, r0, r7, 0, 0
    lfd f25, 0x190(r3)
    addi r7, r3, 0x1a8
    psq_lx f26, r0, r7, 0, 0
    lfd f26, 0x1a0(r3)
    addi r7, r3, 0x1b8
    psq_lx f27, r0, r7, 0, 0
    lfd f27, 0x1b0(r3)
    addi r7, r3, 0x1c8
    psq_lx f28, r0, r7, 0, 0
    lfd f28, 0x1c0(r3)
    addi r7, r3, 0x1d8
    psq_lx f29, r0, r7, 0, 0
    lfd f29, 0x1d0(r3)
    addi r7, r3, 0x1e8
    psq_lx f30, r0, r7, 0, 0
    lfd f30, 0x1e0(r3)
    addi r7, r3, 0x1f8
    psq_lx f31, r0, r7, 0, 0
    lfd f31, 0x1f0(r3)
    mtlr r8
    lwz r1, 0x28c(r3)
    lwz r3, 0x284(r3)
    lwz r3, 0x0(r3)
    stw r3, 0x0(r1)
    blr
}

void __end__catch(void* info)
{
    void* loc = *(void**)info;
    void (*dtor)(void*, int);
    if (loc != 0) {
        dtor = *(void (**)(void*, int))((char*)info + 8);
        if (dtor != 0) {
            dtor(loc, -1);
        }
    }
}

asm void ExPPC_IsInSpecification(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r6, 0x4(r3)
    mtlr r5
    mtcrf 255, r6
    lwz r1, 0x8(r3)
    lwz r2, 0xc(r3)
    lmw r13, 0x14(r3)
    lfd f14, 0x60(r3)
    addi r7, r3, 0x68
    psq_lx f14, r0, r7, 0, 0
    lfd f15, 0x70(r3)
    addi r7, r3, 0x78
    psq_lx f15, r0, r7, 0, 0
    lfd f16, 0x80(r3)
    addi r7, r3, 0x88
    psq_lx f16, r0, r7, 0, 0
    lfd f17, 0x90(r3)
    addi r7, r3, 0x98
    psq_lx f17, r0, r7, 0, 0
    lfd f18, 0xa0(r3)
    addi r7, r3, 0xa8
    psq_lx f18, r0, r7, 0, 0
    lfd f19, 0xb0(r3)
    addi r7, r3, 0xb8
    psq_lx f19, r0, r7, 0, 0
    lfd f20, 0xc0(r3)
    addi r7, r3, 0xc8
    psq_lx f20, r0, r7, 0, 0
    lfd f21, 0xd0(r3)
    addi r7, r3, 0xd8
    psq_lx f21, r0, r7, 0, 0
    lfd f22, 0xe0(r3)
    addi r7, r3, 0xe8
    psq_lx f22, r0, r7, 0, 0
    lfd f23, 0xf0(r3)
    addi r7, r3, 0xf8
    psq_lx f23, r0, r7, 0, 0
    lfd f24, 0x100(r3)
    addi r7, r3, 0x108
    psq_lx f24, r0, r7, 0, 0
    lfd f25, 0x110(r3)
    addi r7, r3, 0x118
    psq_lx f25, r0, r7, 0, 0
    lfd f26, 0x120(r3)
    addi r7, r3, 0x128
    psq_lx f26, r0, r7, 0, 0
    lfd f27, 0x130(r3)
    addi r7, r3, 0x138
    psq_lx f27, r0, r7, 0, 0
    lfd f28, 0x140(r3)
    addi r7, r3, 0x148
    psq_lx f28, r0, r7, 0, 0
    lfd f29, 0x150(r3)
    addi r7, r3, 0x158
    psq_lx f29, r0, r7, 0, 0
    lfd f30, 0x160(r3)
    addi r7, r3, 0x168
    psq_lx f30, r0, r7, 0, 0
    lfd f31, 0x170(r3)
    addi r7, r3, 0x178
    psq_lx f31, r0, r7, 0, 0
    lfd f0, 0x180(r3)
    cmpwi r4, 0x0
    mr r3, r4
    mtfsf 255, f0
    bnelr
    li r3, 0x1
    blr
}

asm void __throw(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stmw r13, 0x24c(r1)
    stfd f14, 0xf8(r1)
    addi r3, r1, 0x100
    psq_stx f14, r0, r3, 0, 0
    stfd f15, 0x108(r1)
    addi r3, r1, 0x110
    psq_stx f15, r0, r3, 0, 0
    stfd f16, 0x118(r1)
    addi r3, r1, 0x120
    psq_stx f16, r0, r3, 0, 0
    stfd f17, 0x128(r1)
    addi r3, r1, 0x130
    psq_stx f17, r0, r3, 0, 0
    stfd f18, 0x138(r1)
    addi r3, r1, 0x140
    psq_stx f18, r0, r3, 0, 0
    stfd f19, 0x148(r1)
    addi r3, r1, 0x150
    psq_stx f19, r0, r3, 0, 0
    stfd f20, 0x158(r1)
    addi r3, r1, 0x160
    psq_stx f20, r0, r3, 0, 0
    stfd f21, 0x168(r1)
    addi r3, r1, 0x170
    psq_stx f21, r0, r3, 0, 0
    stfd f22, 0x178(r1)
    addi r3, r1, 0x180
    psq_stx f22, r0, r3, 0, 0
    stfd f23, 0x188(r1)
    addi r3, r1, 0x190
    psq_stx f23, r0, r3, 0, 0
    stfd f24, 0x198(r1)
    addi r3, r1, 0x1a0
    psq_stx f24, r0, r3, 0, 0
    stfd f25, 0x1a8(r1)
    addi r3, r1, 0x1b0
    psq_stx f25, r0, r3, 0, 0
    stfd f26, 0x1b8(r1)
    addi r3, r1, 0x1c0
    psq_stx f26, r0, r3, 0, 0
    stfd f27, 0x1c8(r1)
    addi r3, r1, 0x1d0
    psq_stx f27, r0, r3, 0, 0
    stfd f28, 0x1d8(r1)
    addi r3, r1, 0x1e0
    psq_stx f28, r0, r3, 0, 0
    stfd f29, 0x1e8(r1)
    addi r3, r1, 0x1f0
    psq_stx f29, r0, r3, 0, 0
    stfd f30, 0x1f8(r1)
    addi r3, r1, 0x200
    psq_stx f30, r0, r3, 0, 0
    stfd f31, 0x208(r1)
    addi r3, r1, 0x210
    psq_stx f31, r0, r3, 0, 0
    mfcr r3
    stw r3, 0x298(r1)
    lwz r3, 0x0(r1)
    lwz r4, 0x4(r3)
    stw r3, 0x29c(r1)
    stw r3, 0x2a4(r1)
    stw r4, 0x2a8(r1)
    lwz r3, 0x8(r1)
    stw r3, 0x2ac(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x2b0(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x2b4(r1)
    addi r3, r1, 0x18
    bl ExPPC_ThrowHandler
    nop
    lwz r0, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}
