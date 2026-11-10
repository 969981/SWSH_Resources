/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00620a00; name: FUN_00620a00
 */


/* WARNING: Removing unreachable block (ram,0x00620e10) */
/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00620a00(uint *param_1,uint param_2,uint param_3,long param_4,long param_5,long *param_6,
            uint *param_7,long param_8,uint *param_9,uint *param_10)

{
  undefined1 *puVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  int *piVar18;
  char cVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  uint auStack_15c [15];
  long alStack_120 [16];
  uint local_a0 [16];
  
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  puVar7 = param_1;
  uVar8 = param_2;
  if ((param_2 & 1) != 0) {
    puVar7 = param_1 + 1;
    local_a0[*param_1] = local_a0[*param_1] + 1;
    uVar8 = param_2 - 1;
  }
  if (param_2 != 1) {
    do {
      uVar8 = uVar8 - 2;
      local_a0[*puVar7] = local_a0[*puVar7] + 1;
      puVar17 = puVar7 + 1;
      puVar7 = puVar7 + 2;
      local_a0[*puVar17] = local_a0[*puVar17] + 1;
    } while (uVar8 != 0);
  }
  if (local_a0[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
    return 0;
  }
  uVar8 = *param_7;
  if (local_a0[1] == 0) {
    if (local_a0[2] != 0) {
      uVar11 = 2;
      uVar14 = 2;
      if (1 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[3] != 0) {
      uVar11 = 3;
      uVar14 = 3;
      if (2 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[4] != 0) {
      uVar11 = 4;
      uVar14 = 4;
      if (3 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[5] != 0) {
      uVar11 = 5;
      uVar14 = 5;
      if (4 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[6] != 0) {
      uVar11 = 6;
      uVar14 = 6;
      if (5 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[7] != 0) {
      uVar11 = 7;
      uVar14 = 7;
      if (6 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[8] != 0) {
      uVar11 = 8;
      uVar14 = 8;
      if (7 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[9] != 0) {
      uVar11 = 9;
      uVar14 = 9;
      if (8 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[10] != 0) {
      uVar11 = 10;
      uVar14 = 10;
      if (9 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[0xb] != 0) {
      uVar11 = 0xb;
      uVar14 = 0xb;
      if (10 < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[0xc] != 0) {
      uVar11 = 0xc;
      uVar14 = 0xc;
      if (0xb < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[0xd] != 0) {
      uVar11 = 0xd;
      uVar14 = 0xd;
      if (0xc < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[0xe] != 0) {
      uVar11 = 0xe;
      uVar14 = 0xe;
      if (0xd < uVar8) {
        uVar14 = uVar8;
      }
      goto joined_r0x00620bd4;
    }
    if (local_a0[0xf] == 0) {
      uVar11 = 0x10;
      if (uVar8 < 0x11) {
        uVar8 = 0x10;
      }
      goto LAB_00620ccc;
    }
    uVar11 = 0xf;
    if (uVar8 < 0x10) {
      uVar8 = 0xf;
    }
    uVar13 = 0xf;
LAB_00621120:
    uVar14 = (uint)uVar13;
    if (uVar8 <= (uint)uVar13) {
      uVar14 = uVar8;
    }
    uVar15 = 1 << uVar11;
    *param_7 = uVar14;
    iVar5 = uVar15 - local_a0[uVar13];
  }
  else {
    uVar11 = 1;
    uVar14 = 1;
    if (uVar8 != 0) {
      uVar14 = uVar8;
    }
joined_r0x00620bd4:
    uVar8 = uVar14;
    if (local_a0[0xf] == 0) {
      if (local_a0[0xe] == 0) {
LAB_00620ccc:
        if (local_a0[0xd] == 0) {
          if (local_a0[0xc] == 0) {
            if (local_a0[0xb] == 0) {
              if (local_a0[10] == 0) {
                if (local_a0[9] == 0) {
                  if (local_a0[8] == 0) {
                    if (local_a0[7] == 0) {
                      if (local_a0[6] == 0) {
                        if (local_a0[5] == 0) {
                          if (local_a0[4] == 0) {
                            if (local_a0[3] == 0) {
                              if (local_a0[2] == 0) {
                                uVar13 = (ulong)(local_a0[1] != 0);
                                goto LAB_00621120;
                              }
                              uVar13 = 2;
                            }
                            else {
                              uVar13 = 3;
                            }
                          }
                          else {
                            uVar13 = 4;
                          }
                        }
                        else {
                          uVar13 = 5;
                        }
                      }
                      else {
                        uVar13 = 6;
                      }
                    }
                    else {
                      uVar13 = 7;
                    }
                  }
                  else {
                    uVar13 = 8;
                  }
                }
                else {
                  uVar13 = 9;
                }
              }
              else {
                uVar13 = 10;
              }
            }
            else {
              uVar13 = 0xb;
            }
          }
          else {
            uVar13 = 0xc;
          }
        }
        else {
          uVar13 = 0xd;
        }
      }
      else {
        uVar13 = 0xe;
      }
      uVar12 = (uint)uVar13;
      uVar14 = uVar12;
      if (uVar8 <= uVar12) {
        uVar14 = uVar8;
      }
      uVar15 = 1 << uVar11;
      *param_7 = uVar14;
      if ((uint)uVar11 < uVar12) goto LAB_00620da4;
    }
    else {
      uVar13 = 0xf;
      if (0xe < uVar8) {
        uVar8 = 0xf;
      }
      uVar15 = 1 << uVar11;
      *param_7 = uVar8;
      uVar14 = uVar8;
LAB_00620da4:
      uVar29 = uVar11;
      do {
        puVar7 = local_a0 + uVar29;
        if ((int)(uVar15 - *puVar7) < 0) {
          return 0xfffffffd;
        }
        uVar29 = uVar29 + 1;
        uVar15 = (uVar15 - *puVar7) * 2;
      } while ((uint)uVar29 < (uint)uVar13);
    }
    iVar5 = uVar15 - local_a0[uVar13];
  }
  if (iVar5 < 0) {
    return 0xfffffffd;
  }
  local_a0[uVar13] = uVar15;
  uVar8 = (uint)uVar13;
  auStack_15c[2] = 0;
  if (uVar8 - 1 != 0) {
    piVar18 = (int *)((ulong)local_a0 | 4);
    puVar7 = auStack_15c + 3;
    uVar15 = uVar8 - 1 & 1;
    if (uVar8 == 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      iVar10 = (uVar15 + 1) - uVar8;
      puVar17 = puVar7;
      do {
        iVar25 = *piVar18;
        piVar3 = piVar18 + 1;
        piVar18 = piVar18 + 2;
        uVar23 = iVar25 + uVar12;
        puVar7 = puVar17 + 2;
        uVar12 = *piVar3 + uVar23;
        *puVar17 = uVar23;
        puVar17[1] = uVar12;
        iVar10 = iVar10 + 2;
        puVar17 = puVar7;
      } while (iVar10 != 0);
      if (uVar15 == 0) goto LAB_00620e60;
    }
    *puVar7 = *piVar18 + uVar12;
  }
LAB_00620e60:
  lVar16 = 0;
  do {
    uVar15 = param_1[lVar16];
    if (uVar15 != 0) {
      uVar12 = auStack_15c[(ulong)uVar15 + 1];
      auStack_15c[(ulong)uVar15 + 1] = uVar12 + 1;
      param_10[uVar12] = (uint)lVar16;
    }
    lVar16 = lVar16 + 1;
  } while ((uint)lVar16 < param_2);
  auStack_15c[1] = 0;
  alStack_120[1] = 0;
  if ((uint)uVar11 <= uVar8) {
    puVar17 = param_10 + auStack_15c[uVar13 + 1];
    uVar23 = 0;
    uVar12 = 0;
    lVar16 = 0;
    uVar15 = 0;
    puVar7 = local_a0 + uVar11 + 1;
    uVar29 = 0xffffffff;
    uVar26 = -uVar14;
    do {
      uVar24 = local_a0[uVar11];
      if (uVar24 != 0) {
        iVar10 = (int)uVar11;
LAB_00620f10:
        do {
          if ((long)(int)(uVar26 + uVar14) < (long)uVar11) {
            uVar20 = (long)(int)uVar29;
            uVar27 = uVar26;
            uVar30 = uVar26 + uVar14;
            do {
              uVar26 = uVar30;
              uVar23 = uVar14;
              if (uVar8 - uVar26 <= uVar14) {
                uVar23 = uVar8 - uVar26;
              }
              uVar28 = iVar10 - uVar26;
              uVar4 = 1 << (ulong)(uVar28 & 0x1f);
              iVar25 = uVar4 - uVar24;
              uVar30 = uVar28;
              if (((uVar24 <= uVar4 && iVar25 != 0) && (uVar28 < uVar23)) &&
                 (uVar30 = uVar28 + 1, uVar30 < uVar23)) {
                puVar22 = puVar7;
                do {
                  uVar4 = iVar25 * 2;
                  iVar25 = uVar4 - *puVar22;
                  if (uVar4 < *puVar22 || iVar25 == 0) break;
                  uVar30 = uVar30 + 1;
                  puVar22 = puVar22 + 1;
                } while (uVar30 < uVar23);
              }
              uVar23 = 1 << (ulong)(uVar30 & 0x1f);
              uVar4 = *param_9 + uVar23;
              if (0x5a0 < uVar4) {
                return 0xfffffffd;
              }
              lVar16 = param_8 + (ulong)*param_9 * 8;
              uVar29 = uVar20 + 1;
              alStack_120[uVar20 + 2] = lVar16;
              *param_9 = uVar4;
              if ((int)uVar29 == 0) {
                *param_6 = lVar16;
              }
              else {
                lVar21 = alStack_120[uVar20 + 1];
                uVar12 = uVar15 >> (ulong)(uVar27 & 0x1f);
                auStack_15c[uVar20 + 2] = uVar15;
                puVar1 = (undefined1 *)(lVar21 + (ulong)uVar12 * 8);
                uVar12 = (int)((ulong)(lVar16 - lVar21) >> 3) - uVar12;
                *puVar1 = (char)uVar30;
                puVar1[1] = (char)uVar14;
                *(uint *)(puVar1 + 4) = uVar12;
              }
              uVar20 = uVar29;
              uVar27 = uVar26;
              uVar30 = uVar26 + uVar14;
            } while ((long)(int)(uVar26 + uVar14) < (long)uVar11);
            if (puVar17 <= param_10) goto LAB_00620ff8;
LAB_00621018:
            uVar12 = *param_10;
            if (uVar12 < param_3) {
              cVar19 = '\0';
              if (0xff < uVar12) {
                cVar19 = '`';
              }
            }
            else {
              lVar21 = (ulong)(uVar12 - param_3) * 4;
              uVar12 = *(uint *)(param_4 + lVar21);
              cVar19 = *(char *)(param_5 + lVar21) + 'P';
            }
            uVar27 = uVar15 >> (ulong)(uVar26 & 0x1f);
            param_10 = param_10 + 1;
            if (uVar27 < uVar23) {
LAB_00621064:
              do {
                pcVar2 = (char *)(lVar16 + (ulong)uVar27 * 8);
                uVar27 = uVar27 + (1 << (ulong)(uVar28 & 0x1f));
                *pcVar2 = cVar19;
                pcVar2[1] = (char)uVar28;
                *(uint *)(pcVar2 + 4) = uVar12;
              } while (uVar27 < uVar23);
            }
          }
          else {
            uVar28 = iVar10 - uVar26;
            if (param_10 < puVar17) goto LAB_00621018;
LAB_00620ff8:
            cVar19 = -0x40;
            uVar27 = uVar15 >> (ulong)(uVar26 & 0x1f);
            if (uVar27 < uVar23) goto LAB_00621064;
          }
          uVar24 = uVar24 - 1;
          uVar28 = 1 << (ulong)(iVar10 - 1U & 0x1f);
          do {
            uVar27 = uVar28 & uVar15;
            uVar15 = uVar28 ^ uVar15;
            uVar28 = uVar28 >> 1;
          } while (uVar27 != 0);
          if ((uVar15 & (-1 << (ulong)(uVar26 & 0x1f) ^ 0xffffffffU)) ==
              auStack_15c[(long)(int)uVar29 + 1]) {
            if (uVar24 == 0) break;
            goto LAB_00620f10;
          }
          puVar22 = auStack_15c + (int)uVar29;
          uVar28 = uVar26;
          do {
            uVar26 = uVar28 - uVar14;
            uVar27 = -uVar14 + uVar28;
            uVar30 = *puVar22;
            uVar29 = (ulong)((int)uVar29 - 1);
            puVar22 = puVar22 + -1;
            uVar28 = uVar26;
          } while ((uVar15 & (-1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU)) != uVar30);
        } while (uVar24 != 0);
      }
      bVar6 = uVar11 < uVar13;
      uVar11 = uVar11 + 1;
      puVar7 = puVar7 + 1;
    } while (bVar6);
  }
  uVar9 = 0xfffffffb;
  if (iVar5 == 0 || uVar8 == 1) {
    uVar9 = 0;
  }
  return uVar9;
}


