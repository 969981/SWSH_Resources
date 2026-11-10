/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050ec90; name: FUN_0050ec90
 */


undefined8 FUN_0050ec90(long param_1,int *param_2,long *param_3,int *param_4,uint param_5)

{
  long lVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  long alStack_130 [3];
  uint local_114;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  long local_f0;
  undefined8 local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  long *local_98;
  long *local_90;
  ulong local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  
  local_80 = *(long *)(param_1 + 0x18);
  iVar4 = param_2[8];
  local_b8 = *(long *)(local_80 + 0x40) + (ulong)*(byte *)((long)param_2 + 0x25) * 0x20;
  local_78 = param_1;
  bVar5 = *(byte *)(local_b8 + 0x1a);
  uVar27 = (ulong)bVar5;
  iVar22 = *(int *)(local_80 + (long)*(int *)(param_1 + 0x3c) * 4);
  local_90 = param_3;
  local_88 = uVar27;
  uVar25 = (uint)bVar5;
  if (*param_2 < 2) {
    iVar22 = iVar22 >> 1;
    iVar21 = param_2[7];
    if (iVar22 <= param_2[7]) {
      iVar21 = iVar22;
    }
    if ((0 < iVar21 - param_2[6]) && (0 < (int)param_5)) {
      uVar26 = 0;
      if (iVar4 != 0) {
        uVar26 = (iVar21 - param_2[6]) / iVar4;
      }
      uVar29 = (ulong)uVar26;
      uVar23 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,uVar25 - 1);
      uVar14 = (ulong)param_5;
      plVar16 = param_3;
      do {
        if (*param_4 != 0) {
          param_3[(int)uVar23] = *plVar16;
          uVar23 = (ulong)((int)uVar23 + 1);
        }
        plVar16 = plVar16 + 1;
        param_4 = param_4 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar9 = (uint)uVar23;
      if (uVar9 != 0) {
        lVar12 = -((-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3) + 0xf & 0xfffffffffffffff0
                  );
        plVar16 = (long *)((long)alStack_130 + lVar12);
        iVar22 = 0;
        if (uVar25 != 0) {
          iVar22 = (int)((uVar25 - 1) + uVar26) / (int)uVar25;
        }
        lVar15 = (long)plVar16 - ((long)(int)(iVar22 * uVar25 * uVar9) + 0xfU & 0xfffffffffffffff0);
        *plVar16 = lVar15;
        if (1 < (int)uVar9) {
          lVar11 = (long)(int)(iVar22 * uVar25);
          *(long *)((long)alStack_130 + lVar12 + 8) = lVar15 + lVar11;
          if (uVar9 != 2) {
            if (uVar9 == 3) {
              lVar17 = 2;
            }
            else {
              lVar12 = 0;
              lVar15 = 0;
              do {
                lVar17 = lVar15;
                plVar16[lVar17 + 2] = *plVar16 + lVar11 * 2 + lVar12;
                lVar15 = *plVar16 + lVar11 * 3 + lVar12;
                lVar12 = lVar12 + lVar11 * 2;
                plVar16[lVar17 + 3] = lVar15;
                lVar15 = lVar17 + 2;
              } while ((uVar23 - 2) - (ulong)(uVar9 & 1) != lVar17 + 2);
              lVar17 = lVar17 + 4;
            }
            if ((uVar23 & 1) != 0) {
              plVar16[lVar17] = *plVar16 + lVar17 * lVar11;
            }
          }
        }
        uVar10 = (uint)*(byte *)((long)param_2 + 0x26);
        if (*(byte *)((long)param_2 + 0x26) != 0) {
          local_e0 = uVar27 - 2;
          local_114 = -uVar25;
          local_c0 = (long)(int)uVar9;
          local_a8 = (long)(int)uVar26;
          local_110 = (ulong)(~uVar9 & 1);
          local_e8 = CONCAT44(local_e8._4_4_,(uint)(uVar25 == 0 || (int)uVar9 < 2));
          alStack_130[1] = (uVar23 - 1) - local_110;
          local_c8 = uVar27 & 1;
          local_108 = (ulong)(uVar25 + 3 & 3);
          local_d0 = uVar27 - local_c8;
          alStack_130[2] = -local_108;
          uVar25 = 0;
          local_f0 = uVar27 - 1;
          local_100 = uVar29;
          local_f8 = uVar23;
          local_a0 = uVar23;
          local_98 = plVar16;
          do {
            if (0 < (int)uVar29) {
              uVar14 = 0;
              do {
                while( true ) {
                  uVar26 = (uint)uVar27;
                  iVar22 = (int)uVar14;
                  iVar21 = (int)uVar23;
                  if (uVar25 == 0) {
                    lVar12 = *local_98;
                    *(undefined1 *)(lVar12 + ((int)local_d8 + iVar22)) = 1;
                    if (1 < uVar26) {
                      uVar18 = local_e0;
                      if ((int)local_108 != 0) {
                        lVar15 = alStack_130[2];
                        do {
                          pcVar2 = (char *)(lVar12 + iVar22 + uVar18);
                          uVar18 = uVar18 - 1;
                          lVar15 = lVar15 + 1;
                          *pcVar2 = (char)param_2[9] * pcVar2[1];
                        } while (lVar15 != 0);
                      }
                      if (2 < local_e0) {
                        lVar15 = uVar18 - 1;
                        do {
                          pcVar2 = (char *)(lVar12 + iVar22 + lVar15);
                          cVar7 = (char)param_2[9] * pcVar2[2];
                          pcVar2[1] = cVar7;
                          cVar7 = (char)param_2[9] * cVar7;
                          *pcVar2 = cVar7;
                          cVar7 = (char)param_2[9] * cVar7;
                          pcVar2[-1] = cVar7;
                          lVar11 = lVar15 + -2;
                          lVar15 = lVar15 + -4;
                          pcVar2[-2] = (char)param_2[9] * cVar7;
                        } while (0 < lVar11);
                      }
                    }
                    if ((local_e8 & 1) == 0) {
                      lVar11 = (long)iVar22;
                      lVar15 = 1;
                      if (iVar21 != 2) {
                        lVar17 = alStack_130[1];
                        do {
                          lVar19 = local_98[lVar15];
                          lVar20 = local_f0;
                          do {
                            *(undefined1 *)(lVar19 + lVar11 + lVar20) =
                                 *(undefined1 *)(lVar12 + lVar11 + lVar20);
                            lVar1 = lVar20 + 1;
                            lVar20 = lVar20 + -1;
                          } while (1 < lVar1);
                          lVar12 = local_98[lVar15 + 1];
                          lVar20 = local_f0;
                          do {
                            *(undefined1 *)(lVar12 + lVar11 + lVar20) =
                                 *(undefined1 *)(lVar19 + lVar11 + lVar20);
                            lVar1 = lVar20 + 1;
                            lVar20 = lVar20 + -1;
                          } while (1 < lVar1);
                          lVar15 = lVar15 + 2;
                          lVar17 = lVar17 + -2;
                        } while (lVar17 != 0);
                      }
                      if ((int)local_110 != 0) {
                        lVar17 = local_98[lVar15];
                        lVar15 = local_f0;
                        do {
                          *(undefined1 *)(lVar17 + lVar11 + lVar15) =
                               *(undefined1 *)(lVar12 + lVar11 + lVar15);
                          lVar20 = lVar15 + 1;
                          lVar15 = lVar15 + -1;
                        } while (1 < lVar20);
                      }
                    }
                    if (0 < iVar21) {
                      if (uVar26 == 0) {
                        iVar28 = 0;
                        do {
                          lVar12 = local_78;
                          FUN_0050b620(local_b8,local_78);
                          if (*(int *)(lVar12 + 0xc) < 0) {
                            return 0;
                          }
                          iVar28 = iVar28 + 1;
                        } while (iVar28 < iVar21);
                      }
                      else {
                        lVar12 = 0;
                        local_b0 = (ulong)iVar22;
                        do {
                          lVar15 = local_78;
                          uVar9 = FUN_0050b620(local_b8,local_78);
                          if (*(int *)(lVar15 + 0xc) < 0) {
                            return 0;
                          }
                          lVar15 = local_98[lVar12];
                          if (uVar26 == 1) {
                            lVar11 = 0;
                          }
                          else {
                            lVar11 = 0;
                            do {
                              pbVar3 = (byte *)(lVar15 + local_b0 + lVar11);
                              lVar11 = lVar11 + 2;
                              bVar5 = *pbVar3;
                              uVar10 = 0;
                              if (bVar5 != 0) {
                                uVar10 = uVar9 / bVar5;
                              }
                              *pbVar3 = (byte)uVar10;
                              uVar9 = uVar9 - (uVar10 & 0xff) * (uint)bVar5;
                              bVar5 = pbVar3[1];
                              uVar10 = 0;
                              if (bVar5 != 0) {
                                uVar10 = uVar9 / bVar5;
                              }
                              pbVar3[1] = (byte)uVar10;
                              uVar9 = uVar9 - (uVar10 & 0xff) * (uint)bVar5;
                            } while (local_d0 != lVar11);
                          }
                          if (local_c8 != 0) {
                            uVar8 = 0;
                            uVar10 = (uint)*(byte *)(lVar15 + lVar11 + local_b0);
                            if (uVar10 != 0) {
                              uVar8 = (undefined1)(uVar9 / uVar10);
                            }
                            *(undefined1 *)(lVar15 + lVar11 + local_b0) = uVar8;
                          }
                          lVar12 = lVar12 + 1;
                        } while (lVar12 < local_c0);
                      }
                    }
                  }
                  if (uVar26 != 0) break;
LAB_0050f5bc:
                  if ((int)uVar29 <= (int)uVar14) goto LAB_0050f5c4;
                }
                iVar28 = (int)uVar29;
                if (iVar28 <= iVar22) goto LAB_0050f5bc;
                if (0 < iVar21) {
                  uVar26 = 0;
                  uVar14 = (ulong)iVar22;
                  do {
                    uVar27 = local_a0;
                    plVar24 = local_90;
                    plVar16 = local_98;
                    do {
                      if ((1 << (ulong)(uVar25 & 0x1f) &
                          (uint)*(byte *)(*(long *)(param_2 + 2) +
                                         (ulong)*(byte *)(*plVar16 + uVar14))) != 0) {
                        lVar12 = *(long *)(local_80 + 0x40) +
                                 (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                                 (ulong)*(byte *)(*plVar16 + uVar14) * 8 +
                                                 (ulong)uVar25) * 0x20;
                        local_70[0] = *plVar24 + (long)(param_2[6] + iVar4 * (int)uVar14) * 4;
                        (**(code **)(*(long *)(lVar12 + 0x10) + 0x48))
                                  (lVar12,local_70,0,local_78,iVar4);
                      }
                      plVar16 = plVar16 + 1;
                      plVar24 = plVar24 + 1;
                      uVar27 = uVar27 - 1;
                    } while (uVar27 != 0);
                    uVar26 = uVar26 + 1;
                    uVar14 = uVar14 + 1;
                  } while ((uVar26 < (uint)local_88) && ((long)uVar14 < local_a8));
                  uVar23 = local_f8;
                  uVar27 = local_88;
                  uVar29 = local_100;
                  goto LAB_0050f5bc;
                }
                uVar26 = local_114;
                if (local_114 <= (uint)(iVar22 - iVar28)) {
                  uVar26 = iVar22 - iVar28;
                }
                uVar14 = (ulong)(iVar22 - uVar26);
              } while ((int)(iVar22 - uVar26) < iVar28);
LAB_0050f5c4:
              uVar10 = (uint)*(byte *)((long)param_2 + 0x26);
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar10);
        }
      }
    }
  }
  else {
    iVar22 = (int)(iVar22 * param_5) >> 1;
    iVar21 = param_2[6];
    iVar28 = param_2[7];
    if (iVar22 <= param_2[7]) {
      iVar28 = iVar22;
    }
    if (0 < iVar28 - iVar21) {
      uVar26 = 0;
      if (iVar4 != 0) {
        uVar26 = (iVar28 - iVar21) / iVar4;
      }
      uVar14 = (ulong)uVar26;
      local_c0 = CONCAT44(local_c0._4_4_,uVar25 - 1);
      iVar22 = 0;
      if (uVar25 != 0) {
        iVar22 = (int)((uVar25 - 1) + uVar26) / (int)uVar25;
      }
      local_98 = (long *)((long)alStack_130 -
                         ((long)(int)(iVar22 * uVar25) + 0xfU & 0xfffffffffffffff0));
      if (iVar21 < 0) {
        iVar21 = iVar21 + 1;
      }
      if (param_4[1] != 0 || *param_4 != 0) {
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        if (*(char *)((long)param_2 + 0x26) != '\0') {
          local_a8 = CONCAT44(local_a8._4_4_,iVar21 >> 1);
          local_b0 = uVar27 - 2;
          iVar4 = iVar4 >> 1;
          local_d8 = uVar27 & 1;
          local_e0 = (ulong)(uVar25 + 3 & 3);
          uVar25 = 0;
          local_c8 = uVar27 - local_d8;
          local_e8 = -local_e0;
          local_a0 = uVar14;
          do {
            if (0 < (int)uVar14) {
              if (uVar25 == 0) {
                uVar23 = 0;
                do {
                  iVar22 = (int)uVar23;
                  uVar9 = (uint)uVar27;
                  *(undefined1 *)((long)local_98 + (long)((int)local_c0 + iVar22)) = 1;
                  if (1 < uVar9) {
                    cVar7 = (char)param_2[9];
                    uVar29 = local_b0;
                    if ((int)local_e0 != 0) {
                      lVar12 = local_e8;
                      do {
                        pcVar2 = (char *)((long)local_98 + (long)iVar22 + uVar29);
                        uVar29 = uVar29 - 1;
                        lVar12 = lVar12 + 1;
                        *pcVar2 = cVar7 * pcVar2[1];
                      } while (lVar12 != 0);
                    }
                    if (2 < local_b0) {
                      lVar12 = uVar29 - 1;
                      do {
                        pcVar2 = (char *)((long)local_98 + (long)iVar22 + lVar12);
                        pcVar2[1] = cVar7 * pcVar2[2];
                        cVar6 = cVar7 * cVar7 * pcVar2[2];
                        *pcVar2 = cVar6;
                        cVar6 = cVar7 * cVar6;
                        pcVar2[-1] = cVar6;
                        pcVar2[-2] = cVar7 * cVar6;
                        lVar15 = lVar12 + -2;
                        lVar12 = lVar12 + -4;
                      } while (0 < lVar15);
                    }
                  }
                  uVar10 = FUN_0050b620(local_b8,local_78);
                  if (uVar9 != 0) {
                    if (uVar9 == 1) {
                      lVar12 = 0;
                    }
                    else {
                      lVar12 = 0;
                      do {
                        pbVar3 = (byte *)((long)local_98 + (long)iVar22 + lVar12);
                        lVar12 = lVar12 + 2;
                        bVar5 = *pbVar3;
                        uVar13 = 0;
                        if (bVar5 != 0) {
                          uVar13 = uVar10 / bVar5;
                        }
                        *pbVar3 = (byte)uVar13;
                        uVar10 = uVar10 - (uVar13 & 0xff) * (uint)bVar5;
                        bVar5 = pbVar3[1];
                        uVar13 = 0;
                        if (bVar5 != 0) {
                          uVar13 = uVar10 / bVar5;
                        }
                        pbVar3[1] = (byte)uVar13;
                        uVar10 = uVar10 - (uVar13 & 0xff) * (uint)bVar5;
                      } while (local_c8 != lVar12);
                    }
                    if (local_d8 != 0) {
                      lVar12 = lVar12 + iVar22;
                      uVar8 = 0;
                      uVar13 = (uint)*(byte *)((long)local_98 + lVar12);
                      if (uVar13 != 0) {
                        uVar8 = (undefined1)(uVar10 / uVar13);
                      }
                      *(undefined1 *)((long)local_98 + lVar12) = uVar8;
                    }
                  }
                  if ((uVar9 != 0) && (iVar22 < (int)uVar14)) {
                    iVar21 = (int)local_a8 + iVar4 * iVar22;
                    lVar12 = (long)local_98 + (long)iVar22;
                    lVar15 = 0;
                    local_d0 = uVar23;
                    do {
                      uVar14 = (ulong)*(byte *)(lVar12 + lVar15);
                      if ((*(byte *)(*(long *)(param_2 + 2) + uVar14) & 1) != 0) {
                        lVar11 = *(long *)(local_80 + 0x40) +
                                 (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar14 * 8) * 0x20;
                        (**(code **)(*(long *)(lVar11 + 0x10) + 0x48))
                                  (lVar11,local_90,iVar21,local_78,iVar4);
                      }
                      uVar10 = (uint)(lVar15 + 1);
                    } while ((uVar10 < uVar9) &&
                            (lVar11 = (long)iVar22 + 1 + lVar15, iVar21 = iVar21 + iVar4,
                            lVar15 = lVar15 + 1, lVar11 < (int)uVar26));
                    uVar23 = (ulong)((int)local_d0 + uVar10);
                    uVar14 = local_a0;
                  }
                } while ((int)uVar23 < (int)uVar14);
              }
              else {
                iVar22 = 0;
                do {
                  if (((int)uVar27 != 0) && (iVar22 < (int)uVar14)) {
                    iVar21 = (int)local_a8 + iVar4 * iVar22;
                    lVar12 = (long)local_98 + (long)iVar22;
                    lVar15 = 0;
                    do {
                      uVar27 = (ulong)*(byte *)(lVar12 + lVar15);
                      if ((1 << (ulong)(uVar25 & 0x1f) &
                          (uint)*(byte *)(*(long *)(param_2 + 2) + uVar27)) != 0) {
                        lVar11 = *(long *)(local_80 + 0x40) +
                                 (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                                 uVar27 * 8 + (ulong)uVar25) * 0x20;
                        (**(code **)(*(long *)(lVar11 + 0x10) + 0x48))
                                  (lVar11,local_90,iVar21,local_78,iVar4);
                      }
                      uVar9 = (uint)(lVar15 + 1);
                    } while ((uVar9 < (uint)local_88) &&
                            (lVar11 = (long)iVar22 + 1 + lVar15, iVar21 = iVar21 + iVar4,
                            lVar15 = lVar15 + 1, lVar11 < (int)uVar26));
                    iVar22 = iVar22 + uVar9;
                    uVar14 = local_a0;
                    uVar27 = local_88;
                  }
                } while (iVar22 < (int)uVar14);
              }
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < *(byte *)((long)param_2 + 0x26));
        }
      }
    }
  }
  return 0;
}


