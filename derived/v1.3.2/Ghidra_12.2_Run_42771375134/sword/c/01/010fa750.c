/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fa750; name: FUN_010fa750
 */


void FUN_010fa750(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_58;
  long local_50;
  long local_48;
  
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  plVar3 = *(long **)(param_1 + 0x648);
  lVar4 = *(long *)(param_1 + 0x5e0);
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  lVar5 = *(long *)(param_1 + 0x5e8);
  local_58 = lVar4;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  lVar6 = *(long *)(param_1 + 0x5f0);
  lVar4 = param_1 + 0x100;
  local_50 = lVar5;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_48 = lVar6;
  (**(code **)(*plVar3 + 8))(plVar3,&local_58,param_2);
  lVar5 = *(long *)(param_1 + 0x5e0);
  if (lVar5 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd700(lVar4,&DAT_02164e70,uVar1,10);
    lVar5 = *(long *)(param_1 + 0x5e8);
  }
  else {
    plVar3 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar5);
    FUN_00ffd700(lVar4,&DAT_02164e70,uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar5 = *(long *)(param_1 + 0x5e8);
  }
  if (lVar5 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd700(lVar4,&DAT_02164e78,uVar1,10);
    lVar5 = *(long *)(param_1 + 0x5f0);
  }
  else {
    plVar3 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar5);
    FUN_00ffd700(lVar4,&DAT_02164e78,uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar5 = *(long *)(param_1 + 0x5f0);
  }
  if (lVar5 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd700(lVar4,&DAT_02164e80,uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar5);
    FUN_00ffd700(lVar4,&DAT_02164e80,uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


