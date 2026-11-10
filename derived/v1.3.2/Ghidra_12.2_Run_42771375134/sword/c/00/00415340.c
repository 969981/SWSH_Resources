/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00415340; name: FUN_00415340
 */


undefined8 FUN_00415340(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  
  uVar12 = FUN_00409b70();
  if ((int)uVar12 == 1) {
    FUN_00415200((long *)(param_1 + 0xe8));
    uVar4 = *(uint *)*param_2;
    *param_2 = (long)((uint *)*param_2 + 1);
    puVar10 = PTR_DAT_02712a90;
    if (uVar4 == 0) {
LAB_004159c8:
      uVar12 = 1;
    }
    else {
      lVar13 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar4 * 0x60);
      *(long *)(param_1 + 0xe8) = lVar13;
      if (lVar13 != 0) {
        uVar19 = 0;
        *(uint *)(param_1 + 0xf4) = uVar4;
        uVar22 = *(uint *)(param_1 + 0xf0);
        if (uVar22 < uVar4) goto LAB_004153ec;
        do {
          plVar23 = (long *)0x0;
LAB_00415418:
          puVar16 = (uint *)*param_2;
          uVar22 = *puVar16;
          *param_2 = (long)(puVar16 + 1);
          if (uVar22 == 0) {
            uVar20 = puVar16[1];
            puVar16 = puVar16 + 2;
            *param_2 = (long)puVar16;
            if (uVar20 == 0) goto LAB_00415728;
LAB_004155a4:
            lVar13 = FUN_00404690(*(undefined4 *)puVar10,(ulong)uVar20 << 2);
            plVar23[2] = lVar13;
            if (lVar13 == 0) goto LAB_004159d0;
            *(uint *)((long)plVar23 + 0x1c) = uVar20;
            uVar21 = 0;
            uVar22 = *(uint *)*param_2;
            *param_2 = (long)((uint *)*param_2 + 1);
            do {
              uVar2 = *(uint *)(plVar23 + 3);
              uVar18 = *(uint *)((long)plVar23 + 0x1c);
              if (uVar2 < uVar18) {
LAB_004156d8:
                if (uVar2 < uVar18) {
                  puVar16 = (uint *)(plVar23[2] + (ulong)*(uint *)(plVar23 + 3) * 4);
                  *(uint *)(plVar23 + 3) = *(uint *)(plVar23 + 3) + 1;
                  if (puVar16 != (uint *)0x0) {
                    *puVar16 = uVar22;
                  }
                }
              }
              else {
                uVar18 = uVar18 + 0x10;
                puVar14 = (undefined4 *)FUN_00404690(*(undefined4 *)puVar10,(ulong)uVar18 << 2);
                if (puVar14 != (undefined4 *)0x0) {
                  puVar15 = (undefined4 *)plVar23[2];
                  if ((puVar15 != (undefined4 *)0x0) && (puVar15 != puVar14)) {
                    uVar3 = *(uint *)(plVar23 + 3);
                    if (uVar3 != 0) {
                      *puVar14 = *puVar15;
                      if (uVar3 != 1) {
                        uVar1 = uVar3 + 3 & 3;
                        if ((ulong)uVar3 - 2 < 3) {
                          lVar17 = 1;
                        }
                        else {
                          lVar13 = 0;
                          do {
                            lVar17 = lVar13;
                            lVar13 = lVar17 * 4;
                            puVar14[lVar17 + 1] = *(undefined4 *)(plVar23[2] + lVar13 + 4);
                            puVar14[lVar17 + 2] = *(undefined4 *)(plVar23[2] + lVar13 + 8);
                            puVar14[lVar17 + 3] = *(undefined4 *)(plVar23[2] + lVar13 + 0xc);
                            puVar14[lVar17 + 4] = *(undefined4 *)(plVar23[2] + lVar13 + 0x10);
                            lVar13 = lVar17 + 4;
                          } while (((ulong)uVar3 - 1) - (ulong)uVar1 != lVar17 + 4);
                          lVar17 = lVar17 + 5;
                        }
                        if (uVar1 != 0) {
                          lVar17 = lVar17 << 2;
                          lVar13 = -(ulong)uVar1;
                          do {
                            *(undefined4 *)((long)puVar14 + lVar17) =
                                 *(undefined4 *)(plVar23[2] + lVar17);
                            lVar17 = lVar17 + 4;
                            lVar13 = lVar13 + 1;
                          } while (lVar13 != 0);
                        }
                      }
                      puVar15 = (undefined4 *)plVar23[2];
                    }
                    FUN_00404870(*(undefined4 *)puVar10,puVar15);
                  }
                  plVar23[2] = (long)puVar14;
                  *(uint *)((long)plVar23 + 0x1c) = uVar18;
                  goto LAB_004156d8;
                }
              }
              uVar22 = *(uint *)*param_2;
              uVar21 = uVar21 + 1;
              *param_2 = (long)((uint *)*param_2 + 1);
            } while (uVar21 != uVar20);
          }
          else {
            lVar13 = FUN_00404690(*(undefined4 *)puVar10,(ulong)uVar22 << 2);
            *plVar23 = lVar13;
            if (lVar13 == 0) goto LAB_004159d0;
            *(uint *)((long)plVar23 + 0xc) = uVar22;
            uVar21 = 0;
            uVar20 = *(uint *)*param_2;
            *param_2 = (long)((uint *)*param_2 + 1);
            do {
              uVar2 = *(uint *)(plVar23 + 1);
              uVar18 = *(uint *)((long)plVar23 + 0xc);
              if (uVar2 < uVar18) {
LAB_0041555c:
                if (uVar2 < uVar18) {
                  puVar16 = (uint *)(*plVar23 + (ulong)*(uint *)(plVar23 + 1) * 4);
                  *(uint *)(plVar23 + 1) = *(uint *)(plVar23 + 1) + 1;
                  if (puVar16 != (uint *)0x0) {
                    *puVar16 = uVar20;
                  }
                }
              }
              else {
                uVar18 = uVar18 + 0x10;
                puVar14 = (undefined4 *)FUN_00404690(*(undefined4 *)puVar10,(ulong)uVar18 << 2);
                if (puVar14 != (undefined4 *)0x0) {
                  puVar15 = (undefined4 *)*plVar23;
                  if ((puVar15 != (undefined4 *)0x0) && (puVar15 != puVar14)) {
                    uVar3 = *(uint *)(plVar23 + 1);
                    if (uVar3 != 0) {
                      *puVar14 = *puVar15;
                      if (uVar3 != 1) {
                        uVar1 = uVar3 + 3 & 3;
                        if ((ulong)uVar3 - 2 < 3) {
                          lVar17 = 1;
                        }
                        else {
                          lVar13 = 0;
                          do {
                            lVar17 = lVar13;
                            lVar13 = lVar17 * 4;
                            puVar14[lVar17 + 1] = *(undefined4 *)(*plVar23 + lVar13 + 4);
                            puVar14[lVar17 + 2] = *(undefined4 *)(*plVar23 + lVar13 + 8);
                            puVar14[lVar17 + 3] = *(undefined4 *)(*plVar23 + lVar13 + 0xc);
                            puVar14[lVar17 + 4] = *(undefined4 *)(*plVar23 + lVar13 + 0x10);
                            lVar13 = lVar17 + 4;
                          } while (((ulong)uVar3 - 1) - (ulong)uVar1 != lVar17 + 4);
                          lVar17 = lVar17 + 5;
                        }
                        if (uVar1 != 0) {
                          lVar17 = lVar17 << 2;
                          lVar13 = -(ulong)uVar1;
                          do {
                            *(undefined4 *)((long)puVar14 + lVar17) =
                                 *(undefined4 *)(*plVar23 + lVar17);
                            lVar17 = lVar17 + 4;
                            lVar13 = lVar13 + 1;
                          } while (lVar13 != 0);
                        }
                      }
                      puVar15 = (undefined4 *)*plVar23;
                    }
                    FUN_00404870(*(undefined4 *)puVar10,puVar15);
                  }
                  *plVar23 = (long)puVar14;
                  *(uint *)((long)plVar23 + 0xc) = uVar18;
                  goto LAB_0041555c;
                }
              }
              puVar16 = (uint *)*param_2;
              uVar21 = uVar21 + 1;
              uVar20 = *puVar16;
              *param_2 = (long)(puVar16 + 1);
            } while (uVar21 != uVar22);
            puVar16 = puVar16 + 1;
            if (uVar20 != 0) goto LAB_004155a4;
LAB_00415728:
            uVar22 = *puVar16;
            *param_2 = (long)(puVar16 + 1);
          }
          *(uint *)(plVar23 + 4) = uVar22;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar23 + 0x24) = uVar5;
          iVar8 = *(int *)*param_2;
          *param_2 = (long)((int *)*param_2 + 1);
          puVar11 = PTR_DAT_02712b38;
          auVar9 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)iVar8)) *
                   SEXT816(0x20c49ba5e353f7cf);
          *(int *)(plVar23 + 5) = (int)(auVar9._8_8_ >> 7) - (auVar9._12_4_ >> 0x1f);
          bVar6 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 4);
          *(byte *)(plVar23 + 6) = *(byte *)(plVar23 + 6) & 0xe0 | bVar6 & 0x1f;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar23 + 0x2c) = uVar5;
          bVar6 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          *(byte *)(plVar23 + 6) = *(byte *)(plVar23 + 6) & 0xdf | (bVar6 & 1) << 5;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar23 + 0x34) = uVar5;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(plVar23 + 7) = uVar5;
          iVar8 = *(int *)*param_2;
          *param_2 = (long)((int *)*param_2 + 1);
          auVar9 = SEXT816((long)((ulong)*(uint *)puVar11 * (long)iVar8)) *
                   SEXT816(0x20c49ba5e353f7cf);
          *(int *)((long)plVar23 + 0x3c) = (int)(auVar9._8_8_ >> 7) - (auVar9._12_4_ >> 0x1f);
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(plVar23 + 8) = uVar5;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar23 + 0x44) = uVar5;
          bVar6 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 2);
          *(byte *)(plVar23 + 9) = *(byte *)(plVar23 + 9) & 0xf8 | bVar6 & 7;
          bVar6 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          *(byte *)(plVar23 + 9) = *(byte *)(plVar23 + 9) & 0xf7 | (bVar6 & 1) << 3;
          bVar6 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          *(byte *)(plVar23 + 9) = *(byte *)(plVar23 + 9) & 0xef | (bVar6 & 1) << 4;
          cVar7 = *(char *)*param_2;
          *param_2 = (long)((char *)*param_2 + 1);
          if (cVar7 != '\0') {
            puVar14 = (undefined4 *)FUN_00404690(*(undefined4 *)puVar10,0x20);
            plVar23[10] = (long)puVar14;
            if (puVar14 != (undefined4 *)0x0) {
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (long)((undefined4 *)*param_2 + 1);
              *puVar14 = uVar5;
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (long)((undefined4 *)*param_2 + 1);
              puVar14[1] = uVar5;
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (long)((undefined4 *)*param_2 + 1);
              puVar14[2] = uVar5;
              iVar8 = *(int *)*param_2;
              *param_2 = (long)((int *)*param_2 + 1);
              puVar11 = PTR_DAT_02712b38;
              auVar9 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)iVar8)) *
                       SEXT816(0x20c49ba5e353f7cf);
              puVar14[3] = (int)(auVar9._8_8_ >> 7) - (auVar9._12_4_ >> 0x1f);
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (long)((undefined4 *)*param_2 + 1);
              puVar14[4] = uVar5;
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (long)((undefined4 *)*param_2 + 1);
              puVar14[5] = uVar5;
              iVar8 = *(int *)*param_2;
              *param_2 = (long)((int *)*param_2 + 1);
              auVar9 = SEXT816((long)((ulong)*(uint *)puVar11 * (long)iVar8)) *
                       SEXT816(0x20c49ba5e353f7cf);
              puVar14[6] = (int)(auVar9._8_8_ >> 7) - (auVar9._12_4_ >> 0x1f);
              bVar6 = *(byte *)*param_2;
              *param_2 = (long)((byte *)*param_2 + 1);
              *(byte *)(puVar14 + 7) = *(byte *)(puVar14 + 7) & 0xfe | bVar6 & 1;
              bVar6 = *(byte *)*param_2;
              *param_2 = (long)((byte *)*param_2 + 1);
              *(byte *)(puVar14 + 7) = *(byte *)(puVar14 + 7) & 0xfd | (bVar6 & 1) << 1;
            }
          }
          *(uint *)(plVar23 + 0xb) = uVar19;
          uVar19 = uVar19 + 1;
          if (uVar4 <= uVar19) goto LAB_004159c8;
          uVar22 = *(uint *)(param_1 + 0xf0);
        } while (*(uint *)(param_1 + 0xf4) <= uVar22);
LAB_004153ec:
        plVar23 = (long *)(*(long *)(param_1 + 0xe8) + (ulong)uVar22 * 0x60);
        *(uint *)(param_1 + 0xf0) = uVar22 + 1;
        if (plVar23 != (long *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0xe8) + (ulong)uVar22 * 0x60 + 0x50) = 0;
          plVar23[2] = 0;
          plVar23[3] = 0;
          *plVar23 = 0;
          plVar23[1] = 0;
        }
        goto LAB_00415418;
      }
LAB_004159d0:
      uVar12 = 2;
    }
  }
  return uVar12;
}


