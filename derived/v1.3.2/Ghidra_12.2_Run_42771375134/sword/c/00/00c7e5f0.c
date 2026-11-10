/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7e5f0; name: FUN_00c7e5f0
 */


void FUN_00c7e5f0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long local_40;
  long local_38;
  long local_28;
  
  local_38 = *param_2;
  if (local_38 == 0) {
    FUN_00c7c720(&local_28,param_1,&local_38,0);
    lVar1 = local_28;
  }
  else {
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_00c7c720(&local_28,param_1,&local_38,0);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_38 = 0;
    lVar1 = local_28;
  }
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x54) == 0) {
      if (lVar1 == 0) {
        return;
      }
    }
    else {
      if (lVar1 == 0) {
        FUN_00c7c320(param_1,&local_40);
        return;
      }
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_00c7c320(param_1,&local_40);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      local_40 = 0;
    }
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


