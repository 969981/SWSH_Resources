/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004efa80; name: FUN_004efa80
 */


ulong FUN_004efa80(ulong param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar1 = *param_3;
  if (iVar1 < 1) {
    return param_1;
  }
  if (iVar1 < 2) {
    return 0;
  }
  fVar9 = (float)NEON_fminnm(*param_2,param_3[2]);
  fVar10 = (float)NEON_fminnm(param_2[1],param_3[3]);
  fVar7 = ((float)param_3[5] - (float)param_3[2]) * 0.5;
  fVar12 = ((float)param_3[6] - (float)param_3[3]) * 0.5;
  fVar8 = ((float)param_2[3] - fVar9) * 0.5;
  fVar10 = ((float)param_2[4] - fVar10) * 0.5;
  fVar9 = (float)NEON_fminnm(param_2[2],param_3[4]);
  fVar13 = ((float)param_3[7] - (float)param_3[4]) * 0.5;
  fVar7 = fVar7 * fVar7 + fVar12 * fVar12 + fVar13 * fVar13;
  fVar9 = ((float)param_2[5] - fVar9) * 0.5;
  fVar9 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar8 = *(float *)(param_1 + 0x10);
  fVar7 = fVar7 * fVar8 * SQRT(fVar7);
  fVar9 = fVar9 * fVar8 * SQRT(fVar9) - fVar7;
  uVar4 = 0;
  pfVar5 = (float *)(param_3 + 0x11);
  lVar6 = 1;
  do {
    fVar12 = (float)NEON_fminnm(*param_2,pfVar5[-5]);
    fVar11 = (float)NEON_fminnm(param_2[1],pfVar5[-4]);
    fVar15 = (pfVar5[-1] - pfVar5[-4]) * 0.5;
    fVar14 = (pfVar5[-2] - pfVar5[-5]) * 0.5;
    fVar10 = (float)NEON_fminnm(param_2[2],pfVar5[-3]);
    fVar13 = (*pfVar5 - pfVar5[-3]) * 0.5;
    fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13;
    fVar12 = ((float)param_2[3] - fVar12) * 0.5;
    fVar13 = ((float)param_2[4] - fVar11) * 0.5;
    fVar10 = ((float)param_2[5] - fVar10) * 0.5;
    fVar10 = fVar12 * fVar12 + fVar13 * fVar13 + fVar10 * fVar10;
    fVar14 = fVar14 * fVar8 * SQRT(fVar14);
    fVar13 = fVar10 * fVar8 * SQRT(fVar10) - fVar14;
    uVar3 = (uint)lVar6;
    fVar10 = fVar14;
    fVar12 = fVar13;
    if (fVar7 <= fVar14 || fVar13 != fVar9) {
      uVar3 = (uint)uVar4;
      fVar10 = fVar7;
      fVar12 = fVar9;
    }
    bVar2 = fVar13 < fVar9;
    fVar7 = fVar10;
    fVar9 = fVar12;
    if (bVar2) {
      uVar3 = (uint)lVar6;
      fVar7 = fVar14;
      fVar9 = fVar13;
    }
    uVar4 = (ulong)uVar3;
    lVar6 = lVar6 + 1;
    pfVar5 = pfVar5 + 10;
  } while (lVar6 < iVar1);
  return uVar4;
}


