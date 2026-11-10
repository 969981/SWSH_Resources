/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106fff0; name: FUN_0106fff0
 */


void FUN_0106fff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  local_40 = param_2;
  local_38 = param_3;
  if (lVar1 == 0) {
    FUN_01070080(param_1,0,&local_40);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_01070080(param_1,lVar1,&local_40);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


