/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e75140; name: FUN_00e75140
 */


/* WARNING: Removing unreachable block (ram,0x00e75578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e75140(float param_1,long param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [12];
  undefined8 extraout_d0;
  float fVar30;
  float fVar31;
  float fVar34;
  undefined1 auVar20 [16];
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar29 [16];
  int iVar36;
  undefined1 auVar37 [12];
  undefined1 auVar40 [12];
  int iVar49;
  int iVar50;
  int iVar51;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar52;
  float fVar62;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar63;
  undefined1 auVar64 [16];
  float fVar71;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar72;
  float fVar73;
  undefined1 auVar74 [12];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined8 uVar93;
  float fVar94;
  undefined8 uVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  float fStack_9c;
  float fStack_8c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  fVar18 = (float)_DAT_01d49dc0;
  fVar30 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
  fVar31 = (float)_UNK_01d49dc8;
  fVar34 = (float)((ulong)_UNK_01d49dc8 >> 0x20);
  if (DAT_01d4c284 <= param_1) {
    fVar17 = *param_3;
    fVar32 = param_3[2];
    fVar35 = param_3[3];
    fVar15 = 0.0;
    auVar75._0_4_ = fVar17 * fVar17;
    auVar75._4_4_ = 0;
    auVar75._8_4_ = fVar32 * fVar32;
    auVar75._12_4_ = fVar35 * fVar35;
    auVar64 = NEON_ext(auVar75,auVar75,8,1);
    fVar62 = auVar64._0_4_ + auVar75._0_4_;
    fVar33 = auVar64._4_4_ + 0.0;
    fVar52 = fVar62 + fVar33;
    fVar62 = fVar62 + fVar33;
    if (fVar52 == 0.0) goto LAB_00e75598;
    auVar60._8_8_ = CONCAT44(fVar62,fVar52);
    auVar60._0_8_ = CONCAT44(fVar62,fVar52);
    auVar75 = NEON_frsqrte(auVar60,4);
    auVar66._0_4_ = auVar75._0_4_ * fVar52;
    auVar66._4_4_ = auVar75._4_4_ * fVar62;
    auVar66._8_4_ = auVar75._8_4_ * fVar52;
    auVar66._12_4_ = auVar75._12_4_ * fVar62;
    auVar67 = NEON_frsqrts(auVar75,auVar66,4);
    auVar64._0_4_ = auVar75._0_4_ * auVar67._0_4_;
    auVar64._4_4_ = auVar75._4_4_ * auVar67._4_4_;
    auVar64._8_4_ = auVar75._8_4_ * auVar67._8_4_;
    auVar64._12_4_ = auVar75._12_4_ * auVar67._12_4_;
    auVar68._0_4_ = fVar52 * auVar64._0_4_;
    auVar68._4_4_ = fVar62 * auVar64._4_4_;
    auVar68._8_4_ = fVar52 * auVar64._8_4_;
    auVar68._12_4_ = fVar62 * auVar64._12_4_;
    auVar75 = NEON_frsqrts(auVar64,auVar68,4);
    fVar17 = fVar17 * auVar64._0_4_ * auVar75._0_4_;
    fVar15 = auVar64._4_4_ * auVar75._4_4_ * 0.0;
    fVar32 = fVar32 * auVar64._8_4_ * auVar75._8_4_;
    fVar35 = fVar35 * auVar64._12_4_ * auVar75._12_4_;
    iVar36 = -(uint)(fVar52 == 0.0);
    iVar49 = -(uint)(fVar62 == 0.0);
    iVar50 = -(uint)(fVar52 == 0.0);
    iVar51 = -(uint)(fVar62 == 0.0);
    fVar17 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar17 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar17,0) & ~(byte)iVar36)));
    auVar39._0_8_ =
         CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                  CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                           CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                    CONCAT14(SUB41(fVar15,0) & ~(byte)iVar49,fVar17))));
    auVar39[8] = SUB41(fVar32,0) & ~(byte)iVar50;
    auVar39[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar50 >> 8);
    auVar39[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
    auVar39[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
    auVar45[0xc] = SUB41(fVar35,0) & ~(byte)iVar51;
    auVar45._0_12_ = auVar39;
    auVar45[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar51 >> 8);
    auVar45[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    auVar45[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    auVar67._0_4_ = fVar17 * fVar18;
    auVar67._4_4_ = (float)((ulong)auVar39._0_8_ >> 0x20) * fVar30;
    auVar67._8_4_ = auVar39._8_4_ * fVar31;
    auVar67._12_4_ = auVar45._12_4_ * fVar34;
    NEON_ext(auVar67,auVar67,8,1);
    fVar18 = (float)FUN_01590400();
  }
  else {
    fVar17 = *param_3;
    fVar32 = param_3[2];
    fVar35 = param_3[3];
    auVar75 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x70) + 0xa0);
    auVar53._0_4_ = fVar17 * fVar17;
    auVar53._4_4_ = 0;
    auVar53._8_4_ = fVar32 * fVar32;
    auVar53._12_4_ = fVar35 * fVar35;
    auVar64 = NEON_ext(auVar53,auVar53,8,1);
    fVar52 = auVar64._0_4_ + auVar53._0_4_;
    fVar62 = auVar64._4_4_ + 0.0;
    fVar15 = fVar52 + fVar62;
    fVar52 = fVar52 + fVar62;
    if (fVar15 == 0.0) {
      return;
    }
    fVar73 = auVar75._0_4_;
    fVar62 = fVar73 * (float)_DAT_01d4ae80;
    fVar33 = auVar75._4_4_ * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar81 = SUB41(fVar33,0);
    uVar82 = (undefined1)((uint)fVar33 >> 8);
    uVar83 = (undefined1)((uint)fVar33 >> 0x10);
    uVar84 = (undefined1)((uint)fVar33 >> 0x18);
    fVar16 = auVar75._8_4_ * (float)_UNK_01d4ae88;
    uVar85 = SUB41(fVar16,0);
    uVar86 = (undefined1)((uint)fVar16 >> 8);
    uVar87 = (undefined1)((uint)fVar16 >> 0x10);
    uVar88 = (undefined1)((uint)fVar16 >> 0x18);
    fVar72 = auVar75._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar89 = SUB41(fVar72,0);
    uVar90 = (undefined1)((uint)fVar72 >> 8);
    uVar91 = (undefined1)((uint)fVar72 >> 0x10);
    uVar92 = (undefined1)((uint)fVar72 >> 0x18);
    auVar12._8_8_ = _UNK_01d49dc8;
    auVar12._0_8_ = _DAT_01d49dc0;
    uVar63 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
    auVar4[4] = uVar81;
    auVar4._0_4_ = fVar62;
    auVar4[5] = uVar82;
    auVar4[6] = uVar83;
    auVar4[7] = uVar84;
    auVar4[8] = uVar85;
    auVar4[9] = uVar86;
    auVar4[10] = uVar87;
    auVar4[0xb] = uVar88;
    auVar4[0xc] = uVar89;
    auVar4[0xd] = uVar90;
    auVar4[0xe] = uVar91;
    auVar4[0xf] = uVar92;
    uVar101 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
    auVar13._8_8_ = _UNK_01d49dc8;
    auVar13._0_8_ = _DAT_01d49dc0;
    uVar95 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5418);
    auVar14._8_8_ = _UNK_01d49dc8;
    auVar14._0_8_ = _DAT_01d49dc0;
    uVar93 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
    auVar5[4] = uVar81;
    auVar5._0_4_ = fVar62;
    auVar5[5] = uVar82;
    auVar5[6] = uVar83;
    auVar5[7] = uVar84;
    auVar5[8] = uVar85;
    auVar5[9] = uVar86;
    auVar5[10] = uVar87;
    auVar5[0xb] = uVar88;
    auVar5[0xc] = uVar89;
    auVar5[0xd] = uVar90;
    auVar5[0xe] = uVar91;
    auVar5[0xf] = uVar92;
    uVar103 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5120);
    auVar6[4] = uVar81;
    auVar6._0_4_ = fVar62;
    auVar6[5] = uVar82;
    auVar6[6] = uVar83;
    auVar6[7] = uVar84;
    auVar6[8] = uVar85;
    auVar6[9] = uVar86;
    auVar6[10] = uVar87;
    auVar6[0xb] = uVar88;
    auVar6[0xc] = uVar89;
    auVar6[0xd] = uVar90;
    auVar6[0xe] = uVar91;
    auVar6[0xf] = uVar92;
    uVar104 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
    auVar7[4] = uVar81;
    auVar7._0_4_ = fVar62;
    auVar7[5] = uVar82;
    auVar7[6] = uVar83;
    auVar7[7] = uVar84;
    auVar7[8] = uVar85;
    auVar7[9] = uVar86;
    auVar7[10] = uVar87;
    auVar7[0xb] = uVar88;
    auVar7[0xc] = uVar89;
    auVar7[0xd] = uVar90;
    auVar7[0xe] = uVar91;
    auVar7[0xf] = uVar92;
    uVar105 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5270);
    fVar71 = (float)((ulong)uVar63 >> 0x20);
    fVar94 = (float)((ulong)uVar93 >> 0x20);
    auVar8[4] = uVar81;
    auVar8._0_4_ = fVar62;
    auVar8[5] = uVar82;
    auVar8[6] = uVar83;
    auVar8[7] = uVar84;
    auVar8[8] = uVar85;
    auVar8[9] = uVar86;
    auVar8[10] = uVar87;
    auVar8[0xb] = uVar88;
    auVar8[0xc] = uVar89;
    auVar8[0xd] = uVar90;
    auVar8[0xe] = uVar91;
    auVar8[0xf] = uVar92;
    uVar102 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
    auVar9[4] = uVar81;
    auVar9._0_4_ = fVar62;
    auVar9[5] = uVar82;
    auVar9[6] = uVar83;
    auVar9[7] = uVar84;
    auVar9[8] = SUB41(fVar62,0);
    auVar9[9] = (char)((uint)fVar62 >> 8);
    auVar9[10] = (char)((uint)fVar62 >> 0x10);
    auVar9[0xb] = (char)((uint)fVar62 >> 0x18);
    auVar9[0xc] = uVar81;
    auVar9[0xd] = uVar82;
    auVar9[0xe] = uVar83;
    auVar9[0xf] = uVar84;
    auVar39._0_8_ = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50b0);
    fVar97 = (float)((ulong)uVar95 >> 0x20);
    fVar96 = (float)_DAT_01d4ae90;
    fVar98 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar99 = (float)_UNK_01d4ae98;
    fVar100 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    uVar10 = a64_TBL(ZEXT816(0),auVar75,DAT_01cd4f90);
    fVar62 = (fVar62 * (float)uVar63 + fVar96 * (float)uVar101 * 0.0 +
             fVar96 * (float)uVar95 * (float)uVar102) - (float)uVar93 * (float)uVar104;
    auVar65._0_8_ =
         CONCAT44((fVar33 * fVar71 + fVar98 * (float)((ulong)uVar101 >> 0x20) * 0.0 +
                  fVar98 * fVar97 * (float)((ulong)uVar102 >> 0x20)) -
                  fVar94 * (float)((ulong)uVar104 >> 0x20),fVar62);
    auVar65._8_4_ =
         (fVar16 * (float)uVar63 + fVar99 * (float)uVar93 * (float)uVar103 +
         fVar99 * (float)auVar39._0_8_ * 0.0) - (float)uVar95 * (float)uVar105;
    auVar65._12_4_ =
         (fVar72 * fVar71 + fVar100 * fVar94 * (float)((ulong)uVar103 >> 0x20) +
         fVar100 * (float)((ulong)auVar39._0_8_ >> 0x20) * 0.0) -
         fVar97 * (float)((ulong)uVar105 >> 0x20);
    uVar101 = a64_TBL(ZEXT816(0),auVar75,DAT_01cd50f8);
    uVar93 = a64_TBL(ZEXT816(0),auVar65,DAT_01cd4f90);
    uVar103 = a64_TBL(ZEXT816(0),auVar65,DAT_01cd5120);
    auVar39._0_8_ = a64_TBL(ZEXT816(0),auVar65,DAT_01cd50f8);
    uVar102 = a64_TBL(ZEXT816(0),auVar75,DAT_01cd5418);
    uVar95 = a64_TBL(ZEXT816(0),auVar65,DAT_01cd5418);
    auVar11._8_8_ = auVar65._0_8_;
    auVar11._0_8_ = auVar65._0_8_;
    uVar104 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50b0);
    uVar63 = a64_TBL(ZEXT816(0),auVar65,DAT_01cd5270);
    fVar62 = ((float)uVar10 * fVar62 + fVar96 * fVar73 * (float)uVar93 +
             fVar96 * (float)uVar102 * (float)auVar39._0_8_) - (float)uVar101 * (float)uVar95;
    fVar33 = ((float)uVar10 * auVar65._8_4_ + fVar99 * (float)uVar101 * (float)uVar103 +
             fVar99 * fVar73 * (float)uVar104) - (float)uVar102 * (float)uVar63;
    fVar72 = fVar62 * fVar62;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = fVar72;
    auVar1._8_4_ = fVar33 * fVar33;
    auVar1._12_4_ = 0;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = fVar72;
    auVar2._8_4_ = fVar33 * fVar33;
    auVar2._12_4_ = 0;
    auVar75 = NEON_ext(auVar1,auVar2,8,1);
    fVar72 = auVar75._0_4_ + fVar72;
    fVar73 = auVar75._4_4_ + 0.0;
    fVar16 = fVar72 + fVar73;
    fVar72 = fVar72 + fVar73;
    if (fVar16 == 0.0) {
      return;
    }
    auVar54._8_8_ = CONCAT44(fVar52,fVar15);
    auVar54._0_8_ = CONCAT44(fVar52,fVar15);
    auVar75 = NEON_frsqrte(auVar54,4);
    auVar76._0_4_ = auVar75._0_4_ * fVar15;
    auVar76._4_4_ = auVar75._4_4_ * fVar52;
    auVar76._8_4_ = auVar75._8_4_ * fVar15;
    auVar76._12_4_ = auVar75._12_4_ * fVar52;
    auVar64 = NEON_frsqrts(auVar75,auVar76,4);
    auVar20._0_4_ = auVar75._0_4_ * auVar64._0_4_;
    auVar20._4_4_ = auVar75._4_4_ * auVar64._4_4_;
    auVar20._8_4_ = auVar75._8_4_ * auVar64._8_4_;
    auVar20._12_4_ = auVar75._12_4_ * auVar64._12_4_;
    auVar77._0_4_ = fVar15 * auVar20._0_4_;
    auVar77._4_4_ = fVar52 * auVar20._4_4_;
    auVar77._8_4_ = fVar15 * auVar20._8_4_;
    auVar77._12_4_ = fVar52 * auVar20._12_4_;
    auVar75 = NEON_frsqrts(auVar20,auVar77,4);
    fVar17 = fVar17 * auVar20._0_4_ * auVar75._0_4_;
    fVar73 = auVar20._4_4_ * auVar75._4_4_ * 0.0;
    fVar32 = fVar32 * auVar20._8_4_ * auVar75._8_4_;
    fVar35 = fVar35 * auVar20._12_4_ * auVar75._12_4_;
    iVar36 = -(uint)(fVar15 == 0.0);
    iVar49 = -(uint)(fVar52 == 0.0);
    iVar50 = -(uint)(fVar15 == 0.0);
    iVar51 = -(uint)(fVar52 == 0.0);
    auVar3._4_4_ = fVar72;
    auVar3._0_4_ = fVar16;
    auVar3._8_4_ = fVar16;
    auVar3._12_4_ = fVar72;
    auVar75 = NEON_frsqrte(auVar3,4);
    auVar78._0_4_ = auVar75._0_4_ * fVar16;
    auVar78._4_4_ = auVar75._4_4_ * fVar72;
    auVar78._8_4_ = auVar75._8_4_ * fVar16;
    auVar78._12_4_ = auVar75._12_4_ * fVar72;
    auVar64 = NEON_frsqrts(auVar75,auVar78,4);
    auVar55._0_4_ = auVar75._0_4_ * auVar64._0_4_;
    auVar55._4_4_ = auVar75._4_4_ * auVar64._4_4_;
    auVar55._8_4_ = auVar75._8_4_ * auVar64._8_4_;
    auVar55._12_4_ = auVar75._12_4_ * auVar64._12_4_;
    auVar79._0_4_ = fVar16 * auVar55._0_4_;
    auVar79._4_4_ = fVar72 * auVar55._4_4_;
    auVar79._8_4_ = fVar16 * auVar55._8_4_;
    auVar79._12_4_ = fVar72 * auVar55._12_4_;
    auVar75 = NEON_frsqrts(auVar55,auVar79,4);
    fVar52 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar17 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar17,0) & ~(byte)iVar36)));
    auVar74._0_8_ =
         CONCAT17((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                  CONCAT16((byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                           CONCAT15((byte)((uint)fVar73 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                    CONCAT14(SUB41(fVar73,0) & ~(byte)iVar49,fVar52))));
    auVar74[8] = SUB41(fVar32,0) & ~(byte)iVar50;
    auVar74[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar50 >> 8);
    auVar74[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
    auVar74[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
    auVar80[0xc] = SUB41(fVar35,0) & ~(byte)iVar51;
    auVar80._0_12_ = auVar74;
    auVar80[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar51 >> 8);
    auVar80[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    auVar80[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    iVar36 = -(uint)(fVar16 == 0.0);
    iVar49 = -(uint)(fVar72 == 0.0);
    iVar50 = -(uint)(fVar16 == 0.0);
    iVar51 = -(uint)(fVar72 == 0.0);
    fVar62 = fVar62 * auVar55._0_4_ * auVar75._0_4_;
    fVar32 = auVar55._4_4_ * auVar75._4_4_ * 0.0;
    fVar33 = fVar33 * auVar55._8_4_ * auVar75._8_4_;
    fVar35 = auVar55._12_4_ * auVar75._12_4_ * 0.0;
    fVar17 = (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar62 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar62,0) & ~(byte)iVar36)));
    auVar19._0_8_ =
         CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                  CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                           CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                    CONCAT14(SUB41(fVar32,0) & ~(byte)iVar49,fVar17))));
    auVar19[8] = SUB41(fVar33,0) & ~(byte)iVar50;
    auVar19[9] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar50 >> 8);
    auVar19[10] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
    auVar19[0xb] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
    auVar21[0xc] = SUB41(fVar35,0) & ~(byte)iVar51;
    auVar21._0_12_ = auVar19;
    auVar21[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar51 >> 8);
    auVar21[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    auVar21[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    fStack_9c = (float)((ulong)auVar19._0_8_ >> 0x20);
    fStack_8c = (float)((ulong)auVar74._0_8_ >> 0x20);
    auVar22._0_4_ = fVar52 * fVar17;
    auVar22._4_4_ = fStack_8c * fStack_9c;
    fVar35 = auVar19._8_4_;
    fVar15 = auVar21._12_4_;
    fVar62 = auVar74._8_4_;
    auVar22._8_4_ = fVar62 * fVar35;
    fVar33 = auVar80._12_4_;
    auVar22._12_4_ = fVar33 * fVar15;
    NEON_ext(auVar22,auVar22,8,1);
    fVar32 = (float)FUN_01590400();
    param_1 = (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) * param_1;
    if (param_1 < fVar32) {
      auVar23._0_4_ = fVar17 * fVar17;
      auVar23._4_4_ = 0;
      auVar23._8_4_ = fVar35 * fVar35;
      auVar23._12_4_ = fVar15 * fVar15;
      auVar75 = NEON_ext(auVar23,auVar23,8,1);
      fVar73 = auVar75._0_4_ + auVar23._0_4_;
      fVar16 = auVar75._4_4_ + 0.0;
      fVar72 = fVar73 + fVar16;
      fVar73 = fVar73 + fVar16;
      fVar16 = 0.0;
      if (fVar72 != 0.0) {
        auVar24._8_8_ = CONCAT44(fVar73,fVar72);
        auVar24._0_8_ = CONCAT44(fVar73,fVar72);
        auVar75 = NEON_frsqrte(auVar24,4);
        auVar56._0_4_ = auVar75._0_4_ * fVar72;
        auVar56._4_4_ = auVar75._4_4_ * fVar73;
        auVar56._8_4_ = auVar75._8_4_ * fVar72;
        auVar56._12_4_ = auVar75._12_4_ * fVar73;
        auVar64 = NEON_frsqrts(auVar75,auVar56,4);
        auVar41._0_4_ = auVar75._0_4_ * auVar64._0_4_;
        auVar41._4_4_ = auVar75._4_4_ * auVar64._4_4_;
        auVar41._8_4_ = auVar75._8_4_ * auVar64._8_4_;
        auVar41._12_4_ = auVar75._12_4_ * auVar64._12_4_;
        auVar57._0_4_ = fVar72 * auVar41._0_4_;
        auVar57._4_4_ = fVar73 * auVar41._4_4_;
        auVar57._8_4_ = fVar72 * auVar41._8_4_;
        auVar57._12_4_ = fVar73 * auVar41._12_4_;
        iVar36 = -(uint)(fVar72 == 0.0);
        iVar49 = -(uint)(fVar73 == 0.0);
        iVar50 = -(uint)(fVar72 == 0.0);
        iVar51 = -(uint)(fVar73 == 0.0);
        auVar75 = NEON_frsqrts(auVar41,auVar57,4);
        fVar17 = fVar17 * auVar41._0_4_ * auVar75._0_4_;
        fVar16 = auVar41._4_4_ * auVar75._4_4_ * 0.0;
        fVar35 = fVar35 * auVar41._8_4_ * auVar75._8_4_;
        fVar15 = fVar15 * auVar41._12_4_ * auVar75._12_4_;
        fVar72 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                                 CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                          ~(byte)((uint)iVar36 >> 0x10),
                                          CONCAT11((byte)((uint)fVar17 >> 8) &
                                                   ~(byte)((uint)iVar36 >> 8),
                                                   SUB41(fVar17,0) & ~(byte)iVar36)));
        auVar37._0_8_ =
             CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                      CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                               CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                        CONCAT14(SUB41(fVar16,0) & ~(byte)iVar49,fVar72))));
        auVar37[8] = SUB41(fVar35,0) & ~(byte)iVar50;
        auVar37[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar50 >> 8);
        auVar37[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
        auVar37[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
        auVar42[0xc] = SUB41(fVar15,0) & ~(byte)iVar51;
        auVar42._0_12_ = auVar37;
        auVar42[0xd] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar51 >> 8);
        auVar42[0xe] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
        auVar42[0xf] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
        auVar25._0_4_ = fVar72 * fVar18;
        auVar25._4_4_ = (float)((ulong)auVar37._0_8_ >> 0x20) * fVar30;
        auVar25._8_4_ = auVar37._8_4_ * fVar31;
        auVar25._12_4_ = auVar42._12_4_ * fVar34;
        NEON_ext(auVar25,auVar25,8,1);
        fVar17 = (float)FUN_01590400();
        fVar16 = -fVar17;
        if (0.0 <= fVar72) {
          fVar16 = fVar17;
        }
      }
      auVar26._0_4_ = fVar52 * fVar52;
      auVar26._4_4_ = 0;
      auVar26._8_4_ = fVar62 * fVar62;
      auVar26._12_4_ = fVar33 * fVar33;
      auVar75 = NEON_ext(auVar26,auVar26,8,1);
      fVar15 = auVar75._0_4_ + auVar26._0_4_;
      fVar17 = auVar75._4_4_ + 0.0;
      fVar35 = fVar15 + fVar17;
      fVar15 = fVar15 + fVar17;
      fVar17 = 0.0;
      if (fVar35 != 0.0) {
        auVar27._8_8_ = CONCAT44(fVar15,fVar35);
        auVar27._0_8_ = CONCAT44(fVar15,fVar35);
        auVar75 = NEON_frsqrte(auVar27,4);
        auVar58._0_4_ = auVar75._0_4_ * fVar35;
        auVar58._4_4_ = auVar75._4_4_ * fVar15;
        auVar58._8_4_ = auVar75._8_4_ * fVar35;
        auVar58._12_4_ = auVar75._12_4_ * fVar15;
        auVar64 = NEON_frsqrts(auVar75,auVar58,4);
        auVar43._0_4_ = auVar75._0_4_ * auVar64._0_4_;
        auVar43._4_4_ = auVar75._4_4_ * auVar64._4_4_;
        auVar43._8_4_ = auVar75._8_4_ * auVar64._8_4_;
        auVar43._12_4_ = auVar75._12_4_ * auVar64._12_4_;
        auVar59._0_4_ = fVar35 * auVar43._0_4_;
        auVar59._4_4_ = fVar15 * auVar43._4_4_;
        auVar59._8_4_ = fVar35 * auVar43._8_4_;
        auVar59._12_4_ = fVar15 * auVar43._12_4_;
        iVar36 = -(uint)(fVar35 == 0.0);
        iVar49 = -(uint)(fVar15 == 0.0);
        iVar50 = -(uint)(fVar35 == 0.0);
        iVar51 = -(uint)(fVar15 == 0.0);
        auVar75 = NEON_frsqrts(auVar43,auVar59,4);
        fVar52 = fVar52 * auVar43._0_4_ * auVar75._0_4_;
        fVar17 = auVar43._4_4_ * auVar75._4_4_ * 0.0;
        fVar62 = fVar62 * auVar43._8_4_ * auVar75._8_4_;
        fVar33 = fVar33 * auVar43._12_4_ * auVar75._12_4_;
        fVar35 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                                 CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                          ~(byte)((uint)iVar36 >> 0x10),
                                          CONCAT11((byte)((uint)fVar52 >> 8) &
                                                   ~(byte)((uint)iVar36 >> 8),
                                                   SUB41(fVar52,0) & ~(byte)iVar36)));
        auVar38._0_8_ =
             CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                      CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                               CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                        CONCAT14(SUB41(fVar17,0) & ~(byte)iVar49,fVar35))));
        auVar38[8] = SUB41(fVar62,0) & ~(byte)iVar50;
        auVar38[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar50 >> 8);
        auVar38[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
        auVar38[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
        auVar44[0xc] = SUB41(fVar33,0) & ~(byte)iVar51;
        auVar44._0_12_ = auVar38;
        auVar44[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar51 >> 8);
        auVar44[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
        auVar44[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
        auVar28._0_4_ = fVar35 * fVar18;
        auVar28._4_4_ = (float)((ulong)auVar38._0_8_ >> 0x20) * fVar30;
        auVar28._8_4_ = auVar38._8_4_ * fVar31;
        auVar28._12_4_ = auVar44._12_4_ * fVar34;
        NEON_ext(auVar28,auVar28,8,1);
        fVar18 = (float)FUN_01590400();
        fVar17 = -fVar18;
        if (0.0 <= fVar35) {
          fVar17 = fVar18;
        }
      }
      FUN_00a92cd0(fVar16,ZEXT816(0),ZEXT816(0));
      local_60 = extraout_d0;
      uStack_58 = extraout_var;
      FUN_00a92cd0(fVar17,ZEXT816(0),ZEXT816(0));
      fVar18 = 0.0;
      if (0.0 < fVar32) {
        fVar18 = param_1 / fVar32;
      }
      local_70 = extraout_d0_00;
      uStack_68 = extraout_var_00;
      FUN_0075e7d0(fVar18,&local_60,&local_70);
      return;
    }
    fVar52 = (float)*(undefined8 *)(param_3 + 2);
    fVar62 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
    fVar35 = (float)*(undefined8 *)param_3;
    auVar46._0_4_ = fVar35 * fVar35;
    auVar46._4_4_ = 0;
    auVar46._8_4_ = fVar52 * fVar52;
    auVar46._12_4_ = fVar62 * fVar62;
    auVar75 = NEON_ext(auVar46,auVar46,8,1);
    fVar32 = auVar75._0_4_ + auVar46._0_4_;
    fVar15 = auVar75._4_4_ + 0.0;
    fVar17 = fVar32 + fVar15;
    fVar32 = fVar32 + fVar15;
    fVar15 = 0.0;
    if (fVar17 == 0.0) goto LAB_00e75598;
    auVar47._8_8_ = CONCAT44(fVar32,fVar17);
    auVar47._0_8_ = CONCAT44(fVar32,fVar17);
    auVar75 = NEON_frsqrte(auVar47,4);
    auVar69._0_4_ = auVar75._0_4_ * fVar17;
    auVar69._4_4_ = auVar75._4_4_ * fVar32;
    auVar69._8_4_ = auVar75._8_4_ * fVar17;
    auVar69._12_4_ = auVar75._12_4_ * fVar32;
    auVar64 = NEON_frsqrts(auVar75,auVar69,4);
    auVar61._0_4_ = auVar75._0_4_ * auVar64._0_4_;
    auVar61._4_4_ = auVar75._4_4_ * auVar64._4_4_;
    auVar61._8_4_ = auVar75._8_4_ * auVar64._8_4_;
    auVar61._12_4_ = auVar75._12_4_ * auVar64._12_4_;
    auVar70._0_4_ = fVar17 * auVar61._0_4_;
    auVar70._4_4_ = fVar32 * auVar61._4_4_;
    auVar70._8_4_ = fVar17 * auVar61._8_4_;
    auVar70._12_4_ = fVar32 * auVar61._12_4_;
    iVar36 = -(uint)(fVar17 == 0.0);
    iVar49 = -(uint)(fVar32 == 0.0);
    iVar50 = -(uint)(fVar17 == 0.0);
    iVar51 = -(uint)(fVar32 == 0.0);
    auVar75 = NEON_frsqrts(auVar61,auVar70,4);
    fVar35 = fVar35 * auVar61._0_4_ * auVar75._0_4_;
    fVar17 = auVar61._4_4_ * auVar75._4_4_ * 0.0;
    fVar52 = fVar52 * auVar61._8_4_ * auVar75._8_4_;
    fVar62 = fVar62 * auVar61._12_4_ * auVar75._12_4_;
    fVar32 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar35,0) & ~(byte)iVar36)));
    auVar40._0_8_ =
         CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                  CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                           CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                    CONCAT14(SUB41(fVar17,0) & ~(byte)iVar49,fVar32))));
    auVar40[8] = SUB41(fVar52,0) & ~(byte)iVar50;
    auVar40[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar50 >> 8);
    auVar40[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
    auVar40[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
    auVar48[0xc] = SUB41(fVar62,0) & ~(byte)iVar51;
    auVar48._0_12_ = auVar40;
    auVar48[0xd] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar51 >> 8);
    auVar48[0xe] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    auVar48[0xf] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    auVar29._0_4_ = fVar32 * fVar18;
    fVar17 = (float)((ulong)auVar40._0_8_ >> 0x20);
    auVar29._4_4_ = fVar17 * fVar30;
    auVar29._8_4_ = auVar40._8_4_ * fVar31;
    auVar29._12_4_ = auVar48._12_4_ * fVar34;
    NEON_ext(auVar29,auVar29,8,1);
    fVar18 = (float)FUN_01590400();
    auVar39._0_8_ = CONCAT44(fVar17,fVar32);
  }
  fVar15 = -fVar18;
  if (0.0 <= (float)auVar39._0_8_) {
    fVar15 = fVar18;
  }
LAB_00e75598:
  FUN_00a92cd0(fVar15,ZEXT816(0),ZEXT816(0));
  return;
}


