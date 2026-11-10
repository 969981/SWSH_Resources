/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bca10; name: FUN_014bca10
 */


bool FUN_014bca10(long param_1)

{
  if (*(long *)(param_1 + 0x78) == 0) {
    return false;
  }
  if (*(char *)(*(long *)(param_1 + 0x78) + 0x170) == '\0') {
    return false;
  }
  if (*(long *)(param_1 + 0x188) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x188) + 0x170) != '\0';
}


