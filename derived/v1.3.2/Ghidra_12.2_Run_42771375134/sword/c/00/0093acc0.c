/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093acc0; name: FUN_0093acc0
 */


undefined8 FUN_0093acc0(long param_1,char param_2)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 8) == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    if (*(char *)(param_1 + 9 + lVar1) == param_2) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < (uint)*(byte *)(param_1 + 8));
  return 0;
}


