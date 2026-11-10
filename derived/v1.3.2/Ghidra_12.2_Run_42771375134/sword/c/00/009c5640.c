/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c5640; name: FUN_009c5640
 */


void FUN_009c5640(long param_1)

{
  if (*(char *)(param_1 + 0x31) != '\0') {
    *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + -1;
  }
  return;
}


