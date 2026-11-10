/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01074160; name: FUN_01074160
 */


void FUN_01074160(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(param_4,param_3,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(param_4,param_3,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 == 0) {
    local_48 = *param_2;
    FUN_0167cce0(0,&local_48,10);
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_48 = *param_2;
    FUN_0167cce0(lVar1,&local_48,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


