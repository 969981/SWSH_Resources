/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cebfa0; name: FUN_00cebfa0
 */


void FUN_00cebfa0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  local_50 = param_4;
  uStack_48 = param_3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x600);
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar3,&uStack_48,0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&uStack_48,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN_014c9900(lVar2,0,param_2,1);
  FUN_0167cce0(lVar1,&local_50,10);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


