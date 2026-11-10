/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022eb80; name: FUN_0022eb80
 */


void FUN_0022eb80(float *param_1,float *param_2,float *param_3,float *param_4,long param_5,
                 uint param_6,long param_7,byte *param_8,float *param_9)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
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
  
  fVar8 = DAT_01d4c18c;
  fVar7 = DAT_01d4c18c;
  fVar6 = DAT_01d4c5a8;
  fVar9 = DAT_01d4c5a8;
  if (param_6 != 0) {
    fVar11 = *param_9;
    fVar12 = param_9[1];
    fVar13 = param_9[2];
    fVar14 = param_9[3];
    fVar15 = param_9[4];
    fVar16 = param_9[5];
    uVar1 = (ulong)param_6;
    uVar2 = 1;
    do {
      pfVar4 = (float *)(param_7 + (ulong)*param_8 * 0xc);
      fVar19 = fVar11 * *pfVar4 + fVar12 * pfVar4[1] + fVar13 * pfVar4[2];
      fVar17 = *pfVar4 * fVar14 + pfVar4[1] * fVar15 + pfVar4[2] * fVar16;
      *(float *)(param_5 + (ulong)(uVar2 - 1) * 4) = fVar19;
      if (fVar19 <= fVar8) {
        fVar8 = fVar19;
      }
      if (fVar17 <= fVar7) {
        fVar7 = fVar17;
      }
      *(float *)(param_5 + (ulong)uVar2 * 4) = fVar17;
      uVar2 = uVar2 + 2;
      if (fVar6 <= fVar19) {
        fVar6 = fVar19;
      }
      if (fVar9 <= fVar17) {
        fVar9 = fVar17;
      }
      uVar1 = uVar1 - 1;
      param_8 = param_8 + 1;
    } while (uVar1 != 0);
  }
  fVar12 = DAT_01d4c4d8;
  fVar11 = DAT_01d4c1cc;
  fVar13 = fVar8 + DAT_01d4c4d8;
  fVar14 = fVar7 + DAT_01d4c4d8;
  fVar16 = fVar6 + DAT_01d4c1cc;
  fVar15 = fVar9 + DAT_01d4c1cc;
  if (param_6 != 0) {
    uVar1 = (ulong)param_6;
    uVar2 = 1;
    do {
      lVar3 = (ulong)(uVar2 - 1) * 4;
      fVar19 = *(float *)(param_5 + lVar3);
      uVar5 = (ulong)uVar2;
      fVar10 = *(float *)(param_5 + uVar5 * 4);
      fVar17 = fVar11;
      if (fVar19 - (fVar6 + fVar8) * 0.5 < 0.0) {
        fVar17 = fVar12;
      }
      fVar18 = fVar11;
      if (fVar10 - (fVar9 + fVar7) * 0.5 < 0.0) {
        fVar18 = fVar12;
      }
      *(float *)(param_5 + lVar3) = (fVar19 - fVar13) + fVar17;
      uVar2 = uVar2 + 2;
      uVar1 = uVar1 - 1;
      *(float *)(param_5 + uVar5 * 4) = (fVar10 - fVar14) + fVar18;
    } while (uVar1 != 0);
  }
  *param_1 = fVar13;
  *param_2 = fVar14;
  *param_3 = fVar16 - fVar13;
  *param_4 = fVar15 - fVar14;
  return;
}


