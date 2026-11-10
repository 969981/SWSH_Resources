/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108ebf0; name: FUN_0108ebf0
 */


void FUN_0108ebf0(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long lStack_c0;
  undefined4 local_b8;
  
  if (param_2 == (long *)0x0) {
    param_2 = *(long **)(param_1 + 8);
  }
  *(long *)(param_1 + 0x78) = param_1;
  local_b8 = 0;
  local_d0 = FUN_010905d0;
  local_e0 = &LAB_010905b0;
  local_d8 = FUN_010905c0;
  local_c8 = &LAB_010905e0;
  pcVar3 = *(code **)(param_1 + 0x98);
  lStack_c0 = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_0108f27c:
    (*local_d0)(&lStack_c0,param_1 + 0xb0);
    *(undefined1 **)(param_1 + 0xa8) = local_c8;
    *(code **)(param_1 + 0x98) = local_d8;
    *(code **)(param_1 + 0xa0) = local_d0;
    *(undefined8 *)(param_1 + 0x90) = local_e0;
    lVar5 = *(long *)(param_1 + 0x88);
  }
  else {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar3)(param_1 + 0xb0);
    if (local_d0 != (code *)0x0) goto LAB_0108f27c;
    lVar5 = *(long *)(param_1 + 0x88);
  }
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar5,param_1 + 0x80,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(&lStack_c0);
  }
  *(long *)(param_1 + 0x198) = param_1;
  local_b8 = 1;
  local_c8 = &LAB_010905e0;
  local_d0 = FUN_010905d0;
  local_e0 = &LAB_010905b0;
  local_d8 = FUN_010905c0;
  pcVar3 = *(code **)(param_1 + 0x1b8);
  lStack_c0 = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_0108f2b8:
    (*local_d0)(&lStack_c0,param_1 + 0x1d0);
    *(undefined1 **)(param_1 + 0x1c8) = local_c8;
    *(code **)(param_1 + 0x1b8) = local_d8;
    *(code **)(param_1 + 0x1c0) = local_d0;
    *(undefined8 *)(param_1 + 0x1b0) = local_e0;
    lVar5 = *(long *)(param_1 + 0x1a8);
  }
  else {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    (*pcVar3)(param_1 + 0x1d0);
    if (local_d0 != (code *)0x0) goto LAB_0108f2b8;
    lVar5 = *(long *)(param_1 + 0x1a8);
  }
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar5,param_1 + 0x1a0,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(&lStack_c0);
  }
  *(long *)(param_1 + 0x2b8) = param_1;
  local_b8 = 2;
  local_c8 = &LAB_010905e0;
  local_d0 = FUN_010905d0;
  local_e0 = &LAB_010905b0;
  local_d8 = FUN_010905c0;
  pcVar3 = *(code **)(param_1 + 0x2d8);
  lStack_c0 = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    (*pcVar3)(param_1 + 0x2f0);
    if (local_d0 == (code *)0x0) goto LAB_0108edcc;
  }
  (*local_d0)(&lStack_c0,param_1 + 0x2f0);
  *(undefined1 **)(param_1 + 0x2e8) = local_c8;
  *(code **)(param_1 + 0x2d8) = local_d8;
  *(code **)(param_1 + 0x2e0) = local_d0;
  *(undefined8 *)(param_1 + 0x2d0) = local_e0;
LAB_0108edcc:
  lVar5 = *(long *)(param_1 + 0x2c8);
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar5,param_1 + 0x2c0,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(&lStack_c0);
  }
  *(long **)(param_1 + 0x60) = param_2;
  puVar1 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x90,8);
    if (lVar2 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_00883c20(lVar2,param_2);
    *(long **)(lVar2 + 8) = param_2;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x90;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x4e0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x4e0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x4e0) = 0;
    }
    *(long *)(param_1 + 0x4e0) = lVar2;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x90,8);
      if (lVar2 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_00883c20(lVar2,param_2);
      *(long **)(lVar2 + 8) = param_2;
      *(long *)(lVar2 + 0x10) = lVar2;
      *(undefined8 *)(lVar2 + 0x18) = 0x90;
      *(undefined8 *)(lVar2 + 0x20) = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x4e8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x4e8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x4e8) = 0;
      }
      *(long *)(param_1 + 0x4e8) = lVar2;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar5 + 0x80) < 0x10) {
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x90,8);
        if (lVar2 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_00883c20(lVar2,param_2);
        *(long **)(lVar2 + 8) = param_2;
        *(long *)(lVar2 + 0x10) = lVar2;
        *(undefined8 *)(lVar2 + 0x18) = 0x90;
        *(undefined8 *)(lVar2 + 0x20) = 8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x4f0) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x4f0) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x4f0) = 0;
        }
        *(long *)(param_1 + 0x4f0) = lVar2;
        lVar5 = FUN_009e3950(&local_e0,param_2);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x568) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x568) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x568) = 0;
        }
        *(long *)(param_1 + 0x568) = lVar5;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar5 + 0x80) < 0x10) {
          *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
          if (lVar2 == 0) {
            (**(code **)(*param_2 + 0xb8))(param_2);
          }
          FUN_0077d050(lVar2,0x400);
          *(long **)(lVar2 + 8) = param_2;
          *(long *)(lVar2 + 0x10) = lVar2;
          *(undefined8 *)(lVar2 + 0x18) = 0x80;
          *(undefined8 *)(lVar2 + 0x20) = 8;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0x570) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x570) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x570) = 0;
          }
          *(long *)(param_1 + 0x570) = lVar2;
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar5 + 0x80) < 0x10) {
            *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
            lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
            if (lVar2 == 0) {
              (**(code **)(*param_2 + 0xb8))(param_2);
            }
            FUN_0077d050(lVar2,0x400);
            *(long **)(lVar2 + 8) = param_2;
            *(long *)(lVar2 + 0x10) = lVar2;
            *(undefined8 *)(lVar2 + 0x18) = 0x80;
            *(undefined8 *)(lVar2 + 0x20) = 8;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            if (lVar2 != 0) {
              (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0x578) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x578) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0x578) = 0;
            }
            *(long *)(param_1 + 0x578) = lVar2;
            uVar4 = *(undefined8 *)(param_1 + 0x568);
            FUN_006cf0a0(&local_e0,&DAT_0266f5a0);
            FUN_014bc440(uVar4,&local_e0,1);
            if (local_c8 != (undefined1 *)0x0) {
              (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
              local_c8 = (undefined1 *)0x0;
            }
            lVar5 = FUN_010905f0(&local_e0,param_2);
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0x590) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x590) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0x590) = 0;
            }
            *(long *)(param_1 + 0x590) = lVar5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


