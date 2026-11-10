/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007642a0; name: FUN_007642a0
 */


undefined8 FUN_007642a0(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x7c0));
  pMVar1 = (MutexType *)(param_1 + 0x7a0);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x10);
  nn::os::UnlockMutex(pMVar1);
  if (iVar2 != 5) {
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(param_1 + 0x10);
    nn::os::UnlockMutex(pMVar1);
    uVar4 = 0x100f;
    if ((10 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x750U) == 0)) goto LAB_007643fc;
    lVar5 = *(long *)(param_1 + 0x328);
    *(undefined8 *)(param_1 + 0x328) = 0;
    if (lVar5 != 0) {
      FUN_0076ab50(lVar5);
      (**(code **)(**(long **)(param_1 + 0x330) + 0x18))
                (*(long **)(param_1 + 0x330),lVar5,*(undefined8 *)(param_1 + 0x338),
                 *(undefined8 *)(param_1 + 0x340));
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      FUN_007691f0();
      FUN_00769130(*(undefined8 *)(param_1 + 0x120));
      FUN_00769270(*(undefined8 *)(param_1 + 0x120));
      FUN_00768b90(*(undefined8 *)(param_1 + 0x120));
    }
    if (*(long *)(param_1 + 0x160) != 0) {
      FUN_00767bb0();
      FUN_007677f0(*(undefined8 *)(param_1 + 0x160));
      FUN_007678c0(*(undefined8 *)(param_1 + 0x160));
      FUN_00766a20(*(undefined8 *)(param_1 + 0x160));
    }
    if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd8) + 0x30))();
    }
    if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
    }
    FUN_007626f0(param_1);
    *(undefined8 *)(param_1 + 0x18c) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    nn::os::LockMutex(pMVar1);
    *(undefined4 *)(param_1 + 0x10) = 5;
    if (*(EventType **)(param_1 + 0x20) != (EventType *)0x0) {
      nn::os::SignalEvent(*(EventType **)(param_1 + 0x20));
    }
    nn::os::UnlockMutex(pMVar1);
  }
  uVar4 = 0;
LAB_007643fc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7c0));
  return uVar4;
}


