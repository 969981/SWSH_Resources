/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f64d0; name: FUN_014f64d0
 */


void FUN_014f64d0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long local_40;
  long local_38;
  
  local_38 = *param_3;
  if (local_38 == 0) {
    FUN_014f65b0(param_1,param_2,&local_38);
    local_40 = *param_3;
  }
  else {
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_014f65b0(param_1,param_2,&local_38);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    local_38 = 0;
    local_40 = *param_3;
  }
  if (local_40 == 0) {
    FUN_014f6780(param_1,&local_40);
  }
  else {
    plVar1 = (long *)(local_40 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_014f6780(param_1,&local_40);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}


