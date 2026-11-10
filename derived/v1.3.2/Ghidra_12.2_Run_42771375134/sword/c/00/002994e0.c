/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002994e0; name: FUN_002994e0
 */


undefined8 FUN_002994e0(float *param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = param_2[0xc];
  fVar2 = *param_1 - param_2[9];
  fVar3 = param_1[1] - param_2[10];
  fVar4 = param_1[2] - param_2[0xb];
  fVar8 = fVar2 * *param_2 + fVar3 * param_2[1] + fVar4 * param_2[2];
  fVar5 = fVar2 * param_2[3] + fVar3 * param_2[4] + fVar4 * param_2[5];
  if (-fVar9 <= fVar8) {
    if (fVar8 <= fVar9) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
      fVar8 = fVar9;
    }
  }
  else {
    bVar1 = 1;
    fVar8 = -fVar9;
  }
  fVar6 = fVar2 * param_2[6] + fVar3 * param_2[7] + fVar4 * param_2[8];
  fVar7 = param_2[0xd];
  fVar9 = -fVar7;
  if (fVar9 <= fVar5) {
    fVar9 = fVar5;
    if (fVar7 < fVar5) {
      bVar1 = 1;
      fVar9 = fVar7;
    }
    fVar5 = param_2[0xe];
  }
  else {
    bVar1 = 1;
    fVar5 = param_2[0xe];
  }
  fVar7 = -fVar5;
  if (fVar7 <= fVar6) {
    fVar7 = fVar5;
    if (fVar6 <= fVar5) {
      fVar7 = fVar6;
    }
    if (!(bool)(bVar1 | fVar5 < fVar6)) {
      return 1;
    }
  }
  fVar2 = fVar2 - (*param_2 * fVar8 + param_2[3] * fVar9 + param_2[6] * fVar7);
  fVar3 = fVar3 - (param_2[1] * fVar8 + param_2[4] * fVar9 + param_2[7] * fVar7);
  fVar4 = fVar4 - (param_2[2] * fVar8 + param_2[5] * fVar9 + param_2[8] * fVar7);
  if (fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3 <= param_1[3] * param_1[3]) {
    return 1;
  }
  return 0;
}


