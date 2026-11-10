/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023e9a0; name: FUN_0023e9a0
 */


float FUN_0023e9a0(float param_1,long param_2,float *param_3,float *param_4,float *param_5)

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
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  
  fVar2 = *param_5 * param_1 + *param_3;
  fVar3 = param_5[1] * param_1 + param_3[1];
  fVar1 = param_5[2] * param_1 + param_3[2];
  fStack_dc = 1.0 / *(float *)(param_2 + 8);
  local_e0 = 1.0 / *(float *)(param_2 + 4);
  local_d8 = 1.0 / *(float *)(param_2 + 0xc);
  local_d4 = *(undefined4 *)(param_2 + 0x10);
  local_d0 = *(undefined4 *)(param_2 + 0x14);
  local_cc = *(undefined4 *)(param_2 + 0x18);
  local_c8 = *(undefined4 *)(param_2 + 0x1c);
  FUN_001b0f90(&local_c0,&local_e0,&local_d4);
  fVar4 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar10 = fVar4 * local_c0 + fVar7 * local_b4 + fVar8 * local_a8;
  fVar11 = fVar4 * fStack_bc + fVar7 * local_b0 + fVar8 * fStack_a4;
  fVar5 = fVar4 * local_b8 + fVar7 * local_ac + fVar8 * local_a0;
  fVar4 = *param_4;
  fVar9 = param_4[1];
  fVar7 = fVar9 * local_b4;
  fVar14 = fVar9 * local_b0;
  fVar9 = fVar9 * local_ac;
  fVar12 = fVar4 * fStack_bc;
  fVar13 = fVar4 * local_b8;
  fVar6 = param_4[2];
  fVar8 = fVar6 * local_a8;
  fVar15 = fVar6 * fStack_a4;
  fVar6 = fVar6 * local_a0;
  fVar4 = fabsf(fVar4 * local_c0);
  fVar7 = fabsf(fVar7);
  fVar8 = fabsf(fVar8);
  fVar12 = fabsf(fVar12);
  fVar14 = fabsf(fVar14);
  fVar15 = fabsf(fVar15);
  fVar13 = fabsf(fVar13);
  fVar9 = fabsf(fVar9);
  fVar6 = fabsf(fVar6);
  *param_3 = fVar10;
  param_3[1] = fVar11;
  param_3[2] = fVar5;
  *param_4 = fVar4 + fVar7 + fVar8;
  param_4[1] = fVar12 + fVar14 + fVar15;
  param_4[2] = fVar13 + fVar9 + fVar6;
  fVar10 = (fVar2 * local_c0 + fVar3 * local_b4 + fVar1 * local_a8) - fVar10;
  fVar11 = (fVar2 * fStack_bc + fVar3 * local_b0 + fVar1 * fStack_a4) - fVar11;
  fVar5 = (fVar2 * local_b8 + fVar3 * local_ac + fVar1 * local_a0) - fVar5;
  *param_5 = fVar10;
  param_5[1] = fVar11;
  param_5[2] = fVar5;
  fVar1 = sqrtf(fVar10 * fVar10 + fVar11 * fVar11 + fVar5 * fVar5);
  if (DAT_01d4bf84 <= fVar1) {
    fVar4 = 1.0 / fVar1;
    *param_5 = fVar4 * *param_5;
    param_5[1] = fVar4 * param_5[1];
    param_5[2] = fVar4 * param_5[2];
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}


