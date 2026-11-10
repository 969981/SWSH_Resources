/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151ef10; name: FUN_0151ef10
 */


void FUN_0151ef10(long param_1)

{
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_18);
    *(undefined8 *)(param_1 + 0x60) = local_18;
  }
  return;
}


