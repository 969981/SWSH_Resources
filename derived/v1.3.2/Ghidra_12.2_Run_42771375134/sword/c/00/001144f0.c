/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001144f0; name: FUN_001144f0
 */


void FUN_001144f0(long param_1,uint param_2,long param_3)

{
  *(long *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8) = param_3;
  *(uint *)(param_3 + 0x68) = param_2;
  return;
}


