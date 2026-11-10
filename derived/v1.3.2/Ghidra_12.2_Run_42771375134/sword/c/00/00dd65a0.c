/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd65a0; name: FUN_00dd65a0
 */


undefined1  [16]
FUN_00dd65a0(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  fVar2 = (float)*param_4;
  fVar3 = (float)((ulong)*param_4 >> 0x20);
  fVar4 = (float)param_4[1];
  fVar5 = (float)((ulong)param_4[1] >> 0x20);
  fVar14 = (float)*param_3;
  fVar15 = (float)((ulong)*param_3 >> 0x20);
  fVar16 = (float)param_3[1];
  fVar17 = (float)((ulong)param_3[1] >> 0x20);
  auVar21 = NEON_fmov(0x40400000,4);
  fVar6 = (fVar2 - (float)*param_2) * 0.5;
  fVar7 = (fVar3 - (float)((ulong)*param_2 >> 0x20)) * 0.5;
  fVar8 = (fVar4 - (float)param_2[1]) * 0.5;
  fVar9 = (fVar5 - (float)((ulong)param_2[1] >> 0x20)) * 0.5;
  fVar10 = ((float)*param_5 - fVar14) * 0.5;
  fVar11 = ((float)((ulong)*param_5 >> 0x20) - fVar15) * 0.5;
  fVar12 = ((float)param_5[1] - fVar16) * 0.5;
  fVar13 = ((float)((ulong)param_5[1] >> 0x20) - fVar17) * 0.5;
  fVar18 = param_1 * param_1;
  fVar19 = fVar18 * param_1;
  auVar20 = NEON_fmov(0xc0400000,4);
  auVar1._0_4_ = fVar14 + fVar6 * param_1 +
                          (fVar10 + fVar6 + ((fVar14 + fVar14) - (fVar2 + fVar2))) * fVar19 +
                          (((fVar2 * auVar21._0_4_ + fVar14 * auVar20._0_4_) - (fVar6 + fVar6)) -
                          fVar10) * fVar18;
  auVar1._4_4_ = fVar15 + fVar7 * param_1 +
                          (fVar11 + fVar7 + ((fVar15 + fVar15) - (fVar3 + fVar3))) * fVar19 +
                          (((fVar3 * auVar21._4_4_ + fVar15 * auVar20._4_4_) - (fVar7 + fVar7)) -
                          fVar11) * fVar18;
  auVar1._8_4_ = fVar16 + fVar8 * param_1 +
                          (fVar12 + fVar8 + ((fVar16 + fVar16) - (fVar4 + fVar4))) * fVar19 +
                          (((fVar4 * auVar21._8_4_ + fVar16 * auVar20._8_4_) - (fVar8 + fVar8)) -
                          fVar12) * fVar18;
  auVar1._12_4_ =
       fVar17 + fVar9 * param_1 +
                (fVar13 + fVar9 + ((fVar17 + fVar17) - (fVar5 + fVar5))) * fVar19 +
                (((fVar5 * auVar21._12_4_ + fVar17 * auVar20._12_4_) - (fVar9 + fVar9)) - fVar13) *
                fVar18;
  return auVar1;
}


