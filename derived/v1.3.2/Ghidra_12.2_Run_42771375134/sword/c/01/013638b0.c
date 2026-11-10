/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013638b0; name: FUN_013638b0
 */


bool FUN_013638b0(long param_1)

{
  if ((*(char *)(param_1 + 0xe8) == '\0') || (*(int *)(param_1 + 0xec) != 0x14)) {
    return 0x3b < *(int *)(param_1 + 0x154);
  }
  return true;
}


