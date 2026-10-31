typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned long u32;

typedef struct IGMPEntry {
    u32 addr;
    u32 group;
    u8 alarm[0x28];
    s16 count;
    u8 pad[6];
} IGMPEntry;

extern IGMPEntry lbl_805C2A18[4];
extern u8 lbl_805E62C0[4];
extern u8 lbl_805E6298[4];

extern int fn_80481AB4(int, void*);
extern void fn_80468838(void*);
extern void OSCancelAlarm(void*);
extern void* memmove(void*, const void*, u32);
extern int fn_80482420(u8*, u32*);

u16 IGMPCheckSum(u16* p)
{
    u32 sum = 0;
    u16* end = p + 4;
    while (p < end) {
        sum += *p++;
    }
    sum = (sum & 0xffff) + (sum >> 16);
    sum = (sum & 0xffff) + (sum >> 16);
    return (u16)(sum ^ 0xffff);
}

int fn_80481CE8(int arg)
{
    return fn_80481AB4(2, (void*)(arg - 8));
}

void fn_80481FE0(int* p)
{
    u8 buf[6];
    if (*p < 5 && *p >= 0) {
        buf[0] = 1;
        buf[1] = 0;
        buf[2] = 0x5e;
        buf[3] = lbl_805E62C0[1] & 0x7f;
        buf[4] = lbl_805E62C0[2];
        buf[5] = lbl_805E62C0[3];
        fn_80468838(buf);
    }
}

int fn_80482054(int arg)
{
    IGMPEntry* e;
    if (arg == 0) {
        for (e = lbl_805C2A18; e < lbl_805C2A18 + 4; e++) {
            if (e->addr != *(u32*)lbl_805E6298) {
                OSCancelAlarm(e->alarm);
                memmove(e, lbl_805E6298, 4);
            }
        }
    }
    return 1;
}

int fn_804820D4(u8* addr, u32* group)
{
    IGMPEntry* e;
    IGMPEntry* base = lbl_805C2A18;
    u32 ip;
    if ((addr[0] & 0xf0) != 0xe0) {
        return -12;
    }
    ip = *(u32*)addr;
    if (ip == *(u32*)lbl_805E62C0) {
        return 4;
    }
    for (e = base; e < base + 4; e++) {
        if (e->addr == ip && e->group == *group) {
            return e - base;
        }
    }
    return -4;
}

int fn_80482420(u8* addr, u32* group)
{
    IGMPEntry* e;
    u32 ip;
    if ((addr[0] & 0xf0) != 0xe0) {
        return -12;
    }
    ip = *(u32*)addr;
    if (ip == *(u32*)lbl_805E62C0) {
        return 4;
    }
    for (e = lbl_805C2A18; e < lbl_805C2A18 + 4; e++) {
        if (e->addr == ip && e->group == *group) {
            if (--e->count <= 0) {
                OSCancelAlarm(e->alarm);
                memmove(e, lbl_805E6298, 4);
            }
            return e - lbl_805C2A18;
        }
    }
    return -4;
}

int IPClose(u8* sock)
{
    int i;
    u32 mask;
    IGMPEntry* e = lbl_805C2A18;
    for (i = 0; i < 4; i++, e++) {
        mask = 1 << i;
        if (*(u16*)(sock + 6) & mask) {
            fn_80482420((u8*)&e->addr, &e->group);
            *(u16*)(sock + 6) &= ~mask;
        }
    }
    return 0;
}
