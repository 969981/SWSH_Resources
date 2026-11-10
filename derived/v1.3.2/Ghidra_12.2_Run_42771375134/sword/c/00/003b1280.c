/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1280; name: FUN_003b1280
 */


void FUN_003b1280(long param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x178))
            (*(long **)(param_1 + 0x20),&local_14,(long)register0x00000008 + -0x10,
             *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x68));
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}


