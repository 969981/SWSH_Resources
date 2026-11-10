/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f1b30; name: FUN_007f1b30
 */


undefined4 FUN_007f1b30(long *param_1,long param_2,byte *param_3,long param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  byte *__s2;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  byte bVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong unaff_x27;
  ulong uVar11;
  
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
  }
  bVar8 = *__s2;
  uVar4 = param_2 * 0xffff;
  if (bVar8 == 0) {
    uVar10 = param_1[1];
  }
  else {
    lVar5 = 0;
    pbVar9 = __s2;
    do {
      pbVar9 = pbVar9 + 1;
      lVar5 = lVar5 * 5 + (ulong)bVar8;
      bVar8 = *pbVar9;
    } while (bVar8 != 0);
    uVar10 = param_1[1];
    uVar4 = lVar5 + uVar4;
  }
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    if ((uVar11 & uVar10) == 0) {
      unaff_x27 = uVar11 & uVar4;
      plVar6 = *(long **)(*param_1 + unaff_x27 * 8);
    }
    else {
      unaff_x27 = uVar4;
      if (uVar10 <= uVar4) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar4 / uVar10;
        }
        unaff_x27 = uVar4 - uVar7 * uVar10;
      }
      plVar6 = *(long **)(*param_1 + unaff_x27 * 8);
    }
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if ((uVar11 & uVar10) == 0) {
        do {
          if (plVar6[1] != uVar4 && (plVar6[1] & uVar11) != unaff_x27) break;
          if ((plVar6[2] == param_2) && (iVar2 = strcmp((char *)plVar6[3],(char *)__s2), iVar2 == 0)
             ) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar6[1];
          if (uVar11 != uVar4) {
            if (uVar10 <= uVar11) {
              uVar7 = 0;
              if (uVar10 != 0) {
                uVar7 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar7 * uVar10;
            }
            if (uVar11 != unaff_x27) break;
          }
          if ((plVar6[2] == param_2) && (iVar2 = strcmp((char *)plVar6[3],(char *)__s2), iVar2 == 0)
             ) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  plVar6 = operator_new(0x30);
  plVar6[2] = param_2;
  plVar6[3] = (long)__s2;
  plVar6[4] = param_4;
  plVar6[5] = param_5;
  *plVar6 = 0;
  plVar6[1] = uVar4;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    if (uVar10 < 3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)((uVar10 - 1 & uVar10) != 0);
    }
    uVar11 = uVar11 | uVar10 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
      bVar1 = uVar10 < 3;
      if (1 < uVar10) goto LAB_007f1d50;
LAB_007f1dd0:
      FUN_007f8b20(param_1,uVar7);
    }
    else {
      if ((uVar7 - 1 & uVar7) != 0) {
        uVar7 = std::__next_prime(uVar7);
        uVar10 = param_1[1];
      }
      bVar1 = uVar10 <= uVar7;
      if (uVar10 < uVar7) goto LAB_007f1dd0;
LAB_007f1d50:
      if (!bVar1) {
        uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if (uVar10 < 3 || (uVar10 - 1 & uVar10) != 0) {
          uVar11 = std::__next_prime(uVar11);
          if (uVar11 <= uVar7) {
            uVar11 = uVar7;
          }
        }
        else {
          if (1 < uVar11) {
            uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
          }
          if (uVar11 <= uVar7) {
            uVar11 = uVar7;
          }
        }
        uVar7 = uVar11;
        if (uVar7 < uVar10) goto LAB_007f1dd0;
      }
    }
    uVar10 = param_1[1];
    if ((uVar10 - 1 & uVar10) == 0) {
      unaff_x27 = uVar10 - 1 & uVar4;
      lVar5 = *param_1;
      plVar3 = *(long **)(lVar5 + unaff_x27 * 8);
      goto joined_r0x007f1df8;
    }
    if (uVar4 < uVar10) {
      lVar5 = *param_1;
      plVar3 = *(long **)(lVar5 + uVar4 * 8);
      unaff_x27 = uVar4;
      goto joined_r0x007f1df8;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar4 / uVar10;
    }
    unaff_x27 = uVar4 - uVar11 * uVar10;
    lVar5 = *param_1;
    plVar3 = *(long **)(lVar5 + unaff_x27 * 8);
    if (plVar3 != (long *)0x0) goto LAB_007f1cb8;
LAB_007f1e10:
    plVar3 = param_1 + 2;
    *plVar6 = *plVar3;
    *plVar3 = (long)plVar6;
    *(long **)(lVar5 + unaff_x27 * 8) = plVar3;
    if (*plVar6 == 0) goto LAB_007f1e78;
    uVar4 = *(ulong *)(*plVar6 + 8);
    if ((uVar10 - 1 & uVar10) == 0) {
      uVar4 = uVar4 & uVar10 - 1;
    }
    else if (uVar10 <= uVar4) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar4 / uVar10;
      }
      uVar4 = uVar4 - uVar11 * uVar10;
    }
    plVar3 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    lVar5 = *param_1;
    plVar3 = *(long **)(lVar5 + unaff_x27 * 8);
joined_r0x007f1df8:
    if (plVar3 == (long *)0x0) goto LAB_007f1e10;
LAB_007f1cb8:
    *plVar6 = *plVar3;
  }
  *plVar3 = (long)plVar6;
LAB_007f1e78:
  param_1[3] = param_1[3] + 1;
  return 1;
}


