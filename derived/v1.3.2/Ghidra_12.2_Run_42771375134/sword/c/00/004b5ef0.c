/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5ef0; name: FUN_004b5ef0
 */


ulong * FUN_004b5ef0(long *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  
  puVar3 = PTR_DAT_02712a90;
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  uVar13 = 0;
  iVar6 = uVar1 - 1;
  if (-1 < iVar6) {
    do {
      while( true ) {
        iVar2 = iVar6 - uVar13;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = uVar13 + (iVar2 >> 1);
        lVar8 = (long)iVar2;
        uVar10 = *(ulong *)(lVar5 + (long)iVar2 * 0x18);
        if ((uVar10 <= param_2) &&
           ((uVar10 != param_2 || (*(ulong *)(lVar5 + lVar8 * 0x18 + 8) <= param_3)))) break;
        iVar6 = iVar2 + -1;
        if (iVar6 < (int)uVar13) goto LAB_004b5f9c;
      }
      if ((param_2 <= uVar10) &&
         ((uVar10 != param_2 || (param_3 <= *(ulong *)(lVar5 + lVar8 * 0x18 + 8))))) {
        return (ulong *)(lVar5 + lVar8 * 0x18);
      }
      uVar13 = iVar2 + 1;
    } while ((int)uVar13 <= iVar6);
  }
LAB_004b5f9c:
  uVar12 = *(uint *)((long)param_1 + 0xc);
  if ((lVar5 == 0) || (lVar5 + (long)(int)uVar13 * 0x18 == 0)) {
    if (uVar12 <= uVar1) {
      uVar12 = uVar12 + 1;
      lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 * 0x18);
      if (lVar5 == 0) {
        return (ulong *)0x0;
      }
      lVar8 = *param_1;
      if ((lVar8 != 0) && (lVar8 != lVar5)) {
        uVar10 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar8 = 0;
          do {
            puVar7 = (undefined8 *)(lVar5 + lVar8);
            if (puVar7 != (undefined8 *)0x0) {
              puVar7[1] = 0;
              puVar7[2] = 0;
              *puVar7 = 0;
            }
            puVar9 = (undefined8 *)(*param_1 + lVar8);
            lVar8 = lVar8 + 0x18;
            puVar7[2] = puVar9[2];
            puVar7[1] = puVar9[1];
            uVar10 = uVar10 - 1;
            *puVar7 = *puVar9;
          } while (uVar10 != 0);
          lVar8 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar3,lVar8);
      }
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar12;
    }
    if (uVar12 <= uVar1) {
      return (ulong *)0x0;
    }
    uVar13 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar13 + 1;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar13 * 0x18);
    if (puVar4 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
  }
  else {
    if (uVar12 <= uVar1) {
      uVar12 = uVar12 + 1;
      lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 * 0x18);
      if (lVar5 == 0) {
        return (ulong *)0x0;
      }
      lVar8 = *param_1;
      if ((lVar8 != 0) && (lVar8 != lVar5)) {
        uVar10 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar8 = 0;
          do {
            puVar7 = (undefined8 *)(lVar5 + lVar8);
            if (puVar7 != (undefined8 *)0x0) {
              puVar7[1] = 0;
              puVar7[2] = 0;
              *puVar7 = 0;
            }
            puVar9 = (undefined8 *)(*param_1 + lVar8);
            lVar8 = lVar8 + 0x18;
            puVar7[2] = puVar9[2];
            puVar7[1] = puVar9[1];
            uVar10 = uVar10 - 1;
            *puVar7 = *puVar9;
          } while (uVar10 != 0);
          lVar8 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar3,lVar8);
      }
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar12;
    }
    if (uVar12 <= uVar1) {
      return (ulong *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar7 = (undefined8 *)(lVar5 + (ulong)uVar1 * 0x18);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      lVar5 = *param_1;
    }
    uVar10 = (ulong)uVar13;
    puVar9 = (undefined8 *)(lVar5 + uVar10 * 0x18);
    if (puVar9 < puVar7) {
      do {
        puVar11 = puVar7 + -3;
        *puVar7 = *puVar11;
        puVar7[1] = puVar7[-2];
        puVar7[2] = puVar7[-1];
        lVar5 = *param_1;
        puVar9 = (undefined8 *)(lVar5 + uVar10 * 0x18);
        puVar7 = puVar11;
      } while (puVar9 < puVar11);
    }
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      lVar5 = *param_1;
    }
    puVar4 = (ulong *)(lVar5 + uVar10 * 0x18);
    if (puVar4 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  *puVar4 = param_2;
  puVar4[1] = param_3;
  return puVar4;
}


