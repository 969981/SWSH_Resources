/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d9bc0; name: FUN_001d9bc0
 */


long FUN_001d9bc0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    return 0;
  }
  lVar1 = 0;
  if (**(long **)(param_1 + 0x70) != 0) {
    lVar1 = **(long **)(param_1 + 0x70) + 0x60;
  }
  return lVar1;
}


