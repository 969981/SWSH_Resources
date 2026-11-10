/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73de0; name: FUN_00e73de0
 */


void FUN_00e73de0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_38;
  long local_30;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_28);
  local_30 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00e7cb20(&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  if ((uVar1 & 1) == 0) {
    local_30 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    uVar1 = FUN_00e7c3a0(&local_30,0);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if ((uVar1 & 1) != 0) goto LAB_00e73f38;
  }
  else {
    local_30 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    uVar1 = FUN_00e7c3a0(&local_30,0);
    uVar2 = 0;
    if ((uVar1 & 1) == 0) {
      local_38 = local_28;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
      }
      uVar2 = FUN_00e7be90(&local_38,PTR_DAT_0271fdd8);
      uVar2 = uVar2 & 0xffffffff;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
    }
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if ((uVar2 & 1) == 0) goto LAB_00e73f38;
  }
  *(undefined4 *)(param_1 + 0x60) = 5;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  if (*(char *)(param_1 + 0x9d) != '\0') {
    *(undefined1 *)(param_1 + 0x69) = 1;
  }
LAB_00e73f38:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


