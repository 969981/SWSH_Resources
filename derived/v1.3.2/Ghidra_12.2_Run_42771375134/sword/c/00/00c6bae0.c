/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6bae0; name: FUN_00c6bae0
 */


void FUN_00c6bae0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0xf0) == 0) || (*(int *)(*(long *)(param_1 + 0xf0) + 0x54) == 0))
  goto LAB_00c6bbc0;
  if (*(long *)(param_1 + 0x70) == 0) {
    local_40 = 0;
    lVar1 = *(long *)(param_1 + 0xf0);
    if (lVar1 == 0) goto LAB_00c6bb64;
LAB_00c6bb28:
    lVar2 = local_40;
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_38 = lVar1;
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else {
    FUN_00c62ba0(&local_40);
    lVar1 = *(long *)(param_1 + 0xf0);
    if (lVar1 != 0) goto LAB_00c6bb28;
LAB_00c6bb64:
    local_38 = 0;
    lVar2 = local_40;
  }
  FUN_00ca9590(lVar2,0,&local_38,8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
LAB_00c6bbc0:
  if (*(long *)(param_1 + 0xf8) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0xf8) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    local_40 = 0;
    lVar1 = *(long *)(param_1 + 0xf8);
    lVar2 = local_40;
  }
  else {
    FUN_00c62ba0(&local_40);
    lVar1 = *(long *)(param_1 + 0xf8);
    lVar2 = local_40;
  }
  local_40 = lVar2;
  if (lVar1 == 0) {
    local_38 = 0;
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_38 = lVar1;
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_00ca9590(lVar2,0,&local_38,8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


