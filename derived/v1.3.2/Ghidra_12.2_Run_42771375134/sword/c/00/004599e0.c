/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004599e0; name: FUN_004599e0
 */


byte FUN_004599e0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  byte bVar17;
  ulong unaff_x22;
  long lVar18;
  long *plVar19;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar5 == 0) {
    iVar12 = *(int *)(param_2 + 0x10);
  }
  else {
    puVar7 = *(ulong **)(param_1 + 0x18);
    puVar8 = puVar7;
    do {
      if ((int)puVar7[1] == 0) {
        uVar11 = *puVar7;
        iVar12 = *(int *)(param_2 + 0x10) + -1;
        if (-1 < iVar12) {
          iVar13 = 0;
          do {
            while( true ) {
              iVar15 = iVar12 - iVar13;
              if (iVar15 < 0) {
                iVar15 = iVar15 + 1;
              }
              iVar15 = iVar13 + (iVar15 >> 1);
              uVar16 = *(ulong *)(*(long *)(param_2 + 8) + (long)iVar15 * 8);
              if (uVar11 > uVar16 || uVar16 == uVar11) break;
              iVar12 = iVar15 + -1;
              if (iVar12 < iVar13) goto LAB_00459b5c;
            }
            if (uVar11 <= uVar16) {
              if (*(long *)(param_2 + 8) + (long)iVar15 * 8 != 0) goto LAB_00459af0;
              break;
            }
            iVar13 = iVar15 + 1;
          } while (iVar13 <= iVar12);
        }
LAB_00459b5c:
        if (((uVar11 != 0xffffffffffffffff) && ((puVar7 + -3 < puVar8 || (puVar7[-3] != uVar11))))
           && ((puVar8 + (ulong)uVar5 * 3 + -3 < puVar7 + 3 || (puVar7[3] != uVar11)))) {
          uVar1 = *(uint *)(param_1 + 0x38);
          iVar12 = uVar1 - 1;
          if (-1 < iVar12) {
            lVar3 = *(long *)(param_1 + 0x30);
            iVar13 = 0;
            iVar15 = iVar12;
LAB_00459bb4:
            do {
              iVar2 = iVar15 - iVar13;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar13 + (iVar2 >> 1);
              uVar16 = *(ulong *)(lVar3 + (long)iVar2 * 8);
              if (uVar16 <= uVar11) {
                if (uVar16 < uVar11) goto code_r0x00459be8;
                puVar6 = (undefined8 *)(lVar3 + (long)iVar2 * 8);
                puVar9 = (undefined8 *)(lVar3 + (ulong)uVar1 * 8 + -8);
                if (puVar6 < puVar9) {
                  uVar11 = (ulong)uVar1 * 8 + -9 + (long)iVar2 * -8;
                  uVar5 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
                  if ((uVar5 & 7) != 0) {
                    lVar3 = -((ulong)uVar5 & 7);
                    puVar14 = puVar6;
                    do {
                      puVar6 = puVar14 + 1;
                      *puVar14 = *puVar6;
                      lVar3 = lVar3 + 1;
                      puVar14 = puVar6;
                    } while (lVar3 != 0);
                  }
                  if (0x37 < uVar11) {
                    do {
                      *puVar6 = puVar6[1];
                      puVar6[1] = puVar6[2];
                      puVar6[2] = puVar6[3];
                      puVar6[3] = puVar6[4];
                      puVar6[4] = puVar6[5];
                      puVar6[5] = puVar6[6];
                      puVar6[6] = puVar6[7];
                      puVar14 = puVar6 + 8;
                      puVar6[7] = *puVar14;
                      puVar6 = puVar14;
                    } while (puVar14 < puVar9);
                  }
                  iVar12 = *(int *)(param_1 + 0x38) + -1;
                  puVar8 = *(ulong **)(param_1 + 0x18);
                  uVar5 = *(uint *)(param_1 + 0x20);
                }
                *(int *)(param_1 + 0x38) = iVar12;
                puVar10 = puVar8 + (ulong)uVar5 * 3 + -3;
                goto joined_r0x00459ad0;
              }
              iVar15 = iVar2 + -1;
            } while (iVar13 <= iVar15);
          }
        }
LAB_00459bf4:
        puVar10 = puVar8 + (ulong)uVar5 * 3 + -3;
joined_r0x00459ad0:
        puVar4 = puVar7;
        if (puVar7 < puVar10) {
          do {
            puVar8 = puVar4 + 3;
            *(int *)(puVar4 + 2) = (int)puVar4[5];
            *puVar4 = *puVar8;
            puVar4[1] = puVar4[4];
            puVar4 = puVar8;
          } while (puVar8 < puVar10);
          uVar5 = *(uint *)(param_1 + 0x20);
          puVar8 = *(ulong **)(param_1 + 0x18);
        }
        uVar5 = uVar5 - 1;
        *(uint *)(param_1 + 0x20) = uVar5;
      }
      else {
LAB_00459af0:
        puVar7 = puVar7 + 3;
      }
    } while (puVar8 + (ulong)uVar5 * 3 != puVar7);
    iVar12 = *(int *)(param_2 + 0x10);
  }
  if (iVar12 == 0) {
    bVar17 = 1;
  }
  else {
    plVar19 = *(long **)(param_2 + 8);
    bVar17 = 1;
    do {
      lVar18 = *plVar19;
      unaff_x22 = unaff_x22 & 0xffffffff00000000;
      lVar3 = FUN_00458bb0(param_1,lVar18,unaff_x22);
      if (lVar18 != -1 && lVar3 != 0) {
        if ((((long *)(lVar3 - 0x18U) < *(long **)(param_1 + 0x18)) ||
            (*(long *)(lVar3 - 0x18U) != lVar18)) &&
           ((*(long **)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 3 + -3 <
             (long *)(lVar3 + 0x18U) || (*(long *)(lVar3 + 0x18U) != lVar18)))) {
          FUN_004e7fa0(param_1 + 0x28,lVar18);
        }
      }
      bVar17 = bVar17 & lVar3 != 0;
      plVar19 = plVar19 + 1;
    } while (plVar19 != (long *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 8));
  }
  return bVar17;
code_r0x00459be8:
  iVar13 = iVar2 + 1;
  if (iVar15 < iVar13) goto LAB_00459bf4;
  goto LAB_00459bb4;
}


