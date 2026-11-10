/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014527e0; name: FUN_014527e0
 */


undefined8 FUN_014527e0(void)

{
  undefined8 local_40 [3];
  long local_28;
  
  FUN_01452830(local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return local_40[0];
}


