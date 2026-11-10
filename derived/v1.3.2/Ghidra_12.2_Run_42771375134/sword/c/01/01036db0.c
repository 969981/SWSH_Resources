/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01036db0; name: FUN_01036db0
 */


void FUN_01036db0(long param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined8 uVar1;
  long local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5d0);
  local_28 = *param_4;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar1,param_2,param_3,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


