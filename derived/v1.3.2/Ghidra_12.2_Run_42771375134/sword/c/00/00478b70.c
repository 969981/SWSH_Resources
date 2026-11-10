/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00478b70; name: FUN_00478b70
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00478b70(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  
  puVar7 = PTR_DAT_02712a90;
  uVar1 = *(uint *)(param_1 + 1);
  lVar15 = *param_1;
  iVar10 = uVar1 - 1;
  if (iVar10 < 0) {
    lVar6 = lVar15;
    if (lVar15 == 0) goto LAB_00478d18;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x48);
    iVar12 = 0;
    do {
      while( true ) {
        iVar5 = iVar10 - iVar12;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar12 + (iVar5 >> 1);
        uVar14 = *(ulong *)(lVar15 + (long)iVar5 * 8);
        iVar3 = *(int *)(uVar14 + 0x48);
        if ((iVar2 < iVar3) || (param_2 < uVar14 && iVar2 == iVar3)) break;
        iVar12 = iVar5;
        if (((iVar2 == iVar3 || iVar2 < iVar3) && (param_2 <= uVar14 || iVar2 != iVar3)) ||
           (iVar12 = iVar5 + 1, iVar10 < iVar12)) goto joined_r0x00478de4;
      }
      iVar10 = iVar5 + -1;
    } while (iVar12 <= iVar10);
joined_r0x00478de4:
    lVar6 = lVar15 + (long)iVar12 * 8;
  }
  if (lVar6 != 0) {
    uVar16 = *(uint *)((long)param_1 + 0xc);
    if (uVar16 <= uVar1) {
      uVar16 = uVar16 + 2;
      puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 3);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar9 = (undefined8 *)*param_1;
      if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar8)) {
        uVar4 = *(uint *)(param_1 + 1);
        if (uVar4 != 0) {
          uVar14 = 0;
          puVar9 = puVar8;
          do {
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = 0;
            }
            lVar11 = uVar14 * 8;
            uVar14 = uVar14 + 1;
            *puVar9 = *(undefined8 *)(*param_1 + lVar11);
            puVar9 = puVar9 + 1;
          } while (uVar4 != uVar14);
          puVar9 = (undefined8 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar7,puVar9);
      }
      *param_1 = (long)puVar8;
      *(uint *)((long)param_1 + 0xc) = uVar16;
    }
    if (uVar16 <= uVar1) {
      return (undefined8 *)0x0;
    }
    lVar11 = *param_1;
    puVar8 = (undefined8 *)(lVar11 + (ulong)*(uint *)(param_1 + 1) * 8);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      lVar11 = *param_1;
    }
    uVar14 = (ulong)(lVar6 - lVar15) >> 3 & 0xffffffff;
    puVar9 = (undefined8 *)(lVar11 + ((ulong)(lVar6 - lVar15) >> 3 & 0xffffffff) * 8);
    if (puVar9 < puVar8) {
      do {
        puVar13 = puVar8 + -1;
        *puVar8 = *puVar13;
        lVar11 = *param_1;
        puVar9 = (undefined8 *)(lVar11 + uVar14 * 8);
        puVar8 = puVar13;
      } while (puVar9 < puVar13);
    }
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      lVar11 = *param_1;
    }
    return (undefined8 *)(lVar11 + uVar14 * 8);
  }
LAB_00478d18:
  uVar16 = *(uint *)((long)param_1 + 0xc);
  if (uVar16 <= uVar1) {
    uVar16 = uVar16 + 2;
    puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 3);
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar9 = (undefined8 *)*param_1;
    if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar8)) {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) {
        uVar14 = 0;
        puVar9 = puVar8;
        do {
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = 0;
          }
          lVar15 = uVar14 * 8;
          uVar14 = uVar14 + 1;
          *puVar9 = *(undefined8 *)(*param_1 + lVar15);
          puVar9 = puVar9 + 1;
        } while (uVar4 != uVar14);
        puVar9 = (undefined8 *)*param_1;
      }
      FUN_00404870(*(undefined4 *)puVar7,puVar9);
    }
    *param_1 = (long)puVar8;
    *(uint *)((long)param_1 + 0xc) = uVar16;
  }
  if (uVar16 <= uVar1) {
    return (undefined8 *)0x0;
  }
  puVar8 = (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 8);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (puVar8 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar8 = 0;
  return puVar8;
}


