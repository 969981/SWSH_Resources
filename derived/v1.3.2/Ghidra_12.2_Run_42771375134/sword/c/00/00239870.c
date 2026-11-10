/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00239870; name: FUN_00239870
 */


bool FUN_00239870(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float __x;
  float __x_00;
  float fVar10;
  float fVar11;
  float local_60 [4];
  
  local_60[1] = param_2[1] - param_1[1];
  local_60[0] = *param_2 - *param_1;
  local_60[2] = param_2[2] - param_1[2];
  fVar3 = local_60[1] * param_3[2] - local_60[2] * param_3[1];
  __x_00 = local_60[2] * *param_3 - local_60[0] * param_3[2];
  __x = local_60[0] * param_3[1] - local_60[1] * *param_3;
  fVar10 = param_1[2] * __x + *param_1 * fVar3 + param_1[1] * __x_00;
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = (fVar4 * fVar3 + fVar5 * __x_00 + __x * fVar6) - fVar10;
  if (fVar7 * ((fVar3 * *param_5 + __x_00 * param_5[1] + __x * param_5[2]) - fVar10) <= 0.0) {
    fVar10 = *param_5 - fVar4;
    fVar8 = param_5[1] - fVar5;
    fVar9 = param_5[2] - fVar6;
    fVar11 = fVar3 * fVar10 + __x_00 * fVar8 + __x * fVar9;
    if (fVar11 != 0.0) {
      fVar7 = fVar7 / fVar11;
      *param_7 = fVar4 - fVar10 * fVar7;
      param_7[1] = fVar5 - fVar8 * fVar7;
      param_7[2] = fVar6 - fVar9 * fVar7;
      fVar3 = fabsf(fVar3);
      fVar4 = fabsf(__x_00);
      fVar5 = fabsf(__x);
      if ((fVar4 <= fVar3) || (fVar4 <= fVar5)) {
        if (fVar5 <= fVar3) {
          lVar2 = 1;
          lVar1 = 2;
        }
        else {
          lVar2 = 0;
          lVar1 = 1;
        }
      }
      else {
        lVar1 = 0;
        lVar2 = 2;
      }
      fVar3 = (local_60[lVar2] * (param_7[lVar1] - param_1[lVar1]) -
              local_60[lVar1] * (param_7[lVar2] - param_1[lVar2])) /
              (local_60[lVar2] * param_3[lVar1] - local_60[lVar1] * param_3[lVar2]);
      *param_6 = fVar3;
      if (0.0 <= fVar3) {
        fVar5 = param_7[1] - fVar3 * param_3[1];
        fVar4 = *param_7 - fVar3 * *param_3;
        fVar3 = param_7[2] - fVar3 * param_3[2];
        *param_7 = fVar4;
        param_7[1] = fVar5;
        param_7[2] = fVar3;
        return (*param_1 - fVar4) * (*param_2 - fVar4) + (param_1[1] - fVar5) * (param_2[1] - fVar5)
               + (param_1[2] - fVar3) * (param_2[2] - fVar3) < DAT_01d4c6ac;
      }
    }
  }
  return false;
}


