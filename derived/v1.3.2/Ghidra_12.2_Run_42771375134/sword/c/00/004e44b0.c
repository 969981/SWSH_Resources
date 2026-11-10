/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e44b0; name: FUN_004e44b0
 */


undefined8 FUN_004e44b0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_02712a90;
  piVar7 = *(int **)(param_1 + 0xa0);
  uVar3 = *(uint *)(param_1 + 0xa8);
  piVar9 = piVar7;
  if (uVar3 == 0) {
LAB_004e4518:
    if (piVar9 == piVar7 + (ulong)uVar3 * 6) goto LAB_004e4530;
    piVar9 = piVar9 + 2;
LAB_004e4604:
    uVar5 = 1;
    *(undefined8 *)piVar9 = param_2;
    *(undefined8 *)(piVar9 + 2) = param_3;
  }
  else {
    lVar10 = (ulong)uVar3 * 0x18;
    do {
      if (*piVar9 == param_4) goto LAB_004e4518;
      lVar10 = lVar10 + -0x18;
      piVar9 = piVar9 + 6;
    } while (lVar10 != 0);
LAB_004e4530:
    uVar11 = *(uint *)(param_1 + 0xac);
    if (uVar3 < uVar11) {
LAB_004e45cc:
      if (uVar3 < uVar11) {
        uVar3 = *(uint *)(param_1 + 0xa8);
        *(uint *)(param_1 + 0xa8) = uVar3 + 1;
        piVar7 = (int *)(*(long *)(param_1 + 0xa0) + (ulong)uVar3 * 0x18);
        if (piVar7 != (int *)0x0) {
          lVar10 = *(long *)(param_1 + 0xa0) + (ulong)uVar3 * 0x18;
          piVar9 = (int *)(lVar10 + 8);
          piVar9[0] = 0;
          piVar9[1] = 0;
          *(undefined8 *)(lVar10 + 0x10) = 0;
          *piVar7 = param_4;
          goto LAB_004e4604;
        }
      }
    }
    else {
      uVar11 = uVar11 + 1;
      lVar10 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 * 0x18);
      if (lVar10 != 0) {
        lVar6 = *(long *)(param_1 + 0xa0);
        if ((lVar6 != 0) && (lVar6 != lVar10)) {
          uVar8 = (ulong)*(uint *)(param_1 + 0xa8);
          if (*(uint *)(param_1 + 0xa8) != 0) {
            lVar6 = 0;
            do {
              puVar1 = (undefined8 *)(lVar10 + lVar6);
              if (puVar1 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar10 + lVar6 + 8) = 0;
                *(undefined8 *)(lVar10 + lVar6 + 0x10) = 0;
              }
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0xa0) + lVar6);
              lVar6 = lVar6 + 0x18;
              puVar1[2] = puVar2[2];
              puVar1[1] = puVar2[1];
              uVar8 = uVar8 - 1;
              *puVar1 = *puVar2;
            } while (uVar8 != 0);
            lVar6 = *(long *)(param_1 + 0xa0);
          }
          FUN_00404870(*(undefined4 *)puVar4,lVar6);
        }
        *(long *)(param_1 + 0xa0) = lVar10;
        *(uint *)(param_1 + 0xac) = uVar11;
        goto LAB_004e45cc;
      }
    }
    uVar5 = 2;
  }
  return uVar5;
}


