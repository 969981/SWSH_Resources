/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe48d0; name: FUN_00fe48d0
 */


void FUN_00fe48d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_2 + 0x68);
  local_28 = param_3;
  if (lVar1 == 0) {
    FUN_00fe4960(param_1,0,&local_28);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_00fe4960(param_1,lVar1,&local_28);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


