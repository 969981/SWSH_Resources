/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131f6c0; name: FUN_0131f6c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0131f6c0(long param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined *puVar37;
  int iVar38;
  undefined8 *puVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 *puVar42;
  undefined1 uVar43;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 uVar44;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar45;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar46;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 uVar47;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 uVar48;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar49;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 uVar50;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 uVar51;
  undefined1 extraout_var_31;
  undefined1 auVar52 [16];
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  undefined8 uVar69;
  float fVar70;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar77;
  byte bVar78;
  undefined8 uVar71;
  float fVar76;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  float fVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  char local_70 [16];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
LAB_0131f7a0:
    iVar38 = *(int *)(param_1 + 0x10);
  }
  else {
    puVar42 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar42 != (undefined8 *)0x0) {
      puVar39 = (undefined8 *)(**(code **)*puVar42)(puVar42);
      if (((*PTR_DAT_027150a8 & 1) == 0) &&
         (iVar38 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar38 != 0)) {
        uVar40 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_027150b0 = uVar40;
        __cxa_guard_release(PTR_DAT_027150a8);
      }
      if (puVar39 == (undefined8 *)0x0) goto LAB_0131f7a0;
      do {
        if (puVar39 == (undefined8 *)PTR_DAT_027150b0) {
          puVar42 = puVar42 + -10;
          iVar38 = *(int *)(param_1 + 0x10);
          goto joined_r0x0131f768;
        }
        puVar39 = (undefined8 *)*puVar39;
      } while (puVar39 != (undefined8 *)0x0);
    }
    iVar38 = *(int *)(param_1 + 0x10);
  }
  puVar42 = (undefined8 *)0x0;
joined_r0x0131f768:
  if (iVar38 == 2) {
    lVar41 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar61 = *(float *)(param_1 + 0x54);
    uVar43 = SUB41(fVar61,0);
    uVar44 = (undefined1)((uint)fVar61 >> 8);
    uVar45 = (undefined1)((uint)fVar61 >> 0x10);
    uVar46 = (undefined1)((uint)fVar61 >> 0x18);
    fVar68 = *(float *)(param_1 + 0x50) + (float)((double)*(long *)(lVar41 + 8) / DAT_01cd50a0);
    *(float *)(param_1 + 0x50) = fVar68;
    if (fVar61 <= fVar68) {
      iVar38 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar38 + -1;
      if (iVar38 < 1) {
        if (*(char *)(param_1 + 0x14) == '\0') {
          FUN_0131fc90(param_1);
          return;
        }
        *(undefined1 *)(param_1 + 0x14) = 0;
        FUN_0131fb30(param_1,param_1 + 0x20);
        return;
      }
      bVar72 = *(byte *)(param_1 + 0x5c);
      *(byte *)(param_1 + 0x5c) = bVar72 ^ 1;
      puVar37 = PTR_DAT_02727f60;
      uVar43 = 0x3f;
      if (bVar72 != 1) {
        uVar43 = 0xbf;
      }
      fVar68 = 0.0;
      FUN_00a92cd0(SUB41((float)CONCAT13(uVar43,0x800000) * *(float *)(PTR_DAT_02727f60 + 0x10),0),
                   ZEXT816(0),0);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x48);
      uVar36 = DAT_01cd5418;
      uVar69 = DAT_01cd5120;
      uVar54 = DAT_01cd50f8;
      uVar55 = DAT_01cd50b0;
      uVar53 = DAT_01cd4f90;
      pauVar1 = (undefined1 (*) [12])(param_1 + 0x30);
      fVar96 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      fVar97 = (float)*(undefined8 *)*pauVar1;
      fVar98 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar91 = (float)_UNK_01d4ae88;
      fVar92 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
      fVar89 = (float)_DAT_01d4ae80;
      fVar90 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
      fVar61 = fVar97 * fVar89;
      fVar62 = fVar98 * fVar90;
      fVar63 = (float)*(undefined8 *)(param_1 + 0x38) * fVar91;
      fVar65 = fVar96 * fVar92;
      uVar59 = (undefined4)_UNK_01d49dc8;
      uVar60 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
      auVar6._8_4_ = uVar59;
      auVar6._0_8_ = _DAT_01d49dc0;
      auVar6._12_4_ = uVar60;
      uVar71 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
      auVar7._8_4_ = uVar59;
      auVar7._0_8_ = _DAT_01d49dc0;
      auVar7._12_4_ = uVar60;
      uVar57 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
      auVar8._8_4_ = uVar59;
      auVar8._0_8_ = _DAT_01d49dc0;
      auVar8._12_4_ = uVar60;
      uVar94 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
      auVar9._4_4_ = fVar62;
      auVar9._0_4_ = fVar61;
      auVar9._8_4_ = fVar63;
      auVar9._12_4_ = fVar65;
      uVar40 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
      auVar10._4_4_ = fVar62;
      auVar10._0_4_ = fVar61;
      auVar10._8_4_ = fVar63;
      auVar10._12_4_ = fVar65;
      uVar67 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5120);
      fVar70 = (float)uVar71;
      fVar76 = (float)((ulong)uVar71 >> 0x20);
      auVar11._4_4_ = fVar62;
      auVar11._0_4_ = fVar61;
      auVar11._8_4_ = fVar63;
      auVar11._12_4_ = fVar65;
      uVar71 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50f8);
      auVar12._4_4_ = fVar62;
      auVar12._0_4_ = fVar61;
      auVar12._8_4_ = fVar63;
      auVar12._12_4_ = fVar65;
      uVar102 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
      *(ulong *)(param_1 + 0x48) =
           CONCAT17(extraout_var_30,
                    CONCAT16(extraout_var_28,
                             CONCAT15(extraout_var_26,
                                      CONCAT14(extraout_var_24,
                                               CONCAT13(extraout_var_22,
                                                        CONCAT12(extraout_var_20,
                                                                 CONCAT11(extraout_var_18,
                                                                          extraout_var_16)))))));
      *(undefined8 *)(param_1 + 0x40) =
           CONCAT17(extraout_var_14,
                    CONCAT16(extraout_var_12,
                             CONCAT15(extraout_var_10,
                                      CONCAT14(extraout_var_08,
                                               CONCAT13(extraout_var_05,
                                                        CONCAT12(extraout_var_02,
                                                                 CONCAT11(extraout_var,extraout_b0))
                                                       )))));
      fVar99 = (float)uVar57;
      fVar100 = (float)((ulong)uVar57 >> 0x20);
      auVar13._4_4_ = fVar62;
      auVar13._0_4_ = fVar61;
      auVar13._8_4_ = fVar63;
      auVar13._12_4_ = fVar65;
      uVar104 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5270);
      auVar33._12_4_ = fVar96;
      auVar33._0_12_ = *pauVar1;
      uVar95 = a64_TBL(ZEXT816(0),auVar33,uVar53);
      auVar14._4_4_ = fVar62;
      auVar14._0_4_ = fVar61;
      auVar14._8_4_ = fVar61;
      auVar14._12_4_ = fVar62;
      uVar57 = a64_TBL(ZEXT816(0),auVar14,uVar55);
      fVar64 = (float)_UNK_01d4ae98;
      fVar66 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
      fVar56 = (float)_DAT_01d4ae90;
      fVar58 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
      fVar87 = (float)uVar94;
      fVar88 = (float)((ulong)uVar94 >> 0x20);
      auVar34._12_4_ = fVar96;
      auVar34._0_12_ = *pauVar1;
      uVar94 = a64_TBL(ZEXT816(0),auVar34,uVar54);
      fVar61 = (fVar61 * fVar70 + fVar56 * (float)uVar40 * 0.0 + fVar56 * fVar87 * (float)uVar71) -
               fVar99 * (float)uVar102;
      fVar62 = (fVar62 * fVar76 + fVar58 * (float)((ulong)uVar40 >> 0x20) * 0.0 +
               fVar58 * fVar88 * (float)((ulong)uVar71 >> 0x20)) -
               fVar100 * (float)((ulong)uVar102 >> 0x20);
      fVar63 = (fVar63 * fVar70 + fVar64 * fVar99 * (float)uVar67 + fVar64 * (float)uVar57 * 0.0) -
               fVar87 * (float)uVar104;
      fVar65 = (fVar65 * fVar76 + fVar66 * fVar100 * (float)((ulong)uVar67 >> 0x20) +
               fVar66 * (float)((ulong)uVar57 >> 0x20) * 0.0) -
               fVar88 * (float)((ulong)uVar104 >> 0x20);
      auVar21._4_4_ = fVar62;
      auVar21._0_4_ = fVar61;
      auVar21._8_4_ = fVar63;
      auVar21._12_4_ = fVar65;
      uVar102 = a64_TBL(ZEXT816(0),auVar21,uVar53);
      auVar22._4_4_ = fVar62;
      auVar22._0_4_ = fVar61;
      auVar22._8_4_ = fVar63;
      auVar22._12_4_ = fVar65;
      uVar105 = a64_TBL(ZEXT816(0),auVar22,uVar69);
      auVar23._4_4_ = fVar62;
      auVar23._0_4_ = fVar61;
      auVar23._8_4_ = fVar63;
      auVar23._12_4_ = fVar65;
      uVar107 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5270);
      fVar93 = (float)((ulong)uVar95 >> 0x20);
      auVar24._4_4_ = fVar62;
      auVar24._0_4_ = fVar61;
      auVar24._8_4_ = fVar63;
      auVar24._12_4_ = fVar65;
      uVar106 = a64_TBL(ZEXT816(0),auVar24,uVar36);
      fVar101 = (float)((ulong)uVar94 >> 0x20);
      auVar35._12_4_ = fVar96;
      auVar35._0_12_ = *pauVar1;
      uVar104 = a64_TBL(ZEXT816(0),auVar35,uVar36);
      auVar25._4_4_ = fVar62;
      auVar25._0_4_ = fVar61;
      auVar25._8_4_ = fVar63;
      auVar25._12_4_ = fVar65;
      uVar57 = a64_TBL(ZEXT816(0),auVar25,uVar54);
      auVar26._4_4_ = fVar62;
      auVar26._0_4_ = fVar61;
      auVar26._8_4_ = fVar61;
      auVar26._12_4_ = fVar62;
      uVar40 = a64_TBL(ZEXT816(0),auVar26,uVar55);
      fVar103 = (float)((ulong)uVar104 >> 0x20);
      fVar89 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0))) *
               fVar89;
      fVar90 = (float)CONCAT13(extraout_var_14,
                               CONCAT12(extraout_var_12,CONCAT11(extraout_var_10,extraout_var_08)))
               * fVar90;
      fVar91 = (float)CONCAT13(extraout_var_22,
                               CONCAT12(extraout_var_20,CONCAT11(extraout_var_18,extraout_var_16)))
               * fVar91;
      fVar92 = (float)CONCAT13(extraout_var_30,
                               CONCAT12(extraout_var_28,CONCAT11(extraout_var_26,extraout_var_24)))
               * fVar92;
      auVar27._4_4_ = fVar90;
      auVar27._0_4_ = fVar89;
      auVar27._8_4_ = fVar91;
      auVar27._12_4_ = fVar92;
      uVar67 = a64_TBL(ZEXT816(0),auVar27,uVar69);
      auVar28._4_4_ = fVar90;
      auVar28._0_4_ = fVar89;
      auVar28._8_4_ = fVar91;
      auVar28._12_4_ = fVar92;
      uVar71 = a64_TBL(ZEXT816(0),auVar28,uVar53);
      fVar61 = ((float)uVar95 * fVar61 + fVar56 * fVar97 * (float)uVar102 +
               fVar56 * (float)uVar104 * (float)uVar57) - (float)uVar94 * (float)uVar106;
      fVar96 = (fVar93 * fVar62 + fVar58 * fVar98 * (float)((ulong)uVar102 >> 0x20) +
               fVar58 * fVar103 * (float)((ulong)uVar57 >> 0x20)) -
               fVar101 * (float)((ulong)uVar106 >> 0x20);
      fVar97 = ((float)uVar95 * fVar63 + fVar64 * (float)uVar94 * (float)uVar105 +
               fVar64 * fVar97 * (float)uVar40) - (float)uVar104 * (float)uVar107;
      fVar98 = (fVar93 * fVar65 + fVar66 * fVar101 * (float)((ulong)uVar105 >> 0x20) +
               fVar66 * fVar98 * (float)((ulong)uVar40 >> 0x20)) -
               fVar103 * (float)((ulong)uVar107 >> 0x20);
      auVar29._4_4_ = fVar90;
      auVar29._0_4_ = fVar89;
      auVar29._8_4_ = fVar91;
      auVar29._12_4_ = fVar92;
      uVar57 = a64_TBL(ZEXT816(0),auVar29,uVar54);
      auVar30._4_4_ = fVar90;
      auVar30._0_4_ = fVar89;
      auVar30._8_4_ = fVar91;
      auVar30._12_4_ = fVar92;
      uVar102 = a64_TBL(ZEXT816(0),auVar30,uVar36);
      auVar31._4_4_ = fVar90;
      auVar31._0_4_ = fVar89;
      auVar31._8_4_ = fVar91;
      auVar31._12_4_ = fVar92;
      uVar104 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5270);
      auVar32._4_4_ = fVar90;
      auVar32._0_4_ = fVar89;
      auVar32._8_4_ = fVar89;
      auVar32._12_4_ = fVar90;
      uVar40 = a64_TBL(ZEXT816(0),auVar32,uVar55);
      fVar62 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
      auVar52[1] = extraout_var;
      auVar52[0] = extraout_b0;
      auVar52[2] = extraout_var_02;
      auVar52[3] = extraout_var_05;
      auVar52[4] = extraout_var_08;
      auVar52[5] = extraout_var_10;
      auVar52[6] = extraout_var_12;
      auVar52[7] = extraout_var_14;
      auVar52[8] = extraout_var_16;
      auVar52[9] = extraout_var_18;
      auVar52[10] = extraout_var_20;
      auVar52[0xb] = extraout_var_22;
      auVar52[0xc] = extraout_var_24;
      auVar52[0xd] = extraout_var_26;
      auVar52[0xe] = extraout_var_28;
      auVar52[0xf] = extraout_var_30;
      uVar95 = a64_TBL(ZEXT816(0),auVar52,uVar54);
      fVar93 = (float)((ulong)uVar95 >> 0x20);
      auVar2[1] = extraout_var;
      auVar2[0] = extraout_b0;
      auVar2[2] = extraout_var_02;
      auVar2[3] = extraout_var_05;
      auVar2[4] = extraout_var_08;
      auVar2[5] = extraout_var_10;
      auVar2[6] = extraout_var_12;
      auVar2[7] = extraout_var_14;
      auVar2[8] = extraout_var_16;
      auVar2[9] = extraout_var_18;
      auVar2[10] = extraout_var_20;
      auVar2[0xb] = extraout_var_22;
      auVar2[0xc] = extraout_var_24;
      auVar2[0xd] = extraout_var_26;
      auVar2[0xe] = extraout_var_28;
      auVar2[0xf] = extraout_var_30;
      uVar94 = a64_TBL(ZEXT816(0),auVar2,uVar53);
      fVar63 = (fVar70 * fVar89 + fVar56 * (float)uVar71 * 0.0 + fVar56 * fVar87 * (float)uVar57) -
               fVar99 * (float)uVar102;
      fVar90 = (fVar76 * fVar90 + fVar58 * (float)((ulong)uVar71 >> 0x20) * 0.0 +
               fVar58 * fVar88 * (float)((ulong)uVar57 >> 0x20)) -
               fVar100 * (float)((ulong)uVar102 >> 0x20);
      fVar91 = (fVar70 * fVar91 + fVar64 * fVar99 * (float)uVar67 + fVar64 * (float)uVar40 * 0.0) -
               fVar87 * (float)uVar104;
      fVar92 = (fVar76 * fVar92 + fVar66 * fVar100 * (float)((ulong)uVar67 >> 0x20) +
               fVar66 * (float)((ulong)uVar40 >> 0x20) * 0.0) -
               fVar88 * (float)((ulong)uVar104 >> 0x20);
      auVar15._4_4_ = fVar90;
      auVar15._0_4_ = fVar63;
      auVar15._8_4_ = fVar91;
      auVar15._12_4_ = fVar92;
      uVar53 = a64_TBL(ZEXT816(0),auVar15,uVar53);
      auVar16._4_4_ = fVar90;
      auVar16._0_4_ = fVar63;
      auVar16._8_4_ = fVar91;
      auVar16._12_4_ = fVar92;
      uVar69 = a64_TBL(ZEXT816(0),auVar16,uVar69);
      fVar70 = (float)((ulong)uVar94 >> 0x20);
      bVar72 = (byte)((ulong)DAT_01d4ab50 >> 8);
      bVar73 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
      bVar74 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
      fVar65 = (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & bVar74,
                               CONCAT12((byte)((uint)fVar61 >> 0x10) & bVar73,
                                        CONCAT11((byte)((uint)fVar61 >> 8) & bVar72,
                                                 SUB41(fVar61,0) & (byte)DAT_01d4ab50)));
      bVar75 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
      bVar77 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
      bVar78 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
      bVar79 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
      bVar80 = (byte)((ulong)DAT_01d4ab58 >> 8);
      bVar81 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
      bVar82 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
      fVar89 = (float)CONCAT13((byte)((uint)fVar97 >> 0x18) & bVar82,
                               CONCAT12((byte)((uint)fVar97 >> 0x10) & bVar81,
                                        CONCAT11((byte)((uint)fVar97 >> 8) & bVar80,
                                                 SUB41(fVar97,0) & (byte)DAT_01d4ab58)));
      bVar83 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
      bVar84 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
      bVar85 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
      bVar86 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
      auVar3[1] = extraout_var;
      auVar3[0] = extraout_b0;
      auVar3[2] = extraout_var_02;
      auVar3[3] = extraout_var_05;
      auVar3[4] = extraout_var_08;
      auVar3[5] = extraout_var_10;
      auVar3[6] = extraout_var_12;
      auVar3[7] = extraout_var_14;
      auVar3[8] = extraout_var_16;
      auVar3[9] = extraout_var_18;
      auVar3[10] = extraout_var_20;
      auVar3[0xb] = extraout_var_22;
      auVar3[0xc] = extraout_var_24;
      auVar3[0xd] = extraout_var_26;
      auVar3[0xe] = extraout_var_28;
      auVar3[0xf] = extraout_var_30;
      uVar57 = a64_TBL(ZEXT816(0),auVar3,uVar36);
      fVar76 = (float)((ulong)uVar57 >> 0x20);
      fVar61 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
      auVar17._4_4_ = fVar90;
      auVar17._0_4_ = fVar63;
      auVar17._8_4_ = fVar91;
      auVar17._12_4_ = fVar92;
      uVar40 = a64_TBL(ZEXT816(0),auVar17,uVar54);
      auVar18._4_4_ = fVar90;
      auVar18._0_4_ = fVar63;
      auVar18._8_4_ = fVar91;
      auVar18._12_4_ = fVar92;
      uVar67 = a64_TBL(ZEXT816(0),auVar18,uVar36);
      auVar19._4_4_ = fVar90;
      auVar19._0_4_ = fVar63;
      auVar19._8_4_ = fVar91;
      auVar19._12_4_ = fVar92;
      uVar54 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5270);
      auVar20._4_4_ = fVar90;
      auVar20._0_4_ = fVar63;
      auVar20._8_4_ = fVar63;
      auVar20._12_4_ = fVar90;
      uVar55 = a64_TBL(ZEXT816(0),auVar20,uVar55);
      fVar56 = ((float)uVar94 * fVar63 + fVar56 * fVar62 * (float)uVar53 +
               fVar56 * (float)uVar57 * (float)uVar40) - (float)uVar95 * (float)uVar67;
      fVar62 = (fVar70 * fVar90 +
                fVar58 * (float)(CONCAT17(extraout_var_14,
                                          CONCAT16(extraout_var_12,
                                                   CONCAT15(extraout_var_10,
                                                            CONCAT14(extraout_var_08,fVar62)))) >>
                                0x20) * (float)((ulong)uVar53 >> 0x20) +
               fVar58 * fVar76 * (float)((ulong)uVar40 >> 0x20)) -
               fVar93 * (float)((ulong)uVar67 >> 0x20);
      fVar58 = ((float)uVar94 * fVar91 + fVar64 * (float)uVar95 * (float)uVar69 +
               fVar64 * fVar61 * (float)uVar55) - (float)uVar57 * (float)uVar54;
      fVar63 = (fVar70 * fVar92 + fVar66 * fVar93 * (float)((ulong)uVar69 >> 0x20) +
               fVar66 * (float)(CONCAT17(extraout_var_14,
                                         CONCAT16(extraout_var_12,
                                                  CONCAT15(extraout_var_10,
                                                           CONCAT14(extraout_var_08,fVar61)))) >>
                               0x20) * (float)((ulong)uVar55 >> 0x20)) -
               fVar76 * (float)((ulong)uVar54 >> 0x20);
      fVar61 = fVar65 * (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & bVar74,
                                        CONCAT12((byte)((uint)fVar56 >> 0x10) & bVar73,
                                                 CONCAT11((byte)((uint)fVar56 >> 8) & bVar72,
                                                          SUB41(fVar56,0) & (byte)DAT_01d4ab50)));
      fVar62 = (float)(CONCAT17((byte)((uint)fVar96 >> 0x18) & bVar79,
                                CONCAT16((byte)((uint)fVar96 >> 0x10) & bVar78,
                                         CONCAT15((byte)((uint)fVar96 >> 8) & bVar77,
                                                  CONCAT14(SUB41(fVar96,0) & bVar75,fVar65)))) >>
                      0x20) *
               (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & bVar79,
                               CONCAT12((byte)((uint)fVar62 >> 0x10) & bVar78,
                                        CONCAT11((byte)((uint)fVar62 >> 8) & bVar77,
                                                 SUB41(fVar62,0) & bVar75)));
      uVar43 = (undefined1)((uint)fVar62 >> 8);
      uVar44 = (undefined1)((uint)fVar62 >> 0x10);
      uVar45 = (undefined1)((uint)fVar62 >> 0x18);
      fVar56 = fVar89 * (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & bVar82,
                                        CONCAT12((byte)((uint)fVar58 >> 0x10) & bVar81,
                                                 CONCAT11((byte)((uint)fVar58 >> 8) & bVar80,
                                                          SUB41(fVar58,0) & (byte)DAT_01d4ab58)));
      uVar46 = (undefined1)((uint)fVar56 >> 8);
      uVar47 = (undefined1)((uint)fVar56 >> 0x10);
      uVar48 = (undefined1)((uint)fVar56 >> 0x18);
      fVar58 = (float)(CONCAT17((byte)((uint)fVar98 >> 0x18) & bVar86,
                                CONCAT16((byte)((uint)fVar98 >> 0x10) & bVar85,
                                         CONCAT15((byte)((uint)fVar98 >> 8) & bVar84,
                                                  CONCAT14(SUB41(fVar98,0) & bVar83,fVar89)))) >>
                      0x20) *
               (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & bVar86,
                               CONCAT12((byte)((uint)fVar63 >> 0x10) & bVar85,
                                        CONCAT11((byte)((uint)fVar63 >> 8) & bVar84,
                                                 SUB41(fVar63,0) & bVar83)));
      uVar49 = (undefined1)((uint)fVar58 >> 8);
      uVar50 = (undefined1)((uint)fVar58 >> 0x10);
      uVar51 = (undefined1)((uint)fVar58 >> 0x18);
      auVar4[4] = SUB41(fVar62,0);
      auVar4._0_4_ = fVar61;
      auVar4[5] = uVar43;
      auVar4[6] = uVar44;
      auVar4[7] = uVar45;
      auVar4[8] = SUB41(fVar56,0);
      auVar4[9] = uVar46;
      auVar4[10] = uVar47;
      auVar4[0xb] = uVar48;
      auVar4[0xc] = SUB41(fVar58,0);
      auVar4[0xd] = uVar49;
      auVar4[0xe] = uVar50;
      auVar4[0xf] = uVar51;
      auVar5[4] = SUB41(fVar62,0);
      auVar5._0_4_ = fVar61;
      auVar5[5] = uVar43;
      auVar5[6] = uVar44;
      auVar5[7] = uVar45;
      auVar5[8] = SUB41(fVar56,0);
      auVar5[9] = uVar46;
      auVar5[10] = uVar47;
      auVar5[0xb] = uVar48;
      auVar5[0xc] = SUB41(fVar58,0);
      auVar5[0xd] = uVar49;
      auVar5[0xe] = uVar50;
      auVar5[0xf] = uVar51;
      auVar52 = NEON_ext(auVar4,auVar5,8,1);
      fVar61 = acosf(auVar52._0_4_ + fVar61 + auVar52._4_4_ + fVar62);
      fVar62 = *(float *)(puVar37 + 8);
      *(undefined4 *)(param_1 + 0x50) = 0;
      fVar61 = fVar61 / fVar62;
      uVar43 = SUB41(fVar61,0);
      uVar44 = (undefined1)((uint)fVar61 >> 8);
      uVar45 = (undefined1)((uint)fVar61 >> 0x10);
      uVar46 = (undefined1)((uint)fVar61 >> 0x18);
      *(float *)(param_1 + 0x54) = fVar61;
    }
    fVar68 = fVar68 / ((float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) -
                      *(float *)(PTR_DAT_02727f60 + 0xc));
    uVar43 = SUB41(fVar68,0);
    if (1.0 < fVar68) {
      uVar43 = 0;
    }
    (**(code **)(PTR_PTR_02718e90 + 0x58))(uVar43);
    FUN_0075e7d0(SUB41((float)CONCAT13(extraout_var_06,
                                       CONCAT12(extraout_var_03,
                                                CONCAT11(extraout_var_00,extraout_b0_00))) *
                       (float)CONCAT13(extraout_var_06,
                                       CONCAT12(extraout_var_03,
                                                CONCAT11(extraout_var_00,extraout_b0_00))),0),
                 param_1 + 0x30,param_1 + 0x40);
    uStack_48 = CONCAT17(extraout_var_31,
                         CONCAT16(extraout_var_29,
                                  CONCAT15(extraout_var_27,
                                           CONCAT14(extraout_var_25,
                                                    CONCAT13(extraout_var_23,
                                                             CONCAT12(extraout_var_21,
                                                                      CONCAT11(extraout_var_19,
                                                                               extraout_var_17))))))
                        );
    local_50 = CONCAT17(extraout_var_15,
                        CONCAT16(extraout_var_13,
                                 CONCAT15(extraout_var_11,
                                          CONCAT14(extraout_var_09,
                                                   CONCAT13(extraout_var_07,
                                                            CONCAT12(extraout_var_04,
                                                                     CONCAT11(extraout_var_01,
                                                                              extraout_b0_01)))))));
    FUN_0131fd90(local_70,param_1,&local_50);
    if (local_70[0] != '\0') {
      FUN_0069c6b0(puVar42,auStack_60);
    }
  }
  return;
}


