/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022d580; name: FUN_0022d580
 */


void FUN_0022d580(float *param_1,float *param_2)

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
  
  fVar6 = param_2[2];
  fVar1 = fabsf(fVar6);
  if (fVar1 <= DAT_01d4c2dc) {
    fVar1 = 1.0 / (fVar6 + 1.0);
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = fVar1 * -fVar3;
    fVar5 = fVar1 * 0.0 * fVar2;
    param_1[4] = fVar6 + fVar2 * fVar1 * fVar2;
    param_1[5] = fVar5 - fVar3;
    param_1[2] = fVar4 * 0.0 - fVar2;
    param_1[3] = fVar4 * fVar2;
    *param_1 = fVar6 - fVar4 * fVar3;
    param_1[1] = fVar4 * fVar2 + 0.0;
    param_1[6] = fVar2 + fVar4 * 0.0;
    param_1[7] = fVar3 + fVar5;
    fVar6 = fVar6 + fVar1 * 0.0 * 0.0;
  }
  else {
    fVar6 = 1.0 - param_2[1];
    fVar1 = 0.0 - *param_2;
    fVar2 = 0.0 - param_2[2];
    fVar3 = 2.0 / (fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2);
    fVar5 = fVar3 * fVar1;
    fVar4 = ((fVar1 * 0.0 + fVar6) - fVar2) * fVar3;
    fVar7 = fVar3 * fVar6;
    fVar3 = fVar3 * fVar2;
    fVar8 = fVar4 * fVar1;
    fVar9 = fVar4 * fVar6;
    fVar4 = fVar4 * fVar2;
    param_1[2] = fVar4 * 0.0 + (0.0 - fVar3 * fVar1);
    param_1[3] = fVar8 - fVar5 * fVar6;
    *param_1 = (fVar8 * 0.0 - fVar5 * fVar1) + 1.0;
    param_1[1] = fVar9 * 0.0 - fVar7 * fVar1;
    param_1[6] = (0.0 - fVar5 * fVar2) - fVar8;
    param_1[7] = (1.0 - fVar7 * fVar2) - fVar9;
    param_1[4] = fVar9 + (-1.0 - fVar7 * fVar6) + 1.0;
    param_1[5] = fVar4 + (1.0 - fVar3 * fVar6);
    fVar6 = ((-1.0 - fVar3 * fVar2) - fVar4) + 1.0;
  }
  param_1[8] = fVar6;
  return;
}


