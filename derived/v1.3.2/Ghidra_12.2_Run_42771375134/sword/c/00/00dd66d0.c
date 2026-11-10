/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd66d0; name: FUN_00dd66d0
 */


float FUN_00dd66d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  fVar6 = (float)*param_1 - (float)param_2[8];
  fVar7 = (float)((ulong)*param_1 >> 0x20) - (float)((ulong)param_2[8] >> 0x20);
  fVar8 = (float)param_1[1] - (float)param_2[9];
  fVar9 = (float)((ulong)param_1[1] >> 0x20) - (float)((ulong)param_2[9] >> 0x20);
  fVar11 = fVar6 * (float)*param_2;
  fVar12 = fVar7 * (float)((ulong)*param_2 >> 0x20);
  fVar13 = fVar8 * (float)param_2[1];
  fVar14 = fVar9 * (float)((ulong)param_2[1] >> 0x20);
  fVar10 = *(float *)(param_2 + 6);
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar11;
  auVar15._8_4_ = fVar13;
  auVar15._12_4_ = fVar14;
  auVar1._4_4_ = fVar12;
  auVar1._0_4_ = fVar11;
  auVar1._8_4_ = fVar13;
  auVar1._12_4_ = fVar14;
  auVar15 = NEON_ext(auVar15,auVar1,8,1);
  fVar11 = auVar15._0_4_ + fVar11 + auVar15._4_4_ + fVar12;
  if (-fVar10 <= fVar11) {
    if (fVar11 <= fVar10) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = fVar11 - fVar10;
    }
  }
  else {
    fVar10 = fVar10 + fVar11;
  }
  fVar11 = fVar6 * *(float *)(param_2 + 2);
  fVar14 = fVar7 * *(float *)((long)param_2 + 0x14);
  fVar12 = fVar9 * *(float *)((long)param_2 + 0x1c);
  fVar13 = *(float *)((long)param_2 + 0x34);
  auVar4._4_4_ = fVar14;
  auVar4._0_4_ = fVar11;
  auVar4._8_4_ = fVar8 * *(float *)(param_2 + 3);
  auVar4._12_4_ = fVar12;
  auVar5._4_4_ = fVar14;
  auVar5._0_4_ = fVar11;
  auVar5._8_4_ = fVar8 * *(float *)(param_2 + 3);
  auVar5._12_4_ = fVar12;
  auVar15 = NEON_ext(auVar4,auVar5,8,1);
  fVar12 = 0.0;
  fVar11 = auVar15._0_4_ + fVar11 + auVar15._4_4_ + fVar14;
  if (-fVar13 <= fVar11) {
    if (fVar13 < fVar11) {
      fVar12 = fVar11 - fVar13;
    }
  }
  else {
    fVar12 = fVar13 + fVar11;
  }
  fVar12 = fVar10 * fVar10 + 0.0 + fVar12 * fVar12;
  fVar6 = fVar6 * (float)param_2[4];
  fVar7 = fVar7 * (float)((ulong)param_2[4] >> 0x20);
  fVar8 = fVar8 * (float)param_2[5];
  fVar9 = fVar9 * (float)((ulong)param_2[5] >> 0x20);
  fVar10 = *(float *)(param_2 + 7);
  auVar2._4_4_ = fVar7;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar8;
  auVar2._12_4_ = fVar9;
  auVar3._4_4_ = fVar7;
  auVar3._0_4_ = fVar6;
  auVar3._8_4_ = fVar8;
  auVar3._12_4_ = fVar9;
  auVar15 = NEON_ext(auVar2,auVar3,8,1);
  fVar11 = auVar15._0_4_ + fVar6 + auVar15._4_4_ + fVar7;
  if (fVar11 < -fVar10) {
    return fVar12 + (fVar10 + fVar11) * (fVar10 + fVar11);
  }
  if (fVar10 < fVar11) {
    return fVar12 + (fVar11 - fVar10) * (fVar11 - fVar10);
  }
  return fVar12 + 0.0;
}


