/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083e550; name: FUN_0083e550
 */


void FUN_0083e550(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  
LAB_0083e594:
  plVar11 = param_2 + -1;
LAB_0083e5b4:
  plVar16 = param_1;
  lVar9 = (long)param_2 - (long)plVar16;
  uVar6 = lVar9 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    lVar9 = *plVar16;
    if (*(int *)(param_2[-1] + 0x38) < *(int *)(lVar9 + 0x38)) {
      *plVar16 = param_2[-1];
      param_2[-1] = lVar9;
      return;
    }
    return;
  case 3:
    lVar9 = *plVar16;
    lVar10 = plVar16[1];
    lVar12 = param_2[-1];
    iVar4 = *(int *)(lVar10 + 0x38);
    if (*(int *)(lVar9 + 0x38) <= iVar4) {
      if (iVar4 <= *(int *)(lVar12 + 0x38)) {
        return;
      }
      plVar16[1] = lVar12;
      param_2[-1] = lVar10;
      lVar9 = *plVar16;
      if (*(int *)(plVar16[1] + 0x38) < *(int *)(lVar9 + 0x38)) {
        *plVar16 = plVar16[1];
        plVar16[1] = lVar9;
        return;
      }
      return;
    }
    if (*(int *)(lVar12 + 0x38) < iVar4) {
      *plVar16 = lVar12;
      param_2[-1] = lVar9;
      return;
    }
    *plVar16 = lVar10;
    plVar16[1] = lVar9;
    if (*(int *)(param_2[-1] + 0x38) < *(int *)(lVar9 + 0x38)) {
      plVar16[1] = param_2[-1];
      param_2[-1] = lVar9;
      return;
    }
    return;
  case 4:
    lVar9 = *plVar16;
    lVar10 = plVar16[1];
    iVar4 = *(int *)(lVar10 + 0x38);
    piVar14 = (int *)(lVar9 + 0x38);
    lVar12 = plVar16[2];
    piVar15 = (int *)(lVar12 + 0x38);
    if (iVar4 < *piVar14) {
      if (*piVar15 < iVar4) {
        *plVar16 = lVar12;
        plVar16[2] = lVar9;
        lVar12 = lVar9;
        piVar15 = piVar14;
      }
      else {
        *plVar16 = lVar10;
        plVar16[1] = lVar9;
        if (*(int *)(lVar12 + 0x38) < *(int *)(lVar9 + 0x38)) {
          plVar16[1] = lVar12;
          plVar16[2] = lVar9;
          lVar12 = lVar9;
          piVar15 = piVar14;
        }
      }
    }
    else if (*piVar15 < iVar4) {
      plVar16[1] = lVar12;
      plVar16[2] = lVar10;
      if (*(int *)(lVar12 + 0x38) < *piVar14) {
        *plVar16 = lVar12;
        plVar16[1] = lVar9;
      }
      lVar12 = lVar10;
      piVar15 = (int *)(lVar10 + 0x38);
    }
    if (*piVar15 <= *(int *)(param_2[-1] + 0x38)) {
      return;
    }
    plVar16[2] = param_2[-1];
    param_2[-1] = lVar12;
    lVar9 = plVar16[1];
    lVar10 = plVar16[2];
    if (*(int *)(lVar9 + 0x38) <= *(int *)(lVar10 + 0x38)) {
      return;
    }
    plVar16[1] = lVar10;
    plVar16[2] = lVar9;
    lVar9 = *plVar16;
    if (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38)) {
      *plVar16 = lVar10;
      plVar16[1] = lVar9;
      return;
    }
    return;
  case 5:
    FUN_0083ebc0(plVar16,plVar16 + 1,plVar16 + 2,plVar16 + 3,plVar11);
    return;
  }
  if (0xf7 < lVar9) {
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    plVar8 = (long *)((long)plVar16 + (uVar5 & 0x3ffffffffffffffe) * 4);
    if (lVar9 < 0x1f39) {
      lVar10 = *plVar8;
      lVar9 = *plVar16;
      lVar12 = *plVar11;
      iVar4 = *(int *)(lVar10 + 0x38);
      if (iVar4 < *(int *)(lVar9 + 0x38)) {
        if (*(int *)(lVar12 + 0x38) < iVar4) {
          *plVar16 = lVar12;
          iVar4 = 1;
        }
        else {
          *plVar16 = lVar10;
          *plVar8 = lVar9;
          if (*(int *)(lVar9 + 0x38) <= *(int *)(*plVar11 + 0x38)) {
LAB_0083e6bc:
            iVar4 = 1;
            goto LAB_0083e6c0;
          }
          iVar4 = 2;
          *plVar8 = *plVar11;
        }
        *plVar11 = lVar9;
      }
      else if (*(int *)(lVar12 + 0x38) < iVar4) {
        *plVar8 = lVar12;
        *plVar11 = lVar10;
        lVar9 = *plVar16;
        if (*(int *)(lVar9 + 0x38) <= *(int *)(*plVar8 + 0x38)) goto LAB_0083e6bc;
        *plVar16 = *plVar8;
        iVar4 = 2;
        *plVar8 = lVar9;
      }
      else {
        iVar4 = 0;
      }
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar9 = (uVar5 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_0083ebc0(plVar16,(long)plVar16 + lVar9,plVar8,(long)plVar8 + lVar9,plVar11);
    }
LAB_0083e6c0:
    lVar9 = *plVar16;
    iVar2 = *(int *)(lVar9 + 0x38);
    if (*(int *)(*plVar8 + 0x38) <= iVar2) {
      plVar17 = param_2 + -2;
LAB_0083e6f8:
      plVar7 = plVar17;
      if (plVar16 != plVar7) goto code_r0x0083e700;
      plVar8 = plVar16 + 1;
      if (*(int *)(*plVar11 + 0x38) <= iVar2) {
        if (plVar8 == plVar11) {
          return;
        }
        plVar8 = plVar16 + 2;
        while (lVar9 = plVar8[-1], *(int *)(lVar9 + 0x38) <= iVar2) {
          plVar8 = plVar8 + 1;
          if (param_2 == plVar8) {
            return;
          }
        }
        plVar8[-1] = *plVar11;
        *plVar11 = lVar9;
      }
      if (plVar8 == plVar11) {
        return;
      }
      while( true ) {
        do {
          param_1 = plVar8;
          plVar8 = param_1 + 1;
          lVar9 = *param_1;
        } while (*(int *)(lVar9 + 0x38) <= *(int *)(*plVar16 + 0x38));
        do {
          plVar11 = plVar11 + -1;
        } while (*(int *)(*plVar16 + 0x38) < *(int *)(*plVar11 + 0x38));
        if (plVar11 <= param_1) break;
        *param_1 = *plVar11;
        *plVar11 = lVar9;
      }
      uVar19 = 4;
      goto LAB_0083e88c;
    }
    plVar17 = plVar16 + 1;
    plVar7 = plVar11;
    if (plVar17 < plVar11) goto LAB_0083e740;
    goto LAB_0083e6e8;
  }
  lVar9 = *plVar16;
  lVar10 = plVar16[1];
  lVar13 = plVar16[2];
  iVar4 = *(int *)(lVar10 + 0x38);
  lVar12 = lVar13;
  if (iVar4 < *(int *)(lVar9 + 0x38)) {
    if (*(int *)(lVar13 + 0x38) < iVar4) {
      *plVar16 = lVar13;
    }
    else {
      *plVar16 = lVar10;
      plVar16[1] = lVar9;
      if (*(int *)(lVar9 + 0x38) <= *(int *)(lVar13 + 0x38)) goto joined_r0x0083e98c;
      plVar16[1] = lVar13;
    }
    plVar16[2] = lVar9;
    lVar12 = lVar9;
  }
  else if (*(int *)(lVar13 + 0x38) < iVar4) {
    plVar16[1] = lVar13;
    plVar16[2] = lVar10;
    lVar12 = lVar10;
    if (*(int *)(lVar13 + 0x38) < *(int *)(lVar9 + 0x38)) {
      *plVar16 = lVar13;
      plVar16[1] = lVar9;
    }
  }
joined_r0x0083e98c:
  if (plVar16 + 3 == param_2) {
    return;
  }
  lVar9 = 0;
  plVar11 = plVar16 + 3;
LAB_0083e9a4:
  lVar10 = *plVar11;
  if (*(int *)(lVar10 + 0x38) < *(int *)(lVar12 + 0x38)) {
    lVar12 = lVar9;
    do {
      lVar13 = lVar12;
      *(undefined8 *)((long)plVar16 + lVar13 + 0x18) =
           *(undefined8 *)((long)plVar16 + lVar13 + 0x10);
      if (lVar13 == -0x10) {
        plVar8 = plVar16;
        goto LAB_0083e9f8;
      }
      lVar12 = lVar13 + -8;
    } while (*(int *)(lVar10 + 0x38) < *(int *)(*(long *)((long)plVar16 + lVar13 + 8) + 0x38));
    plVar8 = (long *)((long)plVar16 + lVar13 + 0x10);
LAB_0083e9f8:
    *plVar8 = lVar10;
  }
  if (plVar11 + 1 == param_2) {
    return;
  }
  lVar12 = *plVar11;
  lVar9 = lVar9 + 8;
  plVar11 = plVar11 + 1;
  goto LAB_0083e9a4;
code_r0x0083e700:
  plVar17 = plVar7 + -1;
  if (*(int *)(*plVar7 + 0x38) < *(int *)(*plVar8 + 0x38)) goto code_r0x0083e710;
  goto LAB_0083e6f8;
code_r0x0083e710:
  *plVar16 = *plVar7;
  iVar4 = iVar4 + 1;
  *plVar7 = lVar9;
  plVar17 = plVar16 + 1;
  if (plVar17 < plVar7) {
LAB_0083e740:
    while( true ) {
      plVar18 = plVar17 + -1;
      do {
        plVar17 = plVar18;
        plVar18 = plVar17 + 1;
        lVar9 = *plVar18;
      } while (*(int *)(lVar9 + 0x38) < *(int *)(*plVar8 + 0x38));
      plVar17 = plVar17 + 2;
      do {
        plVar7 = plVar7 + -1;
      } while (*(int *)(*plVar8 + 0x38) <= *(int *)(*plVar7 + 0x38));
      if (plVar7 < plVar18) break;
      *plVar18 = *plVar7;
      *plVar7 = lVar9;
      iVar4 = iVar4 + 1;
      plVar1 = plVar7;
      if (plVar8 != plVar18) {
        plVar1 = plVar8;
      }
      plVar8 = plVar1;
    }
    if (plVar18 == plVar8) goto LAB_0083e7a8;
  }
  else {
LAB_0083e6e8:
    plVar18 = plVar16 + 1;
    if (plVar18 == plVar8) goto LAB_0083e7a8;
  }
  lVar9 = *plVar18;
  if (*(int *)(*plVar8 + 0x38) < *(int *)(lVar9 + 0x38)) {
    iVar4 = iVar4 + 1;
    *plVar18 = *plVar8;
    *plVar8 = lVar9;
  }
LAB_0083e7a8:
  if (iVar4 == 0) {
    uVar6 = FUN_0083edc0(plVar16,plVar18);
    uVar5 = FUN_0083edc0(plVar18 + 1,param_2);
    if ((uVar5 & 1) != 0) goto LAB_0083e89c;
    param_1 = plVar18 + 1;
    if ((uVar6 & 1) != 0) goto LAB_0083e5b4;
  }
  if ((long)param_2 - (long)plVar18 <= (long)plVar18 - (long)plVar16) {
    FUN_0083e550(plVar18 + 1,param_2);
    param_1 = plVar16;
    param_2 = plVar18;
    goto LAB_0083e594;
  }
  FUN_0083e550(plVar16,plVar18);
  param_1 = plVar18 + 1;
  goto LAB_0083e5b4;
LAB_0083e89c:
  bVar3 = (uVar6 & 1) == 0;
  if (bVar3) {
    param_2 = plVar18;
  }
  uVar19 = 1;
  if (bVar3) {
    uVar19 = 2;
  }
  param_1 = plVar16;
  if (4 < uVar19) {
    return;
  }
LAB_0083e88c:
  if ((1 << (ulong)uVar19 & 0x15U) == 0) {
    return;
  }
  goto LAB_0083e594;
}


