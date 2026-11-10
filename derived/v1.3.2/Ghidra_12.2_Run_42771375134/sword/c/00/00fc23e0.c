/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc23e0; name: FUN_00fc23e0
 */


undefined8 FUN_00fc23e0(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar3 = *param_2;
  lVar2 = *param_1;
  lVar1 = FUN_00fba2d0(lVar3 + 0x280);
  if (lVar1 == 0) {
    lVar1 = FUN_01225e70(lVar3);
    FUN_01223ca0(lVar1 + 0x10);
    auVar5 = FUN_01223380();
    fVar12 = auVar5._8_4_;
    fVar7 = auVar5._0_4_;
    lVar1 = FUN_00fba2d0(lVar2 + 0x280);
  }
  else {
    fVar12 = SUB164(*(undefined1 (*) [16])(lVar1 + 0xb0),8);
    fVar7 = SUB164(*(undefined1 (*) [16])(lVar1 + 0xb0),0);
    lVar1 = FUN_00fba2d0(lVar2 + 0x280);
  }
  if (lVar1 == 0) {
    lVar1 = FUN_01225e70(lVar2);
    FUN_01223ca0(lVar1 + 0x10);
    auVar5 = FUN_01223380();
    auVar4 = auVar5._0_12_;
  }
  else {
    auVar4 = SUB1612(*(undefined1 (*) [16])(lVar1 + 0xb0),0);
  }
  lVar3 = *param_3;
  fVar8 = *(float *)*param_4;
  fVar13 = ((float *)*param_4)[2];
  lVar2 = *param_2;
  fVar7 = fVar8 - fVar7;
  fVar12 = fVar13 - fVar12;
  auVar16._0_4_ = fVar7 * fVar7;
  auVar16._4_4_ = 0;
  auVar16._8_4_ = fVar12 * fVar12;
  auVar16._12_4_ = 0;
  auVar5 = NEON_ext(auVar16,auVar16,8,1);
  fVar8 = fVar8 - auVar4._0_4_;
  fVar13 = fVar13 - auVar4._8_4_;
  auVar15._0_4_ = fVar8 * fVar8;
  auVar15._4_4_ = 0;
  auVar15._8_4_ = fVar13 * fVar13;
  auVar15._12_4_ = 0;
  auVar9 = NEON_ext(auVar15,auVar15,8,1);
  lVar1 = FUN_00fba2d0(lVar3 + 0x280);
  if (lVar1 == 0) {
    lVar1 = FUN_01225e70(lVar3);
    FUN_01223ca0(lVar1 + 0x10);
    auVar6 = FUN_01223380();
    fVar12 = auVar6._8_4_;
    fVar7 = auVar6._0_4_;
    lVar1 = FUN_00fba2d0(lVar2 + 0x280);
  }
  else {
    fVar12 = SUB164(*(undefined1 (*) [16])(lVar1 + 0xb0),8);
    fVar7 = SUB164(*(undefined1 (*) [16])(lVar1 + 0xb0),0);
    lVar1 = FUN_00fba2d0(lVar2 + 0x280);
  }
  if (lVar1 == 0) {
    lVar1 = FUN_01225e70(lVar2);
    FUN_01223ca0(lVar1 + 0x10);
    auVar6 = FUN_01223380();
    auVar4 = auVar6._0_12_;
  }
  else {
    auVar4 = SUB1612(*(undefined1 (*) [16])(lVar1 + 0xb0),0);
  }
  fVar8 = *(float *)*param_4;
  fVar13 = ((float *)*param_4)[2];
  fVar7 = fVar8 - fVar7;
  fVar12 = fVar13 - fVar12;
  auVar10._0_4_ = fVar7 * fVar7;
  auVar10._4_4_ = 0;
  auVar10._8_4_ = fVar12 * fVar12;
  auVar10._12_4_ = 0;
  auVar6 = NEON_ext(auVar10,auVar10,8,1);
  fVar8 = fVar8 - auVar4._0_4_;
  fVar13 = fVar13 - auVar4._8_4_;
  auVar11._0_4_ = fVar8 * fVar8;
  auVar11._4_4_ = 0;
  auVar11._8_4_ = fVar13 * fVar13;
  auVar11._12_4_ = 0;
  auVar14 = NEON_ext(auVar11,auVar11,8,1);
  fVar7 = auVar6._0_4_ + auVar10._0_4_ + auVar6._4_4_ + 0.0;
  fVar12 = auVar14._0_4_ + auVar11._0_4_ + auVar14._4_4_ + 0.0;
  if (auVar5._0_4_ + auVar16._0_4_ + auVar5._4_4_ + 0.0 <
      auVar9._0_4_ + auVar15._0_4_ + auVar9._4_4_ + 0.0) {
    lVar1 = *param_1;
    if (fVar7 < fVar12) {
      *param_1 = *param_3;
      *param_3 = lVar1;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = lVar1;
    lVar3 = *param_3;
    lVar2 = FUN_00fba2d0(lVar3 + 0x280);
    if (lVar2 == 0) {
      lVar2 = FUN_01225e70(lVar3);
      FUN_01223ca0(lVar2 + 0x10);
      auVar5 = FUN_01223380();
      fVar12 = auVar5._8_4_;
      fVar7 = auVar5._0_4_;
      lVar2 = FUN_00fba2d0(lVar1 + 0x280);
    }
    else {
      fVar12 = SUB164(*(undefined1 (*) [16])(lVar2 + 0xb0),8);
      fVar7 = SUB164(*(undefined1 (*) [16])(lVar2 + 0xb0),0);
      lVar2 = FUN_00fba2d0(lVar1 + 0x280);
    }
    if (lVar2 == 0) {
      lVar1 = FUN_01225e70(lVar1);
      FUN_01223ca0(lVar1 + 0x10);
      auVar5 = FUN_01223380();
      auVar4 = auVar5._0_12_;
    }
    else {
      auVar4 = SUB1612(*(undefined1 (*) [16])(lVar2 + 0xb0),0);
    }
    fVar8 = *(float *)*param_4;
    fVar13 = ((float *)*param_4)[2];
    fVar7 = fVar8 - fVar7;
    fVar12 = fVar13 - fVar12;
    auVar5._0_4_ = fVar7 * fVar7;
    auVar5._4_4_ = 0;
    auVar5._8_4_ = fVar12 * fVar12;
    auVar5._12_4_ = 0;
    auVar16 = NEON_ext(auVar5,auVar5,8,1);
    fVar8 = fVar8 - auVar4._0_4_;
    fVar13 = fVar13 - auVar4._8_4_;
    auVar9._0_4_ = fVar8 * fVar8;
    auVar9._4_4_ = 0;
    auVar9._8_4_ = fVar13 * fVar13;
    auVar9._12_4_ = 0;
    auVar15 = NEON_ext(auVar9,auVar9,8,1);
    if (auVar16._0_4_ + auVar5._0_4_ + auVar16._4_4_ + 0.0 <
        auVar15._0_4_ + auVar9._0_4_ + auVar15._4_4_ + 0.0) {
      lVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = lVar1;
      return 2;
    }
    return 1;
  }
  if (fVar12 <= fVar7) {
    return 0;
  }
  lVar1 = *param_2;
  *param_2 = *param_3;
  *param_3 = lVar1;
  lVar3 = *param_2;
  lVar2 = *param_1;
  lVar1 = FUN_00fba2d0(lVar3 + 0x280);
  if (lVar1 == 0) {
    lVar1 = FUN_01225e70(lVar3);
    FUN_01223ca0(lVar1 + 0x10);
    auVar5 = FUN_01223380();
    fVar12 = auVar5._8_4_;
    fVar7 = auVar5._0_4_;
    lVar1 = FUN_00fba2d0(lVar2 + 0x280);
  }
  else {
    fVar12 = SUB164(*(undefined1 (*) [16])(lVar1 + 0xb0),8);
    fVar7 = SUB164(*(undefined1 (*) [16])(lVar1 + 0xb0),0);
    lVar1 = FUN_00fba2d0(lVar2 + 0x280);
  }
  if (lVar1 == 0) {
    lVar1 = FUN_01225e70(lVar2);
    FUN_01223ca0(lVar1 + 0x10);
    auVar5 = FUN_01223380();
    auVar4 = auVar5._0_12_;
  }
  else {
    auVar4 = SUB1612(*(undefined1 (*) [16])(lVar1 + 0xb0),0);
  }
  fVar8 = *(float *)*param_4;
  fVar13 = ((float *)*param_4)[2];
  fVar7 = fVar8 - fVar7;
  fVar12 = fVar13 - fVar12;
  auVar6._0_4_ = fVar7 * fVar7;
  auVar6._4_4_ = 0;
  auVar6._8_4_ = fVar12 * fVar12;
  auVar6._12_4_ = 0;
  auVar15 = NEON_ext(auVar6,auVar6,8,1);
  fVar8 = fVar8 - auVar4._0_4_;
  fVar13 = fVar13 - auVar4._8_4_;
  auVar14._0_4_ = fVar8 * fVar8;
  auVar14._4_4_ = 0;
  auVar14._8_4_ = fVar13 * fVar13;
  auVar14._12_4_ = 0;
  auVar5 = NEON_ext(auVar14,auVar14,8,1);
  if (auVar15._0_4_ + auVar6._0_4_ + auVar15._4_4_ + 0.0 <
      auVar5._0_4_ + auVar14._0_4_ + auVar5._4_4_ + 0.0) {
    lVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar1;
    return 2;
  }
  return 1;
}


