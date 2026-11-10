/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011159a0; name: FUN_011159a0
 */


ulong FUN_011159a0(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  long lVar8;
  ulong local_90;
  undefined4 local_84;
  ulong local_80;
  ulong local_78;
  char *local_70;
  undefined8 local_68;
  long local_60;
  ulong local_58;
  ulong local_48;
  
  if ((*(char *)(param_2 + 0xc) != '\x01') ||
     (FUN_011b60e0(&local_48,param_1,param_2 + 0x68,0x2d0), puVar1 = PTR_DAT_02710798,
     unaff_x22 = param_1, local_48 == 0)) {
    uVar5 = 0;
    goto LAB_01115ca0;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar3 = FUN_008783b0(local_48);
  bVar2 = FUN_01534f60(lVar6,uVar3);
  local_58 = local_48;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00878e20(local_48,7);
  FUN_014b48d0(param_1,&local_58,2,uVar3);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_78 = 0x9a7d7be368fe19;
  local_70 = "MEET_BY_EVENT";
  local_68 = 0xd;
  local_60 = 0;
  local_80 = local_48;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_014af470(&local_78,&local_80);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  plVar7 = *(long **)(lVar8 + 0x58);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  uVar5 = (**(code **)(*plVar7 + 0x28))(plVar7,local_48);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)(*(long *)puVar1 + 0x220);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_78 = local_78 & 0xffffffff00000000;
    local_84 = 0;
    uVar5 = FUN_01507fd0(lVar8,&local_78,&local_84,param_1);
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
      local_90 = local_48;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      uVar4 = FUN_01506ad0(lVar8,&local_90,param_1,local_78 & 0xffffffff,local_84);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      uVar4 = uVar4 & 1;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    unaff_x22 = 1;
    if (uVar4 != 0) {
      lVar8 = *param_3;
      goto joined_r0x01115c1c;
    }
    uVar5 = 0;
  }
  else {
    unaff_x22 = 0;
    lVar8 = *param_3;
joined_r0x01115c1c:
    if (lVar8 == 0) {
LAB_01115c5c:
      local_78 = 0;
    }
    else {
      FUN_010eb5e0(&local_78);
      if (local_78 != 0) {
        *(byte *)(local_78 + 0x41d) = bVar2 & 1;
        FUN_01534a40(lVar6,local_48,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          goto LAB_01115c5c;
        }
      }
    }
    uVar5 = 1;
  }
  (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
LAB_01115ca0:
  return uVar5 | unaff_x22 << 0x20;
}


