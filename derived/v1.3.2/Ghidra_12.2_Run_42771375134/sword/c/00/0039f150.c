/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039f150; name: FUN_0039f150
 */


void FUN_0039f150(uint *param_1,float *param_2)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    pfVar3 = (float *)(*(long *)(param_1 + 2) + 0xc);
    do {
      pfVar3[-3] = pfVar3[-3] - *param_2;
      pfVar3[-2] = pfVar3[-2] - param_2[1];
      pfVar3[-1] = pfVar3[-1] - param_2[2];
      *pfVar3 = *pfVar3 - *param_2;
      pfVar3[1] = pfVar3[1] - param_2[1];
      uVar2 = uVar2 + 1;
      pfVar3[2] = pfVar3[2] - param_2[2];
      pfVar3 = pfVar3 + 6;
    } while (uVar2 < uVar1);
  }
  return;
}


