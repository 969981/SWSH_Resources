/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b17e10; name: FUN_00b17e10
 */


bool FUN_00b17e10(long param_1)

{
  if (*(long *)(param_1 + 0x88) == 0) {
    return true;
  }
  return *(char *)(*(long *)(param_1 + 0x88) + 0x170) != '\0';
}


