/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e4b60; name: FUN_012e4b60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e4b60(long param_1,float *param_2,int param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar18;
  uint extraout_var_00;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float extraout_var;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (((*(int *)(param_1 + 0x308) == 4 || *(int *)(param_1 + 0x308) == 1) && param_3 != 1) &&
      param_3 != 4) {
    FUN_0131b6b0(param_1 + 0x370,0);
    FUN_0131d150(param_1 + 0x370,1);
  }
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 2);
  uVar6 = *(undefined8 *)param_2;
  *(int *)(param_1 + 0x308) = param_3;
  *(undefined8 *)(param_1 + 0x310) = uVar6;
  fVar8 = (float)FUN_012e4a50(param_1);
  pauVar4 = (undefined1 (*) [16])FUN_012dc8d0(param_1);
  uVar3 = DAT_01cd5418;
  uVar42 = DAT_01cd5270;
  uVar39 = DAT_01cd5120;
  uVar38 = DAT_01cd50f8;
  uVar28 = DAT_01cd50b0;
  uVar10 = DAT_01cd4f90;
  fVar7 = *param_2;
  fVar9 = param_2[1];
  fVar18 = param_2[2];
  fVar34 = param_2[3];
  fVar24 = (float)_UNK_01d4ae88;
  fVar26 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  fVar20 = (float)_DAT_01d4ae80;
  fVar22 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar19 = fVar7 * fVar20;
  fVar21 = fVar9 * fVar22;
  fVar23 = fVar18 * fVar24;
  fVar25 = fVar34 * fVar26;
  auVar36._0_4_ = fVar7 * fVar7;
  auVar36._4_4_ = fVar9 * fVar9;
  auVar36._8_4_ = fVar18 * fVar18;
  auVar36._12_4_ = fVar34 * fVar34;
  auVar29 = NEON_ext(auVar36,auVar36,8,1);
  fVar9 = auVar29._0_4_ + auVar36._0_4_;
  fVar18 = auVar29._4_4_ + auVar36._4_4_;
  fVar7 = fVar9 + fVar18;
  fVar9 = fVar9 + fVar18;
  auVar11._8_8_ = CONCAT44(fVar9,fVar7);
  auVar11._0_8_ = CONCAT44(fVar9,fVar7);
  auVar29 = NEON_frecpe(auVar11,4);
  auVar36 = NEON_frecps(auVar29,auVar11,4);
  auVar30._0_4_ = auVar29._0_4_ * auVar36._0_4_;
  auVar30._4_4_ = auVar29._4_4_ * auVar36._4_4_;
  auVar30._8_4_ = auVar29._8_4_ * auVar36._8_4_;
  auVar30._12_4_ = auVar29._12_4_ * auVar36._12_4_;
  auVar29 = NEON_frecps(auVar30,auVar11,4);
  auVar12._0_4_ = -(uint)(fVar7 == 0.0);
  auVar12._4_4_ = -(uint)(fVar9 == 0.0);
  auVar12._8_4_ = -(uint)(fVar7 == 0.0);
  auVar12._12_4_ = -(uint)(fVar9 == 0.0);
  auVar13._0_4_ = fVar19 * auVar30._0_4_ * auVar29._0_4_;
  auVar13._4_4_ = fVar21 * auVar30._4_4_ * auVar29._4_4_;
  auVar13._8_4_ = fVar23 * auVar30._8_4_ * auVar29._8_4_;
  auVar13._12_4_ = fVar25 * auVar30._12_4_ * auVar29._12_4_;
  auVar29._4_4_ = fVar21;
  auVar29._0_4_ = fVar19;
  auVar29._8_4_ = fVar23;
  auVar29._12_4_ = fVar25;
  auVar13 = auVar13 ^ (auVar13 ^ auVar29) & auVar12;
  auVar29 = *pauVar4;
  uVar37 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5418);
  uVar6 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
  fVar9 = (float)((ulong)uVar6 >> 0x20);
  uVar35 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
  uVar40 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd4f90);
  uVar43 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5120);
  uVar45 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5270);
  uVar44 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5418);
  fVar7 = (float)((ulong)uVar35 >> 0x20);
  uVar41 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50f8);
  auVar31._0_8_ = auVar29._0_8_;
  auVar31._8_8_ = auVar31._0_8_;
  uVar27 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd50b0);
  fVar18 = (float)_DAT_01d4ae90;
  fVar34 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar19 = (float)_UNK_01d4ae98;
  fVar21 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar23 = (float)((ulong)uVar37 >> 0x20);
  uStack_68 = CONCAT44((auVar29._12_4_ * fVar9 + fVar21 * fVar7 * (float)((ulong)uVar43 >> 0x20) +
                       fVar21 * auVar13._4_4_ * (float)((ulong)uVar27 >> 0x20)) -
                       fVar23 * (float)((ulong)uVar45 >> 0x20),
                       (auVar29._8_4_ * (float)uVar6 + fVar19 * (float)uVar35 * (float)uVar43 +
                       fVar19 * auVar13._0_4_ * (float)uVar27) - (float)uVar37 * (float)uVar45);
  local_70 = CONCAT44((auVar29._4_4_ * fVar9 +
                       fVar34 * auVar13._4_4_ * (float)((ulong)uVar40 >> 0x20) +
                      fVar34 * fVar23 * (float)((ulong)uVar41 >> 0x20)) -
                      fVar7 * (float)((ulong)uVar44 >> 0x20),
                      (auVar29._0_4_ * (float)uVar6 + fVar18 * auVar13._0_4_ * (float)uVar40 +
                      fVar18 * (float)uVar37 * (float)uVar41) - (float)uVar35 * (float)uVar44);
  FUN_00ac7ad0(&local_70);
  if ((fVar8 * DAT_01d4bfc8 <= ABS(extraout_var)) || ((param_3 != 4 && (param_3 != 1)))) {
    if (fVar8 != 0.0) {
      *(undefined1 *)(param_1 + 0x30c) = 1;
      if ((param_3 == 4) || (param_3 == 1)) {
        FUN_0131b6b0(param_1 + 0x370,1);
      }
      pauVar4 = (undefined1 (*) [16])FUN_012dc8d0(param_1);
      fVar7 = *param_2;
      fVar9 = param_2[1];
      fVar23 = param_2[2];
      fVar25 = param_2[3];
      fVar20 = fVar7 * fVar20;
      fVar22 = fVar9 * fVar22;
      fVar24 = fVar23 * fVar24;
      fVar26 = fVar25 * fVar26;
      auVar14._0_4_ = fVar7 * fVar7;
      auVar14._4_4_ = fVar9 * fVar9;
      auVar14._8_4_ = fVar23 * fVar23;
      auVar14._12_4_ = fVar25 * fVar25;
      auVar29 = NEON_ext(auVar14,auVar14,8,1);
      fVar9 = auVar29._0_4_ + auVar14._0_4_;
      fVar23 = auVar29._4_4_ + auVar14._4_4_;
      fVar7 = fVar9 + fVar23;
      fVar9 = fVar9 + fVar23;
      auVar15._8_8_ = CONCAT44(fVar9,fVar7);
      auVar15._0_8_ = CONCAT44(fVar9,fVar7);
      auVar29 = NEON_frecpe(auVar15,4);
      auVar36 = NEON_frecps(auVar29,auVar15,4);
      auVar32._0_4_ = auVar29._0_4_ * auVar36._0_4_;
      auVar32._4_4_ = auVar29._4_4_ * auVar36._4_4_;
      auVar32._8_4_ = auVar29._8_4_ * auVar36._8_4_;
      auVar32._12_4_ = auVar29._12_4_ * auVar36._12_4_;
      auVar29 = NEON_frecps(auVar32,auVar15,4);
      auVar16._0_4_ = -(uint)(fVar7 == 0.0);
      auVar16._4_4_ = -(uint)(fVar9 == 0.0);
      auVar16._8_4_ = -(uint)(fVar7 == 0.0);
      auVar16._12_4_ = -(uint)(fVar9 == 0.0);
      auVar17._0_4_ = fVar20 * auVar32._0_4_ * auVar29._0_4_;
      auVar17._4_4_ = fVar22 * auVar32._4_4_ * auVar29._4_4_;
      auVar17._8_4_ = fVar24 * auVar32._8_4_ * auVar29._8_4_;
      auVar17._12_4_ = fVar26 * auVar32._12_4_ * auVar29._12_4_;
      auVar2._4_4_ = fVar22;
      auVar2._0_4_ = fVar20;
      auVar2._8_4_ = fVar24;
      auVar2._12_4_ = fVar26;
      auVar17 = auVar17 ^ (auVar17 ^ auVar2) & auVar16;
      auVar29 = *pauVar4;
      uVar6 = a64_TBL(ZEXT816(0),auVar17,uVar10);
      fVar7 = (float)((ulong)uVar6 >> 0x20);
      uVar27 = a64_TBL(ZEXT816(0),auVar17,uVar38);
      uVar35 = a64_TBL(ZEXT816(0),auVar29,uVar10);
      uVar37 = a64_TBL(ZEXT816(0),auVar29,uVar39);
      uVar42 = a64_TBL(ZEXT816(0),auVar29,uVar42);
      fVar9 = (float)((ulong)uVar27 >> 0x20);
      uVar39 = a64_TBL(ZEXT816(0),auVar17,uVar3);
      uVar10 = a64_TBL(ZEXT816(0),auVar29,uVar38);
      uVar38 = a64_TBL(ZEXT816(0),auVar29,uVar3);
      auVar33._0_8_ = auVar29._0_8_;
      auVar33._8_8_ = auVar33._0_8_;
      uVar28 = a64_TBL(ZEXT816(0),auVar33,uVar28);
      fVar20 = (float)((ulong)uVar39 >> 0x20);
      uStack_68 = CONCAT44((auVar29._12_4_ * fVar7 + fVar21 * fVar9 * (float)((ulong)uVar37 >> 0x20)
                           + fVar21 * auVar17._4_4_ * (float)((ulong)uVar28 >> 0x20)) -
                           fVar20 * (float)((ulong)uVar42 >> 0x20),
                           (auVar29._8_4_ * (float)uVar6 + fVar19 * (float)uVar27 * (float)uVar37 +
                           fVar19 * auVar17._0_4_ * (float)uVar28) - (float)uVar39 * (float)uVar42);
      local_70 = CONCAT44((auVar29._4_4_ * fVar7 +
                           fVar34 * auVar17._4_4_ * (float)((ulong)uVar35 >> 0x20) +
                          fVar34 * fVar20 * (float)((ulong)uVar10 >> 0x20)) -
                          fVar9 * (float)((ulong)uVar38 >> 0x20),
                          (auVar29._0_4_ * (float)uVar6 + fVar18 * auVar17._0_4_ * (float)uVar35 +
                          fVar18 * (float)uVar39 * (float)uVar10) - (float)uVar27 * (float)uVar38);
      FUN_007101c0(&local_70);
      *(uint *)(param_1 + 0x330) = (uint)fVar8 ^ ((uint)fVar8 ^ extraout_var_00) & 0x80000000;
      return;
    }
    param_2 = (float *)(param_1 + 0x310);
  }
  FUN_012dc7f0(param_1,param_2);
  lVar1 = param_1 + 0x370;
  *(undefined2 *)(param_1 + 0x30c) = 0;
  FUN_0131b6b0(lVar1,0);
  if (((*(int *)(param_1 + 0x308) == 4) || (*(int *)(param_1 + 0x308) == 1)) &&
     (uVar5 = FUN_0131d090(lVar1), (uVar5 & 1) == 0)) {
    FUN_0131d150(lVar1,1);
  }
  return;
}


