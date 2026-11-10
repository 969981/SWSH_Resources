/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c09a0; name: FUN_004c09a0
 */


bool FUN_004c09a0(uint *param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar1 = (float *)(param_2 + (long)(int)param_4 * 8);
  pfVar2 = (float *)(param_2 + (long)(int)param_3 * 8);
  pfVar6 = (float *)(param_2 + (long)(int)param_5 * 8);
  fVar7 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar9 = (fVar7 - *pfVar6) * (pfVar1[1] - fVar8) + (*pfVar1 - fVar7) * (pfVar6[1] - fVar8);
  if (fVar9 == 0.0) {
    return true;
  }
  uVar3 = param_5;
  if (0.0 <= fVar9) {
    uVar3 = param_4;
    param_4 = param_5;
  }
  if (*param_1 == 0) {
    return false;
  }
  pfVar1 = (float *)(param_2 + (long)(int)uVar3 * 8);
  pfVar2 = (float *)(param_2 + (long)(int)param_4 * 8);
  uVar5 = 0;
  pfVar6 = (float *)(param_2 + 4);
  while( true ) {
    bVar4 = false;
    if (((param_4 != uVar5) && (param_3 != uVar5)) && (uVar3 != uVar5)) {
      fVar9 = pfVar6[-1];
      fVar10 = *pfVar6;
      fVar12 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar11 = -(fVar9 * fVar9) - fVar10 * fVar10;
      fVar15 = pfVar2[1];
      fVar14 = *pfVar2;
      bVar4 = DAT_01d4c4d4 <
              (fVar11 + fVar14 * fVar14 + fVar15 * fVar15) *
              ((fVar13 - fVar10) * (fVar7 - fVar9) - (fVar12 - fVar9) * (fVar8 - fVar10)) +
              (fVar11 + fVar12 * fVar12 + fVar13 * fVar13) *
              ((fVar14 - fVar9) * (fVar8 - fVar10) - (fVar15 - fVar10) * (fVar7 - fVar9)) +
              (((fVar7 * fVar7 + fVar8 * fVar8) - fVar9 * fVar9) - fVar10 * fVar10) *
              ((fVar15 - fVar10) * (fVar12 - fVar9) - (fVar14 - fVar9) * (fVar13 - fVar10));
    }
    if (bVar4 != false) break;
    uVar5 = uVar5 + 1;
    pfVar6 = pfVar6 + 2;
    if (*param_1 <= uVar5) {
      return false;
    }
  }
  return bVar4;
}


