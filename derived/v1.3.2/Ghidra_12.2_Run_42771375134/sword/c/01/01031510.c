/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01031510; name: FUN_01031510
 */


void FUN_01031510(long *param_1)

{
  long *plVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_30;
  long *local_28;
  
  lVar2 = param_1[0xc];
  if (*(int *)(lVar2 + 0x44) == 1) {
    *(undefined4 *)(lVar2 + 0x44) = 2;
    *(undefined1 *)(param_1[0xc] + 0x19) = 1;
    if ((*(long *)param_1[0xc] != 0) && (*(int *)(*(long *)param_1[0xc] + 0x54) != 0)) {
      if (*(long *)param_1[0xc] == 0) {
        local_28 = (long *)0x0;
      }
      else {
        FUN_01031a00(&local_28);
      }
      plVar1 = local_28;
      (**(code **)(*param_1 + 0x10))(&local_38,param_1);
      local_30 = local_38;
      local_38 = 0;
      FUN_0102e350(plVar1,&local_30);
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
        local_30 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_28 != (long *)0x0) {
        (**(code **)(local_28[9] + 0x18))();
        local_28 = (long *)0x0;
      }
    }
    (**(code **)(*param_1 + 0x58))(param_1);
    if (*(long *)(param_1[0xc] + 8) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1[0xc] + 8) + 0x54) == 0) {
      return;
    }
    FUN_0102ea70(&local_28,*(undefined8 *)(param_1[0xc] + 8));
    (**(code **)(*local_28 + 0x38))();
    lVar2 = local_38;
  }
  else {
    if (*(char *)(lVar2 + 0x18) == '\0') {
      return;
    }
    *(undefined1 *)(lVar2 + 0x18) = 0;
    if (*(long *)param_1[0xc] == 0) {
      return;
    }
    if (*(int *)(*(long *)param_1[0xc] + 0x54) == 0) {
      return;
    }
    if (*(long *)param_1[0xc] == 0) {
      local_28 = (long *)0x0;
    }
    else {
      FUN_01031a00(&local_28);
    }
    plVar1 = local_28;
    (**(code **)(*param_1 + 0x10))(&local_38,param_1);
    local_40 = local_38;
    local_38 = 0;
    FUN_0102cdf0(plVar1,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    lVar2 = 0;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
      lVar2 = local_38;
    }
  }
  local_38 = lVar2;
  if (local_28 != (long *)0x0) {
    (**(code **)(local_28[9] + 0x18))();
  }
  return;
}


