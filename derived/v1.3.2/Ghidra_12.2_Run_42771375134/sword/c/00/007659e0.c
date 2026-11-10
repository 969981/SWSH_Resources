/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007659e0; name: FUN_007659e0
 */


int FUN_007659e0(long *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  long *plVar4;
  int *__dest;
  long local_48;
  
  local_48 = -1;
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    iVar3 = 0;
    if ((int)param_1[2] != -1) {
      return 0;
    }
  }
  else {
    local_48 = -1;
    iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_48);
    if (iVar3 == 0x2000) {
      local_48 = (long)(int)param_1[2];
      if (local_48 != (int)param_1[2]) {
        return 0x2000;
      }
    }
    else {
      if (iVar3 != 0) {
        return iVar3;
      }
      if (local_48 != (int)param_1[2]) {
        return 0;
      }
    }
  }
  pMVar1 = (MutexType *)(param_1 + 0x43);
  nn::os::LockMutex(pMVar1);
  __dest = (int *)param_1[0x40];
  if ((int *)param_1[0x41] == __dest) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    iVar2 = *__dest;
    __n = param_1[0x41] - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    param_1[0x41] = (long)(__dest + ((long)__n >> 2));
    nn::os::UnlockMutex(pMVar1);
    if (iVar2 != -1) {
      FUN_007658d0(param_1,iVar2);
    }
  }
  return iVar3;
}


