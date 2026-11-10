/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c15fd0; name: FUN_00c15fd0
 */


void FUN_00c15fd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xcfb4607f00dd7177;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar3 = *(long *)(param_1 + 0x5f8);
    lVar2 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar1,&local_38,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(param_1 + 0x5f8);
    lVar2 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5f8);
  }
  lVar4 = *(long *)(lVar3 + 0x2f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5f8);
  }
  lVar3 = *(long *)(lVar3 + 0x2e8);
  plVar5 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(lVar2,lVar4,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  local_38 = 0x88ddca4443186c9d;
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x5f8),&local_38,10);
  return;
}


