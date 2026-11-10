/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2c00; name: FUN_007c2c00
 */


void FUN_007c2c00(long param_1,int *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x88));
  if ((*param_2 != 1) || (*(int *)(param_1 + 0x80) == 0)) {
    *(int *)(param_1 + 0x80) = *param_2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
  return;
}


