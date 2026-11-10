/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6b6e0; name: FUN_00c6b6e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6b6e0(long *param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long local_40;
  long local_38;
  long local_28;
  
  iVar1 = *(int *)((long)param_1 + 0x94);
  if (iVar1 == 6) {
    if ((int)param_1[0x12] < 1) {
      *(undefined4 *)((long)param_1 + 0x94) = 0;
      plVar5 = (long *)param_1[0x2d];
    }
    else {
      *(int *)(param_1 + 0x12) = (int)param_1[0x12] + -1;
      plVar5 = (long *)param_1[0x2d];
    }
    goto joined_r0x00c6b8f8;
  }
  if (iVar1 == 5) {
    if ((long *)param_1[0x29] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x29] + 0x10))();
      plVar5 = (long *)param_1[0x2d];
      goto joined_r0x00c6b8f8;
    }
  }
  else if (iVar1 == 2) {
    if (param_1[0xe] == 0) {
      local_38 = param_1[0x1c];
      lVar6 = 0;
    }
    else {
      FUN_00c62ba0(&local_28);
      local_38 = param_1[0x1c];
      lVar6 = local_28;
    }
    local_28 = lVar6;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    bVar3 = FUN_00cae840(lVar6,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if ((param_1[0x1d] != 0) && (*(int *)(param_1[0x1d] + 0x54) != 0)) {
      if (param_1[0xe] == 0) {
        local_40 = param_1[0x1d];
        lVar6 = 0;
      }
      else {
        FUN_00c62ba0(&local_28);
        local_40 = param_1[0x1d];
        lVar6 = local_28;
      }
      local_28 = lVar6;
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
      }
      bVar4 = FUN_00cae840(lVar6,&local_40);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      bVar3 = bVar3 & bVar4;
    }
    if ((long *)param_1[0x2d] != (long *)0x0) {
      bVar4 = (**(code **)(*(long *)param_1[0x2d] + 0x50))();
      bVar3 = bVar3 & bVar4;
    }
    if ((long *)param_1[0x2e] != (long *)0x0) {
      bVar4 = (**(code **)(*(long *)param_1[0x2e] + 0x50))();
      bVar3 = bVar3 & bVar4;
    }
    if ((long *)param_1[0x2f] != (long *)0x0) {
      bVar4 = (**(code **)(*(long *)param_1[0x2f] + 0x50))();
      bVar3 = bVar3 & bVar4;
    }
    if ((long *)param_1[0x30] != (long *)0x0) {
      bVar4 = (**(code **)(*(long *)param_1[0x30] + 0x50))();
      bVar3 = bVar3 & bVar4;
    }
    if ((long *)param_1[0x31] != (long *)0x0) {
      bVar4 = (**(code **)(*(long *)param_1[0x31] + 0x50))();
      bVar3 = bVar3 & bVar4;
    }
    if ((long *)param_1[0x32] != (long *)0x0) {
      bVar4 = (**(code **)(*(long *)param_1[0x32] + 0x50))();
      bVar3 = bVar3 & bVar4;
    }
    if ((param_1[0x1e] != 0) && (*(int *)(param_1[0x1e] + 0x54) != 0)) {
      if (param_1[0x1e] == 0) {
        local_28 = 0;
        bVar2 = _DAT_000000f8 == 0;
      }
      else {
        FUN_00c72c50(&local_28);
        bVar2 = *(long *)(local_28 + 0xf8) == 0;
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
      }
      bVar3 = bVar3 & bVar2;
    }
    if ((param_1[0x1f] == 0) || (*(int *)(param_1[0x1f] + 0x54) == 0)) {
      bVar3 = bVar3 & 1;
    }
    else if (param_1[0x1f] == 0) {
      local_28 = 0;
      bVar3 = bVar3 & _DAT_000000f8 == 0;
    }
    else {
      FUN_00c72c50(&local_28);
      lVar6 = *(long *)(local_28 + 0xf8);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      bVar3 = bVar3 & lVar6 == 0;
    }
    if (bVar3 != 0) {
      FUN_00c6bae0(param_1);
      *(undefined4 *)((long)param_1 + 0x94) = 3;
      if (*(char *)((long)param_1 + 0x7d) != '\0') {
        (**(code **)(*param_1 + 0x60))(param_1);
        plVar5 = (long *)param_1[0x2d];
        goto joined_r0x00c6b8f8;
      }
      if (*(char *)((long)param_1 + 0x7c) != '\0') {
        (**(code **)(*param_1 + 0x80))(param_1,param_1[0xd]);
        plVar5 = (long *)param_1[0x2d];
        goto joined_r0x00c6b8f8;
      }
    }
  }
  plVar5 = (long *)param_1[0x2d];
joined_r0x00c6b8f8:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x38))();
  }
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 0x38))();
  }
  if ((long *)param_1[0x30] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x30] + 0x38))();
  }
  if ((long *)param_1[0x31] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x31] + 0x38))();
  }
  if ((long *)param_1[0x32] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x32] + 0x38))();
  }
  return;
}


