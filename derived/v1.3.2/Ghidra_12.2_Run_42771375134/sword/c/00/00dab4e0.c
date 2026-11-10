/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab4e0; name: FUN_00dab4e0
 */


void FUN_00dab4e0(long param_1,undefined4 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0xade8));
  *(undefined4 *)(param_1 + 0xae28) = param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xade8));
  return;
}


