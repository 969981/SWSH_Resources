/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c6c50; name: FUN_012c6c50
 */


void FUN_012c6c50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_50;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  long local_28;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00e36a90();
  uStack_38 = FUN_00e36ab0();
  local_40 = lVar1;
  FUN_012c9290(&local_28,&local_40,2);
  FUN_012c71c0(&local_40,*(undefined8 *)(param_1 + 0x78),uVar2,&local_28);
  if (local_40 != 0) {
    FUN_012c7770(&local_48);
    lVar1 = local_48;
    if (local_48 != 0) {
      local_50 = *(long *)(param_1 + 0x70);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
      }
      FUN_012ce6e0(lVar1,&local_50);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


