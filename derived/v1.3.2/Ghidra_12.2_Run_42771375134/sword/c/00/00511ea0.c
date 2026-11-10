/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00511ea0; name: FUN_00511ea0
 */


int FUN_00511ea0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,uint param_8,uint param_9,long param_10,uint param_11,uint param_12,
                uint param_13)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_28 [10];
  
  uVar1 = 5;
  if (-1 < (int)param_11) {
    uVar1 = param_11;
  }
  fVar12 = param_1 * param_5;
  if (param_5 <= 0.0) {
    fVar12 = param_3;
  }
  fVar13 = param_2 * param_6;
  if (param_6 <= 0.0) {
    fVar13 = param_4;
  }
  if ((param_12 & 1) == 0) {
    uVar6 = (uint)((param_1 * 0.5) / fVar12);
    uVar7 = (uint)((param_2 * 0.5) / fVar13);
    if ((8.0 <= fVar12) && (1 < (int)uVar6)) {
      uVar2 = uVar6 - 1;
      fVar15 = param_1 - (float)(int)(uVar2 * 2);
      fVar14 = fVar12 * (float)(int)uVar2 + fVar12 * (float)(int)uVar2;
      bVar3 = true;
      bVar4 = false;
      if (fVar14 < param_1) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar14) && !NAN(fVar15)) {
          bVar3 = fVar14 < fVar15;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        uVar6 = uVar2;
      }
    }
    if (8.0 <= fVar13) {
      uVar2 = uVar7 - 1;
      if (uVar2 != 0 && 0 < (int)uVar7) {
        fVar14 = fVar13 * (float)(int)uVar2 + fVar13 * (float)(int)uVar2;
        fVar13 = param_2 - (float)(int)(uVar2 * 2);
        bVar3 = true;
        bVar4 = false;
        if (fVar14 < param_2) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar14) && !NAN(fVar13)) {
            bVar3 = fVar14 < fVar13;
            bVar4 = false;
          }
        }
        if (bVar3 == bVar4) {
          uVar7 = uVar2;
        }
      }
    }
  }
  else {
    uVar6 = (uint)(param_1 / fVar12);
    uVar7 = (uint)(param_2 / fVar13);
    if ((8.0 <= fVar12) && (1 < (int)uVar6)) {
      fVar14 = (float)(int)(uVar6 - 1);
      fVar15 = fVar12 * fVar14;
      bVar3 = false;
      if ((param_1 - fVar14 <= fVar15) && (bVar3 = false, !NAN(fVar15) && !NAN(param_1))) {
        bVar3 = fVar15 < param_1;
      }
      if (bVar3) {
        uVar6 = uVar6 - 1;
      }
    }
    if (8.0 <= fVar13) {
      uVar2 = uVar7 - 1;
      if (uVar2 != 0 && 0 < (int)uVar7) {
        fVar13 = fVar13 * (float)(int)uVar2;
        bVar3 = false;
        if ((param_2 - (float)(int)uVar2 <= fVar13) &&
           (bVar3 = false, !NAN(fVar13) && !NAN(param_2))) {
          bVar3 = fVar13 < param_2;
        }
        if (bVar3) {
          uVar7 = uVar2;
        }
      }
    }
  }
  fVar13 = 1.0 / (float)param_8;
  if ((int)uVar1 <= (int)uVar6) {
    uVar6 = uVar1;
  }
  if ((int)uVar1 <= (int)uVar7) {
    uVar7 = uVar1;
  }
  fVar14 = 0.5;
  if ((param_12 & 1) == 0) {
    fVar14 = 1.0;
  }
  if (0 < (int)uVar6) {
    fVar16 = (float)(int)uVar6;
    fVar15 = fVar16 + -1.0;
    fVar16 = (fVar16 + fVar16) / fVar16;
    lVar8 = 0;
    if (uVar6 != 1) {
      lVar9 = lVar8;
      do {
        lVar8 = lVar9 + 2;
        local_28[lVar9 + 5] = fVar13 * fVar14 * (fVar16 * (float)(int)lVar9 - fVar15);
        local_28[lVar9 + 6] = fVar13 * fVar14 * (fVar16 * (float)((int)lVar9 + 1) - fVar15);
        lVar9 = lVar8;
      } while ((ulong)uVar6 - ((ulong)uVar6 & 1) != lVar8);
    }
    if ((uVar6 & 1) != 0) {
      local_28[lVar8 + 5] = fVar13 * fVar14 * (fVar16 * (float)(int)lVar8 - fVar15);
    }
  }
  fVar15 = 1.0 / (float)param_9;
  if (0 < (int)uVar7) {
    fVar17 = (float)(int)uVar7;
    fVar16 = fVar17 + -1.0;
    fVar17 = (fVar17 + fVar17) / fVar17;
    lVar8 = 0;
    if (uVar7 != 1) {
      lVar9 = lVar8;
      do {
        lVar8 = lVar9 + 2;
        local_28[lVar9] = fVar15 * fVar14 * (fVar17 * (float)(int)lVar9 - fVar16);
        local_28[lVar9 + 1] = fVar15 * fVar14 * (fVar17 * (float)((int)lVar9 + 1) - fVar16);
        lVar9 = lVar8;
      } while ((ulong)uVar7 - ((ulong)uVar7 & 1) != lVar8);
    }
    if ((uVar7 & 1) != 0) {
      local_28[lVar8] = fVar15 * fVar14 * (fVar17 * (float)(int)lVar8 - fVar16);
    }
  }
  if ((((param_7 <= 0.0) || (uVar7 != 1)) || (uVar6 != 1)) || ((param_12 & 1) != 0)) {
    if ((int)param_13 < 2) {
      param_13 = 1;
    }
    if ((int)uVar7 < 1) {
      return 0;
    }
    if ((int)uVar6 < 1) {
      return 0;
    }
  }
  else {
    if (NAN(fVar12) || NAN(param_1)) {
      uVar6 = 1;
    }
    else {
      local_28[5] = fVar13 * -param_7;
      local_28[6] = fVar13 * param_7;
      uVar6 = 2;
      local_28[0] = fVar15 * -param_7;
      local_28[1] = fVar15 * param_7;
    }
    if ((int)param_13 < 2) {
      param_13 = 1;
    }
    uVar7 = uVar6;
  }
  lVar8 = 0;
  iVar5 = 0;
  iVar10 = -1;
  do {
    fVar12 = local_28[lVar8];
    lVar9 = param_10 + 0x1c + (long)iVar10 * 0x10;
    lVar11 = 0;
    do {
      fVar13 = local_28[lVar11 + 5];
      lVar11 = lVar11 + (ulong)param_13;
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 1;
      *(undefined8 *)(lVar9 + -4) = 0;
      *(float *)(lVar9 + -0xc) = fVar13;
      *(float *)(lVar9 + -8) = fVar12;
      lVar9 = lVar9 + 0x10;
    } while (lVar11 < (int)uVar6);
    lVar8 = lVar8 + (ulong)param_13;
  } while (lVar8 < (int)uVar7);
  return iVar5;
}


