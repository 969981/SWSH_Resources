/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad5e70; name: FUN_00ad5e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad5e70(long *param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long lVar33;
  ulong uVar34;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  byte bVar35;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  byte bVar36;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  byte bVar37;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  byte bVar38;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  byte bVar39;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  byte bVar40;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  byte bVar41;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  byte bVar42;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  byte bVar43;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  byte bVar44;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  byte bVar45;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  byte bVar46;
  undefined1 extraout_var_21;
  byte bVar47;
  undefined1 extraout_var_22;
  byte bVar48;
  undefined1 extraout_var_23;
  byte bVar49;
  undefined1 extraout_var_24;
  byte bVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar64;
  float fVar65;
  undefined1 in_q3 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  float fVar92;
  float fVar93;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  undefined1 auStack_48 [8];
  
  uVar19 = _DAT_01d49df0;
  lStack_58 = param_1[0x17];
  local_60 = param_1[0x16];
  uStack_88 = (undefined4)_UNK_01d49df8;
  uStack_84 = (undefined4)((ulong)_UNK_01d49df8 >> 0x20);
  uStack_68 = _UNK_01d49df8;
  local_70 = _DAT_01d49df0;
  uStack_78 = _UNK_01d4b588;
  local_80 = _DAT_01d4b580;
  lVar33 = (**(code **)(*param_1 + 0x208))(param_1,param_3);
  if (lVar33 == 0) {
    fVar80 = *(float *)PTR_FloatDegree180_027194f0;
  }
  else {
    lVar2 = *(long *)(lVar33 + 0x120);
    iVar3 = *(int *)(*(long *)(lVar33 + 0x128) + 0x40);
    FUN_00723030(lVar2,iVar3);
    FUN_00ac6d40((char)*(undefined8 *)(*(long *)(lVar2 + 0x1b8) + (long)iVar3 * 0x130 + 0xd0),
                 param_1);
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    fVar80 = *(float *)PTR_FloatDegree180_027194f0;
    uVar34 = (ulong)-(DAT_02a55e34 * (fVar4 / fVar80));
    pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar34 >> 0x18 & 0xff) * 0x10);
    fVar4 = (float)((uint)uVar34 & 0xffffff) * DAT_01d4bc78;
    fVar92 = pfVar1[1] + pfVar1[3] * fVar4;
    fVar4 = *pfVar1 + pfVar1[2] * fVar4;
    fVar81 = (float)((ulong)_DAT_02a55e20 >> 0x20) + in_q3._4_4_;
    fVar82 = (float)((ulong)uRam0000000002a55e28 >> 0x20) + 0.0;
    lStack_58 = CONCAT17((char)((uint)fVar82 >> 0x18),
                         CONCAT16((char)((uint)fVar82 >> 0x10),
                                  CONCAT15((char)((uint)fVar82 >> 8),
                                           CONCAT14(SUB41(fVar82,0),
                                                    (float)uRam0000000002a55e28 +
                                                    fVar92 * in_q3._0_4_ + fVar4 * in_q3._8_4_))));
    local_60 = CONCAT17((char)((uint)fVar81 >> 0x18),
                        CONCAT16((char)((uint)fVar81 >> 0x10),
                                 CONCAT15((char)((uint)fVar81 >> 8),
                                          CONCAT14(SUB41(fVar81,0),
                                                   (float)_DAT_02a55e20 +
                                                   (fVar4 * in_q3._0_4_ - fVar92 * in_q3._8_4_)))));
  }
  FUN_00ac7640(param_1);
  fVar80 = *(float *)PTR_FloatPi_02715160 / fVar80;
  FUN_00a92cd0(SUB41(fVar80 * (DAT_02a55e34 +
                              (float)CONCAT13(extraout_var_11,
                                              CONCAT12(extraout_var_09,
                                                       CONCAT11(extraout_var_07,extraout_var_05)))),
                     0),SUB41(fVar80 * (_DAT_02a55e30 +
                                       (float)CONCAT13(extraout_var_03,
                                                       CONCAT12(extraout_var_01,
                                                                CONCAT11(extraout_var,extraout_b0)))
                                       ),0),
               SUB41(fVar80 * ((float)uRam0000000002a55e38 +
                              (float)CONCAT13(extraout_var_19,
                                              CONCAT12(extraout_var_17,
                                                       CONCAT11(extraout_var_15,extraout_var_13)))),
                     0));
  auVar29._8_4_ = uStack_88;
  auVar29._0_8_ = uVar19;
  auVar28._8_4_ = uStack_88;
  auVar28._0_8_ = uVar19;
  auVar27._8_4_ = uStack_88;
  auVar27._0_8_ = uVar19;
  auVar27._12_4_ = uStack_84;
  uVar19 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd4f90);
  fVar92 = (float)((ulong)uVar19 >> 0x20);
  auVar28._12_4_ = uStack_84;
  uVar87 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd50f8);
  fVar81 = (float)CONCAT13(extraout_var_04,
                           CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
           (float)_DAT_01d4ae80;
  fVar82 = (float)CONCAT13(extraout_var_12,
                           CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06))) *
           (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar83 = (float)CONCAT13(extraout_var_20,
                           CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14))) *
           (float)_UNK_01d4ae88;
  fVar84 = (float)CONCAT13(extraout_var_24,
                           CONCAT12(extraout_var_23,CONCAT11(extraout_var_22,extraout_var_21))) *
           (float)((ulong)_UNK_01d4ae88 >> 0x20);
  auVar29._12_4_ = uStack_84;
  uVar61 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5418);
  fVar64 = (float)((ulong)uVar61 >> 0x20);
  auVar22._4_4_ = fVar82;
  auVar22._0_4_ = fVar81;
  auVar22._8_4_ = fVar83;
  auVar22._12_4_ = fVar84;
  uVar90 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd4f90);
  auVar23._4_4_ = fVar82;
  auVar23._0_4_ = fVar81;
  auVar23._8_4_ = fVar83;
  auVar23._12_4_ = fVar84;
  uVar91 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5120);
  auVar24._4_4_ = fVar82;
  auVar24._0_4_ = fVar81;
  auVar24._8_4_ = fVar83;
  auVar24._12_4_ = fVar84;
  uVar67 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
  auVar25._4_4_ = fVar82;
  auVar25._0_4_ = fVar81;
  auVar25._8_4_ = fVar83;
  auVar25._12_4_ = fVar84;
  uVar60 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5418);
  auVar26._4_4_ = fVar82;
  auVar26._0_4_ = fVar81;
  auVar26._8_4_ = fVar83;
  auVar26._12_4_ = fVar84;
  uVar85 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5270);
  auVar18._4_4_ = fVar82;
  auVar18._0_4_ = fVar81;
  auVar18._8_4_ = fVar81;
  auVar18._12_4_ = fVar82;
  uVar20 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
  auVar62[1] = extraout_var_00;
  auVar62[0] = extraout_b0_00;
  auVar62[2] = extraout_var_02;
  auVar62[3] = extraout_var_04;
  auVar62[4] = extraout_var_06;
  auVar62[5] = extraout_var_08;
  auVar62[6] = extraout_var_10;
  auVar62[7] = extraout_var_12;
  auVar62[8] = extraout_var_14;
  auVar62[9] = extraout_var_16;
  auVar62[10] = extraout_var_18;
  auVar62[0xb] = extraout_var_20;
  auVar62[0xc] = extraout_var_21;
  auVar62[0xd] = extraout_var_22;
  auVar62[0xe] = extraout_var_23;
  auVar62[0xf] = extraout_var_24;
  uVar30 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd50f8);
  fVar88 = (float)((ulong)uVar30 >> 0x20);
  auVar68[1] = extraout_var_00;
  auVar68[0] = extraout_b0_00;
  auVar68[2] = extraout_var_02;
  auVar68[3] = extraout_var_04;
  auVar68[4] = extraout_var_06;
  auVar68[5] = extraout_var_08;
  auVar68[6] = extraout_var_10;
  auVar68[7] = extraout_var_12;
  auVar68[8] = extraout_var_14;
  auVar68[9] = extraout_var_16;
  auVar68[10] = extraout_var_18;
  auVar68[0xb] = extraout_var_20;
  auVar68[0xc] = extraout_var_21;
  auVar68[0xd] = extraout_var_22;
  auVar68[0xe] = extraout_var_23;
  auVar68[0xf] = extraout_var_24;
  uVar86 = a64_TBL(ZEXT816(0),auVar68,DAT_01cd5418);
  fVar78 = (float)_UNK_01d4ae98;
  fVar79 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar76 = (float)_DAT_01d4ae90;
  fVar77 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar65 = (float)((ulong)uVar87 >> 0x20);
  fVar4 = (float)CONCAT13(extraout_var_04,
                          CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
  fVar89 = (float)((ulong)uVar86 >> 0x20);
  fVar80 = (float)CONCAT13(extraout_var_04,
                           CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
  fVar81 = (fVar81 * (float)uVar19 + fVar76 * (float)uVar90 * 0.0 +
           fVar76 * (float)uVar61 * (float)uVar67) - (float)uVar87 * (float)uVar60;
  fVar82 = (fVar82 * fVar92 + fVar77 * (float)((ulong)uVar90 >> 0x20) * 0.0 +
           fVar77 * fVar64 * (float)((ulong)uVar67 >> 0x20)) -
           fVar65 * (float)((ulong)uVar60 >> 0x20);
  auVar73._0_8_ = CONCAT44(fVar82,fVar81);
  auVar73._8_4_ =
       (fVar83 * (float)uVar19 + fVar78 * (float)uVar87 * (float)uVar91 +
       fVar78 * (float)uVar20 * 0.0) - (float)uVar61 * (float)uVar85;
  auVar73._12_4_ =
       (fVar84 * fVar92 + fVar79 * fVar65 * (float)((ulong)uVar91 >> 0x20) +
       fVar79 * (float)((ulong)uVar20 >> 0x20) * 0.0) - fVar64 * (float)((ulong)uVar85 >> 0x20);
  fVar84 = (float)local_80;
  fVar92 = fVar84 * fVar84;
  fVar64 = (float)((ulong)local_80 >> 0x20);
  fVar83 = fVar64 * fVar64;
  fVar65 = (float)uStack_78;
  fVar66 = (float)((ulong)uStack_78 >> 0x20);
  auVar71[1] = extraout_var_00;
  auVar71[0] = extraout_b0_00;
  auVar71[2] = extraout_var_02;
  auVar71[3] = extraout_var_04;
  auVar71[4] = extraout_var_06;
  auVar71[5] = extraout_var_08;
  auVar71[6] = extraout_var_10;
  auVar71[7] = extraout_var_12;
  auVar71[8] = extraout_var_14;
  auVar71[9] = extraout_var_16;
  auVar71[10] = extraout_var_18;
  auVar71[0xb] = extraout_var_20;
  auVar71[0xc] = extraout_var_21;
  auVar71[0xd] = extraout_var_22;
  auVar71[0xe] = extraout_var_23;
  auVar71[0xf] = extraout_var_24;
  uVar87 = a64_TBL(ZEXT816(0),auVar71,DAT_01cd4f90);
  uVar19 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd4f90);
  uVar60 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5120);
  uVar20 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd50f8);
  uVar67 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5418);
  auVar21._8_4_ = fVar81;
  auVar21._0_8_ = auVar73._0_8_;
  auVar21._12_4_ = fVar82;
  uVar61 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50b0);
  fVar93 = (float)((ulong)uVar87 >> 0x20);
  uVar85 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5270);
  auVar31._4_4_ = fVar83;
  auVar31._0_4_ = fVar92;
  auVar31._8_4_ = fVar65 * fVar65;
  auVar31._12_4_ = fVar66 * fVar66;
  auVar32._4_4_ = fVar83;
  auVar32._0_4_ = fVar92;
  auVar32._8_4_ = fVar65 * fVar65;
  auVar32._12_4_ = fVar66 * fVar66;
  auVar62 = NEON_ext(auVar31,auVar32,8,1);
  fVar92 = auVar62._0_4_ + fVar92;
  fVar83 = auVar62._4_4_ + fVar83;
  fVar81 = ((float)uVar87 * fVar81 + fVar76 * fVar4 * (float)uVar19 +
           fVar76 * (float)uVar86 * (float)uVar20) - (float)uVar30 * (float)uVar67;
  fVar4 = (fVar93 * fVar82 +
           fVar77 * (float)(CONCAT17(extraout_var_12,
                                     CONCAT16(extraout_var_10,
                                              CONCAT15(extraout_var_08,
                                                       CONCAT14(extraout_var_06,fVar4)))) >> 0x20) *
                    (float)((ulong)uVar19 >> 0x20) +
          fVar77 * fVar89 * (float)((ulong)uVar20 >> 0x20)) -
          fVar88 * (float)((ulong)uVar67 >> 0x20);
  fVar82 = ((float)uVar87 * auVar73._8_4_ + fVar78 * (float)uVar30 * (float)uVar60 +
           fVar78 * fVar80 * (float)uVar61) - (float)uVar86 * (float)uVar85;
  fVar80 = (fVar93 * auVar73._12_4_ + fVar79 * fVar88 * (float)((ulong)uVar60 >> 0x20) +
           fVar79 * (float)(CONCAT17(extraout_var_12,
                                     CONCAT16(extraout_var_10,
                                              CONCAT15(extraout_var_08,
                                                       CONCAT14(extraout_var_06,fVar80)))) >> 0x20)
                    * (float)((ulong)uVar61 >> 0x20)) - fVar89 * (float)((ulong)uVar85 >> 0x20);
  bVar35 = SUB41(fVar81,0) & (byte)DAT_01d4ab50;
  bVar36 = (byte)((uint)fVar81 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar37 = (byte)((uint)fVar81 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar38 = (byte)((uint)fVar81 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar39 = SUB41(fVar4,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar40 = (byte)((uint)fVar4 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar41 = (byte)((uint)fVar4 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar42 = (byte)((uint)fVar4 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
  bVar43 = SUB41(fVar82,0) & (byte)DAT_01d4ab58;
  bVar44 = (byte)((uint)fVar82 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar45 = (byte)((uint)fVar82 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar46 = (byte)((uint)fVar82 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar47 = SUB41(fVar80,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar48 = (byte)((uint)fVar80 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar49 = (byte)((uint)fVar80 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar50 = (byte)((uint)fVar80 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  fVar80 = (float)CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar35))) *
           (float)CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar35)));
  fVar4 = (float)CONCAT13(bVar42,CONCAT12(bVar41,CONCAT11(bVar40,bVar39))) *
          (float)CONCAT13(bVar42,CONCAT12(bVar41,CONCAT11(bVar40,bVar39)));
  uVar51 = (undefined1)((uint)fVar4 >> 8);
  uVar52 = (undefined1)((uint)fVar4 >> 0x10);
  uVar53 = (undefined1)((uint)fVar4 >> 0x18);
  fVar81 = (float)CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43))) *
           (float)CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)));
  uVar54 = (undefined1)((uint)fVar81 >> 8);
  uVar55 = (undefined1)((uint)fVar81 >> 0x10);
  uVar56 = (undefined1)((uint)fVar81 >> 0x18);
  fVar82 = (float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47))) *
           (float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47)));
  uVar57 = (undefined1)((uint)fVar82 >> 8);
  uVar58 = (undefined1)((uint)fVar82 >> 0x10);
  uVar59 = (undefined1)((uint)fVar82 >> 0x18);
  auVar5[4] = SUB41(fVar4,0);
  auVar5._0_4_ = fVar80;
  auVar5[5] = uVar51;
  auVar5[6] = uVar52;
  auVar5[7] = uVar53;
  auVar5[8] = SUB41(fVar81,0);
  auVar5[9] = uVar54;
  auVar5[10] = uVar55;
  auVar5[0xb] = uVar56;
  auVar5[0xc] = SUB41(fVar82,0);
  auVar5[0xd] = uVar57;
  auVar5[0xe] = uVar58;
  auVar5[0xf] = uVar59;
  auVar6[4] = SUB41(fVar4,0);
  auVar6._0_4_ = fVar80;
  auVar6[5] = uVar51;
  auVar6[6] = uVar52;
  auVar6[7] = uVar53;
  auVar6[8] = SUB41(fVar81,0);
  auVar6[9] = uVar54;
  auVar6[10] = uVar55;
  auVar6[0xb] = uVar56;
  auVar6[0xc] = SUB41(fVar82,0);
  auVar6[0xd] = uVar57;
  auVar6[0xe] = uVar58;
  auVar6[0xf] = uVar59;
  auVar62 = NEON_ext(auVar5,auVar6,8,1);
  fVar80 = auVar62._0_4_ + fVar80;
  fVar4 = auVar62._4_4_ + fVar4;
  fVar81 = fVar92 + fVar83;
  fVar92 = fVar92 + fVar83;
  uVar55 = SUB41(fVar92,0);
  uVar56 = (undefined1)((uint)fVar92 >> 8);
  uVar57 = (undefined1)((uint)fVar92 >> 0x10);
  uVar58 = (undefined1)((uint)fVar92 >> 0x18);
  fVar82 = fVar80 + fVar4;
  fVar80 = fVar80 + fVar4;
  uVar51 = SUB41(fVar80,0);
  uVar52 = (undefined1)((uint)fVar80 >> 8);
  uVar53 = (undefined1)((uint)fVar80 >> 0x10);
  uVar54 = (undefined1)((uint)fVar80 >> 0x18);
  auVar12[4] = uVar55;
  auVar12._0_4_ = fVar81;
  auVar12[5] = uVar56;
  auVar12[6] = uVar57;
  auVar12[7] = uVar58;
  auVar12[8] = SUB41(fVar81,0);
  auVar12[9] = (char)((uint)fVar81 >> 8);
  auVar12[10] = (char)((uint)fVar81 >> 0x10);
  auVar12[0xb] = (char)((uint)fVar81 >> 0x18);
  auVar12[0xc] = uVar55;
  auVar12[0xd] = uVar56;
  auVar12[0xe] = uVar57;
  auVar12[0xf] = uVar58;
  auVar62 = NEON_frsqrte(auVar12,4);
  auVar70._0_4_ = auVar62._0_4_ * fVar81;
  auVar70._4_4_ = auVar62._4_4_ * fVar92;
  auVar70._8_4_ = auVar62._8_4_ * fVar81;
  uVar13 = (undefined2)(CONCAT15(uVar56,CONCAT14(uVar55,fVar81)) >> 0x20);
  auVar70._12_4_ = auVar62._12_4_ * (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar13));
  auVar7[4] = uVar51;
  auVar7._0_4_ = fVar82;
  auVar7[5] = uVar52;
  auVar7[6] = uVar53;
  auVar7[7] = uVar54;
  auVar7[8] = SUB41(fVar82,0);
  auVar7[9] = (char)((uint)fVar82 >> 8);
  auVar7[10] = (char)((uint)fVar82 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar82 >> 0x18);
  auVar7[0xc] = uVar51;
  auVar7[0xd] = uVar52;
  auVar7[0xe] = uVar53;
  auVar7[0xf] = uVar54;
  auVar68 = NEON_frsqrte(auVar7,4);
  auVar71 = NEON_frsqrts(auVar62,auVar70,4);
  auVar63._0_4_ = auVar62._0_4_ * auVar71._0_4_;
  auVar63._4_4_ = auVar62._4_4_ * auVar71._4_4_;
  auVar63._8_4_ = auVar62._8_4_ * auVar71._8_4_;
  auVar63._12_4_ = auVar62._12_4_ * auVar71._12_4_;
  auVar74._0_4_ = auVar68._0_4_ * fVar82;
  auVar74._4_4_ = auVar68._4_4_ * fVar80;
  auVar74._8_4_ = auVar68._8_4_ * fVar82;
  uVar8 = (undefined2)(CONCAT15(uVar52,CONCAT14(uVar51,fVar82)) >> 0x20);
  auVar74._12_4_ = auVar68._12_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar8));
  auVar72._0_4_ = fVar81 * auVar63._0_4_;
  auVar72._4_4_ = fVar92 * auVar63._4_4_;
  auVar72._8_4_ = fVar81 * auVar63._8_4_;
  auVar72._12_4_ = (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar13)) * auVar63._12_4_;
  iVar14 = -(uint)(fVar81 == 0.0);
  iVar15 = -(uint)(fVar92 == 0.0);
  iVar16 = -(uint)(fVar81 == 0.0);
  iVar17 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,uVar13)) == 0.0);
  auVar71 = NEON_frsqrts(auVar68,auVar74,4);
  auVar62 = NEON_frsqrts(auVar63,auVar72,4);
  auVar69._0_4_ = auVar68._0_4_ * auVar71._0_4_;
  auVar69._4_4_ = auVar68._4_4_ * auVar71._4_4_;
  auVar69._8_4_ = auVar68._8_4_ * auVar71._8_4_;
  auVar69._12_4_ = auVar68._12_4_ * auVar71._12_4_;
  auVar75._0_4_ = fVar82 * auVar69._0_4_;
  auVar75._4_4_ = fVar80 * auVar69._4_4_;
  auVar75._8_4_ = fVar82 * auVar69._8_4_;
  auVar75._12_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar8)) * auVar69._12_4_;
  iVar3 = -(uint)(fVar82 == 0.0);
  iVar9 = -(uint)(fVar80 == 0.0);
  iVar10 = -(uint)(fVar82 == 0.0);
  iVar11 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,uVar8)) == 0.0);
  auVar68 = NEON_frsqrts(auVar69,auVar75,4);
  fVar84 = fVar84 * auVar63._0_4_ * auVar62._0_4_;
  fVar64 = fVar64 * auVar63._4_4_ * auVar62._4_4_;
  fVar65 = fVar65 * auVar63._8_4_ * auVar62._8_4_;
  fVar66 = fVar66 * auVar63._12_4_ * auVar62._12_4_;
  fVar80 = auVar69._0_4_ * auVar68._0_4_ *
           (float)CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar35)));
  fVar4 = auVar69._4_4_ * auVar68._4_4_ *
          (float)CONCAT13(bVar42,CONCAT12(bVar41,CONCAT11(bVar40,bVar39)));
  fVar81 = auVar69._8_4_ * auVar68._8_4_ *
           (float)CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)));
  fVar82 = auVar69._12_4_ * auVar68._12_4_ *
           (float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47)));
  uStack_78 = CONCAT17((byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                       CONCAT16((byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                CONCAT15((byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                         CONCAT14(SUB41(fVar66,0) & ~(byte)iVar17,
                                                  CONCAT13((byte)((uint)fVar65 >> 0x18) &
                                                           ~(byte)((uint)iVar16 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar65 >> 0x10) &
                                                                    ~(byte)((uint)iVar16 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar65 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar16 >>
                                                                                    8),
                                                                             SUB41(fVar65,0) &
                                                                             ~(byte)iVar16)))))));
  local_80 = CONCAT17((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                      CONCAT16((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                               CONCAT15((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                        CONCAT14(SUB41(fVar64,0) & ~(byte)iVar15,
                                                 CONCAT13((byte)((uint)fVar84 >> 0x18) &
                                                          ~(byte)((uint)iVar14 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar84 >> 0x10) &
                                                                   ~(byte)((uint)iVar14 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar84 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar14 >> 8),SUB41(fVar84,0) & ~(byte)iVar14))))))
                     );
  uStack_68 = CONCAT17((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                       CONCAT16((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                CONCAT15((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                         CONCAT14(SUB41(fVar82,0) & ~(byte)iVar11,
                                                  CONCAT13((byte)((uint)fVar81 >> 0x18) &
                                                           ~(byte)((uint)iVar10 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                                                    ~(byte)((uint)iVar10 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar81 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar10 >>
                                                                                    8),
                                                                             SUB41(fVar81,0) &
                                                                             ~(byte)iVar10)))))));
  local_70 = CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                      CONCAT16((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                               CONCAT15((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                        CONCAT14(SUB41(fVar4,0) & ~(byte)iVar9,
                                                 CONCAT13((byte)((uint)fVar80 >> 0x18) &
                                                          ~(byte)((uint)iVar3 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar80 >> 0x10) &
                                                                   ~(byte)((uint)iVar3 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar80 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar3 >> 8),SUB41(fVar80,0) & ~(byte)iVar3)))))));
  lVar33 = FUN_00ad9f80(param_1,auStack_48);
  if ((lVar33 != 0) && (lVar33 = *(long *)(lVar33 + 0xc0), lVar33 != 0)) {
    FUN_00895e30(*(undefined8 *)(lVar33 + 0x78),&local_60,&local_70,&local_80);
    FUN_00895fd0(*(undefined8 *)(lVar33 + 0x78),param_2);
  }
  lVar33 = FUN_00aaf0a0(param_1,auStack_48);
  if ((lVar33 != 0) && (lVar33 = FUN_00c55f00(lVar33,param_3), lVar33 != 0)) {
    FUN_00895e30(*(undefined8 *)(lVar33 + 0x78),&local_60,&local_70,&local_80);
    FUN_00895fd0(*(undefined8 *)(lVar33 + 0x78),param_2);
  }
  return;
}


