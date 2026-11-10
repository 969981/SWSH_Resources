/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048f540; name: FUN_0048f540
 */


void FUN_0048f540(long *param_1,uint param_2,undefined8 *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x68)) {
      if (*(uint *)(lVar4 + 0x4c) == param_2) {
        if ((*(byte *)(lVar4 + 0x60) >> 4 & 1) != 0) {
          *param_3 = *(undefined8 *)(lVar4 + 0x58);
          param_3[1] = *(undefined8 *)(lVar4 + 0x30);
          *(uint *)(param_3 + 2) = param_2;
          *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)(lVar4 + 0x28);
          pcVar5 = *(code **)(lVar4 + 0x50);
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(0x10,param_3);
          nn::os::SignalEvent((EventType *)(param_1 + 7));
          return;
        }
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


