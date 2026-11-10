/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a69390; name: FUN_00a69390
 */


undefined8 FUN_00a69390(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x1918) == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x1918) + 0x170) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x1a38) == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x1a38) + 0x170) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 7000) == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 7000) + 0x170) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x1c68) == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x1c68) + 0x170) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x1840) != '\0') {
    uVar1 = FUN_00893790(param_1 + 0x1828);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


