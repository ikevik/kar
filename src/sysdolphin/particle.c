#include <dolphin/types.h>
#include <sysdolphin/gobj.h>
#include <sysdolphin/class.h>

extern HSD_GObjLibInitDataType HSD_GObjLibInitData;
extern HSD_GObj** lbl_805DE32C;
extern HSD_GObj* lbl_805DE320;
extern u8 lbl_805DE350;
extern u8 lbl_805DE351;
extern u8 lbl_805DE352;
extern u8 lbl_805DE353;
extern u8 lbl_80504F30[];

typedef struct ParticleVec {
    f32 x, y, z;
} ParticleVec;
extern ParticleVec lbl_80504F40;

typedef struct ParticleNode {
    struct ParticleNode* next;
    u8 count;
} ParticleNode;

extern void fn_803FF570(void*);
extern void fn_803FE4B8(void*);
extern void* HSD_CObjGetCurrent(void);
extern u32 fn_8042A0A0(s32);
extern void HSD_JObjDispAll(void* jobj, void* mtx, u32 flags, u32 rmode);
extern int HSD_CObjSetCurrent(void*);
extern void HSD_CObjEndCurrent(void);
extern void HSD_GObj_DispatchGXLink(HSD_GObj*, s32);

void fn_8042A1A8(void)
{
    HSD_GObj* g = lbl_805DE32C[HSD_GObjLibInitData.gx_link_max + 1];
    for (; g != NULL; g = g->next_gx) {
        if (g->render_cb != NULL) {
            HSD_GObj* saved = lbl_805DE320;
            lbl_805DE320 = g;
            g->render_cb(g, 0);
            lbl_805DE320 = saved;
        }
    }
}

void fn_8042A22C(HSD_GObj* gobj)
{
    fn_803FF570(gobj->hsd_obj);
    fn_803FE4B8(HSD_CObjGetCurrent());
}

void fn_8042A258(HSD_GObj* gobj, s32 code)
{
    void* jobj = gobj->hsd_obj;
    HSD_JObjDispAll(jobj, NULL, fn_8042A0A0(code), 0);
}

void fn_8042A29C(HSD_GObj* gobj)
{
    if (HSD_CObjSetCurrent(gobj->hsd_obj)) {
        HSD_GObj_DispatchGXLink(gobj, 7);
        HSD_CObjEndCurrent();
    }
}

u32 fn_8042A45C(void* head, ParticleNode* node)
{
    ParticleNode** pp = (ParticleNode**) ((u8*) head + 4);
    u32 sum = 0;
    ParticleNode* n;
    while ((n = *pp) != NULL) {
        sum += n->count;
        pp = (ParticleNode**) n;
    }
    *pp = node;
    (*pp)->next = NULL;
    return sum;
}

void fn_8042A414(void* head)
{
    u8 r = fn_8042A45C(head, (ParticleNode*) lbl_80504F30);
    u8 a = r + 1;
    lbl_805DE353 = r;
    lbl_805DE352 = a;
    a++;
    lbl_805DE351 = a;
    a++;
    lbl_805DE350 = a;
}

void fn_8042A494(ParticleVec* out)
{
    *out = lbl_80504F40;
}
