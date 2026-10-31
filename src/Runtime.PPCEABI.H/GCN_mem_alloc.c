extern int lbl_805DC978;
extern char lbl_8048B6B8[];
extern char lbl_8048B6F0[];
extern void OSReport(const char*, ...);
extern void* OSGetArenaLo(void);
extern void* OSGetArenaHi(void);
extern void* OSInitAlloc(void*, void*, int);
extern void OSSetArenaLo(void*);
extern int OSCreateHeap(void*, void*);
extern int OSSetCurrentHeap(int);
extern void* fn_803D3708(int, unsigned long);

void* __sys_alloc(unsigned long size)
{
    if (lbl_805DC978 == -1) {
        void* arenaLo;
        void* arenaHi;
        OSReport(lbl_8048B6B8);
        OSReport(lbl_8048B6F0);
        arenaLo = OSGetArenaLo();
        arenaHi = OSGetArenaHi();
        arenaLo = OSInitAlloc(arenaLo, arenaHi, 1);
        OSSetArenaLo(arenaLo);
        arenaLo = (void*)(((unsigned long)arenaLo + 31) & ~31);
        arenaHi = (void*)((unsigned long)arenaHi & ~0x1f);
        OSSetCurrentHeap(OSCreateHeap(arenaLo, arenaHi));
        OSSetArenaLo(arenaHi);
    }
    return fn_803D3708(lbl_805DC978, size);
}
