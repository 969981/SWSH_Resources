/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137bba0; name: FUN_0137bba0
 */


void FUN_0137bba0(float param_1,long param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  float fVar18;
  int iVar19;
  float fVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_38;
  float local_34;
  
  puVar7 = (undefined8 *)FUN_012dcaa0();
  fVar3 = (float)*puVar7 - *param_3;
  fVar4 = (float)((ulong)*puVar7 >> 0x20) - param_3[1];
  fVar5 = (float)puVar7[1] - param_3[2];
  fVar6 = (float)((ulong)puVar7[1] >> 0x20) - param_3[3];
  auVar20._0_4_ = fVar3 * fVar3;
  auVar20._4_4_ = fVar4 * fVar4;
  auVar20._8_4_ = fVar5 * fVar5;
  auVar20._12_4_ = fVar6 * fVar6;
  auVar26 = NEON_ext(auVar20,auVar20,8,1);
  fVar18 = auVar26._0_4_ + auVar20._0_4_;
  fVar22 = auVar26._4_4_ + auVar20._4_4_;
  fVar8 = fVar18 + fVar22;
  fVar18 = fVar18 + fVar22;
  auVar21._8_8_ = CONCAT44(fVar18,fVar8);
  auVar21._0_8_ = CONCAT44(fVar18,fVar8);
  auVar26 = NEON_frsqrte(auVar21,4);
  auVar28._0_4_ = auVar26._0_4_ * fVar8;
  auVar28._4_4_ = auVar26._4_4_ * fVar18;
  auVar28._8_4_ = auVar26._8_4_ * fVar8;
  auVar28._12_4_ = auVar26._12_4_ * fVar18;
  auVar29 = NEON_frsqrts(auVar26,auVar28,4);
  auVar27._0_4_ = auVar26._0_4_ * auVar29._0_4_;
  auVar27._4_4_ = auVar26._4_4_ * auVar29._4_4_;
  auVar27._8_4_ = auVar26._8_4_ * auVar29._8_4_;
  auVar27._12_4_ = auVar26._12_4_ * auVar29._12_4_;
  auVar30._0_4_ = fVar8 * auVar27._0_4_;
  auVar30._4_4_ = fVar18 * auVar27._4_4_;
  auVar30._8_4_ = fVar8 * auVar27._8_4_;
  auVar30._12_4_ = fVar18 * auVar27._12_4_;
  iVar19 = -(uint)(fVar8 == 0.0);
  iVar23 = -(uint)(fVar18 == 0.0);
  iVar24 = -(uint)(fVar8 == 0.0);
  iVar25 = -(uint)(fVar18 == 0.0);
  auVar26 = NEON_frsqrts(auVar27,auVar30,4);
  fVar3 = fVar3 * auVar27._0_4_ * auVar26._0_4_;
  fVar4 = fVar4 * auVar27._4_4_ * auVar26._4_4_;
  fVar5 = fVar5 * auVar27._8_4_ * auVar26._8_4_;
  fVar6 = fVar6 * auVar27._12_4_ * auVar26._12_4_;
  fVar3 = *param_4 *
          (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                          CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                   CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                            SUB41(fVar3,0) & ~(byte)iVar19)));
  fVar4 = param_4[1] *
          (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                          CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                   CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                            SUB41(fVar4,0) & ~(byte)iVar23)));
  uVar9 = (undefined1)((uint)fVar4 >> 8);
  uVar10 = (undefined1)((uint)fVar4 >> 0x10);
  uVar11 = (undefined1)((uint)fVar4 >> 0x18);
  fVar5 = param_4[2] *
          (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                          CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                   CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                            SUB41(fVar5,0) & ~(byte)iVar24)));
  uVar12 = (undefined1)((uint)fVar5 >> 8);
  uVar13 = (undefined1)((uint)fVar5 >> 0x10);
  uVar14 = (undefined1)((uint)fVar5 >> 0x18);
  fVar6 = param_4[3] *
          (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                          CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                                   CONCAT11((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                            SUB41(fVar6,0) & ~(byte)iVar25)));
  uVar15 = (undefined1)((uint)fVar6 >> 8);
  uVar16 = (undefined1)((uint)fVar6 >> 0x10);
  uVar17 = (undefined1)((uint)fVar6 >> 0x18);
  auVar26[4] = SUB41(fVar4,0);
  auVar26._0_4_ = fVar3;
  auVar26[5] = uVar9;
  auVar26[6] = uVar10;
  auVar26[7] = uVar11;
  auVar26[8] = SUB41(fVar5,0);
  auVar26[9] = uVar12;
  auVar26[10] = uVar13;
  auVar26[0xb] = uVar14;
  auVar26[0xc] = SUB41(fVar6,0);
  auVar26[0xd] = uVar15;
  auVar26[0xe] = uVar16;
  auVar26[0xf] = uVar17;
  auVar29[4] = SUB41(fVar4,0);
  auVar29._0_4_ = fVar3;
  auVar29[5] = uVar9;
  auVar29[6] = uVar10;
  auVar29[7] = uVar11;
  auVar29[8] = SUB41(fVar5,0);
  auVar29[9] = uVar12;
  auVar29[10] = uVar13;
  auVar29[0xb] = uVar14;
  auVar29[0xc] = SUB41(fVar6,0);
  auVar29[0xd] = uVar15;
  auVar29[0xe] = uVar16;
  auVar29[0xf] = uVar17;
  auVar26 = NEON_ext(auVar26,auVar29,8,1);
  local_34 = (1.0 - ABS(auVar26._0_4_ + fVar3 + auVar26._4_4_ + fVar4)) * DAT_01d4bf5c;
  pfVar1 = (float *)&DAT_01d4bc14;
  if (local_34 <= 1.0) {
    pfVar1 = &local_34;
  }
  pfVar2 = &local_38;
  if (0.0 <= local_34) {
    pfVar2 = pfVar1;
  }
  fVar3 = *pfVar2 * param_1 + *(float *)(param_2 + 0x88);
  uVar9 = SUB41(fVar3,0);
  uVar10 = (undefined1)((uint)fVar3 >> 8);
  uVar11 = (undefined1)((uint)fVar3 >> 0x10);
  uVar12 = (undefined1)((uint)fVar3 >> 0x18);
  if (1.0 < fVar3) {
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0x80;
    uVar12 = 0x3f;
  }
  *(uint *)(param_2 + 0x88) = CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
  return;
}


