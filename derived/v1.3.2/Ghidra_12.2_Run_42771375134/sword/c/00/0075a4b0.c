/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075a4b0; name: FUN_0075a4b0
 */


void FUN_0075a4b0(long param_1,undefined4 *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x148) = *param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


