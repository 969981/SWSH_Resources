/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01501490; name: FUN_01501490
 */


undefined4 FUN_01501490(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  long local_28;
  
  if ((param_4 | param_3) < 2) {
    FUN_01501160(&local_28);
    uVar1 = FUN_008783c0(local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


