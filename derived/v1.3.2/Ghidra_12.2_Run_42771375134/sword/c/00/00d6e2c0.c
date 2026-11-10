/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6e2c0; name: FUN_00d6e2c0
 */


void FUN_00d6e2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  long local_58;
  long *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  FUN_00d6e6b0(&local_58,param_3);
  lVar1 = local_58;
  switch(param_4) {
  case 0:
    FUN_006e4c50(local_58,param_2);
    FUN_00a8a490(&local_38,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,param_3,0);
    if (*(long *)(lVar1 + 0x48) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x48) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    *(long *)(lVar1 + 0x48) = local_38;
    if (local_38 == 0) goto switchD_00d6e30c_default;
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(lVar1 + 0x50) != 0) || (*(long *)(lVar1 + 0xd0) != 0)) {
      lVar1 = lVar1 + 0x40;
LAB_00d6e640:
      FUN_006e1e70(local_38,lVar1,1);
    }
    break;
  case 1:
    FUN_006e4c50(local_58,param_2);
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    FUN_00c8ca30(&local_38,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,param_3,0);
    if (*(long *)(lVar1 + 0x158) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x158) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x158) = 0;
    }
    *(long *)(lVar1 + 0x158) = local_38;
    if (local_38 == 0) goto switchD_00d6e30c_default;
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(lVar1 + 0x160) != 0) || (*(long *)(lVar1 + 0x1e0) != 0)) {
      lVar1 = lVar1 + 0x150;
      goto LAB_00d6e640;
    }
    break;
  case 2:
    FUN_006e4c50(local_58,param_2);
    FUN_00a8ba70(&local_38,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,param_3,0);
    if (*(long *)(lVar1 + 0x268) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x268) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x268) = 0;
    }
    *(long *)(lVar1 + 0x268) = local_38;
    if (local_38 == 0) goto switchD_00d6e30c_default;
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(lVar1 + 0x270) != 0) || (*(long *)(lVar1 + 0x2f0) != 0)) {
      lVar1 = lVar1 + 0x260;
      goto LAB_00d6e640;
    }
    break;
  case 3:
    FUN_006e4c50(local_58,param_2);
    FUN_00a9a170(&local_38,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,param_3,0);
    if (*(long *)(lVar1 + 0x378) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x378) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x378) = 0;
    }
    *(long *)(lVar1 + 0x378) = local_38;
    if (local_38 == 0) goto switchD_00d6e30c_default;
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(lVar1 + 0x380) != 0) || (*(long *)(lVar1 + 0x400) != 0)) {
      lVar1 = lVar1 + 0x370;
      goto LAB_00d6e640;
    }
    break;
  case 4:
    FUN_006e4c50(local_58,param_2);
    FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,param_3,0);
    if (*(long *)(lVar1 + 0x488) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x488) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x488) = 0;
    }
    *(long *)(lVar1 + 0x488) = local_38;
    if (local_38 == 0) goto switchD_00d6e30c_default;
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(lVar1 + 0x490) != 0) || (*(long *)(lVar1 + 0x510) != 0)) {
      lVar1 = lVar1 + 0x480;
      goto LAB_00d6e640;
    }
    break;
  case 5:
    FUN_006e4c50(local_58,param_2);
    FUN_0010ecd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,param_3,0);
    if (*(long *)(lVar1 + 0x598) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x598) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x598) = 0;
    }
    *(long *)(lVar1 + 0x598) = local_38;
    if (local_38 == 0) goto switchD_00d6e30c_default;
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(lVar1 + 0x5a0) != 0) || (*(long *)(lVar1 + 0x620) != 0)) {
      lVar1 = lVar1 + 0x590;
      goto LAB_00d6e640;
    }
    break;
  default:
    goto switchD_00d6e30c_default;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
switchD_00d6e30c_default:
  FUN_00d6fba0(param_1 + 0x40,&local_58);
  lVar1 = local_58;
  local_58 = 0;
  if (lVar1 != 0) {
    FUN_00d6f2e0(lVar1);
    (**(code **)(*local_50 + 0x18))(local_50,lVar1,uStack_48,local_40);
  }
  return;
}


