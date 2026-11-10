/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013302b0; name: FUN_013302b0
 */


undefined4 FUN_013302b0(long param_1,uint param_2)

{
  if (param_2 < 6) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x628);
  }
  return 0;
}


