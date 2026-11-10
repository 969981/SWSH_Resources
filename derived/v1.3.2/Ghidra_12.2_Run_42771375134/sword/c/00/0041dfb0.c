/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041dfb0; name: FUN_0041dfb0
 */


undefined8 FUN_0041dfb0(long param_1,short param_2)

{
  short *psVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar2 = (ulong)*(uint *)(param_1 + 0x20) << 1;
  psVar1 = *(short **)(param_1 + 0x18);
  do {
    if (*psVar1 == param_2) {
      return 1;
    }
    lVar2 = lVar2 + -2;
    psVar1 = psVar1 + 1;
  } while (lVar2 != 0);
  return 0;
}


