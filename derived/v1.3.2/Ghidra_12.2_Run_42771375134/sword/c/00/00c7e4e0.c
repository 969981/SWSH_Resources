/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7e4e0; name: FUN_00c7e4e0
 */


bool FUN_00c7e4e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long local_30;
  long local_28;
  
  local_30 = *param_2;
  if (local_30 == 0) {
    FUN_00c7c720(&local_28,param_1,&local_30,0);
    lVar1 = local_28;
  }
  else {
    plVar3 = (long *)(local_30 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00c7c720(&local_28,param_1,&local_30,0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_30 = 0;
    lVar1 = local_28;
  }
  if (lVar1 == 0) {
LAB_00c7e5ac:
    bVar2 = true;
  }
  else {
    local_28 = lVar1;
    if (*(int *)(lVar1 + 0x54) == 0) {
      bVar2 = true;
    }
    else {
      if (lVar1 == 0) goto LAB_00c7e5ac;
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      bVar2 = *(int *)(lVar1 + 0x54) == 0;
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return bVar2;
}


