/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b7550; name: FUN_004b7550
 */


uint * FUN_004b7550(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  uint uVar13;
  uint uVar14;
  
  puVar4 = PTR_DAT_02712a90;
  uVar1 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  uVar14 = 0;
  iVar9 = uVar1 - 1;
  if (-1 < iVar9) {
    do {
      while( true ) {
        iVar3 = iVar9 - uVar14;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        uVar13 = uVar14 + (iVar3 >> 1);
        uVar2 = *(uint *)(lVar7 + (-(ulong)(uVar13 >> 0x1f) & 0xfffffff000000000 |
                                  (ulong)uVar13 << 4));
        if (param_2 > uVar2 || uVar2 == param_2) break;
        iVar9 = uVar13 - 1;
        if (iVar9 < (int)uVar14) goto LAB_004b75c8;
      }
      if (param_2 <= uVar2) {
        return (uint *)(lVar7 + (long)(int)uVar13 * 0x10);
      }
      uVar14 = uVar13 + 1;
    } while ((int)uVar14 <= iVar9);
  }
LAB_004b75c8:
  uVar13 = *(uint *)((long)param_1 + 0xc);
  if ((lVar7 == 0) || (lVar7 + (long)(int)uVar14 * 0x10 == 0)) {
    if (uVar13 <= uVar1) {
      uVar13 = uVar13 + 1;
      lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 4);
      if (lVar7 == 0) {
        return (uint *)0x0;
      }
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar7)) {
        uVar8 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar6 = 0;
          do {
            puVar11 = (undefined8 *)(lVar7 + lVar6);
            if (puVar11 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar7 + lVar6 + 8) = 0;
            }
            puVar10 = (undefined8 *)(*param_1 + lVar6);
            lVar6 = lVar6 + 0x10;
            puVar11[1] = puVar10[1];
            uVar8 = uVar8 - 1;
            *puVar11 = *puVar10;
          } while (uVar8 != 0);
          lVar6 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar4,lVar6);
      }
      *param_1 = lVar7;
      *(uint *)((long)param_1 + 0xc) = uVar13;
    }
    if (uVar13 <= uVar1) {
      return (uint *)0x0;
    }
    uVar14 = *(uint *)(param_1 + 1);
    puVar5 = (uint *)(*param_1 + (ulong)uVar14 * 0x10);
    *(uint *)(param_1 + 1) = uVar14 + 1;
    if (puVar5 == (uint *)0x0) {
      return (uint *)0x0;
    }
    *(undefined8 *)(*param_1 + (ulong)uVar14 * 0x10 + 8) = 0;
  }
  else {
    if (uVar13 <= uVar1) {
      uVar13 = uVar13 + 1;
      lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 4);
      if (lVar7 == 0) {
        return (uint *)0x0;
      }
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar7)) {
        uVar8 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar6 = 0;
          do {
            puVar11 = (undefined8 *)(lVar7 + lVar6);
            if (puVar11 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar7 + lVar6 + 8) = 0;
            }
            puVar10 = (undefined8 *)(*param_1 + lVar6);
            lVar6 = lVar6 + 0x10;
            puVar11[1] = puVar10[1];
            uVar8 = uVar8 - 1;
            *puVar11 = *puVar10;
          } while (uVar8 != 0);
          lVar6 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar4,lVar6);
      }
      *param_1 = lVar7;
      *(uint *)((long)param_1 + 0xc) = uVar13;
    }
    if (uVar13 <= uVar1) {
      return (uint *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar11 = (undefined8 *)(lVar7 + (ulong)uVar1 * 0x10);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar7 + (ulong)uVar1 * 0x10 + 8) = 0;
      lVar7 = *param_1;
    }
    uVar8 = (ulong)uVar14;
    puVar10 = (undefined8 *)(lVar7 + (ulong)uVar14 * 0x10);
    if (puVar10 < puVar11) {
      do {
        puVar12 = puVar11 + -2;
        *puVar11 = *puVar12;
        puVar11[1] = puVar11[-1];
        lVar7 = *param_1;
        puVar10 = (undefined8 *)(lVar7 + uVar8 * 0x10);
        puVar11 = puVar12;
      } while (puVar10 < puVar12);
    }
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar7 + uVar8 * 0x10 + 8) = 0;
      lVar7 = *param_1;
    }
    puVar5 = (uint *)(lVar7 + uVar8 * 0x10);
    if (puVar5 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  *puVar5 = param_2;
  return puVar5;
}


