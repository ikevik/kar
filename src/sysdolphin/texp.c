#include <dolphin/types.h>

#include "texp.h"

extern void* hsdAllocMemPiece(s32 size);
extern void hsdFreeMemPiece(void* v, s32 size);
extern void __assert(const char*, unsigned long, const char*);
extern void* memset(void*, int, size_t);
extern void HSD_TExpSetReg(HSD_TExp* texp);
extern void HSD_TExpColorInSub(HSD_TExp* texp, s32 sel, HSD_TExp* exp, s32 idx);
extern void HSD_TExpAlphaInSub(HSD_TExp* texp, s32 sel, HSD_TExp* exp, s32 idx);
extern s32 fn_803F903C(void);
extern void fn_803F908C(HSD_TevDesc* desc);

extern void HSD_TExpUnref(HSD_TExp* texp, s32 sel);

typedef struct _TExpTObj {
    u8 pad0[0xC];
    s32 id;      // 0xC
    u8 pad1[0xA4 - 0x10];
    s32 coord;   // 0xA4
} TExpTObj;

typedef struct _TExpTevDesc {
    HSD_TevDesc desc;
    TExpTObj* tobj;
} TExpTevDesc;

#define HSD_TE_0_PTR ((HSD_TExp*) -1)
#define HSD_TE_1_PTR ((HSD_TExp*) -2)

HSD_TExpType HSD_TExpGetType(HSD_TExp* texp)
{
    if (texp == NULL) {
        return HSD_TE_ZERO;
    } else if (texp == HSD_TE_0_PTR) {
        return HSD_TE_TEX;
    } else if (texp == HSD_TE_1_PTR) {
        return HSD_TE_RAS;
    }
    return texp->type;
}

void HSD_TExpRef(HSD_TExp* texp, u8 sel)
{
    switch (HSD_TExpGetType(texp)) {
    case HSD_TE_TEV:
        if (sel == HSD_TE_RGB) {
            texp->tev.c_ref++;
        } else {
            texp->tev.a_ref++;
        }
        break;
    case HSD_TE_CNST:
        texp->cnst.ref++;
        break;
    default:
        break;
    }
}

HSD_TExp* HSD_TExpTev(HSD_TExp** texp_list)
{
    HSD_TExp* texp;
    int i;

    assert_line(0x127, texp_list);
    texp = hsdAllocMemPiece(sizeof(HSD_TETev));
    if (texp == NULL) {
        __assert("texp.c", 0x3f, "texp");
    }
    memset(texp, 0xff, sizeof(HSD_TETev));
    texp->type = HSD_TE_TEV;
    texp->comm.next = *texp_list;
    *texp_list = texp;
    texp->tev.c_ref = 0;
    texp->tev.a_ref = 0;
    texp->tev.tex = NULL;
    for (i = 0; i < 4; i++) {
        texp->tev.c_in[i].exp = NULL;
        texp->tev.a_in[i].exp = NULL;
    }
    return texp;
}

void HSD_TExpOrder(HSD_TExp* texp, struct _HSD_TObj* tex, s32 chan)
{
    assert_line(0x347, texp);
    assert_line(0x348, HSD_TExpGetType(texp) == HSD_TE_TEV);
    texp->tev.tex = tex;
    if (chan == HSD_TE_UNDEF) {
        texp->tev.chan = HSD_TE_UNDEF;
    } else {
        texp->tev.chan = chan;
    }
}

HSD_TExp* HSD_TExpCnst(void* val, s32 comp, s32 ctype, HSD_TExp** texp_list)
{
    HSD_TExp* texp;

    assert_line(0x16a, texp_list);
    for (texp = *texp_list; texp != NULL; texp = texp->comm.next) {
        if (texp->type == HSD_TE_CNST && texp->cnst.val == val && texp->cnst.comp == comp) {
            assert_line(0x171, texp->cnst.ctype == ctype);
            return texp;
        }
    }
    if (comp == HSD_TE_0) {
        return NULL;
    }
    texp = hsdAllocMemPiece(sizeof(HSD_TECnst));
    if (texp == NULL) {
        __assert("texp.c", 0x47, "texp");
    }
    texp->type = HSD_TE_CNST;
    texp->comm.next = *texp_list;
    *texp_list = texp;
    texp->cnst.ref = 0;
    texp->cnst.val = val;
    texp->cnst.comp = comp;
    texp->cnst.ctype = ctype;
    texp->cnst.reg = 0xff;
    texp->cnst.idx = 0xff;
    texp->cnst.range = 0;
    return texp;
}

void HSD_TExpColorOp(HSD_TExp* texp, s32 op, s32 bias, s32 scale, u8 clamp)
{
    assert_line(0x19a, texp);
    assert_line(0x19b, HSD_TExpGetType(texp) == HSD_TE_TEV);
    texp->tev.c_op = op;
    texp->tev.c_clamp = clamp != 0;
    if (op == 0 || op == 1) {
        texp->tev.c_bias = bias;
        texp->tev.c_scale = scale;
    } else {
        texp->tev.c_bias = 0;
        texp->tev.c_scale = 0;
    }
}

void HSD_TExpAlphaOp(HSD_TExp* texp, s32 op, s32 bias, s32 scale, u8 clamp)
{
    assert_line(0x1b4, texp);
    assert_line(0x1b5, HSD_TExpGetType(texp) == HSD_TE_TEV);
    texp->tev.a_op = op;
    texp->tev.a_clamp = clamp != 0;
    if (op == 0 || op == 1) {
        texp->tev.a_bias = bias;
        texp->tev.a_scale = scale;
    } else {
        texp->tev.a_bias = 0;
        texp->tev.a_scale = 0;
    }
}

void HSD_TExpColorIn(HSD_TExp* texp, s32 sel_a, HSD_TExp* exp_a, s32 sel_b, HSD_TExp* exp_b, s32 sel_c, HSD_TExp* exp_c, s32 sel_d, HSD_TExp* exp_d)
{
    assert_line(0x2b5, texp);
    assert_line(0x2b6, HSD_TExpGetType(texp) == HSD_TE_TEV);
    HSD_TExpColorInSub(texp, sel_a, exp_a, 0);
    HSD_TExpColorInSub(texp, sel_b, exp_b, 1);
    HSD_TExpColorInSub(texp, sel_c, exp_c, 2);
    HSD_TExpColorInSub(texp, sel_d, exp_d, 3);
}

void HSD_TExpFreeTevDesc(TExpTevDesc* tdesc)
{
    TExpTevDesc* next;
    while (tdesc != NULL) {
        next = (TExpTevDesc*) tdesc->desc.next;
        hsdFreeMemPiece(tdesc, sizeof(TExpTevDesc));
        tdesc = next;
    }
}

void HSD_TExpSetupTev(TExpTevDesc* tdesc, HSD_TExp* texp)
{
    HSD_TExpSetReg(texp);
    while (tdesc != NULL) {
        if (tdesc->tobj != NULL) {
            tdesc->desc.map = tdesc->tobj->id;
            tdesc->desc.coord = tdesc->tobj->coord;
        }
        fn_803F903C();
        fn_803F908C(&tdesc->desc);
        tdesc = (TExpTevDesc*) tdesc->desc.next;
    }
}

void HSD_TExpAlphaIn(HSD_TExp* texp, s32 sel_a, HSD_TExp* exp_a, s32 sel_b, HSD_TExp* exp_b, s32 sel_c, HSD_TExp* exp_c, s32 sel_d, HSD_TExp* exp_d)
{
    assert_line(0x337, texp);
    assert_line(0x338, HSD_TExpGetType(texp) == HSD_TE_TEV);
    HSD_TExpAlphaInSub(texp, sel_a, exp_a, 0);
    HSD_TExpAlphaInSub(texp, sel_b, exp_b, 1);
    HSD_TExpAlphaInSub(texp, sel_c, exp_c, 2);
    HSD_TExpAlphaInSub(texp, sel_d, exp_d, 3);
}

static void TExpFree(HSD_TExp* texp)
{
    switch (HSD_TExpGetType(texp)) {
    case HSD_TE_TEV:
        hsdFreeMemPiece(texp, sizeof(HSD_TETev));
        break;
    case HSD_TE_CNST:
        hsdFreeMemPiece(texp, sizeof(HSD_TECnst));
        break;
    }
}

HSD_TExp* HSD_TExpFreeList(HSD_TExp* list, s32 type, s32 all)
{
    HSD_TExp** pp = &list;
    HSD_TExp* next;
    HSD_TExp* p;

    if (all) {
        while (*pp != NULL) {
            if (type == HSD_TE_ALL || type == (*pp)->type) {
                switch ((*pp)->type) {
                case HSD_TE_TEV:
                    next = (*pp)->comm.next;
                    TExpFree(*pp);
                    *pp = next;
                    continue;
                case HSD_TE_CNST:
                    next = (*pp)->comm.next;
                    TExpFree(*pp);
                    *pp = next;
                    continue;
                default:
                    __assert("texp.c", 0xdc, "0");
                    break;
                }
            }
            pp = &(*pp)->comm.next;
        }
    } else {
        if (type == HSD_TE_ALL || type == HSD_TE_TEV) {
            for (p = list; p != NULL; p = p->comm.next) {
                switch (p->type) {
                case HSD_TE_TEV:
                    if (p->tev.c_ref == 0 && p->tev.c_ref == 0) {
                        HSD_TExpUnref(p, HSD_TE_RGB);
                        HSD_TExpUnref(p, HSD_TE_A);
                    }
                    break;
                }
            }
        }
        while (*pp != NULL) {
            if (type == HSD_TE_ALL || type == (*pp)->type) {
                switch ((*pp)->type) {
                case HSD_TE_TEV:
                    if ((*pp)->tev.c_ref == 0 && (*pp)->tev.a_ref == 0) {
                        next = (*pp)->comm.next;
                        TExpFree(*pp);
                        *pp = next;
                        continue;
                    }
                    break;
                case HSD_TE_CNST:
                    if ((*pp)->cnst.ref == 0) {
                        next = (*pp)->comm.next;
                        TExpFree(*pp);
                        *pp = next;
                        continue;
                    }
                    break;
                default:
                    __assert("texp.c", 0x10c, "0");
                    break;
                }
            }
            pp = &(*pp)->comm.next;
        }
    }
    return list;
}
