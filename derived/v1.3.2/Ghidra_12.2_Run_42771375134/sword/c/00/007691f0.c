/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007691f0; name: FUN_007691f0
 */


void FUN_007691f0(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x98) = 1;
  FUN_007651d0(*(undefined8 *)(param_1 + 0x70));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}


