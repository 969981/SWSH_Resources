/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bbc80; name: FUN_003bbc80
 */


ulong FUN_003bbc80(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if ((uint)param_1[6] != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(param_1[5] + uVar2 * 8) == param_2) goto LAB_003bbcb0;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 < (uint)param_1[6]);
  }
  uVar2 = 0x80000000;
LAB_003bbcb0:
  return *param_1 | uVar2;
}


