/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b8c00; name: FUN_005b8c00
 */


/* WARNING: Removing unreachable block (ram,0x005b901c) */

uint FUN_005b8c00(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar8 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar8;
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar6 = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x40);
    if (*(float *)(lVar13 + 0x74) < 0.0) {
      if (*(int *)(lVar13 + 0x60) - 3U < 2) {
        lVar15 = (long)(*(int *)(lVar13 + 0x3c) + -1);
        do {
          plVar7 = *(long **)(lVar13 + lVar15 * 8 + 0x40);
          uVar6 = (**(code **)(*plVar7 + 0x58))(plVar7,0);
          if (uVar6 != 0) goto LAB_005b8f88;
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(lVar13 + 0x3c));
      }
      else if (*(int *)(lVar13 + 0x60) == 5) {
        uVar6 = *(uint *)(PTR_DAT_02713a88 + 0x10);
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        if (*(uint *)(lVar13 + 0x94) < uVar6 * *(int *)(lVar13 + 0x98)) {
          *(uint *)(lVar13 + 0x94) = *(uint *)(lVar13 + 0x94) + 1;
          uVar6 = 1;
          goto LAB_005b8f88;
        }
      }
      uVar3 = *(uint *)(*(long *)(lVar13 + 0x20) + 0x28);
      uVar6 = *(uint *)(PTR_DAT_02713a88 + 0x10);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar3 / uVar6;
      }
      if (uVar3 - uVar5 * uVar6 != *(int *)(lVar13 + 0x9c)) {
        uVar6 = 1;
        goto LAB_005b8f88;
      }
      iVar8 = *(int *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(param_1 + 0x50) % 0x11;
    lVar13 = param_1 + (long)iVar4 * 4;
    *(int *)(lVar13 + 0x74) = iVar8;
    lVar15 = *(long *)(param_1 + 0x40);
    lVar14 = (long)iVar4;
    FUN_005b8500(lVar15,0);
    *(undefined4 *)(lVar13 + 0x1c8) = *(undefined4 *)(lVar15 + 0x74);
    lVar12 = *(long *)(param_1 + 0x40);
    FUN_005b8500(lVar12,0);
    uVar9 = *(undefined8 *)(lVar12 + 0x6c);
    lVar15 = param_1 + (long)iVar4 * 0x10;
    pfVar16 = (float *)(lVar15 + 0xb8);
    *(undefined8 *)pfVar16 = *(undefined8 *)(lVar12 + 100);
    *(undefined8 *)(lVar15 + 0xc0) = uVar9;
    if (*(int *)(param_1 + 0x2c) == 1) {
      lVar12 = param_1 + lVar14 * 0x10;
      lVar15 = param_1 + lVar14 * 4;
      fVar19 = *(float *)(lVar15 + 0x4b4);
      fVar19 = -(fVar19 * *(float *)(lVar15 + 0x470)) /
               ((fVar19 - *(float *)(lVar15 + 0x470)) *
                (*(float *)(lVar12 + 0xbc) * DAT_01d4c154 * DAT_01d4c32c +
                *(float *)(lVar12 + 0xc0) * DAT_01d4c154 * DAT_01d4c5c4) - fVar19);
      *(float *)(lVar15 + 0x20c) = fVar19;
    }
    else {
      lVar15 = param_1 + lVar14 * 4;
      fVar19 = *(float *)(lVar13 + 0x1c8);
      fVar17 = *(float *)(lVar15 + 1000);
      if (*(int *)(param_1 + 0x500) < 0) {
        fVar18 = *(float *)(lVar15 + 0x42c) * DAT_01d4c6b8;
        fVar19 = expf(fVar19 * 8.0);
        fVar19 = fVar19 / fVar18;
      }
      else {
        fVar19 = (float)FUN_00562ce0(fVar19,*(float *)(lVar15 + 0x42c),0x3f800000);
      }
      fVar19 = fVar19 / fVar17;
      *(float *)(lVar15 + 0x20c) = fVar19;
    }
    uVar6 = (*(int *)(param_1 + 0x50) + 1) % 0x11;
    iVar8 = *(int *)(param_1 + 0x2c);
    uVar10 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
    fVar17 = *(float *)(param_1 + 0x360 + uVar10);
    fVar23 = *(float *)(param_1 + 0x4fc);
    *(float *)(param_1 + 0x360 + lVar14 * 4) =
         fVar17 + fVar23 * (*(float *)(lVar13 + 0x1c8) - fVar17);
    fVar17 = DAT_01d4c104;
    fVar18 = *(float *)(param_1 + uVar10 + 0x3a4) + DAT_01d4c104;
    if (iVar8 == 1) {
      fVar18 = 1.0 / fVar18;
      fVar19 = 1.0 / (fVar18 + fVar23 * (1.0 / (fVar19 + DAT_01d4c104) - fVar18));
    }
    else {
      fVar19 = logf(fVar18);
      fVar17 = logf(*(float *)(lVar15 + 0x20c) + fVar17);
      fVar19 = expf(fVar19 + fVar23 * (fVar17 - fVar19));
    }
    *(float *)(param_1 + lVar14 * 4 + 0x3a4) = fVar19 + DAT_01d4c134;
    pfVar1 = (float *)(param_1 + 0x250 + (long)(int)uVar6 * 0x10);
    fVar19 = pfVar1[1];
    fVar17 = pfVar1[2];
    fVar18 = pfVar1[3];
    lVar13 = param_1 + lVar14 * 0x10;
    fVar20 = *(float *)(lVar13 + 0xbc);
    fVar21 = *(float *)(lVar13 + 0xc0);
    fVar22 = *(float *)(lVar13 + 0xc4);
    pfVar2 = (float *)(param_1 + 0x250 + lVar14 * 0x10);
    *pfVar2 = *pfVar1 + fVar23 * (*pfVar16 - *pfVar1);
    pfVar2[1] = fVar19 + fVar23 * (fVar20 - fVar19);
    pfVar2[2] = fVar17 + fVar23 * (fVar21 - fVar17);
    pfVar2[3] = fVar18 + fVar23 * (fVar22 - fVar18);
    uVar6 = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar8 = 0x10;
    if (0 < *(int *)(param_1 + 0x50)) {
      iVar8 = *(int *)(param_1 + 0x50) + -1;
    }
    *(int *)(param_1 + 0x50) = iVar8;
  }
LAB_005b8f88:
  fVar19 = DAT_01d4c104;
  iVar4 = *(int *)(param_1 + 0x4f8);
  iVar8 = 0x10;
  if (-3 < iVar4) {
    iVar8 = iVar4 + 2;
  }
  iVar11 = 0x10;
  if (-2 < iVar4) {
    iVar11 = iVar4 + 1;
  }
  uVar3 = (iVar11 + *(int *)(param_1 + 0x50)) % 0x11;
  uVar10 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
  lVar13 = (long)(int)uVar3;
  iVar4 = (iVar8 + *(int *)(param_1 + 0x50)) % 0x11;
  lVar15 = (long)iVar4;
  pfVar16 = (float *)(param_1 + 0x360 + uVar10);
  iVar8 = *(int *)(param_1 + 0x2c);
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + uVar10 + 0x74));
  fVar18 = (float)*(int *)(param_1 + 0x58) / fVar18;
  fVar17 = 0.0;
  if (0.0 <= fVar18) {
    fVar17 = fVar18;
  }
  fVar18 = *(float *)(param_1 + 0x360 + (long)iVar4 * 4);
  if (iVar8 == 1) {
    fVar18 = logf(fVar18 + DAT_01d4c104);
    fVar23 = logf(*pfVar16 + fVar19);
    fVar23 = expf(fVar18 + fVar17 * (fVar23 - fVar18));
    fVar18 = DAT_01d4c134;
    *(float *)(param_1 + 0x60) = fVar23 + DAT_01d4c134;
    fVar23 = logf(*(float *)(param_1 + 0x3a4 + lVar15 * 4) + fVar19);
    fVar19 = logf(*(float *)(param_1 + 0x3a4 + lVar13 * 4) + fVar19);
    fVar19 = expf(fVar23 + fVar17 * (fVar19 - fVar23));
    iVar8 = *(int *)(param_1 + 0x2c);
    fVar19 = fVar19 + fVar18;
  }
  else {
    *(float *)(param_1 + 0x60) = fVar18 + fVar17 * (*pfVar16 - fVar18);
    fVar19 = *(float *)(param_1 + 0x3a4 + lVar15 * 4);
    fVar19 = fVar19 + fVar17 * (*(float *)(param_1 + 0x3a4 + lVar13 * 4) - fVar19);
  }
  pfVar16 = (float *)(param_1 + 0x250 + lVar13 * 0x10);
  pfVar1 = (float *)(param_1 + 0x250 + lVar15 * 0x10);
  *(float *)(param_1 + 0x5c) = fVar19;
  fVar19 = pfVar16[1];
  fVar18 = pfVar1[1];
  fVar23 = pfVar16[2];
  fVar20 = pfVar16[3];
  fVar21 = pfVar1[2];
  fVar22 = pfVar1[3];
  *(float *)(param_1 + 100) = *pfVar1 + fVar17 * (*pfVar16 - *pfVar1);
  *(float *)(param_1 + 0x68) = fVar18 + fVar17 * (fVar19 - fVar18);
  *(float *)(param_1 + 0x6c) = fVar21 + fVar17 * (fVar23 - fVar21);
  *(float *)(param_1 + 0x70) = fVar22 + fVar17 * (fVar20 - fVar22);
  if (iVar8 != 1) {
    fVar18 = *(float *)(param_1 + 1000 + lVar15 * 4);
    fVar23 = *(float *)(param_1 + 1000 + lVar13 * 4);
    fVar19 = *(float *)(param_1 + 0x42c + lVar15 * 4);
    fVar19 = fVar19 + fVar17 * (*(float *)(param_1 + 0x42c + lVar13 * 4) - fVar19);
    if (*(int *)(param_1 + 0x500) < 0) {
      fVar19 = fVar19 * DAT_01d4c6b8;
      fVar20 = expf(*(float *)(param_1 + 0x60) * 8.0);
      fVar20 = fVar20 / fVar19;
      iVar8 = *(int *)(param_1 + 0x500);
    }
    else {
      fVar20 = (float)FUN_00562ce0(*(float *)(param_1 + 0x60),fVar19,0x3f800000);
      iVar8 = *(int *)(param_1 + 0x500);
    }
    if (-1 < iVar8) {
      *(float *)(param_1 + 0x5c) = fVar20 / (fVar18 + fVar17 * (fVar23 - fVar18));
    }
  }
  return uVar6 & (int)uVar6 >> 0x1f;
}


