/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00459350; name: FUN_00459350
 */


void FUN_00459350(float param_1,undefined4 param_2,undefined4 param_3,long param_4,long *param_5,
                 long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  
  puVar7 = PTR_DAT_02712a90;
  if (*(int *)(param_4 + 0x20) != 0) {
    plVar13 = *(long **)(param_4 + 0x18);
    do {
      fVar15 = *(float *)(plVar13 + 2) * param_1;
      if (*(float *)PTR_DAT_02712d48 < fVar15) {
        if (*plVar13 == -1) {
          if (*(int *)(param_6 + 0x10) != 0) {
            puVar8 = *(undefined8 **)(param_6 + 8);
            do {
              uVar5 = *(uint *)(param_5 + 1);
              uVar14 = *(uint *)((long)param_5 + 0xc);
              if (uVar5 < uVar14) {
LAB_00459698:
                if (uVar5 < uVar14) {
                  uVar14 = *(uint *)(param_5 + 1);
                  lVar11 = *param_5;
                  *(uint *)(param_5 + 1) = uVar14 + 1;
                  puVar9 = (undefined8 *)(lVar11 + (ulong)uVar14 * 0x20);
                  if (puVar9 != (undefined8 *)0x0) {
                    *puVar9 = *puVar8;
                    lVar12 = plVar13[1];
                    lVar11 = lVar11 + (ulong)uVar14 * 0x20;
                    *(float *)(lVar11 + 0xc) = fVar15;
                    *(int *)(lVar11 + 8) = (int)lVar12;
                    *(undefined4 *)(lVar11 + 0x14) = param_2;
                    *(undefined4 *)(lVar11 + 0x18) = param_3;
                    *(undefined4 *)(lVar11 + 0x10) = 1;
                  }
                }
              }
              else {
                uVar14 = uVar14 + 1;
                puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar7,(ulong)uVar14 << 5);
                if (puVar9 != (undefined8 *)0x0) {
                  puVar10 = (undefined8 *)*param_5;
                  if ((puVar10 != (undefined8 *)0x0) && (puVar10 != puVar9)) {
                    uVar6 = *(uint *)(param_5 + 1);
                    if (uVar6 != 0) {
                      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar10 + 3);
                      puVar9[2] = puVar10[2];
                      puVar9[1] = puVar10[1];
                      *puVar9 = *puVar10;
                      if (uVar6 != 1) {
                        uVar4 = uVar6 + 7 & 7;
                        if ((ulong)uVar6 - 2 < 7) {
                          lVar12 = 1;
                        }
                        else {
                          lVar11 = 0x100;
                          lVar12 = 1;
                          do {
                            lVar2 = *param_5 + lVar11;
                            puVar10 = (undefined8 *)((long)puVar9 + lVar11);
                            *(undefined4 *)(puVar10 + -0x19) = *(undefined4 *)(lVar2 + -200);
                            puVar10[-0x1a] = *(undefined8 *)(lVar2 + -0xd0);
                            puVar10[-0x1b] = *(undefined8 *)(lVar2 + -0xd8);
                            puVar10[-0x1c] = *(undefined8 *)(lVar2 + -0xe0);
                            lVar2 = *param_5 + lVar11;
                            *(undefined4 *)(puVar10 + -0x15) = *(undefined4 *)(lVar2 + -0xa8);
                            puVar10[-0x16] = *(undefined8 *)(lVar2 + -0xb0);
                            puVar10[-0x17] = *(undefined8 *)(lVar2 + -0xb8);
                            puVar10[-0x18] = *(undefined8 *)(lVar2 + -0xc0);
                            lVar2 = *param_5 + lVar11;
                            *(undefined4 *)(puVar10 + -0x11) = *(undefined4 *)(lVar2 + -0x88);
                            puVar10[-0x12] = *(undefined8 *)(lVar2 + -0x90);
                            puVar10[-0x13] = *(undefined8 *)(lVar2 + -0x98);
                            puVar10[-0x14] = *(undefined8 *)(lVar2 + -0xa0);
                            lVar2 = *param_5 + lVar11;
                            *(undefined4 *)(puVar10 + -0xd) = *(undefined4 *)(lVar2 + -0x68);
                            puVar10[-0xe] = *(undefined8 *)(lVar2 + -0x70);
                            puVar10[-0xf] = *(undefined8 *)(lVar2 + -0x78);
                            puVar10[-0x10] = *(undefined8 *)(lVar2 + -0x80);
                            lVar2 = *param_5 + lVar11;
                            *(undefined4 *)(puVar10 + -9) = *(undefined4 *)(lVar2 + -0x48);
                            puVar10[-10] = *(undefined8 *)(lVar2 + -0x50);
                            puVar10[-0xb] = *(undefined8 *)(lVar2 + -0x58);
                            puVar10[-0xc] = *(undefined8 *)(lVar2 + -0x60);
                            lVar2 = *param_5 + lVar11;
                            *(undefined4 *)(puVar10 + -5) = *(undefined4 *)(lVar2 + -0x28);
                            puVar10[-6] = *(undefined8 *)(lVar2 + -0x30);
                            puVar10[-7] = *(undefined8 *)(lVar2 + -0x38);
                            puVar10[-8] = *(undefined8 *)(lVar2 + -0x40);
                            lVar2 = *param_5 + lVar11;
                            *(undefined4 *)(puVar10 + -1) = *(undefined4 *)(lVar2 + -8);
                            puVar10[-2] = *(undefined8 *)(lVar2 + -0x10);
                            puVar10[-3] = *(undefined8 *)(lVar2 + -0x18);
                            puVar10[-4] = *(undefined8 *)(lVar2 + -0x20);
                            puVar1 = (undefined8 *)(*param_5 + lVar11);
                            lVar11 = lVar11 + 0x100;
                            *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar1 + 3);
                            puVar10[2] = puVar1[2];
                            puVar10[1] = puVar1[1];
                            lVar12 = lVar12 + 8;
                            *puVar10 = *puVar1;
                          } while ((ulong)uVar6 - (ulong)uVar4 != lVar12);
                        }
                        if (uVar4 != 0) {
                          lVar12 = lVar12 << 5;
                          lVar11 = -(ulong)uVar4;
                          do {
                            puVar10 = (undefined8 *)(*param_5 + lVar12);
                            puVar1 = (undefined8 *)((long)puVar9 + lVar12);
                            lVar12 = lVar12 + 0x20;
                            *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar10 + 3);
                            puVar1[2] = puVar10[2];
                            puVar1[1] = puVar10[1];
                            lVar11 = lVar11 + 1;
                            *puVar1 = *puVar10;
                          } while (lVar11 != 0);
                        }
                      }
                      puVar10 = (undefined8 *)*param_5;
                    }
                    FUN_00404870(*(undefined4 *)puVar7,puVar10);
                  }
                  *param_5 = (long)puVar9;
                  *(uint *)((long)param_5 + 0xc) = uVar14;
                  goto LAB_00459698;
                }
              }
              puVar8 = puVar8 + 1;
            } while (puVar8 != (undefined8 *)
                               (*(long *)(param_6 + 8) + (ulong)*(uint *)(param_6 + 0x10) * 8));
          }
        }
        else {
          uVar5 = *(uint *)(param_5 + 1);
          uVar14 = *(uint *)((long)param_5 + 0xc);
          if (uVar14 <= uVar5) {
            uVar14 = uVar14 + 1;
            puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar7,(ulong)uVar14 << 5);
            if (puVar8 == (undefined8 *)0x0) goto LAB_004598f0;
            puVar9 = (undefined8 *)*param_5;
            if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar8)) {
              uVar6 = *(uint *)(param_5 + 1);
              if (uVar6 != 0) {
                *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar9 + 3);
                puVar8[2] = puVar9[2];
                puVar8[1] = puVar9[1];
                *puVar8 = *puVar9;
                if (uVar6 != 1) {
                  uVar4 = uVar6 + 7 & 7;
                  if ((ulong)uVar6 - 2 < 7) {
                    lVar12 = 1;
                  }
                  else {
                    lVar11 = 0x100;
                    lVar12 = 1;
                    do {
                      lVar2 = *param_5 + lVar11;
                      puVar9 = (undefined8 *)((long)puVar8 + lVar11);
                      *(undefined4 *)(puVar9 + -0x19) = *(undefined4 *)(lVar2 + -200);
                      puVar9[-0x1a] = *(undefined8 *)(lVar2 + -0xd0);
                      puVar9[-0x1b] = *(undefined8 *)(lVar2 + -0xd8);
                      puVar9[-0x1c] = *(undefined8 *)(lVar2 + -0xe0);
                      lVar2 = *param_5 + lVar11;
                      *(undefined4 *)(puVar9 + -0x15) = *(undefined4 *)(lVar2 + -0xa8);
                      puVar9[-0x16] = *(undefined8 *)(lVar2 + -0xb0);
                      puVar9[-0x17] = *(undefined8 *)(lVar2 + -0xb8);
                      puVar9[-0x18] = *(undefined8 *)(lVar2 + -0xc0);
                      lVar2 = *param_5 + lVar11;
                      *(undefined4 *)(puVar9 + -0x11) = *(undefined4 *)(lVar2 + -0x88);
                      puVar9[-0x12] = *(undefined8 *)(lVar2 + -0x90);
                      puVar9[-0x13] = *(undefined8 *)(lVar2 + -0x98);
                      puVar9[-0x14] = *(undefined8 *)(lVar2 + -0xa0);
                      lVar2 = *param_5 + lVar11;
                      *(undefined4 *)(puVar9 + -0xd) = *(undefined4 *)(lVar2 + -0x68);
                      puVar9[-0xe] = *(undefined8 *)(lVar2 + -0x70);
                      puVar9[-0xf] = *(undefined8 *)(lVar2 + -0x78);
                      puVar9[-0x10] = *(undefined8 *)(lVar2 + -0x80);
                      lVar2 = *param_5 + lVar11;
                      *(undefined4 *)(puVar9 + -9) = *(undefined4 *)(lVar2 + -0x48);
                      puVar9[-10] = *(undefined8 *)(lVar2 + -0x50);
                      puVar9[-0xb] = *(undefined8 *)(lVar2 + -0x58);
                      puVar9[-0xc] = *(undefined8 *)(lVar2 + -0x60);
                      lVar2 = *param_5 + lVar11;
                      *(undefined4 *)(puVar9 + -5) = *(undefined4 *)(lVar2 + -0x28);
                      puVar9[-6] = *(undefined8 *)(lVar2 + -0x30);
                      puVar9[-7] = *(undefined8 *)(lVar2 + -0x38);
                      puVar9[-8] = *(undefined8 *)(lVar2 + -0x40);
                      lVar2 = *param_5 + lVar11;
                      *(undefined4 *)(puVar9 + -1) = *(undefined4 *)(lVar2 + -8);
                      puVar9[-2] = *(undefined8 *)(lVar2 + -0x10);
                      puVar9[-3] = *(undefined8 *)(lVar2 + -0x18);
                      puVar9[-4] = *(undefined8 *)(lVar2 + -0x20);
                      puVar10 = (undefined8 *)(*param_5 + lVar11);
                      lVar11 = lVar11 + 0x100;
                      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar10 + 3);
                      puVar9[2] = puVar10[2];
                      puVar9[1] = puVar10[1];
                      lVar12 = lVar12 + 8;
                      *puVar9 = *puVar10;
                    } while ((ulong)uVar6 - (ulong)uVar4 != lVar12);
                  }
                  if (uVar4 != 0) {
                    lVar12 = lVar12 << 5;
                    lVar11 = -(ulong)uVar4;
                    do {
                      puVar9 = (undefined8 *)(*param_5 + lVar12);
                      puVar10 = (undefined8 *)((long)puVar8 + lVar12);
                      lVar12 = lVar12 + 0x20;
                      *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar9 + 3);
                      puVar10[2] = puVar9[2];
                      puVar10[1] = puVar9[1];
                      lVar11 = lVar11 + 1;
                      *puVar10 = *puVar9;
                    } while (lVar11 != 0);
                  }
                }
                puVar9 = (undefined8 *)*param_5;
              }
              FUN_00404870(*(undefined4 *)puVar7,puVar9);
            }
            *param_5 = (long)puVar8;
            *(uint *)((long)param_5 + 0xc) = uVar14;
          }
          if (uVar5 < uVar14) {
            uVar14 = *(uint *)(param_5 + 1);
            lVar11 = *param_5;
            *(uint *)(param_5 + 1) = uVar14 + 1;
            plVar3 = (long *)(lVar11 + (ulong)uVar14 * 0x20);
            if (plVar3 != (long *)0x0) {
              *plVar3 = *plVar13;
              lVar12 = plVar13[1];
              lVar11 = lVar11 + (ulong)uVar14 * 0x20;
              *(float *)(lVar11 + 0xc) = fVar15;
              *(int *)(lVar11 + 8) = (int)lVar12;
              *(undefined4 *)(lVar11 + 0x14) = param_2;
              *(undefined4 *)(lVar11 + 0x18) = param_3;
              *(undefined4 *)(lVar11 + 0x10) = 1;
            }
          }
        }
      }
LAB_004598f0:
      plVar13 = plVar13 + 3;
    } while (plVar13 !=
             (long *)(*(long *)(param_4 + 0x18) + (ulong)*(uint *)(param_4 + 0x20) * 0x18));
  }
  return;
}


