/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b1610; name: FUN_004b1610
 */


/* WARNING: Removing unreachable block (ram,0x004b162c) */

void FUN_004b1610(long param_1,uint param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  
  fVar3 = DAT_01d4be08;
  if (param_2 != 0) {
    if (param_2 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar5 = lVar4 * 4;
        lVar4 = lVar4 + 2;
        pfVar1 = (float *)(param_1 + lVar5);
        pfVar2 = (float *)(param_3 + lVar5);
        *pfVar2 = *pfVar1 * fVar3;
        pfVar2[1] = pfVar1[1] * fVar3;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar4);
      if ((param_2 & 1) == 0) {
        return;
      }
    }
    *(float *)(param_3 + lVar4 * 4) = *(float *)(param_1 + lVar4 * 4) * DAT_01d4be08;
  }
  return;
}


