/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b4460; name: FUN_004b4460
 */


undefined8 FUN_004b4460(long *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  puVar5 = PTR_DAT_02712a90;
  piVar9 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar10 = piVar9;
  if (uVar3 == 0) {
LAB_004b44bc:
    if (piVar10 != piVar9 + (ulong)uVar3 * 4) {
      return 1;
    }
  }
  else {
    lVar12 = (ulong)uVar3 << 4;
    do {
      if (*piVar10 == param_2) goto LAB_004b44bc;
      lVar12 = lVar12 + -0x10;
      piVar10 = piVar10 + 4;
    } while (lVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
  if (puVar6 == (undefined8 *)0x0) {
    return 2;
  }
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  piVar9 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar10 = piVar9;
  if (uVar3 == 0) {
LAB_004b4530:
    if (piVar10 != piVar9 + (ulong)uVar3 * 4) {
      *(undefined8 **)(piVar10 + 2) = puVar6;
      return 1;
    }
  }
  else {
    lVar12 = (ulong)uVar3 << 4;
    do {
      if (*piVar10 == param_2) goto LAB_004b4530;
      lVar12 = lVar12 + -0x10;
      piVar10 = piVar10 + 4;
    } while (lVar12 != 0);
  }
  uVar14 = *(uint *)((long)param_1 + 0xc);
  if (uVar14 <= uVar3) {
    uVar14 = uVar14 + 1;
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar5,(ulong)uVar14 << 4);
    if (puVar7 == (undefined8 *)0x0) goto LAB_004b46b8;
    puVar8 = (undefined8 *)*param_1;
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) {
        puVar7[1] = puVar8[1];
        *puVar7 = *puVar8;
        if (uVar4 != 1) {
          uVar2 = uVar4 + 3 & 3;
          if ((ulong)uVar4 - 2 < 3) {
            lVar11 = 1;
          }
          else {
            lVar11 = 1;
            lVar12 = 0x40;
            do {
              lVar13 = *param_1;
              puVar8 = (undefined8 *)((long)puVar7 + lVar12);
              puVar8[-5] = *(undefined8 *)(lVar13 + lVar12 + -0x28);
              puVar8[-6] = *(undefined8 *)(lVar13 + lVar12 + -0x30);
              lVar13 = *param_1;
              puVar8[-3] = *(undefined8 *)(lVar13 + lVar12 + -0x18);
              puVar8[-4] = *(undefined8 *)(lVar13 + lVar12 + -0x20);
              lVar13 = *param_1;
              puVar8[-1] = *(undefined8 *)(lVar13 + lVar12 + -8);
              puVar8[-2] = *(undefined8 *)(lVar13 + lVar12 + -0x10);
              puVar1 = (undefined8 *)(*param_1 + lVar12);
              lVar12 = lVar12 + 0x40;
              *puVar8 = *puVar1;
              lVar11 = lVar11 + 4;
              puVar8[1] = puVar1[1];
            } while ((ulong)uVar4 - (ulong)uVar2 != lVar11);
          }
          if (uVar2 != 0) {
            lVar11 = lVar11 << 4;
            lVar12 = -(ulong)uVar2;
            do {
              puVar8 = (undefined8 *)(*param_1 + lVar11);
              puVar1 = (undefined8 *)((long)puVar7 + lVar11);
              lVar11 = lVar11 + 0x10;
              puVar1[1] = puVar8[1];
              lVar12 = lVar12 + 1;
              *puVar1 = *puVar8;
            } while (lVar12 != 0);
          }
        }
        puVar8 = (undefined8 *)*param_1;
      }
      FUN_00404870(*(undefined4 *)puVar5,puVar8);
    }
    *param_1 = (long)puVar7;
    *(uint *)((long)param_1 + 0xc) = uVar14;
  }
  if (uVar3 < uVar14) {
    uVar3 = *(uint *)(param_1 + 1);
    lVar12 = *param_1;
    *(uint *)(param_1 + 1) = uVar3 + 1;
    piVar10 = (int *)(lVar12 + (ulong)uVar3 * 0x10);
    if (piVar10 != (int *)0x0) {
      *piVar10 = param_2;
      *(undefined8 **)(lVar12 + (ulong)uVar3 * 0x10 + 8) = puVar6;
      return 1;
    }
  }
LAB_004b46b8:
  if (puVar6[2] != 0) {
    *(undefined4 *)(puVar6 + 3) = 0;
    FUN_00404870(*(undefined4 *)puVar5);
    puVar6[2] = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  }
  puVar6[1] = 0;
  FUN_00404870(*(undefined4 *)puVar5,puVar6);
  return 2;
}


