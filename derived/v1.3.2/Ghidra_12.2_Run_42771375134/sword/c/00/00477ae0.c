/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00477ae0; name: FUN_00477ae0
 */


undefined8 FUN_00477ae0(long *param_1,uint param_2,long *param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  uint uVar18;
  float fVar19;
  
  lVar14 = *(long *)PTR_DAT_02712ae8;
  pMVar1 = (MutexType *)(lVar14 + 0x188);
  nn::os::LockMutex(pMVar1);
  uVar8 = *(uint *)(lVar14 + 0x1b0);
  if (uVar8 != 0) {
    uVar18 = 0;
    if (uVar8 != 0) {
      uVar18 = param_2 / uVar8;
    }
    for (plVar15 = *(long **)(*(long *)(lVar14 + 0x1a8) + (ulong)(param_2 - uVar18 * uVar8) * 8);
        plVar15 != (long *)0x0; plVar15 = (long *)plVar15[1]) {
      if (*(uint *)(plVar15 + 2) == param_2) {
        *(int *)((long)plVar15 + 0x14) = *(int *)((long)plVar15 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        puVar6 = PTR_DAT_02712a90;
        uVar8 = *(uint *)(param_1 + 1);
        if (uVar8 == 0) goto LAB_00477bbc;
        uVar18 = 0;
        uVar10 = (uint)*param_3;
        if (uVar8 != 0) {
          uVar18 = uVar10 / uVar8;
        }
        plVar17 = *(long **)(*param_1 + (ulong)(uVar10 - uVar18 * uVar8) * 8);
        goto joined_r0x00477ba4;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 2;
joined_r0x00477ba4:
  if (plVar17 == (long *)0x0) goto LAB_00477bbc;
  if (plVar17[2] == *param_3) goto LAB_00477c50;
  plVar17 = (long *)plVar17[3];
  goto joined_r0x00477ba4;
LAB_00477bbc:
  plVar17 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
  if (plVar17 != (long *)0x0) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    lVar14 = *param_3;
    plVar17[2] = lVar14;
    uVar8 = *(uint *)(param_1 + 1);
    if ((uVar8 == 0) ||
       (fVar19 = (float)NEON_ucvtf((int)param_1[2]), DAT_01d4bee0 < fVar19 / (float)uVar8)) {
      FUN_00478df0(param_1);
      uVar8 = *(uint *)(param_1 + 1);
      if (uVar8 == 0) {
        FUN_00404870(*(undefined4 *)puVar6,plVar17);
        goto LAB_00477e10;
      }
      lVar14 = plVar17[2];
    }
    uVar18 = 0;
    if (uVar8 != 0) {
      uVar18 = (uint)lVar14 / uVar8;
    }
    lVar14 = (ulong)((uint)lVar14 - uVar18 * uVar8) * 8;
    plVar17[3] = *(long *)(*param_1 + lVar14);
    *(long **)(*param_1 + lVar14) = plVar17;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
LAB_00477c50:
    puVar6 = PTR_DAT_02712a90;
    uVar8 = *(uint *)(plVar17 + 1);
    if (uVar8 != 0) {
      lVar14 = (ulong)uVar8 << 3;
      puVar7 = (undefined8 *)*plVar17;
      do {
        if ((long *)*puVar7 == plVar15) goto LAB_00477d38;
        lVar14 = lVar14 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar14 != 0);
    }
    uVar18 = *(uint *)((long)plVar17 + 0xc);
    if (uVar18 <= uVar8) {
      uVar18 = uVar18 + 1;
      puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar18 << 3);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00477e10;
      puVar9 = (undefined8 *)*plVar17;
      if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar7)) {
        uVar10 = *(uint *)(plVar17 + 1);
        if (uVar10 != 0) {
          *puVar7 = *puVar9;
          if (uVar10 != 1) {
            if (uVar10 == 2) {
              lVar12 = 1;
            }
            else {
              lVar14 = 0;
              do {
                lVar12 = lVar14;
                puVar7[lVar12 + 1] = *(undefined8 *)(*plVar17 + lVar12 * 8 + 8);
                puVar7[lVar12 + 2] = *(undefined8 *)(*plVar17 + lVar12 * 8 + 0x10);
                lVar14 = lVar12 + 2;
              } while (((ulong)uVar10 - 1) - (ulong)(~uVar10 & 1) != lVar12 + 2);
              lVar12 = lVar12 + 3;
              if ((~uVar10 & 1) == 0) goto LAB_00477cf0;
            }
            puVar7[lVar12] = *(undefined8 *)(*plVar17 + lVar12 * 8);
          }
LAB_00477cf0:
          puVar9 = (undefined8 *)*plVar17;
        }
        FUN_00404870(*(undefined4 *)puVar6,puVar9);
      }
      *plVar17 = (long)puVar7;
      *(uint *)((long)plVar17 + 0xc) = uVar18;
    }
    if (uVar8 < uVar18) {
      plVar2 = (long *)(*plVar17 + (ulong)*(uint *)(plVar17 + 1) * 8);
      *(uint *)(plVar17 + 1) = *(uint *)(plVar17 + 1) + 1;
      if (plVar2 != (long *)0x0) {
        *plVar2 = (long)plVar15;
        (**(code **)(*plVar15 + 0x10))(plVar15);
LAB_00477d38:
        iVar11 = (int)plVar15[0xd] + -1;
        if (-1 < iVar11) {
          lVar14 = plVar15[0xc];
          iVar3 = (int)param_3[9];
          iVar13 = 0;
          do {
            while( true ) {
              iVar5 = iVar11 - iVar13;
              if (iVar5 < 0) {
                iVar5 = iVar5 + 1;
              }
              iVar5 = iVar13 + (iVar5 >> 1);
              plVar17 = *(long **)(lVar14 + (long)iVar5 * 8);
              iVar4 = (int)plVar17[9];
              if ((iVar4 <= iVar3) && (plVar17 <= param_3 || iVar3 != iVar4)) break;
              iVar11 = iVar5 + -1;
              if (iVar11 < iVar13) goto LAB_00477dbc;
            }
            if ((iVar3 == iVar4 || iVar3 < iVar4) && (param_3 <= plVar17 || iVar3 != iVar4)) {
              if (lVar14 + (long)iVar5 * 8 != 0) goto LAB_00477dfc;
              break;
            }
            iVar13 = iVar5 + 1;
          } while (iVar13 <= iVar11);
        }
LAB_00477dbc:
        puVar7 = (undefined8 *)FUN_00478b70(plVar15 + 0xc,param_3);
        if (puVar7 == (undefined8 *)0x0) {
          uVar16 = 0x34;
        }
        else {
          *puVar7 = param_3;
          *(byte *)(plVar15 + 0xe) =
               ((int)param_3[9] != 1 && ((int)param_3[1] == 0 || (int)param_3[1] == 7)) |
               *(byte *)(plVar15 + 0xe);
LAB_00477dfc:
          uVar16 = 1;
        }
        goto LAB_00477e14;
      }
    }
  }
LAB_00477e10:
  uVar16 = 2;
LAB_00477e14:
  (**(code **)(*plVar15 + 0x18))(plVar15);
  return uVar16;
}


