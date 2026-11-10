/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e9740; name: FUN_007e9740
 */


bool FUN_007e9740(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x40) != 3) {
    return false;
  }
  if (*(int *)(param_1 + 0x3c) - 9U < 4) {
    return false;
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x7c) == 2) {
    if (lVar1 == 0) {
      return false;
    }
  }
  else {
    if (lVar1 == 0) {
      return true;
    }
    if ((*(byte *)(lVar1 + 0x30) >> 1 & 1) == 0) {
      return true;
    }
  }
  return *(char *)(lVar1 + 0x58) != '\0';
}


