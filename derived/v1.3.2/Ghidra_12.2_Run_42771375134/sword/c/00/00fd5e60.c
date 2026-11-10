/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd5e60; name: FUN_00fd5e60
 */


void FUN_00fd5e60(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_50;
  undefined8 local_48;
  
  local_48 = param_2;
  FUN_00ff86a0(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),param_3);
  lVar1 = *(long *)(local_50 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(lVar1,&local_48,0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(lVar1,&local_48,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 == 0) {
    local_50 = param_4;
    FUN_0167cce0(0,&local_50,10);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_50 = param_4;
    FUN_0167cce0(lVar2,&local_50,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


