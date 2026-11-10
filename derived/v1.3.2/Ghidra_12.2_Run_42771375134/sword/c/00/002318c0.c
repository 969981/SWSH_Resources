/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002318c0; name: FUN_002318c0
 */


void FUN_002318c0(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  fVar6 = (float)*param_2 - *param_1;
  fVar7 = (float)((ulong)*param_2 >> 0x20) - param_1[1];
  fVar8 = (float)param_2[1] - param_1[2];
  fVar9 = ((float)*param_3 - *param_1) - fVar6;
  fVar11 = ((float)((ulong)*param_3 >> 0x20) - param_1[1]) - fVar7;
  fVar12 = ((float)param_3[1] - param_1[2]) - fVar8;
  fVar13 = ((float)((ulong)param_3[1] >> 0x20) - param_1[3]) -
           ((float)((ulong)param_2[1] >> 0x20) - param_1[3]);
  fVar14 = fVar9 * fVar9;
  fVar15 = fVar11 * fVar11;
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar14;
  auVar2._8_4_ = fVar12 * fVar12;
  auVar2._12_4_ = fVar13 * fVar13;
  auVar3._4_4_ = fVar15;
  auVar3._0_4_ = fVar14;
  auVar3._8_4_ = fVar12 * fVar12;
  auVar3._12_4_ = fVar13 * fVar13;
  auVar17 = NEON_ext(auVar2,auVar3,8,1);
  fVar5 = auVar17._0_4_ + auVar17._4_4_;
  fVar4 = fVar14 + fVar15 + fVar5;
  fVar5 = fVar14 + fVar15 + fVar5;
  fVar9 = -fVar6 * fVar9;
  fVar11 = -fVar7 * fVar11;
  fVar12 = -fVar8 * fVar12;
  auVar17._4_4_ = fVar11;
  auVar17._0_4_ = fVar9;
  auVar17._8_4_ = fVar12;
  auVar17._12_4_ = fVar13 * 0.0;
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar13 * 0.0;
  auVar17 = NEON_ext(auVar17,auVar1,8,1);
  fVar6 = auVar17._0_4_ + auVar17._4_4_;
  uVar10 = NEON_frecpe(CONCAT44(fVar5,fVar4),4);
  uVar16 = NEON_frecps(CONCAT44(fVar5,fVar4),uVar10,4);
  fVar7 = (float)uVar10 * (float)uVar16;
  fVar8 = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
  uVar10 = NEON_frecps(CONCAT44(fVar5,fVar4),CONCAT44(fVar8,fVar7),4);
  fVar7 = fVar7 * (float)uVar10;
  fVar8 = fVar8 * (float)((ulong)uVar10 >> 0x20);
  uVar10 = NEON_frecps(CONCAT44(fVar5,fVar4),CONCAT44(fVar8,fVar7),4);
  fVar7 = fVar7 * (float)uVar10;
  fVar8 = fVar8 * (float)((ulong)uVar10 >> 0x20);
  uVar10 = NEON_frecps(CONCAT44(fVar5,fVar4),CONCAT44(fVar8,fVar7),4);
  fVar7 = fVar7 * (float)uVar10;
  fVar8 = fVar8 * (float)((ulong)uVar10 >> 0x20);
  uVar10 = NEON_frecps(CONCAT44(fVar5,fVar4),CONCAT44(fVar8,fVar7),4);
  *param_4 = CONCAT44((fVar9 + fVar11 + fVar6) * fVar8 * (float)((ulong)uVar10 >> 0x20),
                      (fVar9 + fVar11 + fVar6) * fVar7 * (float)uVar10);
  return;
}


