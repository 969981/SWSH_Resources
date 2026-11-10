/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009df540; name: FUN_009df540
 */


void FUN_009df540(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_38;
  
  FUN_009dfb60(&local_38,param_1,*param_2,0);
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar1 = param_2[1];
    param_2[1] = local_38;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    uVar5 = *param_2;
    uVar2 = FUN_008fe4f0(local_38);
    FUN_0090e260(uVar5,0,uVar2);
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(plVar4);
    local_38 = 0;
  }
  FUN_009dfb60(&local_38,param_1,*param_2,1);
  lVar1 = local_38;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = param_2[2];
    param_2[2] = lVar1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    uVar5 = *param_2;
    uVar2 = FUN_008fe4f0(lVar1);
    FUN_0090e260(uVar5,1,uVar2);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar4);
    local_38 = 0;
  }
  FUN_009dfb60(&local_38,param_1,*param_2,2);
  lVar1 = local_38;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = param_2[3];
    param_2[3] = lVar1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    uVar5 = *param_2;
    uVar2 = FUN_008fe4f0(lVar1);
    FUN_0090e260(uVar5,2,uVar2);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar4);
    local_38 = 0;
  }
  FUN_009dfb60(&local_38,param_1,*param_2,3);
  lVar1 = local_38;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = param_2[4];
    param_2[4] = lVar1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    uVar5 = *param_2;
    uVar2 = FUN_008fe4f0(lVar1);
    FUN_0090e260(uVar5,3,uVar2);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar4);
    local_38 = 0;
  }
  FUN_009dfb60(&local_38,param_1,*param_2,4);
  lVar1 = local_38;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = param_2[5];
    param_2[5] = lVar1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    uVar5 = *param_2;
    uVar2 = FUN_008fe4f0(lVar1);
    FUN_0090e260(uVar5,4,uVar2);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar4);
  }
  return;
}


