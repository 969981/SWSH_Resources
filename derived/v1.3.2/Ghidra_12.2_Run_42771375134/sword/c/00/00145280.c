/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00145280; name: FUN_00145280
 */


void FUN_00145280(float param_1,int *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar15 = 1.0;
  iVar5 = (int)(*(float *)(param_3 + 0x9c) * param_1 + 0.5);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  fVar13 = (1.0 / (float)iVar5) * param_1;
  *param_2 = iVar5;
  param_2[1] = (int)(1.0 / (float)iVar5);
  param_2[2] = (int)fVar13;
  if (*(float *)(param_3 + 0xf4) != 0.0) {
    fVar15 = fVar13 / *(float *)(param_3 + 0xf4);
  }
  param_2[3] = (int)fVar15;
  uVar7 = (ulong)*(uint *)(param_3 + 0x100);
  if (*(uint *)(param_3 + 0x100) != 0) {
    puVar6 = *(uint **)(param_3 + 0xf8);
    lVar9 = uVar7 * 8 + -8;
    if (((uint)lVar9 >> 3 & 1) == 0) {
      puVar8 = puVar6 + 2;
      fVar15 = (float)NEON_ucvtf(*puVar6);
      fVar15 = (float)puVar6[1] * fVar15 + 0.0;
    }
    else {
      fVar15 = 0.0;
      puVar8 = puVar6;
    }
    if (lVar9 != 0) {
      do {
        pfVar3 = (float *)(puVar8 + 1);
        fVar13 = (float)NEON_ucvtf(*puVar8);
        puVar1 = puVar8 + 2;
        pfVar4 = (float *)(puVar8 + 3);
        puVar8 = puVar8 + 4;
        fVar17 = (float)NEON_ucvtf(*puVar1);
        fVar15 = fVar15 + *pfVar3 * fVar13 + *pfVar4 * fVar17;
      } while (puVar8 != puVar6 + uVar7 * 2);
    }
    uVar2 = *(uint *)(param_3 + 0x108) >> 3;
    if (uVar2 == 0) {
      fVar13 = 0.0;
    }
    else {
      fVar17 = 0.0;
      puVar8 = puVar6 + uVar7 * 2 + -2;
      uVar11 = *puVar8;
      uVar12 = *puVar6;
      fVar13 = 0.0;
      uVar10 = 0;
      do {
        if (uVar10 == uVar12) {
          puVar6 = puVar6 + 2;
          uVar12 = uVar10 + *puVar6;
        }
        if (uVar10 == uVar11) {
          puVar8 = puVar8 + -2;
          uVar11 = uVar10 + *puVar8;
        }
        fVar17 = fVar17 + (float)puVar6[1] + (float)puVar8[1];
        fVar13 = fVar13 + fVar17;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    fVar13 = (fVar15 * (float)(uVar2 + 1) - fVar13) /
             (float)((*(uint *)(param_3 + 0x108) - uVar2) * (uVar2 + 1));
  }
  param_2[4] = (int)fVar13;
  param_2[5] = *(int *)(param_3 + 0xc0);
  param_2[6] = *(int *)(param_3 + 0xc4);
  param_2[7] = *(int *)(param_3 + 200);
  param_2[8] = *(int *)(param_3 + 0xcc);
  param_2[9] = *(int *)(param_3 + 0xdc);
  param_2[10] = *(int *)(param_3 + 0xe0);
  param_2[0xb] = *(int *)(param_3 + 0xe4);
  param_2[0xc] = *(int *)(param_3 + 0xe8);
  param_2[0xd] = *(int *)(param_3 + 0xec);
  fVar15 = 1.0;
  param_1 = 1.0 / param_1;
  param_2[0xe] = *(int *)(param_3 + 0xf0);
  fVar13 = *(float *)(param_3 + 0xcc);
  fVar20 = *(float *)(param_3 + 0xc0);
  fVar21 = *(float *)(param_3 + 0xa4);
  fVar25 = *(float *)(param_3 + 0xa8);
  *(float *)(param_3 + 0xdc) = param_1 * (*(float *)(param_3 + 0xb4) - *(float *)(param_3 + 0xd0));
  *(float *)(param_3 + 0xe0) = param_1 * (*(float *)(param_3 + 0xb8) - *(float *)(param_3 + 0xd4));
  fVar14 = *(float *)(param_3 + 0xc4);
  fVar16 = *(float *)(param_3 + 200);
  *(float *)(param_3 + 0xe4) = param_1 * (*(float *)(param_3 + 0xbc) - *(float *)(param_3 + 0xd8));
  fVar18 = *(float *)(param_3 + 0xac);
  fVar19 = *(float *)(param_3 + 0xb0);
  fVar22 = ((fVar13 * fVar21 - fVar19 * fVar20) - fVar25 * fVar16) + fVar18 * fVar14;
  fVar23 = ((fVar13 * fVar25 - fVar19 * fVar14) - fVar18 * fVar20) + fVar21 * fVar16;
  fVar24 = ((fVar13 * fVar18 - fVar19 * fVar16) - fVar21 * fVar14) + fVar25 * fVar20;
  fVar17 = sqrtf(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24);
  if (DAT_01d4c708 < fVar17) {
    fVar15 = fVar17;
    if (1.0 < fVar17) {
      fVar15 = 1.0;
    }
    fVar15 = asinf(fVar15);
    fVar15 = fVar15 / fVar17;
  }
  if (fVar13 * fVar19 + fVar21 * fVar20 + fVar25 * fVar14 + fVar18 * fVar16 < 0.0) {
    fVar15 = -fVar15;
  }
  *(float *)(param_3 + 0xe8) = param_1 * fVar22 * fVar15;
  *(float *)(param_3 + 0xec) = param_1 * fVar23 * fVar15;
  *(float *)(param_3 + 0xf0) = param_1 * fVar24 * fVar15;
  iVar5 = param_2[2];
  *(int *)(param_3 + 0xf4) = iVar5;
  FUN_00146bc0(iVar5,(undefined8 *)(param_3 + 0xf8),*param_2);
  *(undefined8 *)(param_3 + 0xc0) = *(undefined8 *)(param_3 + 0xa4);
  *(undefined8 *)(param_3 + 200) = *(undefined8 *)(param_3 + 0xac);
  *(undefined8 *)(param_3 + 0xd0) = *(undefined8 *)(param_3 + 0xb4);
  *(undefined4 *)(param_3 + 0xd8) = *(undefined4 *)(param_3 + 0xbc);
  return;
}


