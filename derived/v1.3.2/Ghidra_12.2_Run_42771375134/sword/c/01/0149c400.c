/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149c400; name: FUN_0149c400
 */


void FUN_0149c400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_48;
  undefined8 uStack_38;
  
  uVar2 = *param_4;
  lVar1 = *(long *)(param_1 + 0x2b0);
  local_48 = param_3;
  uStack_38 = param_2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar1 + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar2,&uStack_38,0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar2,&uStack_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 == 0) {
    FUN_0167cce0(0,&local_48,10);
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0167cce0(lVar1,&local_48,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return;
}


