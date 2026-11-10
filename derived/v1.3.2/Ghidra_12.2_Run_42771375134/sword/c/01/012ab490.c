/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ab490; name: FUN_012ab490
 */


void FUN_012ab490(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 800));
  *(undefined1 *)(param_1 + 0xf9) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 800));
  return;
}


