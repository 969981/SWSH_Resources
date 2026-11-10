/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfdee0; name: FUN_00bfdee0
 */


void FUN_00bfdee0(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long local_50;
  long local_48;
  long local_40 [2];
  
  FUN_016bbeb0(*(undefined8 *)(param_1 + 0x610));
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),4);
  if (param_2 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x5e8);
    local_40[1] = 0xd79a15f0c1b76d4e;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(uVar1,local_40 + 1,0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0077eb10(uVar1,local_40 + 1,lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x610);
    local_48 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar1,0,0,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x5e8);
    local_40[1] = 0xd79a16f0c1b76f01;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(uVar1,local_40 + 1,0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0077eb10(uVar1,local_40 + 1,lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x610);
    local_50 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar1,1,1,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
  }
  else if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x5e8);
    local_40[1] = 0xd79d81f0c1ba5aa9;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(uVar1,local_40 + 1,0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0077eb10(uVar1,local_40 + 1,lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x610);
    local_40[0] = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (local_40[0] != 0) {
      (**(code **)(*(long *)(local_40[0] + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar1,1,0,local_40);
    if (local_40[0] != 0) {
      (**(code **)(*(long *)(local_40[0] + 0x48) + 0x18))();
    }
  }
  return;
}


