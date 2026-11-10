/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01363360; name: FUN_01363360
 */


bool FUN_01363360(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\0') {
    return false;
  }
  return *(long *)(param_1 + 0x80) != 0;
}


