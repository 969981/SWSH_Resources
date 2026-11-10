/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e88a20; name: FUN_00e88a20
 */


undefined8 FUN_00e88a20(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_30;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_28);
  plVar5 = *(long **)(param_1 + 0x70);
  uVar3 = FUN_015772a0(plVar5 + 10);
  if ((plVar5 == (long *)0x0) || ((uVar3 & 1) == 0)) {
    local_30 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    uVar3 = FUN_00e7c8b0(&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if ((uVar3 & 1) == 0) goto LAB_00e88b24;
LAB_00e88ae0:
    *(undefined4 *)(param_1 + 0x140) = 0;
    lVar2 = local_30;
  }
  else {
    local_30 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    uVar3 = FUN_00e7c3a0(&local_30,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5);
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
        local_30 = 0;
      }
      if ((uVar3 & 1) != 0) goto LAB_00e88ae0;
    }
    else if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
LAB_00e88b24:
    iVar1 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = iVar1 + 1;
    if (iVar1 <= *(int *)(param_1 + 0x144)) {
      uVar4 = 0;
      goto joined_r0x00e88bb0;
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    local_30 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00e7b6b0(&local_30);
    lVar2 = 0;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
      lVar2 = local_30;
    }
  }
  uVar4 = 1;
  local_30 = lVar2;
joined_r0x00e88bb0:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar4;
}


