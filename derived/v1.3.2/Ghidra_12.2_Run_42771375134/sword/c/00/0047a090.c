/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047a090; name: FUN_0047a090
 */


ulong * FUN_0047a090(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar11;
  undefined8 *puVar10;
  uint uVar12;
  uint uVar13;
  
  puVar3 = PTR_DAT_02712a90;
  uVar1 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  uVar13 = 0;
  iVar7 = uVar1 - 1;
  if (-1 < iVar7) {
    do {
      while( true ) {
        iVar2 = iVar7 - uVar13;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        uVar12 = uVar13 + (iVar2 >> 1);
        uVar8 = *(ulong *)(lVar6 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff000000000 |
                                   (ulong)uVar12 << 4));
        if (param_2 > uVar8 || uVar8 == param_2) break;
        iVar7 = uVar12 - 1;
        if (iVar7 < (int)uVar13) goto LAB_0047a108;
      }
      if (param_2 <= uVar8) {
        return (ulong *)(lVar6 + (long)(int)uVar12 * 0x10);
      }
      uVar13 = uVar12 + 1;
    } while ((int)uVar13 <= iVar7);
  }
LAB_0047a108:
  uVar12 = *(uint *)((long)param_1 + 0xc);
  if ((lVar6 == 0) || (lVar6 + (long)(int)uVar13 * 0x10 == 0)) {
    if (uVar12 <= uVar1) {
      uVar12 = uVar12 + 1;
      lVar6 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 << 4);
      if (lVar6 == 0) {
        return (ulong *)0x0;
      }
      lVar5 = *param_1;
      if ((lVar5 != 0) && (lVar5 != lVar6)) {
        uVar8 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar5 = 0;
          do {
            puVar10 = (undefined8 *)(lVar6 + lVar5);
            if (puVar10 != (undefined8 *)0x0) {
              *(undefined4 *)(lVar6 + lVar5 + 8) = 0;
            }
            puVar9 = (undefined8 *)(*param_1 + lVar5);
            lVar5 = lVar5 + 0x10;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
            uVar8 = uVar8 - 1;
            *puVar10 = *puVar9;
          } while (uVar8 != 0);
          lVar5 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar3,lVar5);
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar12;
    }
    if (uVar12 <= uVar1) {
      return (ulong *)0x0;
    }
    uVar13 = *(uint *)(param_1 + 1);
    puVar4 = (ulong *)(*param_1 + (ulong)uVar13 * 0x10);
    *(uint *)(param_1 + 1) = uVar13 + 1;
    if (puVar4 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    *(undefined4 *)(*param_1 + (ulong)uVar13 * 0x10 + 8) = 0;
  }
  else {
    if (uVar12 <= uVar1) {
      uVar12 = uVar12 + 1;
      lVar6 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 << 4);
      if (lVar6 == 0) {
        return (ulong *)0x0;
      }
      lVar5 = *param_1;
      if ((lVar5 != 0) && (lVar5 != lVar6)) {
        uVar8 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar5 = 0;
          do {
            puVar10 = (undefined8 *)(lVar6 + lVar5);
            if (puVar10 != (undefined8 *)0x0) {
              *(undefined4 *)(lVar6 + lVar5 + 8) = 0;
            }
            puVar9 = (undefined8 *)(*param_1 + lVar5);
            lVar5 = lVar5 + 0x10;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
            uVar8 = uVar8 - 1;
            *puVar10 = *puVar9;
          } while (uVar8 != 0);
          lVar5 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar3,lVar5);
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar12;
    }
    if (uVar12 <= uVar1) {
      return (ulong *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar6 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar10 = (undefined8 *)(lVar6 + (ulong)uVar1 * 0x10);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined4 *)(lVar6 + (ulong)uVar1 * 0x10 + 8) = 0;
      lVar6 = *param_1;
    }
    uVar8 = (ulong)uVar13;
    puVar9 = (undefined8 *)(lVar6 + (ulong)uVar13 * 0x10);
    if (puVar9 < puVar10) {
      do {
        puVar11 = puVar10 + -2;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar10 + -1);
        *puVar10 = *puVar11;
        lVar6 = *param_1;
        puVar9 = (undefined8 *)(lVar6 + uVar8 * 0x10);
        puVar10 = puVar11;
      } while (puVar9 < puVar11);
    }
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(lVar6 + uVar8 * 0x10 + 8) = 0;
      lVar6 = *param_1;
    }
    puVar4 = (ulong *)(lVar6 + uVar8 * 0x10);
    if (puVar4 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  *puVar4 = param_2;
  return puVar4;
}


