/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b7ff0; name: FUN_011b7ff0
 */


long FUN_011b7ff0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(uint *)(lVar1 + 8) == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 4) == 0) {
    return 0;
  }
  return lVar1 + (ulong)*(uint *)(lVar1 + 8);
}


