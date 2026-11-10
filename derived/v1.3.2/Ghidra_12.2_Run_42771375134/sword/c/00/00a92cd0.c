/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a92cd0; name: FUN_00a92cd0
 */


undefined1  [16] FUN_00a92cd0(float param_1,float param_2,float param_3)

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
  
  param_1 = param_1 * 0.5;
  fVar2 = *(float *)PTR_Float1Divided2Pi_02715148;
  fVar3 = 0.5;
  if (param_1 < 0.0) {
    fVar3 = -0.5;
  }
  fVar4 = *(float *)PTR_Float2Pi_02715150;
  param_1 = param_1 - fVar4 * (float)(int)(fVar3 + param_1 * fVar2);
  fVar3 = *(float *)PTR_FloatPiDivided2_02715158;
  if (param_1 <= fVar3) {
    if (param_1 < -fVar3) {
      fVar5 = -*(float *)PTR_FloatPi_02715160;
      goto LAB_00a92d54;
    }
    fVar5 = 1.0;
  }
  else {
    fVar5 = *(float *)PTR_FloatPi_02715160;
LAB_00a92d54:
    param_1 = fVar5 - param_1;
    fVar5 = -1.0;
  }
  fVar16 = param_1 * param_1;
  fVar15 = *(float *)PTR_SinCoefficients_02715168;
  fVar14 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar11 = *(float *)(PTR_SinCoefficients_02715168 + 0x10);
  fVar13 = *(float *)(PTR_SinCoefficients_02715168 + 8);
  fVar12 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar6 = *(float *)PTR_CosCoefficients_02715170;
  fVar7 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar8 = *(float *)(PTR_CosCoefficients_02715170 + 8);
  fVar9 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  fVar10 = *(float *)(PTR_CosCoefficients_02715170 + 0x10);
  param_2 = param_2 * 0.5;
  fVar17 = 0.5;
  if (param_2 < 0.0) {
    fVar17 = -0.5;
  }
  param_2 = param_2 - fVar4 * (float)(int)(fVar17 + param_2 * fVar2);
  if (param_2 <= fVar3) {
    if (param_2 < -fVar3) {
      fVar17 = -*(float *)PTR_FloatPi_02715160;
      goto LAB_00a92e40;
    }
    fVar17 = 1.0;
  }
  else {
    fVar17 = *(float *)PTR_FloatPi_02715160;
LAB_00a92e40:
    param_2 = fVar17 - param_2;
    fVar17 = -1.0;
  }
  param_1 = param_1 * (fVar16 * (fVar16 * (fVar12 + fVar16 * (fVar16 * (fVar14 - fVar15 * fVar16) -
                                                             fVar13)) - fVar11) + 1.0);
  fVar18 = param_2 * param_2;
  fVar5 = fVar5 * (fVar16 * (fVar16 * (fVar9 + fVar16 * (fVar16 * (fVar7 - fVar16 * fVar6) - fVar8))
                            - fVar10) + 1.0);
  param_2 = param_2 * (fVar18 * (fVar18 * (fVar12 + fVar18 * (fVar18 * (fVar14 - fVar15 * fVar18) -
                                                             fVar13)) - fVar11) + 1.0);
  param_3 = param_3 * 0.5;
  fVar16 = 0.5;
  if (param_3 < 0.0) {
    fVar16 = -0.5;
  }
  fVar17 = fVar17 * (fVar18 * (fVar18 * (fVar9 + fVar18 * (fVar18 * (fVar7 - fVar6 * fVar18) - fVar8
                                                          )) - fVar10) + 1.0);
  param_3 = param_3 - fVar4 * (float)(int)(fVar16 + param_3 * fVar2);
  if (param_3 <= fVar3) {
    if (-fVar3 <= param_3) {
      fVar2 = 1.0;
      goto LAB_00a92f20;
    }
    fVar2 = -*(float *)PTR_FloatPi_02715160;
  }
  else {
    fVar2 = *(float *)PTR_FloatPi_02715160;
  }
  param_3 = fVar2 - param_3;
  fVar2 = -1.0;
LAB_00a92f20:
  fVar3 = param_3 * param_3;
  param_3 = param_3 * (fVar3 * (fVar3 * (fVar12 + fVar3 * (fVar3 * (fVar14 - fVar15 * fVar3) -
                                                          fVar13)) - fVar11) + 1.0);
  fVar4 = param_1 * fVar17;
  fVar17 = fVar5 * fVar17;
  param_1 = param_1 * param_2;
  fVar2 = fVar2 * (fVar3 * (fVar3 * (fVar9 + fVar3 * (fVar3 * (fVar7 - fVar6 * fVar3) - fVar8)) -
                           fVar10) + 1.0);
  fVar5 = fVar5 * param_2;
  auVar1._0_4_ = fVar5 * fVar2 + fVar4 * param_3;
  auVar1._12_4_ = fVar17 * fVar2 + param_1 * param_3;
  auVar1._8_4_ = fVar17 * param_3 - param_1 * fVar2;
  auVar1._4_4_ = fVar4 * fVar2 - fVar5 * param_3;
  return auVar1;
}


