/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042e400; name: FUN_0042e400
 */


void FUN_0042e400(long param_1,long param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  fVar4 = *(float *)(param_2 + 0x24);
  if (fVar4 <= 0.0) {
    return;
  }
  fVar2 = *(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x7c);
  fVar5 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x78);
  fVar6 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x80);
  fVar1 = *(float *)(param_1 + 0x3c) * fVar5 + fVar2 * *(float *)(param_1 + 0x40) +
          fVar6 * *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48) * fVar5 + fVar2 * *(float *)(param_1 + 0x4c) +
          fVar6 * *(float *)(param_1 + 0x50);
  fVar2 = *(float *)(param_1 + 0x54) * fVar5 + fVar2 * *(float *)(param_1 + 0x58) +
          fVar6 * *(float *)(param_1 + 0x5c);
  if (fVar2 == 0.0) {
    if (fVar1 == 0.0) {
      *param_3 = 0.0;
      if (fVar3 == 0.0) {
        *param_4 = 0.0;
        return;
      }
      *param_4 = *(float *)(&DAT_01cd4fa8 + (ulong)(0.0 < fVar3) * 4);
      return;
    }
    *param_3 = *(float *)(&DAT_01cd4fa8 + (ulong)(0.0 < fVar1) * 4);
    fVar4 = (float)NEON_fminnm(fVar3 / fVar4,0x3f800000);
  }
  else {
    fVar5 = fVar1 / fVar2;
    if (1.0 <= ABS(fVar5)) {
      if (0.0 <= fVar1) {
        fVar1 = DAT_01d4c05c;
      }
      else {
        fVar1 = DAT_01d4c0d0;
      }
      fVar5 = fVar1 - fVar5 / (DAT_01d4bed8 + fVar5 * fVar5);
    }
    else {
      fVar5 = fVar5 / (DAT_01d4bed8 * fVar5 * fVar5 + 1.0);
      if (fVar2 < 0.0) {
        if (0.0 <= fVar1) {
          fVar5 = fVar5 + DAT_01d4bb38;
        }
        else {
          fVar5 = fVar5 + DAT_01d4be68;
        }
      }
    }
    fVar4 = (float)NEON_fminnm(fVar3 / fVar4,0x3f800000);
    *param_3 = fVar5;
  }
  if (fVar4 <= -1.0) {
    fVar4 = -1.0;
  }
  fVar1 = ABS(fVar4);
  fVar1 = DAT_01d4bda8 +
          fVar1 * (DAT_01d4bc40 +
                  fVar1 * (DAT_01d4bf9c +
                          fVar1 * (DAT_01d4c780 +
                                  fVar1 * (DAT_01d4bf98 +
                                          fVar1 * (DAT_01d4bad0 + DAT_01d4c1e0 * fVar1)))));
  if (fVar4 < 0.0) {
    fVar1 = -fVar1;
  }
  *param_4 = fVar1;
  return;
}


