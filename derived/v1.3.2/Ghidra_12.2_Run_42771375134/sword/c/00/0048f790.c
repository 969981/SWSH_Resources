/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048f790; name: FUN_0048f790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f790(long *param_1,uint param_2,void *param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined1 auStack_74 [36];
  undefined4 local_50;
  undefined8 local_48;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    lVar4 = 0;
    pcVar5 = _DAT_00000050;
  }
  else {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8);
        (lVar4 != 0 && (*(uint *)(lVar4 + 0x4c) != param_2)); lVar4 = *(long *)(lVar4 + 0x68)) {
    }
    pcVar5 = *(code **)(lVar4 + 0x50);
  }
  if ((pcVar5 == (code *)0x0) || ((*(byte *)(lVar4 + 0x61) >> 5 & 1) == 0)) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  local_88 = *(undefined8 *)(lVar4 + 0x58);
  uStack_80 = *(undefined8 *)(lVar4 + 0x30);
  local_78 = param_2;
  memcpy(auStack_74,param_3,0x24);
  local_50 = 0x2000;
  local_48 = param_4;
  nn::os::ClearEvent((EventType *)(param_1 + 7));
  nn::os::UnlockMutex(pMVar1);
  (*pcVar5)(0x2000,&local_88);
  nn::os::SignalEvent((EventType *)(param_1 + 7));
  return;
}


