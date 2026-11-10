/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f2390; name: FUN_004f2390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_004f2390(float *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 auVar13 [16];
  undefined8 uVar22;
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  undefined1 auVar32 [16];
  undefined8 uVar36;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  int iVar62;
  float fVar64;
  int iVar67;
  float fVar68;
  undefined4 uVar69;
  int iVar70;
  float fVar71;
  int iVar72;
  undefined1 auVar65 [16];
  uint uVar63;
  undefined1 auVar66 [16];
  float fVar73;
  undefined1 auVar74 [16];
  uint uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  
  auVar76 = *(undefined1 (*) [16])(param_1 + 0x30);
  fVar85 = param_1[0x34];
  fVar31 = param_1[0x35];
  fVar34 = param_1[0x36];
  fVar82 = *param_1 * fVar85 + (float)*(undefined8 *)(param_1 + 4) * fVar31 + param_1[8] * fVar34;
  fVar83 = param_1[1] * fVar85 + (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar31 +
           param_1[9] * fVar34;
  fVar84 = param_1[2] * fVar85 + (float)*(undefined8 *)(param_1 + 6) * fVar31 + param_1[10] * fVar34
  ;
  fVar85 = param_1[3] * fVar85 + (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * fVar31 +
           param_1[0xb] * fVar34;
  auVar66._8_4_ = 0x3a83126f;
  auVar66._0_8_ = 0x3a83126f3a83126f;
  auVar66._12_4_ = 0x3a83126f;
  auVar74._0_8_ = CONCAT44(ABS(fVar83),ABS(fVar82));
  auVar74._8_4_ = ABS(fVar84);
  auVar74._12_4_ = ABS(fVar85);
  if ((*PTR_DAT_02713780 & 1) == 0) {
    uVar22 = auVar74._8_8_;
    uVar36 = auVar66._8_8_;
    iVar62 = __cxa_guard_acquire(PTR_DAT_02713780);
    puVar10 = PTR_DAT_02713790;
    auVar66._8_8_ = uVar36;
    auVar66._0_8_ = 0x3a83126f3a83126f;
    auVar74._8_8_ = uVar22;
    if (iVar62 != 0) {
      auVar66 = NEON_fmov(0xbf800000,4);
      *(long *)(PTR_DAT_02713790 + 8) = auVar66._8_8_;
      *(long *)puVar10 = auVar66._0_8_;
      __cxa_guard_release(PTR_DAT_02713780);
      auVar66._0_8_ = 0x3a83126f3a83126f;
    }
  }
  fVar86 = auVar74._0_4_ * auVar66._0_4_;
  fVar87 = auVar74._4_4_ * auVar66._4_4_;
  fVar88 = auVar74._8_4_ * auVar66._8_4_;
  fVar89 = auVar74._12_4_ * auVar66._12_4_;
  fVar31 = auVar76._0_4_;
  fVar34 = auVar76._4_4_;
  uVar69 = auVar76._8_4_;
  auVar76._0_8_ = CONCAT44(uVar69,uVar69);
  auVar76._8_4_ = uVar69;
  auVar76._12_4_ = uVar69;
  if ((*PTR_DAT_02713788 & 1) == 0) {
    uVar22 = auVar76._8_8_;
    iVar62 = __cxa_guard_acquire(PTR_DAT_02713788);
    puVar10 = PTR_DAT_02713798;
    auVar76._8_8_ = uVar22;
    if (iVar62 != 0) {
      auVar66 = NEON_fmov(0x3f800000,4);
      *(long *)(PTR_DAT_02713798 + 8) = auVar66._8_8_;
      *(long *)puVar10 = auVar66._0_8_;
      __cxa_guard_release(PTR_DAT_02713788);
    }
  }
  fVar30 = *(float *)PTR_DAT_02713798 * param_1[0xc] +
           (*param_1 * fVar31 + (float)*(undefined8 *)(param_1 + 4) * fVar34 +
           param_1[8] * auVar76._0_4_) * *(float *)PTR_DAT_02713790;
  fVar33 = *(float *)(PTR_DAT_02713798 + 4) * param_1[0xd] +
           (param_1[1] * fVar31 + (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar34 +
           param_1[9] * auVar76._4_4_) * *(float *)(PTR_DAT_02713790 + 4);
  fVar35 = *(float *)(PTR_DAT_02713798 + 8) * param_1[0xe] +
           (param_1[2] * fVar31 + (float)*(undefined8 *)(param_1 + 6) * fVar34 +
           param_1[10] * auVar76._8_4_) * *(float *)(PTR_DAT_02713790 + 8);
  fVar37 = *(float *)(PTR_DAT_02713798 + 0xc) * param_1[0xf] +
           (param_1[3] * fVar31 + (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * fVar34 +
           param_1[0xb] * auVar76._12_4_) * *(float *)(PTR_DAT_02713790 + 0xc);
  bVar41 = (byte)((uint)(fVar82 - fVar30) >> 0x18) ^ (byte)((uint)fVar30 >> 0x18);
  bVar45 = (byte)((uint)(fVar83 - fVar33) >> 0x18) ^ (byte)((uint)fVar33 >> 0x18);
  bVar52 = (byte)((uint)(fVar84 - fVar35) >> 0x18) ^ (byte)((uint)fVar35 >> 0x18);
  bVar60 = (byte)((uint)(fVar85 - fVar37) >> 0x18) ^ (byte)((uint)fVar37 >> 0x18);
  iVar62 = -(uint)(fVar86 <= ABS(fVar82 - fVar30));
  iVar67 = -(uint)(fVar87 <= ABS(fVar83 - fVar33));
  iVar70 = -(uint)(fVar88 <= ABS(fVar84 - fVar35));
  iVar72 = -(uint)(fVar89 <= ABS(fVar85 - fVar37));
  bVar11 = (byte)_DAT_01d4aa40;
  auVar65[0] = (byte)iVar62 & bVar11;
  bVar14 = (byte)((ulong)_DAT_01d4aa40 >> 8);
  auVar65[1] = (byte)((uint)iVar62 >> 8) & bVar14;
  bVar15 = (byte)((ulong)_DAT_01d4aa40 >> 0x10);
  auVar65[2] = (byte)((uint)iVar62 >> 0x10) & bVar15;
  bVar16 = (byte)((ulong)_DAT_01d4aa40 >> 0x18);
  auVar65[3] = (byte)((uint)iVar62 >> 0x18) & bVar16;
  bVar17 = (byte)((ulong)_DAT_01d4aa40 >> 0x20);
  auVar65[4] = (byte)iVar67 & bVar17;
  bVar18 = (byte)((ulong)_DAT_01d4aa40 >> 0x28);
  auVar65[5] = (byte)((uint)iVar67 >> 8) & bVar18;
  bVar19 = (byte)((ulong)_DAT_01d4aa40 >> 0x30);
  auVar65[6] = (byte)((uint)iVar67 >> 0x10) & bVar19;
  bVar20 = (byte)((ulong)_DAT_01d4aa40 >> 0x38);
  auVar65[7] = (byte)((uint)iVar67 >> 0x18) & bVar20;
  bVar21 = (byte)_UNK_01d4aa48;
  auVar65[8] = (byte)iVar70 & bVar21;
  bVar23 = (byte)((ulong)_UNK_01d4aa48 >> 8);
  auVar65[9] = (byte)((uint)iVar70 >> 8) & bVar23;
  bVar24 = (byte)((ulong)_UNK_01d4aa48 >> 0x10);
  auVar65[10] = (byte)((uint)iVar70 >> 0x10) & bVar24;
  bVar25 = (byte)((ulong)_UNK_01d4aa48 >> 0x18);
  auVar65[0xb] = (byte)((uint)iVar70 >> 0x18) & bVar25;
  bVar26 = (byte)((ulong)_UNK_01d4aa48 >> 0x20);
  auVar65[0xc] = (byte)iVar72 & bVar26;
  bVar27 = (byte)((ulong)_UNK_01d4aa48 >> 0x28);
  auVar65[0xd] = (byte)((uint)iVar72 >> 8) & bVar27;
  bVar28 = (byte)((ulong)_UNK_01d4aa48 >> 0x30);
  auVar65[0xe] = (byte)((uint)iVar72 >> 0x10) & bVar28;
  bVar29 = (byte)((ulong)_UNK_01d4aa48 >> 0x38);
  auVar65[0xf] = (byte)((uint)iVar72 >> 0x18) & bVar29;
  auVar74 = NEON_ext(auVar65,auVar65,8,1);
  iVar62 = (int)(char)bVar41 >> 7;
  iVar67 = (int)(char)bVar45 >> 7;
  iVar70 = (int)(char)bVar52 >> 7;
  iVar72 = (int)(char)bVar60 >> 7;
  bVar38 = (byte)iVar62 & bVar11;
  bVar39 = (byte)((uint)iVar62 >> 8) & bVar14;
  bVar40 = (byte)((uint)iVar62 >> 0x10) & bVar15;
  bVar41 = (char)bVar41 >> 7 & bVar16;
  bVar42 = (byte)iVar67 & bVar17;
  bVar43 = (byte)((uint)iVar67 >> 8) & bVar18;
  bVar44 = (byte)((uint)iVar67 >> 0x10) & bVar19;
  bVar45 = (char)bVar45 >> 7 & bVar20;
  bVar47 = (byte)iVar70 & bVar21;
  bVar48 = (byte)((uint)iVar70 >> 8) & bVar23;
  bVar50 = (byte)((uint)iVar70 >> 0x10) & bVar24;
  bVar52 = (char)bVar52 >> 7 & bVar25;
  bVar54 = (byte)iVar72 & bVar26;
  bVar56 = (byte)((uint)iVar72 >> 8) & bVar27;
  bVar58 = (byte)((uint)iVar72 >> 0x10) & bVar28;
  bVar60 = (char)bVar60 >> 7 & bVar29;
  uVar63 = CONCAT13(auVar74[3] | auVar65[3],
                    CONCAT12(auVar74[2] | auVar65[2],
                             CONCAT11(auVar74[1] | auVar65[1],auVar74[0] | auVar65[0])));
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x41] & 0x1f);
  auVar2[1] = bVar39;
  auVar2[0] = bVar38;
  auVar2[2] = bVar40;
  auVar2[3] = bVar41;
  auVar2[4] = bVar42;
  auVar2[5] = bVar43;
  auVar2[6] = bVar44;
  auVar2[7] = bVar45;
  auVar2[8] = bVar47;
  auVar2[9] = bVar48;
  auVar2[10] = bVar50;
  auVar2[0xb] = bVar52;
  auVar2[0xc] = bVar54;
  auVar2[0xd] = bVar56;
  auVar2[0xe] = bVar58;
  auVar2[0xf] = bVar60;
  auVar3[1] = bVar39;
  auVar3[0] = bVar38;
  auVar3[2] = bVar40;
  auVar3[3] = bVar41;
  auVar3[4] = bVar42;
  auVar3[5] = bVar43;
  auVar3[6] = bVar44;
  auVar3[7] = bVar45;
  auVar3[8] = bVar47;
  auVar3[9] = bVar48;
  auVar3[10] = bVar50;
  auVar3[0xb] = bVar52;
  auVar3[0xc] = bVar54;
  auVar3[0xd] = bVar56;
  auVar3[0xe] = bVar58;
  auVar3[0xf] = bVar60;
  auVar66 = NEON_ext(auVar2,auVar3,8,1);
  uVar63 = (uVar63 | (uint)(CONCAT17(auVar74[7] | auVar65[7],
                                     CONCAT16(auVar74[6] | auVar65[6],
                                              CONCAT15(auVar74[5] | auVar65[5],
                                                       CONCAT14(auVar74[4] | auVar65[4],uVar63))))
                           >> 0x20)) & uVar1 &
           (CONCAT13(auVar66[3] | bVar41,
                     CONCAT12(auVar66[2] | bVar40,CONCAT11(auVar66[1] | bVar39,auVar66[0] | bVar38))
                    ) |
           CONCAT13(auVar66[7] | bVar45,
                    CONCAT12(auVar66[6] | bVar44,CONCAT11(auVar66[5] | bVar43,auVar66[4] | bVar42)))
           );
  if (uVar63 != uVar1) {
    fVar8 = param_1[0x34];
    fVar78 = param_1[0x35];
    fVar79 = param_1[0x36];
    fVar64 = fVar82 * fVar31 + fVar30 * fVar8;
    fVar68 = fVar83 * fVar31 + fVar33 * fVar8;
    fVar71 = fVar84 * fVar31 + fVar35 * fVar8;
    fVar73 = fVar85 * fVar31 + fVar37 * fVar8;
    fVar31 = fVar82 * fVar34 + fVar30 * fVar78;
    fVar8 = fVar83 * fVar34 + fVar33 * fVar78;
    fVar9 = fVar84 * fVar34 + fVar35 * fVar78;
    fVar34 = fVar85 * fVar34 + fVar37 * fVar78;
    fVar30 = fVar82 * auVar76._0_4_ + fVar30 * fVar79;
    fVar33 = fVar83 * auVar76._4_4_ + fVar33 * fVar79;
    fVar35 = fVar84 * auVar76._8_4_ + fVar35 * fVar79;
    fVar37 = fVar85 * auVar76._12_4_ + fVar37 * fVar79;
    fVar78 = fVar64 * param_1[0x10] + fVar31 * (float)*(undefined8 *)(param_1 + 0x14) +
             fVar30 * param_1[0x18] + param_1[0x1c] * fVar82;
    fVar79 = fVar68 * param_1[0x11] +
             fVar8 * (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) +
             fVar33 * param_1[0x19] + param_1[0x1d] * fVar83;
    fVar80 = fVar71 * param_1[0x12] + fVar9 * (float)*(undefined8 *)(param_1 + 0x16) +
             fVar35 * param_1[0x1a] + param_1[0x1e] * fVar84;
    fVar81 = fVar73 * param_1[0x13] +
             fVar34 * (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20) +
             fVar37 * param_1[0x1b] + param_1[0x1f] * fVar85;
    iVar62 = -(uint)(fVar86 <= ABS(fVar78));
    iVar67 = -(uint)(fVar87 <= ABS(fVar79));
    iVar70 = -(uint)(fVar88 <= ABS(fVar80));
    iVar72 = -(uint)(fVar89 <= ABS(fVar81));
    auVar32[0] = (byte)iVar62 & bVar11;
    auVar32[1] = (byte)((uint)iVar62 >> 8) & bVar14;
    auVar32[2] = (byte)((uint)iVar62 >> 0x10) & bVar15;
    auVar32[3] = (byte)((uint)iVar62 >> 0x18) & bVar16;
    auVar32[4] = (byte)iVar67 & bVar17;
    auVar32[5] = (byte)((uint)iVar67 >> 8) & bVar18;
    auVar32[6] = (byte)((uint)iVar67 >> 0x10) & bVar19;
    auVar32[7] = (byte)((uint)iVar67 >> 0x18) & bVar20;
    auVar32[8] = (byte)iVar70 & bVar21;
    auVar32[9] = (byte)((uint)iVar70 >> 8) & bVar23;
    auVar32[10] = (byte)((uint)iVar70 >> 0x10) & bVar24;
    auVar32[0xb] = (byte)((uint)iVar70 >> 0x18) & bVar25;
    auVar32[0xc] = (byte)iVar72 & bVar26;
    auVar32[0xd] = (byte)((uint)iVar72 >> 8) & bVar27;
    auVar32[0xe] = (byte)((uint)iVar72 >> 0x10) & bVar28;
    auVar32[0xf] = (byte)((uint)iVar72 >> 0x18) & bVar29;
    auVar76 = NEON_ext(auVar32,auVar32,8,1);
    uVar12 = CONCAT13(auVar76[3] | auVar32[3],
                      CONCAT12(auVar76[2] | auVar32[2],
                               CONCAT11(auVar76[1] | auVar32[1],auVar76[0] | auVar32[0])));
    bVar38 = (char)((byte)((uint)(fVar82 - fVar78) >> 0x18) ^ (byte)((uint)fVar78 >> 0x18)) >> 7;
    auVar77[0] = bVar38 & bVar11;
    auVar77[1] = bVar38 & bVar14;
    auVar77[2] = bVar38 & bVar15;
    auVar77[3] = bVar38 & bVar16;
    bVar38 = (char)((byte)((uint)(fVar83 - fVar79) >> 0x18) ^ (byte)((uint)fVar79 >> 0x18)) >> 7;
    auVar77[4] = bVar38 & bVar17;
    auVar77[5] = bVar38 & bVar18;
    auVar77[6] = bVar38 & bVar19;
    auVar77[7] = bVar38 & bVar20;
    bVar38 = (char)((byte)((uint)(fVar84 - fVar80) >> 0x18) ^ (byte)((uint)fVar80 >> 0x18)) >> 7;
    auVar77[8] = bVar38 & bVar21;
    auVar77[9] = bVar38 & bVar23;
    auVar77[10] = bVar38 & bVar24;
    auVar77[0xb] = bVar38 & bVar25;
    bVar38 = (char)((byte)((uint)(fVar85 - fVar81) >> 0x18) ^ (byte)((uint)fVar81 >> 0x18)) >> 7;
    auVar77[0xc] = bVar38 & bVar26;
    auVar77[0xd] = bVar38 & bVar27;
    auVar77[0xe] = bVar38 & bVar28;
    auVar77[0xf] = bVar38 & bVar29;
    auVar66 = NEON_ext(auVar77,auVar77,8,1);
    uVar75 = CONCAT13(auVar66[3] | auVar77[3],
                      CONCAT12(auVar66[2] | auVar77[2],
                               CONCAT11(auVar66[1] | auVar77[1],auVar66[0] | auVar77[0])));
    uVar63 = (uVar12 | (uint)(CONCAT17(auVar76[7] | auVar32[7],
                                       CONCAT16(auVar76[6] | auVar32[6],
                                                CONCAT15(auVar76[5] | auVar32[5],
                                                         CONCAT14(auVar76[4] | auVar32[4],uVar12))))
                             >> 0x20)) & uVar1 &
             (uVar75 | (uint)(CONCAT17(auVar66[7] | auVar77[7],
                                       CONCAT16(auVar66[6] | auVar77[6],
                                                CONCAT15(auVar66[5] | auVar77[5],
                                                         CONCAT14(auVar66[4] | auVar77[4],uVar75))))
                             >> 0x20)) | uVar63;
    if (uVar63 != uVar1) {
      fVar30 = param_1[0x20] * fVar64 + param_1[0x24] * fVar31 + param_1[0x28] * fVar30 +
               (float)*(undefined8 *)(param_1 + 0x2c) * fVar82;
      fVar33 = param_1[0x21] * fVar68 + param_1[0x25] * fVar8 + param_1[0x29] * fVar33 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) * fVar83;
      fVar35 = param_1[0x22] * fVar71 + param_1[0x26] * fVar9 + param_1[0x2a] * fVar35 +
               (float)*(undefined8 *)(param_1 + 0x2e) * fVar84;
      fVar37 = param_1[0x23] * fVar73 + param_1[0x27] * fVar34 + param_1[0x2b] * fVar37 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20) * fVar85;
      fVar31 = (fVar82 - fVar78) - fVar30;
      fVar34 = (fVar83 - fVar79) - fVar33;
      fVar82 = (fVar84 - fVar80) - fVar35;
      fVar85 = (fVar85 - fVar81) - fVar37;
      iVar62 = -(uint)(fVar86 <= ABS(fVar30));
      iVar67 = -(uint)(fVar87 <= ABS(fVar33));
      iVar70 = -(uint)(fVar88 <= ABS(fVar35));
      iVar72 = -(uint)(fVar89 <= ABS(fVar37));
      bVar39 = (byte)iVar62 & bVar11;
      bVar41 = (byte)((uint)iVar62 >> 8) & bVar14;
      bVar43 = (byte)((uint)iVar62 >> 0x10) & bVar15;
      bVar45 = (byte)((uint)iVar62 >> 0x18) & bVar16;
      bVar48 = (byte)iVar67 & bVar17;
      bVar52 = (byte)((uint)iVar67 >> 8) & bVar18;
      bVar56 = (byte)((uint)iVar67 >> 0x10) & bVar19;
      bVar60 = (byte)((uint)iVar67 >> 0x18) & bVar20;
      bVar38 = (byte)iVar70 & bVar21;
      bVar40 = (byte)((uint)iVar70 >> 8) & bVar23;
      bVar42 = (byte)((uint)iVar70 >> 0x10) & bVar24;
      bVar44 = (byte)((uint)iVar70 >> 0x18) & bVar25;
      bVar47 = (byte)iVar72 & bVar26;
      bVar50 = (byte)((uint)iVar72 >> 8) & bVar27;
      bVar54 = (byte)((uint)iVar72 >> 0x10) & bVar28;
      bVar58 = (byte)((uint)iVar72 >> 0x18) & bVar29;
      auVar4[1] = bVar41;
      auVar4[0] = bVar39;
      auVar4[2] = bVar43;
      auVar4[3] = bVar45;
      auVar4[4] = bVar48;
      auVar4[5] = bVar52;
      auVar4[6] = bVar56;
      auVar4[7] = bVar60;
      auVar4[8] = bVar38;
      auVar4[9] = bVar40;
      auVar4[10] = bVar42;
      auVar4[0xb] = bVar44;
      auVar4[0xc] = bVar47;
      auVar4[0xd] = bVar50;
      auVar4[0xe] = bVar54;
      auVar4[0xf] = bVar58;
      auVar5[1] = bVar41;
      auVar5[0] = bVar39;
      auVar5[2] = bVar43;
      auVar5[3] = bVar45;
      auVar5[4] = bVar48;
      auVar5[5] = bVar52;
      auVar5[6] = bVar56;
      auVar5[7] = bVar60;
      auVar5[8] = bVar38;
      auVar5[9] = bVar40;
      auVar5[10] = bVar42;
      auVar5[0xb] = bVar44;
      auVar5[0xc] = bVar47;
      auVar5[0xd] = bVar50;
      auVar5[0xe] = bVar54;
      auVar5[0xf] = bVar58;
      auVar66 = NEON_ext(auVar4,auVar5,8,1);
      iVar62 = -(uint)(fVar86 <= ABS(fVar31));
      iVar67 = -(uint)(fVar87 <= ABS(fVar34));
      iVar70 = -(uint)(fVar88 <= ABS(fVar82));
      iVar72 = -(uint)(fVar89 <= ABS(fVar85));
      bVar40 = (byte)iVar62 & bVar11;
      bVar42 = (byte)((uint)iVar62 >> 8) & bVar14;
      bVar44 = (byte)((uint)iVar62 >> 0x10) & bVar15;
      bVar47 = (byte)((uint)iVar62 >> 0x18) & bVar16;
      bVar50 = (byte)iVar67 & bVar17;
      bVar54 = (byte)((uint)iVar67 >> 8) & bVar18;
      bVar58 = (byte)((uint)iVar67 >> 0x10) & bVar19;
      bVar46 = (byte)((uint)iVar67 >> 0x18) & bVar20;
      bVar38 = (byte)iVar70 & bVar21;
      bVar49 = (byte)((uint)iVar70 >> 8) & bVar23;
      bVar51 = (byte)((uint)iVar70 >> 0x10) & bVar24;
      bVar53 = (byte)((uint)iVar70 >> 0x18) & bVar25;
      bVar55 = (byte)iVar72 & bVar26;
      bVar57 = (byte)((uint)iVar72 >> 8) & bVar27;
      bVar59 = (byte)((uint)iVar72 >> 0x10) & bVar28;
      bVar61 = (byte)((uint)iVar72 >> 0x18) & bVar29;
      auVar6[1] = bVar42;
      auVar6[0] = bVar40;
      auVar6[2] = bVar44;
      auVar6[3] = bVar47;
      auVar6[4] = bVar50;
      auVar6[5] = bVar54;
      auVar6[6] = bVar58;
      auVar6[7] = bVar46;
      auVar6[8] = bVar38;
      auVar6[9] = bVar49;
      auVar6[10] = bVar51;
      auVar6[0xb] = bVar53;
      auVar6[0xc] = bVar55;
      auVar6[0xd] = bVar57;
      auVar6[0xe] = bVar59;
      auVar6[0xf] = bVar61;
      auVar7[1] = bVar42;
      auVar7[0] = bVar40;
      auVar7[2] = bVar44;
      auVar7[3] = bVar47;
      auVar7[4] = bVar50;
      auVar7[5] = bVar54;
      auVar7[6] = bVar58;
      auVar7[7] = bVar46;
      auVar7[8] = bVar38;
      auVar7[9] = bVar49;
      auVar7[10] = bVar51;
      auVar7[0xb] = bVar53;
      auVar7[0xc] = bVar55;
      auVar7[0xd] = bVar57;
      auVar7[0xe] = bVar59;
      auVar7[0xf] = bVar61;
      auVar74 = NEON_ext(auVar6,auVar7,8,1);
      bVar38 = (char)((byte)((uint)fVar31 >> 0x18) ^ (byte)((uint)fVar30 >> 0x18)) >> 7;
      auVar13[0] = bVar38 & bVar11;
      auVar13[1] = bVar38 & bVar14;
      auVar13[2] = bVar38 & bVar15;
      auVar13[3] = bVar38 & bVar16;
      bVar11 = (char)((byte)((uint)fVar34 >> 0x18) ^ (byte)((uint)fVar33 >> 0x18)) >> 7;
      auVar13[4] = bVar11 & bVar17;
      auVar13[5] = bVar11 & bVar18;
      auVar13[6] = bVar11 & bVar19;
      auVar13[7] = bVar11 & bVar20;
      bVar11 = (char)((byte)((uint)fVar82 >> 0x18) ^ (byte)((uint)fVar35 >> 0x18)) >> 7;
      auVar13[8] = bVar11 & bVar21;
      auVar13[9] = bVar11 & bVar23;
      auVar13[10] = bVar11 & bVar24;
      auVar13[0xb] = bVar11 & bVar25;
      bVar11 = (char)((byte)((uint)fVar85 >> 0x18) ^ (byte)((uint)fVar37 >> 0x18)) >> 7;
      auVar13[0xc] = bVar11 & bVar26;
      auVar13[0xd] = bVar11 & bVar27;
      auVar13[0xe] = bVar11 & bVar28;
      auVar13[0xf] = bVar11 & bVar29;
      auVar76 = NEON_ext(auVar13,auVar13,8,1);
      uVar12 = CONCAT13(auVar76[3] | auVar13[3],
                        CONCAT12(auVar76[2] | auVar13[2],
                                 CONCAT11(auVar76[1] | auVar13[1],auVar76[0] | auVar13[0])));
      if (((CONCAT13(auVar66[3] | bVar45,
                     CONCAT12(auVar66[2] | bVar43,CONCAT11(auVar66[1] | bVar41,auVar66[0] | bVar39))
                    ) |
           CONCAT13(auVar66[7] | bVar60,
                    CONCAT12(auVar66[6] | bVar56,CONCAT11(auVar66[5] | bVar52,auVar66[4] | bVar48)))
           ) & uVar1 &
           (CONCAT13(auVar74[3] | bVar47,
                     CONCAT12(auVar74[2] | bVar44,CONCAT11(auVar74[1] | bVar42,auVar74[0] | bVar40))
                    ) |
           CONCAT13(auVar74[7] | bVar46,
                    CONCAT12(auVar74[6] | bVar58,CONCAT11(auVar74[5] | bVar54,auVar74[4] | bVar50)))
           ) & (uVar12 | (uint)(CONCAT17(auVar76[7] | auVar13[7],
                                         CONCAT16(auVar76[6] | auVar13[6],
                                                  CONCAT15(auVar76[5] | auVar13[5],
                                                           CONCAT14(auVar76[4] | auVar13[4],uVar12))
                                                 )) >> 0x20)) | uVar63) != uVar1) {
        return 1;
      }
    }
  }
  return 0;
}


