/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a81a0; name: FUN_007a81a0
 */


void FUN_007a81a0(long param_1,byte param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  *(byte *)(param_1 + 0xac) = param_2 & 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  return;
}


