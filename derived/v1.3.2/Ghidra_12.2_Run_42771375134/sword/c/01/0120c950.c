/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120c950; name: FUN_0120c950
 */


undefined8 FUN_0120c950(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x1b78) != 0) && (*(char *)(lVar1 + 0x1b80) == '\0')) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x2908) != 0) && (*(char *)(lVar1 + 0x2910) == '\0')) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x3698) != 0) && (*(char *)(lVar1 + 0x36a0) == '\0')) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x4428) != 0) && (*(char *)(lVar1 + 0x4430) == '\0')) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x51b8) != 0) && (*(char *)(lVar1 + 0x51c0) == '\0')) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x5f48) != 0) && (*(char *)(lVar1 + 0x5f50) == '\0')) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x6cd8) != 0) && (*(char *)(lVar1 + 0x6ce0) == '\0')) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x7a68) == 0) || (*(char *)(lVar1 + 0x7a70) != '\0')) {
    return 1;
  }
  return 0;
}


