/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2fad0; name: FUN_00f2fad0
 */


undefined4 FUN_00f2fad0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long local_28;
  
  FUN_00f2cfa0(&local_28);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    FUN_00f2cfa0(&local_28);
    uVar1 = FUN_00f39620(*(long *)(local_28 + 0x68) + 0x10,param_1,param_2);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    }
  }
  return uVar1;
}


