/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e1150; name: FUN_007e1150
 */


void FUN_007e1150(long *param_1,long *param_2,long *param_3)

{
  byte *__s2;
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  ulong unaff_x26;
  ulong uVar13;
  
  lVar7 = *param_2;
  __s2 = (byte *)param_2[1];
  lVar12 = *param_3;
  bVar9 = *__s2;
  uVar4 = lVar7 * 0xffff;
  if (bVar9 == 0) {
    uVar11 = param_1[1];
  }
  else {
    lVar5 = 0;
    pbVar10 = __s2;
    do {
      pbVar10 = pbVar10 + 1;
      lVar5 = lVar5 * 5 + (ulong)bVar9;
      bVar9 = *pbVar10;
    } while (bVar9 != 0);
    uVar11 = param_1[1];
    uVar4 = lVar5 + uVar4;
  }
  if (uVar11 != 0) {
    uVar13 = uVar11 - 1;
    if ((uVar13 & uVar11) == 0) {
      unaff_x26 = uVar13 & uVar4;
      plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar4;
      if (uVar11 <= uVar4) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar4 / uVar11;
        }
        unaff_x26 = uVar4 - uVar8 * uVar11;
      }
      plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if ((uVar13 & uVar11) == 0) {
        do {
          if (plVar6[1] != uVar4 && (plVar6[1] & uVar13) != unaff_x26) break;
          if ((plVar6[2] == lVar7) && (iVar2 = strcmp((char *)plVar6[3],(char *)__s2), iVar2 == 0))
          {
            return;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar6[1];
          if (uVar13 != uVar4) {
            if (uVar11 <= uVar13) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar8 * uVar11;
            }
            if (uVar13 != unaff_x26) break;
          }
          if ((plVar6[2] == lVar7) && (iVar2 = strcmp((char *)plVar6[3],(char *)__s2), iVar2 == 0))
          {
            return;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  plVar6 = operator_new(0x28);
  plVar6[2] = lVar7;
  plVar6[3] = (long)__s2;
  plVar6[4] = lVar12;
  *plVar6 = 0;
  plVar6[1] = uVar4;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    if (uVar11 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar11 - 1 & uVar11) != 0);
    }
    uVar13 = uVar13 | uVar11 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar13) {
      uVar8 = uVar13;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
      bVar1 = uVar11 < 3;
      if (1 < uVar11) goto LAB_007e135c;
LAB_007e13dc:
      FUN_007f9c70(param_1,uVar8);
    }
    else {
      if ((uVar8 - 1 & uVar8) != 0) {
        uVar8 = std::__next_prime(uVar8);
        uVar11 = param_1[1];
      }
      bVar1 = uVar11 <= uVar8;
      if (uVar11 < uVar8) goto LAB_007e13dc;
LAB_007e135c:
      if (!bVar1) {
        uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if (uVar11 < 3 || (uVar11 - 1 & uVar11) != 0) {
          uVar13 = std::__next_prime(uVar13);
          if (uVar13 <= uVar8) {
            uVar13 = uVar8;
          }
        }
        else {
          if (1 < uVar13) {
            uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
          }
          if (uVar13 <= uVar8) {
            uVar13 = uVar8;
          }
        }
        uVar8 = uVar13;
        if (uVar8 < uVar11) goto LAB_007e13dc;
      }
    }
    uVar11 = param_1[1];
    if ((uVar11 - 1 & uVar11) == 0) {
      unaff_x26 = uVar11 - 1 & uVar4;
      lVar7 = *param_1;
      plVar3 = *(long **)(lVar7 + unaff_x26 * 8);
      goto joined_r0x007e1404;
    }
    if (uVar4 < uVar11) {
      lVar7 = *param_1;
      plVar3 = *(long **)(lVar7 + uVar4 * 8);
      unaff_x26 = uVar4;
      goto joined_r0x007e1404;
    }
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = uVar4 / uVar11;
    }
    unaff_x26 = uVar4 - uVar13 * uVar11;
    lVar7 = *param_1;
    plVar3 = *(long **)(lVar7 + unaff_x26 * 8);
    if (plVar3 != (long *)0x0) goto LAB_007e12c4;
LAB_007e141c:
    plVar3 = param_1 + 2;
    *plVar6 = *plVar3;
    *plVar3 = (long)plVar6;
    *(long **)(lVar7 + unaff_x26 * 8) = plVar3;
    if (*plVar6 == 0) goto LAB_007e1484;
    uVar4 = *(ulong *)(*plVar6 + 8);
    if ((uVar11 - 1 & uVar11) == 0) {
      uVar4 = uVar4 & uVar11 - 1;
    }
    else if (uVar11 <= uVar4) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar4 / uVar11;
      }
      uVar4 = uVar4 - uVar13 * uVar11;
    }
    plVar3 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    lVar7 = *param_1;
    plVar3 = *(long **)(lVar7 + unaff_x26 * 8);
joined_r0x007e1404:
    if (plVar3 == (long *)0x0) goto LAB_007e141c;
LAB_007e12c4:
    *plVar6 = *plVar3;
  }
  *plVar3 = (long)plVar6;
LAB_007e1484:
  param_1[3] = param_1[3] + 1;
  return;
}


