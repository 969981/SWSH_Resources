/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b3780; name: FUN_004b3780
 */


undefined8 FUN_004b3780(long *param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  
  plVar5 = (long *)(**(code **)(*param_1 + 0x80))();
  puVar4 = PTR_DAT_02712a90;
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  lVar8 = *plVar5;
  while( true ) {
    if (lVar8 == 0) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x38) == param_2) break;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  bVar3 = *(byte *)(lVar8 + 0x40);
  if (bVar3 != 0) {
    uVar1 = *(uint *)(param_3 + 1);
    if (uVar1 != 0) {
      lVar8 = (ulong)uVar1 << 2;
      puVar9 = (uint *)*param_3;
      do {
        if (*puVar9 == (uint)bVar3) {
          return 0;
        }
        lVar8 = lVar8 + -4;
        puVar9 = puVar9 + 1;
      } while (lVar8 != 0);
    }
    uVar11 = *(uint *)((long)param_3 + 0xc);
    if (uVar1 < uVar11) goto LAB_004b389c;
    uVar11 = uVar11 + 0x10;
    puVar6 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 << 2);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    puVar7 = (undefined4 *)*param_3;
    if ((puVar7 != (undefined4 *)0x0) && (puVar7 != puVar6)) {
      uVar2 = *(uint *)(param_3 + 1);
      if (uVar2 != 0) {
        *puVar6 = *puVar7;
        if (uVar2 != 1) {
          if (uVar2 == 2) {
            lVar10 = 1;
          }
          else {
            lVar8 = 0;
            do {
              lVar10 = lVar8;
              puVar6[lVar10 + 1] = *(undefined4 *)(*param_3 + lVar10 * 4 + 4);
              puVar6[lVar10 + 2] = *(undefined4 *)(*param_3 + lVar10 * 4 + 8);
              lVar8 = lVar10 + 2;
            } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar10 + 2);
            lVar10 = lVar10 + 3;
            if ((~uVar2 & 1) == 0) goto LAB_004b3888;
          }
          puVar6[lVar10] = *(undefined4 *)(*param_3 + lVar10 * 4);
        }
LAB_004b3888:
        puVar7 = (undefined4 *)*param_3;
      }
      FUN_00404870(*(undefined4 *)puVar4,puVar7);
    }
    *param_3 = (long)puVar6;
    *(uint *)((long)param_3 + 0xc) = uVar11;
LAB_004b389c:
    if (uVar11 <= uVar1) {
      return 0;
    }
    puVar9 = (uint *)(*param_3 + (ulong)*(uint *)(param_3 + 1) * 4);
    *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    *puVar9 = (uint)bVar3;
    return 0;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  puVar4 = PTR_DAT_02712a90;
  if (*(int *)((long)param_3 + 0xc) != 0) goto LAB_004b3958;
  puVar6 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x40);
  if (puVar6 == (undefined4 *)0x0) {
    return 1;
  }
  puVar7 = (undefined4 *)*param_3;
  if ((puVar7 != (undefined4 *)0x0) && (puVar7 != puVar6)) {
    uVar1 = *(uint *)(param_3 + 1);
    if (uVar1 != 0) {
      *puVar6 = *puVar7;
      if (uVar1 != 1) {
        if (uVar1 == 2) {
          lVar8 = 1;
        }
        else {
          lVar10 = 0;
          do {
            lVar8 = lVar10;
            puVar6[lVar8 + 1] = *(undefined4 *)(*param_3 + lVar8 * 4 + 4);
            puVar6[lVar8 + 2] = *(undefined4 *)(*param_3 + lVar8 * 4 + 8);
            lVar10 = lVar8 + 2;
          } while (((ulong)uVar1 - 1) - (ulong)(~uVar1 & 1) != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if ((~uVar1 & 1) == 0) goto LAB_004b3940;
        }
        puVar6[lVar8] = *(undefined4 *)(*param_3 + lVar8 * 4);
      }
LAB_004b3940:
      puVar7 = (undefined4 *)*param_3;
    }
    FUN_00404870(*(undefined4 *)puVar4,puVar7);
  }
  *param_3 = (long)puVar6;
  *(undefined4 *)((long)param_3 + 0xc) = 0x10;
LAB_004b3958:
  puVar6 = (undefined4 *)(*param_3 + (ulong)*(uint *)(param_3 + 1) * 4);
  *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
  }
  return 1;
}


