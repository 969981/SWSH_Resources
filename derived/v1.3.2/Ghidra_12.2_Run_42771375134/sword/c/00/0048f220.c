/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048f220; name: FUN_0048f220
 */


void FUN_0048f220(long *param_1,uint param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 uStack_34;
  
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
        if ((*(char *)(lVar4 + 0x60) < '\0') &&
           (pcVar5 = *(code **)(lVar4 + 0x50), pcVar5 != (code *)0x0)) {
          local_48 = *(undefined8 *)(lVar4 + 0x58);
          local_40 = *(undefined8 *)(lVar4 + 0x30);
          uStack_34 = *(undefined4 *)(lVar4 + 0x28);
          local_38 = param_2;
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(0x80,&local_48);
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


