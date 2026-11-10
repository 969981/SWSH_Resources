/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5c00; name: FUN_003c5c00
 */


void FUN_003c5c00(long param_1,float *param_2)

{
  ushort uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
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
  float fVar19;
  
  pfVar2 = *(float **)(param_1 + 0x28);
  uVar1 = *(ushort *)((long)pfVar2 + 0x9e);
  if (uVar1 != 0) {
    fVar9 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar6 = param_2[6];
    fVar18 = *param_2;
    fVar19 = param_2[1];
    fVar8 = pfVar2[6];
    fVar14 = pfVar2[2];
    fVar15 = pfVar2[3];
    fVar16 = param_2[2];
    fVar17 = param_2[3];
    fVar3 = param_2[4];
    fVar4 = param_2[5];
    fVar7 = pfVar2[4];
    fVar5 = pfVar2[5];
    fVar12 = ((fVar15 * fVar18 - fVar17 * fVar9) - fVar19 * fVar14) + fVar16 * fVar10;
    fVar13 = ((fVar15 * fVar19 - fVar17 * fVar10) - fVar16 * fVar9) + fVar18 * fVar14;
    fVar11 = ((fVar15 * fVar16 - fVar17 * fVar14) - fVar18 * fVar10) + fVar19 * fVar9;
    fVar9 = fVar15 * fVar17 + fVar18 * fVar9 + fVar19 * fVar10 + fVar16 * fVar14;
    if (fVar9 < 0.0) {
      fVar12 = -fVar12;
      fVar13 = -fVar13;
      fVar11 = -fVar11;
      fVar9 = -fVar9;
    }
    fVar10 = fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11;
    if (DAT_01d4bc30 <= fVar10) {
      fVar14 = sqrtf(fVar10);
      fVar14 = 1.0 / fVar14;
      fVar12 = fVar12 * fVar14;
      fVar13 = fVar13 * fVar14;
      fVar11 = fVar11 * fVar14;
      fVar15 = fabsf(fVar9);
      if (DAT_01d4c2e0 <= fVar15) {
        fVar9 = atan2f(fVar10 * fVar14,fVar9);
        fVar9 = fVar9 + fVar9;
      }
      else {
        fVar9 = DAT_01d4bb38;
      }
    }
    else {
      fVar12 = 1.0;
      fVar13 = 0.0;
      fVar11 = 0.0;
      fVar9 = 0.0;
    }
    fVar12 = fVar12 * fVar9;
    fVar13 = fVar13 * fVar9;
    fVar11 = fVar11 * fVar9;
    fVar3 = fVar3 - fVar7;
    if ((uVar1 & 1) != 0) {
      fVar3 = 0.0;
    }
    fVar4 = fVar4 - fVar5;
    if ((uVar1 & 2) != 0) {
      fVar4 = 0.0;
    }
    fVar5 = fVar6 - fVar8;
    if ((uVar1 & 4) != 0) {
      fVar5 = 0.0;
    }
    if ((uVar1 & 8) != 0) {
      fVar12 = 0.0;
    }
    if ((uVar1 & 0x10) != 0) {
      fVar13 = 0.0;
    }
    if ((uVar1 & 0x20) != 0) {
      fVar11 = 0.0;
    }
    fVar6 = pfVar2[5];
    fVar7 = pfVar2[6];
    param_2[4] = fVar3 + pfVar2[4];
    param_2[5] = fVar4 + fVar6;
    fVar3 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
    param_2[6] = fVar5 + fVar7;
    if (fVar3 == 0.0) {
      *param_2 = *pfVar2;
      param_2[1] = pfVar2[1];
      param_2[2] = pfVar2[2];
      param_2[3] = pfVar2[3];
    }
    else {
      fVar3 = sqrtf(fVar3);
      fVar4 = sinf(fVar3 * 0.5);
      fVar5 = cosf(fVar3 * 0.5);
      fVar4 = fVar4 / fVar3;
      fVar12 = fVar12 * fVar4;
      fVar3 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar13 = fVar13 * fVar4;
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      fVar11 = fVar11 * fVar4;
      fVar4 = fVar5 * fVar3 + ((fVar3 * 0.0 + fVar12 * fVar10 + fVar13 * fVar9) - fVar11 * fVar6);
      fVar7 = fVar5 * fVar6 + ((fVar3 * fVar11 + fVar13 * fVar10 + fVar6 * 0.0) - fVar12 * fVar9);
      fVar8 = fVar5 * fVar9 + ((fVar12 * fVar6 + fVar11 * fVar10 + fVar9 * 0.0) - fVar3 * fVar13);
      fVar11 = fVar5 * fVar10 +
               (((fVar10 * 0.0 - fVar3 * fVar12) - fVar13 * fVar6) - fVar11 * fVar9);
      fVar3 = sqrtf(fVar11 * fVar11 + fVar8 * fVar8 + fVar4 * fVar4 + fVar7 * fVar7);
      fVar3 = 1.0 / fVar3;
      *param_2 = fVar3 * fVar4;
      param_2[1] = fVar3 * fVar7;
      param_2[2] = fVar3 * fVar8;
      param_2[3] = fVar3 * fVar11;
    }
  }
  return;
}


