/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418070; name: FUN_00418070
 */


void FUN_00418070(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  plVar10 = *(long **)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x38);
  plVar7 = plVar10;
  if (uVar4 == 0) {
LAB_004180cc:
    if (plVar7 != plVar10 + (ulong)uVar4 * 2) {
      return;
    }
  }
  else {
    lVar13 = (ulong)uVar4 << 4;
    do {
      if (*plVar7 == param_2) goto LAB_004180cc;
      lVar13 = lVar13 + -0x10;
      plVar7 = plVar7 + 2;
    } while (lVar13 != 0);
  }
  plVar7 = (long *)(**(code **)(*param_3 + 0x20))(param_3,*(undefined4 *)(param_2 + 0x28));
  puVar6 = PTR_DAT_02712a90;
  if (plVar7 == (long *)0x0) {
    return;
  }
  plVar11 = *(long **)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x38);
  plVar10 = plVar11;
  if (uVar4 == 0) {
LAB_00418130:
    if (plVar10 != plVar11 + (ulong)uVar4 * 2) {
      plVar10[1] = (long)plVar7;
      return;
    }
  }
  else {
    lVar13 = (ulong)uVar4 << 4;
    do {
      if (*plVar10 == param_2) goto LAB_00418130;
      lVar13 = lVar13 + -0x10;
      plVar10 = plVar10 + 2;
    } while (lVar13 != 0);
  }
  uVar14 = *(uint *)(param_1 + 0x3c);
  if (uVar14 <= uVar4) {
    uVar14 = uVar14 + 1;
    puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 << 4);
    if (puVar8 == (undefined8 *)0x0) goto LAB_004182cc;
    puVar9 = *(undefined8 **)(param_1 + 0x30);
    if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar8)) {
      uVar5 = *(uint *)(param_1 + 0x38);
      if (uVar5 != 0) {
        puVar8[1] = puVar9[1];
        *puVar8 = *puVar9;
        if (uVar5 != 1) {
          uVar3 = uVar5 + 3 & 3;
          if ((ulong)uVar5 - 2 < 3) {
            lVar12 = 1;
          }
          else {
            lVar12 = 1;
            lVar13 = 0x40;
            do {
              lVar1 = *(long *)(param_1 + 0x30) + lVar13;
              puVar9 = (undefined8 *)((long)puVar8 + lVar13);
              puVar9[-5] = *(undefined8 *)(lVar1 + -0x28);
              puVar9[-6] = *(undefined8 *)(lVar1 + -0x30);
              lVar1 = *(long *)(param_1 + 0x30) + lVar13;
              puVar9[-3] = *(undefined8 *)(lVar1 + -0x18);
              puVar9[-4] = *(undefined8 *)(lVar1 + -0x20);
              lVar1 = *(long *)(param_1 + 0x30) + lVar13;
              puVar9[-1] = *(undefined8 *)(lVar1 + -8);
              puVar9[-2] = *(undefined8 *)(lVar1 + -0x10);
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar13);
              lVar13 = lVar13 + 0x40;
              *puVar9 = *puVar2;
              lVar12 = lVar12 + 4;
              puVar9[1] = puVar2[1];
            } while ((ulong)uVar5 - (ulong)uVar3 != lVar12);
          }
          if (uVar3 != 0) {
            lVar12 = lVar12 << 4;
            lVar13 = -(ulong)uVar3;
            do {
              puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar12);
              puVar2 = (undefined8 *)((long)puVar8 + lVar12);
              lVar12 = lVar12 + 0x10;
              puVar2[1] = puVar9[1];
              lVar13 = lVar13 + 1;
              *puVar2 = *puVar9;
            } while (lVar13 != 0);
          }
        }
        puVar9 = *(undefined8 **)(param_1 + 0x30);
      }
      FUN_00404870(*(undefined4 *)puVar6,puVar9);
    }
    *(undefined8 **)(param_1 + 0x30) = puVar8;
    *(uint *)(param_1 + 0x3c) = uVar14;
  }
  if (uVar4 < uVar14) {
    uVar4 = *(uint *)(param_1 + 0x38);
    lVar13 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x38) = uVar4 + 1;
    plVar10 = (long *)(lVar13 + (ulong)uVar4 * 0x10);
    if (plVar10 != (long *)0x0) {
      *plVar10 = param_2;
      *(long **)(lVar13 + (ulong)uVar4 * 0x10 + 8) = plVar7;
      return;
    }
  }
LAB_004182cc:
                    /* WARNING: Could not recover jumptable at 0x004182ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return;
}


