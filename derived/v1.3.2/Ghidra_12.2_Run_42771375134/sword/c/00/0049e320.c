/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049e320; name: FUN_0049e320
 */


void FUN_0049e320(long *param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  
  uVar11 = *(uint *)(param_1 + 1);
  if (uVar11 != 0) {
    uVar4 = 0;
    if (uVar11 != 0) {
      uVar4 = param_2 / uVar11;
    }
    for (puVar8 = *(uint **)(*param_1 + (ulong)(param_2 - uVar4 * uVar11) * 8);
        puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 2)) {
      if (*puVar8 == param_2) {
        uVar12 = (ulong)puVar8[0x14];
        if (puVar8[0x14] == 0) {
          plVar9 = (long *)0x0;
          uVar11 = puVar8[0x18];
        }
        else {
          puVar10 = *(undefined8 **)(puVar8 + 0x12);
          puVar16 = puVar10 + uVar12;
          plVar19 = (long *)0x0;
          do {
            uVar11 = (uint)uVar12;
            plVar9 = (long *)*puVar10;
            if ((((plVar9[3] == *param_3) && ((int)plVar9[4] == (int)param_3[1])) &&
                ((int)plVar9[5] == (int)param_3[2])) &&
               ((((char)plVar9[6] == (char)param_3[3] && ((char)plVar9[7] == (char)param_3[4])) &&
                (plVar9[8] == param_3[5])))) {
              if (puVar10 < puVar16 + -1) {
                uVar12 = (long)puVar16 + (-9 - (long)puVar10);
                uVar11 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
                if ((uVar11 & 7) == 0) {
                  puVar14 = puVar10;
                }
                else {
                  lVar18 = -((ulong)uVar11 & 7);
                  puVar13 = puVar10;
                  do {
                    puVar14 = puVar13 + 1;
                    *puVar13 = *puVar14;
                    lVar18 = lVar18 + 1;
                    puVar13 = puVar14;
                  } while (lVar18 != 0);
                }
                if (0x37 < uVar12) {
                  do {
                    *puVar14 = puVar14[1];
                    puVar14[1] = puVar14[2];
                    puVar14[2] = puVar14[3];
                    puVar14[3] = puVar14[4];
                    puVar14[4] = puVar14[5];
                    puVar14[5] = puVar14[6];
                    puVar14[6] = puVar14[7];
                    puVar13 = puVar14 + 8;
                    puVar14[7] = *puVar13;
                    puVar14 = puVar13;
                  } while (puVar13 < puVar16 + -1);
                }
                uVar11 = puVar8[0x14];
              }
              puVar8[0x14] = uVar11 - 1;
              if (plVar19 == (long *)0x0) {
                plVar9[2] = 0;
              }
              else {
                plVar9[2] = (long)plVar19;
              }
            }
            else {
              puVar10 = puVar10 + 1;
              plVar9 = plVar19;
            }
            uVar12 = (ulong)puVar8[0x14];
            puVar16 = (undefined8 *)(*(long *)(puVar8 + 0x12) + uVar12 * 8);
            plVar19 = plVar9;
          } while (puVar16 != puVar10);
          uVar11 = puVar8[0x18];
        }
        if (uVar11 != 0) {
          uVar12 = (ulong)uVar11;
          puVar10 = *(undefined8 **)(puVar8 + 0x16);
          puVar16 = puVar10 + uVar12;
          plVar19 = plVar9;
          do {
            uVar11 = (uint)uVar12;
            plVar9 = (long *)*puVar10;
            if (((plVar9[3] == *param_3) && ((int)plVar9[4] == (int)param_3[1])) &&
               (((int)plVar9[5] == (int)param_3[2] &&
                ((((char)plVar9[6] == (char)param_3[3] && ((char)plVar9[7] == (char)param_3[4])) &&
                 (plVar9[8] == param_3[5])))))) {
              if (puVar10 < puVar16 + -1) {
                uVar12 = (long)puVar16 + (-9 - (long)puVar10);
                uVar11 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
                if ((uVar11 & 7) == 0) {
                  puVar14 = puVar10;
                }
                else {
                  lVar18 = -((ulong)uVar11 & 7);
                  puVar13 = puVar10;
                  do {
                    puVar14 = puVar13 + 1;
                    *puVar13 = *puVar14;
                    lVar18 = lVar18 + 1;
                    puVar13 = puVar14;
                  } while (lVar18 != 0);
                }
                if (0x37 < uVar12) {
                  do {
                    *puVar14 = puVar14[1];
                    puVar14[1] = puVar14[2];
                    puVar14[2] = puVar14[3];
                    puVar14[3] = puVar14[4];
                    puVar14[4] = puVar14[5];
                    puVar14[5] = puVar14[6];
                    puVar14[6] = puVar14[7];
                    puVar13 = puVar14 + 8;
                    puVar14[7] = *puVar13;
                    puVar14 = puVar13;
                  } while (puVar13 < puVar16 + -1);
                }
                uVar11 = puVar8[0x18];
              }
              puVar8[0x18] = uVar11 - 1;
              if (plVar19 == (long *)0x0) {
                plVar9[2] = 0;
              }
              else {
                plVar9[2] = (long)plVar19;
              }
            }
            else {
              puVar10 = puVar10 + 1;
              plVar9 = plVar19;
            }
            uVar12 = (ulong)puVar8[0x18];
            puVar16 = (undefined8 *)(*(long *)(puVar8 + 0x16) + uVar12 * 8);
            plVar19 = plVar9;
          } while (puVar16 != puVar10);
        }
        FUN_0049a2f0(puVar8,param_3);
        puVar7 = PTR_DAT_02712dc0;
        puVar6 = PTR_DAT_02712a90;
        do {
          if (plVar9 == (long *)0x0) {
            return;
          }
          plVar19 = (long *)plVar9[2];
          uVar11 = *(uint *)(param_1 + 4);
          if (uVar11 != 0) {
            uVar4 = (int)plVar9[1] + (int)*plVar9;
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar4 / uVar11;
            }
            plVar2 = (long *)(param_1[3] + (ulong)(uVar4 - uVar5 * uVar11) * 8);
            plVar17 = (long *)*plVar2;
            if (plVar17 != (long *)0x0) {
              plVar15 = (long *)0x0;
              do {
                if ((*plVar17 == *plVar9) && ((int)plVar17[1] == (int)plVar9[1])) {
                  if (plVar15 != (long *)0x0) {
                    plVar2 = plVar15 + 2;
                  }
                  *plVar2 = plVar17[2];
                  *(int *)(param_1 + 5) = (int)param_1[5] + -1;
                  break;
                }
                plVar1 = plVar17 + 2;
                plVar15 = plVar17;
                plVar17 = (long *)*plVar1;
              } while ((long *)*plVar1 != (long *)0x0);
            }
          }
          FUN_00477e90(*(undefined8 *)puVar7,plVar9,0);
          uVar3 = *(undefined4 *)puVar6;
          if (plVar9[10] != 0) {
            *(undefined4 *)(plVar9 + 0xb) = 0;
            FUN_00404870(uVar3);
            plVar9[10] = 0;
            *(undefined4 *)((long)plVar9 + 0x5c) = 0;
          }
          FUN_00404870(uVar3,plVar9);
          plVar9 = plVar19;
        } while( true );
      }
    }
  }
  return;
}


