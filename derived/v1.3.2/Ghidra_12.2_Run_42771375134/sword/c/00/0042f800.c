/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042f800; name: FUN_0042f800
 */


void FUN_0042f800(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  MutexType *pMVar11;
  long lVar12;
  
  puVar3 = PTR_DAT_02712de0;
  DAT_02737d70 = 0;
  if (*(long *)PTR_DAT_02712de0 != 0) {
    FUN_0043c760();
  }
  puVar4 = PTR_DAT_02712ae0;
  if (*(long **)PTR_DAT_02712ae0 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02712ae0 + 0x38))();
  }
  puVar6 = PTR_DAT_02712dc0;
  if (*(long *)PTR_DAT_02712dc0 != 0) {
    FUN_00477720();
  }
  if (*(long *)PTR_DAT_02712de8 != 0) {
    FUN_004c25d0();
  }
  FUN_004c5570();
  puVar5 = PTR_DAT_02712d68;
  uVar8 = *(uint *)(PTR_DAT_02712d68 + 0x78);
  if (0 < (int)uVar8) {
    lVar12 = (ulong)uVar8 + 1;
    puVar1 = PTR_DAT_02712d70 + 0x10;
    do {
      uVar8 = uVar8 - 1;
      pcVar9 = *(code **)(*(long *)(puVar5 + 0x70) + (ulong)uVar8 * 0x10);
      if ((DAT_02737d80 & 1) == 0) {
        iVar7 = __cxa_guard_acquire();
        if (iVar7 != 0) {
          DAT_02737d78 = puVar1;
          __cxa_guard_release(&DAT_02737d80);
        }
      }
      (*pcVar9)(&DAT_02737d78,0x80,
                *(undefined8 *)(*(long *)(puVar5 + 0x70) + (ulong)uVar8 * 0x10 + 8));
      lVar12 = lVar12 + -1;
    } while (1 < lVar12);
  }
  if (*(long *)puVar5 != 0) {
    *(undefined4 *)(puVar5 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar5 = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
  }
  if (*(long *)(puVar5 + 0x10) != 0) {
    *(undefined4 *)(puVar5 + 0x18) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)(puVar5 + 0x1c) = 0;
  }
  if (*(long *)(puVar5 + 0x20) != 0) {
    *(undefined4 *)(puVar5 + 0x28) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
  }
  if (*(long *)(puVar5 + 0x30) != 0) {
    *(undefined4 *)(puVar5 + 0x38) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined4 *)(puVar5 + 0x3c) = 0;
  }
  if (*(long *)(puVar5 + 0x40) != 0) {
    *(undefined4 *)(puVar5 + 0x48) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(puVar5 + 0x40) = 0;
    *(undefined4 *)(puVar5 + 0x4c) = 0;
  }
  if (*(long *)(puVar5 + 0x50) != 0) {
    *(undefined4 *)(puVar5 + 0x58) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(puVar5 + 0x50) = 0;
    *(undefined4 *)(puVar5 + 0x5c) = 0;
  }
  if (*(long *)(puVar5 + 0x60) != 0) {
    *(undefined4 *)(puVar5 + 0x68) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(puVar5 + 0x60) = 0;
    *(undefined4 *)(puVar5 + 0x6c) = 0;
  }
  if (*(long *)(puVar5 + 0x70) != 0) {
    *(undefined4 *)(puVar5 + 0x78) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(puVar5 + 0x70) = 0;
    *(undefined4 *)(puVar5 + 0x7c) = 0;
  }
  if (*(long *)(puVar5 + 0x80) != 0) {
    *(undefined4 *)(puVar5 + 0x88) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(puVar5 + 0x80) = 0;
    *(undefined4 *)(puVar5 + 0x8c) = 0;
  }
  FUN_004be9a0();
  if (*(long *)puVar3 != 0) {
    FUN_00435b10();
    lVar12 = *(long *)puVar3;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_004359b0(lVar12);
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar3 = 0;
  }
  if (*(long **)puVar4 != (long *)0x0) {
    (**(code **)(**(long **)puVar4 + 0x18))();
    puVar10 = *(undefined8 **)puVar4;
    if (puVar10 != (undefined8 *)0x0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar10)(puVar10);
      FUN_00404870(uVar2,puVar10);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar3 = PTR_DAT_02712ae8;
  if (*(long *)PTR_DAT_02712ae8 != 0) {
    FUN_00435020();
    FUN_00435190(*(undefined8 *)puVar3);
  }
  puVar4 = PTR_DAT_02712d90;
  if (*(long *)PTR_DAT_02712d90 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712dc8;
  if (*(long *)PTR_DAT_02712dc8 != 0) {
    FUN_0048a820();
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_0048a7b0(lVar12);
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712b18;
  if (*(long *)PTR_DAT_02712b18 != 0) {
    FUN_004bdd50();
    if (*(long *)puVar4 != 0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712d20;
  if (*(long *)PTR_DAT_02712d20 != 0) {
    FUN_004976e0();
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_00497620(lVar12);
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712ad0;
  if (*(long *)PTR_DAT_02712ad0 != 0) {
    FUN_0048ec80();
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_00457c40(lVar12 + 0x60);
      nn::os::FinalizeEvent((EventType *)(lVar12 + 0x38));
      nn::os::FinalizeMutex((MutexType *)(lVar12 + 0x18));
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712db8;
  if (*(long *)PTR_DAT_02712db8 != 0) {
    FUN_00490650();
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      nn::os::FinalizeMutex((MutexType *)(lVar12 + 0x20));
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712d40;
  if (*(long *)PTR_DAT_02712d40 != 0) {
    FUN_0045f380();
    if (*(long *)puVar4 != 0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712b98;
  if (*(long *)PTR_DAT_02712b98 != 0) {
    FUN_004bafa0();
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_004bac90(lVar12);
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712b68;
  if (*(long *)PTR_DAT_02712b68 != 0) {
    FUN_004b3ed0();
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_004b3df0(lVar12);
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar4 = 0;
  }
  puVar4 = PTR_DAT_02712b50;
  if (*(long *)PTR_DAT_02712b50 != 0) {
    FUN_0049ace0();
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_0049a9b0(lVar12);
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar4 = 0;
  }
  if (*(long *)puVar6 != 0) {
    FUN_004776a0();
    lVar12 = *(long *)puVar6;
    if (lVar12 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_00477630(lVar12);
      FUN_00404870(uVar2,lVar12);
    }
    *(undefined8 *)puVar6 = 0;
  }
  if (*(long *)puVar3 != 0) {
    FUN_00434da0();
    pMVar11 = *(MutexType **)puVar3;
    if (pMVar11 != (MutexType *)0x0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      nn::os::FinalizeMutex(pMVar11 + 0x2d8);
      nn::os::FinalizeMutex(pMVar11 + 0x2a0);
      nn::os::FinalizeMutex(pMVar11 + 0x268);
      nn::os::FinalizeMutex(pMVar11 + 0x230);
      nn::os::FinalizeMutex(pMVar11 + 0x1f8);
      nn::os::FinalizeMutex(pMVar11 + 0x1c0);
      nn::os::FinalizeMutex(pMVar11 + 0x188);
      nn::os::FinalizeMutex(pMVar11 + 0x150);
      nn::os::FinalizeMutex(pMVar11 + 0x118);
      nn::os::FinalizeMutex(pMVar11 + 0xe0);
      nn::os::FinalizeMutex(pMVar11 + 0xa8);
      nn::os::FinalizeMutex(pMVar11 + 0x70);
      nn::os::FinalizeMutex(pMVar11 + 0x38);
      nn::os::FinalizeMutex(pMVar11);
      FUN_00404870(uVar2,pMVar11);
    }
    *(undefined8 *)puVar3 = 0;
  }
  FUN_0042c060();
  puVar3 = PTR_DAT_02712a90;
  if (*(int *)PTR_DAT_02712a90 != -1) {
    FUN_00405710();
    *(undefined4 *)puVar3 = 0xffffffff;
  }
  return;
}


