/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024ac90; name: FUN_0024ac90
 */


void FUN_0024ac90(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

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
  float fVar19;
  
  fVar6 = *param_4;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  param_1 = param_1 + DAT_01d4c558;
  fVar2 = param_1 * *param_7 + *param_3;
  fVar12 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar1 = param_1 * param_7[1] + param_3[1];
  fVar9 = *param_6;
  fVar10 = param_6[1];
  fVar11 = param_6[2];
  fVar3 = param_1 * param_7[2] + param_3[2];
  fVar4 = param_5[1];
  fVar16 = fVar4 - fVar1;
  fVar13 = *param_5 - fVar2;
  fVar15 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
  fVar5 = param_5[2];
  fVar18 = fVar5 - fVar3;
  fVar14 = fVar6 * fVar9 + fVar7 * fVar10 + fVar8 * fVar11;
  fVar17 = fVar13 * fVar9 + fVar16 * fVar10 + fVar18 * fVar11;
  fVar19 = fVar12 * fVar15 - fVar14 * fVar14;
  fVar16 = fVar6 * fVar13 + fVar7 * fVar16 + fVar8 * fVar18;
  fVar13 = 0.0;
  if (((fVar19 != 0.0) && (fVar19 = (fVar16 * fVar15 - fVar17 * fVar14) / fVar19, 0.0 <= fVar19)) &&
     (fVar13 = fVar19, 1.0 < fVar19)) {
    fVar13 = 1.0;
  }
  fVar15 = (fVar14 * fVar13 - fVar17) / fVar15;
  if (0.0 <= fVar15) {
    if (1.0 < fVar15) {
      fVar13 = (fVar16 + fVar14) / fVar12;
      if (0.0 <= fVar13) {
        fVar15 = 1.0;
        if (1.0 < fVar13) {
          fVar13 = 1.0;
          fVar15 = 1.0;
        }
      }
      else {
        fVar13 = 0.0;
        fVar15 = 1.0;
      }
    }
  }
  else {
    fVar16 = fVar16 / fVar12;
    fVar15 = 0.0;
    if (0.0 <= fVar16) {
      fVar13 = 1.0;
      if (fVar16 <= 1.0) {
        fVar13 = fVar16;
      }
    }
    else {
      fVar13 = 0.0;
    }
  }
  *param_2 = (fVar2 + fVar6 * fVar13) - (*param_5 + fVar9 * fVar15);
  param_2[1] = (fVar1 + fVar7 * fVar13) - (fVar4 + fVar10 * fVar15);
  param_2[2] = (fVar3 + fVar8 * fVar13) - (fVar5 + fVar11 * fVar15);
  return;
}


