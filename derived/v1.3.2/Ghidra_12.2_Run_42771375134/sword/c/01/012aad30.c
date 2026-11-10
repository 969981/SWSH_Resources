/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012aad30; name: FUN_012aad30
 */


bool FUN_012aad30(long param_1)

{
  long lVar1;
  bool bVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3c8));
  if (*(char *)(param_1 + 0x3b0) == '\0') {
    if (*(char *)(param_1 + 0x3b8) == '\0') {
      bVar2 = true;
    }
    else {
      lVar1 = nn::time::StandardSteadyClock::now();
      bVar2 = *(long *)(param_1 + 0x3c0) < lVar1;
    }
  }
  else {
    bVar2 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3c8));
  return bVar2;
}


