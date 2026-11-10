/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00260f00; name: FUN_00260f00
 */


undefined1  [16] FUN_00260f00(long param_1,undefined8 param_2,uint *param_3,ulong *param_4)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  lVar13 = *(long *)(param_1 + 8);
  uVar10 = FUN_00222070(lVar13);
  *param_3 = uVar10;
  fVar14 = *(float *)(lVar13 + 0x10);
  if (0.0 < fVar14) {
    lVar12 = *(long *)(lVar13 + 0x90);
    lVar11 = *(long *)(lVar12 + 0x28);
    lVar12 = lVar11 + (ulong)*(byte *)(lVar12 + 0x27) * 0x14 + (ulong)*(byte *)(lVar12 + 0x26) * 0xc
             + ((ulong)*(ushort *)(lVar12 + 0x24) & 0x7fff) * 2;
    puVar1 = (undefined8 *)(*(long *)(lVar13 + 0xa0) + (ulong)uVar10 * 0xc);
    fVar21 = (float)puVar1[1];
    uVar35 = *puVar1;
    fVar19 = (float)uVar35;
    fVar20 = (float)((ulong)uVar35 >> 0x20);
    uVar10 = uVar10 * 3;
    pauVar2 = (undefined1 (*) [12])(lVar11 + (ulong)*(byte *)(lVar12 + (ulong)uVar10) * 0x14);
    fVar23 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar22 = (float)*(undefined8 *)*pauVar2;
    fVar24 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar41 = *(undefined1 (*) [16])(lVar11 + (ulong)*(byte *)(lVar12 + (ulong)(uVar10 + 1)) * 0x14)
    ;
    auVar38 = *(undefined1 (*) [16])(lVar11 + (ulong)*(byte *)(lVar12 + (ulong)(uVar10 + 2)) * 0x14)
    ;
    fVar18 = auVar41._4_4_;
    fVar29 = auVar38._4_4_;
    fVar26 = auVar41._8_4_;
    auVar25._0_12_ = auVar41._0_12_;
    auVar25._12_4_ = 0;
    auVar40 = NEON_ext(auVar25,auVar25,8,1);
    fVar30 = auVar38._8_4_;
    fVar15 = auVar41._0_4_;
    auVar28._0_12_ = auVar38._0_12_;
    auVar28._12_4_ = 0;
    auVar41 = NEON_ext(auVar28,auVar28,8,1);
    fVar32 = fVar19 * fVar22;
    fVar33 = fVar20 * fVar24;
    auVar8._4_4_ = fVar33;
    auVar8._0_4_ = fVar32;
    auVar8._8_4_ = fVar21 * fVar23;
    auVar8._12_4_ = 0;
    auVar9._4_4_ = fVar33;
    auVar9._0_4_ = fVar32;
    auVar9._8_4_ = fVar21 * fVar23;
    auVar9._12_4_ = 0;
    auVar36 = NEON_ext(auVar8,auVar9,8,1);
    fVar17 = auVar38._0_4_;
    fVar27 = fVar15 * fVar29 - fVar18 * fVar17;
    auVar37._0_4_ = fVar19 * fVar15;
    auVar37._4_4_ = fVar20 * fVar18;
    auVar37._8_4_ = fVar21 * fVar26;
    auVar37._12_4_ = 0;
    auVar38 = NEON_ext(auVar37,auVar37,8,1);
    uVar31 = NEON_ext(CONCAT44(fVar18 * fVar30 - fVar26 * fVar29,fVar27),
                      CONCAT44(auVar40._4_4_ * fVar29 - fVar18 * auVar41._4_4_,
                               auVar40._0_4_ * fVar17 - fVar15 * auVar41._0_4_),4,1);
    auVar39._0_4_ = fVar19 * fVar17;
    auVar39._4_4_ = fVar20 * fVar29;
    auVar39._8_4_ = fVar21 * fVar30;
    auVar39._12_4_ = 0;
    auVar41 = NEON_ext(auVar39,auVar39,8,1);
    fVar34 = fVar14 - (auVar37._0_4_ + auVar37._4_4_ + auVar38._0_4_ + auVar38._4_4_);
    fVar33 = fVar14 - (fVar32 + fVar33 + auVar36._0_4_ + auVar36._4_4_);
    fVar14 = fVar14 - (auVar39._0_4_ + auVar39._4_4_ + auVar41._0_4_ + auVar41._4_4_);
    auVar42._0_4_ = fVar22 * (float)uVar31;
    fVar32 = (float)((ulong)uVar31 >> 0x20);
    auVar42._4_4_ = fVar24 * fVar32;
    auVar42._8_4_ = fVar23 * fVar27;
    auVar42._12_4_ = 0;
    auVar41 = NEON_ext(auVar42,auVar42,8,1);
    fVar15 = fVar17 * fVar34 - fVar15 * fVar14;
    fVar17 = fVar29 * fVar34 - fVar18 * fVar14;
    fVar18 = fVar30 * fVar34 - fVar26 * fVar14;
    fVar14 = 0.0 - fVar14 * 0.0;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = *pauVar2;
    auVar5._12_4_ = 0;
    auVar5._0_12_ = *pauVar2;
    auVar40 = NEON_ext(auVar4,auVar5,8,1);
    auVar38._4_4_ = fVar17;
    auVar38._0_4_ = fVar15;
    auVar38._8_4_ = fVar18;
    auVar38._12_4_ = fVar14;
    auVar36._4_4_ = fVar17;
    auVar36._0_4_ = fVar15;
    auVar36._8_4_ = fVar18;
    auVar36._12_4_ = fVar14;
    auVar38 = NEON_ext(auVar38,auVar36,8,1);
    uVar35 = NEON_ext(CONCAT44(fVar17,fVar15),(ulong)(uint)auVar38._0_4_,4,1);
    fVar18 = fVar22 * (float)uVar35 - fVar24 * fVar15;
    uVar35 = NEON_ext(CONCAT44(fVar24 * (float)((ulong)uVar35 >> 0x20) - fVar23 * fVar17,fVar18),
                      CONCAT44(auVar40._4_4_ * fVar17 - fVar24 * 0.0,
                               auVar40._0_4_ * fVar15 - fVar22 * auVar38._0_4_),4,1);
    fVar15 = auVar41._0_4_ + auVar41._4_4_;
    fVar14 = auVar42._0_4_ + auVar42._4_4_ + fVar15;
    fVar15 = auVar42._0_4_ + auVar42._4_4_ + fVar15;
    fVar17 = (float)uVar35 - (float)uVar31 * fVar33;
    fVar22 = (float)((ulong)uVar35 >> 0x20) - fVar32 * fVar33;
    fVar18 = fVar18 - fVar27 * fVar33;
    fVar24 = 0.0 - fVar33 * 0.0;
    auVar6._4_4_ = fVar22;
    auVar6._0_4_ = fVar17;
    auVar6._8_4_ = fVar18;
    auVar6._12_4_ = fVar24;
    auVar7._4_4_ = fVar22;
    auVar7._0_4_ = fVar17;
    auVar7._8_4_ = fVar18;
    auVar7._12_4_ = fVar24;
    auVar41 = NEON_ext(auVar6,auVar7,8,1);
    uVar35 = NEON_frecpe(CONCAT44(fVar15,fVar14),4);
    uVar31 = NEON_frecps(CONCAT44(fVar15,fVar14),uVar35,4);
    fVar18 = (float)uVar35 * (float)uVar31;
    fVar24 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar31 >> 0x20);
    uVar35 = NEON_frecps(CONCAT44(fVar15,fVar14),CONCAT44(fVar24,fVar18),4);
    fVar18 = fVar18 * (float)uVar35;
    fVar24 = fVar24 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frecps(CONCAT44(fVar15,fVar14),CONCAT44(fVar24,fVar18),4);
    fVar18 = fVar18 * (float)uVar35;
    fVar24 = fVar24 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frecps(CONCAT44(fVar15,fVar14),CONCAT44(fVar24,fVar18),4);
    fVar18 = fVar18 * (float)uVar35;
    uVar35 = NEON_frecps(CONCAT44(fVar15,fVar14),
                         CONCAT44(fVar24 * (float)((ulong)uVar35 >> 0x20),fVar18),4);
    fVar18 = fVar18 * (float)uVar35;
    auVar16._0_4_ = fVar17 * fVar18;
    auVar16._4_4_ = fVar22 * fVar18;
    auVar16._8_4_ = auVar41._0_4_ * fVar18;
    fVar18 = (fVar19 - auVar16._0_4_) * (fVar19 - auVar16._0_4_);
    fVar17 = (fVar20 - auVar16._4_4_) * (fVar20 - auVar16._4_4_);
    fVar14 = (fVar21 - auVar16._8_4_) * (fVar21 - auVar16._8_4_);
    auVar40._4_4_ = fVar17;
    auVar40._0_4_ = fVar18;
    auVar40._8_4_ = fVar14;
    auVar40._12_4_ = 0;
    auVar3._4_4_ = fVar17;
    auVar3._0_4_ = fVar18;
    auVar3._8_4_ = fVar14;
    auVar3._12_4_ = 0;
    auVar41 = NEON_ext(auVar40,auVar3,8,1);
    fVar15 = auVar41._0_4_ + auVar41._4_4_;
    fVar14 = fVar18 + fVar17 + fVar15;
    fVar15 = fVar18 + fVar17 + fVar15;
    uVar35 = NEON_frsqrte(CONCAT44(fVar15,fVar14),4);
    fVar18 = (float)uVar35;
    fVar17 = (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar18 * fVar18),CONCAT44(fVar15,fVar14),4);
    fVar18 = fVar18 * (float)uVar35;
    fVar17 = fVar17 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar18 * fVar18),CONCAT44(fVar15,fVar14),4);
    fVar18 = fVar18 * (float)uVar35;
    fVar17 = fVar17 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar18 * fVar18),CONCAT44(fVar15,fVar14),4);
    fVar18 = fVar18 * (float)uVar35;
    fVar17 = fVar17 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(CONCAT44(fVar17 * fVar17,fVar18 * fVar18),CONCAT44(fVar15,fVar14),4);
    fVar18 = fVar14 * fVar18 * (float)uVar35;
    fVar17 = fVar15 * fVar17 * (float)((ulong)uVar35 >> 0x20);
    *param_4 = CONCAT44(fVar17,fVar18) ^
               (CONCAT44(fVar17,fVar18) ^ CONCAT44(fVar15,fVar14)) &
               CONCAT44(-(uint)(fVar14 == 0.0),-(uint)(fVar14 == 0.0));
    auVar16._12_4_ = 0;
    return auVar16;
  }
  auVar41._12_4_ = 0;
  auVar41._0_12_ = *(undefined1 (*) [12])(*(long *)(lVar13 + 0xa0) + (long)(int)uVar10 * 0xc);
  return auVar41;
}


