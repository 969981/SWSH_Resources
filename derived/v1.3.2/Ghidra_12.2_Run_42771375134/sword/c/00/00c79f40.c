/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c79f40; name: FUN_00c79f40
 */


uint FUN_00c79f40(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long local_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  local_28 = *param_3;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00c7e180(uVar2,param_2,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar1 & 1;
}


