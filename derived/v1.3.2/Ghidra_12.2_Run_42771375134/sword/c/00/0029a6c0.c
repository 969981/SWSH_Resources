/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029a6c0; name: FUN_0029a6c0
 */


void FUN_0029a6c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_2[3];
  fVar1 = *param_2;
  fVar6 = fVar4 + fVar4;
  fVar2 = fVar1 + fVar1;
  fVar1 = fVar1 * fVar2 + fVar4 * fVar6 + -1.0;
  fVar5 = param_2[2] * fVar6 + fVar2 * param_2[1];
  fVar2 = fVar2 * param_2[2] - fVar6 * param_2[1];
  fVar4 = param_2[4];
  fVar6 = param_2[5];
  fVar3 = param_2[6];
  *param_1 = fVar1;
  param_1[1] = fVar5;
  param_1[2] = fVar2;
  param_1[3] = -(fVar4 * fVar1 + fVar6 * fVar5 + fVar2 * fVar3);
  return;
}


