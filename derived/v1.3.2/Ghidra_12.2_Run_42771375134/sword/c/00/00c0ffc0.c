/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c0ffc0; name: FUN_00c0ffc0
 */


void FUN_00c0ffc0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x5e0);
  if (lVar2 == 0) {
    return;
  }
  local_38 = 0x5d2b72804f5704e0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(lVar2,&local_38,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(lVar2,&local_38,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  if (lVar2 == 0) {
    FUN_014ca220(0,0,param_2,7,0,1);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar4 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_014ca220(lVar2,0,param_2,7,0,1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar4 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar3 = *(long *)(lVar2 + 0x2f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar2 = *(long *)(lVar2 + 0x2e8);
  plVar5 = (long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(lVar4,lVar3,lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar5);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
  if (lVar2 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_rank_detail_01",uVar1,10);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar1 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_rank_detail_01",uVar1,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return;
}


