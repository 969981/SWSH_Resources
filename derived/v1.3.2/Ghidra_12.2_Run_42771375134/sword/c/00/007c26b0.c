/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c26b0; name: FUN_007c26b0
 */


long FUN_007c26b0(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x60));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x60));
  return param_1 + 0x58;
}


