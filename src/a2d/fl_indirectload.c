#pragma dont_inline on
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
#define M8(a) (*(u8*)(a))
#define M16(a) (*(u16*)(a))
#define M32(a) (*(u32*)(a))
#define MF(a) (*(float*)(a))
#define MS16(a) (*(s16*)(a))
#define MD(a) (*(double*)(a))
float __fabsf(float);
typedef struct { u32 w[2]; } S8;
typedef struct { u8 p[4]; u32 f; } A8_4_u32;
typedef struct { u8 p[4]; float f; } A8_4_float;
typedef struct { u8 p[3]; u8 f; } A4_3_u8;
typedef struct { u8 p[2]; u8 f; u8 q[1]; } A4_2_u8;
typedef struct { u8 p[1]; u8 f; u8 q[2]; } A4_1_u8;
typedef struct { u8 p[8]; float f; } A12_8_float;
typedef struct { u8 p[4]; float f; u8 q[4]; } A12_4_float;
extern u8 lbl_805028E8[];
extern const float lbl_805E4FC8;
extern const float lbl_805E4FCC;
extern const float lbl_805E4FD0;
extern u8 lbl_804F55B0[];
extern u8 lbl_80502AC0[];
void fn_80396724(u32);
extern u8 lbl_80503488[];
void fn_803969A4(void);
extern u8 lbl_805DDCB8;
extern u8 lbl_804F5658[];
extern u8 lbl_804F5604[];
extern u32 lbl_805DC170;
extern u8 lbl_804F5794[];
extern u8 lbl_804F5750[];
extern u32 lbl_805DC174;
extern u8 lbl_804F57A0[];
extern u32 lbl_805DDAA0;
extern u32 lbl_805DC198;
extern u32 lbl_805DC1A0;
extern u32 lbl_805DC190;
extern u32 lbl_805DC188;
extern u32 lbl_805DDAAC;
extern u32 lbl_805DC1B8;
extern u8 lbl_804E0D60[];
extern u8 lbl_804C0470[];
extern u8 lbl_804F5A18[];
extern u8 lbl_804F5A0C[];
extern u32 lbl_805DDBB4;
extern u8 lbl_804F59C8[];
extern u8 lbl_804F5174[];
extern u8 lbl_804F5F08[];
extern u8 lbl_804F5E58[];
extern u8 lbl_804F5EB0[];
extern u8 lbl_804F5E00[];
extern u8 lbl_804F5D50[];
extern u8 lbl_804F5DA8[];
extern u8 lbl_804F5AAC[];
extern u8 lbl_804F5B00[];
extern u8 lbl_804F5B54[];
extern u8 lbl_804F5BA8[];
extern u8 lbl_804F5BFC[];
extern u8 lbl_804F5C50[];
extern u8 lbl_804F5CA4[];
extern u8 lbl_804F5CF8[];
extern u8 lbl_804BC15C[];
extern u8 lbl_804BC184[];
extern u8 lbl_804F6278[];
extern u8 lbl_804BC3BC[];
extern u8 lbl_804F59EC[];
extern u8 __files[];
extern u8 lbl_804F6018[];
extern u8 lbl_804F5FCC[];
extern u8 lbl_8058B634[];
extern u32 lbl_805DC2D0;
extern u32 lbl_805DC2C8;
extern u32 lbl_805DDBB8;
extern u32 lbl_805DC2D8;
extern const float lbl_805E5018;
extern u32 lbl_805DC348;
extern u32 lbl_805DC34C;
extern u32 lbl_805DC350;
extern u32 lbl_805DC354;
extern u8 lbl_804F6268[];
extern u8 lbl_804F603C[];
extern u32 lbl_805DC2C0;
extern u32 lbl_805DC2B8;
extern u8 lbl_804F67D8[];
extern u8 lbl_804F6790[];
extern u8 lbl_804BC374[];
extern u8 lbl_804BC344[];
extern u8 lbl_804F6134[];
extern u8 lbl_804F60F0[];
extern u32 lbl_805DC400;
extern u32 lbl_805DC3D8;
extern const float lbl_805E5040;
extern u32 lbl_805DC410;
extern u32 lbl_805DC408;
extern u32 lbl_805DC3B0;
extern const float lbl_805E505C;
extern u8 lbl_804F6514[];
extern u32 lbl_805DC444;
extern u8 lbl_804F64BC[];
extern u8 lbl_804F58DC[];
extern u8 lbl_804F5970[];
extern u8 lbl_804F5078[];
extern u8 lbl_804BC430[];
extern u8 lbl_804BC3DC[];
extern u8 lbl_804BC454[];
extern u8 lbl_804F69F4[];
extern const float lbl_805E5060;
extern u8 lbl_804F6968[];
extern u32 lbl_805DC4D8;
extern u32 lbl_805DC498;
extern u32 lbl_805DC490;
extern u32 lbl_805DC4E0;
extern u32 lbl_805DC488;
extern u8 lbl_804F6820[];
extern u32 lbl_805DC548;
extern u32 lbl_805DC510;
extern const double lbl_805E5078;
extern const double lbl_805E50B0;
extern const float lbl_805E50B8;
extern const float lbl_805E50A4;
extern u32 lbl_805DC5D0;
extern u8 lbl_804F72D0[];
extern const float lbl_805E5090;
extern const float lbl_805E5094;
extern u32 lbl_805DC5B0;
extern u32 lbl_805DC5A8;
extern u8 lbl_804F71F8[];
extern u8 lbl_804F6F70[];
extern u32 lbl_805DC5E0;
extern u32 lbl_805DC5A0;
extern const float lbl_805E50C0;
extern u8 lbl_804F70DC[];
extern u8 lbl_804C0D38[];
extern u8 lbl_804F7830[];
extern u32 lbl_805DC66C;
extern u32 lbl_805DC670;
extern u32 lbl_805DC678;
extern u32 lbl_805DC640;
extern u32 lbl_805DC638;
extern const float lbl_805E5114;
extern u32 lbl_805DC680;
extern u8 lbl_804BC4A4[];
extern u8 lbl_804F73B4[];
extern u8 lbl_804F73A8[];
extern const float lbl_805E5110;
extern u16 lbl_805DC6A0;
extern u32 lbl_805DC690;
extern u16 lbl_805DC6A4;
extern u32 lbl_805DC698;
extern u8 lbl_804F7694[];
extern u8 lbl_804C0DB8[];
extern u32 lbl_805DDCA0;
extern u8 lbl_804F1318[];
extern u32 lbl_805DDC8C;
extern u32 lbl_805DDC88;
extern u8 fn_80377444[];
extern u8 lbl_8055F7E0[];
extern u8 fn_80377454[];
extern u32 lbl_805DC750;
extern u32 lbl_805DC758;
extern u8 fn_803773C8[];
extern u8 lbl_804F7878[];
extern u32 lbl_805DC75C;
extern u8 lbl_804F7B60[];
extern u32 lbl_805DDB34;
extern u32 lbl_805DC748;
extern u32 lbl_805DC740;
extern u32 lbl_805DC764;
extern u8 lbl_804C75F4[];
extern u32 lbl_805DC700;
extern u32 lbl_805DC6F8;
extern u8 lbl_804F7A3C[];
extern u8 lbl_804F7A30[];
extern u8 lbl_804F8278[];
extern u8 lbl_804C0F9C[];
extern u8 lbl_804F8660[];
extern const float lbl_805E513C;
extern const float lbl_805E5140;
extern u32 lbl_805DC810;
extern u32 lbl_805DC7D8;
extern const float lbl_805E5150;
extern const float lbl_805DC81C;
extern const float lbl_805DC820;
extern const float lbl_805DC824;
extern const float lbl_805DC828;
extern const float lbl_805E5154;
extern const double lbl_805E5158;
extern const float lbl_805E5160;
void GXPixModeSync(u32, float);
void fn_803CEE20();
void fn_803CED38();
u32 HSD_StateInvalidate();
void __assert();
void HSD_StateInitTev();
void HSD_SetMaterialColor(u32, u32, u32, u32, float);
void HSD_SetMaterialShininess(u32, float);
void HSD_TObjSetup();
void HSD_TObjSetupTextureCoordGen();
void fn_80396210();
void fn_803CE9F4(u32, float, float);
void fn_803CE8E0();
void fn_803CE604();
void fn_803CE568();
void fn_803F903C();
void fn_803F908C();
void fn_803CEC68();
void fn_803CECD0();
void HSD_TExpSetupTev();
void HSD_SetupRenderModeWithCustomPE();
u32 fn_80397080();
void hsdInitClassInfo();
u32 fn_80396E88();
void HSD_DObjSetDefaultClass();
void HSD_MObjSetDefaultClass();
u32 HSD_DObjLoadDesc();
u32 HSD_RObjLoadDesc();
void PSMTXIdentity();
u32 fn_80417C54();
void memcpy();
void HSD_IDInsertToTable();
u32 fn_80391F10();
u32 hsdSearchClassInfo();
u32 hsdNew();
u32 fn_8040C774();
u32 fn_80396C8C();
void fn_8040B188();
void fn_80397094();
u32 fn_803AD760();
u32 fn_80397970();
void fn_803973A4();
u32 fn_80397C28();
u32 fn_80398110();
u32 fn_803980D0();
u32 fn_80398090();
u32 strchr();
u32 fn_803B7E70();
void fn_8038BEF4();
void fn_8038C0E8();
void fn_8038BF64();
void fn_80399A88();
u32 fn_8038CB50();
void fn_803B8004();
void fn_803B6C88(u32, ...);
u32 fn_803991C8();
u32 fn_802889EC();
void fn_8038CB78();
void fn_8039967C();
void fn_80377A1C();
u32 fn_80392398();
void fn_80399458();
u32 fn_80399244();
u32 fn_8038CB28();
u32 fn_80399A84();
void fn_80399A80();
u32 fn_80399A78();
void fn_80399A54();
void fn_80399A50();
void fn_80399A4C();
void GXInvalidateTexAll();
void fn_80391B1C();
void fn_80391C70();
void fn_80391C1C();
void fn_803B4D80(u32, ...);
void abort();
void fn_8038DB14();
void fn_803979A4();
void GXSetScissor();
u32 fn_8039D984();
void fn_8039C5D8();
u32 fn_8039A878();
u32 __cvt_fp2unsigned(u32, u32, float, float);
u32 fn_8039D358();
u32 fn_8039A7BC();
void fn_802B551C();
void fn_802851B0();
u32 fn_8039EF98();
void fn_80284C8C();
void fn_803A0F20();
void fn_803A0A34();
u32 fn_803A0910();
void fn_80285F98();
float fn_803BD468(u32, float, float);
u32 fn_803A1888();
void fn_802854CC();
void fn_803A2478();
u32 fn_803A20A4();
void fn_80285960();
void GXInvalidateVtxCache();
void fn_803CAC04();
void GXSetVtxAttrFmt();
void GXSetVtxDesc();
void GXSetNumTexGens();
void fn_803CF134();
void fn_803CF820();
void fn_803CEBE0();
void fn_803CEC24();
void fn_803A2CEC();
void GXSetLineWidth();
void GXBegin();
void fn_8031CBE0();
u32 fn_8034CD48();
float fn_803A7730(u32, float, float);
u32 fn_803A7BF8();
u32 fn_803A797C();
u32 fn_803A77B8();
float fn_802A07D8(u32, u32, float);
u32 fn_802A0984();
u32 fn_802A0884();
float fn_8038B8E4(u32, u32, float);
u32 fn_8034D044();
u32 fn_803A8858();
void fn_803A8570();
u32 fn_802B563C();
void fn_802B042C();
void fn_802AFFD8();
void fn_803B8048();
void fn_80390C74();
u32 fn_80390BE0();
void fn_80390D74();
u32 strlen();
u32 fn_803B7D90();
u32 fn_803A8450();
void fn_803AA3D0();
void fn_803AA3D4();
u32 fn_803AA154();
void fn_802AAD08();
void CARDInit();
u32 fn_803E5C88();
void fn_803E634C();
u32 CARDGetResultCode();
void fn_803E8240();
u32 memcmp();
void fn_803E65D0();
void fn_8039EA30();
void fn_803E7EF0();
void fn_802B57F4();
void fn_803A9F28();
void fn_80376EE4();
void fn_803779C0();
u32 fn_802BC220();
u32 fn_802AFD4C();
void fn_803774B4();
void fn_802AAA38();
u32 fn_803AAB58();
void fn_802AAB18();
u32 fn_803AB968(u32, u32, u32, u32, u32, u32, u32, u32, float);
u32 fn_80378568();
float fn_80395FBC(u32, float, float);
u32 fn_8039A704(u32, u32, float);
u32 fn_80395B14(u32, u32, u32, u32, u32, float);
void sprintf(u32, ...);
void fn_803A2BE4();
u32 fn_803ACEF4();
u32 fn_803ACC78();
u32 fn_803ACAB4();
void fn_803A33B0();







u32 fn_80396C8C(u32 p3, u32 p4, u32 p5, u32 p6, u32 p7) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    u32 v18;
    float v19;
    float v20;
    float v21;
    float v22;
    float v23;
    float v24;
    float v25;
    float v26;
    float v27;
    u32 v28;
    u32 v29;
    u32 v30;
    u32 c0;
    u32 c1;
    u32 c6;
    u32 c7;
    u32 c9;
    v1 = M32(((u32)p4+4));
    if ((s32)(v1&0x1000) == (s32)0) {
        if ((s32)(p6&0xff) == (s32)0) {
            if ((s32)(p7&0xff) == (s32)0) goto L19;
        }
        v2 = 1;
        goto L20;
    L19:;
        v2 = 0;
    L20:;
        v3 = M32(((u32)p4+8));
        c0 = fn_80396E88(v3, p3, v2);
        M32(((u32)p3+16)) = c0;
    }
    v4 = M32(((u32)p4+12));
    c1 = fn_80396E88(v4, p5, p7);
    M32(((u32)p3+8)) = c1;
    M32(((u32)p3+12)) = p5;
    v5 = M32(((u32)p3+20));
    v6 = M32(((u32)p4+4));
    M32(((u32)p3+20)) = (v5|v6);
    v7 = M32(((u32)p3+20));
    if ((s32)((v7>>14)&0x1) != (s32)0) {
        v8 = M32(((u32)p4+16));
        M32(((u32)p3+24)) = v8;
    } else {
        if ((s32)(v7&0x20) != (s32)0) {
            v9 = M32(((u32)p4+16));
            M32(((u32)p3+24)) = v9;
            v10 = M32(((u32)p4+16));
            v11 = v10;
            goto L50;
    L46:;
            v12 = M32(((u32)v11+4));
            M32(((u32)v11+4)) = (v12|2147483648);
            v13 = M32(v11);
            v11 = v13;
    L50:;
            if ((u32)v11 != (u32)0) goto L46;
        } else {
            if ((s32)(p6&0xff) == (s32)0) {
                if ((s32)(p7&0xff) == (s32)0) goto L69;
                v15 = (p7&0xff);
            } else {
                v15 = (p6&0xff);
            }
            v16 = lbl_805DDCB8;
            if ((u32)v16 != (u32)0) goto L78;
            HSD_DObjSetDefaultClass((u32)lbl_804F5658);
            HSD_MObjSetDefaultClass((u32)lbl_804F5604);
            lbl_805DDCB8 = 1;
            goto L78;
    L69:;
            v14 = lbl_805DDCB8;
            if ((u32)v14 != (u32)0) {
                HSD_DObjSetDefaultClass(0);
                HSD_MObjSetDefaultClass(0);
                lbl_805DDCB8 = 0;
            }
    L78:;
            v17 = M32(((u32)p4+16));
            c6 = HSD_DObjLoadDesc(v17);
            M32(((u32)p3+24)) = c6;
        }
    }
    v18 = M32(((u32)p4+60));
    c7 = HSD_RObjLoadDesc(v18);
    M32(((u32)p3+128)) = c7;
    v19 = MF(((u32)p4+20));
    MF(((u32)p3+28)) = v19;
    v20 = MF(((u32)p4+24));
    MF(((u32)p3+32)) = v20;
    v21 = MF(((u32)p4+28));
    MF(((u32)p3+36)) = v21;
    v22 = MF(((u32)p4+32));
    MF(((u32)p3+44)) = v22;
    v23 = MF(((u32)p4+36));
    MF(((u32)p3+48)) = v23;
    v24 = MF(((u32)p4+40));
    MF(((u32)p3+52)) = v24;
    v25 = MF(((u32)p4+44));
    MF(((u32)p3+56)) = v25;
    v26 = MF(((u32)p4+48));
    MF(((u32)p3+60)) = v26;
    v27 = MF(((u32)p4+52));
    MF(((u32)p3+64)) = v27;
    PSMTXIdentity((p3+68));
    M32(((u32)p3+116)) = 0;
    v28 = M32(((u32)p4+56));
    if ((u32)v28 != (u32)0) {
        c9 = fn_80417C54();
        M32(((u32)p3+120)) = c9;
        v29 = M32(((u32)p3+120));
        v30 = M32(((u32)p4+56));
        memcpy(v29, v30, 48);
    }
    HSD_IDInsertToTable(0, p4, p3);
    M32(((u32)p3+132)) = p4;
    return 0;
}





u32 fn_80397080(u32 p3) {
    u32 v1;
    v1 = M32((u32)lbl_804F57A0+(p3<<2));
    return v1;
}





u32 fn_80397970(void) {
    u32 v1;
    v1 = lbl_805DDAA0;
    fn_803AD760(v1, 0, (u32)&lbl_805DC198, (u32)&lbl_805DC1A0, 0);
}





















u32 fn_80398C30(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5A18;
        lbl_805DDBB4 = 0;
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}



u32 fn_80399158(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)v1+4));
        return v2;
    }
    return 0;
}

u32 fn_80399174(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)v1+5));
        return v2;
    }
    return 0;
}

u32 fn_80399190(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)v1+6));
        return v2;
    }
    return 0;
}

u32 fn_803991AC(u32 p3) {
    u32 v1;
    u32 v2;
    v1 = M32(((u32)p3+4));
    if ((u32)v1 != (u32)0) {
        v2 = M8(((u32)v1+7));
        return v2;
    }
    return 0;
}







void fn_80399A54(u32 p3, u32 p4, u32 p5) {
    fn_8038CB78(p4);
}

u32 fn_80399A78(u32 p3) {
    return (p3+4);
}



u32 fn_80399AA8(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5AAC;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399B04(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5B00;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399B60(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5B54;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399BBC(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5BA8;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399C18(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5BFC;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399C74(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5C50;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399CD0(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5CA4;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399D2C(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5CF8;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399D88(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5D50;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399DE4(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5DA8;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399E40(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5E00;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399E9C(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5E58;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399EF8(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5EB0;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}

u32 fn_80399F54(u32 p3, u32 p4) {
    if ((s32)p3 != (s32)0) {
        M32(p3) = (u32)lbl_804F5F08;
        if ((s32)p3 != (s32)0) {
            M32(p3) = (u32)lbl_804F5174;
        }
        if ((s32)((s16)p4) > (s32)0) {
            fn_8038CB78(p3);
        }
    }
    return p3;
}





















































void fn_8039BB54(u32 p3) {
    M32(p3) = (u32)lbl_804BC3BC;
    M32(p3) = (u32)lbl_804F59EC;
    M32(((u32)p3+4)) = 0;
}

void fn_8039CD7C(u32 p3) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 v5;
    u32 v6;
    u32 v7;
    u32 v8;
    u32 v9;
    u32 v10;
    u32 v11;
    u32 v12;
    u32 v13;
    u32 v14;
    u32 v15;
    u32 v16;
    u32 v17;
    u32 v18;
    u32 v19;
    v1 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+28), ((v1>>8)&0x1));
    v2 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+40), ((v2>>9)&0x1));
    v3 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+52), ((v3>>6)&0x1));
    v4 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+64), ((v4>>5)&0x1));
    v5 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+76), ((v5>>10)&0x1));
    v6 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+88), ((v6>>11)&0x1));
    v7 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+100), ((v7>>4)&0x1));
    v8 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+112), ((v8>>3)&0x1));
    v9 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+124), ((v9>>2)&0x1));
    v10 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+136), (v10&0x1));
    v11 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+148), ((v11>>1)&0x1));
    v12 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+160), ((v12>>16)&0x1));
    v13 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+172), ((v13>>17)&0x1));
    v14 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+184), ((v14>>18)&0x1));
    v15 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+196), ((v15>>19)&0x1));
    v16 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+208), ((v16>>20)&0x1));
    v17 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+220), ((v17>>21)&0x1));
    v18 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+232), ((v18>>22)&0x1));
    v19 = M32(&lbl_8058B634[0]);
    fn_8038DB14((p3+244), ((v19>>23)&0x1));
    fn_803979A4(p3);
}









void fn_8039D1D4(u32 p3, u32 p4) {
    M16(((u32)p3+36)) = p4;
    M16(((u32)p3+38)) = p4;
}



















































u32 fn_803A0518(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    u32 c1;
    u32 c2;
    c0 = fn_803AD760(p4, 0, (u32)&lbl_805DC4E0, (u32)&lbl_805DC488, 0);
    c1 = fn_8039A878(c0, 13);
    if ((s32)(c1&0xff) != (s32)0) {
        v1 = M16(((u32)p3+56));
        if ((u32)v1 != (u32)0) {
            M16(((u32)p3+56)) = (v1-1);
        }
    }
    c2 = fn_8039A878(c0, 14);
    if ((s32)(c2&0xff) != (s32)0) {
        v2 = M32(((u32)p3+136));
        v3 = M16(((u32)p3+56));
        if ((u32)v3 < (u32)(v2-1)) {
            M16(((u32)p3+56)) = (v3+1);
            v4 = v2;
        } else {
            v4 = v2;
        }
    } else {
        v4 = c2;
    }
    return v4;
}















u32 fn_803A23D8(u32 p3, u32 p4) {
    u32 v1;
    u32 v2;
    u32 v3;
    u32 v4;
    u32 c0;
    u32 c1;
    u32 c2;
    c0 = fn_803AD760(p4, 0, (u32)&lbl_805DC548, (u32)&lbl_805DC510, 0);
    c1 = fn_8039A878(c0, 13);
    if ((s32)(c1&0xff) != (s32)0) {
        v1 = M32(((u32)p3+56));
        if ((u32)v1 != (u32)0) {
            M32(((u32)p3+56)) = (v1-1);
        }
    }
    c2 = fn_8039A878(c0, 14);
    if ((s32)(c2&0xff) != (s32)0) {
        v2 = M32(((u32)p3+72));
        v3 = M32(((u32)p3+56));
        if ((u32)v3 < (u32)(v2-1)) {
            M32(((u32)p3+56)) = (v3+1);
            v4 = v2;
        } else {
            v4 = v2;
        }
    } else {
        v4 = c2;
    }
    return v4;
}









void fn_803A2BA4(u32 p3) {
    u32 v1;
    float v2;
    v1 = M32(((u32)p3+72));
    v2 = MF(v1);
    MF(((u32)p3+68)) = v2;
}











void fn_803A2CEC(void) {
    GXInvalidateVtxCache();
    fn_803CAC04();
    GXSetVtxAttrFmt(0, 9, 1, 4, 0);
    GXSetVtxDesc(9, 1);
}

void fn_803A2D34(void) {
    u32 stk[2];
    u32 v1;
    GXSetNumTexGens(0);
    fn_803CF134(0, 255, 256, 255);
    fn_803CF820(1, 4, 5, 0);
    fn_803CEBE0(0, 15, 15, 12, 2);
    fn_803CEC68(0, 0, 0, 0, 1, 0);
    M8((u8*)stk+0) = 0;
    M8((u8*)stk+1) = 0;
    M8((u8*)stk+2) = 0;
    M8((u8*)stk+3) = 255;
    v1 = M32((u8*)stk+0);
    M32((u8*)stk+4) = v1;
    fn_803CED38(1, (u32)((u8*)stk+4));
    fn_803CEC24(0, 7, 7, 7, 1);
    fn_803CECD0(0, 0, 0, 0, 1, 0);
    fn_803A2CEC();
}















void fn_803A60F4(u32 p3) {
    u32 v1;
    u32 v2;
    float v3;
    u32 v4;
    u32 v5;
    float v6;
    float d0;
    v1 = M32(((u32)p3+124));
    v2 = M32(((u32)p3+116));
    v3 = MF(v2+(v1*12));
    MF(((u32)p3+264)) = v3;
    v4 = M32(((u32)p3+124));
    v5 = M32(((u32)p3+116));
    v6 = MF(v5+(v4*12));
    d0 = fn_802A07D8((p3+116), v5, v6);
    MF(((u32)p3+336)) = d0;
}



void fn_803A765C(u32 p3, u32 p4, float q1) {
    fn_802A07D8((p3+68), p4, q1);
}

void fn_803A7680(u32 p3, float q1, float q2) {
    fn_803A7730((p3+68), q1, q2);
}

float fn_803A76A4(u32 p3, float q1) {
    u32 v1;
    float v2;
    float v3;
    u32 c0;
    u32 c1;
    float d2;
    c0 = fn_802A0984();
    if ((s32)c0 >= (s32)0) {
        c1 = fn_802A0884(p3);
        if ((s32)(c1-1) > (s32)c0) goto L19;
    }
    v2 = lbl_805E50A4;
    v3 = v2;
    goto L27;
    L19:;
    v1 = M32(p3);
    d2 = fn_8038B8E4((v1+(c0*12)), (v1+((c0+1)*12)), q1);
    v3 = d2;
    L27:;
    return v3;
}

















u32 fn_803AA10C(u32 p3) {
    fn_803A8450(p3, (u32)lbl_804F7694, 3);
    M32(p3) = (u32)lbl_804C0DB8;
    return p3;
}



void fn_803AA3D4(u32 p3) {
    M32(((u32)p3+344)) = (p3+666);
}











































#pragma fp_contract on

#pragma fp_contract off

void fn_803ACA64(u32 p3, float q1, float q2) {
    fn_80395FBC((p3+84), q1, q2);
}



void fn_80399A4C(void) {}

void fn_80399A50(void) {}

void fn_80399A80(void) {}

u32 fn_80399A84(void) {}

void fn_803AA3D0(void) {}
