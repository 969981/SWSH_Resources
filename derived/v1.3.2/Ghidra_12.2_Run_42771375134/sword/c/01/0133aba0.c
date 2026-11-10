/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133aba0; name: FUN_0133aba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133aba0(undefined8 param_1,long *param_2)

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
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  ulong uVar40;
  long lVar41;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  lVar41 = *param_2;
  uVar40 = FUN_012e49d0(*(undefined8 *)(lVar41 + 0x10));
  if ((uVar40 & 1) != 0) {
    FUN_012e54a0(&local_60,*(undefined8 *)(lVar41 + 0x10));
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    uVar39 = DAT_01cd5418;
    uVar38 = DAT_01cd5270;
    uVar34 = DAT_01cd5120;
    uVar37 = DAT_01cd50f8;
    uVar36 = DAT_01cd50b0;
    uVar25 = DAT_01cd4f90;
    pauVar1 = (undefined1 (*) [12])(local_60 + 0xa0);
    fVar56 = (float)((ulong)*(undefined8 *)(local_60 + 0xa8) >> 0x20);
    fVar54 = (float)*(undefined8 *)*pauVar1;
    fVar55 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    uVar60 = (undefined4)_UNK_01d4b378;
    uVar61 = (undefined4)((ulong)_UNK_01d4b378 >> 0x20);
    auVar29._8_4_ = uVar60;
    auVar29._0_8_ = _DAT_01d4b370;
    auVar29._12_4_ = uVar61;
    uVar62 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50f8);
    fVar23 = fVar54 * (float)_DAT_01d4ae80;
    fVar26 = fVar55 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar42 = SUB41(fVar26,0);
    uVar43 = (undefined1)((uint)fVar26 >> 8);
    uVar44 = (undefined1)((uint)fVar26 >> 0x10);
    uVar45 = (undefined1)((uint)fVar26 >> 0x18);
    fVar27 = (float)*(undefined8 *)(local_60 + 0xa8) * (float)_UNK_01d4ae88;
    uVar46 = SUB41(fVar27,0);
    uVar47 = (undefined1)((uint)fVar27 >> 8);
    uVar48 = (undefined1)((uint)fVar27 >> 0x10);
    uVar49 = (undefined1)((uint)fVar27 >> 0x18);
    fVar28 = fVar56 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar50 = SUB41(fVar28,0);
    uVar51 = (undefined1)((uint)fVar28 >> 8);
    uVar52 = (undefined1)((uint)fVar28 >> 0x10);
    uVar53 = (undefined1)((uint)fVar28 >> 0x18);
    auVar30._8_4_ = uVar60;
    auVar30._0_8_ = _DAT_01d4b370;
    auVar30._12_4_ = uVar61;
    uVar63 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd4f90);
    auVar31._8_4_ = uVar60;
    auVar31._0_8_ = _DAT_01d4b370;
    auVar31._12_4_ = uVar61;
    uVar32 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5418);
    fVar58 = (float)((ulong)uVar32 >> 0x20);
    auVar17[4] = uVar42;
    auVar17._0_4_ = fVar23;
    auVar17[5] = uVar43;
    auVar17[6] = uVar44;
    auVar17[7] = uVar45;
    auVar17[8] = uVar46;
    auVar17[9] = uVar47;
    auVar17[10] = uVar48;
    auVar17[0xb] = uVar49;
    auVar17[0xc] = uVar50;
    auVar17[0xd] = uVar51;
    auVar17[0xe] = uVar52;
    auVar17[0xf] = uVar53;
    uVar65 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd4f90);
    auVar18[4] = uVar42;
    auVar18._0_4_ = fVar23;
    auVar18[5] = uVar43;
    auVar18[6] = uVar44;
    auVar18[7] = uVar45;
    auVar18[8] = uVar46;
    auVar18[9] = uVar47;
    auVar18[10] = uVar48;
    auVar18[0xb] = uVar49;
    auVar18[0xc] = uVar50;
    auVar18[0xd] = uVar51;
    auVar18[0xe] = uVar52;
    auVar18[0xf] = uVar53;
    uVar67 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5120);
    fVar64 = (float)((ulong)uVar62 >> 0x20);
    auVar19[4] = uVar42;
    auVar19._0_4_ = fVar23;
    auVar19[5] = uVar43;
    auVar19[6] = uVar44;
    auVar19[7] = uVar45;
    auVar19[8] = uVar46;
    auVar19[9] = uVar47;
    auVar19[10] = uVar48;
    auVar19[0xb] = uVar49;
    auVar19[0xc] = uVar50;
    auVar19[0xd] = uVar51;
    auVar19[0xe] = uVar52;
    auVar19[0xf] = uVar53;
    uVar69 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5270);
    auVar20[4] = uVar42;
    auVar20._0_4_ = fVar23;
    auVar20[5] = uVar43;
    auVar20[6] = uVar44;
    auVar20[7] = uVar45;
    auVar20[8] = uVar46;
    auVar20[9] = uVar47;
    auVar20[10] = uVar48;
    auVar20[0xb] = uVar49;
    auVar20[0xc] = uVar50;
    auVar20[0xd] = uVar51;
    auVar20[0xe] = uVar52;
    auVar20[0xf] = uVar53;
    uVar68 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5418);
    fVar13 = (float)((ulong)uVar63 >> 0x20);
    auVar21[4] = uVar42;
    auVar21._0_4_ = fVar23;
    auVar21[5] = uVar43;
    auVar21[6] = uVar44;
    auVar21[7] = uVar45;
    auVar21[8] = uVar46;
    auVar21[9] = uVar47;
    auVar21[10] = uVar48;
    auVar21[0xb] = uVar49;
    auVar21[0xc] = uVar50;
    auVar21[0xd] = uVar51;
    auVar21[0xe] = uVar52;
    auVar21[0xf] = uVar53;
    uVar66 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
    auVar22[4] = uVar42;
    auVar22._0_4_ = fVar23;
    auVar22[5] = uVar43;
    auVar22[6] = uVar44;
    auVar22[7] = uVar45;
    auVar22[8] = SUB41(fVar23,0);
    auVar22[9] = (char)((uint)fVar23 >> 8);
    auVar22[10] = (char)((uint)fVar23 >> 0x10);
    auVar22[0xb] = (char)((uint)fVar23 >> 0x18);
    auVar22[0xc] = uVar42;
    auVar22[0xd] = uVar43;
    auVar22[0xe] = uVar44;
    auVar22[0xf] = uVar45;
    uVar24 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50b0);
    fVar70 = (float)_DAT_01d4ae90;
    fVar71 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar72 = (float)_UNK_01d4ae98;
    fVar73 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar14._12_4_ = fVar56;
    auVar14._0_12_ = *pauVar1;
    uVar33 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
    fVar57 = (float)uVar33;
    fVar59 = (float)((ulong)uVar33 >> 0x20);
    auVar15._12_4_ = fVar56;
    auVar15._0_12_ = *pauVar1;
    uVar33 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
    fVar23 = (fVar23 * (float)uVar63 + fVar70 * (float)uVar65 * 0.0 +
             fVar70 * (float)uVar32 * (float)uVar66) - (float)uVar62 * (float)uVar68;
    fVar26 = (fVar26 * fVar13 + fVar71 * (float)((ulong)uVar65 >> 0x20) * 0.0 +
             fVar71 * fVar58 * (float)((ulong)uVar66 >> 0x20)) -
             fVar64 * (float)((ulong)uVar68 >> 0x20);
    uVar42 = SUB41(fVar26,0);
    uVar43 = (undefined1)((uint)fVar26 >> 8);
    uVar44 = (undefined1)((uint)fVar26 >> 0x10);
    uVar45 = (undefined1)((uint)fVar26 >> 0x18);
    fVar27 = (fVar27 * (float)uVar63 + fVar72 * (float)uVar62 * (float)uVar67 +
             fVar72 * (float)uVar24 * 0.0) - (float)uVar32 * (float)uVar69;
    uVar46 = SUB41(fVar27,0);
    uVar47 = (undefined1)((uint)fVar27 >> 8);
    uVar48 = (undefined1)((uint)fVar27 >> 0x10);
    uVar49 = (undefined1)((uint)fVar27 >> 0x18);
    fVar13 = (fVar28 * fVar13 + fVar73 * fVar64 * (float)((ulong)uVar67 >> 0x20) +
             fVar73 * (float)((ulong)uVar24 >> 0x20) * 0.0) -
             fVar58 * (float)((ulong)uVar69 >> 0x20);
    uVar50 = SUB41(fVar13,0);
    uVar51 = (undefined1)((uint)fVar13 >> 8);
    uVar52 = (undefined1)((uint)fVar13 >> 0x10);
    uVar53 = (undefined1)((uint)fVar13 >> 0x18);
    auVar8[4] = uVar42;
    auVar8._0_4_ = fVar23;
    auVar8[5] = uVar43;
    auVar8[6] = uVar44;
    auVar8[7] = uVar45;
    auVar8[8] = uVar46;
    auVar8[9] = uVar47;
    auVar8[10] = uVar48;
    auVar8[0xb] = uVar49;
    auVar8[0xc] = uVar50;
    auVar8[0xd] = uVar51;
    auVar8[0xe] = uVar52;
    auVar8[0xf] = uVar53;
    uVar32 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
    fVar28 = (float)uVar33;
    fVar58 = (float)((ulong)uVar33 >> 0x20);
    auVar9[4] = uVar42;
    auVar9._0_4_ = fVar23;
    auVar9[5] = uVar43;
    auVar9[6] = uVar44;
    auVar9[7] = uVar45;
    auVar9[8] = uVar46;
    auVar9[9] = uVar47;
    auVar9[10] = uVar48;
    auVar9[0xb] = uVar49;
    auVar9[0xc] = uVar50;
    auVar9[0xd] = uVar51;
    auVar9[0xe] = uVar52;
    auVar9[0xf] = uVar53;
    uVar62 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5120);
    auVar16._12_4_ = fVar56;
    auVar16._0_12_ = *pauVar1;
    uVar63 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
    fVar56 = (float)uVar63;
    fVar64 = (float)((ulong)uVar63 >> 0x20);
    auVar10[4] = uVar42;
    auVar10._0_4_ = fVar23;
    auVar10[5] = uVar43;
    auVar10[6] = uVar44;
    auVar10[7] = uVar45;
    auVar10[8] = uVar46;
    auVar10[9] = uVar47;
    auVar10[10] = uVar48;
    auVar10[0xb] = uVar49;
    auVar10[0xc] = uVar50;
    auVar10[0xd] = uVar51;
    auVar10[0xe] = uVar52;
    auVar10[0xf] = uVar53;
    uVar24 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
    auVar35._4_4_ =
         (int)(CONCAT17(uVar45,CONCAT16(uVar44,CONCAT15(uVar43,CONCAT14(uVar42,fVar23)))) >> 0x20);
    auVar35._0_4_ = fVar23;
    auVar35._8_4_ = fVar23;
    auVar35._12_4_ =
         (int)(CONCAT17(uVar45,CONCAT16(uVar44,CONCAT15(uVar43,CONCAT14(uVar42,fVar23)))) >> 0x20);
    uVar33 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd50b0);
    auVar11[4] = uVar42;
    auVar11._0_4_ = fVar23;
    auVar11[5] = uVar43;
    auVar11[6] = uVar44;
    auVar11[7] = uVar45;
    auVar11[8] = uVar46;
    auVar11[9] = uVar47;
    auVar11[10] = uVar48;
    auVar11[0xb] = uVar49;
    auVar11[0xc] = uVar50;
    auVar11[0xd] = uVar51;
    auVar11[0xe] = uVar52;
    auVar11[0xf] = uVar53;
    uVar65 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    auVar12[4] = uVar42;
    auVar12._0_4_ = fVar23;
    auVar12[5] = uVar43;
    auVar12[6] = uVar44;
    auVar12[7] = uVar45;
    auVar12[8] = uVar46;
    auVar12[9] = uVar47;
    auVar12[10] = uVar48;
    auVar12[0xb] = uVar49;
    auVar12[0xc] = uVar50;
    auVar12[0xd] = uVar51;
    auVar12[0xe] = uVar52;
    auVar12[0xf] = uVar53;
    uVar63 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5270);
    fVar23 = (fVar28 * fVar23 + fVar70 * fVar54 * (float)uVar32 + fVar70 * fVar56 * (float)uVar24) -
             fVar57 * (float)uVar65;
    fVar26 = (fVar58 * fVar26 + fVar71 * fVar55 * (float)((ulong)uVar32 >> 0x20) +
             fVar71 * fVar64 * (float)((ulong)uVar24 >> 0x20)) -
             fVar59 * (float)((ulong)uVar65 >> 0x20);
    fVar27 = (fVar28 * fVar27 + fVar72 * fVar57 * (float)uVar62 + fVar72 * fVar54 * (float)uVar33) -
             fVar56 * (float)uVar63;
    fVar13 = (fVar58 * fVar13 + fVar73 * fVar59 * (float)((ulong)uVar62 >> 0x20) +
             fVar73 * fVar55 * (float)((ulong)uVar33 >> 0x20)) -
             fVar64 * (float)((ulong)uVar63 >> 0x20);
    uStack_58 = CONCAT44((float)((ulong)*(undefined8 *)(local_60 + 0xb8) >> 0x20) +
                         (float)CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                         (byte)((ulong)DAT_01d4ab58 >> 0x38),
                                         CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                                  CONCAT11((byte)((uint)fVar13 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                                           SUB41(fVar13,0) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 0x20)))),
                         (float)*(undefined8 *)(local_60 + 0xb8) +
                         (float)CONCAT13((byte)((uint)fVar27 >> 0x18) &
                                         (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                         CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar27 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 8),
                                                           SUB41(fVar27,0) & (byte)DAT_01d4ab58))));
    local_60 = CONCAT44((float)((ulong)*(undefined8 *)(local_60 + 0xb0) >> 0x20) +
                        (float)CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                        (byte)((ulong)DAT_01d4ab50 >> 0x38),
                                        CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                 (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                                 CONCAT11((byte)((uint)fVar26 >> 8) &
                                                          (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                                          SUB41(fVar26,0) &
                                                          (byte)((ulong)DAT_01d4ab50 >> 0x20)))),
                        (float)*(undefined8 *)(local_60 + 0xb0) +
                        (float)CONCAT13((byte)((uint)fVar23 >> 0x18) &
                                        (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                        CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                                 (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar23 >> 8) &
                                                          (byte)((ulong)DAT_01d4ab50 >> 8),
                                                          SUB41(fVar23,0) & (byte)DAT_01d4ab50))));
    FUN_012dc9c0(*(undefined8 *)(lVar41 + 0x10),&local_60);
    *(undefined1 *)(lVar41 + 0x18) = 1;
    uVar62 = *(undefined8 *)(lVar41 + 0x10);
    FUN_00a92cd0(DAT_01d4bb38,0,0);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_4_ = extraout_var_00;
    auVar2._12_4_ = extraout_var_01;
    uVar24 = a64_TBL(ZEXT816(0),auVar2,uVar25);
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_4_ = extraout_var_00;
    auVar3._12_4_ = extraout_var_01;
    uVar32 = a64_TBL(ZEXT816(0),auVar3,uVar34);
    auVar4._4_4_ = extraout_var;
    auVar4._0_4_ = extraout_s0;
    auVar4._8_4_ = extraout_var_00;
    auVar4._12_4_ = extraout_var_01;
    uVar34 = a64_TBL(ZEXT816(0),auVar4,uVar38);
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_4_ = extraout_var_00;
    auVar5._12_4_ = extraout_var_01;
    uVar25 = a64_TBL(ZEXT816(0),auVar5,uVar39);
    auVar6._4_4_ = extraout_var;
    auVar6._0_4_ = extraout_s0;
    auVar6._8_4_ = extraout_var_00;
    auVar6._12_4_ = extraout_var_01;
    uVar33 = a64_TBL(ZEXT816(0),auVar6,uVar37);
    auVar7._4_4_ = extraout_var;
    auVar7._0_4_ = extraout_s0;
    auVar7._8_4_ = extraout_s0;
    auVar7._12_4_ = extraout_var;
    uVar63 = a64_TBL(ZEXT816(0),auVar7,uVar36);
    fVar13 = (fVar58 * extraout_var + fVar71 * fVar55 * (float)((ulong)uVar24 >> 0x20) +
             fVar71 * fVar64 * (float)((ulong)uVar33 >> 0x20)) -
             fVar59 * (float)((ulong)uVar25 >> 0x20);
    fVar23 = (fVar58 * extraout_var_01 + fVar73 * fVar59 * (float)((ulong)uVar32 >> 0x20) +
             fVar73 * fVar55 * (float)((ulong)uVar63 >> 0x20)) -
             fVar64 * (float)((ulong)uVar34 >> 0x20);
    uStack_68 = CONCAT17((char)((uint)fVar23 >> 0x18),
                         CONCAT16((char)((uint)fVar23 >> 0x10),
                                  CONCAT15((char)((uint)fVar23 >> 8),
                                           CONCAT14(SUB41(fVar23,0),
                                                    (fVar28 * extraout_var_00 +
                                                     fVar72 * fVar57 * (float)uVar32 +
                                                    fVar72 * fVar54 * (float)uVar63) -
                                                    fVar56 * (float)uVar34))));
    local_70 = CONCAT17((char)((uint)fVar13 >> 0x18),
                        CONCAT16((char)((uint)fVar13 >> 0x10),
                                 CONCAT15((char)((uint)fVar13 >> 8),
                                          CONCAT14(SUB41(fVar13,0),
                                                   (fVar28 * extraout_s0 +
                                                    fVar70 * fVar54 * (float)uVar24 +
                                                   fVar70 * fVar56 * (float)uVar33) -
                                                   fVar57 * (float)uVar25))));
    FUN_012dc7f0(uVar62,&local_70);
  }
  return;
}


