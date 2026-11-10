/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f1ab0; name: FUN_009f1ab0
 */


void FUN_009f1ab0(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_48;
  
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar1 = *(long *)(local_48 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar4 + 0x2e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x2e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  local_48 = -0x439be774d984a71b;
  FUN_0077eb10(lVar1,&local_48,lVar2);
  FUN_014ca220(lVar5,0,param_2,1,0,1);
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 == 0) {
    local_48 = 0x10e1f89c6aac62fe;
    FUN_0167cce0(0,&local_48,10);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_48 = 0x10e1f89c6aac62fe;
    FUN_0167cce0(lVar4,&local_48,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


