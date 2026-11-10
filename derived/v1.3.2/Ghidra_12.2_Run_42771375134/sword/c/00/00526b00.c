/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00526b00; name: FUN_00526b00
 */


undefined4 FUN_00526b00(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar1 = (float *)(param_1 + 0x800);
  pfVar2 = (float *)(param_1 + 0x804);
  pfVar3 = (float *)(param_1 + 0x808);
  pfVar4 = (float *)(param_1 + 0x80c);
  uVar6 = FUN_005a5dc0(*(undefined4 *)(param_1 + 0x800),*(undefined4 *)(param_1 + 0x804),
                       *(undefined4 *)(param_1 + 0x808),*(undefined4 *)(param_1 + 0x80c),
                       *(undefined8 *)(param_1 + 400),0x7fffffff);
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x50);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0xa8);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0xb0);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  if (lVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x814);
    if ((fVar13 <= 0.0) || (fVar15 = *(float *)(param_1 + 0x818), fVar15 <= 0.0)) {
      fVar13 = *pfVar1;
      fVar15 = *pfVar2;
      pfVar10 = pfVar3;
      pfVar12 = pfVar4;
    }
    else {
      pfVar10 = (float *)(param_1 + 0x81c);
      pfVar12 = (float *)(param_1 + 0x820);
    }
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(fVar13 * fVar14);
    iVar9 = (int)(fVar15 * fVar16);
    iVar5 = iVar11;
    if (iVar11 < 2) {
      iVar5 = 1;
    }
    if (fVar13 <= 0.0) {
      iVar5 = iVar11;
    }
    iVar11 = iVar9;
    if (iVar9 < 2) {
      iVar11 = 1;
    }
    if (fVar15 <= 0.0) {
      iVar11 = iVar9;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar11,(int)(*pfVar10 * fVar14),(int)(*pfVar12 * fVar16));
  }
  lVar7 = *(long *)(param_1 + 0xdf0);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x1f0);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x1f8);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x200);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x208);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x210);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x218);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x220);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x228);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x230);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x238) + (long)*(int *)(param_1 + 0x298) * 8),
     lVar7 != 0)) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  if (0 < *(int *)(param_1 + 0x280)) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x288) + lVar7 * 8);
      fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x34));
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x30));
      iVar11 = (int)(*(float *)(param_1 + 0x804) * fVar15);
      iVar9 = (int)(*(float *)(param_1 + 0x800) * fVar13);
      iVar5 = iVar9;
      if (iVar9 < 2) {
        iVar5 = 1;
      }
      if (*(float *)(param_1 + 0x800) <= 0.0) {
        iVar5 = iVar9;
      }
      iVar9 = iVar11;
      if (iVar11 < 2) {
        iVar9 = 1;
      }
      if (*(float *)(param_1 + 0x804) <= 0.0) {
        iVar9 = iVar11;
      }
      uVar6 = FUN_0059ade0(lVar8,iVar5,iVar9,(int)(*(float *)(param_1 + 0x808) * fVar13),
                           (int)(*(float *)(param_1 + 0x80c) * fVar15));
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x280));
  }
  if (0 < *(int *)(param_1 + 0x558)) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x550) + lVar7 * 8);
      fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x34));
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x30));
      iVar11 = (int)(*(float *)(param_1 + 0x804) * fVar15);
      iVar9 = (int)(*(float *)(param_1 + 0x800) * fVar13);
      iVar5 = iVar9;
      if (iVar9 < 2) {
        iVar5 = 1;
      }
      if (*(float *)(param_1 + 0x800) <= 0.0) {
        iVar5 = iVar9;
      }
      iVar9 = iVar11;
      if (iVar11 < 2) {
        iVar9 = 1;
      }
      if (*(float *)(param_1 + 0x804) <= 0.0) {
        iVar9 = iVar11;
      }
      uVar6 = FUN_0059ade0(lVar8,iVar5,iVar9,(int)(*(float *)(param_1 + 0x808) * fVar13),
                           (int)(*(float *)(param_1 + 0x80c) * fVar15));
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x558));
  }
  lVar7 = *(long *)(param_1 + 0x5b8);
  if (lVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x824);
    if ((fVar13 <= 0.0) || (fVar15 = *(float *)(param_1 + 0x828), fVar15 <= 0.0)) {
      fVar13 = *pfVar1;
      fVar15 = *pfVar2;
      pfVar10 = pfVar3;
      pfVar12 = pfVar4;
    }
    else {
      pfVar10 = (float *)(param_1 + 0x82c);
      pfVar12 = (float *)(param_1 + 0x830);
    }
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(fVar13 * fVar14);
    iVar9 = (int)(fVar15 * fVar16);
    iVar5 = iVar11;
    if (iVar11 < 2) {
      iVar5 = 1;
    }
    if (fVar13 <= 0.0) {
      iVar5 = iVar11;
    }
    iVar11 = iVar9;
    if (iVar9 < 2) {
      iVar11 = 1;
    }
    if (fVar15 <= 0.0) {
      iVar11 = iVar9;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar11,(int)(*pfVar10 * fVar14),(int)(*pfVar12 * fVar16));
  }
  lVar7 = *(long *)(param_1 + 0x5c0);
  if (lVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x834);
    if ((fVar13 <= 0.0) || (fVar15 = *(float *)(param_1 + 0x838), fVar15 <= 0.0)) {
      fVar13 = *pfVar1;
      fVar15 = *pfVar2;
      pfVar10 = pfVar3;
      pfVar12 = pfVar4;
    }
    else {
      pfVar10 = (float *)(param_1 + 0x83c);
      pfVar12 = (float *)(param_1 + 0x840);
    }
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(fVar13 * fVar14);
    iVar9 = (int)(fVar15 * fVar16);
    iVar5 = iVar11;
    if (iVar11 < 2) {
      iVar5 = 1;
    }
    if (fVar13 <= 0.0) {
      iVar5 = iVar11;
    }
    iVar11 = iVar9;
    if (iVar9 < 2) {
      iVar11 = 1;
    }
    if (fVar15 <= 0.0) {
      iVar11 = iVar9;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar11,(int)(*pfVar10 * fVar14),(int)(*pfVar12 * fVar16));
  }
  lVar7 = *(long *)(param_1 + 0xd38);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  lVar7 = *(long *)(param_1 + 0x1d8);
  if (lVar7 != 0) {
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x34));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x30));
    iVar11 = (int)(*pfVar2 * fVar15);
    iVar9 = (int)(*pfVar1 * fVar13);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    if (*pfVar1 <= 0.0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar11;
    if (iVar11 < 2) {
      iVar9 = 1;
    }
    if (*pfVar2 <= 0.0) {
      iVar9 = iVar11;
    }
    uVar6 = FUN_0059ade0(lVar7,iVar5,iVar9,(int)(*pfVar3 * fVar13),(int)(*pfVar4 * fVar15));
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    uVar6 = FUN_005a5dc0(*pfVar1,*pfVar2,*pfVar3,*pfVar4,*(long *)(param_1 + 0x1e0),0x7fffffff);
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    uVar6 = FUN_005a5dc0(*pfVar1,*pfVar2,*pfVar3,*pfVar4,*(long *)(param_1 + 0x1e8),0x7fffffff);
  }
  if (*(char *)(param_1 + 0x810) != '\0') {
    FUN_005a6210(0x3f800000,*(undefined8 *)(param_1 + 400),0,0);
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_0055ec40(*pfVar1,*pfVar2,*pfVar3,*pfVar4);
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_005aa650(*pfVar1,*pfVar2,*pfVar3,*pfVar4);
  }
  return uVar6;
}


