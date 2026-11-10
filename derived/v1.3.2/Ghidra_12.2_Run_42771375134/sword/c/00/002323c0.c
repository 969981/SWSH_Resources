/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002323c0; name: FUN_002323c0
 */


void FUN_002323c0(float *param_1,float *param_2,float *param_3)

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
  float local_30;
  float fStack_2c;
  float local_28;
  
  fVar10 = param_3[0xc];
  fVar12 = fVar10 * param_3[1];
  fVar11 = fVar10 * *param_3;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar9 = param_2[8];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar10 = fVar10 * param_3[2];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  *param_1 = fVar11 * fVar1 + fVar12 * fVar4 + fVar10 * fVar7;
  param_1[1] = fVar11 * fVar2 + fVar12 * fVar5 + fVar10 * fVar8;
  param_1[2] = fVar11 * fVar3 + fVar12 * fVar6 + fVar10 * fVar9;
  fVar10 = param_3[0xd];
  fVar11 = fVar10 * param_3[3];
  fVar12 = fVar10 * param_3[4];
  fVar10 = fVar10 * param_3[5];
  param_1[3] = fVar1 * fVar11 + fVar4 * fVar12 + fVar7 * fVar10;
  param_1[4] = fVar2 * fVar11 + fVar5 * fVar12 + fVar8 * fVar10;
  param_1[5] = fVar3 * fVar11 + fVar6 * fVar12 + fVar9 * fVar10;
  fVar10 = param_3[0xe];
  fVar11 = fVar10 * param_3[6];
  fVar12 = fVar10 * param_3[7];
  fVar10 = fVar10 * param_3[8];
  param_1[6] = fVar1 * fVar11 + fVar4 * fVar12 + fVar7 * fVar10;
  param_1[7] = fVar2 * fVar11 + fVar5 * fVar12 + fVar8 * fVar10;
  param_1[8] = fVar3 * fVar11 + fVar6 * fVar12 + fVar9 * fVar10;
  fVar10 = param_3[9];
  fVar11 = param_3[10];
  fVar12 = param_3[0xb];
  fVar13 = param_2[10];
  fVar14 = param_2[0xb];
  param_1[9] = param_2[9] + fVar1 * fVar10 + fVar4 * fVar11 + fVar7 * fVar12;
  param_1[10] = fVar2 * fVar10 + fVar5 * fVar11 + fVar8 * fVar12 + fVar13;
  param_1[0xb] = fVar3 * fVar10 + fVar6 * fVar11 + fVar9 * fVar12 + fVar14;
                    /* try { // try from 0023256c to 00232577 has its CatchHandler @ 00232598 */
  FUN_004015c0(&local_30,param_1);
  param_1[0xc] = local_30;
  param_1[0xd] = fStack_2c;
  param_1[0xe] = local_28;
  return;
}


