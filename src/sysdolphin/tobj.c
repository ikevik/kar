#include <functions.h>
extern void* memset(void*, int, unsigned long);

#include <sysdolphin/class.h>
#include <sysdolphin/tobj.h>

extern void* hsdNew(HSD_ClassInfo* info);
extern void* hsdAllocMemPiece(s32 size);
extern void HSD_Free(void*);
extern void HSD_AObjRemove(struct _HSD_AObj* aobj);
extern void hsdInitClassInfo(HSD_ClassInfo* class_info, HSD_ClassInfo* parent_info, char* base_class_library, char* type, s32 info_size, s32 class_size);

extern HSD_TObjInfo lbl_80501E30;
extern HSD_ClassInfo lbl_805044A8;
extern HSD_TObjInfo* lbl_805DE178;
extern HSD_TObjInfo* lbl_805DE17C;

char lbl_805DCA50[] = "tobj.c";

extern void TObjMakeTExp();
extern void MakeTextureMtx();
extern void TObjUpdateFunc();

void HSD_TObjRemoveAll(HSD_TObj* tobj)
{
    HSD_TObj* tp;
    HSD_TObj* tn;
    for (tp = tobj; tp != NULL; tp = tn) {
        tn = tp->next;
        if (tp != NULL) {
            HSD_CLASS_METHOD(tp)->release((HSD_Class*) tp);
            HSD_CLASS_METHOD(tp)->destroy((HSD_Class*) tp);
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
    if (new_tobj == NULL)
        return;
    new_tobj->next = tobj->next;
    tobj->next = new_tobj;
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
        *(u16*) ((u8*) tobj + 0x4A) = 0xFFFF;
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
