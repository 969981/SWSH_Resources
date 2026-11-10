/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a72150; name: FUN_00a72150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a72150(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  int iVar16;
  int iVar17;
  undefined1 auVar15 [16];
  int iVar18;
  
  lVar1 = FUN_009c5ff0();
  if ((lVar1 == 0) ||
     ((uVar2 = FUN_008f35c0(lVar1,0x800), (uVar2 & 1) == 0 &&
      (uVar2 = FUN_008f35c0(lVar1,0x1000), (uVar2 & 1) == 0)))) {
    fVar4 = _DAT_02a553d0;
    fVar5 = fRam0000000002a553d4;
    fVar6 = fRam0000000002a553d8;
    fVar7 = fRam0000000002a553dc;
  }
  else {
    fVar4 = _DAT_02a553e0;
    fVar5 = fRam0000000002a553e4;
    fVar6 = fRam0000000002a553e8;
    fVar7 = fRam0000000002a553ec;
  }
  fVar5 = (float)((uint)fVar5 ^ (uint)fVar5 & -(uint)(0.0 < fVar5));
  auVar12._0_4_ = fVar4 * fVar4;
  auVar12._4_4_ = fVar5 * fVar5;
  auVar12._8_4_ = fVar6 * fVar6;
  auVar12._12_4_ = fVar7 * fVar7;
  auVar11 = NEON_ext(auVar12,auVar12,8,1);
  fVar8 = auVar11._0_4_ + auVar12._0_4_;
  fVar10 = auVar11._4_4_ + auVar12._4_4_;
  fVar3 = fVar8 + fVar10;
  fVar8 = fVar8 + fVar10;
  if (fVar3 != 0.0) {
    auVar11._8_8_ = CONCAT44(fVar8,fVar3);
    auVar11._0_8_ = CONCAT44(fVar8,fVar3);
    lVar1 = *(long *)(param_1 + 0x450);
    auVar12 = NEON_frsqrte(auVar11,4);
    auVar15._0_4_ = auVar12._0_4_ * fVar3;
    auVar15._4_4_ = auVar12._4_4_ * fVar8;
    auVar15._8_4_ = auVar12._8_4_ * fVar3;
    auVar15._12_4_ = auVar12._12_4_ * fVar8;
    auVar11 = NEON_frsqrts(auVar12,auVar15,4);
    auVar13._0_4_ = auVar12._0_4_ * auVar11._0_4_;
    auVar13._4_4_ = auVar12._4_4_ * auVar11._4_4_;
    auVar13._8_4_ = auVar12._8_4_ * auVar11._8_4_;
    auVar13._12_4_ = auVar12._12_4_ * auVar11._12_4_;
    iVar14 = -(uint)(fVar3 == 0.0);
    iVar16 = -(uint)(fVar8 == 0.0);
    iVar17 = -(uint)(fVar3 == 0.0);
    iVar18 = -(uint)(fVar8 == 0.0);
    auVar9._0_4_ = fVar3 * auVar13._0_4_;
    auVar9._4_4_ = fVar8 * auVar13._4_4_;
    auVar9._8_4_ = fVar3 * auVar13._8_4_;
    auVar9._12_4_ = fVar8 * auVar13._12_4_;
    auVar12 = NEON_frsqrts(auVar13,auVar9,4);
    fVar4 = fVar4 * auVar13._0_4_ * auVar12._0_4_;
    fVar5 = fVar5 * auVar13._4_4_ * auVar12._4_4_;
    fVar6 = fVar6 * auVar13._8_4_ * auVar12._8_4_;
    fVar7 = fVar7 * auVar13._12_4_ * auVar12._12_4_;
    *(byte *)(lVar1 + 0x88) = SUB41(fVar6,0) & ~(byte)iVar17;
    *(byte *)(lVar1 + 0x89) = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar17 >> 8);
    *(byte *)(lVar1 + 0x8a) = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10);
    *(byte *)(lVar1 + 0x8b) = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18);
    *(byte *)(lVar1 + 0x8c) = SUB41(fVar7,0) & ~(byte)iVar18;
    *(byte *)(lVar1 + 0x8d) = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar18 >> 8);
    *(byte *)(lVar1 + 0x8e) = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
    *(byte *)(lVar1 + 0x8f) = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
    *(byte *)(lVar1 + 0x80) = SUB41(fVar4,0) & ~(byte)iVar14;
    *(byte *)(lVar1 + 0x81) = (byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar14 >> 8);
    *(byte *)(lVar1 + 0x82) = (byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
    *(byte *)(lVar1 + 0x83) = (byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
    *(byte *)(lVar1 + 0x84) = SUB41(fVar5,0) & ~(byte)iVar16;
    *(byte *)(lVar1 + 0x85) = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar16 >> 8);
    *(byte *)(lVar1 + 0x86) = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
    *(byte *)(lVar1 + 0x87) = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
  }
  return;
}


