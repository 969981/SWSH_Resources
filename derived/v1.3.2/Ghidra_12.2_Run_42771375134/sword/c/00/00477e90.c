/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00477e90; name: FUN_00477e90
 */


void FUN_00477e90(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    return;
  }
  uVar9 = 0;
  uVar4 = (uint)*param_2;
  if (uVar8 != 0) {
    uVar9 = uVar4 / uVar8;
  }
  plVar19 = *(long **)(*param_1 + (ulong)(uVar4 - uVar9 * uVar8) * 8);
  while( true ) {
    if (plVar19 == (long *)0x0) {
      return;
    }
    if (plVar19[2] == *param_2) break;
    plVar19 = (long *)plVar19[3];
  }
  plVar20 = (long *)*plVar19;
  if ((int)plVar19[1] != 0) {
    uVar22 = 0;
    uVar23 = ~(ulong)plVar20;
    plVar21 = plVar20;
    while (param_3 != 0) {
      while (plVar20 = (long *)*plVar21, (int)plVar20[2] == param_3) {
        if (*(uint *)(param_2 + 0xb) != 0) {
          lVar5 = (ulong)*(uint *)(param_2 + 0xb) * 0x18;
          piVar10 = (int *)(param_2[10] + 4);
          do {
            if (*piVar10 == param_3) goto LAB_004783d8;
            lVar5 = lVar5 + -0x18;
            piVar10 = piVar10 + 6;
          } while (lVar5 != 0);
        }
        uVar8 = *(uint *)(plVar20 + 0xd);
        uVar6 = (ulong)uVar8;
        uVar9 = uVar8 - 1;
        if (-1 < (int)uVar9) {
          lVar5 = plVar20[0xc];
          iVar1 = (int)param_2[9];
          iVar17 = 0;
          uVar4 = uVar9;
LAB_00477f64:
          do {
            iVar3 = uVar4 - iVar17;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar17 + (iVar3 >> 1);
            plVar18 = *(long **)(lVar5 + (long)iVar3 * 8);
            iVar2 = (int)plVar18[9];
            if ((iVar1 < iVar2) || (param_2 < plVar18 && iVar1 == iVar2)) goto LAB_00477fc0;
            if ((iVar1 == iVar2 || iVar1 < iVar2) && (param_2 <= plVar18 || iVar1 != iVar2)) {
              puVar7 = (undefined8 *)(lVar5 + (long)iVar3 * 8);
              puVar12 = (undefined8 *)(lVar5 + uVar6 * 8 + -8);
              if (puVar7 < puVar12) {
                uVar6 = uVar6 * 8 + -9 + (long)iVar3 * -8;
                uVar8 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
                if ((uVar8 & 7) != 0) {
                  lVar5 = -((ulong)uVar8 & 7);
                  puVar14 = puVar7;
                  do {
                    puVar7 = puVar14 + 1;
                    *puVar14 = *puVar7;
                    lVar5 = lVar5 + 1;
                    puVar14 = puVar7;
                  } while (lVar5 != 0);
                }
                if (0x37 < uVar6) {
                  do {
                    *puVar7 = puVar7[1];
                    puVar7[1] = puVar7[2];
                    puVar7[2] = puVar7[3];
                    puVar7[3] = puVar7[4];
                    puVar7[4] = puVar7[5];
                    puVar7[5] = puVar7[6];
                    puVar7[6] = puVar7[7];
                    puVar14 = puVar7 + 8;
                    puVar7[7] = *puVar14;
                    puVar7 = puVar14;
                  } while (puVar14 < puVar12);
                }
                uVar9 = (int)plVar20[0xd] - 1;
              }
              uVar6 = (ulong)uVar9;
              *(uint *)(plVar20 + 0xd) = uVar9;
              uVar8 = uVar9;
              break;
            }
            iVar17 = iVar3 + 1;
          } while (iVar17 <= (int)uVar4);
        }
joined_r0x0047815c:
        if (uVar8 != 0) {
          lVar5 = uVar6 << 3;
          puVar7 = (undefined8 *)plVar20[0xc];
          do {
            if (*(long *)*puVar7 == *param_2) goto LAB_004783d8;
            lVar5 = lVar5 + -8;
            puVar7 = puVar7 + 1;
          } while (lVar5 != 0);
        }
        uVar8 = *(uint *)(plVar19 + 1);
        plVar18 = (long *)(*plVar19 + (ulong)uVar8 * 8 + -8);
        if (plVar21 < plVar18) {
          uVar6 = *plVar19 + ~uVar22 * 8 + uVar23 + (ulong)uVar8 * 8;
          uVar8 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
          plVar11 = plVar21;
          if ((uVar8 & 7) != 0) {
            lVar5 = -((ulong)uVar8 & 7);
            plVar16 = plVar21;
            do {
              plVar11 = plVar16 + 1;
              *plVar16 = *plVar11;
              lVar5 = lVar5 + 1;
              plVar16 = plVar11;
            } while (lVar5 != 0);
          }
          if (0x37 < uVar6) {
            do {
              *plVar11 = plVar11[1];
              plVar11[1] = plVar11[2];
              plVar11[2] = plVar11[3];
              plVar11[3] = plVar11[4];
              plVar11[4] = plVar11[5];
              plVar11[5] = plVar11[6];
              plVar11[6] = plVar11[7];
              plVar16 = plVar11 + 8;
              plVar11[7] = *plVar16;
              plVar11 = plVar16;
            } while (plVar16 < plVar18);
          }
          uVar8 = *(uint *)(plVar19 + 1);
        }
        *(uint *)(plVar19 + 1) = uVar8 - 1;
        (**(code **)(*plVar20 + 0x18))();
        plVar20 = (long *)*plVar19;
        uVar8 = *(uint *)(plVar19 + 1);
        if (plVar20 + uVar8 == plVar21) goto LAB_004783f4;
      }
LAB_004783d8:
      plVar20 = (long *)*plVar19;
      uVar8 = *(uint *)(plVar19 + 1);
      plVar21 = plVar21 + 1;
      uVar22 = uVar22 + 1;
      if (plVar20 + uVar8 == plVar21) goto LAB_004783f4;
    }
    do {
      plVar20 = (long *)*plVar21;
      if (*(uint *)(param_2 + 0xb) != 0) {
        lVar5 = (ulong)*(uint *)(param_2 + 0xb) * 0x18;
        piVar10 = (int *)(param_2[10] + 4);
        do {
          if (*piVar10 == (int)plVar20[2]) goto LAB_004783d8;
          lVar5 = lVar5 + -0x18;
          piVar10 = piVar10 + 6;
        } while (lVar5 != 0);
      }
      uVar8 = *(uint *)(plVar20 + 0xd);
      uVar6 = (ulong)uVar8;
      uVar9 = uVar8 - 1;
      if (-1 < (int)uVar9) {
        lVar5 = plVar20[0xc];
        iVar1 = (int)param_2[9];
        iVar17 = 0;
        uVar4 = uVar9;
LAB_0047827c:
        do {
          iVar3 = uVar4 - iVar17;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar17 + (iVar3 >> 1);
          plVar18 = *(long **)(lVar5 + (long)iVar3 * 8);
          iVar2 = (int)plVar18[9];
          if ((iVar1 < iVar2) || (param_2 < plVar18 && iVar1 == iVar2)) goto LAB_004782d8;
          if ((iVar1 <= iVar2) && (param_2 <= plVar18 || iVar1 != iVar2)) {
            puVar7 = (undefined8 *)(lVar5 + (long)iVar3 * 8);
            puVar12 = (undefined8 *)(lVar5 + uVar6 * 8 + -8);
            if (puVar7 < puVar12) {
              uVar6 = uVar6 * 8 + -9 + (long)iVar3 * -8;
              uVar8 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
              if ((uVar8 & 7) != 0) {
                lVar5 = -((ulong)uVar8 & 7);
                puVar14 = puVar7;
                do {
                  puVar7 = puVar14 + 1;
                  *puVar14 = *puVar7;
                  lVar5 = lVar5 + 1;
                  puVar14 = puVar7;
                } while (lVar5 != 0);
              }
              if (0x37 < uVar6) {
                do {
                  *puVar7 = puVar7[1];
                  puVar7[1] = puVar7[2];
                  puVar7[2] = puVar7[3];
                  puVar7[3] = puVar7[4];
                  puVar7[4] = puVar7[5];
                  puVar7[5] = puVar7[6];
                  puVar7[6] = puVar7[7];
                  puVar14 = puVar7 + 8;
                  puVar7[7] = *puVar14;
                  puVar7 = puVar14;
                } while (puVar14 < puVar12);
              }
              uVar9 = (int)plVar20[0xd] - 1;
            }
            *(uint *)(plVar20 + 0xd) = uVar9;
            uVar6 = (ulong)uVar9;
            uVar8 = uVar9;
            break;
          }
          iVar17 = iVar3 + 1;
        } while (iVar17 <= (int)uVar4);
      }
joined_r0x00478220:
      if (uVar8 != 0) {
        lVar5 = uVar6 << 3;
        puVar7 = (undefined8 *)plVar20[0xc];
        do {
          if (*(long *)*puVar7 == *param_2) goto LAB_004783d8;
          lVar5 = lVar5 + -8;
          puVar7 = puVar7 + 1;
        } while (lVar5 != 0);
      }
      uVar8 = *(uint *)(plVar19 + 1);
      plVar18 = (long *)(*plVar19 + (ulong)uVar8 * 8 + -8);
      if (plVar21 < plVar18) {
        uVar6 = *plVar19 + ~uVar22 * 8 + uVar23 + (ulong)uVar8 * 8;
        uVar8 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
        plVar11 = plVar21;
        if ((uVar8 & 7) != 0) {
          lVar5 = -((ulong)uVar8 & 7);
          plVar16 = plVar21;
          do {
            plVar11 = plVar16 + 1;
            *plVar16 = *plVar11;
            lVar5 = lVar5 + 1;
            plVar16 = plVar11;
          } while (lVar5 != 0);
        }
        if (0x37 < uVar6) {
          do {
            *plVar11 = plVar11[1];
            plVar11[1] = plVar11[2];
            plVar11[2] = plVar11[3];
            plVar11[3] = plVar11[4];
            plVar11[4] = plVar11[5];
            plVar11[5] = plVar11[6];
            plVar11[6] = plVar11[7];
            plVar16 = plVar11 + 8;
            plVar11[7] = *plVar16;
            plVar11 = plVar16;
          } while (plVar16 < plVar18);
        }
        uVar8 = *(uint *)(plVar19 + 1);
      }
      *(uint *)(plVar19 + 1) = uVar8 - 1;
      (**(code **)(*plVar20 + 0x18))();
      plVar20 = (long *)*plVar19;
      uVar8 = *(uint *)(plVar19 + 1);
    } while (plVar20 + uVar8 != plVar21);
LAB_004783f4:
    if (uVar8 != 0) {
      return;
    }
  }
  if (plVar20 != (long *)0x0) {
    *(undefined4 *)(plVar19 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar20);
    *plVar19 = 0;
    *(undefined4 *)((long)plVar19 + 0xc) = 0;
  }
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 != 0) {
    uVar9 = 0;
    uVar4 = (uint)*param_2;
    if (uVar8 != 0) {
      uVar9 = uVar4 / uVar8;
    }
    plVar20 = (long *)(*param_1 + (ulong)(uVar4 - uVar9 * uVar8) * 8);
    lVar5 = *plVar20;
    if (lVar5 != 0) {
      lVar15 = 0;
      do {
        lVar13 = lVar5;
        if (*(long *)(lVar13 + 0x10) == *param_2) {
          if (lVar15 != 0) {
            plVar20 = (long *)(lVar15 + 0x18);
          }
          *plVar20 = *(long *)(lVar13 + 0x18);
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          break;
        }
        lVar5 = *(long *)(lVar13 + 0x18);
        lVar15 = lVar13;
      } while (*(long *)(lVar13 + 0x18) != 0);
    }
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar19);
  return;
LAB_00477fc0:
  uVar4 = iVar3 - 1;
  if ((int)uVar4 < iVar17) goto joined_r0x0047815c;
  goto LAB_00477f64;
LAB_004782d8:
  uVar4 = iVar3 - 1;
  if ((int)uVar4 < iVar17) goto joined_r0x00478220;
  goto LAB_0047827c;
}


