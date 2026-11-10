/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00753ec0; name: FUN_00753ec0
 */


void FUN_00753ec0(void)

{
  uint in_w3;
  long local_28;
  undefined8 local_18;
  
  FUN_00dcc750(&local_28);
  local_18 = 0;
  FUN_007273c0(local_28,in_w3 & 1,&local_18);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


