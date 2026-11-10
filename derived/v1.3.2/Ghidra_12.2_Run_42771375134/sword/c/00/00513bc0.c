/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00513bc0; name: FUN_00513bc0
 */


void FUN_00513bc0(float param_1,float param_2,uint param_3,float *param_4,float *param_5,
                 uint param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  if (((param_6 & 1) == 0) || (param_1 * DAT_01d4bbc8 < 1.0)) {
    bVar1 = false;
    fVar3 = 1.0;
  }
  else {
    fVar3 = 1.0 / (param_1 * DAT_01d4bbc8);
    fVar3 = fVar3 + fVar3;
    bVar1 = true;
  }
  fVar6 = 1.0 / ((param_1 + param_1) * param_1);
  fVar4 = -fVar6;
  param_2 = param_2 / (float)param_3;
  fVar2 = expf(fVar4);
  fVar5 = 0.0;
  fVar2 = fVar3 * fVar2;
  fVar6 = expf(-(fVar6 * 0.0));
  fVar4 = expf(fVar4);
  fVar4 = fVar3 * fVar6 + fVar3 * fVar4;
  if (0.0 < fVar4) {
    fVar5 = (fVar3 * fVar6) / fVar4;
  }
  fVar3 = fVar4 * 0.5 + fVar4 * 0.5;
  if (!bVar1) {
    fVar6 = 1.0 / (fVar2 + 0.0 + fVar3);
    fVar2 = fVar6 * fVar2;
    fVar3 = fVar6 * fVar3;
  }
  *param_4 = param_2 + (param_2 * 0.0 - param_2) * fVar5;
  *param_5 = fVar3;
  param_4[1] = -param_2;
  param_5[1] = fVar2;
  return;
}


