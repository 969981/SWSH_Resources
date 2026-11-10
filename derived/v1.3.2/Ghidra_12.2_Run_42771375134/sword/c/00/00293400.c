/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00293400; name: FUN_00293400
 */


bool FUN_00293400(long param_1,long param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
                 undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  char cVar24;
  long lVar25;
  long lVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ulong uVar42;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  float fVar52;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  
  uVar22 = (ulong)*(byte *)(param_1 + 0x3e);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  if (*(byte *)(param_1 + 0x3e) == 0) {
    *(undefined4 *)(param_2 + 0x1000) = 0;
    return false;
  }
  cVar24 = '\0';
  uVar19 = 0;
  uVar21 = 0;
  while( true ) {
    uVar23 = (ulong)*(byte *)(param_1 + uVar19 + 0x38);
    lVar26 = param_1 + uVar23 * 400;
    uVar5 = *(uint *)(lVar26 + 0x1c0);
    uVar20 = (ulong)uVar5;
    *(char *)(param_1 + 0x3f) = (char)uVar5 + cVar24;
    uVar29 = *(undefined8 *)(lVar26 + 0x68);
    fVar34 = (float)uVar29;
    fVar30 = (float)((ulong)uVar29 >> 0x20);
    fVar33 = (float)*(undefined8 *)(lVar26 + 0x60);
    fVar35 = (float)((ulong)*(undefined8 *)(lVar26 + 0x60) >> 0x20);
    if (1 < uVar5) {
      uVar4 = uVar5 + 3 & 3;
      if (uVar20 - 2 < 3) {
        lVar26 = 1;
      }
      else {
        pfVar18 = (float *)(param_1 + 0xe0 + uVar23 * 400);
        lVar26 = 1;
        do {
          pfVar2 = pfVar18 + -0x10;
          pfVar9 = pfVar18 + -0xf;
          pfVar10 = pfVar18 + -0xe;
          pfVar11 = pfVar18 + -0xd;
          fVar31 = *pfVar18;
          pfVar12 = pfVar18 + 1;
          pfVar13 = pfVar18 + 2;
          pfVar14 = pfVar18 + 3;
          pfVar1 = pfVar18 + 0x10;
          pfVar15 = pfVar18 + 0x11;
          pfVar16 = pfVar18 + 0x12;
          pfVar17 = pfVar18 + 0x13;
          auVar43 = *(undefined1 (*) [16])(pfVar18 + 0x20);
          pfVar18 = pfVar18 + 0x40;
          lVar26 = lVar26 + 4;
          fVar33 = fVar33 + *pfVar2 + fVar31 + *pfVar1 + auVar43._0_4_;
          fVar35 = fVar35 + *pfVar9 + *pfVar12 + *pfVar15 + auVar43._4_4_;
          fVar34 = fVar34 + *pfVar10 + *pfVar13 + *pfVar16 + auVar43._8_4_;
          fVar30 = fVar30 + *pfVar11 + *pfVar14 + *pfVar17 + auVar43._12_4_;
        } while (uVar20 - uVar4 != lVar26);
      }
      if (uVar4 != 0) {
        lVar25 = -(ulong)uVar4;
        pauVar27 = (undefined1 (*) [16])(param_1 + 0x60 + (uVar23 * 0x19 + lVar26 * 4) * 0x10);
        do {
          auVar43 = *pauVar27;
          lVar25 = lVar25 + 1;
          fVar33 = fVar33 + auVar43._0_4_;
          fVar35 = fVar35 + auVar43._4_4_;
          fVar34 = fVar34 + auVar43._8_4_;
          fVar30 = fVar30 + auVar43._12_4_;
          pauVar27 = pauVar27 + 4;
        } while (lVar25 != 0);
      }
    }
    if ((uVar5 != 0) && (uVar21 < 0x40)) {
      auVar43 = *param_4;
      auVar36._12_4_ = fVar30;
      auVar36._8_4_ = fVar34;
      auVar36._4_4_ = fVar35;
      auVar36._0_4_ = fVar33;
      auVar37._0_12_ = auVar36._0_12_;
      auVar37._12_4_ = 0;
      auVar57 = NEON_ext(auVar37,auVar37,8,1);
      auVar50._0_12_ = auVar43._0_12_;
      auVar50._12_4_ = 0;
      fVar52 = auVar43._4_4_;
      fVar46 = auVar43._8_4_;
      auVar56 = NEON_ext(auVar50,auVar50,8,1);
      fVar47 = auVar43._12_4_;
      fVar53 = fVar47 * fVar47 + -0.5;
      fVar48 = auVar43._0_4_;
      auVar38._0_4_ = fVar33 * fVar48;
      auVar38._4_4_ = fVar35 * fVar52;
      auVar38._8_4_ = fVar34 * fVar46;
      auVar38._12_4_ = 0;
      fVar30 = fVar35 * fVar48 - fVar33 * fVar52;
      uVar28 = 1;
      uVar55 = NEON_ext(CONCAT44(fVar34 * fVar52 - fVar35 * fVar46,fVar30),
                        CONCAT44(fVar35 * auVar56._4_4_ - auVar57._4_4_ * fVar52,
                                 fVar33 * auVar56._0_4_ - auVar57._0_4_ * fVar48),4,1);
      lVar26 = 0;
      fVar31 = fVar33 * fVar53 + (float)uVar55 * fVar47;
      fVar32 = fVar35 * fVar53 + (float)((ulong)uVar55 >> 0x20) * fVar47;
      fVar33 = fVar34 * fVar53 + fVar30 * fVar47;
      fVar35 = fVar47 * 0.0 + 0.0;
      auVar43._4_4_ = fVar32;
      auVar43._0_4_ = fVar31;
      auVar43._8_4_ = fVar33;
      auVar43._12_4_ = fVar35;
      auVar56._4_4_ = fVar32;
      auVar56._0_4_ = fVar31;
      auVar56._8_4_ = fVar33;
      auVar56._12_4_ = fVar35;
      auVar43 = NEON_ext(auVar43,auVar56,8,1);
      auVar56 = NEON_ext(auVar38,auVar38,8,1);
      fVar33 = auVar38._0_4_ + auVar38._4_4_ + auVar56._0_4_ + auVar56._4_4_;
      fVar31 = fVar48 * fVar33 + fVar31;
      fVar32 = fVar52 * fVar33 + fVar32;
      fVar35 = fVar46 * fVar33 + auVar43._0_4_;
      fVar33 = fVar33 * 0.0 + 0.0;
      auVar57._4_4_ = fVar32;
      auVar57._0_4_ = fVar31;
      auVar57._8_4_ = fVar35;
      auVar57._12_4_ = fVar33;
      auVar6._4_4_ = fVar32;
      auVar6._0_4_ = fVar31;
      auVar6._8_4_ = fVar35;
      auVar6._12_4_ = fVar33;
      auVar43 = NEON_ext(auVar57,auVar6,8,1);
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      fVar34 = auVar43._0_4_ + auVar43._0_4_;
      auVar39._0_4_ = fVar31 * fVar31;
      auVar39._4_4_ = fVar32 * fVar32;
      auVar39._8_4_ = fVar34 * fVar34;
      auVar39._12_4_ = 0;
      auVar43 = NEON_ext(auVar39,auVar39,8,1);
      fVar35 = auVar43._0_4_ + auVar43._4_4_;
      fVar33 = auVar39._0_4_ + auVar39._4_4_ + fVar35;
      fVar35 = auVar39._0_4_ + auVar39._4_4_ + fVar35;
      uVar22 = CONCAT44(fVar35,fVar33);
      uVar55 = NEON_frsqrte(uVar22,4);
      fVar30 = (float)uVar55;
      fVar52 = (float)((ulong)uVar55 >> 0x20);
      uVar55 = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar30 * fVar30),uVar22,4);
      fVar30 = fVar30 * (float)uVar55;
      fVar52 = fVar52 * (float)((ulong)uVar55 >> 0x20);
      uVar55 = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar30 * fVar30),uVar22,4);
      fVar30 = fVar30 * (float)uVar55;
      fVar52 = fVar52 * (float)((ulong)uVar55 >> 0x20);
      uVar55 = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar30 * fVar30),uVar22,4);
      fVar30 = fVar30 * (float)uVar55;
      fVar52 = fVar52 * (float)((ulong)uVar55 >> 0x20);
      uVar55 = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar30 * fVar30),uVar22,4);
      uVar42 = CONCAT44(fVar35 * fVar52 * (float)((ulong)uVar55 >> 0x20),
                        fVar33 * fVar30 * (float)uVar55);
      uVar42 = uVar42 ^ (uVar42 ^ uVar22) & CONCAT44(-(uint)(fVar33 == 0.0),-(uint)(fVar33 == 0.0));
      uVar55 = NEON_frecpe(uVar42,4);
      uVar49 = NEON_frecps(uVar42,uVar55,4);
      fVar33 = (float)uVar55 * (float)uVar49;
      fVar35 = (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar49 >> 0x20);
      uVar55 = NEON_frecps(uVar42,CONCAT44(fVar35,fVar33),4);
      fVar33 = fVar33 * (float)uVar55;
      fVar35 = fVar35 * (float)((ulong)uVar55 >> 0x20);
      uVar55 = NEON_frecps(uVar42,CONCAT44(fVar35,fVar33),4);
      fVar33 = fVar33 * (float)uVar55;
      fVar35 = fVar35 * (float)((ulong)uVar55 >> 0x20);
      uVar55 = NEON_frecps(uVar42,CONCAT44(fVar35,fVar33),4);
      fVar33 = fVar33 * (float)uVar55;
      uVar55 = NEON_frecps(uVar42,CONCAT44(fVar35 * (float)((ulong)uVar55 >> 0x20),fVar33),4);
      fVar33 = fVar33 * (float)uVar55;
      while( true ) {
        auVar43 = *param_3;
        fVar53 = auVar43._8_4_;
        fVar47 = auVar43._0_4_;
        fVar48 = auVar43._4_4_;
        lVar25 = param_1 + uVar23 * 400 + lVar26;
        auVar56 = *(undefined1 (*) [16])(lVar25 + 0x40);
        fVar35 = auVar43._12_4_;
        fVar52 = auVar56._4_4_;
        auVar57 = NEON_ext(auVar56,auVar56,8,1);
        fVar46 = auVar56._8_4_;
        fVar54 = fVar35 * fVar35 + -0.5;
        auVar7._12_4_ = 0;
        auVar7._0_12_ = auVar43._0_12_;
        auVar8._12_4_ = 0;
        auVar8._0_12_ = auVar43._0_12_;
        auVar43 = NEON_ext(auVar7,auVar8,8,1);
        fVar30 = auVar56._0_4_;
        fVar58 = fVar47 * fVar52 - fVar48 * fVar30;
        auVar51._0_4_ = fVar47 * fVar30;
        auVar51._4_4_ = fVar48 * fVar52;
        auVar51._8_4_ = fVar53 * fVar46;
        auVar51._12_4_ = auVar56._12_4_ * 0.0;
        uVar55 = NEON_ext(CONCAT44(fVar48 * fVar46 - fVar53 * fVar52,fVar58),
                          CONCAT44(auVar43._4_4_ * fVar52 - fVar48 * auVar57._4_4_,
                                   auVar43._0_4_ * fVar30 - fVar47 * auVar57._0_4_),4,1);
        auVar44._0_4_ = fVar30 * fVar54 + (float)uVar55 * fVar35;
        auVar44._4_4_ = fVar52 * fVar54 + (float)((ulong)uVar55 >> 0x20) * fVar35;
        auVar44._8_4_ = fVar46 * fVar54 + fVar58 * fVar35;
        auVar44._12_4_ = fVar35 * 0.0 + 0.0;
        auVar43 = NEON_ext(auVar44,auVar44,8,1);
        puVar3 = (undefined8 *)(param_2 + (ulong)uVar21 * 0x40 + lVar26);
        auVar56 = NEON_ext(auVar51,auVar51,8,1);
        fVar35 = auVar51._0_4_ + auVar51._4_4_ + auVar56._0_4_ + auVar56._4_4_;
        auVar45._0_4_ = fVar47 * fVar35 + auVar44._0_4_;
        auVar45._4_4_ = fVar48 * fVar35 + auVar44._4_4_;
        auVar45._8_4_ = fVar53 * fVar35 + auVar43._0_4_;
        auVar45._12_4_ = fVar35 * 0.0 + 0.0;
        auVar43 = NEON_ext(auVar45,auVar45,8,1);
        auVar40._0_4_ = *(float *)param_3[1] + auVar45._0_4_ + auVar45._0_4_;
        auVar40._4_4_ = *(float *)(param_3[1] + 4) + auVar45._4_4_ + auVar45._4_4_;
        auVar40._8_4_ = *(float *)(param_3[1] + 8) + auVar43._0_4_ + auVar43._0_4_;
        auVar40._12_4_ = *(float *)(param_3[1] + 0xc) + 0.0;
        auVar43 = NEON_ext(auVar40,auVar40,8,1);
        fVar35 = (float)*param_5;
        auVar41._0_8_ =
             CONCAT44(auVar40._4_4_ - fVar32 * fVar33 * fVar35,
                      auVar40._0_4_ - fVar31 * fVar33 * fVar35);
        auVar41._8_4_ = auVar43._0_4_ - fVar34 * fVar33 * fVar35;
        auVar41._12_4_ = 0.0 - fVar35 * 0.0;
        auVar43 = NEON_ext(auVar41,auVar41,8,1);
        puVar3[1] = (ulong)(uint)(fVar34 * fVar33);
        *puVar3 = CONCAT44(fVar32 * fVar33,fVar31 * fVar33);
        puVar3[3] = (ulong)auVar43._0_4_;
        puVar3[2] = auVar41._0_8_;
        *(float *)((long)puVar3 + 0xc) = (float)((ulong)uVar29 >> 0x20) - fVar35;
        *(undefined4 *)((long)puVar3 + 0x34) = *(undefined4 *)(lVar25 + 0x70);
        if ((uVar20 <= uVar28) || (0x3f < uVar21 + uVar28)) break;
        uVar29 = *(undefined8 *)(lVar25 + 0xa8);
        lVar26 = lVar26 + 0x40;
        uVar28 = uVar28 + 1;
      }
      uVar22 = (ulong)*(byte *)(param_1 + 0x3e);
      uVar21 = uVar21 + (int)uVar28;
    }
    uVar19 = uVar19 + 1;
    if (uVar22 <= uVar19) break;
    cVar24 = *(char *)(param_1 + 0x3f);
  }
  *(uint *)(param_2 + 0x1000) = uVar21;
  return uVar21 != 0;
}


