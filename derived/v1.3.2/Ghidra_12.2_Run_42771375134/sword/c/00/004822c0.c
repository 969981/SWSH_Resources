/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004822c0; name: FUN_004822c0
 */


int FUN_004822c0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  MutexType *pMVar7;
  MutexType *pMVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar6 = PTR_DAT_02712ae8;
  pMVar7 = (MutexType *)
           FUN_00435360(*(undefined8 *)PTR_DAT_02712ae8,*(uint *)((long)param_1 + 0x9c) >> 0x11 & 1)
  ;
  nn::os::LockMutex(pMVar7);
  iVar4 = *(int *)((long)param_1 + 0x14) + -1;
  *(int *)((long)param_1 + 0x14) = iVar4;
  if (iVar4 == 0) {
    pMVar8 = (MutexType *)
             FUN_00435370(*(undefined8 *)puVar6,*(uint *)((long)param_1 + 0x9c) >> 0x11 & 1);
    uVar1 = *(uint *)(param_1 + 2);
    nn::os::LockMutex(pMVar8);
    uVar2 = *(uint *)(pMVar8 + 0x28);
    if (uVar2 != 0) {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = uVar1 / uVar2;
      }
      plVar9 = (long *)(*(long *)(pMVar8 + 0x20) + (ulong)(uVar1 - uVar5 * uVar2) * 8);
      lVar10 = *plVar9;
      if (lVar10 != 0) {
        lVar12 = 0;
        do {
          lVar11 = lVar10;
          if (*(uint *)(lVar11 + 0x10) == uVar1) {
            if (lVar12 != 0) {
              plVar9 = (long *)(lVar12 + 8);
            }
            *plVar9 = *(long *)(lVar11 + 8);
            *(int *)(pMVar8 + 0x30) = *(int *)(pMVar8 + 0x30) + -1;
            break;
          }
          lVar10 = *(long *)(lVar11 + 8);
          lVar12 = lVar11;
        } while (*(long *)(lVar11 + 8) != 0);
      }
    }
    nn::os::UnlockMutex(pMVar8);
    (**(code **)(*param_1 + 0x30))(param_1);
    FUN_00482420(param_1);
    plVar9 = (long *)param_1[0xf];
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
    }
    plVar9 = (long *)param_1[0x10];
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
    }
    uVar3 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*param_1)(param_1);
    FUN_00404870(uVar3,param_1);
  }
  nn::os::UnlockMutex(pMVar7);
  return iVar4;
}


