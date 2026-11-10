/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0015a8e0; name: FUN_0015a8e0
 */


undefined1  [16] FUN_0015a8e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar37;
  undefined8 uVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  float fVar61;
  undefined8 uVar62;
  float fVar65;
  float fVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  undefined1 auVar99 [16];
  
  fVar26 = *(float *)(param_2 + 2);
  fVar27 = *(float *)((long)param_2 + 0x14);
  fVar28 = *(float *)(param_2 + 3);
  fVar29 = *(float *)((long)param_2 + 0x1c);
  fVar22 = *(float *)(param_1 + 2);
  fVar23 = *(float *)((long)param_1 + 0x14);
  fVar24 = *(float *)(param_1 + 3);
  fVar35 = (float)*param_2;
  fVar80 = (float)*param_1;
  fVar82 = (float)((ulong)*param_1 >> 0x20);
  fVar84 = (float)param_1[1];
  fVar74 = *(float *)(param_1 + 4);
  fVar76 = *(float *)((long)param_1 + 0x24);
  fVar78 = *(float *)(param_1 + 5);
  fVar25 = *(float *)(param_1 + 6);
  fVar47 = *(float *)((long)param_1 + 0x34);
  fVar49 = *(float *)(param_1 + 7);
  fVar71 = *(float *)((long)param_1 + 0x3c);
  fVar37 = (float)((ulong)*param_2 >> 0x20);
  fVar75 = (float)param_1[9];
  fVar77 = (float)((ulong)param_1[9] >> 0x20);
  fVar85 = (float)param_1[8];
  fVar72 = (float)((ulong)param_1[8] >> 0x20);
  fVar69 = (float)param_1[0xb];
  fVar70 = (float)((ulong)param_1[0xb] >> 0x20);
  fVar81 = (float)param_1[10];
  fVar83 = (float)((ulong)param_1[10] >> 0x20);
  fVar38 = (float)param_2[1];
  fVar13 = *(float *)(param_1 + 0xc);
  fVar14 = *(float *)((long)param_1 + 100);
  fVar15 = *(float *)(param_1 + 0xd);
  fVar90 = (float)param_1[0xe];
  fVar91 = (float)((ulong)param_1[0xe] >> 0x20);
  fVar92 = (float)param_1[0xf];
  auVar96._0_4_ = fVar35 * fVar85;
  auVar96._4_4_ = fVar37 * fVar72;
  auVar96._8_4_ = fVar38 * fVar75;
  fVar39 = (float)((ulong)param_2[1] >> 0x20);
  auVar96._12_4_ = fVar39 * fVar77;
  auVar63._0_4_ = fVar35 * fVar25;
  auVar63._4_4_ = fVar37 * fVar47;
  auVar63._8_4_ = fVar38 * fVar49;
  auVar63._12_4_ = fVar39 * fVar71;
  fVar97 = fVar35 * fVar81;
  fVar98 = fVar37 * fVar83;
  auVar45 = NEON_ext(auVar96,auVar96,8,1);
  fVar20 = auVar45._0_4_ + auVar45._4_4_;
  auVar99 = NEON_ext(auVar63,auVar63,8,1);
  auVar11._4_4_ = fVar98;
  auVar11._0_4_ = fVar97;
  auVar11._8_4_ = fVar38 * fVar69;
  auVar11._12_4_ = fVar39 * fVar70;
  auVar12._4_4_ = fVar98;
  auVar12._0_4_ = fVar97;
  auVar12._8_4_ = fVar38 * fVar69;
  auVar12._12_4_ = fVar39 * fVar70;
  auVar45 = NEON_ext(auVar11,auVar12,8,1);
  fVar21 = auVar99._0_4_ + auVar99._4_4_;
  fVar16 = *(float *)(param_2 + 4);
  fVar17 = *(float *)((long)param_2 + 0x24);
  fVar18 = *(float *)(param_2 + 5);
  fVar19 = *(float *)((long)param_2 + 0x2c);
  fVar42 = (float)param_2[7];
  fVar43 = (float)((ulong)param_2[7] >> 0x20);
  fVar40 = (float)param_2[6];
  fVar41 = (float)((ulong)param_2[6] >> 0x20);
  fVar93 = (float)param_1[0x10];
  fVar94 = (float)((ulong)param_1[0x10] >> 0x20);
  fVar95 = (float)param_1[0x11];
  uVar62 = NEON_ext(CONCAT44(auVar63._0_4_ + auVar63._4_4_ + fVar21,
                             auVar63._0_4_ + auVar63._4_4_ + fVar21),
                    CONCAT44(auVar96._0_4_ + auVar96._4_4_ + fVar20,
                             auVar96._0_4_ + auVar96._4_4_ + fVar20),4,1);
  fVar51 = fVar80 * fVar35 + fVar22 * fVar37 + fVar74 * fVar38 +
           fVar25 * fVar26 + fVar85 * fVar27 + fVar81 * fVar28;
  fVar52 = fVar82 * fVar35 + fVar23 * fVar37 + fVar76 * fVar38 +
           fVar47 * fVar26 + fVar72 * fVar27 + fVar83 * fVar28;
  fVar53 = fVar84 * fVar35 + fVar24 * fVar37 + fVar78 * fVar38 +
           fVar49 * fVar26 + fVar75 * fVar27 + fVar69 * fVar28;
  fVar46 = fVar13 * fVar26 + fVar90 * fVar27 + fVar93 * fVar28 + (float)uVar62;
  fVar48 = fVar14 * fVar26 + fVar91 * fVar27 + fVar94 * fVar28 + (float)((ulong)uVar62 >> 0x20);
  fVar50 = fVar15 * fVar26 + fVar92 * fVar27 + fVar95 * fVar28 +
           fVar97 + fVar98 + auVar45._0_4_ + auVar45._4_4_;
  fVar54 = fVar80 * fVar16 + fVar22 * fVar17 + fVar74 * fVar18 +
           fVar25 * fVar40 + fVar85 * fVar41 + fVar81 * fVar42;
  fVar55 = fVar82 * fVar16 + fVar23 * fVar17 + fVar76 * fVar18 +
           fVar47 * fVar40 + fVar72 * fVar41 + fVar83 * fVar42;
  fVar56 = fVar84 * fVar16 + fVar24 * fVar17 + fVar78 * fVar18 +
           fVar49 * fVar40 + fVar75 * fVar41 + fVar69 * fVar42;
  fVar97 = fVar16 * fVar25;
  fVar98 = fVar17 * fVar47;
  auVar3._4_4_ = fVar98;
  auVar3._0_4_ = fVar97;
  auVar3._8_4_ = fVar18 * fVar49;
  auVar3._12_4_ = fVar19 * fVar71;
  auVar4._4_4_ = fVar98;
  auVar4._0_4_ = fVar97;
  auVar4._8_4_ = fVar18 * fVar49;
  auVar4._12_4_ = fVar19 * fVar71;
  auVar45 = NEON_ext(auVar3,auVar4,8,1);
  fVar20 = auVar45._0_4_ + auVar45._4_4_;
  auVar60._0_4_ = fVar16 * fVar85;
  auVar60._4_4_ = fVar17 * fVar72;
  auVar60._8_4_ = fVar18 * fVar75;
  auVar60._12_4_ = fVar19 * fVar77;
  auVar45 = NEON_ext(auVar60,auVar60,8,1);
  fVar21 = auVar45._0_4_ + auVar45._4_4_;
  auVar64._0_4_ = fVar16 * fVar81;
  auVar64._4_4_ = fVar17 * fVar83;
  auVar64._8_4_ = fVar18 * fVar69;
  auVar64._12_4_ = fVar19 * fVar70;
  auVar45 = NEON_ext(auVar64,auVar64,8,1);
  uVar62 = NEON_ext(CONCAT44(fVar97 + fVar98 + fVar20,fVar97 + fVar98 + fVar20),
                    CONCAT44(auVar60._0_4_ + auVar60._4_4_ + fVar21,
                             auVar60._0_4_ + auVar60._4_4_ + fVar21),4,1);
  fVar61 = fVar13 * fVar40 + fVar90 * fVar41 + fVar93 * fVar42 + (float)uVar62;
  fVar65 = fVar14 * fVar40 + fVar91 * fVar41 + fVar94 * fVar42 + (float)((ulong)uVar62 >> 0x20);
  fVar66 = fVar15 * fVar40 + fVar92 * fVar41 + fVar95 * fVar42 +
           auVar64._0_4_ + auVar64._4_4_ + auVar45._0_4_ + auVar45._4_4_;
  fVar20 = *(float *)(param_2 + 8);
  fVar21 = *(float *)((long)param_2 + 0x44);
  fVar97 = *(float *)(param_2 + 9);
  fVar98 = *(float *)((long)param_2 + 0x4c);
  uVar62 = param_2[0xb];
  fVar59 = (float)uVar62;
  fVar57 = (float)param_2[10];
  fVar58 = (float)((ulong)param_2[10] >> 0x20);
  param_3[1] = (ulong)(uint)fVar53;
  *param_3 = CONCAT44(fVar52,fVar51);
  param_3[3] = (ulong)(uint)fVar50;
  param_3[2] = CONCAT44(fVar48,fVar46);
  param_3[5] = (ulong)(uint)fVar56;
  param_3[4] = CONCAT44(fVar55,fVar54);
  param_3[7] = (ulong)(uint)fVar66;
  param_3[6] = CONCAT44(fVar65,fVar61);
  fVar67 = fVar20 * fVar81;
  fVar68 = fVar21 * fVar83;
  auVar79._0_4_ = fVar20 * fVar25;
  auVar79._4_4_ = fVar21 * fVar47;
  auVar79._8_4_ = fVar97 * fVar49;
  auVar79._12_4_ = fVar98 * fVar71;
  fVar71 = fVar20 * fVar85;
  fVar73 = fVar21 * fVar72;
  fVar81 = fVar80 * fVar20 + fVar22 * fVar21 + fVar74 * fVar97 +
           fVar25 * fVar57 + fVar85 * fVar58 + fVar81 * fVar59;
  fVar83 = fVar82 * fVar20 + fVar23 * fVar21 + fVar76 * fVar97 +
           fVar47 * fVar57 + fVar72 * fVar58 + fVar83 * fVar59;
  fVar85 = fVar84 * fVar20 + fVar24 * fVar21 + fVar78 * fVar97 +
           fVar49 * fVar57 + fVar75 * fVar58 + fVar69 * fVar59;
  auVar45 = NEON_ext(auVar79,auVar79,8,1);
  fVar22 = auVar45._0_4_ + auVar45._4_4_;
  auVar9._4_4_ = fVar73;
  auVar9._0_4_ = fVar71;
  auVar9._8_4_ = fVar97 * fVar75;
  auVar9._12_4_ = fVar98 * fVar77;
  auVar10._4_4_ = fVar73;
  auVar10._0_4_ = fVar71;
  auVar10._8_4_ = fVar97 * fVar75;
  auVar10._12_4_ = fVar98 * fVar77;
  auVar45 = NEON_ext(auVar9,auVar10,8,1);
  fVar23 = auVar45._0_4_ + auVar45._4_4_;
  auVar5._4_4_ = fVar68;
  auVar5._0_4_ = fVar67;
  auVar5._8_4_ = fVar97 * fVar69;
  auVar5._12_4_ = fVar98 * fVar70;
  auVar6._4_4_ = fVar68;
  auVar6._0_4_ = fVar67;
  auVar6._8_4_ = fVar97 * fVar69;
  auVar6._12_4_ = fVar98 * fVar70;
  auVar45 = NEON_ext(auVar5,auVar6,8,1);
  uVar36 = NEON_ext(CONCAT44(auVar79._0_4_ + auVar79._4_4_ + fVar22,
                             auVar79._0_4_ + auVar79._4_4_ + fVar22),
                    CONCAT44(fVar71 + fVar73 + fVar23,fVar71 + fVar73 + fVar23),4,1);
  fVar51 = fVar35 * fVar51;
  fVar52 = fVar37 * fVar52;
  fVar53 = fVar38 * fVar53;
  auVar7._4_4_ = fVar52;
  auVar7._0_4_ = fVar51;
  auVar7._8_4_ = fVar53;
  auVar7._12_4_ = fVar39 * 0.0;
  auVar8._4_4_ = fVar52;
  auVar8._0_4_ = fVar51;
  auVar8._8_4_ = fVar53;
  auVar8._12_4_ = fVar39 * 0.0;
  auVar99 = NEON_ext(auVar7,auVar8,8,1);
  fVar71 = fVar13 * fVar57 + fVar90 * fVar58 + fVar93 * fVar59 + (float)uVar36;
  fVar74 = fVar14 * fVar57 + fVar91 * fVar58 + fVar94 * fVar59 + (float)((ulong)uVar36 >> 0x20);
  fVar76 = fVar15 * fVar57 + fVar92 * fVar58 + fVar95 * fVar59 +
           fVar67 + fVar68 + auVar45._0_4_ + auVar45._4_4_;
  fVar22 = auVar99._0_4_ + auVar99._4_4_;
  auVar86._0_4_ = fVar26 * fVar46;
  auVar86._4_4_ = fVar27 * fVar48;
  auVar86._8_4_ = fVar28 * fVar50;
  auVar86._12_4_ = fVar29 * 0.0;
  auVar99 = NEON_ext(auVar86,auVar86,8,1);
  fVar47 = fVar40 * fVar61;
  fVar49 = fVar41 * fVar65;
  fVar23 = fVar43 * 0.0;
  auVar1._4_4_ = fVar49;
  auVar1._0_4_ = fVar47;
  auVar1._8_4_ = fVar42 * fVar66;
  auVar1._12_4_ = fVar23;
  auVar2._4_4_ = fVar49;
  auVar2._0_4_ = fVar47;
  auVar2._8_4_ = fVar42 * fVar66;
  auVar2._12_4_ = fVar23;
  auVar45 = NEON_ext(auVar1,auVar2,8,1);
  fVar40 = fVar40 * fVar71;
  fVar41 = fVar41 * fVar74;
  fVar43 = fVar43 * 0.0;
  fVar23 = auVar99._0_4_ + auVar99._4_4_;
  fVar24 = auVar45._0_4_ + auVar45._4_4_;
  param_3[9] = (ulong)(uint)fVar85;
  param_3[8] = CONCAT44(fVar83,fVar81);
  param_3[0xb] = (ulong)(uint)fVar76;
  param_3[10] = CONCAT44(fVar74,fVar71);
  auVar87._0_4_ = fVar35 * fVar54;
  auVar87._4_4_ = fVar37 * fVar55;
  auVar87._8_4_ = fVar38 * fVar56;
  auVar87._12_4_ = fVar39 * 0.0;
  auVar45 = NEON_ext(auVar87,auVar87,8,1);
  fVar25 = auVar45._0_4_ + auVar45._4_4_;
  auVar88._0_4_ = fVar26 * fVar61;
  auVar88._4_4_ = fVar27 * fVar65;
  auVar88._8_4_ = fVar28 * fVar66;
  auVar88._12_4_ = fVar29 * 0.0;
  auVar99 = NEON_ext(auVar88,auVar88,8,1);
  auVar30._0_4_ = fVar26 * fVar71;
  auVar30._4_4_ = fVar27 * fVar74;
  auVar30._8_4_ = fVar28 * fVar76;
  auVar30._12_4_ = fVar29 * 0.0;
  auVar45 = NEON_ext(auVar30,auVar30,8,1);
  fVar26 = auVar99._0_4_ + auVar99._4_4_;
  fVar27 = auVar45._0_4_ + auVar45._4_4_;
  auVar89._0_4_ = fVar35 * fVar81;
  auVar89._4_4_ = fVar37 * fVar83;
  auVar89._8_4_ = fVar38 * fVar85;
  auVar89._12_4_ = fVar39 * 0.0;
  uVar36 = CONCAT44(auVar87._0_4_ + auVar87._4_4_ + fVar25 + auVar88._0_4_ + auVar88._4_4_ + fVar26,
                    auVar87._0_4_ + auVar87._4_4_ + fVar25 + auVar88._0_4_ + auVar88._4_4_ + fVar26)
  ;
  auVar45 = NEON_ext(auVar89,auVar89,8,1);
  fVar26 = auVar45._0_4_ + auVar45._4_4_;
  fVar78 = auVar89._0_4_ + auVar89._4_4_ + fVar26 + auVar30._0_4_ + auVar30._4_4_ + fVar27;
  auVar31._0_4_ = fVar16 * fVar54;
  auVar31._4_4_ = fVar17 * fVar55;
  auVar31._8_4_ = fVar18 * fVar56;
  auVar31._12_4_ = fVar19 * 0.0;
  auVar45 = NEON_ext(auVar31,auVar31,8,1);
  auVar44._0_4_ = fVar16 * fVar81;
  auVar44._4_4_ = fVar17 * fVar83;
  auVar44._8_4_ = fVar18 * fVar85;
  auVar44._12_4_ = fVar19 * 0.0;
  fVar28 = auVar45._0_4_ + auVar45._4_4_;
  auVar45 = NEON_ext(auVar44,auVar44,8,1);
  fVar29 = auVar45._0_4_ + auVar45._4_4_;
  auVar45._4_4_ = fVar41;
  auVar45._0_4_ = fVar40;
  auVar45._8_4_ = fVar42 * fVar76;
  auVar45._12_4_ = fVar43;
  auVar99._4_4_ = fVar41;
  auVar99._0_4_ = fVar40;
  auVar99._8_4_ = fVar42 * fVar76;
  auVar99._12_4_ = fVar43;
  auVar45 = NEON_ext(auVar45,auVar99,8,1);
  fVar25 = auVar45._0_4_ + auVar45._4_4_;
  auVar32._0_4_ = fVar20 * fVar81;
  auVar32._4_4_ = fVar21 * fVar83;
  auVar32._8_4_ = fVar97 * fVar85;
  auVar32._12_4_ = fVar98 * 0.0;
  NEON_ext(auVar32,auVar32,8,1);
  auVar33._0_4_ = fVar57 * fVar71;
  auVar33._4_4_ = fVar58 * fVar74;
  auVar33._8_4_ = fVar59 * fVar76;
  auVar33._12_4_ = (float)((ulong)uVar62 >> 0x20) * 0.0;
  NEON_ext(auVar33,auVar33,8,1);
  auVar34._0_8_ =
       NEON_ext(CONCAT44(fVar51 + fVar52 + fVar22 + auVar86._0_4_ + auVar86._4_4_ + fVar23,
                         fVar51 + fVar52 + fVar22 + auVar86._0_4_ + auVar86._4_4_ + fVar23),uVar36,4
                ,1);
  NEON_ext(uVar36,CONCAT44(auVar31._0_4_ + auVar31._4_4_ + fVar28 + fVar47 + fVar49 + fVar24,
                           auVar31._0_4_ + auVar31._4_4_ + fVar28 + fVar47 + fVar49 + fVar24),4,1);
  NEON_ext(CONCAT44(auVar89._0_4_ + auVar89._4_4_ + fVar26 + auVar30._0_4_ + auVar30._4_4_ + fVar27,
                    fVar78),
           CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar29 + fVar40 + fVar41 + fVar25,
                    auVar44._0_4_ + auVar44._4_4_ + fVar29 + fVar40 + fVar41 + fVar25),4,1);
  auVar34._8_4_ = fVar78;
  auVar34._12_4_ = 0;
  return auVar34;
}


