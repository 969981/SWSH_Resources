/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e17f0; name: FUN_007e17f0
 */


undefined8 FUN_007e17f0(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x21;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *param_2;
  iVar1 = (int)param_2[1];
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  lVar11 = *param_3;
  uVar9 = param_1[1];
  uVar6 = lVar10 * 0xffff + (long)iVar1;
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar7 & uVar9) == 0) {
      unaff_x21 = uVar7 & uVar6;
      plVar4 = *(long **)(*param_1 + unaff_x21 * 8);
    }
    else {
      unaff_x21 = uVar6;
      if (uVar9 <= uVar6) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar6 / uVar9;
        }
        unaff_x21 = uVar6 - uVar8 * uVar9;
      }
      plVar4 = *(long **)(*param_1 + unaff_x21 * 8);
    }
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if ((uVar7 & uVar9) == 0) {
        do {
          if (plVar4[1] != uVar6 && (plVar4[1] & uVar7) != unaff_x21) break;
          if ((plVar4[2] == lVar10) && ((int)plVar4[3] == iVar1)) {
            return 0;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar4[1];
          if (uVar7 != uVar6) {
            if (uVar9 <= uVar7) {
              uVar8 = 0;
              if (uVar9 != 0) {
                uVar8 = uVar7 / uVar9;
              }
              uVar7 = uVar7 - uVar8 * uVar9;
            }
            if (uVar7 != unaff_x21) break;
          }
          if ((plVar4[2] == lVar10) && ((int)plVar4[3] == iVar1)) {
            return 0;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  plVar4 = operator_new(0x28);
  plVar4[1] = uVar6;
  plVar4[2] = lVar10;
  *(int *)(plVar4 + 3) = iVar1;
  *(undefined4 *)((long)plVar4 + 0x1c) = uVar2;
  plVar4[4] = lVar11;
  *plVar4 = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    if (uVar9 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar9 - 1 & uVar9) != 0);
    }
    uVar7 = uVar7 | uVar9 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
      bVar3 = uVar9 < 3;
      if (1 < uVar9) goto LAB_007e198c;
LAB_007e1a4c:
      FUN_007fa1c0(param_1,uVar8);
    }
    else {
      if ((uVar8 - 1 & uVar8) != 0) {
        uVar8 = std::__next_prime(uVar8);
        uVar9 = param_1[1];
      }
      bVar3 = uVar9 <= uVar8;
      if (uVar9 < uVar8) goto LAB_007e1a4c;
LAB_007e198c:
      if (!bVar3) {
        uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if (uVar9 < 3 || (uVar9 - 1 & uVar9) != 0) {
          uVar7 = std::__next_prime(uVar7);
          if (uVar7 <= uVar8) {
            uVar7 = uVar8;
          }
        }
        else {
          if (1 < uVar7) {
            uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
          }
          if (uVar7 <= uVar8) {
            uVar7 = uVar8;
          }
        }
        uVar8 = uVar7;
        if (uVar8 < uVar9) goto LAB_007e1a4c;
      }
    }
    uVar9 = param_1[1];
    if ((uVar9 - 1 & uVar9) == 0) {
      unaff_x21 = uVar9 - 1 & uVar6;
      lVar10 = *param_1;
      plVar5 = *(long **)(lVar10 + unaff_x21 * 8);
      goto joined_r0x007e1a74;
    }
    if (uVar6 < uVar9) {
      lVar10 = *param_1;
      plVar5 = *(long **)(lVar10 + uVar6 * 8);
      unaff_x21 = uVar6;
      goto joined_r0x007e1a74;
    }
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = uVar6 / uVar9;
    }
    unaff_x21 = uVar6 - uVar7 * uVar9;
    lVar10 = *param_1;
    plVar5 = *(long **)(lVar10 + unaff_x21 * 8);
    if (plVar5 == (long *)0x0) goto LAB_007e1a8c;
LAB_007e1938:
    *plVar4 = *plVar5;
  }
  else {
    lVar10 = *param_1;
    plVar5 = *(long **)(lVar10 + unaff_x21 * 8);
joined_r0x007e1a74:
    if (plVar5 != (long *)0x0) goto LAB_007e1938;
LAB_007e1a8c:
    plVar5 = param_1 + 2;
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
    *(long **)(lVar10 + unaff_x21 * 8) = plVar5;
    if (*plVar4 == 0) goto LAB_007e1af4;
    uVar6 = *(ulong *)(*plVar4 + 8);
    if ((uVar9 - 1 & uVar9) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar7 * uVar9;
    }
    plVar5 = (long *)(*param_1 + uVar6 * 8);
  }
  *plVar5 = (long)plVar4;
LAB_007e1af4:
  param_1[3] = param_1[3] + 1;
  return 1;
}


