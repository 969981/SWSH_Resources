/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0027c9b0; name: FUN_0027c9b0
 */


undefined1  [16] FUN_0027c9b0(long param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  ulong uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined8 uVar60;
  float fVar63;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  float fVar64;
  ulong uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 local_50;
  ulong uStack_48;
  
  fVar30 = (float)param_2[1];
  fVar36 = (float)*param_2;
  fVar38 = (float)((ulong)*param_2 >> 0x20);
  lVar1 = *(long *)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  fVar27 = (float)*(undefined8 *)(param_1 + 0x20) * fVar36 + *(float *)(param_1 + 0x30) * fVar38 +
           *(float *)(param_1 + 0x40) * fVar30;
  fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar36 +
           *(float *)(param_1 + 0x34) * fVar38 + *(float *)(param_1 + 0x44) * fVar30;
  fVar30 = (float)*(undefined8 *)(param_1 + 0x28) * fVar36 + *(float *)(param_1 + 0x38) * fVar38 +
           *(float *)(param_1 + 0x48) * fVar30;
  auVar39._0_4_ = fVar27 * *(float *)(lVar1 + 0x40);
  auVar39._4_4_ = fVar29 * *(float *)(lVar1 + 0x44);
  auVar39._8_4_ = fVar30 * *(float *)(lVar1 + 0x48);
  auVar39._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
  fVar32 = (float)*(undefined8 *)(lVar1 + 0x30) * fVar27;
  fVar34 = (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) * fVar29;
  fVar36 = (float)*(undefined8 *)(lVar1 + 0x38) * fVar30;
  fVar38 = (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20) * 0.0;
  auVar69._4_4_ = fVar34;
  auVar69._0_4_ = fVar32;
  auVar69._8_4_ = fVar36;
  auVar69._12_4_ = fVar38;
  auVar71._4_4_ = fVar34;
  auVar71._0_4_ = fVar32;
  auVar71._8_4_ = fVar36;
  auVar71._12_4_ = fVar38;
  auVar43 = NEON_ext(auVar69,auVar71,8,1);
  fVar36 = auVar43._0_4_ + auVar43._4_4_;
  auVar43 = NEON_ext(auVar39,auVar39,8,1);
  fVar38 = auVar43._0_4_ + auVar43._4_4_;
  fVar27 = fVar27 * *(float *)(lVar1 + 0x50);
  fVar29 = fVar29 * *(float *)(lVar1 + 0x54);
  fVar30 = fVar30 * *(float *)(lVar1 + 0x58);
  fVar31 = *(float *)(lVar1 + 0x5c) * 0.0;
  auVar43._4_4_ = fVar29;
  auVar43._0_4_ = fVar27;
  auVar43._8_4_ = fVar30;
  auVar43._12_4_ = fVar31;
  auVar68._4_4_ = fVar29;
  auVar68._0_4_ = fVar27;
  auVar68._8_4_ = fVar30;
  auVar68._12_4_ = fVar31;
  auVar43 = NEON_ext(auVar43,auVar68,8,1);
  uStack_48 = (ulong)(uint)(fVar27 + fVar29 + auVar43._0_4_ + auVar43._4_4_);
  local_50 = NEON_ext(CONCAT44(fVar32 + fVar34 + fVar36,fVar32 + fVar34 + fVar36),
                      CONCAT44(auVar39._0_4_ + auVar39._4_4_ + fVar38,
                               auVar39._0_4_ + auVar39._4_4_ + fVar38),4,1);
  uVar21 = FUN_00222070(lVar1,&local_50);
  *param_3 = uVar21;
  fVar36 = *(float *)(lVar1 + 0x10);
  if (fVar36 <= 0.0) {
    puVar3 = (undefined8 *)(*(long *)(lVar1 + 0xa0) + (long)(int)uVar21 * 0xc);
    fVar30 = (float)puVar3[1];
    uVar53 = *puVar3;
    fVar36 = (float)uVar53;
    fVar27 = (float)((ulong)uVar53 >> 0x20);
    fVar38 = (float)*(undefined8 *)(lVar1 + 0x30) * fVar36 + *(float *)(lVar1 + 0x40) * fVar27 +
             *(float *)(lVar1 + 0x50) * fVar30;
    fVar29 = (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) * fVar36 +
             *(float *)(lVar1 + 0x44) * fVar27 + *(float *)(lVar1 + 0x54) * fVar30;
    fVar27 = (float)*(undefined8 *)(lVar1 + 0x38) * fVar36 + *(float *)(lVar1 + 0x48) * fVar27 +
             *(float *)(lVar1 + 0x58) * fVar30;
  }
  else {
    lVar23 = *(long *)(lVar1 + 0x90);
    lVar22 = *(long *)(lVar23 + 0x28);
    puVar3 = (undefined8 *)(*(long *)(lVar1 + 0xa0) + (ulong)uVar21 * 0xc);
    fVar34 = (float)puVar3[1];
    uVar53 = *puVar3;
    fVar31 = (float)uVar53;
    fVar32 = (float)((ulong)uVar53 >> 0x20);
    uVar21 = uVar21 * 3;
    lVar23 = lVar22 + (ulong)*(byte *)(lVar23 + 0x27) * 0x14 + (ulong)*(byte *)(lVar23 + 0x26) * 0xc
             + ((ulong)*(ushort *)(lVar23 + 0x24) & 0x7fff) * 2;
    fVar38 = *(float *)(lVar1 + 0x60);
    fVar27 = *(float *)(lVar1 + 100);
    fVar29 = *(float *)(lVar1 + 0x68);
    fVar30 = *(float *)(lVar1 + 0x6c);
    puVar3 = (undefined8 *)(lVar22 + (ulong)*(byte *)(lVar23 + (ulong)uVar21) * 0x14);
    fVar51 = (float)puVar3[1];
    uVar53 = *puVar3;
    fVar48 = (float)uVar53;
    fVar50 = (float)((ulong)uVar53 >> 0x20);
    fVar33 = *(float *)(lVar1 + 0x30) * fVar31 + *(float *)(lVar1 + 0x40) * fVar32 +
             (float)*(undefined8 *)(lVar1 + 0x50) * fVar34;
    fVar35 = *(float *)(lVar1 + 0x34) * fVar31 + *(float *)(lVar1 + 0x44) * fVar32 +
             (float)((ulong)*(undefined8 *)(lVar1 + 0x50) >> 0x20) * fVar34;
    fVar37 = *(float *)(lVar1 + 0x38) * fVar31 + *(float *)(lVar1 + 0x48) * fVar32 +
             (float)*(undefined8 *)(lVar1 + 0x58) * fVar34;
    auVar44._0_4_ = fVar38 * fVar48;
    auVar44._4_4_ = fVar27 * fVar50;
    auVar44._8_4_ = fVar29 * fVar51;
    auVar44._12_4_ = fVar30 * 0.0;
    auVar43 = NEON_ext(auVar44,auVar44,8,1);
    fVar24 = auVar43._0_4_ + auVar43._4_4_;
    fVar31 = *(float *)(lVar1 + 0x70);
    fVar32 = *(float *)(lVar1 + 0x74);
    fVar34 = *(float *)(lVar1 + 0x78);
    fVar64 = *(float *)(lVar1 + 0x7c);
    fVar17 = *(float *)(lVar1 + 0x80);
    fVar18 = *(float *)(lVar1 + 0x84);
    fVar19 = *(float *)(lVar1 + 0x88);
    fVar20 = *(float *)(lVar1 + 0x8c);
    auVar55._0_4_ = fVar48 * fVar31;
    auVar55._4_4_ = fVar50 * fVar32;
    auVar55._8_4_ = fVar51 * fVar34;
    auVar55._12_4_ = fVar64 * 0.0;
    auVar43 = NEON_ext(auVar55,auVar55,8,1);
    fVar48 = fVar48 * fVar17;
    fVar50 = fVar50 * fVar18;
    fVar25 = auVar43._0_4_ + auVar43._4_4_;
    auVar11._4_4_ = fVar50;
    auVar11._0_4_ = fVar48;
    auVar11._8_4_ = fVar51 * fVar19;
    auVar11._12_4_ = fVar20 * 0.0;
    auVar12._4_4_ = fVar50;
    auVar12._0_4_ = fVar48;
    auVar12._8_4_ = fVar51 * fVar19;
    auVar12._12_4_ = fVar20 * 0.0;
    auVar43 = NEON_ext(auVar11,auVar12,8,1);
    fVar50 = fVar48 + fVar50 + auVar43._0_4_ + auVar43._4_4_;
    uVar53 = NEON_ext(CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar24,
                               auVar44._0_4_ + auVar44._4_4_ + fVar24),
                      CONCAT44(auVar55._0_4_ + auVar55._4_4_ + fVar25,
                               auVar55._0_4_ + auVar55._4_4_ + fVar25),4,1);
    fVar49 = (float)uVar53;
    fVar48 = fVar49 * fVar49;
    fVar52 = (float)((ulong)uVar53 >> 0x20);
    fVar51 = fVar52 * fVar52;
    auVar13._4_4_ = fVar51;
    auVar13._0_4_ = fVar48;
    auVar13._8_4_ = fVar50 * fVar50;
    auVar13._12_4_ = 0;
    auVar14._4_4_ = fVar51;
    auVar14._0_4_ = fVar48;
    auVar14._8_4_ = fVar50 * fVar50;
    auVar14._12_4_ = 0;
    auVar43 = NEON_ext(auVar13,auVar14,8,1);
    fVar25 = auVar43._0_4_ + auVar43._4_4_;
    fVar24 = fVar48 + fVar51 + fVar25;
    fVar25 = fVar48 + fVar51 + fVar25;
    uVar53 = NEON_frsqrte(CONCAT44(fVar25,fVar24),4);
    fVar48 = (float)uVar53;
    fVar51 = (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar51 * fVar51,fVar48 * fVar48),CONCAT44(fVar25,fVar24),4);
    fVar48 = fVar48 * (float)uVar53;
    fVar51 = fVar51 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar51 * fVar51,fVar48 * fVar48),CONCAT44(fVar25,fVar24),4);
    fVar48 = fVar48 * (float)uVar53;
    fVar51 = fVar51 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar51 * fVar51,fVar48 * fVar48),CONCAT44(fVar25,fVar24),4);
    fVar48 = fVar48 * (float)uVar53;
    fVar51 = fVar51 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar51 * fVar51,fVar48 * fVar48),CONCAT44(fVar25,fVar24),4);
    uVar54 = CONCAT44(fVar25 * fVar51 * (float)((ulong)uVar53 >> 0x20),
                      fVar24 * fVar48 * (float)uVar53);
    uVar54 = uVar54 ^ (uVar54 ^ CONCAT44(fVar25,fVar24)) &
                      CONCAT44(-(uint)(fVar24 == 0.0),-(uint)(fVar24 == 0.0));
    uVar53 = NEON_frecpe(uVar54,4);
    uVar60 = NEON_frecps(uVar54,uVar53,4);
    fVar51 = (float)uVar53 * (float)uVar60;
    fVar24 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
    uVar53 = NEON_frecps(uVar54,CONCAT44(fVar24,fVar51),4);
    fVar51 = fVar51 * (float)uVar53;
    fVar24 = fVar24 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar54,CONCAT44(fVar24,fVar51),4);
    fVar51 = fVar51 * (float)uVar53;
    fVar24 = fVar24 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar54,CONCAT44(fVar24,fVar51),4);
    fVar51 = fVar51 * (float)uVar53;
    uVar53 = NEON_frecps(uVar54,CONCAT44(fVar24 * (float)((ulong)uVar53 >> 0x20),fVar51),4);
    fVar51 = fVar51 * (float)uVar53;
    pfVar4 = (float *)(lVar22 + (ulong)*(byte *)(lVar23 + (ulong)(uVar21 + 1)) * 0x14);
    fVar24 = *pfVar4;
    fVar25 = pfVar4[1];
    fVar48 = pfVar4[2];
    fVar49 = fVar49 * fVar51;
    fVar52 = fVar52 * fVar51;
    fVar50 = fVar50 * fVar51;
    auVar62._0_4_ = fVar38 * fVar24;
    auVar62._4_4_ = fVar27 * fVar25;
    auVar62._8_4_ = fVar29 * fVar48;
    auVar62._12_4_ = fVar30 * 0.0;
    auVar43 = NEON_ext(auVar62,auVar62,8,1);
    fVar26 = auVar43._0_4_ + auVar43._4_4_;
    auVar66._0_4_ = fVar31 * fVar24;
    auVar66._4_4_ = fVar32 * fVar25;
    auVar66._8_4_ = fVar34 * fVar48;
    auVar66._12_4_ = fVar64 * 0.0;
    auVar43 = NEON_ext(auVar66,auVar66,8,1);
    auVar56._0_4_ = fVar17 * fVar24;
    auVar56._4_4_ = fVar18 * fVar25;
    auVar56._8_4_ = fVar19 * fVar48;
    auVar56._12_4_ = fVar20 * 0.0;
    fVar24 = auVar43._0_4_ + auVar43._4_4_;
    auVar43 = NEON_ext(auVar56,auVar56,8,1);
    fVar51 = auVar56._0_4_ + auVar56._4_4_ + auVar43._0_4_ + auVar43._4_4_;
    uVar53 = NEON_ext(CONCAT44(auVar62._0_4_ + auVar62._4_4_ + fVar26,
                               auVar62._0_4_ + auVar62._4_4_ + fVar26),
                      CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar24,
                               auVar66._0_4_ + auVar66._4_4_ + fVar24),4,1);
    fVar59 = (float)uVar53;
    auVar57._0_4_ = fVar59 * fVar59;
    fVar63 = (float)((ulong)uVar53 >> 0x20);
    auVar57._4_4_ = fVar63 * fVar63;
    auVar57._8_4_ = fVar51 * fVar51;
    auVar57._12_4_ = 0;
    auVar43 = NEON_ext(auVar57,auVar57,8,1);
    fVar25 = auVar43._0_4_ + auVar43._4_4_;
    fVar24 = auVar57._0_4_ + auVar57._4_4_ + fVar25;
    fVar25 = auVar57._0_4_ + auVar57._4_4_ + fVar25;
    uVar54 = CONCAT44(fVar25,fVar24);
    uVar53 = NEON_frsqrte(uVar54,4);
    fVar48 = (float)uVar53;
    fVar26 = (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar48 * fVar48),uVar54,4);
    fVar48 = fVar48 * (float)uVar53;
    fVar26 = fVar26 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar48 * fVar48),uVar54,4);
    fVar48 = fVar48 * (float)uVar53;
    fVar26 = fVar26 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar48 * fVar48),uVar54,4);
    fVar48 = fVar48 * (float)uVar53;
    fVar26 = fVar26 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar48 * fVar48),uVar54,4);
    uVar65 = CONCAT44(fVar25 * fVar26 * (float)((ulong)uVar53 >> 0x20),
                      fVar24 * fVar48 * (float)uVar53);
    uVar65 = uVar65 ^ (uVar65 ^ uVar54) & CONCAT44(-(uint)(fVar24 == 0.0),-(uint)(fVar24 == 0.0));
    uVar53 = NEON_frecpe(uVar65,4);
    uVar60 = NEON_frecps(uVar65,uVar53,4);
    fVar26 = (float)uVar53 * (float)uVar60;
    fVar24 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
    uVar53 = NEON_frecps(uVar65,CONCAT44(fVar24,fVar26),4);
    fVar26 = fVar26 * (float)uVar53;
    fVar24 = fVar24 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar65,CONCAT44(fVar24,fVar26),4);
    fVar26 = fVar26 * (float)uVar53;
    fVar24 = fVar24 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar65,CONCAT44(fVar24,fVar26),4);
    fVar26 = fVar26 * (float)uVar53;
    uVar53 = NEON_frecps(uVar65,CONCAT44(fVar24 * (float)((ulong)uVar53 >> 0x20),fVar26),4);
    fVar26 = fVar26 * (float)uVar53;
    pfVar4 = (float *)(lVar22 + (ulong)*(byte *)(lVar23 + (ulong)(uVar21 + 2)) * 0x14);
    fVar24 = *pfVar4;
    fVar25 = pfVar4[1];
    fVar48 = pfVar4[2];
    auVar58._0_4_ = fVar59 * fVar26;
    auVar58._4_4_ = fVar63 * fVar26;
    auVar58._8_4_ = fVar51 * fVar26;
    auVar40._0_4_ = fVar38 * fVar24;
    auVar40._4_4_ = fVar27 * fVar25;
    auVar40._8_4_ = fVar29 * fVar48;
    auVar40._12_4_ = fVar30 * 0.0;
    auVar43 = NEON_ext(auVar40,auVar40,8,1);
    auVar45._0_4_ = fVar31 * fVar24;
    auVar45._4_4_ = fVar32 * fVar25;
    auVar45._8_4_ = fVar34 * fVar48;
    auVar45._12_4_ = fVar64 * 0.0;
    fVar27 = auVar43._0_4_ + auVar43._4_4_;
    auVar47._0_4_ = fVar17 * fVar24;
    auVar47._4_4_ = fVar18 * fVar25;
    auVar47._8_4_ = fVar19 * fVar48;
    auVar47._12_4_ = fVar20 * 0.0;
    auVar68 = NEON_ext(auVar45,auVar45,8,1);
    auVar43 = NEON_ext(auVar47,auVar47,8,1);
    fVar29 = auVar68._0_4_ + auVar68._4_4_;
    auVar58._12_4_ = 0;
    auVar71 = NEON_ext(auVar58,auVar58,8,1);
    fVar38 = auVar47._0_4_ + auVar47._4_4_ + auVar43._0_4_ + auVar43._4_4_;
    uVar53 = NEON_ext(CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar27,
                               auVar40._0_4_ + auVar40._4_4_ + fVar27),
                      CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar29,
                               auVar45._0_4_ + auVar45._4_4_ + fVar29),4,1);
    fVar30 = (float)uVar53;
    auVar46._0_4_ = fVar30 * fVar30;
    fVar31 = (float)((ulong)uVar53 >> 0x20);
    auVar46._4_4_ = fVar31 * fVar31;
    auVar46._8_4_ = fVar38 * fVar38;
    auVar46._12_4_ = 0;
    auVar43 = NEON_ext(auVar46,auVar46,8,1);
    fVar29 = auVar43._0_4_ + auVar43._4_4_;
    fVar27 = auVar46._0_4_ + auVar46._4_4_ + fVar29;
    fVar29 = auVar46._0_4_ + auVar46._4_4_ + fVar29;
    uVar54 = CONCAT44(fVar29,fVar27);
    uVar53 = NEON_frsqrte(uVar54,4);
    fVar32 = (float)uVar53;
    fVar34 = (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),uVar54,4);
    fVar32 = fVar32 * (float)uVar53;
    fVar34 = fVar34 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),uVar54,4);
    fVar32 = fVar32 * (float)uVar53;
    fVar34 = fVar34 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),uVar54,4);
    fVar32 = fVar32 * (float)uVar53;
    fVar34 = fVar34 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),uVar54,4);
    uVar65 = CONCAT44(fVar29 * fVar34 * (float)((ulong)uVar53 >> 0x20),
                      fVar27 * fVar32 * (float)uVar53);
    uVar65 = uVar65 ^ (uVar65 ^ uVar54) & CONCAT44(-(uint)(fVar27 == 0.0),-(uint)(fVar27 == 0.0));
    uVar53 = NEON_frecpe(uVar65,4);
    uVar60 = NEON_frecps(uVar65,uVar53,4);
    fVar32 = (float)uVar53 * (float)uVar60;
    fVar27 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
    uVar53 = NEON_frecps(uVar65,CONCAT44(fVar27,fVar32),4);
    fVar32 = fVar32 * (float)uVar53;
    fVar27 = fVar27 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar65,CONCAT44(fVar27,fVar32),4);
    fVar32 = fVar32 * (float)uVar53;
    fVar27 = fVar27 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar65,CONCAT44(fVar27,fVar32),4);
    fVar32 = fVar32 * (float)uVar53;
    uVar53 = NEON_frecps(uVar65,CONCAT44(fVar27 * (float)((ulong)uVar53 >> 0x20),fVar32),4);
    fVar32 = fVar32 * (float)uVar53;
    fVar27 = fVar33 * fVar49;
    fVar29 = fVar35 * fVar52;
    auVar41._0_4_ = fVar30 * fVar32;
    auVar41._4_4_ = fVar31 * fVar32;
    auVar41._8_4_ = fVar38 * fVar32;
    auVar5._4_4_ = fVar29;
    auVar5._0_4_ = fVar27;
    auVar5._8_4_ = fVar37 * fVar50;
    auVar5._12_4_ = 0;
    auVar6._4_4_ = fVar29;
    auVar6._0_4_ = fVar27;
    auVar6._8_4_ = fVar37 * fVar50;
    auVar6._12_4_ = 0;
    auVar68 = NEON_ext(auVar5,auVar6,8,1);
    auVar41._12_4_ = 0;
    auVar43 = NEON_ext(auVar41,auVar41,8,1);
    auVar67._0_4_ = fVar33 * auVar58._0_4_;
    auVar67._4_4_ = fVar35 * auVar58._4_4_;
    auVar67._8_4_ = fVar37 * auVar58._8_4_;
    auVar67._12_4_ = 0;
    auVar69 = NEON_ext(auVar67,auVar67,8,1);
    auVar70._0_4_ = fVar33 * auVar41._0_4_;
    auVar70._4_4_ = fVar35 * auVar41._4_4_;
    auVar70._8_4_ = fVar37 * auVar41._8_4_;
    auVar70._12_4_ = 0;
    fVar32 = auVar58._0_4_ * auVar41._4_4_ - auVar58._4_4_ * auVar41._0_4_;
    uVar61 = NEON_ext(CONCAT44(auVar58._4_4_ * auVar41._8_4_ - auVar58._8_4_ * auVar41._4_4_,fVar32)
                      ,CONCAT44(auVar71._4_4_ * auVar41._4_4_ - auVar58._4_4_ * auVar43._4_4_,
                                auVar71._0_4_ * auVar41._0_4_ - auVar58._0_4_ * auVar43._0_4_),4,1);
    auVar43 = NEON_ext(auVar70,auVar70,8,1);
    fVar64 = fVar36 - (auVar67._0_4_ + auVar67._4_4_ + auVar69._0_4_ + auVar69._4_4_);
    auVar15._4_4_ = fVar52;
    auVar15._0_4_ = fVar49;
    auVar15._8_4_ = fVar50;
    auVar15._12_4_ = 0;
    auVar16._4_4_ = fVar52;
    auVar16._0_4_ = fVar49;
    auVar16._8_4_ = fVar50;
    auVar16._12_4_ = 0;
    auVar69 = NEON_ext(auVar15,auVar16,8,1);
    auVar72._0_4_ = fVar49 * (float)uVar61;
    fVar34 = (float)((ulong)uVar61 >> 0x20);
    auVar72._4_4_ = fVar52 * fVar34;
    auVar72._8_4_ = fVar50 * fVar32;
    auVar72._12_4_ = 0;
    fVar30 = fVar36 - (auVar70._0_4_ + auVar70._4_4_ + auVar43._0_4_ + auVar43._4_4_);
    fVar38 = auVar41._0_4_ * fVar64 - auVar58._0_4_ * fVar30;
    fVar31 = auVar41._4_4_ * fVar64 - auVar58._4_4_ * fVar30;
    auVar42._0_8_ = CONCAT44(fVar31,fVar38);
    auVar42._8_4_ = auVar41._8_4_ * fVar64 - auVar58._8_4_ * fVar30;
    auVar42._12_4_ = 0.0 - fVar30 * 0.0;
    auVar43 = NEON_ext(auVar42,auVar42,8,1);
    uVar53 = NEON_ext(auVar42._0_8_,(ulong)(uint)auVar43._0_4_,4,1);
    fVar30 = fVar49 * (float)uVar53 - fVar52 * fVar38;
    uVar53 = NEON_ext(CONCAT44(fVar52 * (float)((ulong)uVar53 >> 0x20) - fVar50 * fVar31,fVar30),
                      CONCAT44(auVar69._4_4_ * fVar31 - fVar52 * 0.0,
                               auVar69._0_4_ * fVar38 - fVar49 * auVar43._0_4_),4,1);
    fVar27 = fVar36 - (fVar27 + fVar29 + auVar68._0_4_ + auVar68._4_4_);
    auVar43 = NEON_ext(auVar72,auVar72,8,1);
    fVar38 = auVar43._0_4_ + auVar43._4_4_;
    uVar60 = CONCAT44(auVar72._0_4_ + auVar72._4_4_ + fVar38,auVar72._0_4_ + auVar72._4_4_ + fVar38)
    ;
    fVar38 = (float)uVar53 - (float)uVar61 * fVar27;
    fVar29 = (float)((ulong)uVar53 >> 0x20) - fVar34 * fVar27;
    fVar30 = fVar30 - fVar32 * fVar27;
    fVar27 = 0.0 - fVar27 * 0.0;
    auVar7._4_4_ = fVar29;
    auVar7._0_4_ = fVar38;
    auVar7._8_4_ = fVar30;
    auVar7._12_4_ = fVar27;
    auVar8._4_4_ = fVar29;
    auVar8._0_4_ = fVar38;
    auVar8._8_4_ = fVar30;
    auVar8._12_4_ = fVar27;
    auVar43 = NEON_ext(auVar7,auVar8,8,1);
    uVar61 = NEON_frecpe(uVar60,4);
    uVar53 = NEON_frecps(uVar60,uVar61,4);
    fVar27 = (float)uVar61 * (float)uVar53;
    fVar30 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar60,CONCAT44(fVar30,fVar27),4);
    fVar27 = fVar27 * (float)uVar53;
    fVar30 = fVar30 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar60,CONCAT44(fVar30,fVar27),4);
    fVar27 = fVar27 * (float)uVar53;
    fVar30 = fVar30 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frecps(uVar60,CONCAT44(fVar30,fVar27),4);
    fVar27 = fVar27 * (float)uVar53;
    uVar53 = NEON_frecps(uVar60,CONCAT44(fVar30 * (float)((ulong)uVar53 >> 0x20),fVar27),4);
    fVar27 = fVar27 * (float)uVar53;
    fVar38 = fVar38 * fVar27;
    fVar29 = fVar29 * fVar27;
    fVar27 = auVar43._0_4_ * fVar27;
    fVar32 = (fVar33 - fVar38) * (fVar33 - fVar38);
    fVar34 = (fVar35 - fVar29) * (fVar35 - fVar29);
    fVar30 = (fVar37 - fVar27) * (fVar37 - fVar27);
    auVar9._4_4_ = fVar34;
    auVar9._0_4_ = fVar32;
    auVar9._8_4_ = fVar30;
    auVar9._12_4_ = 0;
    auVar10._4_4_ = fVar34;
    auVar10._0_4_ = fVar32;
    auVar10._8_4_ = fVar30;
    auVar10._12_4_ = 0;
    auVar43 = NEON_ext(auVar9,auVar10,8,1);
    fVar31 = auVar43._0_4_ + auVar43._4_4_;
    fVar30 = fVar32 + fVar34 + fVar31;
    fVar31 = fVar32 + fVar34 + fVar31;
    uVar53 = NEON_frsqrte(CONCAT44(fVar31,fVar30),4);
    fVar32 = (float)uVar53;
    fVar34 = (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),CONCAT44(fVar31,fVar30),4);
    fVar32 = fVar32 * (float)uVar53;
    fVar34 = fVar34 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),CONCAT44(fVar31,fVar30),4);
    fVar32 = fVar32 * (float)uVar53;
    fVar34 = fVar34 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),CONCAT44(fVar31,fVar30),4);
    fVar32 = fVar32 * (float)uVar53;
    fVar34 = fVar34 * (float)((ulong)uVar53 >> 0x20);
    uVar53 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),CONCAT44(fVar31,fVar30),4);
    uVar54 = CONCAT44(fVar31 * fVar34 * (float)((ulong)uVar53 >> 0x20),
                      fVar30 * fVar32 * (float)uVar53);
    uVar54 = uVar54 ^ (uVar54 ^ CONCAT44(fVar31,fVar30)) &
                      CONCAT44(-(uint)(fVar30 == 0.0),-(uint)(fVar30 == 0.0));
    *param_4 = CONCAT44((float)(uVar54 >> 0x20) - fVar36,(float)uVar54 - fVar36);
  }
  auVar28._0_4_ =
       *(float *)(puVar2 + 6) +
       (float)*puVar2 * fVar38 + *(float *)(puVar2 + 2) * fVar29 + *(float *)(puVar2 + 4) * fVar27;
  auVar28._4_4_ =
       *(float *)((long)puVar2 + 0x34) +
       (float)((ulong)*puVar2 >> 0x20) * fVar38 + *(float *)((long)puVar2 + 0x14) * fVar29 +
       *(float *)((long)puVar2 + 0x24) * fVar27;
  auVar28._8_4_ =
       *(float *)(puVar2 + 7) +
       (float)puVar2[1] * fVar38 + *(float *)(puVar2 + 3) * fVar29 + *(float *)(puVar2 + 5) * fVar27
  ;
  auVar28._12_4_ = *(float *)((long)puVar2 + 0x3c) + 0.0;
  return auVar28;
}


