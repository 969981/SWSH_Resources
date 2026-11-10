/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01171180; name: FUN_01171180
 */


undefined8 FUN_01171180(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  if (*(int *)(param_1 + 0x88) != 0xf) {
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_00bdff50();
      uVar1 = FUN_00bdfdf0(*(undefined8 *)(param_1 + 0xd0));
      if ((uVar1 & 1) == 0) {
        return 0;
      }
    }
    lVar2 = *(long *)PTR_DAT_02718f20;
    if (lVar2 == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_011ffb90(&local_38,lVar2,0);
      if (local_38 != 0) {
        FUN_011738a0(&local_40,param_1);
        if (*(long *)(param_1 + 0xd8) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
        lVar2 = *(long *)(param_1 + 0xd0);
        *(undefined8 *)(param_1 + 0xd8) = local_40;
        if (lVar2 == 0) {
          plVar4 = *(long **)(param_1 + 0x80);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_011714f8;
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x98,8);
          if (lVar2 == 0) {
            (**(code **)(*plVar4 + 0xb8))(plVar4);
          }
          FUN_00bdf8b0(lVar2,*(undefined8 *)(param_1 + 0x80));
          *(long **)(lVar2 + 8) = plVar4;
          *(long *)(lVar2 + 0x10) = lVar2;
          *(undefined8 *)(lVar2 + 0x18) = 0x98;
          *(undefined8 *)(lVar2 + 0x20) = 8;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0xd0) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0xd0) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0xd0) = 0;
          }
          *(long *)(param_1 + 0xd0) = lVar2;
        }
        local_48 = *(long *)(local_38 + 0x10);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        }
        local_50 = *(long *)(param_1 + 0xd8);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
        }
        FUN_00bdfe00(lVar2,&local_48,&local_50,0);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
      }
    }
    else {
      if (*(long *)(param_1 + 0xe0) != 0) {
        return 1;
      }
      FUN_011ffb90(&local_38,lVar2,1);
      if (local_38 != 0) {
        FUN_011738a0(&local_40,param_1);
        if (*(long *)(param_1 + 0xe0) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0xe0) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0xe0) = 0;
        }
        lVar2 = *(long *)(param_1 + 0xd0);
        *(undefined8 *)(param_1 + 0xe0) = local_40;
        if (lVar2 == 0) {
          plVar4 = *(long **)(param_1 + 0x80);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_011714f8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x98,8);
          if (lVar2 == 0) {
            (**(code **)(*plVar4 + 0xb8))(plVar4);
          }
          FUN_00bdf8b0(lVar2,*(undefined8 *)(param_1 + 0x80));
          *(long **)(lVar2 + 8) = plVar4;
          *(long *)(lVar2 + 0x10) = lVar2;
          *(undefined8 *)(lVar2 + 0x18) = 0x98;
          *(undefined8 *)(lVar2 + 0x20) = 8;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0xd0) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0xd0) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0xd0) = 0;
          }
          *(long *)(param_1 + 0xd0) = lVar2;
        }
        local_58 = *(long *)(local_38 + 0x10);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
        }
        local_60 = *(long *)(param_1 + 0xe0);
        if (local_60 != 0) {
          (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
        }
        FUN_00bdfe00(lVar2,&local_58,&local_60,1);
        if (local_60 != 0) {
          (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
          local_60 = 0;
        }
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
      }
    }
  }
  return 0;
}


