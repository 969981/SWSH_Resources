/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00447160; name: FUN_00447160
 */


int FUN_00447160(long param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  
  puVar8 = (uint *)FUN_0044e300(param_1 + 8,*(undefined4 *)(param_2 + 1));
  if (puVar8 == (uint *)0x0) {
    iVar7 = 2;
  }
  else {
    uVar3 = *puVar8;
    uVar6 = puVar8[1];
    lVar9 = *(long *)PTR_DAT_02712ae8;
    pMVar1 = (MutexType *)(lVar9 + 0xe0);
    nn::os::LockMutex(pMVar1);
    uVar4 = *(uint *)(lVar9 + 0x108);
    if (uVar4 != 0) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar3 / uVar4;
      }
      for (plVar10 = *(long **)(*(long *)(lVar9 + 0x100) + (ulong)(uVar3 - uVar5 * uVar4) * 8);
          plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
        if (*(uint *)(plVar10 + 2) == uVar3) {
          *(int *)((long)plVar10 + 0x14) = *(int *)((long)plVar10 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          if (((short)uVar6 != 0x403) || ((*(byte *)((long)plVar10 + 0x36) >> 5 & 1) != 0))
          goto LAB_00447260;
          nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
          goto LAB_00447210;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
    plVar10 = (long *)FUN_0043d9d0((short)uVar6,uVar3);
    if (plVar10 == (long *)0x0) {
      iVar7 = 2;
    }
    else {
LAB_00447210:
      iVar7 = FUN_0043e5c0(plVar10,puVar8,*(undefined4 *)(param_2 + 1));
      if (iVar7 != 1) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
    if (iVar7 == 1) {
LAB_00447260:
      uVar3 = *(uint *)(param_3 + 0x68);
      if (uVar3 < *(uint *)(param_3 + 0x6c)) {
        *(uint *)(param_3 + 0x68) = uVar3 + 1;
        plVar2 = (long *)(*(long *)(param_3 + 0x60) + (ulong)uVar3 * 8);
        if (plVar2 != (long *)0x0) {
          *plVar2 = (long)plVar10;
        }
      }
      iVar7 = 1;
    }
    FUN_0044e600(param_1 + 8);
  }
  return iVar7;
}


