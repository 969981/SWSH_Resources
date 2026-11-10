/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b11a0; name: FUN_004b11a0
 */


undefined8 FUN_004b11a0(long param_1,uint param_2,float *param_3,float *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = DAT_01d4bf34;
  fVar4 = DAT_01d4bb38;
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      fVar6 = *(float *)(param_1 + uVar2 * 4) * fVar5;
      param_3[uVar2] = fVar6;
      if (fVar4 <= fVar6) {
        return 2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  fVar4 = *param_3;
  if (DAT_01d4c05c <= fVar4) {
    return 2;
  }
  if (1 < param_2) {
    lVar3 = 0;
    fVar5 = fVar4;
    do {
      fVar6 = param_3[lVar3 + 1];
      if (fVar6 < fVar5) {
        return 2;
      }
      fVar5 = fVar6 - fVar5;
      if (fVar5 == 0.0) {
        return 2;
      }
      if (DAT_01d4bb38 <= fVar5) {
        return 2;
      }
      fVar4 = (float)NEON_fminnm(fVar5,fVar4);
      lVar1 = lVar3 + 1;
      uVar2 = lVar3 + 2;
      lVar3 = lVar1;
      fVar5 = fVar6;
    } while (uVar2 < param_2);
    if (1 < (int)lVar1 + 1U) {
      fVar4 = (float)NEON_fminnm(DAT_01d4bdf4 - (param_3[lVar1] + param_3[lVar1]),fVar4);
    }
  }
  *param_4 = fVar4;
  return 1;
}


