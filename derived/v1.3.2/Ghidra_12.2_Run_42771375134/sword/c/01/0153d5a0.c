/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153d5a0; name: FUN_0153d5a0
 */


undefined4 FUN_0153d5a0(long param_1,int param_2)

{
  MutexType *pMVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_0153d060();
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  pMVar1 = (MutexType *)(param_1 + 0x158);
  nn::os::LockMutex(pMVar1);
  if ((*(long *)(param_1 + 0x138) != 0) && (iVar2 = FUN_01560770(), iVar2 == param_2)) {
    FUN_01560780(*(undefined8 *)(param_1 + 0x138));
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_1 + 0x138) != 0) goto LAB_0153d62c;
  do {
    nn::os::UnlockMutex(pMVar1);
    while( true ) {
      nn::os::SleepThread(&LAB_00989680);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(param_1 + 0x138) == 0) break;
LAB_0153d62c:
      iVar2 = FUN_01560770();
      if (iVar2 != param_2) break;
      uVar4 = FUN_015607a0(*(undefined8 *)(param_1 + 0x138));
      nn::os::UnlockMutex(pMVar1);
      if ((uVar4 & 1) != 0) {
        nn::os::LockMutex(pMVar1);
        if ((*(long *)(param_1 + 0x138) == 0) || (iVar2 = FUN_01560770(), iVar2 != param_2)) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_015607c0(*(undefined8 *)(param_1 + 0x138));
        }
        nn::os::UnlockMutex(pMVar1);
        nn::os::LockMutex(pMVar1);
        if ((*(long *)(param_1 + 0x138) != 0) && (iVar2 = FUN_01560770(), iVar2 == param_2)) {
          FUN_01560800(*(undefined8 *)(param_1 + 0x138));
          lVar5 = *(long *)(param_1 + 0x138);
          *(undefined8 *)(param_1 + 0x138) = 0;
          if (lVar5 != 0) {
            if (*(long *)(lVar5 + 8) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar5 + 8) + 0x48) + 0x18))();
              *(undefined8 *)(lVar5 + 8) = 0;
            }
            (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
                      (*(long **)(param_1 + 0x140),lVar5,*(undefined8 *)(param_1 + 0x148),
                       *(undefined8 *)(param_1 + 0x150));
          }
        }
        nn::os::UnlockMutex(pMVar1);
        return uVar3;
      }
    }
  } while( true );
}


