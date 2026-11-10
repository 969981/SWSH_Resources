/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c6820; name: FUN_012c6820
 */


void FUN_012c6820(void)

{
  long local_18;
  
  FUN_012c6870(&local_18);
  if (local_18 != 0) {
    FUN_012c6a20();
    FUN_012c6c50(local_18);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
  }
  return;
}


