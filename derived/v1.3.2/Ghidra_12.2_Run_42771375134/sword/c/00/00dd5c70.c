/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd5c70; name: FUN_00dd5c70
 */


bool FUN_00dd5c70(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  
  auVar10 = *(undefined1 (*) [16])(param_2 + 2);
  fVar1 = ((float)*param_2 + auVar10._0_4_) * 0.5;
  fVar4 = ((float)((ulong)*param_2 >> 0x20) + auVar10._4_4_) * 0.5;
  fVar7 = ((float)param_2[1] + auVar10._8_4_) * 0.5;
  NEON_fmov(0x3f800000,4);
  auVar13 = NEON_ext(auVar10,auVar10,8,1);
  fVar2 = auVar10._0_4_ - fVar1;
  fVar5 = auVar10._4_4_ - fVar4;
  fVar8 = auVar13._0_4_ - fVar7;
  auVar10 = NEON_fmov(0x3f800000,4);
  fVar9 = (float)*param_1 * fVar1 + (float)param_1[2] * fVar4 + (float)param_1[4] * fVar7 +
          auVar10._0_4_ * (float)param_1[6] +
          *(float *)(param_1 + 0x10) * fVar2 + (float)param_1[0x12] * fVar5 +
          (float)param_1[0x14] * fVar8 + (float)param_1[0x16] * 0.0;
  fVar11 = (float)((ulong)*param_1 >> 0x20) * fVar1 + (float)((ulong)param_1[2] >> 0x20) * fVar4 +
           (float)((ulong)param_1[4] >> 0x20) * fVar7 +
           auVar10._4_4_ * (float)((ulong)param_1[6] >> 0x20) +
           *(float *)((long)param_1 + 0x84) * fVar2 + (float)((ulong)param_1[0x12] >> 0x20) * fVar5
           + (float)((ulong)param_1[0x14] >> 0x20) * fVar8 +
           (float)((ulong)param_1[0x16] >> 0x20) * 0.0;
  fVar12 = (float)param_1[1] * fVar1 + (float)param_1[3] * fVar4 + (float)param_1[5] * fVar7 +
           auVar10._8_4_ * (float)param_1[7] +
           *(float *)(param_1 + 0x11) * fVar2 + (float)param_1[0x13] * fVar5 +
           (float)param_1[0x15] * fVar8 + (float)param_1[0x17] * 0.0;
  fVar3 = (float)param_1[8] * fVar1 + (float)param_1[10] * fVar4 + (float)param_1[0xc] * fVar7 +
          auVar10._0_4_ * (float)param_1[0xe] +
          (float)param_1[0x18] * fVar2 + (float)param_1[0x1a] * fVar5 + (float)param_1[0x1c] * fVar8
          + (float)param_1[0x1e] * 0.0;
  fVar6 = (float)((ulong)param_1[8] >> 0x20) * fVar1 + (float)((ulong)param_1[10] >> 0x20) * fVar4 +
          (float)((ulong)param_1[0xc] >> 0x20) * fVar7 +
          auVar10._4_4_ * (float)((ulong)param_1[0xe] >> 0x20) +
          (float)((ulong)param_1[0x18] >> 0x20) * fVar2 +
          (float)((ulong)param_1[0x1a] >> 0x20) * fVar5 +
          (float)((ulong)param_1[0x1c] >> 0x20) * fVar8 +
          (float)((ulong)param_1[0x1e] >> 0x20) * 0.0;
  fVar1 = (float)param_1[9] * fVar1 + (float)param_1[0xb] * fVar4 + (float)param_1[0xd] * fVar7 +
          auVar10._8_4_ * (float)param_1[0xf] +
          (float)param_1[0x19] * fVar2 + (float)param_1[0x1b] * fVar5 + (float)param_1[0x1d] * fVar8
          + (float)param_1[0x1f] * 0.0;
  if (fVar9 <= fVar3) {
    fVar3 = fVar9;
  }
  if (fVar11 <= fVar6) {
    fVar6 = fVar11;
  }
  if (fVar12 <= fVar1) {
    fVar1 = fVar12;
  }
  return 0.0 <= fVar1 && (0.0 <= fVar3 && 0.0 <= fVar6);
}


