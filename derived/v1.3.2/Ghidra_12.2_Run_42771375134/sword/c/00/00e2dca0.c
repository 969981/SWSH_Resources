/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2dca0; name: FUN_00e2dca0
 */


void FUN_00e2dca0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  
LAB_00e2dcec:
  puVar9 = param_2 + -1;
LAB_00e2dd14:
  puVar13 = param_1;
  lVar10 = (long)param_2 - (long)puVar13;
  uVar6 = lVar10 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    lVar10 = *param_3;
    plVar15 = (long *)*puVar13;
    fVar19 = (float)(**(code **)(*(long *)param_2[-1] + 0xb0))((long *)param_2[-1],lVar10 + 0x70);
    fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
    if (fVar20 <= fVar19) {
      return;
    }
    uVar7 = *puVar13;
    *puVar13 = param_2[-1];
    param_2[-1] = uVar7;
    return;
  case 3:
    FUN_00e2e390(puVar13,puVar13 + 1,puVar9,param_3);
    return;
  case 4:
    FUN_00e2e550(puVar13,puVar13 + 1,puVar13 + 2,puVar9,param_3);
    return;
  case 5:
    FUN_00e2e6b0(puVar13,puVar13 + 1,puVar13 + 2,puVar13 + 3,puVar9,param_3);
    return;
  }
  if (0xf7 < lVar10) {
    uVar4 = uVar6;
    if ((long)uVar6 < 0) {
      uVar4 = uVar6 + 1;
    }
    puVar12 = (undefined8 *)((long)puVar13 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      iVar3 = FUN_00e2e390(puVar13,puVar12,puVar9,param_3);
    }
    else {
      uVar4 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar4 = uVar6;
      }
      lVar10 = (uVar4 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_00e2e6b0(puVar13,(long)puVar13 + lVar10,puVar12,(long)puVar12 + lVar10,puVar9,
                           param_3);
    }
    lVar10 = *param_3;
    plVar15 = (long *)*puVar12;
    fVar19 = (float)(**(code **)(*(long *)*puVar13 + 0xb0))((long *)*puVar13,lVar10 + 0x70);
    fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
    if (fVar20 <= fVar19) {
      puVar16 = param_2 + -2;
LAB_00e2ddfc:
      puVar18 = puVar16;
      if (puVar13 != puVar18) goto code_r0x00e2de04;
      puVar12 = puVar13 + 1;
      lVar10 = *param_3;
      plVar15 = (long *)*puVar9;
      fVar19 = (float)(**(code **)(*(long *)*puVar13 + 0xb0))((long *)*puVar13,lVar10 + 0x70);
      fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
      if (fVar20 <= fVar19) {
        if (puVar12 == puVar9) {
          return;
        }
        puVar12 = puVar13 + 2;
        while( true ) {
          lVar10 = *param_3;
          plVar15 = (long *)puVar12[-1];
          fVar19 = (float)(**(code **)(*(long *)*puVar13 + 0xb0))((long *)*puVar13,lVar10 + 0x70);
          fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
          if (fVar19 < fVar20) break;
          puVar12 = puVar12 + 1;
          if (param_2 == puVar12) {
            return;
          }
        }
        uVar7 = puVar12[-1];
        puVar12[-1] = *puVar9;
        *puVar9 = uVar7;
      }
      if (puVar12 == puVar9) {
        return;
      }
      while( true ) {
        param_1 = puVar12 + -1;
        do {
          puVar12 = param_1;
          param_1 = puVar12 + 1;
          plVar15 = (long *)*param_1;
          lVar10 = *param_3;
          fVar19 = (float)(**(code **)(*(long *)*puVar13 + 0xb0))((long *)*puVar13,lVar10 + 0x70);
          fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
        } while (fVar20 <= fVar19);
        puVar12 = puVar12 + 2;
        do {
          puVar9 = puVar9 + -1;
          plVar15 = (long *)*puVar9;
          lVar10 = *param_3;
          fVar19 = (float)(**(code **)(*(long *)*puVar13 + 0xb0))((long *)*puVar13,lVar10 + 0x70);
          fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
        } while (fVar19 < fVar20);
        if (puVar9 <= param_1) break;
        uVar7 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar7;
      }
      uVar5 = 4;
      goto LAB_00e2e12c;
    }
    puVar16 = puVar13 + 1;
    puVar18 = puVar9;
    if (puVar16 < puVar9) goto LAB_00e2de84;
    goto LAB_00e2ddec;
  }
  FUN_00e2e390(puVar13,puVar13 + 1,puVar13 + 2,param_3);
  if (puVar13 + 3 == param_2) {
    return;
  }
  lVar10 = 0;
  puVar9 = puVar13 + 3;
  puVar12 = puVar13 + 2;
LAB_00e2e1f8:
  puVar16 = puVar9;
  plVar15 = (long *)*puVar12;
  lVar8 = *param_3;
  fVar19 = (float)(**(code **)(*(long *)*puVar16 + 0xb0))((long *)*puVar16,lVar8 + 0x70);
  fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar8 + 0x70);
  if (fVar19 < fVar20) {
    plVar15 = (long *)*puVar16;
    lVar8 = lVar10;
    do {
      lVar11 = lVar8;
      *(undefined8 *)((long)puVar13 + lVar11 + 0x18) =
           *(undefined8 *)((long)puVar13 + lVar11 + 0x10);
      if (lVar11 == -0x10) {
        puVar9 = puVar13;
        goto LAB_00e2e2ac;
      }
      plVar14 = *(long **)((long)puVar13 + lVar11 + 8);
      lVar8 = *param_3;
      fVar19 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar8 + 0x70);
      fVar20 = (float)(**(code **)(*plVar14 + 0xb0))(plVar14,lVar8 + 0x70);
      lVar8 = lVar11 + -8;
    } while (fVar19 < fVar20);
    puVar9 = (undefined8 *)((long)puVar13 + lVar11 + 0x10);
LAB_00e2e2ac:
    *puVar9 = plVar15;
  }
  lVar10 = lVar10 + 8;
  puVar9 = puVar16 + 1;
  puVar12 = puVar16;
  if (puVar16 + 1 == param_2) {
    return;
  }
  goto LAB_00e2e1f8;
code_r0x00e2de04:
  lVar10 = *param_3;
  plVar15 = (long *)*puVar12;
  fVar19 = (float)(**(code **)(*(long *)*puVar18 + 0xb0))((long *)*puVar18,lVar10 + 0x70);
  fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
  puVar16 = puVar18 + -1;
  if (fVar19 < fVar20) goto code_r0x00e2de44;
  goto LAB_00e2ddfc;
code_r0x00e2de44:
  uVar7 = *puVar13;
  iVar3 = iVar3 + 1;
  *puVar13 = *puVar18;
  *puVar18 = uVar7;
  puVar16 = puVar13 + 1;
  if (puVar16 < puVar18) {
LAB_00e2de84:
    while( true ) {
      puVar17 = puVar16 + -1;
      do {
        puVar16 = puVar17;
        puVar17 = puVar16 + 1;
        lVar10 = *param_3;
        plVar15 = (long *)*puVar12;
        fVar19 = (float)(**(code **)(*(long *)*puVar17 + 0xb0))((long *)*puVar17,lVar10 + 0x70);
        fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
      } while (fVar19 < fVar20);
      puVar16 = puVar16 + 2;
      do {
        puVar18 = puVar18 + -1;
        lVar10 = *param_3;
        plVar15 = (long *)*puVar12;
        fVar19 = (float)(**(code **)(*(long *)*puVar18 + 0xb0))((long *)*puVar18,lVar10 + 0x70);
        fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
      } while (fVar20 <= fVar19);
      if (puVar18 < puVar17) break;
      uVar7 = *puVar17;
      iVar3 = iVar3 + 1;
      puVar1 = puVar18;
      if (puVar12 != puVar17) {
        puVar1 = puVar12;
      }
      *puVar17 = *puVar18;
      *puVar18 = uVar7;
      puVar12 = puVar1;
    }
    if (puVar17 == puVar12) goto LAB_00e2df78;
  }
  else {
LAB_00e2ddec:
    puVar17 = puVar13 + 1;
    if (puVar17 == puVar12) goto LAB_00e2df78;
  }
  lVar10 = *param_3;
  plVar15 = (long *)*puVar17;
  fVar19 = (float)(**(code **)(*(long *)*puVar12 + 0xb0))((long *)*puVar12,lVar10 + 0x70);
  fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,lVar10 + 0x70);
  if (fVar19 < fVar20) {
    uVar7 = *puVar17;
    iVar3 = iVar3 + 1;
    *puVar17 = *puVar12;
    *puVar12 = uVar7;
  }
LAB_00e2df78:
  if (iVar3 == 0) {
    uVar6 = FUN_00e2e880(puVar13,puVar17,param_3);
    uVar4 = FUN_00e2e880(puVar17 + 1,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_00e2e144;
    param_1 = puVar17 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00e2dd14;
  }
  if ((long)param_2 - (long)puVar17 <= (long)puVar17 - (long)puVar13) {
    FUN_00e2dca0(puVar17 + 1,param_2,param_3);
    param_2 = puVar17;
    param_1 = puVar13;
    goto LAB_00e2dcec;
  }
  FUN_00e2dca0(puVar13,puVar17,param_3);
  param_1 = puVar17 + 1;
  goto LAB_00e2dd14;
LAB_00e2e144:
  bVar2 = (uVar6 & 1) == 0;
  if (bVar2) {
    param_2 = puVar17;
  }
  uVar5 = 1;
  if (bVar2) {
    uVar5 = 2;
  }
  param_1 = puVar13;
  if (4 < uVar5) {
    return;
  }
LAB_00e2e12c:
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_00e2dcec;
}


