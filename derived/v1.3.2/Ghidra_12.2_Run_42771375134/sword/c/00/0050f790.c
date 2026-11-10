/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050f790; name: FUN_0050f790
 */


void FUN_0050f790(float *param_1,uint param_2,long param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
                 float *param_11,float *param_12,float *param_13,float *param_14,float *param_15,
                 float *param_16)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float __x;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_1[0xb];
  fVar12 = 1.0;
  if (fVar1 <= 0.0) {
    fVar12 = -1.0;
  }
  fVar6 = fVar12 * param_1[10];
  fVar5 = -param_1[0xe];
  fVar7 = fVar6 + 1.0;
  if ((param_2 & 1) == 0) {
    fVar7 = fVar6;
  }
  fVar7 = fVar5 / fVar7;
  if ((param_2 & 1) == 0) {
    fVar5 = fVar5 / (fVar6 + -1.0);
  }
  else {
    fVar5 = param_1[0xe] / (1.0 - fVar6);
  }
  fVar9 = *param_1;
  fVar8 = param_1[5];
  fVar11 = param_1[8];
  fVar10 = param_1[9];
  fVar6 = 1.0 / fVar9;
  __x = 1.0 / fVar8;
  fVar2 = atanf(fVar6);
  fVar3 = atanf(__x);
  fVar4 = param_1[5];
  if (param_3 != 0) {
    *(bool *)param_3 = 0.0 < fVar1;
  }
  fVar9 = (fVar7 + fVar7) / fVar9;
  if (param_4 != (float *)0x0) {
    *param_4 = fVar9 * (fVar12 * fVar11 + 1.0) * -0.5;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = fVar9 * (1.0 - fVar12 * fVar11) * 0.5;
  }
  fVar8 = (fVar7 + fVar7) / fVar8;
  if (param_6 != (float *)0x0) {
    *param_6 = fVar8 * (fVar12 * fVar10 + 1.0) * -0.5;
  }
  if (param_7 != (float *)0x0) {
    *param_7 = fVar8 * (1.0 - fVar12 * fVar10) * 0.5;
  }
  if (param_8 != (float *)0x0) {
    *param_8 = fVar7;
  }
  if (param_9 != (float *)0x0) {
    *param_9 = fVar5;
  }
  if (param_10 != (float *)0x0) {
    *param_10 = fVar6;
  }
  if (param_11 != (float *)0x0) {
    *param_11 = __x;
  }
  if (param_12 != (float *)0x0) {
    *param_12 = fVar2 + fVar2;
  }
  if (param_13 != (float *)0x0) {
    *param_13 = fVar3 + fVar3;
  }
  if (param_14 != (float *)0x0) {
    *param_14 = fVar6 * fVar4;
  }
  if (param_15 != (float *)0x0) {
    *param_15 = fVar9;
  }
  if (param_16 != (float *)0x0) {
    *param_16 = fVar8;
  }
  return;
}


