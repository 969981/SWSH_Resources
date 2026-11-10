/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bafa0; name: FUN_004bafa0
 */


undefined8 FUN_004bafa0(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  
  puVar3 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 1) != 0) {
    lVar15 = *(long *)*param_1;
    if (lVar15 == 0) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        if (*(uint *)(param_1 + 1) <= uVar4) goto LAB_004bb068;
        lVar15 = ((long *)*param_1)[uVar4];
      } while (lVar15 == 0);
    }
    else {
      uVar4 = 0;
    }
    do {
      lVar6 = *(long *)(lVar15 + 8);
      lVar18 = lVar6;
      uVar11 = uVar4;
      if (lVar6 == 0) {
        do {
          uVar11 = uVar11 + 1;
          if (*(uint *)(param_1 + 1) <= uVar11) {
            lVar18 = 0;
            break;
          }
          lVar18 = *(long *)(*param_1 + (ulong)uVar11 * 8);
        } while (lVar18 == 0);
      }
      *(long *)(*param_1 + (ulong)uVar4 * 8) = lVar6;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      uVar1 = *(undefined4 *)puVar3;
      FUN_004bc0f0(lVar15);
      FUN_00404870(uVar1,lVar15);
      lVar15 = lVar18;
      uVar4 = uVar11;
    } while (lVar18 != 0);
  }
LAB_004bb068:
  puVar3 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 4) == 0) {
LAB_004bb250:
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    if (param_1[3] != 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      param_1[3] = 0;
      *(undefined4 *)((long)param_1 + 0x24) = 0;
    }
    if (param_1[6] != 0) {
      *(undefined4 *)(param_1 + 7) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      param_1[6] = 0;
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
    }
    return 1;
  }
  uVar16 = *(ulong *)param_1[3];
  if (uVar16 == 0) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      if (*(uint *)(param_1 + 4) <= uVar4) goto LAB_004bb250;
      uVar16 = ((ulong *)param_1[3])[uVar4];
    } while (uVar16 == 0);
  }
  else {
    uVar4 = 0;
  }
LAB_004bb160:
  do {
    uVar8 = *(ulong *)(uVar16 + 8);
    uVar17 = uVar8;
    uVar11 = uVar4;
    if (uVar8 == 0) {
      do {
        uVar11 = uVar11 + 1;
        if (*(uint *)(param_1 + 4) <= uVar11) {
          uVar17 = 0;
          break;
        }
        uVar17 = *(ulong *)(param_1[3] + (ulong)uVar11 * 8);
      } while (uVar17 == 0);
    }
    *(ulong *)(param_1[3] + (ulong)uVar4 * 8) = uVar8;
    *(int *)(param_1 + 5) = (int)param_1[5] + -1;
    uVar9 = *(uint *)(param_1 + 1);
    uVar4 = uVar11;
    if (uVar9 != 0) {
      uVar11 = *(uint *)(uVar16 + 0x10);
      uVar14 = 0;
      if (uVar9 != 0) {
        uVar14 = uVar11 / uVar9;
      }
      for (puVar5 = *(uint **)(*param_1 + (ulong)(uVar11 - uVar14 * uVar9) * 8);
          puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
        if (*puVar5 == uVar11) {
          uVar11 = puVar5[0xc];
          uVar9 = uVar11 - 1;
          if (-1 < (int)uVar9) {
            lVar15 = *(long *)(puVar5 + 10);
            iVar12 = 0;
            uVar14 = uVar9;
            goto LAB_004bb204;
          }
          break;
        }
      }
    }
LAB_004bb244:
    FUN_00404870(*(undefined4 *)puVar3);
    uVar16 = uVar17;
  } while (uVar17 != 0);
  goto LAB_004bb250;
LAB_004bb204:
  iVar2 = uVar14 - iVar12;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = iVar12 + (iVar2 >> 1);
  uVar8 = *(ulong *)(lVar15 + (long)iVar2 * 8);
  if (uVar8 >= uVar16 && uVar8 != uVar16) {
    uVar14 = iVar2 - 1;
    if ((int)uVar14 < iVar12) goto LAB_004bb244;
    goto LAB_004bb204;
  }
  if (uVar8 < uVar16) {
    iVar12 = iVar2 + 1;
    if ((int)uVar14 < iVar12) goto LAB_004bb244;
    goto LAB_004bb204;
  }
  puVar10 = (undefined8 *)(lVar15 + (long)iVar2 * 8);
  puVar7 = (undefined8 *)(lVar15 + (ulong)uVar11 * 8 + -8);
  if (puVar10 < puVar7) {
    uVar16 = (ulong)uVar11 * 8 + -9 + (long)iVar2 * -8;
    uVar11 = ((uint)(uVar16 >> 3) & 0x1fffffff) + 1;
    if ((uVar11 & 7) != 0) {
      lVar15 = -((ulong)uVar11 & 7);
      puVar13 = puVar10;
      do {
        puVar10 = puVar13 + 1;
        *puVar13 = *puVar10;
        lVar15 = lVar15 + 1;
        puVar13 = puVar10;
      } while (lVar15 != 0);
    }
    if (0x37 < uVar16) {
      do {
        *puVar10 = puVar10[1];
        puVar10[1] = puVar10[2];
        puVar10[2] = puVar10[3];
        puVar10[3] = puVar10[4];
        puVar10[4] = puVar10[5];
        puVar10[5] = puVar10[6];
        puVar10[6] = puVar10[7];
        puVar13 = puVar10 + 8;
        puVar10[7] = *puVar13;
        puVar10 = puVar13;
      } while (puVar13 < puVar7);
    }
    uVar9 = puVar5[0xc] - 1;
  }
  puVar5[0xc] = uVar9;
  FUN_00404870(*(undefined4 *)puVar3);
  uVar16 = uVar17;
  if (uVar17 == 0) goto LAB_004bb250;
  goto LAB_004bb160;
}


