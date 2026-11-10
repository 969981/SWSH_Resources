/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5650; name: FUN_004b5650
 */


/* WARNING: Removing unreachable block (ram,0x004b583c) */

int FUN_004b5650(long param_1,int param_2,int param_3,int param_4,uint param_5)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  
  pMVar1 = (MutexType *)(param_1 + 0x68);
  nn::os::LockMutex(pMVar1);
  puVar12 = (undefined8 *)(param_1 + 0x88);
  if (param_2 != 1) {
    puVar12 = (undefined8 *)(param_1 + 0x98);
  }
  for (plVar9 = (long *)puVar12[1]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if ((int)plVar9[3] == param_3) goto LAB_004b56f4;
  }
  plVar9 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x30);
  if (plVar9 == (long *)0x0) {
LAB_004b56f4:
    nn::os::UnlockMutex(pMVar1);
    if (plVar9 == (long *)0x0) {
      iVar4 = 0x34;
      if ((param_5 & 1) == 0) {
        iVar4 = 1;
      }
      return iVar4;
    }
    piVar13 = (int *)plVar9[1];
    uVar11 = (ulong)*(uint *)(plVar9 + 2);
    piVar15 = piVar13 + uVar11;
    if (*(uint *)(plVar9 + 2) != 0) goto LAB_004b5744;
LAB_004b576c:
    uVar10 = (uint)uVar11;
    if (piVar13 != piVar15) {
      if ((param_5 & 1) != 0) {
        return 1;
      }
      if (1 < uVar10) {
        *piVar13 = piVar15[-1];
        uVar10 = *(uint *)(plVar9 + 2);
      }
      puVar12 = (undefined8 *)plVar9[5];
      *(uint *)(plVar9 + 2) = uVar10 - 1;
      while( true ) {
        if (puVar12 == (undefined8 *)0x0) {
          return 1;
        }
        iVar4 = (**(code **)*puVar12)(puVar12,param_4,0);
        if (iVar4 != 1) break;
        puVar12 = (undefined8 *)puVar12[1];
      }
      goto LAB_004b5958;
    }
  }
  else {
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = 0;
    *(int *)(plVar9 + 3) = param_3;
    plVar9[4] = 0;
    plVar9[5] = 0;
    if (puVar12[1] == 0) {
      *puVar12 = plVar9;
      puVar12[1] = plVar9;
      *plVar9 = 0;
    }
    else {
      *plVar9 = puVar12[1];
      puVar12[1] = plVar9;
    }
    nn::os::UnlockMutex(pMVar1);
    piVar13 = (int *)plVar9[1];
    uVar11 = (ulong)*(uint *)(plVar9 + 2);
    piVar15 = piVar13 + uVar11;
    if (*(uint *)(plVar9 + 2) == 0) goto LAB_004b576c;
LAB_004b5744:
    lVar7 = uVar11 << 2;
    do {
      if (*piVar13 == param_4) goto LAB_004b576c;
      lVar7 = lVar7 + -4;
      piVar13 = piVar13 + 1;
    } while (lVar7 != 0);
  }
  piVar13 = piVar15;
  puVar3 = PTR_DAT_02712a90;
  if ((param_5 & 1) == 0) {
    return 1;
  }
  uVar10 = *(uint *)((long)plVar9 + 0x14);
  if ((uint)uVar11 < uVar10) {
LAB_004b58ac:
    if ((uint)uVar11 < uVar10) {
      piVar15 = (int *)(plVar9[1] + (ulong)*(uint *)(plVar9 + 2) * 4);
      *(uint *)(plVar9 + 2) = *(uint *)(plVar9 + 2) + 1;
      if (piVar15 != (int *)0x0) {
        *piVar15 = param_4;
      }
    }
  }
  else {
    uVar10 = uVar10 + 4;
    puVar5 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 2);
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)plVar9[1];
      if ((puVar6 != (undefined4 *)0x0) && (puVar6 != puVar5)) {
        uVar2 = *(uint *)(plVar9 + 2);
        if (uVar2 != 0) {
          *puVar5 = *puVar6;
          if (uVar2 != 1) {
            if (uVar2 == 2) {
              lVar8 = 1;
            }
            else {
              lVar7 = 0;
              do {
                lVar8 = lVar7;
                puVar5[lVar8 + 1] = *(undefined4 *)(plVar9[1] + lVar8 * 4 + 4);
                puVar5[lVar8 + 2] = *(undefined4 *)(plVar9[1] + lVar8 * 4 + 8);
                lVar7 = lVar8 + 2;
              } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar8 + 2);
              lVar8 = lVar8 + 3;
              if ((~uVar2 & 1) == 0) goto LAB_004b5898;
            }
            puVar5[lVar8] = *(undefined4 *)(plVar9[1] + lVar8 * 4);
          }
LAB_004b5898:
          puVar6 = (undefined4 *)plVar9[1];
        }
        FUN_00404870(*(undefined4 *)puVar3,puVar6);
      }
      plVar9[1] = (long)puVar5;
      *(uint *)((long)plVar9 + 0x14) = uVar10;
      goto LAB_004b58ac;
    }
  }
  puVar12 = (undefined8 *)plVar9[5];
  while( true ) {
    if (puVar12 == (undefined8 *)0x0) {
      return 1;
    }
    iVar4 = (**(code **)*puVar12)(puVar12,param_4,1);
    if (iVar4 != 1) break;
    puVar12 = (undefined8 *)puVar12[1];
  }
  for (puVar14 = (undefined8 *)plVar9[5]; puVar12 != puVar14; puVar14 = (undefined8 *)puVar14[1]) {
    (**(code **)*puVar14)(puVar14,param_4,0);
  }
LAB_004b5958:
  uVar10 = *(uint *)(plVar9 + 2);
  if (1 < uVar10) {
    *piVar13 = *(int *)(plVar9[1] + (ulong)uVar10 * 4 + -4);
    uVar10 = *(uint *)(plVar9 + 2);
  }
  *(uint *)(plVar9 + 2) = uVar10 - 1;
  return iVar4;
}


