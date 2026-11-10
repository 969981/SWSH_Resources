/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c79fb0; name: FUN_00c79fb0
 */


uint FUN_00c79fb0(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long local_18;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  local_18 = *param_2;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00c7e2b0(uVar2,&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return uVar1 & 1;
}


