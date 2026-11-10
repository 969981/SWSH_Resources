/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a7f0; name: FUN_0130a7f0
 */


void FUN_0130a7f0(long param_1,int param_2)

{
  ulong uVar1;
  long local_28;
  
  if (*(int *)(param_1 + 0x3bc) != param_2) {
    local_28 = param_1;
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    uVar1 = FUN_012f33b0(&local_28,param_2);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if ((uVar1 & 1) == 0) {
      *(int *)(param_1 + 0x3bc) = param_2;
      FUN_0130a870(param_1);
    }
  }
  return;
}


