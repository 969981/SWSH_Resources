/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a9880; name: FUN_006a9880
 */


long FUN_006a9880(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x110) != 0) {
    return *(long *)(param_1 + 0x110);
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x170) == '\0') {
    return 0;
  }
  return (long)*(uint **)(lVar1 + 400) + (ulong)**(uint **)(lVar1 + 400);
}


