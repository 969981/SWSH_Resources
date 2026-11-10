/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012aa920; name: FUN_012aa920
 */


bool FUN_012aa920(long param_1)

{
  long lVar1;
  bool bVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x390));
  if (*(char *)(param_1 + 0x378) == '\0') {
    if (*(char *)(param_1 + 0x380) == '\0') {
      bVar2 = true;
    }
    else {
      lVar1 = nn::time::StandardSteadyClock::now();
      bVar2 = 5 < lVar1 - *(long *)(param_1 + 0x388);
    }
  }
  else {
    bVar2 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x390));
  return bVar2;
}


