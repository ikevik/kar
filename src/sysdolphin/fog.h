#ifndef _hsd_fog_h_
#define _hsd_fog_h_

#include <dolphin/gx/gxtypes.h>
#include <dolphin/mtx/mtxtypes.h>
#include <sysdolphin/object.h>

typedef struct _HSD_FogAdj {
    HSD_Obj parent;
    u32 flags; //0x08
    s16 center; //0x0C
    u16 width; //0x0E
    Mtx44 mtx; //0x10
    struct _HSD_AObj* aobj; //0x50
} HSD_FogAdj;

typedef struct _HSD_Fog {
    HSD_Obj parent;
    u32 type; //0x08
    struct _HSD_FogAdj* fog_adj; //0x0C
    f32 start; //0x10
    f32 end; //0x14
    GXColor color; //0x18
    struct _HSD_AObj* aobj; //0x1C
    f32 end_scale; //0x20
} HSD_Fog;

typedef struct _HSD_FogAdjDesc {
    u32 flags; //0x00
    u16 center; //0x04
    u16 width; //0x06
    Mtx44 mtx; //0x08
} HSD_FogAdjDesc;

typedef struct _HSD_FogInfo {
    HSD_ObjInfo parent;
    void (*update)(void* obj, u32 type, f32* fval); //0x3C
} HSD_FogInfo;

typedef struct _HSD_FogAdjInfo {
    HSD_ObjInfo parent;
} HSD_FogAdjInfo;

typedef struct _HSD_FogDesc {
    u32 type;
    struct _HSD_FogAdjDesc* fogadjdesc; //0x04
    f32 start;
    f32 end;
    GXColor color;
} HSD_FogDesc;

void HSD_FogSet(HSD_Fog*);
HSD_Fog* HSD_FogLoadDesc(HSD_FogDesc*);
void HSD_FogInit(HSD_Fog*, HSD_FogDesc*);
HSD_FogAdj* HSD_FogAdjLoadDesc(HSD_FogAdjDesc*);
void HSD_FogAdjInit(HSD_FogAdj*, HSD_FogAdjDesc*);
void HSD_FogSetCurrent(HSD_Fog*);
HSD_Fog* HSD_FogGetCurrent(void);
GXColor HSD_FogGetColor(HSD_Fog*);

#endif
