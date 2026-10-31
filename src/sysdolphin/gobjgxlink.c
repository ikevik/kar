#include <dolphin/types.h>
#include <functions.h>
#include <sysdolphin/gobj.h>

extern HSD_GObjLibInitDataType HSD_GObjLibInitData;
extern HSD_GObj** lbl_805DE328;
extern HSD_GObj** lbl_805DE32C;

extern void fn_8042904C(s32 where, HSD_GObj* gobj, u8 p_link, u8 priority, HSD_GObj* position);

void fn_804293F4(HSD_GObj* gobj, u8 p_link, u8 priority)
{
    fn_8042904C(0, gobj, p_link, priority, NULL);
}

void fn_80429430(HSD_GObj* gobj, HSD_GObj* other)
{
    fn_8042904C(3, gobj, other->p_link, other->p_priority, other);
}

static inline void gx_reorder(HSD_GObj* gobj, HSD_GObj* hiprio)
{
    s32 link = gobj->gx_link;
    gobj->prev_gx = hiprio;
    if (hiprio != NULL) {
        gobj->next_gx = hiprio->next_gx;
        hiprio->next_gx = gobj;
    } else {
        gobj->next_gx = lbl_805DE32C[link];
        lbl_805DE32C[link] = gobj;
    }
    if (gobj->next_gx != NULL) {
        gobj->next_gx->prev_gx = gobj;
    } else {
        lbl_805DE328[gobj->gx_link] = gobj;
    }
}

static inline void gx_first_lower_prio(HSD_GObj* gobj)
{
    HSD_GObj* p = lbl_805DE328[gobj->gx_link];
    while (p != NULL && p->render_priority > gobj->render_priority) {
        p = p->prev_gx;
    }
    gx_reorder(gobj, p);
}

static inline void gx_first_higher_prio(HSD_GObj* gobj)
{
    HSD_GObj* p = lbl_805DE32C[gobj->gx_link];
    while (p != NULL && p->render_priority < gobj->render_priority) {
        p = p->next_gx;
    }
    gx_reorder(gobj, p != NULL ? p->prev_gx : lbl_805DE328[gobj->gx_link]);
}

HSD_GObj* HSD_GObj_AddGXLink_2(s32 where, HSD_GObj* gobj, void (*cb)(HSD_GObj*, s32), u8 gx_link, u8 priority, HSD_GObj* position)
{
    gobj->render_cb = cb;
    gobj->gx_link = gx_link;
    gobj->render_priority = priority;
    switch (where) {
    case 0:
        gx_first_lower_prio(gobj);
        break;
    case 1:
        gx_first_higher_prio(gobj);
        break;
    case 2:
        gx_reorder(gobj, position);
        break;
    case 3:
        gx_reorder(gobj, position->prev_gx);
        break;
    }
    return gobj;
}

HSD_GObj* HSD_GObj_AddGXLink(HSD_GObj* gobj, void (*cb)(HSD_GObj*, s32), u8 gx_link, u8 priority)
{
    if (!(gx_link <= HSD_GObjLibInitData.gx_link_max))
        __assert("gobjgxlink.c", 0xA7, "gx_link <= HSD_GObjLibInitData.gx_link_max");
    return HSD_GObj_AddGXLink_2(0, gobj, cb, gx_link, priority, NULL);
}

HSD_GObj* fn_80429728(HSD_GObj* gobj, void (*cb)(HSD_GObj*, s32), u8 priority)
{
    return HSD_GObj_AddGXLink_2(0, gobj, cb, HSD_GObjLibInitData.gx_link_max + 1, priority, NULL);
}

void func_80429774(HSD_GObj* gobj)
{
    if (gobj->gx_link == HSD_GOBJ_GXLINK_NONE)
        __assert("gobjgxlink.c", 0x19F, "gobj->gx_link != HSD_GOBJ_GXLINK_NONE");
    if (gobj->prev_gx != NULL) {
        gobj->prev_gx->next_gx = gobj->next_gx;
    } else {
        lbl_805DE32C[gobj->gx_link] = gobj->next_gx;
    }
    if (gobj->next_gx != NULL) {
        gobj->next_gx->prev_gx = gobj->prev_gx;
    } else {
        lbl_805DE328[gobj->gx_link] = gobj->prev_gx;
    }
    gobj->gx_link = HSD_GOBJ_GXLINK_NONE;
    gobj->render_priority = 0;
    gobj->prev_gx = NULL;
    gobj->next_gx = NULL;
}

void fn_80429830(s32 where, HSD_GObj* gobj, u8 gx_link, u8 priority, HSD_GObj* position)
{
    func_80429774(gobj);
    gobj->gx_link = gx_link;
    gobj->render_priority = priority;
    switch (where) {
    case 0:
        gx_first_lower_prio(gobj);
        break;
    case 1:
        gx_first_higher_prio(gobj);
        break;
    case 2:
        gx_reorder(gobj, position);
        break;
    case 3:
        gx_reorder(gobj, position->prev_gx);
        break;
    }
}

void fn_80429B24(HSD_GObj* gobj, u8 gx_link, u8 priority)
{
    if (!(gx_link <= HSD_GObjLibInitData.gx_link_max))
        __assert("gobjgxlink.c", 0x1F7, "gx_link <= HSD_GObjLibInitData.gx_link_max");
    fn_80429830(0, gobj, gx_link, priority, NULL);
}

void fn_80429BAC(HSD_GObj* gobj, HSD_GObj* other)
{
    fn_80429830(2, gobj, other->gx_link, other->render_priority, other);
}

void fn_80429BE0(HSD_GObj* gobj, HSD_GObj* other)
{
    fn_80429830(3, gobj, other->gx_link, other->render_priority, other);
}
