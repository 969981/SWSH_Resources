/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da4d60; name: FUN_00da4d60
 */


void FUN_00da4d60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_40;
  long local_38;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar1 = *(long *)(param_1 + 0x70);
  }
  else {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (lVar1 == 0) {
      FUN_01066d60(&local_28,0);
    }
    else {
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_01066d60(&local_28,lVar1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    FUN_01052f20(*(undefined8 *)(param_1 + 0x68),0);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    local_40 = local_28;
    local_38 = 0;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_01052f80(uVar2,&local_38,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_01053510(*(undefined8 *)(param_1 + 0x68));
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    lVar1 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x70);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (lVar1 == 0) {
      FUN_01066d60(&local_28,0);
    }
    else {
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_01066d60(&local_28,lVar1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    FUN_01052f20(*(undefined8 *)(param_1 + 0x70),0);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    local_40 = local_28;
    local_38 = 0;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_01052f80(uVar2,&local_38,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_01053510(*(undefined8 *)(param_1 + 0x70));
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    lVar1 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0xae20) = 0;
  return;
}


