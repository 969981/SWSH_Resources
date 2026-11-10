/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d8bec0; name: FUN_00d8bec0
 */


void FUN_00d8bec0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_2 + 0x68);
  if (lVar1 == 0) {
    FUN_00d8bf50(&local_38,0,param_3);
    *param_1 = local_38;
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_00d8bf50(&local_38,lVar1,param_3);
    *param_1 = local_38;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


