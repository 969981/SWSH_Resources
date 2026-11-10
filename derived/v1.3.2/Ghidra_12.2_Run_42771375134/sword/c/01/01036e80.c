/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01036e80; name: FUN_01036e80
 */


void FUN_01036e80(long param_1,long *param_2)

{
  undefined8 uVar1;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5d0);
  local_18 = *param_2;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN_016bbe20(uVar1,&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


