/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b8570; name: FUN_003b8570
 */


void FUN_003b8570(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  long lVar23;
  uint uVar24;
  int iVar25;
  
  switch(*(undefined4 *)(*(long *)(param_2 + 0x40) + 0x48)) {
  case 0:
    uVar4 = *(uint *)(param_1 + 0x90);
    if (uVar4 != 0) {
      lVar11 = *(long *)(param_1 + 0x50);
      uVar16 = 0;
      puVar9 = *(undefined8 **)(param_1 + 0xb0);
      do {
        puVar21 = puVar9 + 1;
        if ((*(undefined8 **)(param_1 + 0xb0))[uVar16 & 0xffffffff] == param_2) {
          uVar1 = *(uint *)(param_1 + 0xb8);
          iVar14 = (int)uVar16;
          if ((iVar14 + 1U < uVar1) && (*puVar9 = *puVar21, iVar14 + 2U < uVar1)) {
            if (((uVar1 - 2) - iVar14 & 1) == 0) {
              lVar10 = uVar16 + 1;
            }
            else {
              lVar10 = uVar16 + 2;
              *puVar21 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar16 * 8 + 0x10);
              puVar9 = puVar21;
            }
            if (uVar1 - 3 != iVar14) {
              do {
                lVar23 = lVar10 * 8;
                lVar10 = lVar10 + 2;
                puVar9[1] = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar23 + 8);
                puVar9[2] = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar23 + 0x10);
                puVar9 = puVar9 + 2;
              } while (uVar1 - 1 != (int)lVar10);
            }
          }
          *(uint *)(param_1 + 0xb8) = uVar1 - 1;
          *(uint *)(param_1 + 0x90) = uVar4 - 1;
          plVar7 = *(long **)(lVar11 + 0x20);
          iVar14 = *(int *)(lVar11 + 0x5c) + iVar14;
                    /* WARNING: Could not recover jumptable at 0x003b89ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x148))(plVar7,0,0,iVar14,iVar14 + 1);
          return;
        }
        uVar16 = uVar16 + 1;
        puVar9 = puVar21;
      } while ((uint)uVar16 < uVar4);
    }
    break;
  case 1:
    uVar4 = *(uint *)(param_1 + 0x98);
    if (uVar4 != 0) {
      iVar14 = *(int *)(param_1 + 0x90);
      iVar19 = *(int *)(param_1 + 0x94);
      lVar10 = *(long *)(param_1 + 0xb0);
      lVar11 = *(long *)(param_1 + 0x50);
      uVar16 = 0;
      do {
        iVar17 = (int)uVar16;
        if (*(long *)(lVar10 + (ulong)(uint)(iVar19 + iVar14) * 8 + uVar16 * 8) == param_2) {
          uVar3 = iVar17 + iVar19 + iVar14;
          uVar20 = *(uint *)(param_1 + 0xb8);
          uVar1 = uVar3 + 1;
          if (uVar1 < uVar20) {
            puVar9 = (undefined8 *)(lVar10 + (ulong)uVar3 * 8);
            uVar18 = uVar3 + 2;
            *puVar9 = *(undefined8 *)(lVar10 + (ulong)uVar1 * 8);
            if (uVar18 < uVar20) {
              uVar16 = (ulong)uVar1;
              if ((((uVar20 - iVar17) - iVar19) - iVar14 & 1) != 0) {
                uVar16 = uVar16 + 1;
                puVar9 = puVar9 + 1;
                *puVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar16 * 8);
                uVar18 = uVar3 + 3;
              }
              if (((uVar20 - 3) - iVar17) - iVar19 != iVar14) {
                iVar14 = uVar20 - uVar18;
                lVar10 = uVar16 << 3;
                do {
                  puVar9[1] = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10 + 8);
                  lVar23 = *(long *)(param_1 + 0xb0) + lVar10;
                  lVar10 = lVar10 + 0x10;
                  iVar14 = iVar14 + -2;
                  puVar9[2] = *(undefined8 *)(lVar23 + 0x10);
                  puVar9 = puVar9 + 2;
                } while (iVar14 != 0);
              }
            }
          }
          *(uint *)(param_1 + 0xb8) = uVar20 - 1;
          *(uint *)(param_1 + 0x98) = uVar4 - 1;
          plVar7 = *(long **)(lVar11 + 0x20);
          iVar17 = *(int *)(lVar11 + 100) + iVar17;
                    /* WARNING: Could not recover jumptable at 0x003b8960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x168))(plVar7,0,0,iVar17,iVar17 + 1);
          return;
        }
        uVar16 = (ulong)(iVar17 + 1U);
      } while (iVar17 + 1U < uVar4);
    }
    break;
  case 2:
    uVar4 = *(uint *)(param_1 + 0x94);
    if (uVar4 != 0) {
      uVar1 = *(uint *)(param_1 + 0x90);
      lVar10 = *(long *)(param_1 + 0xb0);
      lVar11 = *(long *)(param_1 + 0x50);
      uVar16 = 0;
      iVar14 = -uVar1;
      do {
        iVar19 = (int)uVar16;
        if (*(long *)(lVar10 + (ulong)uVar1 * 8 + uVar16 * 8) == param_2) {
          uVar20 = uVar1 + iVar19;
          uVar18 = *(uint *)(param_1 + 0xb8);
          uVar3 = uVar20 + 1;
          if (uVar3 < uVar18) {
            puVar9 = (undefined8 *)(lVar10 + (ulong)uVar20 * 8);
            uVar24 = uVar20 + 2;
            *puVar9 = *(undefined8 *)(lVar10 + (ulong)uVar3 * 8);
            if (uVar24 < uVar18) {
              iVar17 = uVar18 + -uVar1;
              uVar16 = (ulong)uVar3;
              if ((iVar17 - iVar19 & 1U) != 0) {
                uVar16 = uVar16 + 1;
                puVar9 = puVar9 + 1;
                *puVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar16 * 8);
                uVar24 = uVar20 + 3;
              }
              if (iVar17 + -3 != iVar19) {
                iVar19 = uVar18 - uVar24;
                lVar10 = uVar16 << 3;
                do {
                  puVar9[1] = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10 + 8);
                  lVar23 = *(long *)(param_1 + 0xb0) + lVar10;
                  lVar10 = lVar10 + 0x10;
                  iVar19 = iVar19 + -2;
                  puVar9[2] = *(undefined8 *)(lVar23 + 0x10);
                  puVar9 = puVar9 + 2;
                } while (iVar19 != 0);
              }
            }
          }
          *(uint *)(param_1 + 0xb8) = uVar18 - 1;
          *(uint *)(param_1 + 0x94) = uVar4 - 1;
          plVar7 = *(long **)(lVar11 + 0x20);
          iVar14 = *(int *)(lVar11 + 0x5c) - iVar14;
                    /* WARNING: Could not recover jumptable at 0x003b8760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x148))(plVar7,0,0,iVar14,iVar14 + 2);
          return;
        }
        uVar16 = (ulong)(iVar19 + 1U);
        iVar14 = iVar14 + -2;
      } while (iVar19 + 1U < uVar4);
    }
    break;
  case 3:
    uVar4 = *(uint *)(param_1 + 0x9c);
    if (uVar4 != 0) {
      iVar14 = *(int *)(param_1 + 0x90);
      iVar19 = *(int *)(param_1 + 0x94);
      iVar17 = *(int *)(param_1 + 0x98);
      lVar10 = *(long *)(param_1 + 0xb0);
      lVar11 = *(long *)(param_1 + 0x50);
      uVar1 = iVar19 + iVar14 + iVar17;
      uVar16 = 0;
      do {
        iVar13 = (int)uVar16;
        if (*(long *)(lVar10 + (ulong)uVar1 * 8 + uVar16 * 8) == param_2) {
          uVar1 = iVar13 + uVar1;
          uVar20 = *(uint *)(param_1 + 0xb8);
          uVar3 = uVar1 + 1;
          if (uVar3 < uVar20) {
            puVar9 = (undefined8 *)(lVar10 + (ulong)uVar1 * 8);
            uVar18 = uVar1 + 2;
            *puVar9 = *(undefined8 *)(lVar10 + (ulong)uVar3 * 8);
            if (uVar18 < uVar20) {
              uVar16 = (ulong)uVar3;
              if (((((uVar20 - iVar13) - iVar19) - iVar14) - iVar17 & 1) != 0) {
                uVar16 = uVar16 + 1;
                uVar18 = uVar1 + 3;
                puVar9 = puVar9 + 1;
                *puVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar16 * 8);
              }
              if ((((uVar20 - 3) - iVar13) - iVar19) - iVar14 != iVar17) {
                iVar14 = uVar20 - uVar18;
                lVar10 = uVar16 << 3;
                do {
                  puVar9[1] = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10 + 8);
                  lVar23 = *(long *)(param_1 + 0xb0) + lVar10;
                  lVar10 = lVar10 + 0x10;
                  iVar14 = iVar14 + -2;
                  puVar9[2] = *(undefined8 *)(lVar23 + 0x10);
                  puVar9 = puVar9 + 2;
                } while (iVar14 != 0);
              }
            }
          }
          *(uint *)(param_1 + 0xb8) = uVar20 - 1;
          *(uint *)(param_1 + 0x9c) = uVar4 - 1;
          plVar7 = *(long **)(lVar11 + 0x20);
          iVar14 = iVar17 + iVar13 * 6 + *(int *)(lVar11 + 100);
                    /* WARNING: Could not recover jumptable at 0x003b8844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x168))(plVar7,0,0,iVar14,iVar14 + 6);
          return;
        }
        uVar16 = (ulong)(iVar13 + 1U);
      } while (iVar13 + 1U < uVar4);
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0xa0) != 0) {
      iVar19 = *(int *)(param_1 + 0x90);
      iVar13 = *(int *)(param_1 + 0x94);
      lVar10 = *(long *)(param_1 + 0x50);
      iVar17 = *(int *)(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x9c);
      uVar4 = iVar13 + iVar19 + iVar17 + iVar2;
      lVar11 = *(long *)(param_1 + 0xb0) + (ulong)uVar4 * 8;
      uVar16 = 0;
      iVar14 = iVar17 + iVar2 * 6 + *(int *)(lVar10 + 100);
      do {
        iVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar11 + uVar16 * 8) + 0x40) + 0x68) +
                            0x48))();
        iVar25 = (int)uVar16;
        if (*(long *)(lVar11 + uVar16 * 8) == param_2) {
          uVar3 = *(uint *)(param_1 + 0xb8);
          uVar4 = iVar25 + uVar4;
          uVar1 = uVar4 + 1;
          if (uVar1 < uVar3) {
            puVar9 = (undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar4 * 8);
            *puVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar1 * 8);
            uVar20 = uVar4 + 2;
            if (uVar20 < uVar3) {
              uVar16 = (ulong)uVar1;
              if (((((((uVar3 - 2) - iVar25) - iVar13) - iVar19) - iVar17) - iVar2 & 1) != 0) {
                uVar16 = uVar16 + 1;
                puVar9 = puVar9 + 1;
                *puVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar16 * 8);
                uVar20 = uVar4 + 3;
              }
              if (((((uVar3 - 3) - iVar25) - iVar13) - iVar19) - iVar17 != iVar2) {
                iVar19 = uVar3 - uVar20;
                lVar11 = uVar16 << 3;
                do {
                  puVar9[1] = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar11 + 8);
                  lVar23 = *(long *)(param_1 + 0xb0) + lVar11;
                  lVar11 = lVar11 + 0x10;
                  iVar19 = iVar19 + -2;
                  puVar9[2] = *(undefined8 *)(lVar23 + 0x10);
                  puVar9 = puVar9 + 2;
                } while (iVar19 != 0);
              }
            }
          }
          *(uint *)(param_1 + 0xb8) = uVar3 - 1;
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
          plVar7 = *(long **)(lVar10 + 0x20);
          (**(code **)(*plVar7 + 0x168))(plVar7,0,0,iVar14,iVar6 + iVar14);
          *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) - iVar6;
          return;
        }
        uVar16 = (ulong)(iVar25 + 1U);
        iVar14 = iVar6 + iVar14;
      } while (iVar25 + 1U < *(uint *)(param_1 + 0xa0));
    }
    return;
  case 5:
    uVar4 = *(uint *)(param_1 + 0xa4);
    if (uVar4 != 0) {
      iVar19 = *(int *)(param_1 + 0x90);
      iVar13 = *(int *)(param_1 + 0x94);
      iVar6 = *(int *)(param_1 + 0xa0);
      iVar17 = *(int *)(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x9c);
      lVar10 = *(long *)(param_1 + 0xb0);
      uVar1 = iVar13 + iVar19 + iVar17 + iVar2 + iVar6;
      lVar11 = 1;
      uVar16 = 0;
      iVar14 = -1;
      do {
        iVar25 = (int)uVar16;
        if (*(long *)(lVar10 + (ulong)uVar1 * 8 + uVar16 * 8) == param_2) {
          uVar1 = iVar25 + uVar1;
          uVar20 = *(uint *)(param_1 + 0xb8);
          uVar3 = uVar1 + 1;
          if (uVar3 < uVar20) {
            puVar9 = (undefined8 *)(lVar10 + (ulong)uVar1 * 8);
            *puVar9 = *(undefined8 *)(lVar10 + (ulong)uVar3 * 8);
            uVar18 = uVar1 + 2;
            if (uVar18 < uVar20) {
              uVar8 = (ulong)uVar3;
              if ((((((((uVar20 - 2) - iVar25) - iVar13) - iVar19) - iVar17) - iVar2) - iVar6 & 1)
                  != 0) {
                uVar8 = uVar8 + 1;
                uVar18 = uVar1 + 3;
                puVar9 = puVar9 + 1;
                *puVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar8 * 8);
              }
              if ((((((uVar20 - 3) - iVar25) - iVar13) - iVar19) - iVar17) - iVar2 != iVar6) {
                iVar19 = uVar20 - uVar18;
                lVar10 = uVar8 << 3;
                do {
                  puVar9[1] = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10 + 8);
                  lVar23 = *(long *)(param_1 + 0xb0) + lVar10;
                  lVar10 = lVar10 + 0x10;
                  iVar19 = iVar19 + -2;
                  puVar9[2] = *(undefined8 *)(lVar23 + 0x10);
                  puVar9 = puVar9 + 2;
                } while (iVar19 != 0);
              }
            }
          }
          *(uint *)(param_1 + 0xb8) = uVar20 - 1;
          uVar1 = *(uint *)(param_1 + 200);
          if (iVar25 + 1U < uVar1) {
            puVar15 = (undefined4 *)(*(long *)(param_1 + 0xc0) + uVar16 * 0x30);
            iVar14 = uVar1 + iVar14;
            puVar22 = (undefined4 *)(*(long *)(param_1 + 0xc0) + lVar11 * 0x30 + 0x2c);
            do {
              *puVar15 = puVar22[-0xb];
              puVar15[1] = puVar22[-10];
              puVar15[2] = puVar22[-9];
              puVar15[3] = puVar22[-8];
              puVar15[4] = puVar22[-7];
              puVar15[5] = puVar22[-6];
              puVar15[6] = puVar22[-5];
              puVar15[7] = puVar22[-4];
              puVar15[8] = puVar22[-3];
              puVar15[9] = puVar22[-2];
              puVar15[10] = puVar22[-1];
              puVar15[0xb] = *puVar22;
              iVar14 = iVar14 + -1;
              puVar15 = puVar15 + 0xc;
              puVar22 = puVar22 + 0xc;
            } while (iVar14 != 0);
          }
          *(uint *)(param_1 + 200) = uVar1 - 1;
          *(uint *)(param_1 + 0xa4) = uVar4 - 1;
          return;
        }
        uVar16 = (ulong)(iVar25 + 1U);
        iVar14 = iVar14 + -1;
        lVar11 = lVar11 + 1;
      } while (iVar25 + 1U < uVar4);
    }
    return;
  case 6:
    uVar4 = *(uint *)(param_1 + 0xa8);
    if (uVar4 != 0) {
      iVar14 = *(int *)(param_1 + 0x90);
      iVar13 = *(int *)(param_1 + 0x94);
      iVar19 = *(int *)(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x9c);
      iVar17 = *(int *)(param_1 + 0xa0);
      uVar3 = *(uint *)(param_1 + 0xa4);
      lVar11 = *(long *)(param_1 + 0xb0);
      uVar1 = iVar13 + iVar14 + iVar19 + iVar2 + iVar17 + uVar3;
      uVar16 = 0;
      uVar20 = ~uVar3;
      uVar18 = uVar3;
      do {
        uVar18 = uVar18 + 1;
        iVar6 = (int)uVar16;
        if (*(long *)(lVar11 + (ulong)uVar1 * 8 + uVar16 * 8) == param_2) {
          uVar1 = iVar6 + uVar1;
          uVar5 = *(uint *)(param_1 + 0xb8);
          uVar24 = uVar1 + 1;
          if (uVar24 < uVar5) {
            puVar9 = (undefined8 *)(lVar11 + (ulong)uVar1 * 8);
            uVar12 = uVar1 + 2;
            *puVar9 = *(undefined8 *)(lVar11 + (ulong)uVar24 * 8);
            if (uVar12 < uVar5) {
              uVar16 = (ulong)uVar24;
              if (((((((((uVar5 - 2) - iVar6) - iVar13) - iVar14) - iVar19) - iVar2) - iVar17) -
                   uVar3 & 1) != 0) {
                uVar16 = uVar16 + 1;
                uVar12 = uVar1 + 3;
                puVar9 = puVar9 + 1;
                *puVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar16 * 8);
              }
              if (((((((uVar5 - 3) - iVar6) - iVar13) - iVar14) - iVar19) - iVar2) - iVar17 != uVar3
                 ) {
                iVar14 = uVar5 - uVar12;
                lVar11 = uVar16 << 3;
                do {
                  puVar9[1] = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar11 + 8);
                  lVar10 = *(long *)(param_1 + 0xb0) + lVar11;
                  lVar11 = lVar11 + 0x10;
                  iVar14 = iVar14 + -2;
                  puVar9[2] = *(undefined8 *)(lVar10 + 0x10);
                  puVar9 = puVar9 + 2;
                } while (iVar14 != 0);
              }
            }
          }
          uVar1 = *(uint *)(param_1 + 200);
          *(uint *)(param_1 + 0xb8) = uVar5 - 1;
          if (iVar6 + uVar3 + 1 < uVar1) {
            puVar22 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (ulong)(iVar6 + uVar3) * 0x30);
            iVar14 = uVar1 + uVar20;
            puVar15 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (ulong)uVar18 * 0x30 + 0x18);
            do {
              *puVar22 = puVar15[-6];
              puVar22[1] = puVar15[-5];
              puVar22[2] = puVar15[-4];
              puVar22[3] = puVar15[-3];
              puVar22[4] = puVar15[-2];
              puVar22[5] = puVar15[-1];
              puVar22[6] = *puVar15;
              puVar22[7] = puVar15[1];
              puVar22[8] = puVar15[2];
              puVar22[9] = puVar15[3];
              puVar22[10] = puVar15[4];
              puVar22[0xb] = puVar15[5];
              iVar14 = iVar14 + -1;
              puVar15 = puVar15 + 0xc;
              puVar22 = puVar22 + 0xc;
            } while (iVar14 != 0);
          }
          *(uint *)(param_1 + 200) = uVar1 - 1;
          *(uint *)(param_1 + 0xa8) = uVar4 - 1;
          return;
        }
        uVar16 = (ulong)(iVar6 + 1U);
        uVar20 = uVar20 - 1;
      } while (iVar6 + 1U < uVar4);
    }
    return;
  }
  return;
}


