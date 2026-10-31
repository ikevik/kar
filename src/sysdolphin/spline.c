#pragma fp_contract on
#include <dolphin/types.h>

f32 splGetHelmite(f32 a, f32 t, f32 p0, f32 p1, f32 d0, f32 d1);
#if 0 /* not yet matching */
f32 splGetHelmite(f32 a, f32 t, f32 p0, f32 p1, f32 d0, f32 d1)
{
    f32 t2 = t * t;
    f32 a2 = a * a;
    f32 t3 = t2 * t;
    f32 c = 3.0f * t2;
    f32 t2a = t2 * a;
    f32 t3a2 = a2 * t3;
    f32 c2 = c * a2;
    f32 e = 2.0f * t3a2;
    f32 h = t3a2 - t2a;
    f32 e3 = e * a;
    f32 m = h - t2a;
    f32 h01 = -e3 + c2;
    f32 h00 = 1.0f + (e3 - c2);
    f32 h10 = t + m;
    return p1 * h01 + p0 * h00 + d0 * h10 + d1 * h;
}
#endif
