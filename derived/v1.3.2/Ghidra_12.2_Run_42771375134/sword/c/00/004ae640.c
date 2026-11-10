/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ae640; name: FUN_004ae640
 */


int * FUN_004ae640(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  
  puVar4 = PTR_DAT_02712a90;
  piVar6 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar8 = piVar6;
  if (uVar3 == 0) {
LAB_004ae6b0:
    if (piVar8 != piVar6 + (ulong)uVar3 * 4) {
      *(undefined8 *)(piVar8 + 2) = *param_3;
      return piVar8 + 2;
    }
  }
  else {
    lVar9 = (ulong)uVar3 << 4;
    do {
      if ((*piVar8 == (int)param_2) && (piVar8[1] == (int)((ulong)param_2 >> 0x20)))
      goto LAB_004ae6b0;
      lVar9 = lVar9 + -0x10;
      piVar8 = piVar8 + 4;
    } while (lVar9 != 0);
  }
  uVar10 = *(uint *)((long)param_1 + 0xc);
  if (uVar10 <= uVar3) {
    uVar10 = uVar10 + 1;
    lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 4);
    if (lVar9 == 0) {
      return (int *)0x0;
    }
    lVar5 = *param_1;
    if ((lVar5 != 0) && (lVar5 != lVar9)) {
      uVar7 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar5 = 0;
        do {
          puVar1 = (undefined8 *)(lVar9 + lVar5);
          if (puVar1 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar9 + lVar5) = 0;
          }
          puVar2 = (undefined8 *)(*param_1 + lVar5);
          lVar5 = lVar5 + 0x10;
          puVar1[1] = puVar2[1];
          uVar7 = uVar7 - 1;
          *puVar1 = *puVar2;
        } while (uVar7 != 0);
        lVar5 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar4,lVar5);
    }
    *param_1 = lVar9;
    *(uint *)((long)param_1 + 0xc) = uVar10;
  }
  if (uVar3 < uVar10) {
    uVar3 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar3 + 1;
    puVar1 = (undefined8 *)(*param_1 + (ulong)uVar3 * 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      lVar9 = *param_1 + (ulong)uVar3 * 0x10;
      *(undefined4 *)(lVar9 + 4) = 0;
      *puVar1 = param_2;
      *(undefined8 *)(lVar9 + 8) = *param_3;
      return (int *)(lVar9 + 8);
    }
  }
  return (int *)0x0;
}


