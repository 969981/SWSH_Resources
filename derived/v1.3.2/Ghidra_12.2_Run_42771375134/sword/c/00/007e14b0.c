/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e14b0; name: FUN_007e14b0
 */


undefined8 FUN_007e14b0(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  long lVar10;
  float fVar11;
  
  lVar10 = *(long *)(param_2 + 0x50);
  iVar2 = *(int *)(param_2 + 0x38);
  plVar1 = (long *)(param_1 + 0x78);
  uVar9 = *(ulong *)(param_1 + 0x80);
  uVar6 = lVar10 * 0xffff + (long)iVar2;
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar7 & uVar9) == 0) {
      unaff_x25 = uVar7 & uVar6;
      plVar4 = *(long **)(*plVar1 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar6;
      if (uVar9 <= uVar6) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar6 / uVar9;
        }
        unaff_x25 = uVar6 - uVar8 * uVar9;
      }
      plVar4 = *(long **)(*plVar1 + unaff_x25 * 8);
    }
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if ((uVar7 & uVar9) == 0) {
        do {
          if (plVar4[1] != uVar6 && (plVar4[1] & uVar7) != unaff_x25) break;
          if ((plVar4[2] == lVar10) && ((int)plVar4[3] == iVar2)) {
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
            if (uVar7 != unaff_x25) break;
          }
          if ((plVar4[2] == lVar10) && ((int)plVar4[3] == iVar2)) {
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
  *(int *)(plVar4 + 3) = iVar2;
  plVar4[4] = param_2;
  *plVar4 = 0;
  fVar11 = (float)(*(long *)(param_1 + 0x90) + 1);
  if ((uVar9 == 0) || (*(float *)(param_1 + 0x98) * (float)uVar9 < fVar11)) {
    if (uVar9 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar9 - 1 & uVar9) != 0);
    }
    uVar7 = uVar7 | uVar9 << 1;
    uVar8 = (ulong)(fVar11 / *(float *)(param_1 + 0x98));
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
      bVar3 = uVar9 < 3;
      if (1 < uVar9) goto LAB_007e164c;
LAB_007e170c:
      FUN_007f9f20(plVar1,uVar8);
    }
    else {
      if ((uVar8 - 1 & uVar8) != 0) {
        uVar8 = std::__next_prime(uVar8);
        uVar9 = *(ulong *)(param_1 + 0x80);
      }
      bVar3 = uVar9 <= uVar8;
      if (uVar9 < uVar8) goto LAB_007e170c;
LAB_007e164c:
      if (!bVar3) {
        uVar7 = (ulong)((float)*(ulong *)(param_1 + 0x90) / *(float *)(param_1 + 0x98));
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
        if (uVar8 < uVar9) goto LAB_007e170c;
      }
    }
    uVar9 = *(ulong *)(param_1 + 0x80);
    if ((uVar9 - 1 & uVar9) == 0) {
      unaff_x25 = uVar9 - 1 & uVar6;
      lVar10 = *plVar1;
      plVar5 = *(long **)(lVar10 + unaff_x25 * 8);
      goto joined_r0x007e1734;
    }
    if (uVar6 < uVar9) {
      lVar10 = *plVar1;
      plVar5 = *(long **)(lVar10 + uVar6 * 8);
      unaff_x25 = uVar6;
      goto joined_r0x007e1734;
    }
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = uVar6 / uVar9;
    }
    unaff_x25 = uVar6 - uVar7 * uVar9;
    lVar10 = *plVar1;
    plVar5 = *(long **)(lVar10 + unaff_x25 * 8);
    if (plVar5 == (long *)0x0) goto LAB_007e174c;
LAB_007e15f8:
    *plVar4 = *plVar5;
  }
  else {
    lVar10 = *plVar1;
    plVar5 = *(long **)(lVar10 + unaff_x25 * 8);
joined_r0x007e1734:
    if (plVar5 != (long *)0x0) goto LAB_007e15f8;
LAB_007e174c:
    plVar5 = (long *)(param_1 + 0x88);
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
    *(long **)(lVar10 + unaff_x25 * 8) = plVar5;
    if (*plVar4 == 0) goto LAB_007e17b4;
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
    plVar5 = (long *)(*plVar1 + uVar6 * 8);
  }
  *plVar5 = (long)plVar4;
LAB_007e17b4:
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  return 1;
}


