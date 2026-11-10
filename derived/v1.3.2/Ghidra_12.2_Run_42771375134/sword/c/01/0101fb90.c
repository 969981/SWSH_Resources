/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101fb90; name: FUN_0101fb90
 */


ulong FUN_0101fb90(float param_1,float param_2,long param_3,float *param_4,ulong param_5,
                  ulong param_6,uint param_7,uint param_8,uint param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(int *)(param_3 + 0x38) == 2) || ((*(int *)(param_3 + 0x38) == 1 && ((param_8 & 1) == 0))))
  {
    return 0;
  }
  fVar6 = *param_4 * *param_4 + param_4[1] * param_4[1];
  fVar5 = SQRT(fVar6);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar6);
  }
  if (fVar5 <= param_2) {
    uVar3 = 0;
  }
  else {
    fVar6 = *param_4 / fVar5;
    fVar5 = param_4[1] / fVar5;
    fVar8 = fVar6 + fVar5 * 0.0;
    fVar7 = fVar5 * 0.0 - fVar6;
    uVar2 = (ulong)(0.0 < fVar8);
    uVar4 = (ulong)(param_1 < fVar8);
    fVar8 = fVar6 * 0.0 + fVar5;
    uVar3 = uVar4 << 0xe | 0x1000;
    if (fVar7 <= param_1) {
      uVar3 = uVar4 << 0xe;
    }
    uVar4 = uVar2 << 0xe | 0x1000;
    if (fVar7 <= 0.0) {
      uVar4 = uVar2 << 0xe;
    }
    fVar5 = fVar6 * 0.0 - fVar5;
    uVar2 = uVar3 | 0x2000;
    if (fVar8 <= param_1) {
      uVar2 = uVar3;
    }
    uVar1 = uVar4 | 0x2000;
    if (fVar8 <= 0.0) {
      uVar1 = uVar4;
    }
    uVar4 = uVar2 | 0x8000;
    if (fVar5 <= param_1) {
      uVar4 = uVar2;
    }
    uVar3 = uVar1 | 0x8000;
    if (fVar5 <= 0.0) {
      uVar3 = uVar1;
    }
    if (uVar4 != 0) {
      return uVar4;
    }
  }
  if ((param_6 == 0) && ((param_9 & 1) != 0)) {
    if ((param_7 & 1) == 0) {
      param_5 = param_5 >> 8;
    }
    else {
      param_5 = param_5 >> 4;
    }
    param_5 = param_5 & 0xf000;
  }
  else {
    param_5 = uVar3 & param_6;
  }
  return param_5;
}


