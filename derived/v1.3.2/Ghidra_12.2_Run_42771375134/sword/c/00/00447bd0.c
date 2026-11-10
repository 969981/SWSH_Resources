/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00447bd0; name: FUN_00447bd0
 */


int FUN_00447bd0(long param_1,long param_2,long param_3)

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
    return 2;
  }
  uVar3 = *puVar7;
  lVar8 = *(long *)PTR_DAT_02712ae8;
  pMVar1 = (MutexType *)(lVar8 + 0x70);
  nn::os::LockMutex(pMVar1);
  uVar4 = *(uint *)(lVar8 + 0x98);
  if (uVar4 != 0) {
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar3 / uVar4;
    }
    for (plVar9 = *(long **)(*(long *)(lVar8 + 0x90) + (ulong)(uVar3 - uVar5 * uVar4) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar3) {
        *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        uVar3 = *(uint *)(param_3 + 0x68);
        if (*(uint *)(param_3 + 0x6c) <= uVar3) goto LAB_00447d18;
        goto LAB_00447d00;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  plVar9 = (long *)FUN_004b1a00(uVar3);
  if (plVar9 == (long *)0x0) {
    iVar6 = 2;
  }
  else {
    iVar6 = FUN_004b1b00(plVar9,puVar7,*(undefined4 *)(param_2 + 1));
    if (iVar6 == 1) {
      nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
      uVar3 = *(uint *)(param_3 + 0x68);
      if (uVar3 < *(uint *)(param_3 + 0x6c)) {
LAB_00447d00:
        *(uint *)(param_3 + 0x68) = uVar3 + 1;
        plVar2 = (long *)(*(long *)(param_3 + 0x60) + (ulong)uVar3 * 8);
        if (plVar2 != (long *)0x0) {
          *plVar2 = (long)plVar9;
        }
      }
LAB_00447d18:
      iVar6 = 1;
      goto LAB_00447d1c;
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
LAB_00447d1c:
  FUN_0044e600(param_1 + 8);
  return iVar6;
}


