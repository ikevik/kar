#include "initialize.h"

#include <sysdolphin/video.h>

extern void* FrameBuffer[HSD_VI_XFB_MAX];
extern HSD_MemReport memReport;
extern BOOL init_done;

extern GXRenderModeObj* rmode;

extern int lbl_805DCBC0;
extern int lbl_805DCBBC, lbl_805DE2A8;
void HSD_OSInit();
void* HSD_AllocateXFB(int nbuffer, GXRenderModeObj* rm);
void HSD_GXInit(void);
void HSD_ObjInit(void);
s32 HSD_GetHeap(void);
void HSD_ListInitAllocData(void);
void fn_803FB13C(void);
void HSD_FObjInitAllocData(void);
void HSD_IDInitAllocData(void);
void HSD_VecInitAllocData(void);
void HSD_MtxInitAllocData(void);
void HSD_RObjInitAllocData(void);
void HSD_RenderInitAllocData(void);
void HSD_ShadowInitAllocData(void);
void HSD_ZListInitAllocData(void);


void HSD_InitComponent(void)
{
    void* fifo;
    DVDInit();
    HSD_AllocateXFB(lbl_805DCBC0, rmode);
    fifo = HSD_AllocateFIFO(lbl_805DCBBC);
    lbl_805DE2A8 = GXInit(fifo, lbl_805DCBBC);
    memReport.gxfifo = lbl_805DCBBC;
    HSD_OSInit(lbl_805DE2A8, &memReport);

    {
        HSD_VIStatus vi_status;
        GXColor black = { 0, 0, 0, 0 };

        vi_status.rmode = *rmode;
        vi_status.black = GX_TRUE;
        vi_status.vf = GX_TRUE;
        vi_status.gamma = GX_GM_1_0;
        vi_status.clear_clr = black;
        vi_status.clear_z = GX_MAX_Z24;
        vi_status.update_clr = GX_ENABLE;
        vi_status.update_alpha = GX_ENABLE;
        vi_status.update_z = GX_ENABLE;

        HSD_VIInit(&vi_status, FrameBuffer[0], FrameBuffer[1], FrameBuffer[2]);
    }

    HSD_GXInit();
    HSD_DVDInit();
    HSD_IDSetup();
    VIWaitForRetrace();
    HSD_ObjInit();
    init_done = TRUE;
}

void HSD_DVDInit(void)
{
}

extern void* fn_803D3C04(u32 size, u32 align);
extern void fn_803CD204(GXLightObj*, f32, f32, f32);
extern void func_803CD214(GXLightObj*, f32, f32, f32);
extern void func_803CD230(GXLightObj*, GXColor);
extern void GXInitLightAttn(GXLightObj*, f32, f32, f32, f32, f32, f32);
extern void GXLoadLightObjImm(GXLightObj*, u32);
extern u32 fn_803FF9D0(u32);
extern void HSD_StateInvalidate(u32);
extern void HSD_Panic(char* file, int line, char* msg);
extern void __assert(const char*, unsigned long, const char*);
extern void OSReport(const char*, ...);
extern void* OSGetArenaLo(void);
extern void* OSGetArenaHi(void);
extern void OSSetArenaLo(void*);
extern u32 OSGetPhysicalMemSize(void);
extern s32 OSCreateHeap(void*, void*);
extern s32 OSSetCurrentHeap(s32);
extern void OSDestroyHeap(s32);
extern s32 OSCheckHeap(s32);
extern void* fn_803D360C(s32 heap, u32 size);
extern void fn_803D3708(s32 heap, void* ptr);
extern void _HSD_MemSetCallbacks(void* cbs, u32 size);
extern u32 _HSD_MemGetRemain(void);
extern u32 _HSD_MemFree(void);
extern void HSD_ObjSetHeap(u32 size, void* ptr);
extern void fn_803CF938(u32, u32);
extern void fn_803CFAC0(u32, u32);
extern void GXInvalidateVtxCache(void);
extern void GXInvalidateTexAll(void);
extern void func_8042122C(const char*);

extern s32 lbl_805DCBB0;
extern u32 lbl_805DCBB8;
extern GXColor lbl_805DCBC4;
extern u32 lbl_805DE290;
extern u32 lbl_805DE294;
extern u32 lbl_805DE298;
extern u32 lbl_805DE29C;
extern s32 lbl_805DE2A0;
extern u32 lbl_805DE2A4;
extern u32 lbl_805DE2AC;
extern s32 lbl_805DE2B4;
extern s32 lbl_805DE2B8;
extern s32 lbl_805DE2C0;
extern u32 lbl_805DE2C4;

void* HSD_AllocateXFB(int nbuffer, GXRenderModeObj* rm)
{
    int i;
    u32 size;
    void* fb;

    if (rm == NULL) {
        return NULL;
    }
    size = ((rm->fbWidth + 15) & 0xFFF0) * rm->xfbHeight * 2;
    memReport.xfb = size * nbuffer;
    for (i = 0; i < nbuffer; i++) {
        fb = fn_803D3C04(size, 32);
        FrameBuffer[i] = fb;
        if (fb == NULL) {
            HSD_Panic("initialize.c", 244, "No memory space remains for XFB.\n");
        }
    }
    for (i = nbuffer; i < HSD_VI_XFB_MAX; i++) {
        FrameBuffer[i] = NULL;
    }
    return FrameBuffer;
}

void* HSD_AllocateFIFO(u32 size)
{
    void* fifo = fn_803D3C04(size, 32);
    if (fifo == NULL) {
        HSD_Panic("initialize.c", 263, "no space remains for gx fifo.\n");
    }
    return fifo;
}

void HSD_GXInit(void)
{
    GXLightObj lobj;
    GXColor color;
    int i;

    fn_803CD204(&lobj, 1.0F, 0.0F, 0.0F);
    func_803CD214(&lobj, 1.0F, 0.0F, 0.0F);
    GXInitLightAttn(&lobj, 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F);
    color = lbl_805DCBC4;
    func_803CD230(&lobj, color);
    for (i = 0; i < 8; i++) {
        GXLoadLightObjImm(&lobj, fn_803FF9D0(i));
    }
    HSD_StateInvalidate(-1);
}

void* HSD_MemAllocCallback(u32 size)
{
    void* addr;
    if (size == 0) {
        return NULL;
    }
    addr = fn_803D360C(HSD_GetHeap(), size);
    if (addr == NULL) {
        __assert("initialize.c", 397, "addr");
    }
    return addr;
}

void HSD_MemFreeCallback(void* ptr)
{
    fn_803D3708(HSD_GetHeap(), ptr);
}

void HSD_MemCheckCallback(void)
{
    OSCheckHeap(HSD_GetHeap());
}

void HSD_MemResetCallback(void)
{
    u32 i;
    OSDestroyHeap(lbl_805DCBB0);
    if (lbl_805DE298 != 0 && lbl_805DE29C != 0) {
        lbl_805DE290 = lbl_805DE298;
        lbl_805DE294 = lbl_805DE29C;
        lbl_805DE298 = 0;
        lbl_805DE29C = 0;
    }
    if (lbl_805DE2A0 != 0) {
        for (i = 0; i < (lbl_805DE294 - lbl_805DE290) >> 2; i++) {
            ((u32*) lbl_805DE290)[i] = lbl_805DE2A4;
        }
    }
    lbl_805DCBB0 = OSCreateHeap((void*) lbl_805DE290, (void*) lbl_805DE294);
    OSSetCurrentHeap(lbl_805DCBB0);
}

BOOL HSD_MemInRangeCallback(u32 ptr)
{
    BOOL result = FALSE;
    if (lbl_805DE290 <= ptr && ptr < lbl_805DE294) {
        result = TRUE;
    }
    return result;
}

s32 HSD_GetHeap(void)
{
    if (lbl_805DE2B8 != 0) {
        __assert("initialize.c", 465, "!iparam_memory_callbacks");
    }
    return lbl_805DCBB0;
}

void HSD_SetHeap(s32 heap)
{
    lbl_805DCBB0 = heap;
}

void HSD_SetUserArena(u32 lo, u32 hi)
{
    if (lbl_805DE2B8 != 0) {
        __assert("initialize.c", 493, "!iparam_memory_callbacks");
    }
    if ((lo == 0 && hi != 0) || (lo != 0 && hi == 0)) {
        OSReport("missing argument.\n");
    } else {
        lbl_805DE298 = lo;
        lbl_805DE29C = hi;
    }
}

void HSD_GetArena(u32* lo, u32* hi)
{
    if (lbl_805DE2B8 != 0) {
        __assert("initialize.c", 517, "!iparam_memory_callbacks");
    }
    if (lo != NULL) {
        *lo = lbl_805DE290;
    }
    if (hi != NULL) {
        *hi = lbl_805DE294;
    }
}

extern GXRenderModeObj lbl_80589A80;
extern void _HSD_AObjForgetMemory(void);
extern void _HSD_DispForgetMemory(void);
extern void _HSD_IDForgetMemory(void);
extern void _HSD_ObjAllocForgetMemory(void);
extern void fn_8041E6A4(void);
extern void fn_8041A504(void);

void HSD_Reinit(void)
{
    void (*forget[])(void) = {
        _HSD_AObjForgetMemory,
        _HSD_DispForgetMemory,
        _HSD_IDForgetMemory,
        _HSD_ObjAllocForgetMemory,
        fn_8041E6A4,
        fn_8041A504,
        NULL
    };
    void (**fp)(void);

    func_8042122C("sysdolphin_base_library");
    for (fp = forget; *fp != NULL; fp++) {
        (*fp)();
    }
    HSD_ObjInit();
    _HSD_MemGetRemain();
    memReport.heap = _HSD_MemFree();
}

u32 HSD_GetCurrentRenderPass(void)
{
    return lbl_805DE2C4;
}

#ifdef NONMATCHING /* 99.7%: register swap */
void HSD_StartRender(int pass)
{
    GXRenderModeObj* vi = &lbl_80589A80;
    u16 xfb_height;
    u16 vi_height;

    lbl_805DE2C4 = pass;
    if (vi->aa) {
        fn_803CF938(2, lbl_805DCBB8);
    } else {
        fn_803CF938(lbl_805DE2AC, 0);
    }
    xfb_height = vi->xfbHeight;
    vi_height = vi->viHeight;
    fn_803CFAC0(vi->field_rendering, (u32) (xfb_height - vi_height) >> 31);
    if (lbl_805DE2C0 != 0) {
        if (lbl_805DE2C0 & 1) {
            GXInvalidateVtxCache();
        }
        if (lbl_805DE2C0 & 2) {
            GXInvalidateTexAll();
        }
        lbl_805DE2C0 = 0;
    }
}
#endif

#ifdef NONMATCHING /* compare result is dropped; not expressible in C */
void HSD_IsEFBCopyPass(void)
{
    if (lbl_805DE2C4 == 3) {
    }
}
#endif

void HSD_AddInvalidateFlags(u32 flags)
{
    lbl_805DE2C0 |= flags;
}

void HSD_SetRenderPass(s32 pix_fmt, u32 z_fmt)
{
    if (pix_fmt == 2) {
        __assert("initialize.c", 791, "pix_fmt != GX_PF_RGB565_Z16");
    }
    lbl_805DE2AC = pix_fmt;
    lbl_805DCBB8 = z_fmt;
}

void HSD_ObjInit(void)
{
    HSD_ListInitAllocData();
    fn_803FB13C();
    HSD_FObjInitAllocData();
    HSD_IDInitAllocData();
    HSD_VecInitAllocData();
    HSD_MtxInitAllocData();
    HSD_RObjInitAllocData();
    HSD_RenderInitAllocData();
    HSD_ShadowInitAllocData();
    HSD_ZListInitAllocData();
}

