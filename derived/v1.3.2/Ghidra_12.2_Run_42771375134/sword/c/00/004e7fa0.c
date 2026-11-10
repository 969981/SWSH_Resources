/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e7fa0; name: FUN_004e7fa0
 */


ulong * FUN_004e7fa0(undefined8 *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar2 = *(uint *)(param_1 + 2);
  lVar7 = param_1[1];
  uVar14 = 0;
  iVar8 = uVar2 - 1;
  if (-1 < iVar8) {
    do {
      while( true ) {
        iVar4 = iVar8 - uVar14;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = uVar14 + (iVar4 >> 1);
        uVar12 = *(ulong *)(lVar7 + (long)iVar4 * 8);
        if (param_2 > uVar12 || uVar12 == param_2) break;
        iVar8 = iVar4 + -1;
        if (iVar8 < (int)uVar14) goto LAB_004e8010;
      }
      if (param_2 <= uVar12) {
        return (ulong *)(lVar7 + (long)iVar4 * 8);
      }
      uVar14 = iVar4 + 1;
    } while ((int)uVar14 <= iVar8);
  }
LAB_004e8010:
  uVar13 = *(uint *)((long)param_1 + 0x14);
  if ((lVar7 == 0) || (lVar7 + (long)(int)uVar14 * 8 == 0)) {
    if (uVar13 <= uVar2) {
      uVar13 = uVar13 + 1;
      puVar5 = param_1;
      if (1 < uVar13) {
        puVar5 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 3,8);
      }
      if (puVar5 == (undefined8 *)0x0) {
        return (ulong *)0x0;
      }
      puVar6 = (undefined8 *)param_1[1];
      if ((puVar6 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
        uVar14 = *(uint *)(param_1 + 2);
        if (uVar14 != 0) {
          *puVar5 = *puVar6;
          if (uVar14 != 1) {
            if (uVar14 == 2) {
              lVar9 = 1;
            }
            else {
              lVar7 = 0;
              do {
                lVar9 = lVar7;
                puVar5[lVar9 + 1] = *(undefined8 *)(param_1[1] + lVar9 * 8 + 8);
                puVar5[lVar9 + 2] = *(undefined8 *)(param_1[1] + lVar9 * 8 + 0x10);
                lVar7 = lVar9 + 2;
              } while (((ulong)uVar14 - 1) - (ulong)(~uVar14 & 1) != lVar9 + 2);
              lVar9 = lVar9 + 3;
              if ((~uVar14 & 1) == 0) goto LAB_004e81c4;
            }
            puVar5[lVar9] = *(undefined8 *)(param_1[1] + lVar9 * 8);
          }
LAB_004e81c4:
          puVar6 = (undefined8 *)param_1[1];
        }
        if (param_1 != puVar6) {
          FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
        }
      }
      param_1[1] = puVar5;
      *(uint *)((long)param_1 + 0x14) = uVar13;
    }
    if (uVar13 <= uVar2) {
      return (ulong *)0x0;
    }
    puVar1 = (ulong *)(param_1[1] + (ulong)*(uint *)(param_1 + 2) * 8);
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) + 1;
    goto joined_r0x004e8204;
  }
  if (uVar13 <= uVar2) {
    uVar13 = uVar13 + 1;
    puVar5 = param_1;
    if (1 < uVar13) {
      puVar5 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 3,8);
    }
    if (puVar5 == (undefined8 *)0x0) {
      return (ulong *)0x0;
    }
    puVar6 = (undefined8 *)param_1[1];
    if ((puVar6 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
      uVar3 = *(uint *)(param_1 + 2);
      if (uVar3 != 0) {
        *puVar5 = *puVar6;
        if (uVar3 != 1) {
          if (uVar3 == 2) {
            lVar9 = 1;
          }
          else {
            lVar7 = 0;
            do {
              lVar9 = lVar7;
              puVar5[lVar9 + 1] = *(undefined8 *)(param_1[1] + lVar9 * 8 + 8);
              puVar5[lVar9 + 2] = *(undefined8 *)(param_1[1] + lVar9 * 8 + 0x10);
              lVar7 = lVar9 + 2;
            } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar9 + 2);
            lVar9 = lVar9 + 3;
            if ((~uVar3 & 1) == 0) goto LAB_004e80dc;
          }
          puVar5[lVar9] = *(undefined8 *)(param_1[1] + lVar9 * 8);
        }
LAB_004e80dc:
        puVar6 = (undefined8 *)param_1[1];
      }
      if (param_1 != puVar6) {
        FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
      }
    }
    param_1[1] = puVar5;
    *(uint *)((long)param_1 + 0x14) = uVar13;
  }
  if (uVar13 <= uVar2) {
    return (ulong *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 2);
  *(uint *)(param_1 + 2) = uVar2 + 1;
  if (uVar14 < uVar2) {
    puVar11 = (ulong *)(param_1[1] + (ulong)uVar2 * 8);
    do {
      puVar10 = puVar11 + -1;
      *puVar11 = *puVar10;
      puVar1 = (ulong *)(param_1[1] + (ulong)uVar14 * 8);
      puVar11 = puVar10;
    } while (puVar1 < puVar10);
  }
  else {
    puVar1 = (ulong *)(param_1[1] + (ulong)uVar14 * 8);
  }
joined_r0x004e8204:
  if (puVar1 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  *puVar1 = param_2;
  return puVar1;
}


