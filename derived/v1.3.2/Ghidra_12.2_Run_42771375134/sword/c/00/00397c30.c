/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397c30; name: FUN_00397c30
 */


void FUN_00397c30(long param_1,float *param_2)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 != 0) {
    uVar2 = 0;
    pfVar3 = (float *)(*(long *)(param_1 + 0x10) + 0x10);
    do {
      uVar2 = uVar2 + 1;
      if (uVar2 < uVar1) {
        Hint_Prefetch(pfVar3 + 3,0,0,0);
      }
      pfVar3[-4] = pfVar3[-4] - *param_2;
      pfVar3[-3] = pfVar3[-3] - param_2[1];
      pfVar3[-2] = pfVar3[-2] - param_2[2];
      pfVar3[-1] = pfVar3[-1] - *param_2;
      *pfVar3 = *pfVar3 - param_2[1];
      pfVar3[1] = pfVar3[1] - param_2[2];
      pfVar3 = pfVar3 + 7;
    } while (uVar1 != uVar2);
  }
  return;
}


