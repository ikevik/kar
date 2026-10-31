#include <functions.h>
extern void* memset(void*, int, unsigned long);

#include <sysdolphin/class.h>
#include <sysdolphin/tobj.h>

extern void* HSD_Alloc(u32 size);
extern void HSD_AObjReqAnim(struct _HSD_AObj* aobj, f32 frame);
extern struct _HSD_AObj* HSD_AObjLoadDesc(struct _HSD_AObjDesc* desc);
extern void* memcpy(void*, const void*, unsigned long);
extern HSD_ClassInfo* hsdSearchClassInfo(char* class_name);
extern void HSD_AObjInterpretAnim(struct _HSD_AObj* aobj, void* obj, void* update);
extern void fn_804105F0(s32);
extern void HSD_Panic(const char* file, int line, const char* msg);
extern void OSReport(const char* fmt, ...);
extern char lbl_80501F30[];
extern char lbl_8050219C[];
extern char lbl_8050223C[];
extern char lbl_805DCA74[4];
extern void* hsdNew(HSD_ClassInfo* info);
extern void* hsdAllocMemPiece(s32 size);
extern void HSD_Free(void*);
extern void HSD_AObjRemove(struct _HSD_AObj* aobj);
extern void hsdInitClassInfo(HSD_ClassInfo* class_info, HSD_ClassInfo* parent_info, char* base_class_library, char* type, s32 info_size, s32 class_size);

extern HSD_TObjInfo lbl_80501E30;
extern HSD_ClassInfo lbl_805044A8;
extern HSD_TObjInfo* lbl_805DE178;
extern HSD_TObj* lbl_805DE17C;

char lbl_805DCA50[] = "tobj.c";

extern void TObjMakeTExp();
extern void MakeTextureMtx();
extern void TObjUpdateFunc();















static inline HSD_TexAnim* findTexAnim(HSD_TexAnim* texanim, u16 id)
{
    HSD_TexAnim* ta;
    for (ta = texanim; ta != NULL; ta = ta->next) {
        if (ta->id == id)
            return ta;
    }
    return NULL;
}

void HSD_TObjRemoveAnimAll(HSD_TObj* tobj)
{
    HSD_TObj* tp;
    if (tobj != NULL) {
        for (tp = tobj; tp != NULL; tp = tp->next) {
            if (tp != NULL) {
                HSD_AObjRemove(tp->aobj);
                tp->aobj = NULL;
            }
        }
    }
}

void HSD_TObjAddAnim(HSD_TObj* tobj, HSD_TexAnim* texanim)
{
    HSD_TObj* tp;
    HSD_TexAnim* ta;
    s32 i;
    if (tobj != NULL) {
        for (tp = tobj; tp != NULL; tp = tp->next) {
            if (tp != NULL) {
                ta = findTexAnim(texanim, tp->anim_id);
                if (ta != NULL) {
                    if (tp->aobj != NULL)
                        HSD_AObjRemove(tp->aobj);
                    tp->aobj = HSD_AObjLoadDesc(ta->aobjdesc);
                    tp->imagetbl = ta->imagetbl;
                    if (tp->tluttbl != NULL) {
                        for (i = 0; tp->tluttbl[i] != NULL; i++)
                            HSD_TlutFree(tp->tluttbl[i]);
                        HSD_Free(tp->tluttbl);
                    }
                    if (ta->n_tluttbl != 0) {
                        tp->tluttbl = HSD_Alloc((ta->n_tluttbl + 1) * 4);
                        for (i = 0; i < ta->n_tluttbl; i++) {
                            tp->tluttbl[i] = HSD_TlutLoadDesc((HSD_TlutDesc*) ta->tluttbl[i]);
                        }
                        tp->tluttbl[i] = NULL;
                    } else {
                        tp->tluttbl = NULL;
                    }
                    tp->tlut_no = 0xFF;
                }
            }
        }
    }
}

void HSD_TObjReqAnimAllByFlags(HSD_TObj* tobj, f32 startframe, u32 flags)
{
    HSD_TObj* tp;
    if (tobj != NULL) {
        for (tp = tobj; tp != NULL; tp = tp->next) {
            if (tp != NULL && (flags & TOBJ_ANIM)) {
                HSD_AObjReqAnim(tp->aobj, startframe);
            }
        }
    }
}

void HSD_TObjAnim(HSD_TObj* tobj)
{
    if (tobj != NULL)
        HSD_AObjInterpretAnim(tobj->aobj, tobj, HSD_TOBJ_METHOD(tobj)->update);
}

void HSD_TObjAnimAll(HSD_TObj* tobj)
{
    HSD_TObj* tp;
    if (tobj != NULL) {
        for (tp = tobj; tp != NULL; tp = tp->next) {
            if (tp != NULL)
                HSD_AObjInterpretAnim(tp->aobj, tp, HSD_TOBJ_METHOD(tp)->update);
        }
    }
}

int TObjLoad(HSD_TObj* tobj, HSD_TObjDesc* td)
{
    tobj->next = HSD_TObjLoadDesc(td->next);
    tobj->anim_id = td->id;
    tobj->src = td->src;
    tobj->mtxid = 0x3C;
    tobj->rotate.x = td->rotate.x;
    tobj->rotate.y = td->rotate.y;
    tobj->rotate.z = td->rotate.z;
    tobj->scale = td->scale;
    tobj->translate = td->translate;
    tobj->wrap_s = td->wrap_s;
    tobj->wrap_t = td->wrap_t;
    tobj->repeat_s = td->repeat_s;
    tobj->repeat_t = td->repeat_t;
    tobj->flags = td->blend_flags;
    tobj->blending = td->blending;
    tobj->magFilt = td->magFilt;
    tobj->imagedesc = td->imagedesc;
    tobj->tlut = HSD_TlutLoadDesc(td->tlutdesc);
    tobj->lod = td->lod;
    tobj->aobj = NULL;
    tobj->flags |= TEX_MTX_DIRTY;
    tobj->tlut_no = 0xFF;
    tobj->tev = HSD_TObjTevLoadDesc(td->tev);
    fn_804105F0(2);
    return 0;
}

HSD_TObj* HSD_TObjLoadDesc(HSD_TObjDesc* td)
{
    HSD_TObj* tobj;
    HSD_ClassInfo* info;
    if (td != NULL) {
        if (td->class_name == NULL || (info = hsdSearchClassInfo(td->class_name)) == NULL) {
            tobj = HSD_TObjAlloc();
        } else {
            tobj = hsdNew(info);
            if (tobj == NULL)
                __assert(lbl_805DCA50, 0x22C, "tobj");
        }
        HSD_TOBJ_METHOD(tobj)->load(tobj, td);
        return tobj;
    }
    return NULL;
}

HSD_Tlut* HSD_TlutLoadDesc(HSD_TlutDesc* tlutdesc)
{
    HSD_Tlut* tlut;
    if (tlutdesc != NULL) {
        tlut = HSD_TlutAlloc();
        memcpy(tlut, tlutdesc, sizeof(HSD_Tlut));
        return tlut;
    }
    return NULL;
}

HSD_TObjTev* HSD_TObjTevLoadDesc(HSD_TObjTevDesc* tevdesc)
{
    HSD_TObjTev* tev;
    if (tevdesc != NULL) {
        tev = HSD_TObjTevAlloc();
        memcpy(tev, tevdesc, sizeof(HSD_TObjTev));
        return tev;
    }
    return NULL;
}

HSD_TObj* _HSD_TObjGetCurrentByType(HSD_TObj* from, u32 mapping)
{
    HSD_TObj* tobj;
    if (from == NULL) {
        tobj = lbl_805DE17C;
    } else {
        tobj = from->next;
    }
    for (; tobj != NULL; tobj = tobj->next) {
        if (tobj_coord(tobj) == mapping)
            return tobj;
    }
    return NULL;
}

u32 HSD_TexMapID2PTTexMtx(u32 x)
{
    switch (x) {
    case 0:
        return 0x40;
    case 1:
        return 0x43;
    case 2:
        return 0x46;
    case 3:
        return 0x49;
    case 4:
        return 0x4c;
    case 5:
        return 0x4f;
    case 6:
        return 0x52;
    case 7:
        return 0x55;
    }
    HSD_Panic(lbl_805DCA50, 0x297, lbl_80501F30);
    return 0;
}

u32 HSD_TGTex2Index(u32 x)
{
    switch (x) {
    case 4:
        return 0;
    case 5:
        return 1;
    case 6:
        return 2;
    case 7:
        return 3;
    case 8:
        return 4;
    case 9:
        return 5;
    case 10:
        return 6;
    case 11:
        return 7;
    }
    __assert(lbl_805DCA50, 0x6FE, "0");
    return 4;
}

u32 HSD_TexCoordID2TexGenSrc(u32 x)
{
    switch (x) {
    case 0:
        return 0xc;
    case 1:
        return 0xd;
    case 2:
        return 0xe;
    case 3:
        return 0xf;
    case 4:
        return 0x10;
    case 5:
        return 0x11;
    case 6:
        return 0x12;
    }
    __assert(lbl_805DCA50, 0x723, "0");
    return 0xC;
}

u32 fn_803F7558(u32 x)
{
    switch (x) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    case 6:
        return 6;
    case 7:
        return 7;
    }
    __assert(lbl_805DCA50, 0x749, "0");
    return 0;
}

u32 HSD_TexMtx2Index(u32 x)
{
    switch (x) {
    case 0x1e:
        return 0;
    case 0x21:
        return 1;
    case 0x24:
        return 2;
    case 0x27:
        return 3;
    case 0x2a:
        return 4;
    case 0x2d:
        return 5;
    case 0x30:
        return 6;
    case 0x33:
        return 7;
    case 0x36:
        return 8;
    case 0x39:
        return 9;
    case 0x3c:
        return 10;
    }
    HSD_Panic(lbl_805DCA50, 0x790, lbl_8050219C);
    return -1;
}

u32 HSD_Index2TexMtx(u32 x)
{
    switch (x) {
    case 0:
        return 0x1e;
    case 1:
        return 0x21;
    case 2:
        return 0x24;
    case 3:
        return 0x27;
    case 4:
        return 0x2a;
    case 5:
        return 0x2d;
    case 6:
        return 0x30;
    case 7:
        return 0x33;
    case 8:
        return 0x36;
    case 9:
        return 0x39;
    case 10:
        return 0x3c;
    }
    OSReport(lbl_8050223C, x);
    HSD_Panic(lbl_805DCA50, 0x7B0, lbl_805DCA74);
    return 0x3C;
}

u32 fn_803F7754(u32 x)
{
    switch (x) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    case 6:
        return 6;
    case 7:
        return 7;
    }
    __assert(lbl_805DCA50, 0x7F0, "0");
    return 0;
}

void HSD_TObjRemoveAll(HSD_TObj* tobj)
{
    HSD_TObj* tn;
    for (; tobj != NULL; tobj = tn) {
        tn = tobj->next;
        if (tobj != NULL) {
            HSD_CLASS_METHOD(tobj)->release((HSD_Class*) tobj);
            HSD_CLASS_METHOD(tobj)->destroy((HSD_Class*) tobj);
        }
    }
}

HSD_TObj* HSD_TObjGetNext(HSD_TObj* tobj)
{
    if (tobj == NULL)
        return NULL;
    return tobj->next;
}

void fn_803F7870(HSD_TObj* tobj, HSD_TObj* new_tobj)
{
    if (tobj == NULL)
        return;
    if (new_tobj != NULL) {
        new_tobj->next = tobj->next;
        tobj->next = new_tobj;
    }
}

HSD_TObj* HSD_TObjAlloc(void)
{
    HSD_TObj* tobj = hsdNew((HSD_ClassInfo*) (lbl_805DE178 ? lbl_805DE178 : &lbl_80501E30));
    if (tobj == NULL)
        __assert(lbl_805DCA50, 0x855, "new");
    return tobj;
}

void HSD_TObjFree(HSD_TObj* tobj)
{
    if (tobj != NULL)
        HSD_CLASS_METHOD(tobj)->destroy((HSD_Class*) tobj);
}

HSD_Tlut* HSD_TlutAlloc(void)
{
    HSD_Tlut* tlut = hsdAllocMemPiece(sizeof(HSD_Tlut));
    if (tlut == NULL)
        __assert(lbl_805DCA50, 0x872, "tlut");
    memset(tlut, 0, sizeof(HSD_Tlut));
    return tlut;
}

void HSD_TlutFree(HSD_Tlut* tlut)
{
    if (tlut != NULL)
        hsdFreeMemPiece(tlut, sizeof(HSD_Tlut));
}

HSD_TObjTev* HSD_TObjTevAlloc(void)
{
    HSD_TObjTev* tev = hsdAllocMemPiece(sizeof(HSD_TObjTev));
    if (tev == NULL)
        __assert(lbl_805DCA50, 0x89D, "tev");
    memset(tev, 0, sizeof(HSD_TObjTev));
    return tev;
}

HSD_ImageDesc* HSD_ImageDescAlloc(void)
{
    HSD_ImageDesc* idesc = hsdAllocMemPiece(sizeof(HSD_ImageDesc));
    if (idesc == NULL)
        __assert(lbl_805DCA50, 0x8C8, "idesc");
    memset(idesc, 0, sizeof(HSD_ImageDesc));
    return idesc;
}

void HSD_ImageDescFree(HSD_ImageDesc* idesc)
{
    hsdFreeMemPiece(idesc, sizeof(HSD_ImageDesc));
}

int TObjInit(HSD_TObj* tobj)
{
    int rc = HSD_PARENT_INFO(&lbl_80501E30)->init((HSD_Class*) tobj);
    if (rc >= 0) {
        rc = 0;
        tobj->anim_id = 0xFFFF;
    }
    return rc;
}

void TObjRelease(HSD_TObj* tobj)
{
    HSD_AObjRemove(tobj->aobj);
    if (tobj->tlut != NULL)
        hsdFreeMemPiece(tobj->tlut, 0x10);
    if (tobj->tev != NULL)
        hsdFreeMemPiece(tobj->tev, 0x20);
    if (tobj->tluttbl != NULL) {
        s32 i;
        for (i = 0; tobj->tluttbl[i] != NULL; i++) {
            if (tobj->tluttbl[i] != NULL)
                hsdFreeMemPiece(tobj->tluttbl[i], 0x10);
        }
        HSD_Free(tobj->tluttbl);
    }
    HSD_PARENT_INFO(&lbl_80501E30)->release((HSD_Class*) tobj);
}

void TObjAmnesia(HSD_ClassInfo* info)
{
    if ((HSD_TObjInfo*) info == lbl_805DE178)
        lbl_805DE178 = NULL;
    if ((HSD_TObjInfo*) info == &lbl_80501E30)
        lbl_805DE17C = NULL;
    HSD_PARENT_INFO(&lbl_80501E30)->amnesia(info);
}

