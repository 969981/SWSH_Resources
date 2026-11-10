/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00764420; name: FUN_00764420
 */


undefined8 FUN_00764420(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x7c0));
  pMVar1 = (MutexType *)(param_1 + 0x7a0);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x10);
  nn::os::UnlockMutex(pMVar1);
  if (iVar2 != 4) {
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(param_1 + 0x10);
    nn::os::UnlockMutex(pMVar1);
    uVar4 = 0x100f;
    if ((10 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x748U) == 0)) goto LAB_007644f8;
    FUN_0076b0d0(*(undefined8 *)(param_1 + 0x328));
    FUN_0076b1c0(*(undefined8 *)(param_1 + 0x328));
    FUN_0076b2d0(*(undefined8 *)(param_1 + 0x328));
    FUN_0076b3c0(*(undefined8 *)(param_1 + 0x328));
    if (*(long *)(param_1 + 0x120) != 0) {
      FUN_00769230();
    }
    if (*(long *)(param_1 + 0x160) != 0) {
      FUN_00767bf0();
    }
    nn::os::LockMutex(pMVar1);
    *(undefined4 *)(param_1 + 0x10) = 4;
    if (*(EventType **)(param_1 + 0x20) != (EventType *)0x0) {
      nn::os::SignalEvent(*(EventType **)(param_1 + 0x20));
    }
    nn::os::UnlockMutex(pMVar1);
  }
  uVar4 = 0;
LAB_007644f8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7c0));
  return uVar4;
}


