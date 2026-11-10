/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e74780; name: FUN_00e74780
 */


/* WARNING: Removing unreachable block (ram,0x00e74804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e74780(undefined8 param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  undefined1 auVar5 [16];
  int iVar9;
  undefined1 auVar10 [12];
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar11 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  fVar3 = *param_2;
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar6 = 0.0;
  fVar15 = fVar3 * fVar3;
  auVar17._4_4_ = 0;
  auVar17._0_4_ = fVar15;
  auVar17._8_4_ = fVar7 * fVar7;
  auVar17._12_4_ = fVar8 * fVar8;
  auVar19._4_4_ = 0;
  auVar19._0_4_ = fVar15;
  auVar19._8_4_ = fVar7 * fVar7;
  auVar19._12_4_ = fVar8 * fVar8;
  auVar17 = NEON_ext(auVar17,auVar19,8,1);
  fVar15 = auVar17._0_4_ + fVar15;
  fVar16 = auVar17._4_4_ + 0.0;
  fVar2 = fVar15 + fVar16;
  fVar15 = fVar15 + fVar16;
  if (fVar2 != 0.0) {
    auVar1._4_4_ = fVar15;
    auVar1._0_4_ = fVar2;
    auVar1._8_4_ = fVar2;
    auVar1._12_4_ = fVar15;
    auVar17 = NEON_frsqrte(auVar1,4);
    auVar18._0_4_ = auVar17._0_4_ * fVar2;
    auVar18._4_4_ = auVar17._4_4_ * fVar15;
    auVar18._8_4_ = auVar17._8_4_ * fVar2;
    auVar18._12_4_ = auVar17._12_4_ * fVar15;
    auVar19 = NEON_frsqrts(auVar17,auVar18,4);
    auVar4._0_4_ = auVar17._0_4_ * auVar19._0_4_;
    auVar4._4_4_ = auVar17._4_4_ * auVar19._4_4_;
    auVar4._8_4_ = auVar17._8_4_ * auVar19._8_4_;
    auVar4._12_4_ = auVar17._12_4_ * auVar19._12_4_;
    auVar20._0_4_ = fVar2 * auVar4._0_4_;
    auVar20._4_4_ = fVar15 * auVar4._4_4_;
    auVar20._8_4_ = fVar2 * auVar4._8_4_;
    auVar20._12_4_ = fVar15 * auVar4._12_4_;
    auVar17 = NEON_frsqrts(auVar4,auVar20,4);
    fVar3 = fVar3 * auVar4._0_4_ * auVar17._0_4_;
    fVar6 = auVar4._4_4_ * auVar17._4_4_ * 0.0;
    fVar7 = fVar7 * auVar4._8_4_ * auVar17._8_4_;
    fVar8 = fVar8 * auVar4._12_4_ * auVar17._12_4_;
    iVar9 = -(uint)(fVar2 == 0.0);
    iVar12 = -(uint)(fVar15 == 0.0);
    iVar13 = -(uint)(fVar2 == 0.0);
    iVar14 = -(uint)(fVar15 == 0.0);
    fVar2 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                            CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                     CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                              SUB41(fVar3,0) & ~(byte)iVar9)));
    auVar10._0_8_ =
         CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                  CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                           CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                    CONCAT14(SUB41(fVar6,0) & ~(byte)iVar12,fVar2))));
    auVar10[8] = SUB41(fVar7,0) & ~(byte)iVar13;
    auVar10[9] = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar13 >> 8);
    auVar10[10] = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
    auVar10[0xb] = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
    auVar11[0xc] = SUB41(fVar8,0) & ~(byte)iVar14;
    auVar11._0_12_ = auVar10;
    auVar11[0xd] = (byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar14 >> 8);
    auVar11[0xe] = (byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
    auVar11[0xf] = (byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
    auVar5._0_4_ = fVar2 * (float)_DAT_01d49dc0;
    auVar5._4_4_ = (float)((ulong)auVar10._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
    auVar5._8_4_ = auVar10._8_4_ * (float)_UNK_01d49dc8;
    auVar5._12_4_ = auVar11._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
    NEON_ext(auVar5,auVar5,8,1);
    fVar3 = (float)FUN_01590400();
    fVar6 = -fVar3;
    if (0.0 <= fVar2) {
      fVar6 = fVar3;
    }
  }
  FUN_00a92cd0(fVar6,ZEXT816(0),0);
  return;
}


