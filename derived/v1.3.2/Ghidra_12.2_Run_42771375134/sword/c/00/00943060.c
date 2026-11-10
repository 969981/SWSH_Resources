/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943060; name: FUN_00943060
 */


void FUN_00943060(long param_1,byte param_2)

{
  if (param_2 < 0x1e) {
    param_1 = param_1 + (ulong)param_2 * 2;
    *(short *)(param_1 + 0x88) = *(short *)(param_1 + 0x88) + 1;
  }
  return;
}


