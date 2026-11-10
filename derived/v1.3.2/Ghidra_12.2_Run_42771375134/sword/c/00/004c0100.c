/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c0100; name: FUN_004c0100
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_004c0100(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  
  puVar4 = PTR_DAT_02712a90;
  uVar1 = *(uint *)(param_1 + 1);
  lVar14 = *param_1;
  iVar8 = uVar1 - 1;
  if (iVar8 < 0) {
    lVar12 = lVar14;
    if (lVar14 != 0) goto joined_r0x004c0268;
  }
  else {
    iVar9 = 0;
    do {
      while( true ) {
        iVar3 = iVar8 - iVar9;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar9 + (iVar3 >> 1);
        uVar13 = *(ulong *)(*(long *)(lVar14 + (long)iVar3 * 8) + 0x20);
        if (uVar13 < param_2) break;
        iVar9 = iVar3;
        if ((uVar13 == param_2) || (iVar9 = iVar3 + 1, iVar8 < iVar9)) goto joined_r0x004c0328;
      }
      iVar8 = iVar3 + -1;
    } while (iVar9 <= iVar8);
joined_r0x004c0328:
    lVar12 = lVar14 + (long)iVar9 * 8;
joined_r0x004c0268:
    if (lVar12 != 0) {
      uVar15 = *(uint *)((long)param_1 + 0xc);
      if (uVar1 < uVar15) goto LAB_004c0210;
      uVar15 = uVar15 + 1;
      puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 3);
      if (puVar6 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)*param_1;
      if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
        uVar2 = *(uint *)(param_1 + 1);
        if (uVar2 != 0) {
          *puVar6 = *puVar7;
          if (uVar2 != 1) {
            if (uVar2 == 2) {
              lVar10 = 1;
            }
            else {
              lVar5 = 0;
              do {
                lVar10 = lVar5;
                puVar6[lVar10 + 1] = *(undefined8 *)(*param_1 + lVar10 * 8 + 8);
                puVar6[lVar10 + 2] = *(undefined8 *)(*param_1 + lVar10 * 8 + 0x10);
                lVar5 = lVar10 + 2;
              } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar10 + 2);
              lVar10 = lVar10 + 3;
              if ((~uVar2 & 1) == 0) goto LAB_004c01fc;
            }
            puVar6[lVar10] = *(undefined8 *)(*param_1 + lVar10 * 8);
          }
LAB_004c01fc:
          puVar7 = (undefined8 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar4,puVar7);
      }
      *param_1 = (long)puVar6;
      *(uint *)((long)param_1 + 0xc) = uVar15;
LAB_004c0210:
      if (uVar15 <= uVar1) {
        return (undefined8 *)0x0;
      }
      uVar1 = *(uint *)(param_1 + 1);
      uVar13 = (ulong)(lVar12 - lVar14) >> 3;
      *(uint *)(param_1 + 1) = uVar1 + 1;
      if (uVar1 <= (uint)uVar13) {
        return (undefined8 *)(*param_1 + (uVar13 & 0xffffffff) * 8);
      }
      puVar6 = (undefined8 *)(*param_1 + (ulong)uVar1 * 8);
      do {
        puVar11 = puVar6 + -1;
        *puVar6 = *puVar11;
        puVar7 = (undefined8 *)(*param_1 + ((ulong)(lVar12 - lVar14) >> 3 & 0xffffffff) * 8);
        puVar6 = puVar11;
      } while (puVar7 < puVar11);
      return puVar7;
    }
  }
  uVar15 = *(uint *)((long)param_1 + 0xc);
  if (uVar1 < uVar15) goto LAB_004c02fc;
  uVar15 = uVar15 + 1;
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 3);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      *puVar6 = *puVar7;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar12 = 1;
        }
        else {
          lVar14 = 0;
          do {
            lVar12 = lVar14;
            puVar6[lVar12 + 1] = *(undefined8 *)(*param_1 + lVar12 * 8 + 8);
            puVar6[lVar12 + 2] = *(undefined8 *)(*param_1 + lVar12 * 8 + 0x10);
            lVar14 = lVar12 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar12 + 2);
          lVar12 = lVar12 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_004c02e8;
        }
        puVar6[lVar12] = *(undefined8 *)(*param_1 + lVar12 * 8);
      }
LAB_004c02e8:
      puVar7 = (undefined8 *)*param_1;
    }
    FUN_00404870(*(undefined4 *)puVar4,puVar7);
  }
  *param_1 = (long)puVar6;
  *(uint *)((long)param_1 + 0xc) = uVar15;
LAB_004c02fc:
  if (uVar1 < uVar15) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    return (undefined8 *)(*param_1 + (ulong)uVar1 * 8);
  }
  return (undefined8 *)0x0;
}


