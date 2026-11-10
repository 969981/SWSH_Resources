/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c90d0; name: FUN_009c90d0
 */


bool FUN_009c90d0(long param_1,byte param_2)

{
  if (5 < param_2) {
    return false;
  }
  if (*(int *)(param_1 + (ulong)param_2 * 0x14 + 100) == 0) {
    return false;
  }
  return *(char *)(param_1 + (ulong)param_2 * 0x14 + 0x72) != '\0';
}


