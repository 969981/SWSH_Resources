/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd5de0; name: FUN_00dd5de0
 */


void FUN_00dd5de0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4)

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
  int iVar11;
  int iVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_c [3];
  
  fVar7 = (float)*param_2;
  fVar4 = (float)*param_3 - fVar7;
  fVar8 = (float)param_2[1];
  fVar5 = (float)param_3[1] - fVar8;
  fVar6 = (float)((ulong)param_3[1] >> 0x20) - (float)((ulong)param_2[1] >> 0x20);
  fVar9 = fVar4 * fVar4;
  fVar6 = fVar6 * fVar6;
  auVar12._4_4_ = 0;
  auVar12._0_4_ = fVar9;
  auVar12._8_4_ = fVar5 * fVar5;
  auVar12._12_4_ = fVar6;
  auVar16._4_4_ = 0;
  auVar16._0_4_ = fVar9;
  auVar16._8_4_ = fVar5 * fVar5;
  auVar16._12_4_ = fVar6;
  auVar12 = NEON_ext(auVar12,auVar16,8,1);
  fVar9 = auVar12._0_4_ + fVar9;
  fVar10 = auVar12._4_4_ + 0.0;
  fVar6 = fVar9 + fVar10;
  fVar9 = fVar9 + fVar10;
  local_c[0] = 0.0;
  auVar3._4_4_ = fVar9;
  auVar3._0_4_ = fVar6;
  auVar3._8_4_ = fVar6;
  auVar3._12_4_ = fVar9;
  auVar12 = NEON_frsqrte(auVar3,4);
  auVar15._0_4_ = auVar12._0_4_ * fVar6;
  auVar15._4_4_ = auVar12._4_4_ * fVar9;
  auVar15._8_4_ = auVar12._8_4_ * fVar6;
  auVar15._12_4_ = auVar12._12_4_ * fVar9;
  auVar16 = NEON_frsqrts(auVar12,auVar15,4);
  auVar13._0_4_ = auVar12._0_4_ * auVar16._0_4_;
  auVar13._4_4_ = auVar12._4_4_ * auVar16._4_4_;
  auVar13._8_4_ = auVar12._8_4_ * auVar16._8_4_;
  auVar13._12_4_ = auVar12._12_4_ * auVar16._12_4_;
  auVar17._0_4_ = fVar6 * auVar13._0_4_;
  auVar17._4_4_ = fVar9 * auVar13._4_4_;
  auVar17._8_4_ = fVar6 * auVar13._8_4_;
  auVar17._12_4_ = fVar9 * auVar13._12_4_;
  auVar12 = NEON_frsqrts(auVar13,auVar17,4);
  fVar4 = fVar4 * auVar13._0_4_ * auVar12._0_4_;
  fVar5 = fVar5 * auVar13._8_4_ * auVar12._8_4_;
  iVar11 = -(uint)(fVar6 == 0.0);
  iVar14 = -(uint)(fVar6 == 0.0);
  fVar9 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                          CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                            SUB41(fVar4,0) & ~(byte)iVar11)));
  fVar4 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                          CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                            SUB41(fVar5,0) & ~(byte)iVar14)));
  local_c[2] = ((float)*param_1 - fVar7) * fVar9 + ((float)param_1[1] - fVar8) * fVar4;
  pfVar1 = local_c + 1;
  if (local_c[2] <= SQRT(fVar6)) {
    pfVar1 = local_c + 2;
  }
  local_c[1] = SQRT(fVar6);
  pfVar2 = local_c;
  if (0.0 <= local_c[2]) {
    pfVar2 = pfVar1;
  }
  fVar6 = *pfVar2;
  param_4[1] = (ulong)(uint)(fVar8 + fVar6 * fVar4);
  *param_4 = (ulong)(uint)(fVar7 + fVar6 * fVar9);
  return;
}


