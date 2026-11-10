/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018c660; name: FUN_0018c660
 */


void FUN_0018c660(float param_1,float param_2,float param_3,float param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
                 float *param_11,uint param_12)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((param_12 & 1) != 0) {
    *param_5 = 0.0;
    *param_6 = 0.0;
    *param_7 = 0.0;
    *param_8 = 0.0;
    return;
  }
  uVar1 = *(ushort *)(param_9 + 0x13);
  if (((uVar1 >> 2 & 1) != 0) || (fVar6 = 0.0, (uVar1 & 3) == 3)) {
    fVar6 = (*param_10 * *param_9 + param_10[1] * param_9[1] + param_10[2] * param_9[2] +
            param_10[4] * param_9[4] + param_10[5] * param_9[5] + param_10[6] * param_9[6]) -
            (*param_11 * param_9[8] + param_11[1] * param_9[9] + param_11[2] * param_9[10] +
            param_11[4] * param_9[0xc] + param_11[5] * param_9[0xd] + param_11[6] * param_9[0xe]);
  }
  fVar3 = 0.0;
  if (param_2 < param_1) {
    fVar3 = 1.0 / param_1;
  }
  fVar5 = param_9[3];
  if ((uVar1 & 1) != 0) {
    fVar4 = param_3 * param_3 * param_9[0x10] + param_9[0x11] * param_3;
    fVar7 = 1.0 / (fVar4 + 1.0);
    fVar2 = 1.0 / (fVar4 * param_1 + 1.0);
    fVar6 = fVar2;
    if ((uVar1 & 2) != 0) {
      fVar2 = fVar7;
      fVar6 = fVar3 * fVar7;
    }
    fVar3 = (param_9[0x11] * param_9[7] - fVar5 * param_9[0x10]) * param_3 * fVar6;
    *param_6 = fVar3;
    *param_5 = fVar3;
    *param_7 = -(fVar4 * fVar6);
    *param_8 = 1.0 - fVar2;
    return;
  }
  *param_7 = -fVar3;
  *param_8 = 1.0;
  if (((uVar1 >> 2 & 1) != 0) && (param_9[0x11] < -fVar6)) {
    fVar6 = fVar3 * param_9[0x10] * -fVar6;
    *param_5 = fVar6;
    *param_6 = fVar6;
    return;
  }
  *param_5 = fVar3 * (param_9[7] - fVar5 * param_4);
  *param_6 = fVar3 * (param_9[7] - param_9[0x12] * param_4);
  return;
}


