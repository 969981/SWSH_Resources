/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153a780; name: FUN_0153a780
 */


void FUN_0153a780(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if ((param_3 & 1) == 0) {
    *(uint *)(param_1 + 0xf68) = *(uint *)(param_1 + 0xf68) | uVar1;
    return;
  }
  *(uint *)(param_1 + 0xf68) = *(uint *)(param_1 + 0xf68) & (uVar1 ^ 0xffffffff);
  return;
}


