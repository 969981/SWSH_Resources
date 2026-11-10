/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ab650; name: FUN_012ab650
 */


void FUN_012ab650(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x3c8));
  *(undefined1 *)(param_1 + 0x3b0) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3c8));
  return;
}


