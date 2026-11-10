/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2f5d0; name: FUN_00f2f5d0
 */


undefined4 FUN_00f2f5d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long local_38;
  
  FUN_00f2cfa0(&local_38);
  if (local_38 == 0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    FUN_00f2cfa0(&local_38);
    uVar1 = FUN_00f2f670(*(undefined8 *)(local_38 + 0x68),param_1,param_2,param_3);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    }
  }
  return uVar1;
}


