/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ce5a0; name: FUN_007ce5a0
 */


undefined8 FUN_007ce5a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == *(long *)(param_1 + 0x58)) {
    return 1;
  }
  do {
    if (((*(char *)(lVar1 + 9) == '\0' || *(char *)(lVar1 + 8) == '\0') ||
        *(char *)(param_1 + 0x80) == '\0') || *(char *)(lVar1 + 10) == '\0') {
      return 0;
    }
    lVar1 = lVar1 + 0x10;
  } while (*(long *)(param_1 + 0x58) != lVar1);
  return 1;
}


