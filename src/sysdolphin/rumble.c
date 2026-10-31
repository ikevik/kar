#include <dolphin/types.h>

typedef struct RumbleNode {
    struct RumbleNode* next; // 0x0
    u32 id;                  // 0x4
    u8 pause;                // 0x8
    u8 pri;                  // 0x9
    u8 status;               // 0xA
    u8 pad;
    u16 loop;                // 0xC
    u16 wait;                // 0xE
    s32 time;                // 0x10
    u16* loop_start;         // 0x14
    u16* cur;                // 0x18
    u16* head;               // 0x1C
} RumbleNode;

typedef struct RumbleOp {
    u8 op : 3;
    u8 pad : 5;
} RumbleOp;

typedef struct RumbleStatus {
    u8 cur;                  // 0x0
    u8 next;                 // 0x1
    u8 flag;                 // 0x2
    u8 pad;
    u16 count;               // 0x4
    u16 pad2;
    RumbleNode* list;        // 0x8
} RumbleStatus;

typedef struct PadLibData {
    u8 pad0[0x11];
    u8 adc_type;             // 0x11
    struct {
        s8 stat;
        s8 rumble;
    } multi[4];              // 0x12
    u8 pad1[0x5C - 0x1A];
    u16 rumble_max;          // 0x5C
    u8 pad2[2];
    RumbleNode* rumble_free; // 0x60
} PadLibData;

extern PadLibData lbl_8058B080;
extern RumbleStatus lbl_8058BB88[4];
extern RumbleStatus lbl_80503FB0;

extern int OSDisableInterrupts(void);
extern void OSRestoreInterrupts(int);
extern void PADControlMotor(int chan, int cmd);

void HSD_PadRumbleOn(s8 pad)
{
    if (lbl_8058B080.adc_type == lbl_8058B080.multi[pad].stat) {
        int en;
        RumbleStatus* st;
        en = OSDisableInterrupts();
        st = &lbl_8058BB88[lbl_8058B080.multi[pad].rumble];
        st->flag = 2;
        OSRestoreInterrupts(en);
    }
}

void HSD_PadRumbleOffH(s8 pad)
{
    if (lbl_8058B080.adc_type == lbl_8058B080.multi[pad].stat) {
        int en;
        RumbleStatus* st;
        en = OSDisableInterrupts();
        st = &lbl_8058BB88[lbl_8058B080.multi[pad].rumble];
        st->flag = 1;
        OSRestoreInterrupts(en);
    }
}

void HSD_PadRumbleFree(s8 pad)
{
    if (lbl_8058B080.adc_type == lbl_8058B080.multi[pad].stat) {
        int en;
        RumbleStatus* st;
        en = OSDisableInterrupts();
        st = &lbl_8058BB88[lbl_8058B080.multi[pad].rumble];
        st->flag = 0;
        OSRestoreInterrupts(en);
    }
}

void HSD_PadRumbleRemove(s8 pad);

void HSD_PadRumbleRemove(s8 pad)
{
    if (lbl_8058B080.adc_type == lbl_8058B080.multi[pad].stat) {
        int en;
        RumbleNode* next;
        RumbleStatus* st;
        RumbleNode* node;
        en = OSDisableInterrupts();
        st = &lbl_8058BB88[lbl_8058B080.multi[pad].rumble];
        for (node = st->list; node != NULL; node = next) {
            RumbleNode* p;
            next = node->next;
            p = (RumbleNode*) &st->list;
            while (p->next != node)
                p = p->next;
            p->next = next;
            st->count--;
            node->next = lbl_8058B080.rumble_free;
            lbl_8058B080.rumble_free = node;
        }
        OSRestoreInterrupts(en);
    }
}

void HSD_PadRumbleRemoveAll(void);
#if 0 /* near miss: base/index regs swapped */
void HSD_PadRumbleRemoveAll(void)
{
    s32 i = 0;
    do {
        HSD_PadRumbleRemove((u8) i);
        i++;
    } while (i < 4);
}
#endif

void HSD_PadRumbleRemoveId(s8 pad, u32 id);
void HSD_PadRumbleRemoveId(s8 pad, u32 id)
{
    if (lbl_8058B080.adc_type == lbl_8058B080.multi[pad].stat) {
        int en;
    RumbleNode* next;
    RumbleStatus* st;
    RumbleNode* node;
        en = OSDisableInterrupts();
        st = &lbl_8058BB88[lbl_8058B080.multi[pad].rumble];
        for (node = st->list; node != NULL; node = next) {
            next = node->next;
            if (node->id == id) {
                RumbleNode* p = (RumbleNode*) &st->list;
                while (p->next != node)
                    p = p->next;
                p->next = next;
                st->count--;
                node->next = lbl_8058B080.rumble_free;
                lbl_8058B080.rumble_free = node;
            }
        }
        OSRestoreInterrupts(en);
    }
}

void HSD_PadRumblePauseAll(void)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        s8 pad = (u8) i;
        if (lbl_8058B080.adc_type == lbl_8058B080.multi[pad].stat) {
            int en;
            RumbleNode* next;
            RumbleNode* node;
            en = OSDisableInterrupts();
            for (node = lbl_8058BB88[lbl_8058B080.multi[pad].rumble].list; node != NULL; node = next) {
                next = node->next;
                node->pause = 1;
            }
            OSRestoreInterrupts(en);
        }
    }
}

void HSD_PadRumbleActiveAll(void)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        s8 pad = (u8) i;
        if (lbl_8058B080.adc_type == lbl_8058B080.multi[pad].stat) {
            int en;
            RumbleNode* next;
            RumbleNode* node;
            en = OSDisableInterrupts();
            for (node = lbl_8058BB88[lbl_8058B080.multi[pad].rumble].list; node != NULL; node = next) {
                next = node->next;
                node->pause = 0;
            }
            OSRestoreInterrupts(en);
        }
    }
}

int HSD_PadRumbleActiveId(s8 pad, u32 id, s32 time, u8 pri, u16* data);
int HSD_PadRumbleActiveId(s8 pad, u32 id, s32 time, u8 pri, u16* data)
{
    PadLibData* d = &lbl_8058B080;
    int ret = 0;
    if (d->adc_type == d->multi[pad].stat) {
        int en;
    RumbleNode* n;
    RumbleStatus* st;
    RumbleNode* p;
    RumbleNode* node;
        en = OSDisableInterrupts();
        node = d->rumble_free;
        st = &lbl_8058BB88[lbl_8058B080.multi[pad].rumble];
        if (node != NULL && st->count < d->rumble_max) {
            d->rumble_free = node->next;
            node->id = id;
            node->pause = 0;
            node->pri = pri;
            node->status = 0;
            node->loop = 0;
            node->wait = 0;
            node->time = time;
            node->loop_start = NULL;
            node->head = data;
            node->cur = data;
            p = (RumbleNode*) &st->list;
            while ((n = p->next) != NULL && n->pri <= node->pri)
                p = n;
            node->next = n;
            p->next = node;
            ret = 1;
            st->count++;
        }
        OSRestoreInterrupts(en);
    }
    return ret;
}

int HSD_PadRumbleInterpret1(RumbleNode* node, u8* out)
{
    if (node->pause == 1)
        return 0;
    while (node->wait == 0) {
        switch (((RumbleOp*) node->cur)->op) {
        case 0:
            if (node->time == -2)
                return 1;
            node->cur = node->head;
            break;
        case 1:
            node->status = 2;
            node->wait = *node->cur & 0x1FFF;
            node->cur++;
            break;
        case 2:
            node->status = 1;
            node->wait = *node->cur & 0x1FFF;
            node->cur++;
            break;
        case 3:
            node->status = 0;
            node->wait = *node->cur & 0x1FFF;
            node->cur++;
            break;
        case 4:
            node->loop = *node->cur & 0x1FFF;
            node->cur++;
            node->loop_start = node->cur;
            break;
        case 5:
            if (--node->loop != 0) {
                node->cur = node->loop_start;
            } else {
                node->cur++;
            }
            break;
        }
    }
    *out = node->status;
    node->wait--;
    if (node->time != -1 && node->time != -2) {
        if (--node->time == 0)
            return 1;
    }
    return 0;
}

void HSD_PadRumbleInterpret(void)
{
    RumbleStatus* st = lbl_8058BB88;
    RumbleNode* node;
    RumbleNode* next;
    s32 i;
    for (i = 0; i < 4; i++, st++) {
        st->next = st->flag;
        for (node = st->list; node != NULL; node = next) {
            next = node->next;
            if (HSD_PadRumbleInterpret1(node, &st->next) != 0) {
                RumbleNode* p = (RumbleNode*) &st->list;
                while (p->next != node)
                    p = p->next;
                p->next = node->next;
                st->count--;
                node->next = lbl_8058B080.rumble_free;
                lbl_8058B080.rumble_free = node;
            }
        }
        if (st->next != st->cur) {
            switch (st->next) {
            case 0:
                PADControlMotor(i, 2);
                break;
            case 1:
                PADControlMotor(i, 0);
                break;
            case 2:
                PADControlMotor(i, 1);
                break;
            }
            st->cur = st->next;
        }
    }
}

void HSD_PadRumbleInit(u16 count, RumbleNode* buf)
{
    PadLibData* d = &lbl_8058B080;
    s32 i;
    d->rumble_max = count;
    d->rumble_free = buf;
    if (count != 0) {
        for (i = 0; i < (s32) count - 1; i++) {
            d->rumble_free[i].next = &d->rumble_free[i + 1];
        }
        d->rumble_free[i].next = NULL;
    }
    {
        RumbleStatus init = { 0 };
        for (i = 0; i < 4; i++) {
            lbl_8058BB88[i] = init;
        }
    }
}
