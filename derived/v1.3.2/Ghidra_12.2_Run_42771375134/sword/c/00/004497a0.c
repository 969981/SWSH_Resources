/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004497a0; name: FUN_004497a0
 */


int FUN_004497a0(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  void *__dest;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  
  uVar9 = param_2[2];
  if (uVar9 == 0) {
    return 1;
  }
  pMVar1 = (MutexType *)(param_1 + 0x48);
  nn::os::LockMutex(pMVar1);
  uVar2 = *param_2;
  uVar3 = *(uint *)(param_1 + 0x78);
  if (uVar3 == 0) {
LAB_0044982c:
    FUN_0044a360(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x78);
    if (uVar3 == 0) {
LAB_0044991c:
      iVar6 = 2;
      goto LAB_004499b4;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    uVar11 = (ulong)(uVar2 - uVar4 * uVar3);
    plVar8 = (long *)(*(long *)(param_1 + 0x70) + uVar11 * 8);
  }
  else {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    uVar11 = (ulong)(uVar2 - uVar4 * uVar3);
    plVar8 = (long *)(*(long *)(param_1 + 0x70) + uVar11 * 8);
    for (plVar10 = (long *)*plVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (*(uint *)(plVar10 + 1) == uVar2) {
        plVar8 = plVar10 + 2;
        *(int *)(plVar10 + 6) = *(int *)(plVar10 + 6) + 1;
        if (*plVar8 == 0) goto LAB_004498cc;
        iVar6 = 1;
        goto LAB_004499b4;
      }
    }
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x80));
    if (DAT_01d4bee0 < fVar12 / (float)uVar3) goto LAB_0044982c;
  }
  do {
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
      if (puVar7 == (undefined8 *)0x0) goto LAB_0044991c;
      *puVar7 = *(undefined8 *)(*(long *)(param_1 + 0x70) + uVar11 * 8);
      *(uint *)(puVar7 + 1) = uVar2;
      plVar8 = puVar7 + 2;
      *plVar8 = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 6) = 1;
      *(undefined4 *)(puVar7 + 3) = 0;
      *(undefined8 **)(*(long *)(param_1 + 0x70) + uVar11 * 8) = puVar7;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      goto LAB_004498c8;
    }
  } while (*(uint *)(plVar8 + 1) != uVar2);
  plVar8 = plVar8 + 2;
LAB_004498c8:
  *(uint *)((long)plVar8 + 0x24) = uVar2;
LAB_004498cc:
  puVar5 = PTR_DAT_02712b90;
  if ((int)plVar8[3] == 0) {
    if ((*(int *)(PTR_DAT_02712b90 + 0x18) == -1) ||
       (__dest = (void *)FUN_00404750(*(int *)(PTR_DAT_02712b90 + 0x18),uVar9,0x10),
       __dest == (void *)0x0)) goto LAB_004499a4;
    nn::os::UnlockMutex(pMVar1);
    iVar6 = FUN_00443f70(param_1,param_2,__dest);
    nn::os::LockMutex(pMVar1);
    if (iVar6 == 1) goto LAB_00449994;
    FUN_004047f0(*(undefined4 *)(puVar5 + 0x18),__dest);
  }
  else {
    if (*(int *)(PTR_DAT_02712b90 + 0x18) != -1) {
      uVar9 = *(uint *)(plVar8[2] + 0x10);
      __dest = (void *)FUN_00404750(*(int *)(PTR_DAT_02712b90 + 0x18),(ulong)uVar9,0x10);
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(plVar8[2] + 8),(ulong)uVar9);
LAB_00449994:
        *(uint *)(plVar8 + 1) = uVar9;
        iVar6 = 1;
        *plVar8 = (long)__dest;
        goto LAB_004499b4;
      }
    }
LAB_004499a4:
    iVar6 = 0x34;
  }
  FUN_00446e30(param_1,plVar8);
LAB_004499b4:
  nn::os::UnlockMutex(pMVar1);
  return iVar6;
}


