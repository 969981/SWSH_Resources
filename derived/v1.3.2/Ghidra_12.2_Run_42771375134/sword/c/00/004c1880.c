/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c1880; name: FUN_004c1880
 */


undefined8 FUN_004c1880(long param_1,uint *param_2,float *param_3,long param_4)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar1 = *(long *)(param_1 + 0x48);
  pfVar4 = (float *)(lVar1 + (ulong)*param_2 * 0xc);
  pfVar3 = (float *)(lVar1 + (ulong)param_2[1] * 0xc);
  pfVar2 = (float *)(lVar1 + (ulong)param_2[2] * 0xc);
  fVar8 = pfVar3[2];
  fVar13 = *pfVar4;
  fVar12 = pfVar4[1];
  fVar10 = *pfVar2;
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar14 = pfVar4[2];
  fVar9 = pfVar2[1];
  fVar7 = pfVar2[2];
  fVar11 = fVar5 * fVar14 - fVar8 * fVar13;
  fVar16 = (fVar6 * fVar13 * fVar7 + fVar10 * fVar8 * fVar12 + fVar9 * fVar11) -
           (fVar10 * fVar6 * fVar14 + fVar12 * fVar7 * fVar5);
  if ((DAT_01d4c1a0 <= fVar16) || (fVar16 <= DAT_01d4bd34)) {
    fVar16 = 1.0 / fVar16;
    fVar15 = *param_3;
    fVar17 = param_3[1];
    fVar18 = param_3[2];
    fVar11 = (fVar15 * (fVar8 * fVar12 - fVar6 * fVar14) + fVar11 * fVar17 +
             (fVar6 * fVar13 - fVar12 * fVar5) * fVar18) * fVar16;
    if (fVar11 < DAT_01d4bc28) {
      return 0;
    }
    fVar12 = (fVar15 * (fVar9 * fVar14 - fVar12 * fVar7) +
              (fVar7 * fVar13 - fVar14 * fVar10) * fVar17 +
             (fVar10 * fVar12 - fVar9 * fVar13) * fVar18) * fVar16;
    if (fVar12 < DAT_01d4bc28) {
      return 0;
    }
    fVar16 = (fVar15 * (fVar7 * fVar6 - fVar9 * fVar8) + (fVar10 * fVar8 - fVar5 * fVar7) * fVar17 +
             (fVar9 * fVar5 - fVar10 * fVar6) * fVar18) * fVar16;
    if (fVar16 < DAT_01d4bc28) {
      return 0;
    }
  }
  else {
    fVar11 = 0.0;
    fVar16 = 0.0;
    fVar12 = 0.0;
  }
  fVar5 = fVar16 * fVar16 + fVar11 * fVar11 + fVar12 * fVar12;
  if ((fVar5 < DAT_01d4c1a0) && (DAT_01d4bd34 < fVar5)) {
    return 0;
  }
  fVar5 = 1.0 / fVar5;
  lVar1 = (ulong)*param_2 * 4;
  *(float *)(param_4 + lVar1) = *(float *)(param_4 + lVar1) + fVar16 * fVar16 * fVar5;
  *(float *)(param_4 + (ulong)param_2[1] * 4) =
       *(float *)(param_4 + (ulong)param_2[1] * 4) + fVar12 * fVar12 * fVar5;
  *(float *)(param_4 + (ulong)param_2[2] * 4) =
       *(float *)(param_4 + (ulong)param_2[2] * 4) + fVar11 * fVar11 * fVar5;
  return 1;
}


