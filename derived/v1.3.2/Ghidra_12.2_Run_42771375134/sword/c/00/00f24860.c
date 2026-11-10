/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f24860; name: FUN_00f24860
 */


void FUN_00f24860(long *param_1,long *param_2)

{
  long *plVar1;
  float fVar2;
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
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  float fVar18;
  
LAB_00f248a4:
  plVar11 = param_2 + -1;
LAB_00f248c4:
  plVar14 = param_1;
  lVar9 = (long)param_2 - (long)plVar14;
  uVar6 = lVar9 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    lVar9 = *plVar14;
    if (*(float *)(lVar9 + 0xb8) <= *(float *)(param_2[-1] + 0xb8)) {
      return;
    }
    *plVar14 = param_2[-1];
    param_2[-1] = lVar9;
    return;
  case 3:
    lVar9 = *plVar14;
    lVar10 = plVar14[1];
    lVar12 = param_2[-1];
    fVar18 = *(float *)(lVar10 + 0xb8);
    if (*(float *)(lVar9 + 0xb8) <= fVar18) {
      if (fVar18 <= *(float *)(lVar12 + 0xb8)) {
        return;
      }
      plVar14[1] = lVar12;
      param_2[-1] = lVar10;
      lVar9 = *plVar14;
      if (*(float *)(lVar9 + 0xb8) <= *(float *)(plVar14[1] + 0xb8)) {
        return;
      }
      *plVar14 = plVar14[1];
      plVar14[1] = lVar9;
      return;
    }
    if (*(float *)(lVar12 + 0xb8) < fVar18) {
      *plVar14 = lVar12;
      param_2[-1] = lVar9;
      return;
    }
    *plVar14 = lVar10;
    plVar14[1] = lVar9;
    if (*(float *)(lVar9 + 0xb8) <= *(float *)(param_2[-1] + 0xb8)) {
      return;
    }
    plVar14[1] = param_2[-1];
    param_2[-1] = lVar9;
    return;
  case 4:
    lVar9 = *plVar14;
    lVar10 = plVar14[1];
    lVar12 = plVar14[2];
    fVar18 = (float)*(undefined8 *)(lVar10 + 0xb8);
    fVar2 = (float)*(undefined8 *)(lVar12 + 0xb8);
    lVar13 = lVar12 + 0xb0;
    if ((float)*(undefined8 *)(lVar9 + 0xb8) <= fVar18) {
      if (fVar2 < fVar18) {
        plVar14[1] = lVar12;
        plVar14[2] = lVar10;
        if (*(float *)(lVar12 + 0xb8) < *(float *)(lVar9 + 0xb8)) {
          *plVar14 = lVar12;
          plVar14[1] = lVar9;
        }
        lVar12 = lVar10;
        lVar13 = lVar10 + 0xb0;
      }
    }
    else if (fVar18 <= fVar2) {
      *plVar14 = lVar10;
      plVar14[1] = lVar9;
      if (*(float *)(lVar12 + 0xb8) < *(float *)(lVar9 + 0xb8)) {
        plVar14[1] = lVar12;
        plVar14[2] = lVar9;
        lVar12 = lVar9;
        lVar13 = lVar9 + 0xb0;
      }
    }
    else {
      *plVar14 = lVar12;
      plVar14[2] = lVar9;
      lVar12 = lVar9;
      lVar13 = lVar9 + 0xb0;
    }
    if (*(float *)(lVar13 + 8) <= *(float *)(param_2[-1] + 0xb8)) {
      return;
    }
    plVar14[2] = param_2[-1];
    param_2[-1] = lVar12;
    lVar9 = plVar14[1];
    lVar10 = plVar14[2];
    if (*(float *)(lVar9 + 0xb8) <= *(float *)(lVar10 + 0xb8)) {
      return;
    }
    plVar14[1] = lVar10;
    plVar14[2] = lVar9;
    lVar9 = *plVar14;
    if (*(float *)(lVar9 + 0xb8) <= *(float *)(lVar10 + 0xb8)) {
      return;
    }
    *plVar14 = lVar10;
    plVar14[1] = lVar9;
    return;
  case 5:
    FUN_00f24ed0(plVar14,plVar14 + 1,plVar14 + 2,plVar14 + 3,plVar11);
    return;
  }
  if (0xf7 < lVar9) {
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    plVar8 = (long *)((long)plVar14 + (uVar5 & 0x3ffffffffffffffe) * 4);
    if (lVar9 < 0x1f39) {
      lVar10 = *plVar8;
      lVar9 = *plVar14;
      lVar12 = *plVar11;
      fVar18 = *(float *)(lVar10 + 0xb8);
      if (*(float *)(lVar9 + 0xb8) <= fVar18) {
        if (fVar18 <= *(float *)(lVar12 + 0xb8)) {
          iVar4 = 0;
        }
        else {
          *plVar8 = lVar12;
          *plVar11 = lVar10;
          lVar9 = *plVar14;
          if (*(float *)(lVar9 + 0xb8) <= *(float *)(*plVar8 + 0xb8)) goto LAB_00f249cc;
          *plVar14 = *plVar8;
          iVar4 = 2;
          *plVar8 = lVar9;
        }
      }
      else {
        if (fVar18 <= *(float *)(lVar12 + 0xb8)) {
          *plVar14 = lVar10;
          *plVar8 = lVar9;
          if (*(float *)(lVar9 + 0xb8) <= *(float *)(*plVar11 + 0xb8)) {
LAB_00f249cc:
            iVar4 = 1;
            goto LAB_00f249d0;
          }
          iVar4 = 2;
          *plVar8 = *plVar11;
        }
        else {
          *plVar14 = lVar12;
          iVar4 = 1;
        }
        *plVar11 = lVar9;
      }
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar9 = (uVar5 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_00f24ed0(plVar14,(long)plVar14 + lVar9,plVar8,(long)plVar8 + lVar9,plVar11);
    }
LAB_00f249d0:
    lVar9 = *plVar14;
    fVar18 = *(float *)(lVar9 + 0xb8);
    if (*(float *)(*plVar8 + 0xb8) <= fVar18) {
      plVar15 = param_2 + -2;
LAB_00f24a08:
      plVar7 = plVar15;
      if (plVar14 != plVar7) goto code_r0x00f24a10;
      plVar8 = plVar14 + 1;
      if (*(float *)(*plVar11 + 0xb8) <= fVar18) {
        if (plVar8 == plVar11) {
          return;
        }
        plVar8 = plVar14 + 2;
        while (lVar9 = plVar8[-1], *(float *)(lVar9 + 0xb8) <= fVar18) {
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
        } while (*(float *)(lVar9 + 0xb8) <= *(float *)(*plVar14 + 0xb8));
        do {
          plVar11 = plVar11 + -1;
        } while (*(float *)(*plVar14 + 0xb8) < *(float *)(*plVar11 + 0xb8));
        if (plVar11 <= param_1) break;
        *param_1 = *plVar11;
        *plVar11 = lVar9;
      }
      uVar17 = 4;
      goto LAB_00f24b9c;
    }
    plVar15 = plVar14 + 1;
    plVar7 = plVar11;
    if (plVar15 < plVar11) goto LAB_00f24a50;
    goto LAB_00f249f8;
  }
  lVar9 = *plVar14;
  lVar10 = plVar14[1];
  lVar13 = plVar14[2];
  fVar18 = *(float *)(lVar10 + 0xb8);
  lVar12 = lVar13;
  if (*(float *)(lVar9 + 0xb8) <= fVar18) {
    if (*(float *)(lVar13 + 0xb8) < fVar18) {
      plVar14[1] = lVar13;
      plVar14[2] = lVar10;
      lVar12 = lVar10;
      if (*(float *)(lVar13 + 0xb8) < *(float *)(lVar9 + 0xb8)) {
        *plVar14 = lVar13;
        plVar14[1] = lVar9;
      }
    }
  }
  else {
    if (fVar18 <= *(float *)(lVar13 + 0xb8)) {
      *plVar14 = lVar10;
      plVar14[1] = lVar9;
      if (*(float *)(lVar9 + 0xb8) <= *(float *)(lVar13 + 0xb8)) goto joined_r0x00f24c9c;
      plVar14[1] = lVar13;
    }
    else {
      *plVar14 = lVar13;
    }
    plVar14[2] = lVar9;
    lVar12 = lVar9;
  }
joined_r0x00f24c9c:
  if (plVar14 + 3 == param_2) {
    return;
  }
  lVar9 = 0;
  plVar11 = plVar14 + 3;
LAB_00f24cb4:
  lVar10 = *plVar11;
  if (*(float *)(lVar10 + 0xb8) < *(float *)(lVar12 + 0xb8)) {
    lVar12 = lVar9;
    do {
      lVar13 = lVar12;
      *(undefined8 *)((long)plVar14 + lVar13 + 0x18) =
           *(undefined8 *)((long)plVar14 + lVar13 + 0x10);
      if (lVar13 == -0x10) {
        plVar8 = plVar14;
        goto LAB_00f24d08;
      }
      lVar12 = lVar13 + -8;
    } while (*(float *)(lVar10 + 0xb8) < *(float *)(*(long *)((long)plVar14 + lVar13 + 8) + 0xb8));
    plVar8 = (long *)((long)plVar14 + lVar13 + 0x10);
LAB_00f24d08:
    *plVar8 = lVar10;
  }
  if (plVar11 + 1 == param_2) {
    return;
  }
  lVar12 = *plVar11;
  lVar9 = lVar9 + 8;
  plVar11 = plVar11 + 1;
  goto LAB_00f24cb4;
code_r0x00f24a10:
  plVar15 = plVar7 + -1;
  if (*(float *)(*plVar7 + 0xb8) < *(float *)(*plVar8 + 0xb8)) goto code_r0x00f24a20;
  goto LAB_00f24a08;
code_r0x00f24a20:
  *plVar14 = *plVar7;
  iVar4 = iVar4 + 1;
  *plVar7 = lVar9;
  plVar15 = plVar14 + 1;
  if (plVar15 < plVar7) {
LAB_00f24a50:
    while( true ) {
      plVar16 = plVar15 + -1;
      do {
        plVar15 = plVar16;
        plVar16 = plVar15 + 1;
        lVar9 = *plVar16;
      } while (*(float *)(lVar9 + 0xb8) < *(float *)(*plVar8 + 0xb8));
      plVar15 = plVar15 + 2;
      do {
        plVar7 = plVar7 + -1;
      } while (*(float *)(*plVar8 + 0xb8) <= *(float *)(*plVar7 + 0xb8));
      if (plVar7 < plVar16) break;
      *plVar16 = *plVar7;
      *plVar7 = lVar9;
      iVar4 = iVar4 + 1;
      plVar1 = plVar7;
      if (plVar8 != plVar16) {
        plVar1 = plVar8;
      }
      plVar8 = plVar1;
    }
    if (plVar16 == plVar8) goto LAB_00f24ab8;
  }
  else {
LAB_00f249f8:
    plVar16 = plVar14 + 1;
    if (plVar16 == plVar8) goto LAB_00f24ab8;
  }
  lVar9 = *plVar16;
  if (*(float *)(*plVar8 + 0xb8) < *(float *)(lVar9 + 0xb8)) {
    iVar4 = iVar4 + 1;
    *plVar16 = *plVar8;
    *plVar8 = lVar9;
  }
LAB_00f24ab8:
  if (iVar4 == 0) {
    uVar6 = FUN_00f250e0(plVar14,plVar16);
    uVar5 = FUN_00f250e0(plVar16 + 1,param_2);
    if ((uVar5 & 1) != 0) goto LAB_00f24bac;
    param_1 = plVar16 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00f248c4;
  }
  if ((long)param_2 - (long)plVar16 <= (long)plVar16 - (long)plVar14) {
    FUN_00f24860(plVar16 + 1,param_2);
    param_1 = plVar14;
    param_2 = plVar16;
    goto LAB_00f248a4;
  }
  FUN_00f24860(plVar14,plVar16);
  param_1 = plVar16 + 1;
  goto LAB_00f248c4;
LAB_00f24bac:
  bVar3 = (uVar6 & 1) == 0;
  if (bVar3) {
    param_2 = plVar16;
  }
  uVar17 = 1;
  if (bVar3) {
    uVar17 = 2;
  }
  param_1 = plVar14;
  if (4 < uVar17) {
    return;
  }
LAB_00f24b9c:
  if ((1 << (ulong)uVar17 & 0x15U) == 0) {
    return;
  }
  goto LAB_00f248a4;
}


