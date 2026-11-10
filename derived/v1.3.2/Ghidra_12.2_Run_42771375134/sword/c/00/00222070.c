/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00222070; name: FUN_00222070
 */


ulong FUN_00222070(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar4 = FUN_00222110(param_1);
    return uVar4;
  }
  if ((ulong)*(byte *)(param_1 + 0xa8) < 2) {
    return 0;
  }
  pfVar6 = *(float **)(param_1 + 0xa0);
  uVar5 = 0;
  uVar4 = 1;
  fVar7 = (float)*param_2;
  fVar11 = (float)*(undefined8 *)pfVar6 * fVar7;
  fVar8 = (float)((ulong)*param_2 >> 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * fVar8;
  fVar9 = (float)param_2[1];
  fVar13 = (float)*(undefined8 *)(pfVar6 + 2) * fVar9;
  fVar10 = (float)((ulong)param_2[1] >> 0x20);
  fVar14 = fVar10 * 0.0;
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar11;
  auVar15._8_4_ = fVar13;
  auVar15._12_4_ = fVar14;
  auVar2._4_4_ = fVar12;
  auVar2._0_4_ = fVar11;
  auVar2._8_4_ = fVar13;
  auVar2._12_4_ = fVar14;
  auVar15 = NEON_ext(auVar15,auVar2,8,1);
  fVar11 = fVar11 + fVar12 + auVar15._0_4_ + auVar15._4_4_;
  do {
    auVar16._0_4_ = fVar7 * pfVar6[3];
    auVar16._4_4_ = fVar8 * pfVar6[4];
    auVar16._8_4_ = fVar9 * pfVar6[5];
    auVar16._12_4_ = fVar10 * 0.0;
    auVar15 = NEON_ext(auVar16,auVar16,8,1);
    fVar12 = auVar16._0_4_ + auVar16._4_4_ + auVar15._0_4_ + auVar15._4_4_;
    bVar1 = fVar11 < fVar12;
    fVar11 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)fVar12) & -(uint)bVar1);
    uVar3 = (uint)uVar4;
    if (!bVar1) {
      uVar3 = (uint)uVar5;
    }
    uVar5 = (ulong)uVar3;
    uVar4 = uVar4 + 1;
    pfVar6 = pfVar6 + 3;
  } while (*(byte *)(param_1 + 0xa8) != uVar4);
  return uVar5;
}


