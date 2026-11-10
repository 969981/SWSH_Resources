/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2f870; name: FUN_00f2f870
 */


undefined4 FUN_00f2f870(void)

{
  undefined4 uVar1;
  long local_18;
  
  FUN_00f2cfa0(&local_18);
  if (local_18 == 0) {
    return 0;
  }
  (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  FUN_00f2cfa0(&local_18);
  uVar1 = *(undefined4 *)(*(long *)(local_18 + 0x68) + 0x758);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return uVar1;
}


