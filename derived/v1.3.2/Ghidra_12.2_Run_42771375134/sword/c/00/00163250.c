/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00163250; name: FUN_00163250
 */


undefined8 FUN_00163250(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
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
  float fVar20;
  float fVar21;
  
  fVar2 = *param_2;
  fVar18 = param_2[1];
  fVar13 = param_2[2];
  fVar11 = param_2[3];
  fVar17 = fVar13 / (fVar11 + 1.0);
  fVar15 = fVar18 / (fVar11 + 1.0);
  fVar16 = -fVar15;
  fVar3 = fabsf(fVar17);
  fVar5 = param_1[2];
  fVar4 = fabsf(fVar16);
  fVar7 = param_1[1];
  fVar8 = *param_1;
  fVar5 = ((fVar3 + fVar5) / (1.0 - fVar3 * fVar5)) / fVar8;
  fVar3 = ((fVar4 + param_1[2]) / (1.0 - fVar4 * param_1[2])) / fVar7;
  if (fVar5 * fVar5 + fVar3 * fVar3 <= 1.0) {
    return 0;
  }
  fVar6 = fVar11 + fVar11;
  fVar3 = fVar2 + fVar2;
  fVar4 = fabsf(fVar17);
  fVar5 = fabsf(fVar16);
  if (fVar7 <= fVar8) {
    if (fVar5 < DAT_01d4c1cc) {
      if (fVar17 <= 0.0) {
        fVar8 = -fVar8;
      }
      fVar7 = 0.0;
      goto LAB_001634b0;
    }
  }
  else if (fVar4 < DAT_01d4c1cc) {
    if (DAT_01d4bc1c <= fVar15) {
      fVar7 = -fVar7;
    }
    fVar8 = 0.0;
    goto LAB_001634b0;
  }
  fVar10 = fVar8 * fVar8;
  fVar9 = fVar7 * fVar7;
  fVar15 = fVar8 * fVar4 - fVar10;
  fVar12 = fVar7 * fVar5 - fVar9;
  if (fVar15 <= fVar12) {
    fVar15 = fVar12;
  }
  uVar1 = 0;
  do {
    fVar12 = 1.0 / (fVar10 + fVar15);
    fVar20 = fVar8 * fVar4 * fVar12;
    fVar14 = 1.0 / (fVar9 + fVar15);
    fVar21 = fVar7 * fVar5 * fVar14;
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    fVar19 = fVar20 + fVar21 + -1.0;
    if (fVar19 < DAT_01d4bac8) {
      fVar8 = fVar17 * fVar10 * fVar12;
      fVar7 = fVar9 * fVar16 * fVar14;
      goto LAB_001634b0;
    }
    fVar20 = fVar14 * fVar21 + fVar12 * fVar20 + 0.0;
    fVar15 = fVar15 + fVar19 / (fVar20 + fVar20);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x14);
  fVar12 = fVar17 * fVar10 * fVar12;
  fVar14 = fVar9 * fVar16 * fVar14;
  fVar8 = fVar12 / fVar8;
  fVar7 = fVar14 / fVar7;
  fVar7 = sqrtf(fVar8 * fVar8 + fVar7 * fVar7);
  fVar8 = fVar12 * (1.0 / fVar7);
  fVar7 = fVar14 * (1.0 / fVar7);
LAB_001634b0:
  fVar17 = fVar7 / (param_1[1] * param_1[1]);
  fVar16 = fVar8 * fVar8 + fVar7 * fVar7 + 0.0;
  fVar9 = 1.0 - fVar16;
  fVar15 = fVar8 / (*param_1 * *param_1);
  fVar5 = 1.0 / (fVar16 + 1.0);
  fVar4 = fVar8 * fVar15 + fVar7 * fVar17 + 0.0;
  fVar20 = (fVar9 + fVar9) * fVar5 * fVar5;
  fVar14 = fVar9 * fVar20 + -1.0;
  fVar5 = fVar5 * fVar5 * fVar5 * (3.0 - fVar16) * fVar4 * -4.0;
  fVar10 = (fVar8 + fVar8) * fVar20;
  fVar12 = (fVar7 + fVar7) * fVar20;
  fVar16 = (fVar15 + fVar15) * fVar20 + (fVar8 + fVar8) * fVar5;
  fVar15 = (fVar17 + fVar17) * fVar20 + (fVar7 + fVar7) * fVar5;
  fVar8 = fVar20 * fVar4 * -2.0 + fVar9 * fVar5;
  fVar7 = sqrtf(fVar15 * fVar15 + fVar8 * fVar8 + fVar16 * fVar16);
  fVar7 = 1.0 / fVar7;
  fVar4 = fVar7 * (fVar10 * fVar15 - fVar12 * fVar16);
  fVar5 = fVar7 * (fVar12 * fVar8 - fVar14 * fVar15);
  fVar7 = fVar7 * (fVar14 * fVar16 - fVar10 * fVar8);
  *param_3 = fVar4;
  param_3[1] = fVar5;
  param_3[2] = fVar7;
  *param_4 = (fVar3 * fVar13 - fVar6 * fVar18) * (fVar14 * fVar5 - fVar4 * fVar10) +
             (fVar2 * fVar3 + fVar11 * fVar6 + -1.0) * (fVar10 * fVar7 - fVar12 * fVar5) +
             (fVar13 * fVar6 + fVar3 * fVar18) * (fVar4 * fVar12 - fVar14 * fVar7);
  return 1;
}


