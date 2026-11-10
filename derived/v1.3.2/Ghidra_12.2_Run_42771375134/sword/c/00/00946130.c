/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946130; name: FUN_00946130
 */


void FUN_00946130(long param_1,byte param_2,byte param_3)

{
  if ((param_2 < *(byte *)(param_1 + 0xb48)) && (param_3 < *(byte *)(param_1 + 0xb48))) {
    FUN_00946a70(param_1 + 8 + (ulong)param_2 * 0x60,param_1 + 8 + (ulong)param_3 * 0x60);
    return;
  }
  return;
}


