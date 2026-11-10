/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e3670; name: FUN_012e3670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e3670(long param_1)

{
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
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
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  bool bVar27;
  float *pfVar28;
  undefined1 (*pauVar29) [16];
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  code *pcVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar38;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar39;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 uVar40;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar41;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 uVar42;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 uVar43;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar44;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar45;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 uVar46;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 uVar47;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar48;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar49;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  float fVar50;
  int iVar51;
  float fVar52;
  int iVar63;
  undefined8 uVar53;
  int iVar66;
  undefined1 auVar54 [16];
  float fVar62;
  undefined1 auVar55 [16];
  int iVar68;
  undefined1 auVar56 [16];
  float fVar64;
  undefined1 auVar57 [16];
  int iVar69;
  undefined1 auVar58 [16];
  float fVar65;
  undefined1 auVar59 [16];
  int iVar67;
  int iVar70;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  float fStack_bc;
  float fStack_b4;
  code *local_b0;
  code *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  fVar35 = (float)*(undefined8 *)(param_1 + 0x760);
  auVar73._0_4_ = fVar35 * fVar35;
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  auVar73._4_4_ = fVar14 * fVar14;
  fVar34 = (float)*(undefined8 *)(param_1 + 0x768);
  auVar73._8_4_ = fVar34 * fVar34;
  fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x768) >> 0x20);
  auVar73._12_4_ = fVar50 * fVar50;
  auVar72 = NEON_ext(auVar73,auVar73,8,1);
  if (auVar72._0_4_ + auVar73._0_4_ + auVar72._4_4_ + auVar73._4_4_ == 0.0) {
    return;
  }
  iVar51 = *(int *)(param_1 + 0x784);
  if (iVar51 == 0) {
    fVar35 = fVar35 - *(float *)(param_1 + 0x770);
    fVar14 = fVar14 - *(float *)(param_1 + 0x774);
    fVar34 = fVar34 - *(float *)(param_1 + 0x778);
    fVar50 = fVar50 - *(float *)(param_1 + 0x77c);
    auVar56._0_4_ = fVar35 * fVar35;
    auVar56._4_4_ = fVar14 * fVar14;
    auVar56._8_4_ = fVar34 * fVar34;
    auVar56._12_4_ = fVar50 * fVar50;
    auVar73 = NEON_ext(auVar56,auVar56,8,1);
    fVar62 = auVar73._0_4_ + auVar56._0_4_;
    fVar64 = auVar73._4_4_ + auVar56._4_4_;
    fVar36 = fVar62 + fVar64;
    fVar62 = fVar62 + fVar64;
    auVar57._8_8_ = CONCAT44(fVar62,fVar36);
    auVar57._0_8_ = CONCAT44(fVar62,fVar36);
    auVar73 = NEON_frsqrte(auVar57,4);
    auVar79._0_4_ = auVar73._0_4_ * fVar36;
    auVar79._4_4_ = auVar73._4_4_ * fVar62;
    auVar79._8_4_ = auVar73._8_4_ * fVar36;
    auVar79._12_4_ = auVar73._12_4_ * fVar62;
    auVar72 = NEON_frsqrts(auVar73,auVar79,4);
    auVar75._0_4_ = auVar73._0_4_ * auVar72._0_4_;
    auVar75._4_4_ = auVar73._4_4_ * auVar72._4_4_;
    auVar75._8_4_ = auVar73._8_4_ * auVar72._8_4_;
    auVar75._12_4_ = auVar73._12_4_ * auVar72._12_4_;
    auVar80._0_4_ = fVar36 * auVar75._0_4_;
    auVar80._4_4_ = fVar62 * auVar75._4_4_;
    auVar80._8_4_ = fVar36 * auVar75._8_4_;
    auVar80._12_4_ = fVar62 * auVar75._12_4_;
    iVar51 = -(uint)(fVar36 == 0.0);
    iVar66 = -(uint)(fVar62 == 0.0);
    iVar63 = -(uint)(fVar36 == 0.0);
    iVar69 = -(uint)(fVar62 == 0.0);
    auVar73 = NEON_frsqrts(auVar75,auVar80,4);
    fVar35 = fVar35 * auVar75._0_4_ * auVar73._0_4_;
    fVar14 = fVar14 * auVar75._4_4_ * auVar73._4_4_;
    fVar34 = fVar34 * auVar75._8_4_ * auVar73._8_4_;
    fVar50 = fVar50 * auVar75._12_4_ * auVar73._12_4_;
    fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                             CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                                      CONCAT11((byte)((uint)fVar34 >> 8) &
                                               ~(byte)((uint)iVar63 >> 8),
                                               SUB41(fVar34,0) & ~(byte)iVar63)));
    fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               ~(byte)((uint)iVar51 >> 8),
                                               SUB41(fVar35,0) & ~(byte)iVar51)));
    pfVar28 = (float *)FUN_012dcaa0(param_1);
    iVar51 = *(int *)(param_1 + 0x784);
    fVar36 = (float)*(undefined8 *)(param_1 + 0x760) - *pfVar28;
    fVar62 = (float)((ulong)*(undefined8 *)(param_1 + 0x760) >> 0x20) - pfVar28[1];
    fVar64 = (float)*(undefined8 *)(param_1 + 0x768) - pfVar28[2];
    fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x768) >> 0x20) - pfVar28[3];
    auVar58._0_4_ = fVar36 * fVar36;
    auVar58._4_4_ = fVar62 * fVar62;
    auVar58._8_4_ = fVar64 * fVar64;
    auVar58._12_4_ = fVar15 * fVar15;
    auVar73 = NEON_ext(auVar58,auVar58,8,1);
    fVar52 = auVar73._0_4_ + auVar58._0_4_;
    fVar65 = auVar73._4_4_ + auVar58._4_4_;
    fVar37 = fVar52 + fVar65;
    fVar52 = fVar52 + fVar65;
    auVar59._8_8_ = CONCAT44(fVar52,fVar37);
    auVar59._0_8_ = CONCAT44(fVar52,fVar37);
    auVar73 = NEON_frsqrte(auVar59,4);
    auVar81._0_4_ = auVar73._0_4_ * fVar37;
    auVar81._4_4_ = auVar73._4_4_ * fVar52;
    auVar81._8_4_ = auVar73._8_4_ * fVar37;
    auVar81._12_4_ = auVar73._12_4_ * fVar52;
    auVar72 = NEON_frsqrts(auVar73,auVar81,4);
    auVar76._0_4_ = auVar73._0_4_ * auVar72._0_4_;
    auVar76._4_4_ = auVar73._4_4_ * auVar72._4_4_;
    auVar76._8_4_ = auVar73._8_4_ * auVar72._8_4_;
    auVar76._12_4_ = auVar73._12_4_ * auVar72._12_4_;
    auVar82._0_4_ = fVar37 * auVar76._0_4_;
    auVar82._4_4_ = fVar52 * auVar76._4_4_;
    auVar82._8_4_ = fVar37 * auVar76._8_4_;
    auVar82._12_4_ = fVar52 * auVar76._12_4_;
    iVar63 = -(uint)(fVar37 == 0.0);
    iVar68 = -(uint)(fVar52 == 0.0);
    iVar67 = -(uint)(fVar37 == 0.0);
    iVar70 = -(uint)(fVar52 == 0.0);
    auVar73 = NEON_frsqrts(auVar76,auVar82,4);
    fVar36 = fVar36 * auVar76._0_4_ * auVar73._0_4_;
    fVar62 = fVar62 * auVar76._4_4_ * auVar73._4_4_;
    fVar64 = fVar64 * auVar76._8_4_ * auVar73._8_4_;
    fVar15 = fVar15 * auVar76._12_4_ * auVar73._12_4_;
    fStack_bc = (float)(CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                                 CONCAT16((byte)((uint)fVar14 >> 0x10) &
                                          ~(byte)((uint)iVar66 >> 0x10),
                                          CONCAT15((byte)((uint)fVar14 >> 8) &
                                                   ~(byte)((uint)iVar66 >> 8),
                                                   CONCAT14(SUB41(fVar14,0) & ~(byte)iVar66,fVar35))
                                         )) >> 0x20);
    fStack_b4 = (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                                 CONCAT16((byte)((uint)fVar50 >> 0x10) &
                                          ~(byte)((uint)iVar69 >> 0x10),
                                          CONCAT15((byte)((uint)fVar50 >> 8) &
                                                   ~(byte)((uint)iVar69 >> 8),
                                                   CONCAT14(SUB41(fVar50,0) & ~(byte)iVar69,fVar34))
                                         )) >> 0x20);
    fVar35 = fVar35 * (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                                      CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                               ~(byte)((uint)iVar63 >> 0x10),
                                               CONCAT11((byte)((uint)fVar36 >> 8) &
                                                        ~(byte)((uint)iVar63 >> 8),
                                                        SUB41(fVar36,0) & ~(byte)iVar63)));
    fStack_bc = fStack_bc *
                (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                                CONCAT12((byte)((uint)fVar62 >> 0x10) &
                                         ~(byte)((uint)iVar68 >> 0x10),
                                         CONCAT11((byte)((uint)fVar62 >> 8) &
                                                  ~(byte)((uint)iVar68 >> 8),
                                                  SUB41(fVar62,0) & ~(byte)iVar68)));
    uVar38 = (undefined1)((uint)fStack_bc >> 8);
    uVar39 = (undefined1)((uint)fStack_bc >> 0x10);
    uVar40 = (undefined1)((uint)fStack_bc >> 0x18);
    fVar34 = fVar34 * (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                                      CONCAT12((byte)((uint)fVar64 >> 0x10) &
                                               ~(byte)((uint)iVar67 >> 0x10),
                                               CONCAT11((byte)((uint)fVar64 >> 8) &
                                                        ~(byte)((uint)iVar67 >> 8),
                                                        SUB41(fVar64,0) & ~(byte)iVar67)));
    uVar41 = (undefined1)((uint)fVar34 >> 8);
    uVar42 = (undefined1)((uint)fVar34 >> 0x10);
    uVar43 = (undefined1)((uint)fVar34 >> 0x18);
    fStack_b4 = fStack_b4 *
                (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                                CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                         ~(byte)((uint)iVar70 >> 0x10),
                                         CONCAT11((byte)((uint)fVar15 >> 8) &
                                                  ~(byte)((uint)iVar70 >> 8),
                                                  SUB41(fVar15,0) & ~(byte)iVar70)));
    uVar44 = (undefined1)((uint)fStack_b4 >> 8);
    uVar45 = (undefined1)((uint)fStack_b4 >> 0x10);
    uVar46 = (undefined1)((uint)fStack_b4 >> 0x18);
    auVar72[4] = SUB41(fStack_bc,0);
    auVar72._0_4_ = fVar35;
    auVar72[5] = uVar38;
    auVar72[6] = uVar39;
    auVar72[7] = uVar40;
    auVar72[8] = SUB41(fVar34,0);
    auVar72[9] = uVar41;
    auVar72[10] = uVar42;
    auVar72[0xb] = uVar43;
    auVar72[0xc] = SUB41(fStack_b4,0);
    auVar72[0xd] = uVar44;
    auVar72[0xe] = uVar45;
    auVar72[0xf] = uVar46;
    auVar13[4] = SUB41(fStack_bc,0);
    auVar13._0_4_ = fVar35;
    auVar13[5] = uVar38;
    auVar13[6] = uVar39;
    auVar13[7] = uVar40;
    auVar13[8] = SUB41(fVar34,0);
    auVar13[9] = uVar41;
    auVar13[10] = uVar42;
    auVar13[0xb] = uVar43;
    auVar13[0xc] = SUB41(fStack_b4,0);
    auVar13[0xd] = uVar44;
    auVar13[0xe] = uVar45;
    auVar13[0xf] = uVar46;
    auVar73 = NEON_ext(auVar72,auVar13,8,1);
    bVar27 = auVar73._0_4_ + fVar35 + auVar73._4_4_ + fStack_bc < 0.0;
  }
  else {
    bVar27 = true;
  }
  if (iVar51 == 1) {
    pfVar28 = (float *)FUN_012dcaa0(param_1);
    uVar32 = *(undefined8 *)(param_1 + 0x760);
    fVar35 = (float)uVar32 - *pfVar28;
    fVar36 = (float)((ulong)uVar32 >> 0x20) - pfVar28[1];
    fVar14 = (float)*(undefined8 *)(param_1 + 0x768) - pfVar28[2];
    fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x768) >> 0x20) - pfVar28[3];
    auVar54._0_4_ = fVar35 * fVar35;
    auVar54._4_4_ = fVar36 * fVar36;
    auVar54._8_4_ = fVar14 * fVar14;
    auVar54._12_4_ = fVar15 * fVar15;
    auVar73 = NEON_ext(auVar54,auVar54,8,1);
    fVar50 = auVar73._0_4_ + auVar54._0_4_;
    fVar62 = auVar73._4_4_ + auVar54._4_4_;
    fVar34 = fVar50 + fVar62;
    fVar50 = fVar50 + fVar62;
    auVar55._8_8_ = CONCAT44(fVar50,fVar34);
    auVar55._0_8_ = CONCAT44(fVar50,fVar34);
    auVar73 = NEON_frsqrte(auVar55,4);
    auVar77._0_4_ = auVar73._0_4_ * fVar34;
    auVar77._4_4_ = auVar73._4_4_ * fVar50;
    auVar77._8_4_ = auVar73._8_4_ * fVar34;
    auVar77._12_4_ = auVar73._12_4_ * fVar50;
    auVar72 = NEON_frsqrts(auVar73,auVar77,4);
    auVar74._0_4_ = auVar73._0_4_ * auVar72._0_4_;
    auVar74._4_4_ = auVar73._4_4_ * auVar72._4_4_;
    auVar74._8_4_ = auVar73._8_4_ * auVar72._8_4_;
    auVar74._12_4_ = auVar73._12_4_ * auVar72._12_4_;
    auVar78._0_4_ = fVar34 * auVar74._0_4_;
    auVar78._4_4_ = fVar50 * auVar74._4_4_;
    auVar78._8_4_ = fVar34 * auVar74._8_4_;
    auVar78._12_4_ = fVar50 * auVar74._12_4_;
    iVar51 = -(uint)(fVar34 == 0.0);
    iVar63 = -(uint)(fVar50 == 0.0);
    iVar66 = -(uint)(fVar34 == 0.0);
    iVar68 = -(uint)(fVar50 == 0.0);
    auVar73 = NEON_frsqrts(auVar74,auVar78,4);
    fVar35 = fVar35 * auVar74._0_4_ * auVar73._0_4_;
    fVar36 = fVar36 * auVar74._4_4_ * auVar73._4_4_;
    fVar14 = fVar14 * auVar74._8_4_ * auVar73._8_4_;
    fVar15 = fVar15 * auVar74._12_4_ * auVar73._12_4_;
    fVar34 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                             CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                      CONCAT11((byte)((uint)fVar14 >> 8) &
                                               ~(byte)((uint)iVar66 >> 8),
                                               SUB41(fVar14,0) & ~(byte)iVar66)));
    fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               ~(byte)((uint)iVar51 >> 8),
                                               SUB41(fVar35,0) & ~(byte)iVar51)));
    pauVar29 = (undefined1 (*) [16])FUN_012dc8d0(param_1);
    auVar73 = *pauVar29;
    fVar52 = auVar73._0_4_;
    fVar50 = fVar52 * (float)_DAT_01d4ae80;
    fVar65 = auVar73._4_4_;
    fVar62 = fVar65 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar38 = SUB41(fVar62,0);
    uVar39 = (undefined1)((uint)fVar62 >> 8);
    uVar40 = (undefined1)((uint)fVar62 >> 0x10);
    uVar41 = (undefined1)((uint)fVar62 >> 0x18);
    fVar64 = auVar73._8_4_ * (float)_UNK_01d4ae88;
    uVar42 = SUB41(fVar64,0);
    uVar43 = (undefined1)((uint)fVar64 >> 8);
    uVar44 = (undefined1)((uint)fVar64 >> 0x10);
    uVar45 = (undefined1)((uint)fVar64 >> 0x18);
    fVar37 = auVar73._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar46 = SUB41(fVar37,0);
    uVar47 = (undefined1)((uint)fVar37 >> 8);
    uVar48 = (undefined1)((uint)fVar37 >> 0x10);
    uVar49 = (undefined1)((uint)fVar37 >> 0x18);
    uVar85 = (undefined4)_UNK_01d49dc8;
    uVar86 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
    auVar23._8_4_ = uVar85;
    auVar23._0_8_ = _DAT_01d49dc0;
    auVar23._12_4_ = uVar86;
    uVar32 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
    auVar24._8_4_ = uVar85;
    auVar24._0_8_ = _DAT_01d49dc0;
    auVar24._12_4_ = uVar86;
    uVar87 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
    auVar25._8_4_ = uVar85;
    auVar25._0_8_ = _DAT_01d49dc0;
    auVar25._12_4_ = uVar86;
    uVar71 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5418);
    fVar83 = (float)((ulong)uVar71 >> 0x20);
    auVar16[4] = uVar38;
    auVar16._0_4_ = fVar50;
    auVar16[5] = uVar39;
    auVar16[6] = uVar40;
    auVar16[7] = uVar41;
    auVar16[8] = uVar42;
    auVar16[9] = uVar43;
    auVar16[10] = uVar44;
    auVar16[0xb] = uVar45;
    auVar16[0xc] = uVar46;
    auVar16[0xd] = uVar47;
    auVar16[0xe] = uVar48;
    auVar16[0xf] = uVar49;
    uVar95 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5120);
    auVar17[4] = uVar38;
    auVar17._0_4_ = fVar50;
    auVar17[5] = uVar39;
    auVar17[6] = uVar40;
    auVar17[7] = uVar41;
    auVar17[8] = uVar42;
    auVar17[9] = uVar43;
    auVar17[10] = uVar44;
    auVar17[0xb] = uVar45;
    auVar17[0xc] = uVar46;
    auVar17[0xd] = uVar47;
    auVar17[0xe] = uVar48;
    auVar17[0xf] = uVar49;
    uVar97 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5270);
    fVar14 = (float)((ulong)uVar32 >> 0x20);
    auVar18[4] = uVar38;
    auVar18._0_4_ = fVar50;
    auVar18[5] = uVar39;
    auVar18[6] = uVar40;
    auVar18[7] = uVar41;
    auVar18[8] = uVar42;
    auVar18[9] = uVar43;
    auVar18[10] = uVar44;
    auVar18[0xb] = uVar45;
    auVar18[0xc] = uVar46;
    auVar18[0xd] = uVar47;
    auVar18[0xe] = uVar48;
    auVar18[0xf] = uVar49;
    uVar93 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
    auVar19[4] = uVar38;
    auVar19._0_4_ = fVar50;
    auVar19[5] = uVar39;
    auVar19[6] = uVar40;
    auVar19[7] = uVar41;
    auVar19[8] = uVar42;
    auVar19[9] = uVar43;
    auVar19[10] = uVar44;
    auVar19[0xb] = uVar45;
    auVar19[0xc] = uVar46;
    auVar19[0xd] = uVar47;
    auVar19[0xe] = uVar48;
    auVar19[0xf] = uVar49;
    uVar96 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5418);
    fVar88 = (float)((ulong)uVar87 >> 0x20);
    auVar20[4] = uVar38;
    auVar20._0_4_ = fVar50;
    auVar20[5] = uVar39;
    auVar20[6] = uVar40;
    auVar20[7] = uVar41;
    auVar20[8] = uVar42;
    auVar20[9] = uVar43;
    auVar20[10] = uVar44;
    auVar20[0xb] = uVar45;
    auVar20[0xc] = uVar46;
    auVar20[0xd] = uVar47;
    auVar20[0xe] = uVar48;
    auVar20[0xf] = uVar49;
    uVar94 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
    auVar21[4] = uVar38;
    auVar21._0_4_ = fVar50;
    auVar21[5] = uVar39;
    auVar21[6] = uVar40;
    auVar21[7] = uVar41;
    auVar21[8] = SUB41(fVar50,0);
    auVar21[9] = (char)((uint)fVar50 >> 8);
    auVar21[10] = (char)((uint)fVar50 >> 0x10);
    auVar21[0xb] = (char)((uint)fVar50 >> 0x18);
    auVar21[0xc] = uVar38;
    auVar21[0xd] = uVar39;
    auVar21[0xe] = uVar40;
    auVar21[0xf] = uVar41;
    uVar53 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50b0);
    uVar26 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd50f8);
    fVar84 = (float)((ulong)uVar26 >> 0x20);
    cVar2 = *(char *)(param_1 + 0x780);
    fVar89 = (float)_DAT_01d4ae90;
    fVar90 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar91 = (float)_UNK_01d4ae98;
    fVar92 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    uVar22 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd4f90);
    fVar50 = (fVar50 * (float)uVar32 + fVar89 * (float)uVar93 * 0.0 +
             fVar89 * (float)uVar71 * (float)uVar94) - (float)uVar87 * (float)uVar96;
    fVar62 = (fVar62 * fVar14 + fVar90 * (float)((ulong)uVar93 >> 0x20) * 0.0 +
             fVar90 * fVar83 * (float)((ulong)uVar94 >> 0x20)) -
             fVar88 * (float)((ulong)uVar96 >> 0x20);
    uVar38 = SUB41(fVar62,0);
    uVar39 = (undefined1)((uint)fVar62 >> 8);
    uVar40 = (undefined1)((uint)fVar62 >> 0x10);
    uVar41 = (undefined1)((uint)fVar62 >> 0x18);
    fVar64 = (fVar64 * (float)uVar32 + fVar91 * (float)uVar87 * (float)uVar95 +
             fVar91 * (float)uVar53 * 0.0) - (float)uVar71 * (float)uVar97;
    uVar42 = SUB41(fVar64,0);
    uVar43 = (undefined1)((uint)fVar64 >> 8);
    uVar44 = (undefined1)((uint)fVar64 >> 0x10);
    uVar45 = (undefined1)((uint)fVar64 >> 0x18);
    fVar14 = (fVar37 * fVar14 + fVar92 * fVar88 * (float)((ulong)uVar95 >> 0x20) +
             fVar92 * (float)((ulong)uVar53 >> 0x20) * 0.0) -
             fVar83 * (float)((ulong)uVar97 >> 0x20);
    uVar46 = SUB41(fVar14,0);
    uVar47 = (undefined1)((uint)fVar14 >> 8);
    uVar48 = (undefined1)((uint)fVar14 >> 0x10);
    uVar49 = (undefined1)((uint)fVar14 >> 0x18);
    auVar3[4] = uVar38;
    auVar3._0_4_ = fVar50;
    auVar3[5] = uVar39;
    auVar3[6] = uVar40;
    auVar3[7] = uVar41;
    auVar3[8] = uVar42;
    auVar3[9] = uVar43;
    auVar3[10] = uVar44;
    auVar3[0xb] = uVar45;
    auVar3[0xc] = uVar46;
    auVar3[0xd] = uVar47;
    auVar3[0xe] = uVar48;
    auVar3[0xf] = uVar49;
    uVar87 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
    auVar4[4] = uVar38;
    auVar4._0_4_ = fVar50;
    auVar4[5] = uVar39;
    auVar4[6] = uVar40;
    auVar4[7] = uVar41;
    auVar4[8] = uVar42;
    auVar4[9] = uVar43;
    auVar4[10] = uVar44;
    auVar4[0xb] = uVar45;
    auVar4[0xc] = uVar46;
    auVar4[0xd] = uVar47;
    auVar4[0xe] = uVar48;
    auVar4[0xf] = uVar49;
    uVar95 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5120);
    fVar37 = (float)((ulong)uVar22 >> 0x20);
    uVar94 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5418);
    fVar83 = (float)((ulong)uVar94 >> 0x20);
    auVar5[4] = uVar38;
    auVar5._0_4_ = fVar50;
    auVar5[5] = uVar39;
    auVar5[6] = uVar40;
    auVar5[7] = uVar41;
    auVar5[8] = uVar42;
    auVar5[9] = uVar43;
    auVar5[10] = uVar44;
    auVar5[0xb] = uVar45;
    auVar5[0xc] = uVar46;
    auVar5[0xd] = uVar47;
    auVar5[0xe] = uVar48;
    auVar5[0xf] = uVar49;
    uVar53 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
    auVar6[4] = uVar38;
    auVar6._0_4_ = fVar50;
    auVar6[5] = uVar39;
    auVar6[6] = uVar40;
    auVar6[7] = uVar41;
    auVar6[8] = uVar42;
    auVar6[9] = uVar43;
    auVar6[10] = uVar44;
    auVar6[0xb] = uVar45;
    auVar6[0xc] = uVar46;
    auVar6[0xd] = uVar47;
    auVar6[0xe] = uVar48;
    auVar6[0xf] = uVar49;
    uVar71 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
    auVar7[4] = uVar38;
    auVar7._0_4_ = fVar50;
    auVar7[5] = uVar39;
    auVar7[6] = uVar40;
    auVar7[7] = uVar41;
    auVar7[8] = uVar42;
    auVar7[9] = uVar43;
    auVar7[10] = uVar44;
    auVar7[0xb] = uVar45;
    auVar7[0xc] = uVar46;
    auVar7[0xd] = uVar47;
    auVar7[0xe] = uVar48;
    auVar7[0xf] = uVar49;
    uVar93 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5270);
    auVar8[4] = uVar38;
    auVar8._0_4_ = fVar50;
    auVar8[5] = uVar39;
    auVar8[6] = uVar40;
    auVar8[7] = uVar41;
    auVar8[8] = SUB41(fVar50,0);
    auVar8[9] = (char)((uint)fVar50 >> 8);
    auVar8[10] = (char)((uint)fVar50 >> 0x10);
    auVar8[0xb] = (char)((uint)fVar50 >> 0x18);
    auVar8[0xc] = uVar38;
    auVar8[0xd] = uVar39;
    auVar8[0xe] = uVar40;
    auVar8[0xf] = uVar41;
    uVar32 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50b0);
    fStack_bc = (float)(CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                                 CONCAT16((byte)((uint)fVar36 >> 0x10) &
                                          ~(byte)((uint)iVar63 >> 0x10),
                                          CONCAT15((byte)((uint)fVar36 >> 8) &
                                                   ~(byte)((uint)iVar63 >> 8),
                                                   CONCAT14(SUB41(fVar36,0) & ~(byte)iVar63,fVar35))
                                         )) >> 0x20);
    fStack_b4 = (float)(CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                                 CONCAT16((byte)((uint)fVar15 >> 0x10) &
                                          ~(byte)((uint)iVar68 >> 0x10),
                                          CONCAT15((byte)((uint)fVar15 >> 8) &
                                                   ~(byte)((uint)iVar68 >> 8),
                                                   CONCAT14(SUB41(fVar15,0) & ~(byte)iVar68,fVar34))
                                         )) >> 0x20);
    fVar50 = ((float)uVar22 * fVar50 + fVar89 * fVar52 * (float)uVar87 +
             fVar89 * (float)uVar94 * (float)uVar53) - (float)uVar26 * (float)uVar71;
    fVar36 = (fVar37 * fVar62 + fVar90 * fVar65 * (float)((ulong)uVar87 >> 0x20) +
             fVar90 * fVar83 * (float)((ulong)uVar53 >> 0x20)) -
             fVar84 * (float)((ulong)uVar71 >> 0x20);
    fVar62 = ((float)uVar22 * fVar64 + fVar91 * (float)uVar26 * (float)uVar95 +
             fVar91 * fVar52 * (float)uVar32) - (float)uVar94 * (float)uVar93;
    fVar14 = (fVar37 * fVar14 + fVar92 * fVar84 * (float)((ulong)uVar95 >> 0x20) +
             fVar92 * fVar65 * (float)((ulong)uVar32 >> 0x20)) -
             fVar83 * (float)((ulong)uVar93 >> 0x20);
    fVar35 = fVar35 * (float)CONCAT13((byte)((uint)fVar50 >> 0x18) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                      CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                               (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                               CONCAT11((byte)((uint)fVar50 >> 8) &
                                                        (byte)((ulong)DAT_01d4ab50 >> 8),
                                                        SUB41(fVar50,0) & (byte)DAT_01d4ab50)));
    fStack_bc = fStack_bc *
                (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                                CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                         (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                         CONCAT11((byte)((uint)fVar36 >> 8) &
                                                  (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                                  SUB41(fVar36,0) &
                                                  (byte)((ulong)DAT_01d4ab50 >> 0x20))));
    uVar38 = (undefined1)((uint)fStack_bc >> 8);
    uVar39 = (undefined1)((uint)fStack_bc >> 0x10);
    uVar40 = (undefined1)((uint)fStack_bc >> 0x18);
    fVar34 = fVar34 * (float)CONCAT13((byte)((uint)fVar62 >> 0x18) &
                                      (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                      CONCAT12((byte)((uint)fVar62 >> 0x10) &
                                               (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                               CONCAT11((byte)((uint)fVar62 >> 8) &
                                                        (byte)((ulong)DAT_01d4ab58 >> 8),
                                                        SUB41(fVar62,0) & (byte)DAT_01d4ab58)));
    uVar41 = (undefined1)((uint)fVar34 >> 8);
    uVar42 = (undefined1)((uint)fVar34 >> 0x10);
    uVar43 = (undefined1)((uint)fVar34 >> 0x18);
    fStack_b4 = fStack_b4 *
                (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                                CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                         (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                         CONCAT11((byte)((uint)fVar14 >> 8) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                                  SUB41(fVar14,0) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x20))));
    uVar44 = (undefined1)((uint)fStack_b4 >> 8);
    uVar45 = (undefined1)((uint)fStack_b4 >> 0x10);
    uVar46 = (undefined1)((uint)fStack_b4 >> 0x18);
    auVar9[4] = SUB41(fStack_bc,0);
    auVar9._0_4_ = fVar35;
    auVar9[5] = uVar38;
    auVar9[6] = uVar39;
    auVar9[7] = uVar40;
    auVar9[8] = SUB41(fVar34,0);
    auVar9[9] = uVar41;
    auVar9[10] = uVar42;
    auVar9[0xb] = uVar43;
    auVar9[0xc] = SUB41(fStack_b4,0);
    auVar9[0xd] = uVar44;
    auVar9[0xe] = uVar45;
    auVar9[0xf] = uVar46;
    auVar10[4] = SUB41(fStack_bc,0);
    auVar10._0_4_ = fVar35;
    auVar10[5] = uVar38;
    auVar10[6] = uVar39;
    auVar10[7] = uVar40;
    auVar10[8] = SUB41(fVar34,0);
    auVar10[9] = uVar41;
    auVar10[10] = uVar42;
    auVar10[0xb] = uVar43;
    auVar10[0xc] = SUB41(fStack_b4,0);
    auVar10[0xd] = uVar44;
    auVar10[0xe] = uVar45;
    auVar10[0xf] = uVar46;
    auVar73 = NEON_ext(auVar9,auVar10,8,1);
    fVar35 = auVar73._0_4_ + fVar35 + auVar73._4_4_ + fStack_bc;
    *(bool *)(param_1 + 0x780) = 0.0 < fVar35;
    pfVar28 = (float *)FUN_012dcaa0(param_1);
    if ((bool)(bVar27 & (cVar2 != '\0' && fVar35 <= 0.0))) {
      fVar35 = (float)*(undefined8 *)(param_1 + 0x760) - *pfVar28;
      fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x760) >> 0x20) - pfVar28[1];
      fVar34 = (float)*(undefined8 *)(param_1 + 0x768) - pfVar28[2];
      fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x768) >> 0x20) - pfVar28[3];
      fVar35 = fVar35 * fVar35;
      fVar14 = fVar14 * fVar14;
      uVar38 = (undefined1)((uint)fVar14 >> 8);
      uVar39 = (undefined1)((uint)fVar14 >> 0x10);
      uVar40 = (undefined1)((uint)fVar14 >> 0x18);
      fVar34 = fVar34 * fVar34;
      uVar41 = (undefined1)((uint)fVar34 >> 8);
      uVar42 = (undefined1)((uint)fVar34 >> 0x10);
      uVar43 = (undefined1)((uint)fVar34 >> 0x18);
      fVar50 = fVar50 * fVar50;
      uVar44 = (undefined1)((uint)fVar50 >> 8);
      uVar45 = (undefined1)((uint)fVar50 >> 0x10);
      uVar46 = (undefined1)((uint)fVar50 >> 0x18);
      auVar11[4] = SUB41(fVar14,0);
      auVar11._0_4_ = fVar35;
      auVar11[5] = uVar38;
      auVar11[6] = uVar39;
      auVar11[7] = uVar40;
      auVar11[8] = SUB41(fVar34,0);
      auVar11[9] = uVar41;
      auVar11[10] = uVar42;
      auVar11[0xb] = uVar43;
      auVar11[0xc] = SUB41(fVar50,0);
      auVar11[0xd] = uVar44;
      auVar11[0xe] = uVar45;
      auVar11[0xf] = uVar46;
      auVar12[4] = SUB41(fVar14,0);
      auVar12._0_4_ = fVar35;
      auVar12[5] = uVar38;
      auVar12[6] = uVar39;
      auVar12[7] = uVar40;
      auVar12[8] = SUB41(fVar34,0);
      auVar12[9] = uVar41;
      auVar12[10] = uVar42;
      auVar12[0xb] = uVar43;
      auVar12[0xc] = SUB41(fVar50,0);
      auVar12[0xd] = uVar44;
      auVar12[0xe] = uVar45;
      auVar12[0xf] = uVar46;
      auVar73 = NEON_ext(auVar11,auVar12,8,1);
      if (auVar73._0_4_ + fVar35 + auVar73._4_4_ + fVar14 < DAT_01d4bdec) {
        FUN_012dc9c0(param_1,(undefined8 *)(param_1 + 0x760));
        goto LAB_012e39a4;
      }
    }
  }
  else if (bVar27) {
LAB_012e39a4:
    *(undefined8 *)(param_1 + 0x760) = 0;
    *(undefined8 *)(param_1 + 0x768) = 0;
    lVar1 = param_1 + 0x370;
    *(undefined2 *)(param_1 + 0x30c) = 0;
    FUN_0131b6b0(lVar1,0);
    if (((*(int *)(param_1 + 0x308) == 4) || (*(int *)(param_1 + 0x308) == 1)) &&
       (uVar30 = FUN_0131d090(lVar1), (uVar30 & 1) == 0)) {
      FUN_0131d150(lVar1,1);
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = (code *)0x0;
    pcStack_a8 = (code *)0x0;
    if (*(code **)(param_1 + 0x7a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x7a0))(param_1 + 0x7b0,auStack_90);
      local_b0 = *(code **)(param_1 + 0x790);
      pcStack_a8 = *(code **)(param_1 + 0x798);
      local_a0 = *(undefined8 *)(param_1 + 0x7a0);
      uStack_98 = *(undefined8 *)(param_1 + 0x7a8);
    }
    pcVar33 = *(code **)(param_1 + 0x798);
    if (pcVar33 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x7a0) = 0;
      *(undefined8 *)(param_1 + 0x7a8) = 0;
      *(undefined8 *)(param_1 + 0x790) = 0;
      *(undefined8 *)(param_1 + 0x798) = 0;
      (*pcVar33)(param_1 + 0x7b0);
    }
    if (local_b0 != (code *)0x0) {
      (*local_b0)(auStack_90);
    }
    pcVar33 = pcStack_a8;
    if (pcStack_a8 == (code *)0x0) {
      return;
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = (code *)0x0;
    pcStack_a8 = (code *)0x0;
    (*pcVar33)(auStack_90);
    return;
  }
  iVar51 = FUN_0131cb60(param_1 + 0x370);
  if (iVar51 == 3) {
    puVar31 = (undefined8 *)FUN_012dcaa0(param_1);
    fVar35 = *(float *)(param_1 + 0x760) - (float)*puVar31;
    fVar14 = *(float *)(param_1 + 0x768) - (float)puVar31[1];
    fVar34 = *(float *)(param_1 + 0x76c) - (float)((ulong)puVar31[1] >> 0x20);
    auVar61._0_4_ = fVar35 * fVar35;
    auVar61._4_4_ = 0;
    auVar61._8_4_ = fVar14 * fVar14;
    fVar34 = (float)(CONCAT17((char)((uint)fVar34 >> 0x18),
                              CONCAT16((char)((uint)fVar34 >> 0x10),
                                       CONCAT15((char)((uint)fVar34 >> 8),
                                                CONCAT14(SUB41(fVar34,0),fVar14)))) >> 0x20);
    auVar61._12_4_ = fVar34 * fVar34;
    auVar73 = NEON_ext(auVar61,auVar61,8,1);
    if (SQRT(auVar73._0_4_ + auVar61._0_4_ + auVar73._4_4_ + 0.0) <= DAT_01d4c708) {
      return;
    }
    fVar35 = atan2f(fVar35,fVar14);
    FUN_00a92cd0(SUB41(fVar35,0),ZEXT816(0),ZEXT816(0));
    uVar32 = 3;
    pcStack_a8 = (code *)CONCAT17(extraout_var_28,
                                  CONCAT16(extraout_var_26,
                                           CONCAT15(extraout_var_24,
                                                    CONCAT14(extraout_var_22,
                                                             CONCAT13(extraout_var_20,
                                                                      CONCAT12(extraout_var_18,
                                                                               CONCAT11(
                                                  extraout_var_16,extraout_var_14)))))));
    local_b0 = (code *)CONCAT17(extraout_var_12,
                                CONCAT16(extraout_var_10,
                                         CONCAT15(extraout_var_08,
                                                  CONCAT14(extraout_var_06,
                                                           CONCAT13(extraout_var_04,
                                                                    CONCAT12(extraout_var_02,
                                                                             CONCAT11(
                                                  extraout_var_00,extraout_b0_00)))))));
  }
  else {
    if (iVar51 != 2) {
      return;
    }
    puVar31 = (undefined8 *)FUN_012dcaa0(param_1);
    fVar35 = *(float *)(param_1 + 0x760) - (float)*puVar31;
    fVar14 = *(float *)(param_1 + 0x768) - (float)puVar31[1];
    fVar34 = *(float *)(param_1 + 0x76c) - (float)((ulong)puVar31[1] >> 0x20);
    auVar60._0_4_ = fVar35 * fVar35;
    auVar60._4_4_ = 0;
    auVar60._8_4_ = fVar14 * fVar14;
    fVar34 = (float)(CONCAT17((char)((uint)fVar34 >> 0x18),
                              CONCAT16((char)((uint)fVar34 >> 0x10),
                                       CONCAT15((char)((uint)fVar34 >> 8),
                                                CONCAT14(SUB41(fVar34,0),fVar14)))) >> 0x20);
    auVar60._12_4_ = fVar34 * fVar34;
    auVar73 = NEON_ext(auVar60,auVar60,8,1);
    if (SQRT(auVar73._0_4_ + auVar60._0_4_ + auVar73._4_4_ + 0.0) <= DAT_01d4c708) {
      return;
    }
    fVar35 = atan2f(fVar35,fVar14);
    FUN_00a92cd0(SUB41(fVar35,0),ZEXT816(0),ZEXT816(0));
    pcStack_a8 = (code *)CONCAT17(extraout_var_27,
                                  CONCAT16(extraout_var_25,
                                           CONCAT15(extraout_var_23,
                                                    CONCAT14(extraout_var_21,
                                                             CONCAT13(extraout_var_19,
                                                                      CONCAT12(extraout_var_17,
                                                                               CONCAT11(
                                                  extraout_var_15,extraout_var_13)))))));
    local_b0 = (code *)CONCAT17(extraout_var_11,
                                CONCAT16(extraout_var_09,
                                         CONCAT15(extraout_var_07,
                                                  CONCAT14(extraout_var_05,
                                                           CONCAT13(extraout_var_03,
                                                                    CONCAT12(extraout_var_01,
                                                                             CONCAT11(extraout_var,
                                                                                      extraout_b0)))
                                                          ))));
    uVar32 = 2;
  }
  FUN_012e4b60(param_1,&local_b0,uVar32);
  return;
}


