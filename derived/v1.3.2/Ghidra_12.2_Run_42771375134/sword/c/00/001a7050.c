/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a7050; name: FUN_001a7050
 */


void FUN_001a7050(float *param_1,uint param_2,uint param_3,long param_4)

{
  bool bVar1;
  float fVar2;
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
  
  fVar4 = *param_1;
  fVar3 = param_1[1];
  fVar2 = param_1[2];
  if ((param_3 & 1) == 0) {
    fVar6 = param_1[8];
    fVar9 = param_1[9];
    fVar13 = param_1[10];
  }
  else {
    fVar6 = 0.0;
    fVar9 = 0.0;
    fVar13 = 0.0;
  }
  if (((uint)param_1[3] >> 1 & 1) == 0) {
    if (((uint)param_1[3] & 1) == 0) {
      return;
    }
    fVar6 = param_1[7];
    fVar9 = 1.0;
    if (0.0 <= fVar6 + -1.5) {
      fVar9 = 0.5;
    }
    fVar15 = 1.0 / fVar6;
    if (fVar6 < 3.0) {
      fVar15 = fVar9;
    }
    param_1[0x10] = fVar15 * param_1[4];
    param_1[0x11] = fVar15 * param_1[5];
    param_1[0x12] = fVar15 * param_1[6];
    fVar13 = fVar15 * param_1[10];
    fVar6 = fVar15 * param_1[8];
    fVar9 = fVar15 * param_1[9];
    param_1[10] = fVar13;
    param_1[8] = fVar6;
    param_1[9] = fVar9;
    if (fVar15 != 1.0) {
      fVar2 = sqrtf(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar2 = 1.0 / fVar2;
      fVar4 = *param_1 * fVar2;
      fVar3 = fVar2 * param_1[1];
      fVar2 = fVar2 * param_1[2];
      *param_1 = fVar4;
      param_1[1] = fVar3;
      param_1[2] = fVar2;
    }
    param_1[7] = 0.0;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 4);
    param_1[0x12] = param_1[6];
  }
  fVar5 = param_1[0x14];
  fVar7 = param_1[0x15];
  fVar8 = param_1[0x16];
  fVar10 = (fVar5 - fVar6) * fVar4 + (fVar7 - fVar9) * fVar3 + (fVar8 - fVar13) * fVar2;
  fVar15 = fVar7;
  fVar16 = fVar5;
  fVar12 = fVar8;
  if (fVar10 < 0.0) {
    fVar4 = fVar10 * fVar4;
    fVar3 = fVar10 * fVar3;
    fVar2 = fVar10 * fVar2;
    fVar11 = *(float *)(param_4 + 0x10);
    fVar18 = (fVar5 - fVar6) - fVar4;
    fVar17 = (fVar7 - fVar9) - fVar3;
    fVar19 = (fVar8 - fVar13) - fVar2;
    bVar1 = (fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) -
            ((fVar2 - fVar2) * (fVar2 - fVar2) +
            (fVar4 - fVar4) * (fVar4 - fVar4) + (fVar3 - fVar3) * (fVar3 - fVar3)) *
            *(float *)(param_4 + 0x18) < 0.0;
    if (bVar1) {
      fVar18 = 0.0;
    }
    if (bVar1) {
      fVar19 = 0.0;
      fVar17 = 0.0;
    }
    fVar14 = 1.0 - *(float *)(param_4 + 0x14);
    fVar12 = fVar14 * fVar19;
    fVar15 = fVar14 * fVar17;
    fVar16 = fVar14 * fVar18;
    if (fVar10 < 0.0) {
      fVar12 = fVar14 * fVar19 - fVar2 * fVar11;
      fVar15 = fVar14 * fVar17 - fVar3 * fVar11;
      fVar16 = fVar14 * fVar18 - fVar4 * fVar11;
    }
    fVar16 = fVar6 + fVar16;
    fVar15 = fVar9 + fVar15;
    fVar12 = fVar13 + fVar12;
  }
  if (((param_2 & 1) != 0) && (*(long *)(param_1 + 0x1c) != 0)) {
    param_1[0x18] = fVar5 - fVar16;
    param_1[0x19] = fVar7 - fVar15;
    param_1[0x1a] = fVar8 - fVar12;
  }
  param_1[0x14] = fVar16;
  param_1[0x15] = fVar15;
  param_1[0x16] = fVar12;
  return;
}


