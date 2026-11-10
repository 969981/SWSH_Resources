/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009df960; name: FUN_009df960
 */


void FUN_009df960(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar3;
  long *plVar4;
  long local_38;
  
  FUN_009dfcb0(&local_38,param_1,param_2,0,*(undefined8 *)(param_2 + 8));
  uVar3 = extraout_x1;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar1 = *(long *)(param_2 + 0x30);
    *(long *)(param_2 + 0x30) = local_38;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = 0;
    uVar3 = extraout_x1_00;
  }
  FUN_009dfcb0(&local_38,param_1,uVar3,1,*(undefined8 *)(param_2 + 0x10));
  lVar1 = local_38;
  uVar3 = extraout_x1_01;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = *(long *)(param_2 + 0x38);
    *(long *)(param_2 + 0x38) = lVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = 0;
    uVar3 = extraout_x1_02;
  }
  FUN_009dfcb0(&local_38,param_1,uVar3,2,*(undefined8 *)(param_2 + 0x18));
  lVar1 = local_38;
  uVar3 = extraout_x1_03;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = *(long *)(param_2 + 0x40);
    *(long *)(param_2 + 0x40) = lVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = 0;
    uVar3 = extraout_x1_04;
  }
  FUN_009dfcb0(&local_38,param_1,uVar3,3,*(undefined8 *)(param_2 + 0x20));
  lVar1 = local_38;
  uVar3 = extraout_x1_05;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = *(long *)(param_2 + 0x48);
    *(long *)(param_2 + 0x48) = lVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = 0;
    uVar3 = extraout_x1_06;
  }
  FUN_009dfcb0(&local_38,param_1,uVar3,4,*(undefined8 *)(param_2 + 0x28));
  lVar1 = local_38;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = *(long *)(param_2 + 0x50);
    *(long *)(param_2 + 0x50) = lVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return;
}


