/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df8e40; name: FUN_00df8e40
 */


undefined8 FUN_00df8e40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x290) != '\0')) {
    if (*(long *)(lVar1 + 0x68) == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(lVar1 + 0x68) + 0x170) == '\0') {
      return 0;
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x68);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0x170) == '\0') {
        return 0;
      }
    }
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x290) != '\0')) {
    if (*(long *)(lVar1 + 0x68) == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(lVar1 + 0x68) + 0x170) == '\0') {
      return 0;
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x68);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0x170) == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


