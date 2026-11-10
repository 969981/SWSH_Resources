/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aad30; name: FUN_007aad30
 */


bool FUN_007aad30(long param_1)

{
  bool bVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xcc0));
  if (*(long *)(param_1 + 0xce0) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(byte *)(*(long *)(param_1 + 0xce0) + 0x2fa) & 1) == 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xcc0));
  return bVar1;
}


