/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7e2b0; name: FUN_00c7e2b0
 */


uint FUN_00c7e2b0(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  local_38 = *param_2;
  if (local_38 == 0) {
    uVar4 = FUN_00c7c720(&local_28,param_1,&local_38,0);
    lVar1 = local_28;
  }
  else {
    plVar5 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_00c7c720(&local_28,param_1,&local_38,0);
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
    local_38 = 0;
    lVar1 = local_28;
  }
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x54) == 0) {
      uVar3 = 0;
      uVar2 = 0;
      if (lVar1 == 0) goto LAB_00c7e3b8;
    }
    else {
      if (lVar1 == 0) {
        uVar3 = FUN_00c7c030(uVar4,&local_40);
        goto LAB_00c7e3b8;
      }
      plVar5 = (long *)(lVar1 + 0x48);
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar2 = FUN_00c7c030(uVar4,&local_40);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_40 = 0;
    }
    uVar3 = uVar2;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
LAB_00c7e3b8:
  return uVar3 & 1;
}


