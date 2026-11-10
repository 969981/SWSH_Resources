/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00694640; name: FUN_00694640
 */


void FUN_00694640(float *param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = (float)param_2[4];
  fVar3 = (float)param_2[5];
  fVar5 = (float)param_2[2];
  fVar6 = (float)param_2[3];
  fVar1 = (float)param_2[6];
  fVar4 = (float)param_2[7];
  *param_1 = 1.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[5] = 1.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 1.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xf] = 1.0;
  if (*param_2 == 1) {
    if (param_3 == 1) {
      *param_1 = 2.0 / (fVar6 - fVar5);
      param_1[0xf] = 1.0;
      param_1[5] = 2.0 / (fVar2 - fVar3);
      fVar7 = -1.0;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      *param_1 = 2.0 / (fVar6 - fVar5);
      param_1[0xf] = 1.0;
      param_1[5] = 2.0 / (fVar2 - fVar3);
      fVar7 = 1.0;
    }
    param_1[10] = fVar7 / (fVar4 - fVar1);
    fVar1 = -fVar1 / (fVar4 - fVar1);
    param_1[0xb] = 0.0;
    param_1[0xc] = (fVar5 + fVar6) / (fVar5 - fVar6);
    param_1[0xd] = (fVar2 + fVar3) / (fVar3 - fVar2);
  }
  else {
    if (*param_2 != 0) {
      return;
    }
    if (param_3 == 1) {
      *param_1 = (fVar1 + fVar1) / (fVar6 - fVar5);
      param_1[0xf] = 0.0;
      param_1[0xb] = -1.0;
      param_1[8] = (fVar5 + fVar6) / (fVar6 - fVar5);
      param_1[9] = (fVar2 + fVar3) / (fVar2 - fVar3);
      param_1[5] = (fVar1 + fVar1) / (fVar2 - fVar3);
      param_1[10] = fVar4 / (fVar1 - fVar4);
      fVar1 = (fVar1 * fVar4) / (fVar1 - fVar4);
    }
    else {
      if (param_3 != 0) {
        return;
      }
      *param_1 = (fVar1 + fVar1) / (fVar6 - fVar5);
      param_1[5] = (fVar1 + fVar1) / (fVar2 - fVar3);
      param_1[0xf] = 0.0;
      param_1[0xb] = 1.0;
      param_1[8] = (fVar5 + fVar6) / (fVar5 - fVar6);
      param_1[9] = (fVar2 + fVar3) / (fVar3 - fVar2);
      param_1[10] = fVar4 / (fVar4 - fVar1);
      fVar1 = (fVar1 * fVar4) / (fVar1 - fVar4);
    }
  }
  param_1[0xe] = fVar1;
  return;
}


