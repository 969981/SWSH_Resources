/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115c4c0; name: FUN_0115c4c0
 */


void FUN_0115c4c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077d520(0,param_2);
    lVar3 = *(long *)(param_1 + 0x5e0);
    lVar1 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077d520(lVar3,param_2);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(param_1 + 0x5e0);
    lVar1 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5e0);
  }
  lVar3 = *(long *)(lVar3 + 0x2e8);
  plVar5 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c7a10(lVar1,0,lVar3,0,0);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x5d0);
  local_38 = 0x9999233358dff4c0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2f0);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar2,&local_38,0);
    lVar3 = *(long *)(param_1 + 0x5e0);
    lVar1 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar2,&local_38,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(param_1 + 0x5e0);
    lVar1 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5e0);
  }
  lVar4 = *(long *)(lVar3 + 0x2e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5e0);
  }
  lVar3 = *(long *)(lVar3 + 0x2f0);
  plVar5 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(lVar1,lVar4,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  if (lVar3 == 0) {
    uVar2 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_net_title_01",uVar2,10);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar2 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_net_title_01",uVar2,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return;
}


