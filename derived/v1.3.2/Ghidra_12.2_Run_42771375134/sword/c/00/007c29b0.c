/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c29b0; name: FUN_007c29b0
 */


bool FUN_007c29b0(long param_1)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x88));
  iVar1 = *(int *)(param_1 + 0x80);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
  return iVar1 == 1;
}


