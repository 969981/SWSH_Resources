/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524e90; name: FUN_01524e90
 */


int FUN_01524e90(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x130);
  if (*(uint *)(param_1 + 0x130) <= param_2) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x130) = uVar1 - param_2;
  return uVar1 - param_2;
}


