/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a7e70; name: FUN_005a7e70
 */


undefined8 FUN_005a7e70(long param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar6 = DAT_01d4c7a8;
  fVar5 = DAT_01d4c70c;
  fVar4 = DAT_01d4c094;
  fVar3 = DAT_01d4bbf8;
  fVar2 = DAT_01d4bac8;
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar8 = 0;
    lVar9 = 0x20;
    do {
      pfVar1 = (float *)(*(long *)(param_1 + 0x4a8) + lVar9);
      fVar10 = pfVar1[4];
      if (lVar9 == 0x20) {
        fVar11 = fVar10 * fVar2;
      }
      else {
        fVar11 = pfVar1[-0x3e];
      }
      fVar14 = 0.25;
      fVar12 = fVar11;
      fVar13 = fVar10;
      if ((*(uint *)(param_1 + 0x154) >> 2 & 1) != 0) {
        if (lVar9 == 0x20) {
          fVar12 = fVar11 * 0.0;
          fVar13 = fVar10 * fVar6;
          fVar14 = 0.0;
        }
        else {
          fVar12 = fVar11 * fVar3;
          fVar13 = fVar10 * fVar6;
          fVar14 = 0.25;
        }
      }
      bVar7 = (*(uint *)(param_1 + 0x154) & 2) != 0;
      if (bVar7) {
        fVar11 = fVar11 * fVar5;
      }
      fVar15 = *(float *)(*(long *)(param_1 + 0x4a8) + 0x30);
      if (bVar7) {
        fVar10 = fVar10 * fVar4;
      }
      fVar14 = fVar14 * fVar15;
      fVar15 = fVar15 * 0.25;
      fVar12 = fVar12 + fVar14;
      fVar11 = fVar11 + fVar15;
      fVar14 = (fVar13 + fVar14) - fVar12;
      fVar10 = (fVar10 + fVar15) - fVar11;
      fVar13 = 1.0 / fVar14;
      fVar14 = -fVar12 / fVar14;
      pfVar1[0x28] = fVar13;
      pfVar1[0x29] = fVar14;
      fVar12 = 1.0 / fVar10;
      fVar10 = -fVar11 / fVar10;
      pfVar1[0x2a] = fVar12;
      pfVar1[0x2b] = fVar10;
      pfVar1[0x2c] = fVar13 * *(float *)(param_1 + 0x1e4);
      pfVar1[0x2d] = fVar14;
      pfVar1[0x2e] = fVar12 * *(float *)(param_1 + 0x1e4);
      pfVar1[0x2f] = fVar10;
      fVar13 = (float)NEON_ucvtf(pfVar1[-7]);
      fVar14 = *(float *)(param_1 + 0x1e4);
      pfVar1[0x32] = 1.0;
      pfVar1[0x33] = 0.0;
      fVar11 = 0.0;
      fVar12 = (1.0 / *pfVar1) * fVar14 * fVar13;
      fVar10 = 1.0;
      fVar14 = (1.0 / *pfVar1) * ((fVar14 * pfVar1[0x33] + 0.0) * fVar13 + 0.0) + 0.0;
      pfVar1[0x32] = fVar12;
      pfVar1[0x33] = fVar14;
      if (*(int *)(param_1 + 0x16c) == 1) {
        fVar10 = *(float *)(param_1 + 0x1f0);
        fVar11 = *(float *)(param_1 + 500);
      }
      pfVar1[0x34] = fVar12 * fVar10;
      pfVar1[0x35] = fVar14 + fVar12 * fVar11;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x108;
    } while (lVar8 < *(int *)(param_1 + 0xd0));
  }
  return 0;
}


