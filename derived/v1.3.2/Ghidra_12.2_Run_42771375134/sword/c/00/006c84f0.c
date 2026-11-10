/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c84f0; name: FUN_006c84f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006c84f0(ulong param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long *param_5)

{
  ushort *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined8 *puVar25;
  float *pfVar26;
  undefined8 *puVar27;
  uint uVar28;
  long *plVar29;
  ulong uVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar38;
  undefined8 uVar39;
  int iVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar44;
  int iVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined8 uVar59;
  float fVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  undefined8 uVar68;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar72;
  float fVar74;
  undefined1 auVar71 [16];
  undefined8 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  undefined8 uVar79;
  float fVar80;
  undefined8 uVar81;
  float fVar82;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte local_d0;
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  byte bStack_cc;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  byte bStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  byte bStack_c5;
  byte bStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar17 = _UNK_01d4b588;
  uVar16 = _DAT_01d4b580;
  uVar15 = _UNK_01d4ae58;
  uVar14 = _DAT_01d4ae50;
  uVar13 = _UNK_01d49dc8;
  uVar12 = _DAT_01d49dc0;
  uStack_88 = 0;
  local_90 = 0;
  puVar27 = *(undefined8 **)(param_4 + 0x60);
  puVar3 = *(undefined8 **)(param_4 + 0x68);
  if (puVar27 == puVar3) {
    uVar28 = 0;
  }
  else {
    uVar28 = 0;
    do {
      fVar18 = DAT_01d4c708;
      puVar25 = (undefined8 *)*puVar27;
      fVar35 = (float)puVar25[1];
      fVar67 = (float)*puVar25;
      fVar58 = (float)((ulong)*puVar25 >> 0x20);
      local_150 = (float)uVar12;
      fStack_14c = (float)((ulong)uVar12 >> 0x20);
      fStack_148 = (float)uVar13;
      fStack_144 = (float)((ulong)uVar13 >> 0x20);
      auVar42._0_4_ = (fVar67 + *(float *)(puVar25 + 2)) * 0.5;
      auVar42._4_4_ = (fVar58 + *(float *)((long)puVar25 + 0x14)) * 0.5;
      auVar42._8_4_ = (fVar35 + *(float *)(puVar25 + 3)) * 0.5;
      auVar42._12_4_ = ((float)((ulong)puVar25[1] >> 0x20) + *(float *)((long)puVar25 + 0x1c)) * 0.5
      ;
      auVar61 = NEON_ext(auVar42,auVar42,8,1);
      fVar32 = (*(float *)(puVar25 + 2) - fVar67) * 0.5;
      fVar67 = (float)*param_3;
      fVar72 = (float)((ulong)*param_3 >> 0x20);
      fVar73 = (float)param_3[1];
      fVar74 = (float)((ulong)param_3[1] >> 0x20);
      fVar33 = (*(float *)((long)puVar25 + 0x14) - fVar58) * 0.5;
      fVar58 = ((float)*param_2 + fVar67) * 0.5;
      fVar64 = ((float)((ulong)*param_2 >> 0x20) + fVar72) * 0.5;
      fVar65 = ((float)param_2[1] + fVar73) * 0.5;
      fVar66 = ((float)((ulong)param_2[1] >> 0x20) + fVar74) * 0.5;
      fVar67 = fVar67 - fVar58;
      fVar72 = fVar72 - fVar64;
      fVar73 = fVar73 - fVar65;
      fVar74 = fVar74 - fVar66;
      fVar35 = (*(float *)(puVar25 + 3) - fVar35) * 0.5;
      fVar58 = fVar58 - auVar42._0_4_;
      fVar64 = fVar64 - auVar42._4_4_;
      fVar65 = fVar65 - auVar61._0_4_;
      fVar66 = fVar66 - 0.0;
      local_140 = (float)uVar16;
      fStack_13c = (float)((ulong)uVar16 >> 0x20);
      fStack_138 = (float)uVar17;
      fStack_134 = (float)((ulong)uVar17 >> 0x20);
      local_130 = (float)uVar14;
      fStack_12c = (float)((ulong)uVar14 >> 0x20);
      fStack_128 = (float)uVar15;
      fStack_124 = (float)((ulong)uVar15 >> 0x20);
      auVar37._0_4_ = fVar58 * local_130;
      auVar37._4_4_ = fVar64 * fStack_12c;
      auVar37._8_4_ = fVar65 * fStack_128;
      auVar37._12_4_ = fVar66 * fStack_124;
      auVar42 = NEON_ext(auVar37,auVar37,8,1);
      auVar43._0_4_ = fVar58 * local_140;
      auVar43._4_4_ = fVar64 * fStack_13c;
      auVar43._8_4_ = fVar65 * fStack_138;
      auVar43._12_4_ = fVar66 * fStack_134;
      fVar58 = fVar58 * local_150;
      fVar64 = fVar64 * fStack_14c;
      uVar47 = (undefined1)((uint)fVar64 >> 8);
      uVar48 = (undefined1)((uint)fVar64 >> 0x10);
      uVar49 = (undefined1)((uint)fVar64 >> 0x18);
      fVar65 = fVar65 * fStack_148;
      uVar50 = (undefined1)((uint)fVar65 >> 8);
      uVar51 = (undefined1)((uint)fVar65 >> 0x10);
      uVar52 = (undefined1)((uint)fVar65 >> 0x18);
      fVar66 = fVar66 * fStack_144;
      uVar53 = (undefined1)((uint)fVar66 >> 8);
      uVar54 = (undefined1)((uint)fVar66 >> 0x10);
      uVar55 = (undefined1)((uint)fVar66 >> 0x18);
      auVar56 = NEON_ext(auVar43,auVar43,8,1);
      auVar61[4] = SUB41(fVar64,0);
      auVar61._0_4_ = fVar58;
      auVar61[5] = uVar47;
      auVar61[6] = uVar48;
      auVar61[7] = uVar49;
      auVar61[8] = SUB41(fVar65,0);
      auVar61[9] = uVar50;
      auVar61[10] = uVar51;
      auVar61[0xb] = uVar52;
      auVar61[0xc] = SUB41(fVar66,0);
      auVar61[0xd] = uVar53;
      auVar61[0xe] = uVar54;
      auVar61[0xf] = uVar55;
      auVar62[4] = SUB41(fVar64,0);
      auVar62._0_4_ = fVar58;
      auVar62[5] = uVar47;
      auVar62[6] = uVar48;
      auVar62[7] = uVar49;
      auVar62[8] = SUB41(fVar65,0);
      auVar62[9] = uVar50;
      auVar62[10] = uVar51;
      auVar62[0xb] = uVar52;
      auVar62[0xc] = SUB41(fVar66,0);
      auVar62[0xd] = uVar53;
      auVar62[0xe] = uVar54;
      auVar62[0xf] = uVar55;
      auVar61 = NEON_ext(auVar61,auVar62,8,1);
      auVar57._0_4_ = fVar67 * local_130;
      auVar57._4_4_ = fVar72 * fStack_12c;
      auVar57._8_4_ = fVar73 * fStack_128;
      auVar57._12_4_ = fVar74 * fStack_124;
      auVar62 = NEON_ext(auVar57,auVar57,8,1);
      auVar63._0_4_ = fVar67 * local_140;
      auVar63._4_4_ = fVar72 * fStack_13c;
      auVar63._8_4_ = fVar73 * fStack_138;
      auVar63._12_4_ = fVar74 * fStack_134;
      auVar71._0_4_ = fVar67 * local_150;
      auVar71._4_4_ = fVar72 * fStack_14c;
      auVar71._8_4_ = fVar73 * fStack_148;
      auVar71._12_4_ = fVar74 * fStack_144;
      auVar77 = NEON_ext(auVar63,auVar63,8,1);
      fVar67 = auVar62._0_4_ + auVar57._0_4_ + auVar62._4_4_ + auVar57._4_4_;
      auVar62 = NEON_ext(auVar71,auVar71,8,1);
      fVar72 = auVar42._0_4_ + auVar37._0_4_ + auVar42._4_4_ + auVar37._4_4_;
      fVar73 = auVar77._0_4_ + auVar63._0_4_ + auVar77._4_4_ + auVar63._4_4_;
      fVar74 = auVar56._0_4_ + auVar43._0_4_ + auVar56._4_4_ + auVar43._4_4_;
      fVar65 = auVar62._0_4_ + auVar71._0_4_ + auVar62._4_4_ + auVar71._4_4_;
      fVar82 = fVar33 + ABS(fVar73);
      fVar66 = ABS(fVar74);
      fVar58 = auVar61._0_4_ + fVar58 + auVar61._4_4_ + fVar64;
      bVar19 = false;
      bVar21 = false;
      bVar23 = false;
      if (ABS(fVar72) <= fVar32 + ABS(fVar67)) {
        bVar19 = false;
        bVar21 = false;
        bVar23 = true;
        if (!NAN(fVar66) && !NAN(fVar82)) {
          bVar19 = fVar66 < fVar82;
          bVar21 = fVar66 == fVar82;
          bVar23 = false;
        }
      }
      fVar66 = fVar35 + ABS(fVar65);
      fVar64 = ABS(fVar58);
      bVar20 = false;
      bVar22 = false;
      bVar24 = false;
      if (bVar21 || bVar19 != bVar23) {
        bVar20 = false;
        bVar22 = false;
        bVar24 = true;
        if (!NAN(fVar64) && !NAN(fVar66)) {
          bVar20 = fVar64 < fVar66;
          bVar22 = fVar64 == fVar66;
          bVar24 = false;
        }
      }
      if (bVar22 || bVar20 != bVar24) {
        fVar78 = ABS(fVar73) + DAT_01d4c708;
        fVar80 = ABS(fVar65) + DAT_01d4c708;
        fVar82 = ABS(fVar67) + DAT_01d4c708;
        fVar64 = ABS(fVar58 * fVar67 - fVar72 * fVar65);
        fVar66 = fVar35 * fVar82 + fVar32 * fVar80;
        bVar19 = false;
        bVar21 = false;
        bVar23 = false;
        if (ABS(fVar74 * fVar65 - fVar58 * fVar73) <= fVar35 * fVar78 + fVar33 * fVar80) {
          bVar19 = false;
          bVar21 = false;
          bVar23 = true;
          if (!NAN(fVar64) && !NAN(fVar66)) {
            bVar19 = fVar64 < fVar66;
            bVar21 = fVar64 == fVar66;
            bVar23 = false;
          }
        }
        fVar58 = fVar33 * fVar82 + fVar32 * fVar78;
        fVar67 = ABS(fVar72 * fVar73 - fVar74 * fVar67);
        bVar20 = false;
        bVar22 = false;
        bVar24 = false;
        if (bVar21 || bVar19 != bVar23) {
          bVar20 = false;
          bVar22 = false;
          bVar24 = true;
          if (!NAN(fVar67) && !NAN(fVar58)) {
            bVar20 = fVar67 < fVar58;
            bVar22 = fVar67 == fVar58;
            bVar24 = false;
          }
        }
        if (bVar22 || bVar20 != bVar24) {
          plVar29 = *(long **)(puVar25[4] + 0x30);
          plVar4 = *(long **)(puVar25[4] + 0x38);
          if (plVar29 != plVar4) {
            do {
              puVar25 = (undefined8 *)*plVar29;
              lVar2 = puVar25[1];
              if (puVar25[2] != lVar2) {
                lVar31 = *(long *)*puVar25;
                uVar30 = 0;
                do {
                  puVar1 = (ushort *)(lVar2 + uVar30 * 2);
                  puVar25 = (undefined8 *)(lVar31 + (ulong)puVar1[2] * 0xc);
                  pfVar26 = (float *)(lVar31 + (ulong)puVar1[1] * 0xc);
                  auVar11 = *(undefined1 (*) [12])(lVar31 + (ulong)*puVar1 * 0xc);
                  local_b0 = *(undefined8 *)pfVar26;
                  fVar35 = pfVar26[2];
                  local_c0 = *puVar25;
                  auVar36._0_4_ = *pfVar26 - auVar11._0_4_;
                  auVar36._4_4_ = pfVar26[1] - auVar11._4_4_;
                  fVar33 = auVar11._8_4_;
                  auVar36._8_4_ = fVar35 - fVar33;
                  auVar36._12_4_ = 0;
                  uVar75 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd5418);
                  fVar82 = *(float *)(puVar25 + 1);
                  uVar9 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd5188);
                  uStack_a8 = (ulong)(uint)fVar35;
                  uStack_98 = (ulong)(uint)fVar33;
                  local_a0 = auVar11._0_8_;
                  fVar65 = (float)local_c0 - auVar11._0_4_;
                  fVar66 = (float)((ulong)local_c0 >> 0x20);
                  fVar32 = fVar66 - auVar11._4_4_;
                  fVar33 = fVar82 - fVar33;
                  auVar56._4_4_ = fVar32;
                  auVar56._0_4_ = fVar65;
                  auVar56._8_4_ = fVar33;
                  auVar56._12_4_ = 0;
                  uVar79 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd50f8);
                  auVar77._4_4_ = fVar32;
                  auVar77._0_4_ = fVar65;
                  auVar77._8_4_ = fVar33;
                  auVar77._12_4_ = 0;
                  uVar81 = a64_TBL(ZEXT816(0),auVar77,DAT_01cd5158);
                  uVar68 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd5158);
                  uVar59 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd50f8);
                  auVar7._4_4_ = fVar32;
                  auVar7._0_4_ = fVar65;
                  auVar7._8_4_ = fVar33;
                  auVar7._12_4_ = 0;
                  uVar39 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
                  auVar8._4_4_ = fVar32;
                  auVar8._0_4_ = fVar65;
                  auVar8._8_4_ = fVar33;
                  auVar8._12_4_ = 0;
                  uVar10 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5188);
                  uStack_b8 = (ulong)(uint)fVar82;
                  fVar67 = (float)uVar75 * (float)uVar79 - (float)uVar59 * (float)uVar39;
                  fVar72 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar79 >> 0x20) -
                           (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar39 >> 0x20);
                  fVar73 = (float)uVar9 * (float)uVar81 - (float)uVar68 * (float)uVar10;
                  fVar74 = (float)((ulong)uVar9 >> 0x20) * (float)((ulong)uVar81 >> 0x20) -
                           (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar10 >> 0x20);
                  auVar40._0_4_ = fVar67 * fVar67;
                  auVar40._4_4_ = fVar72 * fVar72;
                  auVar40._8_4_ = fVar73 * fVar73;
                  auVar40._12_4_ = fVar74 * fVar74;
                  auVar61 = NEON_ext(auVar40,auVar40,8,1);
                  fVar64 = auVar61._0_4_ + auVar40._0_4_;
                  fVar78 = auVar61._4_4_ + auVar40._4_4_;
                  fVar58 = fVar64 + fVar78;
                  fVar64 = fVar64 + fVar78;
                  auVar41._8_8_ = CONCAT44(fVar64,fVar58);
                  auVar41._0_8_ = CONCAT44(fVar64,fVar58);
                  auVar61 = NEON_frsqrte(auVar41,4);
                  auVar69._0_4_ = auVar61._0_4_ * fVar58;
                  auVar69._4_4_ = auVar61._4_4_ * fVar64;
                  auVar69._8_4_ = auVar61._8_4_ * fVar58;
                  auVar69._12_4_ = auVar61._12_4_ * fVar64;
                  auVar62 = NEON_frsqrts(auVar61,auVar69,4);
                  auVar60._0_4_ = auVar61._0_4_ * auVar62._0_4_;
                  auVar60._4_4_ = auVar61._4_4_ * auVar62._4_4_;
                  auVar60._8_4_ = auVar61._8_4_ * auVar62._8_4_;
                  auVar60._12_4_ = auVar61._12_4_ * auVar62._12_4_;
                  auVar70._0_4_ = (auVar36._0_4_ - fVar65) * (auVar36._0_4_ - fVar65);
                  auVar70._4_4_ = (auVar36._4_4_ - fVar32) * (auVar36._4_4_ - fVar32);
                  auVar70._8_4_ = (auVar36._8_4_ - fVar33) * (auVar36._8_4_ - fVar33);
                  auVar70._12_4_ = 0;
                  auVar62 = NEON_ext(auVar70,auVar70,8,1);
                  auVar76._0_4_ = fVar58 * auVar60._0_4_;
                  auVar76._4_4_ = fVar64 * auVar60._4_4_;
                  auVar76._8_4_ = fVar58 * auVar60._8_4_;
                  auVar76._12_4_ = fVar64 * auVar60._12_4_;
                  iVar38 = -(uint)(fVar58 == 0.0);
                  iVar44 = -(uint)(fVar64 == 0.0);
                  iVar45 = -(uint)(fVar58 == 0.0);
                  iVar46 = -(uint)(fVar64 == 0.0);
                  auVar61 = NEON_frsqrts(auVar60,auVar76,4);
                  fVar67 = fVar67 * auVar60._0_4_ * auVar61._0_4_;
                  fVar72 = fVar72 * auVar60._4_4_ * auVar61._4_4_;
                  fVar73 = fVar73 * auVar60._8_4_ * auVar61._8_4_;
                  fVar74 = fVar74 * auVar60._12_4_ * auVar61._12_4_;
                  local_d0 = SUB41(fVar67,0) & ~(byte)iVar38;
                  bStack_cf = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar38 >> 8);
                  bStack_ce = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
                  bStack_cd = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
                  bStack_cc = SUB41(fVar72,0) & ~(byte)iVar44;
                  bStack_cb = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar44 >> 8);
                  bStack_ca = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
                  bStack_c9 = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
                  bStack_c8 = SUB41(fVar73,0) & ~(byte)iVar45;
                  bStack_c7 = (byte)((uint)fVar73 >> 8) & ~(byte)((uint)iVar45 >> 8);
                  bStack_c6 = (byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
                  bStack_c5 = (byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
                  bStack_c4 = SUB41(fVar74,0) & ~(byte)iVar46;
                  bStack_c3 = (byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar46 >> 8);
                  bStack_c2 = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
                  bStack_c1 = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
                  if (fVar18 <= auVar62._0_4_ + auVar70._0_4_ + auVar62._4_4_ + auVar70._4_4_) {
                    fVar67 = (float)local_c0 - *pfVar26;
                    fVar66 = fVar66 - pfVar26[1];
                    fVar72 = auVar36._0_4_ - fVar67;
                    fVar73 = auVar36._4_4_ - fVar66;
                    fVar74 = auVar36._8_4_ - (fVar82 - fVar35);
                    auVar34._0_4_ = fVar72 * fVar72;
                    auVar34._4_4_ = fVar73 * fVar73;
                    auVar34._8_4_ = fVar74 * fVar74;
                    auVar34._12_4_ = 0;
                    auVar61 = NEON_ext(auVar34,auVar34,8,1);
                    if (fVar18 <= auVar61._0_4_ + auVar34._0_4_ + auVar61._4_4_ + auVar34._4_4_) {
                      fVar65 = fVar65 - fVar67;
                      fVar32 = fVar32 - fVar66;
                      fVar33 = fVar33 - (fVar82 - fVar35);
                      fVar65 = fVar65 * fVar65;
                      fVar32 = fVar32 * fVar32;
                      fVar33 = fVar33 * fVar33;
                      auVar5._4_4_ = fVar32;
                      auVar5._0_4_ = fVar65;
                      auVar5._8_4_ = fVar33;
                      auVar5._12_4_ = 0;
                      auVar6._4_4_ = fVar32;
                      auVar6._0_4_ = fVar65;
                      auVar6._8_4_ = fVar33;
                      auVar6._12_4_ = 0;
                      auVar61 = NEON_ext(auVar5,auVar6,8,1);
                      if (fVar18 <= auVar61._0_4_ + fVar65 + auVar61._4_4_ + fVar32) {
                        param_1 = FUN_006c8fb0(param_1,&local_90,param_2,param_3,&local_a0,&local_b0
                                               ,&local_c0,&local_d0);
                        uVar28 = uVar28 | (uint)param_1;
                        if ((param_5 != (long *)0x0) && ((param_1 & 1) != 0)) {
                          local_118 = param_2[1];
                          local_120 = *param_2;
                          local_108 = param_3[1];
                          local_110 = *param_3;
                          local_100 = local_90;
                          uStack_f8 = uStack_88;
                          local_f0 = CONCAT17(bStack_c9,
                                              CONCAT16(bStack_ca,
                                                       CONCAT15(bStack_cb,
                                                                CONCAT14(bStack_cc,
                                                                         CONCAT13(bStack_cd,
                                                                                  CONCAT12(bStack_ce
                                                  ,CONCAT11(bStack_cf,local_d0)))))));
                          uStack_e8 = CONCAT17(bStack_c1,
                                               CONCAT16(bStack_c2,
                                                        CONCAT15(bStack_c3,
                                                                 CONCAT14(bStack_c4,
                                                                          CONCAT13(bStack_c5,
                                                                                   CONCAT12(
                                                  bStack_c6,CONCAT11(bStack_c7,bStack_c8)))))));
                          local_e0 = **(undefined8 **)(*plVar29 + 0x38);
                          param_1 = (**(code **)(*param_5 + 0x20))(param_5,&local_120);
                          uVar28 = 1;
                        }
                      }
                    }
                  }
                  uVar30 = uVar30 + 3;
                } while (uVar30 < (ulong)(*(long *)(*plVar29 + 0x10) - *(long *)(*plVar29 + 8) >> 1)
                        );
              }
              plVar29 = plVar29 + 4;
            } while (plVar29 != plVar4);
          }
        }
      }
      puVar27 = puVar27 + 4;
    } while (puVar27 != puVar3);
  }
  return uVar28 & 1;
}


