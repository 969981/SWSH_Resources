/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00491cc0; name: FUN_00491cc0
 */


ulong * FUN_00491cc0(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  
  puVar7 = PTR_DAT_02712a90;
  uVar4 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  uVar18 = 0;
  iVar11 = uVar4 - 1;
  if (-1 < iVar11) {
    do {
      while( true ) {
        iVar6 = iVar11 - uVar18;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 1;
        }
        uVar17 = uVar18 + (iVar6 >> 1);
        uVar15 = *(ulong *)(lVar10 + (-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 |
                                     (ulong)uVar17 << 4));
        if (param_2 > uVar15 || uVar15 == param_2) break;
        iVar11 = uVar17 - 1;
        if (iVar11 < (int)uVar18) goto LAB_00491d38;
      }
      if (param_2 <= uVar15) {
        return (ulong *)(lVar10 + (long)(int)uVar17 * 0x10);
      }
      uVar18 = uVar17 + 1;
    } while ((int)uVar18 <= iVar11);
  }
LAB_00491d38:
  uVar17 = *(uint *)((long)param_1 + 0xc);
  if ((lVar10 == 0) || (lVar10 + (long)(int)uVar18 * 0x10 == 0)) {
    if (uVar17 <= uVar4) {
      uVar17 = uVar17 + 1;
      puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar17 << 4);
      if (puVar8 == (undefined8 *)0x0) {
        return (ulong *)0x0;
      }
      puVar9 = (undefined8 *)*param_1;
      if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar8)) {
        uVar18 = *(uint *)(param_1 + 1);
        if (uVar18 != 0) {
          puVar8[1] = puVar9[1];
          *puVar8 = *puVar9;
          if (uVar18 != 1) {
            uVar5 = uVar18 + 3 & 3;
            if ((ulong)uVar18 - 2 < 3) {
              lVar12 = 1;
            }
            else {
              lVar12 = 1;
              lVar10 = 0x40;
              do {
                lVar16 = *param_1;
                puVar9 = (undefined8 *)((long)puVar8 + lVar10);
                puVar9[-5] = *(undefined8 *)(lVar16 + lVar10 + -0x28);
                puVar9[-6] = *(undefined8 *)(lVar16 + lVar10 + -0x30);
                lVar16 = *param_1;
                puVar9[-3] = *(undefined8 *)(lVar16 + lVar10 + -0x18);
                puVar9[-4] = *(undefined8 *)(lVar16 + lVar10 + -0x20);
                lVar16 = *param_1;
                puVar9[-1] = *(undefined8 *)(lVar16 + lVar10 + -8);
                puVar9[-2] = *(undefined8 *)(lVar16 + lVar10 + -0x10);
                puVar1 = (undefined8 *)(*param_1 + lVar10);
                lVar10 = lVar10 + 0x40;
                *puVar9 = *puVar1;
                lVar12 = lVar12 + 4;
                puVar9[1] = puVar1[1];
              } while ((ulong)uVar18 - (ulong)uVar5 != lVar12);
            }
            if (uVar5 != 0) {
              lVar12 = lVar12 << 4;
              lVar10 = -(ulong)uVar5;
              do {
                puVar9 = (undefined8 *)(*param_1 + lVar12);
                puVar1 = (undefined8 *)((long)puVar8 + lVar12);
                lVar12 = lVar12 + 0x10;
                puVar1[1] = puVar9[1];
                lVar10 = lVar10 + 1;
                *puVar1 = *puVar9;
              } while (lVar10 != 0);
            }
          }
          puVar9 = (undefined8 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar7,puVar9);
      }
      *param_1 = (long)puVar8;
      *(uint *)((long)param_1 + 0xc) = uVar17;
    }
    if (uVar17 <= uVar4) {
      return (ulong *)0x0;
    }
    puVar2 = (ulong *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  else {
    if (uVar17 <= uVar4) {
      uVar17 = uVar17 + 1;
      puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar17 << 4);
      if (puVar8 == (undefined8 *)0x0) {
        return (ulong *)0x0;
      }
      puVar9 = (undefined8 *)*param_1;
      if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar8)) {
        uVar5 = *(uint *)(param_1 + 1);
        if (uVar5 != 0) {
          puVar8[1] = puVar9[1];
          *puVar8 = *puVar9;
          if (uVar5 != 1) {
            uVar3 = uVar5 + 3 & 3;
            if ((ulong)uVar5 - 2 < 3) {
              lVar12 = 1;
            }
            else {
              lVar12 = 1;
              lVar10 = 0x40;
              do {
                lVar16 = *param_1;
                puVar9 = (undefined8 *)((long)puVar8 + lVar10);
                puVar9[-5] = *(undefined8 *)(lVar16 + lVar10 + -0x28);
                puVar9[-6] = *(undefined8 *)(lVar16 + lVar10 + -0x30);
                lVar16 = *param_1;
                puVar9[-3] = *(undefined8 *)(lVar16 + lVar10 + -0x18);
                puVar9[-4] = *(undefined8 *)(lVar16 + lVar10 + -0x20);
                lVar16 = *param_1;
                puVar9[-1] = *(undefined8 *)(lVar16 + lVar10 + -8);
                puVar9[-2] = *(undefined8 *)(lVar16 + lVar10 + -0x10);
                puVar1 = (undefined8 *)(*param_1 + lVar10);
                lVar10 = lVar10 + 0x40;
                *puVar9 = *puVar1;
                lVar12 = lVar12 + 4;
                puVar9[1] = puVar1[1];
              } while ((ulong)uVar5 - (ulong)uVar3 != lVar12);
            }
            if (uVar3 != 0) {
              lVar12 = lVar12 << 4;
              lVar10 = -(ulong)uVar3;
              do {
                puVar9 = (undefined8 *)(*param_1 + lVar12);
                puVar1 = (undefined8 *)((long)puVar8 + lVar12);
                lVar12 = lVar12 + 0x10;
                puVar1[1] = puVar9[1];
                lVar10 = lVar10 + 1;
                *puVar1 = *puVar9;
              } while (lVar10 != 0);
            }
          }
          puVar9 = (undefined8 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar7,puVar9);
      }
      *param_1 = (long)puVar8;
      *(uint *)((long)param_1 + 0xc) = uVar17;
    }
    if (uVar17 <= uVar4) {
      return (ulong *)0x0;
    }
    uVar4 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar4 + 1;
    if (uVar18 < uVar4) {
      puVar14 = (ulong *)(*param_1 + (ulong)uVar4 * 0x10);
      do {
        puVar13 = puVar14 + -2;
        *puVar14 = *puVar13;
        puVar14[1] = puVar14[-1];
        puVar2 = (ulong *)(*param_1 + (ulong)uVar18 * 0x10);
        puVar14 = puVar13;
      } while (puVar2 < puVar13);
    }
    else {
      puVar2 = (ulong *)(*param_1 + (ulong)uVar18 * 0x10);
    }
  }
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = param_2;
  }
  return puVar2;
}


