/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564020; name: FUN_01564020
 */


undefined8 FUN_01564020(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 200) != 0) {
    return 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x170) == '\0') {
    return 0;
  }
  FUN_01564070();
  return 1;
}


