/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00447d40; name: FUN_00447d40
 */


int FUN_00447d40(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  MutexType *pMVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  puVar6 = PTR_DAT_02712fe8;
  if (*(int *)(PTR_DAT_02712fe8 + 8) == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = (long *)**(undefined8 **)PTR_DAT_02712fe8;
  }
  pMVar8 = (MutexType *)FUN_00435370(*(undefined8 *)PTR_DAT_02712ae8,1);
  puVar9 = (uint *)FUN_0044e300(param_1 + 8,*(undefined4 *)(param_2 + 1));
  if (puVar9 == (uint *)0x0) {
    return 2;
  }
  uVar1 = *puVar9;
  nn::os::LockMutex(pMVar8);
  uVar2 = *(uint *)(pMVar8 + 0x28);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar1 / uVar2;
    }
    for (plVar12 = *(long **)(*(long *)(pMVar8 + 0x20) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
        plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
      if (*(uint *)(plVar12 + 2) == uVar1) {
        *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar8);
        lVar10 = FUN_0047d440();
        puVar5 = PTR_DAT_02712b90;
        goto joined_r0x00447eb0;
      }
    }
  }
  nn::os::UnlockMutex(pMVar8);
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  plVar12 = (long *)FUN_00451fc0(uVar1);
  if (plVar12 == (long *)0x0) {
    iVar7 = 2;
  }
  else {
    iVar7 = (**(code **)(*plVar12 + 0x268))(plVar12,puVar9,*(undefined4 *)(param_2 + 1));
    if (iVar7 == 1) {
      nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
      lVar10 = FUN_0047d440();
      puVar5 = PTR_DAT_02712b90;
joined_r0x00447eb0:
      PTR_DAT_02712b90 = puVar5;
      if ((plVar13 == (long *)0x0) ||
         (((lVar10 != 0 && (plVar12 == plVar13)) && (*(int *)(lVar10 + 0x58) == 0)))) {
        if (*(int *)(puVar6 + 8) == 0) {
          lVar10 = 0;
          iVar7 = *(int *)(puVar5 + 0x30);
        }
        else {
          lVar10 = **(long **)puVar6;
          iVar7 = *(int *)(puVar5 + 0x30);
        }
        if (iVar7 == 0) {
          iVar7 = *(int *)(lVar10 + 0x160);
          if (iVar7 == -1) {
            lVar11 = lVar10;
            do {
              lVar11 = *(long *)(lVar11 + 0x80);
              if (lVar11 == 0) {
                iVar7 = -1;
                lVar11 = lVar10;
                goto LAB_00447f8c;
              }
              iVar7 = *(int *)(lVar11 + 0x160);
            } while (iVar7 == -1);
            *(int *)(lVar10 + 0x160) = iVar7;
          }
          if (iVar7 != 0) {
LAB_00447f00:
            *(int *)(puVar5 + 0x30) = iVar7;
            goto LAB_00447f20;
          }
        }
        FUN_00457700();
        goto LAB_00447f20;
      }
      goto LAB_00447f34;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  goto LAB_00447f5c;
  while (iVar3 = *(int *)(lVar11 + 0x160), iVar3 == -1) {
LAB_00447f8c:
    lVar11 = *(long *)(lVar11 + 0x80);
    if (lVar11 == 0) goto LAB_00447f00;
  }
  *(int *)(lVar10 + 0x160) = iVar3;
  *(int *)(puVar5 + 0x30) = iVar3;
LAB_00447f20:
  FUN_0043ce10(*(undefined8 *)PTR_DAT_02712de0,puVar5 + 0x30);
LAB_00447f34:
  uVar1 = *(uint *)(param_3 + 0x68);
  if (uVar1 < *(uint *)(param_3 + 0x6c)) {
    *(uint *)(param_3 + 0x68) = uVar1 + 1;
    plVar13 = (long *)(*(long *)(param_3 + 0x60) + (ulong)uVar1 * 8);
    if (plVar13 != (long *)0x0) {
      *plVar13 = (long)plVar12;
    }
  }
  iVar7 = 1;
LAB_00447f5c:
  FUN_0044e600(param_1 + 8);
  return iVar7;
}


