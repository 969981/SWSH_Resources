/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2fb60; name: FUN_00f2fb60
 */


void FUN_00f2fb60(void)

{
  long local_18;
  
  FUN_00f2cfa0(&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    FUN_00f2cfa0(&local_18);
    FUN_00f32130(*(long *)(local_18 + 0x68) + 0x420);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))((long *)(local_18 + 0x48));
    }
  }
  return;
}


