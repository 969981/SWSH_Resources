/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c29f0; name: FUN_007c29f0
 */


undefined8 FUN_007c29f0(long param_1,uint param_2)

{
  MutexType *pMVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  pMVar1 = (MutexType *)(param_1 + 0x88);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x80);
  nn::os::UnlockMutex(pMVar1);
  if (iVar2 != 1) {
    nn::os::LockMutex(pMVar1);
    iVar2 = *(int *)(param_1 + 0x80);
    nn::os::UnlockMutex(pMVar1);
    if (iVar2 != 0) {
      uVar3 = 0;
      goto LAB_007c2ac8;
    }
  }
  lVar4 = *(long *)(param_1 + 0x50);
  nn::os::LockMutex(pMVar1);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x80) = 3;
    nn::os::UnlockMutex(pMVar1);
    uVar3 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 2;
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
    uVar3 = 1;
    *(ulong *)(param_1 + 0xd0) = (ulong)param_2 << 0x20 | 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
    nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  }
LAB_007c2ac8:
  nn::os::UnlockMutex(pMVar1);
  return uVar3;
}


