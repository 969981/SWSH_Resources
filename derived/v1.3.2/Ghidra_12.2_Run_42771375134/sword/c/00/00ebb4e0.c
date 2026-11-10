/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebb4e0; name: FUN_00ebb4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00ebb4e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_80;
  char *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  long local_48;
  
  puVar1 = PTR_DAT_02710848;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  switch(*(undefined4 *)(param_1 + 0x84)) {
  case 0:
    break;
  case 1:
    goto switchD_00ebb53c_caseD_1;
  case 2:
    goto switchD_00ebb53c_caseD_2;
  case 3:
    goto switchD_00ebb53c_caseD_3;
  case 4:
    FUN_00ebc250(param_1);
    uVar5 = 1;
    *(undefined1 *)(param_1 + 0x8d) = 1;
    goto joined_r0x00ebb8c0;
  default:
    goto switchD_00ebb53c_default;
  }
  lVar8 = *(long *)PTR_DAT_02710540;
  plVar7 = *(long **)(lVar8 + 0x48);
  *(long **)(lVar8 + 0x270) = plVar7;
  puVar2 = PTR_DAT_02720278;
  uVar5 = *(undefined8 *)PTR_DAT_02720278;
  *(undefined8 *)(lVar8 + 0x280) = uVar5;
  lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,uVar5,8);
  *(long *)(lVar8 + 0x278) = lVar6;
  if (lVar6 == 0) {
    (**(code **)(**(long **)(lVar8 + 0x270) + 0xb8))();
    lVar6 = *(long *)(lVar8 + 0x278);
  }
  FUN_00760770(lVar6,lVar6 + 0xb8,*(long *)puVar2 + -0xb8,0);
  *(long *)(lVar8 + 0x268) = lVar6;
  FUN_00ebb980(*(undefined8 *)PTR_DAT_02720280,PTR_DAT_0271f710,lVar6,0);
  puVar2 = PTR_DAT_0271efa0;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)PTR_DAT_027194d8;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)PTR_DAT_027194e0;
  puVar2 = PTR_DAT_027194e8;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)PTR_DAT_02717c48;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)PTR_DAT_02720288;
  puVar2 = PTR_DAT_0271f530;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)PTR_DAT_0271bd18;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)PTR_DAT_02720118;
  *(undefined4 *)(param_1 + 0x84) = 1;
switchD_00ebb53c_caseD_1:
  FUN_0101f2e0(*(undefined8 *)PTR_DAT_02710840);
  FUN_00ebbad0(param_1);
  *(undefined4 *)(param_1 + 0x84) = 2;
switchD_00ebb53c_caseD_2:
  uVar3 = FUN_00ebc110(param_1);
  if ((uVar3 & 1) == 0) {
switchD_00ebb53c_default:
    uVar5 = 0;
    goto joined_r0x00ebb8c0;
  }
  lVar6 = FUN_00ec0760(&local_60,*(undefined8 *)(*(long *)PTR_DAT_0271f740 + 8));
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x340) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x340) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  *(long *)(param_1 + 0x340) = lVar6;
  local_58 = *(char **)puVar1;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  local_50 = param_1;
  FUN_00ec2e60(lVar6,&local_60);
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1c0);
  if (lVar6 == 0) {
    local_60 = _DAT_00000068;
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    local_60 = *(undefined8 *)(lVar6 + 0x68);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar5 = FUN_01009790(lVar4,&local_60);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined4 *)(param_1 + 0x84) = 3;
switchD_00ebb53c_caseD_3:
  lVar6 = *(long *)(lVar4 + 0x410);
  if (lVar6 == 0) {
    uVar3 = FUN_00ecda10(0);
    if ((uVar3 & 1) != 0) goto LAB_00ebb874;
LAB_00ebb7e4:
    lVar6 = *(long *)(lVar4 + 0x410);
    if (lVar6 == 0) {
      uVar3 = FUN_00ecda20(0);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      uVar3 = FUN_00ecda20(lVar6);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    if ((uVar3 & 1) == 0) goto LAB_00ebb874;
    lVar6 = *(long *)(lVar4 + 0x410);
    if (lVar6 == 0) {
      FUN_00ecda60(0);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_00ecda60(lVar6);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    local_60 = 0x878b0b324a8a911;
    local_80 = 0xb799bd81379cf107;
    local_58 = "TestBGM";
    local_50 = 7;
    local_48 = 0;
    local_68 = 0;
    local_78 = "Field";
    uStack_70 = 5;
    FUN_00896420(*(long *)PTR_DAT_027107a8 + 0x108,&local_60,&local_80);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(undefined4 *)(param_1 + 0x84) = 4;
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_00ecda10(lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    if ((uVar3 & 1) == 0) goto LAB_00ebb7e4;
LAB_00ebb874:
    lVar6 = *(long *)(lVar4 + 0x410);
    if (lVar6 == 0) {
      FUN_00ecd8e0(0);
      uVar5 = 0;
      goto joined_r0x00ebb8c0;
    }
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_00ecd8e0(lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar5 = 0;
joined_r0x00ebb8c0:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar5;
}


