/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00763e80; name: FUN_00763e80
 */


/* WARNING: Removing unreachable block (ram,0x007640a4) */
/* WARNING: Removing unreachable block (ram,0x00763ff8) */
/* WARNING: Removing unreachable block (ram,0x007640b4) */

undefined8 FUN_00763e80(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  MediaData aMStack_58 [8];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x7c0));
  pMVar1 = (MutexType *)(param_1 + 0x7a0);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x10);
  nn::os::UnlockMutex(pMVar1);
  if (iVar2 != 4) {
    nn::os::LockMutex(pMVar1);
    uVar9 = *(uint *)(param_1 + 0x10);
    nn::os::UnlockMutex(pMVar1);
    uVar8 = 0x100f;
    if ((10 < uVar9) || ((1 << (ulong)(uVar9 & 0x1f) & 0x748U) == 0)) goto LAB_007641a0;
    nn::os::LockMutex(pMVar1);
    iVar2 = *(int *)(param_1 + 0x10);
    nn::os::UnlockMutex(pMVar1);
    if (iVar2 - 9U < 2) {
      FUN_007641d0(param_1);
    }
    else {
      plVar5 = *(long **)(param_1 + 0xb0);
      if (plVar5 != (long *)0x0) {
        if (*(long *)(param_1 + 0x160) != 0) {
          FUN_00766580(*(long *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x348),param_1 + 0x5d8);
          plVar5 = *(long **)(param_1 + 0xb0);
        }
        (**(code **)(*plVar5 + 0x28))();
      }
      plVar5 = *(long **)(param_1 + 0xd8);
      if (plVar5 != (long *)0x0) {
        if (*(long *)(param_1 + 0x120) != 0) {
          FUN_00768a90(*(long *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x348),param_1 + 0x600);
          plVar5 = *(long **)(param_1 + 0xd8);
        }
        (**(code **)(*plVar5 + 0x28))();
      }
      if (*(long *)(param_1 + 0x328) != 0) {
        FUN_0076b4c0();
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        movie::MediaData::MediaData(aMStack_58);
        iVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x20))
                          (*(long **)(param_1 + 0xb0),aMStack_58);
        if (iVar2 == 0) {
          movie::MediaData::FindInt32((char *)aMStack_58,(int *)"channel-count");
          movie::MediaData::FindInt32((char *)aMStack_58,(int *)"sample-rate");
          if (0 < *(int *)(param_1 + 0x184)) {
            *(undefined4 *)(param_1 + 0x184) = 0;
          }
        }
        movie::MediaData::Clear();
        if (*(long *)(param_1 + 0x160) != 0) {
          FUN_00766b00(*(long *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0xb0),
                       *(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x188),
                       *(int *)(param_1 + 0xd0) == 5);
        }
        movie::MediaData::~MediaData(aMStack_58);
      }
      if (*(long *)(param_1 + 0xd8) != 0) {
        movie::MediaData::MediaData(aMStack_58);
        iVar2 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))
                          (*(long **)(param_1 + 0xd8),aMStack_58);
        if (iVar2 == 0) {
          movie::MediaData::FindInt32((char *)aMStack_58,(int *)"width");
          movie::MediaData::FindInt32((char *)aMStack_58,(int *)"height");
        }
        movie::MediaData::Clear();
        if (*(long *)(param_1 + 0x120) != 0) {
          FUN_00768bb0(*(long *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x198));
        }
        movie::MediaData::~MediaData(aMStack_58);
      }
      uVar9 = 0;
      uVar7 = 0x7d;
      if (*(int *)(param_1 + 0xd0) != 5) {
        uVar7 = 0x32;
      }
      do {
        if (*(long *)(param_1 + 0x120) == 0) {
          uVar4 = 1;
          uVar3 = 1;
          if (*(long *)(param_1 + 0x160) == 0) goto LAB_00764140;
LAB_00764124:
          uVar4 = FUN_00767c50();
          if ((uVar3 & uVar4 & 1) != 0) break;
        }
        else {
          uVar3 = FUN_00769410();
          uVar4 = uVar3;
          if (*(long *)(param_1 + 0x160) != 0) goto LAB_00764124;
LAB_00764140:
          if ((uVar4 & 1) != 0) goto LAB_00764164;
        }
        uVar9 = uVar9 + 1;
        nn::os::SleepThread(&LAB_00989680);
      } while (uVar9 < uVar7);
      if (*(long *)(param_1 + 0x160) != 0) {
        FUN_00766e60();
      }
LAB_00764164:
      lVar6 = *(long *)(param_1 + 0x120);
      if (lVar6 != 0) {
        FUN_00768be0(lVar6,*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x198));
      }
    }
    nn::os::LockMutex(pMVar1);
    *(undefined4 *)(param_1 + 0x10) = 4;
    if (*(EventType **)(param_1 + 0x20) != (EventType *)0x0) {
      nn::os::SignalEvent(*(EventType **)(param_1 + 0x20));
    }
    nn::os::UnlockMutex(pMVar1);
  }
  uVar8 = 0;
LAB_007641a0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7c0));
  return uVar8;
}


