/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026ef40; name: FUN_0026ef40
 */


void FUN_0026ef40(undefined8 param_1,float *param_2,float *param_3,undefined8 *param_4,
                 undefined1 (*param_5) [12],undefined4 param_6,float *param_7,undefined8 *param_8,
                 long param_9,uint *param_10)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  
  fVar23 = *param_7;
  fVar11 = param_7[1];
  fVar12 = param_7[2];
  fVar13 = param_7[3];
  auVar21._0_4_ = (float)*param_8 - fVar23;
  auVar21._4_4_ = (float)((ulong)*param_8 >> 0x20) - fVar11;
  auVar21._8_4_ = (float)param_8[1] - fVar12;
  auVar21._12_4_ = (float)((ulong)param_8[1] >> 0x20) - fVar13;
  fVar19 = (float)*(undefined8 *)(*param_5 + 8);
  fVar20 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
  fVar17 = (float)*(undefined8 *)*param_5;
  fVar18 = (float)((ulong)*(undefined8 *)*param_5 >> 0x20);
  auVar26 = NEON_ext(auVar21,auVar21,8,1);
  auVar32._12_4_ = fVar20;
  auVar32._0_12_ = *param_5;
  auVar40._12_4_ = fVar20;
  auVar40._0_12_ = *param_5;
  auVar32 = NEON_ext(auVar32,auVar40,8,1);
  fVar38 = auVar21._0_4_ * fVar18 - auVar21._4_4_ * fVar17;
  uVar45 = NEON_ext(CONCAT44(auVar21._4_4_ * fVar19 - auVar21._8_4_ * fVar18,fVar38),
                    CONCAT44(auVar26._4_4_ * fVar18 - auVar21._4_4_ * auVar32._4_4_,
                             auVar26._0_4_ * fVar17 - auVar21._0_4_ * auVar32._0_4_),4,1);
  fVar36 = (float)uVar45;
  fVar37 = (float)((ulong)uVar45 >> 0x20);
  auVar27._0_4_ = fVar23 * fVar36;
  auVar27._4_4_ = fVar11 * fVar37;
  auVar27._8_4_ = fVar12 * fVar38;
  auVar27._12_4_ = fVar13 * 0.0;
  auVar40 = NEON_ext(auVar27,auVar27,8,1);
  fVar25 = *param_2;
  fVar29 = param_2[1];
  fVar30 = param_2[2];
  fVar35 = param_2[3];
  fVar16 = auVar27._0_4_ + auVar27._4_4_ + auVar40._0_4_ + auVar40._4_4_;
  fVar42 = fVar25 * fVar36;
  fVar43 = fVar29 * fVar37;
  auVar26._4_4_ = fVar43;
  auVar26._0_4_ = fVar42;
  auVar26._8_4_ = fVar30 * fVar38;
  auVar26._12_4_ = fVar35 * 0.0;
  auVar10._4_4_ = fVar43;
  auVar10._0_4_ = fVar42;
  auVar10._8_4_ = fVar30 * fVar38;
  auVar10._12_4_ = fVar35 * 0.0;
  auVar40 = NEON_ext(auVar26,auVar10,8,1);
  fVar42 = fVar42 + fVar43 + auVar40._0_4_ + auVar40._4_4_;
  auVar46._0_4_ = *param_3 * fVar36;
  auVar46._4_4_ = param_3[1] * fVar37;
  auVar46._8_4_ = param_3[2] * fVar38;
  auVar46._12_4_ = param_3[3] * 0.0;
  auVar40 = NEON_ext(auVar46,auVar46,8,1);
  if ((fVar42 - fVar16) * ((auVar46._0_4_ + auVar46._4_4_ + auVar40._0_4_ + auVar40._4_4_) - fVar16)
      <= 0.0) {
    auVar41._0_4_ = *param_3 - fVar25;
    auVar41._4_4_ = param_3[1] - fVar29;
    auVar41._8_4_ = param_3[2] - fVar30;
    auVar41._12_4_ = param_3[3] - fVar35;
    fVar36 = fVar36 * auVar41._0_4_;
    fVar37 = fVar37 * auVar41._4_4_;
    auVar8._4_4_ = fVar37;
    auVar8._0_4_ = fVar36;
    auVar8._8_4_ = fVar38 * auVar41._8_4_;
    auVar8._12_4_ = auVar41._12_4_ * 0.0;
    auVar9._4_4_ = fVar37;
    auVar9._0_4_ = fVar36;
    auVar9._8_4_ = fVar38 * auVar41._8_4_;
    auVar9._12_4_ = auVar41._12_4_ * 0.0;
    auVar40 = NEON_ext(auVar8,auVar9,8,1);
    fVar43 = auVar40._0_4_ + auVar40._4_4_;
    fVar38 = fVar36 + fVar37 + fVar43;
    fVar43 = fVar36 + fVar37 + fVar43;
    if (fVar38 != 0.0) {
      uVar45 = NEON_frecpe(CONCAT44(fVar43,fVar38),4);
      uVar44 = NEON_frecps(CONCAT44(fVar43,fVar38),uVar45,4);
      fVar36 = (float)uVar45 * (float)uVar44;
      fVar37 = (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar44 >> 0x20);
      uVar45 = NEON_frecps(CONCAT44(fVar43,fVar38),CONCAT44(fVar37,fVar36),4);
      fVar36 = fVar36 * (float)uVar45;
      fVar37 = fVar37 * (float)((ulong)uVar45 >> 0x20);
      uVar45 = NEON_frecps(CONCAT44(fVar43,fVar38),CONCAT44(fVar37,fVar36),4);
      fVar36 = fVar36 * (float)uVar45;
      fVar37 = fVar37 * (float)((ulong)uVar45 >> 0x20);
      uVar45 = NEON_frecps(CONCAT44(fVar43,fVar38),CONCAT44(fVar37,fVar36),4);
      fVar36 = fVar36 * (float)uVar45;
      uVar45 = NEON_frecps(CONCAT44(fVar43,fVar38),
                           CONCAT44(fVar37 * (float)((ulong)uVar45 >> 0x20),fVar36),4);
      fVar16 = (fVar16 - fVar42) * fVar36 * (float)uVar45;
      fVar25 = fVar25 + auVar41._0_4_ * fVar16;
      fVar29 = fVar29 + auVar41._4_4_ * fVar16;
      auVar28._0_8_ = CONCAT44(fVar29,fVar25);
      auVar28._8_4_ = fVar30 + auVar41._8_4_ * fVar16;
      auVar28._12_4_ = fVar35 + auVar41._12_4_ * fVar16;
      auVar40 = NEON_ext(auVar28,auVar28,8,1);
      fVar16 = auVar40._0_4_;
      auVar40 = NEON_ext(auVar41,auVar41,8,1);
      fVar30 = fVar17 * auVar41._4_4_ - fVar18 * auVar41._0_4_;
      uVar45 = NEON_ext(CONCAT44(fVar18 * auVar41._8_4_ - fVar19 * auVar41._4_4_,fVar30),
                        CONCAT44(auVar32._4_4_ * auVar41._4_4_ - fVar18 * auVar40._4_4_,
                                 auVar32._0_4_ * auVar41._0_4_ - fVar17 * auVar40._0_4_),4,1);
      auVar31._0_4_ = (float)uVar45 * (fVar25 - fVar23);
      fVar35 = (float)((ulong)uVar45 >> 0x20);
      auVar31._4_4_ = fVar35 * (fVar29 - fVar11);
      auVar31._8_4_ = fVar30 * (fVar16 - fVar12);
      auVar31._12_4_ = (0.0 - fVar13) * 0.0;
      auVar32 = NEON_ext(auVar31,auVar31,8,1);
      auVar33._0_4_ = auVar21._0_4_ * (float)uVar45;
      auVar33._4_4_ = auVar21._4_4_ * fVar35;
      auVar33._8_4_ = auVar21._8_4_ * fVar30;
      auVar33._12_4_ = auVar21._12_4_ * 0.0;
      auVar40 = NEON_ext(auVar33,auVar33,8,1);
      fVar30 = auVar40._0_4_ + auVar40._4_4_;
      uVar45 = CONCAT44(auVar33._0_4_ + auVar33._4_4_ + fVar30,
                        auVar33._0_4_ + auVar33._4_4_ + fVar30);
      uVar44 = NEON_frecpe(uVar45,4);
      uVar39 = NEON_frecps(uVar45,uVar44,4);
      fVar30 = (float)uVar44 * (float)uVar39;
      fVar35 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar39 >> 0x20);
      uVar44 = NEON_frecps(uVar45,CONCAT44(fVar35,fVar30),4);
      fVar30 = fVar30 * (float)uVar44;
      fVar35 = fVar35 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar45,CONCAT44(fVar35,fVar30),4);
      fVar30 = fVar30 * (float)uVar44;
      fVar35 = fVar35 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar45,CONCAT44(fVar35,fVar30),4);
      fVar30 = fVar30 * (float)uVar44;
      uVar45 = NEON_frecps(uVar45,CONCAT44(fVar35 * (float)((ulong)uVar44 >> 0x20),fVar30),4);
      fVar30 = (auVar31._0_4_ + auVar31._4_4_ + auVar32._0_4_ + auVar32._4_4_) *
               fVar30 * (float)uVar45;
      uVar45 = NEON_fmov(0x3f800000,4);
      bVar3 = (float)uVar45 < fVar30;
      bVar4 = fVar30 < 0.0;
      auVar34._0_4_ = -(uint)(bVar3 || bVar4);
      auVar34._4_4_ = -(uint)(bVar3 || bVar4);
      auVar34._8_4_ = -(uint)(bVar3 || bVar4);
      auVar34._12_4_ = -(uint)(bVar3 || bVar4);
      NEON_ext(auVar34,auVar34,8,1);
      if (CONCAT13((char)auVar34._12_4_,
                   CONCAT12((char)auVar34._8_4_,CONCAT11((char)auVar34._4_4_,(char)auVar34._0_4_)))
          != -1) {
        auVar22._0_4_ = (fVar25 - fVar23) - auVar21._0_4_ * fVar30;
        auVar22._4_4_ = (fVar29 - fVar11) - auVar21._4_4_ * fVar30;
        auVar22._8_4_ = (fVar16 - fVar12) - auVar21._8_4_ * fVar30;
        auVar22._12_4_ = (0.0 - fVar13) - auVar21._12_4_ * fVar30;
        auVar32 = NEON_ext(auVar22,auVar22,8,1);
        fVar23 = auVar32._0_4_;
        auVar24._0_4_ = auVar22._0_4_ * auVar22._0_4_;
        auVar24._4_4_ = auVar22._4_4_ * auVar22._4_4_;
        auVar24._8_4_ = fVar23 * fVar23;
        auVar24._12_4_ = 0;
        auVar32 = NEON_ext(auVar24,auVar24,8,1);
        if (auVar24._0_4_ + auVar24._4_4_ + auVar32._0_4_ + auVar32._4_4_ < (float)*param_4) {
          fVar17 = fVar17 * auVar22._0_4_;
          fVar18 = fVar18 * auVar22._4_4_;
          auVar6._4_4_ = fVar18;
          auVar6._0_4_ = fVar17;
          auVar6._8_4_ = fVar19 * fVar23;
          auVar6._12_4_ = fVar20 * 0.0;
          auVar7._4_4_ = fVar18;
          auVar7._0_4_ = fVar17;
          auVar7._8_4_ = fVar19 * fVar23;
          auVar7._12_4_ = fVar20 * 0.0;
          auVar32 = NEON_ext(auVar6,auVar7,8,1);
          puVar5 = (undefined8 *)(param_9 + (ulong)*param_10 * 0x40);
          puVar5[1] = (ulong)(uint)fVar16;
          *puVar5 = auVar28._0_8_;
          lVar1 = param_9 + (ulong)*param_10 * 0x40;
          *(ulong *)(lVar1 + 0x18) = (ulong)(uint)(fVar16 - fVar23);
          *(ulong *)(lVar1 + 0x10) = CONCAT44(fVar29 - auVar22._4_4_,fVar25 - auVar22._0_4_);
          uVar14 = *(undefined4 *)*param_5;
          uVar15 = *(undefined4 *)(*param_5 + 4);
          lVar1 = param_9 + (ulong)*param_10 * 0x40;
          *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(*param_5 + 8);
          *(float *)(lVar1 + 0x2c) = fVar17 + fVar18 + auVar32._0_4_ + auVar32._4_4_;
          *(undefined4 *)(lVar1 + 0x20) = uVar14;
          *(undefined4 *)(lVar1 + 0x24) = uVar15;
          uVar2 = *param_10;
          *param_10 = uVar2 + 1;
          *(undefined4 *)(param_9 + (ulong)uVar2 * 0x40 + 0x30) = param_6;
        }
      }
    }
  }
  return;
}


