/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023a140; name: FUN_0023a140
 */


bool FUN_0023a140(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = fabsf(*param_5);
  fVar1 = DAT_01d4c050;
  fVar5 = DAT_01d4bc2c;
  fVar6 = DAT_01d4bc28;
  if (fVar2 <= DAT_01d4bc2c) {
    fVar2 = DAT_01d4bc2c;
  }
  fVar7 = 1.0;
  if (*param_5 < 0.0) {
    fVar7 = -1.0;
  }
  fVar3 = 1.0 / (fVar2 * fVar7);
  fVar7 = ((*param_2 + DAT_01d4bc28) - *param_4) * fVar3;
  fVar3 = fVar3 * ((*param_3 + DAT_01d4c050) - *param_4);
  fVar2 = fVar7;
  if (fVar3 <= fVar7) {
    fVar2 = fVar3;
  }
  if (fVar7 <= fVar3) {
    fVar7 = fVar3;
  }
  fVar3 = fabsf(param_5[1]);
  if (fVar3 <= fVar5) {
    fVar3 = fVar5;
  }
  fVar8 = 1.0;
  if (param_5[1] < 0.0) {
    fVar8 = -1.0;
  }
  fVar4 = 1.0 / (fVar3 * fVar8);
  fVar8 = ((param_2[1] + fVar6) - param_4[1]) * fVar4;
  fVar4 = fVar4 * ((param_3[1] + fVar1) - param_4[1]);
  fVar3 = fVar8;
  if (fVar4 <= fVar8) {
    fVar3 = fVar4;
  }
  if (fVar8 <= fVar4) {
    fVar8 = fVar4;
  }
  fVar4 = fabsf(param_5[2]);
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  fVar5 = 1.0;
  if (param_5[2] < 0.0) {
    fVar5 = -1.0;
  }
  fVar4 = 1.0 / (fVar4 * fVar5);
  fVar6 = ((param_2[2] + fVar6) - param_4[2]) * fVar4;
  fVar4 = fVar4 * ((param_3[2] + fVar1) - param_4[2]);
  fVar5 = fVar6;
  if (fVar4 <= fVar6) {
    fVar5 = fVar4;
  }
  if (fVar6 <= fVar4) {
    fVar6 = fVar4;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  if (fVar2 <= fVar5) {
    fVar2 = fVar5;
  }
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  if (fVar6 <= fVar7) {
    fVar7 = fVar6;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_6 = fVar2;
  if (param_1 <= fVar7) {
    fVar7 = param_1;
  }
  *param_7 = fVar7;
  return *param_6 < fVar7;
}


