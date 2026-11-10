/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101cbc0; name: FUN_0101cbc0
 */


void FUN_0101cbc0(long param_1)

{
  int iVar1;
  long *local_18;
  
  iVar1 = FUN_00774010();
  if (iVar1 == 2) {
    FUN_00774040(&local_18,param_1);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x80))(local_18,*(undefined8 *)(param_1 + 0x120));
      if (local_18 != (long *)0x0) {
        (**(code **)(local_18[9] + 0x18))();
      }
    }
  }
  return;
}


