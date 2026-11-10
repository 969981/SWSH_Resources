/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010af120; name: FUN_010af120
 */


void FUN_010af120(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d0),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d0),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d0),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d0),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d0),4);
  lVar2 = *(long *)(param_1 + 0x5d0);
  pcVar1 = *(code **)(lVar2 + 0x168);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x170) = 0;
    *(undefined8 *)(lVar2 + 0x178) = 0;
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    (*pcVar1)(lVar2 + 0x180);
  }
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_38 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_38 = 0x402e607b911466f7;
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0x2e8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN_0077eb10(lVar2,&local_38,0);
    uVar4 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN_0077eb10(lVar2,&local_38,lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_48 = *(long *)(lVar3 + 0x2e8);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_016bb930(uVar4,0,1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_38 = 0x402e5f7b91146544;
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0x2e8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN_0077eb10(lVar2,&local_38,0);
    uVar4 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN_0077eb10(lVar2,&local_38,lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50 = *(long *)(lVar3 + 0x2e8);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_016bb930(uVar4,1,4,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_38 = 0x402e617b911468aa;
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0x2e8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN_0077eb10(lVar2,&local_38,0);
    uVar4 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN_0077eb10(lVar2,&local_38,lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_58 = *(long *)(lVar3 + 0x2e8);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_016bb930(uVar4,2,0,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_38 = 0x402e627b91146a5d;
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0x2e8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN_0077eb10(lVar2,&local_38,0);
    uVar4 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN_0077eb10(lVar2,&local_38,lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  local_60 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_016bbe20(uVar4,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5d0),0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


