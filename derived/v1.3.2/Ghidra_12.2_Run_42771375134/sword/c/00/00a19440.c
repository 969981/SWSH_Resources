/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a19440; name: FUN_00a19440
 */


void FUN_00a19440(long param_1,int param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    FUN_00a1ab90(*(long *)(param_1 + 0x758) + (ulong)(param_2 == 1) * 0x200);
    return;
  }
  FUN_00a1ab60();
  return;
}


