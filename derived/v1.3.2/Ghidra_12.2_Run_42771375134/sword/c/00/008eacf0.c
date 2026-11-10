/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eacf0; name: FUN_008eacf0
 */


void FUN_008eacf0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 local_18 [4];
  
  FUN_016228b0(*(undefined8 *)(param_1 + 0x88),local_18,param_2,param_3);
  *(undefined2 *)(param_1 + 0x6a) = local_18[0];
  return;
}


