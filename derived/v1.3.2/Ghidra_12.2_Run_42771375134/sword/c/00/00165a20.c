/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00165a20; name: FUN_00165a20
 */


void FUN_00165a20(long *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  long lVar24;
  uint uVar25;
  float *pfVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  
  lVar24 = param_1[4];
  if (lVar24 != 0) {
    pfVar7 = (float *)*param_1;
    pfVar8 = (float *)param_1[1];
    fVar28 = *pfVar7;
    fVar29 = pfVar7[1];
    fVar30 = pfVar7[2];
    fVar31 = *pfVar8;
    fVar32 = pfVar8[1];
    fVar39 = pfVar8[4];
    fVar35 = pfVar7[4];
    fVar40 = pfVar8[5];
    fVar36 = pfVar7[5];
    fVar33 = pfVar8[2];
    fVar37 = pfVar7[6];
    fVar41 = pfVar8[6];
    if (*(char *)(lVar24 + 1) != '\0') {
      fVar9 = *(float *)(lVar24 + 0xc);
      fVar10 = *(float *)(lVar24 + 0x1c);
      fVar11 = *(float *)(lVar24 + 0x24);
      fVar12 = *(float *)(lVar24 + 0x2c);
      uVar25 = 0;
      pfVar26 = (float *)(lVar24 + 0x48);
      do {
        Hint_Prefetch(pfVar26 + 0x12,0,0,0);
        auVar21 = *(undefined1 (*) [12])(pfVar26 + -6);
        fVar43 = *pfVar26;
        pfVar1 = pfVar26 + 5;
        auVar22 = *(undefined1 (*) [12])(pfVar26 + 2);
        auVar23 = *(undefined1 (*) [12])(pfVar26 + 6);
        pfVar27 = pfVar26 + -3;
        pfVar2 = pfVar26 + 9;
        fVar34 = (float)*(undefined8 *)(pfVar26 + -2);
        fVar38 = (float)((ulong)*(undefined8 *)(pfVar26 + -2) >> 0x20);
        pfVar3 = pfVar26 + 0x10;
        pfVar4 = pfVar26 + 0xe;
        pfVar5 = pfVar26 + 0xf;
        uVar25 = uVar25 + 1;
        fVar45 = (fVar28 * auVar21._0_4_ + fVar35 * auVar22._0_4_) -
                 (fVar31 * fVar34 + fVar39 * auVar23._0_4_);
        fVar46 = (fVar29 * auVar21._4_4_ + fVar36 * auVar22._4_4_) -
                 (fVar32 * fVar38 + fVar40 * auVar23._4_4_);
        fVar47 = (fVar30 * auVar21._8_4_ + fVar37 * auVar22._8_4_) -
                 (fVar33 * fVar43 + fVar41 * auVar23._8_4_);
        auVar18._4_4_ = fVar46;
        auVar18._0_4_ = fVar45;
        auVar18._8_4_ = fVar47;
        auVar18._12_4_ = 0;
        auVar19._4_4_ = fVar46;
        auVar19._0_4_ = fVar45;
        auVar19._8_4_ = fVar47;
        auVar19._12_4_ = 0;
        auVar49 = NEON_ext(auVar18,auVar19,8,1);
        fVar47 = auVar49._0_4_ + auVar49._4_4_;
        pfVar6 = pfVar26 + 0x10;
        pfVar26 = pfVar26 + 0x18;
        fVar48 = *pfVar2 * *pfVar3;
        uVar20 = NEON_fmax(CONCAT44(*pfVar4,*pfVar4),
                           CONCAT44(fVar48 + *pfVar27 + (fVar45 + fVar46 + fVar47) * *pfVar1,
                                    fVar48 + *pfVar27 + (fVar45 + fVar46 + fVar47) * *pfVar1),4);
        uVar20 = NEON_fmin(CONCAT44(*pfVar5,*pfVar5),uVar20,4);
        fVar45 = (float)uVar20 - *pfVar3;
        fVar47 = fVar9 * fVar45;
        fVar46 = fVar10 * fVar45;
        fVar48 = fVar11 * fVar45;
        fVar45 = fVar12 * fVar45;
        *pfVar6 = (float)uVar20;
        fVar28 = fVar28 + auVar21._0_4_ * fVar47;
        fVar29 = fVar29 + auVar21._4_4_ * fVar47;
        fVar30 = fVar30 + auVar21._8_4_ * fVar47;
        fVar47 = fVar47 * 0.0 + 0.0;
        fVar31 = fVar31 - fVar34 * fVar46;
        fVar32 = fVar32 - fVar38 * fVar46;
        fVar33 = fVar33 - fVar43 * fVar46;
        fVar34 = 0.0 - fVar46 * 0.0;
        fVar35 = fVar35 + auVar22._0_4_ * fVar48;
        fVar36 = fVar36 + auVar22._4_4_ * fVar48;
        fVar37 = fVar37 + auVar22._8_4_ * fVar48;
        fVar38 = fVar48 * 0.0 + 0.0;
        auVar42._4_4_ = fVar32;
        auVar42._0_4_ = fVar31;
        auVar42._8_4_ = fVar33;
        auVar42._12_4_ = fVar34;
        auVar13._4_4_ = fVar32;
        auVar13._0_4_ = fVar31;
        auVar13._8_4_ = fVar33;
        auVar13._12_4_ = fVar34;
        auVar42 = NEON_ext(auVar42,auVar13,8,1);
        fVar39 = fVar39 + auVar23._0_4_ * fVar45;
        fVar40 = fVar40 + auVar23._4_4_ * fVar45;
        fVar41 = fVar41 + auVar23._8_4_ * fVar45;
        fVar33 = fVar45 * 0.0 + 0.0;
        auVar49._4_4_ = fVar29;
        auVar49._0_4_ = fVar28;
        auVar49._8_4_ = fVar30;
        auVar49._12_4_ = fVar47;
        auVar44._4_4_ = fVar29;
        auVar44._0_4_ = fVar28;
        auVar44._8_4_ = fVar30;
        auVar44._12_4_ = fVar47;
        auVar49 = NEON_ext(auVar49,auVar44,8,1);
        fVar30 = auVar49._0_4_;
        auVar14._4_4_ = fVar36;
        auVar14._0_4_ = fVar35;
        auVar14._8_4_ = fVar37;
        auVar14._12_4_ = fVar38;
        auVar15._4_4_ = fVar36;
        auVar15._0_4_ = fVar35;
        auVar15._8_4_ = fVar37;
        auVar15._12_4_ = fVar38;
        auVar49 = NEON_ext(auVar14,auVar15,8,1);
        auVar16._4_4_ = fVar40;
        auVar16._0_4_ = fVar39;
        auVar16._8_4_ = fVar41;
        auVar16._12_4_ = fVar33;
        auVar17._4_4_ = fVar40;
        auVar17._0_4_ = fVar39;
        auVar17._8_4_ = fVar41;
        auVar17._12_4_ = fVar33;
        auVar44 = NEON_ext(auVar16,auVar17,8,1);
        fVar33 = auVar42._0_4_;
        fVar37 = auVar49._0_4_;
        fVar41 = auVar44._0_4_;
      } while (uVar25 < *(byte *)(lVar24 + 1));
    }
    *(ulong *)pfVar7 = CONCAT44(fVar29,fVar28);
    pfVar7[2] = fVar30;
    *(ulong *)(pfVar7 + 4) = CONCAT44(fVar36,fVar35);
    pfVar7[6] = fVar37;
    *(ulong *)pfVar8 = CONCAT44(fVar32,fVar31);
    pfVar8[2] = fVar33;
    *(ulong *)(pfVar8 + 4) = CONCAT44(fVar40,fVar39);
    pfVar8[6] = fVar41;
  }
  return;
}


