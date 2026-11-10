/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00298560; name: FUN_00298560
 */


undefined8
FUN_00298560(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,uint param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float __x;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float __x_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float __x_01;
  float __x_02;
  float __x_03;
  float fVar19;
  float __x_04;
  float __x_05;
  float __x_06;
  
  fVar15 = param_5[1] - param_2[1];
  fVar2 = *param_5 - *param_2;
  fVar18 = param_5[2] - param_2[2];
  __x_01 = fVar2 * *param_3 + fVar15 * param_3[1] + fVar18 * param_3[2];
  __x_02 = fVar2 * param_3[3] + fVar15 * param_3[4] + fVar18 * param_3[5];
  fVar15 = fVar2 * param_3[6] + fVar15 * param_3[7] + fVar18 * param_3[8];
  fVar18 = *param_3 * *param_6 + param_3[1] * param_6[1] + param_3[2] * param_6[2];
  fVar3 = fabsf(fVar18);
  fVar2 = DAT_01d4c1cc;
  fVar3 = fVar3 + DAT_01d4c1cc;
  fVar4 = *param_3 * param_6[3] + param_3[1] * param_6[4] + param_3[2] * param_6[5];
  fVar5 = fabsf(fVar4);
  fVar5 = fVar5 + fVar2;
  __x = *param_3 * param_6[6] + param_3[1] * param_6[7] + param_3[2] * param_6[8];
  fVar6 = fabsf(__x);
  fVar6 = fVar6 + fVar2;
  fVar7 = param_3[3] * *param_6 + param_3[4] * param_6[1] + param_3[5] * param_6[2];
  fVar8 = fabsf(fVar7);
  fVar8 = fVar8 + fVar2;
  __x_03 = param_3[3] * param_6[3] + param_3[4] * param_6[4] + param_3[5] * param_6[5];
  fVar9 = fabsf(__x_03);
  fVar9 = fVar9 + fVar2;
  __x_00 = param_3[3] * param_6[6] + param_3[4] * param_6[7] + param_3[5] * param_6[8];
  fVar10 = fabsf(__x_00);
  fVar10 = fVar10 + fVar2;
  __x_06 = param_3[6] * *param_6 + param_3[7] * param_6[1] + param_3[8] * param_6[2];
  fVar11 = fabsf(__x_06);
  fVar11 = fVar11 + fVar2;
  __x_05 = param_3[6] * param_6[3] + param_3[7] * param_6[4] + param_3[8] * param_6[5];
  fVar12 = fabsf(__x_05);
  fVar12 = fVar12 + fVar2;
  __x_04 = param_3[6] * param_6[6] + param_3[7] * param_6[7] + param_3[8] * param_6[8];
  fVar13 = fabsf(__x_04);
  fVar13 = fVar13 + fVar2;
  fVar2 = *param_4;
  fVar16 = param_4[1];
  fVar17 = param_4[2];
  fVar19 = *param_1;
  fVar14 = fabsf(__x_01);
  if (((((fVar19 + fVar2 * fVar3 + fVar16 * fVar5 + fVar17 * fVar6 < fVar14) ||
        (fVar2 = *param_4, fVar16 = param_4[1], fVar19 = param_1[1], fVar17 = param_4[2],
        fVar14 = fabsf(__x_02), fVar19 + fVar2 * fVar8 + fVar16 * fVar9 + fVar17 * fVar10 < fVar14))
       || (fVar2 = *param_4, fVar16 = param_4[1], fVar19 = param_1[2], fVar17 = param_4[2],
          fVar14 = fabsf(fVar15),
          fVar19 + fVar2 * fVar11 + fVar16 * fVar12 + fVar17 * fVar13 < fVar14)) ||
      (((fVar2 = *param_1, fVar16 = param_1[1], fVar17 = param_1[2], fVar19 = *param_4,
        fVar14 = fabsf(__x_01 * fVar18 + __x_02 * fVar7 + fVar15 * __x_06),
        fVar19 + fVar2 * fVar3 + fVar16 * fVar8 + fVar17 * fVar11 < fVar14 ||
        (fVar2 = *param_1, fVar16 = param_1[1], fVar17 = param_1[2], fVar19 = param_4[1],
        fVar14 = fabsf(__x_01 * fVar4 + __x_02 * __x_03 + fVar15 * __x_05),
        fVar19 + fVar2 * fVar5 + fVar16 * fVar9 + fVar17 * fVar12 < fVar14)) ||
       (fVar2 = *param_1, fVar16 = param_1[1], fVar17 = param_1[2], fVar19 = param_4[2],
       fVar14 = fabsf(__x_01 * __x + __x_02 * __x_00 + fVar15 * __x_04),
       fVar19 + fVar2 * fVar6 + fVar16 * fVar10 + fVar17 * fVar13 < fVar14)))) ||
     (((param_7 & 1) != 0 &&
      (((fVar2 = param_1[1], fVar17 = param_1[2], fVar14 = param_4[1], fVar19 = param_4[2],
        fVar16 = fabsf(fVar15 * fVar7 - __x_02 * __x_06),
        fVar2 * fVar11 + fVar17 * fVar8 + fVar14 * fVar6 + fVar19 * fVar5 < fVar16 ||
        (fVar2 = param_1[1], fVar17 = param_1[2], fVar14 = *param_4, fVar19 = param_4[2],
        fVar16 = fabsf(fVar15 * __x_03 - __x_02 * __x_05),
        fVar2 * fVar12 + fVar17 * fVar9 + fVar6 * fVar14 + fVar19 * fVar3 < fVar16)) ||
       (((fVar2 = param_1[1], fVar17 = param_1[2], fVar14 = *param_4, fVar19 = param_4[1],
         fVar16 = fabsf(fVar15 * __x_00 - __x_02 * __x_04),
         fVar2 * fVar13 + fVar17 * fVar10 + fVar5 * fVar14 + fVar3 * fVar19 < fVar16 ||
         ((((fVar2 = *param_1, fVar17 = param_1[2], fVar14 = param_4[1], fVar19 = param_4[2],
            fVar16 = fabsf(__x_06 * __x_01 - fVar15 * fVar18),
            fVar11 * fVar2 + fVar3 * fVar17 + fVar10 * fVar14 + fVar9 * fVar19 < fVar16 ||
            (fVar2 = *param_1, fVar17 = param_1[2], fVar14 = *param_4, fVar19 = param_4[2],
            fVar16 = fabsf(__x_05 * __x_01 - fVar15 * fVar4),
            fVar12 * fVar2 + fVar5 * fVar17 + fVar10 * fVar14 + fVar8 * fVar19 < fVar16)) ||
           (fVar2 = *param_1, fVar16 = param_1[2], fVar14 = *param_4, fVar17 = param_4[1],
           fVar15 = fabsf(__x_04 * __x_01 - fVar15 * __x),
           fVar13 * fVar2 + fVar6 * fVar16 + fVar9 * fVar14 + fVar8 * fVar17 < fVar15)) ||
          ((fVar2 = *param_1, fVar14 = param_1[1], fVar15 = param_4[1], fVar16 = param_4[2],
           fVar18 = fabsf(fVar18 * __x_02 - fVar7 * __x_01),
           fVar8 * fVar2 + fVar3 * fVar14 + fVar13 * fVar15 + fVar12 * fVar16 < fVar18 ||
           (fVar2 = *param_1, fVar3 = param_1[1], fVar15 = *param_4, fVar7 = param_4[2],
           fVar18 = fabsf(fVar4 * __x_02 - __x_03 * __x_01),
           fVar9 * fVar2 + fVar5 * fVar3 + fVar13 * fVar15 + fVar11 * fVar7 < fVar18)))))) ||
        (fVar2 = *param_1, fVar3 = param_1[1], fVar15 = *param_4, fVar4 = param_4[1],
        fVar18 = fabsf(__x * __x_02 - __x_00 * __x_01),
        fVar10 * fVar2 + fVar6 * fVar3 + fVar12 * fVar15 + fVar11 * fVar4 < fVar18)))))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


