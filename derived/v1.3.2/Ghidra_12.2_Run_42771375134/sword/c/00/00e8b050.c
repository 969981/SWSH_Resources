/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8b050; name: FUN_00e8b050
 */


undefined8 FUN_00e8b050(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_18;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_18);
  local_50 = local_18;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00e7cb20(&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if ((uVar1 & 1) == 0) {
    local_50 = local_18;
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
    }
    uVar1 = FUN_00e7c3a0(&local_50,0);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if ((uVar1 & 1) != 0) goto LAB_00e8b1f0;
  }
  else {
    local_28 = local_18;
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
    }
    uVar1 = FUN_00e7c3a0(&local_28,0);
    uVar2 = 0;
    if ((uVar1 & 1) == 0) {
      local_30 = local_18;
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
      }
      local_50 = 0x6f3c13bce33a451a;
      local_48 = "fi01_wait01";
      local_40 = 0xb;
      local_38 = 0;
      uVar2 = FUN_00e7be90(&local_30,&local_50);
      uVar2 = uVar2 & 0xffffffff;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
        local_30 = 0;
      }
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if ((uVar2 & 1) == 0) {
LAB_00e8b1f0:
      uVar3 = 0;
      goto joined_r0x00e8b184;
    }
  }
  uVar3 = 1;
joined_r0x00e8b184:
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return uVar3;
}


