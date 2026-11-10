/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046a2b0; name: FUN_0046a2b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0046a2b0(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar13 = param_1[1];
  iVar7 = uVar1 - 1;
  if (iVar7 < 0) {
    lVar11 = lVar13;
    if (lVar13 != 0) goto joined_r0x0046a324;
  }
  else {
    iVar8 = 0;
    do {
      while( true ) {
        iVar3 = iVar7 - iVar8;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar8 + (iVar3 >> 1);
        uVar12 = *(ulong *)(lVar13 + (long)iVar3 * 8);
        if (param_2 > uVar12 || uVar12 == param_2) break;
        iVar7 = iVar3 + -1;
        if (iVar7 < iVar8) goto LAB_0046a320;
      }
      if (param_2 <= uVar12) {
        lVar11 = lVar13 + (long)iVar3 * 8;
        goto joined_r0x0046a324;
      }
      iVar8 = iVar3 + 1;
    } while (iVar8 <= iVar7);
LAB_0046a320:
    lVar11 = lVar13 + (long)iVar8 * 8;
joined_r0x0046a324:
    if (lVar11 != 0) {
      uVar14 = *(uint *)((long)param_1 + 0x14);
      if (uVar1 < uVar14) goto LAB_0046a3bc;
      uVar14 = uVar14 + 1;
      puVar5 = param_1;
      if (1 < uVar14) {
        puVar5 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 << 3,8);
      }
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar6 = (undefined8 *)param_1[1];
      if ((puVar6 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
        uVar2 = *(uint *)(param_1 + 2);
        if (uVar2 != 0) {
          *puVar5 = *puVar6;
          if (uVar2 != 1) {
            if (uVar2 == 2) {
              lVar9 = 1;
            }
            else {
              lVar4 = 0;
              do {
                lVar9 = lVar4;
                puVar5[lVar9 + 1] = *(undefined8 *)(param_1[1] + lVar9 * 8 + 8);
                puVar5[lVar9 + 2] = *(undefined8 *)(param_1[1] + lVar9 * 8 + 0x10);
                lVar4 = lVar9 + 2;
              } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar9 + 2);
              lVar9 = lVar9 + 3;
              if ((~uVar2 & 1) == 0) goto LAB_0046a398;
            }
            puVar5[lVar9] = *(undefined8 *)(param_1[1] + lVar9 * 8);
          }
LAB_0046a398:
          puVar6 = (undefined8 *)param_1[1];
        }
        if (param_1 != puVar6) {
          FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
        }
      }
      param_1[1] = puVar5;
      *(uint *)((long)param_1 + 0x14) = uVar14;
LAB_0046a3bc:
      if (uVar14 <= uVar1) {
        return (undefined8 *)0x0;
      }
      uVar1 = *(uint *)(param_1 + 2);
      uVar12 = (ulong)(lVar11 - lVar13) >> 3;
      *(uint *)(param_1 + 2) = uVar1 + 1;
      if (uVar1 <= (uint)uVar12) {
        return (undefined8 *)(param_1[1] + (uVar12 & 0xffffffff) * 8);
      }
      puVar5 = (undefined8 *)(param_1[1] + (ulong)uVar1 * 8);
      do {
        puVar10 = puVar5 + -1;
        *puVar5 = *puVar10;
        puVar6 = (undefined8 *)(param_1[1] + ((ulong)(lVar11 - lVar13) >> 3 & 0xffffffff) * 8);
        puVar5 = puVar10;
      } while (puVar6 < puVar10);
      return puVar6;
    }
  }
  uVar14 = *(uint *)((long)param_1 + 0x14);
  if (uVar1 < uVar14) goto LAB_0046a508;
  uVar14 = uVar14 + 1;
  puVar5 = param_1;
  if (1 < uVar14) {
    puVar5 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 << 3,8);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar6 = (undefined8 *)param_1[1];
  if ((puVar6 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
    uVar2 = *(uint *)(param_1 + 2);
    if (uVar2 != 0) {
      *puVar5 = *puVar6;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar11 = 1;
        }
        else {
          lVar13 = 0;
          do {
            lVar11 = lVar13;
            puVar5[lVar11 + 1] = *(undefined8 *)(param_1[1] + lVar11 * 8 + 8);
            puVar5[lVar11 + 2] = *(undefined8 *)(param_1[1] + lVar11 * 8 + 0x10);
            lVar13 = lVar11 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar11 + 2);
          lVar11 = lVar11 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_0046a4e4;
        }
        puVar5[lVar11] = *(undefined8 *)(param_1[1] + lVar11 * 8);
      }
LAB_0046a4e4:
      puVar6 = (undefined8 *)param_1[1];
    }
    if (param_1 != puVar6) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
  }
  param_1[1] = puVar5;
  *(uint *)((long)param_1 + 0x14) = uVar14;
LAB_0046a508:
  if (uVar1 < uVar14) {
    uVar1 = *(uint *)(param_1 + 2);
    *(uint *)(param_1 + 2) = uVar1 + 1;
    return (undefined8 *)(param_1[1] + (ulong)uVar1 * 8);
  }
  return (undefined8 *)0x0;
}


