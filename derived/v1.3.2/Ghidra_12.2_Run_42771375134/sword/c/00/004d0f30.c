/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d0f30; name: FUN_004d0f30
 */


ulong * FUN_004d0f30(long *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  
  puVar5 = PTR_DAT_02712e28;
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  uVar15 = 0;
  iVar9 = uVar2 - 1;
  if (-1 < iVar9) {
    do {
      while( true ) {
        iVar4 = iVar9 - uVar15;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = uVar15 + (iVar4 >> 1);
        uVar13 = *(ulong *)(lVar8 + (long)iVar4 * 8);
        if (param_2 > uVar13 || uVar13 == param_2) break;
        iVar9 = iVar4 + -1;
        if (iVar9 < (int)uVar15) goto LAB_004d0fa4;
      }
      if (param_2 <= uVar13) {
        return (ulong *)(lVar8 + (long)iVar4 * 8);
      }
      uVar15 = iVar4 + 1;
    } while ((int)uVar15 <= iVar9);
  }
LAB_004d0fa4:
  uVar14 = *(uint *)((long)param_1 + 0xc);
  if ((lVar8 == 0) || (lVar8 + (long)(int)uVar15 * 8 == 0)) {
    if (uVar14 <= uVar2) {
      uVar14 = uVar14 + 4;
      puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)uVar14 << 3);
      if (puVar6 == (undefined8 *)0x0) {
        return (ulong *)0x0;
      }
      puVar7 = (undefined8 *)*param_1;
      if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
        uVar15 = *(uint *)(param_1 + 1);
        if (uVar15 != 0) {
          *puVar6 = *puVar7;
          if (uVar15 != 1) {
            if (uVar15 == 2) {
              lVar10 = 1;
            }
            else {
              lVar8 = 0;
              do {
                lVar10 = lVar8;
                puVar6[lVar10 + 1] = *(undefined8 *)(*param_1 + lVar10 * 8 + 8);
                puVar6[lVar10 + 2] = *(undefined8 *)(*param_1 + lVar10 * 8 + 0x10);
                lVar8 = lVar10 + 2;
              } while (((ulong)uVar15 - 1) - (ulong)(~uVar15 & 1) != lVar10 + 2);
              lVar10 = lVar10 + 3;
              if ((~uVar15 & 1) == 0) goto LAB_004d1108;
            }
            puVar6[lVar10] = *(undefined8 *)(*param_1 + lVar10 * 8);
          }
LAB_004d1108:
          puVar7 = (undefined8 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar5,puVar7);
      }
      *param_1 = (long)puVar6;
      *(uint *)((long)param_1 + 0xc) = uVar14;
    }
    if (uVar14 <= uVar2) {
      return (ulong *)0x0;
    }
    puVar1 = (ulong *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 8);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    goto joined_r0x004d1138;
  }
  if (uVar14 <= uVar2) {
    uVar14 = uVar14 + 4;
    puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)uVar14 << 3);
    if (puVar6 == (undefined8 *)0x0) {
      return (ulong *)0x0;
    }
    puVar7 = (undefined8 *)*param_1;
    if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) {
        *puVar6 = *puVar7;
        if (uVar3 != 1) {
          if (uVar3 == 2) {
            lVar10 = 1;
          }
          else {
            lVar8 = 0;
            do {
              lVar10 = lVar8;
              puVar6[lVar10 + 1] = *(undefined8 *)(*param_1 + lVar10 * 8 + 8);
              puVar6[lVar10 + 2] = *(undefined8 *)(*param_1 + lVar10 * 8 + 0x10);
              lVar8 = lVar10 + 2;
            } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar10 + 2);
            lVar10 = lVar10 + 3;
            if ((~uVar3 & 1) == 0) goto LAB_004d102c;
          }
          puVar6[lVar10] = *(undefined8 *)(*param_1 + lVar10 * 8);
        }
LAB_004d102c:
        puVar7 = (undefined8 *)*param_1;
      }
      FUN_00404870(*(undefined4 *)puVar5,puVar7);
    }
    *param_1 = (long)puVar6;
    *(uint *)((long)param_1 + 0xc) = uVar14;
  }
  if (uVar14 <= uVar2) {
    return (ulong *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (uVar15 < uVar2) {
    puVar12 = (ulong *)(*param_1 + (ulong)uVar2 * 8);
    do {
      puVar11 = puVar12 + -1;
      *puVar12 = *puVar11;
      puVar1 = (ulong *)(*param_1 + (ulong)uVar15 * 8);
      puVar12 = puVar11;
    } while (puVar1 < puVar11);
  }
  else {
    puVar1 = (ulong *)(*param_1 + (ulong)uVar15 * 8);
  }
joined_r0x004d1138:
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
  }
  return puVar1;
}


