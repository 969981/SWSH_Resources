/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524e30; name: FUN_01524e30
 */


undefined4 FUN_01524e30(long param_1,uint param_2)

{
  if (9999999U - *(int *)(param_1 + 0x130) < param_2) {
    *(undefined4 *)(param_1 + 0x130) = 9999999;
    return 9999999;
  }
  *(uint *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + param_2;
  FUN_01528980(0x16);
  return *(undefined4 *)(param_1 + 0x130);
}


