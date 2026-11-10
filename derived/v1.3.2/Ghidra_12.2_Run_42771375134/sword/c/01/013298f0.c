/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013298f0; name: FUN_013298f0
 */


bool FUN_013298f0(long param_1)

{
  if (*(char *)(param_1 + 0x59) == '\0') {
    return false;
  }
  return *(byte *)(param_1 + 0x5b) - 1 < 2;
}


