/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008974e0; name: FUN_008974e0
 */


void FUN_008974e0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *local_58;
  long local_50;
  long lStack_48;
  
  plVar1 = (long *)FUN_0089a350(&local_50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x10))();
  }
  lVar3 = plVar1[0xe];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = plVar1[0xf];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_50 = lVar3;
  lStack_48 = lVar4;
  FUN_00d88990(param_2,&local_50);
  (**(code **)(*plVar1 + 0x10))(&local_50,plVar1);
  local_58 = plVar1;
  FUN_007742d0(param_2,&local_58);
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
  }
  *param_1 = local_50;
  return;
}


