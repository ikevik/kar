#include <dolphin/types.h>
#include <functions.h>
#include <sysdolphin/gobj.h>

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
#if 0 /* near miss: register allocation */
void fn_80428684(HSD_GObjProc* proc)
{
    HSD_GObjProc* p;
    HSD_GObj* g;
    s32 idx;
    u8 pl;
    HSD_GObj* gobj;
    u8 s;

    gobj = proc->gobj;
    s = proc->s_link;
    pl = gobj->p_link;
    idx = pl + s * (HSD_GObjLibInitData.p_link_max + 1);

    if (lbl_805DE34C[idx] != NULL) {
        for (g = gobj; g != NULL; g = g->prev) {
            for (p = g->proc; p != NULL; p = p->child) {
                if (p->s_link == s) {
                    if (lbl_805DE34C[idx] == p)
                        lbl_805DE34C[idx] = proc;
                    goto link;
                }
            }
        }
    } else {
        lbl_805DE34C[idx] = proc;
    }
    {
        s32 k = pl + s * (HSD_GObjLibInitData.p_link_max + 1);
        while (pl-- != 0) {
            p = lbl_805DE34C[--k];
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
void fn_804287DC(HSD_GObjProc* proc)
{
    s32 idx;
    HSD_GObjProc* prev;
    s32 pl;
    s32 s;
    HSD_GObj* gobj;

    gobj = proc->gobj;
    s = proc->s_link;
    pl = gobj->p_link;
    if (lbl_8058C1F4.b0 && proc == lbl_805DE338)
        lbl_805DE338 = proc->next;
    idx = pl + s * (HSD_GObjLibInitData.p_link_max + 1);
    if (proc == lbl_805DE34C[idx]) {
        prev = proc->prev;
        if (prev != NULL && prev->gobj->p_link == pl) {
            lbl_805DE34C[idx] = prev;
        } else {
            lbl_805DE34C[idx] = NULL;
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
#if 0 /* near miss: register allocation */
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
#if 0 /* near miss: register allocation */
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
