/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f37770; name: FUN_00f37770
 */


ulong FUN_00f37770(long param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined4 param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  uint auStack_7ffffffc [536870567];
  uint local_560 [5];
  uint local_54c;
  uint local_548;
  uint local_544;
  ulong auStack_530 [3];
  ulong local_518;
  float local_510 [2];
  undefined8 auStack_508 [127];
  undefined4 local_110 [16];
  uint local_d0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  
  local_80 = 0xffffffffffffffff;
  local_518 = CONCAT44(local_518._4_4_,param_5);
  lVar10 = 0;
  lVar5 = 0x20;
  do {
    lVar19 = lVar10 + 1;
    local_110[lVar10] = 0xbf800000;
    local_90[lVar10] = 0;
    local_d0[lVar10] = 0xffffffff;
    *(undefined8 *)((long)auStack_530 + lVar5) = 0xbf800000bf800000;
    *(undefined8 *)((long)auStack_530 + lVar5 + 8) = 0xbf800000bf800000;
    *(undefined8 *)((long)auStack_530 + lVar5 + 0x10) = 0xbf800000bf800000;
    *(undefined8 *)((long)auStack_530 + lVar5 + 0x18) = 0xbf800000bf800000;
    *(undefined8 *)((long)local_510 + lVar5) = 0xbf800000bf800000;
    *(undefined8 *)((long)auStack_508 + lVar5) = 0xbf800000bf800000;
    *(undefined8 *)((long)auStack_508 + lVar5 + 8) = 0xbf800000bf800000;
    *(undefined8 *)((long)auStack_508 + lVar5 + 0x10) = 0xbf800000bf800000;
    lVar10 = lVar19;
    lVar5 = lVar5 + 0x40;
  } while (lVar19 != 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  if ((int)uVar11 != 0) {
    uVar13 = 0;
    plVar1 = (long *)(param_1 + 0xa0);
    do {
      if ((int)uVar11 != 0) {
        uVar21 = 0;
        do {
          if (uVar13 != uVar21) {
            plVar9 = *(long **)(param_1 + 0x38);
            if (uVar13 < (uint)uVar11) {
              plVar18 = plVar9;
              lVar10 = (long)(int)uVar13;
              if ((int)uVar13 < 0) {
                do {
                  plVar14 = plVar18;
                  plVar15 = (long *)*plVar18;
                  if ((long *)*plVar18 == (long *)0x0) {
                    do {
                      plVar18 = (long *)plVar14[2];
                      bVar4 = (long *)*plVar18 == plVar14;
                      plVar14 = plVar18;
                    } while (bVar4);
                  }
                  else {
                    do {
                      plVar18 = plVar15;
                      plVar15 = (long *)plVar18[1];
                    } while ((long *)plVar18[1] != (long *)0x0);
                  }
                  bVar4 = lVar10 < -1;
                  lVar10 = lVar10 + 1;
                } while (bVar4);
              }
              else if (uVar13 != 0) {
                plVar14 = plVar9;
                do {
                  while (plVar15 = (long *)plVar14[1], (long *)plVar14[1] != (long *)0x0) {
                    do {
                      plVar18 = plVar15;
                      plVar15 = (long *)*plVar18;
                    } while ((long *)*plVar18 != (long *)0x0);
LAB_00f378a4:
                    lVar5 = lVar10 + -1;
                    bVar4 = lVar10 < 1;
                    plVar14 = plVar18;
                    lVar10 = lVar5;
                    if (lVar5 == 0 || bVar4) goto LAB_00f378f8;
                  }
                  plVar15 = plVar14 + 2;
                  plVar18 = (long *)*plVar15;
                  if ((long *)*plVar18 != plVar14) {
                    do {
                      lVar5 = *plVar15;
                      plVar15 = (long *)(lVar5 + 0x10);
                      plVar18 = (long *)*plVar15;
                    } while (*plVar18 != lVar5);
                    goto LAB_00f378a4;
                  }
                  lVar5 = lVar10 + -1;
                  bVar4 = 0 < lVar10;
                  plVar14 = plVar18;
                  lVar10 = lVar5;
                } while (lVar5 != 0 && bVar4);
              }
LAB_00f378f8:
              lVar5 = plVar18[5];
              lVar10 = (long)(int)uVar21;
              if ((int)uVar21 < 0) goto LAB_00f37904;
LAB_00f3794c:
              plVar18 = plVar9;
              lVar10 = (long)(int)uVar21;
              if (uVar21 != 0) {
                do {
                  while (plVar14 = (long *)plVar18[1], (long *)plVar18[1] != (long *)0x0) {
                    do {
                      plVar9 = plVar14;
                      plVar14 = (long *)*plVar9;
                    } while ((long *)*plVar9 != (long *)0x0);
LAB_00f37994:
                    lVar19 = lVar10 + -1;
                    bVar4 = lVar10 < 1;
                    plVar18 = plVar9;
                    lVar10 = lVar19;
                    if (lVar19 == 0 || bVar4) goto LAB_00f379ac;
                  }
                  plVar14 = plVar18 + 2;
                  plVar9 = (long *)*plVar14;
                  if ((long *)*plVar9 != plVar18) {
                    do {
                      lVar19 = *plVar14;
                      plVar14 = (long *)(lVar19 + 0x10);
                      plVar9 = (long *)*plVar14;
                    } while (*plVar9 != lVar19);
                    goto LAB_00f37994;
                  }
                  lVar19 = lVar10 + -1;
                  bVar4 = 0 < lVar10;
                  plVar18 = plVar9;
                  lVar10 = lVar19;
                } while (lVar19 != 0 && bVar4);
              }
            }
            else {
              lVar5 = 0;
              lVar10 = (long)(int)uVar21;
              if (-1 < (int)uVar21) goto LAB_00f3794c;
LAB_00f37904:
              do {
                plVar18 = plVar9;
                plVar14 = (long *)*plVar9;
                if ((long *)*plVar9 == (long *)0x0) {
                  do {
                    plVar9 = (long *)plVar18[2];
                    bVar4 = (long *)*plVar9 == plVar18;
                    plVar18 = plVar9;
                  } while (bVar4);
                }
                else {
                  do {
                    plVar9 = plVar14;
                    plVar14 = (long *)plVar9[1];
                  } while ((long *)plVar9[1] != (long *)0x0);
                }
                bVar4 = lVar10 < -1;
                lVar10 = lVar10 + 1;
              } while (bVar4);
            }
LAB_00f379ac:
            uVar6 = FUN_00f34720(lVar5,plVar9[5]);
            plVar9 = (long *)*plVar1;
            if (plVar9 != (long *)0x0) {
              plVar18 = plVar1;
              do {
                if ((ulong)plVar9[4] >= uVar6) {
                  plVar18 = plVar9;
                }
                plVar9 = (long *)plVar9[(ulong)plVar9[4] < uVar6];
              } while (plVar9 != (long *)0x0);
              if (((plVar18 != plVar1) && ((ulong)plVar18[4] <= uVar6)) &&
                 (plVar9 = (long *)plVar18[5], plVar9 != (long *)0x0)) {
                auVar26 = *(undefined1 (*) [16])(*plVar9 + 0x10);
                plVar18 = (long *)plVar9[2];
                plVar14 = (long *)plVar9[3];
                if (plVar18 == plVar14) {
                  fVar22 = 0.0;
                }
                else {
                  uVar6 = (long)plVar14 + (-8 - (long)plVar18);
                  if (((uint)uVar6 >> 3 & 1) == 0) {
                    if (*plVar18 == 0) {
                      fVar22 = 0.0;
                      auVar28 = auVar26;
                    }
                    else {
                      auVar28 = *(undefined1 (*) [16])(*plVar18 + 0x10);
                      fVar22 = auVar28._0_4_ - auVar26._0_4_;
                      fVar23 = auVar28._4_4_ - auVar26._4_4_;
                      fVar24 = auVar28._8_4_ - auVar26._8_4_;
                      fVar25 = auVar28._12_4_ - auVar26._12_4_;
                      fVar22 = fVar22 * fVar22;
                      fVar23 = fVar23 * fVar23;
                      fVar24 = fVar24 * fVar24;
                      fVar25 = fVar25 * fVar25;
                      auVar26._4_4_ = fVar23;
                      auVar26._0_4_ = fVar22;
                      auVar26._8_4_ = fVar24;
                      auVar26._12_4_ = fVar25;
                      auVar31._4_4_ = fVar23;
                      auVar31._0_4_ = fVar22;
                      auVar31._8_4_ = fVar24;
                      auVar31._12_4_ = fVar25;
                      auVar26 = NEON_ext(auVar26,auVar31,8,1);
                      fVar22 = SQRT(auVar26._0_4_ + fVar22 + auVar26._4_4_ + fVar23) + 0.0;
                    }
                    plVar18 = plVar18 + 1;
                    auVar26 = auVar28;
                  }
                  else {
                    fVar22 = 0.0;
                  }
                  if (7 < uVar6) {
                    do {
                      auVar28 = auVar26;
                      if (*plVar18 != 0) {
                        auVar28 = *(undefined1 (*) [16])(*plVar18 + 0x10);
                        fVar23 = auVar28._0_4_ - auVar26._0_4_;
                        fVar24 = auVar28._4_4_ - auVar26._4_4_;
                        fVar25 = auVar28._8_4_ - auVar26._8_4_;
                        fVar30 = auVar28._12_4_ - auVar26._12_4_;
                        auVar27._0_4_ = fVar23 * fVar23;
                        auVar27._4_4_ = fVar24 * fVar24;
                        auVar27._8_4_ = fVar25 * fVar25;
                        auVar27._12_4_ = fVar30 * fVar30;
                        auVar26 = NEON_ext(auVar27,auVar27,8,1);
                        fVar22 = fVar22 + SQRT(auVar26._0_4_ + auVar27._0_4_ +
                                               auVar26._4_4_ + auVar27._4_4_);
                      }
                      auVar26 = auVar28;
                      if (plVar18[1] != 0) {
                        auVar26 = *(undefined1 (*) [16])(plVar18[1] + 0x10);
                        fVar23 = auVar26._0_4_ - auVar28._0_4_;
                        fVar24 = auVar26._4_4_ - auVar28._4_4_;
                        fVar25 = auVar26._8_4_ - auVar28._8_4_;
                        fVar30 = auVar26._12_4_ - auVar28._12_4_;
                        auVar28._0_4_ = fVar23 * fVar23;
                        auVar28._4_4_ = fVar24 * fVar24;
                        auVar28._8_4_ = fVar25 * fVar25;
                        auVar28._12_4_ = fVar30 * fVar30;
                        auVar31 = NEON_ext(auVar28,auVar28,8,1);
                        fVar22 = fVar22 + SQRT(auVar31._0_4_ + auVar28._0_4_ +
                                               auVar31._4_4_ + auVar28._4_4_);
                      }
                      plVar18 = plVar18 + 2;
                    } while (plVar18 != plVar14);
                  }
                }
                lVar10 = plVar9[1];
                fVar23 = *(float *)(lVar10 + 0x10) - auVar26._0_4_;
                fVar24 = *(float *)(lVar10 + 0x14) - auVar26._4_4_;
                fVar25 = *(float *)(lVar10 + 0x18) - auVar26._8_4_;
                fVar30 = *(float *)(lVar10 + 0x1c) - auVar26._12_4_;
                auVar29._0_4_ = fVar23 * fVar23;
                auVar29._4_4_ = fVar24 * fVar24;
                auVar29._8_4_ = fVar25 * fVar25;
                auVar29._12_4_ = fVar30 * fVar30;
                auVar26 = NEON_ext(auVar29,auVar29,8,1);
                local_510[(ulong)uVar13 * 0x10 + (ulong)uVar21] =
                     fVar22 + SQRT(auVar26._0_4_ + auVar29._0_4_ + auVar26._4_4_ + auVar29._4_4_);
              }
            }
          }
          uVar11 = *(undefined8 *)(param_1 + 0x60);
          uVar21 = uVar21 + 1;
        } while (uVar21 < (uint)uVar11);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)uVar11);
  }
  uVar6 = FUN_00f37f30(local_510,param_2,param_3);
  if ((uVar6 & 1) != 0) {
    uVar13 = (uint)local_80;
    if ((((uint)local_80 != 0xffffffff) && (uVar21 = local_80._4_4_, local_80._4_4_ != 0xffffffff))
       && (local_560[0] = local_80._4_4_, local_80._4_4_ != (uint)local_80)) {
      lVar10 = 0;
      puVar17 = local_560;
      uVar12 = local_80._4_4_;
      do {
        puVar16 = puVar17;
        lVar5 = lVar10;
        uVar12 = local_d0[uVar12];
        puVar17 = puVar16 + 1;
        *puVar17 = uVar12;
        if (0xf < lVar5 + 2U) break;
        lVar10 = lVar5 + 1;
      } while (uVar12 != uVar13);
      uVar6 = lVar5 + 2U >> 1;
      uVar13 = (uint)uVar6 & 0x7fffffff;
      if ((uVar6 & 0x7fffffff) != 0) {
        local_560[0] = *puVar17;
        *puVar17 = uVar21;
        uVar21 = local_560[1];
        if (uVar13 != 1) {
          local_560[1] = *puVar16;
          *puVar16 = uVar21;
          uVar21 = local_560[2];
          if (uVar13 != 2) {
            iVar8 = (int)(lVar5 + 1);
            local_560[2] = local_560[iVar8 - 2U];
            local_560[iVar8 - 2U] = uVar21;
            uVar21 = local_560[3];
            if (uVar13 != 3) {
              local_560[3] = local_560[iVar8 - 3U];
              local_560[iVar8 - 3U] = uVar21;
              uVar3 = local_544;
              uVar2 = local_548;
              uVar12 = local_54c;
              uVar21 = local_560[4];
              if (uVar13 != 4) {
                local_560[4] = local_560[iVar8 - 4U];
                local_560[iVar8 - 4U] = uVar21;
                if (uVar13 != 5) {
                  local_54c = local_560[iVar8 - 5U];
                  local_560[iVar8 - 5U] = uVar12;
                  if (uVar13 != 6) {
                    local_548 = local_560[iVar8 - 6U];
                    local_560[iVar8 - 6U] = uVar2;
                    if (uVar13 != 7) {
                      local_544 = local_560[iVar8 - 7U];
                      local_560[iVar8 - 7U] = uVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (1 < (uint)(lVar5 + 2U)) {
        auStack_530[2] = lVar5 + 2;
        uVar6 = 0;
        plVar1 = (long *)(param_1 + 0xa0);
        uVar20 = 1;
        local_518 = (ulong)(uint)local_518;
        uVar13 = local_560[0];
        do {
          uVar21 = *(uint *)(param_1 + 0x60);
          if (uVar13 < uVar21) {
            plVar9 = *(long **)(param_1 + 0x38);
            lVar10 = (long)(int)uVar13;
            if ((int)uVar13 < 0) {
              do {
                plVar18 = plVar9;
                plVar14 = (long *)*plVar9;
                if ((long *)*plVar9 == (long *)0x0) {
                  do {
                    plVar9 = (long *)plVar18[2];
                    bVar4 = (long *)*plVar9 == plVar18;
                    plVar18 = plVar9;
                  } while (bVar4);
                }
                else {
                  do {
                    plVar9 = plVar14;
                    plVar14 = (long *)plVar9[1];
                  } while ((long *)plVar9[1] != (long *)0x0);
                }
                bVar4 = lVar10 < -1;
                lVar10 = lVar10 + 1;
              } while (bVar4);
            }
            else {
              plVar18 = plVar9;
              if (uVar13 != 0) {
                do {
                  while (plVar14 = (long *)plVar18[1], (long *)plVar18[1] != (long *)0x0) {
                    do {
                      plVar9 = plVar14;
                      plVar14 = (long *)*plVar9;
                    } while ((long *)*plVar9 != (long *)0x0);
LAB_00f37d38:
                    lVar5 = lVar10 + -1;
                    bVar4 = lVar10 < 1;
                    lVar10 = lVar5;
                    plVar18 = plVar9;
                    if (lVar5 == 0 || bVar4) goto LAB_00f37d8c;
                  }
                  plVar14 = plVar18 + 2;
                  plVar9 = (long *)*plVar14;
                  if ((long *)*plVar9 != plVar18) {
                    do {
                      lVar5 = *plVar14;
                      plVar14 = (long *)(lVar5 + 0x10);
                      plVar9 = (long *)*plVar14;
                    } while (*plVar9 != lVar5);
                    goto LAB_00f37d38;
                  }
                  lVar5 = lVar10 + -1;
                  bVar4 = 0 < lVar10;
                  lVar10 = lVar5;
                  plVar18 = plVar9;
                } while (lVar5 != 0 && bVar4);
              }
            }
LAB_00f37d8c:
            lVar10 = plVar9[5];
            uVar13 = local_560[uVar20];
            if (uVar21 <= uVar13) goto LAB_00f37d9c;
LAB_00f37db4:
            plVar9 = *(long **)(param_1 + 0x38);
            lVar5 = (long)(int)uVar13;
            if ((int)uVar13 < 0) {
              do {
                plVar18 = plVar9;
                plVar14 = (long *)*plVar9;
                if ((long *)*plVar9 == (long *)0x0) {
                  do {
                    plVar9 = (long *)plVar18[2];
                    bVar4 = (long *)*plVar9 == plVar18;
                    plVar18 = plVar9;
                  } while (bVar4);
                }
                else {
                  do {
                    plVar9 = plVar14;
                    plVar14 = (long *)plVar9[1];
                  } while ((long *)plVar9[1] != (long *)0x0);
                }
                bVar4 = lVar5 < -1;
                lVar5 = lVar5 + 1;
              } while (bVar4);
            }
            else {
              plVar18 = plVar9;
              if (uVar13 != 0) {
                do {
                  while (plVar14 = (long *)plVar18[1], (long *)plVar18[1] != (long *)0x0) {
                    do {
                      plVar9 = plVar14;
                      plVar14 = (long *)*plVar9;
                    } while ((long *)*plVar9 != (long *)0x0);
LAB_00f37e08:
                    lVar19 = lVar5 + -1;
                    bVar4 = lVar5 < 1;
                    lVar5 = lVar19;
                    plVar18 = plVar9;
                    if (lVar19 == 0 || bVar4) goto LAB_00f37e5c;
                  }
                  plVar14 = plVar18 + 2;
                  plVar9 = (long *)*plVar14;
                  if ((long *)*plVar9 != plVar18) {
                    do {
                      lVar19 = *plVar14;
                      plVar14 = (long *)(lVar19 + 0x10);
                      plVar9 = (long *)*plVar14;
                    } while (*plVar9 != lVar19);
                    goto LAB_00f37e08;
                  }
                  lVar19 = lVar5 + -1;
                  bVar4 = 0 < lVar5;
                  lVar5 = lVar19;
                  plVar18 = plVar9;
                } while (lVar19 != 0 && bVar4);
              }
            }
LAB_00f37e5c:
            lVar5 = plVar9[5];
          }
          else {
            lVar10 = 0;
            uVar13 = local_560[uVar20];
            if (uVar13 < uVar21) goto LAB_00f37db4;
LAB_00f37d9c:
            lVar5 = 0;
          }
          uVar7 = FUN_00f34720(lVar10,lVar5);
          plVar9 = (long *)*plVar1;
          if (plVar9 == (long *)0x0) {
LAB_00f37ea4:
            lVar19 = 0;
          }
          else {
            plVar18 = plVar1;
            do {
              if ((ulong)plVar9[4] >= uVar7) {
                plVar18 = plVar9;
              }
              plVar9 = (long *)plVar9[(ulong)plVar9[4] < uVar7];
            } while (plVar9 != (long *)0x0);
            if ((plVar18 == plVar1) || (uVar7 < (ulong)plVar18[4])) goto LAB_00f37ea4;
            lVar19 = plVar18[5];
          }
          uVar7 = FUN_00f34720(lVar10,lVar5);
          for (lVar10 = *plVar1; lVar10 != 0;
              lVar10 = *(long *)(lVar10 + (ulong)(*(ulong *)(lVar10 + 0x20) < uVar7) * 8)) {
          }
          *(long *)(param_4 + uVar6 * 8) = lVar19;
          uVar6 = uVar6 + 1;
          if (local_518 <= uVar6) {
            return uVar6;
          }
          uVar20 = uVar20 + 1;
          if (auStack_530[2] <= uVar20) {
            return uVar6;
          }
        } while( true );
      }
    }
  }
  return 0;
}


