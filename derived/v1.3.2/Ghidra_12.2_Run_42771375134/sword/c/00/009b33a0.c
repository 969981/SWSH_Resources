/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b33a0; name: FUN_009b33a0
 */


undefined1 FUN_009b33a0(long param_1,uint param_2)

{
  if (param_2 < 8) {
    return *(undefined1 *)(param_1 + (ulong)param_2 + 0x358);
  }
  return 0;
}


