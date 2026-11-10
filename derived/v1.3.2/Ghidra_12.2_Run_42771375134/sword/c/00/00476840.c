/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00476840; name: FUN_00476840
 */


void FUN_00476840(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  pfVar13 = (float *)(param_1 + 0x18);
  fVar17 = *pfVar13;
  *(float *)(param_3 + 0x10) = fVar17;
  fVar15 = *pfVar13;
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x2c);
  uVar12 = *(uint *)(param_1 + 4) & 0xfffffffc;
  uVar5 = *(uint *)(param_1 + 0x1c);
  uVar6 = uVar5 >> 1;
  uVar11 = *(int *)(param_1 + 8) + uVar12;
  uVar10 = *(int *)(param_1 + 0xc) - param_2;
  if (0.0 < fVar15) {
    fVar16 = *(float *)(param_1 + 0x20);
    if ((fVar16 <= fVar15) || (fVar16 <= 0.0)) {
      iVar14 = uVar6 + (int)(((fVar15 - fVar16) / (1.0 - fVar16)) * (float)uVar6);
    }
    else {
      iVar14 = (int)((fVar15 / fVar16) * (float)uVar6);
    }
    uVar10 = iVar14 + uVar10;
    uVar11 = iVar14 + uVar11;
  }
  if (uVar10 != 0) {
    pfVar13 = (float *)(param_1 + 0x10);
  }
  fVar15 = *pfVar13;
  uVar7 = uVar12 - uVar10;
  if (uVar10 <= uVar12 && uVar7 != 0) {
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (param_2 <= uVar7) {
      uVar7 = param_2;
    }
    uVar10 = uVar7 + uVar10;
    param_2 = param_2 - uVar7;
    *(float *)(param_3 + 0x10) = fVar17;
  }
  uVar7 = uVar6 + uVar12;
  if (uVar11 <= uVar6 + uVar12) {
    uVar7 = uVar11;
  }
  uVar8 = uVar7 - uVar10;
  if (uVar10 <= uVar7 && uVar8 != 0) {
    if (uVar6 == 0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = *(float *)(param_1 + 0x20) / (float)uVar6;
    }
    uVar1 = param_2;
    if (uVar8 <= param_2) {
      uVar1 = uVar8;
    }
    uVar10 = uVar1 + uVar10;
    fVar17 = fVar15 + (float)uVar1 * fVar17;
    param_2 = param_2 - uVar1;
    *(float *)(param_3 + 0x10) = fVar17;
    fVar15 = fVar17;
  }
  uVar5 = (uVar5 & 0xfffffffe) + uVar12;
  if (uVar11 <= uVar5) {
    uVar5 = uVar11;
  }
  uVar8 = uVar5 - uVar10;
  if (uVar10 <= uVar5 && uVar8 != 0) {
    if (uVar6 == 0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = (1.0 - *(float *)(param_1 + 0x20)) / (float)uVar6;
    }
    uVar1 = param_2;
    if (uVar8 <= param_2) {
      uVar1 = uVar8;
    }
    uVar10 = uVar1 + uVar10;
    fVar17 = fVar15 + (float)uVar1 * fVar17;
    param_2 = param_2 - uVar1;
    *(float *)(param_3 + 0x10) = fVar17;
    fVar15 = fVar17;
  }
  uVar8 = uVar5 + uVar3;
  uVar1 = uVar8;
  if (uVar11 <= uVar8) {
    uVar1 = uVar11;
  }
  uVar9 = uVar1 - uVar10;
  if (uVar10 <= uVar1 && uVar9 != 0) {
    if (uVar3 == 0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = (*(float *)(param_1 + 0x24) + -1.0) / (float)uVar3;
    }
    uVar2 = param_2;
    if (uVar9 <= param_2) {
      uVar2 = uVar9;
    }
    uVar10 = uVar2 + uVar10;
    fVar17 = fVar15 + (float)uVar2 * fVar17;
    param_2 = param_2 - uVar2;
    *(float *)(param_3 + 0x10) = fVar17;
    fVar15 = fVar17;
  }
  fVar16 = *(float *)(param_1 + 0x24);
  uVar9 = uVar8 - uVar11;
  if (uVar8 < uVar11 || uVar9 == 0) {
    uVar12 = 0;
  }
  else {
    if (uVar6 == 0) {
      fVar19 = 1.0;
      fVar18 = 1.0 - fVar16;
    }
    else {
      fVar19 = (*(float *)(param_1 + 0x20) / (float)uVar6) * (float)(uVar7 - uVar12) +
               (float)(uVar5 - uVar7) * ((1.0 - *(float *)(param_1 + 0x20)) / (float)uVar6);
      fVar18 = fVar19 - fVar16;
    }
    if (fVar18 <= 0.0) {
      uVar12 = 0;
      fVar16 = fVar19;
    }
    else {
      fVar19 = 0.0;
      if (uVar3 == 0) {
        fVar20 = 0.0;
        uVar12 = 0;
      }
      else {
        fVar20 = (fVar16 + -1.0) / (float)uVar3;
        if (fVar20 == 0.0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (uint)(-fVar18 / fVar20);
        }
      }
      if (uVar12 <= uVar9) {
        uVar9 = uVar12;
      }
      uVar12 = uVar4;
      if (uVar9 <= uVar4) {
        uVar12 = uVar9;
      }
      uVar12 = uVar12 >> 1;
      if (uVar4 != 0) {
        fVar19 = -fVar16 / (float)uVar4;
      }
      fVar19 = fVar19 * (float)uVar12;
      fVar16 = fVar16 - fVar19;
      uVar3 = (uVar12 + uVar1) - uVar10;
      if (uVar10 <= uVar12 + uVar1 && uVar3 != 0) {
        if (uVar12 == 0) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = (fVar19 + (fVar20 * ((float)uVar5 - (float)uVar1) - fVar18)) / (float)uVar12;
        }
        uVar5 = param_2;
        if (uVar3 <= param_2) {
          uVar5 = uVar3;
        }
        uVar10 = uVar5 + uVar10;
        fVar17 = fVar15 + (float)uVar5 * fVar17;
        param_2 = param_2 - uVar5;
        *(float *)(param_3 + 0x10) = fVar17;
        fVar15 = fVar17;
      }
    }
  }
  uVar3 = param_2;
  if ((int)(uVar11 - uVar10) <= (int)param_2) {
    uVar3 = uVar11 - uVar10;
  }
  if (0 < (int)uVar3) {
    fVar15 = *(float *)(param_1 + 0x24);
    if (fVar17 <= fVar15) {
      fVar17 = fVar15;
    }
    uVar10 = uVar3 + uVar10;
    param_2 = param_2 - uVar3;
    *(float *)(param_3 + 0x10) = fVar17;
  }
  uVar4 = uVar4 - uVar12;
  uVar11 = uVar4 + uVar11;
  uVar12 = uVar11 - uVar10;
  if (uVar10 <= uVar11 && uVar12 != 0) {
    if (uVar4 == 0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = -fVar16 / (float)uVar4;
    }
    uVar3 = param_2;
    if (uVar12 <= param_2) {
      uVar3 = uVar12;
    }
    uVar10 = uVar3 + uVar10;
    fVar17 = fVar15 + (float)uVar3 * fVar17;
    param_2 = param_2 - uVar3;
    *(float *)(param_3 + 0x10) = fVar17;
    fVar15 = fVar17;
  }
  if ((param_2 != 0) && (uVar11 <= uVar10)) {
    fVar15 = 0.0;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    *(undefined4 *)(param_3 + 8) = 3;
    *(float *)(param_3 + 0x10) = fVar17;
  }
  *(float *)(param_3 + 0xc) = fVar15;
  return;
}


