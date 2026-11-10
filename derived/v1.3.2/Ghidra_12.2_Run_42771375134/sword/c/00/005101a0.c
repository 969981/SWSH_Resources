/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005101a0; name: FUN_005101a0
 */


void FUN_005101a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_3[1];
  fVar4 = param_3[5];
  fVar5 = param_3[0xd];
  *param_1 = param_3[0xc] + *param_3 * fVar1 + param_3[4] * fVar2;
  param_1[1] = fVar5 + fVar1 * fVar3 + fVar2 * fVar4;
  return;
}


