/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401910; name: FUN_00401910
 */


void FUN_00401910(float *param_1,float param_2,float *param_3,float *param_4)

{
  float __x;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar6 = fVar2 * *param_4 + fVar3 * param_4[1] + fVar4 * param_4[2] + fVar5 * param_4[3];
  fVar1 = -fVar6;
  if (0.0 <= fVar6) {
    fVar1 = fVar6;
  }
  __x = 1.0 - fVar1 * fVar1;
  if (DAT_01d4bc30 <= __x) {
    fVar5 = -1.0;
    if (0.0 <= fVar6) {
      fVar5 = 1.0;
    }
    fVar2 = sqrtf(__x);
    fVar1 = atan2f(fVar2,fVar1);
    fVar6 = sinf((1.0 - param_2) * fVar1);
    fVar6 = (1.0 / fVar2) * fVar6;
    fVar1 = sinf(fVar1 * param_2);
    fVar5 = fVar5 * (1.0 / fVar2) * fVar1;
    fVar2 = fVar6 * *param_3 + fVar5 * *param_4;
    fVar3 = fVar6 * param_3[1] + fVar5 * param_4[1];
    fVar4 = fVar6 * param_3[2] + fVar5 * param_4[2];
    fVar5 = fVar6 * param_3[3] + fVar5 * param_4[3];
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = fVar5;
  return;
}


