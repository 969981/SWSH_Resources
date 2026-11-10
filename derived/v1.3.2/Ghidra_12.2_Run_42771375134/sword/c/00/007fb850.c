/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fb850; name: FUN_007fb850
 */


undefined4 FUN_007fb850(long *param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  byte *__s2;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  long *plVar9;
  ulong uVar10;
  
  __s2 = (byte *)*param_2;
  bVar2 = *__s2;
  if (bVar2 == 0) {
    uVar7 = 0;
    uVar8 = param_1[1];
  }
  else {
    uVar7 = 0;
    pbVar4 = __s2;
    do {
      pbVar4 = pbVar4 + 1;
      uVar7 = uVar7 * 5 + (ulong)bVar2;
      bVar2 = *pbVar4;
    } while (bVar2 != 0);
    uVar8 = param_1[1];
  }
  if (uVar8 != 0) {
    uVar10 = uVar8 - 1;
    if ((uVar10 & uVar8) == 0) {
      unaff_x24 = uVar10 & uVar7;
      plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar7;
      if (uVar8 <= uVar7) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar7 / uVar8;
        }
        unaff_x24 = uVar7 - uVar6 * uVar8;
      }
      plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar9 != (long *)0x0) {
      if ((uVar10 & uVar8) == 0) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar7 || (plVar9[1] & uVar10) == unaff_x24))) {
          iVar1 = strcmp((char *)plVar9[2],(char *)__s2);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
      else {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar10 = plVar9[1];
          if (uVar10 != uVar7) {
            if (uVar8 <= uVar10) {
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = uVar10 / uVar8;
              }
              uVar10 = uVar10 - uVar6 * uVar8;
            }
            if (uVar10 != unaff_x24) break;
          }
          iVar1 = strcmp((char *)plVar9[2],(char *)__s2);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
    }
  }
  plVar9 = operator_new(0x20);
  lVar5 = param_2[1];
  plVar9[2] = *param_2;
  plVar9[3] = lVar5;
  *plVar9 = 0;
  plVar9[1] = uVar7;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    if (uVar8 < 3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)((uVar8 - 1 & uVar8) != 0);
    }
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    uVar10 = uVar10 | uVar8 << 1;
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    FUN_007f98d0(param_1,uVar6);
    uVar8 = param_1[1];
    if ((uVar8 - 1 & uVar8) == 0) {
      unaff_x24 = uVar8 - 1 & uVar7;
      lVar5 = *param_1;
      plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
      goto joined_r0x007fba10;
    }
    if (uVar7 < uVar8) {
      lVar5 = *param_1;
      plVar3 = *(long **)(lVar5 + uVar7 * 8);
      unaff_x24 = uVar7;
      goto joined_r0x007fba10;
    }
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = uVar7 / uVar8;
    }
    unaff_x24 = uVar7 - uVar10 * uVar8;
    lVar5 = *param_1;
    plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
    if (plVar3 != (long *)0x0) goto LAB_007fb990;
LAB_007fba28:
    plVar3 = param_1 + 2;
    *plVar9 = *plVar3;
    *plVar3 = (long)plVar9;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar3;
    if (*plVar9 == 0) goto LAB_007fba90;
    uVar7 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 - 1 & uVar8) == 0) {
      uVar7 = uVar7 & uVar8 - 1;
    }
    else if (uVar8 <= uVar7) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar7 / uVar8;
      }
      uVar7 = uVar7 - uVar10 * uVar8;
    }
    plVar3 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    lVar5 = *param_1;
    plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
joined_r0x007fba10:
    if (plVar3 == (long *)0x0) goto LAB_007fba28;
LAB_007fb990:
    *plVar9 = *plVar3;
  }
  *plVar3 = (long)plVar9;
LAB_007fba90:
  param_1[3] = param_1[3] + 1;
  return 1;
}


