/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f6490; name: FUN_014f6490
 */


bool FUN_014f6490(long param_1)

{
  if (*(long *)(param_1 + 8) == 0) {
    return false;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x170) == '\0') {
    return false;
  }
  if (*(long *)(param_1 + 0x118) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x118) + 0x170) != '\0';
}


