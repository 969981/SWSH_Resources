/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf1160; name: FUN_00bf1160
 */


void FUN_00bf1160(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar5,param_5,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  else {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_0077eb10(uVar5,param_5,lVar2);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  if (lVar2 == 0) {
    FUN_014ca220(0,0,param_2,1,1,1);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar3 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_014ca220(lVar2,0,param_2,1,1,1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar3 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar4 = *(long *)(lVar2 + 0x2f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar2 = *(long *)(lVar2 + 0x2e8);
  plVar1 = (long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  FUN_014c62d0(lVar3,lVar4,lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x5f8),param_4,10);
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar5,param_7,0);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar3 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_0077eb10(uVar5,param_7,lVar2);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar3 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar4 = *(long *)(lVar2 + 0x2f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar2 = *(long *)(lVar2 + 0x2e8);
  plVar1 = (long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  FUN_014c62d0(lVar3,lVar4,lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x5f8),param_6,10);
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar5,param_9,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  else {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_0077eb10(uVar5,param_9,lVar2);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  }
  if (lVar2 == 0) {
    FUN_014ca220(0,0,param_3,1,1,1);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar3 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_014ca220(lVar2,0,param_3,1,1,1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar3 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar4 = *(long *)(lVar2 + 0x2f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar2 = *(long *)(lVar2 + 0x2e8);
  plVar1 = (long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  FUN_014c62d0(lVar3,lVar4,lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x5f8),param_8,10);
  return;
}


