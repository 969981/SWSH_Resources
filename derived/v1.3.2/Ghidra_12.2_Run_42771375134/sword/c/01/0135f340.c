/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0135f340; name: FUN_0135f340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0135f340(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 (*pauVar22) [16];
  float *pfVar23;
  float *pfVar24;
  float fVar25;
  byte bVar26;
  float fVar27;
  byte bVar42;
  byte bVar43;
  byte bVar45;
  byte bVar48;
  byte bVar49;
  undefined8 uVar28;
  undefined1 auVar30 [12];
  undefined1 auVar32 [12];
  byte bVar51;
  byte bVar53;
  byte bVar54;
  float fVar52;
  byte bVar56;
  byte bVar59;
  byte bVar60;
  float fVar57;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar29;
  undefined1 auVar31 [12];
  byte bVar44;
  byte bVar50;
  byte bVar55;
  byte bVar61;
  undefined1 auVar35 [16];
  float fVar46;
  float fVar58;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar47;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar62;
  undefined1 auVar63 [12];
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar68;
  int iVar69;
  int iVar70;
  undefined1 auVar66 [16];
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar74;
  float fVar81;
  float fVar83;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar73;
  float fVar82;
  float fVar84;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 uVar85;
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
  undefined1 uVar96;
  float fVar97;
  undefined8 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar102;
  undefined8 uVar103;
  float fVar104;
  float fVar105;
  undefined8 uVar106;
  float fVar108;
  float fVar109;
  undefined1 auVar107 [16];
  float fVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined1 auVar118 [16];
  undefined8 uVar119;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  long local_70;
  undefined8 uStack_68;
  undefined1 auStack_28 [8];
  
  FUN_01346e80();
  FUN_012e5540(&local_70);
  if (local_70 == 0) {
    return;
  }
  lVar21 = FUN_012d5170(local_70,auStack_28);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar21 == 0) {
    return;
  }
  pauVar22 = (undefined1 (*) [16])FUN_012dc8d0(lVar21);
  uVar20 = DAT_01cd5418;
  uVar106 = DAT_01cd5270;
  uVar103 = DAT_01cd5120;
  uVar19 = DAT_01cd50f8;
  uVar18 = DAT_01cd50b0;
  uVar102 = DAT_01cd4f90;
  auVar2 = *pauVar22;
  uVar85 = (undefined1)_UNK_01d49dc8;
  uVar86 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
  uVar87 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
  uVar88 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
  uVar89 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
  uVar90 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
  uVar91 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
  uVar92 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
  fVar97 = (float)_DAT_01d4ae80;
  fVar83 = auVar2._0_4_;
  fVar71 = fVar83 * fVar97;
  fVar47 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar46 = auVar2._4_4_;
  fVar81 = fVar46 * fVar47;
  auVar75._0_8_ = CONCAT44(fVar81,fVar71);
  fVar52 = (float)_UNK_01d4ae88;
  auVar75._8_4_ = auVar2._8_4_ * fVar52;
  fVar57 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  auVar75._12_4_ = auVar2._12_4_ * fVar57;
  auVar77[8] = uVar85;
  auVar77._0_8_ = _DAT_01d49dc0;
  auVar77[9] = uVar86;
  auVar77[10] = uVar87;
  auVar77[0xb] = uVar88;
  auVar77[0xc] = uVar89;
  auVar77[0xd] = uVar90;
  auVar77[0xe] = uVar91;
  auVar77[0xf] = uVar92;
  uVar28 = a64_TBL(ZEXT816(0),auVar77,DAT_01cd4f90);
  uVar111 = a64_TBL(ZEXT816(0),auVar75,DAT_01cd4f90);
  auVar79[8] = uVar85;
  auVar79._0_8_ = _DAT_01d49dc0;
  auVar79[9] = uVar86;
  auVar79[10] = uVar87;
  auVar79[0xb] = uVar88;
  auVar79[0xc] = uVar89;
  auVar79[0xd] = uVar90;
  auVar79[0xe] = uVar91;
  auVar79[0xf] = uVar92;
  uVar98 = a64_TBL(ZEXT816(0),auVar79,DAT_01cd50f8);
  auVar1[8] = uVar85;
  auVar1._0_8_ = _DAT_01d49dc0;
  auVar1[9] = uVar86;
  auVar1[10] = uVar87;
  auVar1[0xb] = uVar88;
  auVar1[0xc] = uVar89;
  auVar1[0xd] = uVar90;
  auVar1[0xe] = uVar91;
  auVar1[0xf] = uVar92;
  uVar29 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5418);
  uVar116 = a64_TBL(ZEXT816(0),auVar75,DAT_01cd5120);
  uVar117 = a64_TBL(ZEXT816(0),auVar75,DAT_01cd5418);
  uVar119 = a64_TBL(ZEXT816(0),auVar75,DAT_01cd5270);
  uVar74 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
  fVar84 = (float)((ulong)uVar28 >> 0x20);
  fVar82 = (float)((ulong)uVar98 >> 0x20);
  uVar112 = a64_TBL(ZEXT816(0),auVar75,DAT_01cd50f8);
  auVar76._8_8_ = auVar75._0_8_;
  auVar76._0_8_ = auVar75._0_8_;
  uVar72 = a64_TBL(ZEXT816(0),auVar76,DAT_01cd50b0);
  fVar58 = (float)((ulong)uVar29 >> 0x20);
  fVar110 = (float)_DAT_01d4ae90;
  fVar113 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar114 = (float)_UNK_01d4ae98;
  fVar115 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  uVar73 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  fVar71 = (fVar71 * (float)uVar28 + fVar110 * (float)uVar111 * 0.0 +
           fVar110 * (float)uVar29 * (float)uVar112) - (float)uVar98 * (float)uVar117;
  fVar81 = (fVar81 * fVar84 + fVar113 * (float)((ulong)uVar111 >> 0x20) * 0.0 +
           fVar113 * fVar58 * (float)((ulong)uVar112 >> 0x20)) -
           fVar82 * (float)((ulong)uVar117 >> 0x20);
  auVar33._0_8_ = CONCAT44(fVar81,fVar71);
  auVar33._8_4_ =
       (auVar75._8_4_ * (float)uVar28 + fVar114 * (float)uVar98 * (float)uVar116 +
       fVar114 * (float)uVar72 * 0.0) - (float)uVar29 * (float)uVar119;
  auVar33._12_4_ =
       (auVar75._12_4_ * fVar84 + fVar115 * fVar82 * (float)((ulong)uVar116 >> 0x20) +
       fVar115 * (float)((ulong)uVar72 >> 0x20) * 0.0) - fVar58 * (float)((ulong)uVar119 >> 0x20);
  uVar98 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd4f90);
  uVar112 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5120);
  uVar116 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5270);
  fVar84 = (float)((ulong)uVar73 >> 0x20);
  fVar58 = (float)((ulong)uVar74 >> 0x20);
  uVar111 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5418);
  uVar28 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd50f8);
  uVar72 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5418);
  auVar34._8_8_ = auVar33._0_8_;
  auVar34._0_8_ = auVar33._0_8_;
  uVar29 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50b0);
  fVar67 = (float)((ulong)uVar111 >> 0x20);
  fVar71 = ((float)uVar73 * fVar71 + fVar110 * fVar83 * (float)uVar98 +
           fVar110 * (float)uVar111 * (float)uVar28) - (float)uVar74 * (float)uVar72;
  fVar82 = (fVar84 * fVar81 + fVar113 * fVar46 * (float)((ulong)uVar98 >> 0x20) +
           fVar113 * fVar67 * (float)((ulong)uVar28 >> 0x20)) -
           fVar58 * (float)((ulong)uVar72 >> 0x20);
  fVar83 = ((float)uVar73 * auVar33._8_4_ + fVar114 * (float)uVar74 * (float)uVar112 +
           fVar114 * fVar83 * (float)uVar29) - (float)uVar111 * (float)uVar116;
  fVar84 = (fVar84 * auVar33._12_4_ + fVar115 * fVar58 * (float)((ulong)uVar112 >> 0x20) +
           fVar115 * fVar46 * (float)((ulong)uVar29 >> 0x20)) -
           fVar67 * (float)((ulong)uVar116 >> 0x20);
  bVar26 = (byte)DAT_01d4ab50;
  bVar42 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar43 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar44 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  fVar81 = (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & bVar44,
                           CONCAT12((byte)((uint)fVar71 >> 0x10) & bVar43,
                                    CONCAT11((byte)((uint)fVar71 >> 8) & bVar42,
                                             SUB41(fVar71,0) & bVar26)));
  bVar45 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar48 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar49 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar50 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  auVar30._0_8_ =
       CONCAT17((byte)((uint)fVar82 >> 0x18) & bVar50,
                CONCAT16((byte)((uint)fVar82 >> 0x10) & bVar49,
                         CONCAT15((byte)((uint)fVar82 >> 8) & bVar48,
                                  CONCAT14(SUB41(fVar82,0) & bVar45,fVar81))));
  bVar51 = (byte)DAT_01d4ab58;
  auVar30[8] = SUB41(fVar83,0) & bVar51;
  bVar53 = (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar30[9] = (byte)((uint)fVar83 >> 8) & bVar53;
  bVar54 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar30[10] = (byte)((uint)fVar83 >> 0x10) & bVar54;
  bVar55 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar30[0xb] = (byte)((uint)fVar83 >> 0x18) & bVar55;
  bVar56 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar35[0xc] = SUB41(fVar84,0) & bVar56;
  auVar35._0_12_ = auVar30;
  bVar59 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar35[0xd] = (byte)((uint)fVar84 >> 8) & bVar59;
  bVar60 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar61 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  auVar35[0xe] = (byte)((uint)fVar84 >> 0x10) & bVar60;
  auVar35[0xf] = (byte)((uint)fVar84 >> 0x18) & bVar61;
  fStack_78 = auVar30._8_4_;
  fStack_74 = auVar35._12_4_;
  fStack_7c = (float)((ulong)auVar30._0_8_ >> 0x20);
  pfVar23 = (float *)FUN_01312400(param_1);
  pfVar24 = (float *)FUN_012dcaa0(lVar21);
  fVar83 = *pfVar23 - *pfVar24;
  fVar46 = pfVar23[1] - pfVar24[1];
  fVar82 = pfVar23[2] - pfVar24[2];
  fVar58 = pfVar23[3] - pfVar24[3];
  auVar64._0_4_ = fVar83 * fVar83;
  auVar64._4_4_ = fVar46 * fVar46;
  auVar64._8_4_ = fVar82 * fVar82;
  auVar64._12_4_ = fVar58 * fVar58;
  auVar77 = NEON_ext(auVar64,auVar64,8,1);
  fVar84 = auVar77._0_4_ + auVar64._0_4_;
  fVar67 = auVar77._4_4_ + auVar64._4_4_;
  fVar71 = fVar84 + fVar67;
  fVar84 = fVar84 + fVar67;
  uVar85 = SUB41(fVar84,0);
  uVar86 = (undefined1)((uint)fVar84 >> 8);
  uVar87 = (undefined1)((uint)fVar84 >> 0x10);
  uVar88 = (undefined1)((uint)fVar84 >> 0x18);
  auVar2[4] = uVar85;
  auVar2._0_4_ = fVar71;
  auVar2[5] = uVar86;
  auVar2[6] = uVar87;
  auVar2[7] = uVar88;
  auVar2[8] = SUB41(fVar71,0);
  auVar2[9] = (char)((uint)fVar71 >> 8);
  auVar2[10] = (char)((uint)fVar71 >> 0x10);
  auVar2[0xb] = (char)((uint)fVar71 >> 0x18);
  auVar2[0xc] = uVar85;
  auVar2[0xd] = uVar86;
  auVar2[0xe] = uVar87;
  auVar2[0xf] = uVar88;
  auVar77 = NEON_frsqrte(auVar2,4);
  auVar78._0_4_ = auVar77._0_4_ * fVar71;
  auVar78._4_4_ = auVar77._4_4_ * fVar84;
  auVar78._8_4_ = auVar77._8_4_ * fVar71;
  uVar7 = (undefined2)(CONCAT15(uVar86,CONCAT14(uVar85,fVar71)) >> 0x20);
  auVar78._12_4_ = auVar77._12_4_ * (float)CONCAT13(uVar88,CONCAT12(uVar87,uVar7));
  auVar79 = NEON_frsqrts(auVar77,auVar78,4);
  auVar65._0_4_ = auVar77._0_4_ * auVar79._0_4_;
  auVar65._4_4_ = auVar77._4_4_ * auVar79._4_4_;
  auVar65._8_4_ = auVar77._8_4_ * auVar79._8_4_;
  auVar65._12_4_ = auVar77._12_4_ * auVar79._12_4_;
  auVar80._0_4_ = fVar71 * auVar65._0_4_;
  auVar80._4_4_ = fVar84 * auVar65._4_4_;
  auVar80._8_4_ = fVar71 * auVar65._8_4_;
  auVar80._12_4_ = (float)CONCAT13(uVar88,CONCAT12(uVar87,uVar7)) * auVar65._12_4_;
  auVar77 = NEON_frsqrts(auVar65,auVar80,4);
  fVar83 = fVar83 * auVar65._0_4_ * auVar77._0_4_;
  fVar46 = fVar46 * auVar65._4_4_ * auVar77._4_4_;
  fVar82 = fVar82 * auVar65._8_4_ * auVar77._8_4_;
  fVar58 = fVar58 * auVar65._12_4_ * auVar77._12_4_;
  iVar62 = -(uint)(fVar71 == 0.0);
  iVar68 = -(uint)(fVar84 == 0.0);
  iVar69 = -(uint)(fVar71 == 0.0);
  iVar70 = -(uint)((float)CONCAT13(uVar88,CONCAT12(uVar87,uVar7)) == 0.0);
  fVar84 = (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                           CONCAT12((byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                    CONCAT11((byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar62 >> 8),
                                             SUB41(fVar83,0) & ~(byte)iVar62)));
  auVar31._0_8_ =
       CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                         CONCAT15((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                  CONCAT14(SUB41(fVar46,0) & ~(byte)iVar68,fVar84))));
  auVar31[8] = SUB41(fVar82,0) & ~(byte)iVar69;
  auVar31[9] = (byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar69 >> 8);
  auVar31[10] = (byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
  auVar31[0xb] = (byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
  auVar36[0xc] = SUB41(fVar58,0) & ~(byte)iVar70;
  auVar36._0_12_ = auVar31;
  auVar36[0xd] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar70 >> 8);
  auVar36[0xe] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
  auVar36[0xf] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
  uVar29 = auVar36._8_8_;
  auVar37._0_4_ = fVar84 * fVar81;
  fVar46 = (float)((ulong)auVar31._0_8_ >> 0x20);
  auVar37._4_4_ = fVar46 * fStack_7c;
  auVar37._8_4_ = auVar31._8_4_ * fStack_78;
  auVar37._12_4_ = auVar36._12_4_ * fStack_74;
  auVar77 = NEON_ext(auVar37,auVar37,8,1);
  fVar83 = acosf(auVar77._0_4_ + auVar37._0_4_ + auVar77._4_4_ + auVar37._4_4_);
  if (fVar83 <= DAT_01d4bffc) {
    return;
  }
  auVar17._4_4_ = fStack_7c;
  auVar17._0_4_ = fVar81;
  auVar17._8_4_ = fStack_78;
  auVar17._12_4_ = fStack_74;
  auVar16._8_8_ = uVar29;
  auVar16._0_8_ = auVar31._0_8_;
  auVar15._8_8_ = uVar29;
  auVar15._0_8_ = auVar31._0_8_;
  auVar14._8_8_ = uVar29;
  auVar14._0_8_ = auVar31._0_8_;
  auVar13._8_8_ = uVar29;
  auVar13._0_8_ = auVar31._0_8_;
  auVar12._8_8_ = uVar29;
  auVar12._0_8_ = auVar31._0_8_;
  uVar72 = a64_TBL(ZEXT816(0),auVar17,uVar20);
  uVar29 = a64_TBL(ZEXT816(0),auVar12,uVar19);
  uVar98 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5158);
  uVar28 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5158);
  uVar73 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5188);
  uVar74 = a64_TBL(ZEXT816(0),auVar14,uVar20);
  uVar111 = a64_TBL(ZEXT816(0),auVar17,uVar19);
  fVar104 = (float)uVar29;
  fVar108 = (float)((ulong)uVar29 >> 0x20);
  uVar29 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5188);
  fVar105 = (float)uVar74;
  fVar109 = (float)((ulong)uVar74 >> 0x20);
  fVar81 = (float)uVar72 * fVar104 - (float)uVar111 * fVar105;
  fVar82 = (float)((ulong)uVar72 >> 0x20) * fVar108 - (float)((ulong)uVar111 >> 0x20) * fVar109;
  fVar58 = (float)uVar73 * (float)uVar98 - (float)uVar28 * (float)uVar29;
  fVar67 = (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar98 >> 0x20) -
           (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
  auVar107._0_4_ = fVar81 * fVar81;
  auVar107._4_4_ = fVar82 * fVar82;
  auVar107._8_4_ = fVar58 * fVar58;
  auVar107._12_4_ = fVar67 * fVar67;
  fVar83 = (fVar83 + DAT_01d4c448) * -0.5;
  auVar77 = NEON_ext(auVar107,auVar107,8,1);
  fVar27 = auVar77._0_4_ + auVar107._0_4_;
  fVar67 = auVar77._4_4_ + auVar107._4_4_;
  fVar25 = fVar27 + fVar67;
  fVar27 = fVar27 + fVar67;
  auVar38._8_8_ = CONCAT44(fVar27,fVar25);
  auVar38._0_8_ = CONCAT44(fVar27,fVar25);
  auVar77 = NEON_frsqrte(auVar38,4);
  fVar67 = 0.5;
  if (fVar83 < 0.0) {
    fVar67 = -0.5;
  }
  auVar118._0_4_ = auVar77._0_4_ * fVar25;
  auVar118._4_4_ = auVar77._4_4_ * fVar27;
  auVar118._8_4_ = auVar77._8_4_ * fVar25;
  auVar118._12_4_ = auVar77._12_4_ * fVar27;
  auVar79 = NEON_frsqrts(auVar77,auVar118,4);
  fVar8 = auVar77._0_4_ * auVar79._0_4_;
  fVar9 = auVar77._4_4_ * auVar79._4_4_;
  fVar10 = auVar77._8_4_ * auVar79._8_4_;
  fVar11 = auVar77._12_4_ * auVar79._12_4_;
  auVar99._0_4_ = fVar25 * fVar8;
  auVar99._4_4_ = fVar27 * fVar9;
  auVar99._8_4_ = fVar25 * fVar10;
  auVar99._12_4_ = fVar27 * fVar11;
  iVar62 = -(uint)(fVar25 == 0.0);
  iVar68 = -(uint)(fVar27 == 0.0);
  iVar69 = -(uint)(fVar25 == 0.0);
  auVar3[4] = SUB41(fVar9,0);
  auVar3._0_4_ = fVar8;
  auVar3[5] = (char)((uint)fVar9 >> 8);
  auVar3[6] = (char)((uint)fVar9 >> 0x10);
  auVar3[7] = (char)((uint)fVar9 >> 0x18);
  auVar3[8] = SUB41(fVar10,0);
  auVar3[9] = (char)((uint)fVar10 >> 8);
  auVar3[10] = (char)((uint)fVar10 >> 0x10);
  auVar3[0xb] = (char)((uint)fVar10 >> 0x18);
  auVar3[0xc] = SUB41(fVar11,0);
  auVar3[0xd] = (char)((uint)fVar11 >> 8);
  auVar3[0xe] = (char)((uint)fVar11 >> 0x10);
  auVar3[0xf] = (char)((uint)fVar11 >> 0x18);
  auVar77 = NEON_frsqrts(auVar3,auVar99,4);
  fVar81 = fVar81 * fVar8 * auVar77._0_4_;
  fVar82 = fVar82 * fVar9 * auVar77._4_4_;
  fVar58 = fVar58 * fVar10 * auVar77._8_4_;
  fVar81 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                           CONCAT12((byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                    CONCAT11((byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar62 >> 8),
                                             SUB41(fVar81,0) & ~(byte)iVar62)));
  auVar32._0_8_ =
       CONCAT17((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                CONCAT16((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                         CONCAT15((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                  CONCAT14(SUB41(fVar82,0) & ~(byte)iVar68,fVar81))));
  auVar32[8] = SUB41(fVar58,0) & ~(byte)iVar69;
  auVar32[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar69 >> 8);
  auVar32[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
  auVar32[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
  fVar83 = fVar83 - *(float *)PTR_Float2Pi_02715150 *
                    (float)(int)(fVar67 + fVar83 * *(float *)PTR_Float1Divided2Pi_02715148);
  uVar85 = SUB41(fVar83,0);
  uVar86 = (undefined1)((uint)fVar83 >> 8);
  uVar87 = (undefined1)((uint)fVar83 >> 0x10);
  uVar88 = (undefined1)((uint)fVar83 >> 0x18);
  if (fVar83 <= *(float *)PTR_FloatPiDivided2_02715158) {
    if (-*(float *)PTR_FloatPiDivided2_02715158 <= fVar83) {
      fVar83 = 1.0;
      goto LAB_0135f69c;
    }
    fVar82 = -*(float *)PTR_FloatPi_02715160;
  }
  else {
    fVar82 = *(float *)PTR_FloatPi_02715160;
  }
  fVar82 = fVar82 - fVar83;
  uVar85 = SUB41(fVar82,0);
  uVar86 = (undefined1)((uint)fVar82 >> 8);
  uVar87 = (undefined1)((uint)fVar82 >> 0x10);
  uVar88 = (undefined1)((uint)fVar82 >> 0x18);
  fVar83 = -1.0;
LAB_0135f69c:
  fVar67 = (float)CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) *
           (float)CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85)));
  fVar82 = (float)CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) *
           (fVar67 * (fVar67 * (*(float *)(PTR_SinCoefficients_02715168 + 0xc) +
                               fVar67 * (fVar67 * (*(float *)(PTR_SinCoefficients_02715168 + 4) -
                                                  *(float *)PTR_SinCoefficients_02715168 * fVar67) -
                                        *(float *)(PTR_SinCoefficients_02715168 + 8))) -
                     *(float *)(PTR_SinCoefficients_02715168 + 0x10)) + 1.0);
  fVar81 = fVar81 * fVar82;
  fVar58 = (float)((ulong)auVar32._0_8_ >> 0x20) * fVar82;
  uVar85 = SUB41(fVar58,0);
  uVar86 = (undefined1)((uint)fVar58 >> 8);
  uVar87 = (undefined1)((uint)fVar58 >> 0x10);
  uVar88 = (undefined1)((uint)fVar58 >> 0x18);
  fVar82 = auVar32._8_4_ * fVar82;
  uVar89 = SUB41(fVar82,0);
  uVar90 = (undefined1)((uint)fVar82 >> 8);
  uVar91 = (undefined1)((uint)fVar82 >> 0x10);
  uVar92 = (undefined1)((uint)fVar82 >> 0x18);
  fVar83 = fVar83 * (fVar67 * (fVar67 * (*(float *)(PTR_CosCoefficients_02715170 + 0xc) +
                                        fVar67 * (fVar67 * (*(float *)(PTR_CosCoefficients_02715170
                                                                      + 4) -
                                                           fVar67 * *(float *)
                                                  PTR_CosCoefficients_02715170) -
                                                 *(float *)(PTR_CosCoefficients_02715170 + 8))) -
                              *(float *)(PTR_CosCoefficients_02715170 + 0x10)) + 1.0);
  uVar93 = SUB41(fVar83,0);
  uVar94 = (undefined1)((uint)fVar83 >> 8);
  uVar95 = (undefined1)((uint)fVar83 >> 0x10);
  uVar96 = (undefined1)((uint)fVar83 >> 0x18);
  fVar97 = fVar81 * fVar97;
  fVar58 = fVar58 * fVar47;
  auVar100._0_8_ = CONCAT44(fVar58,fVar97);
  auVar100._8_4_ = fVar82 * fVar52;
  auVar100._12_4_ = fVar83 * fVar57;
  uVar29 = a64_TBL(ZEXT816(0),auVar16,uVar102);
  uVar72 = a64_TBL(ZEXT816(0),auVar100,uVar102);
  uVar98 = a64_TBL(ZEXT816(0),auVar100,uVar103);
  fVar83 = (float)((ulong)uVar29 >> 0x20);
  uVar112 = a64_TBL(ZEXT816(0),auVar100,uVar106);
  uVar111 = a64_TBL(ZEXT816(0),auVar100,uVar20);
  uVar73 = a64_TBL(ZEXT816(0),auVar100,uVar19);
  auVar101._8_8_ = auVar100._0_8_;
  auVar101._0_8_ = auVar100._0_8_;
  uVar74 = a64_TBL(ZEXT816(0),auVar101,uVar18);
  auVar4[4] = uVar85;
  auVar4._0_4_ = fVar81;
  auVar4[5] = uVar86;
  auVar4[6] = uVar87;
  auVar4[7] = uVar88;
  auVar4[8] = uVar89;
  auVar4[9] = uVar90;
  auVar4[10] = uVar91;
  auVar4[0xb] = uVar92;
  auVar4[0xc] = uVar93;
  auVar4[0xd] = uVar94;
  auVar4[0xe] = uVar95;
  auVar4[0xf] = uVar96;
  uVar28 = a64_TBL(ZEXT816(0),auVar4,uVar102);
  fVar97 = ((float)uVar29 * fVar97 + fVar110 * fVar84 * (float)uVar72 +
           fVar110 * fVar105 * (float)uVar73) - fVar104 * (float)uVar111;
  fVar47 = (fVar83 * fVar58 + fVar113 * fVar46 * (float)((ulong)uVar72 >> 0x20) +
           fVar113 * fVar109 * (float)((ulong)uVar73 >> 0x20)) -
           fVar108 * (float)((ulong)uVar111 >> 0x20);
  auVar39._0_8_ = CONCAT44(fVar47,fVar97);
  auVar39._8_4_ =
       ((float)uVar29 * auVar100._8_4_ + fVar114 * fVar104 * (float)uVar98 +
       fVar114 * fVar84 * (float)uVar74) - fVar105 * (float)uVar112;
  auVar39._12_4_ =
       (fVar83 * auVar100._12_4_ + fVar115 * fVar108 * (float)((ulong)uVar98 >> 0x20) +
       fVar115 * fVar46 * (float)((ulong)uVar74 >> 0x20)) -
       fVar109 * (float)((ulong)uVar112 >> 0x20);
  fVar46 = (float)((ulong)uVar28 >> 0x20);
  auVar5[4] = uVar85;
  auVar5._0_4_ = fVar81;
  auVar5[5] = uVar86;
  auVar5[6] = uVar87;
  auVar5[7] = uVar88;
  auVar5[8] = uVar89;
  auVar5[9] = uVar90;
  auVar5[10] = uVar91;
  auVar5[0xb] = uVar92;
  auVar5[0xc] = uVar93;
  auVar5[0xd] = uVar94;
  auVar5[0xe] = uVar95;
  auVar5[0xf] = uVar96;
  uVar72 = a64_TBL(ZEXT816(0),auVar5,uVar19);
  uVar102 = a64_TBL(ZEXT816(0),auVar39,uVar102);
  uVar73 = a64_TBL(ZEXT816(0),auVar39,uVar103);
  uVar98 = a64_TBL(ZEXT816(0),auVar39,uVar106);
  uVar106 = a64_TBL(ZEXT816(0),auVar39,uVar20);
  fVar52 = (float)((ulong)uVar72 >> 0x20);
  auVar6[4] = uVar85;
  auVar6._0_4_ = fVar81;
  auVar6[5] = uVar86;
  auVar6[6] = uVar87;
  auVar6[7] = uVar88;
  auVar6[8] = uVar89;
  auVar6[9] = uVar90;
  auVar6[10] = uVar91;
  auVar6[0xb] = uVar92;
  auVar6[0xc] = uVar93;
  auVar6[0xd] = uVar94;
  auVar6[0xe] = uVar95;
  auVar6[0xf] = uVar96;
  uVar103 = a64_TBL(ZEXT816(0),auVar6,uVar20);
  uVar29 = a64_TBL(ZEXT816(0),auVar39,uVar19);
  auVar40._8_8_ = auVar39._0_8_;
  auVar40._0_8_ = auVar39._0_8_;
  uVar74 = a64_TBL(ZEXT816(0),auVar40,uVar18);
  fVar82 = (float)((ulong)uVar103 >> 0x20);
  fVar84 = ((float)uVar28 * fVar97 + fVar110 * fVar81 * (float)uVar102 +
           fVar110 * (float)uVar103 * (float)uVar29) - (float)uVar72 * (float)uVar106;
  fVar97 = (fVar46 * fVar47 +
            fVar113 * (float)(CONCAT17(uVar88,CONCAT16(uVar87,CONCAT15(uVar86,CONCAT14(uVar85,fVar81
                                                                                      )))) >> 0x20)
                      * (float)((ulong)uVar102 >> 0x20) +
           fVar113 * fVar82 * (float)((ulong)uVar29 >> 0x20)) -
           fVar52 * (float)((ulong)uVar106 >> 0x20);
  fVar83 = ((float)uVar28 * auVar39._8_4_ + fVar114 * (float)uVar72 * (float)uVar73 +
           fVar114 * fVar81 * (float)uVar74) - (float)uVar103 * (float)uVar98;
  fVar81 = (fVar46 * auVar39._12_4_ + fVar115 * fVar52 * (float)((ulong)uVar73 >> 0x20) +
           fVar115 * (float)(CONCAT17(uVar88,CONCAT16(uVar87,CONCAT15(uVar86,CONCAT14(uVar85,fVar81)
                                                                     ))) >> 0x20) *
                     (float)((ulong)uVar74 >> 0x20)) - fVar82 * (float)((ulong)uVar98 >> 0x20);
  fVar71 = SQRT(fVar71);
  fVar84 = (float)CONCAT13((byte)((uint)fVar84 >> 0x18) & bVar44,
                           CONCAT12((byte)((uint)fVar84 >> 0x10) & bVar43,
                                    CONCAT11((byte)((uint)fVar84 >> 8) & bVar42,
                                             SUB41(fVar84,0) & bVar26)));
  auVar63._0_8_ =
       CONCAT17((byte)((uint)fVar97 >> 0x18) & bVar50,
                CONCAT16((byte)((uint)fVar97 >> 0x10) & bVar49,
                         CONCAT15((byte)((uint)fVar97 >> 8) & bVar48,
                                  CONCAT14(SUB41(fVar97,0) & bVar45,fVar84))));
  auVar63[8] = SUB41(fVar83,0) & bVar51;
  auVar63[9] = (byte)((uint)fVar83 >> 8) & bVar53;
  auVar63[10] = (byte)((uint)fVar83 >> 0x10) & bVar54;
  auVar63[0xb] = (byte)((uint)fVar83 >> 0x18) & bVar55;
  auVar66[0xc] = SUB41(fVar81,0) & bVar56;
  auVar66._0_12_ = auVar63;
  auVar66[0xd] = (byte)((uint)fVar81 >> 8) & bVar59;
  auVar66[0xe] = (byte)((uint)fVar81 >> 0x10) & bVar60;
  auVar66[0xf] = (byte)((uint)fVar81 >> 0x18) & bVar61;
  pfVar23 = (float *)FUN_012dcaa0(lVar21);
  auVar41._0_8_ =
       CONCAT44(pfVar23[1] + (float)((ulong)auVar63._0_8_ >> 0x20) * fVar71,
                *pfVar23 + fVar84 * fVar71);
  auVar41._8_4_ = pfVar23[2] + auVar63._8_4_ * fVar71;
  auVar41._12_4_ = pfVar23[3] + auVar66._12_4_ * fVar71;
  uStack_68 = auVar41._8_8_;
  local_70 = auVar41._0_8_;
  FUN_013126b0(param_1,&local_70);
  return;
}


