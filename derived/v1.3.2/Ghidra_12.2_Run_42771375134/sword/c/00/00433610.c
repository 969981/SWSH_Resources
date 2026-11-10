/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00433610; name: FUN_00433610
 */


void FUN_00433610(float param_1,float param_2,float param_3,uint param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_5[1] = param_5[1] + param_2;
  *param_5 = *param_5 + 1.0;
  param_5[2] = param_5[2] + param_3;
  param_5[3] = param_5[3] + param_1;
  fVar3 = DAT_01d4c19c;
  if (4 < param_4) {
    fVar2 = param_3 * param_3;
    if (DAT_01d4bdf0 <= fVar2) {
      param_5[6] = param_5[6] + fVar2;
      if (9 < param_4) {
        param_5[0xc] = param_5[0xc] + param_3;
      }
    }
    else {
      fVar1 = 1.0 - fVar2;
      fVar5 = SQRT(fVar1);
      param_5[6] = fVar2 * 1.5 + -0.5 + param_5[6];
      fVar8 = fVar1 * fVar3;
      param_2 = (1.0 / fVar5) * param_2;
      param_1 = (1.0 / fVar5) * param_1;
      fVar6 = param_1 * param_1;
      fVar7 = param_2 * param_2;
      fVar4 = (param_1 + param_1) * param_2;
      param_5[5] = param_5[5] + param_2 * fVar5 * param_3 * DAT_01d4c240;
      param_5[4] = param_5[4] + fVar4 * fVar8;
      param_5[7] = param_5[7] + (param_1 + param_1) * param_3 * fVar3 * fVar5;
      param_5[8] = param_5[8] + (fVar6 - fVar7) * fVar8;
      fVar3 = DAT_01d4c070;
      if (9 < param_4) {
        fVar8 = fVar5 * fVar1 * DAT_01d4c63c;
        fVar1 = param_3 * DAT_01d4bad8 * fVar1;
        param_5[9] = param_5[9] + (fVar6 * 3.0 - fVar7) * fVar8 * param_2;
        param_5[10] = param_5[10] + fVar4 * fVar1;
        fVar3 = (fVar2 * 5.0 * fVar5 - fVar5) * fVar3;
        param_5[0xb] = param_5[0xb] + param_2 * fVar3;
        param_5[0xc] = param_5[0xc] + (fVar2 * 5.0 + -3.0) * param_3 * 0.5;
        param_5[0xd] = param_5[0xd] + param_1 * fVar3;
        param_5[0xe] = param_5[0xe] + (fVar6 - fVar7) * fVar1;
        param_5[0xf] = param_5[0xf] + (fVar6 - fVar7 * 3.0) * fVar8 * param_1;
        return;
      }
    }
  }
  return;
}


