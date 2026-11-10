/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00444f50; name: FUN_00444f50
 */


int FUN_00444f50(long param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint *puVar18;
  bool bVar19;
  uint *puVar20;
  float fVar21;
  long local_80;
  uint local_78;
  int local_64;
  
  fVar4 = DAT_01d4bee0;
  if ((*(int *)(param_3 + 0x48) != 0) ||
     (uVar8 = (ulong)*(uint *)(param_3 + 0x4c), *(uint *)(param_3 + 0x4c) == 0)) {
    return 1;
  }
  puVar20 = *(uint **)(param_3 + 0x30);
  if (puVar20 != (uint *)0x0) {
    iVar12 = 0;
    uVar17 = 0;
    pMVar1 = (MutexType *)(param_1 + 0x48);
    local_64 = 0x34;
    uVar2 = *puVar20;
    puVar18 = puVar20;
    do {
      if (uVar2 != 0) {
        nn::os::LockMutex(pMVar1);
        uVar2 = *puVar18;
        uVar7 = *(uint *)(param_1 + 0x78);
        if ((uVar7 == 0) ||
           (fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x80)),
           fVar4 < fVar21 / (float)uVar7)) {
          FUN_0044a360(param_1 + 0x68);
          uVar7 = *(uint *)(param_1 + 0x78);
          if (uVar7 == 0) goto LAB_00445220;
        }
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar2 / uVar7;
        }
        uVar8 = (ulong)(uVar2 - uVar3 * uVar7);
        for (plVar9 = *(long **)(*(long *)(param_1 + 0x70) + uVar8 * 8); plVar9 != (long *)0x0;
            plVar9 = (long *)*plVar9) {
          if (*(uint *)(plVar9 + 1) == uVar2) {
            plVar11 = plVar9 + 2;
            if (*plVar11 != 0) {
              plVar11 = plVar9 + 6;
              goto LAB_00445110;
            }
            bVar19 = false;
            goto LAB_004450b0;
          }
        }
        puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
        if (puVar6 == (undefined8 *)0x0) goto LAB_00445220;
        lVar13 = uVar8 * 8;
        bVar19 = true;
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar13);
        *(uint *)(puVar6 + 1) = uVar2;
        *puVar6 = uVar10;
        plVar11 = puVar6 + 2;
        *plVar11 = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined4 *)(puVar6 + 6) = 1;
        *(undefined4 *)(puVar6 + 3) = 0;
        *(undefined8 **)(*(long *)(param_1 + 0x70) + lVar13) = puVar6;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
LAB_004450b0:
        *(uint *)((long)plVar11 + 0x24) = *puVar18;
        local_78 = puVar20[uVar17 * 3 + 2];
        local_80 = param_2 + (ulong)puVar20[uVar17 * 3 + 1];
        lVar13 = FUN_00449ca0(plVar11 + 2,param_3,&local_80);
        puVar5 = PTR_DAT_02712a90;
        if (lVar13 == 0) {
          uVar2 = *(uint *)(param_1 + 0x78);
          if (uVar2 != 0) {
            uVar7 = *puVar18;
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = uVar7 / uVar2;
            }
            puVar6 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)(uVar7 - uVar3 * uVar2) * 8);
            puVar15 = (undefined8 *)*puVar6;
            if (puVar15 != (undefined8 *)0x0) {
              local_64 = 0x34;
              puVar14 = (undefined8 *)0x0;
              goto LAB_004451b0;
            }
          }
          local_64 = 0x34;
          goto LAB_00445220;
        }
        if (bVar19) {
          local_64 = 1;
        }
        else {
          plVar11 = plVar11 + 4;
          local_64 = 1;
LAB_00445110:
          *(int *)plVar11 = (int)*plVar11 + 1;
        }
        nn::os::UnlockMutex(pMVar1);
        iVar12 = *(int *)(param_3 + 0x48);
        uVar8 = (ulong)*(uint *)(param_3 + 0x4c);
      }
      uVar17 = uVar17 + 1;
      iVar12 = iVar12 + 1;
      *(int *)(param_3 + 0x48) = iVar12;
      if (uVar8 <= uVar17) goto joined_r0x00445234;
      puVar20 = *(uint **)(param_3 + 0x30);
      puVar18 = puVar20 + uVar17 * 3;
      uVar2 = *puVar18;
    } while( true );
  }
  local_64 = 0x34;
  goto LAB_00445240;
  while( true ) {
    puVar16 = (undefined8 *)*puVar15;
    puVar14 = puVar15;
    puVar15 = puVar16;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_004451b0:
    if (*(uint *)(puVar15 + 1) == uVar7) {
      if (puVar14 != (undefined8 *)0x0) {
        puVar6 = puVar14;
      }
      *puVar6 = *puVar15;
      if (puVar15[4] != 0) {
        *(undefined4 *)(puVar15 + 5) = 0;
        FUN_00404870(*(undefined4 *)puVar5);
        puVar15[4] = 0;
        *(undefined4 *)((long)puVar15 + 0x2c) = 0;
      }
      FUN_00404870(*(undefined4 *)puVar5,puVar15);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      local_64 = 0x34;
      break;
    }
  }
LAB_00445220:
  nn::os::UnlockMutex(pMVar1);
  uVar8 = (ulong)*(uint *)(param_3 + 0x4c);
joined_r0x00445234:
  if (local_64 == 1) {
    return 1;
  }
  if ((int)uVar8 == (int)uVar17) {
    return 1;
  }
LAB_00445240:
  FUN_00442430(param_1,param_3);
  return local_64;
}


