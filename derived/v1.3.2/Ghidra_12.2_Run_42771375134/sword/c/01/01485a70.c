/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01485a70; name: FUN_01485a70
 */


undefined8 FUN_01485a70(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_50;
  long local_48;
  
  puVar2 = PTR_DAT_02710848;
  switch(*param_1) {
  case 2:
  case 5:
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    puVar1 = PTR_DAT_02710798;
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar8 == 0) {
      uVar3 = FUN_0150b350(0);
    }
    else {
      plVar6 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar3 = FUN_0150b350(lVar8);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    lVar7 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(*(long *)puVar1 + 0x220);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    local_48 = *(long *)(param_1 + 10);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_01505e60(lVar9,&local_48,uVar3,param_1[1]);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar8 = local_50;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      lVar8 = local_50;
    }
    break;
  case 3:
  case 7:
    return *(undefined8 *)(param_1 + 6);
  default:
                    /* WARNING: Could not recover jumptable at 0x01485bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x50))(*(long **)(param_1 + 8),param_1[1]);
    return uVar5;
  case 6:
    if (*(long *)(*(long *)PTR_DAT_02710848 + 0x90) != 0) {
      plVar6 = (long *)(*(long *)(*(long *)PTR_DAT_02710848 + 0x90) + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    puVar2 = PTR_DAT_02710798;
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    local_50 = *(long *)(param_1 + 10);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(*(long *)puVar2 + 0x228);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar3 = FUN_0150a590(lVar8,param_1[2],param_1[1]);
    lVar9 = *(long *)(*(long *)puVar2 + 0x228);
    if (lVar9 == 0) {
      uVar4 = FUN_0150a5c0(0,param_1[2],param_1[1]);
      FUN_01505e60(lVar7,&local_50,uVar3,uVar4);
    }
    else {
      plVar6 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar4 = FUN_0150a5c0(lVar9,param_1[2],param_1[1]);
      FUN_01505e60(lVar7,&local_50,uVar3,uVar4);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    lVar8 = 0;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
      lVar8 = local_50;
    }
  }
  local_50 = lVar8;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return *(undefined8 *)(param_1 + 10);
}


