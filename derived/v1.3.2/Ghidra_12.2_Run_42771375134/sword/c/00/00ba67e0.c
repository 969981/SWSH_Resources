/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ba67e0; name: FUN_00ba67e0
 */


void FUN_00ba67e0(long param_1)

{
  int iVar1;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3e;
  long local_38 [2];
  undefined2 local_28;
  byte local_26;
  long local_18;
  
  FUN_00bcb1e0(*(undefined8 *)(param_1 + 0x78));
  local_28 = 0x101;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 1;
  local_38[1] = 0;
  local_78 = 0;
  local_26 = 0;
  local_3e = 0xffff;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_00bc53e0(&local_18,*(undefined8 *)(param_1 + 0x78));
  local_38[0] = local_18;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  local_26 = FUN_00bc4680(*(undefined8 *)(param_1 + 0x78));
  local_26 = local_26 & 1;
  iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),0);
  if (iVar1 != 0) {
    FUN_00bc4410(&local_18,*(undefined8 *)(param_1 + 0x78),0);
    local_78 = local_18;
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
      local_18 = 0;
    }
    iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),1);
    if (iVar1 != 0) {
      FUN_00bc4410(&local_18,*(undefined8 *)(param_1 + 0x78),1);
      local_70 = local_18;
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
        local_18 = 0;
      }
      iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),2);
      if (iVar1 != 0) {
        FUN_00bc4410(&local_18,*(undefined8 *)(param_1 + 0x78),2);
        local_68 = local_18;
        if (local_18 != 0) {
          (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
          local_18 = 0;
        }
        iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),3);
        if (iVar1 != 0) {
          FUN_00bc4410(&local_18,*(undefined8 *)(param_1 + 0x78),3);
          local_60 = local_18;
          if (local_18 != 0) {
            (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
            local_18 = 0;
          }
          iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),4);
          if (iVar1 != 0) {
            FUN_00bc4410(&local_18,*(undefined8 *)(param_1 + 0x78),4);
            local_58 = local_18;
            if (local_18 != 0) {
              (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
              local_18 = 0;
            }
            iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),5);
            if (iVar1 != 0) {
              FUN_00bc4410(&local_18,*(undefined8 *)(param_1 + 0x78),5);
              local_50 = local_18;
              if (local_18 != 0) {
                (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
                local_18 = 0;
              }
            }
          }
        }
      }
    }
  }
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x80),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
  FUN_01037680(*(undefined8 *)(param_1 + 0x80),5);
  (**(code **)(**(long **)(param_1 + 0x80) + 0x88))(*(long **)(param_1 + 0x80),local_38,&local_78);
  return;
}


