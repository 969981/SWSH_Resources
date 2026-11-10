/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070c490; name: FUN_0070c490
 */


void FUN_0070c490(undefined8 param_1,long param_2)

{
  undefined1 auStack_b0 [24];
  long local_98;
  
  FUN_00713a20(auStack_b0,*(undefined8 *)(param_2 + 8));
  FUN_0070c4f0(param_1,auStack_b0);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  return;
}


