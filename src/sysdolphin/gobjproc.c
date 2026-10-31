#include <dolphin/types.h>
#include <functions.h>
#include <sysdolphin/gobj.h>

extern u8 __files[];
extern s32 lbl_805DE30C;
extern void* lbl_805DE308;
extern void* lbl_805DE310;
extern void* lbl_805DE314;
extern HSD_GObjProc* lbl_805DE338;
extern s32 lbl_805DE33C;
extern HSD_GObjProc* lbl_805DE340;
extern HSD_GObjProc** lbl_805DE348;
extern HSD_GObjProc** lbl_805DE34C;
extern HSD_GObjLibInitDataType HSD_GObjLibInitData;
extern HSD_ObjAllocData lbl_8058C1C8;
extern char lbl_80504DA0[];
extern char lbl_80504DAC[];
extern char lbl_805DCDB0[6];
extern u32* OSGetStackPointer(void);
extern void fn_80428430();

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

u32 fn_80428618(s32 n)
{
    s32 i = 0;
    u32* sp = (u32*) *OSGetStackPointer();
    while (sp != (u32*) -1) {
        if (i++ == n + 1)
            return sp[1];
        sp = (u32*) *sp;
    }
    return 0;
}

void fn_80428684(HSD_GObjProc* proc);
#if 0 /* not yet matching */
void fn_80428684(HSD_GObjProc* proc)
{
    HSD_GObj* g;
    HSD_GObjProc* p;
    HSD_GObj* gobj = proc->gobj;
    u8 s = proc->s_link;
    u8 pl = gobj->p_link;
    s32 idx = pl + s * (HSD_GObjLibInitData.p_link_max + 1);
    HSD_GObjProc** heads = lbl_805DE34C;
    HSD_GObjProc* ins = heads[idx];

    if (ins != NULL) {
        for (g = gobj; g != NULL; g = g->prev) {
            for (p = g->proc; p != NULL; p = p->child) {
                if (p->s_link == s) {
                    if (ins == p)
                        heads[idx] = proc;
                    goto link;
                }
            }
        }
    } else {
        heads[idx] = proc;
    }
    {
        HSD_GObjProc** h = lbl_805DE34C;
        s32 k = pl + s * (HSD_GObjLibInitData.p_link_max + 1);
        while (pl != 0) {
            pl--;
            k--;
            p = h[k];
            if (p != NULL)
                goto link;
        }
        proc->next = lbl_805DE348[s];
        lbl_805DE348[s] = proc;
        proc->prev = NULL;
        goto after;
    }
link:
    proc->next = p->next;
    p->next = proc;
    proc->prev = p;
after:
    if (proc->next != NULL)
        proc->next->prev = proc;
    proc->child = gobj->proc;
    gobj->proc = proc;
    if (lbl_8058C1F4.b0) {
        if (proc->prev == lbl_805DE340 && proc->next == lbl_805DE338 && s == lbl_805DE33C)
            lbl_805DE338 = proc;
    }
}
#endif

void fn_804287DC(HSD_GObjProc* proc);
#if 0 /* not yet matching */
void fn_804287DC(HSD_GObjProc* proc)
{
    HSD_GObj* gobj = proc->gobj;
    s32 s = proc->s_link;
    s32 pl = gobj->p_link;
    HSD_GObjProc* prev;
    HSD_GObjProc** heads;
    s32 idx;

    if (lbl_8058C1F4.b0 && proc == lbl_805DE338)
        lbl_805DE338 = proc->next;
    heads = lbl_805DE34C;
    idx = pl + s * (HSD_GObjLibInitData.p_link_max + 1);
    if (proc == heads[idx]) {
        prev = proc->prev;
        if (prev != NULL && prev->gobj->p_link == pl) {
            heads[idx] = prev;
        } else {
            heads[idx] = NULL;
        }
    }
    if (proc->prev != NULL) {
        proc->prev->next = proc->next;
    } else {
        lbl_805DE348[s] = proc->next;
    }
    if (proc->next != NULL)
        proc->next->prev = proc->prev;
}
#endif

HSD_GObjProc* HSD_GObj_AddProc(HSD_GObj* gobj, void (*cb)(HSD_GObj*), u8 pri)
{
    HSD_GObjProc* proc = HSD_ObjAlloc(&lbl_8058C1C8);
    if (proc == NULL)
        __assert(lbl_80504DA0, 0x1F, lbl_805DCDB0);
    if (!(pri <= HSD_GObjLibInitData.gproc_pri_max))
        __assert(lbl_80504DA0, 0xD8, lbl_80504DAC);
    proc->s_link = pri;
    proc->flags_1 = proc->flags_2 = 0;
    proc->flags_3 = 3;
    proc->gobj = gobj;
    proc->callback = cb;
    fn_80428684(proc);
    return proc;
}

void fn_8042898C(HSD_GObjProc* proc);
#if 0 /* not yet matching */
void fn_8042898C(HSD_GObjProc* proc)
{
    HSD_GObj* gobj;
    HSD_GObjProc* p;

    if (!lbl_8058C1F4.b0 && proc == lbl_805DE340) {
        lbl_8058C1F4.b2 = 1;
        return;
    }
    gobj = proc->gobj;
    fn_804287DC(proc);
    p = gobj->proc;
    if (p == proc) {
        gobj->proc = proc->child;
    } else {
        while (p->child != proc)
            p = p->child;
        p->child = proc->child;
    }
    HSD_ObjFree(&lbl_8058C1C8, proc);
}
#endif

void func_80428AD8(HSD_GObj* gobj);
#if 0 /* not yet matching */
void func_80428AD8(HSD_GObj* gobj)
{
    HSD_GObjProc* proc = gobj->proc;
    HSD_GObjProc* next;
    while (proc != NULL) {
        next = proc->child;
        fn_8042898C(proc);
        proc = next;
    }
}
#endif
