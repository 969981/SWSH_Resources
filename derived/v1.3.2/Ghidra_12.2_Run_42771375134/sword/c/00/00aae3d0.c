/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aae3d0; name: FUN_00aae3d0
 */


void FUN_00aae3d0(long *param_1)

{
  ulong uVar1;
  long local_28;
  long local_18;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if ((uVar1 & 1) != 0) {
    local_18 = *(long *)(param_1[0x78] + 0x528);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
    }
    local_28 = param_1[0x97];
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00ca1dc0(&local_18,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
  }
  return;
}


