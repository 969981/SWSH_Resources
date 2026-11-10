/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00295c10; name: FUN_00295c10
 */


void FUN_00295c10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_2;
  fVar5 = param_2[1];
  fVar1 = param_2[3];
  fVar4 = param_2[4];
  param_1[0xb] = (param_2[2] + param_2[5]) * 0.5;
  param_1[9] = (fVar3 + fVar1) * 0.5;
  param_1[10] = (fVar5 + fVar4) * 0.5;
  fVar3 = param_2[3] - *param_2;
  fVar4 = param_2[5] - param_2[2];
  fVar5 = param_2[4] - param_2[1];
  fVar1 = sqrtf(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar1 == 0.0) {
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 1.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
  }
  else {
    fVar2 = 1.0 / fVar1;
    *param_1 = fVar3 * fVar2;
    param_1[1] = fVar5 * fVar2;
    param_1[2] = fVar4 * fVar2;
    fVar3 = fabsf(fVar5 * fVar2);
    if (fVar3 <= DAT_01d4c2dc) {
      fVar4 = *param_1;
      fVar3 = param_1[2];
      param_1[3] = fVar3;
      param_1[4] = 0.0;
      param_1[5] = -fVar4;
      fVar3 = sqrtf(fVar4 * fVar4 + fVar3 * fVar3 + 0.0);
      if (fVar3 <= 0.0) {
        fVar5 = param_1[5];
        fVar4 = param_1[3];
      }
      else {
        fVar3 = 1.0 / fVar3;
        fVar4 = fVar3 * param_1[3];
        fVar5 = fVar3 * param_1[5];
        param_1[3] = fVar4;
        param_1[4] = fVar3 * param_1[4];
        param_1[5] = fVar5;
      }
      param_1[6] = fVar5 * param_1[1];
      param_1[8] = -(fVar4 * param_1[1]);
      param_1[7] = fVar4 * param_1[2] - fVar5 * *param_1;
    }
    else {
      fVar4 = param_1[1];
      param_1[3] = 1.0;
      param_1[4] = 0.0;
      fVar3 = param_1[2];
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[8] = -fVar4;
      param_1[7] = fVar3;
      fVar3 = sqrtf(fVar4 * fVar4 + fVar3 * fVar3 + 0.0);
      if (0.0 < fVar3) {
        fVar3 = 1.0 / fVar3;
        param_1[6] = fVar3 * param_1[6];
        param_1[7] = fVar3 * param_1[7];
        param_1[8] = fVar3 * param_1[8];
      }
    }
  }
  fVar3 = param_2[6];
  param_1[0xc] = fVar1 * 0.5 + fVar3;
  param_1[0xd] = fVar3;
  param_1[0xe] = fVar3;
  return;
}


