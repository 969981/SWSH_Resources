/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029f10; name: FUN_01029f10
 */


void FUN_01029f10(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  FUN_01029cb0(*(undefined8 *)PTR_DAT_027108c0);
  FUN_01029ad0(&local_88);
  puVar1 = PTR_DAT_02710798;
  local_b0 = local_78;
  local_b8 = local_80;
  local_c0 = local_88;
  local_90 = local_58;
  local_98 = local_60;
  local_a0 = local_68;
  local_a8 = local_70;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x200);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  uVar2 = FUN_015198f0(lVar3);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(param_1 + 0x100) != '\0') {
      lVar4 = *param_2;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(*(long *)puVar1 + 0x1b8);
      if (lVar5 == 0) {
        FUN_01511210(0,*(undefined8 *)PTR_DAT_02723840,0);
      }
      else {
        plVar6 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_01511210(lVar5,*(undefined8 *)PTR_DAT_02723840,0);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      *(undefined1 *)(param_1 + 0x100) = 0;
    }
    local_d0 = lVar3;
    if (lVar3 == 0) {
      uVar2 = FUN_0102a290(param_1,&local_d0,&local_c0,&local_88,&local_c8);
      lVar4 = local_88;
    }
    else {
      plVar6 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar2 = FUN_0102a290(param_1,&local_d0,&local_c0,&local_88,&local_c8);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_d0 = 0;
      lVar4 = local_88;
    }
    if (((uVar2 & 1) != 0) && ((local_c8 != 0 || (lVar4 == 0)))) {
      if (local_c8 != 0) {
        FUN_01519ad0(lVar3);
        lVar5 = *param_2;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if ((param_3 & 1) != 0) {
          lVar7 = *(long *)(*(long *)puVar1 + 0x200);
          if (lVar7 == 0) {
            FUN_015199f0(0);
          }
          else {
            plVar6 = (long *)(lVar7 + 0x48);
            (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_015199f0(lVar7);
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
      }
      if (lVar4 != 0) {
        local_d8 = *param_2;
        if (local_d8 == 0) {
          FUN_0102a3c0(param_1,&local_d8,lVar4,0,param_3 & 1);
        }
        else {
          plVar6 = (long *)(local_d8 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0102a3c0(param_1,&local_d8,lVar4,0,param_3 & 1);
          (**(code **)(*plVar6 + 0x18))(plVar6);
          local_d8 = 0;
        }
      }
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


