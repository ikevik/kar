#include "gobj.h"

extern void (**lbl_805DE318)(void*);

void fn_80429C14(HSD_GObj* gobj, u8 kind, void* obj)
{
    if (!(gobj->obj_kind == HSD_GOBJ_OBJ_NONE)) __assert("gobjobject.c", 42, "gobj->obj_kind == HSD_GOBJ_OBJ_NONE");
    gobj->obj_kind = kind;
    gobj->hsd_obj = obj;
}

void* fn_80429C80(HSD_GObj* gobj)
{
    void* obj;
    if (gobj->obj_kind != HSD_GOBJ_OBJ_NONE) {
        gobj->obj_kind = HSD_GOBJ_OBJ_NONE;
        obj = gobj->hsd_obj;
        gobj->hsd_obj = NULL;
    } else {
        obj = NULL;
    }
    return obj;
}

void func_80429CB0(HSD_GObj* gobj)
{
    if (gobj->obj_kind != HSD_GOBJ_OBJ_NONE) {
        lbl_805DE318[gobj->obj_kind](gobj->hsd_obj);
        gobj->obj_kind = HSD_GOBJ_OBJ_NONE;
        gobj->hsd_obj = NULL;
    }
}

#include <sysdolphin/gobjuserdata.h>

void fn_80429D0C(HSD_GObj* gobj, u8 kind, void (*remove_func)(void*), void* data)
{
    if (gobj->user_data_kind != HSD_GOBJ_USER_DATA_NONE) {
        __assert("gobjuserdata.c", 40, "gobj->user_data_kind == HSD_GOBJ_USER_DATA_NONE");
    }
    gobj->user_data_kind = kind;
    gobj->user_data = data;
    gobj->user_data_remove_func = remove_func;
}

void* fn_80429D88(HSD_GObj* gobj)
{
    void* ret;
    if (gobj->user_data_kind != HSD_GOBJ_USER_DATA_NONE) {
        gobj->user_data_kind = HSD_GOBJ_USER_DATA_NONE;
        ret = gobj->user_data;
        gobj->user_data = NULL;
        gobj->user_data_remove_func = NULL;
    } else {
        ret = NULL;
    }
    return ret;
}

void GObj_RemoveUserData(HSD_GObj* gobj)
{
    if (gobj->user_data_kind == HSD_GOBJ_USER_DATA_NONE)
        return;

    if (gobj->user_data_remove_func == NULL) {
        __assert("gobjuserdata.c", 99, "gobj->user_data_remove_func");
    }
    (*gobj->user_data_remove_func)(gobj->user_data);
    gobj->user_data_kind = HSD_GOBJ_USER_DATA_NONE;
    gobj->user_data = NULL;
}

