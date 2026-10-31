typedef unsigned char u8;
typedef unsigned long u32;

#define P(p, o) (*(void**)((u8*)(p) + (o)))
#define W(p, o) (*(u32*)((u8*)(p) + (o)))

extern void* lbl_805DD6CC;
extern char lbl_804A77F4[];
extern char lbl_804A7800[];

extern void grLoadCityEventArchive(void*);
extern int fn_800F8B74(void*, int);
extern void fn_800DB5D4(void*, void*, int);
extern void fn_800DB654(void*, void*, int);
extern void __assert(char*, int, char*);

int fn_8010F5A4(int arg)
{
    void* p = P(P(lbl_805DD6CC, 8), 8);
    p = P(p, 0x10);
    if (p != 0) {
        return fn_800F8B74(p, arg);
    }
    return 0;
}

void fn_8010F5E8(void)
{
    fn_800DB5D4(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 0);
}

void fn_8010F61C(void)
{
    fn_800DB5D4(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 1);
}

void fn_8010F650(void)
{
    fn_800DB5D4(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 2);
}

void fn_8010F684(void)
{
    fn_800DB5D4(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 3);
}

void fn_8010F6B8(void)
{
    fn_800DB654(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 4);
}

void fn_8010F6EC(void)
{
    fn_800DB654(lbl_805DD6CC, P(P(P(lbl_805DD6CC, 8), 8), 0x14), 5);
}

void grSetupCityEventData(void* self)
{
    void* data;
    void* obj;
    grLoadCityEventArchive(&data);
    W(self, 0x30) = W(data, 0);
    obj = P(self, 0x40);
    W(P(obj, 0), 0x7c) = W(P(P(data, 4), 0), 0);
    W(P(obj, 0), 0x80) = W(P(P(data, 4), 0), 4);
    W(obj, 8) = W(P(data, 4), 8);
    W(obj, 0xc) = W(P(data, 4), 0xc);
}

int fn_8010F720(int v)
{
    void* c = P(P(lbl_805DD6CC, 8), 8);
    void* d;
    void* e;
    int i;
    int n;
    if (!((int)W(P(c, 0x14), 4) > 6)) {
        __assert(lbl_804A77F4, 0x1c3, lbl_804A7800);
    }
    e = P(P(c, 0x14), 0);
    n = W(e, 0x34);
    for (i = 0; i < n; i++) {
        if (v == ((int*)P(e, 0x30))[i]) {
            return 1;
        }
    }
    return 0;
}
