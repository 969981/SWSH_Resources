/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00562ba0; name: FUN_00562ba0
 */


float FUN_00562ba0(float param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  switch(param_2) {
  case 0:
  case 1:
    fVar3 = param_1;
  default:
    break;
  case 2:
  case 4:
    param_1 = param_1 * param_3[1];
    fVar3 = (param_1 * (param_1 * param_3[2] + 1.0)) / (param_1 + 1.0);
    break;
  case 6:
  case 8:
    fVar1 = logf(param_1 * param_3[2] + 1.0);
    fVar1 = fVar1 * param_3[1];
    fVar2 = fVar1;
    if (1.0 < fVar1) {
      fVar2 = 1.0;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar1) {
      fVar3 = fVar2;
    }
    break;
  case 10:
    fVar2 = expf(-(param_1 * *param_3));
    fVar3 = param_3[1] * ((1.0 - fVar2) + -1.0) + 1.0;
    fVar3 = fVar3 * (1.0 - fVar2) * fVar3;
  }
  if (param_2 == 0) {
    return fVar3;
  }
  if (fVar3 < 0.0) {
    return 0.0;
  }
  if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  return fVar3;
}


