/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044c3e0; name: FUN_0044c3e0
 */


undefined8 * FUN_0044c3e0(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  
  puVar5 = PTR_DAT_02712a90;
  uVar1 = *(uint *)(param_1 + 1);
  plVar14 = (long *)*param_1;
  iVar9 = uVar1 - 1;
  if (iVar9 < 0) {
    plVar4 = plVar14;
    if (plVar14 != (long *)0x0) goto joined_r0x0044c548;
  }
  else {
    iVar10 = 0;
    do {
      while( true ) {
        iVar3 = iVar9 - iVar10;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar10 + (iVar3 >> 1);
        uVar15 = *(uint *)(plVar14[iVar3] + 0x10);
        if (param_2 > uVar15 || uVar15 == param_2) break;
        iVar9 = iVar3 + -1;
        if (iVar9 < iVar10) goto LAB_0044c454;
      }
      plVar4 = plVar14 + iVar3;
      if (param_2 <= uVar15) goto joined_r0x0044c548;
      iVar10 = iVar3 + 1;
    } while (iVar10 <= iVar9);
LAB_0044c454:
    plVar4 = plVar14 + iVar10;
joined_r0x0044c548:
    if (plVar4 != (long *)0x0) {
      uVar15 = *(uint *)((long)param_1 + 0xc);
      if (uVar1 < uVar15) goto LAB_0044c4ec;
      uVar15 = uVar15 + 1;
      puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 3);
      if (puVar7 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar8 = (undefined8 *)*param_1;
      if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
        uVar2 = *(uint *)(param_1 + 1);
        if (uVar2 != 0) {
          *puVar7 = *puVar8;
          if (uVar2 != 1) {
            if (uVar2 == 2) {
              lVar11 = 1;
            }
            else {
              lVar6 = 0;
              do {
                lVar11 = lVar6;
                puVar7[lVar11 + 1] = *(undefined8 *)(*param_1 + lVar11 * 8 + 8);
                puVar7[lVar11 + 2] = *(undefined8 *)(*param_1 + lVar11 * 8 + 0x10);
                lVar6 = lVar11 + 2;
              } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar11 + 2);
              lVar11 = lVar11 + 3;
              if ((~uVar2 & 1) == 0) goto LAB_0044c4d8;
            }
            puVar7[lVar11] = *(undefined8 *)(*param_1 + lVar11 * 8);
          }
LAB_0044c4d8:
          puVar8 = (undefined8 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar5,puVar8);
      }
      *param_1 = (long)puVar7;
      *(uint *)((long)param_1 + 0xc) = uVar15;
LAB_0044c4ec:
      if (uVar15 <= uVar1) {
        return (undefined8 *)0x0;
      }
      uVar1 = *(uint *)(param_1 + 1);
      uVar13 = (ulong)((long)plVar4 - (long)plVar14) >> 3;
      *(uint *)(param_1 + 1) = uVar1 + 1;
      if (uVar1 <= (uint)uVar13) {
        return (undefined8 *)(*param_1 + (uVar13 & 0xffffffff) * 8);
      }
      puVar7 = (undefined8 *)(*param_1 + (ulong)uVar1 * 8);
      do {
        puVar12 = puVar7 + -1;
        *puVar7 = *puVar12;
        puVar8 = (undefined8 *)
                 (*param_1 + ((ulong)((long)plVar4 - (long)plVar14) >> 3 & 0xffffffff) * 8);
        puVar7 = puVar12;
      } while (puVar8 < puVar12);
      return puVar8;
    }
  }
  uVar15 = *(uint *)((long)param_1 + 0xc);
  if (uVar1 < uVar15) goto LAB_0044c5dc;
  uVar15 = uVar15 + 1;
  puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 3);
  if (puVar7 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar8 = (undefined8 *)*param_1;
  if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      *puVar7 = *puVar8;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar11 = 1;
        }
        else {
          lVar6 = 0;
          do {
            lVar11 = lVar6;
            puVar7[lVar11 + 1] = *(undefined8 *)(*param_1 + lVar11 * 8 + 8);
            puVar7[lVar11 + 2] = *(undefined8 *)(*param_1 + lVar11 * 8 + 0x10);
            lVar6 = lVar11 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar11 + 2);
          lVar11 = lVar11 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_0044c5c8;
        }
        puVar7[lVar11] = *(undefined8 *)(*param_1 + lVar11 * 8);
      }
LAB_0044c5c8:
      puVar8 = (undefined8 *)*param_1;
    }
    FUN_00404870(*(undefined4 *)puVar5,puVar8);
  }
  *param_1 = (long)puVar7;
  *(uint *)((long)param_1 + 0xc) = uVar15;
LAB_0044c5dc:
  if (uVar1 < uVar15) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    return (undefined8 *)(*param_1 + (ulong)uVar1 * 8);
  }
  return (undefined8 *)0x0;
}


