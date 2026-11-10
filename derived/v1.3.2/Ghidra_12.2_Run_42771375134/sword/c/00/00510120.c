/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00510120; name: FUN_00510120
 */


void FUN_00510120(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar9 = param_3[2];
  fVar5 = param_3[1];
  fVar7 = param_3[5];
  fVar10 = param_3[6];
  fVar3 = param_2[2];
  fVar8 = param_3[9];
  fVar11 = param_3[10];
  fVar6 = param_3[0xd];
  fVar4 = param_3[0xe];
  *param_1 = param_3[0xc] + *param_3 * fVar1 + param_3[4] * fVar2 + param_3[8] * fVar3;
  param_1[1] = fVar6 + fVar1 * fVar5 + fVar2 * fVar7 + fVar3 * fVar8;
  param_1[2] = fVar4 + fVar1 * fVar9 + fVar2 * fVar10 + fVar3 * fVar11;
  return;
}


