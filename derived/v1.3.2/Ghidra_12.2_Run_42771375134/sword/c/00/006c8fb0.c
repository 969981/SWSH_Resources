/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c8fb0; name: FUN_006c8fb0
 */


undefined8
FUN_006c8fb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,float *param_6,float *param_7,undefined8 *param_8)

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
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar44;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined8 uVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined8 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  
  fVar37 = (float)param_5[1];
  fVar38 = (float)((ulong)param_5[1] >> 0x20);
  fVar35 = (float)*param_5;
  fVar36 = (float)((ulong)*param_5 >> 0x20);
  fVar27 = (float)*param_3 - fVar35;
  fVar28 = (float)((ulong)*param_3 >> 0x20) - fVar36;
  fVar29 = (float)param_3[1] - fVar37;
  fVar30 = (float)((ulong)param_3[1] >> 0x20) - fVar38;
  fVar64 = (float)param_8[1];
  fVar65 = (float)((ulong)param_8[1] >> 0x20);
  fVar62 = (float)*param_8;
  fVar63 = (float)((ulong)*param_8 >> 0x20);
  fVar39 = (float)*param_4 - fVar35;
  fVar44 = (float)((ulong)*param_4 >> 0x20) - fVar36;
  fVar45 = (float)param_4[1] - fVar37;
  fVar46 = (float)((ulong)param_4[1] >> 0x20) - fVar38;
  fVar31 = fVar27 * fVar62;
  fVar32 = fVar28 * fVar63;
  fVar33 = fVar29 * fVar64;
  fVar34 = fVar30 * fVar65;
  auVar47._4_4_ = fVar32;
  auVar47._0_4_ = fVar31;
  auVar47._8_4_ = fVar33;
  auVar47._12_4_ = fVar34;
  auVar53._4_4_ = fVar32;
  auVar53._0_4_ = fVar31;
  auVar53._8_4_ = fVar33;
  auVar53._12_4_ = fVar34;
  auVar47 = NEON_ext(auVar47,auVar53,8,1);
  auVar85._0_4_ = fVar39 * fVar62;
  auVar85._4_4_ = fVar44 * fVar63;
  auVar85._8_4_ = fVar45 * fVar64;
  auVar85._12_4_ = fVar46 * fVar65;
  auVar53 = NEON_ext(auVar85,auVar85,8,1);
  fVar31 = auVar47._0_4_ + fVar31 + auVar47._4_4_ + fVar32;
  fVar32 = auVar53._0_4_ + auVar85._0_4_ + auVar53._4_4_ + auVar85._4_4_;
  if (0.0 < fVar31 * fVar32) {
    return 0;
  }
  auVar88._0_4_ = fVar62 * fVar62;
  auVar88._4_4_ = fVar63 * fVar63;
  auVar88._8_4_ = fVar64 * fVar64;
  auVar88._12_4_ = fVar65 * fVar65;
  auVar47 = NEON_ext(auVar88,auVar88,8,1);
  fVar33 = SQRT(auVar47._0_4_ + auVar88._0_4_ + auVar47._4_4_ + auVar88._4_4_);
  if (fVar33 <= DAT_01d4c708) {
    return 0;
  }
  fVar31 = ABS(fVar31) / fVar33;
  fVar32 = fVar31 + ABS(fVar32) / fVar33;
  if (fVar32 == 0.0) {
    return 0;
  }
  fVar31 = fVar31 / fVar32;
  fVar52 = 1.0 - fVar31;
  fVar32 = *param_6;
  fVar33 = param_6[1];
  fVar34 = param_6[2];
  fVar68 = param_6[3];
  fVar39 = fVar35 + fVar39 * fVar31 + fVar27 * fVar52;
  fVar44 = fVar36 + fVar44 * fVar31 + fVar28 * fVar52;
  fVar45 = fVar37 + fVar45 * fVar31 + fVar29 * fVar52;
  fVar30 = fVar38 + fVar46 * fVar31 + fVar30 * fVar52;
  auVar48._0_4_ = fVar32 - fVar35;
  auVar48._4_4_ = fVar33 - fVar36;
  auVar48._8_4_ = fVar34 - fVar37;
  auVar48._12_4_ = fVar68 - fVar38;
  auVar54._0_4_ = fVar39 - fVar35;
  auVar54._4_4_ = fVar44 - fVar36;
  auVar54._8_4_ = fVar45 - fVar37;
  auVar54._12_4_ = fVar30 - fVar38;
  uVar56 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd5418);
  uVar10 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd5188);
  uVar75 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd50f8);
  uVar11 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd50f8);
  uVar67 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5158);
  uVar57 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd5158);
  fVar31 = *param_7;
  fVar27 = param_7[1];
  fVar28 = param_7[2];
  fVar29 = param_7[3];
  fVar35 = fVar35 - fVar31;
  fVar36 = fVar36 - fVar27;
  fVar37 = fVar37 - fVar28;
  fVar38 = fVar38 - fVar29;
  auVar91._4_4_ = fVar36;
  auVar91._0_4_ = fVar35;
  auVar91._8_4_ = fVar37;
  auVar91._12_4_ = fVar38;
  uVar95 = a64_TBL(ZEXT816(0),auVar91,DAT_01cd5188);
  uVar87 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5418);
  uVar58 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5188);
  fVar46 = fVar39 - fVar32;
  fVar52 = fVar44 - fVar33;
  fVar60 = fVar45 - fVar34;
  fVar61 = fVar30 - fVar68;
  auVar6._4_4_ = fVar52;
  auVar6._0_4_ = fVar46;
  auVar6._8_4_ = fVar60;
  auVar6._12_4_ = fVar61;
  uVar92 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5158);
  auVar7._4_4_ = fVar52;
  auVar7._0_4_ = fVar46;
  auVar7._8_4_ = fVar60;
  auVar7._12_4_ = fVar61;
  uVar94 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  auVar59._0_4_ = fVar31 - fVar32;
  auVar59._4_4_ = fVar27 - fVar33;
  auVar59._8_4_ = fVar28 - fVar34;
  auVar59._12_4_ = fVar29 - fVar68;
  uVar40 = a64_TBL(ZEXT816(0),auVar59,DAT_01cd5418);
  uVar70 = a64_TBL(ZEXT816(0),auVar59,DAT_01cd5188);
  auVar8._4_4_ = fVar52;
  auVar8._0_4_ = fVar46;
  auVar8._8_4_ = fVar60;
  auVar8._12_4_ = fVar61;
  uVar71 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
  uVar93 = a64_TBL(ZEXT816(0),auVar59,DAT_01cd50f8);
  uVar41 = a64_TBL(ZEXT816(0),auVar59,DAT_01cd5158);
  auVar9._4_4_ = fVar52;
  auVar9._0_4_ = fVar46;
  auVar9._8_4_ = fVar60;
  auVar9._12_4_ = fVar61;
  uVar42 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5188);
  auVar43._0_4_ = fVar39 - fVar31;
  auVar43._4_4_ = fVar44 - fVar27;
  auVar43._8_4_ = fVar45 - fVar28;
  auVar43._12_4_ = fVar30 - fVar29;
  auVar1._4_4_ = fVar36;
  auVar1._0_4_ = fVar35;
  auVar1._8_4_ = fVar37;
  auVar1._12_4_ = fVar38;
  uVar90 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5418);
  uVar96 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd50f8);
  uVar97 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd5158);
  auVar2._4_4_ = fVar36;
  auVar2._0_4_ = fVar35;
  auVar2._8_4_ = fVar37;
  auVar2._12_4_ = fVar38;
  uVar84 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5158);
  auVar3._4_4_ = fVar36;
  auVar3._0_4_ = fVar35;
  auVar3._8_4_ = fVar37;
  auVar3._12_4_ = fVar38;
  uVar82 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
  uVar20 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd5418);
  uVar80 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd5188);
  fVar33 = (float)uVar56 * (float)uVar11 - (float)uVar75 * (float)uVar87;
  fVar34 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar11 >> 0x20) -
           (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
  fVar68 = (float)uVar10 * (float)uVar67 - (float)uVar57 * (float)uVar58;
  fVar69 = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar67 >> 0x20) -
           (float)((ulong)uVar57 >> 0x20) * (float)((ulong)uVar58 >> 0x20);
  fVar28 = (float)uVar40 * (float)uVar71 - (float)uVar93 * (float)uVar94;
  fVar29 = (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar71 >> 0x20) -
           (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar94 >> 0x20);
  fVar72 = (float)uVar70 * (float)uVar92 - (float)uVar41 * (float)uVar42;
  fVar73 = (float)((ulong)uVar70 >> 0x20) * (float)((ulong)uVar92 >> 0x20) -
           (float)((ulong)uVar41 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
  fVar74 = (float)uVar90 * (float)uVar96 - (float)uVar82 * (float)uVar20;
  fVar76 = (float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar96 >> 0x20) -
           (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar20 >> 0x20);
  fVar77 = (float)uVar95 * (float)uVar97 - (float)uVar84 * (float)uVar80;
  fVar78 = (float)((ulong)uVar95 >> 0x20) * (float)((ulong)uVar97 >> 0x20) -
           (float)((ulong)uVar84 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
  fVar27 = fVar33 * fVar33;
  fVar79 = fVar34 * fVar34;
  auVar18._4_4_ = fVar79;
  auVar18._0_4_ = fVar27;
  auVar18._8_4_ = fVar68 * fVar68;
  auVar18._12_4_ = fVar69 * fVar69;
  auVar19._4_4_ = fVar79;
  auVar19._0_4_ = fVar27;
  auVar19._8_4_ = fVar68 * fVar68;
  auVar19._12_4_ = fVar69 * fVar69;
  auVar47 = NEON_ext(auVar18,auVar19,8,1);
  auVar81._0_4_ = fVar28 * fVar28;
  auVar81._4_4_ = fVar29 * fVar29;
  auVar81._8_4_ = fVar72 * fVar72;
  auVar81._12_4_ = fVar73 * fVar73;
  auVar53 = NEON_ext(auVar81,auVar81,8,1);
  auVar83._0_4_ = fVar74 * fVar74;
  auVar83._4_4_ = fVar76 * fVar76;
  auVar83._8_4_ = fVar77 * fVar77;
  auVar83._12_4_ = fVar78 * fVar78;
  auVar85 = NEON_ext(auVar83,auVar83,8,1);
  auVar86._0_4_ = fVar62 * fVar33;
  auVar86._4_4_ = fVar63 * fVar34;
  auVar86._8_4_ = fVar64 * fVar68;
  auVar86._12_4_ = fVar65 * fVar69;
  auVar88 = NEON_ext(auVar86,auVar86,8,1);
  fVar31 = auVar88._0_4_ + auVar86._0_4_ + auVar88._4_4_ + auVar86._4_4_;
  auVar89._0_4_ = fVar62 * fVar28;
  auVar89._4_4_ = fVar63 * fVar29;
  auVar89._8_4_ = fVar64 * fVar72;
  auVar89._12_4_ = fVar65 * fVar73;
  auVar88 = NEON_ext(auVar89,auVar89,8,1);
  fVar62 = fVar62 * fVar74;
  fVar63 = fVar63 * fVar76;
  auVar12._4_4_ = fVar63;
  auVar12._0_4_ = fVar62;
  auVar12._8_4_ = fVar64 * fVar77;
  auVar12._12_4_ = fVar65 * fVar78;
  auVar13._4_4_ = fVar63;
  auVar13._0_4_ = fVar62;
  auVar13._8_4_ = fVar64 * fVar77;
  auVar13._12_4_ = fVar65 * fVar78;
  auVar91 = NEON_ext(auVar12,auVar13,8,1);
  fVar32 = auVar88._0_4_ + auVar89._0_4_ + auVar88._4_4_ + auVar89._4_4_;
  bVar21 = DAT_01d4bac8 <= auVar47._0_4_ + fVar27 + auVar47._4_4_ + fVar79;
  fVar27 = auVar91._0_4_ + fVar62 + auVar91._4_4_ + fVar63;
  bVar22 = DAT_01d4c708 <= fVar31 * fVar31;
  bVar23 = DAT_01d4bac8 <= auVar53._0_4_ + auVar81._0_4_ + auVar53._4_4_ + auVar81._4_4_;
  bVar24 = DAT_01d4c708 <= fVar32 * fVar32;
  bVar25 = DAT_01d4bac8 <= auVar85._0_4_ + auVar83._0_4_ + auVar85._4_4_ + auVar83._4_4_;
  bVar26 = DAT_01d4c708 <= fVar27 * fVar27;
  if (((bVar21 && bVar22) && (bVar23 && bVar24)) && (bVar25 && bVar26)) {
    fVar28 = fVar33 * fVar28;
    fVar29 = fVar34 * fVar29;
    auVar14._4_4_ = fVar29;
    auVar14._0_4_ = fVar28;
    auVar14._8_4_ = fVar68 * fVar72;
    auVar14._12_4_ = fVar69 * fVar73;
    auVar15._4_4_ = fVar29;
    auVar15._0_4_ = fVar28;
    auVar15._8_4_ = fVar68 * fVar72;
    auVar15._12_4_ = fVar69 * fVar73;
    auVar47 = NEON_ext(auVar14,auVar15,8,1);
    if (auVar47._0_4_ + fVar28 + auVar47._4_4_ + fVar29 < DAT_01d4c6b0) {
      return 0;
    }
    auVar66._0_4_ = fVar33 * fVar74;
    auVar66._4_4_ = fVar34 * fVar76;
    auVar66._8_4_ = fVar68 * fVar77;
    auVar66._12_4_ = fVar69 * fVar78;
    auVar47 = NEON_ext(auVar66,auVar66,8,1);
    if (auVar47._0_4_ + auVar66._0_4_ + auVar47._4_4_ + auVar66._4_4_ < DAT_01d4c6b0) {
      return 0;
    }
  }
  if (!bVar21 || !bVar22) {
    fVar31 = auVar48._0_4_ * auVar48._0_4_;
    fVar32 = auVar48._4_4_ * auVar48._4_4_;
    auVar16._4_4_ = fVar32;
    auVar16._0_4_ = fVar31;
    auVar16._8_4_ = auVar48._8_4_ * auVar48._8_4_;
    auVar16._12_4_ = auVar48._12_4_ * auVar48._12_4_;
    auVar17._4_4_ = fVar32;
    auVar17._0_4_ = fVar31;
    auVar17._8_4_ = auVar48._8_4_ * auVar48._8_4_;
    auVar17._12_4_ = auVar48._12_4_ * auVar48._12_4_;
    auVar47 = NEON_ext(auVar16,auVar17,8,1);
    fVar31 = SQRT(auVar47._0_4_ + fVar31 + auVar47._4_4_ + fVar32);
    fVar32 = 1.0 / fVar31;
    auVar49._0_4_ = auVar54._0_4_ * auVar48._0_4_ * fVar32;
    auVar49._4_4_ = auVar54._4_4_ * auVar48._4_4_ * fVar32;
    auVar49._8_4_ = auVar54._8_4_ * auVar48._8_4_ * fVar32;
    auVar49._12_4_ = auVar54._12_4_ * auVar48._12_4_ * fVar32;
    auVar47 = NEON_ext(auVar49,auVar49,8,1);
    fVar31 = (auVar47._0_4_ + auVar49._0_4_ + auVar47._4_4_ + auVar49._4_4_) / fVar31;
    if (1.0 < fVar31) {
      return 0;
    }
    if (fVar31 < 0.0) {
      return 0;
    }
  }
  if (!bVar23 || !bVar24) {
    auVar50._0_4_ = auVar59._0_4_ * auVar59._0_4_;
    auVar50._4_4_ = auVar59._4_4_ * auVar59._4_4_;
    auVar50._8_4_ = auVar59._8_4_ * auVar59._8_4_;
    auVar50._12_4_ = auVar59._12_4_ * auVar59._12_4_;
    auVar47 = NEON_ext(auVar50,auVar50,8,1);
    fVar31 = SQRT(auVar47._0_4_ + auVar50._0_4_ + auVar47._4_4_ + auVar50._4_4_);
    fVar32 = 1.0 / fVar31;
    auVar55._0_4_ = fVar46 * auVar59._0_4_ * fVar32;
    auVar55._4_4_ = fVar52 * auVar59._4_4_ * fVar32;
    auVar55._8_4_ = fVar60 * auVar59._8_4_ * fVar32;
    auVar55._12_4_ = fVar61 * auVar59._12_4_ * fVar32;
    auVar47 = NEON_ext(auVar55,auVar55,8,1);
    fVar31 = (auVar47._0_4_ + auVar55._0_4_ + auVar47._4_4_ + auVar55._4_4_) / fVar31;
    if (1.0 < fVar31) {
      return 0;
    }
    if (fVar31 < 0.0) {
      return 0;
    }
  }
  if (!bVar25 || !bVar26) {
    auVar51._0_4_ = fVar35 * fVar35;
    auVar51._4_4_ = fVar36 * fVar36;
    auVar51._8_4_ = fVar37 * fVar37;
    auVar51._12_4_ = fVar38 * fVar38;
    auVar47 = NEON_ext(auVar51,auVar51,8,1);
    fVar32 = SQRT(auVar47._0_4_ + auVar51._0_4_ + auVar47._4_4_ + auVar51._4_4_);
    fVar29 = 1.0 / fVar32;
    fVar31 = auVar43._0_4_ * fVar35 * fVar29;
    fVar27 = auVar43._4_4_ * fVar36 * fVar29;
    fVar28 = auVar43._8_4_ * fVar37 * fVar29;
    fVar29 = auVar43._12_4_ * fVar38 * fVar29;
    auVar4._4_4_ = fVar27;
    auVar4._0_4_ = fVar31;
    auVar4._8_4_ = fVar28;
    auVar4._12_4_ = fVar29;
    auVar5._4_4_ = fVar27;
    auVar5._0_4_ = fVar31;
    auVar5._8_4_ = fVar28;
    auVar5._12_4_ = fVar29;
    auVar47 = NEON_ext(auVar4,auVar5,8,1);
    fVar32 = (auVar47._0_4_ + fVar31 + auVar47._4_4_ + fVar27) / fVar32;
    if (1.0 < fVar32) {
      return 0;
    }
    if (fVar32 < 0.0) {
      return 0;
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    param_2[1] = CONCAT44(fVar30,fVar45);
    *param_2 = CONCAT44(fVar44,fVar39);
  }
  return 1;
}


