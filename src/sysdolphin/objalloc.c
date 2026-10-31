#include "objalloc.h"
#include "dolphin/types.h"
#include "global.h"

extern void* _HSD_MemAlloc();
extern u32 _HSD_MemFree();
extern s32 HSD_GetNbBits(u32);
extern HSD_ObjAllocData* lbl_805DE2D0;
#define alloc_datas lbl_805DE2D0

objheap lbl_80504018 = { 0, 0, -1, -1 };
#define heap lbl_80504018

void HSD_ObjSetHeap(u32 size, void* ptr)
{
    heap.curr = (u32) ptr;
    heap.top = (u32) ptr;
    heap.remain = size;
    heap.size = size;
}

s32 HSD_ObjAllocAddFree(HSD_ObjAllocData* data, u32 num)
{
    u32 i;
    u32 bytes;
    HSD_ObjAllocLink* mem;
    u32 size;
    assert_line(0xee, data);
    size = data->size;
    bytes = size * num;
    if (heap.top != 0) {
        u32 mask, start, end, avail;
        end = heap.top + heap.size;
        mask = data->align - 1;
        start = (heap.curr + mask) & ~mask;
        if (start > end) {
            return 0;
        }
        avail = end - start;
        if (avail < bytes) {
            bytes = avail - (avail % size);
        }
        num = bytes / size;
        if (num == 0) {
            return 0;
        }
        heap.curr = start + bytes;
        heap.remain = end - heap.curr;
        mem = (HSD_ObjAllocLink*) start;
    } else {
        mem = _HSD_MemAlloc(bytes, data->align, 1);
        if (mem == NULL) {
            return 0;
        }
    }
    for (i = 0; i < num - 1; i++) {
        ((HSD_ObjAllocLink*) ((u8*) mem + data->size * i))->next = (HSD_ObjAllocLink*) ((u8*) mem + data->size * (i + 1));
    }
    ((HSD_ObjAllocLink*) ((u8*) mem + data->size * i))->next = data->freehead;
    data->freehead = mem;
    data->free += num;
    return num;
}

void* HSD_ObjAlloc(HSD_ObjAllocData* data)
{
    HSD_ObjAllocLink* obj;
    if (data->num_limit_flag && data->used >= data->num_limit) {
        return NULL;
    }
    if (data->heap_limit_flag) {
        if (data->heap_limit_num == -1) {
            u32 remain;
            if (heap.top) remain = heap.remain; else remain = _HSD_MemFree();
            if (remain <= data->heap_limit_size) {
                data->heap_limit_num = data->used + data->free;
            }
        } else {
            u32 remain = heap.top ? heap.remain : _HSD_MemFree();
            if (remain > data->heap_limit_size) {
                data->heap_limit_num = -1;
            }
        }
        if (data->used >= data->heap_limit_num) {
            return NULL;
        }
    }
    if (data->free == 0) {
        HSD_ObjAllocAddFree(data, 1);
        if (data->free == 0) {
            return NULL;
        }
    }
    obj = data->freehead;
    data->freehead = obj->next;
    data->used++;
    data->free--;
    if (data->used > data->peak) {
        data->peak = data->used;
    }
    return obj;
}

void HSD_ObjFree(HSD_ObjAllocData* data, void* obj)
{
    ((HSD_ObjAllocLink*) obj)->next = data->freehead;
    data->freehead = obj;
    data->free++;
    data->used--;
}

void HSD_ObjAllocInit(HSD_ObjAllocData* data, u32 size, u32 align)
{
    assert_line(0x182, data);
    if (data != NULL) {
        HSD_ObjAllocData** p = &alloc_datas;
        HSD_ObjAllocData* cur;
        while ((cur = *p) != NULL) {
            if (cur == data) {
                *p = cur->next;
            } else {
                p = &cur->next;
            }
        }
    } else {
        alloc_datas = NULL;
    }
    memset(data, 0, sizeof(HSD_ObjAllocData));
    data->num_limit = -1;
    data->heap_limit_size = 0;
    data->heap_limit_num = -1;
    assert_line(0x18d, align <= 32);
    assert_line(0x18e, HSD_GetNbBits(align) == 1);
    data->align = align;
    data->size = (size + data->align - 1) & ~(data->align - 1);
    data->next = alloc_datas;
    alloc_datas = data;
}

void _HSD_ObjAllocForgetMemory(void)
{
    alloc_datas = NULL;
}
