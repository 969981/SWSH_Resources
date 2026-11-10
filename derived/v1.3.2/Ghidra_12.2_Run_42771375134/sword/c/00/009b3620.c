/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b3620; name: FUN_009b3620
 */


bool FUN_009b3620(long param_1,uint param_2)

{
  if (param_2 < 8) {
    return *(char *)(param_1 + (ulong)param_2 + 0x360) != '\0';
  }
  return false;
}


