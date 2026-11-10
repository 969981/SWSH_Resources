/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b0d40; name: FUN_001b0d40
 */


void FUN_001b0d40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
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
  
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = fVar10 + fVar10;
  fVar5 = (param_3[2] + param_3[5]) * 0.5;
  fVar13 = (param_3[1] + param_3[4]) * 0.5;
  fVar13 = fVar13 + fVar13;
  fVar14 = param_2[2];
  fVar15 = param_2[3];
  fVar8 = (*param_3 + param_3[3]) * 0.5;
  fVar16 = fVar11 + fVar11;
  fVar8 = fVar8 + fVar8;
  fVar18 = fVar14 * (fVar14 + fVar14);
  fVar17 = (fVar14 + fVar14) * fVar15;
  fVar5 = fVar5 + fVar5;
  fVar9 = fVar15 * fVar15 + -0.5;
  fVar2 = (param_3[5] - param_3[2]) * 0.5;
  fVar1 = 1.0 - fVar10 * fVar12;
  fVar6 = fVar8 * fVar10 + fVar13 * fVar11 + fVar5 * fVar14;
  fVar7 = param_2[4] + fVar10 * fVar6 + fVar8 * fVar9 + fVar15 * (fVar5 * fVar11 - fVar13 * fVar14);
  fVar4 = param_2[5] + fVar11 * fVar6 + fVar13 * fVar9 + fVar15 * (fVar8 * fVar14 - fVar10 * fVar5);
  fVar13 = param_2[6] + fVar5 * fVar9 + fVar15 * (fVar13 * fVar10 - fVar8 * fVar11) + fVar14 * fVar6
  ;
  fVar3 = (param_3[3] - *param_3) * 0.5;
  fVar10 = (param_3[4] - param_3[1]) * 0.5;
  fVar5 = fabsf(fVar3 * ((1.0 - fVar11 * fVar16) - fVar18));
  fVar6 = fabsf(fVar10 * (fVar12 * fVar11 - fVar17));
  fVar8 = fabsf(fVar2 * (fVar12 * fVar14 + fVar16 * fVar15));
  fVar8 = fVar5 + fVar6 + fVar8;
  fVar5 = fabsf(fVar3 * (fVar12 * fVar11 + fVar17));
  fVar6 = fabsf(fVar10 * (fVar1 - fVar18));
  fVar9 = fabsf(fVar2 * (fVar16 * fVar14 - fVar12 * fVar15));
  fVar9 = fVar5 + fVar6 + fVar9;
  fVar5 = fabsf(fVar3 * (fVar12 * fVar14 - fVar16 * fVar15));
  fVar6 = fabsf(fVar10 * (fVar16 * fVar14 + fVar12 * fVar15));
  fVar1 = fabsf(fVar2 * (fVar1 - fVar11 * fVar16));
  fVar1 = fVar5 + fVar6 + fVar1;
  *param_1 = fVar7 - fVar8;
  param_1[1] = fVar4 - fVar9;
  param_1[2] = fVar13 - fVar1;
  param_1[3] = fVar7 + fVar8;
  param_1[4] = fVar4 + fVar9;
  param_1[5] = fVar13 + fVar1;
  return;
}


