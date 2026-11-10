/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cf750; name: FUN_003cf750
 */


void FUN_003cf750(long param_1,long param_2)

{
  uint uVar1;
  long local_18;
  
  *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 0x800000;
  uVar1 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_2 + 0x50) = uVar1;
  if (uVar1 < (*(uint *)(param_1 + 0x3c) & 0x7fffffff)) {
    *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 8) = param_2;
    *(uint *)(param_1 + 0x38) = uVar1 + 1;
    return;
  }
  local_18 = param_2;
  FUN_003d8ca0(param_1 + 0x30,&local_18);
  return;
}


