/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a3370; name: FUN_004a3370
 */


/* WARNING: Removing unreachable block (ram,0x004a344c) */
/* WARNING: Removing unreachable block (ram,0x004a34a4) */

undefined4 * FUN_004a3370(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar14;
  undefined8 *puVar13;
  long lVar15;
  uint uVar16;
  uint uVar17;
  
  puVar5 = PTR_DAT_02712a90;
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  uVar17 = 0;
  iVar10 = uVar2 - 1;
  if (-1 < iVar10) {
    do {
      while( true ) {
        iVar4 = iVar10 - uVar17;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = uVar17 + (iVar4 >> 1);
        uVar11 = *(ulong *)(lVar8 + (long)iVar4 * 0x10 + 8);
        if (param_2 > uVar11 || uVar11 == param_2) break;
        iVar10 = iVar4 + -1;
        if (iVar10 < (int)uVar17) goto LAB_004a33e8;
      }
      if (param_2 <= uVar11) {
        return (undefined4 *)(lVar8 + (long)iVar4 * 0x10);
      }
      uVar17 = iVar4 + 1;
    } while ((int)uVar17 <= iVar10);
  }
LAB_004a33e8:
  uVar16 = *(uint *)((long)param_1 + 0xc);
  if ((lVar8 == 0) || (lVar8 + (long)(int)uVar17 * 0x10 == 0)) {
    if (uVar16 <= uVar2) {
      uVar16 = uVar16 + 1;
      lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 4);
      if (lVar8 == 0) {
        return (undefined4 *)0x0;
      }
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar8)) {
        uVar17 = *(uint *)(param_1 + 1);
        if (uVar17 != 0) {
          if (uVar17 == 1) {
            lVar9 = 0;
LAB_004a3628:
            puVar13 = (undefined8 *)(lVar8 + lVar9 * 0x10);
            if (puVar13 != (undefined8 *)0x0) {
              *(undefined4 *)puVar13 = 0;
            }
            puVar12 = (undefined8 *)(*param_1 + lVar9 * 0x10);
            puVar13[1] = puVar12[1];
            *puVar13 = *puVar12;
          }
          else {
            lVar7 = 0;
            lVar9 = 0;
            do {
              puVar13 = (undefined8 *)(lVar8 + lVar7);
              if (puVar13 != (undefined8 *)0x0) {
                *(undefined4 *)(lVar8 + lVar7) = 0;
              }
              lVar15 = *param_1;
              puVar13[1] = ((undefined8 *)(lVar15 + lVar7))[1];
              lVar1 = lVar8 + lVar7;
              *puVar13 = *(undefined8 *)(lVar15 + lVar7);
              *(undefined4 *)(lVar1 + 0x10) = 0;
              lVar15 = *param_1 + lVar7;
              lVar7 = lVar7 + 0x20;
              *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar15 + 0x18);
              lVar9 = lVar9 + 2;
              *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
            } while ((ulong)uVar17 - ((ulong)uVar17 & 1) != lVar9);
            if ((uVar17 & 1) != 0) goto LAB_004a3628;
          }
          lVar7 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar5,lVar7);
      }
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar16;
    }
    if (uVar16 <= uVar2) {
      return (undefined4 *)0x0;
    }
    puVar6 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar6 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *puVar6 = 0;
    goto LAB_004a3684;
  }
  if (uVar16 <= uVar2) {
    uVar16 = uVar16 + 1;
    lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 4);
    if (lVar8 == 0) {
      return (undefined4 *)0x0;
    }
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar8)) {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          lVar9 = 0;
LAB_004a3514:
          puVar13 = (undefined8 *)(lVar8 + lVar9 * 0x10);
          if (puVar13 != (undefined8 *)0x0) {
            *(undefined4 *)puVar13 = 0;
          }
          puVar12 = (undefined8 *)(*param_1 + lVar9 * 0x10);
          puVar13[1] = puVar12[1];
          *puVar13 = *puVar12;
        }
        else {
          lVar7 = 0;
          lVar9 = 0;
          do {
            puVar13 = (undefined8 *)(lVar8 + lVar7);
            if (puVar13 != (undefined8 *)0x0) {
              *(undefined4 *)(lVar8 + lVar7) = 0;
            }
            lVar15 = *param_1;
            puVar13[1] = ((undefined8 *)(lVar15 + lVar7))[1];
            lVar1 = lVar8 + lVar7;
            *puVar13 = *(undefined8 *)(lVar15 + lVar7);
            *(undefined4 *)(lVar1 + 0x10) = 0;
            lVar15 = *param_1 + lVar7;
            lVar7 = lVar7 + 0x20;
            *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar15 + 0x18);
            lVar9 = lVar9 + 2;
            *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
          } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar9);
          if ((uVar3 & 1) != 0) goto LAB_004a3514;
        }
        lVar7 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar5,lVar7);
    }
    *param_1 = lVar8;
    *(uint *)((long)param_1 + 0xc) = uVar16;
  }
  if (uVar16 <= uVar2) {
    return (undefined4 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar13 = (undefined8 *)(lVar8 + (ulong)uVar2 * 0x10);
  if (puVar13 != (undefined8 *)0x0) {
    *(undefined4 *)puVar13 = 0;
    lVar8 = *param_1;
  }
  puVar12 = (undefined8 *)(lVar8 + (ulong)uVar17 * 0x10);
  if (puVar12 < puVar13) {
    do {
      puVar14 = puVar13 + -2;
      *puVar13 = *puVar14;
      puVar13[1] = puVar13[-1];
      lVar8 = *param_1;
      puVar12 = (undefined8 *)(lVar8 + (ulong)uVar17 * 0x10);
      puVar13 = puVar14;
    } while (puVar12 < puVar14);
  }
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)puVar12 = 0;
    lVar8 = *param_1;
  }
  puVar6 = (undefined4 *)(lVar8 + (ulong)uVar17 * 0x10);
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_004a3684:
  *(ulong *)(puVar6 + 2) = param_2;
  return puVar6;
}


