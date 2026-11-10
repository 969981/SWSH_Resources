/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004145f0; name: FUN_004145f0
 */


int * FUN_004145f0(long *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  puVar5 = PTR_DAT_02712a90;
  piVar8 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar9 = piVar8;
  if (uVar3 == 0) {
LAB_00414648:
    if (piVar9 != piVar8 + (ulong)uVar3 * 4) {
      return piVar9 + 2;
    }
  }
  else {
    lVar11 = (ulong)uVar3 << 4;
    do {
      if (*piVar9 == param_2) goto LAB_00414648;
      lVar11 = lVar11 + -0x10;
      piVar9 = piVar9 + 4;
    } while (lVar11 != 0);
  }
  uVar13 = *(uint *)((long)param_1 + 0xc);
  if (uVar13 <= uVar3) {
    uVar13 = uVar13 + 1;
    puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 4);
    if (puVar6 == (undefined8 *)0x0) {
      return (int *)0x0;
    }
    puVar7 = (undefined8 *)*param_1;
    if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) {
        puVar6[1] = puVar7[1];
        *puVar6 = *puVar7;
        if (uVar4 != 1) {
          uVar2 = uVar4 + 3 & 3;
          if ((ulong)uVar4 - 2 < 3) {
            lVar10 = 1;
          }
          else {
            lVar10 = 1;
            lVar11 = 0x40;
            do {
              lVar12 = *param_1;
              puVar7 = (undefined8 *)((long)puVar6 + lVar11);
              puVar7[-5] = *(undefined8 *)(lVar12 + lVar11 + -0x28);
              puVar7[-6] = *(undefined8 *)(lVar12 + lVar11 + -0x30);
              lVar12 = *param_1;
              puVar7[-3] = *(undefined8 *)(lVar12 + lVar11 + -0x18);
              puVar7[-4] = *(undefined8 *)(lVar12 + lVar11 + -0x20);
              lVar12 = *param_1;
              puVar7[-1] = *(undefined8 *)(lVar12 + lVar11 + -8);
              puVar7[-2] = *(undefined8 *)(lVar12 + lVar11 + -0x10);
              puVar1 = (undefined8 *)(*param_1 + lVar11);
              lVar11 = lVar11 + 0x40;
              *puVar7 = *puVar1;
              lVar10 = lVar10 + 4;
              puVar7[1] = puVar1[1];
            } while ((ulong)uVar4 - (ulong)uVar2 != lVar10);
          }
          if (uVar2 != 0) {
            lVar10 = lVar10 << 4;
            lVar11 = -(ulong)uVar2;
            do {
              puVar7 = (undefined8 *)(*param_1 + lVar10);
              puVar1 = (undefined8 *)((long)puVar6 + lVar10);
              lVar10 = lVar10 + 0x10;
              puVar1[1] = puVar7[1];
              lVar11 = lVar11 + 1;
              *puVar1 = *puVar7;
            } while (lVar11 != 0);
          }
        }
        puVar7 = (undefined8 *)*param_1;
      }
      FUN_00404870(*(undefined4 *)puVar5,puVar7);
    }
    *param_1 = (long)puVar6;
    *(uint *)((long)param_1 + 0xc) = uVar13;
  }
  if (uVar3 < uVar13) {
    uVar3 = *(uint *)(param_1 + 1);
    lVar11 = *param_1;
    *(uint *)(param_1 + 1) = uVar3 + 1;
    piVar9 = (int *)(lVar11 + (ulong)uVar3 * 0x10);
    if (piVar9 != (int *)0x0) {
      *piVar9 = param_2;
      return (int *)(lVar11 + (ulong)uVar3 * 0x10 + 8);
    }
  }
  return (int *)0x0;
}


