/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e08350; name: FUN_00e08350
 */


undefined8 FUN_00e08350(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x290) != '\0')) {
    if (*(long *)(lVar1 + 0x68) == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(lVar1 + 0x68) + 0x170) == '\0') {
      return 0;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x68);
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


