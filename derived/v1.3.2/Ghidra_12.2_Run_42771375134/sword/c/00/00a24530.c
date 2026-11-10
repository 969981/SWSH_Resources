/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a24530; name: FUN_00a24530
 */


void FUN_00a24530(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 0x18 + 0x740) == 0) {
    return;
  }
  FUN_00a11290();
  return;
}


