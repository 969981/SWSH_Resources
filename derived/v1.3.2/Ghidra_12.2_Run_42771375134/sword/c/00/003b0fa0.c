/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b0fa0; name: FUN_003b0fa0
 */


void FUN_003b0fa0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_2;
  uStack_14 = param_3;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x158))
            (*(long **)(param_1 + 0x20),&local_18,(long)register0x00000008 + -0x10,
             *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x60));
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}


