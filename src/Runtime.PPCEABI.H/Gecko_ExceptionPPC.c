typedef struct FragmentInfo {
    void* exception_info;
    void* TOC;
    int active;
} FragmentInfo;

extern FragmentInfo fragmentinfo_80569A00[];
extern char lbl_8048B698[];
extern char lbl_804F8838[];
extern char lbl_804F8730[];
extern void fn_8038CB78(void*);

void __unregister_fragment(int id)
{
    FragmentInfo* f;
    if (id >= 0 && id < 1) {
        f = &fragmentinfo_80569A00[id];
        f->exception_info = 0;
        f->TOC = 0;
        f->active = 0;
    }
}

int __register_fragment(void* info, void* toc)
{
    if (fragmentinfo_80569A00[0].active == 0) {
        fragmentinfo_80569A00[0].exception_info = info;
        fragmentinfo_80569A00[0].TOC = toc;
        fragmentinfo_80569A00[0].active = 1;
        return 0;
    }
    return -1;
}

char* fn_803AF878(void)
{
    return lbl_8048B698;
}

void* fn_803AEC9C(void* self, short flags)
{
    if (self != 0) {
        *(void**)self = lbl_804F8838;
        if (self != 0) {
            *(void**)self = lbl_804F8730;
        }
        if (flags > 0) {
            fn_8038CB78(self);
        }
    }
    return self;
}
