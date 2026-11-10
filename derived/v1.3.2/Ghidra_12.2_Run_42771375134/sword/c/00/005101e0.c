/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005101e0; name: FUN_005101e0
 */


void FUN_005101e0(float param_1,float param_2,float param_3,float *param_4,uint param_5)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = DAT_01d4c3f8;
  fVar3 = DAT_01d4c3f4;
  fVar5 = DAT_01d4c290;
  fVar7 = DAT_01d4be80;
  fVar4 = DAT_01d4be14;
  fVar6 = DAT_01d4bae4;
  bVar2 = (param_5 & 1) == 0;
  param_4[7] = 0.0;
  param_4[3] = 0.0;
  param_4[0xd] = 0.0;
  param_4[0xe] = 0.0;
  if (bVar2) {
    fVar5 = fVar7;
    fVar3 = fVar4;
  }
  if (bVar2) {
    fVar6 = fVar1;
  }
  fVar7 = fVar3 + (0.0 - fVar3) * param_1;
  *param_4 = fVar3 + (1.0 - fVar3) * param_1;
  param_4[1] = fVar7;
  fVar3 = fVar5 + (0.0 - fVar5) * param_2;
  fVar4 = fVar6 + (0.0 - fVar6) * param_3;
  param_4[0xb] = 0.0;
  param_4[0xc] = 0.0;
  param_4[4] = fVar3;
  param_4[5] = fVar5 + (1.0 - fVar5) * param_2;
  param_4[2] = fVar7;
  param_4[6] = fVar3;
  param_4[10] = fVar6 + (1.0 - fVar6) * param_3;
  param_4[8] = fVar4;
  param_4[9] = fVar4;
  param_4[0xf] = 1.0;
  return;
}


