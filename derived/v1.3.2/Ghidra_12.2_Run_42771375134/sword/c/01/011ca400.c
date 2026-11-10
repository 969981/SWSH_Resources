/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ca400; name: FUN_011ca400
 */


void FUN_011ca400(long param_1,long *param_2)

{
  undefined8 uVar1;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  local_18 = *param_2;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN_011cdba0(uVar1,&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


