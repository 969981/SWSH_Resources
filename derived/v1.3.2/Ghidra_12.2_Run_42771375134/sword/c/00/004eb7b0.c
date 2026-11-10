/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eb7b0; name: FUN_004eb7b0
 */


int FUN_004eb7b0(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  float fVar14;
  
  lVar13 = *param_2;
  uVar4 = *(uint *)(param_1 + 0x38);
  plVar1 = (long *)(param_1 + 0x30);
  if (uVar4 != 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (uint)lVar13 / uVar4;
    }
    for (plVar9 = *(long **)(*plVar1 + (ulong)((uint)lVar13 - uVar2 * uVar4) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[3]) {
      if (*plVar9 == lVar13) {
        puVar12 = (uint *)(plVar9 + 1);
        plVar6 = plVar9 + 2;
        lVar13 = plVar9[2];
        uVar4 = 0;
        if ((int)plVar9[1] != 0) goto LAB_004eb8cc;
        goto LAB_004eb8f8;
      }
    }
  }
  plVar9 = (long *)FUN_004ee280(param_1 + 0x80);
  if (plVar9 == (long *)0x0) {
LAB_004eba2c:
    lVar13 = param_2[2];
    if (lVar13 == 0) {
      iVar3 = 2;
    }
    else {
      if ((int)param_2[1] != 0) {
        FUN_004e6bc0(lVar13 + 0x68);
        if (1 < *(uint *)(param_2 + 1)) {
          uVar11 = 1;
          lVar13 = 0xd8;
          do {
            FUN_004e6bc0(param_2[2] + lVar13);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x70;
          } while (uVar11 < *(uint *)(param_2 + 1));
        }
        lVar13 = param_2[2];
      }
      FUN_004047f0(*(undefined4 *)PTR_DAT_02713640,lVar13);
      iVar3 = 2;
      param_2[2] = 0;
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  else {
    *plVar9 = lVar13;
    puVar12 = (uint *)(plVar9 + 1);
    *puVar12 = 0;
    plVar6 = plVar9 + 2;
    *plVar6 = 0;
    plVar9[3] = 0;
    uVar4 = *(uint *)(param_1 + 0x38);
    if ((uVar4 == 0) ||
       (fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x40)),
       DAT_01d4bee0 < fVar14 / (float)uVar4)) {
      FUN_004ee550(plVar1);
      uVar4 = *(uint *)(param_1 + 0x38);
      if (uVar4 == 0) {
        FUN_004ebaf0(param_1 + 0x80,plVar9);
        goto LAB_004eba2c;
      }
      lVar13 = *plVar9;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (uint)lVar13 / uVar4;
    }
    lVar13 = (ulong)((uint)lVar13 - uVar2 * uVar4) * 8;
    plVar9[3] = *(long *)(*plVar1 + lVar13);
    *(long **)(*plVar1 + lVar13) = plVar9;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    lVar13 = plVar9[2];
    if ((int)plVar9[1] == 0) {
      uVar4 = 0;
    }
    else {
LAB_004eb8cc:
      lVar10 = 0;
      uVar11 = 0;
      do {
        FUN_004ebc30(param_1,lVar13 + lVar10);
        uVar4 = *puVar12;
        lVar13 = *plVar6;
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x70;
      } while (uVar11 < uVar4);
    }
LAB_004eb8f8:
    if (lVar13 != 0) {
      if (uVar4 != 0) {
        FUN_004e6bc0(lVar13 + 0x68);
        if (1 < *puVar12) {
          uVar11 = 1;
          lVar13 = 0xd8;
          do {
            FUN_004e6bc0(*plVar6 + lVar13);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x70;
          } while (uVar11 < *puVar12);
        }
        lVar13 = *plVar6;
      }
      FUN_004047f0(*(undefined4 *)PTR_DAT_02713640,lVar13);
      *plVar6 = 0;
      *puVar12 = 0;
    }
    *plVar6 = param_2[2];
    lVar13 = 0;
    uVar11 = 0;
    *puVar12 = *(uint *)(param_2 + 1);
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    do {
      if (*puVar12 <= uVar11) {
        return 1;
      }
      iVar3 = FUN_004ebf80(param_1,*plVar6 + lVar13);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x70;
    } while (iVar3 == 1);
    if ((int)uVar11 != 0) {
      lVar13 = 0;
      uVar11 = uVar11 & 0xffffffff;
      do {
        FUN_004ebc30(param_1,*plVar6 + lVar13);
        lVar13 = lVar13 + 0x70;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    if (uVar4 != 0) {
      uVar2 = 0;
      uVar5 = (uint)*plVar9;
      if (uVar4 != 0) {
        uVar2 = uVar5 / uVar4;
      }
      plVar1 = (long *)(*plVar1 + (ulong)(uVar5 - uVar2 * uVar4) * 8);
      plVar6 = (long *)*plVar1;
      if (plVar6 != (long *)0x0) {
        plVar8 = (long *)0x0;
        do {
          plVar7 = plVar6;
          if (*plVar7 == *plVar9) {
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 3;
            }
            *plVar1 = plVar7[3];
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
            break;
          }
          plVar6 = (long *)plVar7[3];
          plVar8 = plVar7;
        } while ((long *)plVar7[3] != (long *)0x0);
      }
    }
    FUN_004ebaf0(param_1 + 0x80,plVar9);
  }
  return iVar3;
}


