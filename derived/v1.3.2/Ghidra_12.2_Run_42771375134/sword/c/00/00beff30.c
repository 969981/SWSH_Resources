/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00beff30; name: FUN_00beff30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00beff30(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x5e0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  plVar1 = (long *)(param_1 + 0x5f8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar6,param_5,0);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077eb10(uVar6,param_5,lVar3);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,0,*(int *)(param_2 + 0x14) + 0x76c,4,2,1);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,0,*(int *)(param_2 + 0x14) + 0x76c,4,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,1,*(int *)(param_2 + 0x10) + 1,2,2,1);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,1,*(int *)(param_2 + 0x10) + 1,2,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,2,*(undefined4 *)(param_2 + 0xc),2,2,1);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,2,*(undefined4 *)(param_2 + 0xc),2,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,3,*(undefined4 *)(param_2 + 8),2,2,1);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,3,*(undefined4 *)(param_2 + 8),2,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,4,*(undefined4 *)(param_2 + 4),2,2,1);
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,4,*(undefined4 *)(param_2 + 4),2,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *plVar1;
  }
  lVar5 = *(long *)(lVar3 + 0x2f0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar3 = *plVar1;
  }
  lVar3 = *(long *)(lVar3 + 0x2e8);
  plVar2 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_014c62d0(lVar4,lVar5,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar2);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x5f8),param_4,10);
  uVar6 = *(undefined8 *)(param_1 + 0x5e0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar6,param_7,0);
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077eb10(uVar6,param_7,lVar3);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *plVar1;
  }
  lVar5 = *(long *)(lVar3 + 0x2f0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar3 = *plVar1;
  }
  lVar3 = *(long *)(lVar3 + 0x2e8);
  plVar2 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_014c62d0(lVar4,lVar5,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar2);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x5f8),param_6,10);
  uVar6 = *(undefined8 *)(param_1 + 0x5e0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar6,param_9,0);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077eb10(uVar6,param_9,lVar3);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,0,*(int *)(param_3 + 0x14) + 0x76c,4,2,1);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,0,*(int *)(param_3 + 0x14) + 0x76c,4,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,1,*(int *)(param_3 + 0x10) + 1,2,2,1);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,1,*(int *)(param_3 + 0x10) + 1,2,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,2,*(undefined4 *)(param_3 + 0xc),2,2,1);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,2,*(undefined4 *)(param_3 + 0xc),2,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,3,*(undefined4 *)(param_3 + 8),2,2,1);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,3,*(undefined4 *)(param_3 + 8),2,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*plVar1 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,4,*(undefined4 *)(param_3 + 4),2,2,1);
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014ca220(lVar3,4,*(undefined4 *)(param_3 + 4),2,2,1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *plVar1;
  }
  lVar5 = *(long *)(lVar3 + 0x2f0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar3 = *plVar1;
  }
  lVar3 = *(long *)(lVar3 + 0x2e8);
  plVar2 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_014c62d0(lVar4,lVar5,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar2);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  FUN_0167cce0(*plVar1,param_8,10);
  return;
}


