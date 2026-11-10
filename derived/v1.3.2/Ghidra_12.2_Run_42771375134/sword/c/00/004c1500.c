/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c1500; name: FUN_004c1500
 */


void FUN_004c1500(undefined8 param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  FUN_004c1610();
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    if (uVar1 - 1 < 3) {
      fVar5 = 0.0;
      lVar3 = 0;
    }
    else {
      fVar5 = 0.0;
      lVar3 = 0;
      pfVar4 = (float *)(param_3 + 8);
      do {
        fVar5 = pfVar4[1] + pfVar4[-2] + fVar5 + pfVar4[-1] + *pfVar4;
        lVar3 = lVar3 + 4;
        pfVar4 = pfVar4 + 4;
      } while (uVar1 - (uVar1 & 3) != lVar3);
    }
    if ((param_2 & 3) != 0) {
      lVar2 = -(uVar1 & 3);
      pfVar4 = (float *)(param_3 + lVar3 * 4);
      do {
        fVar5 = *pfVar4 + fVar5;
        lVar2 = lVar2 + 1;
        pfVar4 = pfVar4 + 1;
      } while (lVar2 != 0);
    }
    fVar6 = fVar5 + 1.0;
    if (fVar5 != 0.0) {
      fVar6 = fVar5;
    }
    fVar6 = 1.0 / fVar6;
    lVar3 = 0;
    if (param_2 != 1) {
      do {
        pfVar4 = (float *)(param_3 + lVar3 * 4);
        lVar3 = lVar3 + 2;
        *pfVar4 = SQRT(*pfVar4 * fVar6);
        pfVar4[1] = SQRT(pfVar4[1] * fVar6);
      } while (uVar1 - (uVar1 & 1) != lVar3);
    }
    if ((param_2 & 1) != 0) {
      *(float *)(param_3 + lVar3 * 4) = SQRT(*(float *)(param_3 + lVar3 * 4) * fVar6);
    }
  }
  return;
}


