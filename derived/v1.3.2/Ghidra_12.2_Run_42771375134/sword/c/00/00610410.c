/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00610410; name: FUN_00610410
 */


int FUN_00610410(uint *param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  int local_44;
  
  uVar1 = *param_2;
  uVar19 = (ulong)uVar1;
  uVar4 = FUN_006029c0(param_4,8,0,uVar1 << 1,0,&local_44);
  *(undefined8 *)(param_1 + 4) = uVar4;
  if (local_44 == 0) {
    uVar4 = FUN_006029c0(param_4,0x30,0,uVar19,0,&local_44);
    *(undefined8 *)(param_1 + 2) = uVar4;
    if (local_44 == 0) {
      uVar4 = FUN_006029c0(param_4,0x20,0,uVar1 << 1 | 1,0,&local_44);
      *(undefined8 *)(param_1 + 10) = uVar4;
      if (local_44 == 0) {
        *(ulong *)(param_1 + 6) = *(long *)(param_1 + 4) + uVar19 * 8;
        *param_1 = uVar1;
        param_1[1] = 0;
        param_1[8] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        if (uVar1 != 0) {
          puVar8 = *(undefined4 **)(param_2 + 2);
          puVar10 = *(undefined4 **)(param_1 + 2);
          if ((uVar1 & 1) != 0) {
            *puVar10 = *puVar8;
            puVar10[1] = puVar8[1];
            puVar10[6] = puVar8[2];
            uVar19 = (ulong)(uVar1 - 1);
            puVar10 = puVar10 + 0xc;
            puVar8 = puVar8 + 3;
          }
          if (uVar1 != 1) {
            do {
              *puVar10 = *puVar8;
              puVar10[1] = puVar8[1];
              puVar10[6] = puVar8[2];
              puVar10[0xc] = puVar8[3];
              puVar10[0xd] = puVar8[4];
              puVar10[0x12] = puVar8[5];
              uVar1 = (int)uVar19 - 2;
              uVar19 = (ulong)uVar1;
              puVar8 = puVar8 + 6;
              puVar10 = puVar10 + 0x18;
            } while (uVar1 != 0);
          }
        }
        if (param_3 != (int *)0x0) {
          puVar9 = *(uint **)(param_3 + 2);
          iVar2 = *param_3;
          *(int **)(param_1 + 0xe) = param_3;
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            uVar1 = *puVar9;
            if (uVar1 != 0) {
              uVar19 = 0;
              uVar14 = 0;
              uVar13 = 0;
              pbVar11 = *(byte **)(puVar9 + 2);
LAB_006105a4:
              do {
                if (uVar14 == 0) {
                  pbVar12 = pbVar11 + 1;
                  uVar13 = (uint)*pbVar11;
                  uVar14 = 0x80;
                  if ((*pbVar11 & 0x80) != 0) goto LAB_006105b0;
                }
                else {
                  pbVar12 = pbVar11;
                  if ((uVar14 & uVar13) != 0) {
LAB_006105b0:
                    if (uVar19 < *param_1) {
                      lVar6 = *(long *)(param_1 + 2);
                      puVar16 = (uint *)(lVar6 + uVar19 * 0x30 + 0x18);
                      uVar18 = *puVar16;
                      if ((uVar18 >> 2 & 1) == 0) {
                        piVar15 = (int *)(lVar6 + uVar19 * 0x30);
                        *puVar16 = uVar18 | 4;
                        puVar17 = *(undefined8 **)(param_1 + 6);
                        uVar18 = param_1[1];
                        puVar5 = (undefined8 *)(lVar6 + uVar19 * 0x30 + 0x20);
                        *puVar5 = 0;
                        if (uVar18 != 0) {
                          iVar3 = *piVar15;
                          do {
                            piVar7 = (int *)*puVar17;
                            if ((*piVar7 <= *(int *)(lVar6 + uVar19 * 0x30 + 4) + iVar3) &&
                               (iVar3 <= piVar7[1] + *piVar7)) {
                              *puVar5 = piVar7;
                              uVar18 = param_1[1];
                              if (uVar18 < *param_1) goto LAB_00610634;
                              goto LAB_00610668;
                            }
                            uVar18 = uVar18 - 1;
                            puVar17 = puVar17 + 1;
                          } while (uVar18 != 0);
                        }
                        uVar18 = param_1[1];
                        if (uVar18 < *param_1) {
LAB_00610634:
                          param_1[1] = uVar18 + 1;
                          *(int **)(*(long *)(param_1 + 6) + (ulong)uVar18 * 8) = piVar15;
                          uVar19 = uVar19 + 1;
                          uVar14 = (int)uVar14 >> 1;
                          pbVar11 = pbVar12;
                          if (uVar19 == uVar1) break;
                          goto LAB_006105a4;
                        }
                      }
                    }
                  }
                }
LAB_00610668:
                uVar19 = uVar19 + 1;
                uVar14 = (int)uVar14 >> 1;
                pbVar11 = pbVar12;
              } while (uVar19 != uVar1);
            }
            puVar9 = puVar9 + 6;
          }
        }
        uVar1 = *param_1;
        if ((param_1[1] != uVar1) && (uVar1 != 0)) {
          uVar19 = 0;
          if ((ulong)uVar1 == 0) goto LAB_00610740;
          do {
            lVar6 = *(long *)(param_1 + 2);
            puVar9 = (uint *)(lVar6 + uVar19 * 0x30 + 0x18);
            uVar14 = *puVar9;
            if ((uVar14 >> 2 & 1) == 0) {
              piVar15 = (int *)(lVar6 + uVar19 * 0x30);
              *puVar9 = uVar14 | 4;
              puVar17 = *(undefined8 **)(param_1 + 6);
              uVar14 = param_1[1];
              puVar5 = (undefined8 *)(lVar6 + uVar19 * 0x30 + 0x20);
              *puVar5 = 0;
              if (uVar14 != 0) {
                iVar2 = *piVar15;
                do {
                  piVar7 = (int *)*puVar17;
                  if ((*piVar7 <= *(int *)(lVar6 + uVar19 * 0x30 + 4) + iVar2) &&
                     (iVar2 <= piVar7[1] + *piVar7)) {
                    *puVar5 = piVar7;
                    uVar14 = param_1[1];
                    if (uVar14 < *param_1) goto LAB_00610730;
                    goto LAB_00610740;
                  }
                  uVar14 = uVar14 - 1;
                  puVar17 = puVar17 + 1;
                } while (uVar14 != 0);
              }
              uVar14 = param_1[1];
              if (uVar14 < *param_1) {
LAB_00610730:
                param_1[1] = uVar14 + 1;
                *(int **)(*(long *)(param_1 + 6) + (ulong)uVar14 * 8) = piVar15;
              }
            }
LAB_00610740:
            do {
              uVar19 = uVar19 + 1;
              if (uVar19 == uVar1) {
                return 0;
              }
            } while (*param_1 <= uVar19);
          } while( true );
        }
      }
    }
  }
  return local_44;
}


