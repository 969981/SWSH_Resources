/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076b4c0; name: FUN_0076b4c0
 */


void FUN_0076b4c0(long param_1)

{
  nn::os::TimedWaitEvent((EventType *)(param_1 + 0x4b0),5000000000);
  nn::os::ClearEvent((EventType *)(param_1 + 0x4b0));
  return;
}


