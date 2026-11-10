/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004472e0; name: FUN_004472e0
 */


int FUN_004472e0(long param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  
  puVar7 = (uint *)FUN_0044e300(param_1 + 8,*(undefined4 *)(param_2 + 1));
  if (puVar7 == (uint *)0x0) {
    iVar6 = 2;
  }
  else {
    uVar3 = *puVar7;
    lVar8 = *(long *)PTR_DAT_02712ae8;
    pMVar1 = (MutexType *)(lVar8 + 0xa8);
    nn::os::LockMutex(pMVar1);
    uVar4 = *(uint *)(lVar8 + 0xd0);
    if (uVar4 != 0) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar3 / uVar4;
      }
      for (plVar9 = *(long **)(*(long *)(lVar8 + 200) + (ulong)(uVar3 - uVar5 * uVar4) * 8);
          plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
        if (*(uint *)(plVar9 + 2) == uVar3) {
          *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          uVar3 = *(uint *)(param_3 + 0x68);
          if (uVar3 < *(uint *)(param_3 + 0x6c)) goto LAB_00447418;
          goto LAB_00447430;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    plVar9 = (long *)FUN_0045f740(uVar3);
    if (plVar9 == (long *)0x0) {
      iVar6 = 2;
    }
    else {
      nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
      iVar6 = FUN_0045f920(plVar9,puVar7,*(undefined4 *)(param_2 + 1));
      if (iVar6 == 1) {
        FUN_0045f680(plVar9);
        nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
        uVar3 = *(uint *)(param_3 + 0x68);
        if (uVar3 < *(uint *)(param_3 + 0x6c)) {
LAB_00447418:
          *(uint *)(param_3 + 0x68) = uVar3 + 1;
          plVar2 = (long *)(*(long *)(param_3 + 0x60) + (ulong)uVar3 * 8);
          if (plVar2 != (long *)0x0) {
            *plVar2 = (long)plVar9;
          }
        }
LAB_00447430:
        iVar6 = 1;
      }
      else {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
      }
    }
    FUN_0044e600(param_1 + 8);
  }
  return iVar6;
}


