/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fa230; name: FUN_004fa230
 */


void FUN_004fa230(long *param_1)

{
  *param_1 = (long)(PTR_DAT_027137f0 + 0x10);
  FUN_004fe2e0(param_1 + 0x54);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x50));
  FUN_004ffa70(param_1);
  return;
}


