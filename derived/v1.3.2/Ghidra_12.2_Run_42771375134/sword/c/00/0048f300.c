/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048f300; name: FUN_0048f300
 */


void FUN_0048f300(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  
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
        if (((*(byte *)(lVar4 + 0x60) >> 6 & 1) != 0) &&
           (pcVar5 = *(code **)(lVar4 + 0x50), pcVar5 != (code *)0x0)) {
          local_78 = *(undefined8 *)(lVar4 + 0x58);
          local_70 = *(undefined8 *)(lVar4 + 0x30);
          uStack_64 = *(undefined4 *)(lVar4 + 0x28);
          local_58 = *param_5;
          local_54 = *param_6;
          local_68 = param_2;
          local_60 = param_3;
          uStack_5c = param_4;
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(0x40,&local_78);
          nn::os::SignalEvent((EventType *)(param_1 + 7));
          *param_5 = local_58;
          *param_6 = local_54;
          return;
        }
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


