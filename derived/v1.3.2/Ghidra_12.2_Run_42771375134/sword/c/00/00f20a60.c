/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f20a60; name: FUN_00f20a60
 */


void FUN_00f20a60(long *param_1,long *param_2)

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
  float *pfVar13;
  float *pfVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  float fVar19;
  
LAB_00f20aa4:
  plVar10 = param_2 + -1;
LAB_00f20ac4:
  plVar15 = param_1;
  lVar8 = (long)param_2 - (long)plVar15;
  uVar5 = lVar8 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    return;
  case 2:
    lVar8 = *plVar15;
    if (*(float *)(lVar8 + 0xb0) <= *(float *)(param_2[-1] + 0xb0)) {
      return;
    }
    *plVar15 = param_2[-1];
    param_2[-1] = lVar8;
    return;
  case 3:
    lVar8 = *plVar15;
    lVar9 = plVar15[1];
    lVar11 = param_2[-1];
    fVar19 = *(float *)(lVar9 + 0xb0);
    if (*(float *)(lVar8 + 0xb0) <= fVar19) {
      if (fVar19 <= *(float *)(lVar11 + 0xb0)) {
        return;
      }
      plVar15[1] = lVar11;
      param_2[-1] = lVar9;
      lVar8 = *plVar15;
      if (*(float *)(lVar8 + 0xb0) <= *(float *)(plVar15[1] + 0xb0)) {
        return;
      }
      *plVar15 = plVar15[1];
      plVar15[1] = lVar8;
      return;
    }
    if (*(float *)(lVar11 + 0xb0) < fVar19) {
      *plVar15 = lVar11;
      param_2[-1] = lVar8;
      return;
    }
    *plVar15 = lVar9;
    plVar15[1] = lVar8;
    if (*(float *)(lVar8 + 0xb0) <= *(float *)(param_2[-1] + 0xb0)) {
      return;
    }
    plVar15[1] = param_2[-1];
    param_2[-1] = lVar8;
    return;
  case 4:
    lVar8 = *plVar15;
    lVar9 = plVar15[1];
    pfVar13 = (float *)(lVar8 + 0xb0);
    lVar11 = plVar15[2];
    fVar19 = (float)*(undefined8 *)(lVar9 + 0xb0);
    pfVar14 = (float *)(lVar11 + 0xb0);
    if ((float)*(undefined8 *)pfVar13 <= fVar19) {
      if ((float)*(undefined8 *)pfVar14 < fVar19) {
        plVar15[1] = lVar11;
        plVar15[2] = lVar9;
        if (*(float *)(lVar11 + 0xb0) < *pfVar13) {
          *plVar15 = lVar11;
          plVar15[1] = lVar8;
        }
        lVar11 = lVar9;
        pfVar14 = (float *)(lVar9 + 0xb0);
      }
    }
    else if (fVar19 <= (float)*(undefined8 *)pfVar14) {
      *plVar15 = lVar9;
      plVar15[1] = lVar8;
      if (*(float *)(lVar11 + 0xb0) < *(float *)(lVar8 + 0xb0)) {
        plVar15[1] = lVar11;
        plVar15[2] = lVar8;
        lVar11 = lVar8;
        pfVar14 = pfVar13;
      }
    }
    else {
      *plVar15 = lVar11;
      plVar15[2] = lVar8;
      lVar11 = lVar8;
      pfVar14 = pfVar13;
    }
    if (*pfVar14 <= *(float *)(param_2[-1] + 0xb0)) {
      return;
    }
    plVar15[2] = param_2[-1];
    param_2[-1] = lVar11;
    lVar8 = plVar15[1];
    lVar9 = plVar15[2];
    if (*(float *)(lVar8 + 0xb0) <= *(float *)(lVar9 + 0xb0)) {
      return;
    }
    plVar15[1] = lVar9;
    plVar15[2] = lVar8;
    lVar8 = *plVar15;
    if (*(float *)(lVar8 + 0xb0) <= *(float *)(lVar9 + 0xb0)) {
      return;
    }
    *plVar15 = lVar9;
    plVar15[1] = lVar8;
    return;
  case 5:
    FUN_00f210d0(plVar15,plVar15 + 1,plVar15 + 2,plVar15 + 3,plVar10);
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
      fVar19 = *(float *)(lVar9 + 0xb0);
      if (*(float *)(lVar8 + 0xb0) <= fVar19) {
        if (fVar19 <= *(float *)(lVar11 + 0xb0)) {
          iVar3 = 0;
        }
        else {
          *plVar7 = lVar11;
          *plVar10 = lVar9;
          lVar8 = *plVar15;
          if (*(float *)(lVar8 + 0xb0) <= *(float *)(*plVar7 + 0xb0)) goto LAB_00f20bcc;
          *plVar15 = *plVar7;
          iVar3 = 2;
          *plVar7 = lVar8;
        }
      }
      else {
        if (fVar19 <= *(float *)(lVar11 + 0xb0)) {
          *plVar15 = lVar9;
          *plVar7 = lVar8;
          if (*(float *)(lVar8 + 0xb0) <= *(float *)(*plVar10 + 0xb0)) {
LAB_00f20bcc:
            iVar3 = 1;
            goto LAB_00f20bd0;
          }
          iVar3 = 2;
          *plVar7 = *plVar10;
        }
        else {
          *plVar15 = lVar11;
          iVar3 = 1;
        }
        *plVar10 = lVar8;
      }
    }
    else {
      uVar4 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      lVar8 = (uVar4 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_00f210d0(plVar15,(long)plVar15 + lVar8,plVar7,(long)plVar7 + lVar8,plVar10);
    }
LAB_00f20bd0:
    lVar8 = *plVar15;
    fVar19 = *(float *)(lVar8 + 0xb0);
    if (*(float *)(*plVar7 + 0xb0) <= fVar19) {
      plVar16 = param_2 + -2;
LAB_00f20c08:
      plVar6 = plVar16;
      if (plVar15 != plVar6) goto code_r0x00f20c10;
      plVar7 = plVar15 + 1;
      if (*(float *)(*plVar10 + 0xb0) <= fVar19) {
        if (plVar7 == plVar10) {
          return;
        }
        plVar7 = plVar15 + 2;
        while (lVar8 = plVar7[-1], *(float *)(lVar8 + 0xb0) <= fVar19) {
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
        } while (*(float *)(lVar8 + 0xb0) <= *(float *)(*plVar15 + 0xb0));
        do {
          plVar10 = plVar10 + -1;
        } while (*(float *)(*plVar15 + 0xb0) < *(float *)(*plVar10 + 0xb0));
        if (plVar10 <= param_1) break;
        *param_1 = *plVar10;
        *plVar10 = lVar8;
      }
      uVar18 = 4;
      goto LAB_00f20d9c;
    }
    plVar16 = plVar15 + 1;
    plVar6 = plVar10;
    if (plVar16 < plVar10) goto LAB_00f20c50;
    goto LAB_00f20bf8;
  }
  lVar8 = *plVar15;
  lVar9 = plVar15[1];
  lVar12 = plVar15[2];
  fVar19 = *(float *)(lVar9 + 0xb0);
  lVar11 = lVar12;
  if (*(float *)(lVar8 + 0xb0) <= fVar19) {
    if (*(float *)(lVar12 + 0xb0) < fVar19) {
      plVar15[1] = lVar12;
      plVar15[2] = lVar9;
      lVar11 = lVar9;
      if (*(float *)(lVar12 + 0xb0) < *(float *)(lVar8 + 0xb0)) {
        *plVar15 = lVar12;
        plVar15[1] = lVar8;
      }
    }
  }
  else {
    if (fVar19 <= *(float *)(lVar12 + 0xb0)) {
      *plVar15 = lVar9;
      plVar15[1] = lVar8;
      if (*(float *)(lVar8 + 0xb0) <= *(float *)(lVar12 + 0xb0)) goto joined_r0x00f20e9c;
      plVar15[1] = lVar12;
    }
    else {
      *plVar15 = lVar12;
    }
    plVar15[2] = lVar8;
    lVar11 = lVar8;
  }
joined_r0x00f20e9c:
  if (plVar15 + 3 == param_2) {
    return;
  }
  lVar8 = 0;
  plVar10 = plVar15 + 3;
LAB_00f20eb4:
  lVar9 = *plVar10;
  if (*(float *)(lVar9 + 0xb0) < *(float *)(lVar11 + 0xb0)) {
    lVar11 = lVar8;
    do {
      lVar12 = lVar11;
      *(undefined8 *)((long)plVar15 + lVar12 + 0x18) =
           *(undefined8 *)((long)plVar15 + lVar12 + 0x10);
      if (lVar12 == -0x10) {
        plVar7 = plVar15;
        goto LAB_00f20f08;
      }
      lVar11 = lVar12 + -8;
    } while (*(float *)(lVar9 + 0xb0) < *(float *)(*(long *)((long)plVar15 + lVar12 + 8) + 0xb0));
    plVar7 = (long *)((long)plVar15 + lVar12 + 0x10);
LAB_00f20f08:
    *plVar7 = lVar9;
  }
  if (plVar10 + 1 == param_2) {
    return;
  }
  lVar11 = *plVar10;
  lVar8 = lVar8 + 8;
  plVar10 = plVar10 + 1;
  goto LAB_00f20eb4;
code_r0x00f20c10:
  plVar16 = plVar6 + -1;
  if (*(float *)(*plVar6 + 0xb0) < *(float *)(*plVar7 + 0xb0)) goto code_r0x00f20c20;
  goto LAB_00f20c08;
code_r0x00f20c20:
  *plVar15 = *plVar6;
  iVar3 = iVar3 + 1;
  *plVar6 = lVar8;
  plVar16 = plVar15 + 1;
  if (plVar16 < plVar6) {
LAB_00f20c50:
    while( true ) {
      plVar17 = plVar16 + -1;
      do {
        plVar16 = plVar17;
        plVar17 = plVar16 + 1;
        lVar8 = *plVar17;
      } while (*(float *)(lVar8 + 0xb0) < *(float *)(*plVar7 + 0xb0));
      plVar16 = plVar16 + 2;
      do {
        plVar6 = plVar6 + -1;
      } while (*(float *)(*plVar7 + 0xb0) <= *(float *)(*plVar6 + 0xb0));
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
    if (plVar17 == plVar7) goto LAB_00f20cb8;
  }
  else {
LAB_00f20bf8:
    plVar17 = plVar15 + 1;
    if (plVar17 == plVar7) goto LAB_00f20cb8;
  }
  lVar8 = *plVar17;
  if (*(float *)(*plVar7 + 0xb0) < *(float *)(lVar8 + 0xb0)) {
    iVar3 = iVar3 + 1;
    *plVar17 = *plVar7;
    *plVar7 = lVar8;
  }
LAB_00f20cb8:
  if (iVar3 == 0) {
    uVar5 = FUN_00f212d0(plVar15,plVar17);
    uVar4 = FUN_00f212d0(plVar17 + 1,param_2);
    if ((uVar4 & 1) != 0) goto LAB_00f20dac;
    param_1 = plVar17 + 1;
    if ((uVar5 & 1) != 0) goto LAB_00f20ac4;
  }
  if ((long)param_2 - (long)plVar17 <= (long)plVar17 - (long)plVar15) {
    FUN_00f20a60(plVar17 + 1,param_2);
    param_1 = plVar15;
    param_2 = plVar17;
    goto LAB_00f20aa4;
  }
  FUN_00f20a60(plVar15,plVar17);
  param_1 = plVar17 + 1;
  goto LAB_00f20ac4;
LAB_00f20dac:
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
LAB_00f20d9c:
  if ((1 << (ulong)uVar18 & 0x15U) == 0) {
    return;
  }
  goto LAB_00f20aa4;
}


