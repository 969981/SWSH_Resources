/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e90c90; name: FUN_00e90c90
 */


void FUN_00e90c90(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_4;
  
  fVar4 = (float)param_1[0x12];
  fVar8 = (float)*param_2 - fVar4;
  fVar5 = (float)((ulong)param_1[0x12] >> 0x20);
  fVar9 = (float)((ulong)*param_2 >> 0x20) - fVar5;
  fVar6 = (float)param_1[0x13];
  fVar10 = (float)param_2[1] - fVar6;
  fVar7 = (float)((ulong)param_1[0x13] >> 0x20);
  fVar11 = (float)((ulong)param_2[1] >> 0x20) - fVar7;
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  auVar12._4_4_ = fVar9;
  auVar12._0_4_ = fVar8;
  auVar12._8_4_ = fVar10;
  auVar12._12_4_ = fVar11;
  auVar3._4_4_ = fVar9;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = fVar11;
  auVar12 = NEON_ext(auVar12,auVar3,8,1);
  local_4 = SQRT(auVar12._0_4_ + fVar8 + auVar12._4_4_ + fVar9);
  fVar8 = *(float *)(param_1 + 0x17);
  fVar9 = *(float *)((long)param_1 + 0xbc);
  pfVar1 = (float *)((long)param_1 + 0xbc);
  if (local_4 <= fVar9) {
    pfVar1 = &local_4;
  }
  fVar9 = fVar9 - fVar8;
  pfVar2 = (float *)(param_1 + 0x17);
  if (fVar8 <= local_4) {
    pfVar2 = pfVar1;
  }
  fVar10 = *pfVar2;
  *(float *)((long)param_1 + 0xac) = fVar10;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (fVar10 - fVar8) / fVar9;
  }
  fVar9 = *(float *)(param_1 + 0x16) +
          fVar9 * (*(float *)((long)param_1 + 0xb4) - *(float *)(param_1 + 0x16));
  fVar10 = *(float *)(param_1 + 0x14);
  fVar11 = (float)*param_1;
  fVar13 = (float)((ulong)*param_1 >> 0x20);
  fVar14 = (float)param_1[1];
  fVar15 = (float)((ulong)param_1[1] >> 0x20);
  fVar8 = fVar9;
  if (DAT_01d4c050 <= ABS(fVar9 - fVar10)) {
    fVar8 = fVar10 + *(float *)((long)param_1 + 0xa4) * (fVar9 - fVar10);
  }
  *(float *)(param_1 + 0x15) = fVar9;
  param_1[1] = CONCAT44(fVar15 + ((float)((ulong)param_1[9] >> 0x20) - fVar15) * fVar8,
                        fVar14 + ((float)param_1[9] - fVar14) * fVar8);
  *param_1 = CONCAT44(fVar13 + ((float)((ulong)param_1[8] >> 0x20) - fVar13) * fVar8,
                      fVar11 + ((float)param_1[8] - fVar11) * fVar8);
  fVar9 = (float)param_1[2];
  fVar11 = (float)((ulong)param_1[2] >> 0x20);
  fVar14 = (float)param_1[3];
  fVar16 = (float)((ulong)param_1[3] >> 0x20);
  *(float *)(param_1 + 0x14) = fVar8;
  fVar10 = (float)param_1[0x10];
  fVar13 = (float)((ulong)param_1[0x10] >> 0x20);
  fVar15 = (float)param_1[0x11];
  fVar17 = (float)((ulong)param_1[0x11] >> 0x20);
  param_1[3] = CONCAT44(fVar16 + ((float)((ulong)param_1[0xb] >> 0x20) - fVar16) * fVar8,
                        fVar14 + ((float)param_1[0xb] - fVar14) * fVar8);
  param_1[2] = CONCAT44(fVar11 + ((float)((ulong)param_1[10] >> 0x20) - fVar11) * fVar8,
                        fVar9 + ((float)param_1[10] - fVar9) * fVar8);
  *(float *)(param_1 + 4) =
       *(float *)(param_1 + 4) + fVar8 * (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 4));
  *(float *)((long)param_1 + 0x24) =
       *(float *)((long)param_1 + 0x24) +
       fVar8 * (*(float *)((long)param_1 + 100) - *(float *)((long)param_1 + 0x24));
  param_1[0x11] = CONCAT44(fVar17 + (fVar7 - fVar17) * fVar8,fVar15 + (fVar6 - fVar15) * fVar8);
  param_1[0x10] = CONCAT44(fVar13 + (fVar5 - fVar13) * fVar8,fVar10 + (fVar4 - fVar10) * fVar8);
  *(float *)(param_1 + 5) =
       *(float *)(param_1 + 5) + fVar8 * (*(float *)(param_1 + 0xd) - *(float *)(param_1 + 5));
  *(float *)((long)param_1 + 0x2c) =
       *(float *)((long)param_1 + 0x2c) +
       fVar8 * (*(float *)((long)param_1 + 0x6c) - *(float *)((long)param_1 + 0x2c));
  return;
}


