/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc2820; name: FUN_00fc2820
 */


int FUN_00fc2820(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  float local_60;
  float fStack_58;
  
  iVar11 = FUN_00fc23e0();
  lVar15 = *param_4;
  lVar14 = *param_3;
  lVar12 = FUN_00fba2d0(lVar15 + 0x280);
  if (lVar12 == 0) {
    lVar12 = FUN_01225e70(lVar15);
    FUN_01223ca0(lVar12 + 0x10);
    auVar18 = FUN_01223380();
    fVar20 = auVar18._8_4_;
    fVar19 = auVar18._0_4_;
    lVar12 = FUN_00fba2d0(lVar14 + 0x280);
  }
  else {
    fVar20 = SUB164(*(undefined1 (*) [16])(lVar12 + 0xb0),8);
    fVar19 = SUB164(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
    lVar12 = FUN_00fba2d0(lVar14 + 0x280);
  }
  if (lVar12 == 0) {
    lVar12 = FUN_01225e70(lVar14);
    FUN_01223ca0(lVar12 + 0x10);
    auVar18 = FUN_01223380();
    auVar16 = auVar18._0_12_;
  }
  else {
    auVar16 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
  }
  fVar23 = (float)((undefined8 *)*param_5)[1];
  fVar21 = (float)*(undefined8 *)*param_5;
  fVar19 = fVar21 - fVar19;
  fVar20 = fVar23 - fVar20;
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  auVar18._4_4_ = 0;
  auVar18._0_4_ = fVar19;
  auVar18._8_4_ = fVar20;
  auVar18._12_4_ = 0;
  auVar22._4_4_ = 0;
  auVar22._0_4_ = fVar19;
  auVar22._8_4_ = fVar20;
  auVar22._12_4_ = 0;
  auVar18 = NEON_ext(auVar18,auVar22,8,1);
  fVar21 = fVar21 - auVar16._0_4_;
  fVar23 = fVar23 - auVar16._8_4_;
  fVar21 = fVar21 * fVar21;
  fVar23 = fVar23 * fVar23;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = fVar21;
  auVar1._8_4_ = fVar23;
  auVar1._12_4_ = 0;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = fVar21;
  auVar2._8_4_ = fVar23;
  auVar2._12_4_ = 0;
  auVar22 = NEON_ext(auVar1,auVar2,8,1);
  iVar13 = iVar11;
  if (auVar18._0_4_ + fVar19 + auVar18._4_4_ + 0.0 < auVar22._0_4_ + fVar21 + auVar22._4_4_ + 0.0) {
    lVar12 = *param_3;
    *param_3 = *param_4;
    *param_4 = lVar12;
    lVar14 = *param_3;
    lVar15 = *param_2;
    lVar12 = FUN_00fba2d0(lVar14 + 0x280);
    if (lVar12 == 0) {
      lVar12 = FUN_01225e70(lVar14);
      FUN_01223ca0(lVar12 + 0x10);
      auVar18 = FUN_01223380();
      auVar16 = auVar18._0_12_;
    }
    else {
      auVar16 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
    }
    iVar13 = iVar11 + 1;
    lVar12 = FUN_00fba2d0(lVar15 + 0x280);
    if (lVar12 == 0) {
      lVar12 = FUN_01225e70(lVar15);
      FUN_01223ca0(lVar12 + 0x10);
      auVar18 = FUN_01223380();
      auVar17 = auVar18._0_12_;
    }
    else {
      auVar17 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
    }
    fVar20 = (float)*(undefined8 *)*param_5;
    fVar19 = fVar20 - auVar16._0_4_;
    fVar21 = (float)((undefined8 *)*param_5)[1];
    fVar23 = fVar21 - auVar16._8_4_;
    fVar19 = fVar19 * fVar19;
    fVar23 = fVar23 * fVar23;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fVar19;
    auVar3._8_4_ = fVar23;
    auVar3._12_4_ = 0;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = fVar23;
    auVar4._12_4_ = 0;
    auVar18 = NEON_ext(auVar3,auVar4,8,1);
    fVar20 = fVar20 - auVar17._0_4_;
    fVar21 = fVar21 - auVar17._8_4_;
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = fVar20;
    auVar5._8_4_ = fVar21;
    auVar5._12_4_ = 0;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = fVar20;
    auVar6._8_4_ = fVar21;
    auVar6._12_4_ = 0;
    auVar22 = NEON_ext(auVar5,auVar6,8,1);
    if (auVar18._0_4_ + fVar19 + auVar18._4_4_ + 0.0 < auVar22._0_4_ + fVar20 + auVar22._4_4_ + 0.0)
    {
      lVar12 = *param_2;
      *param_2 = *param_3;
      *param_3 = lVar12;
      lVar15 = *param_2;
      lVar14 = *param_1;
      lVar12 = FUN_00fba2d0(lVar15 + 0x280);
      if (lVar12 == 0) {
        lVar12 = FUN_01225e70(lVar15);
        FUN_01223ca0(lVar12 + 0x10);
        auVar18 = FUN_01223380();
        auVar16 = auVar18._0_12_;
      }
      else {
        auVar16 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
      }
      iVar13 = iVar11 + 2;
      lVar12 = FUN_00fba2d0(lVar14 + 0x280);
      if (lVar12 == 0) {
        lVar12 = FUN_01225e70(lVar14);
        FUN_01223ca0(lVar12 + 0x10);
        auVar18 = FUN_01223380();
        auVar17 = auVar18._0_12_;
      }
      else {
        auVar17 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0xb0),0);
      }
      fVar19 = (float)*(undefined8 *)*param_5;
      local_60 = auVar16._0_4_;
      fStack_58 = auVar16._8_4_;
      local_60 = fVar19 - local_60;
      fVar20 = (float)((undefined8 *)*param_5)[1];
      fStack_58 = fVar20 - fStack_58;
      local_60 = local_60 * local_60;
      fStack_58 = fStack_58 * fStack_58;
      auVar7._4_4_ = 0;
      auVar7._0_4_ = local_60;
      auVar7._8_4_ = fStack_58;
      auVar7._12_4_ = 0;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = local_60;
      auVar8._8_4_ = fStack_58;
      auVar8._12_4_ = 0;
      auVar22 = NEON_ext(auVar7,auVar8,8,1);
      fVar19 = fVar19 - auVar17._0_4_;
      fVar20 = fVar20 - auVar17._8_4_;
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      auVar9._4_4_ = 0;
      auVar9._0_4_ = fVar19;
      auVar9._8_4_ = fVar20;
      auVar9._12_4_ = 0;
      auVar10._4_4_ = 0;
      auVar10._0_4_ = fVar19;
      auVar10._8_4_ = fVar20;
      auVar10._12_4_ = 0;
      auVar18 = NEON_ext(auVar9,auVar10,8,1);
      if (auVar22._0_4_ + local_60 + auVar22._4_4_ + 0.0 <
          auVar18._0_4_ + fVar19 + auVar18._4_4_ + 0.0) {
        lVar12 = *param_1;
        iVar13 = iVar11 + 3;
        *param_1 = *param_2;
        *param_2 = lVar12;
      }
    }
  }
  return iVar13;
}


