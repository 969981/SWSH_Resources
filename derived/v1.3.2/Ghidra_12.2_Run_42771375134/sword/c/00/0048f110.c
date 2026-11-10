/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048f110; name: FUN_0048f110
 */


void FUN_0048f110(undefined4 param_1,undefined4 param_2,long *param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,byte param_7)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  byte local_58;
  
  pMVar1 = (MutexType *)(param_3 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_3 + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_4 / uVar2;
    }
    lVar4 = *(long *)(*param_3 + (ulong)(param_4 - uVar3 * uVar2) * 8);
    if (lVar4 != 0) {
      local_58 = param_7 & 1;
      do {
        if (*(uint *)(lVar4 + 0x4c) == param_4) {
          if ((*(byte *)(lVar4 + 0x60) >> 3 & 1) != 0) {
            local_80 = *(undefined8 *)(lVar4 + 0x58);
            local_78 = *(undefined8 *)(lVar4 + 0x30);
            uStack_6c = *(undefined4 *)(lVar4 + 0x28);
            pcVar5 = *(code **)(lVar4 + 0x50);
            local_70 = param_4;
            local_68 = param_1;
            uStack_64 = param_2;
            local_60 = param_5;
            uStack_5c = param_6;
            nn::os::ClearEvent((EventType *)(param_3 + 7));
            nn::os::UnlockMutex(pMVar1);
            (*pcVar5)(8,&local_80);
            nn::os::SignalEvent((EventType *)(param_3 + 7));
            return;
          }
          break;
        }
        lVar4 = *(long *)(lVar4 + 0x68);
      } while (lVar4 != 0);
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


