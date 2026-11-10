/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00deb720; name: FUN_00deb720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00deb720(long param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long lVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  byte bVar49;
  int iVar50;
  byte bVar54;
  byte bVar55;
  int iVar57;
  int iVar58;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar56;
  int iVar59;
  undefined1 auVar53 [16];
  int iVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar66;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  undefined8 uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  float fVar96;
  undefined8 uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar103;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined8 uVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  
  lVar31 = *(long *)(param_1 + 0x88);
  fVar44 = *(float *)(lVar31 + 0x340);
  fVar46 = *(float *)(lVar31 + 0x344);
  fVar47 = *(float *)(lVar31 + 0x348);
  fVar48 = *(float *)(lVar31 + 0x34c);
  fVar34 = fVar44 * fVar44;
  fVar82 = fVar46 * fVar46;
  uVar35 = (undefined1)((uint)fVar82 >> 8);
  uVar36 = (undefined1)((uint)fVar82 >> 0x10);
  uVar37 = (undefined1)((uint)fVar82 >> 0x18);
  fVar33 = fVar47 * fVar47;
  uVar38 = (undefined1)((uint)fVar33 >> 8);
  uVar39 = (undefined1)((uint)fVar33 >> 0x10);
  uVar40 = (undefined1)((uint)fVar33 >> 0x18);
  fVar83 = fVar48 * fVar48;
  uVar41 = (undefined1)((uint)fVar83 >> 8);
  uVar42 = (undefined1)((uint)fVar83 >> 0x10);
  uVar43 = (undefined1)((uint)fVar83 >> 0x18);
  auVar51[4] = SUB41(fVar82,0);
  auVar51._0_4_ = fVar34;
  auVar51[5] = uVar35;
  auVar51[6] = uVar36;
  auVar51[7] = uVar37;
  auVar51[8] = SUB41(fVar33,0);
  auVar51[9] = uVar38;
  auVar51[10] = uVar39;
  auVar51[0xb] = uVar40;
  auVar51[0xc] = SUB41(fVar83,0);
  auVar51[0xd] = uVar41;
  auVar51[0xe] = uVar42;
  auVar51[0xf] = uVar43;
  auVar68[4] = SUB41(fVar82,0);
  auVar68._0_4_ = fVar34;
  auVar68[5] = uVar35;
  auVar68[6] = uVar36;
  auVar68[7] = uVar37;
  auVar68[8] = SUB41(fVar33,0);
  auVar68[9] = uVar38;
  auVar68[10] = uVar39;
  auVar68[0xb] = uVar40;
  auVar68[0xc] = SUB41(fVar83,0);
  auVar68[0xd] = uVar41;
  auVar68[0xe] = uVar42;
  auVar68[0xf] = uVar43;
  auVar51 = NEON_ext(auVar51,auVar68,8,1);
  fVar34 = auVar51._0_4_ + fVar34;
  fVar82 = auVar51._4_4_ + fVar82;
  fVar33 = fVar34 + fVar82;
  fVar34 = fVar34 + fVar82;
  iVar60 = -(uint)(fVar33 == 0.0);
  auVar52._8_8_ = CONCAT44(fVar34,fVar33);
  auVar52._0_8_ = CONCAT44(fVar34,fVar33);
  auVar51 = NEON_frsqrte(auVar52,4);
  auVar67._0_4_ = auVar51._0_4_ * fVar33;
  auVar67._4_4_ = auVar51._4_4_ * fVar34;
  auVar67._8_4_ = auVar51._8_4_ * fVar33;
  auVar67._12_4_ = auVar51._12_4_ * fVar34;
  auVar68 = NEON_frsqrts(auVar51,auVar67,4);
  auVar64._0_4_ = auVar51._0_4_ * auVar68._0_4_;
  auVar64._4_4_ = auVar51._4_4_ * auVar68._4_4_;
  auVar64._8_4_ = auVar51._8_4_ * auVar68._8_4_;
  auVar64._12_4_ = auVar51._12_4_ * auVar68._12_4_;
  auVar69._0_4_ = fVar33 * auVar64._0_4_;
  auVar69._4_4_ = fVar34 * auVar64._4_4_;
  auVar69._8_4_ = fVar33 * auVar64._8_4_;
  auVar69._12_4_ = fVar34 * auVar64._12_4_;
  iVar50 = -(uint)(fVar33 == 0.0);
  iVar57 = -(uint)(fVar34 == 0.0);
  iVar58 = -(uint)(fVar33 == 0.0);
  iVar59 = -(uint)(fVar34 == 0.0);
  auVar51 = NEON_frsqrts(auVar64,auVar69,4);
  fVar44 = fVar44 * auVar64._0_4_ * auVar51._0_4_;
  fVar46 = fVar46 * auVar64._4_4_ * auVar51._4_4_;
  fVar47 = fVar47 * auVar64._8_4_ * auVar51._8_4_;
  fVar48 = fVar48 * auVar64._12_4_ * auVar51._12_4_;
  bVar49 = ~(byte)iVar60;
  bVar54 = ~(byte)((uint)iVar60 >> 8);
  bVar55 = ~(byte)((uint)iVar60 >> 0x10);
  bVar56 = ~(byte)((uint)iVar60 >> 0x18);
  fVar34 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18) & bVar56,
                           CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10) &
                                    bVar55,CONCAT11((byte)((uint)fVar44 >> 8) &
                                                    ~(byte)((uint)iVar50 >> 8) & bVar54,
                                                    SUB41(fVar44,0) & ~(byte)iVar50 & bVar49)));
  fVar82 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18) & bVar56,
                           CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10) &
                                    bVar55,CONCAT11((byte)((uint)fVar46 >> 8) &
                                                    ~(byte)((uint)iVar57 >> 8) & bVar54,
                                                    SUB41(fVar46,0) & ~(byte)iVar57 & bVar49)));
  fVar33 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18) & bVar56,
                           CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10) &
                                    bVar55,CONCAT11((byte)((uint)fVar47 >> 8) &
                                                    ~(byte)((uint)iVar58 >> 8) & bVar54,
                                                    SUB41(fVar47,0) & ~(byte)iVar58 & bVar49)));
  fVar83 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18) & bVar56,
                           CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10) &
                                    bVar55,CONCAT11((byte)((uint)fVar48 >> 8) &
                                                    ~(byte)((uint)iVar59 >> 8) & bVar54,
                                                    SUB41(fVar48,0) & ~(byte)iVar59 & bVar49)));
  auVar45._0_4_ = fVar34 * fVar34;
  auVar45._4_4_ = fVar82 * fVar82;
  auVar45._8_4_ = fVar33 * fVar33;
  auVar45._12_4_ = fVar83 * fVar83;
  auVar51 = NEON_ext(auVar45,auVar45,8,1);
  if (auVar51._0_4_ + auVar45._0_4_ + auVar51._4_4_ + auVar45._4_4_ != 0.0) {
    fVar76 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    fVar103 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    pfVar1 = (float *)(param_1 + 0x110);
    uVar66 = *(undefined8 *)(param_1 + 0x118);
    uVar89 = (undefined1)((ulong)uVar66 >> 8);
    uVar90 = (undefined1)((ulong)uVar66 >> 0x10);
    uVar91 = (undefined1)((ulong)uVar66 >> 0x18);
    uVar92 = (undefined1)((ulong)uVar66 >> 0x20);
    uVar93 = (undefined1)((ulong)uVar66 >> 0x28);
    uVar94 = (undefined1)((ulong)uVar66 >> 0x30);
    uVar95 = (undefined1)((ulong)uVar66 >> 0x38);
    fVar48 = (float)*(undefined8 *)pfVar1;
    fVar44 = fVar48 * (float)_DAT_01d4ae80;
    fVar46 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * fVar103;
    fVar47 = (float)uVar66 * (float)_UNK_01d4ae88;
    fVar73 = (float)((ulong)uVar66 >> 0x20) * fVar76;
    auVar65._8_8_ = _UNK_01d49dc8;
    auVar65._0_8_ = _DAT_01d49dc0;
    uVar78 = a64_TBL(ZEXT816(0),auVar65,DAT_01cd4f90);
    uVar66 = a64_TBL(ZEXT816(0),auVar65,DAT_01cd50f8);
    uVar97 = a64_TBL(ZEXT816(0),auVar65,DAT_01cd5418);
    auVar8._4_4_ = fVar46;
    auVar8._0_4_ = fVar44;
    auVar8._8_4_ = fVar47;
    auVar8._12_4_ = fVar73;
    uVar75 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5120);
    auVar9._4_4_ = fVar46;
    auVar9._0_4_ = fVar44;
    auVar9._8_4_ = fVar47;
    auVar9._12_4_ = fVar73;
    uVar63 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
    auVar10._4_4_ = fVar46;
    auVar10._0_4_ = fVar44;
    auVar10._8_4_ = fVar47;
    auVar10._12_4_ = fVar73;
    uVar104 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
    auVar11._4_4_ = fVar46;
    auVar11._0_4_ = fVar44;
    auVar11._8_4_ = fVar47;
    auVar11._12_4_ = fVar73;
    uVar107 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    fVar77 = (float)uVar78;
    fVar79 = (float)((ulong)uVar78 >> 0x20);
    fVar84 = (float)uVar66;
    fVar85 = (float)((ulong)uVar66 >> 0x20);
    auVar12._4_4_ = fVar46;
    auVar12._0_4_ = fVar44;
    auVar12._8_4_ = fVar47;
    auVar12._12_4_ = fVar73;
    uVar108 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5270);
    auVar25[9] = uVar89;
    auVar25._0_9_ = *(unkbyte9 *)pfVar1;
    auVar25[10] = uVar90;
    auVar25[0xb] = uVar91;
    auVar25[0xc] = uVar92;
    auVar25[0xd] = uVar93;
    auVar25[0xe] = uVar94;
    auVar25[0xf] = uVar95;
    uVar78 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
    auVar13._4_4_ = fVar46;
    auVar13._0_4_ = fVar44;
    auVar13._8_4_ = fVar44;
    auVar13._12_4_ = fVar46;
    uVar66 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50b0);
    fVar72 = (float)_UNK_01d4ae98;
    fVar74 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar70 = (float)_DAT_01d4ae90;
    fVar71 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar80 = (float)uVar97;
    fVar81 = (float)((ulong)uVar97 >> 0x20);
    auVar26[9] = uVar89;
    auVar26._0_9_ = *(unkbyte9 *)pfVar1;
    auVar26[10] = uVar90;
    auVar26[0xb] = uVar91;
    auVar26[0xc] = uVar92;
    auVar26[0xd] = uVar93;
    auVar26[0xe] = uVar94;
    auVar26[0xf] = uVar95;
    uVar97 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50f8);
    fVar44 = (fVar44 * fVar77 + fVar70 * (float)uVar63 * 0.0 + fVar70 * fVar80 * (float)uVar104) -
             fVar84 * (float)uVar107;
    fVar46 = (fVar46 * fVar79 + fVar71 * (float)((ulong)uVar63 >> 0x20) * 0.0 +
             fVar71 * fVar81 * (float)((ulong)uVar104 >> 0x20)) -
             fVar85 * (float)((ulong)uVar107 >> 0x20);
    uVar35 = SUB41(fVar46,0);
    uVar36 = (undefined1)((uint)fVar46 >> 8);
    uVar37 = (undefined1)((uint)fVar46 >> 0x10);
    uVar38 = (undefined1)((uint)fVar46 >> 0x18);
    fVar46 = (fVar47 * fVar77 + fVar72 * fVar84 * (float)uVar75 + fVar72 * (float)uVar66 * 0.0) -
             fVar80 * (float)uVar108;
    uVar39 = SUB41(fVar46,0);
    uVar40 = (undefined1)((uint)fVar46 >> 8);
    uVar41 = (undefined1)((uint)fVar46 >> 0x10);
    uVar42 = (undefined1)((uint)fVar46 >> 0x18);
    fVar47 = (fVar73 * fVar79 + fVar74 * fVar85 * (float)((ulong)uVar75 >> 0x20) +
             fVar74 * (float)((ulong)uVar66 >> 0x20) * 0.0) -
             fVar81 * (float)((ulong)uVar108 >> 0x20);
    uVar43 = SUB41(fVar47,0);
    uVar86 = (undefined1)((uint)fVar47 >> 8);
    uVar87 = (undefined1)((uint)fVar47 >> 0x10);
    uVar88 = (undefined1)((uint)fVar47 >> 0x18);
    auVar20[4] = uVar35;
    auVar20._0_4_ = fVar44;
    auVar20[5] = uVar36;
    auVar20[6] = uVar37;
    auVar20[7] = uVar38;
    auVar20[8] = uVar39;
    auVar20[9] = uVar40;
    auVar20[10] = uVar41;
    auVar20[0xb] = uVar42;
    auVar20[0xc] = uVar43;
    auVar20[0xd] = uVar86;
    auVar20[0xe] = uVar87;
    auVar20[0xf] = uVar88;
    uVar75 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
    auVar21[4] = uVar35;
    auVar21._0_4_ = fVar44;
    auVar21[5] = uVar36;
    auVar21[6] = uVar37;
    auVar21[7] = uVar38;
    auVar21[8] = uVar39;
    auVar21[9] = uVar40;
    auVar21[10] = uVar41;
    auVar21[0xb] = uVar42;
    auVar21[0xc] = uVar43;
    auVar21[0xd] = uVar86;
    auVar21[0xe] = uVar87;
    auVar21[0xf] = uVar88;
    uVar107 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
    auVar30[4] = uVar35;
    auVar30._0_4_ = fVar44;
    auVar30[5] = uVar36;
    auVar30[6] = uVar37;
    auVar30[7] = uVar38;
    auVar22[4] = uVar35;
    auVar22._0_4_ = fVar44;
    auVar22[5] = uVar36;
    auVar22[6] = uVar37;
    auVar22[7] = uVar38;
    auVar22[8] = uVar39;
    auVar22[9] = uVar40;
    auVar22[10] = uVar41;
    auVar22[0xb] = uVar42;
    auVar22[0xc] = uVar43;
    auVar22[0xd] = uVar86;
    auVar22[0xe] = uVar87;
    auVar22[0xf] = uVar88;
    uVar108 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
    auVar30[0xc] = uVar35;
    auVar30._8_4_ = fVar44;
    auVar30[0xd] = uVar36;
    auVar30[0xe] = uVar37;
    auVar30[0xf] = uVar38;
    uVar109 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd50b0);
    auVar27[9] = uVar89;
    auVar27._0_9_ = *(unkbyte9 *)pfVar1;
    auVar27[10] = uVar90;
    auVar27[0xb] = uVar91;
    auVar27[0xc] = uVar92;
    auVar27[0xd] = uVar93;
    auVar27[0xe] = uVar94;
    auVar27[0xf] = uVar95;
    uVar104 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5418);
    auVar23[4] = uVar35;
    auVar23._0_4_ = fVar44;
    auVar23[5] = uVar36;
    auVar23[6] = uVar37;
    auVar23[7] = uVar38;
    auVar23[8] = uVar39;
    auVar23[9] = uVar40;
    auVar23[10] = uVar41;
    auVar23[0xb] = uVar42;
    auVar23[0xc] = uVar43;
    auVar23[0xd] = uVar86;
    auVar23[0xe] = uVar87;
    auVar23[0xf] = uVar88;
    uVar63 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd50f8);
    auVar24[4] = uVar35;
    auVar24._0_4_ = fVar44;
    auVar24[5] = uVar36;
    auVar24[6] = uVar37;
    auVar24[7] = uVar38;
    auVar24[8] = uVar39;
    auVar24[9] = uVar40;
    auVar24[10] = uVar41;
    auVar24[0xb] = uVar42;
    auVar24[0xc] = uVar43;
    auVar24[0xd] = uVar86;
    auVar24[0xe] = uVar87;
    auVar24[0xf] = uVar88;
    uVar66 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5270);
    fVar44 = ((float)uVar78 * fVar44 + fVar70 * *pfVar1 * (float)uVar75 +
             fVar70 * (float)uVar104 * (float)uVar63) - (float)uVar97 * (float)uVar108;
    fVar48 = ((float)uVar78 * fVar46 + fVar72 * (float)uVar97 * (float)uVar107 +
             fVar72 * fVar48 * (float)uVar109) - (float)uVar104 * (float)uVar66;
    auVar98._0_4_ = fVar44 * fVar44;
    auVar98._4_4_ = 0;
    auVar98._8_4_ = fVar48 * fVar48;
    auVar98._12_4_ = 0;
    auVar51 = NEON_ext(auVar98,auVar98,8,1);
    fVar47 = auVar51._0_4_ + auVar98._0_4_;
    fVar73 = auVar51._4_4_ + 0.0;
    fVar46 = fVar47 + fVar73;
    fVar47 = fVar47 + fVar73;
    auVar99._8_8_ = CONCAT44(fVar47,fVar46);
    auVar99._0_8_ = CONCAT44(fVar47,fVar46);
    auVar51 = NEON_frsqrte(auVar99,4);
    auVar105._0_4_ = auVar51._0_4_ * fVar46;
    auVar105._4_4_ = auVar51._4_4_ * fVar47;
    auVar105._8_4_ = auVar51._8_4_ * fVar46;
    auVar105._12_4_ = auVar51._12_4_ * fVar47;
    auVar68 = NEON_frsqrts(auVar51,auVar105,4);
    auVar100._0_4_ = auVar51._0_4_ * auVar68._0_4_;
    auVar100._4_4_ = auVar51._4_4_ * auVar68._4_4_;
    auVar100._8_4_ = auVar51._8_4_ * auVar68._8_4_;
    auVar100._12_4_ = auVar51._12_4_ * auVar68._12_4_;
    auVar106._0_4_ = fVar46 * auVar100._0_4_;
    auVar106._4_4_ = fVar47 * auVar100._4_4_;
    auVar106._8_4_ = fVar46 * auVar100._8_4_;
    auVar106._12_4_ = fVar47 * auVar100._12_4_;
    iVar50 = -(uint)(fVar46 == 0.0);
    iVar57 = -(uint)(fVar47 == 0.0);
    iVar58 = -(uint)(fVar46 == 0.0);
    iVar59 = -(uint)(fVar47 == 0.0);
    auVar51 = NEON_frsqrts(auVar100,auVar106,4);
    fVar44 = auVar100._0_4_ * auVar51._0_4_ * fVar44;
    fVar46 = auVar100._4_4_ * auVar51._4_4_ * 0.0;
    fVar48 = auVar100._8_4_ * auVar51._8_4_ * fVar48;
    fVar73 = auVar100._12_4_ * auVar51._12_4_ * 0.0;
    fVar44 = (0.0 - fVar34) *
             (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                             CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10),
                                      CONCAT11((byte)((uint)fVar44 >> 8) &
                                               ~(byte)((uint)iVar50 >> 8),
                                               SUB41(fVar44,0) & ~(byte)iVar50)));
    fVar47 = (0.0 - fVar82) *
             (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18),
                             CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10),
                                      CONCAT11((byte)((uint)fVar46 >> 8) &
                                               ~(byte)((uint)iVar57 >> 8),
                                               SUB41(fVar46,0) & ~(byte)iVar57)));
    uVar35 = (undefined1)((uint)fVar47 >> 8);
    uVar36 = (undefined1)((uint)fVar47 >> 0x10);
    uVar37 = (undefined1)((uint)fVar47 >> 0x18);
    fVar46 = (0.0 - fVar33) *
             (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                             CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10),
                                      CONCAT11((byte)((uint)fVar48 >> 8) &
                                               ~(byte)((uint)iVar58 >> 8),
                                               SUB41(fVar48,0) & ~(byte)iVar58)));
    uVar38 = (undefined1)((uint)fVar46 >> 8);
    uVar39 = (undefined1)((uint)fVar46 >> 0x10);
    uVar40 = (undefined1)((uint)fVar46 >> 0x18);
    fVar48 = (0.0 - fVar83) *
             (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                             CONCAT12((byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                                      CONCAT11((byte)((uint)fVar73 >> 8) &
                                               ~(byte)((uint)iVar59 >> 8),
                                               SUB41(fVar73,0) & ~(byte)iVar59)));
    uVar41 = (undefined1)((uint)fVar48 >> 8);
    uVar42 = (undefined1)((uint)fVar48 >> 0x10);
    uVar43 = (undefined1)((uint)fVar48 >> 0x18);
    auVar28[4] = SUB41(fVar47,0);
    auVar28._0_4_ = fVar44;
    auVar28[5] = uVar35;
    auVar28[6] = uVar36;
    auVar28[7] = uVar37;
    auVar28[8] = SUB41(fVar46,0);
    auVar28[9] = uVar38;
    auVar28[10] = uVar39;
    auVar28[0xb] = uVar40;
    auVar28[0xc] = SUB41(fVar48,0);
    auVar28[0xd] = uVar41;
    auVar28[0xe] = uVar42;
    auVar28[0xf] = uVar43;
    auVar29[4] = SUB41(fVar47,0);
    auVar29._0_4_ = fVar44;
    auVar29[5] = uVar35;
    auVar29[6] = uVar36;
    auVar29[7] = uVar37;
    auVar29[8] = SUB41(fVar46,0);
    auVar29[9] = uVar38;
    auVar29[10] = uVar39;
    auVar29[0xb] = uVar40;
    auVar29[0xc] = SUB41(fVar48,0);
    auVar29[0xd] = uVar41;
    auVar29[0xe] = uVar42;
    auVar29[0xf] = uVar43;
    auVar51 = NEON_ext(auVar28,auVar29,8,1);
    fVar46 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    uVar32 = (ulong)(*(float *)(param_1 + 0xec) * (fVar46 / *(float *)PTR_FloatDegree180_027194f0));
    fVar46 = *(float *)(PTR_SinCosSampleTable_02715d20 + (uVar32 >> 0x18 & 0xff) * 0x10) +
             *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar32 >> 0x18 & 0xff) * 0x10) + 8)
             * (float)((uint)uVar32 & 0xffffff) * DAT_01d4bc78;
    if (fVar46 <= auVar51._0_4_ + fVar44 + auVar51._4_4_ + fVar47) {
      auVar51 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x88) + 0xa0);
      fVar96 = auVar51._0_4_;
      fVar44 = fVar96 * (float)_DAT_01d4ae80;
      fVar103 = auVar51._4_4_ * fVar103;
      auVar101._0_8_ = CONCAT44(fVar103,fVar44);
      auVar101._8_4_ = auVar51._8_4_ * (float)_UNK_01d4ae88;
      auVar101._12_4_ = auVar51._12_4_ * fVar76;
      uVar78 = a64_TBL(ZEXT816(0),auVar101,DAT_01cd4f90);
      uVar66 = a64_TBL(ZEXT816(0),auVar101,DAT_01cd5120);
      uVar104 = a64_TBL(ZEXT816(0),auVar101,DAT_01cd5270);
      uVar63 = a64_TBL(ZEXT816(0),auVar101,DAT_01cd50f8);
      uVar97 = a64_TBL(ZEXT816(0),auVar101,DAT_01cd5418);
      auVar102._8_8_ = auVar101._0_8_;
      auVar102._0_8_ = auVar101._0_8_;
      uVar75 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd50b0);
      uVar108 = a64_TBL(ZEXT816(0),auVar51,DAT_01cd4f90);
      fVar44 = fVar44 * fVar77 + fVar70 * (float)uVar78 * 0.0 + fVar70 * fVar80 * (float)uVar63 +
               (float)uVar97 * -fVar84;
      fVar47 = fVar103 * fVar79 + fVar71 * (float)((ulong)uVar78 >> 0x20) * 0.0 +
               fVar71 * fVar81 * (float)((ulong)uVar63 >> 0x20) +
               (float)((ulong)uVar97 >> 0x20) * -fVar85;
      fVar48 = auVar101._8_4_ * fVar77 + fVar72 * fVar84 * (float)uVar66 +
               fVar72 * (float)uVar75 * 0.0 + (float)uVar104 * -fVar80;
      fVar73 = auVar101._12_4_ * fVar79 + fVar74 * fVar85 * (float)((ulong)uVar66 >> 0x20) +
               fVar74 * (float)((ulong)uVar75 >> 0x20) * 0.0 +
               (float)((ulong)uVar104 >> 0x20) * -fVar81;
      auVar14._4_4_ = fVar47;
      auVar14._0_4_ = fVar44;
      auVar14._8_4_ = fVar48;
      auVar14._12_4_ = fVar73;
      uVar63 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
      uVar109 = a64_TBL(ZEXT816(0),auVar51,DAT_01cd50f8);
      auVar15._4_4_ = fVar47;
      auVar15._0_4_ = fVar44;
      auVar15._8_4_ = fVar48;
      auVar15._12_4_ = fVar73;
      uVar104 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5120);
      uVar107 = a64_TBL(ZEXT816(0),auVar51,DAT_01cd5418);
      auVar16._4_4_ = fVar47;
      auVar16._0_4_ = fVar44;
      auVar16._8_4_ = fVar48;
      auVar16._12_4_ = fVar73;
      uVar66 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50f8);
      auVar17._4_4_ = fVar47;
      auVar17._0_4_ = fVar44;
      auVar17._8_4_ = fVar48;
      auVar17._12_4_ = fVar73;
      uVar75 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5418);
      auVar18._4_4_ = fVar47;
      auVar18._0_4_ = fVar44;
      auVar18._8_4_ = fVar48;
      auVar18._12_4_ = fVar73;
      uVar78 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5270);
      auVar19._4_4_ = fVar47;
      auVar19._0_4_ = fVar44;
      auVar19._8_4_ = fVar44;
      auVar19._12_4_ = fVar47;
      uVar97 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50b0);
      fVar73 = ((float)uVar108 * fVar44 + fVar70 * fVar96 * (float)uVar63 +
               fVar70 * (float)uVar107 * (float)uVar66) - (float)uVar109 * (float)uVar75;
      fVar70 = ((float)uVar108 * fVar48 + fVar72 * (float)uVar109 * (float)uVar104 +
               fVar72 * fVar96 * (float)uVar97) - (float)uVar107 * (float)uVar78;
      fVar44 = fVar73 * fVar73;
      fVar47 = fVar70 * fVar70;
      uVar35 = (undefined1)((uint)fVar47 >> 8);
      uVar36 = (undefined1)((uint)fVar47 >> 0x10);
      uVar37 = (undefined1)((uint)fVar47 >> 0x18);
      auVar2._4_4_ = 0;
      auVar2._0_4_ = fVar44;
      auVar2[8] = SUB41(fVar47,0);
      auVar2[9] = uVar35;
      auVar2[10] = uVar36;
      auVar2[0xb] = uVar37;
      auVar2._12_4_ = 0;
      auVar3._4_4_ = 0;
      auVar3._0_4_ = fVar44;
      auVar3[8] = SUB41(fVar47,0);
      auVar3[9] = uVar35;
      auVar3[10] = uVar36;
      auVar3[0xb] = uVar37;
      auVar3._12_4_ = 0;
      auVar51 = NEON_ext(auVar2,auVar3,8,1);
      fVar44 = auVar51._0_4_ + fVar44;
      fVar47 = auVar51._4_4_ + 0.0;
      fVar48 = fVar44 + fVar47;
      fVar44 = fVar44 + fVar47;
      uVar35 = SUB41(fVar44,0);
      uVar36 = (undefined1)((uint)fVar44 >> 8);
      uVar37 = (undefined1)((uint)fVar44 >> 0x10);
      uVar38 = (undefined1)((uint)fVar44 >> 0x18);
      auVar4[4] = uVar35;
      auVar4._0_4_ = fVar48;
      auVar4[5] = uVar36;
      auVar4[6] = uVar37;
      auVar4[7] = uVar38;
      auVar4[8] = SUB41(fVar48,0);
      auVar4[9] = (char)((uint)fVar48 >> 8);
      auVar4[10] = (char)((uint)fVar48 >> 0x10);
      auVar4[0xb] = (char)((uint)fVar48 >> 0x18);
      auVar4[0xc] = uVar35;
      auVar4[0xd] = uVar36;
      auVar4[0xe] = uVar37;
      auVar4[0xf] = uVar38;
      auVar51 = NEON_frsqrte(auVar4,4);
      auVar61._0_4_ = auVar51._0_4_ * fVar48;
      auVar61._4_4_ = auVar51._4_4_ * fVar44;
      auVar61._8_4_ = auVar51._8_4_ * fVar48;
      uVar7 = (undefined2)(CONCAT15(uVar36,CONCAT14(uVar35,fVar48)) >> 0x20);
      auVar61._12_4_ = auVar51._12_4_ * (float)CONCAT13(uVar38,CONCAT12(uVar37,uVar7));
      auVar68 = NEON_frsqrts(auVar51,auVar61,4);
      auVar53._0_4_ = auVar51._0_4_ * auVar68._0_4_;
      auVar53._4_4_ = auVar51._4_4_ * auVar68._4_4_;
      auVar53._8_4_ = auVar51._8_4_ * auVar68._8_4_;
      auVar53._12_4_ = auVar51._12_4_ * auVar68._12_4_;
      auVar62._0_4_ = fVar48 * auVar53._0_4_;
      auVar62._4_4_ = fVar44 * auVar53._4_4_;
      auVar62._8_4_ = fVar48 * auVar53._8_4_;
      auVar62._12_4_ = (float)CONCAT13(uVar38,CONCAT12(uVar37,uVar7)) * auVar53._12_4_;
      iVar50 = -(uint)(fVar48 == 0.0);
      iVar57 = -(uint)(fVar44 == 0.0);
      iVar58 = -(uint)(fVar48 == 0.0);
      iVar59 = -(uint)((float)CONCAT13(uVar38,CONCAT12(uVar37,uVar7)) == 0.0);
      auVar51 = NEON_frsqrts(auVar53,auVar62,4);
      fVar73 = auVar53._0_4_ * auVar51._0_4_ * fVar73;
      fVar44 = auVar53._4_4_ * auVar51._4_4_ * 0.0;
      fVar70 = auVar53._8_4_ * auVar51._8_4_ * fVar70;
      fVar47 = auVar53._12_4_ * auVar51._12_4_ * 0.0;
      fVar34 = (0.0 - fVar34) *
               (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                               CONCAT12((byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar73 >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  SUB41(fVar73,0) & ~(byte)iVar50)));
      fVar82 = (0.0 - fVar82) *
               (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18),
                               CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar44 >> 8) &
                                                  ~(byte)((uint)iVar57 >> 8),
                                                  SUB41(fVar44,0) & ~(byte)iVar57)));
      uVar35 = (undefined1)((uint)fVar82 >> 8);
      uVar36 = (undefined1)((uint)fVar82 >> 0x10);
      uVar37 = (undefined1)((uint)fVar82 >> 0x18);
      fVar33 = (0.0 - fVar33) *
               (float)CONCAT13((byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                               CONCAT12((byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar70 >> 8) &
                                                  ~(byte)((uint)iVar58 >> 8),
                                                  SUB41(fVar70,0) & ~(byte)iVar58)));
      uVar38 = (undefined1)((uint)fVar33 >> 8);
      uVar39 = (undefined1)((uint)fVar33 >> 0x10);
      uVar40 = (undefined1)((uint)fVar33 >> 0x18);
      fVar83 = (0.0 - fVar83) *
               (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                               CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar47 >> 8) &
                                                  ~(byte)((uint)iVar59 >> 8),
                                                  SUB41(fVar47,0) & ~(byte)iVar59)));
      uVar41 = (undefined1)((uint)fVar83 >> 8);
      uVar42 = (undefined1)((uint)fVar83 >> 0x10);
      uVar43 = (undefined1)((uint)fVar83 >> 0x18);
      auVar5[4] = SUB41(fVar82,0);
      auVar5._0_4_ = fVar34;
      auVar5[5] = uVar35;
      auVar5[6] = uVar36;
      auVar5[7] = uVar37;
      auVar5[8] = SUB41(fVar33,0);
      auVar5[9] = uVar38;
      auVar5[10] = uVar39;
      auVar5[0xb] = uVar40;
      auVar5[0xc] = SUB41(fVar83,0);
      auVar5[0xd] = uVar41;
      auVar5[0xe] = uVar42;
      auVar5[0xf] = uVar43;
      auVar6[4] = SUB41(fVar82,0);
      auVar6._0_4_ = fVar34;
      auVar6[5] = uVar35;
      auVar6[6] = uVar36;
      auVar6[7] = uVar37;
      auVar6[8] = SUB41(fVar33,0);
      auVar6[9] = uVar38;
      auVar6[10] = uVar39;
      auVar6[0xb] = uVar40;
      auVar6[0xc] = SUB41(fVar83,0);
      auVar6[0xd] = uVar41;
      auVar6[0xe] = uVar42;
      auVar6[0xf] = uVar43;
      auVar51 = NEON_ext(auVar5,auVar6,8,1);
      if (fVar46 <= auVar51._0_4_ + fVar34 + auVar51._4_4_ + fVar82) {
        return 1;
      }
    }
  }
  return 0;
}


