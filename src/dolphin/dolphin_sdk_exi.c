#include "dolphin/sdk_common.h"

#pragma scheduling off
typedef void (*EXICallback)(s32 chan, OSContext* context);

typedef struct EXIControl {
    EXICallback exiCallback;
    EXICallback tcCallback;
    EXICallback extCallback;
    volatile u32 state;
    int immLen;
    void* immBuf;
    u32 dev;
    u32 id;
    s32 idTime;
    int items;
    struct {
        u32 dev;
        EXICallback callback;
    } queue[3];
} EXIControl;

#define STATE_IDLE 0x00
#define STATE_DMA 0x01
#define STATE_IMM 0x02
#define STATE_BUSY 0x03
#define STATE_SELECTED 0x04
#define STATE_ATTACHED 0x08
#define STATE_LOCKED 0x10

volatile u32 __EXIRegs[] : 0xcc006800;
#define REG(chan, n) (__EXIRegs[(chan) * 5 + (n)])

extern char lbl_804FCD90[];
const char* __EXIVersion = (const char*)lbl_804FCD90;

extern void __OSMaskInterrupts(u32 mask);
extern void* __OSGetInterruptHandler(s16 interrupt);
extern u32 __OSGetDIConfig(void);
extern u32 OSGetConsoleType(void);
extern BOOL EXISync(s32 chan);
extern void* memmove(void* dst, const void* src, u32 n);
extern u32 __OSInIPL;
extern u32 IDSerialPort1_805DE068;
u32 lbl_805DE070;
u32 lbl_805DE074;
u32 lbl_805DE078;
u32 lbl_805DE07C;

extern BOOL EXIImm(s32 chan, void* buf, s32 len, u32 type, EXICallback callback);
extern void EXIClearInterrupts(s32 chan, BOOL exi, BOOL tc, BOOL ext);
extern s32 EXIGetID(s32 chan, u32 dev, u32* id);
extern void __OSEnableBarnacle(s32 chan, u32 dev);
extern BOOL EXIDetach(s32 chan);
extern BOOL EXIDeselect(s32 chan);
extern BOOL EXISelect(s32 chan, u32 dev, u32 freq);
extern BOOL EXILock(s32 chan, u32 dev, EXICallback cb);
extern BOOL EXIUnlock(s32 chan);
extern BOOL EXIProbe(s32 chan);
extern s64 __div2i(s64 a, s64 b);
extern OSTime OSGetTime(void);

static EXIControl Ecb[3];
s32 ProbeLast[] : 0x800030C0;

static void SetExiInterruptMask(s32 chan, EXIControl* exi)
{
    EXIControl* exi2;

    exi2 = &Ecb[2];
    switch (chan) {
    case 0:
        if ((exi->exiCallback == 0 && exi2->exiCallback == 0) || (exi->state & STATE_LOCKED)) {
            __OSMaskInterrupts(0x410000);
        } else {
            __OSUnmaskInterrupts(0x410000);
        }
        break;
    case 1:
        if (exi->exiCallback == 0 || (exi->state & STATE_LOCKED)) {
            __OSMaskInterrupts(0x80000);
        } else {
            __OSUnmaskInterrupts(0x80000);
        }
        break;
    case 2:
        if (__OSGetInterruptHandler(0x19) == 0 || (exi->state & STATE_LOCKED)) {
            __OSMaskInterrupts(0x40);
        } else {
            __OSUnmaskInterrupts(0x40);
        }
        break;
    }
}

BOOL EXIImm(s32 chan, void* buf, s32 len, u32 type, EXICallback callback)
{
    EXIControl* exi = &Ecb[chan];
    BOOL enabled;

    enabled = OSDisableInterrupts();
    if ((exi->state & STATE_BUSY) || !(exi->state & STATE_SELECTED)) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->tcCallback = callback;
    if (exi->tcCallback) {
        EXIClearInterrupts(chan, 0, 1, 0);
        __OSUnmaskInterrupts(0x200000u >> (3 * chan));
    }
    exi->state |= STATE_IMM;
    if (type != 0) {
        u32 data;
        int i;
        data = 0;
        for (i = 0; i < len; i++) {
            data |= ((u8*)buf)[i] << ((3 - i) * 8);
        }
        REG(chan, 4) = data;
    }
    exi->immBuf = buf;
    exi->immLen = (type != 1) ? len : 0;
    REG(chan, 3) = (type << 2) | 1 | ((len - 1) << 4);
    OSRestoreInterrupts(enabled);
    return TRUE;
}

BOOL EXIImmEx(s32 chan, void* buf, s32 len, u32 mode)
{
    s32 xLen;

    while (len) {
        xLen = (len < 4) ? len : 4;
        if (!EXIImm(chan, buf, xLen, mode, NULL)) {
            return FALSE;
        }
        if (!EXISync(chan)) {
            return FALSE;
        }
        (u8*)buf += xLen;
        len -= xLen;
    }
    return TRUE;
}

BOOL EXIDma(s32 chan, void* buf, s32 len, u32 type, EXICallback callback)
{
    EXIControl* exi = &Ecb[chan];
    BOOL enabled;

    enabled = OSDisableInterrupts();
    if ((exi->state & STATE_BUSY) || !(exi->state & STATE_SELECTED)) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->tcCallback = callback;
    if (exi->tcCallback) {
        EXIClearInterrupts(chan, 0, 1, 0);
        __OSUnmaskInterrupts(0x200000u >> (3 * chan));
    }
    exi->state |= STATE_DMA;
    REG(chan, 1) = (u32)buf & 0x03FFFFE0;
    REG(chan, 2) = (u32)len;
    REG(chan, 3) = (type << 2) | 3;
    OSRestoreInterrupts(enabled);
    return TRUE;
}

BOOL EXISync(s32 chan)
{
    EXIControl* exi = &Ecb[chan];
    BOOL rc = FALSE;
    BOOL enabled;

    while ((exi->state & STATE_SELECTED) != 0) {
        if ((REG(chan, 3) & 1) == 0) {
            enabled = OSDisableInterrupts();
            if ((exi->state & STATE_SELECTED) != 0) {
                if ((exi->state & STATE_BUSY) != 0) {
                    if ((exi->state & STATE_IMM) != 0) {
                        int len = exi->immLen;
                        if (len != 0) {
                            u8* buf = (u8*)exi->immBuf;
                            u32 data = REG(chan, 4);
                            int i;
                            for (i = 0; i < len; i++) {
                                *buf++ = (u8)((data >> ((3 - i) * 8)) & 0xFF);
                            }
                        }
                    }
                    exi->state &= ~STATE_BUSY;
                }
                if (__OSGetDIConfig() != 0xFF || (OSGetConsoleType() & 0xF0000000) == 0x20000000 ||
                    exi->immLen != 4 || (REG(chan, 0) & 0x70) ||
                    (REG(chan, 4) != 0x01010000 && REG(chan, 4) != 0x05070000 &&
                     REG(chan, 4) != 0x04220001) ||
                    *(u16*)0x800030E6 == 0x8200) {
                    rc = TRUE;
                }
            }
            OSRestoreInterrupts(enabled);
            break;
        }
    }
    return rc;
}

void EXIClearInterrupts(s32 chan, BOOL exi, BOOL tc, BOOL ext)
{
    u32 cpr;
    u32 v;

    cpr = REG(chan, 0);
    v = cpr & 0x7F5;
    if (exi) {
        v |= 2;
    }
    if (tc) {
        v |= 8;
    }
    if (ext) {
        v |= 0x800;
    }
    REG(chan, 0) = v;
}

EXICallback EXISetExiCallback(s32 chan, EXICallback exiCallback)
{
    EXIControl* exi = &Ecb[chan];
    EXICallback prev;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    prev = exi->exiCallback;
    exi->exiCallback = exiCallback;
    if (chan != 2) {
        SetExiInterruptMask(chan, exi);
    } else {
        SetExiInterruptMask(0, &Ecb[0]);
    }
    OSRestoreInterrupts(enabled);
    return prev;
}

static BOOL __EXIProbe(s32 chan)
{
    EXIControl* exi = &Ecb[chan];
    BOOL enabled;
    BOOL rc;
    u32 cpr;
    s32 t;

    if (chan == 2) {
        return TRUE;
    }
    rc = TRUE;
    enabled = OSDisableInterrupts();
    cpr = REG(chan, 0);
    if (!(exi->state & STATE_ATTACHED)) {
        if (cpr & 0x800) {
            EXIClearInterrupts(chan, 0, 0, 1);
            exi->idTime = 0;
            ProbeLast[chan] = 0;
        }
        if (cpr & 0x1000) {
            t = (s32)(OSGetTime() / (OS_TIMER_CLOCK / 1000) / 100) + 1;
            if (ProbeLast[chan] == 0) {
                ProbeLast[chan] = t;
            }
            if (t - ProbeLast[chan] < 3) {
                rc = FALSE;
            }
        } else {
            exi->idTime = 0;
            ProbeLast[chan] = 0;
            rc = FALSE;
        }
    } else if (!(cpr & 0x1000) || (cpr & 0x800)) {
        exi->idTime = 0;
        ProbeLast[chan] = 0;
        rc = FALSE;
    }
    OSRestoreInterrupts(enabled);
    return rc;
}

BOOL EXIProbe(s32 chan)
{
    EXIControl* exi = &Ecb[chan];
    BOOL rc;
    u32 id;

    rc = __EXIProbe(chan);
    if (rc && exi->idTime == 0) {
        rc = EXIGetID(chan, 0, &id) ? TRUE : FALSE;
    }
    return rc;
}

s32 EXIProbeEx(s32 chan)
{
    if (EXIProbe(chan)) {
        return 1;
    } else if (ProbeLast[chan]) {
        return 0;
    } else {
        return -1;
    }
}

static BOOL __EXIAttach(s32 chan, EXICallback extCallback)
{
    EXIControl* exi = &Ecb[chan];
    BOOL enabled;
    BOOL rc;

    enabled = OSDisableInterrupts();
    if ((exi->state & STATE_ATTACHED) || __EXIProbe(chan) == FALSE) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    EXIClearInterrupts(chan, 1, 0, 0);
    exi->extCallback = extCallback;
    __OSUnmaskInterrupts(0x100000u >> (3 * chan));
    exi->state |= STATE_ATTACHED;
    OSRestoreInterrupts(enabled);
    return TRUE;
}

BOOL EXIAttach(s32 chan, EXICallback extCallback)
{
    EXIControl* exi = &Ecb[chan];
    BOOL enabled;
    BOOL rc;

    EXIProbe(chan);
    enabled = OSDisableInterrupts();
    if (exi->idTime == 0) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    rc = __EXIAttach(chan, extCallback);
    OSRestoreInterrupts(enabled);
    return rc;
}

BOOL EXIDetach(s32 chan)
{
    EXIControl* exi = &Ecb[chan];
    BOOL enabled;

    enabled = OSDisableInterrupts();
    if (!(exi->state & STATE_ATTACHED)) {
        OSRestoreInterrupts(enabled);
        return TRUE;
    }
    if ((exi->state & STATE_LOCKED) && exi->dev == 0) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->state &= ~STATE_ATTACHED;
    __OSMaskInterrupts(0x500000u >> (3 * chan));
    OSRestoreInterrupts(enabled);
    return TRUE;
}

BOOL EXISelect(s32 chan, u32 dev, u32 freq)
{
    EXIControl* exi = &Ecb[chan];
    u32 cpr;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    if ((exi->state & STATE_SELECTED) ||
        chan != 2 && (((dev == 0) && !(exi->state & STATE_ATTACHED) && !__EXIProbe(chan)) ||
                      !(exi->state & STATE_LOCKED) || (exi->dev != dev))) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->state |= STATE_SELECTED;
    cpr = REG(chan, 0);
    cpr &= 0x405;
    cpr |= ((1 << dev) << 7) | (freq << 4);
    REG(chan, 0) = cpr;
    if (exi->state & STATE_ATTACHED) {
        switch (chan) {
        case 0:
            __OSMaskInterrupts(0x100000);
            break;
        case 1:
            __OSMaskInterrupts(0x20000);
            break;
        }
    }
    OSRestoreInterrupts(enabled);
    return TRUE;
}

BOOL EXIDeselect(s32 chan)
{
    EXIControl* exi = &Ecb[chan];
    u32 cpr;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    if (!(exi->state & STATE_SELECTED)) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->state &= ~STATE_SELECTED;
    cpr = REG(chan, 0);
    REG(chan, 0) = cpr & 0x405;
    if (exi->state & STATE_ATTACHED) {
        switch (chan) {
        case 0:
            __OSUnmaskInterrupts(0x100000);
            break;
        case 1:
            __OSUnmaskInterrupts(0x20000);
            break;
        }
    }
    OSRestoreInterrupts(enabled);
    if (chan != 2 && (cpr & 0x80)) {
        if (__EXIProbe(chan)) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

static void EXIIntrruptHandler(s16 interrupt, OSContext* context)
{
    OSContext exceptionContext;
    s32 chan;
    EXIControl* exi;
    EXICallback callback;

    chan = (interrupt - 9) / 3;
    EXIClearInterrupts(chan, 1, 0, 0);
    exi = &Ecb[chan];
    callback = exi->exiCallback;
    if (callback) {
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        callback(chan, context);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

static void TCIntrruptHandler(s16 interrupt, OSContext* context)
{
    OSContext exceptionContext;
    s32 chan;
    EXIControl* exi;
    EXICallback callback;

    chan = (interrupt - 10) / 3;
    exi = &Ecb[chan];
    __OSMaskInterrupts(0x80000000u >> interrupt);
    EXIClearInterrupts(chan, 0, 1, 0);
    callback = exi->tcCallback;
    if (callback) {
        exi->tcCallback = 0;
        if (exi->state & STATE_BUSY) {
            if ((exi->state & STATE_IMM) != 0) {
                int len = exi->immLen;
                if (len != 0) {
                    u8* buf = (u8*)exi->immBuf;
                    u32 data = REG(chan, 4);
                    int i;
                    for (i = 0; i < len; i++) {
                        *buf++ = (u8)((data >> ((3 - i) * 8)) & 0xFF);
                    }
                }
            }
            exi->state &= ~STATE_BUSY;
        }
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        callback(chan, context);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

static void EXTIntrruptHandler(s16 interrupt, OSContext* context)
{
    OSContext exceptionContext;
    s32 chan;
    EXIControl* exi;
    EXICallback callback;

    chan = (interrupt - 11) / 3;
    __OSMaskInterrupts(0x500000u >> (3 * chan));
    exi = &Ecb[chan];
    callback = exi->extCallback;
    exi->state &= ~STATE_ATTACHED;
    if (callback) {
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        exi->extCallback = 0;
        callback(chan, context);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

void EXIInit(void)
{
    u32 id;

    while (((REG(0, 3) & 0x1) == 1) || ((REG(1, 3) & 0x1) == 1) || ((REG(2, 3) & 0x1) == 1)) {
    }
    __OSMaskInterrupts(0x7F8000);
    REG(0, 0) = 0;
    REG(1, 0) = 0;
    REG(2, 0) = 0;
    REG(0, 0) = 0x2000;
    __OSSetInterruptHandler(9, EXIIntrruptHandler);
    __OSSetInterruptHandler(10, TCIntrruptHandler);
    __OSSetInterruptHandler(11, EXTIntrruptHandler);
    __OSSetInterruptHandler(12, EXIIntrruptHandler);
    __OSSetInterruptHandler(13, TCIntrruptHandler);
    __OSSetInterruptHandler(14, EXTIntrruptHandler);
    __OSSetInterruptHandler(15, EXIIntrruptHandler);
    __OSSetInterruptHandler(16, TCIntrruptHandler);
    EXIGetID(0, 2, &IDSerialPort1_805DE068);
    if (__OSInIPL) {
        ProbeLast[1] = 0;
        ProbeLast[0] = 0;
        Ecb[1].idTime = 0;
        Ecb[0].idTime = 0;
        __EXIProbe(0);
        __EXIProbe(1);
    } else if (EXIGetID(0, 0, &id) && id == 0x07010000) {
        __OSEnableBarnacle(1, 0);
    } else if (EXIGetID(1, 0, &id) && id == 0x07010000) {
        __OSEnableBarnacle(0, 2);
    }
    OSRegisterVersion(__EXIVersion);
}

BOOL EXILock(s32 chan, u32 dev, EXICallback unlockedCallback)
{
    EXIControl* exi = &Ecb[chan];
    BOOL enabled;
    int i;

    enabled = OSDisableInterrupts();
    if (exi->state & STATE_LOCKED) {
        if (unlockedCallback) {
            for (i = 0; i < exi->items; i++) {
                if (exi->queue[i].dev == dev) {
                    OSRestoreInterrupts(enabled);
                    return FALSE;
                }
            }
            exi->queue[exi->items].callback = unlockedCallback;
            exi->queue[exi->items].dev = dev;
            exi->items++;
        }
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->state |= STATE_LOCKED;
    exi->dev = dev;
    SetExiInterruptMask(chan, exi);
    OSRestoreInterrupts(enabled);
    return TRUE;
}

BOOL EXIUnlock(s32 chan)
{
    EXIControl* exi = &Ecb[chan];
    BOOL enabled;
    EXICallback unlockedCallback;

    enabled = OSDisableInterrupts();
    if (!(exi->state & STATE_LOCKED)) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->state &= ~STATE_LOCKED;
    SetExiInterruptMask(chan, exi);
    if (exi->items > 0) {
        unlockedCallback = exi->queue[0].callback;
        if (--exi->items > 0) {
            memmove(&exi->queue[0], &exi->queue[1], exi->items * sizeof(exi->queue[0]));
        }
        unlockedCallback(chan, 0);
    }
    OSRestoreInterrupts(enabled);
    return TRUE;
}

u32 EXIGetState(s32 chan)
{
    EXIControl* exi = &Ecb[chan];

    return exi->state;
}

static void UnlockedHandler(s32 chan, OSContext* context)
{
    u32 id;

    EXIGetID(chan, 0, &id);
}

s32 EXIGetID(s32 chan, u32 dev, u32* id)
{
    EXIControl* exi = &Ecb[chan];
    BOOL err;
    u32 cmd;
    s32 startTime;
    BOOL enabled;

    if (chan == 0 && dev == 2 && IDSerialPort1_805DE068) {
        *id = IDSerialPort1_805DE068;
        return 1;
    }
    if (chan < 2 && dev == 0) {
        if (!__EXIProbe(chan)) {
            return 0;
        }
        if (exi->idTime == ProbeLast[chan]) {
            *id = exi->id;
            return exi->idTime;
        }
        if (!__EXIAttach(chan, NULL)) {
            return 0;
        }
        startTime = ProbeLast[chan];
    }
    enabled = OSDisableInterrupts();
    err = !EXILock(chan, dev, (chan < 2 && dev == 0) ? UnlockedHandler : NULL);
    if (err == FALSE) {
        err = !EXISelect(chan, dev, 0);
        if (err == FALSE) {
            cmd = 0;
            err |= !EXIImm(chan, &cmd, 2, 1, NULL);
            err |= !EXISync(chan);
            err |= !EXIImm(chan, id, 4, 0, NULL);
            err |= !EXISync(chan);
            err |= !EXIDeselect(chan);
        }
        EXIUnlock(chan);
    }
    OSRestoreInterrupts(enabled);
    if (chan < 2 && dev == 0) {
        EXIDetach(chan);
        enabled = OSDisableInterrupts();
        err |= (startTime != ProbeLast[chan]);
        if (!err) {
            exi->id = *id;
            exi->idTime = startTime;
        }
        OSRestoreInterrupts(enabled);
        return err ? 0 : exi->idTime;
    }
    return err ? 0 : 1;
}

s32 fn_803EB940(s32 chan, u32 dev, u32* type)
{
    u32 _type;
    s32 rc;

    rc = EXIGetID(chan, dev, &_type);
    if (rc == 0) {
        return rc;
    }
    switch (_type & ~0xFF) {
    case 0x04020100:
    case 0x04020200:
    case 0x04020300:
    case 0x04060000:
        *type = _type & ~0xFF;
        return rc;
    }
    switch (_type & 0xFFFF0000) {
    case 0x05070000:
        *type = 0x05070000;
        return rc;
    case 0:
        if (_type & 0x3803) {
            break;
        }
        switch (_type & 0xFC) {
        case 0x04:
        case 0x08:
        case 0x10:
        case 0x20:
        case 0x40:
        case 0x80:
            *type = _type & 0xFC;
            return rc;
        }
        break;
    }
    *type = _type;
    return rc;
}

#pragma scheduling on
#pragma inline_depth(0)
s32 fn_803EBA58(s32 chan, u32 dev, u32* out)
{
    BOOL err;
    u32 cmd;

    if (chan != 2 && dev == 0) {
        if (!EXIAttach(chan, NULL)) {
            return 0;
        }
    }
    err = !EXILock(chan, dev, NULL);
    if (err == FALSE) {
        err = !EXISelect(chan, dev, 0);
        if (err == FALSE) {
            cmd = 0x20011300;
            err = !EXIImm(chan, &cmd, 4, 1, NULL);
            err |= !EXISync(chan);
            err |= !EXIImm(chan, out, 4, 0, NULL);
            err |= !EXISync(chan);
            err |= !EXIDeselect(chan);
        }
        EXIUnlock(chan);
    }
    if (chan != 2 && dev == 0) {
        EXIDetach(chan);
    }
    if (err) {
        return 0;
    }
    return *out != 0xFFFEFFFF ? 1 : 0;
}

void __OSEnableBarnacle(s32 chan, u32 dev)
{
    u32 id;

    if (EXIGetID(chan, dev, &id)) {
        switch (id) {
        case 0x00000004:
        case 0x00000008:
        case 0x00000010:
        case 0x00000020:
        case 0x01010000:
        case 0x01020000:
        case 0x02020000:
        case 0x03010000:
        case 0x04020100:
        case 0x04020200:
        case 0x04020300:
        case 0x04040404:
        case 0x04060000:
        case 0x04120000:
        case 0x04130000:
        case 0x04220000:
        case 0x80000004:
        case 0x80000008:
        case 0x80000010:
        case 0x80000020:
        case 0xFFFFFFFF:
            break;
        default:
            if (fn_803EBA58(chan, dev, &id)) {
                lbl_805DE070 = chan;
                lbl_805DE074 = dev;
                lbl_805DE07C = 0xA5FF005A;
                lbl_805DE078 = 0xA5FF005A;
            }
            break;
        }
    }
}

u32 fn_803EBDA0(void)
{
    if (lbl_805DE07C == 0xA5FF005A) {
        return 0;
    }
    if (!(OSGetConsoleType() & 0x10000000)) {
        lbl_805DE078 = 0;
        return 2;
    }
    lbl_805DE078 = 0xA5FF005A;
    lbl_805DE070 = 0;
    lbl_805DE074 = 1;
    return 0;
}

u32 WriteUARTN(void* buf, u32 len)
{
    char* ptr;
    u32 cmd;
    s32 xLen;
    BOOL enabled;
    s32 qLen;
    u32 cmd2;
    u32 error;

    if (lbl_805DE078 != 0xA5FF005A) {
        return 2;
    }
    enabled = OSDisableInterrupts();
    if (!EXILock(lbl_805DE070, lbl_805DE074, NULL)) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    for (ptr = (char*)buf; (u32)(ptr - (char*)buf) < len; ptr++) {
        if (*ptr == '\n') {
            *ptr = '\r';
        }
    }
    cmd = 0xA0010000;
    error = 0;
    while (len) {
        if (!EXISelect(lbl_805DE070, lbl_805DE074, 3)) {
            qLen = -1;
        } else {
            cmd2 = 0x20010000;
            EXIImm(lbl_805DE070, &cmd2, 4, 1, NULL);
            EXISync(lbl_805DE070);
            EXIImm(lbl_805DE070, &cmd2, 1, 0, NULL);
            EXISync(lbl_805DE070);
            EXIDeselect(lbl_805DE070);
            qLen = 16 - (cmd2 >> 24);
        }
        if (qLen < 0) {
            error = 3;
            break;
        }
        if (qLen < 12 && (u32)qLen < len) {
            continue;
        }
        if (!EXISelect(lbl_805DE070, lbl_805DE074, 3)) {
            error = 3;
            break;
        }
        EXIImm(lbl_805DE070, &cmd, 4, 1, NULL);
        EXISync(lbl_805DE070);
        while (qLen && len) {
            if (qLen < 4 && (u32)qLen < len) {
                break;
            }
            xLen = (len < 4) ? len : 4;
            EXIImm(lbl_805DE070, buf, xLen, 1, NULL);
            buf = (u8*)buf + xLen;
            len -= xLen;
            qLen -= xLen;
            EXISync(lbl_805DE070);
        }
        EXIDeselect(lbl_805DE070);
    }
    EXIUnlock(lbl_805DE070);
    OSRestoreInterrupts(enabled);
    return error;
}
