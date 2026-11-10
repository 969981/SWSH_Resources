/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01031c90; name: FUN_01031c90
 */


bool FUN_01031c90(long param_1)

{
  if (*(int *)(param_1 + 0x40) < 4) {
    return *(char *)(param_1 + 0x1a) == '\0';
  }
  return false;
}


