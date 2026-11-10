/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddfcb0; name: FUN_00ddfcb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00ddfcb0(float param_1,undefined8 *param_2,ulong *param_3,int *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  ulong uVar6;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar49;
  uint3 uVar50;
  byte bVar51;
  undefined1 extraout_b0;
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
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  undefined1 uVar96;
  byte bVar97;
  undefined1 uVar98;
  byte bVar99;
  undefined1 uVar100;
  byte bVar101;
  undefined1 uVar102;
  byte bVar103;
  undefined1 uVar104;
  byte bVar105;
  undefined1 uVar106;
  byte bVar107;
  undefined1 uVar108;
  byte bVar109;
  undefined1 uVar110;
  byte bVar111;
  undefined1 uVar112;
  byte bVar113;
  undefined1 uVar114;
  byte bVar115;
  undefined1 uVar116;
  byte bVar117;
  undefined1 uVar118;
  byte bVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  undefined1 uStack_48;
  uint7 uStack_47;
  ulong local_40;
  undefined1 uStack_38;
  uint7 uStack_37;
  ulong local_30;
  undefined1 uStack_28;
  uint7 uStack_27;
  ulong local_20;
  ulong uStack_18;
  
  uStack_18 = param_3[1];
  fVar56 = (float)*param_2 + (float)param_4[4];
  fVar58 = (float)param_2[1] + (float)param_4[6];
  fVar59 = (float)((ulong)param_2[1] >> 0x20) + (float)param_4[7];
  local_20 = *param_3 & 0xffffffff;
  if (*param_4 == 2) {
    fVar52 = (float)param_4[1] * 0.5 - param_1;
    param_1 = (float)param_4[2] * 0.5 - param_1;
    fVar57 = -fVar52;
    uVar6 = CONCAT44(0,fVar57);
    uStack_58 = (ulong)(uint)param_1;
    local_40 = (ulong)(uint)fVar52;
    uStack_28 = SUB41(-param_1,0);
    uVar50 = (uint3)((uint)-param_1 >> 8);
    uStack_27 = (uint7)uVar50;
    local_30 = (ulong)(uint)fVar57;
    uStack_48 = SUB41(param_1,0);
    uStack_47 = (uint7)(uint3)((uint)param_1 >> 8);
    local_50 = (ulong)(uint)fVar52;
    uStack_37 = (uint7)uVar50;
    local_60 = uVar6;
    uStack_38 = uStack_28;
    FUN_00a92cd0(SUB41((float)param_4[3] *
                       (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0),0),0
                 ,ZEXT816(0));
    fVar71 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
             (float)_DAT_01d4ae80;
    fVar72 = (float)CONCAT13(extraout_var_05,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar74 = (float)CONCAT13(extraout_var_09,
                             CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06))) *
             (float)_UNK_01d4ae88;
    fVar75 = (float)CONCAT13(extraout_var_13,
                             CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar8._4_4_ = fVar72;
    auVar8._0_4_ = fVar71;
    auVar8._8_4_ = fVar74;
    auVar8._12_4_ = fVar75;
    uVar5 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5120);
    fVar53 = (float)uVar5;
    fVar54 = (float)((ulong)uVar5 >> 0x20);
    auVar9._4_4_ = fVar72;
    auVar9._0_4_ = fVar71;
    auVar9._8_4_ = fVar74;
    auVar9._12_4_ = fVar75;
    uVar65 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
    auVar7._12_4_ = fVar72;
    auVar7._8_4_ = fVar71;
    auVar10._4_4_ = fVar72;
    auVar10._0_4_ = fVar71;
    auVar10._8_4_ = fVar74;
    auVar10._12_4_ = fVar75;
    uVar77 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
    auVar7._4_4_ = fVar72;
    auVar7._0_4_ = fVar71;
    uVar5 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
    fVar60 = (float)uVar5;
    fVar61 = (float)((ulong)uVar5 >> 0x20);
    auVar35._8_4_ = param_1;
    auVar35._0_8_ = uVar6;
    auVar48._8_4_ = param_1;
    auVar48._0_8_ = uVar6;
    auVar34._8_4_ = param_1;
    auVar34._0_8_ = uVar6;
    auVar34._12_4_ = 0;
    uVar5 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50f8);
    auVar11._4_4_ = fVar72;
    auVar11._0_4_ = fVar71;
    auVar11._8_4_ = fVar74;
    auVar11._12_4_ = fVar75;
    uVar80 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    auVar12._4_4_ = fVar72;
    auVar12._0_4_ = fVar71;
    auVar12._8_4_ = fVar74;
    auVar12._12_4_ = fVar75;
    uVar62 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5270);
    auVar55[1] = extraout_var;
    auVar55[0] = extraout_b0;
    auVar55[2] = extraout_var_00;
    auVar55[3] = extraout_var_01;
    auVar55[4] = extraout_var_02;
    auVar55[5] = extraout_var_03;
    auVar55[6] = extraout_var_04;
    auVar55[7] = extraout_var_05;
    auVar55[8] = extraout_var_06;
    auVar55[9] = extraout_var_07;
    auVar55[10] = extraout_var_08;
    auVar55[0xb] = extraout_var_09;
    auVar55[0xc] = extraout_var_10;
    auVar55[0xd] = extraout_var_11;
    auVar55[0xe] = extraout_var_12;
    auVar55[0xf] = extraout_var_13;
    uVar88 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd5418);
    auVar48._12_4_ = 0;
    uVar49 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd5418);
    fVar68 = (float)((ulong)uVar49 >> 0x20);
    auVar1[1] = extraout_var;
    auVar1[0] = extraout_b0;
    auVar1[2] = extraout_var_00;
    auVar1[3] = extraout_var_01;
    auVar1[4] = extraout_var_02;
    auVar1[5] = extraout_var_03;
    auVar1[6] = extraout_var_04;
    auVar1[7] = extraout_var_05;
    auVar1[8] = extraout_var_06;
    auVar1[9] = extraout_var_07;
    auVar1[10] = extraout_var_08;
    auVar1[0xb] = extraout_var_09;
    auVar1[0xc] = extraout_var_10;
    auVar1[0xd] = extraout_var_11;
    auVar1[0xe] = extraout_var_12;
    auVar1[0xf] = extraout_var_13;
    uVar63 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd50f8);
    auVar2[1] = extraout_var;
    auVar2[0] = extraout_b0;
    auVar2[2] = extraout_var_00;
    auVar2[3] = extraout_var_01;
    auVar2[4] = extraout_var_02;
    auVar2[5] = extraout_var_03;
    auVar2[6] = extraout_var_04;
    auVar2[7] = extraout_var_05;
    auVar2[8] = extraout_var_06;
    auVar2[9] = extraout_var_07;
    auVar2[10] = extraout_var_08;
    auVar2[0xb] = extraout_var_09;
    auVar2[0xc] = extraout_var_10;
    auVar2[0xd] = extraout_var_11;
    auVar2[0xe] = extraout_var_12;
    auVar2[0xf] = extraout_var_13;
    uVar85 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
    fVar52 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    auVar35._12_4_ = 0;
    uVar89 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd4f90);
    fVar67 = (float)((ulong)uVar89 >> 0x20);
    fVar64 = (float)uVar65;
    fVar66 = (float)((ulong)uVar65 >> 0x20);
    fVar122 = (float)((ulong)uVar5 >> 0x20);
    fVar76 = (float)uVar77;
    fVar78 = (float)((ulong)uVar77 >> 0x20);
    fVar87 = (float)_DAT_01d4ae90;
    fVar90 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar91 = (float)_UNK_01d4ae98;
    fVar92 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar79 = (float)uVar80;
    fVar81 = (float)((ulong)uVar80 >> 0x20);
    fVar82 = (float)uVar62;
    fVar83 = (float)((ulong)uVar62 >> 0x20);
    fVar120 = (fVar71 * (float)uVar89 + fVar87 * fVar57 * fVar64 + fVar87 * (float)uVar49 * fVar76)
              - (float)uVar5 * fVar79;
    fVar73 = (fVar72 * fVar67 + fVar90 * fVar66 * 0.0 + fVar90 * fVar68 * fVar78) - fVar122 * fVar81
    ;
    uVar96 = SUB41(fVar73,0);
    uVar98 = (undefined1)((uint)fVar73 >> 8);
    uVar100 = (undefined1)((uint)fVar73 >> 0x10);
    uVar102 = (undefined1)((uint)fVar73 >> 0x18);
    fVar121 = (fVar74 * (float)uVar89 + fVar91 * (float)uVar5 * fVar53 + fVar91 * fVar57 * fVar60) -
              (float)uVar49 * fVar82;
    uVar104 = SUB41(fVar121,0);
    uVar106 = (undefined1)((uint)fVar121 >> 8);
    uVar108 = (undefined1)((uint)fVar121 >> 0x10);
    uVar110 = (undefined1)((uint)fVar121 >> 0x18);
    fVar122 = (fVar75 * fVar67 + fVar92 * fVar122 * fVar54 + fVar92 * fVar61 * 0.0) -
              fVar68 * fVar83;
    uVar112 = SUB41(fVar122,0);
    uVar114 = (undefined1)((uint)fVar122 >> 8);
    uVar116 = (undefined1)((uint)fVar122 >> 0x10);
    uVar118 = (undefined1)((uint)fVar122 >> 0x18);
    auVar19[4] = uVar96;
    auVar19._0_4_ = fVar120;
    auVar19[5] = uVar98;
    auVar19[6] = uVar100;
    auVar19[7] = uVar102;
    auVar19[8] = uVar104;
    auVar19[9] = uVar106;
    auVar19[10] = uVar108;
    auVar19[0xb] = uVar110;
    auVar19[0xc] = uVar112;
    auVar19[0xd] = uVar114;
    auVar19[0xe] = uVar116;
    auVar19[0xf] = uVar118;
    uVar49 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd4f90);
    auVar20[4] = uVar96;
    auVar20._0_4_ = fVar120;
    auVar20[5] = uVar98;
    auVar20[6] = uVar100;
    auVar20[7] = uVar102;
    auVar20[8] = uVar104;
    auVar20[9] = uVar106;
    auVar20[10] = uVar108;
    auVar20[0xb] = uVar110;
    auVar20[0xc] = uVar112;
    auVar20[0xd] = uVar114;
    auVar20[0xe] = uVar116;
    auVar20[0xf] = uVar118;
    uVar62 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5120);
    auVar21[4] = uVar96;
    auVar21._0_4_ = fVar120;
    auVar21[5] = uVar98;
    auVar21[6] = uVar100;
    auVar21[7] = uVar102;
    auVar21[8] = uVar104;
    auVar21[9] = uVar106;
    auVar21[10] = uVar108;
    auVar21[0xb] = uVar110;
    auVar21[0xc] = uVar112;
    auVar21[0xd] = uVar114;
    auVar21[0xe] = uVar116;
    auVar21[0xf] = uVar118;
    uVar77 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
    fVar84 = (float)uVar85;
    fVar86 = (float)((ulong)uVar85 >> 0x20);
    auVar22[4] = uVar96;
    auVar22._0_4_ = fVar120;
    auVar22[5] = uVar98;
    auVar22[6] = uVar100;
    auVar22[7] = uVar102;
    auVar22[8] = uVar104;
    auVar22[9] = uVar106;
    auVar22[10] = uVar108;
    auVar22[0xb] = uVar110;
    auVar22[0xc] = uVar112;
    auVar22[0xd] = uVar114;
    auVar22[0xe] = uVar116;
    auVar22[0xf] = uVar118;
    uVar80 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5270);
    auVar23[4] = uVar96;
    auVar23._0_4_ = fVar120;
    auVar23[5] = uVar98;
    auVar23[6] = uVar100;
    auVar23[7] = uVar102;
    auVar23[8] = uVar104;
    auVar23[9] = uVar106;
    auVar23[10] = uVar108;
    auVar23[0xb] = uVar110;
    auVar23[0xc] = uVar112;
    auVar23[0xd] = uVar114;
    auVar23[0xe] = uVar116;
    auVar23[0xf] = uVar118;
    uVar65 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd50f8);
    auVar24[4] = uVar96;
    auVar24._0_4_ = fVar120;
    auVar24[5] = uVar98;
    auVar24[6] = uVar100;
    auVar24[7] = uVar102;
    auVar24[8] = SUB41(fVar120,0);
    auVar24[9] = (char)((uint)fVar120 >> 8);
    auVar24[10] = (char)((uint)fVar120 >> 0x10);
    auVar24[0xb] = (char)((uint)fVar120 >> 0x18);
    auVar24[0xc] = uVar96;
    auVar24[0xd] = uVar98;
    auVar24[0xe] = uVar100;
    auVar24[0xf] = uVar102;
    uVar5 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50b0);
    fVar57 = (float)uVar63;
    fVar67 = (float)((ulong)uVar63 >> 0x20);
    fVar68 = (float)uVar88;
    fVar69 = (float)((ulong)uVar88 >> 0x20);
    fVar70 = (float)(CONCAT17(extraout_var_05,
                              CONCAT16(extraout_var_04,
                                       CONCAT15(extraout_var_03,CONCAT14(extraout_var_02,fVar52))))
                    >> 0x20);
    bVar105 = (byte)DAT_01d4ab58;
    bVar107 = (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar109 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar111 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar113 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar115 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar117 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar119 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
    bVar51 = (byte)DAT_01d4ab50;
    bVar93 = (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar94 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar95 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar97 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar99 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar101 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar103 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
    fVar120 = (fVar84 * fVar120 +
               fVar87 * (float)CONCAT13(extraout_var_01,
                                        CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))
                                       ) * (float)uVar49 + fVar87 * fVar68 * (float)uVar65) -
              fVar57 * (float)uVar77;
    fVar73 = (fVar86 * fVar73 +
              fVar90 * (float)CONCAT13(extraout_var_05,
                                       CONCAT12(extraout_var_04,
                                                CONCAT11(extraout_var_03,extraout_var_02))) *
                       (float)((ulong)uVar49 >> 0x20) +
             fVar90 * fVar69 * (float)((ulong)uVar65 >> 0x20)) -
             fVar67 * (float)((ulong)uVar77 >> 0x20);
    fVar121 = (fVar84 * fVar121 + fVar91 * fVar57 * (float)uVar62 + fVar91 * fVar52 * (float)uVar5)
              - fVar68 * (float)uVar80;
    fVar122 = (fVar86 * fVar122 + fVar92 * fVar67 * (float)((ulong)uVar62 >> 0x20) +
              fVar92 * fVar70 * (float)((ulong)uVar5 >> 0x20)) -
              fVar69 * (float)((ulong)uVar80 >> 0x20);
    fVar73 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & bVar103,
                             CONCAT12((byte)((uint)fVar73 >> 0x10) & bVar101,
                                      CONCAT11((byte)((uint)fVar73 >> 8) & bVar99,
                                               SUB41(fVar73,0) & bVar97))) + 0.0;
    fVar122 = fVar59 + (float)CONCAT13((byte)((uint)fVar122 >> 0x18) & bVar119,
                                       CONCAT12((byte)((uint)fVar122 >> 0x10) & bVar117,
                                                CONCAT11((byte)((uint)fVar122 >> 8) & bVar115,
                                                         SUB41(fVar122,0) & bVar113)));
    uStack_58 = CONCAT17((char)((uint)fVar122 >> 0x18),
                         CONCAT16((char)((uint)fVar122 >> 0x10),
                                  CONCAT15((char)((uint)fVar122 >> 8),
                                           CONCAT14(SUB41(fVar122,0),
                                                    fVar58 + (float)CONCAT13((byte)((uint)fVar121 >>
                                                                                   0x18) & bVar111,
                                                                             CONCAT12((byte)((uint)
                                                  fVar121 >> 0x10) & bVar109,
                                                  CONCAT11((byte)((uint)fVar121 >> 8) & bVar107,
                                                           SUB41(fVar121,0) & bVar105)))))));
    local_60 = CONCAT17((char)((uint)fVar73 >> 0x18),
                        CONCAT16((char)((uint)fVar73 >> 0x10),
                                 CONCAT15((char)((uint)fVar73 >> 8),
                                          CONCAT14(SUB41(fVar73,0),
                                                   fVar56 + (float)CONCAT13((byte)((uint)fVar120 >>
                                                                                  0x18) & bVar95,
                                                                            CONCAT12((byte)((uint)
                                                  fVar120 >> 0x10) & bVar94,
                                                  CONCAT11((byte)((uint)fVar120 >> 8) & bVar93,
                                                           SUB41(fVar120,0) & bVar51)))))));
    uVar96 = (undefined1)uStack_47;
    uVar98 = (undefined1)(uStack_47 >> 8);
    uVar100 = (undefined1)(uStack_47 >> 0x10);
    uVar102 = (undefined1)(uStack_47 >> 0x18);
    uVar104 = (undefined1)(uStack_47 >> 0x20);
    uVar106 = (undefined1)(uStack_47 >> 0x28);
    uVar108 = (undefined1)(uStack_47 >> 0x30);
    auVar27[8] = uStack_48;
    auVar27._0_8_ = local_50;
    auVar26[8] = uStack_48;
    auVar26._0_8_ = local_50;
    auVar25[8] = uStack_48;
    auVar25._0_8_ = local_50;
    auVar25[9] = uVar96;
    auVar25[10] = uVar98;
    auVar25[0xb] = uVar100;
    auVar25[0xc] = uVar102;
    auVar25[0xd] = uVar104;
    auVar25[0xe] = uVar106;
    auVar25[0xf] = uVar108;
    uVar5 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
    fVar73 = (float)((ulong)uVar5 >> 0x20);
    auVar26[9] = uVar96;
    auVar26[10] = uVar98;
    auVar26[0xb] = uVar100;
    auVar26[0xc] = uVar102;
    auVar26[0xd] = uVar104;
    auVar26[0xe] = uVar106;
    auVar26[0xf] = uVar108;
    uVar49 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50f8);
    fVar123 = (float)((ulong)uVar49 >> 0x20);
    auVar27[9] = uVar96;
    auVar27[10] = uVar98;
    auVar27[0xb] = uVar100;
    auVar27[0xc] = uVar102;
    auVar27[0xd] = uVar104;
    auVar27[0xe] = uVar106;
    auVar27[0xf] = uVar108;
    uVar62 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5418);
    fVar124 = (float)((ulong)uVar62 >> 0x20);
    fVar125 = (float)(local_50 >> 0x20);
    fVar120 = (fVar71 * (float)uVar5 + fVar87 * (float)local_50 * fVar64 +
              fVar87 * (float)uVar62 * fVar76) - (float)uVar49 * fVar79;
    fVar121 = (fVar72 * fVar73 + fVar90 * fVar125 * fVar66 + fVar90 * fVar124 * fVar78) -
              fVar123 * fVar81;
    fVar122 = (fVar74 * (float)uVar5 + fVar91 * (float)uVar49 * fVar53 +
              fVar91 * (float)local_50 * fVar60) - (float)uVar62 * fVar82;
    fVar123 = (fVar75 * fVar73 + fVar92 * fVar123 * fVar54 + fVar92 * fVar125 * fVar61) -
              fVar124 * fVar83;
    auVar36._4_4_ = fVar121;
    auVar36._0_4_ = fVar120;
    auVar36._8_4_ = fVar122;
    auVar36._12_4_ = fVar123;
    uVar49 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd4f90);
    auVar37._4_4_ = fVar121;
    auVar37._0_4_ = fVar120;
    auVar37._8_4_ = fVar122;
    auVar37._12_4_ = fVar123;
    uVar65 = a64_TBL(ZEXT816(0),auVar37,DAT_01cd5120);
    auVar38._4_4_ = fVar121;
    auVar38._0_4_ = fVar120;
    auVar38._8_4_ = fVar122;
    auVar38._12_4_ = fVar123;
    uVar77 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5270);
    auVar39._4_4_ = fVar121;
    auVar39._0_4_ = fVar120;
    auVar39._8_4_ = fVar122;
    auVar39._12_4_ = fVar123;
    uVar63 = a64_TBL(ZEXT816(0),auVar39,DAT_01cd5418);
    auVar40._4_4_ = fVar121;
    auVar40._0_4_ = fVar120;
    auVar40._8_4_ = fVar122;
    auVar40._12_4_ = fVar123;
    uVar62 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd50f8);
    auVar41._4_4_ = fVar121;
    auVar41._0_4_ = fVar120;
    auVar41._8_4_ = fVar120;
    auVar41._12_4_ = fVar121;
    uVar5 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd50b0);
    fVar120 = (fVar84 * fVar120 +
               fVar87 * (float)CONCAT13(extraout_var_01,
                                        CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))
                                       ) * (float)uVar49 + fVar87 * fVar68 * (float)uVar62) -
              fVar57 * (float)uVar63;
    fVar73 = (fVar86 * fVar121 +
              fVar90 * (float)CONCAT13(extraout_var_05,
                                       CONCAT12(extraout_var_04,
                                                CONCAT11(extraout_var_03,extraout_var_02))) *
                       (float)((ulong)uVar49 >> 0x20) +
             fVar90 * fVar69 * (float)((ulong)uVar62 >> 0x20)) -
             fVar67 * (float)((ulong)uVar63 >> 0x20);
    fVar121 = (fVar84 * fVar122 + fVar91 * fVar57 * (float)uVar65 + fVar91 * fVar52 * (float)uVar5)
              - fVar68 * (float)uVar77;
    fVar122 = (fVar86 * fVar123 + fVar92 * fVar67 * (float)((ulong)uVar65 >> 0x20) +
              fVar92 * fVar70 * (float)((ulong)uVar5 >> 0x20)) -
              fVar69 * (float)((ulong)uVar77 >> 0x20);
    fVar73 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & bVar103,
                             CONCAT12((byte)((uint)fVar73 >> 0x10) & bVar101,
                                      CONCAT11((byte)((uint)fVar73 >> 8) & bVar99,
                                               SUB41(fVar73,0) & bVar97))) + 0.0;
    fVar121 = fVar58 + (float)CONCAT13((byte)((uint)fVar121 >> 0x18) & bVar111,
                                       CONCAT12((byte)((uint)fVar121 >> 0x10) & bVar109,
                                                CONCAT11((byte)((uint)fVar121 >> 8) & bVar107,
                                                         SUB41(fVar121,0) & bVar105)));
    fVar122 = fVar59 + (float)CONCAT13((byte)((uint)fVar122 >> 0x18) & bVar119,
                                       CONCAT12((byte)((uint)fVar122 >> 0x10) & bVar117,
                                                CONCAT11((byte)((uint)fVar122 >> 8) & bVar115,
                                                         SUB41(fVar122,0) & bVar113)));
    uStack_48 = SUB41(fVar121,0);
    uStack_47 = (uint7)(CONCAT17((char)((uint)fVar122 >> 0x18),
                                 CONCAT16((char)((uint)fVar122 >> 0x10),
                                          CONCAT15((char)((uint)fVar122 >> 8),
                                                   CONCAT14(SUB41(fVar122,0),fVar121)))) >> 8);
    local_50 = CONCAT17((char)((uint)fVar73 >> 0x18),
                        CONCAT16((char)((uint)fVar73 >> 0x10),
                                 CONCAT15((char)((uint)fVar73 >> 8),
                                          CONCAT14(SUB41(fVar73,0),
                                                   fVar56 + (float)CONCAT13((byte)((uint)fVar120 >>
                                                                                  0x18) & bVar95,
                                                                            CONCAT12((byte)((uint)
                                                  fVar120 >> 0x10) & bVar94,
                                                  CONCAT11((byte)((uint)fVar120 >> 8) & bVar93,
                                                           SUB41(fVar120,0) & bVar51)))))));
    uVar96 = (undefined1)uStack_37;
    uVar98 = (undefined1)(uStack_37 >> 8);
    uVar100 = (undefined1)(uStack_37 >> 0x10);
    uVar102 = (undefined1)(uStack_37 >> 0x18);
    uVar104 = (undefined1)(uStack_37 >> 0x20);
    uVar106 = (undefined1)(uStack_37 >> 0x28);
    uVar108 = (undefined1)(uStack_37 >> 0x30);
    auVar30[8] = uStack_38;
    auVar30._0_8_ = local_40;
    auVar29[8] = uStack_38;
    auVar29._0_8_ = local_40;
    auVar28[8] = uStack_38;
    auVar28._0_8_ = local_40;
    auVar28[9] = uVar96;
    auVar28[10] = uVar98;
    auVar28[0xb] = uVar100;
    auVar28[0xc] = uVar102;
    auVar28[0xd] = uVar104;
    auVar28[0xe] = uVar106;
    auVar28[0xf] = uVar108;
    uVar5 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd4f90);
    fVar73 = (float)((ulong)uVar5 >> 0x20);
    auVar29[9] = uVar96;
    auVar29[10] = uVar98;
    auVar29[0xb] = uVar100;
    auVar29[0xc] = uVar102;
    auVar29[0xd] = uVar104;
    auVar29[0xe] = uVar106;
    auVar29[0xf] = uVar108;
    uVar49 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50f8);
    fVar123 = (float)((ulong)uVar49 >> 0x20);
    auVar30[9] = uVar96;
    auVar30[10] = uVar98;
    auVar30[0xb] = uVar100;
    auVar30[0xc] = uVar102;
    auVar30[0xd] = uVar104;
    auVar30[0xe] = uVar106;
    auVar30[0xf] = uVar108;
    uVar62 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd5418);
    fVar124 = (float)((ulong)uVar62 >> 0x20);
    fVar125 = (float)(local_40 >> 0x20);
    fVar120 = (fVar71 * (float)uVar5 + fVar87 * (float)local_40 * fVar64 +
              fVar87 * (float)uVar62 * fVar76) - (float)uVar49 * fVar79;
    fVar121 = (fVar72 * fVar73 + fVar90 * fVar125 * fVar66 + fVar90 * fVar124 * fVar78) -
              fVar123 * fVar81;
    fVar122 = (fVar74 * (float)uVar5 + fVar91 * (float)uVar49 * fVar53 +
              fVar91 * (float)local_40 * fVar60) - (float)uVar62 * fVar82;
    fVar123 = (fVar75 * fVar73 + fVar92 * fVar123 * fVar54 + fVar92 * fVar125 * fVar61) -
              fVar124 * fVar83;
    auVar42._4_4_ = fVar121;
    auVar42._0_4_ = fVar120;
    auVar42._8_4_ = fVar122;
    auVar42._12_4_ = fVar123;
    uVar49 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd4f90);
    auVar43._4_4_ = fVar121;
    auVar43._0_4_ = fVar120;
    auVar43._8_4_ = fVar122;
    auVar43._12_4_ = fVar123;
    uVar65 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd5120);
    auVar44._4_4_ = fVar121;
    auVar44._0_4_ = fVar120;
    auVar44._8_4_ = fVar122;
    auVar44._12_4_ = fVar123;
    uVar77 = a64_TBL(ZEXT816(0),auVar44,DAT_01cd5270);
    auVar45._4_4_ = fVar121;
    auVar45._0_4_ = fVar120;
    auVar45._8_4_ = fVar122;
    auVar45._12_4_ = fVar123;
    uVar63 = a64_TBL(ZEXT816(0),auVar45,DAT_01cd5418);
    auVar46._4_4_ = fVar121;
    auVar46._0_4_ = fVar120;
    auVar46._8_4_ = fVar122;
    auVar46._12_4_ = fVar123;
    uVar62 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd50f8);
    auVar47._4_4_ = fVar121;
    auVar47._0_4_ = fVar120;
    auVar47._8_4_ = fVar120;
    auVar47._12_4_ = fVar121;
    uVar5 = a64_TBL(ZEXT816(0),auVar47,DAT_01cd50b0);
    fVar120 = (fVar84 * fVar120 +
               fVar87 * (float)CONCAT13(extraout_var_01,
                                        CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))
                                       ) * (float)uVar49 + fVar87 * fVar68 * (float)uVar62) -
              fVar57 * (float)uVar63;
    fVar73 = (fVar86 * fVar121 +
              fVar90 * (float)CONCAT13(extraout_var_05,
                                       CONCAT12(extraout_var_04,
                                                CONCAT11(extraout_var_03,extraout_var_02))) *
                       (float)((ulong)uVar49 >> 0x20) +
             fVar90 * fVar69 * (float)((ulong)uVar62 >> 0x20)) -
             fVar67 * (float)((ulong)uVar63 >> 0x20);
    fVar121 = (fVar84 * fVar122 + fVar91 * fVar57 * (float)uVar65 + fVar91 * fVar52 * (float)uVar5)
              - fVar68 * (float)uVar77;
    fVar122 = (fVar86 * fVar123 + fVar92 * fVar67 * (float)((ulong)uVar65 >> 0x20) +
              fVar92 * fVar70 * (float)((ulong)uVar5 >> 0x20)) -
              fVar69 * (float)((ulong)uVar77 >> 0x20);
    fVar73 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & bVar103,
                             CONCAT12((byte)((uint)fVar73 >> 0x10) & bVar101,
                                      CONCAT11((byte)((uint)fVar73 >> 8) & bVar99,
                                               SUB41(fVar73,0) & bVar97))) + 0.0;
    fVar121 = fVar58 + (float)CONCAT13((byte)((uint)fVar121 >> 0x18) & bVar111,
                                       CONCAT12((byte)((uint)fVar121 >> 0x10) & bVar109,
                                                CONCAT11((byte)((uint)fVar121 >> 8) & bVar107,
                                                         SUB41(fVar121,0) & bVar105)));
    fVar122 = fVar59 + (float)CONCAT13((byte)((uint)fVar122 >> 0x18) & bVar119,
                                       CONCAT12((byte)((uint)fVar122 >> 0x10) & bVar117,
                                                CONCAT11((byte)((uint)fVar122 >> 8) & bVar115,
                                                         SUB41(fVar122,0) & bVar113)));
    uStack_38 = SUB41(fVar121,0);
    uStack_37 = (uint7)(CONCAT17((char)((uint)fVar122 >> 0x18),
                                 CONCAT16((char)((uint)fVar122 >> 0x10),
                                          CONCAT15((char)((uint)fVar122 >> 8),
                                                   CONCAT14(SUB41(fVar122,0),fVar121)))) >> 8);
    local_40 = CONCAT17((char)((uint)fVar73 >> 0x18),
                        CONCAT16((char)((uint)fVar73 >> 0x10),
                                 CONCAT15((char)((uint)fVar73 >> 8),
                                          CONCAT14(SUB41(fVar73,0),
                                                   fVar56 + (float)CONCAT13((byte)((uint)fVar120 >>
                                                                                  0x18) & bVar95,
                                                                            CONCAT12((byte)((uint)
                                                  fVar120 >> 0x10) & bVar94,
                                                  CONCAT11((byte)((uint)fVar120 >> 8) & bVar93,
                                                           SUB41(fVar120,0) & bVar51)))))));
    uVar96 = (undefined1)uStack_27;
    uVar98 = (undefined1)(uStack_27 >> 8);
    uVar100 = (undefined1)(uStack_27 >> 0x10);
    uVar102 = (undefined1)(uStack_27 >> 0x18);
    uVar104 = (undefined1)(uStack_27 >> 0x20);
    uVar106 = (undefined1)(uStack_27 >> 0x28);
    uVar108 = (undefined1)(uStack_27 >> 0x30);
    auVar33[8] = uStack_28;
    auVar33._0_8_ = local_30;
    auVar32[8] = uStack_28;
    auVar32._0_8_ = local_30;
    auVar31[8] = uStack_28;
    auVar31._0_8_ = local_30;
    auVar31[9] = uVar96;
    auVar31[10] = uVar98;
    auVar31[0xb] = uVar100;
    auVar31[0xc] = uVar102;
    auVar31[0xd] = uVar104;
    auVar31[0xe] = uVar106;
    auVar31[0xf] = uVar108;
    uVar5 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd4f90);
    fVar122 = (float)((ulong)uVar5 >> 0x20);
    fVar124 = (float)(local_30 >> 0x20);
    auVar32[9] = uVar96;
    auVar32[10] = uVar98;
    auVar32[0xb] = uVar100;
    auVar32[0xc] = uVar102;
    auVar32[0xd] = uVar104;
    auVar32[0xe] = uVar106;
    auVar32[0xf] = uVar108;
    uVar49 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd50f8);
    fVar123 = (float)((ulong)uVar49 >> 0x20);
    auVar33[9] = uVar96;
    auVar33[10] = uVar98;
    auVar33[0xb] = uVar100;
    auVar33[0xc] = uVar102;
    auVar33[0xd] = uVar104;
    auVar33[0xe] = uVar106;
    auVar33[0xf] = uVar108;
    uVar62 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5418);
    fVar125 = (float)((ulong)uVar62 >> 0x20);
    fVar120 = (fVar71 * (float)uVar5 + fVar87 * (float)local_30 * fVar64 +
              fVar87 * (float)uVar62 * fVar76) - (float)uVar49 * fVar79;
    fVar73 = (fVar72 * fVar122 + fVar90 * fVar124 * fVar66 + fVar90 * fVar125 * fVar78) -
             fVar123 * fVar81;
    fVar121 = (fVar74 * (float)uVar5 + fVar91 * (float)uVar49 * fVar53 +
              fVar91 * (float)local_30 * fVar60) - (float)uVar62 * fVar82;
    fVar122 = (fVar75 * fVar122 + fVar92 * fVar123 * fVar54 + fVar92 * fVar124 * fVar61) -
              fVar125 * fVar83;
    auVar13._4_4_ = fVar73;
    auVar13._0_4_ = fVar120;
    auVar13._8_4_ = fVar121;
    auVar13._12_4_ = fVar122;
    uVar62 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
    auVar14._4_4_ = fVar73;
    auVar14._0_4_ = fVar120;
    auVar14._8_4_ = fVar121;
    auVar14._12_4_ = fVar122;
    uVar77 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5120);
    auVar15._4_4_ = fVar73;
    auVar15._0_4_ = fVar120;
    auVar15._8_4_ = fVar121;
    auVar15._12_4_ = fVar122;
    uVar65 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
    auVar16._4_4_ = fVar73;
    auVar16._0_4_ = fVar120;
    auVar16._8_4_ = fVar121;
    auVar16._12_4_ = fVar122;
    uVar5 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50f8);
    auVar17._4_4_ = fVar73;
    auVar17._0_4_ = fVar120;
    auVar17._8_4_ = fVar121;
    auVar17._12_4_ = fVar122;
    uVar63 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5270);
    auVar18._4_4_ = fVar73;
    auVar18._0_4_ = fVar120;
    auVar18._8_4_ = fVar120;
    auVar18._12_4_ = fVar73;
    uVar49 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
    fVar120 = (fVar84 * fVar120 +
               fVar87 * (float)CONCAT13(extraout_var_01,
                                        CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))
                                       ) * (float)uVar62 + fVar87 * fVar68 * (float)uVar5) -
              fVar57 * (float)uVar65;
    fVar73 = (fVar86 * fVar73 +
              fVar90 * (float)CONCAT13(extraout_var_05,
                                       CONCAT12(extraout_var_04,
                                                CONCAT11(extraout_var_03,extraout_var_02))) *
                       (float)((ulong)uVar62 >> 0x20) +
             fVar90 * fVar69 * (float)((ulong)uVar5 >> 0x20)) -
             fVar67 * (float)((ulong)uVar65 >> 0x20);
    fVar57 = (fVar84 * fVar121 + fVar91 * fVar57 * (float)uVar77 + fVar91 * fVar52 * (float)uVar49)
             - fVar68 * (float)uVar63;
    fVar67 = (fVar86 * fVar122 + fVar92 * fVar67 * (float)((ulong)uVar77 >> 0x20) +
             fVar92 * fVar70 * (float)((ulong)uVar49 >> 0x20)) -
             fVar69 * (float)((ulong)uVar63 >> 0x20);
    fVar52 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & bVar103,
                             CONCAT12((byte)((uint)fVar73 >> 0x10) & bVar101,
                                      CONCAT11((byte)((uint)fVar73 >> 8) & bVar99,
                                               SUB41(fVar73,0) & bVar97))) + 0.0;
    fVar58 = fVar58 + (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & bVar111,
                                      CONCAT12((byte)((uint)fVar57 >> 0x10) & bVar109,
                                               CONCAT11((byte)((uint)fVar57 >> 8) & bVar107,
                                                        SUB41(fVar57,0) & bVar105)));
    fVar59 = fVar59 + (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & bVar119,
                                      CONCAT12((byte)((uint)fVar67 >> 0x10) & bVar117,
                                               CONCAT11((byte)((uint)fVar67 >> 8) & bVar115,
                                                        SUB41(fVar67,0) & bVar113)));
    uStack_28 = SUB41(fVar58,0);
    uStack_27 = (uint7)(CONCAT17((char)((uint)fVar59 >> 0x18),
                                 CONCAT16((char)((uint)fVar59 >> 0x10),
                                          CONCAT15((char)((uint)fVar59 >> 8),
                                                   CONCAT14(SUB41(fVar59,0),fVar58)))) >> 8);
    local_30 = CONCAT17((char)((uint)fVar52 >> 0x18),
                        CONCAT16((char)((uint)fVar52 >> 0x10),
                                 CONCAT15((char)((uint)fVar52 >> 8),
                                          CONCAT14(SUB41(fVar52,0),
                                                   fVar56 + (float)CONCAT13((byte)((uint)fVar120 >>
                                                                                  0x18) & bVar95,
                                                                            CONCAT12((byte)((uint)
                                                  fVar120 >> 0x10) & bVar94,
                                                  CONCAT11((byte)((uint)fVar120 >> 8) & bVar93,
                                                           SUB41(fVar120,0) & bVar51)))))));
    bVar51 = FUN_00dd5d60(&local_20,&local_60,4);
    return (bool)(bVar51 & 1);
  }
  if (*param_4 == 1) {
    fVar56 = fVar56 - (float)*param_3;
    fVar58 = fVar58 - (float)uStack_18;
    fVar59 = fVar59 - (float)(uStack_18 >> 0x20);
    fVar56 = fVar56 * fVar56;
    fVar58 = fVar58 * fVar58;
    fVar59 = fVar59 * fVar59;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fVar56;
    auVar3._8_4_ = fVar58;
    auVar3._12_4_ = fVar59;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = fVar56;
    auVar4._8_4_ = fVar58;
    auVar4._12_4_ = fVar59;
    auVar55 = NEON_ext(auVar3,auVar4,8,1);
    return auVar55._0_4_ + fVar56 + auVar55._4_4_ + 0.0 <=
           ((float)param_4[1] - param_1) * ((float)param_4[1] - param_1);
  }
  return false;
}


