/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00292310; name: FUN_00292310
 */


undefined8 FUN_00292310(void *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  float fVar20;
  undefined1 auVar22 [12];
  undefined8 uVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar37;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  byte abStack_1f0 [16];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 *local_1c8;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined1 auStack_1b0 [16];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined1 local_190 [16];
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  
  pbVar15 = abStack_1f0 + -((ulong)param_2 + 0xf & 0x1fffffff0);
  fVar20 = (float)((ulong)*(undefined8 *)((long)param_1 + 0x28) >> 0x20);
  uVar10 = param_2 - 2;
  *pbVar15 = 0;
  if (param_2 < 2) {
    uVar14 = 0;
    uVar12 = 0;
  }
  else {
    uVar8 = 0;
    lVar13 = (long)param_1 + 0x60;
    uVar14 = 1;
    uVar11 = 0;
    do {
      pbVar15[uVar14] = (byte)uVar14;
      puVar1 = (undefined8 *)(lVar13 + 8);
      lVar13 = lVar13 + 0x40;
      fVar26 = (float)((ulong)*puVar1 >> 0x20);
      bVar5 = fVar26 < fVar20;
      fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar26) & -(uint)bVar5);
      uVar16 = (uint)uVar14;
      uVar17 = (uint)uVar14;
      if (!bVar5) {
        uVar16 = uVar11;
        uVar17 = uVar8;
      }
      uVar8 = uVar17;
      uVar14 = uVar14 + 1;
      uVar11 = uVar16;
    } while (param_2 != uVar14);
    uVar14 = (ulong)uVar8;
    uVar12 = (ulong)(uVar16 & 0xff);
  }
  uVar11 = param_2 - 1;
  __src = (void *)((long)param_1 + uVar12 * 0x40);
  pbVar15[uVar14] = pbVar15[uVar11];
  memcpy(auStack_1b0,__src,0x34);
  uVar14 = (ulong)*pbVar15;
  uVar8 = 0;
  fStack_1b8 = fStack_198;
  fStack_1b4 = fStack_194;
  local_1c0 = local_1a0;
  fStack_1bc = fStack_19c;
  if (1 < uVar11) {
    uVar35 = *(undefined8 *)((long)param_1 + uVar14 * 0x40 + 0x18);
    uVar21 = *(undefined8 *)((long)param_1 + uVar14 * 0x40 + 0x10);
    uVar12 = 1;
    local_1a0 = (float)uVar21 - local_1a0;
    fStack_19c = (float)((ulong)uVar21 >> 0x20) - fStack_19c;
    fStack_198 = (float)uVar35 - fStack_198;
    fStack_194 = (float)((ulong)uVar35 >> 0x20) - fStack_194;
    local_1a0 = local_1a0 * local_1a0;
    fStack_19c = fStack_19c * fStack_19c;
    fStack_198 = fStack_198 * fStack_198;
    fStack_194 = fStack_194 * fStack_194;
    auVar23._4_4_ = fStack_19c;
    auVar23._0_4_ = local_1a0;
    auVar23._8_4_ = fStack_198;
    auVar23._12_4_ = fStack_194;
    auVar36._4_4_ = fStack_19c;
    auVar36._0_4_ = local_1a0;
    auVar36._8_4_ = fStack_198;
    auVar36._12_4_ = fStack_194;
    auVar23 = NEON_ext(auVar23,auVar36,8,1);
    fVar20 = local_1a0 + fStack_19c + auVar23._0_4_ + auVar23._4_4_;
    uVar16 = uVar8;
    do {
      bVar3 = pbVar15[uVar12];
      fVar26 = *(float *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x10) -
               (float)*(undefined8 *)((long)__src + 0x10);
      fVar28 = *(float *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x14) -
               (float)((ulong)*(undefined8 *)((long)__src + 0x10) >> 0x20);
      fVar29 = *(float *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x18) -
               (float)*(undefined8 *)((long)__src + 0x18);
      fVar30 = *(float *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x1c) -
               (float)((ulong)*(undefined8 *)((long)__src + 0x18) >> 0x20);
      auVar27._0_4_ = fVar26 * fVar26;
      auVar27._4_4_ = fVar28 * fVar28;
      auVar27._8_4_ = fVar29 * fVar29;
      auVar27._12_4_ = fVar30 * fVar30;
      auVar23 = NEON_ext(auVar27,auVar27,8,1);
      fVar26 = auVar27._0_4_ + auVar27._4_4_ + auVar23._0_4_ + auVar23._4_4_;
      bVar5 = fVar20 < fVar26;
      uVar8 = (uint)bVar3;
      if (!bVar5) {
        uVar8 = (uint)uVar14;
      }
      uVar14 = (ulong)uVar8;
      fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar26) & -(uint)bVar5);
      uVar8 = (uint)uVar12;
      if (!bVar5) {
        uVar8 = uVar16;
      }
      uVar12 = uVar12 + 1;
      uVar16 = uVar8;
    } while (uVar11 != uVar12);
  }
  pbVar19 = pbVar15 + uVar8;
  *pbVar19 = pbVar15[uVar10];
  local_1c8 = auStack_170;
  memcpy(auStack_170,(void *)((long)param_1 + uVar14 * 0x40),0x34);
  auVar24._0_4_ = auStack_170._16_4_ - local_1c0;
  auVar24._4_4_ = auStack_170._20_4_ - fStack_1bc;
  auVar24._8_4_ = auStack_170._24_4_ - fStack_1b8;
  auVar24._12_4_ = auStack_170._28_4_ - fStack_1b4;
  fVar20 = local_190._4_4_;
  auVar23 = NEON_ext(auVar24,auVar24,8,1);
  auVar33._0_12_ = local_190._0_12_;
  auVar33._12_4_ = 0;
  auVar36 = NEON_ext(auVar33,auVar33,8,1);
  fVar30 = auVar24._0_4_ * fVar20 - auVar24._4_4_ * local_190._0_4_;
  uVar21 = NEON_ext(CONCAT44(auVar24._4_4_ * local_190._8_4_ - auVar24._8_4_ * fVar20,fVar30),
                    CONCAT44(auVar23._4_4_ * fVar20 - auVar24._4_4_ * auVar36._4_4_,
                             auVar23._0_4_ * local_190._0_4_ - auVar24._0_4_ * auVar36._0_4_),4,1);
  fVar28 = (float)uVar21;
  auVar31._0_4_ = fVar28 * fVar28;
  fVar29 = (float)((ulong)uVar21 >> 0x20);
  auVar31._4_4_ = fVar29 * fVar29;
  auVar31._8_4_ = fVar30 * fVar30;
  auVar31._12_4_ = 0;
  auVar23 = NEON_ext(auVar31,auVar31,8,1);
  fVar26 = auVar23._0_4_ + auVar23._4_4_;
  fVar20 = auVar31._0_4_ + auVar31._4_4_ + fVar26;
  fVar26 = auVar31._0_4_ + auVar31._4_4_ + fVar26;
  uVar14 = CONCAT44(fVar26,fVar20);
  uVar21 = NEON_frsqrte(uVar14,4);
  fVar34 = (float)uVar21;
  fVar37 = (float)((ulong)uVar21 >> 0x20);
  uVar21 = NEON_frsqrts(CONCAT44(fVar37 * fVar37,fVar34 * fVar34),uVar14,4);
  fVar34 = fVar34 * (float)uVar21;
  fVar37 = fVar37 * (float)((ulong)uVar21 >> 0x20);
  uVar21 = NEON_frsqrts(CONCAT44(fVar37 * fVar37,fVar34 * fVar34),uVar14,4);
  fVar34 = fVar34 * (float)uVar21;
  fVar37 = fVar37 * (float)((ulong)uVar21 >> 0x20);
  uVar21 = NEON_frsqrts(CONCAT44(fVar37 * fVar37,fVar34 * fVar34),uVar14,4);
  fVar34 = fVar34 * (float)uVar21;
  fVar37 = fVar37 * (float)((ulong)uVar21 >> 0x20);
  uVar21 = NEON_frsqrts(CONCAT44(fVar37 * fVar37,fVar34 * fVar34),uVar14,4);
  uVar12 = CONCAT44(fVar26 * fVar37 * (float)((ulong)uVar21 >> 0x20),fVar20 * fVar34 * (float)uVar21
                   );
  uVar12 = uVar12 ^ (uVar12 ^ uVar14) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
  auVar32._0_4_ = -(uint)(0.0 < fVar20);
  uVar21 = NEON_frecpe(uVar12,4);
  uVar35 = NEON_frecps(uVar12,uVar21,4);
  fVar20 = (float)uVar21 * (float)uVar35;
  fVar26 = (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
  uVar21 = NEON_frecps(uVar12,CONCAT44(fVar26,fVar20),4);
  fVar20 = fVar20 * (float)uVar21;
  fVar26 = fVar26 * (float)((ulong)uVar21 >> 0x20);
  uVar21 = NEON_frecps(uVar12,CONCAT44(fVar26,fVar20),4);
  fVar20 = fVar20 * (float)uVar21;
  fVar26 = fVar26 * (float)((ulong)uVar21 >> 0x20);
  uVar21 = NEON_frecps(uVar12,CONCAT44(fVar26,fVar20),4);
  fVar20 = fVar20 * (float)uVar21;
  uVar21 = NEON_frecps(uVar12,CONCAT44(fVar26 * (float)((ulong)uVar21 >> 0x20),fVar20),4);
  fVar20 = fVar20 * (float)uVar21;
  auVar22._0_4_ = fVar28 * fVar20;
  auVar22._4_4_ = fVar29 * fVar20;
  auVar22._8_4_ = fVar30 * fVar20;
  auVar32._4_4_ = auVar32._0_4_;
  auVar32._8_4_ = auVar32._0_4_;
  auVar32._12_4_ = auVar32._0_4_;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auVar33._0_12_ ^ auVar22;
  auVar33 = auVar33 ^ auVar4 & auVar32;
  uStack_1d8 = auVar33._8_8_;
  local_1e0 = auVar33._0_8_;
  if (uVar10 == 0) {
    uVar11 = 0xffffffff;
    fVar20 = 3.4028235e+38;
    fVar26 = -3.4028235e+38;
    uVar14 = 0xff;
    uVar16 = 0xffffffff;
  }
  else {
    fVar20 = 3.4028235e+38;
    fVar26 = -3.4028235e+38;
    uVar14 = 0;
    uVar16 = 0xffffffff;
    uVar17 = uVar8;
    uVar18 = 0xffffffff;
    uVar9 = 0xffffffff;
    do {
      bVar3 = pbVar15[uVar14];
      uVar35 = *(undefined8 *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x18);
      uVar21 = *(undefined8 *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x10);
      fVar28 = ((float)uVar21 - local_1c0) * auVar33._0_4_;
      fVar29 = ((float)((ulong)uVar21 >> 0x20) - fStack_1bc) * auVar33._4_4_;
      fVar30 = ((float)uVar35 - fStack_1b8) * auVar33._8_4_;
      fVar34 = ((float)((ulong)uVar35 >> 0x20) - fStack_1b4) * auVar33._12_4_;
      auVar6._4_4_ = fVar29;
      auVar6._0_4_ = fVar28;
      auVar6._8_4_ = fVar30;
      auVar6._12_4_ = fVar34;
      auVar7._4_4_ = fVar29;
      auVar7._0_4_ = fVar28;
      auVar7._8_4_ = fVar30;
      auVar7._12_4_ = fVar34;
      auVar23 = NEON_ext(auVar6,auVar7,8,1);
      fVar28 = fVar28 + fVar29 + auVar23._0_4_ + auVar23._4_4_;
      bVar5 = fVar26 < fVar28;
      uVar8 = (uint)uVar14;
      if (!bVar5) {
        uVar8 = uVar17;
      }
      uVar2 = (uint)bVar3;
      if (!bVar5) {
        uVar2 = uVar9;
      }
      fVar26 = (float)((uint)fVar26 ^ ((uint)fVar26 ^ (uint)fVar28) & -(uint)bVar5);
      uVar11 = (uint)bVar3;
      uVar17 = (uint)uVar14;
      if (fVar28 >= fVar20) {
        uVar11 = uVar18;
        uVar17 = uVar16;
      }
      uVar16 = uVar17;
      uVar14 = uVar14 + 1;
      fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar28) & -(uint)(fVar28 < fVar20));
      uVar17 = uVar8;
      uVar18 = uVar11;
      uVar9 = uVar2;
    } while (uVar10 != uVar14);
    pbVar19 = pbVar15 + uVar8;
    uVar14 = (ulong)(uVar2 & 0xff);
  }
  uVar10 = param_2 - 3;
  *pbVar19 = pbVar15[uVar10];
  memcpy(auStack_130,(void *)((long)param_1 + uVar14 * 0x40),0x34);
  if (uVar10 != uVar16) {
    uVar8 = uVar16;
  }
  if (0.0 < fVar26 * fVar20) {
    if (uVar10 != 0) {
      fVar20 = -3.4028235e+38;
      uVar14 = 0;
      uVar16 = uVar11;
      uVar17 = uVar8;
      do {
        bVar3 = pbVar15[uVar14];
        auVar25._0_4_ =
             (*(float *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x10) - local_1c0) * (float)local_1e0
        ;
        auVar25._4_4_ =
             (*(float *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x14) - fStack_1bc) * local_1e0._4_4_
        ;
        auVar25._8_4_ =
             (*(float *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x18) - fStack_1b8) *
             (float)uStack_1d8;
        auVar25._12_4_ =
             (*(float *)((long)param_1 + (ulong)bVar3 * 0x40 + 0x1c) - fStack_1b4) *
             uStack_1d8._4_4_;
        auVar23 = NEON_ext(auVar25,auVar25,8,1);
        fVar26 = auVar25._0_4_ + auVar25._4_4_ + auVar23._0_4_ + auVar23._4_4_;
        bVar5 = fVar20 < fVar26;
        fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar26) & -(uint)bVar5);
        uVar8 = (uint)uVar14;
        if (!bVar5) {
          uVar8 = uVar17;
        }
        uVar14 = uVar14 + 1;
        uVar11 = (uint)bVar3;
        if (!bVar5) {
          uVar11 = uVar16;
        }
        uVar16 = uVar11;
        uVar17 = uVar8;
      } while (uVar10 != uVar14);
    }
  }
  uVar14 = (ulong)(param_2 - 4);
  pbVar15[uVar8] = pbVar15[uVar14];
  memcpy(auStack_f0,(void *)((long)param_1 + (ulong)(uVar11 & 0xff) * 0x40),0x34);
  if (param_2 - 4 == 0) {
    uVar14 = 0xff;
  }
  else {
    fVar20 = 3.4028235e+38;
    uVar10 = 0xffffffff;
    do {
      fVar26 = (float)((ulong)*(undefined8 *)((long)param_1 + (ulong)*pbVar15 * 0x40 + 0x28) >> 0x20
                      );
      bVar5 = fVar26 < fVar20;
      fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar26) & -(uint)bVar5);
      uVar8 = (uint)*pbVar15;
      if (!bVar5) {
        uVar8 = uVar10;
      }
      uVar14 = uVar14 - 1;
      pbVar15 = pbVar15 + 1;
      uVar10 = uVar8;
    } while (uVar14 != 0);
    uVar14 = (ulong)(uVar8 & 0xff);
  }
  memcpy(auStack_b0,(void *)((long)param_1 + uVar14 * 0x40),0x34);
  memcpy(param_1,auStack_1b0,0x34);
  memcpy((void *)((long)param_1 + 0x40),local_1c8,0x34);
  memcpy((void *)((long)param_1 + 0x80),auStack_130,0x34);
  memcpy((void *)((long)param_1 + 0xc0),auStack_f0,0x34);
  memcpy((void *)((long)param_1 + 0x100),auStack_b0,0x34);
  return 5;
}


