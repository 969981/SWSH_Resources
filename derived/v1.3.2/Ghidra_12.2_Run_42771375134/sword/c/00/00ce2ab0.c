/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce2ab0; name: FUN_00ce2ab0
 */


void FUN_00ce2ab0(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_48;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x2e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_48 = 0xb77c5ddd9ef78c2b;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x6c0),&local_48,lVar2);
  lVar3 = *(long *)(lVar1 + 0x2e0);
  if (lVar3 == 0) {
    FUN_014ca220(0,0,param_2,4,1,1);
    local_48 = 0x6fde0d306ea08902;
    FUN_0167cce0(lVar1,&local_48,10);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014ca220(lVar3,0,param_2,4,1,1);
    local_48 = 0x6fde0d306ea08902;
    FUN_0167cce0(lVar1,&local_48,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


