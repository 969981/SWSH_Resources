/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eea1d0; name: FUN_00eea1d0
 */


void FUN_00eea1d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  lVar1 = *(long *)(param_2 + 0x88);
  if (lVar1 == 0) {
    FUN_010672e0(&local_28,0,0);
    local_30 = local_28;
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_010672e0(&local_28,lVar1,0);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_30 = local_28;
  }
  local_28 = local_30;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  local_38 = 0x79479c9171128967;
  FUN_00cc0c50(&local_30,&local_38);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


