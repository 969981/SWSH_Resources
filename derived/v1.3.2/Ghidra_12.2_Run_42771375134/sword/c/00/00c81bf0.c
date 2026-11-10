/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c81bf0; name: FUN_00c81bf0
 */


void FUN_00c81bf0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 == 0) {
    FUN_00c81c80(param_1,&local_38,param_3);
  }
  else {
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_00c81c80(param_1,&local_38,param_3);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    local_38 = 0;
  }
  FUN_00c81e70(param_1,param_4);
  return;
}


