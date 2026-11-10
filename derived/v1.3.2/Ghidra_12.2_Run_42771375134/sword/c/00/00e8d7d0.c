/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8d7d0; name: FUN_00e8d7d0
 */


undefined8 FUN_00e8d7d0(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  (**(code **)(*param_2 + 0x10))(&local_28,param_2);
  local_30 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00e7c8b0(&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if ((uVar2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x110);
    *(uint *)(param_1 + 0x110) = uVar1 + 1;
    if (uVar1 < 0x3d) {
      uVar3 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x110) = 0;
      local_30 = local_28;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
      }
      FUN_00e7b6b0(&local_30);
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
        local_30 = 0;
      }
      uVar3 = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = 0;
    uVar3 = 1;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar3;
}


