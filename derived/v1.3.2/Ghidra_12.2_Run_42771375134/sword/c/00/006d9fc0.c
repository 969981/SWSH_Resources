/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d9fc0; name: FUN_006d9fc0
 */


void FUN_006d9fc0(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  
LAB_006d9ffc:
  plVar17 = param_2 + -1;
LAB_006da018:
  plVar16 = param_1;
  lVar11 = (long)param_2 - (long)plVar16;
  uVar9 = lVar11 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    return;
  case 2:
    uVar4 = (**(code **)(*(long *)param_2[-1] + 0x30))();
    uVar5 = (**(code **)(*(long *)*plVar16 + 0x30))();
    if (uVar5 <= uVar4) {
      return;
    }
    lVar15 = *plVar16;
    *plVar16 = 0;
    lVar11 = param_2[-1];
    param_2[-1] = 0;
    *plVar16 = lVar11;
    if ((long *)param_2[-1] != (long *)0x0) {
      (**(code **)(*(long *)param_2[-1] + 0x18))();
      param_2[-1] = 0;
    }
    param_2[-1] = lVar15;
    return;
  case 3:
    FUN_006da680(plVar16,plVar16 + 1,plVar17);
    return;
  case 4:
    FUN_006da880(plVar16,plVar16 + 1,plVar16 + 2,plVar17);
    return;
  case 5:
    FUN_006da9f0(plVar16,plVar16 + 1,plVar16 + 2,plVar16 + 3,plVar17);
    return;
  }
  if (0x37 < lVar11) {
    uVar6 = uVar9;
    if ((long)uVar9 < 0) {
      uVar6 = uVar9 + 1;
    }
    plVar7 = (long *)((long)plVar16 + (uVar6 & 0x3ffffffffffffffe) * 4);
    if (lVar11 < 0x1f39) {
      iVar3 = FUN_006da680(plVar16,plVar7,plVar17);
    }
    else {
      uVar6 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar6 = uVar9;
      }
      lVar11 = (uVar6 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_006da9f0(plVar16,(long)plVar16 + lVar11,plVar7,(long)plVar7 + lVar11,plVar17);
    }
    uVar4 = (**(code **)(*(long *)*plVar16 + 0x30))();
    uVar5 = (**(code **)(*(long *)*plVar7 + 0x30))();
    if (uVar5 <= uVar4) {
      plVar12 = param_2 + -2;
LAB_006da0e4:
      plVar8 = plVar12;
      if (plVar16 != plVar8) goto code_r0x006da0ec;
      plVar7 = plVar16 + 1;
      uVar4 = (**(code **)(*(long *)*plVar16 + 0x30))();
      uVar5 = (**(code **)(*(long *)*plVar17 + 0x30))();
      if (uVar5 <= uVar4) {
        if (plVar7 == plVar17) {
          return;
        }
        plVar7 = plVar16 + 2;
        while( true ) {
          uVar4 = (**(code **)(*(long *)*plVar16 + 0x30))();
          uVar5 = (**(code **)(*(long *)plVar7[-1] + 0x30))();
          if (uVar4 < uVar5) break;
          plVar7 = plVar7 + 1;
          if (param_2 == plVar7) {
            return;
          }
        }
        lVar15 = plVar7[-1];
        plVar7[-1] = 0;
        lVar11 = *plVar17;
        *plVar17 = 0;
        plVar7[-1] = lVar11;
        if ((long *)*plVar17 != (long *)0x0) {
          (**(code **)(*(long *)*plVar17 + 0x18))();
          *plVar17 = 0;
        }
        *plVar17 = lVar15;
      }
      if (plVar7 == plVar17) {
        return;
      }
      while( true ) {
        param_1 = plVar7 + -1;
        do {
          plVar7 = param_1;
          uVar4 = (**(code **)(*(long *)*plVar16 + 0x30))();
          param_1 = plVar7 + 1;
          uVar5 = (**(code **)(*(long *)*param_1 + 0x30))();
        } while (uVar5 <= uVar4);
        plVar7 = plVar7 + 2;
        do {
          uVar4 = (**(code **)(*(long *)*plVar16 + 0x30))();
          plVar17 = plVar17 + -1;
          uVar5 = (**(code **)(*(long *)*plVar17 + 0x30))();
        } while (uVar4 < uVar5);
        if (plVar17 <= param_1) break;
        lVar15 = *param_1;
        *param_1 = 0;
        lVar11 = *plVar17;
        *plVar17 = 0;
        *param_1 = lVar11;
        if ((long *)*plVar17 != (long *)0x0) {
          (**(code **)(*(long *)*plVar17 + 0x18))();
          *plVar17 = 0;
        }
        *plVar17 = lVar15;
      }
      uVar4 = 4;
      goto LAB_006da414;
    }
    plVar12 = plVar16 + 1;
    plVar8 = plVar17;
    if (plVar17 <= plVar12) goto LAB_006da0d4;
    goto LAB_006da170;
  }
  FUN_006da680(plVar16,plVar16 + 1,plVar16 + 2);
  if (plVar16 + 3 == param_2) {
    return;
  }
  lVar11 = 0;
  plVar17 = plVar16 + 3;
  plVar7 = plVar16 + 2;
  goto LAB_006da4e8;
code_r0x006da0ec:
  uVar4 = (**(code **)(*(long *)*plVar8 + 0x30))();
  uVar5 = (**(code **)(*(long *)*plVar7 + 0x30))();
  plVar12 = plVar8 + -1;
  if (uVar4 < uVar5) goto code_r0x006da118;
  goto LAB_006da0e4;
code_r0x006da118:
  lVar15 = *plVar16;
  *plVar16 = 0;
  lVar11 = *plVar8;
  *plVar8 = 0;
  *plVar16 = lVar11;
  if ((long *)*plVar8 != (long *)0x0) {
    (**(code **)(*(long *)*plVar8 + 0x18))();
    *plVar8 = 0;
  }
  iVar3 = iVar3 + 1;
  *plVar8 = lVar15;
  plVar12 = plVar16 + 1;
  if (plVar12 < plVar8) {
LAB_006da170:
    while( true ) {
      plVar13 = plVar12 + -1;
      do {
        plVar12 = plVar13;
        plVar13 = plVar12 + 1;
        uVar4 = (**(code **)(*(long *)*plVar13 + 0x30))();
        uVar5 = (**(code **)(*(long *)*plVar7 + 0x30))();
      } while (uVar4 < uVar5);
      plVar12 = plVar12 + 2;
      do {
        plVar8 = plVar8 + -1;
        uVar4 = (**(code **)(*(long *)*plVar8 + 0x30))();
        uVar5 = (**(code **)(*(long *)*plVar7 + 0x30))();
      } while (uVar5 <= uVar4);
      if (plVar8 < plVar13) break;
      lVar15 = *plVar13;
      *plVar13 = 0;
      lVar11 = *plVar8;
      *plVar8 = 0;
      *plVar13 = lVar11;
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x18))();
        *plVar8 = 0;
      }
      *plVar8 = lVar15;
      iVar3 = iVar3 + 1;
      plVar1 = plVar8;
      if (plVar7 != plVar13) {
        plVar1 = plVar7;
      }
      plVar7 = plVar1;
    }
    if (plVar13 == plVar7) goto LAB_006da274;
  }
  else {
LAB_006da0d4:
    plVar13 = plVar16 + 1;
    if (plVar13 == plVar7) goto LAB_006da274;
  }
  uVar4 = (**(code **)(*(long *)*plVar7 + 0x30))();
  uVar5 = (**(code **)(*(long *)*plVar13 + 0x30))();
  if (uVar4 < uVar5) {
    lVar15 = *plVar13;
    *plVar13 = 0;
    lVar11 = *plVar7;
    *plVar7 = 0;
    *plVar13 = lVar11;
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 0x18))();
      *plVar7 = 0;
    }
    iVar3 = iVar3 + 1;
    *plVar7 = lVar15;
  }
LAB_006da274:
  if (iVar3 == 0) {
    uVar9 = FUN_006dabd0(plVar16,plVar13);
    uVar6 = FUN_006dabd0(plVar13 + 1,param_2);
    if ((uVar6 & 1) != 0) goto LAB_006da42c;
    param_1 = plVar13 + 1;
    if ((uVar9 & 1) != 0) goto LAB_006da018;
  }
  if ((long)param_2 - (long)plVar13 <= (long)plVar13 - (long)plVar16) {
    FUN_006d9fc0(plVar13 + 1,param_2);
    param_1 = plVar16;
    param_2 = plVar13;
    goto LAB_006d9ffc;
  }
  FUN_006d9fc0(plVar16,plVar13);
  param_1 = plVar13 + 1;
  goto LAB_006da018;
LAB_006da42c:
  bVar2 = (uVar9 & 1) == 0;
  if (bVar2) {
    param_2 = plVar13;
  }
  uVar4 = 1;
  if (bVar2) {
    uVar4 = 2;
  }
  param_1 = plVar16;
  if (4 < uVar4) {
    return;
  }
LAB_006da414:
  if ((1 << (ulong)uVar4 & 0x15U) == 0) {
    return;
  }
  goto LAB_006d9ffc;
LAB_006da4e8:
  plVar12 = plVar17;
  uVar4 = (**(code **)(*(long *)*plVar12 + 0x30))();
  uVar5 = (**(code **)(*(long *)*plVar7 + 0x30))();
  if (uVar4 < uVar5) {
    plVar17 = (long *)*plVar12;
    *plVar12 = 0;
    lVar15 = lVar11;
    while( true ) {
      lVar14 = lVar15;
      uVar10 = *(undefined8 *)((long)plVar16 + lVar14 + 0x10);
      *(undefined8 *)((long)plVar16 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)plVar16 + lVar14 + 0x18) = uVar10;
      if (lVar14 == -0x10) break;
      uVar4 = (**(code **)(*plVar17 + 0x30))(plVar17);
      uVar5 = (**(code **)(**(long **)((long)plVar16 + lVar14 + 8) + 0x30))();
      if (uVar5 <= uVar4) {
        plVar7 = (long *)((long)plVar16 + lVar14 + 0x10);
        plVar8 = (long *)*plVar7;
        goto joined_r0x006da5ac;
      }
      plVar7 = *(long **)((long)plVar16 + lVar14 + 0x10);
      lVar15 = lVar14 + -8;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
        *(undefined8 *)((long)plVar16 + lVar14 + 0x10) = 0;
      }
    }
    plVar8 = (long *)*plVar16;
    plVar7 = plVar16;
joined_r0x006da5ac:
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
      *plVar7 = 0;
    }
    *plVar7 = (long)plVar17;
  }
  lVar11 = lVar11 + 8;
  plVar17 = plVar12 + 1;
  plVar7 = plVar12;
  if (plVar12 + 1 == param_2) {
    return;
  }
  goto LAB_006da4e8;
}


