/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004715e0; name: FUN_004715e0
 */


/* WARNING: Removing unreachable block (ram,0x004716bc) */
/* WARNING: Removing unreachable block (ram,0x00471714) */

undefined8 * FUN_004715e0(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  
  puVar5 = PTR_DAT_02712a90;
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  uVar16 = 0;
  iVar10 = uVar2 - 1;
  if (-1 < iVar10) {
    do {
      while( true ) {
        iVar4 = iVar10 - uVar16;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = uVar16 + (iVar4 >> 1);
        uVar11 = *(ulong *)(lVar8 + (long)iVar4 * 0x10 + 8);
        if (param_2 > uVar11 || uVar11 == param_2) break;
        iVar10 = iVar4 + -1;
        if (iVar10 < (int)uVar16) goto LAB_00471658;
      }
      if (param_2 <= uVar11) {
        return (undefined8 *)(lVar8 + (long)iVar4 * 0x10);
      }
      uVar16 = iVar4 + 1;
    } while ((int)uVar16 <= iVar10);
  }
LAB_00471658:
  uVar15 = *(uint *)((long)param_1 + 0xc);
  if ((lVar8 == 0) || (lVar8 + (long)(int)uVar16 * 0x10 == 0)) {
    if (uVar15 <= uVar2) {
      uVar15 = uVar15 + 1;
      lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 4);
      if (lVar8 == 0) {
        return (undefined8 *)0x0;
      }
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar8)) {
        uVar16 = *(uint *)(param_1 + 1);
        if (uVar16 != 0) {
          if (uVar16 == 1) {
            lVar9 = 0;
LAB_00471898:
            puVar6 = (undefined8 *)(lVar8 + lVar9 * 0x10);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = 0;
            }
            puVar12 = (undefined8 *)(*param_1 + lVar9 * 0x10);
            puVar6[1] = puVar12[1];
            *puVar6 = *puVar12;
          }
          else {
            lVar7 = 0;
            lVar9 = 0;
            do {
              puVar6 = (undefined8 *)(lVar8 + lVar7);
              if (puVar6 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar8 + lVar7) = 0;
              }
              lVar14 = *param_1;
              puVar6[1] = ((undefined8 *)(lVar14 + lVar7))[1];
              lVar1 = lVar8 + lVar7;
              *puVar6 = *(undefined8 *)(lVar14 + lVar7);
              *(undefined8 *)(lVar1 + 0x10) = 0;
              lVar14 = *param_1 + lVar7;
              lVar7 = lVar7 + 0x20;
              *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar14 + 0x18);
              lVar9 = lVar9 + 2;
              *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
            } while ((ulong)uVar16 - ((ulong)uVar16 & 1) != lVar9);
            if ((uVar16 & 1) != 0) goto LAB_00471898;
          }
          lVar7 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar5,lVar7);
      }
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar15;
    }
    if (uVar15 <= uVar2) {
      return (undefined8 *)0x0;
    }
    puVar6 = (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar6 = 0;
    goto LAB_004718f4;
  }
  if (uVar15 <= uVar2) {
    uVar15 = uVar15 + 1;
    lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 4);
    if (lVar8 == 0) {
      return (undefined8 *)0x0;
    }
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar8)) {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          lVar9 = 0;
LAB_00471784:
          puVar6 = (undefined8 *)(lVar8 + lVar9 * 0x10);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0;
          }
          puVar12 = (undefined8 *)(*param_1 + lVar9 * 0x10);
          puVar6[1] = puVar12[1];
          *puVar6 = *puVar12;
        }
        else {
          lVar7 = 0;
          lVar9 = 0;
          do {
            puVar6 = (undefined8 *)(lVar8 + lVar7);
            if (puVar6 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar8 + lVar7) = 0;
            }
            lVar14 = *param_1;
            puVar6[1] = ((undefined8 *)(lVar14 + lVar7))[1];
            lVar1 = lVar8 + lVar7;
            *puVar6 = *(undefined8 *)(lVar14 + lVar7);
            *(undefined8 *)(lVar1 + 0x10) = 0;
            lVar14 = *param_1 + lVar7;
            lVar7 = lVar7 + 0x20;
            *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar14 + 0x18);
            lVar9 = lVar9 + 2;
            *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
          } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar9);
          if ((uVar3 & 1) != 0) goto LAB_00471784;
        }
        lVar7 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar5,lVar7);
    }
    *param_1 = lVar8;
    *(uint *)((long)param_1 + 0xc) = uVar15;
  }
  if (uVar15 <= uVar2) {
    return (undefined8 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar6 = (undefined8 *)(lVar8 + (ulong)uVar2 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    lVar8 = *param_1;
  }
  puVar12 = (undefined8 *)(lVar8 + (ulong)uVar16 * 0x10);
  if (puVar12 < puVar6) {
    do {
      puVar13 = puVar6 + -2;
      *puVar6 = *puVar13;
      puVar6[1] = puVar6[-1];
      lVar8 = *param_1;
      puVar12 = (undefined8 *)(lVar8 + (ulong)uVar16 * 0x10);
      puVar6 = puVar13;
    } while (puVar12 < puVar13);
  }
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = 0;
    lVar8 = *param_1;
  }
  puVar6 = (undefined8 *)(lVar8 + (ulong)uVar16 * 0x10);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
LAB_004718f4:
  puVar6[1] = param_2;
  return puVar6;
}


