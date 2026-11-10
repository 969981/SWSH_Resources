/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2af0; name: FUN_007c2af0
 */


undefined8 FUN_007c2af0(long param_1,uint param_2)

{
  MutexType *pMVar1;
  int iVar2;
  undefined8 uVar3;
  
  pMVar1 = (MutexType *)(param_1 + 0x88);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x80);
  nn::os::UnlockMutex(pMVar1);
  if (iVar2 == 3) {
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar3 = 1;
    }
    else {
      nn::os::LockMutex(pMVar1);
      *(undefined4 *)(param_1 + 0x80) = 0;
      nn::os::UnlockMutex(pMVar1);
      nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
      uVar3 = 1;
      *(ulong *)(param_1 + 0xa8) = (ulong)param_2 << 0x20 | 1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
      nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
      *(undefined8 *)(param_1 + 0xd0) = 0;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
    }
  }
  else {
    uVar3 = 0;
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar3;
}


