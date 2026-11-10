/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd5fd0; name: FUN_00dd5fd0
 */


undefined8
FUN_00dd5fd0(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5,
            float *param_6)

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
  undefined2 uVar24;
  int iVar25;
  undefined8 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  bool bVar44;
  bool bVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar95 [12];
  float fVar100;
  float fVar101;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar102;
  float fVar103;
  float fVar105;
  float fVar106;
  undefined1 auVar104 [16];
  float fVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined1 auVar110 [16];
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  
  fVar91 = *param_3;
  fVar93 = param_3[1];
  fVar80 = param_3[2];
  fVar81 = param_3[3];
  fVar94 = *param_4;
  fVar100 = param_4[1];
  fVar103 = param_4[2];
  fVar105 = param_4[3];
  fVar76 = (float)param_5[1];
  fVar77 = (float)((ulong)param_5[1] >> 0x20);
  fVar74 = (float)*param_5;
  fVar75 = (float)((ulong)*param_5 >> 0x20);
  if (((ABS(fVar80 - fVar103) <= DAT_01d4c708) && (ABS(fVar91 - fVar94) <= DAT_01d4c708)) &&
     (ABS(fVar93 - fVar100) <= DAT_01d4c708)) {
    return 0;
  }
  if (((ABS(fVar103 - fVar76) <= DAT_01d4c708) && (ABS(fVar94 - fVar74) <= DAT_01d4c708)) &&
     (ABS(fVar100 - fVar75) <= DAT_01d4c708)) {
    return 0;
  }
  fVar49 = fVar74 - fVar91;
  fVar48 = fVar75 - fVar93;
  uVar54 = SUB41(fVar48,0);
  uVar55 = (undefined1)((uint)fVar48 >> 8);
  uVar56 = (undefined1)((uint)fVar48 >> 0x10);
  uVar57 = (undefined1)((uint)fVar48 >> 0x18);
  fVar47 = fVar76 - fVar80;
  uVar58 = SUB41(fVar47,0);
  uVar59 = (undefined1)((uint)fVar47 >> 8);
  uVar60 = (undefined1)((uint)fVar47 >> 0x10);
  uVar61 = (undefined1)((uint)fVar47 >> 0x18);
  fVar71 = fVar77 - fVar81;
  uVar62 = SUB41(fVar71,0);
  uVar63 = (undefined1)((uint)fVar71 >> 8);
  uVar64 = (undefined1)((uint)fVar71 >> 0x10);
  uVar65 = (undefined1)((uint)fVar71 >> 0x18);
  if (((ABS(fVar47) <= DAT_01d4c708) && (ABS(fVar49) <= DAT_01d4c708)) &&
     (ABS(fVar48) <= DAT_01d4c708)) {
    return 0;
  }
  fVar50 = fVar94 - fVar91;
  fVar51 = fVar100 - fVar93;
  fVar52 = fVar103 - fVar80;
  fVar53 = fVar105 - fVar81;
  auVar87._4_4_ = fVar51;
  auVar87._0_4_ = fVar50;
  auVar87._8_4_ = fVar52;
  auVar87._12_4_ = fVar53;
  uVar109 = a64_TBL(ZEXT816(0),auVar87,DAT_01cd5418);
  fVar90 = (float)((ulong)uVar109 >> 0x20);
  auVar97._4_4_ = fVar51;
  auVar97._0_4_ = fVar50;
  auVar97._8_4_ = fVar52;
  auVar97._12_4_ = fVar53;
  uVar67 = a64_TBL(ZEXT816(0),auVar97,DAT_01cd5188);
  auVar3._4_4_ = fVar51;
  auVar3._0_4_ = fVar50;
  auVar3._8_4_ = fVar52;
  auVar3._12_4_ = fVar53;
  uVar82 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
  fVar101 = (float)((ulong)uVar82 >> 0x20);
  auVar15[4] = uVar54;
  auVar15._0_4_ = fVar49;
  auVar15[5] = uVar55;
  auVar15[6] = uVar56;
  auVar15[7] = uVar57;
  auVar15[8] = uVar58;
  auVar15[9] = uVar59;
  auVar15[10] = uVar60;
  auVar15[0xb] = uVar61;
  auVar15[0xc] = uVar62;
  auVar15[0xd] = uVar63;
  auVar15[0xe] = uVar64;
  auVar15[0xf] = uVar65;
  uVar84 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5158);
  fVar92 = (float)((ulong)uVar67 >> 0x20);
  auVar16[4] = uVar54;
  auVar16._0_4_ = fVar49;
  auVar16[5] = uVar55;
  auVar16[6] = uVar56;
  auVar16[7] = uVar57;
  auVar16[8] = uVar58;
  auVar16[9] = uVar59;
  auVar16[10] = uVar60;
  auVar16[0xb] = uVar61;
  auVar16[0xc] = uVar62;
  auVar16[0xd] = uVar63;
  auVar16[0xe] = uVar64;
  auVar16[0xf] = uVar65;
  uVar68 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50f8);
  auVar4._4_4_ = fVar51;
  auVar4._0_4_ = fVar50;
  auVar4._8_4_ = fVar52;
  auVar4._12_4_ = fVar53;
  uVar85 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5158);
  fVar102 = (float)((ulong)uVar85 >> 0x20);
  auVar17[4] = uVar54;
  auVar17._0_4_ = fVar49;
  auVar17[5] = uVar55;
  auVar17[6] = uVar56;
  auVar17[7] = uVar57;
  auVar17[8] = uVar58;
  auVar17[9] = uVar59;
  auVar17[10] = uVar60;
  auVar17[0xb] = uVar61;
  auVar17[0xc] = uVar62;
  auVar17[0xd] = uVar63;
  auVar17[0xe] = uVar64;
  auVar17[0xf] = uVar65;
  uVar86 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5418);
  auVar18[4] = uVar54;
  auVar18._0_4_ = fVar49;
  auVar18[5] = uVar55;
  auVar18[6] = uVar56;
  auVar18[7] = uVar57;
  auVar18[8] = uVar58;
  auVar18[9] = uVar59;
  auVar18[10] = uVar60;
  auVar18[0xb] = uVar61;
  auVar18[0xc] = uVar62;
  auVar18[0xd] = uVar63;
  auVar18[0xe] = uVar64;
  auVar18[0xf] = uVar65;
  uVar26 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5188);
  fVar66 = (float)uVar109 * (float)uVar68 - (float)uVar82 * (float)uVar86;
  fVar69 = fVar90 * (float)((ulong)uVar68 >> 0x20) - fVar101 * (float)((ulong)uVar86 >> 0x20);
  fVar70 = (float)uVar67 * (float)uVar84 - (float)uVar85 * (float)uVar26;
  fVar72 = fVar92 * (float)((ulong)uVar84 >> 0x20) - fVar102 * (float)((ulong)uVar26 >> 0x20);
  fVar49 = fVar66 * fVar66;
  fVar48 = fVar69 * fVar69;
  uVar54 = (undefined1)((uint)fVar48 >> 8);
  uVar55 = (undefined1)((uint)fVar48 >> 0x10);
  uVar56 = (undefined1)((uint)fVar48 >> 0x18);
  fVar47 = fVar70 * fVar70;
  uVar57 = (undefined1)((uint)fVar47 >> 8);
  uVar58 = (undefined1)((uint)fVar47 >> 0x10);
  uVar59 = (undefined1)((uint)fVar47 >> 0x18);
  fVar71 = fVar72 * fVar72;
  uVar60 = (undefined1)((uint)fVar71 >> 8);
  uVar61 = (undefined1)((uint)fVar71 >> 0x10);
  uVar62 = (undefined1)((uint)fVar71 >> 0x18);
  auVar19[4] = SUB41(fVar48,0);
  auVar19._0_4_ = fVar49;
  auVar19[5] = uVar54;
  auVar19[6] = uVar55;
  auVar19[7] = uVar56;
  auVar19[8] = SUB41(fVar47,0);
  auVar19[9] = uVar57;
  auVar19[10] = uVar58;
  auVar19[0xb] = uVar59;
  auVar19[0xc] = SUB41(fVar71,0);
  auVar19[0xd] = uVar60;
  auVar19[0xe] = uVar61;
  auVar19[0xf] = uVar62;
  auVar20[4] = SUB41(fVar48,0);
  auVar20._0_4_ = fVar49;
  auVar20[5] = uVar54;
  auVar20[6] = uVar55;
  auVar20[7] = uVar56;
  auVar20[8] = SUB41(fVar47,0);
  auVar20[9] = uVar57;
  auVar20[10] = uVar58;
  auVar20[0xb] = uVar59;
  auVar20[0xc] = SUB41(fVar71,0);
  auVar20[0xd] = uVar60;
  auVar20[0xe] = uVar61;
  auVar20[0xf] = uVar62;
  auVar87 = NEON_ext(auVar19,auVar20,8,1);
  fVar49 = auVar87._0_4_ + fVar49;
  fVar48 = auVar87._4_4_ + fVar48;
  fVar47 = fVar49 + fVar48;
  fVar49 = fVar49 + fVar48;
  uVar54 = SUB41(fVar49,0);
  uVar55 = (undefined1)((uint)fVar49 >> 8);
  uVar56 = (undefined1)((uint)fVar49 >> 0x10);
  uVar57 = (undefined1)((uint)fVar49 >> 0x18);
  auVar21[4] = uVar54;
  auVar21._0_4_ = fVar47;
  auVar21[5] = uVar55;
  auVar21[6] = uVar56;
  auVar21[7] = uVar57;
  auVar21[8] = SUB41(fVar47,0);
  auVar21[9] = (char)((uint)fVar47 >> 8);
  auVar21[10] = (char)((uint)fVar47 >> 0x10);
  auVar21[0xb] = (char)((uint)fVar47 >> 0x18);
  auVar21[0xc] = uVar54;
  auVar21[0xd] = uVar55;
  auVar21[0xe] = uVar56;
  auVar21[0xf] = uVar57;
  auVar87 = NEON_frsqrte(auVar21,4);
  auVar96._0_4_ = auVar87._0_4_ * fVar47;
  auVar96._4_4_ = auVar87._4_4_ * fVar49;
  auVar96._8_4_ = auVar87._8_4_ * fVar47;
  uVar24 = (undefined2)(CONCAT15(uVar55,CONCAT14(uVar54,fVar47)) >> 0x20);
  auVar96._12_4_ = auVar87._12_4_ * (float)CONCAT13(uVar57,CONCAT12(uVar56,uVar24));
  auVar97 = NEON_frsqrts(auVar87,auVar96,4);
  auVar88._0_4_ = auVar87._0_4_ * auVar97._0_4_;
  auVar88._4_4_ = auVar87._4_4_ * auVar97._4_4_;
  auVar88._8_4_ = auVar87._8_4_ * auVar97._8_4_;
  auVar88._12_4_ = auVar87._12_4_ * auVar97._12_4_;
  auVar98._0_4_ = fVar47 * auVar88._0_4_;
  auVar98._4_4_ = fVar49 * auVar88._4_4_;
  auVar98._8_4_ = fVar47 * auVar88._8_4_;
  auVar98._12_4_ = (float)CONCAT13(uVar57,CONCAT12(uVar56,uVar24)) * auVar88._12_4_;
  iVar25 = -(uint)(fVar47 == 0.0);
  iVar27 = -(uint)(fVar49 == 0.0);
  iVar28 = -(uint)(fVar47 == 0.0);
  iVar29 = -(uint)((float)CONCAT13(uVar57,CONCAT12(uVar56,uVar24)) == 0.0);
  auVar87 = NEON_frsqrts(auVar88,auVar98,4);
  fVar66 = fVar66 * auVar88._0_4_ * auVar87._0_4_;
  fVar69 = fVar69 * auVar88._4_4_ * auVar87._4_4_;
  fVar70 = fVar70 * auVar88._8_4_ * auVar87._8_4_;
  fVar72 = fVar72 * auVar88._12_4_ * auVar87._12_4_;
  fVar66 = (float)CONCAT13((byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                           CONCAT12((byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                                    CONCAT11((byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                             SUB41(fVar66,0) & ~(byte)iVar25)));
  auVar95._0_8_ =
       CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                         CONCAT15((byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                  CONCAT14(SUB41(fVar69,0) & ~(byte)iVar27,fVar66))));
  auVar95[8] = SUB41(fVar70,0) & ~(byte)iVar28;
  auVar95[9] = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar28 >> 8);
  auVar95[10] = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
  auVar95[0xb] = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
  auVar99[0xc] = SUB41(fVar72,0) & ~(byte)iVar29;
  auVar99._0_12_ = auVar95;
  auVar99[0xd] = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar29 >> 8);
  auVar99[0xe] = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  auVar99[0xf] = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  fVar49 = fVar66 * fVar66;
  fVar69 = (float)((ulong)auVar95._0_8_ >> 0x20);
  fVar48 = fVar69 * fVar69;
  uVar54 = (undefined1)((uint)fVar48 >> 8);
  uVar55 = (undefined1)((uint)fVar48 >> 0x10);
  uVar56 = (undefined1)((uint)fVar48 >> 0x18);
  fVar70 = auVar95._8_4_;
  fVar47 = fVar70 * fVar70;
  uVar57 = (undefined1)((uint)fVar47 >> 8);
  uVar58 = (undefined1)((uint)fVar47 >> 0x10);
  uVar59 = (undefined1)((uint)fVar47 >> 0x18);
  fVar72 = auVar99._12_4_;
  fVar71 = fVar72 * fVar72;
  uVar60 = (undefined1)((uint)fVar71 >> 8);
  uVar61 = (undefined1)((uint)fVar71 >> 0x10);
  uVar62 = (undefined1)((uint)fVar71 >> 0x18);
  auVar22[4] = SUB41(fVar48,0);
  auVar22._0_4_ = fVar49;
  auVar22[5] = uVar54;
  auVar22[6] = uVar55;
  auVar22[7] = uVar56;
  auVar22[8] = SUB41(fVar47,0);
  auVar22[9] = uVar57;
  auVar22[10] = uVar58;
  auVar22[0xb] = uVar59;
  auVar22[0xc] = SUB41(fVar71,0);
  auVar22[0xd] = uVar60;
  auVar22[0xe] = uVar61;
  auVar22[0xf] = uVar62;
  auVar23[4] = SUB41(fVar48,0);
  auVar23._0_4_ = fVar49;
  auVar23[5] = uVar54;
  auVar23[6] = uVar55;
  auVar23[7] = uVar56;
  auVar23[8] = SUB41(fVar47,0);
  auVar23[9] = uVar57;
  auVar23[10] = uVar58;
  auVar23[0xb] = uVar59;
  auVar23[0xc] = SUB41(fVar71,0);
  auVar23[0xd] = uVar60;
  auVar23[0xe] = uVar61;
  auVar23[0xf] = uVar62;
  auVar87 = NEON_ext(auVar22,auVar23,8,1);
  fVar49 = SQRT(auVar87._0_4_ + fVar49 + auVar87._4_4_ + fVar48);
  if (fVar49 <= DAT_01d4c708) {
    return 0;
  }
  auVar104._0_4_ = fVar66 * (*param_1 - fVar91);
  auVar104._4_4_ = fVar69 * (param_1[1] - fVar93);
  auVar104._8_4_ = fVar70 * (param_1[2] - fVar80);
  auVar104._12_4_ = fVar72 * (param_1[3] - fVar81);
  auVar87 = NEON_ext(auVar104,auVar104,8,1);
  auVar110._0_4_ = fVar66 * (*param_2 - fVar91);
  auVar110._4_4_ = fVar69 * (param_2[1] - fVar93);
  auVar110._8_4_ = fVar70 * (param_2[2] - fVar80);
  auVar110._12_4_ = fVar72 * (param_2[3] - fVar81);
  fVar48 = auVar87._0_4_ + auVar104._0_4_ + auVar87._4_4_ + auVar104._4_4_;
  auVar87 = NEON_ext(auVar110,auVar110,8,1);
  fVar47 = auVar87._0_4_ + auVar110._0_4_ + auVar87._4_4_ + auVar110._4_4_;
  if (fVar48 * fVar47 <= 0.0) {
    fVar48 = ABS(fVar48) / fVar49;
    fVar49 = fVar48 + ABS(fVar47) / fVar49;
    if (fVar49 == 0.0) {
      return 0;
    }
    fVar48 = fVar48 / fVar49;
    fVar66 = 1.0 - fVar48;
    fVar49 = fVar91 + (*param_2 - fVar91) * fVar48 + (*param_1 - fVar91) * fVar66;
    fVar47 = fVar93 + (param_2[1] - fVar93) * fVar48 + (param_1[1] - fVar93) * fVar66;
    fVar71 = fVar80 + (param_2[2] - fVar80) * fVar48 + (param_1[2] - fVar80) * fVar66;
    fVar48 = fVar81 + (param_2[3] - fVar81) * fVar48 + (param_1[3] - fVar81) * fVar66;
    auVar89._0_4_ = fVar49 - fVar91;
    auVar89._4_4_ = fVar47 - fVar93;
    auVar89._8_4_ = fVar71 - fVar80;
    auVar89._12_4_ = fVar48 - fVar81;
    uVar68 = a64_TBL(ZEXT816(0),auVar89,DAT_01cd50f8);
    uVar86 = a64_TBL(ZEXT816(0),auVar89,DAT_01cd5158);
    uVar108 = a64_TBL(ZEXT816(0),auVar89,DAT_01cd5418);
    uVar26 = a64_TBL(ZEXT816(0),auVar89,DAT_01cd5188);
    fVar66 = fVar74 - fVar94;
    fVar69 = fVar75 - fVar100;
    fVar70 = fVar76 - fVar103;
    fVar72 = fVar77 - fVar105;
    auVar38._4_4_ = fVar69;
    auVar38._0_4_ = fVar66;
    auVar38._8_4_ = fVar70;
    auVar38._12_4_ = fVar72;
    uVar84 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5418);
    auVar78._0_4_ = fVar49 - fVar94;
    auVar78._4_4_ = fVar47 - fVar100;
    auVar78._8_4_ = fVar71 - fVar103;
    auVar78._12_4_ = fVar48 - fVar105;
    auVar39._4_4_ = fVar69;
    auVar39._0_4_ = fVar66;
    auVar39._8_4_ = fVar70;
    auVar39._12_4_ = fVar72;
    uVar111 = a64_TBL(ZEXT816(0),auVar39,DAT_01cd5188);
    uVar112 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd50f8);
    uVar114 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5158);
    auVar40._4_4_ = fVar69;
    auVar40._0_4_ = fVar66;
    auVar40._8_4_ = fVar70;
    auVar40._12_4_ = fVar72;
    uVar115 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd5158);
    auVar41._4_4_ = fVar69;
    auVar41._0_4_ = fVar66;
    auVar41._8_4_ = fVar70;
    auVar41._12_4_ = fVar72;
    uVar113 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd50f8);
    fVar103 = (float)uVar109 * (float)uVar68 + (float)uVar108 * -(float)uVar82;
    fVar105 = fVar90 * (float)((ulong)uVar68 >> 0x20) + (float)((ulong)uVar108 >> 0x20) * -fVar101;
    fVar106 = (float)uVar67 * (float)uVar86 + (float)uVar26 * -(float)uVar85;
    fVar107 = fVar92 * (float)((ulong)uVar86 >> 0x20) + (float)((ulong)uVar26 >> 0x20) * -fVar102;
    uVar26 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5418);
    uVar109 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5188);
    fVar94 = (float)uVar84 * (float)uVar112 - (float)uVar113 * (float)uVar26;
    fVar100 = (float)((ulong)uVar84 >> 0x20) * (float)((ulong)uVar112 >> 0x20) -
              (float)((ulong)uVar113 >> 0x20) * (float)((ulong)uVar26 >> 0x20);
    fVar101 = (float)uVar111 * (float)uVar114 - (float)uVar115 * (float)uVar109;
    fVar102 = (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar114 >> 0x20) -
              (float)((ulong)uVar115 >> 0x20) * (float)((ulong)uVar109 >> 0x20);
    fVar90 = fVar103 * fVar94;
    fVar92 = fVar105 * fVar100;
    auVar42._4_4_ = fVar92;
    auVar42._0_4_ = fVar90;
    auVar42._8_4_ = fVar106 * fVar101;
    auVar42._12_4_ = fVar107 * fVar102;
    auVar43._4_4_ = fVar92;
    auVar43._0_4_ = fVar90;
    auVar43._8_4_ = fVar106 * fVar101;
    auVar43._12_4_ = fVar107 * fVar102;
    auVar87 = NEON_ext(auVar42,auVar43,8,1);
    if (auVar87._0_4_ + fVar90 + auVar87._4_4_ + fVar92 < 0.0) {
      return 0;
    }
    auVar73._0_4_ = fVar91 - fVar74;
    auVar73._4_4_ = fVar93 - fVar75;
    auVar73._8_4_ = fVar80 - fVar76;
    auVar73._12_4_ = fVar81 - fVar77;
    uVar109 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5418);
    fVar74 = fVar49 - fVar74;
    fVar75 = fVar47 - fVar75;
    fVar76 = fVar71 - fVar76;
    fVar77 = fVar48 - fVar77;
    uVar84 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5188);
    auVar30._4_4_ = fVar75;
    auVar30._0_4_ = fVar74;
    auVar30._8_4_ = fVar76;
    auVar30._12_4_ = fVar77;
    uVar82 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd5188);
    auVar31._4_4_ = fVar75;
    auVar31._0_4_ = fVar74;
    auVar31._8_4_ = fVar76;
    auVar31._12_4_ = fVar77;
    uVar85 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd50f8);
    auVar32._4_4_ = fVar75;
    auVar32._0_4_ = fVar74;
    auVar32._8_4_ = fVar76;
    auVar32._12_4_ = fVar77;
    uVar86 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd5158);
    uVar67 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd50f8);
    uVar68 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5158);
    auVar33._4_4_ = fVar75;
    auVar33._0_4_ = fVar74;
    auVar33._8_4_ = fVar76;
    auVar33._12_4_ = fVar77;
    uVar26 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5418);
    fVar91 = (float)uVar109 * (float)uVar85 - (float)uVar67 * (float)uVar26;
    fVar93 = (float)((ulong)uVar109 >> 0x20) * (float)((ulong)uVar85 >> 0x20) -
             (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar26 >> 0x20);
    fVar90 = (float)uVar84 * (float)uVar86 - (float)uVar68 * (float)uVar82;
    fVar92 = (float)((ulong)uVar84 >> 0x20) * (float)((ulong)uVar86 >> 0x20) -
             (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
    fVar80 = fVar103 * fVar91;
    fVar81 = fVar105 * fVar93;
    auVar34._4_4_ = fVar81;
    auVar34._0_4_ = fVar80;
    auVar34._8_4_ = fVar106 * fVar90;
    auVar34._12_4_ = fVar107 * fVar92;
    auVar35._4_4_ = fVar81;
    auVar35._0_4_ = fVar80;
    auVar35._8_4_ = fVar106 * fVar90;
    auVar35._12_4_ = fVar107 * fVar92;
    auVar87 = NEON_ext(auVar34,auVar35,8,1);
    if (auVar87._0_4_ + fVar80 + auVar87._4_4_ + fVar81 < 0.0) {
      return 0;
    }
    fVar103 = fVar103 * fVar103;
    fVar105 = fVar105 * fVar105;
    auVar36._4_4_ = fVar105;
    auVar36._0_4_ = fVar103;
    auVar36._8_4_ = fVar106 * fVar106;
    auVar36._12_4_ = fVar107 * fVar107;
    auVar37._4_4_ = fVar105;
    auVar37._0_4_ = fVar103;
    auVar37._8_4_ = fVar106 * fVar106;
    auVar37._12_4_ = fVar107 * fVar107;
    auVar87 = NEON_ext(auVar36,auVar37,8,1);
    if (auVar87._0_4_ + fVar103 + auVar87._4_4_ + fVar105 < DAT_01d4bac8) {
      auVar83._0_4_ = fVar50 * fVar50;
      auVar83._4_4_ = fVar51 * fVar51;
      auVar83._8_4_ = fVar52 * fVar52;
      auVar83._12_4_ = fVar53 * fVar53;
      auVar87 = NEON_ext(auVar83,auVar83,8,1);
      fVar80 = SQRT(auVar87._0_4_ + auVar83._0_4_ + auVar87._4_4_ + auVar83._4_4_);
      if (fVar80 <= DAT_01d4c708) {
        return 0;
      }
      fVar106 = 1.0 / fVar80;
      fVar81 = auVar89._0_4_ * fVar50 * fVar106;
      fVar103 = auVar89._4_4_ * fVar51 * fVar106;
      fVar105 = auVar89._8_4_ * fVar52 * fVar106;
      fVar50 = auVar89._12_4_ * fVar53 * fVar106;
      auVar5._4_4_ = fVar103;
      auVar5._0_4_ = fVar81;
      auVar5._8_4_ = fVar105;
      auVar5._12_4_ = fVar50;
      auVar6._4_4_ = fVar103;
      auVar6._0_4_ = fVar81;
      auVar6._8_4_ = fVar105;
      auVar6._12_4_ = fVar50;
      auVar87 = NEON_ext(auVar5,auVar6,8,1);
      fVar80 = (auVar87._0_4_ + fVar81 + auVar87._4_4_ + fVar103) / fVar80;
      bVar44 = false;
      bVar45 = false;
      bVar46 = false;
      if (0.0 <= fVar80) {
        bVar44 = false;
        bVar45 = false;
        bVar46 = true;
        if (!NAN(fVar80)) {
          bVar44 = fVar80 < 1.0;
          bVar45 = fVar80 == 1.0;
          bVar46 = false;
        }
      }
      if (!bVar45 && bVar44 == bVar46) {
        return 0;
      }
    }
    fVar94 = fVar94 * fVar94;
    fVar100 = fVar100 * fVar100;
    auVar7._4_4_ = fVar100;
    auVar7._0_4_ = fVar94;
    auVar7._8_4_ = fVar101 * fVar101;
    auVar7._12_4_ = fVar102 * fVar102;
    auVar8._4_4_ = fVar100;
    auVar8._0_4_ = fVar94;
    auVar8._8_4_ = fVar101 * fVar101;
    auVar8._12_4_ = fVar102 * fVar102;
    auVar87 = NEON_ext(auVar7,auVar8,8,1);
    if (auVar87._0_4_ + fVar94 + auVar87._4_4_ + fVar100 < DAT_01d4bac8) {
      fVar80 = fVar66 * fVar66;
      fVar81 = fVar69 * fVar69;
      auVar9._4_4_ = fVar81;
      auVar9._0_4_ = fVar80;
      auVar9._8_4_ = fVar70 * fVar70;
      auVar9._12_4_ = fVar72 * fVar72;
      auVar10._4_4_ = fVar81;
      auVar10._0_4_ = fVar80;
      auVar10._8_4_ = fVar70 * fVar70;
      auVar10._12_4_ = fVar72 * fVar72;
      auVar87 = NEON_ext(auVar9,auVar10,8,1);
      fVar80 = SQRT(auVar87._0_4_ + fVar80 + auVar87._4_4_ + fVar81);
      if (fVar80 <= DAT_01d4c708) {
        return 0;
      }
      fVar81 = 1.0 / fVar80;
      auVar79._0_4_ = auVar78._0_4_ * fVar66 * fVar81;
      auVar79._4_4_ = auVar78._4_4_ * fVar69 * fVar81;
      auVar79._8_4_ = auVar78._8_4_ * fVar70 * fVar81;
      auVar79._12_4_ = auVar78._12_4_ * fVar72 * fVar81;
      auVar87 = NEON_ext(auVar79,auVar79,8,1);
      fVar80 = (auVar87._0_4_ + auVar79._0_4_ + auVar87._4_4_ + auVar79._4_4_) / fVar80;
      bVar44 = false;
      bVar45 = false;
      bVar46 = false;
      if (0.0 <= fVar80) {
        bVar44 = false;
        bVar45 = false;
        bVar46 = true;
        if (!NAN(fVar80)) {
          bVar44 = fVar80 < 1.0;
          bVar45 = fVar80 == 1.0;
          bVar46 = false;
        }
      }
      if (!bVar45 && bVar44 == bVar46) {
        return 0;
      }
    }
    fVar91 = fVar91 * fVar91;
    fVar93 = fVar93 * fVar93;
    auVar11._4_4_ = fVar93;
    auVar11._0_4_ = fVar91;
    auVar11._8_4_ = fVar90 * fVar90;
    auVar11._12_4_ = fVar92 * fVar92;
    auVar12._4_4_ = fVar93;
    auVar12._0_4_ = fVar91;
    auVar12._8_4_ = fVar90 * fVar90;
    auVar12._12_4_ = fVar92 * fVar92;
    auVar87 = NEON_ext(auVar11,auVar12,8,1);
    if (auVar87._0_4_ + fVar91 + auVar87._4_4_ + fVar93 < DAT_01d4bac8) {
      fVar91 = auVar73._0_4_ * auVar73._0_4_;
      fVar93 = auVar73._4_4_ * auVar73._4_4_;
      auVar13._4_4_ = fVar93;
      auVar13._0_4_ = fVar91;
      auVar13._8_4_ = auVar73._8_4_ * auVar73._8_4_;
      auVar13._12_4_ = auVar73._12_4_ * auVar73._12_4_;
      auVar14._4_4_ = fVar93;
      auVar14._0_4_ = fVar91;
      auVar14._8_4_ = auVar73._8_4_ * auVar73._8_4_;
      auVar14._12_4_ = auVar73._12_4_ * auVar73._12_4_;
      auVar87 = NEON_ext(auVar13,auVar14,8,1);
      fVar91 = SQRT(auVar87._0_4_ + fVar91 + auVar87._4_4_ + fVar93);
      if (fVar91 <= DAT_01d4c708) {
        return 0;
      }
      fVar93 = 1.0 / fVar91;
      fVar74 = fVar74 * auVar73._0_4_ * fVar93;
      fVar75 = fVar75 * auVar73._4_4_ * fVar93;
      fVar76 = fVar76 * auVar73._8_4_ * fVar93;
      fVar77 = fVar77 * auVar73._12_4_ * fVar93;
      auVar1._4_4_ = fVar75;
      auVar1._0_4_ = fVar74;
      auVar1._8_4_ = fVar76;
      auVar1._12_4_ = fVar77;
      auVar2._4_4_ = fVar75;
      auVar2._0_4_ = fVar74;
      auVar2._8_4_ = fVar76;
      auVar2._12_4_ = fVar77;
      auVar87 = NEON_ext(auVar1,auVar2,8,1);
      fVar91 = (auVar87._0_4_ + fVar74 + auVar87._4_4_ + fVar75) / fVar91;
      bVar44 = false;
      bVar45 = false;
      bVar46 = false;
      if (0.0 <= fVar91) {
        bVar44 = false;
        bVar45 = false;
        bVar46 = true;
        if (!NAN(fVar91)) {
          bVar44 = fVar91 < 1.0;
          bVar45 = fVar91 == 1.0;
          bVar46 = false;
        }
      }
      if (!bVar45 && bVar44 == bVar46) {
        return 0;
      }
    }
    if (param_6 != (float *)0x0) {
      param_6[2] = fVar71;
      param_6[3] = fVar48;
      *param_6 = fVar49;
      param_6[1] = fVar47;
    }
    return 1;
  }
  return 0;
}


