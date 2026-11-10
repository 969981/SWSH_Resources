/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148c570; name: FUN_0148c570
 */


void FUN_0148c570(int *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_50;
  long local_48;
  
  if (*param_1 == 6) {
    if (*(long *)(param_1 + 10) != param_2) {
      FUN_00866390();
    }
    if (*(long *)(*(long *)PTR_DAT_02710848 + 0x90) != 0) {
      plVar4 = (long *)(*(long *)(*(long *)PTR_DAT_02710848 + 0x90) + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    puVar1 = PTR_DAT_02710798;
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_50 = *(long *)(param_1 + 10);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(*(long *)puVar1 + 0x228);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    uVar2 = FUN_0150a590(lVar6,param_1[2],param_1[1]);
    lVar7 = *(long *)(*(long *)puVar1 + 0x228);
    if (lVar7 == 0) {
      uVar3 = FUN_0150a5c0(0,param_1[2],param_1[1]);
      FUN_01505ea0(lVar5,&local_50,uVar2,uVar3);
    }
    else {
      plVar4 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar3 = FUN_0150a5c0(lVar7,param_1[2],param_1[1]);
      FUN_01505ea0(lVar5,&local_50,uVar2,uVar3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    lVar6 = 0;
    lVar7 = local_48;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
      lVar6 = local_50;
      lVar7 = local_48;
    }
  }
  else {
    if (*param_1 != 2) {
      return;
    }
    if (*(long *)(param_1 + 10) != param_2) {
      FUN_00866390();
    }
    if (*(long *)(*(long *)PTR_DAT_02710848 + 0x90) != 0) {
      plVar4 = (long *)(*(long *)(*(long *)PTR_DAT_02710848 + 0x90) + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    puVar1 = PTR_DAT_02710798;
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_48 = *(long *)(param_1 + 10);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(*(long *)puVar1 + 0x228);
    if (lVar6 == 0) {
      uVar2 = FUN_0150b350(0);
      FUN_01505ea0(lVar5,&local_48,uVar2,param_1[1]);
    }
    else {
      plVar4 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar2 = FUN_0150b350(lVar6);
      FUN_01505ea0(lVar5,&local_48,uVar2,param_1[1]);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    lVar6 = local_50;
    lVar7 = 0;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
      lVar6 = local_50;
      lVar7 = local_48;
    }
  }
  local_48 = lVar7;
  local_50 = lVar6;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


