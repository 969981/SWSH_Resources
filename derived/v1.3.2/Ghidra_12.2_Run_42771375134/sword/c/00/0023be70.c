/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023be70; name: FUN_0023be70
 */


void FUN_0023be70(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[8];
  fVar6 = *param_2;
  fVar4 = param_2[4];
  if (0.0 <= fVar1) {
    if (-fVar4 <= fVar6) {
      fVar4 = fVar1 + fVar6 + 1.0 + fVar4;
      fVar2 = param_2[5];
      fVar8 = param_2[6];
      fVar1 = param_2[7];
      fVar6 = param_2[1];
      fVar5 = param_2[2];
      fVar7 = param_2[3];
      fVar3 = sqrtf(fVar4);
      fVar3 = 0.5 / fVar3;
      fVar1 = (fVar2 - fVar1) * fVar3;
      fVar2 = (fVar8 - fVar5) * fVar3;
      fVar6 = (fVar6 - fVar7) * fVar3;
      fVar4 = fVar4 * fVar3;
    }
    else {
      fVar7 = param_2[1];
      fVar8 = param_2[2];
      fVar6 = fVar1 + ((1.0 - fVar6) - fVar4);
      fVar3 = param_2[5];
      fVar1 = param_2[6];
      fVar2 = param_2[7];
      fVar5 = param_2[3];
      fVar4 = sqrtf(fVar6);
      fVar4 = 0.5 / fVar4;
      fVar1 = (fVar1 + fVar8) * fVar4;
      fVar2 = (fVar3 + fVar2) * fVar4;
      fVar6 = fVar6 * fVar4;
      fVar4 = (fVar7 - fVar5) * fVar4;
    }
  }
  else {
    if (fVar6 <= fVar4) {
      fVar2 = ((1.0 - fVar6) + fVar4) - fVar1;
      fVar5 = param_2[1];
      fVar1 = param_2[3];
      fVar6 = param_2[5] + param_2[7];
      fVar4 = param_2[6] - param_2[2];
      fVar3 = sqrtf(fVar2);
      fVar3 = 0.5 / fVar3;
      fVar1 = (fVar5 + fVar1) * fVar3;
      fVar2 = fVar2 * fVar3;
    }
    else {
      fVar1 = ((fVar6 + 1.0) - fVar4) - fVar1;
      fVar5 = param_2[1];
      fVar2 = param_2[3];
      fVar6 = param_2[6] + param_2[2];
      fVar4 = param_2[5] - param_2[7];
      fVar3 = sqrtf(fVar1);
      fVar3 = 0.5 / fVar3;
      fVar1 = fVar1 * fVar3;
      fVar2 = (fVar5 + fVar2) * fVar3;
    }
    fVar6 = fVar6 * fVar3;
    fVar4 = fVar4 * fVar3;
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar6;
  param_1[3] = fVar4;
  return;
}


