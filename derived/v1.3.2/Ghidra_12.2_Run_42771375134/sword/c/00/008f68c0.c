/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f68c0; name: FUN_008f68c0
 */


void FUN_008f68c0(long param_1)

{
  long *plVar1;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)(*(long *)(param_1 + 0x88) + 0x418);
  if (local_28 == 0) {
    FUN_008f7b20(param_1,0,&local_28);
    local_30 = *(long *)(*(long *)(param_1 + 0x88) + 0x420);
  }
  else {
    plVar1 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_008f7b20(param_1,0,&local_28);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    local_28 = 0;
    local_30 = *(long *)(*(long *)(param_1 + 0x88) + 0x420);
  }
  if (local_30 == 0) {
    FUN_008f7b20(param_1,1,&local_30);
    local_38 = *(long *)(*(long *)(param_1 + 0x88) + 0x428);
  }
  else {
    plVar1 = (long *)(local_30 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_008f7b20(param_1,1,&local_30);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    local_30 = 0;
    local_38 = *(long *)(*(long *)(param_1 + 0x88) + 0x428);
  }
  if (local_38 == 0) {
    FUN_008f7b20(param_1,2,&local_38);
    local_40 = *(long *)(*(long *)(param_1 + 0x88) + 0x430);
  }
  else {
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_008f7b20(param_1,2,&local_38);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    local_38 = 0;
    local_40 = *(long *)(*(long *)(param_1 + 0x88) + 0x430);
  }
  if (local_40 == 0) {
    FUN_008f7b20(param_1,3,&local_40);
    local_48 = *(long *)(*(long *)(param_1 + 0x88) + 0x438);
  }
  else {
    plVar1 = (long *)(local_40 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_008f7b20(param_1,3,&local_40);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    local_40 = 0;
    local_48 = *(long *)(*(long *)(param_1 + 0x88) + 0x438);
  }
  if (local_48 == 0) {
    FUN_008f7b20(param_1,4,&local_48);
    return;
  }
  plVar1 = (long *)(local_48 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_008f7b20(param_1,4,&local_48);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


