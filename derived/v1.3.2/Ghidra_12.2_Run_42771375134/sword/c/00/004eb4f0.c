/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eb4f0; name: FUN_004eb4f0
 */


void FUN_004eb4f0(float *param_1,float *param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1[0xc] == 0.0) {
    lVar1 = -1;
  }
  else {
    lVar1 = *(long *)(**(long **)(param_1 + 10) + 0x38);
  }
  fVar2 = 1.0;
  if (lVar1 != param_3) {
    fVar2 = -1.0;
  }
  fVar3 = fVar2 * param_1[0x17];
  fVar7 = param_1[0x15];
  fVar6 = *param_2 + (fVar3 * *param_1 - param_1[0x12]);
  fVar5 = param_2[1] + (fVar3 * param_1[1] - param_1[0x13]);
  fVar3 = param_2[2] + (fVar3 * param_1[2] - param_1[0x14]);
  fVar8 = param_1[0x18] * fVar6 + fVar5 * param_1[0x19] + fVar3 * param_1[0x1a];
  fVar4 = -fVar7;
  if ((-fVar7 <= fVar8) && (fVar4 = fVar7, fVar8 <= fVar7)) {
    fVar4 = fVar8;
  }
  fVar8 = param_1[3] * fVar6 + fVar5 * param_1[4] + fVar3 * param_1[5];
  fVar9 = param_1[0x16];
  fVar7 = -fVar9;
  if ((-fVar9 <= fVar8) && (fVar7 = fVar9, fVar8 <= fVar9)) {
    fVar7 = fVar8;
  }
  fVar6 = fVar6 - (fVar4 * param_1[0x18] + param_1[3] * fVar7);
  fVar5 = fVar5 - (fVar4 * param_1[0x19] + param_1[4] * fVar7);
  fVar3 = fVar3 - (fVar4 * param_1[0x1a] + param_1[5] * fVar7);
  fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
  if (fVar4 == 0.0) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar4 = 1.0 / fVar4;
    fVar6 = fVar6 * fVar4;
    fVar5 = fVar5 * fVar4;
    fVar3 = fVar3 * fVar4;
  }
  fVar2 = (float)NEON_fminnm((fVar5 * param_1[1] + *param_1 * fVar6 + param_1[2] * fVar3) * fVar2,
                             0x3f800000);
  fVar2 = acosf(fVar2);
  param_1[0x22] = fVar2;
  return;
}


