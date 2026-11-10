/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028b210; name: FUN_0028b210
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0028b210(long param_1,long param_2,long param_3,long param_4,float *param_5,undefined8 param_6,
            long param_7)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
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
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  
  auVar5 = *(undefined1 (*) [12])(param_3 + 0x10);
  fVar10 = auVar5._0_4_ - *(float *)(param_4 + 0x10);
  fVar11 = auVar5._4_4_ - *(float *)(param_4 + 0x14);
  fVar12 = auVar5._8_4_ - *(float *)(param_4 + 0x18);
  fVar8 = *(float *)(param_2 + 4);
  fVar13 = fVar10 * fVar10;
  fVar14 = fVar11 * fVar11;
  fVar9 = *(float *)(param_1 + 4) + fVar8;
  auVar20._4_4_ = fVar14;
  auVar20._0_4_ = fVar13;
  auVar20._8_4_ = fVar12 * fVar12;
  auVar20._12_4_ = 0;
  auVar4._4_4_ = fVar14;
  auVar4._0_4_ = fVar13;
  auVar4._8_4_ = fVar12 * fVar12;
  auVar4._12_4_ = 0;
  auVar20 = NEON_ext(auVar20,auVar4,8,1);
  fVar15 = *param_5 + fVar9;
  fVar7 = auVar20._0_4_ + auVar20._4_4_;
  fVar6 = fVar13 + fVar14 + fVar7;
  fVar7 = fVar13 + fVar14 + fVar7;
  if (fVar6 < fVar15 * fVar15) {
    uVar17 = NEON_frsqrte(CONCAT44(fVar7,fVar6),4);
    fVar13 = (float)uVar17;
    fVar14 = (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frsqrts(CONCAT44(fVar14 * fVar14,fVar13 * fVar13),CONCAT44(fVar7,fVar6),4);
    fVar13 = fVar13 * (float)uVar17;
    fVar14 = fVar14 * (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frsqrts(CONCAT44(fVar14 * fVar14,fVar13 * fVar13),CONCAT44(fVar7,fVar6),4);
    fVar13 = fVar13 * (float)uVar17;
    fVar14 = fVar14 * (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frsqrts(CONCAT44(fVar14 * fVar14,fVar13 * fVar13),CONCAT44(fVar7,fVar6),4);
    fVar13 = fVar13 * (float)uVar17;
    fVar14 = fVar14 * (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frsqrts(CONCAT44(fVar14 * fVar14,fVar13 * fVar13),CONCAT44(fVar7,fVar6),4);
    uVar19 = CONCAT44(fVar7 * fVar14 * (float)((ulong)uVar17 >> 0x20),fVar6 * fVar13 * (float)uVar17
                     );
    uVar19 = uVar19 ^ (uVar19 ^ CONCAT44(fVar7,fVar6)) &
                      CONCAT44(-(uint)(fVar6 == 0.0),-(uint)(fVar6 == 0.0));
    uVar17 = NEON_frecpe(uVar19,4);
    uVar18 = NEON_frecps(uVar19,uVar17,4);
    fVar7 = (float)uVar17 * (float)uVar18;
    fVar6 = (float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar18 >> 0x20);
    uVar17 = NEON_frecps(uVar19,CONCAT44(fVar6,fVar7),4);
    fVar7 = fVar7 * (float)uVar17;
    fVar6 = fVar6 * (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frecps(uVar19,CONCAT44(fVar6,fVar7),4);
    fVar7 = fVar7 * (float)uVar17;
    fVar6 = fVar6 * (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frecps(uVar19,CONCAT44(fVar6,fVar7),4);
    fVar7 = fVar7 * (float)uVar17;
    uVar17 = NEON_frecps(uVar19,CONCAT44(fVar6 * (float)((ulong)uVar17 >> 0x20),fVar7),4);
    fVar7 = fVar7 * (float)uVar17;
    uVar16 = -(uint)((float)uVar19 <= 1e-05);
    fVar6 = (float)(_UNK_01d4ae5c & uVar16);
    fVar13 = (float)((uint)(fVar10 * fVar7) ^ ((uint)(fVar10 * fVar7) ^ _DAT_01d4ae50) & uVar16);
    fVar14 = (float)((uint)(fVar11 * fVar7) ^ ((uint)(fVar11 * fVar7) ^ _UNK_01d4ae54) & uVar16);
    fVar12 = (float)((uint)(fVar12 * fVar7) ^ ((uint)(fVar12 * fVar7) ^ _UNK_01d4ae58) & uVar16);
    fVar7 = *(float *)(param_4 + 0x10) + fVar13 * fVar8;
    fVar10 = *(float *)(param_4 + 0x14) + fVar14 * fVar8;
    fVar11 = *(float *)(param_4 + 0x18) + fVar12 * fVar8;
    fVar8 = fVar6 * fVar8 + 0.0;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar7;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar8;
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = fVar11;
    auVar3._12_4_ = fVar8;
    auVar20 = NEON_ext(auVar2,auVar3,8,1);
    pfVar1 = (float *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
    *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
    pfVar1[2] = fVar12;
    pfVar1[3] = fVar6;
    *pfVar1 = fVar13;
    pfVar1[1] = fVar14;
    *(ulong *)(pfVar1 + 6) = (ulong)auVar20._0_4_;
    *(ulong *)(pfVar1 + 4) = CONCAT44(fVar10,fVar7);
    pfVar1[3] = (float)uVar19 - fVar9;
    pfVar1[0xd] = -NAN;
    return 1;
  }
  return 0;
}


