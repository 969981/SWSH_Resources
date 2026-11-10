/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df4810; name: FUN_00df4810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00df4810(undefined4 param_1,long param_2,undefined8 *param_3,undefined1 (*param_4) [16])

{
  long lVar1;
  undefined1 auVar2 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined *puVar39;
  long lVar40;
  undefined8 uVar41;
  int iVar42;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined1 auVar48 [16];
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  byte bVar70;
  undefined1 uVar71;
  byte bVar72;
  float fVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  float fVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  float fVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  float fVar109;
  
  if (*(char *)(param_2 + 0xdc) == '\0') {
    FUN_00a92cd0(param_1,ZEXT816(0),0);
    fVar82 = (float)param_3[1];
    fVar85 = (float)((ulong)param_3[1] >> 0x20);
    fVar86 = (float)*param_3;
    fVar87 = (float)((ulong)*param_3 >> 0x20);
    fVar76 = extraout_s0 * (float)_DAT_01d4b570;
    fVar77 = extraout_var * (float)((ulong)_DAT_01d4b570 >> 0x20);
    fVar73 = extraout_var_00 * (float)_UNK_01d4b578;
    fVar75 = extraout_var_01 * (float)((ulong)_UNK_01d4b578 >> 0x20);
    auVar46._4_4_ = fVar77;
    auVar46._0_4_ = fVar76;
    auVar46._8_4_ = fVar73;
    auVar46._12_4_ = fVar75;
    auVar44._4_4_ = fVar77;
    auVar44._0_4_ = fVar76;
    auVar44._8_4_ = fVar73;
    auVar44._12_4_ = fVar75;
    auVar44 = NEON_ext(auVar46,auVar44,8,1);
    auVar46 = *param_4;
    fVar73 = fVar86 * auVar46._0_4_;
    fVar75 = fVar87 * auVar46._4_4_;
    fVar78 = fVar82 * auVar46._8_4_;
    fVar47 = fVar85 * auVar46._12_4_;
    auVar48._4_4_ = fVar75;
    auVar48._0_4_ = fVar73;
    auVar48._8_4_ = fVar78;
    auVar48._12_4_ = fVar47;
    auVar4._4_4_ = fVar75;
    auVar4._0_4_ = fVar73;
    auVar4._8_4_ = fVar78;
    auVar4._12_4_ = fVar47;
    auVar48 = NEON_ext(auVar48,auVar4,8,1);
    if ((auVar44._0_4_ + fVar76 + auVar44._4_4_ + fVar77) -
        (auVar48._0_4_ + fVar73 + auVar48._4_4_ + fVar75) < 0.0) {
      return 0;
    }
  }
  else {
    fVar82 = (float)param_3[1];
    fVar85 = (float)((ulong)param_3[1] >> 0x20);
    fVar86 = (float)*param_3;
    fVar87 = (float)((ulong)*param_3 >> 0x20);
    auVar46 = *param_4;
  }
  fVar99 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  fVar95 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar57 = (undefined1)_UNK_01d49dc8;
  uVar59 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
  uVar61 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
  uVar63 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
  uVar65 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
  uVar67 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
  uVar69 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
  uVar71 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
  fVar76 = fVar86 * (float)_DAT_01d4ae80;
  fVar77 = fVar87 * fVar95;
  fVar78 = fVar82 * (float)_UNK_01d4ae88;
  fVar79 = fVar85 * fVar99;
  auVar12._4_4_ = fVar77;
  auVar12._0_4_ = fVar76;
  auVar12._8_4_ = fVar78;
  auVar12._12_4_ = fVar79;
  uVar81 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5120);
  auVar5[8] = uVar57;
  auVar5._0_8_ = _DAT_01d49dc0;
  auVar5[9] = uVar59;
  auVar5[10] = uVar61;
  auVar5[0xb] = uVar63;
  auVar5[0xc] = uVar65;
  auVar5[0xd] = uVar67;
  auVar5[0xe] = uVar69;
  auVar5[0xf] = uVar71;
  uVar83 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  auVar6[8] = uVar57;
  auVar6._0_8_ = _DAT_01d49dc0;
  auVar6[9] = uVar59;
  auVar6[10] = uVar61;
  auVar6[0xb] = uVar63;
  auVar6[0xc] = uVar65;
  auVar6[0xd] = uVar67;
  auVar6[0xe] = uVar69;
  auVar6[0xf] = uVar71;
  uVar90 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
  auVar7[8] = uVar57;
  auVar7._0_8_ = _DAT_01d49dc0;
  auVar7[9] = uVar59;
  auVar7[10] = uVar61;
  auVar7[0xb] = uVar63;
  auVar7[0xc] = uVar65;
  auVar7[0xd] = uVar67;
  auVar7[0xe] = uVar69;
  auVar7[0xf] = uVar71;
  uVar74 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
  auVar13._4_4_ = fVar77;
  auVar13._0_4_ = fVar76;
  auVar13._8_4_ = fVar78;
  auVar13._12_4_ = fVar79;
  uVar41 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
  auVar14._4_4_ = fVar77;
  auVar14._0_4_ = fVar76;
  auVar14._8_4_ = fVar78;
  auVar14._12_4_ = fVar79;
  uVar103 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
  auVar15._4_4_ = fVar77;
  auVar15._0_4_ = fVar76;
  auVar15._8_4_ = fVar78;
  auVar15._12_4_ = fVar79;
  uVar106 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
  auVar24._4_4_ = fVar87;
  auVar24._0_4_ = fVar86;
  auVar24._8_4_ = fVar82;
  auVar24._12_4_ = fVar85;
  uVar84 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
  fVar88 = (float)uVar90;
  fVar89 = (float)((ulong)uVar90 >> 0x20);
  fVar100 = (float)uVar74;
  fVar101 = (float)((ulong)uVar74 >> 0x20);
  auVar16._4_4_ = fVar77;
  auVar16._0_4_ = fVar76;
  auVar16._8_4_ = fVar78;
  auVar16._12_4_ = fVar79;
  uVar90 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
  auVar17._4_4_ = fVar77;
  auVar17._0_4_ = fVar76;
  auVar17._8_4_ = fVar76;
  auVar17._12_4_ = fVar77;
  uVar74 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50b0);
  fVar47 = (float)_UNK_01d4ae98;
  fVar80 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar73 = (float)_DAT_01d4ae90;
  fVar75 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar91 = (float)uVar83;
  fVar92 = (float)((ulong)uVar83 >> 0x20);
  auVar25._4_4_ = fVar87;
  auVar25._0_4_ = fVar86;
  auVar25._8_4_ = fVar82;
  auVar25._12_4_ = fVar85;
  uVar102 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
  fVar93 = (fVar76 * fVar88 + fVar73 * (float)uVar41 * 0.0 + fVar73 * fVar91 * (float)uVar103) -
           fVar100 * (float)uVar106;
  fVar94 = (fVar77 * fVar89 + fVar75 * (float)((ulong)uVar41 >> 0x20) * 0.0 +
           fVar75 * fVar92 * (float)((ulong)uVar103 >> 0x20)) -
           fVar101 * (float)((ulong)uVar106 >> 0x20);
  fVar96 = (fVar78 * fVar88 + fVar47 * fVar100 * (float)uVar81 + fVar47 * (float)uVar74 * 0.0) -
           fVar91 * (float)uVar90;
  fVar98 = (fVar79 * fVar89 + fVar80 * fVar101 * (float)((ulong)uVar81 >> 0x20) +
           fVar80 * (float)((ulong)uVar74 >> 0x20) * 0.0) - fVar92 * (float)((ulong)uVar90 >> 0x20);
  auVar27._4_4_ = fVar94;
  auVar27._0_4_ = fVar93;
  auVar27._8_4_ = fVar96;
  auVar27._12_4_ = fVar98;
  uVar107 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd4f90);
  auVar28._4_4_ = fVar94;
  auVar28._0_4_ = fVar93;
  auVar28._8_4_ = fVar96;
  auVar28._12_4_ = fVar98;
  uVar90 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5120);
  fVar78 = (float)((ulong)uVar84 >> 0x20);
  auVar38._4_4_ = fVar94;
  auVar38._0_4_ = fVar93;
  auVar38._8_4_ = fVar93;
  auVar38._12_4_ = fVar94;
  uVar81 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd50b0);
  fVar105 = (float)((ulong)uVar102 >> 0x20);
  auVar26._4_4_ = fVar87;
  auVar26._0_4_ = fVar86;
  auVar26._8_4_ = fVar82;
  auVar26._12_4_ = fVar85;
  uVar108 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
  auVar29._4_4_ = fVar94;
  auVar29._0_4_ = fVar93;
  auVar29._8_4_ = fVar96;
  auVar29._12_4_ = fVar98;
  uVar41 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50f8);
  auVar30._4_4_ = fVar94;
  auVar30._0_4_ = fVar93;
  auVar30._8_4_ = fVar96;
  auVar30._12_4_ = fVar98;
  uVar83 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd5418);
  auVar31._4_4_ = fVar94;
  auVar31._0_4_ = fVar93;
  auVar31._8_4_ = fVar96;
  auVar31._12_4_ = fVar98;
  uVar74 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5270);
  fVar76 = auVar46._0_4_;
  fVar79 = fVar76 * (float)_DAT_01d4ae80;
  fVar77 = auVar46._4_4_;
  fVar95 = fVar77 * fVar95;
  fVar97 = auVar46._8_4_ * (float)_UNK_01d4ae88;
  fVar99 = auVar46._12_4_ * fVar99;
  auVar32._4_4_ = fVar95;
  auVar32._0_4_ = fVar79;
  auVar32._8_4_ = fVar97;
  auVar32._12_4_ = fVar99;
  uVar106 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd5120);
  auVar33._4_4_ = fVar95;
  auVar33._0_4_ = fVar79;
  auVar33._8_4_ = fVar97;
  auVar33._12_4_ = fVar99;
  uVar103 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd4f90);
  fVar109 = (float)((ulong)uVar108 >> 0x20);
  auVar34._4_4_ = fVar95;
  auVar34._0_4_ = fVar79;
  auVar34._8_4_ = fVar97;
  auVar34._12_4_ = fVar99;
  uVar104 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd5270);
  fVar82 = ((float)uVar84 * fVar93 + fVar73 * fVar86 * (float)uVar107 +
           fVar73 * (float)uVar108 * (float)uVar41) - (float)uVar102 * (float)uVar83;
  fVar85 = (fVar78 * fVar94 + fVar75 * fVar87 * (float)((ulong)uVar107 >> 0x20) +
           fVar75 * fVar109 * (float)((ulong)uVar41 >> 0x20)) -
           fVar105 * (float)((ulong)uVar83 >> 0x20);
  fVar86 = ((float)uVar84 * fVar96 + fVar47 * (float)uVar102 * (float)uVar90 +
           fVar47 * fVar86 * (float)uVar81) - (float)uVar108 * (float)uVar74;
  fVar87 = (fVar78 * fVar98 + fVar80 * fVar105 * (float)((ulong)uVar90 >> 0x20) +
           fVar80 * fVar87 * (float)((ulong)uVar81 >> 0x20)) -
           fVar109 * (float)((ulong)uVar74 >> 0x20);
  auVar35._4_4_ = fVar95;
  auVar35._0_4_ = fVar79;
  auVar35._8_4_ = fVar97;
  auVar35._12_4_ = fVar99;
  uVar90 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd50f8);
  auVar36._4_4_ = fVar95;
  auVar36._0_4_ = fVar79;
  auVar36._8_4_ = fVar97;
  auVar36._12_4_ = fVar99;
  uVar81 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd5418);
  auVar37._4_4_ = fVar95;
  auVar37._0_4_ = fVar79;
  auVar37._8_4_ = fVar79;
  auVar37._12_4_ = fVar95;
  uVar41 = a64_TBL(ZEXT816(0),auVar37,DAT_01cd50b0);
  uVar74 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd4f90);
  fVar93 = (float)((ulong)uVar74 >> 0x20);
  fVar78 = (fVar88 * fVar79 + fVar73 * (float)uVar103 * 0.0 + fVar73 * fVar91 * (float)uVar90) -
           fVar100 * (float)uVar81;
  fVar79 = (fVar89 * fVar95 + fVar75 * (float)((ulong)uVar103 >> 0x20) * 0.0 +
           fVar75 * fVar92 * (float)((ulong)uVar90 >> 0x20)) -
           fVar101 * (float)((ulong)uVar81 >> 0x20);
  fVar95 = (fVar88 * fVar97 + fVar47 * fVar100 * (float)uVar106 + fVar47 * (float)uVar41 * 0.0) -
           fVar91 * (float)uVar104;
  fVar99 = (fVar89 * fVar99 + fVar80 * fVar101 * (float)((ulong)uVar106 >> 0x20) +
           fVar80 * (float)((ulong)uVar41 >> 0x20) * 0.0) - fVar92 * (float)((ulong)uVar104 >> 0x20)
  ;
  auVar18._4_4_ = fVar79;
  auVar18._0_4_ = fVar78;
  auVar18._8_4_ = fVar95;
  auVar18._12_4_ = fVar99;
  uVar83 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
  auVar19._4_4_ = fVar79;
  auVar19._0_4_ = fVar78;
  auVar19._8_4_ = fVar95;
  auVar19._12_4_ = fVar99;
  uVar103 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5120);
  uVar90 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd50f8);
  fVar88 = (float)((ulong)uVar90 >> 0x20);
  uVar102 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd5418);
  fVar89 = (float)((ulong)uVar102 >> 0x20);
  auVar20._4_4_ = fVar79;
  auVar20._0_4_ = fVar78;
  auVar20._8_4_ = fVar95;
  auVar20._12_4_ = fVar99;
  uVar106 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5418);
  auVar21._4_4_ = fVar79;
  auVar21._0_4_ = fVar78;
  auVar21._8_4_ = fVar95;
  auVar21._12_4_ = fVar99;
  uVar81 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
  auVar22._4_4_ = fVar79;
  auVar22._0_4_ = fVar78;
  auVar22._8_4_ = fVar95;
  auVar22._12_4_ = fVar99;
  uVar84 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5270);
  auVar23._4_4_ = fVar79;
  auVar23._0_4_ = fVar78;
  auVar23._8_4_ = fVar78;
  auVar23._12_4_ = fVar79;
  uVar41 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd50b0);
  fVar73 = ((float)uVar74 * fVar78 + fVar73 * fVar76 * (float)uVar83 +
           fVar73 * (float)uVar102 * (float)uVar81) - (float)uVar90 * (float)uVar106;
  fVar75 = (fVar93 * fVar79 + fVar75 * fVar77 * (float)((ulong)uVar83 >> 0x20) +
           fVar75 * fVar89 * (float)((ulong)uVar81 >> 0x20)) -
           fVar88 * (float)((ulong)uVar106 >> 0x20);
  fVar78 = ((float)uVar74 * fVar95 + fVar47 * (float)uVar90 * (float)uVar103 +
           fVar47 * fVar76 * (float)uVar41) - (float)uVar102 * (float)uVar84;
  fVar77 = (fVar93 * fVar99 + fVar80 * fVar88 * (float)((ulong)uVar103 >> 0x20) +
           fVar80 * fVar77 * (float)((ulong)uVar41 >> 0x20)) -
           fVar89 * (float)((ulong)uVar84 >> 0x20);
  bVar50 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar51 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar52 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  fVar76 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & bVar52,
                           CONCAT12((byte)((uint)fVar73 >> 0x10) & bVar51,
                                    CONCAT11((byte)((uint)fVar73 >> 8) & bVar50,
                                             SUB41(fVar73,0) & (byte)DAT_01d4ab50)));
  bVar53 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar54 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar55 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar56 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  auVar43._0_8_ =
       CONCAT17((byte)((uint)fVar75 >> 0x18) & bVar56,
                CONCAT16((byte)((uint)fVar75 >> 0x10) & bVar55,
                         CONCAT15((byte)((uint)fVar75 >> 8) & bVar54,
                                  CONCAT14(SUB41(fVar75,0) & bVar53,fVar76))));
  auVar43[8] = SUB41(fVar78,0) & (byte)DAT_01d4ab58;
  bVar60 = (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar43[9] = (byte)((uint)fVar78 >> 8) & bVar60;
  bVar62 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar43[10] = (byte)((uint)fVar78 >> 0x10) & bVar62;
  bVar64 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar43[0xb] = (byte)((uint)fVar78 >> 0x18) & bVar64;
  bVar66 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar45[0xc] = SUB41(fVar77,0) & bVar66;
  auVar45._0_12_ = auVar43;
  bVar68 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar45[0xd] = (byte)((uint)fVar77 >> 8) & bVar68;
  bVar70 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  auVar45[0xe] = (byte)((uint)fVar77 >> 0x10) & bVar70;
  bVar72 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  auVar45[0xf] = (byte)((uint)fVar77 >> 0x18) & bVar72;
  bVar49 = SUB41(fVar82,0) & (byte)DAT_01d4ab50;
  bVar50 = (byte)((uint)fVar82 >> 8) & bVar50;
  bVar51 = (byte)((uint)fVar82 >> 0x10) & bVar51;
  bVar52 = (byte)((uint)fVar82 >> 0x18) & bVar52;
  bVar53 = SUB41(fVar85,0) & bVar53;
  bVar54 = (byte)((uint)fVar85 >> 8) & bVar54;
  bVar55 = (byte)((uint)fVar85 >> 0x10) & bVar55;
  bVar56 = (byte)((uint)fVar85 >> 0x18) & bVar56;
  bVar58 = SUB41(fVar86,0) & (byte)DAT_01d4ab58;
  bVar60 = (byte)((uint)fVar86 >> 8) & bVar60;
  bVar62 = (byte)((uint)fVar86 >> 0x10) & bVar62;
  bVar64 = (byte)((uint)fVar86 >> 0x18) & bVar64;
  bVar66 = SUB41(fVar87,0) & bVar66;
  bVar68 = (byte)((uint)fVar87 >> 8) & bVar68;
  bVar70 = (byte)((uint)fVar87 >> 0x10) & bVar70;
  bVar72 = (byte)((uint)fVar87 >> 0x18) & bVar72;
  auVar8[1] = bVar50;
  auVar8[0] = bVar49;
  auVar8[2] = bVar51;
  auVar8[3] = bVar52;
  auVar8[4] = bVar53;
  auVar8[5] = bVar54;
  auVar8[6] = bVar55;
  auVar8[7] = bVar56;
  auVar8[8] = bVar58;
  auVar8[9] = bVar60;
  auVar8[10] = bVar62;
  auVar8[0xb] = bVar64;
  auVar8[0xc] = bVar66;
  auVar8[0xd] = bVar68;
  auVar8[0xe] = bVar70;
  auVar8[0xf] = bVar72;
  uVar90 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
  uVar41 = a64_TBL(ZEXT816(0),auVar45,DAT_01cd5418);
  auVar9[1] = bVar50;
  auVar9[0] = bVar49;
  auVar9[2] = bVar51;
  auVar9[3] = bVar52;
  auVar9[4] = bVar53;
  auVar9[5] = bVar54;
  auVar9[6] = bVar55;
  auVar9[7] = bVar56;
  auVar9[8] = bVar58;
  auVar9[9] = bVar60;
  auVar9[10] = bVar62;
  auVar9[0xb] = bVar64;
  auVar9[0xc] = bVar66;
  auVar9[0xd] = bVar68;
  auVar9[0xe] = bVar70;
  auVar9[0xf] = bVar72;
  a64_TBL(ZEXT816(0),auVar9,DAT_01cd5188);
  a64_TBL(ZEXT816(0),auVar45,DAT_01cd5158);
  uVar74 = a64_TBL(ZEXT816(0),auVar45,DAT_01cd50f8);
  auVar10[1] = bVar50;
  auVar10[0] = bVar49;
  auVar10[2] = bVar51;
  auVar10[3] = bVar52;
  auVar10[4] = bVar53;
  auVar10[5] = bVar54;
  auVar10[6] = bVar55;
  auVar10[7] = bVar56;
  auVar10[8] = bVar58;
  auVar10[9] = bVar60;
  auVar10[10] = bVar62;
  auVar10[0xb] = bVar64;
  auVar10[0xc] = bVar66;
  auVar10[0xd] = bVar68;
  auVar10[0xe] = bVar70;
  auVar10[0xf] = bVar72;
  uVar81 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
  auVar11[1] = bVar50;
  auVar11[0] = bVar49;
  auVar11[2] = bVar51;
  auVar11[3] = bVar52;
  auVar11[4] = bVar53;
  auVar11[5] = bVar54;
  auVar11[6] = bVar55;
  auVar11[7] = bVar56;
  auVar11[8] = bVar58;
  auVar11[9] = bVar60;
  auVar11[10] = bVar62;
  auVar11[0xb] = bVar64;
  auVar11[0xc] = bVar66;
  auVar11[0xd] = bVar68;
  auVar11[0xe] = bVar70;
  auVar11[0xf] = bVar72;
  a64_TBL(ZEXT816(0),auVar11,DAT_01cd5158);
  a64_TBL(ZEXT816(0),auVar45,DAT_01cd5188);
  fVar76 = (float)CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,bVar49))) * fVar76;
  fVar77 = (float)CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar54,bVar53))) *
           (float)((ulong)auVar43._0_8_ >> 0x20);
  fVar73 = (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))) * auVar43._8_4_;
  fVar75 = (float)CONCAT13(bVar72,CONCAT12(bVar70,CONCAT11(bVar68,bVar66))) * auVar45._12_4_;
  auVar2._4_4_ = fVar77;
  auVar2._0_4_ = fVar76;
  auVar2._8_4_ = fVar73;
  auVar2._12_4_ = fVar75;
  auVar3._4_4_ = fVar77;
  auVar3._0_4_ = fVar76;
  auVar3._8_4_ = fVar73;
  auVar3._12_4_ = fVar75;
  auVar46 = NEON_ext(auVar2,auVar3,8,1);
  fVar77 = auVar46._0_4_ + fVar76 + auVar46._4_4_ + fVar77;
  *(undefined8 *)(param_2 + 0x88) = param_3[1];
  *(undefined8 *)(param_2 + 0x80) = *param_3;
  fVar76 = fVar77;
  if (1.0 < fVar77) {
    fVar76 = 1.0;
  }
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(*param_4 + 8);
  fVar73 = -1.0;
  if (-1.0 <= fVar77) {
    fVar73 = fVar76;
  }
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)*param_4;
  fVar76 = acosf(fVar73);
  fVar77 = *(float *)PTR_FloatDegree180_027194f0;
  fVar73 = *(float *)PTR_FloatPi_02715160;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  iVar42 = (int)(16.0 / *(float *)(param_2 + 0xe4));
  if (iVar42 < 2) {
    iVar42 = 1;
  }
  *(float *)(param_2 + 0xd8) = fVar76 * (fVar77 / fVar73);
  *(int *)(param_2 + 0xb0) = iVar42;
  *(float *)(param_2 + 0xa4) = 1.0 / (float)iVar42;
  puVar39 = PTR_DAT_0271e878;
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)PTR_DAT_0271e878;
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(puVar39 + 8);
  lVar1 = *(long *)(puVar39 + 0x18);
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(puVar39 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar40 = *(long *)(param_2 + 0xd0);
  *(long *)(param_2 + 0xd0) = lVar1;
  if (lVar40 != 0) {
    (**(code **)(*(long *)(lVar40 + 0x48) + 0x18))();
  }
  if ((float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar74 >> 0x20) -
      (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar41 >> 0x20) <= 0.0) {
    uVar41 = 2;
  }
  else {
    uVar41 = 1;
    *(float *)(param_2 + 0xd8) = -*(float *)(param_2 + 0xd8);
  }
  return uVar41;
}


