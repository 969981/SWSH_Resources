/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de00d0; name: FUN_00de00d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00de00d0(float param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined *puVar25;
  ulong *puVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 uVar32;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 uVar36;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 uVar37;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 uVar38;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar39;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 uVar48;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 auVar33 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined7 local_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  
  puVar25 = PTR_DAT_02710848;
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  fVar58 = (float)*param_2 + (float)param_2[(long)(int)param_3 * 4 + 6];
  uVar32 = SUB41(fVar58,0);
  uVar34 = (undefined1)((uint)fVar58 >> 8);
  uVar35 = (undefined1)((uint)fVar58 >> 0x10);
  uVar36 = (undefined1)((uint)fVar58 >> 0x18);
  fVar62 = (float)((ulong)*param_2 >> 0x20) +
           (float)((ulong)param_2[(long)(int)param_3 * 4 + 6] >> 0x20);
  uVar37 = SUB41(fVar62,0);
  uVar38 = (undefined1)((uint)fVar62 >> 8);
  uVar39 = (undefined1)((uint)fVar62 >> 0x10);
  uVar40 = (undefined1)((uint)fVar62 >> 0x18);
  fVar62 = (float)param_2[1] + (float)param_2[(long)(int)param_3 * 4 + 7];
  uVar41 = SUB41(fVar62,0);
  uVar43 = (undefined1)((uint)fVar62 >> 8);
  uVar45 = (undefined1)((uint)fVar62 >> 0x10);
  uVar47 = (undefined1)((uint)fVar62 >> 0x18);
  fVar64 = (float)((ulong)param_2[1] >> 0x20) +
           (float)((ulong)param_2[(long)(int)param_3 * 4 + 7] >> 0x20);
  uVar50 = SUB41(fVar64,0);
  uVar52 = (undefined1)((uint)fVar64 >> 8);
  uVar54 = (undefined1)((uint)fVar64 >> 0x10);
  uVar56 = (undefined1)((uint)fVar64 >> 0x18);
  if (*(int *)(param_2 + (long)(int)param_3 * 4 + 4) == 2) {
    fVar64 = *(float *)((long)param_2 + (long)(int)param_3 * 0x20 + 0x24) * 0.5 - param_1;
    param_1 = *(float *)(param_2 + (long)(int)param_3 * 4 + 5) * 0.5 - param_1;
    FUN_01029020(SUB41(fVar64 + fVar64,0),*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    fVar64 = (float)CONCAT13(extraout_var_11,
                             CONCAT12(extraout_var_06,CONCAT11(extraout_var_01,extraout_b0_01))) -
             fVar64;
    FUN_01029020(SUB41(param_1 + param_1,0),*(undefined8 *)(*(long *)puVar25 + 0x98));
    param_1 = (float)CONCAT13(extraout_var_12,
                              CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02))) -
              param_1;
    FUN_00a92cd0(SUB41(*(float *)((long)param_2 + (long)(int)param_3 * 0x20 + 0x2c) *
                       (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0),0),0
                 ,0);
    fVar60 = (float)CONCAT13(extraout_var_13,
                             CONCAT12(extraout_var_08,CONCAT11(extraout_var_03,extraout_b0_03))) *
             (float)_DAT_01d4ae80;
    uVar65 = SUB41(fVar60,0);
    uVar66 = (undefined1)((uint)fVar60 >> 8);
    uVar67 = (undefined1)((uint)fVar60 >> 0x10);
    uVar68 = (undefined1)((uint)fVar60 >> 0x18);
    fVar60 = (float)CONCAT13(extraout_var_21,
                             CONCAT12(extraout_var_19,CONCAT11(extraout_var_17,extraout_var_15))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar69 = SUB41(fVar60,0);
    uVar70 = (undefined1)((uint)fVar60 >> 8);
    uVar71 = (undefined1)((uint)fVar60 >> 0x10);
    uVar72 = (undefined1)((uint)fVar60 >> 0x18);
    fVar60 = (float)CONCAT13(extraout_var_29,
                             CONCAT12(extraout_var_27,CONCAT11(extraout_var_25,extraout_var_23))) *
             (float)_UNK_01d4ae88;
    uVar73 = SUB41(fVar60,0);
    uVar74 = (undefined1)((uint)fVar60 >> 8);
    uVar75 = (undefined1)((uint)fVar60 >> 0x10);
    uVar76 = (undefined1)((uint)fVar60 >> 0x18);
    fVar60 = (float)CONCAT13(extraout_var_37,
                             CONCAT12(extraout_var_35,CONCAT11(extraout_var_33,extraout_var_31))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar77 = SUB41(fVar60,0);
    uVar78 = (undefined1)((uint)fVar60 >> 8);
    uVar79 = (undefined1)((uint)fVar60 >> 0x10);
    uVar80 = (undefined1)((uint)fVar60 >> 0x18);
    uVar32 = extraout_b0_03;
    uVar34 = extraout_var_03;
    uVar35 = extraout_var_08;
    uVar36 = extraout_var_13;
    uVar41 = extraout_var_15;
    uVar43 = extraout_var_17;
    uVar45 = extraout_var_19;
    uVar47 = extraout_var_21;
    uVar42 = extraout_var_23;
    uVar44 = extraout_var_25;
    uVar46 = extraout_var_27;
    uVar48 = extraout_var_29;
    uVar49 = extraout_var_31;
    uVar51 = extraout_var_33;
    uVar53 = extraout_var_35;
    uVar55 = extraout_var_37;
  }
  else {
    if (*(int *)(param_2 + (long)(int)param_3 * 4 + 4) != 1) goto LAB_00de039c;
    puVar26 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar28 = *puVar26;
    uVar30 = puVar26[1];
    do {
      uVar31 = uVar28 ^ uVar30;
      iVar29 = (int)uVar30;
      iVar27 = (int)uVar28;
      uVar30 = uVar31 >> 0x1b | uVar31 << 0x25;
      uVar28 = uVar31 ^ (uVar28 >> 0x28 | uVar28 << 0x18) ^ uVar31 << 0x10;
      uVar1 = iVar27 + iVar29 & 0x1ff;
    } while (0x168 < uVar1);
    *puVar26 = uVar28;
    puVar26[1] = uVar30;
    FUN_01029020((char)*(undefined4 *)((long)param_2 + (long)(int)param_3 * 0x20 + 0x24),
                 *(undefined8 *)(*(long *)puVar25 + 0x98));
    param_1 = (float)CONCAT13(extraout_var_09,
                              CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0))) -
              param_1;
    FUN_00a92cd0(SUB41((*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
                       (float)uVar1,0),0,0);
    fVar64 = 0.0;
    fVar60 = (float)CONCAT13(extraout_var_10,
                             CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00))) *
             (float)_DAT_01d4ae80;
    uVar65 = SUB41(fVar60,0);
    uVar66 = (undefined1)((uint)fVar60 >> 8);
    uVar67 = (undefined1)((uint)fVar60 >> 0x10);
    uVar68 = (undefined1)((uint)fVar60 >> 0x18);
    fVar60 = (float)CONCAT13(extraout_var_20,
                             CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar69 = SUB41(fVar60,0);
    uVar70 = (undefined1)((uint)fVar60 >> 8);
    uVar71 = (undefined1)((uint)fVar60 >> 0x10);
    uVar72 = (undefined1)((uint)fVar60 >> 0x18);
    fVar60 = (float)CONCAT13(extraout_var_28,
                             CONCAT12(extraout_var_26,CONCAT11(extraout_var_24,extraout_var_22))) *
             (float)_UNK_01d4ae88;
    uVar73 = SUB41(fVar60,0);
    uVar74 = (undefined1)((uint)fVar60 >> 8);
    uVar75 = (undefined1)((uint)fVar60 >> 0x10);
    uVar76 = (undefined1)((uint)fVar60 >> 0x18);
    fVar60 = (float)CONCAT13(extraout_var_36,
                             CONCAT12(extraout_var_34,CONCAT11(extraout_var_32,extraout_var_30))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar77 = SUB41(fVar60,0);
    uVar78 = (undefined1)((uint)fVar60 >> 8);
    uVar79 = (undefined1)((uint)fVar60 >> 0x10);
    uVar80 = (undefined1)((uint)fVar60 >> 0x18);
    uVar32 = extraout_b0_00;
    uVar34 = extraout_var_00;
    uVar35 = extraout_var_05;
    uVar36 = extraout_var_10;
    uVar41 = extraout_var_14;
    uVar43 = extraout_var_16;
    uVar45 = extraout_var_18;
    uVar47 = extraout_var_20;
    uVar42 = extraout_var_22;
    uVar44 = extraout_var_24;
    uVar46 = extraout_var_26;
    uVar48 = extraout_var_28;
    uVar49 = extraout_var_30;
    uVar51 = extraout_var_32;
    uVar53 = extraout_var_34;
    uVar55 = extraout_var_36;
  }
  _uStack_38 = CONCAT17(uVar56,CONCAT16(uVar54,CONCAT15(uVar52,CONCAT14(uVar50,fVar62))));
  _local_40 = CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,fVar58))));
  auVar19._4_4_ = 0;
  auVar19._0_4_ = fVar64;
  auVar19._8_4_ = param_1;
  auVar19._12_4_ = 0;
  uVar84 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50f8);
  auVar11[1] = uVar66;
  auVar11[0] = uVar65;
  auVar11[2] = uVar67;
  auVar11[3] = uVar68;
  auVar11[4] = uVar69;
  auVar11[5] = uVar70;
  auVar11[6] = uVar71;
  auVar11[7] = uVar72;
  auVar11[8] = uVar73;
  auVar11[9] = uVar74;
  auVar11[10] = uVar75;
  auVar11[0xb] = uVar76;
  auVar11[0xc] = uVar77;
  auVar11[0xd] = uVar78;
  auVar11[0xe] = uVar79;
  auVar11[0xf] = uVar80;
  uVar85 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
  auVar12[1] = uVar66;
  auVar12[0] = uVar65;
  auVar12[2] = uVar67;
  auVar12[3] = uVar68;
  auVar12[4] = uVar69;
  auVar12[5] = uVar70;
  auVar12[6] = uVar71;
  auVar12[7] = uVar72;
  auVar12[8] = uVar73;
  auVar12[9] = uVar74;
  auVar12[10] = uVar75;
  auVar12[0xb] = uVar76;
  auVar12[0xc] = uVar77;
  auVar12[0xd] = uVar78;
  auVar12[0xe] = uVar79;
  auVar12[0xf] = uVar80;
  uVar86 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5120);
  auVar20._4_4_ = 0;
  auVar20._0_4_ = fVar64;
  auVar20._8_4_ = param_1;
  auVar20._12_4_ = 0;
  uVar10 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
  fVar60 = (float)((ulong)uVar10 >> 0x20);
  fVar63 = (float)((ulong)uVar84 >> 0x20);
  auVar21._4_4_ = 0;
  auVar21._0_4_ = fVar64;
  auVar21._8_4_ = param_1;
  auVar21._12_4_ = 0;
  uVar22 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
  fVar81 = (float)((ulong)uVar22 >> 0x20);
  auVar13[1] = uVar66;
  auVar13[0] = uVar65;
  auVar13[2] = uVar67;
  auVar13[3] = uVar68;
  auVar13[4] = uVar69;
  auVar13[5] = uVar70;
  auVar13[6] = uVar71;
  auVar13[7] = uVar72;
  auVar13[8] = uVar73;
  auVar13[9] = uVar74;
  auVar13[10] = uVar75;
  auVar13[0xb] = uVar76;
  auVar13[0xc] = uVar77;
  auVar13[0xd] = uVar78;
  auVar13[0xe] = uVar79;
  auVar13[0xf] = uVar80;
  uVar88 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
  auVar14[1] = uVar66;
  auVar14[0] = uVar65;
  auVar14[2] = uVar67;
  auVar14[3] = uVar68;
  auVar14[4] = uVar69;
  auVar14[5] = uVar70;
  auVar14[6] = uVar71;
  auVar14[7] = uVar72;
  auVar14[8] = uVar73;
  auVar14[9] = uVar74;
  auVar14[10] = uVar75;
  auVar14[0xb] = uVar76;
  auVar14[0xc] = uVar77;
  auVar14[0xd] = uVar78;
  auVar14[0xe] = uVar79;
  auVar14[0xf] = uVar80;
  uVar89 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
  auVar15[1] = uVar66;
  auVar15[0] = uVar65;
  auVar15[2] = uVar67;
  auVar15[3] = uVar68;
  auVar15[4] = uVar69;
  auVar15[5] = uVar70;
  auVar15[6] = uVar71;
  auVar15[7] = uVar72;
  auVar15[8] = uVar73;
  auVar15[9] = uVar74;
  auVar15[10] = uVar75;
  auVar15[0xb] = uVar76;
  auVar15[0xc] = uVar77;
  auVar15[0xd] = uVar78;
  auVar15[0xe] = uVar79;
  auVar15[0xf] = uVar80;
  uVar87 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
  fVar90 = (float)_DAT_01d4ae90;
  fVar91 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar92 = (float)_UNK_01d4ae98;
  fVar93 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar16[1] = uVar66;
  auVar16[0] = uVar65;
  auVar16[2] = uVar67;
  auVar16[3] = uVar68;
  auVar16[4] = uVar69;
  auVar16[5] = uVar70;
  auVar16[6] = uVar71;
  auVar16[7] = uVar72;
  auVar16[8] = uVar65;
  auVar16[9] = uVar66;
  auVar16[10] = uVar67;
  auVar16[0xb] = uVar68;
  auVar16[0xc] = uVar69;
  auVar16[0xd] = uVar70;
  auVar16[0xe] = uVar71;
  auVar16[0xf] = uVar72;
  uVar17 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50b0);
  auVar2[1] = uVar34;
  auVar2[0] = uVar32;
  auVar2[2] = uVar35;
  auVar2[3] = uVar36;
  auVar2[4] = uVar41;
  auVar2[5] = uVar43;
  auVar2[6] = uVar45;
  auVar2[7] = uVar47;
  auVar2[8] = uVar42;
  auVar2[9] = uVar44;
  auVar2[10] = uVar46;
  auVar2[0xb] = uVar48;
  auVar2[0xc] = uVar49;
  auVar2[0xd] = uVar51;
  auVar2[0xe] = uVar53;
  auVar2[0xf] = uVar55;
  uVar23 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
  fVar82 = (float)((ulong)uVar23 >> 0x20);
  auVar3[1] = uVar34;
  auVar3[0] = uVar32;
  auVar3[2] = uVar35;
  auVar3[3] = uVar36;
  auVar3[4] = uVar41;
  auVar3[5] = uVar43;
  auVar3[6] = uVar45;
  auVar3[7] = uVar47;
  auVar3[8] = uVar42;
  auVar3[9] = uVar44;
  auVar3[10] = uVar46;
  auVar3[0xb] = uVar48;
  auVar3[0xc] = uVar49;
  auVar3[0xd] = uVar51;
  auVar3[0xe] = uVar53;
  auVar3[0xf] = uVar55;
  uVar18 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
  fVar57 = ((float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) * (float)uVar10 +
            fVar90 * fVar64 * (float)uVar85 + fVar90 * (float)uVar22 * (float)uVar88) -
           (float)uVar84 * (float)uVar89;
  fVar59 = ((float)CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) * fVar60 +
            fVar91 * (float)((ulong)uVar85 >> 0x20) * 0.0 +
           fVar91 * fVar81 * (float)((ulong)uVar88 >> 0x20)) -
           fVar63 * (float)((ulong)uVar89 >> 0x20);
  fVar61 = ((float)CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) * (float)uVar10 +
            fVar92 * (float)uVar84 * (float)uVar86 + fVar92 * fVar64 * (float)uVar17) -
           (float)uVar22 * (float)uVar87;
  fVar63 = ((float)CONCAT13(uVar80,CONCAT12(uVar79,CONCAT11(uVar78,uVar77))) * fVar60 +
            fVar93 * fVar63 * (float)((ulong)uVar86 >> 0x20) +
           fVar93 * (float)((ulong)uVar17 >> 0x20) * 0.0) - fVar81 * (float)((ulong)uVar87 >> 0x20);
  fVar60 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar32)));
  auVar5._4_4_ = fVar59;
  auVar5._0_4_ = fVar57;
  auVar5._8_4_ = fVar61;
  auVar5._12_4_ = fVar63;
  uVar85 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
  auVar6._4_4_ = fVar59;
  auVar6._0_4_ = fVar57;
  auVar6._8_4_ = fVar61;
  auVar6._12_4_ = fVar63;
  uVar87 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5120);
  fVar81 = (float)((ulong)uVar18 >> 0x20);
  auVar4[1] = uVar34;
  auVar4[0] = uVar32;
  auVar4[2] = uVar35;
  auVar4[3] = uVar36;
  auVar4[4] = uVar41;
  auVar4[5] = uVar43;
  auVar4[6] = uVar45;
  auVar4[7] = uVar47;
  auVar4[8] = uVar42;
  auVar4[9] = uVar44;
  auVar4[10] = uVar46;
  auVar4[0xb] = uVar48;
  auVar4[0xc] = uVar49;
  auVar4[0xd] = uVar51;
  auVar4[0xe] = uVar53;
  auVar4[0xf] = uVar55;
  uVar86 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
  fVar83 = (float)((ulong)uVar86 >> 0x20);
  fVar64 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar32)));
  auVar7._4_4_ = fVar59;
  auVar7._0_4_ = fVar57;
  auVar7._8_4_ = fVar61;
  auVar7._12_4_ = fVar63;
  uVar10 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
  auVar24._4_4_ = fVar59;
  auVar24._0_4_ = fVar57;
  auVar24._12_4_ = fVar59;
  auVar24._8_4_ = fVar57;
  uVar84 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50b0);
  auVar8._4_4_ = fVar59;
  auVar8._0_4_ = fVar57;
  auVar8._8_4_ = fVar61;
  auVar8._12_4_ = fVar63;
  uVar17 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
  auVar9._4_4_ = fVar59;
  auVar9._0_4_ = fVar57;
  auVar9._8_4_ = fVar61;
  auVar9._12_4_ = fVar63;
  uVar22 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5270);
  fVar57 = ((float)uVar18 * fVar57 + fVar90 * fVar60 * (float)uVar85 +
           fVar90 * (float)uVar86 * (float)uVar10) - (float)uVar23 * (float)uVar17;
  fVar60 = (fVar81 * fVar59 +
            fVar91 * (float)(CONCAT17(uVar47,CONCAT16(uVar45,CONCAT15(uVar43,CONCAT14(uVar41,fVar60)
                                                                     ))) >> 0x20) *
                     (float)((ulong)uVar85 >> 0x20) +
           fVar91 * fVar83 * (float)((ulong)uVar10 >> 0x20)) -
           fVar82 * (float)((ulong)uVar17 >> 0x20);
  fVar59 = ((float)uVar18 * fVar61 + fVar92 * (float)uVar23 * (float)uVar87 +
           fVar92 * fVar64 * (float)uVar84) - (float)uVar86 * (float)uVar22;
  fVar64 = (fVar81 * fVar63 + fVar93 * fVar82 * (float)((ulong)uVar87 >> 0x20) +
           fVar93 * (float)(CONCAT17(uVar47,CONCAT16(uVar45,CONCAT15(uVar43,CONCAT14(uVar41,fVar64))
                                                    )) >> 0x20) * (float)((ulong)uVar84 >> 0x20)) -
           fVar83 * (float)((ulong)uVar22 >> 0x20);
  fVar58 = fVar58 + (float)CONCAT13((byte)((uint)fVar57 >> 0x18) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                    CONCAT12((byte)((uint)fVar57 >> 0x10) &
                                             (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                             CONCAT11((byte)((uint)fVar57 >> 8) &
                                                      (byte)((ulong)DAT_01d4ab50 >> 8),
                                                      SUB41(fVar57,0) & (byte)DAT_01d4ab50)));
  fVar60 = (float)((ulong)_local_40 >> 0x20) +
           (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                           CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                    CONCAT11((byte)((uint)fVar60 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                             SUB41(fVar60,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20)))
                          );
  fVar62 = fVar62 + (float)CONCAT13((byte)((uint)fVar59 >> 0x18) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                    CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                             (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                             CONCAT11((byte)((uint)fVar59 >> 8) &
                                                      (byte)((ulong)DAT_01d4ab58 >> 8),
                                                      SUB41(fVar59,0) & (byte)DAT_01d4ab58)));
  fVar64 = (float)((ulong)_uStack_38 >> 0x20) +
           (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                           CONCAT12((byte)((uint)fVar64 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                    CONCAT11((byte)((uint)fVar64 >> 8) &
                                             (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                             SUB41(fVar64,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20)))
                          );
  uVar41 = SUB41(fVar62,0);
  uVar43 = (undefined1)((uint)fVar62 >> 8);
  uVar45 = (undefined1)((uint)fVar62 >> 0x10);
  uVar47 = (undefined1)((uint)fVar62 >> 0x18);
  uVar50 = SUB41(fVar64,0);
  uVar52 = (undefined1)((uint)fVar64 >> 8);
  uVar54 = (undefined1)((uint)fVar64 >> 0x10);
  uVar56 = (undefined1)((uint)fVar64 >> 0x18);
  uVar32 = SUB41(fVar58,0);
  uVar34 = (undefined1)((uint)fVar58 >> 8);
  uVar35 = (undefined1)((uint)fVar58 >> 0x10);
  uVar36 = (undefined1)((uint)fVar58 >> 0x18);
  uVar37 = SUB41(fVar60,0);
  uVar38 = (undefined1)((uint)fVar60 >> 8);
  uVar39 = (undefined1)((uint)fVar60 >> 0x10);
  uVar40 = (undefined1)((uint)fVar60 >> 0x18);
LAB_00de039c:
  auVar33[1] = uVar34;
  auVar33[0] = uVar32;
  auVar33[2] = uVar35;
  auVar33[3] = uVar36;
  auVar33[4] = uVar37;
  auVar33[5] = uVar38;
  auVar33[6] = uVar39;
  auVar33[7] = uVar40;
  auVar33[8] = uVar41;
  auVar33[9] = uVar43;
  auVar33[10] = uVar45;
  auVar33[0xb] = uVar47;
  auVar33[0xc] = uVar50;
  auVar33[0xd] = uVar52;
  auVar33[0xe] = uVar54;
  auVar33[0xf] = uVar56;
  return auVar33;
}


