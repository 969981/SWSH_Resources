/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005629a0; name: FUN_005629a0
 */


float * FUN_005629a0(float *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_2;
  fVar4 = param_2[5];
  fVar5 = param_2[10];
  fVar2 = fVar3 + fVar4 + fVar5 + 1.0;
  if (1.0 <= fVar2) {
    fVar3 = SQRT(fVar2);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar2);
    }
    fVar3 = 0.5 / fVar3;
    *param_1 = fVar3 * (param_2[6] - param_2[9]);
    param_1[1] = fVar3 * (param_2[8] - param_2[2]);
    param_1[2] = fVar3 * (param_2[1] - param_2[4]);
    fVar3 = 0.25 / fVar3;
  }
  else {
    lVar1 = 0x14;
    if (param_2[0xb] <= fVar5) {
      lVar1 = 0x28;
    }
    if (fVar3 <= *(float *)((long)param_2 + lVar1)) {
      if (*(float *)((long)param_2 + lVar1) == fVar4) {
        fVar3 = (fVar4 - (fVar3 + fVar5)) + 1.0;
        fVar2 = SQRT(fVar3);
        if (NAN(fVar2)) {
          fVar2 = sqrtf(fVar3);
        }
        fVar3 = 0.5 / fVar2;
        *param_1 = fVar3 * (param_2[1] + param_2[4]);
        param_1[1] = fVar2 * 0.5;
        param_1[2] = fVar3 * (param_2[6] + param_2[9]);
        fVar2 = param_2[8];
        fVar4 = param_2[2];
      }
      else {
        fVar3 = (fVar5 - (fVar3 + fVar4)) + 1.0;
        fVar2 = SQRT(fVar3);
        if (NAN(fVar2)) {
          fVar2 = sqrtf(fVar3);
        }
        fVar3 = 0.5 / fVar2;
        *param_1 = fVar3 * (param_2[8] + param_2[2]);
        param_1[1] = fVar3 * (param_2[6] + param_2[9]);
        param_1[2] = fVar2 * 0.5;
        fVar2 = param_2[1];
        fVar4 = param_2[4];
      }
    }
    else {
      fVar3 = (fVar3 - (fVar4 + fVar5)) + 1.0;
      fVar2 = SQRT(fVar3);
      if (NAN(fVar2)) {
        fVar2 = sqrtf(fVar3);
      }
      fVar3 = 0.5 / fVar2;
      *param_1 = fVar2 * 0.5;
      param_1[1] = fVar3 * (param_2[1] + param_2[4]);
      param_1[2] = fVar3 * (param_2[8] + param_2[2]);
      fVar2 = param_2[6];
      fVar4 = param_2[9];
    }
    fVar3 = fVar3 * (fVar2 - fVar4);
  }
  param_1[3] = fVar3;
  return param_1;
}


