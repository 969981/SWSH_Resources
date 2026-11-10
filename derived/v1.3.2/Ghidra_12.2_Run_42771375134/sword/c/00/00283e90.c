/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00283e90; name: FUN_00283e90
 */


void FUN_00283e90(long param_1,long param_2,long param_3,long *param_4,undefined8 *param_5,
                 long param_6,uint *param_7,undefined8 *param_8,undefined1 (*param_9) [12])

{
  ulong uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined8 uVar47;
  float fVar49;
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined8 auStack_450 [128];
  float afStack_48 [2];
  
  lVar19 = (long)auStack_450 +
           (0x400 - ((ulong)((uint)*(byte *)(param_3 + 0x12) * 0x10 + 0x1f) & 0x1ff0));
  (**(code **)(*param_4 + 0x20))
            (param_4,*(long *)(param_2 + 0x28) + (ulong)*(ushort *)(param_3 + 0x10),
             *(byte *)(param_3 + 0x12),*(undefined8 *)(param_2 + 0x20),lVar19);
  uVar16 = (ulong)*(byte *)(param_3 + 0x12);
  if (uVar16 != 0) {
    uVar21 = *(undefined8 *)(param_1 + 0x50);
    uVar22 = *param_8;
    uVar15 = uVar16 + 0xffffffff;
    uVar18 = 0;
    do {
      puVar2 = (undefined8 *)(lVar19 + (uVar15 & 0xffffffff) * 0x10);
      uVar52 = puVar2[1];
      uVar47 = *puVar2;
      pfVar3 = (float *)(lVar19 + uVar18 * 0x10);
      fVar31 = *pfVar3;
      fVar29 = pfVar3[1];
      fVar33 = pfVar3[2];
      fVar35 = pfVar3[3];
      fVar27 = (float)uVar47 - fVar31;
      fVar28 = (float)((ulong)uVar47 >> 0x20) - fVar29;
      fVar30 = (float)uVar52 - fVar33;
      fVar32 = (float)((ulong)uVar52 >> 0x20) - fVar35;
      fVar25 = (float)*(undefined8 *)(*param_9 + 8);
      fVar26 = (float)((ulong)*(undefined8 *)(*param_9 + 8) >> 0x20);
      fVar23 = (float)*(undefined8 *)*param_9;
      fVar24 = (float)((ulong)*(undefined8 *)*param_9 >> 0x20);
      auVar40._4_4_ = fVar28;
      auVar40._0_4_ = fVar27;
      auVar40._8_4_ = fVar30;
      auVar40._12_4_ = fVar32;
      auVar6._4_4_ = fVar28;
      auVar6._0_4_ = fVar27;
      auVar6._8_4_ = fVar30;
      auVar6._12_4_ = fVar32;
      auVar40 = NEON_ext(auVar40,auVar6,8,1);
      auVar43._12_4_ = fVar26;
      auVar43._0_12_ = *param_9;
      auVar53._12_4_ = fVar26;
      auVar53._0_12_ = *param_9;
      auVar43 = NEON_ext(auVar43,auVar53,8,1);
      fVar45 = fVar27 * fVar24 - fVar28 * fVar23;
      uVar47 = NEON_ext(CONCAT44(fVar28 * fVar25 - fVar30 * fVar24,fVar45),
                        CONCAT44(auVar40._4_4_ * fVar24 - fVar28 * auVar43._4_4_,
                                 auVar40._0_4_ * fVar23 - fVar27 * auVar43._0_4_),4,1);
      fVar36 = *(float *)(param_1 + 0x30);
      fVar37 = *(float *)(param_1 + 0x34);
      fVar38 = *(float *)(param_1 + 0x38);
      fVar39 = *(float *)(param_1 + 0x3c);
      fVar20 = (float)uVar47;
      fVar50 = fVar31 * fVar20;
      fVar49 = (float)((ulong)uVar47 >> 0x20);
      fVar51 = fVar29 * fVar49;
      auVar13._4_4_ = fVar51;
      auVar13._0_4_ = fVar50;
      auVar13._8_4_ = fVar33 * fVar45;
      auVar13._12_4_ = fVar35 * 0.0;
      auVar14._4_4_ = fVar51;
      auVar14._0_4_ = fVar50;
      auVar14._8_4_ = fVar33 * fVar45;
      auVar14._12_4_ = fVar35 * 0.0;
      auVar53 = NEON_ext(auVar13,auVar14,8,1);
      auVar54._0_4_ = fVar36 * fVar20;
      auVar54._4_4_ = fVar37 * fVar49;
      auVar54._8_4_ = fVar38 * fVar45;
      auVar54._12_4_ = fVar39 * 0.0;
      auVar40 = NEON_ext(auVar54,auVar54,8,1);
      fVar50 = fVar50 + fVar51 + auVar53._0_4_ + auVar53._4_4_;
      auVar56._0_4_ = *(float *)(param_1 + 0x40) * fVar20;
      auVar56._4_4_ = *(float *)(param_1 + 0x44) * fVar49;
      auVar56._8_4_ = *(float *)(param_1 + 0x48) * fVar45;
      auVar56._12_4_ = *(float *)(param_1 + 0x4c) * 0.0;
      auVar53 = NEON_ext(auVar56,auVar56,8,1);
      fVar51 = auVar54._0_4_ + auVar54._4_4_ + auVar40._0_4_ + auVar40._4_4_;
      if ((fVar51 - fVar50) *
          ((auVar56._0_4_ + auVar56._4_4_ + auVar53._0_4_ + auVar53._4_4_) - fVar50) <= 0.0) {
        auVar46._0_4_ = *(float *)(param_1 + 0x40) - fVar36;
        auVar46._4_4_ = *(float *)(param_1 + 0x44) - fVar37;
        auVar46._8_4_ = *(float *)(param_1 + 0x48) - fVar38;
        auVar46._12_4_ = *(float *)(param_1 + 0x4c) - fVar39;
        auVar48._0_4_ = auVar46._0_4_ * fVar20;
        auVar48._4_4_ = auVar46._4_4_ * fVar49;
        auVar48._8_4_ = auVar46._8_4_ * fVar45;
        auVar48._12_4_ = auVar46._12_4_ * 0.0;
        auVar53 = NEON_ext(auVar48,auVar48,8,1);
        fVar20 = auVar53._0_4_ + auVar53._4_4_;
        fVar45 = auVar48._0_4_ + auVar48._4_4_ + fVar20;
        uVar47 = CONCAT44(auVar48._0_4_ + auVar48._4_4_ + fVar20,fVar45);
        if (fVar45 != 0.0) {
          uVar52 = NEON_frecpe(uVar47,4);
          uVar55 = NEON_frecps(uVar47,uVar52,4);
          fVar45 = (float)uVar52 * (float)uVar55;
          fVar20 = (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
          uVar52 = NEON_frecps(uVar47,CONCAT44(fVar20,fVar45),4);
          fVar45 = fVar45 * (float)uVar52;
          fVar20 = fVar20 * (float)((ulong)uVar52 >> 0x20);
          uVar52 = NEON_frecps(uVar47,CONCAT44(fVar20,fVar45),4);
          fVar45 = fVar45 * (float)uVar52;
          fVar20 = fVar20 * (float)((ulong)uVar52 >> 0x20);
          uVar52 = NEON_frecps(uVar47,CONCAT44(fVar20,fVar45),4);
          fVar45 = fVar45 * (float)uVar52;
          uVar47 = NEON_frecps(uVar47,CONCAT44(fVar20 * (float)((ulong)uVar52 >> 0x20),fVar45),4);
          fVar50 = (fVar50 - fVar51) * fVar45 * (float)uVar47;
          auVar41._0_4_ = fVar36 + auVar46._0_4_ * fVar50;
          auVar41._4_4_ = fVar37 + auVar46._4_4_ * fVar50;
          auVar41._8_4_ = fVar38 + auVar46._8_4_ * fVar50;
          auVar41._12_4_ = fVar39 + auVar46._12_4_ * fVar50;
          auVar53 = NEON_ext(auVar41,auVar41,8,1);
          fVar36 = auVar46._4_4_ * fVar23 - auVar46._0_4_ * fVar24;
          fVar45 = auVar53._0_4_;
          auVar53 = NEON_ext(auVar46,auVar46,8,1);
          uVar47 = NEON_ext(CONCAT44(auVar46._8_4_ * fVar24 - auVar46._4_4_ * fVar25,fVar36),
                            CONCAT44(auVar46._4_4_ * auVar43._4_4_ - auVar53._4_4_ * fVar24,
                                     auVar46._0_4_ * auVar43._0_4_ - auVar53._0_4_ * fVar23),4,1);
          fVar37 = (float)uVar47 * (auVar41._0_4_ - fVar31);
          fVar51 = (float)((ulong)uVar47 >> 0x20);
          fVar38 = fVar51 * (auVar41._4_4_ - fVar29);
          fVar39 = fVar36 * (fVar45 - fVar33);
          fVar50 = (0.0 - fVar35) * 0.0;
          auVar9._4_4_ = fVar38;
          auVar9._0_4_ = fVar37;
          auVar9._8_4_ = fVar39;
          auVar9._12_4_ = fVar50;
          auVar10._4_4_ = fVar38;
          auVar10._0_4_ = fVar37;
          auVar10._8_4_ = fVar39;
          auVar10._12_4_ = fVar50;
          auVar43 = NEON_ext(auVar9,auVar10,8,1);
          auVar44._0_4_ = fVar27 * (float)uVar47;
          auVar44._4_4_ = fVar28 * fVar51;
          auVar44._8_4_ = fVar30 * fVar36;
          auVar44._12_4_ = fVar32 * 0.0;
          auVar53 = NEON_ext(auVar44,auVar44,8,1);
          fVar36 = auVar53._0_4_ + auVar53._4_4_;
          uVar47 = CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar36,
                            auVar44._0_4_ + auVar44._4_4_ + fVar36);
          uVar52 = NEON_frecpe(uVar47,4);
          uVar55 = NEON_frecps(uVar47,uVar52,4);
          fVar36 = (float)uVar52 * (float)uVar55;
          fVar39 = (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
          uVar52 = NEON_frecps(uVar47,CONCAT44(fVar39,fVar36),4);
          fVar36 = fVar36 * (float)uVar52;
          fVar39 = fVar39 * (float)((ulong)uVar52 >> 0x20);
          uVar52 = NEON_frecps(uVar47,CONCAT44(fVar39,fVar36),4);
          fVar36 = fVar36 * (float)uVar52;
          fVar39 = fVar39 * (float)((ulong)uVar52 >> 0x20);
          uVar52 = NEON_frecps(uVar47,CONCAT44(fVar39,fVar36),4);
          fVar36 = fVar36 * (float)uVar52;
          uVar47 = NEON_frecps(uVar47,CONCAT44(fVar39 * (float)((ulong)uVar52 >> 0x20),fVar36),4);
          fVar36 = (fVar37 + fVar38 + auVar43._0_4_ + auVar43._4_4_) * fVar36 * (float)uVar47;
          if ((fVar36 <= 1.005) && (-0.005 <= fVar36)) {
            fVar37 = (auVar41._0_4_ - fVar31) - fVar27 * fVar36;
            fVar29 = (auVar41._4_4_ - fVar29) - fVar28 * fVar36;
            fVar31 = (fVar45 - fVar33) - fVar30 * fVar36;
            fVar33 = (0.0 - fVar35) - fVar32 * fVar36;
            auVar7._4_4_ = fVar29;
            auVar7._0_4_ = fVar37;
            auVar7._8_4_ = fVar31;
            auVar7._12_4_ = fVar33;
            auVar8._4_4_ = fVar29;
            auVar8._0_4_ = fVar37;
            auVar8._8_4_ = fVar31;
            auVar8._12_4_ = fVar33;
            auVar43 = NEON_ext(auVar7,auVar8,8,1);
            fVar23 = fVar23 * fVar37;
            fVar24 = fVar24 * fVar29;
            fVar25 = fVar25 * auVar43._0_4_;
            auVar4._4_4_ = fVar24;
            auVar4._0_4_ = fVar23;
            auVar4._8_4_ = fVar25;
            auVar4._12_4_ = fVar26 * 0.0;
            auVar5._4_4_ = fVar24;
            auVar5._0_4_ = fVar23;
            auVar5._8_4_ = fVar25;
            auVar5._12_4_ = fVar26 * 0.0;
            auVar53 = NEON_ext(auVar4,auVar5,8,1);
            fVar31 = auVar53._0_4_ + auVar53._4_4_;
            if (fVar23 + fVar24 + fVar31 <= (float)uVar21 + (float)uVar22) {
              fVar33 = auVar41._0_4_ - *(float *)(param_5 + 6);
              fVar35 = auVar41._4_4_ - *(float *)((long)param_5 + 0x34);
              fVar36 = fVar45 - *(float *)(param_5 + 7);
              fVar38 = 0.0 - *(float *)((long)param_5 + 0x3c);
              auVar42._0_4_ = fVar33 * *(float *)(param_5 + 2);
              auVar42._4_4_ = fVar35 * *(float *)((long)param_5 + 0x14);
              auVar42._8_4_ = fVar36 * *(float *)(param_5 + 3);
              auVar42._12_4_ = fVar38 * *(float *)((long)param_5 + 0x1c);
              fVar39 = (float)*param_5 * fVar33;
              fVar50 = (float)((ulong)*param_5 >> 0x20) * fVar35;
              fVar51 = (float)param_5[1] * fVar36;
              fVar25 = (float)((ulong)param_5[1] >> 0x20) * fVar38;
              auVar11._4_4_ = fVar50;
              auVar11._0_4_ = fVar39;
              auVar11._8_4_ = fVar51;
              auVar11._12_4_ = fVar25;
              auVar12._4_4_ = fVar50;
              auVar12._0_4_ = fVar39;
              auVar12._8_4_ = fVar51;
              auVar12._12_4_ = fVar25;
              auVar40 = NEON_ext(auVar11,auVar12,8,1);
              auVar34._0_4_ = fVar33 * *(float *)(param_5 + 4);
              auVar34._4_4_ = fVar35 * *(float *)((long)param_5 + 0x24);
              auVar34._8_4_ = fVar36 * *(float *)(param_5 + 5);
              auVar34._12_4_ = fVar38 * *(float *)((long)param_5 + 0x2c);
              auVar53 = NEON_ext(auVar34,auVar34,8,1);
              fVar33 = auVar40._0_4_ + auVar40._4_4_;
              auVar40 = NEON_ext(auVar42,auVar42,8,1);
              fVar35 = auVar40._0_4_ + auVar40._4_4_;
              uVar47 = NEON_ext(CONCAT44(fVar39 + fVar50 + fVar33,fVar39 + fVar50 + fVar33),
                                CONCAT44(auVar42._0_4_ + auVar42._4_4_ + fVar35,
                                         auVar42._0_4_ + auVar42._4_4_ + fVar35),4,1);
              puVar2 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
              puVar2[1] = (ulong)(uint)(auVar34._0_4_ + auVar34._4_4_ +
                                       auVar53._0_4_ + auVar53._4_4_);
              *puVar2 = uVar47;
              lVar17 = param_6 + (ulong)*param_7 * 0x30;
              *(ulong *)(lVar17 + 0x18) = (ulong)(uint)(fVar45 - auVar43._0_4_);
              *(ulong *)(lVar17 + 0x10) = CONCAT44(auVar41._4_4_ - fVar29,auVar41._0_4_ - fVar37);
              uVar52 = *(undefined8 *)(*param_9 + 8);
              uVar47 = *(undefined8 *)*param_9;
              lVar17 = param_6 + (ulong)*param_7 * 0x30;
              *param_7 = *param_7 + 1;
              *(ulong *)(lVar17 + 0x28) = CONCAT44(fVar23 + fVar24 + fVar31,(int)uVar52);
              *(undefined8 *)(lVar17 + 0x20) = uVar47;
              uVar16 = (ulong)*(byte *)(param_3 + 0x12);
            }
          }
        }
      }
      uVar1 = uVar18 + 1;
      uVar15 = uVar18;
      uVar18 = uVar1;
    } while (uVar1 < uVar16);
  }
  return;
}


