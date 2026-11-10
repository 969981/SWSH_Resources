/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d02de0; name: FUN_00d02de0
 */


void FUN_00d02de0(long param_1)

{
  undefined8 uVar1;
  long local_30;
  long local_28;
  
  FUN_01036e20(*(undefined8 *)(param_1 + 0x1b8));
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_00cf6a50(&local_28,*(undefined8 *)(param_1 + 0x1c0),0);
  FUN_01036db0(uVar1,0,1,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_00cf6a50(&local_30,*(undefined8 *)(param_1 + 0x1c0),1);
  FUN_01036db0(uVar1,1,0,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


