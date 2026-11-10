/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9eca0; name: FUN_00e9eca0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00e9eca0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  undefined8 uVar38;
  float fVar39;
  uint uVar40;
  int iVar41;
  long *plVar42;
  undefined8 uVar43;
  long lVar44;
  undefined8 *puVar45;
  uint uVar46;
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
  undefined1 uVar47;
  undefined1 extraout_var_10;
  undefined1 uVar48;
  undefined1 extraout_var_11;
  undefined1 uVar49;
  undefined1 extraout_var_12;
  undefined1 uVar50;
  undefined1 extraout_var_13;
  undefined1 uVar51;
  undefined1 extraout_var_14;
  undefined1 uVar52;
  undefined1 extraout_var_15;
  undefined1 uVar53;
  undefined1 extraout_var_16;
  undefined1 uVar54;
  undefined1 extraout_var_17;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  
  lVar44 = *(long *)(*(long *)(param_1 + 0x620) + 0x80);
  if ((lVar44 != 0) && (puVar45 = *(undefined8 **)(lVar44 + 0x60), puVar45 != (undefined8 *)0x0)) {
    plVar42 = (long *)(**(code **)*puVar45)(puVar45);
    if (((*PTR_DAT_02715280 & 1) == 0) &&
       (iVar41 = __cxa_guard_acquire(PTR_DAT_02715280), iVar41 != 0)) {
      uVar43 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715288 = uVar43;
      __cxa_guard_release(PTR_DAT_02715280);
    }
    for (; plVar42 != (long *)0x0; plVar42 = (long *)*plVar42) {
      if (plVar42 == (long *)PTR_DAT_02715288) {
        if ((*(char *)(puVar45 + 2) != '\0') && (puVar45[0x22] != 0)) {
          return 1;
        }
        break;
      }
    }
  }
  local_90 = 0x7abdda2367dcab90;
  local_88 = 0x665a75d14db0d6c7;
  FUN_007101c0(param_1 + 0xa0);
  fVar39 = DAT_01d4c4d4;
  uVar38 = _UNK_01d4ae98;
  uVar37 = _DAT_01d4ae90;
  uVar36 = _UNK_01d4ae88;
  uVar35 = _DAT_01d4ae80;
  uVar34 = DAT_01d4ab58;
  uVar33 = DAT_01d4ab50;
  uVar32 = DAT_01cd5418;
  uVar31 = DAT_01cd5270;
  uVar30 = DAT_01cd5120;
  uVar29 = DAT_01cd50f8;
  uVar28 = DAT_01cd50b0;
  uVar27 = DAT_01cd4f90;
  uVar46 = 0;
  uVar47 = (undefined1)_UNK_01d49dc8;
  uVar48 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
  uVar49 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
  uVar50 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
  uVar51 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
  uVar52 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
  uVar53 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
  uVar54 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
  auVar1[8] = uVar47;
  auVar1._0_8_ = _DAT_01d49dc0;
  auVar1[9] = uVar48;
  auVar1[10] = uVar49;
  auVar1[0xb] = uVar50;
  auVar1[0xc] = uVar51;
  auVar1[0xd] = uVar52;
  auVar1[0xe] = uVar53;
  auVar1[0xf] = uVar54;
  uVar14 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd4f90);
  auVar2[8] = uVar47;
  auVar2._0_8_ = _DAT_01d49dc0;
  auVar2[9] = uVar48;
  auVar2[10] = uVar49;
  auVar2[0xb] = uVar50;
  auVar2[0xc] = uVar51;
  auVar2[0xd] = uVar52;
  auVar2[0xe] = uVar53;
  auVar2[0xf] = uVar54;
  uVar22 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
  auVar3[8] = uVar47;
  auVar3._0_8_ = _DAT_01d49dc0;
  auVar3[9] = uVar48;
  auVar3[10] = uVar49;
  auVar3[0xb] = uVar50;
  auVar3[0xc] = uVar51;
  auVar3[0xd] = uVar52;
  auVar3[0xe] = uVar53;
  auVar3[0xf] = uVar54;
  uVar43 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  while( true ) {
    FUN_00a92cd0(SUB41((float)CONCAT13(extraout_var_08,
                                       CONCAT12(extraout_var_06,
                                                CONCAT11(extraout_var_04,extraout_var_02))) +
                       (float)(int)uVar46 * fVar39,0),0,0);
    fVar21 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
             (float)uVar35;
    fVar24 = (float)CONCAT13(extraout_var_09,
                             CONCAT12(extraout_var_07,CONCAT11(extraout_var_05,extraout_var_03))) *
             (float)((ulong)uVar35 >> 0x20);
    uVar47 = SUB41(fVar24,0);
    uVar48 = (undefined1)((uint)fVar24 >> 8);
    uVar49 = (undefined1)((uint)fVar24 >> 0x10);
    uVar50 = (undefined1)((uint)fVar24 >> 0x18);
    fVar25 = (float)CONCAT13(extraout_var_13,
                             CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))) *
             (float)uVar36;
    uVar51 = SUB41(fVar25,0);
    uVar52 = (undefined1)((uint)fVar25 >> 8);
    uVar53 = (undefined1)((uint)fVar25 >> 0x10);
    uVar54 = (undefined1)((uint)fVar25 >> 0x18);
    fVar26 = (float)CONCAT13(extraout_var_17,
                             CONCAT12(extraout_var_16,CONCAT11(extraout_var_15,extraout_var_14))) *
             (float)((ulong)uVar36 >> 0x20);
    uVar59 = SUB41(fVar26,0);
    uVar60 = (undefined1)((uint)fVar26 >> 8);
    uVar61 = (undefined1)((uint)fVar26 >> 0x10);
    uVar62 = (undefined1)((uint)fVar26 >> 0x18);
    fVar58 = (float)((ulong)uVar14 >> 0x20);
    auVar15[4] = uVar47;
    auVar15._0_4_ = fVar21;
    auVar15[5] = uVar48;
    auVar15[6] = uVar49;
    auVar15[7] = uVar50;
    auVar15[8] = uVar51;
    auVar15[9] = uVar52;
    auVar15[10] = uVar53;
    auVar15[0xb] = uVar54;
    auVar15[0xc] = uVar59;
    auVar15[0xd] = uVar60;
    auVar15[0xe] = uVar61;
    auVar15[0xf] = uVar62;
    uVar63 = a64_TBL(ZEXT816(0),auVar15,uVar27);
    auVar16[4] = uVar47;
    auVar16._0_4_ = fVar21;
    auVar16[5] = uVar48;
    auVar16[6] = uVar49;
    auVar16[7] = uVar50;
    auVar16[8] = uVar51;
    auVar16[9] = uVar52;
    auVar16[10] = uVar53;
    auVar16[0xb] = uVar54;
    auVar16[0xc] = uVar59;
    auVar16[0xd] = uVar60;
    auVar16[0xe] = uVar61;
    auVar16[0xf] = uVar62;
    uVar64 = a64_TBL(ZEXT816(0),auVar16,uVar30);
    auVar17[4] = uVar47;
    auVar17._0_4_ = fVar21;
    auVar17[5] = uVar48;
    auVar17[6] = uVar49;
    auVar17[7] = uVar50;
    auVar17[8] = uVar51;
    auVar17[9] = uVar52;
    auVar17[10] = uVar53;
    auVar17[0xb] = uVar54;
    auVar17[0xc] = uVar59;
    auVar17[0xd] = uVar60;
    auVar17[0xe] = uVar61;
    auVar17[0xf] = uVar62;
    uVar67 = a64_TBL(ZEXT816(0),auVar17,uVar32);
    fVar66 = (float)((ulong)uVar22 >> 0x20);
    auVar18[4] = uVar47;
    auVar18._0_4_ = fVar21;
    auVar18[5] = uVar48;
    auVar18[6] = uVar49;
    auVar18[7] = uVar50;
    auVar18[8] = uVar51;
    auVar18[9] = uVar52;
    auVar18[10] = uVar53;
    auVar18[0xb] = uVar54;
    auVar18[0xc] = uVar59;
    auVar18[0xd] = uVar60;
    auVar18[0xe] = uVar61;
    auVar18[0xf] = uVar62;
    uVar65 = a64_TBL(ZEXT816(0),auVar18,uVar29);
    auVar19[4] = uVar47;
    auVar19._0_4_ = fVar21;
    auVar19[5] = uVar48;
    auVar19[6] = uVar49;
    auVar19[7] = uVar50;
    auVar19[8] = uVar51;
    auVar19[9] = uVar52;
    auVar19[10] = uVar53;
    auVar19[0xb] = uVar54;
    auVar19[0xc] = uVar59;
    auVar19[0xd] = uVar60;
    auVar19[0xe] = uVar61;
    auVar19[0xf] = uVar62;
    uVar70 = a64_TBL(ZEXT816(0),auVar19,uVar31);
    auVar20[4] = uVar47;
    auVar20._0_4_ = fVar21;
    auVar20[5] = uVar48;
    auVar20[6] = uVar49;
    auVar20[7] = uVar50;
    auVar20[8] = SUB41(fVar21,0);
    auVar20[9] = (char)((uint)fVar21 >> 8);
    auVar20[10] = (char)((uint)fVar21 >> 0x10);
    auVar20[0xb] = (char)((uint)fVar21 >> 0x18);
    auVar20[0xc] = uVar47;
    auVar20[0xd] = uVar48;
    auVar20[0xe] = uVar49;
    auVar20[0xf] = uVar50;
    uVar23 = a64_TBL(ZEXT816(0),auVar20,uVar28);
    fVar73 = (float)uVar37;
    fVar74 = (float)((ulong)uVar37 >> 0x20);
    fVar75 = (float)uVar38;
    fVar76 = (float)((ulong)uVar38 >> 0x20);
    fVar7 = (float)((ulong)uVar43 >> 0x20);
    fVar55 = (fVar21 * (float)uVar14 + fVar73 * (float)uVar63 * 0.0 +
             fVar73 * (float)uVar43 * (float)uVar65) - (float)uVar22 * (float)uVar67;
    fVar56 = (fVar24 * fVar58 + fVar74 * (float)((ulong)uVar63 >> 0x20) * 0.0 +
             fVar74 * fVar7 * (float)((ulong)uVar65 >> 0x20)) -
             fVar66 * (float)((ulong)uVar67 >> 0x20);
    fVar57 = (fVar25 * (float)uVar14 + fVar75 * (float)uVar22 * (float)uVar64 +
             fVar75 * (float)uVar23 * 0.0) - (float)uVar43 * (float)uVar70;
    fVar58 = (fVar26 * fVar58 + fVar76 * fVar66 * (float)((ulong)uVar64 >> 0x20) +
             fVar76 * (float)((ulong)uVar23 >> 0x20) * 0.0) - fVar7 * (float)((ulong)uVar70 >> 0x20)
    ;
    auVar4[1] = extraout_var;
    auVar4[0] = extraout_b0;
    auVar4[2] = extraout_var_00;
    auVar4[3] = extraout_var_01;
    auVar4[4] = extraout_var_03;
    auVar4[5] = extraout_var_05;
    auVar4[6] = extraout_var_07;
    auVar4[7] = extraout_var_09;
    auVar4[8] = extraout_var_10;
    auVar4[9] = extraout_var_11;
    auVar4[10] = extraout_var_12;
    auVar4[0xb] = extraout_var_13;
    auVar4[0xc] = extraout_var_14;
    auVar4[0xd] = extraout_var_15;
    auVar4[0xe] = extraout_var_16;
    auVar4[0xf] = extraout_var_17;
    uVar64 = a64_TBL(ZEXT816(0),auVar4,uVar27);
    auVar5[1] = extraout_var;
    auVar5[0] = extraout_b0;
    auVar5[2] = extraout_var_00;
    auVar5[3] = extraout_var_01;
    auVar5[4] = extraout_var_03;
    auVar5[5] = extraout_var_05;
    auVar5[6] = extraout_var_07;
    auVar5[7] = extraout_var_09;
    auVar5[8] = extraout_var_10;
    auVar5[9] = extraout_var_11;
    auVar5[10] = extraout_var_12;
    auVar5[0xb] = extraout_var_13;
    auVar5[0xc] = extraout_var_14;
    auVar5[0xd] = extraout_var_15;
    auVar5[0xe] = extraout_var_16;
    auVar5[0xf] = extraout_var_17;
    uVar65 = a64_TBL(ZEXT816(0),auVar5,uVar29);
    fVar21 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    auVar8._4_4_ = fVar56;
    auVar8._0_4_ = fVar55;
    auVar8._8_4_ = fVar57;
    auVar8._12_4_ = fVar58;
    uVar70 = a64_TBL(ZEXT816(0),auVar8,uVar27);
    auVar9._4_4_ = fVar56;
    auVar9._0_4_ = fVar55;
    auVar9._8_4_ = fVar57;
    auVar9._12_4_ = fVar58;
    uVar71 = a64_TBL(ZEXT816(0),auVar9,uVar30);
    fVar24 = (float)((ulong)uVar64 >> 0x20);
    auVar10._4_4_ = fVar56;
    auVar10._0_4_ = fVar55;
    auVar10._8_4_ = fVar57;
    auVar10._12_4_ = fVar58;
    uVar72 = a64_TBL(ZEXT816(0),auVar10,uVar31);
    fVar66 = (float)((ulong)uVar65 >> 0x20);
    auVar6[1] = extraout_var;
    auVar6[0] = extraout_b0;
    auVar6[2] = extraout_var_00;
    auVar6[3] = extraout_var_01;
    auVar6[4] = extraout_var_03;
    auVar6[5] = extraout_var_05;
    auVar6[6] = extraout_var_07;
    auVar6[7] = extraout_var_09;
    auVar6[8] = extraout_var_10;
    auVar6[9] = extraout_var_11;
    auVar6[10] = extraout_var_12;
    auVar6[0xb] = extraout_var_13;
    auVar6[0xc] = extraout_var_14;
    auVar6[0xd] = extraout_var_15;
    auVar6[0xe] = extraout_var_16;
    auVar6[0xf] = extraout_var_17;
    uVar68 = a64_TBL(ZEXT816(0),auVar6,uVar32);
    fVar7 = (float)CONCAT13(extraout_var_01,
                            CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    auVar11._4_4_ = fVar56;
    auVar11._0_4_ = fVar55;
    auVar11._8_4_ = fVar57;
    auVar11._12_4_ = fVar58;
    uVar23 = a64_TBL(ZEXT816(0),auVar11,uVar29);
    auVar12._4_4_ = fVar56;
    auVar12._0_4_ = fVar55;
    auVar12._8_4_ = fVar57;
    auVar12._12_4_ = fVar58;
    uVar67 = a64_TBL(ZEXT816(0),auVar12,uVar32);
    auVar13._4_4_ = fVar56;
    auVar13._0_4_ = fVar55;
    auVar13._8_4_ = fVar55;
    auVar13._12_4_ = fVar56;
    uVar63 = a64_TBL(ZEXT816(0),auVar13,uVar28);
    fVar69 = (float)((ulong)uVar68 >> 0x20);
    fVar25 = ((float)uVar64 * fVar55 + fVar73 * fVar21 * (float)uVar70 +
             fVar73 * (float)uVar68 * (float)uVar23) - (float)uVar65 * (float)uVar67;
    fVar21 = (fVar24 * fVar56 +
              fVar74 * (float)(CONCAT17(extraout_var_09,
                                        CONCAT16(extraout_var_07,
                                                 CONCAT15(extraout_var_05,
                                                          CONCAT14(extraout_var_03,fVar21)))) >>
                              0x20) * (float)((ulong)uVar70 >> 0x20) +
             fVar74 * fVar69 * (float)((ulong)uVar23 >> 0x20)) -
             fVar66 * (float)((ulong)uVar67 >> 0x20);
    fVar26 = ((float)uVar64 * fVar57 + fVar75 * (float)uVar65 * (float)uVar71 +
             fVar75 * fVar7 * (float)uVar63) - (float)uVar68 * (float)uVar72;
    fVar24 = (fVar24 * fVar58 + fVar76 * fVar66 * (float)((ulong)uVar71 >> 0x20) +
             fVar76 * (float)(CONCAT17(extraout_var_09,
                                       CONCAT16(extraout_var_07,
                                                CONCAT15(extraout_var_05,
                                                         CONCAT14(extraout_var_03,fVar7)))) >> 0x20)
                      * (float)((ulong)uVar63 >> 0x20)) - fVar69 * (float)((ulong)uVar72 >> 0x20);
    local_a4 = 0;
    fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) +
            (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & (byte)((ulong)uVar33 >> 0x38),
                            CONCAT12((byte)((uint)fVar21 >> 0x10) & (byte)((ulong)uVar33 >> 0x30),
                                     CONCAT11((byte)((uint)fVar21 >> 8) &
                                              (byte)((ulong)uVar33 >> 0x28),
                                              SUB41(fVar21,0) & (byte)((ulong)uVar33 >> 0x20)))) *
            200000.0;
    fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & (byte)((ulong)uVar34 >> 0x38),
                             CONCAT12((byte)((uint)fVar24 >> 0x10) & (byte)((ulong)uVar34 >> 0x30),
                                      CONCAT11((byte)((uint)fVar24 >> 8) &
                                               (byte)((ulong)uVar34 >> 0x28),
                                               SUB41(fVar24,0) & (byte)((ulong)uVar34 >> 0x20)))) *
             200000.0;
    uStack_98 = CONCAT17((char)((uint)fVar21 >> 0x18),
                         CONCAT16((char)((uint)fVar21 >> 0x10),
                                  CONCAT15((char)((uint)fVar21 >> 8),
                                           CONCAT14(SUB41(fVar21,0),
                                                    (float)*(undefined8 *)(param_1 + 0xb8) +
                                                    (float)CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                                                    (byte)((ulong)uVar34 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar26 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)uVar34 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar26 >> 8) & (byte)((ulong)uVar34 >> 8),
                                                  SUB41(fVar26,0) & (byte)uVar34))) * 200000.0))));
    local_a0 = CONCAT17((char)((uint)fVar7 >> 0x18),
                        CONCAT16((char)((uint)fVar7 >> 0x10),
                                 CONCAT15((char)((uint)fVar7 >> 8),
                                          CONCAT14(SUB41(fVar7,0),
                                                   (float)*(undefined8 *)(param_1 + 0xb0) +
                                                   (float)CONCAT13((byte)((uint)fVar25 >> 0x18) &
                                                                   (byte)((ulong)uVar33 >> 0x18),
                                                                   CONCAT12((byte)((uint)fVar25 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar33 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((uint)
                                                  fVar25 >> 8) & (byte)((ulong)uVar33 >> 8),
                                                  SUB41(fVar25,0) & (byte)uVar33))) * 200000.0))));
    uVar40 = FUN_006c8060(*(undefined8 *)(param_1 + 0x288),param_1 + 0xb0,&local_a0,2,&local_90,2,0,
                          0,&local_a4,0,1,0);
    if ((-1 < (int)uVar40) && (local_a4 == 0)) break;
    uVar46 = uVar46 + 1;
    if (3 < uVar46) {
      return 1;
    }
  }
  return uVar40 & 1;
}


