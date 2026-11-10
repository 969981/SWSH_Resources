/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00234720; name: FUN_00234720
 */


float FUN_00234720(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = param_1[1] - param_2[1];
  fVar1 = *param_1 - *param_2;
  fVar3 = param_1[2] - param_2[2];
  fVar5 = fVar1 * *param_4 + fVar2 * param_4[1] + fVar3 * param_4[2];
  fVar7 = fVar1 * param_4[3] + fVar2 * param_4[4] + fVar3 * param_4[5];
  fVar4 = *param_3;
  fVar9 = param_3[1];
  fVar1 = fVar1 * param_4[6] + fVar2 * param_4[7] + fVar3 * param_4[8];
  fVar2 = 0.0;
  if (fVar4 < fVar5) {
    fVar2 = (fVar5 - fVar4) * (fVar5 - fVar4) + 0.0;
  }
  fVar10 = -fVar4;
  fVar3 = fVar5;
  if (fVar4 < fVar5) {
    fVar3 = fVar4;
  }
  fVar6 = -fVar9;
  if (fVar5 < fVar10) {
    fVar3 = fVar10;
  }
  if (fVar5 < fVar10) {
    fVar2 = (fVar5 + fVar4) * (fVar5 + fVar4) + 0.0;
  }
  fVar5 = fVar2;
  fVar4 = fVar7;
  if (fVar9 < fVar7) {
    fVar5 = fVar2 + (fVar7 - fVar9) * (fVar7 - fVar9);
    fVar4 = fVar9;
  }
  fVar8 = param_3[2];
  fVar10 = fVar6;
  if (fVar6 <= fVar7) {
    fVar10 = fVar4;
  }
  fVar2 = fVar2 + (fVar7 + fVar9) * (fVar7 + fVar9);
  if (fVar6 <= fVar7) {
    fVar2 = fVar5;
  }
  if (-fVar8 <= fVar1) {
    if (fVar8 < fVar1) {
      fVar2 = fVar2 + (fVar1 - fVar8) * (fVar1 - fVar8);
      fVar1 = fVar8;
    }
  }
  else {
    fVar2 = fVar2 + (fVar1 + fVar8) * (fVar1 + fVar8);
    fVar1 = -fVar8;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = fVar3;
    param_5[1] = fVar10;
    param_5[2] = fVar1;
  }
  return fVar2;
}


