/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005104b0; name: FUN_005104b0
 */


int FUN_005104b0(uint param_1)

{
  if ((param_1 < 0x12) && ((0x28f1fU >> (ulong)(param_1 & 0x1f) & 1) != 0)) {
    return *(int *)(&DAT_01d6a110 + (long)(int)param_1 * 4);
  }
  return -(uint)(param_1 != 0x10 && 8 < param_1 - 6);
}


