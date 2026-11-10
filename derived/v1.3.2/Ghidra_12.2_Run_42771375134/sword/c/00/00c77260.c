/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c77260; name: FUN_00c77260
 */


void FUN_00c77260(long param_1,long *param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    local_28 = *param_2;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00c77f70(lVar1,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    local_28 = *param_2;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00c77f70(lVar1,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    local_28 = *param_2;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00c77f70(lVar1,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


