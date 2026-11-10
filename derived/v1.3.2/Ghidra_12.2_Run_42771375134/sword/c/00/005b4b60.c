/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b4b60; name: FUN_005b4b60
 */


float FUN_005b4b60(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_2 & 1) == 0) {
    return *(float *)(param_1 + 0x27c);
  }
  if (*(char *)(param_1 + 0x12d) == '\0') {
    fVar7 = 0.0;
  }
  else {
    fVar7 = 0.0;
    fVar8 = 0.0;
    if (0.0 < *(float *)(param_1 + 0x3e4)) {
      fVar8 = *(float *)(param_1 + 0x3e4) / *(float *)(param_1 + 0x1c0);
    }
    fVar6 = *(float *)(param_1 + 0x3ec);
    if (0.0 <= fVar8) {
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      if ((0.0 < fVar8) && (*(int *)(param_1 + 1000) != 1)) {
        fVar6 = powf(10.0,-(fVar6 + fVar6 + -1.0));
        fVar8 = powf(fVar8,fVar6);
        lVar5 = 0;
        do {
          if (*(int *)(param_1 + 0x2f0) <= lVar5) goto LAB_005b4bbc;
          lVar1 = lVar5 + 1;
          fVar6 = *(float *)(*(long *)(param_1 + 0x398) + lVar5 * 4 + 4);
          lVar5 = lVar1;
        } while (fVar6 <= 1.0 / fVar8);
        fVar9 = *(float *)(*(long *)(param_1 + 0x398) + lVar1 * 4 + -4);
        fVar8 = 1.0 - ((1.0 / fVar8 - fVar9) / (fVar6 - fVar9) + (float)((int)lVar1 + -1)) /
                      (float)*(int *)(param_1 + 0x2f0);
        if ((0.0 <= fVar8) && (fVar7 = fVar8, 1.0 < fVar8)) {
          fVar7 = 1.0;
        }
        goto LAB_005b4bbc;
      }
    }
    fVar7 = fVar6;
  }
LAB_005b4bbc:
  fVar7 = (1.0 - fVar7) * (float)*(int *)(param_1 + 0x2f0) * DAT_01d4c2dc;
  iVar4 = (int)fVar7;
  iVar3 = *(int *)(param_1 + 0x2f0) + -1;
  if (iVar4 + 1 <= iVar3) {
    iVar3 = iVar4 + 1;
  }
  iVar2 = 0;
  if (-2 < iVar4) {
    iVar2 = iVar3;
  }
  lVar5 = *(long *)(param_1 + (long)*(int *)(param_1 + 0x2a8) * 8 + 0x358);
  fVar8 = *(float *)(lVar5 + (long)iVar4 * 4);
  return (fVar8 + (*(float *)(lVar5 + (long)iVar2 * 4) - fVar8) * (fVar7 - (float)iVar4)) *
         DAT_01d4c2a4;
}


