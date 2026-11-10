/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108cb90; name: FUN_0108cb90
 */


void FUN_0108cb90(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_2 + 0x68);
  local_28 = param_3;
  if (lVar1 == 0) {
    FUN_0108cc20(param_1,0,&local_28);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_0108cc20(param_1,lVar1,&local_28);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


