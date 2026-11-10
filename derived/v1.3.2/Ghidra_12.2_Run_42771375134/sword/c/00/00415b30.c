/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00415b30; name: FUN_00415b30
 */


undefined8 *
FUN_00415b30(long param_1,long *param_2,uint param_3,long *param_4,uint param_5,long *param_6,
            undefined1 *param_7)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  
  puVar11 = *(undefined8 **)(param_1 + 0xe8);
  if (0 < (int)*(uint *)(param_1 + 0xf0)) {
    uVar12 = (ulong)*(uint *)(param_1 + 0xf0);
    do {
      uVar13 = uVar12 - 1 & 0xffffffff;
      puVar16 = puVar11 + uVar13 * 0xc;
      if ((*(uint *)(puVar16 + 1) != 0) && (*(uint *)(puVar11 + uVar13 * 0xc + 3) != 0)) {
        puVar14 = (uint *)*puVar16;
        if (*puVar14 == 0xffffffff) {
LAB_00415cb0:
          puVar14 = (uint *)puVar11[uVar13 * 0xc + 2];
          if (*puVar14 == 0xffffffff) {
LAB_00415e04:
            uVar10 = 0;
LAB_00415e08:
            *param_7 = uVar10;
            return puVar16;
          }
          puVar2 = puVar14 + *(uint *)(puVar11 + uVar13 * 0xc + 3);
          if (puVar14 != (uint *)0x0) {
            puVar9 = puVar2;
            puVar7 = puVar14;
            do {
              while( true ) {
                uVar13 = (long)puVar9 - (long)puVar7 >> 2;
                if ((long)uVar13 < 0) {
                  uVar13 = uVar13 + 1;
                }
                puVar3 = (uint *)((long)puVar7 + (uVar13 & 0x7ffffffffffffffe) * 2);
                uVar4 = *puVar3;
                if (param_5 > uVar4 || uVar4 == param_5) break;
                puVar9 = puVar3 + -1;
                if (puVar9 < puVar7) goto LAB_00415d28;
              }
              if (param_5 <= uVar4) {
                if (puVar3 != puVar2) goto LAB_00415e04;
                break;
              }
              puVar7 = puVar3 + 1;
            } while (puVar7 <= puVar9);
          }
LAB_00415d28:
          if (param_6 != (long *)0x0 && param_6 != param_2) {
            plVar15 = param_6;
            if (puVar14 == (uint *)0x0) {
              do {
                plVar15 = (long *)plVar15[0xf];
              } while (plVar15 != (long *)0x0 && plVar15 != param_2);
            }
            else {
              do {
                uVar4 = *(uint *)(plVar15 + 2);
                puVar9 = puVar2;
                puVar7 = puVar14;
                do {
                  while( true ) {
                    uVar13 = (long)puVar9 - (long)puVar7 >> 2;
                    if ((long)uVar13 < 0) {
                      uVar13 = uVar13 + 1;
                    }
                    puVar3 = (uint *)((long)puVar7 + (uVar13 & 0x7ffffffffffffffe) * 2);
                    uVar5 = *puVar3;
                    if (uVar4 > uVar5 || uVar5 == uVar4) break;
                    puVar9 = puVar3 + -1;
                    if (puVar9 < puVar7) goto LAB_00415d94;
                  }
                  if (uVar4 <= uVar5) {
                    if (puVar3 != puVar2) {
                      if (plVar15 == (long *)0x0) goto LAB_00415dc4;
                      iVar6 = (**(code **)(*plVar15 + 0x88))();
                      if (iVar6 != 8) goto LAB_00415e04;
                      uVar10 = 1;
                      goto LAB_00415e08;
                    }
                    break;
                  }
                  puVar7 = puVar3 + 1;
                } while (puVar7 <= puVar9);
LAB_00415d94:
                plVar15 = (long *)plVar15[0xf];
              } while ((plVar15 != (long *)0x0) && (plVar15 != param_2));
            }
          }
        }
        else {
          puVar2 = puVar14 + *(uint *)(puVar16 + 1);
          if (puVar14 != (uint *)0x0) {
            puVar7 = puVar14;
            puVar9 = puVar2;
            do {
              while( true ) {
                uVar8 = (long)puVar9 - (long)puVar7 >> 2;
                if ((long)uVar8 < 0) {
                  uVar8 = uVar8 + 1;
                }
                puVar3 = (uint *)((long)puVar7 + (uVar8 & 0x7ffffffffffffffe) * 2);
                uVar4 = *puVar3;
                if (param_3 > uVar4 || uVar4 == param_3) break;
                puVar9 = puVar3 + -1;
                if (puVar9 < puVar7) goto LAB_00415c14;
              }
              if (param_3 <= uVar4) {
                if (puVar3 != puVar2) goto LAB_00415cb0;
                break;
              }
              puVar7 = puVar3 + 1;
            } while (puVar7 <= puVar9);
          }
LAB_00415c14:
          if (param_4 != (long *)0x0 && param_4 != param_2) {
            plVar15 = param_4;
            if (puVar14 == (uint *)0x0) {
              do {
                plVar15 = (long *)plVar15[0xf];
              } while (plVar15 != (long *)0x0 && plVar15 != param_2);
            }
            else {
              do {
                uVar4 = *(uint *)(plVar15 + 2);
                puVar9 = puVar2;
                puVar7 = puVar14;
                do {
                  while( true ) {
                    uVar8 = (long)puVar9 - (long)puVar7 >> 2;
                    if ((long)uVar8 < 0) {
                      uVar8 = uVar8 + 1;
                    }
                    puVar3 = (uint *)((long)puVar7 + (uVar8 & 0x7ffffffffffffffe) * 2);
                    uVar5 = *puVar3;
                    if (uVar4 > uVar5 || uVar5 == uVar4) break;
                    puVar9 = puVar3 + -1;
                    if (puVar9 < puVar7) goto LAB_00415c80;
                  }
                  if (uVar4 <= uVar5) {
                    if (puVar3 != puVar2) {
                      if (plVar15 == (long *)0x0) goto LAB_00415dc4;
                      goto LAB_00415cb0;
                    }
                    break;
                  }
                  puVar7 = puVar3 + 1;
                } while (puVar7 <= puVar9);
LAB_00415c80:
                plVar15 = (long *)plVar15[0xf];
              } while ((plVar15 != (long *)0x0) && (plVar15 != param_2));
            }
          }
        }
      }
LAB_00415dc4:
      bVar1 = 1 < (long)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar1);
  }
  return puVar11;
}


