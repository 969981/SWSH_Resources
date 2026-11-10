/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00769230; name: FUN_00769230
 */


void FUN_00769230(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x8c) = 1;
  *(undefined1 *)(param_1 + 0x98) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}


