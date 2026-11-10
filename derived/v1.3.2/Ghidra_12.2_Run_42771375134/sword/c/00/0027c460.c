/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0027c460; name: FUN_0027c460
 */


undefined1  [16] FUN_0027c460(long param_1,undefined8 *param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  ulong uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined8 uVar56;
  float fVar58;
  undefined1 auVar57 [16];
  float fVar59;
  ulong uVar60;
  undefined1 auVar61 [16];
  float fVar63;
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 local_40;
  ulong uStack_38;
  
  fVar29 = (float)param_2[1];
  fVar21 = (float)*param_2;
  fVar22 = (float)((ulong)*param_2 >> 0x20);
  lVar1 = *(long *)(param_1 + 8);
  pfVar2 = *(float **)(param_1 + 0x10);
  fVar26 = *(float *)(param_1 + 0x20) * fVar21 + *(float *)(param_1 + 0x30) * fVar22 +
           *(float *)(param_1 + 0x40) * fVar29;
  fVar28 = *(float *)(param_1 + 0x24) * fVar21 + *(float *)(param_1 + 0x34) * fVar22 +
           *(float *)(param_1 + 0x44) * fVar29;
  fVar29 = *(float *)(param_1 + 0x28) * fVar21 + *(float *)(param_1 + 0x38) * fVar22 +
           *(float *)(param_1 + 0x48) * fVar29;
  auVar67._0_4_ = fVar26 * *(float *)(lVar1 + 0x40);
  auVar67._4_4_ = fVar28 * *(float *)(lVar1 + 0x44);
  auVar67._8_4_ = fVar29 * *(float *)(lVar1 + 0x48);
  auVar67._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
  auVar65._0_4_ = *(float *)(lVar1 + 0x30) * fVar26;
  auVar65._4_4_ = *(float *)(lVar1 + 0x34) * fVar28;
  auVar65._8_4_ = *(float *)(lVar1 + 0x38) * fVar29;
  auVar65._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
  auVar38 = NEON_ext(auVar65,auVar65,8,1);
  fVar21 = auVar38._0_4_ + auVar38._4_4_;
  auVar38 = NEON_ext(auVar67,auVar67,8,1);
  fVar22 = auVar38._0_4_ + auVar38._4_4_;
  fVar26 = fVar26 * *(float *)(lVar1 + 0x50);
  fVar28 = fVar28 * *(float *)(lVar1 + 0x54);
  fVar29 = fVar29 * *(float *)(lVar1 + 0x58);
  fVar30 = *(float *)(lVar1 + 0x5c) * 0.0;
  auVar38._4_4_ = fVar28;
  auVar38._0_4_ = fVar26;
  auVar38._8_4_ = fVar29;
  auVar38._12_4_ = fVar30;
  auVar64._4_4_ = fVar28;
  auVar64._0_4_ = fVar26;
  auVar64._8_4_ = fVar29;
  auVar64._12_4_ = fVar30;
  auVar38 = NEON_ext(auVar38,auVar64,8,1);
  uStack_38 = (ulong)(uint)(fVar26 + fVar28 + auVar38._0_4_ + auVar38._4_4_);
  local_40 = NEON_ext(CONCAT44(auVar65._0_4_ + auVar65._4_4_ + fVar21,
                               auVar65._0_4_ + auVar65._4_4_ + fVar21),
                      CONCAT44(auVar67._0_4_ + auVar67._4_4_ + fVar22,
                               auVar67._0_4_ + auVar67._4_4_ + fVar22),4,1);
  uVar18 = FUN_00222070(lVar1,&local_40);
  fVar21 = *(float *)(lVar1 + 0x10);
  if (fVar21 <= 0.0) {
    puVar4 = (undefined8 *)(*(long *)(lVar1 + 0xa0) + (long)(int)uVar18 * 0xc);
    fVar29 = (float)puVar4[1];
    uVar49 = *puVar4;
    fVar21 = (float)uVar49;
    fVar26 = (float)((ulong)uVar49 >> 0x20);
    fVar22 = *(float *)(lVar1 + 0x30) * fVar21 + *(float *)(lVar1 + 0x40) * fVar26 +
             *(float *)(lVar1 + 0x50) * fVar29;
    fVar28 = *(float *)(lVar1 + 0x34) * fVar21 + *(float *)(lVar1 + 0x44) * fVar26 +
             *(float *)(lVar1 + 0x54) * fVar29;
    fVar21 = *(float *)(lVar1 + 0x38) * fVar21 + *(float *)(lVar1 + 0x48) * fVar26 +
             *(float *)(lVar1 + 0x58) * fVar29;
  }
  else {
    lVar20 = *(long *)(lVar1 + 0x90);
    lVar19 = *(long *)(lVar20 + 0x28);
    pfVar3 = (float *)(*(long *)(lVar1 + 0xa0) + (ulong)uVar18 * 0xc);
    fVar22 = *pfVar3;
    fVar26 = pfVar3[1];
    fVar28 = pfVar3[2];
    uVar18 = uVar18 * 3;
    lVar20 = lVar19 + (ulong)*(byte *)(lVar20 + 0x27) * 0x14 + (ulong)*(byte *)(lVar20 + 0x26) * 0xc
             + ((ulong)*(ushort *)(lVar20 + 0x24) & 0x7fff) * 2;
    fVar29 = *(float *)(lVar1 + 0x60);
    fVar30 = *(float *)(lVar1 + 100);
    fVar59 = *(float *)(lVar1 + 0x68);
    fVar63 = *(float *)(lVar1 + 0x6c);
    puVar4 = (undefined8 *)(lVar19 + (ulong)*(byte *)(lVar20 + (ulong)uVar18) * 0x14);
    fVar47 = (float)puVar4[1];
    uVar49 = *puVar4;
    fVar44 = (float)uVar49;
    fVar46 = (float)((ulong)uVar49 >> 0x20);
    fVar31 = *(float *)(lVar1 + 0x30) * fVar22 + *(float *)(lVar1 + 0x40) * fVar26 +
             (float)*(undefined8 *)(lVar1 + 0x50) * fVar28;
    fVar34 = *(float *)(lVar1 + 0x34) * fVar22 + *(float *)(lVar1 + 0x44) * fVar26 +
             (float)((ulong)*(undefined8 *)(lVar1 + 0x50) >> 0x20) * fVar28;
    fVar35 = *(float *)(lVar1 + 0x38) * fVar22 + *(float *)(lVar1 + 0x48) * fVar26 +
             (float)*(undefined8 *)(lVar1 + 0x58) * fVar28;
    auVar39._0_4_ = fVar29 * fVar44;
    auVar39._4_4_ = fVar30 * fVar46;
    auVar39._8_4_ = fVar59 * fVar47;
    auVar39._12_4_ = fVar63 * 0.0;
    auVar38 = NEON_ext(auVar39,auVar39,8,1);
    fVar23 = auVar38._0_4_ + auVar38._4_4_;
    fVar22 = *(float *)(lVar1 + 0x70);
    fVar26 = *(float *)(lVar1 + 0x74);
    fVar28 = *(float *)(lVar1 + 0x78);
    fVar13 = *(float *)(lVar1 + 0x7c);
    fVar14 = *(float *)(lVar1 + 0x80);
    fVar15 = *(float *)(lVar1 + 0x84);
    fVar16 = *(float *)(lVar1 + 0x88);
    fVar17 = *(float *)(lVar1 + 0x8c);
    auVar51._0_4_ = fVar44 * fVar22;
    auVar51._4_4_ = fVar46 * fVar26;
    auVar51._8_4_ = fVar47 * fVar28;
    auVar51._12_4_ = fVar13 * 0.0;
    auVar38 = NEON_ext(auVar51,auVar51,8,1);
    fVar44 = fVar44 * fVar14;
    fVar46 = fVar46 * fVar15;
    fVar24 = auVar38._0_4_ + auVar38._4_4_;
    auVar7._4_4_ = fVar46;
    auVar7._0_4_ = fVar44;
    auVar7._8_4_ = fVar47 * fVar16;
    auVar7._12_4_ = fVar17 * 0.0;
    auVar8._4_4_ = fVar46;
    auVar8._0_4_ = fVar44;
    auVar8._8_4_ = fVar47 * fVar16;
    auVar8._12_4_ = fVar17 * 0.0;
    auVar38 = NEON_ext(auVar7,auVar8,8,1);
    fVar46 = fVar44 + fVar46 + auVar38._0_4_ + auVar38._4_4_;
    uVar49 = NEON_ext(CONCAT44(auVar39._0_4_ + auVar39._4_4_ + fVar23,
                               auVar39._0_4_ + auVar39._4_4_ + fVar23),
                      CONCAT44(auVar51._0_4_ + auVar51._4_4_ + fVar24,
                               auVar51._0_4_ + auVar51._4_4_ + fVar24),4,1);
    fVar45 = (float)uVar49;
    fVar44 = fVar45 * fVar45;
    fVar48 = (float)((ulong)uVar49 >> 0x20);
    fVar47 = fVar48 * fVar48;
    auVar9._4_4_ = fVar47;
    auVar9._0_4_ = fVar44;
    auVar9._8_4_ = fVar46 * fVar46;
    auVar9._12_4_ = 0;
    auVar10._4_4_ = fVar47;
    auVar10._0_4_ = fVar44;
    auVar10._8_4_ = fVar46 * fVar46;
    auVar10._12_4_ = 0;
    auVar38 = NEON_ext(auVar9,auVar10,8,1);
    fVar24 = auVar38._0_4_ + auVar38._4_4_;
    fVar23 = fVar44 + fVar47 + fVar24;
    fVar24 = fVar44 + fVar47 + fVar24;
    uVar49 = NEON_frsqrte(CONCAT44(fVar24,fVar23),4);
    fVar44 = (float)uVar49;
    fVar47 = (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar47 * fVar47,fVar44 * fVar44),CONCAT44(fVar24,fVar23),4);
    fVar44 = fVar44 * (float)uVar49;
    fVar47 = fVar47 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar47 * fVar47,fVar44 * fVar44),CONCAT44(fVar24,fVar23),4);
    fVar44 = fVar44 * (float)uVar49;
    fVar47 = fVar47 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar47 * fVar47,fVar44 * fVar44),CONCAT44(fVar24,fVar23),4);
    fVar44 = fVar44 * (float)uVar49;
    fVar47 = fVar47 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar47 * fVar47,fVar44 * fVar44),CONCAT44(fVar24,fVar23),4);
    uVar50 = CONCAT44(fVar24 * fVar47 * (float)((ulong)uVar49 >> 0x20),
                      fVar23 * fVar44 * (float)uVar49);
    uVar50 = uVar50 ^ (uVar50 ^ CONCAT44(fVar24,fVar23)) &
                      CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0));
    uVar49 = NEON_frecpe(uVar50,4);
    uVar56 = NEON_frecps(uVar50,uVar49,4);
    fVar47 = (float)uVar49 * (float)uVar56;
    fVar23 = (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
    uVar49 = NEON_frecps(uVar50,CONCAT44(fVar23,fVar47),4);
    fVar47 = fVar47 * (float)uVar49;
    fVar23 = fVar23 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frecps(uVar50,CONCAT44(fVar23,fVar47),4);
    fVar47 = fVar47 * (float)uVar49;
    fVar23 = fVar23 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frecps(uVar50,CONCAT44(fVar23,fVar47),4);
    fVar47 = fVar47 * (float)uVar49;
    uVar49 = NEON_frecps(uVar50,CONCAT44(fVar23 * (float)((ulong)uVar49 >> 0x20),fVar47),4);
    fVar47 = fVar47 * (float)uVar49;
    pfVar3 = (float *)(lVar19 + (ulong)*(byte *)(lVar20 + (ulong)(uVar18 + 1)) * 0x14);
    fVar23 = *pfVar3;
    fVar24 = pfVar3[1];
    fVar44 = pfVar3[2];
    fVar45 = fVar45 * fVar47;
    fVar48 = fVar48 * fVar47;
    fVar46 = fVar46 * fVar47;
    auVar57._0_4_ = fVar29 * fVar23;
    auVar57._4_4_ = fVar30 * fVar24;
    auVar57._8_4_ = fVar59 * fVar44;
    auVar57._12_4_ = fVar63 * 0.0;
    auVar38 = NEON_ext(auVar57,auVar57,8,1);
    fVar25 = auVar38._0_4_ + auVar38._4_4_;
    auVar61._0_4_ = fVar22 * fVar23;
    auVar61._4_4_ = fVar26 * fVar24;
    auVar61._8_4_ = fVar28 * fVar44;
    auVar61._12_4_ = fVar13 * 0.0;
    auVar38 = NEON_ext(auVar61,auVar61,8,1);
    auVar52._0_4_ = fVar14 * fVar23;
    auVar52._4_4_ = fVar15 * fVar24;
    auVar52._8_4_ = fVar16 * fVar44;
    auVar52._12_4_ = fVar17 * 0.0;
    fVar23 = auVar38._0_4_ + auVar38._4_4_;
    auVar38 = NEON_ext(auVar52,auVar52,8,1);
    fVar47 = auVar52._0_4_ + auVar52._4_4_ + auVar38._0_4_ + auVar38._4_4_;
    uVar49 = NEON_ext(CONCAT44(auVar57._0_4_ + auVar57._4_4_ + fVar25,
                               auVar57._0_4_ + auVar57._4_4_ + fVar25),
                      CONCAT44(auVar61._0_4_ + auVar61._4_4_ + fVar23,
                               auVar61._0_4_ + auVar61._4_4_ + fVar23),4,1);
    fVar55 = (float)uVar49;
    auVar53._0_4_ = fVar55 * fVar55;
    fVar58 = (float)((ulong)uVar49 >> 0x20);
    auVar53._4_4_ = fVar58 * fVar58;
    auVar53._8_4_ = fVar47 * fVar47;
    auVar53._12_4_ = 0;
    auVar38 = NEON_ext(auVar53,auVar53,8,1);
    fVar24 = auVar38._0_4_ + auVar38._4_4_;
    fVar23 = auVar53._0_4_ + auVar53._4_4_ + fVar24;
    fVar24 = auVar53._0_4_ + auVar53._4_4_ + fVar24;
    uVar50 = CONCAT44(fVar24,fVar23);
    uVar49 = NEON_frsqrte(uVar50,4);
    fVar44 = (float)uVar49;
    fVar25 = (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar25 * fVar25,fVar44 * fVar44),uVar50,4);
    fVar44 = fVar44 * (float)uVar49;
    fVar25 = fVar25 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar25 * fVar25,fVar44 * fVar44),uVar50,4);
    fVar44 = fVar44 * (float)uVar49;
    fVar25 = fVar25 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar25 * fVar25,fVar44 * fVar44),uVar50,4);
    fVar44 = fVar44 * (float)uVar49;
    fVar25 = fVar25 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar25 * fVar25,fVar44 * fVar44),uVar50,4);
    uVar60 = CONCAT44(fVar24 * fVar25 * (float)((ulong)uVar49 >> 0x20),
                      fVar23 * fVar44 * (float)uVar49);
    uVar60 = uVar60 ^ (uVar60 ^ uVar50) & CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0));
    uVar49 = NEON_frecpe(uVar60,4);
    uVar56 = NEON_frecps(uVar60,uVar49,4);
    fVar25 = (float)uVar49 * (float)uVar56;
    fVar23 = (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
    uVar49 = NEON_frecps(uVar60,CONCAT44(fVar23,fVar25),4);
    fVar25 = fVar25 * (float)uVar49;
    fVar23 = fVar23 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frecps(uVar60,CONCAT44(fVar23,fVar25),4);
    fVar25 = fVar25 * (float)uVar49;
    fVar23 = fVar23 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frecps(uVar60,CONCAT44(fVar23,fVar25),4);
    fVar25 = fVar25 * (float)uVar49;
    uVar49 = NEON_frecps(uVar60,CONCAT44(fVar23 * (float)((ulong)uVar49 >> 0x20),fVar25),4);
    fVar25 = fVar25 * (float)uVar49;
    pfVar3 = (float *)(lVar19 + (ulong)*(byte *)(lVar20 + (ulong)(uVar18 + 2)) * 0x14);
    fVar23 = *pfVar3;
    fVar24 = pfVar3[1];
    fVar44 = pfVar3[2];
    auVar54._0_4_ = fVar55 * fVar25;
    auVar54._4_4_ = fVar58 * fVar25;
    auVar54._8_4_ = fVar47 * fVar25;
    auVar36._0_4_ = fVar29 * fVar23;
    auVar36._4_4_ = fVar30 * fVar24;
    auVar36._8_4_ = fVar59 * fVar44;
    auVar36._12_4_ = fVar63 * 0.0;
    auVar38 = NEON_ext(auVar36,auVar36,8,1);
    auVar40._0_4_ = fVar22 * fVar23;
    auVar40._4_4_ = fVar26 * fVar24;
    auVar40._8_4_ = fVar28 * fVar44;
    auVar40._12_4_ = fVar13 * 0.0;
    fVar26 = auVar38._0_4_ + auVar38._4_4_;
    auVar42._0_4_ = fVar14 * fVar23;
    auVar42._4_4_ = fVar15 * fVar24;
    auVar42._8_4_ = fVar16 * fVar44;
    auVar42._12_4_ = fVar17 * 0.0;
    auVar64 = NEON_ext(auVar40,auVar40,8,1);
    auVar38 = NEON_ext(auVar42,auVar42,8,1);
    fVar28 = auVar64._0_4_ + auVar64._4_4_;
    auVar54._12_4_ = 0;
    fVar22 = auVar42._0_4_ + auVar42._4_4_ + auVar38._0_4_ + auVar38._4_4_;
    uVar49 = NEON_ext(CONCAT44(auVar36._0_4_ + auVar36._4_4_ + fVar26,
                               auVar36._0_4_ + auVar36._4_4_ + fVar26),
                      CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar28,
                               auVar40._0_4_ + auVar40._4_4_ + fVar28),4,1);
    fVar29 = (float)uVar49;
    auVar41._0_4_ = fVar29 * fVar29;
    fVar30 = (float)((ulong)uVar49 >> 0x20);
    auVar41._4_4_ = fVar30 * fVar30;
    auVar41._8_4_ = fVar22 * fVar22;
    auVar41._12_4_ = 0;
    auVar38 = NEON_ext(auVar41,auVar41,8,1);
    fVar28 = auVar38._0_4_ + auVar38._4_4_;
    fVar26 = auVar41._0_4_ + auVar41._4_4_ + fVar28;
    fVar28 = auVar41._0_4_ + auVar41._4_4_ + fVar28;
    uVar50 = CONCAT44(fVar28,fVar26);
    uVar49 = NEON_frsqrte(uVar50,4);
    fVar59 = (float)uVar49;
    fVar63 = (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar59 * fVar59),uVar50,4);
    fVar59 = fVar59 * (float)uVar49;
    fVar63 = fVar63 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar59 * fVar59),uVar50,4);
    fVar59 = fVar59 * (float)uVar49;
    fVar63 = fVar63 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar59 * fVar59),uVar50,4);
    fVar59 = fVar59 * (float)uVar49;
    fVar63 = fVar63 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar59 * fVar59),uVar50,4);
    uVar60 = CONCAT44(fVar28 * fVar63 * (float)((ulong)uVar49 >> 0x20),
                      fVar26 * fVar59 * (float)uVar49);
    uVar60 = uVar60 ^ (uVar60 ^ uVar50) & CONCAT44(-(uint)(fVar26 == 0.0),-(uint)(fVar26 == 0.0));
    uVar49 = NEON_frecpe(uVar60,4);
    uVar56 = NEON_frecps(uVar60,uVar49,4);
    fVar26 = (float)uVar49 * (float)uVar56;
    fVar28 = (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
    uVar49 = NEON_frecps(uVar60,CONCAT44(fVar28,fVar26),4);
    fVar26 = fVar26 * (float)uVar49;
    fVar28 = fVar28 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frecps(uVar60,CONCAT44(fVar28,fVar26),4);
    fVar26 = fVar26 * (float)uVar49;
    fVar28 = fVar28 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frecps(uVar60,CONCAT44(fVar28,fVar26),4);
    fVar26 = fVar26 * (float)uVar49;
    uVar49 = NEON_frecps(uVar60,CONCAT44(fVar28 * (float)((ulong)uVar49 >> 0x20),fVar26),4);
    fVar26 = fVar26 * (float)uVar49;
    auVar43._0_4_ = fVar31 * fVar45;
    auVar43._4_4_ = fVar34 * fVar48;
    auVar43._8_4_ = fVar35 * fVar46;
    auVar43._12_4_ = 0;
    auVar64 = NEON_ext(auVar43,auVar43,8,1);
    auVar37._0_4_ = fVar29 * fVar26;
    auVar37._4_4_ = fVar30 * fVar26;
    auVar37._8_4_ = fVar22 * fVar26;
    auVar62._0_4_ = fVar31 * auVar54._0_4_;
    auVar62._4_4_ = fVar34 * auVar54._4_4_;
    auVar62._8_4_ = fVar35 * auVar54._8_4_;
    auVar62._12_4_ = 0;
    auVar38 = NEON_ext(auVar62,auVar62,8,1);
    auVar37._12_4_ = 0;
    auVar65 = NEON_ext(auVar54,auVar54,8,1);
    auVar67 = NEON_ext(auVar37,auVar37,8,1);
    auVar32._0_4_ = fVar31 * auVar37._0_4_;
    auVar32._4_4_ = fVar34 * auVar37._4_4_;
    auVar32._8_4_ = fVar35 * auVar37._8_4_;
    auVar32._12_4_ = 0;
    fVar28 = fVar21 - (auVar62._0_4_ + auVar62._4_4_ + auVar38._0_4_ + auVar38._4_4_);
    fVar29 = auVar54._0_4_ * auVar37._4_4_ - auVar54._4_4_ * auVar37._0_4_;
    uVar56 = NEON_ext(CONCAT44(auVar54._4_4_ * auVar37._8_4_ - auVar54._8_4_ * auVar37._4_4_,fVar29)
                      ,CONCAT44(auVar65._4_4_ * auVar37._4_4_ - auVar54._4_4_ * auVar67._4_4_,
                                auVar65._0_4_ * auVar37._0_4_ - auVar54._0_4_ * auVar67._0_4_),4,1);
    auVar38 = NEON_ext(auVar32,auVar32,8,1);
    fVar30 = fVar21 - (auVar43._0_4_ + auVar43._4_4_ + auVar64._0_4_ + auVar64._4_4_);
    auVar11._4_4_ = fVar48;
    auVar11._0_4_ = fVar45;
    auVar11._8_4_ = fVar46;
    auVar11._12_4_ = 0;
    auVar12._4_4_ = fVar48;
    auVar12._0_4_ = fVar45;
    auVar12._8_4_ = fVar46;
    auVar12._12_4_ = 0;
    auVar65 = NEON_ext(auVar11,auVar12,8,1);
    fVar21 = fVar21 - (auVar32._0_4_ + auVar32._4_4_ + auVar38._0_4_ + auVar38._4_4_);
    auVar66._0_4_ = fVar45 * (float)uVar56;
    fVar59 = (float)((ulong)uVar56 >> 0x20);
    auVar66._4_4_ = fVar48 * fVar59;
    auVar66._8_4_ = fVar46 * fVar29;
    auVar66._12_4_ = 0;
    auVar38 = NEON_ext(auVar66,auVar66,8,1);
    fVar22 = auVar37._0_4_ * fVar28 - auVar54._0_4_ * fVar21;
    fVar26 = auVar37._4_4_ * fVar28 - auVar54._4_4_ * fVar21;
    fVar28 = auVar37._8_4_ * fVar28 - auVar54._8_4_ * fVar21;
    fVar21 = 0.0 - fVar21 * 0.0;
    auVar5._4_4_ = fVar26;
    auVar5._0_4_ = fVar22;
    auVar5._8_4_ = fVar28;
    auVar5._12_4_ = fVar21;
    auVar6._4_4_ = fVar26;
    auVar6._0_4_ = fVar22;
    auVar6._8_4_ = fVar28;
    auVar6._12_4_ = fVar21;
    auVar64 = NEON_ext(auVar5,auVar6,8,1);
    uVar49 = NEON_ext(CONCAT44(fVar26,fVar22),(ulong)(uint)auVar64._0_4_,4,1);
    fVar21 = fVar45 * (float)uVar49 - fVar48 * fVar22;
    uVar49 = NEON_ext(CONCAT44(fVar48 * (float)((ulong)uVar49 >> 0x20) - fVar46 * fVar26,fVar21),
                      CONCAT44(auVar65._4_4_ * fVar26 - fVar48 * 0.0,
                               auVar65._0_4_ * fVar22 - fVar45 * auVar64._0_4_),4,1);
    fVar26 = auVar38._0_4_ + auVar38._4_4_;
    fVar22 = auVar66._0_4_ + auVar66._4_4_ + fVar26;
    fVar26 = auVar66._0_4_ + auVar66._4_4_ + fVar26;
    auVar33._0_4_ = (float)uVar49 - (float)uVar56 * fVar30;
    auVar33._4_4_ = (float)((ulong)uVar49 >> 0x20) - fVar59 * fVar30;
    auVar33._8_4_ = fVar21 - fVar29 * fVar30;
    auVar33._12_4_ = 0.0 - fVar30 * 0.0;
    auVar38 = NEON_ext(auVar33,auVar33,8,1);
    uVar49 = NEON_frecpe(CONCAT44(fVar26,fVar22),4);
    uVar56 = NEON_frecps(CONCAT44(fVar26,fVar22),uVar49,4);
    fVar21 = (float)uVar49 * (float)uVar56;
    fVar28 = (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
    uVar49 = NEON_frecps(CONCAT44(fVar26,fVar22),CONCAT44(fVar28,fVar21),4);
    fVar21 = fVar21 * (float)uVar49;
    fVar28 = fVar28 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frecps(CONCAT44(fVar26,fVar22),CONCAT44(fVar28,fVar21),4);
    fVar21 = fVar21 * (float)uVar49;
    fVar28 = fVar28 * (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frecps(CONCAT44(fVar26,fVar22),CONCAT44(fVar28,fVar21),4);
    fVar21 = fVar21 * (float)uVar49;
    uVar49 = NEON_frecps(CONCAT44(fVar26,fVar22),
                         CONCAT44(fVar28 * (float)((ulong)uVar49 >> 0x20),fVar21),4);
    fVar21 = fVar21 * (float)uVar49;
    fVar22 = auVar33._0_4_ * fVar21;
    fVar28 = auVar33._4_4_ * fVar21;
    fVar21 = auVar38._0_4_ * fVar21;
  }
  auVar27._0_4_ = pfVar2[0xc] + *pfVar2 * fVar22 + pfVar2[4] * fVar28 + pfVar2[8] * fVar21;
  auVar27._4_4_ = pfVar2[0xd] + pfVar2[1] * fVar22 + pfVar2[5] * fVar28 + pfVar2[9] * fVar21;
  auVar27._8_4_ = pfVar2[0xe] + pfVar2[2] * fVar22 + pfVar2[6] * fVar28 + pfVar2[10] * fVar21;
  auVar27._12_4_ = pfVar2[0xf] + 0.0;
  return auVar27;
}


