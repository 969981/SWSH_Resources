/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a89e0; name: FUN_012a89e0
 */


bool FUN_012a89e0(long param_1)

{
  long lVar1;
  bool bVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 800));
  if (*(char *)(param_1 + 0xf8) == '\0') {
    if (*(char *)(param_1 + 0x310) == '\0') {
      bVar2 = true;
    }
    else {
      lVar1 = nn::time::StandardSteadyClock::now();
      bVar2 = 5 < lVar1 - *(long *)(param_1 + 0x318);
    }
  }
  else {
    bVar2 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 800));
  return bVar2;
}


