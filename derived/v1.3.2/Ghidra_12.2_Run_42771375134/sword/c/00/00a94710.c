/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a94710; name: FUN_00a94710
 */


bool FUN_00a94710(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x104) != 2) {
    return true;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x130) + 8);
  if (lVar1 == 0) {
    return false;
  }
  if (*(char *)(lVar1 + 0x170) == '\0') {
    return false;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x150) + 8);
  if (lVar1 == 0) {
    return false;
  }
  return *(char *)(lVar1 + 0x170) != '\0';
}


