/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e2240; name: FUN_001e2240
 */


void FUN_001e2240(long param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x54) & 0x7fffffff) < param_2) {
    FUN_001e1ee0(param_1,param_2);
  }
  *(uint *)(param_1 + 0x50) = param_2;
  return;
}


