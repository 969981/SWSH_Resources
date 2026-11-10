/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ba5950; name: FUN_00ba5950
 */


void FUN_00ba5950(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5e;
  long local_58 [2];
  undefined2 local_48;
  byte local_46;
  long local_38;
  
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = FUN_00bcb810(uVar5);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_00b9a020();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar6 = puVar6 + -10;
        goto LAB_00ba59bc;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_00ba59bc:
  lVar4 = FUN_00b96d00(puVar6);
  FUN_00bcb0f0(uVar5,uVar2,*(undefined8 *)(lVar4 + 0x170));
  local_48 = 0x101;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 1;
  local_58[1] = 0;
  local_98 = 0;
  local_46 = 0;
  local_5e = 0xffff;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_00bc53e0(&local_38,*(undefined8 *)(param_1 + 0x78));
  local_58[0] = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_46 = FUN_00bc4680(*(undefined8 *)(param_1 + 0x78));
  local_46 = local_46 & 1;
  iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),0);
  if (iVar1 != 0) {
    FUN_00bc4410(&local_38,*(undefined8 *)(param_1 + 0x78),0);
    local_98 = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),1);
    if (iVar1 != 0) {
      FUN_00bc4410(&local_38,*(undefined8 *)(param_1 + 0x78),1);
      local_90 = local_38;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),2);
      if (iVar1 != 0) {
        FUN_00bc4410(&local_38,*(undefined8 *)(param_1 + 0x78),2);
        local_88 = local_38;
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),3);
        if (iVar1 != 0) {
          FUN_00bc4410(&local_38,*(undefined8 *)(param_1 + 0x78),3);
          local_80 = local_38;
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
            local_38 = 0;
          }
          iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),4);
          if (iVar1 != 0) {
            FUN_00bc4410(&local_38,*(undefined8 *)(param_1 + 0x78),4);
            local_78 = local_38;
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
              local_38 = 0;
            }
            iVar1 = FUN_00bc4440(*(undefined8 *)(param_1 + 0x78),5);
            if (iVar1 != 0) {
              FUN_00bc4410(&local_38,*(undefined8 *)(param_1 + 0x78),5);
              local_70 = local_38;
              if (local_38 != 0) {
                (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
                local_38 = 0;
              }
            }
          }
        }
      }
    }
  }
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  FUN_01037680(*(undefined8 *)(param_1 + 0x88),5);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x88))(*(long **)(param_1 + 0x88),local_58,&local_98);
  return;
}


