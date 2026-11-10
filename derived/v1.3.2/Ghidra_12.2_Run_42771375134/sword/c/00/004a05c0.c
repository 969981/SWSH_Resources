/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a05c0; name: FUN_004a05c0
 */


void FUN_004a05c0(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  
  puVar5 = PTR_DAT_02712a90;
  bVar1 = *param_2;
  if (bVar1 == 0xff) {
    if (*(long *)(param_2 + 8) == 0) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      puVar5 = PTR_DAT_02712a90;
      puVar25 = *(undefined8 **)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x18) != 0) {
        lVar22 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
        plVar24 = puVar25 + 2;
        do {
          if (*plVar24 != 0) {
            *(undefined4 *)(plVar24 + 1) = 0;
            FUN_00404870(*(undefined4 *)puVar5);
            *plVar24 = 0;
            *(undefined4 *)((long)plVar24 + 0xc) = 0;
          }
          lVar22 = lVar22 + -0x28;
          plVar24 = plVar24 + 5;
        } while (lVar22 != 0);
        puVar25 = *(undefined8 **)(param_1 + 0x10);
      }
      if (puVar25 != (undefined8 *)0x0) {
        if (*(uint *)(param_1 + 0x18) != 0) {
          lVar22 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
          do {
            (**(code **)*puVar25)(puVar25);
            lVar22 = lVar22 + -0x28;
            puVar25 = puVar25 + 5;
          } while (lVar22 != 0);
          puVar25 = *(undefined8 **)(param_1 + 0x10);
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar25);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      puVar25 = *(undefined8 **)(param_1 + 0x10);
      do {
        uVar13 = *(ulong *)(param_2 + 8);
        if (uVar13 == 0) {
          if (*(char *)((long)puVar25 + 0xc) != '\0') {
            *(undefined1 *)((long)puVar25 + 0xc) = 0;
          }
          if (puVar25[2] != 0) {
            *(undefined4 *)(puVar25 + 3) = 0;
            FUN_00404870(*(undefined4 *)puVar5);
            puVar25[2] = 0;
            *(undefined4 *)((long)puVar25 + 0x1c) = 0;
          }
        }
        else {
          uVar6 = *(uint *)(puVar25 + 3);
          iVar12 = uVar6 - 1;
          if (-1 < iVar12) {
            lVar22 = puVar25[2];
            iVar15 = 0;
            iVar19 = iVar12;
LAB_004a07e4:
            do {
              iVar4 = iVar19 - iVar15;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar15 + (iVar4 >> 1);
              uVar21 = *(ulong *)(lVar22 + (long)iVar4 * 0x10 + 8);
              if (uVar21 <= uVar13) {
                if (uVar21 < uVar13) goto code_r0x004a081c;
                puVar14 = (undefined8 *)(lVar22 + (long)iVar4 * 0x10);
                puVar9 = (undefined8 *)(lVar22 + (ulong)uVar6 * 0x10 + -0x10);
                if (puVar14 < puVar9) {
                  uVar13 = (ulong)uVar6 * 0x10 + -0x11 + (long)iVar4 * -0x10;
                  uVar6 = ((uint)(uVar13 >> 4) & 0xfffffff) + 1;
                  if ((uVar6 & 7) != 0) {
                    lVar22 = -((ulong)uVar6 & 7);
                    puVar18 = puVar14;
                    do {
                      puVar14 = puVar18 + 2;
                      *puVar18 = *puVar14;
                      puVar18[1] = puVar18[3];
                      lVar22 = lVar22 + 1;
                      puVar18 = puVar14;
                    } while (lVar22 != 0);
                  }
                  if (0x6f < uVar13) {
                    do {
                      *puVar14 = puVar14[2];
                      puVar14[1] = puVar14[3];
                      puVar14[2] = puVar14[4];
                      puVar14[3] = puVar14[5];
                      puVar14[4] = puVar14[6];
                      puVar14[5] = puVar14[7];
                      puVar14[6] = puVar14[8];
                      puVar14[7] = puVar14[9];
                      puVar14[8] = puVar14[10];
                      puVar14[9] = puVar14[0xb];
                      puVar14[10] = puVar14[0xc];
                      puVar14[0xb] = puVar14[0xd];
                      puVar14[0xc] = puVar14[0xe];
                      puVar14[0xd] = puVar14[0xf];
                      puVar18 = puVar14 + 0x10;
                      puVar14[0xe] = *puVar18;
                      puVar14[0xf] = puVar14[0x11];
                      puVar14 = puVar18;
                    } while (puVar18 < puVar9);
                  }
                  iVar12 = *(int *)(puVar25 + 3) + -1;
                }
                *(int *)(puVar25 + 3) = iVar12;
                cVar3 = *(char *)((long)puVar25 + 0xc);
                goto joined_r0x004a09f8;
              }
              iVar19 = iVar4 + -1;
            } while (iVar15 <= iVar19);
          }
        }
LAB_004a0854:
        cVar3 = *(char *)((long)puVar25 + 0xc);
joined_r0x004a09f8:
        if ((cVar3 == '\0') && (*(int *)(puVar25 + 3) == 0)) {
          if (puVar25[2] != 0) {
            *(undefined4 *)(puVar25 + 3) = 0;
            FUN_00404870(*(undefined4 *)puVar5);
            puVar25[2] = 0;
            *(undefined4 *)((long)puVar25 + 0x1c) = 0;
          }
          puVar14 = (undefined8 *)
                    (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28 + -0x28);
          if (puVar25 < puVar14) {
            puVar9 = puVar25 + 6;
            puVar18 = puVar25;
            do {
              *(undefined1 *)(puVar9 + -2) = *(undefined1 *)(puVar9 + 3);
              *(undefined4 *)(puVar9 + -5) = *(undefined4 *)puVar9;
              *(undefined1 *)((long)puVar9 + -0x24) = *(undefined1 *)((long)puVar9 + 4);
              if (puVar9[-4] == 0) {
                puVar26 = puVar9 + -3;
                puVar8 = (undefined4 *)((long)puVar9 + -0x14);
              }
              else {
                *(undefined4 *)(puVar9 + -3) = 0;
                puVar26 = puVar18 + 3;
                FUN_00404870(*(undefined4 *)puVar5);
                puVar8 = (undefined4 *)((long)puVar18 + 0x1c);
                puVar9[-4] = 0;
                *(undefined4 *)((long)puVar9 + -0x14) = 0;
              }
              puVar9[-4] = puVar9[1];
              *(undefined4 *)puVar26 = *(undefined4 *)(puVar9 + 2);
              *puVar8 = *(undefined4 *)((long)puVar9 + 0x14);
              puVar26 = puVar9 + -1;
              puVar9[1] = 0;
              puVar9[2] = 0;
              puVar9 = puVar9 + 5;
              puVar18 = puVar18 + 5;
            } while (puVar26 < puVar14);
          }
          (**(code **)*puVar14)(puVar14);
          uVar6 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar6;
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x18);
          puVar25 = puVar25 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 0x28) != puVar25);
    }
  }
  else {
    iVar12 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar12) {
      lVar22 = *(long *)(param_1 + 0x10);
      iVar15 = 0;
      do {
        while( true ) {
          iVar19 = iVar12 - iVar15;
          if (iVar19 < 0) {
            iVar19 = iVar19 + 1;
          }
          iVar19 = iVar15 + (iVar19 >> 1);
          lVar23 = (long)iVar19;
          bVar2 = *(byte *)(lVar22 + (long)iVar19 * 0x28 + 0x20);
          if (bVar1 < bVar2) break;
          if (bVar1 <= bVar2) {
            if (lVar22 + lVar23 * 0x28 == 0) {
              return;
            }
            uVar13 = *(ulong *)(param_2 + 8);
            if (uVar13 != 0) {
              puVar7 = (uint *)(lVar22 + lVar23 * 0x28 + 0x18);
              uVar6 = *puVar7;
              uVar16 = uVar6 - 1;
              if ((int)uVar16 < 0) goto LAB_004a0b3c;
              lVar17 = *(long *)(lVar22 + lVar23 * 0x28 + 0x10);
              iVar12 = 0;
              uVar20 = uVar16;
              goto LAB_004a076c;
            }
            pcVar10 = (char *)(lVar22 + lVar23 * 0x28 + 0xc);
            if (*pcVar10 != '\0') {
              *pcVar10 = '\0';
            }
            plVar24 = (long *)(lVar22 + lVar23 * 0x28 + 0x10);
            if (*plVar24 == 0) goto LAB_004a0b3c;
            lVar17 = lVar22 + lVar23 * 0x28;
            *(undefined4 *)(lVar17 + 0x18) = 0;
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
            *plVar24 = 0;
            *(undefined4 *)(lVar17 + 0x1c) = 0;
            cVar3 = *(char *)(lVar22 + lVar23 * 0x28 + 0xc);
            goto joined_r0x004a0b48;
          }
          iVar15 = iVar19 + 1;
          if (iVar12 < iVar15) {
            return;
          }
        }
        iVar12 = iVar19 + -1;
      } while (iVar15 <= iVar12);
    }
  }
  return;
code_r0x004a081c:
  iVar15 = iVar4 + 1;
  if (iVar19 < iVar15) goto LAB_004a0854;
  goto LAB_004a07e4;
LAB_004a076c:
  iVar15 = uVar20 - iVar12;
  if (iVar15 < 0) {
    iVar15 = iVar15 + 1;
  }
  iVar15 = iVar12 + (iVar15 >> 1);
  uVar21 = *(ulong *)(lVar17 + (long)iVar15 * 0x10 + 8);
  if (uVar21 <= uVar13) {
    if (uVar21 < uVar13) {
      iVar12 = iVar15 + 1;
      if ((int)uVar20 < iVar12) goto LAB_004a0b3c;
      goto LAB_004a076c;
    }
    puVar25 = (undefined8 *)(lVar17 + (long)iVar15 * 0x10);
    puVar14 = (undefined8 *)(lVar17 + (ulong)uVar6 * 0x10 + -0x10);
    if (puVar25 < puVar14) {
      uVar13 = (ulong)uVar6 * 0x10 + -0x11 + (long)iVar15 * -0x10;
      uVar6 = ((uint)(uVar13 >> 4) & 0xfffffff) + 1;
      if ((uVar6 & 7) != 0) {
        lVar17 = -((ulong)uVar6 & 7);
        puVar9 = puVar25;
        do {
          puVar25 = puVar9 + 2;
          *puVar9 = *puVar25;
          puVar9[1] = puVar9[3];
          lVar17 = lVar17 + 1;
          puVar9 = puVar25;
        } while (lVar17 != 0);
      }
      if (0x6f < uVar13) {
        do {
          *puVar25 = puVar25[2];
          puVar25[1] = puVar25[3];
          puVar25[2] = puVar25[4];
          puVar25[3] = puVar25[5];
          puVar25[4] = puVar25[6];
          puVar25[5] = puVar25[7];
          puVar25[6] = puVar25[8];
          puVar25[7] = puVar25[9];
          puVar25[8] = puVar25[10];
          puVar25[9] = puVar25[0xb];
          puVar25[10] = puVar25[0xc];
          puVar25[0xb] = puVar25[0xd];
          puVar25[0xc] = puVar25[0xe];
          puVar25[0xd] = puVar25[0xf];
          puVar9 = puVar25 + 0x10;
          puVar25[0xe] = *puVar9;
          puVar25[0xf] = puVar25[0x11];
          puVar25 = puVar9;
        } while (puVar9 < puVar14);
      }
      uVar16 = *puVar7 - 1;
    }
    *puVar7 = uVar16;
LAB_004a0b3c:
    cVar3 = *(char *)(lVar22 + lVar23 * 0x28 + 0xc);
joined_r0x004a0b48:
    if (cVar3 != '\0') {
      return;
    }
    piVar11 = (int *)(lVar22 + lVar23 * 0x28 + 0x18);
    if (*piVar11 != 0) {
      return;
    }
    plVar24 = (long *)(lVar22 + lVar23 * 0x28 + 0x10);
    if (*plVar24 != 0) {
      *piVar11 = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *plVar24 = 0;
      *(undefined4 *)(lVar22 + lVar23 * 0x28 + 0x1c) = 0;
    }
    FUN_004a0d40((long *)(param_1 + 0x10),*param_2);
    return;
  }
  uVar20 = iVar15 - 1;
  if ((int)uVar20 < iVar12) goto LAB_004a0b3c;
  goto LAB_004a076c;
}


