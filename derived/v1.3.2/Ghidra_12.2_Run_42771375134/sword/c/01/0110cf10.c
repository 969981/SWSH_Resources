/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0110cf10; name: FUN_0110cf10
 */


void FUN_0110cf10(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_48;
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x608) == 0) {
    return;
  }
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  lVar3 = *(long *)(param_1 + 0x5e0);
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  lVar4 = *(long *)(param_1 + 0x5e8);
  local_48 = lVar3;
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  lVar5 = *(long *)(param_1 + 0x5f0);
  lVar3 = param_1 + 0x100;
  local_40 = lVar4;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_38 = lVar5;
  (**(code **)**(undefined8 **)(param_1 + 0x608))(*(undefined8 **)(param_1 + 0x608),&local_48);
  lVar4 = *(long *)(param_1 + 0x5e0);
  if (lVar4 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd700(lVar3,&DAT_02165280,uVar1,10);
    lVar4 = *(long *)(param_1 + 0x5e8);
  }
  else {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar1 = FUN_0077d470(lVar4);
    FUN_00ffd700(lVar3,&DAT_02165280,uVar1,10);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar4 = *(long *)(param_1 + 0x5e8);
  }
  if (lVar4 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd700(lVar3,&DAT_02165288,uVar1,10);
    lVar4 = *(long *)(param_1 + 0x5f0);
  }
  else {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar1 = FUN_0077d470(lVar4);
    FUN_00ffd700(lVar3,&DAT_02165288,uVar1,10);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar4 = *(long *)(param_1 + 0x5f0);
  }
  if (lVar4 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd700(lVar3,&DAT_02165290,uVar1,10);
  }
  else {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar1 = FUN_0077d470(lVar4);
    FUN_00ffd700(lVar3,&DAT_02165290,uVar1,10);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


