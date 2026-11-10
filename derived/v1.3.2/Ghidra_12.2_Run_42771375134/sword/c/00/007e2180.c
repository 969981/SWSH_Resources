/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e2180; name: FUN_007e2180
 */


long * FUN_007e2180(long *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  byte bVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x26;
  ulong uVar14;
  
  bVar2 = *param_2;
  __s2 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  bVar5 = *__s2;
  if (bVar5 == 0) {
    uVar12 = 0;
    uVar13 = param_1[1];
  }
  else {
    uVar12 = 0;
    pbVar7 = __s2;
    do {
      pbVar7 = pbVar7 + 1;
      uVar12 = uVar12 * 5 + (ulong)bVar5;
      bVar5 = *pbVar7;
    } while (bVar5 != 0);
    uVar13 = param_1[1];
  }
  if (uVar13 != 0) {
    uVar14 = uVar13 - 1;
    if ((uVar14 & uVar13) == 0) {
      unaff_x26 = uVar14 & uVar12;
      puVar8 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar12;
      if (uVar13 <= uVar12) {
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = uVar12 / uVar13;
        }
        unaff_x26 = uVar12 - uVar10 * uVar13;
      }
      puVar8 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    }
    if ((puVar8 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar8, plVar11 != (long *)0x0)) {
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      if ((uVar14 & uVar13) == 0) {
        if (__n == 0) {
          do {
            if (plVar11[1] != uVar12 && (plVar11[1] & uVar14) != unaff_x26) break;
            uVar10 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
            if ((*(byte *)(plVar11 + 2) & 1) != 0) {
              uVar10 = plVar11[3];
            }
            if (uVar10 == 0) goto LAB_007e2528;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            if (plVar11[1] != uVar12 && (plVar11[1] & uVar14) != unaff_x26) break;
            bVar2 = *(byte *)(plVar11 + 2);
            sVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              sVar1 = plVar11[3];
            }
            if (sVar1 == __n) {
              if ((bVar2 & 1) == 0) {
                uVar10 = 0;
                while (*(byte *)((long)plVar11 + uVar10 + 0x11) == __s2[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar2 >> 1 == uVar10) goto LAB_007e2528;
                }
              }
              else {
                iVar3 = memcmp((void *)plVar11[4],__s2,__n);
                if (iVar3 == 0) goto LAB_007e2528;
              }
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar14 = plVar11[1];
          if (uVar14 != uVar12) {
            if (uVar13 <= uVar14) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar10 * uVar13;
            }
            if (uVar14 != unaff_x26) break;
          }
          uVar14 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
          if ((*(byte *)(plVar11 + 2) & 1) != 0) {
            uVar14 = plVar11[3];
          }
          if (uVar14 == 0) goto LAB_007e2528;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar11[1];
          if (uVar14 != uVar12) {
            if (uVar13 <= uVar14) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar10 * uVar13;
            }
            if (uVar14 != unaff_x26) break;
          }
          bVar2 = *(byte *)(plVar11 + 2);
          sVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            sVar1 = plVar11[3];
          }
          if (sVar1 == __n) {
            if ((bVar2 & 1) == 0) {
              uVar14 = 0;
              while (*(byte *)((long)plVar11 + uVar14 + 0x11) == __s2[uVar14]) {
                uVar14 = uVar14 + 1;
                if (bVar2 >> 1 == uVar14) goto LAB_007e2528;
              }
            }
            else {
              iVar3 = memcmp((void *)plVar11[4],__s2,__n);
              if (iVar3 == 0) goto LAB_007e2528;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar11 = operator_new(0x30);
  lVar6 = *(long *)param_2;
  lVar9 = *(long *)(param_2 + 0x10);
  plVar11[3] = *(long *)(param_2 + 8);
  plVar11[4] = lVar9;
  plVar11[1] = uVar12;
  plVar11[2] = lVar6;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  plVar11[5] = 0;
  *plVar11 = 0;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
    if (uVar13 < 3) {
      uVar14 = 1;
    }
    else {
      uVar14 = (ulong)((uVar13 - 1 & uVar13) != 0);
    }
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    uVar14 = uVar14 | uVar13 << 1;
    if (uVar10 <= uVar14) {
      uVar10 = uVar14;
    }
    FUN_007fa460(param_1,uVar10);
    uVar13 = param_1[1];
    if ((uVar13 - 1 & uVar13) == 0) {
      unaff_x26 = uVar13 - 1 & uVar12;
      lVar6 = *param_1;
      plVar4 = *(long **)(lVar6 + unaff_x26 * 8);
      goto joined_r0x007e23e4;
    }
    if (uVar12 < uVar13) {
      lVar6 = *param_1;
      plVar4 = *(long **)(lVar6 + uVar12 * 8);
      unaff_x26 = uVar12;
      goto joined_r0x007e23e4;
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = uVar12 / uVar13;
    }
    unaff_x26 = uVar12 - uVar14 * uVar13;
    lVar6 = *param_1;
    plVar4 = *(long **)(lVar6 + unaff_x26 * 8);
    if (plVar4 == (long *)0x0) goto LAB_007e23fc;
LAB_007e2364:
    *plVar11 = *plVar4;
  }
  else {
    lVar6 = *param_1;
    plVar4 = *(long **)(lVar6 + unaff_x26 * 8);
joined_r0x007e23e4:
    if (plVar4 != (long *)0x0) goto LAB_007e2364;
LAB_007e23fc:
    plVar4 = param_1 + 2;
    *plVar11 = *plVar4;
    *plVar4 = (long)plVar11;
    *(long **)(lVar6 + unaff_x26 * 8) = plVar4;
    if (*plVar11 == 0) goto LAB_007e251c;
    uVar12 = *(ulong *)(*plVar11 + 8);
    if ((uVar13 - 1 & uVar13) == 0) {
      uVar12 = uVar12 & uVar13 - 1;
    }
    else if (uVar13 <= uVar12) {
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = uVar12 / uVar13;
      }
      uVar12 = uVar12 - uVar14 * uVar13;
    }
    plVar4 = (long *)(*param_1 + uVar12 * 8);
  }
  *plVar4 = (long)plVar11;
LAB_007e251c:
  param_1[3] = param_1[3] + 1;
LAB_007e2528:
  return plVar11 + 5;
}


