/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040a9d0; name: FUN_0040a9d0
 */


void FUN_0040a9d0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long *plVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_0040a9d0(*(long *)(param_1 + 0x78),param_2);
  }
  puVar6 = PTR_DAT_02712a90;
  plVar12 = *(long **)(param_1 + 0xe0);
  if ((plVar12 != (long *)0x0) && ((int)plVar12[1] != 0)) {
    piVar13 = (int *)*plVar12;
    do {
      piVar10 = (int *)*param_2;
      uVar15 = (ulong)*(uint *)(param_2 + 1);
      uVar14 = 0;
      piVar11 = piVar10;
      if (*(uint *)(param_2 + 1) != 0) {
        piVar8 = piVar10 + uVar15 * 6;
        do {
          while (uVar14 = (uint)uVar15, *piVar10 != *piVar13) {
            piVar10 = piVar10 + 6;
            piVar8 = piVar11 + uVar15 * 6;
            if (piVar8 == piVar10) goto LAB_0040aa94;
          }
          if (1 < uVar14) {
            *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar8 + -2);
            *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(piVar8 + -4);
            *(undefined8 *)piVar10 = *(undefined8 *)(piVar8 + -6);
            uVar14 = *(uint *)(param_2 + 1);
            piVar11 = (int *)*param_2;
          }
          uVar14 = uVar14 - 1;
          uVar15 = (ulong)uVar14;
          *(uint *)(param_2 + 1) = uVar14;
          piVar8 = piVar11 + (ulong)uVar14 * 6;
        } while (piVar8 != piVar10);
      }
LAB_0040aa94:
      uVar16 = *(uint *)((long)param_2 + 0xc);
      if (uVar14 < uVar16) {
LAB_0040ac04:
        if (uVar14 < uVar16) {
          piVar11 = piVar11 + (ulong)*(uint *)(param_2 + 1) * 6;
          *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) + 1;
          if (piVar11 != (int *)0x0) {
            *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar13 + 4);
            *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar13 + 2);
            *(undefined8 *)piVar11 = *(undefined8 *)piVar13;
          }
        }
      }
      else {
        uVar16 = uVar16 + 2;
        piVar11 = (int *)FUN_00404690(*(undefined4 *)puVar6,(ulong)uVar16 * 0x18);
        if (piVar11 != (int *)0x0) {
          piVar10 = (int *)*param_2;
          if ((piVar10 != (int *)0x0) && (piVar10 != piVar11)) {
            uVar5 = *(uint *)(param_2 + 1);
            if (uVar5 != 0) {
              *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar10 + 4);
              *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar10 + 2);
              *(undefined8 *)piVar11 = *(undefined8 *)piVar10;
              if (uVar5 != 1) {
                uVar4 = uVar5 + 3 & 3;
                if ((ulong)uVar5 - 2 < 3) {
                  lVar9 = 1;
                }
                else {
                  lVar7 = 0x60;
                  lVar9 = 1;
                  do {
                    lVar1 = *param_2 + lVar7;
                    puVar2 = (undefined8 *)((long)piVar11 + lVar7);
                    puVar2[-7] = *(undefined8 *)(lVar1 + -0x38);
                    puVar2[-8] = *(undefined8 *)(lVar1 + -0x40);
                    puVar2[-9] = *(undefined8 *)(lVar1 + -0x48);
                    lVar1 = *param_2 + lVar7;
                    puVar2[-4] = *(undefined8 *)(lVar1 + -0x20);
                    puVar2[-5] = *(undefined8 *)(lVar1 + -0x28);
                    puVar2[-6] = *(undefined8 *)(lVar1 + -0x30);
                    lVar1 = *param_2 + lVar7;
                    puVar2[-1] = *(undefined8 *)(lVar1 + -8);
                    puVar2[-2] = *(undefined8 *)(lVar1 + -0x10);
                    puVar2[-3] = *(undefined8 *)(lVar1 + -0x18);
                    puVar3 = (undefined8 *)(*param_2 + lVar7);
                    lVar7 = lVar7 + 0x60;
                    puVar2[2] = puVar3[2];
                    puVar2[1] = puVar3[1];
                    lVar9 = lVar9 + 4;
                    *puVar2 = *puVar3;
                  } while ((ulong)uVar5 - (ulong)uVar4 != lVar9);
                }
                if (uVar4 != 0) {
                  lVar9 = lVar9 * 0x18;
                  lVar7 = -(ulong)uVar4;
                  do {
                    puVar2 = (undefined8 *)(*param_2 + lVar9);
                    puVar3 = (undefined8 *)((long)piVar11 + lVar9);
                    lVar9 = lVar9 + 0x18;
                    puVar3[2] = puVar2[2];
                    puVar3[1] = puVar2[1];
                    lVar7 = lVar7 + 1;
                    *puVar3 = *puVar2;
                  } while (lVar7 != 0);
                }
              }
              piVar10 = (int *)*param_2;
            }
            FUN_00404870(*(undefined4 *)puVar6,piVar10);
          }
          *param_2 = (long)piVar11;
          *(uint *)((long)param_2 + 0xc) = uVar16;
          goto LAB_0040ac04;
        }
      }
      piVar13 = piVar13 + 6;
    } while (piVar13 != (int *)(*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x18));
  }
  return;
}


