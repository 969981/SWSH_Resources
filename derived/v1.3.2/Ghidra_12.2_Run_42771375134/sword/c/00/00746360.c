/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00746360; name: FUN_00746360
 */


void FUN_00746360(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  
LAB_007463a4:
  plVar10 = param_2 + -1;
LAB_007463c4:
  plVar15 = param_1;
  lVar8 = (long)param_2 - (long)plVar15;
  uVar5 = lVar8 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    return;
  case 2:
    lVar8 = *plVar15;
    if (*(ulong *)(param_2[-1] + 0xa0) < *(ulong *)(lVar8 + 0xa0)) {
      *plVar15 = param_2[-1];
      param_2[-1] = lVar8;
      return;
    }
    return;
  case 3:
    lVar8 = *plVar15;
    lVar9 = plVar15[1];
    lVar11 = param_2[-1];
    uVar5 = *(ulong *)(lVar9 + 0xa0);
    if (*(ulong *)(lVar8 + 0xa0) <= uVar5) {
      if (uVar5 <= *(ulong *)(lVar11 + 0xa0)) {
        return;
      }
      plVar15[1] = lVar11;
      param_2[-1] = lVar9;
      lVar8 = *plVar15;
      if (*(ulong *)(plVar15[1] + 0xa0) < *(ulong *)(lVar8 + 0xa0)) {
        *plVar15 = plVar15[1];
        plVar15[1] = lVar8;
        return;
      }
      return;
    }
    if (*(ulong *)(lVar11 + 0xa0) < uVar5) {
      *plVar15 = lVar11;
      param_2[-1] = lVar8;
      return;
    }
    *plVar15 = lVar9;
    plVar15[1] = lVar8;
    if (*(ulong *)(param_2[-1] + 0xa0) < *(ulong *)(lVar8 + 0xa0)) {
      plVar15[1] = param_2[-1];
      param_2[-1] = lVar8;
      return;
    }
    return;
  case 4:
    lVar8 = *plVar15;
    lVar9 = plVar15[1];
    uVar5 = *(ulong *)(lVar9 + 0xa0);
    puVar13 = (ulong *)(lVar8 + 0xa0);
    lVar11 = plVar15[2];
    puVar14 = (ulong *)(lVar11 + 0xa0);
    if (uVar5 < *puVar13) {
      if (*puVar14 < uVar5) {
        *plVar15 = lVar11;
        plVar15[2] = lVar8;
        lVar11 = lVar8;
        puVar14 = puVar13;
      }
      else {
        *plVar15 = lVar9;
        plVar15[1] = lVar8;
        if (*(ulong *)(lVar11 + 0xa0) < *(ulong *)(lVar8 + 0xa0)) {
          plVar15[1] = lVar11;
          plVar15[2] = lVar8;
          lVar11 = lVar8;
          puVar14 = puVar13;
        }
      }
    }
    else if (*puVar14 < uVar5) {
      plVar15[1] = lVar11;
      plVar15[2] = lVar9;
      if (*(ulong *)(lVar11 + 0xa0) < *puVar13) {
        *plVar15 = lVar11;
        plVar15[1] = lVar8;
      }
      lVar11 = lVar9;
      puVar14 = (ulong *)(lVar9 + 0xa0);
    }
    if (*puVar14 <= *(ulong *)(param_2[-1] + 0xa0)) {
      return;
    }
    plVar15[2] = param_2[-1];
    param_2[-1] = lVar11;
    lVar8 = plVar15[1];
    lVar9 = plVar15[2];
    if (*(ulong *)(lVar8 + 0xa0) <= *(ulong *)(lVar9 + 0xa0)) {
      return;
    }
    plVar15[1] = lVar9;
    plVar15[2] = lVar8;
    lVar8 = *plVar15;
    if (*(ulong *)(lVar9 + 0xa0) < *(ulong *)(lVar8 + 0xa0)) {
      *plVar15 = lVar9;
      plVar15[1] = lVar8;
      return;
    }
    return;
  case 5:
    FUN_007469d0(plVar15,plVar15 + 1,plVar15 + 2,plVar15 + 3,plVar10);
    return;
  }
  if (0xf7 < lVar8) {
    uVar4 = uVar5;
    if ((long)uVar5 < 0) {
      uVar4 = uVar5 + 1;
    }
    plVar7 = (long *)((long)plVar15 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar8 < 0x1f39) {
      lVar9 = *plVar7;
      lVar8 = *plVar15;
      lVar11 = *plVar10;
      uVar5 = *(ulong *)(lVar9 + 0xa0);
      if (uVar5 < *(ulong *)(lVar8 + 0xa0)) {
        if (*(ulong *)(lVar11 + 0xa0) < uVar5) {
          *plVar15 = lVar11;
          iVar3 = 1;
        }
        else {
          *plVar15 = lVar9;
          *plVar7 = lVar8;
          if (*(ulong *)(lVar8 + 0xa0) <= *(ulong *)(*plVar10 + 0xa0)) {
LAB_007464cc:
            iVar3 = 1;
            goto LAB_007464d0;
          }
          iVar3 = 2;
          *plVar7 = *plVar10;
        }
        *plVar10 = lVar8;
      }
      else if (*(ulong *)(lVar11 + 0xa0) < uVar5) {
        *plVar7 = lVar11;
        *plVar10 = lVar9;
        lVar8 = *plVar15;
        if (*(ulong *)(lVar8 + 0xa0) <= *(ulong *)(*plVar7 + 0xa0)) goto LAB_007464cc;
        *plVar15 = *plVar7;
        iVar3 = 2;
        *plVar7 = lVar8;
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      uVar4 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      lVar8 = (uVar4 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_007469d0(plVar15,(long)plVar15 + lVar8,plVar7,(long)plVar7 + lVar8,plVar10);
    }
LAB_007464d0:
    lVar8 = *plVar15;
    uVar5 = *(ulong *)(lVar8 + 0xa0);
    if (*(ulong *)(*plVar7 + 0xa0) <= uVar5) {
      plVar16 = param_2 + -2;
LAB_00746508:
      plVar6 = plVar16;
      if (plVar15 != plVar6) goto code_r0x00746510;
      plVar7 = plVar15 + 1;
      if (*(ulong *)(*plVar10 + 0xa0) <= uVar5) {
        if (plVar7 == plVar10) {
          return;
        }
        plVar7 = plVar15 + 2;
        while (lVar8 = plVar7[-1], *(ulong *)(lVar8 + 0xa0) <= uVar5) {
          plVar7 = plVar7 + 1;
          if (param_2 == plVar7) {
            return;
          }
        }
        plVar7[-1] = *plVar10;
        *plVar10 = lVar8;
      }
      if (plVar7 == plVar10) {
        return;
      }
      while( true ) {
        do {
          param_1 = plVar7;
          plVar7 = param_1 + 1;
          lVar8 = *param_1;
        } while (*(ulong *)(lVar8 + 0xa0) <= *(ulong *)(*plVar15 + 0xa0));
        do {
          plVar10 = plVar10 + -1;
        } while (*(ulong *)(*plVar15 + 0xa0) < *(ulong *)(*plVar10 + 0xa0));
        if (plVar10 <= param_1) break;
        *param_1 = *plVar10;
        *plVar10 = lVar8;
      }
      uVar18 = 4;
      goto LAB_0074669c;
    }
    plVar16 = plVar15 + 1;
    plVar6 = plVar10;
    if (plVar16 < plVar10) goto LAB_00746550;
    goto LAB_007464f8;
  }
  lVar8 = *plVar15;
  lVar9 = plVar15[1];
  lVar12 = plVar15[2];
  uVar5 = *(ulong *)(lVar9 + 0xa0);
  lVar11 = lVar12;
  if (uVar5 < *(ulong *)(lVar8 + 0xa0)) {
    if (*(ulong *)(lVar12 + 0xa0) < uVar5) {
      *plVar15 = lVar12;
    }
    else {
      *plVar15 = lVar9;
      plVar15[1] = lVar8;
      if (*(ulong *)(lVar8 + 0xa0) <= *(ulong *)(lVar12 + 0xa0)) goto joined_r0x0074679c;
      plVar15[1] = lVar12;
    }
    plVar15[2] = lVar8;
    lVar11 = lVar8;
  }
  else if (*(ulong *)(lVar12 + 0xa0) < uVar5) {
    plVar15[1] = lVar12;
    plVar15[2] = lVar9;
    lVar11 = lVar9;
    if (*(ulong *)(lVar12 + 0xa0) < *(ulong *)(lVar8 + 0xa0)) {
      *plVar15 = lVar12;
      plVar15[1] = lVar8;
    }
  }
joined_r0x0074679c:
  if (plVar15 + 3 == param_2) {
    return;
  }
  lVar8 = 0;
  plVar10 = plVar15 + 3;
LAB_007467b4:
  lVar9 = *plVar10;
  if (*(ulong *)(lVar9 + 0xa0) < *(ulong *)(lVar11 + 0xa0)) {
    lVar11 = lVar8;
    do {
      lVar12 = lVar11;
      *(undefined8 *)((long)plVar15 + lVar12 + 0x18) =
           *(undefined8 *)((long)plVar15 + lVar12 + 0x10);
      if (lVar12 == -0x10) {
        plVar7 = plVar15;
        goto LAB_00746808;
      }
      lVar11 = lVar12 + -8;
    } while (*(ulong *)(lVar9 + 0xa0) < *(ulong *)(*(long *)((long)plVar15 + lVar12 + 8) + 0xa0));
    plVar7 = (long *)((long)plVar15 + lVar12 + 0x10);
LAB_00746808:
    *plVar7 = lVar9;
  }
  if (plVar10 + 1 == param_2) {
    return;
  }
  lVar11 = *plVar10;
  lVar8 = lVar8 + 8;
  plVar10 = plVar10 + 1;
  goto LAB_007467b4;
code_r0x00746510:
  plVar16 = plVar6 + -1;
  if (*(ulong *)(*plVar6 + 0xa0) < *(ulong *)(*plVar7 + 0xa0)) goto code_r0x00746520;
  goto LAB_00746508;
code_r0x00746520:
  *plVar15 = *plVar6;
  iVar3 = iVar3 + 1;
  *plVar6 = lVar8;
  plVar16 = plVar15 + 1;
  if (plVar16 < plVar6) {
LAB_00746550:
    while( true ) {
      plVar17 = plVar16 + -1;
      do {
        plVar16 = plVar17;
        plVar17 = plVar16 + 1;
        lVar8 = *plVar17;
      } while (*(ulong *)(lVar8 + 0xa0) < *(ulong *)(*plVar7 + 0xa0));
      plVar16 = plVar16 + 2;
      do {
        plVar6 = plVar6 + -1;
      } while (*(ulong *)(*plVar7 + 0xa0) <= *(ulong *)(*plVar6 + 0xa0));
      if (plVar6 < plVar17) break;
      *plVar17 = *plVar6;
      *plVar6 = lVar8;
      iVar3 = iVar3 + 1;
      plVar1 = plVar6;
      if (plVar7 != plVar17) {
        plVar1 = plVar7;
      }
      plVar7 = plVar1;
    }
    if (plVar17 == plVar7) goto LAB_007465b8;
  }
  else {
LAB_007464f8:
    plVar17 = plVar15 + 1;
    if (plVar17 == plVar7) goto LAB_007465b8;
  }
  lVar8 = *plVar17;
  if (*(ulong *)(*plVar7 + 0xa0) < *(ulong *)(lVar8 + 0xa0)) {
    iVar3 = iVar3 + 1;
    *plVar17 = *plVar7;
    *plVar7 = lVar8;
  }
LAB_007465b8:
  if (iVar3 == 0) {
    uVar5 = FUN_00746bd0(plVar15,plVar17);
    uVar4 = FUN_00746bd0(plVar17 + 1,param_2);
    if ((uVar4 & 1) != 0) goto LAB_007466ac;
    param_1 = plVar17 + 1;
    if ((uVar5 & 1) != 0) goto LAB_007463c4;
  }
  if ((long)param_2 - (long)plVar17 <= (long)plVar17 - (long)plVar15) {
    FUN_00746360(plVar17 + 1,param_2);
    param_1 = plVar15;
    param_2 = plVar17;
    goto LAB_007463a4;
  }
  FUN_00746360(plVar15,plVar17);
  param_1 = plVar17 + 1;
  goto LAB_007463c4;
LAB_007466ac:
  bVar2 = (uVar5 & 1) == 0;
  if (bVar2) {
    param_2 = plVar17;
  }
  uVar18 = 1;
  if (bVar2) {
    uVar18 = 2;
  }
  param_1 = plVar15;
  if (4 < uVar18) {
    return;
  }
LAB_0074669c:
  if ((1 << (ulong)uVar18 & 0x15U) == 0) {
    return;
  }
  goto LAB_007463a4;
}


