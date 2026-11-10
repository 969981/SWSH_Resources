/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008bf040; name: FUN_008bf040
 */


void FUN_008bf040(long param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x5f0) == 0) {
    return;
  }
  uVar1 = *(int *)(param_1 + 0x5f0) - 1;
  *(uint *)(param_1 + 0x5f0) = uVar1;
  FUN_008d08b0(*(long *)(param_1 + 0x5d0) + (ulong)uVar1 * 0x30);
  return;
}


