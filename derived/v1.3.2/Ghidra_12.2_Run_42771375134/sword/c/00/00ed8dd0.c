/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed8dd0; name: FUN_00ed8dd0
 */


void FUN_00ed8dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_30;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 0x68);
  local_28 = param_3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_00ed8e50(&local_30,lVar1,param_2,&local_28);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


