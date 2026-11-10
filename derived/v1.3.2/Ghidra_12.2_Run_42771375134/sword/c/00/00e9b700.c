/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9b700; name: FUN_00e9b700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e9b700(long param_1,undefined8 *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [12];
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar38 [16];
  int iVar42;
  float fVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  float fVar47;
  int iVar48;
  undefined1 auVar49 [16];
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  float local_24;
  float local_18;
  float local_14;
  
  pfVar1 = (float *)(param_1 + 0xa0);
  uVar10 = *(undefined8 *)(param_1 + 0xa8);
  uVar23 = (undefined1)((ulong)uVar10 >> 8);
  uVar24 = (undefined1)((ulong)uVar10 >> 0x10);
  uVar25 = (undefined1)((ulong)uVar10 >> 0x18);
  uVar26 = (undefined1)((ulong)uVar10 >> 0x20);
  uVar27 = (undefined1)((ulong)uVar10 >> 0x28);
  uVar28 = (undefined1)((ulong)uVar10 >> 0x30);
  uVar30 = (undefined1)((ulong)uVar10 >> 0x38);
  uVar29 = (undefined1)_UNK_01d49dc8;
  uVar31 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
  uVar50 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
  uVar51 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
  uVar52 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
  uVar53 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
  uVar54 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
  uVar55 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
  auVar7[8] = uVar29;
  auVar7._0_8_ = _DAT_01d49dc0;
  auVar7[9] = uVar31;
  auVar7[10] = uVar50;
  auVar7[0xb] = uVar51;
  auVar7[0xc] = uVar52;
  auVar7[0xd] = uVar53;
  auVar7[0xe] = uVar54;
  auVar7[0xf] = uVar55;
  uVar20 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
  fVar43 = (float)((ulong)uVar20 >> 0x20);
  fVar40 = (float)*(undefined8 *)pfVar1;
  fVar32 = fVar40 * (float)_DAT_01d4ae80;
  fVar58 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
  fVar39 = fVar58 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  auVar36._0_8_ = CONCAT44(fVar39,fVar32);
  auVar36._8_4_ = (float)uVar10 * (float)_UNK_01d4ae88;
  auVar36._12_4_ = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar70 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd4f90);
  auVar8[8] = uVar29;
  auVar8._0_8_ = _DAT_01d49dc0;
  auVar8[9] = uVar31;
  auVar8[10] = uVar50;
  auVar8[0xb] = uVar51;
  auVar8[0xc] = uVar52;
  auVar8[0xd] = uVar53;
  auVar8[0xe] = uVar54;
  auVar8[0xf] = uVar55;
  uVar61 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
  auVar9[8] = uVar29;
  auVar9._0_8_ = _DAT_01d49dc0;
  auVar9[9] = uVar31;
  auVar9[10] = uVar50;
  auVar9[0xb] = uVar51;
  auVar9[0xc] = uVar52;
  auVar9[0xd] = uVar53;
  auVar9[0xe] = uVar54;
  auVar9[0xf] = uVar55;
  uVar10 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5418);
  uVar72 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd5120);
  uVar73 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd5418);
  fVar41 = (float)((ulong)uVar61 >> 0x20);
  uVar74 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd5270);
  uVar71 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd50f8);
  auVar37._8_8_ = auVar36._0_8_;
  auVar37._0_8_ = auVar36._0_8_;
  uVar33 = a64_TBL(ZEXT816(0),auVar37,DAT_01cd50b0);
  auVar62[9] = uVar23;
  auVar62._0_9_ = *(unkbyte9 *)pfVar1;
  auVar62[10] = uVar24;
  auVar62[0xb] = uVar25;
  auVar62[0xc] = uVar26;
  auVar62[0xd] = uVar27;
  auVar62[0xe] = uVar28;
  auVar62[0xf] = uVar30;
  uVar11 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd50f8);
  fVar45 = (float)((ulong)uVar10 >> 0x20);
  fVar66 = (float)_DAT_01d4ae90;
  fVar67 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar68 = (float)_UNK_01d4ae98;
  fVar69 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar63[9] = uVar23;
  auVar63._0_9_ = *(unkbyte9 *)pfVar1;
  auVar63[10] = uVar24;
  auVar63[0xb] = uVar25;
  auVar63[0xc] = uVar26;
  auVar63[0xd] = uVar27;
  auVar63[0xe] = uVar28;
  auVar63[0xf] = uVar30;
  uVar34 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd4f90);
  fVar56 = (fVar32 * (float)uVar20 + fVar66 * (float)uVar70 * 0.0 +
           fVar66 * (float)uVar10 * (float)uVar71) - (float)uVar61 * (float)uVar73;
  fVar57 = (fVar39 * fVar43 + fVar67 * (float)((ulong)uVar70 >> 0x20) * 0.0 +
           fVar67 * fVar45 * (float)((ulong)uVar71 >> 0x20)) -
           fVar41 * (float)((ulong)uVar73 >> 0x20);
  fVar59 = (auVar36._8_4_ * (float)uVar20 + fVar68 * (float)uVar61 * (float)uVar72 +
           fVar68 * (float)uVar33 * 0.0) - (float)uVar10 * (float)uVar74;
  fVar60 = (auVar36._12_4_ * fVar43 + fVar69 * fVar41 * (float)((ulong)uVar72 >> 0x20) +
           fVar69 * (float)((ulong)uVar33 >> 0x20) * 0.0) - fVar45 * (float)((ulong)uVar74 >> 0x20);
  auVar12._4_4_ = fVar57;
  auVar12._0_4_ = fVar56;
  auVar12._8_4_ = fVar59;
  auVar12._12_4_ = fVar60;
  uVar71 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
  auVar13._4_4_ = fVar57;
  auVar13._0_4_ = fVar56;
  auVar13._8_4_ = fVar59;
  auVar13._12_4_ = fVar60;
  uVar70 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
  fVar41 = (float)((ulong)uVar34 >> 0x20);
  fVar65 = (float)((ulong)uVar11 >> 0x20);
  auVar3[9] = uVar23;
  auVar3._0_9_ = *(unkbyte9 *)pfVar1;
  auVar3[10] = uVar24;
  auVar3[0xb] = uVar25;
  auVar3[0xc] = uVar26;
  auVar3[0xd] = uVar27;
  auVar3[0xe] = uVar28;
  auVar3[0xf] = uVar30;
  uVar72 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  auVar14._4_4_ = fVar57;
  auVar14._0_4_ = fVar56;
  auVar14._8_4_ = fVar59;
  auVar14._12_4_ = fVar60;
  uVar10 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
  auVar21._4_4_ = fVar57;
  auVar21._0_4_ = fVar56;
  auVar21._8_4_ = fVar56;
  auVar21._12_4_ = fVar57;
  uVar33 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50b0);
  auVar15._4_4_ = fVar57;
  auVar15._0_4_ = fVar56;
  auVar15._8_4_ = fVar59;
  auVar15._12_4_ = fVar60;
  uVar61 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
  auVar16._4_4_ = fVar57;
  auVar16._0_4_ = fVar56;
  auVar16._8_4_ = fVar59;
  auVar16._12_4_ = fVar60;
  uVar20 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
  fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20);
  fVar64 = (float)((ulong)uVar72 >> 0x20);
  fVar32 = (float)*param_2 - (float)*(undefined8 *)(param_1 + 0xb0);
  fVar43 = fVar43 - fVar43;
  fVar45 = (float)param_2[1] - (float)*(undefined8 *)(param_1 + 0xb8);
  fVar47 = (float)((ulong)param_2[1] >> 0x20) -
           (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
  fVar39 = ((float)uVar34 * fVar56 + fVar66 * *pfVar1 * (float)uVar71 +
           fVar66 * (float)uVar72 * (float)uVar10) - (float)uVar11 * (float)uVar61;
  fVar56 = (fVar41 * fVar57 + fVar67 * *(float *)(param_1 + 0xa4) * (float)((ulong)uVar71 >> 0x20) +
           fVar67 * fVar64 * (float)((ulong)uVar10 >> 0x20)) -
           fVar65 * (float)((ulong)uVar61 >> 0x20);
  fVar40 = ((float)uVar34 * fVar59 + fVar68 * (float)uVar11 * (float)uVar70 +
           fVar68 * fVar40 * (float)uVar33) - (float)uVar72 * (float)uVar20;
  fVar41 = (fVar41 * fVar60 + fVar69 * fVar65 * (float)((ulong)uVar70 >> 0x20) +
           fVar69 * fVar58 * (float)((ulong)uVar33 >> 0x20)) -
           fVar64 * (float)((ulong)uVar20 >> 0x20);
  fVar59 = fVar32 * fVar32;
  fVar58 = fVar43 * fVar43;
  auVar17._4_4_ = fVar58;
  auVar17._0_4_ = fVar59;
  auVar17._8_4_ = fVar45 * fVar45;
  auVar17._12_4_ = fVar47 * fVar47;
  auVar18._4_4_ = fVar58;
  auVar18._0_4_ = fVar59;
  auVar18._8_4_ = fVar45 * fVar45;
  auVar18._12_4_ = fVar47 * fVar47;
  auVar62 = NEON_ext(auVar17,auVar18,8,1);
  fVar59 = auVar62._0_4_ + fVar59;
  fVar58 = auVar62._4_4_ + fVar58;
  fVar57 = fVar59 + fVar58;
  fVar59 = fVar59 + fVar58;
  fVar58 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                           CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                    CONCAT11((byte)((uint)fVar39 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 8),
                                             SUB41(fVar39,0) & (byte)DAT_01d4ab50)));
  auVar35._0_8_ =
       CONCAT17((byte)((uint)fVar56 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                CONCAT16((byte)((uint)fVar56 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                         CONCAT15((byte)((uint)fVar56 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                  CONCAT14(SUB41(fVar56,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                           fVar58))));
  auVar35[8] = SUB41(fVar40,0) & (byte)DAT_01d4ab58;
  auVar35[9] = (byte)((uint)fVar40 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar35[10] = (byte)((uint)fVar40 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar35[0xb] = (byte)((uint)fVar40 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar38[0xc] = SUB41(fVar41,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar38._0_12_ = auVar35;
  auVar38[0xd] = (byte)((uint)fVar41 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar38[0xe] = (byte)((uint)fVar41 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  auVar38[0xf] = (byte)((uint)fVar41 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  auVar19._4_4_ = fVar59;
  auVar19._0_4_ = fVar57;
  auVar19._8_4_ = fVar57;
  auVar19._12_4_ = fVar59;
  auVar63 = NEON_frsqrte(auVar19,4);
  local_18 = -1.0;
  auVar22._4_4_ = auVar63._4_4_ * fVar59;
  auVar22._0_4_ = auVar63._0_4_ * fVar57;
  auVar22._8_4_ = auVar63._8_4_ * fVar57;
  auVar22._12_4_ = auVar63._12_4_ * fVar59;
  auVar62 = NEON_frsqrts(auVar63,auVar22,4);
  fVar40 = auVar63._0_4_ * auVar62._0_4_;
  fVar39 = auVar63._4_4_ * auVar62._4_4_;
  fVar41 = auVar63._8_4_ * auVar62._8_4_;
  fVar56 = auVar63._12_4_ * auVar62._12_4_;
  local_24 = 1.0;
  auVar49._0_4_ = fVar57 * fVar40;
  auVar49._4_4_ = fVar59 * fVar39;
  auVar49._8_4_ = fVar57 * fVar41;
  auVar49._12_4_ = fVar59 * fVar56;
  auVar4[4] = SUB41(fVar39,0);
  auVar4._0_4_ = fVar40;
  auVar4[5] = (char)((uint)fVar39 >> 8);
  auVar4[6] = (char)((uint)fVar39 >> 0x10);
  auVar4[7] = (char)((uint)fVar39 >> 0x18);
  auVar4[8] = SUB41(fVar41,0);
  auVar4[9] = (char)((uint)fVar41 >> 8);
  auVar4[10] = (char)((uint)fVar41 >> 0x10);
  auVar4[0xb] = (char)((uint)fVar41 >> 0x18);
  auVar4[0xc] = SUB41(fVar56,0);
  auVar4[0xd] = (char)((uint)fVar56 >> 8);
  auVar4[0xe] = (char)((uint)fVar56 >> 0x10);
  auVar4[0xf] = (char)((uint)fVar56 >> 0x18);
  auVar62 = NEON_frsqrts(auVar4,auVar49,4);
  fVar32 = fVar32 * fVar40 * auVar62._0_4_;
  fVar43 = fVar43 * fVar39 * auVar62._4_4_;
  fVar45 = fVar45 * fVar41 * auVar62._8_4_;
  fVar47 = fVar47 * fVar56 * auVar62._12_4_;
  iVar42 = -(uint)(fVar57 == 0.0);
  iVar44 = -(uint)(fVar59 == 0.0);
  iVar46 = -(uint)(fVar57 == 0.0);
  iVar48 = -(uint)(fVar59 == 0.0);
  fVar58 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                           CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                                    CONCAT11((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                             SUB41(fVar32,0) & ~(byte)iVar42))) * fVar58;
  fVar40 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                           CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                    CONCAT11((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                             SUB41(fVar43,0) & ~(byte)iVar44))) *
           (float)((ulong)auVar35._0_8_ >> 0x20);
  uVar23 = (undefined1)((uint)fVar40 >> 8);
  uVar24 = (undefined1)((uint)fVar40 >> 0x10);
  uVar25 = (undefined1)((uint)fVar40 >> 0x18);
  fVar32 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                           CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                                    CONCAT11((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                             SUB41(fVar45,0) & ~(byte)iVar46))) * auVar35._8_4_;
  uVar26 = (undefined1)((uint)fVar32 >> 8);
  uVar27 = (undefined1)((uint)fVar32 >> 0x10);
  uVar28 = (undefined1)((uint)fVar32 >> 0x18);
  fVar39 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                           CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                    CONCAT11((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                             SUB41(fVar47,0) & ~(byte)iVar48))) * auVar38._12_4_;
  uVar30 = (undefined1)((uint)fVar39 >> 8);
  uVar29 = (undefined1)((uint)fVar39 >> 0x10);
  uVar31 = (undefined1)((uint)fVar39 >> 0x18);
  auVar5[4] = SUB41(fVar40,0);
  auVar5._0_4_ = fVar58;
  auVar5[5] = uVar23;
  auVar5[6] = uVar24;
  auVar5[7] = uVar25;
  auVar5[8] = SUB41(fVar32,0);
  auVar5[9] = uVar26;
  auVar5[10] = uVar27;
  auVar5[0xb] = uVar28;
  auVar5[0xc] = SUB41(fVar39,0);
  auVar5[0xd] = uVar30;
  auVar5[0xe] = uVar29;
  auVar5[0xf] = uVar31;
  auVar6[4] = SUB41(fVar40,0);
  auVar6._0_4_ = fVar58;
  auVar6[5] = uVar23;
  auVar6[6] = uVar24;
  auVar6[7] = uVar25;
  auVar6[8] = SUB41(fVar32,0);
  auVar6[9] = uVar26;
  auVar6[10] = uVar27;
  auVar6[0xb] = uVar28;
  auVar6[0xc] = SUB41(fVar39,0);
  auVar6[0xd] = uVar30;
  auVar6[0xe] = uVar29;
  auVar6[0xf] = uVar31;
  auVar62 = NEON_ext(auVar5,auVar6,8,1);
  local_14 = auVar62._0_4_ + fVar58 + auVar62._4_4_ + fVar40;
  pfVar1 = &local_24;
  if (local_14 <= 1.0) {
    pfVar1 = &local_14;
  }
  pfVar2 = &local_18;
  if (-1.0 <= local_14) {
    pfVar2 = pfVar1;
  }
  local_14 = *pfVar2;
  FUN_01590400(SUB41(local_14,0));
  fVar40 = ((float)CONCAT13(extraout_var_01,
                            CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
           DAT_01d4c284) / DAT_01d4bb38;
  if (DAT_01d4c1d4 < fVar40) {
    return 0;
  }
  if (param_3 != (float *)0x0) {
    if (*param_3 <= fVar40) {
      return 0;
    }
    *param_3 = fVar40;
  }
  return 1;
}


