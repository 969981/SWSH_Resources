/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041dff0; name: FUN_0041dff0
 */


void FUN_0041dff0(long param_1)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  int *piVar13;
  uint uVar14;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puVar5 = PTR_DAT_02712a90;
  lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x100);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) != 0)) {
    piVar13 = *(int **)(lVar11 + 0x10);
    sVar12 = 0;
    do {
      if (*(int *)(param_1 + 0x28) == *piVar13) {
        uVar3 = *(uint *)(param_1 + 0x20);
        uVar14 = *(uint *)(param_1 + 0x24);
        if (uVar14 <= uVar3) {
          uVar14 = uVar14 + 0x10;
          puVar6 = (undefined2 *)FUN_00404690(*(undefined4 *)puVar5,(ulong)uVar14 << 1);
          if (puVar6 == (undefined2 *)0x0) goto LAB_0041e19c;
          puVar7 = *(undefined2 **)(param_1 + 0x18);
          if ((puVar7 != (undefined2 *)0x0) && (puVar7 != puVar6)) {
            uVar4 = *(uint *)(param_1 + 0x20);
            if (uVar4 != 0) {
              *puVar6 = *puVar7;
              if (uVar4 != 1) {
                uVar2 = uVar4 + 3 & 3;
                if ((ulong)uVar4 - 2 < 3) {
                  lVar9 = 1;
                }
                else {
                  lVar8 = 4;
                  lVar10 = 0;
                  do {
                    lVar9 = lVar10;
                    lVar10 = lVar9 * 2;
                    puVar6[lVar9 + 1] = *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar10 + 2);
                    puVar7 = (undefined2 *)((long)puVar6 + lVar8);
                    lVar8 = lVar8 + 8;
                    *puVar7 = *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar10 + 4);
                    puVar7[1] = *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar10 + 6);
                    puVar6[lVar9 + 4] = *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar10 + 8);
                    lVar10 = lVar9 + 4;
                  } while (((ulong)uVar4 - 1) - (ulong)uVar2 != lVar9 + 4);
                  lVar9 = lVar9 + 5;
                }
                if (uVar2 != 0) {
                  lVar9 = lVar9 << 1;
                  lVar8 = -(ulong)uVar2;
                  do {
                    *(undefined2 *)((long)puVar6 + lVar9) =
                         *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar9);
                    lVar9 = lVar9 + 2;
                    lVar8 = lVar8 + 1;
                  } while (lVar8 != 0);
                }
              }
              puVar7 = *(undefined2 **)(param_1 + 0x18);
            }
            FUN_00404870(*(undefined4 *)puVar5,puVar7);
          }
          *(undefined2 **)(param_1 + 0x18) = puVar6;
          *(uint *)(param_1 + 0x24) = uVar14;
        }
        if (uVar3 < uVar14) {
          psVar1 = (short *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 2);
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
          if (psVar1 != (short *)0x0) {
            *psVar1 = sVar12;
          }
        }
      }
LAB_0041e19c:
      piVar13 = piVar13 + 1;
      sVar12 = sVar12 + 1;
    } while (piVar13 != (int *)(*(long *)(lVar11 + 0x10) + (ulong)*(uint *)(lVar11 + 0x18) * 4));
  }
  return;
}


