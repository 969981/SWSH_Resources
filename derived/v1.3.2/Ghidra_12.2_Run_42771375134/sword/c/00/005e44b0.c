/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e44b0; name: FUN_005e44b0
 */


void FUN_005e44b0(long *param_1,long *param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined2 local_44 [2];
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  plVar17 = param_1 + 1;
  *plVar17 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
      *param_1 = lVar4;
      uVar15 = param_2[2];
    }
    else {
      lVar4 = FUN_005bc740();
      *param_1 = lVar4;
      uVar15 = param_2[2];
    }
  }
  else {
    uVar15 = param_2[2];
  }
  if (0 < (long)uVar15) {
    lVar4 = param_2[1];
    lVar16 = 0;
LAB_005e4518:
    uVar11 = (uint)*(byte *)(lVar4 + uVar15 + -1 + lVar16);
    uVar3 = uVar11 - 0x2f;
    if ((0x2d < uVar3 || (1L << ((ulong)uVar3 & 0x3f) & 0x200000000801U) == 0) && (uVar11 != 0x7c))
    goto code_r0x005e453c;
    uVar14 = uVar15 + lVar16;
    if (uVar14 == 0) goto LAB_005e45c0;
    if ((param_3 & 1) != 0) {
      if (uVar15 <= uVar14) {
        return;
      }
      uVar14 = -lVar16;
      if ((ulong)param_1[4] <= uVar14) {
        if (param_1[3] == 0) {
          uVar5 = param_1[4] * 2;
          uVar8 = 1U - lVar16;
          if (1U - lVar16 <= uVar5) {
            uVar8 = uVar5;
          }
        }
        else {
          uVar8 = (param_1[3] - lVar16) + 1;
        }
        FUN_005c5e00(param_1,uVar8,0);
        lVar4 = param_2[1];
      }
      lVar7 = *plVar17;
      lVar12 = lVar4 + uVar15;
      lVar9 = lVar12 + lVar16;
      uVar8 = uVar14;
      if (-1 < (long)uVar14) goto LAB_005e497c;
      if (lVar9 != 0) {
        uVar5 = 0;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (*(char *)(lVar12 + uVar8 + lVar16) != '\0');
LAB_005e497c:
        if ((lVar7 == 0) || ((long)uVar8 < 1)) goto LAB_005e4bcc;
        uVar5 = uVar8 & 3;
        if (uVar8 - 1 < 3) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          do {
            puVar6 = (undefined1 *)(lVar7 + 1 + lVar13);
            puVar6[-1] = *(undefined1 *)(lVar9 + lVar13);
            *puVar6 = *(undefined1 *)(lVar9 + lVar13 + 1);
            lVar2 = lVar12 + lVar13;
            lVar13 = lVar13 + 4;
            lVar2 = lVar2 + lVar16;
            puVar6[1] = *(undefined1 *)(lVar2 + 2);
            puVar6[2] = *(undefined1 *)(lVar2 + 3);
          } while (uVar8 - uVar5 != lVar13);
        }
        if (uVar5 != 0) {
          lVar12 = -uVar5;
          puVar6 = (undefined1 *)(lVar4 + lVar13 + uVar15 + lVar16);
          puVar10 = (undefined1 *)(lVar7 + lVar13);
          do {
            lVar12 = lVar12 + 1;
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar12 != 0);
        }
        goto LAB_005e4bc8;
      }
      goto LAB_005e4bcc;
    }
    local_44[0] = 0x2e;
    lVar12 = 0;
    do {
      pcVar1 = (char *)(((ulong)local_44 | 1) + lVar12);
      lVar12 = lVar12 + 1;
    } while (*pcVar1 != '\0');
    if (lVar12 != 0) {
      lVar12 = 0;
      lVar9 = lVar4;
      lVar7 = lVar16;
      do {
        lVar7 = lVar7 + 1;
        lVar9 = lVar9 + -1;
        if (*(char *)(lVar9 + uVar15) == '.') {
          lVar12 = uVar15 + lVar12;
          if (((long)uVar14 <= lVar12) && (lVar12 != 0)) {
            if (lVar12 <= (long)uVar14) {
              return;
            }
            if (uVar15 <= uVar14) {
              return;
            }
            if (lVar7 == 0) {
              lVar7 = lVar16;
            }
            uVar14 = -lVar7;
            if ((ulong)param_1[4] <= uVar14) {
              uVar8 = uVar14 + 1;
              if (param_1[3] == 0) {
                uVar5 = param_1[4] * 2;
                if (uVar8 <= uVar5) {
                  uVar8 = uVar5;
                }
              }
              else {
                uVar8 = param_1[3] + uVar8;
              }
              FUN_005c5e00(param_1,uVar8,0);
              lVar4 = param_2[1];
            }
            lVar7 = *plVar17;
            lVar12 = lVar4 + uVar15;
            lVar9 = lVar12 + lVar16;
            uVar8 = uVar14;
            if ((long)uVar14 < 0) {
              if (lVar9 == 0) goto LAB_005e4bcc;
              uVar5 = 0;
              do {
                uVar8 = uVar5;
                uVar5 = uVar8 + 1;
              } while (*(char *)(lVar12 + uVar8 + lVar16) != '\0');
            }
            if ((lVar7 == 0) || ((long)uVar8 < 1)) goto LAB_005e4bcc;
            uVar5 = uVar8 & 3;
            if (uVar8 - 1 < 3) {
              lVar13 = 0;
            }
            else {
              lVar13 = 0;
              do {
                puVar6 = (undefined1 *)(lVar7 + 1 + lVar13);
                puVar6[-1] = *(undefined1 *)(lVar9 + lVar13);
                *puVar6 = *(undefined1 *)(lVar9 + lVar13 + 1);
                lVar2 = lVar12 + lVar13;
                lVar13 = lVar13 + 4;
                lVar2 = lVar2 + lVar16;
                puVar6[1] = *(undefined1 *)(lVar2 + 2);
                puVar6[2] = *(undefined1 *)(lVar2 + 3);
              } while (uVar8 - uVar5 != lVar13);
            }
            if (uVar5 != 0) {
              lVar12 = -uVar5;
              puVar6 = (undefined1 *)(lVar4 + lVar13 + uVar15 + lVar16);
              puVar10 = (undefined1 *)(lVar7 + lVar13);
              do {
                lVar12 = lVar12 + 1;
                *puVar10 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar10 = puVar10 + 1;
              } while (lVar12 != 0);
            }
            goto LAB_005e4bc8;
          }
          break;
        }
        lVar12 = lVar12 + -1;
      } while (1 < (long)(uVar15 + lVar12 + 1));
    }
    if (uVar15 <= uVar14) {
      return;
    }
    uVar14 = -lVar16;
    if ((ulong)param_1[4] <= uVar14) {
      if (param_1[3] == 0) {
        uVar5 = param_1[4] * 2;
        uVar8 = 1U - lVar16;
        if (1U - lVar16 <= uVar5) {
          uVar8 = uVar5;
        }
      }
      else {
        uVar8 = (param_1[3] - lVar16) + 1;
      }
      FUN_005c5e00(param_1,uVar8,0);
      lVar4 = param_2[1];
    }
    lVar7 = *plVar17;
    lVar12 = lVar4 + uVar15;
    lVar9 = lVar12 + lVar16;
    uVar8 = uVar14;
    if ((long)uVar14 < 0) {
      if (lVar9 == 0) goto LAB_005e4bcc;
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        uVar5 = uVar8 + 1;
      } while (*(char *)(lVar12 + uVar8 + lVar16) != '\0');
    }
    if ((lVar7 == 0) || ((long)uVar8 < 1)) goto LAB_005e4bcc;
    uVar5 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      do {
        puVar6 = (undefined1 *)(lVar7 + 1 + lVar13);
        puVar6[-1] = *(undefined1 *)(lVar9 + lVar13);
        *puVar6 = *(undefined1 *)(lVar9 + lVar13 + 1);
        lVar2 = lVar12 + lVar13;
        lVar13 = lVar13 + 4;
        lVar2 = lVar2 + lVar16;
        puVar6[1] = *(undefined1 *)(lVar2 + 2);
        puVar6[2] = *(undefined1 *)(lVar2 + 3);
      } while (uVar8 - uVar5 != lVar13);
    }
    if (uVar5 != 0) {
      lVar12 = -uVar5;
      puVar6 = (undefined1 *)(lVar4 + lVar13 + uVar15 + lVar16);
      puVar10 = (undefined1 *)(lVar7 + lVar13);
      do {
        lVar12 = lVar12 + 1;
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar12 != 0);
    }
LAB_005e4bc8:
    *(undefined1 *)(lVar7 + uVar8) = 0;
LAB_005e4bcc:
    param_1[2] = uVar14;
    return;
  }
LAB_005e45c0:
  uVar14 = uVar15;
  if ((param_3 & 1) == 0) {
    local_44[0] = 0x2e;
    if (uVar15 != 0) {
      lVar4 = 0;
      do {
        pcVar1 = (char *)(((ulong)local_44 | 1) + lVar4);
        lVar4 = lVar4 + 1;
      } while (*pcVar1 != '\0');
      if ((0 < (long)uVar15) && (lVar4 != 0)) {
        lVar16 = param_2[1];
        lVar12 = 0;
        lVar4 = lVar16;
        do {
          lVar4 = lVar4 + -1;
          if (*(char *)(lVar4 + uVar15) == '.') {
            if (uVar15 + lVar12 != 0) {
              uVar8 = (uVar15 + lVar12) - 1;
              if (uVar8 != 0) {
                uVar14 = uVar8;
              }
              if ((ulong)param_1[4] <= uVar14) {
                uVar15 = uVar14 + 1;
                if (param_1[3] == 0) {
                  uVar8 = param_1[4] * 2;
                  if (uVar15 <= uVar8) {
                    uVar15 = uVar8;
                  }
                }
                else {
                  uVar15 = param_1[3] + uVar15;
                }
                FUN_005c5e00(param_1,uVar15,0);
                lVar16 = param_2[1];
              }
              lVar7 = *plVar17;
              uVar8 = uVar14;
              if (-1 < (long)uVar14) goto LAB_005e4b40;
              if (lVar16 != 0) {
                uVar15 = 0;
                do {
                  uVar8 = uVar15;
                  uVar15 = uVar8 + 1;
                } while (*(char *)(lVar16 + uVar8) != '\0');
LAB_005e4b40:
                if ((lVar7 == 0) || ((long)uVar8 < 1)) goto LAB_005e4bcc;
                uVar15 = uVar8 & 3;
                if (uVar8 - 1 < 3) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = 0;
                  do {
                    puVar6 = (undefined1 *)(lVar16 + 1 + lVar4);
                    puVar10 = (undefined1 *)(lVar7 + 1 + lVar4);
                    lVar4 = lVar4 + 4;
                    puVar10[-1] = puVar6[-1];
                    *puVar10 = *puVar6;
                    puVar10[1] = puVar6[1];
                    puVar10[2] = puVar6[2];
                  } while (uVar8 - uVar15 != lVar4);
                }
                if (uVar15 != 0) {
                  lVar12 = -uVar15;
                  puVar6 = (undefined1 *)(lVar16 + lVar4);
                  puVar10 = (undefined1 *)(lVar7 + lVar4);
                  do {
                    lVar12 = lVar12 + 1;
                    *puVar10 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar10 = puVar10 + 1;
                  } while (lVar12 != 0);
                }
                goto LAB_005e4bc8;
              }
              goto LAB_005e4bcc;
            }
            break;
          }
          lVar12 = lVar12 + -1;
        } while (1 < (long)(uVar15 + lVar12 + 1));
      }
    }
    if (uVar15 == 0) goto LAB_005e46fc;
    if ((ulong)param_1[4] <= uVar15) {
      uVar8 = uVar15 + 1;
      if (param_1[3] == 0) {
        uVar5 = param_1[4] * 2;
        if (uVar8 <= uVar5) {
          uVar8 = uVar5;
        }
      }
      else {
        uVar8 = param_1[3] + uVar8;
      }
      FUN_005c5e00(param_1,uVar8,0);
    }
    lVar4 = *plVar17;
    lVar16 = param_2[1];
    if ((long)uVar15 < 0) {
      if (lVar16 == 0) goto LAB_005e48a8;
      uVar8 = 0;
      do {
        uVar14 = uVar8;
        uVar8 = uVar14 + 1;
      } while (*(char *)(lVar16 + uVar14) != '\0');
    }
    if ((lVar4 == 0) || ((long)uVar14 < 1)) goto LAB_005e48a8;
    uVar8 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      do {
        puVar6 = (undefined1 *)(lVar16 + 1 + lVar12);
        puVar10 = (undefined1 *)(lVar4 + 1 + lVar12);
        lVar12 = lVar12 + 4;
        puVar10[-1] = puVar6[-1];
        *puVar10 = *puVar6;
        puVar10[1] = puVar6[1];
        puVar10[2] = puVar6[2];
      } while (uVar14 - uVar8 != lVar12);
    }
    if (uVar8 != 0) {
      lVar9 = -uVar8;
      puVar6 = (undefined1 *)(lVar16 + lVar12);
      puVar10 = (undefined1 *)(lVar4 + lVar12);
      do {
        lVar9 = lVar9 + 1;
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  else {
    if (uVar15 == 0) {
LAB_005e46fc:
      if ((undefined1 *)*plVar17 != (undefined1 *)0x0) {
        *(undefined1 *)*plVar17 = 0;
      }
      param_1[2] = 0;
      return;
    }
    if ((ulong)param_1[4] <= uVar15) {
      uVar8 = uVar15 + 1;
      if (param_1[3] == 0) {
        uVar5 = param_1[4] * 2;
        if (uVar8 <= uVar5) {
          uVar8 = uVar5;
        }
      }
      else {
        uVar8 = param_1[3] + uVar8;
      }
      FUN_005c5e00(param_1,uVar8,0);
    }
    lVar4 = *plVar17;
    lVar16 = param_2[1];
    if ((long)uVar15 < 0) {
      if (lVar16 == 0) goto LAB_005e48a8;
      uVar8 = 0;
      do {
        uVar14 = uVar8;
        uVar8 = uVar14 + 1;
      } while (*(char *)(lVar16 + uVar14) != '\0');
    }
    if ((lVar4 == 0) || ((long)uVar14 < 1)) goto LAB_005e48a8;
    uVar8 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      do {
        puVar6 = (undefined1 *)(lVar16 + 1 + lVar12);
        puVar10 = (undefined1 *)(lVar4 + 1 + lVar12);
        lVar12 = lVar12 + 4;
        puVar10[-1] = puVar6[-1];
        *puVar10 = *puVar6;
        puVar10[1] = puVar6[1];
        puVar10[2] = puVar6[2];
      } while (uVar14 - uVar8 != lVar12);
    }
    if (uVar8 != 0) {
      lVar9 = -uVar8;
      puVar6 = (undefined1 *)(lVar16 + lVar12);
      puVar10 = (undefined1 *)(lVar4 + lVar12);
      do {
        lVar9 = lVar9 + 1;
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  *(undefined1 *)(lVar4 + uVar14) = 0;
LAB_005e48a8:
  param_1[2] = uVar15;
  return;
code_r0x005e453c:
  lVar16 = lVar16 + -1;
  if ((long)(uVar15 + lVar16 + 1) < 2) goto LAB_005e45c0;
  goto LAB_005e4518;
}


