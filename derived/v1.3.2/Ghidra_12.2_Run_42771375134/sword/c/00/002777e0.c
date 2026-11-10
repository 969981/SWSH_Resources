/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002777e0; name: FUN_002777e0
 */


undefined1  [16] FUN_002777e0(long param_1,undefined8 *param_2,uint *param_3,ulong *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 local_40;
  ulong uStack_38;
  
  fVar15 = (float)param_2[1];
  fVar9 = (float)*param_2;
  fVar14 = (float)((ulong)*param_2 >> 0x20);
  auVar39 = *(undefined1 (*) [16])(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uStack_38 = (ulong)(uint)((float)*(undefined8 *)(param_1 + 0x28) * fVar9 +
                            *(float *)(param_1 + 0x38) * fVar14 + auVar39._8_4_ * fVar15);
  local_40 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar9 +
                      *(float *)(param_1 + 0x34) * fVar14 + auVar39._4_4_ * fVar15,
                      (float)*(undefined8 *)(param_1 + 0x20) * fVar9 +
                      *(float *)(param_1 + 0x30) * fVar14 + auVar39._0_4_ * fVar15);
  uVar5 = FUN_00222070(lVar1,&local_40);
  *param_3 = uVar5;
  fVar9 = *(float *)(lVar1 + 0x10);
  if (fVar9 <= 0.0) {
    puVar3 = (undefined8 *)(*(long *)(lVar1 + 0xa0) + (long)(int)uVar5 * 0xc);
    fVar9 = (float)puVar3[1];
    uVar33 = *puVar3;
    fVar14 = (float)uVar33;
    fVar15 = (float)((ulong)uVar33 >> 0x20);
  }
  else {
    lVar7 = *(long *)(lVar1 + 0x90);
    lVar6 = *(long *)(lVar7 + 0x28);
    puVar3 = (undefined8 *)(*(long *)(lVar1 + 0xa0) + (ulong)uVar5 * 0xc);
    fVar12 = (float)puVar3[1];
    uVar33 = *puVar3;
    fVar13 = (float)uVar33;
    fVar8 = (float)((ulong)uVar33 >> 0x20);
    uVar5 = uVar5 * 3;
    lVar1 = lVar6 + (ulong)*(byte *)(lVar7 + 0x27) * 0x14 + (ulong)*(byte *)(lVar7 + 0x26) * 0xc +
            ((ulong)*(ushort *)(lVar7 + 0x24) & 0x7fff) * 2;
    auVar39 = *(undefined1 (*) [16])(lVar6 + (ulong)*(byte *)(lVar1 + (ulong)(uVar5 + 1)) * 0x14);
    auVar34 = *(undefined1 (*) [16])(lVar6 + (ulong)*(byte *)(lVar1 + (ulong)uVar5) * 0x14);
    fVar19 = auVar34._4_4_;
    auVar36 = *(undefined1 (*) [16])(lVar6 + (ulong)*(byte *)(lVar1 + (ulong)(uVar5 + 2)) * 0x14);
    fVar15 = auVar39._4_4_;
    fVar27 = auVar36._4_4_;
    fVar20 = auVar34._8_4_;
    auVar17._0_12_ = auVar34._0_12_;
    auVar17._12_4_ = 0;
    fVar16 = auVar39._8_4_;
    auVar22._0_12_ = auVar39._0_12_;
    auVar22._12_4_ = 0;
    auVar38 = NEON_ext(auVar22,auVar22,8,1);
    fVar28 = auVar36._8_4_;
    fVar14 = auVar39._0_4_;
    auVar25._0_12_ = auVar36._0_12_;
    auVar25._12_4_ = 0;
    auVar39 = NEON_ext(auVar25,auVar25,8,1);
    fVar11 = auVar34._0_4_;
    fVar30 = fVar13 * fVar11;
    fVar31 = fVar8 * fVar19;
    auVar26._4_4_ = fVar31;
    auVar26._0_4_ = fVar30;
    auVar26._8_4_ = fVar12 * fVar20;
    auVar26._12_4_ = 0;
    auVar4._4_4_ = fVar31;
    auVar4._0_4_ = fVar30;
    auVar4._8_4_ = fVar12 * fVar20;
    auVar4._12_4_ = 0;
    auVar34 = NEON_ext(auVar26,auVar4,8,1);
    fVar24 = auVar36._0_4_;
    fVar23 = fVar14 * fVar27 - fVar15 * fVar24;
    auVar35._0_4_ = fVar13 * fVar14;
    auVar35._4_4_ = fVar8 * fVar15;
    auVar35._8_4_ = fVar12 * fVar16;
    auVar35._12_4_ = 0;
    auVar36 = NEON_ext(auVar35,auVar35,8,1);
    uVar29 = NEON_ext(CONCAT44(fVar15 * fVar28 - fVar16 * fVar27,fVar23),
                      CONCAT44(auVar38._4_4_ * fVar27 - fVar15 * auVar39._4_4_,
                               auVar38._0_4_ * fVar24 - fVar14 * auVar39._0_4_),4,1);
    auVar37._0_4_ = fVar13 * fVar24;
    auVar37._4_4_ = fVar8 * fVar27;
    auVar37._8_4_ = fVar12 * fVar28;
    auVar37._12_4_ = 0;
    auVar39 = NEON_ext(auVar37,auVar37,8,1);
    fVar32 = fVar9 - (auVar35._0_4_ + auVar35._4_4_ + auVar36._0_4_ + auVar36._4_4_);
    fVar31 = fVar9 - (fVar30 + fVar31 + auVar34._0_4_ + auVar34._4_4_);
    fVar9 = fVar9 - (auVar37._0_4_ + auVar37._4_4_ + auVar39._0_4_ + auVar39._4_4_);
    auVar40._0_4_ = fVar11 * (float)uVar29;
    fVar30 = (float)((ulong)uVar29 >> 0x20);
    auVar40._4_4_ = fVar19 * fVar30;
    auVar40._8_4_ = fVar20 * fVar23;
    auVar40._12_4_ = 0;
    auVar39 = NEON_ext(auVar40,auVar40,8,1);
    fVar14 = fVar24 * fVar32 - fVar14 * fVar9;
    fVar15 = fVar27 * fVar32 - fVar15 * fVar9;
    fVar16 = fVar28 * fVar32 - fVar16 * fVar9;
    fVar9 = 0.0 - fVar9 * 0.0;
    auVar26 = NEON_ext(auVar17,auVar17,8,1);
    auVar36._4_4_ = fVar15;
    auVar36._0_4_ = fVar14;
    auVar36._8_4_ = fVar16;
    auVar36._12_4_ = fVar9;
    auVar38._4_4_ = fVar15;
    auVar38._0_4_ = fVar14;
    auVar38._8_4_ = fVar16;
    auVar38._12_4_ = fVar9;
    auVar34 = NEON_ext(auVar36,auVar38,8,1);
    uVar33 = NEON_ext(CONCAT44(fVar15,fVar14),(ulong)(uint)auVar34._0_4_,4,1);
    fVar9 = fVar11 * (float)uVar33 - fVar19 * fVar14;
    uVar33 = NEON_ext(CONCAT44(fVar19 * (float)((ulong)uVar33 >> 0x20) - fVar20 * fVar15,fVar9),
                      CONCAT44(auVar26._4_4_ * fVar15 - fVar19 * 0.0,
                               auVar26._0_4_ * fVar14 - fVar11 * auVar34._0_4_),4,1);
    fVar15 = auVar39._0_4_ + auVar39._4_4_;
    fVar14 = auVar40._0_4_ + auVar40._4_4_ + fVar15;
    fVar15 = auVar40._0_4_ + auVar40._4_4_ + fVar15;
    auVar18._0_4_ = (float)uVar33 - (float)uVar29 * fVar31;
    auVar18._4_4_ = (float)((ulong)uVar33 >> 0x20) - fVar30 * fVar31;
    auVar18._8_4_ = fVar9 - fVar23 * fVar31;
    auVar18._12_4_ = 0.0 - fVar31 * 0.0;
    auVar39 = NEON_ext(auVar18,auVar18,8,1);
    uVar33 = NEON_frecpe(CONCAT44(fVar15,fVar14),4);
    uVar29 = NEON_frecps(CONCAT44(fVar15,fVar14),uVar33,4);
    fVar9 = (float)uVar33 * (float)uVar29;
    fVar16 = (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
    uVar33 = NEON_frecps(CONCAT44(fVar15,fVar14),CONCAT44(fVar16,fVar9),4);
    fVar9 = fVar9 * (float)uVar33;
    fVar16 = fVar16 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frecps(CONCAT44(fVar15,fVar14),CONCAT44(fVar16,fVar9),4);
    fVar9 = fVar9 * (float)uVar33;
    fVar16 = fVar16 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frecps(CONCAT44(fVar15,fVar14),CONCAT44(fVar16,fVar9),4);
    fVar9 = fVar9 * (float)uVar33;
    uVar33 = NEON_frecps(CONCAT44(fVar15,fVar14),
                         CONCAT44(fVar16 * (float)((ulong)uVar33 >> 0x20),fVar9),4);
    fVar9 = fVar9 * (float)uVar33;
    fVar14 = auVar18._0_4_ * fVar9;
    fVar15 = auVar18._4_4_ * fVar9;
    fVar9 = auVar39._0_4_ * fVar9;
    fVar16 = (fVar13 - fVar14) * (fVar13 - fVar14);
    fVar11 = (fVar8 - fVar15) * (fVar8 - fVar15);
    fVar13 = (fVar12 - fVar9) * (fVar12 - fVar9);
    auVar39._4_4_ = fVar11;
    auVar39._0_4_ = fVar16;
    auVar39._8_4_ = fVar13;
    auVar39._12_4_ = 0;
    auVar34._4_4_ = fVar11;
    auVar34._0_4_ = fVar16;
    auVar34._8_4_ = fVar13;
    auVar34._12_4_ = 0;
    auVar39 = NEON_ext(auVar39,auVar34,8,1);
    fVar8 = auVar39._0_4_ + auVar39._4_4_;
    fVar13 = fVar16 + fVar11 + fVar8;
    fVar8 = fVar16 + fVar11 + fVar8;
    uVar33 = NEON_frsqrte(CONCAT44(fVar8,fVar13),4);
    fVar16 = (float)uVar33;
    fVar11 = (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(CONCAT44(fVar11 * fVar11,fVar16 * fVar16),CONCAT44(fVar8,fVar13),4);
    fVar16 = fVar16 * (float)uVar33;
    fVar11 = fVar11 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(CONCAT44(fVar11 * fVar11,fVar16 * fVar16),CONCAT44(fVar8,fVar13),4);
    fVar16 = fVar16 * (float)uVar33;
    fVar11 = fVar11 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(CONCAT44(fVar11 * fVar11,fVar16 * fVar16),CONCAT44(fVar8,fVar13),4);
    fVar16 = fVar16 * (float)uVar33;
    fVar11 = fVar11 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(CONCAT44(fVar11 * fVar11,fVar16 * fVar16),CONCAT44(fVar8,fVar13),4);
    uVar21 = CONCAT44(fVar8 * fVar11 * (float)((ulong)uVar33 >> 0x20),
                      fVar13 * fVar16 * (float)uVar33);
    *param_4 = uVar21 ^ (uVar21 ^ CONCAT44(fVar8,fVar13)) &
                        CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  }
  auVar10._0_4_ =
       *(float *)(puVar2 + 6) +
       (float)*puVar2 * fVar14 + *(float *)(puVar2 + 2) * fVar15 + *(float *)(puVar2 + 4) * fVar9;
  auVar10._4_4_ =
       *(float *)((long)puVar2 + 0x34) +
       (float)((ulong)*puVar2 >> 0x20) * fVar14 + *(float *)((long)puVar2 + 0x14) * fVar15 +
       *(float *)((long)puVar2 + 0x24) * fVar9;
  auVar10._8_4_ =
       *(float *)(puVar2 + 7) +
       (float)puVar2[1] * fVar14 + *(float *)(puVar2 + 3) * fVar15 + *(float *)(puVar2 + 5) * fVar9;
  auVar10._12_4_ = *(float *)((long)puVar2 + 0x3c) + 0.0;
  return auVar10;
}


