/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00762270; name: FUN_00762270
 */


void FUN_00762270(long param_1)

{
  int iVar1;
  long lVar2;
  MutexType *pMVar3;
  undefined8 *puVar4;
  
  pMVar3 = (MutexType *)(param_1 + 0x7a0);
  nn::os::LockMutex(pMVar3);
  iVar1 = *(int *)(param_1 + 0x10);
  nn::os::UnlockMutex(pMVar3);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x797) != '\0') {
      if (*(char *)(param_1 + 0x798) != '\0') {
        nn::os::SignalEvent((EventType *)(param_1 + 0x628));
        nn::os::WaitThread((ThreadType *)(param_1 + 0x370));
      }
      nn::os::DestroyThread((ThreadType *)(param_1 + 0x370));
    }
    if (*(char *)(param_1 + 0x796) != '\0') {
      nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x650));
      nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x690));
      nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x6d0));
      nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x710));
      nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x750));
      nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x650));
      nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x690));
      nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x6d0));
      nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x710));
      nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x750));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x220));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x1f8));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x1a8));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x1d0));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x2c0));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x298));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x248));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x270));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x5d8));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x600));
      nn::os::FinalizeEvent((EventType *)(param_1 + 0x628));
      nn::os::FinalizeMultiWait((MultiWaitType *)(param_1 + 0x558));
    }
    lVar2 = *(long *)(param_1 + 0x538);
    *(undefined8 *)(param_1 + 0x538) = 0;
    if (lVar2 != 0) {
      (**(code **)(**(long **)(param_1 + 0x540) + 0x18))
                (*(long **)(param_1 + 0x540),lVar2,*(undefined8 *)(param_1 + 0x548),
                 *(undefined8 *)(param_1 + 0x550));
    }
    lVar2 = *(long *)(param_1 + 0x328);
    *(undefined8 *)(param_1 + 0x328) = 0;
    if (lVar2 != 0) {
      FUN_0076ab50(lVar2);
      (**(code **)(**(long **)(param_1 + 0x330) + 0x18))
                (*(long **)(param_1 + 0x330),lVar2,*(undefined8 *)(param_1 + 0x338),
                 *(undefined8 *)(param_1 + 0x340));
    }
    lVar2 = *(long *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (lVar2 != 0) {
      FUN_00768a30(lVar2);
      (**(code **)(**(long **)(param_1 + 0x128) + 0x18))
                (*(long **)(param_1 + 0x128),lVar2,*(undefined8 *)(param_1 + 0x130),
                 *(undefined8 *)(param_1 + 0x138));
    }
    lVar2 = *(long *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (lVar2 != 0) {
      FUN_00766420(lVar2);
      (**(code **)(**(long **)(param_1 + 0x168) + 0x18))
                (*(long **)(param_1 + 0x168),lVar2,*(undefined8 *)(param_1 + 0x170),
                 *(undefined8 *)(param_1 + 0x178));
    }
    FUN_007626f0(param_1);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x7c0));
  nn::os::FinalizeMutex(pMVar3);
  lVar2 = *(long *)(param_1 + 0x538);
  *(undefined8 *)(param_1 + 0x538) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x540) + 0x18))
              (*(long **)(param_1 + 0x540),lVar2,*(undefined8 *)(param_1 + 0x548),
               *(undefined8 *)(param_1 + 0x550));
  }
  pMVar3 = *(MutexType **)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x348) = 0;
  if (pMVar3 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar3);
    (**(code **)(**(long **)(param_1 + 0x350) + 0x18))
              (*(long **)(param_1 + 0x350),pMVar3,*(undefined8 *)(param_1 + 0x358),
               *(undefined8 *)(param_1 + 0x360));
  }
  lVar2 = *(long *)(param_1 + 0x328);
  *(undefined8 *)(param_1 + 0x328) = 0;
  if (lVar2 != 0) {
    FUN_0076ab50(lVar2);
    (**(code **)(**(long **)(param_1 + 0x330) + 0x18))
              (*(long **)(param_1 + 0x330),lVar2,*(undefined8 *)(param_1 + 0x338),
               *(undefined8 *)(param_1 + 0x340));
  }
  movie::MediaData::~MediaData((MediaData *)(param_1 + 0x1a0));
  lVar2 = *(long *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (lVar2 != 0) {
    FUN_00766420(lVar2);
    (**(code **)(**(long **)(param_1 + 0x168) + 0x18))
              (*(long **)(param_1 + 0x168),lVar2,*(undefined8 *)(param_1 + 0x170),
               *(undefined8 *)(param_1 + 0x178));
  }
  lVar2 = *(long *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (lVar2 != 0) {
    FUN_00765390(lVar2);
    (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
              (*(long **)(param_1 + 0x148),lVar2,*(undefined8 *)(param_1 + 0x150),
               *(undefined8 *)(param_1 + 0x158));
  }
  lVar2 = *(long *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (lVar2 != 0) {
    FUN_00768a30(lVar2);
    (**(code **)(**(long **)(param_1 + 0x128) + 0x18))
              (*(long **)(param_1 + 0x128),lVar2,*(undefined8 *)(param_1 + 0x130),
               *(undefined8 *)(param_1 + 0x138));
  }
  lVar2 = *(long *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (lVar2 != 0) {
    FUN_00765b90(lVar2);
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))
              (*(long **)(param_1 + 0x108),lVar2,*(undefined8 *)(param_1 + 0x110),
               *(undefined8 *)(param_1 + 0x118));
  }
  puVar4 = *(undefined8 **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),puVar4,*(undefined8 *)(param_1 + 0xe8),
               *(undefined8 *)(param_1 + 0xf0));
  }
  puVar4 = *(undefined8 **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
              (*(long **)(param_1 + 0xb8),puVar4,*(undefined8 *)(param_1 + 0xc0),
               *(undefined8 *)(param_1 + 200));
  }
  puVar4 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
              (*(long **)(param_1 + 0x98),puVar4,*(undefined8 *)(param_1 + 0xa0),
               *(undefined8 *)(param_1 + 0xa8));
  }
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x40));
  return;
}


