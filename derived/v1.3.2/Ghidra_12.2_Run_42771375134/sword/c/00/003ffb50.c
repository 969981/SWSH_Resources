/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffb50; name: FUN_003ffb50
 */


void FUN_003ffb50(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x2c) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return;
}


