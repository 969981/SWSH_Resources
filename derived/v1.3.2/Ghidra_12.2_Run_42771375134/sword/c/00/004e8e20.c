/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e8e20; name: FUN_004e8e20
 */


void FUN_004e8e20(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long local_60;
  undefined4 local_58;
  float local_54;
  long local_50;
  undefined4 local_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x5c) != *(int *)(param_2 + 0x90)) {
    lVar9 = -4;
    if (*(long *)(param_1 + 0x38) != -1) {
      lVar9 = *(long *)(param_1 + 0x38);
    }
    puVar6 = (undefined8 *)FUN_004e7e80(lVar9,*(undefined8 *)(*(long *)(param_2 + 8) + 0x48));
    puVar4 = PTR_DAT_02712d20;
    if (puVar6 != (undefined8 *)0x0) {
      if (*(float *)(param_1 + 0x60) <= 0.0) {
        uVar7 = 0;
      }
      else {
        local_50 = -4;
        if (*(long *)(param_1 + 0x38) != -1) {
          local_50 = *(long *)(param_1 + 0x38);
        }
        local_48 = *(undefined4 *)(param_1 + 0x48);
        local_44 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x60);
        uVar7 = 1;
      }
      FUN_00498930(*(undefined8 *)PTR_DAT_02712d20,puVar6,&local_50,uVar7);
      fVar18 = (*(float *)(param_2 + 0x58) - *(float *)(param_2 + 0x58) * *(float *)(param_2 + 0x60)
               ) + *(float *)(param_2 + 0x40) * *(float *)(param_2 + 0x60);
      fVar17 = *(float *)(param_1 + 0x54);
      if (*(float *)(param_1 + 0x54) <= fVar18) {
        fVar17 = fVar18;
      }
      if (0.0 < *(float *)(param_1 + 0x60)) {
        lVar9 = -4;
        if (*(long *)(param_1 + 0x38) != -1) {
          lVar9 = *(long *)(param_1 + 0x38);
        }
        FUN_00498cc0(0,fVar17,*(undefined8 *)puVar4,puVar6,lVar9);
      }
      FUN_00498cc0(0,fVar17,*(undefined8 *)puVar4,puVar6,
                   *(undefined8 *)(*(long *)(param_2 + 8) + 0x48));
      iVar8 = *(int *)(puVar6 + 10);
      *(int *)(puVar6 + 10) = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        uVar2 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)*puVar6)(puVar6);
        FUN_00404870(uVar2,puVar6);
      }
    }
    return;
  }
  lVar10 = *(long *)(param_2 + 0x30);
  lVar9 = *(long *)(param_1 + 0x38);
  if (lVar10 != lVar9) {
    if (*(uint *)(param_1 + 0x30) == 0) {
      return;
    }
    plVar11 = *(long **)(param_1 + 0x28);
    plVar1 = plVar11 + *(uint *)(param_1 + 0x30);
    lVar10 = 0;
    fVar17 = DAT_01d4c18c;
    do {
      lVar13 = *plVar11;
      if ((*(char *)(lVar13 + 0x98) != '\0') && (*(uint *)(lVar13 + 0x78) != 0)) {
        lVar16 = (ulong)*(uint *)(lVar13 + 0x78) * 0x110;
        fVar19 = *(float *)(lVar13 + 0x4c) - *(float *)(param_2 + 0x84);
        fVar18 = *(float *)(lVar13 + 0x48) - *(float *)(param_2 + 0x80);
        lVar14 = *(long *)(lVar13 + 0x70);
        fVar21 = *(float *)(lVar13 + 0x50) - *(float *)(param_2 + 0x88);
        lVar13 = lVar10;
        do {
          fVar20 = *(float *)(lVar14 + 0x104) +
                   SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar21 * fVar21);
          bVar5 = fVar17 <= fVar20;
          fVar17 = (float)NEON_fminnm(fVar20,fVar17);
          lVar10 = lVar14;
          if (bVar5) {
            lVar10 = lVar13;
          }
          lVar14 = lVar14 + 0x110;
          lVar16 = lVar16 + -0x110;
          lVar13 = lVar10;
        } while (lVar16 != 0);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
    if (lVar10 == 0) {
      return;
    }
    lVar13 = -4;
    if (lVar9 != -1) {
      lVar13 = lVar9;
    }
    puVar6 = (undefined8 *)FUN_004e7e80(lVar13,*(undefined8 *)(*(long *)(param_2 + 8) + 0x48));
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    iVar8 = *(int *)(param_2 + 0x78) + -1;
    if (-1 < iVar8) {
      lVar9 = *(long *)(param_2 + 0x70);
      iVar12 = 0;
      do {
        while( true ) {
          iVar3 = iVar8 - iVar12;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar12 + (iVar3 >> 1);
          puVar15 = *(undefined8 **)(lVar9 + (long)iVar3 * 8);
          if (puVar6 > puVar15 || puVar15 == puVar6) break;
          iVar8 = iVar3 + -1;
          if (iVar8 < iVar12) goto LAB_004e90fc;
        }
        if (puVar6 <= puVar15) {
          if (lVar9 + (long)iVar3 * 8 != 0) goto LAB_004e9114;
          break;
        }
        iVar12 = iVar3 + 1;
      } while (iVar12 <= iVar8);
    }
LAB_004e90fc:
    lVar9 = FUN_004e9fe0((long *)(param_2 + 0x70),puVar6);
    if (lVar9 != 0) {
      *(int *)(puVar6 + 10) = *(int *)(puVar6 + 10) + 1;
    }
LAB_004e9114:
    lVar9 = lVar10 + (ulong)(*(int *)(lVar10 + 0x100) - 1) * 0x18;
    local_58 = *(undefined4 *)(lVar9 + 0x48);
    local_54 = *(float *)(lVar9 + 0x4c);
    local_60 = -4;
    if (*(long *)(lVar9 + 0x40) != -1) {
      local_60 = *(long *)(lVar9 + 0x40);
    }
    if ((*(long *)(param_2 + 0x28) != -1) &&
       (*(long *)(param_2 + 0x48) == *(long *)(param_1 + 0x38))) {
      local_54 = (*(float *)(param_2 + 0x60) + -0.5) * (local_54 + local_54);
    }
    if (*(float *)(param_1 + 0x60) <= 0.0) {
      uVar7 = 1;
    }
    else {
      local_50 = -4;
      if (*(long *)(param_1 + 0x38) != -1) {
        local_50 = *(long *)(param_1 + 0x38);
      }
      local_48 = *(undefined4 *)(param_1 + 0x48);
      local_44 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x60);
      uVar7 = 2;
    }
    FUN_00498930(*(undefined8 *)PTR_DAT_02712d20,puVar6,&local_60,uVar7);
    if ((*(long *)(param_2 + 0x28) == -1) ||
       (*(long *)(param_2 + 0x48) != *(long *)(param_1 + 0x38))) {
      FUN_004e9750(param_1,puVar6,lVar10,param_2,param_3);
      iVar8 = *(int *)(puVar6 + 10) + -1;
      *(int *)(puVar6 + 10) = iVar8;
    }
    else {
      FUN_004e93e0(param_1,puVar6,param_2,param_3);
      iVar8 = *(int *)(puVar6 + 10) + -1;
      *(int *)(puVar6 + 10) = iVar8;
    }
    if (iVar8 != 0) {
      return;
    }
    uVar2 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*puVar6)(puVar6);
    goto LAB_004e9260;
  }
  lVar9 = -4;
  if (lVar10 != -1) {
    lVar9 = lVar10;
  }
  puVar6 = (undefined8 *)FUN_004e7e80(lVar9,*(undefined8 *)(*(long *)(param_2 + 8) + 0x48));
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  iVar8 = *(int *)(param_2 + 0x78) + -1;
  if (-1 < iVar8) {
    lVar9 = *(long *)(param_2 + 0x70);
    iVar12 = 0;
    do {
      while( true ) {
        iVar3 = iVar8 - iVar12;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar12 + (iVar3 >> 1);
        puVar15 = *(undefined8 **)(lVar9 + (long)iVar3 * 8);
        if (puVar6 > puVar15 || puVar15 == puVar6) break;
        iVar8 = iVar3 + -1;
        if (iVar8 < iVar12) goto LAB_004e901c;
      }
      if (puVar6 <= puVar15) {
        if (lVar9 + (long)iVar3 * 8 != 0) goto LAB_004e9034;
        break;
      }
      iVar12 = iVar3 + 1;
    } while (iVar12 <= iVar8);
  }
LAB_004e901c:
  lVar9 = FUN_004e9fe0((long *)(param_2 + 0x70),puVar6);
  if (lVar9 != 0) {
    *(int *)(puVar6 + 10) = *(int *)(puVar6 + 10) + 1;
  }
LAB_004e9034:
  if (*(long *)(param_2 + 0x28) == -1) {
    FUN_004e99e0(param_1,puVar6,param_2,param_3);
    fVar17 = *(float *)(param_1 + 0x60);
    if (0.0 < fVar17) goto LAB_004e9060;
LAB_004e90a0:
    uVar7 = 0;
  }
  else {
    FUN_004e93e0();
    fVar17 = *(float *)(param_1 + 0x60);
    if (fVar17 <= 0.0) goto LAB_004e90a0;
LAB_004e9060:
    local_60 = -4;
    if (*(long *)(param_1 + 0x38) != -1) {
      local_60 = *(long *)(param_1 + 0x38);
    }
    local_58 = *(undefined4 *)(param_1 + 0x48);
    local_54 = *(float *)(param_1 + 0x4c) * fVar17;
    uVar7 = 1;
  }
  FUN_00498930(*(undefined8 *)PTR_DAT_02712d20,puVar6,&local_60,uVar7);
  iVar8 = *(int *)(puVar6 + 10);
  *(int *)(puVar6 + 10) = iVar8 + -1;
  if (iVar8 + -1 != 0) {
    return;
  }
  uVar2 = *(undefined4 *)PTR_DAT_02712a90;
  (**(code **)*puVar6)(puVar6);
LAB_004e9260:
  FUN_00404870(uVar2,puVar6);
  return;
}


