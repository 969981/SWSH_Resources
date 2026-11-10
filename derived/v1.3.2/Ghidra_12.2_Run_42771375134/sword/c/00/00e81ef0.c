/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e81ef0; name: FUN_00e81ef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00e81ef0(float param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 uVar41;
  undefined1 extraout_var_06;
  undefined1 uVar42;
  undefined1 extraout_var_07;
  undefined1 uVar43;
  undefined1 extraout_var_08;
  undefined1 uVar44;
  undefined1 extraout_var_09;
  undefined1 uVar45;
  undefined1 extraout_var_10;
  undefined1 uVar46;
  undefined1 extraout_var_11;
  undefined1 uVar47;
  undefined1 extraout_var_12;
  undefined1 uVar48;
  undefined1 extraout_var_13;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar56;
  undefined8 uVar55;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  uVar37 = _UNK_01d4ae98;
  uVar36 = _DAT_01d4ae90;
  uVar35 = _UNK_01d4ae88;
  uVar34 = _DAT_01d4ae80;
  uVar33 = DAT_01d4ab58;
  uVar32 = DAT_01d4ab50;
  uVar31 = DAT_01cd5418;
  uVar30 = DAT_01cd5270;
  uVar29 = DAT_01cd5120;
  uVar28 = DAT_01cd50f8;
  uVar27 = DAT_01cd50b0;
  uVar26 = DAT_01cd4f90;
  uStack_c8 = param_3[1];
  local_d0 = *param_3;
  local_e0 = 0;
  uStack_d8 = 0;
  if (param_4 == (int *)0x0) {
    iVar39 = 0;
  }
  else {
    iVar39 = *param_4;
  }
  uVar41 = (undefined1)_UNK_01d49dc8;
  uVar42 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
  uVar43 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
  uVar44 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
  uVar45 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
  uVar46 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
  uVar47 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
  uVar48 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
  auVar1[8] = uVar41;
  auVar1._0_8_ = _DAT_01d49dc0;
  auVar1[9] = uVar42;
  auVar1[10] = uVar43;
  auVar1[0xb] = uVar44;
  auVar1[0xc] = uVar45;
  auVar1[0xd] = uVar46;
  auVar1[0xe] = uVar47;
  auVar1[0xf] = uVar48;
  uVar14 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd4f90);
  auVar2[8] = uVar41;
  auVar2._0_8_ = _DAT_01d49dc0;
  auVar2[9] = uVar42;
  auVar2[10] = uVar43;
  auVar2[0xb] = uVar44;
  auVar2[0xc] = uVar45;
  auVar2[0xd] = uVar46;
  auVar2[0xe] = uVar47;
  auVar2[0xf] = uVar48;
  uVar53 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
  auVar3[8] = uVar41;
  auVar3._0_8_ = _DAT_01d49dc0;
  auVar3[9] = uVar42;
  auVar3[10] = uVar43;
  auVar3[0xb] = uVar44;
  auVar3[0xc] = uVar45;
  auVar3[0xd] = uVar46;
  auVar3[0xe] = uVar47;
  auVar3[0xf] = uVar48;
  uVar7 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  uVar40 = 0;
  while( true ) {
    FUN_00a92cd0(SUB41((float)(int)(iVar39 + uVar40) * param_1,0),0,0);
    fVar58 = (float)((ulong)uVar14 >> 0x20);
    fVar59 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
             (float)uVar34;
    fVar60 = (float)CONCAT13(extraout_var_05,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))) *
             (float)((ulong)uVar34 >> 0x20);
    uVar41 = SUB41(fVar60,0);
    uVar42 = (undefined1)((uint)fVar60 >> 8);
    uVar43 = (undefined1)((uint)fVar60 >> 0x10);
    uVar44 = (undefined1)((uint)fVar60 >> 0x18);
    fVar17 = (float)CONCAT13(extraout_var_09,
                             CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06))) *
             (float)uVar35;
    uVar45 = SUB41(fVar17,0);
    uVar46 = (undefined1)((uint)fVar17 >> 8);
    uVar47 = (undefined1)((uint)fVar17 >> 0x10);
    uVar48 = (undefined1)((uint)fVar17 >> 0x18);
    fVar56 = (float)CONCAT13(extraout_var_13,
                             CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))) *
             (float)((ulong)uVar35 >> 0x20);
    uVar49 = SUB41(fVar56,0);
    uVar50 = (undefined1)((uint)fVar56 >> 8);
    uVar51 = (undefined1)((uint)fVar56 >> 0x10);
    uVar52 = (undefined1)((uint)fVar56 >> 0x18);
    auVar9[4] = uVar41;
    auVar9._0_4_ = fVar59;
    auVar9[5] = uVar42;
    auVar9[6] = uVar43;
    auVar9[7] = uVar44;
    auVar9[8] = uVar45;
    auVar9[9] = uVar46;
    auVar9[10] = uVar47;
    auVar9[0xb] = uVar48;
    auVar9[0xc] = uVar49;
    auVar9[0xd] = uVar50;
    auVar9[0xe] = uVar51;
    auVar9[0xf] = uVar52;
    uVar65 = a64_TBL(ZEXT816(0),auVar9,uVar28);
    auVar10[4] = uVar41;
    auVar10._0_4_ = fVar59;
    auVar10[5] = uVar42;
    auVar10[6] = uVar43;
    auVar10[7] = uVar44;
    auVar10[8] = uVar45;
    auVar10[9] = uVar46;
    auVar10[10] = uVar47;
    auVar10[0xb] = uVar48;
    auVar10[0xc] = uVar49;
    auVar10[0xd] = uVar50;
    auVar10[0xe] = uVar51;
    auVar10[0xf] = uVar52;
    uVar63 = a64_TBL(ZEXT816(0),auVar10,uVar26);
    auVar11[4] = uVar41;
    auVar11._0_4_ = fVar59;
    auVar11[5] = uVar42;
    auVar11[6] = uVar43;
    auVar11[7] = uVar44;
    auVar11[8] = uVar45;
    auVar11[9] = uVar46;
    auVar11[10] = uVar47;
    auVar11[0xb] = uVar48;
    auVar11[0xc] = uVar49;
    auVar11[0xd] = uVar50;
    auVar11[0xe] = uVar51;
    auVar11[0xf] = uVar52;
    uVar25 = a64_TBL(ZEXT816(0),auVar11,uVar29);
    auVar4[1] = extraout_var;
    auVar4[0] = extraout_b0;
    auVar4[2] = extraout_var_00;
    auVar4[3] = extraout_var_01;
    auVar4[4] = extraout_var_02;
    auVar4[5] = extraout_var_03;
    auVar4[6] = extraout_var_04;
    auVar4[7] = extraout_var_05;
    auVar4[8] = extraout_var_06;
    auVar4[9] = extraout_var_07;
    auVar4[10] = extraout_var_08;
    auVar4[0xb] = extraout_var_09;
    auVar4[0xc] = extraout_var_10;
    auVar4[0xd] = extraout_var_11;
    auVar4[0xe] = extraout_var_12;
    auVar4[0xf] = extraout_var_13;
    uVar57 = a64_TBL(ZEXT816(0),auVar4,uVar28);
    local_b8 = 0x7abdda2367dcab90;
    uStack_b0 = 0x665a75d14db0d6c7;
    fVar8 = (float)CONCAT13(extraout_var_01,
                            CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    auVar5[1] = extraout_var;
    auVar5[0] = extraout_b0;
    auVar5[2] = extraout_var_00;
    auVar5[3] = extraout_var_01;
    auVar5[4] = extraout_var_02;
    auVar5[5] = extraout_var_03;
    auVar5[6] = extraout_var_04;
    auVar5[7] = extraout_var_05;
    auVar5[8] = extraout_var_06;
    auVar5[9] = extraout_var_07;
    auVar5[10] = extraout_var_08;
    auVar5[0xb] = extraout_var_09;
    auVar5[0xc] = extraout_var_10;
    auVar5[0xd] = extraout_var_11;
    auVar5[0xe] = extraout_var_12;
    auVar5[0xf] = extraout_var_13;
    uVar54 = a64_TBL(ZEXT816(0),auVar5,uVar26);
    auVar24._4_4_ =
         (int)(CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,fVar59)))) >> 0x20);
    auVar24._0_4_ = fVar59;
    auVar24._8_4_ = fVar59;
    auVar24._12_4_ =
         (int)(CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,fVar59)))) >> 0x20);
    uVar55 = a64_TBL(ZEXT816(0),auVar24,uVar27);
    fVar69 = (float)((ulong)uVar53 >> 0x20);
    auVar12[4] = uVar41;
    auVar12._0_4_ = fVar59;
    auVar12[5] = uVar42;
    auVar12[6] = uVar43;
    auVar12[7] = uVar44;
    auVar12[8] = uVar45;
    auVar12[9] = uVar46;
    auVar12[10] = uVar47;
    auVar12[0xb] = uVar48;
    auVar12[0xc] = uVar49;
    auVar12[0xd] = uVar50;
    auVar12[0xe] = uVar51;
    auVar12[0xf] = uVar52;
    uVar64 = a64_TBL(ZEXT816(0),auVar12,uVar31);
    fVar62 = (float)((ulong)uVar7 >> 0x20);
    auVar13[4] = uVar41;
    auVar13._0_4_ = fVar59;
    auVar13[5] = uVar42;
    auVar13[6] = uVar43;
    auVar13[7] = uVar44;
    auVar13[8] = uVar45;
    auVar13[9] = uVar46;
    auVar13[10] = uVar47;
    auVar13[0xb] = uVar48;
    auVar13[0xc] = uVar49;
    auVar13[0xd] = uVar50;
    auVar13[0xe] = uVar51;
    auVar13[0xf] = uVar52;
    uVar15 = a64_TBL(ZEXT816(0),auVar13,uVar30);
    auVar6[1] = extraout_var;
    auVar6[0] = extraout_b0;
    auVar6[2] = extraout_var_00;
    auVar6[3] = extraout_var_01;
    auVar6[4] = extraout_var_02;
    auVar6[5] = extraout_var_03;
    auVar6[6] = extraout_var_04;
    auVar6[7] = extraout_var_05;
    auVar6[8] = extraout_var_06;
    auVar6[9] = extraout_var_07;
    auVar6[10] = extraout_var_08;
    auVar6[0xb] = extraout_var_09;
    auVar6[0xc] = extraout_var_10;
    auVar6[0xd] = extraout_var_11;
    auVar6[0xe] = extraout_var_12;
    auVar6[0xf] = extraout_var_13;
    uVar16 = a64_TBL(ZEXT816(0),auVar6,uVar31);
    fVar66 = (float)uVar36;
    fVar67 = (float)((ulong)uVar36 >> 0x20);
    fVar68 = (float)uVar37;
    fVar70 = (float)((ulong)uVar37 >> 0x20);
    fVar59 = (fVar59 * (float)uVar14 + fVar66 * (float)uVar63 * 0.0 +
             fVar66 * (float)uVar7 * (float)uVar65) - (float)uVar53 * (float)uVar64;
    fVar60 = (fVar60 * fVar58 + fVar67 * (float)((ulong)uVar63 >> 0x20) * 0.0 +
             fVar67 * fVar62 * (float)((ulong)uVar65 >> 0x20)) -
             fVar69 * (float)((ulong)uVar64 >> 0x20);
    fVar61 = (fVar17 * (float)uVar14 + fVar68 * (float)uVar53 * (float)uVar25 +
             fVar68 * (float)uVar55 * 0.0) - (float)uVar7 * (float)uVar15;
    fVar62 = (fVar56 * fVar58 + fVar70 * fVar69 * (float)((ulong)uVar25 >> 0x20) +
             fVar70 * (float)((ulong)uVar55 >> 0x20) * 0.0) -
             fVar62 * (float)((ulong)uVar15 >> 0x20);
    fVar56 = (float)((ulong)uVar54 >> 0x20);
    auVar18._4_4_ = fVar60;
    auVar18._0_4_ = fVar59;
    auVar18._8_4_ = fVar61;
    auVar18._12_4_ = fVar62;
    uVar55 = a64_TBL(ZEXT816(0),auVar18,uVar26);
    auVar19._4_4_ = fVar60;
    auVar19._0_4_ = fVar59;
    auVar19._8_4_ = fVar61;
    auVar19._12_4_ = fVar62;
    uVar64 = a64_TBL(ZEXT816(0),auVar19,uVar29);
    auVar20._4_4_ = fVar60;
    auVar20._0_4_ = fVar59;
    auVar20._8_4_ = fVar61;
    auVar20._12_4_ = fVar62;
    uVar25 = a64_TBL(ZEXT816(0),auVar20,uVar31);
    auVar21._4_4_ = fVar60;
    auVar21._0_4_ = fVar59;
    auVar21._8_4_ = fVar61;
    auVar21._12_4_ = fVar62;
    uVar63 = a64_TBL(ZEXT816(0),auVar21,uVar30);
    auVar22._4_4_ = fVar60;
    auVar22._0_4_ = fVar59;
    auVar22._8_4_ = fVar61;
    auVar22._12_4_ = fVar62;
    uVar65 = a64_TBL(ZEXT816(0),auVar22,uVar28);
    auVar23._4_4_ = fVar60;
    auVar23._0_4_ = fVar59;
    auVar23._8_4_ = fVar59;
    auVar23._12_4_ = fVar60;
    uVar15 = a64_TBL(ZEXT816(0),auVar23,uVar27);
    fVar58 = (float)((ulong)uVar57 >> 0x20);
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    fVar59 = ((float)uVar54 * fVar59 + fVar66 * fVar8 * (float)uVar55 +
             fVar66 * (float)uVar16 * (float)uVar65) - (float)uVar57 * (float)uVar25;
    fVar8 = (fVar56 * fVar60 +
             fVar67 * (float)(CONCAT17(extraout_var_05,
                                       CONCAT16(extraout_var_04,
                                                CONCAT15(extraout_var_03,
                                                         CONCAT14(extraout_var_02,fVar8)))) >> 0x20)
                      * (float)((ulong)uVar55 >> 0x20) +
            fVar67 * fVar17 * (float)((ulong)uVar65 >> 0x20)) -
            fVar58 * (float)((ulong)uVar25 >> 0x20);
    fVar60 = ((float)uVar54 * fVar61 + fVar68 * (float)uVar57 * (float)uVar64 +
             fVar68 * (float)CONCAT13(extraout_var_01,
                                      CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)))
                      * (float)uVar15) - (float)uVar16 * (float)uVar63;
    fVar17 = (fVar56 * fVar62 + fVar70 * fVar58 * (float)((ulong)uVar64 >> 0x20) +
             fVar70 * (float)CONCAT13(extraout_var_05,
                                      CONCAT12(extraout_var_04,
                                               CONCAT11(extraout_var_03,extraout_var_02))) *
                      (float)((ulong)uVar15 >> 0x20)) - fVar17 * (float)((ulong)uVar63 >> 0x20);
    fVar8 = (float)((ulong)local_d0 >> 0x20) +
            (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & (byte)((ulong)uVar32 >> 0x38),
                            CONCAT12((byte)((uint)fVar8 >> 0x10) & (byte)((ulong)uVar32 >> 0x30),
                                     CONCAT11((byte)((uint)fVar8 >> 8) &
                                              (byte)((ulong)uVar32 >> 0x28),
                                              SUB41(fVar8,0) & (byte)((ulong)uVar32 >> 0x20)))) *
            150000.0;
    fVar17 = (float)((ulong)uStack_c8 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & (byte)((ulong)uVar33 >> 0x38),
                             CONCAT12((byte)((uint)fVar17 >> 0x10) & (byte)((ulong)uVar33 >> 0x30),
                                      CONCAT11((byte)((uint)fVar17 >> 8) &
                                               (byte)((ulong)uVar33 >> 0x28),
                                               SUB41(fVar17,0) & (byte)((ulong)uVar33 >> 0x20)))) *
             150000.0;
    local_bc = 0;
    uStack_d8 = CONCAT17((char)((uint)fVar17 >> 0x18),
                         CONCAT16((char)((uint)fVar17 >> 0x10),
                                  CONCAT15((char)((uint)fVar17 >> 8),
                                           CONCAT14(SUB41(fVar17,0),
                                                    (float)uStack_c8 +
                                                    (float)CONCAT13((byte)((uint)fVar60 >> 0x18) &
                                                                    (byte)((ulong)uVar33 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar60 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)uVar33 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar60 >> 8) & (byte)((ulong)uVar33 >> 8),
                                                  SUB41(fVar60,0) & (byte)uVar33))) * 150000.0))));
    local_e0 = CONCAT17((char)((uint)fVar8 >> 0x18),
                        CONCAT16((char)((uint)fVar8 >> 0x10),
                                 CONCAT15((char)((uint)fVar8 >> 8),
                                          CONCAT14(SUB41(fVar8,0),
                                                   (float)local_d0 +
                                                   (float)CONCAT13((byte)((uint)fVar59 >> 0x18) &
                                                                   (byte)((ulong)uVar32 >> 0x18),
                                                                   CONCAT12((byte)((uint)fVar59 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar32 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((uint)
                                                  fVar59 >> 8) & (byte)((ulong)uVar32 >> 8),
                                                  SUB41(fVar59,0) & (byte)uVar32))) * 150000.0))));
    uVar38 = FUN_006c8060(param_2,&local_d0,&local_e0,2,0,0,&local_b8,2,&local_bc,0,1,0);
    if (0 < local_bc) {
      uVar38 = 0xffffffff;
    }
    if (-1 < (int)uVar38) break;
    uVar40 = uVar40 + 1;
    if (0x167 < uVar40) {
      return false;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar39 + uVar40;
  }
  return (uVar38 & 1) == 0;
}


