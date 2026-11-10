/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb6370; name: FUN_00eb6370
 */


/* WARNING: Removing unreachable block (ram,0x00eb6428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb6370(long *param_1,float *param_2,int param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  long extraout_d0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long extraout_var;
  float fVar5;
  int iVar6;
  undefined1 auVar7 [12];
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  undefined1 auVar8 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  (**(code **)(*param_1 + 0x1a8))(param_1,PTR_DAT_02720200,1);
  fVar5 = *param_2 - *(float *)(param_1 + 0x16);
  fVar10 = param_2[2] - *(float *)(param_1 + 0x17);
  fVar12 = param_2[3] - *(float *)((long)param_1 + 0xbc);
  fVar14 = fVar5 * fVar5;
  auVar16._4_4_ = 0;
  auVar16._0_4_ = fVar14;
  auVar16._8_4_ = fVar10 * fVar10;
  auVar16._12_4_ = fVar12 * fVar12;
  auVar18._4_4_ = 0;
  auVar18._0_4_ = fVar14;
  auVar18._8_4_ = fVar10 * fVar10;
  auVar18._12_4_ = fVar12 * fVar12;
  auVar16 = NEON_ext(auVar16,auVar18,8,1);
  fVar14 = auVar16._0_4_ + fVar14;
  fVar15 = auVar16._4_4_ + 0.0;
  fVar2 = fVar14 + fVar15;
  fVar14 = fVar14 + fVar15;
  fVar15 = 0.0;
  if (fVar2 != 0.0) {
    auVar1._4_4_ = fVar14;
    auVar1._0_4_ = fVar2;
    auVar1._8_4_ = fVar2;
    auVar1._12_4_ = fVar14;
    auVar16 = NEON_frsqrte(auVar1,4);
    auVar17._0_4_ = auVar16._0_4_ * fVar2;
    auVar17._4_4_ = auVar16._4_4_ * fVar14;
    auVar17._8_4_ = auVar16._8_4_ * fVar2;
    auVar17._12_4_ = auVar16._12_4_ * fVar14;
    auVar18 = NEON_frsqrts(auVar16,auVar17,4);
    auVar3._0_4_ = auVar16._0_4_ * auVar18._0_4_;
    auVar3._4_4_ = auVar16._4_4_ * auVar18._4_4_;
    auVar3._8_4_ = auVar16._8_4_ * auVar18._8_4_;
    auVar3._12_4_ = auVar16._12_4_ * auVar18._12_4_;
    auVar19._0_4_ = fVar2 * auVar3._0_4_;
    auVar19._4_4_ = fVar14 * auVar3._4_4_;
    auVar19._8_4_ = fVar2 * auVar3._8_4_;
    auVar19._12_4_ = fVar14 * auVar3._12_4_;
    auVar16 = NEON_frsqrts(auVar3,auVar19,4);
    fVar5 = fVar5 * auVar3._0_4_ * auVar16._0_4_;
    fVar15 = auVar3._4_4_ * auVar16._4_4_ * 0.0;
    fVar10 = fVar10 * auVar3._8_4_ * auVar16._8_4_;
    fVar12 = fVar12 * auVar3._12_4_ * auVar16._12_4_;
    iVar6 = -(uint)(fVar2 == 0.0);
    iVar9 = -(uint)(fVar14 == 0.0);
    iVar11 = -(uint)(fVar2 == 0.0);
    iVar13 = -(uint)(fVar14 == 0.0);
    fVar14 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                             CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                      CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                               SUB41(fVar5,0) & ~(byte)iVar6)));
    auVar7._0_8_ = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                            CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                     CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                              CONCAT14(SUB41(fVar15,0) & ~(byte)iVar9,fVar14))));
    auVar7[8] = SUB41(fVar10,0) & ~(byte)iVar11;
    auVar7[9] = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar11 >> 8);
    auVar7[10] = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
    auVar7[0xb] = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
    auVar8[0xc] = SUB41(fVar12,0) & ~(byte)iVar13;
    auVar8._0_12_ = auVar7;
    auVar8[0xd] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar13 >> 8);
    auVar8[0xe] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
    auVar8[0xf] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
    auVar4._0_4_ = fVar14 * (float)_DAT_01d49dc0;
    auVar4._4_4_ = (float)((ulong)auVar7._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
    auVar4._8_4_ = auVar7._8_4_ * (float)_UNK_01d49dc8;
    auVar4._12_4_ = auVar8._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
    NEON_ext(auVar4,auVar4,8,1);
    fVar2 = (float)FUN_01590400();
    fVar15 = -fVar2;
    if (0.0 <= fVar14) {
      fVar15 = fVar2;
    }
  }
  param_1[0x16d] = param_1[0x15];
  param_1[0x16c] = param_1[0x14];
  FUN_00a92cd0(fVar15,ZEXT816(0),0);
  *(undefined1 *)((long)param_1 + 0x914) = 0;
  param_1[0x16f] = extraout_var;
  param_1[0x16e] = extraout_d0;
  if (param_3 < 1) {
    fVar15 = 1.0;
  }
  else {
    fVar15 = 1.0 / (float)param_3;
  }
  *(float *)((long)param_1 + 0xb54) = fVar15;
  *(undefined8 *)((long)param_1 + 0xb4c) = 1;
  return;
}


