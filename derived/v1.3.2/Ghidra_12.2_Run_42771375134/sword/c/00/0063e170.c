/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063e170; name: FUN_0063e170
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0063e170(long param_1,int param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  ulong local_b0;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    plVar24 = (long *)(param_1 + 0x60);
  }
  else {
    if (*(int *)(param_1 + 0x20) != 1) {
      return;
    }
    plVar24 = (long *)(param_1 + 0x58);
  }
  if ((((-1 < param_2) && (lVar14 = *plVar24, lVar14 != 0)) && (param_2 < *(int *)(lVar14 + 0x38)))
     && ((param_3 != 0 &&
         (lVar14 = *(long *)(lVar14 + 0x50), *(int *)(lVar14 + (long)param_2 * 0x28) == 5)))) {
    lVar29 = *(long *)(lVar14 + (long)param_2 * 0x28 + 0x20);
    if (0 < *(int *)(lVar29 + 0x18)) {
      iVar3 = 0;
      iVar4 = 0;
      iVar2 = 0;
      local_b0 = 0;
      lVar15 = *(long *)(lVar29 + 0x30);
      puVar1 = (uint *)(lVar14 + (long)param_2 * 0x28 + 4);
      iVar22 = 0;
      do {
        piVar16 = (int *)(lVar15 + (long)iVar22 * 0x14);
        if (*piVar16 - 1U < 4) {
          iVar28 = piVar16[1];
          iVar7 = piVar16[3];
          lVar14 = (long)iVar7;
          uVar26 = (ulong)iVar28;
          switch(*piVar16) {
          case 1:
            if (iVar28 < 0) {
              return;
            }
            if (0x3f < iVar7 + iVar28) {
              return;
            }
            if (0 < iVar7) {
              lVar18 = uVar26 * 4;
              lVar25 = param_1 + 0x1288 + lVar18;
              plVar24 = (long *)(param_1 + 0xe98 + uVar26 * 8);
              lVar15 = 0;
              do {
                if ((long)*(int *)(param_3 + 0xa0) <= (int)local_b0 + lVar15) break;
                plVar23 = *(long **)(*(long *)(param_3 + 0xb8) +
                                     (-(local_b0 >> 0x1f) & 0xfffffff800000000 | local_b0 << 3) +
                                    lVar15 * 8);
                if (plVar23 != (long *)0x0) {
                  uVar6 = *puVar1;
                  uVar21 = uVar26 + lVar15;
                  piVar16 = (int *)(**(code **)(*plVar23 + 0x40))(plVar23);
                  iVar11 = (int)lVar15;
                  if (*piVar16 == 1) {
                    iVar9 = (**(code **)(*plVar23 + 0x158))(plVar23);
                    plVar12 = (long *)(**(code **)(*plVar23 + 0x108))(plVar23);
                    if (plVar12 == (long *)0x0) {
                      iVar10 = -1;
                      iVar8 = *(int *)(lVar25 + lVar15 * 4);
                    }
                    else {
                      iVar10 = (**(code **)(*plVar12 + 0x98))();
                      iVar8 = *(int *)(lVar25 + lVar15 * 4);
                    }
                    if (iVar9 != iVar8) {
                      *(uint *)(param_1 + 0x2a38 + lVar18 + lVar15 * 4) = uVar6;
                      *(int *)(lVar25 + lVar15 * 4) = iVar9;
                      if (iVar10 != -1) {
                        *(int *)(param_1 + 5000 + lVar18 + lVar15 * 4) = iVar10;
                        iVar9 = iVar28 + iVar11;
                        if ((long)*(int *)(param_1 + 0x29ec) <= (long)uVar21) {
                          iVar9 = *(int *)(param_1 + 0x29ec);
                        }
                        iVar8 = iVar28 + iVar11;
                        if ((long)uVar21 <= (long)*(int *)(param_1 + 0x29f0)) {
                          iVar8 = *(int *)(param_1 + 0x29f0);
                        }
                        *(int *)(param_1 + 0x29f0) = iVar8;
                        *(int *)(param_1 + 0x29ec) = iVar9;
                        *(ulong *)(param_1 + 0x29f8) =
                             *(ulong *)(param_1 + 0x29f8) | 1L << (uVar21 & 0x3f);
                      }
                      if ((uVar6 & 1) != 0) {
                        iVar9 = iVar28 + iVar11;
                        if ((long)*(int *)(param_1 + 0x283c) <= (long)uVar21) {
                          iVar9 = *(int *)(param_1 + 0x283c);
                        }
                        *(int *)(param_1 + 0x283c) = iVar9;
                        iVar9 = iVar28 + iVar11;
                        if ((long)uVar21 <= (long)*(int *)(param_1 + 0x2840)) {
                          iVar9 = *(int *)(param_1 + 0x2840);
                        }
                        *(int *)(param_1 + 0x2840) = iVar9;
                        *(ulong *)(param_1 + 0x2848) =
                             *(ulong *)(param_1 + 0x2848) | 1L << (uVar21 & 0x3f);
                      }
                      if ((uVar6 >> 1 & 1) != 0) {
                        iVar9 = iVar28 + iVar11;
                        if ((long)*(int *)(param_1 + 0x2854) <= (long)uVar21) {
                          iVar9 = *(int *)(param_1 + 0x2854);
                        }
                        *(int *)(param_1 + 0x2854) = iVar9;
                        iVar9 = iVar28 + iVar11;
                        if ((long)uVar21 <= (long)*(int *)(param_1 + 0x2858)) {
                          iVar9 = *(int *)(param_1 + 0x2858);
                        }
                        *(int *)(param_1 + 0x2858) = iVar9;
                        *(ulong *)(param_1 + 0x2860) =
                             *(ulong *)(param_1 + 0x2860) | 1L << (uVar21 & 0x3f);
                      }
                      if ((uVar6 >> 2 & 1) != 0) {
                        iVar9 = iVar28 + iVar11;
                        if ((long)*(int *)(param_1 + 0x286c) <= (long)uVar21) {
                          iVar9 = *(int *)(param_1 + 0x286c);
                        }
                        *(int *)(param_1 + 0x286c) = iVar9;
                        iVar9 = iVar28 + iVar11;
                        if ((long)uVar21 <= (long)*(int *)(param_1 + 0x2870)) {
                          iVar9 = *(int *)(param_1 + 0x2870);
                        }
                        *(int *)(param_1 + 0x2870) = iVar9;
                        *(ulong *)(param_1 + 0x2878) =
                             *(ulong *)(param_1 + 0x2878) | 1L << (uVar21 & 0x3f);
                      }
                      if ((uVar6 >> 4 & 1) != 0) {
                        uVar20 = 1L << (uVar21 & 0x3f);
                        *(ulong *)(param_1 + 0x2890) = *(ulong *)(param_1 + 0x2890) | uVar20;
                        iVar9 = iVar28 + iVar11;
                        iVar8 = iVar9;
                        if ((long)*(int *)(param_1 + 0x2884) <= (long)uVar21) {
                          iVar8 = *(int *)(param_1 + 0x2884);
                        }
                        *(int *)(param_1 + 0x2884) = iVar8;
                        iVar8 = iVar9;
                        if ((long)uVar21 <= (long)*(int *)(param_1 + 0x2888)) {
                          iVar8 = *(int *)(param_1 + 0x2888);
                        }
                        *(int *)(param_1 + 0x2888) = iVar8;
                        iVar8 = iVar9;
                        if ((long)*(int *)(param_1 + 0x289c) <= (long)uVar21) {
                          iVar8 = *(int *)(param_1 + 0x289c);
                        }
                        *(int *)(param_1 + 0x289c) = iVar8;
                        if ((long)uVar21 <= (long)*(int *)(param_1 + 0x28a0)) {
                          iVar9 = *(int *)(param_1 + 0x28a0);
                        }
                        *(int *)(param_1 + 0x28a0) = iVar9;
                        *(ulong *)(param_1 + 0x28a8) = *(ulong *)(param_1 + 0x28a8) | uVar20;
                      }
                      if ((uVar6 >> 5 & 1) != 0) {
                        iVar9 = iVar28 + iVar11;
                        if ((long)*(int *)(param_1 + 0x28b4) <= (long)uVar21) {
                          iVar9 = *(int *)(param_1 + 0x28b4);
                        }
                        *(int *)(param_1 + 0x28b4) = iVar9;
                        iVar9 = iVar28 + iVar11;
                        if ((long)uVar21 <= (long)*(int *)(param_1 + 0x28b8)) {
                          iVar9 = *(int *)(param_1 + 0x28b8);
                        }
                        *(int *)(param_1 + 0x28b8) = iVar9;
                        *(ulong *)(param_1 + 0x28c0) =
                             *(ulong *)(param_1 + 0x28c0) | 1L << (uVar21 & 0x3f);
                      }
                    }
                  }
                  piVar16 = (int *)(**(code **)(*plVar23 + 0x40))(plVar23);
                  if (*piVar16 == 10) {
                    iVar9 = *(int *)((long)plVar23 + 0xbc);
                    lVar27 = plVar23[0x20] + (long)*(int *)((long)plVar23 + 0x154) * (long)iVar9;
                    if ((uVar6 & 1) != 0) {
                      iVar8 = iVar28 + iVar11;
                      if ((long)*(int *)(param_1 + 0x28cc) <= (long)uVar21) {
                        iVar8 = *(int *)(param_1 + 0x28cc);
                      }
                      *(int *)(param_1 + 0x28cc) = iVar8;
                      iVar8 = iVar28 + iVar11;
                      if ((long)uVar21 <= (long)*(int *)(param_1 + 0x28d0)) {
                        iVar8 = *(int *)(param_1 + 0x28d0);
                      }
                      *(int *)(param_1 + 0x28d0) = iVar8;
                      *(ulong *)(param_1 + 0x28d8) =
                           *(ulong *)(param_1 + 0x28d8) | 1L << (uVar21 & 0x3f);
                      *plVar24 = lVar27;
                      *(int *)(param_1 + 0x1138 + lVar18 + lVar15 * 4) = iVar9;
                    }
                    if ((uVar6 >> 1 & 1) != 0) {
                      iVar8 = iVar28 + iVar11;
                      if ((long)*(int *)(param_1 + 0x28e4) <= (long)uVar21) {
                        iVar8 = *(int *)(param_1 + 0x28e4);
                      }
                      *(int *)(param_1 + 0x28e4) = iVar8;
                      iVar8 = iVar28 + iVar11;
                      if ((long)uVar21 <= (long)*(int *)(param_1 + 0x28e8)) {
                        iVar8 = *(int *)(param_1 + 0x28e8);
                      }
                      *(int *)(param_1 + 0x28e8) = iVar8;
                      *(ulong *)(param_1 + 0x28f0) =
                           *(ulong *)(param_1 + 0x28f0) | 1L << (uVar21 & 0x3f);
                      plVar24[0xe] = lVar27;
                      *(int *)(param_1 + 0x1170 + lVar18 + lVar15 * 4) = iVar9;
                    }
                    if ((uVar6 >> 2 & 1) != 0) {
                      iVar8 = iVar28 + iVar11;
                      if ((long)*(int *)(param_1 + 0x28fc) <= (long)uVar21) {
                        iVar8 = *(int *)(param_1 + 0x28fc);
                      }
                      *(int *)(param_1 + 0x28fc) = iVar8;
                      iVar8 = iVar28 + iVar11;
                      if ((long)uVar21 <= (long)*(int *)(param_1 + 0x2900)) {
                        iVar8 = *(int *)(param_1 + 0x2900);
                      }
                      *(int *)(param_1 + 0x2900) = iVar8;
                      *(ulong *)(param_1 + 0x2908) =
                           *(ulong *)(param_1 + 0x2908) | 1L << (uVar21 & 0x3f);
                      plVar24[0x1c] = lVar27;
                      *(int *)(param_1 + 0x11a8 + lVar18 + lVar15 * 4) = iVar9;
                    }
                    if ((uVar6 >> 4 & 1) != 0) {
                      uVar20 = 1L << (uVar21 & 0x3f);
                      *(ulong *)(param_1 + 0x2920) = *(ulong *)(param_1 + 0x2920) | uVar20;
                      iVar8 = iVar28 + iVar11;
                      iVar10 = iVar8;
                      if ((long)*(int *)(param_1 + 0x2914) <= (long)uVar21) {
                        iVar10 = *(int *)(param_1 + 0x2914);
                      }
                      iVar5 = iVar8;
                      if ((long)uVar21 <= (long)*(int *)(param_1 + 0x2918)) {
                        iVar5 = *(int *)(param_1 + 0x2918);
                      }
                      *(int *)(param_1 + 0x2918) = iVar5;
                      *(int *)(param_1 + 0x2914) = iVar10;
                      plVar24[0x2a] = lVar27;
                      *(int *)(param_1 + 0x11e0 + lVar18 + lVar15 * 4) = iVar9;
                      *(ulong *)(param_1 + 0x2938) = *(ulong *)(param_1 + 0x2938) | uVar20;
                      iVar10 = iVar8;
                      if ((long)*(int *)(param_1 + 0x292c) <= (long)uVar21) {
                        iVar10 = *(int *)(param_1 + 0x292c);
                      }
                      if ((long)uVar21 <= (long)*(int *)(param_1 + 0x2930)) {
                        iVar8 = *(int *)(param_1 + 0x2930);
                      }
                      *(int *)(param_1 + 0x2930) = iVar8;
                      *(int *)(param_1 + 0x292c) = iVar10;
                      plVar24[0x38] = lVar27;
                      *(int *)(param_1 + 0x1218 + lVar18 + lVar15 * 4) = iVar9;
                    }
                    if ((uVar6 >> 5 & 1) != 0) {
                      iVar8 = iVar28 + iVar11;
                      if ((long)*(int *)(param_1 + 0x2944) <= (long)uVar21) {
                        iVar8 = *(int *)(param_1 + 0x2944);
                      }
                      *(ulong *)(param_1 + 0x2950) =
                           *(ulong *)(param_1 + 0x2950) | 1L << (uVar21 & 0x3f);
                      *(int *)(param_1 + 0x2944) = iVar8;
                      iVar11 = iVar28 + iVar11;
                      if ((long)uVar21 <= (long)*(int *)(param_1 + 0x2948)) {
                        iVar11 = *(int *)(param_1 + 0x2948);
                      }
                      *(int *)(param_1 + 0x2948) = iVar11;
                      plVar24[0x46] = lVar27;
                      *(int *)(param_1 + 0x1250 + lVar18 + lVar15 * 4) = iVar9;
                    }
                  }
                }
                lVar15 = lVar15 + 1;
                plVar24 = plVar24 + 1;
              } while (lVar15 < lVar14);
            }
            local_b0 = (ulong)(uint)(iVar7 + (int)local_b0);
            break;
          case 2:
            if (iVar28 < 0) {
              return;
            }
            if (0xd < iVar7 + iVar28) {
              return;
            }
            if (0 < iVar7) {
              lVar25 = (long)iVar2;
              plVar24 = (long *)(param_1 + 0xaa8 + uVar26 * 8);
              piVar16 = (int *)(param_1 + 0xd48 + uVar26 * 4);
              lVar15 = 0x352;
              do {
                if (*(int *)(param_3 + 0x48) <= lVar25) break;
                plVar23 = *(long **)(*(long *)(param_3 + 0x60) + lVar25 * 8);
                if (plVar23 != (long *)0x0) {
                  uVar6 = *puVar1;
                  piVar13 = (int *)(**(code **)(*plVar23 + 0x40))(plVar23);
                  if (*piVar13 == 10) {
                    iVar11 = *(int *)((long)plVar23 + 0xbc);
                    lVar18 = plVar23[0x20] + (long)*(int *)((long)plVar23 + 0x154) * (long)iVar11;
                    iVar9 = (int)lVar15;
                    if ((uVar6 & 1) != 0) {
                      iVar10 = iVar28 + iVar9 + -0x352;
                      iVar8 = iVar10;
                      if ((long)*(int *)(param_1 + 0x27ac) <= (long)uVar26) {
                        iVar8 = *(int *)(param_1 + 0x27ac);
                      }
                      *(int *)(param_1 + 0x27ac) = iVar8;
                      if ((long)uVar26 <= (long)*(int *)(param_1 + 0x27b0)) {
                        iVar10 = *(int *)(param_1 + 0x27b0);
                      }
                      *(int *)(param_1 + 0x27b0) = iVar10;
                      *(ulong *)(param_1 + 0x27b8) =
                           *(ulong *)(param_1 + 0x27b8) | 1L << (uVar26 & 0x3f);
                      *plVar24 = lVar18;
                      *piVar16 = iVar11;
                    }
                    if ((uVar6 >> 1 & 1) != 0) {
                      iVar10 = iVar28 + iVar9 + -0x352;
                      iVar8 = iVar10;
                      if ((long)*(int *)(param_1 + 0x27c4) <= (long)uVar26) {
                        iVar8 = *(int *)(param_1 + 0x27c4);
                      }
                      *(int *)(param_1 + 0x27c4) = iVar8;
                      if ((long)uVar26 <= (long)*(int *)(param_1 + 0x27c8)) {
                        iVar10 = *(int *)(param_1 + 0x27c8);
                      }
                      *(int *)(param_1 + 0x27c8) = iVar10;
                      *(ulong *)(param_1 + 0x27d0) =
                           *(ulong *)(param_1 + 0x27d0) | 1L << (uVar26 & 0x3f);
                      plVar24[0xe] = lVar18;
                      piVar16[0xe] = iVar11;
                    }
                    if ((uVar6 >> 2 & 1) != 0) {
                      iVar10 = iVar28 + iVar9 + -0x352;
                      iVar8 = iVar10;
                      if ((long)*(int *)(param_1 + 0x27dc) <= (long)uVar26) {
                        iVar8 = *(int *)(param_1 + 0x27dc);
                      }
                      *(int *)(param_1 + 0x27dc) = iVar8;
                      if ((long)uVar26 <= (long)*(int *)(param_1 + 0x27e0)) {
                        iVar10 = *(int *)(param_1 + 0x27e0);
                      }
                      *(int *)(param_1 + 0x27e0) = iVar10;
                      *(ulong *)(param_1 + 0x27e8) =
                           *(ulong *)(param_1 + 0x27e8) | 1L << (uVar26 & 0x3f);
                      plVar24[0x1c] = lVar18;
                      piVar16[0x1c] = iVar11;
                    }
                    if ((uVar6 >> 4 & 1) != 0) {
                      uVar21 = 1L << (uVar26 & 0x3f);
                      *(ulong *)(param_1 + 0x2800) = *(ulong *)(param_1 + 0x2800) | uVar21;
                      iVar10 = iVar28 + iVar9 + -0x352;
                      iVar8 = iVar10;
                      if ((long)*(int *)(param_1 + 0x27f4) <= (long)uVar26) {
                        iVar8 = *(int *)(param_1 + 0x27f4);
                      }
                      *(int *)(param_1 + 0x27f4) = iVar8;
                      iVar8 = iVar10;
                      if ((long)uVar26 <= (long)*(int *)(param_1 + 0x27f8)) {
                        iVar8 = *(int *)(param_1 + 0x27f8);
                      }
                      *(int *)(param_1 + 0x27f8) = iVar8;
                      plVar24[0x2a] = lVar18;
                      piVar16[0x2a] = iVar11;
                      iVar8 = iVar10;
                      if ((long)*(int *)(param_1 + 0x280c) <= (long)uVar26) {
                        iVar8 = *(int *)(param_1 + 0x280c);
                      }
                      *(int *)(param_1 + 0x280c) = iVar8;
                      if ((long)uVar26 <= (long)*(int *)(param_1 + 0x2810)) {
                        iVar10 = *(int *)(param_1 + 0x2810);
                      }
                      *(int *)(param_1 + 0x2810) = iVar10;
                      *(ulong *)(param_1 + 0x2818) = *(ulong *)(param_1 + 0x2818) | uVar21;
                      plVar24[0x38] = lVar18;
                      piVar16[0x38] = iVar11;
                    }
                    if ((uVar6 >> 5 & 1) != 0) {
                      iVar8 = iVar28 + iVar9 + -0x352;
                      iVar9 = iVar8;
                      if ((long)*(int *)(param_1 + 0x2824) <= (long)uVar26) {
                        iVar9 = *(int *)(param_1 + 0x2824);
                      }
                      *(int *)(param_1 + 0x2824) = iVar9;
                      if ((long)uVar26 <= (long)*(int *)(param_1 + 0x2828)) {
                        iVar8 = *(int *)(param_1 + 0x2828);
                      }
                      *(int *)(param_1 + 0x2828) = iVar8;
                      *(ulong *)(param_1 + 0x2830) =
                           *(ulong *)(param_1 + 0x2830) | 1L << (uVar26 & 0x3f);
                      plVar24[0x46] = lVar18;
                      piVar16[0x46] = iVar11;
                    }
                  }
                }
                lVar18 = lVar15 + -0x351;
                uVar26 = uVar26 + 1;
                lVar15 = lVar15 + 1;
                plVar24 = plVar24 + 1;
                piVar16 = piVar16 + 1;
                lVar25 = lVar25 + 1;
              } while (lVar18 < lVar14);
            }
            iVar2 = iVar7 + iVar2;
            break;
          case 3:
            if (iVar28 < 0) {
              return;
            }
            if (0xd < iVar7 + iVar28) {
              return;
            }
            if (0 < iVar7) {
              lVar25 = (long)iVar3;
              puVar17 = (undefined8 *)(&DAT_00001588 + uVar26 * 8 + param_1);
              lVar15 = 0x2b1;
              do {
                if (*(int *)(param_3 + 0xf8) <= lVar25) break;
                lVar18 = *(long *)(*(long *)(param_3 + 0x110) + lVar25 * 8);
                if (lVar18 != 0) {
                  uVar6 = *puVar1;
                  uVar19 = *(undefined8 *)(lVar18 + 0x340);
                  iVar11 = (int)lVar15;
                  if ((uVar6 & 1) != 0) {
                    iVar8 = iVar28 + iVar11 + -0x2b1;
                    iVar9 = iVar8;
                    if ((long)*(int *)(param_1 + 0x295c) <= (long)uVar26) {
                      iVar9 = *(int *)(param_1 + 0x295c);
                    }
                    *(int *)(param_1 + 0x295c) = iVar9;
                    if ((long)uVar26 <= (long)*(int *)(param_1 + 0x2960)) {
                      iVar8 = *(int *)(param_1 + 0x2960);
                    }
                    *(int *)(param_1 + 0x2960) = iVar8;
                    *(ulong *)(param_1 + 0x2968) =
                         *(ulong *)(param_1 + 0x2968) | 1L << (uVar26 & 0x3f);
                    *puVar17 = uVar19;
                  }
                  if ((uVar6 >> 1 & 1) != 0) {
                    iVar8 = iVar28 + iVar11 + -0x2b1;
                    iVar9 = iVar8;
                    if ((long)*(int *)(param_1 + 0x2974) <= (long)uVar26) {
                      iVar9 = *(int *)(param_1 + 0x2974);
                    }
                    *(int *)(param_1 + 0x2974) = iVar9;
                    if ((long)uVar26 <= (long)*(int *)(param_1 + 0x2978)) {
                      iVar8 = *(int *)(param_1 + 0x2978);
                    }
                    *(int *)(param_1 + 0x2978) = iVar8;
                    *(ulong *)(param_1 + 0x2980) =
                         *(ulong *)(param_1 + 0x2980) | 1L << (uVar26 & 0x3f);
                    puVar17[0x40] = uVar19;
                  }
                  if ((uVar6 >> 2 & 1) != 0) {
                    iVar8 = iVar28 + iVar11 + -0x2b1;
                    iVar9 = iVar8;
                    if ((long)*(int *)(param_1 + 0x298c) <= (long)uVar26) {
                      iVar9 = *(int *)(param_1 + 0x298c);
                    }
                    *(int *)(param_1 + 0x298c) = iVar9;
                    if ((long)uVar26 <= (long)*(int *)(param_1 + 0x2990)) {
                      iVar8 = *(int *)(param_1 + 0x2990);
                    }
                    *(int *)(param_1 + 0x2990) = iVar8;
                    *(ulong *)(param_1 + 0x2998) =
                         *(ulong *)(param_1 + 0x2998) | 1L << (uVar26 & 0x3f);
                    puVar17[0x80] = uVar19;
                  }
                  if ((uVar6 >> 4 & 1) != 0) {
                    uVar21 = 1L << (uVar26 & 0x3f);
                    *(ulong *)(param_1 + 0x29b0) = *(ulong *)(param_1 + 0x29b0) | uVar21;
                    iVar8 = iVar28 + iVar11 + -0x2b1;
                    iVar9 = iVar8;
                    if ((long)*(int *)(param_1 + 0x29a4) <= (long)uVar26) {
                      iVar9 = *(int *)(param_1 + 0x29a4);
                    }
                    *(int *)(param_1 + 0x29a4) = iVar9;
                    iVar9 = iVar8;
                    if ((long)uVar26 <= (long)*(int *)(param_1 + 0x29a8)) {
                      iVar9 = *(int *)(param_1 + 0x29a8);
                    }
                    *(int *)(param_1 + 0x29a8) = iVar9;
                    puVar17[0xc0] = uVar19;
                    iVar9 = iVar8;
                    if ((long)*(int *)(param_1 + 0x29bc) <= (long)uVar26) {
                      iVar9 = *(int *)(param_1 + 0x29bc);
                    }
                    *(int *)(param_1 + 0x29bc) = iVar9;
                    if ((long)uVar26 <= (long)*(int *)(param_1 + 0x29c0)) {
                      iVar8 = *(int *)(param_1 + 0x29c0);
                    }
                    *(int *)(param_1 + 0x29c0) = iVar8;
                    *(ulong *)(param_1 + 0x29c8) = *(ulong *)(param_1 + 0x29c8) | uVar21;
                    puVar17[0x100] = uVar19;
                  }
                  if ((uVar6 >> 5 & 1) != 0) {
                    iVar9 = iVar28 + iVar11 + -0x2b1;
                    iVar11 = iVar9;
                    if ((long)*(int *)(param_1 + 0x29d4) <= (long)uVar26) {
                      iVar11 = *(int *)(param_1 + 0x29d4);
                    }
                    *(int *)(param_1 + 0x29d4) = iVar11;
                    if ((long)uVar26 <= (long)*(int *)(param_1 + 0x29d8)) {
                      iVar9 = *(int *)(param_1 + 0x29d8);
                    }
                    *(int *)(param_1 + 0x29d8) = iVar9;
                    *(ulong *)(param_1 + 0x29e0) =
                         *(ulong *)(param_1 + 0x29e0) | 1L << (uVar26 & 0x3f);
                    puVar17[0x140] = uVar19;
                  }
                }
                lVar18 = lVar15 + -0x2b0;
                uVar26 = uVar26 + 1;
                lVar15 = lVar15 + 1;
                puVar17 = puVar17 + 1;
                lVar25 = lVar25 + 1;
              } while (lVar18 < lVar14);
            }
            iVar3 = iVar7 + iVar3;
            break;
          case 4:
            if (0 < iVar7) {
              lVar18 = param_1 + uVar26 * 4;
              lVar25 = 0;
              lVar27 = (long)iVar4;
              lVar15 = uVar26 + 0xadc;
              do {
                if (*(int *)(param_3 + 0x150) <= lVar27) break;
                plVar24 = *(long **)(*(long *)(param_3 + 0x168) + lVar27 * 8);
                if (plVar24 != (long *)0x0) {
                  uVar6 = *puVar1;
                  piVar16 = (int *)(**(code **)(*plVar24 + 0x40))(plVar24);
                  if ((*piVar16 == 0xc) &&
                     (iVar11 = (**(code **)(*plVar24 + 0x98))(plVar24),
                     iVar11 != *(int *)(lVar18 + 5000))) {
                    *(uint *)(lVar18 + 0x2b70) = uVar6;
                    *(int *)(lVar18 + 5000) = iVar11;
                    uVar26 = lVar15 - 0xadc;
                    iVar11 = iVar28;
                    if ((long)*(int *)(param_1 + 0x29ec) <= (long)uVar26) {
                      iVar11 = *(int *)(param_1 + 0x29ec);
                    }
                    *(int *)(param_1 + 0x29ec) = iVar11;
                    iVar11 = iVar28;
                    if ((long)uVar26 <= (long)*(int *)(param_1 + 0x29f0)) {
                      iVar11 = *(int *)(param_1 + 0x29f0);
                    }
                    *(int *)(param_1 + 0x29f0) = iVar11;
                    *(ulong *)(param_1 + 0x29f8) =
                         *(ulong *)(param_1 + 0x29f8) | 1L << (uVar26 & 0x3f);
                  }
                }
                lVar25 = lVar25 + 1;
                lVar15 = lVar15 + 1;
                iVar28 = iVar28 + 1;
                lVar18 = lVar18 + 4;
                lVar27 = lVar27 + 1;
              } while (lVar25 < lVar14);
            }
            iVar4 = iVar7 + iVar4;
          }
        }
        lVar15 = *(long *)(lVar29 + 0x30);
        iVar7 = *(int *)(lVar15 + (long)iVar22 * 0x14 + 8);
        iVar28 = iVar7 + -1;
        if (iVar28 == 0 || iVar7 < 1) {
          iVar28 = 0;
        }
        iVar22 = iVar22 + iVar28 + 1;
      } while (iVar22 < *(int *)(lVar29 + 0x18));
    }
  }
  return;
}


