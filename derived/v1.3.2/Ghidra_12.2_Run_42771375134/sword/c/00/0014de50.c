/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014de50; name: FUN_0014de50
 */


void FUN_0014de50(long param_1)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined5 uVar14;
  undefined5 uVar15;
  undefined5 uVar16;
  undefined5 uVar17;
  undefined1 (*pauVar18) [16];
  undefined8 *puVar19;
  uint *puVar20;
  undefined8 *puVar21;
  float fVar22;
  byte bVar23;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  float fVar24;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
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
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  float fVar86;
  undefined1 auVar87 [12];
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  float fVar95;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar97;
  float fVar99;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar96;
  float fVar98;
  float fVar100;
  undefined1 auVar94 [16];
  float fVar101;
  float fVar102;
  undefined1 auVar103 [12];
  undefined1 auVar104 [12];
  float fVar109;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar110;
  undefined1 auVar108 [16];
  undefined1 auVar111 [12];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  
  puVar20 = *(uint **)(param_1 + 8);
  puVar19 = *(undefined8 **)(puVar20 + 0x3a);
  if (puVar19 != (undefined8 *)0x0) {
    pauVar18 = *(undefined1 (**) [16])(puVar20 + 2);
    uVar2 = *puVar20;
    pauVar1 = pauVar18 + uVar2;
    puVar21 = *(undefined8 **)(puVar20 + 0x3c);
    bVar23 = (byte)DAT_027369d0;
    bVar25 = (byte)((ulong)DAT_027369d0 >> 8);
    bVar26 = (byte)((ulong)DAT_027369d0 >> 0x10);
    bVar27 = (byte)((ulong)DAT_027369d0 >> 0x18);
    bVar28 = (byte)((ulong)DAT_027369d0 >> 0x20);
    bVar29 = (byte)((ulong)DAT_027369d0 >> 0x28);
    bVar30 = (byte)((ulong)DAT_027369d0 >> 0x30);
    bVar31 = (byte)((ulong)DAT_027369d0 >> 0x38);
    bVar32 = (byte)DAT_027369d8;
    bVar33 = (byte)((ulong)DAT_027369d8 >> 8);
    bVar34 = (byte)((ulong)DAT_027369d8 >> 0x10);
    bVar35 = (byte)((ulong)DAT_027369d8 >> 0x18);
    bVar36 = (byte)((ulong)DAT_027369d8 >> 0x20);
    bVar37 = (byte)((ulong)DAT_027369d8 >> 0x28);
    bVar38 = (byte)((ulong)DAT_027369d8 >> 0x30);
    bVar39 = (byte)((ulong)DAT_027369d8 >> 0x38);
    if (puVar21 == (undefined8 *)0x0) {
      if (uVar2 != 0) {
        fVar3 = *(float *)PTR_DAT_02710d80;
        auVar40 = NEON_fmov(0x3f800000,4);
        do {
          auVar121 = *pauVar18;
          uVar43 = *(undefined8 *)(pauVar18[1] + 8);
          uVar41 = *(undefined8 *)pauVar18[1];
          fVar24 = (float)CONCAT13(auVar121[3] & bVar27,
                                   CONCAT12(auVar121[2] & bVar26,
                                            CONCAT11(auVar121[1] & bVar25,auVar121[0] & bVar23)));
          fVar46 = (float)CONCAT13(auVar121[0xb] & bVar35,
                                   CONCAT12(auVar121[10] & bVar34,
                                            CONCAT11(auVar121[9] & bVar33,auVar121[8] & bVar32)));
          fVar13 = (float)*puVar19 - fVar24;
          fVar102 = (float)((ulong)*puVar19 >> 0x20) -
                    (float)(CONCAT17(auVar121[7] & bVar31,
                                     CONCAT16(auVar121[6] & bVar30,
                                              CONCAT15(auVar121[5] & bVar29,
                                                       CONCAT14(auVar121[4] & bVar28,fVar24)))) >>
                           0x20);
          bVar77 = (byte)((uint)fVar102 >> 8);
          bVar78 = (byte)((uint)fVar102 >> 0x10);
          bVar79 = (byte)((uint)fVar102 >> 0x18);
          fVar109 = (float)puVar19[1] - fVar46;
          bVar80 = (byte)((uint)fVar109 >> 8);
          bVar81 = (byte)((uint)fVar109 >> 0x10);
          bVar82 = (byte)((uint)fVar109 >> 0x18);
          fVar110 = (float)((ulong)puVar19[1] >> 0x20) -
                    (float)(CONCAT17(auVar121[0xf] & bVar39,
                                     CONCAT16(auVar121[0xe] & bVar38,
                                              CONCAT15(auVar121[0xd] & bVar37,
                                                       CONCAT14(auVar121[0xc] & bVar36,fVar46)))) >>
                           0x20);
          bVar83 = (byte)((uint)fVar110 >> 8);
          bVar84 = (byte)((uint)fVar110 >> 0x10);
          bVar85 = (byte)((uint)fVar110 >> 0x18);
          fVar24 = (float)CONCAT13((byte)((ulong)uVar41 >> 0x18) & bVar27,
                                   CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar26,
                                            CONCAT11((byte)((ulong)uVar41 >> 8) & bVar25,
                                                     (byte)uVar41 & bVar23)));
          fVar46 = (float)CONCAT13((byte)((ulong)uVar43 >> 0x18) & bVar35,
                                   CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar34,
                                            CONCAT11((byte)((ulong)uVar43 >> 8) & bVar33,
                                                     (byte)uVar43 & bVar32)));
          fVar6 = (float)puVar19[2] - fVar24;
          fVar101 = (float)((ulong)puVar19[2] >> 0x20) -
                    (float)(CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar31,
                                     CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar30,
                                              CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar29,
                                                       CONCAT14((byte)((ulong)uVar41 >> 0x20) &
                                                                bVar28,fVar24)))) >> 0x20);
          bVar59 = (byte)((uint)fVar101 >> 8);
          bVar60 = (byte)((uint)fVar101 >> 0x10);
          bVar61 = (byte)((uint)fVar101 >> 0x18);
          fVar7 = (float)puVar19[3] - fVar46;
          bVar62 = (byte)((uint)fVar7 >> 8);
          bVar63 = (byte)((uint)fVar7 >> 0x10);
          bVar64 = (byte)((uint)fVar7 >> 0x18);
          fVar8 = (float)((ulong)puVar19[3] >> 0x20) -
                  (float)(CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar39,
                                   CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar38,
                                            CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar37,
                                                     CONCAT14((byte)((ulong)uVar43 >> 0x20) & bVar36
                                                              ,fVar46)))) >> 0x20);
          bVar65 = (byte)((uint)fVar8 >> 8);
          bVar66 = (byte)((uint)fVar8 >> 0x10);
          bVar67 = (byte)((uint)fVar8 >> 0x18);
          uVar47 = *(undefined8 *)(pauVar18[2] + 8);
          uVar45 = *(undefined8 *)pauVar18[2];
          uVar44 = *(undefined8 *)(pauVar18[3] + 8);
          uVar42 = *(undefined8 *)pauVar18[3];
          fVar9 = (float)puVar19[4] -
                  (float)CONCAT13((byte)((ulong)uVar45 >> 0x18) & bVar27,
                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar26,
                                           CONCAT11((byte)((ulong)uVar45 >> 8) & bVar25,
                                                    (byte)uVar45 & bVar23)));
          fVar10 = (float)((ulong)puVar19[4] >> 0x20) -
                   (float)CONCAT13((byte)((ulong)uVar45 >> 0x38) & bVar31,
                                   CONCAT12((byte)((ulong)uVar45 >> 0x30) & bVar30,
                                            CONCAT11((byte)((ulong)uVar45 >> 0x28) & bVar29,
                                                     (byte)((ulong)uVar45 >> 0x20) & bVar28)));
          bVar68 = (byte)((uint)fVar10 >> 8);
          bVar69 = (byte)((uint)fVar10 >> 0x10);
          bVar70 = (byte)((uint)fVar10 >> 0x18);
          fVar11 = (float)puVar19[5] -
                   (float)CONCAT13((byte)((ulong)uVar47 >> 0x18) & bVar35,
                                   CONCAT12((byte)((ulong)uVar47 >> 0x10) & bVar34,
                                            CONCAT11((byte)((ulong)uVar47 >> 8) & bVar33,
                                                     (byte)uVar47 & bVar32)));
          bVar71 = (byte)((uint)fVar11 >> 8);
          bVar72 = (byte)((uint)fVar11 >> 0x10);
          bVar73 = (byte)((uint)fVar11 >> 0x18);
          fVar12 = (float)((ulong)puVar19[5] >> 0x20) -
                   (float)CONCAT13((byte)((ulong)uVar47 >> 0x38) & bVar39,
                                   CONCAT12((byte)((ulong)uVar47 >> 0x30) & bVar38,
                                            CONCAT11((byte)((ulong)uVar47 >> 0x28) & bVar37,
                                                     (byte)((ulong)uVar47 >> 0x20) & bVar36)));
          bVar74 = (byte)((uint)fVar12 >> 8);
          bVar75 = (byte)((uint)fVar12 >> 0x10);
          bVar76 = (byte)((uint)fVar12 >> 0x18);
          fVar24 = *(float *)(puVar19 + 6) -
                   (float)CONCAT13((byte)((ulong)uVar42 >> 0x18) & bVar27,
                                   CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar26,
                                            CONCAT11((byte)((ulong)uVar42 >> 8) & bVar25,
                                                     (byte)uVar42 & bVar23)));
          fVar46 = *(float *)((long)puVar19 + 0x34) -
                   (float)CONCAT13((byte)((ulong)uVar42 >> 0x38) & bVar31,
                                   CONCAT12((byte)((ulong)uVar42 >> 0x30) & bVar30,
                                            CONCAT11((byte)((ulong)uVar42 >> 0x28) & bVar29,
                                                     (byte)((ulong)uVar42 >> 0x20) & bVar28)));
          bVar50 = (byte)((uint)fVar46 >> 8);
          bVar51 = (byte)((uint)fVar46 >> 0x10);
          bVar52 = (byte)((uint)fVar46 >> 0x18);
          fVar4 = *(float *)(puVar19 + 7) -
                  (float)CONCAT13((byte)((ulong)uVar44 >> 0x18) & bVar35,
                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar34,
                                           CONCAT11((byte)((ulong)uVar44 >> 8) & bVar33,
                                                    (byte)uVar44 & bVar32)));
          bVar53 = (byte)((uint)fVar4 >> 8);
          bVar54 = (byte)((uint)fVar4 >> 0x10);
          bVar55 = (byte)((uint)fVar4 >> 0x18);
          fVar5 = *(float *)((long)puVar19 + 0x3c) -
                  (float)CONCAT13((byte)((ulong)uVar44 >> 0x38) & bVar39,
                                  CONCAT12((byte)((ulong)uVar44 >> 0x30) & bVar38,
                                           CONCAT11((byte)((ulong)uVar44 >> 0x28) & bVar37,
                                                    (byte)((ulong)uVar44 >> 0x20) & bVar36)));
          bVar56 = (byte)((uint)fVar5 >> 8);
          bVar57 = (byte)((uint)fVar5 >> 0x10);
          bVar58 = (byte)((uint)fVar5 >> 0x18);
          fVar86 = (float)(CONCAT17(bVar79,CONCAT16(bVar78,CONCAT15(bVar77,CONCAT14(SUB41(fVar102,0)
                                                                                    ,fVar13)))) >>
                          0x20);
          fVar96 = (float)(CONCAT17(bVar70,CONCAT16(bVar69,CONCAT15(bVar68,CONCAT14(SUB41(fVar10,0),
                                                                                    fVar9)))) >>
                          0x20);
          uVar14 = CONCAT14(bVar73,CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(SUB41(fVar11,0),bVar70))
                                           ));
          uVar15 = CONCAT14(bVar82,CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(SUB41(fVar109,0),bVar79)
                                                           )));
          fVar97 = (float)((uint5)uVar15 >> 8);
          fVar100 = (float)((uint5)uVar14 >> 8);
          fVar95 = (float)(CONCAT17(bVar61,CONCAT16(bVar60,CONCAT15(bVar59,CONCAT14(SUB41(fVar101,0)
                                                                                    ,fVar6)))) >>
                          0x20);
          fVar98 = (float)(CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(SUB41(fVar46,0),
                                                                                    fVar24)))) >>
                          0x20);
          uVar16 = CONCAT14(bVar55,CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(SUB41(fVar4,0),bVar52)))
                           );
          uVar17 = CONCAT14(bVar64,CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(SUB41(fVar7,0),bVar61)))
                           );
          fVar99 = (float)((uint5)uVar17 >> 8);
          fVar22 = (float)((uint5)uVar16 >> 8);
          auVar112._0_4_ = fVar97 * fVar97 + fVar86 * fVar86 + fVar3 + fVar13 * fVar13;
          auVar112._4_4_ = fVar99 * fVar99 + fVar95 * fVar95 + fVar3 + fVar6 * fVar6;
          auVar112._8_4_ = fVar100 * fVar100 + fVar96 * fVar96 + fVar3 + fVar9 * fVar9;
          auVar112._12_4_ = fVar22 * fVar22 + fVar98 * fVar98 + fVar3 + fVar24 * fVar24;
          auVar118 = NEON_frsqrte(auVar112,4);
          auVar119._0_4_ = auVar118._0_4_ * auVar112._0_4_;
          auVar119._4_4_ = auVar118._4_4_ * auVar112._4_4_;
          auVar119._8_4_ = auVar118._8_4_ * auVar112._8_4_;
          auVar119._12_4_ = auVar118._12_4_ * auVar112._12_4_;
          auVar120 = NEON_frsqrts(auVar119,auVar118,4);
          auVar114._0_4_ = auVar118._0_4_ * auVar120._0_4_;
          auVar114._4_4_ = auVar118._4_4_ * auVar120._4_4_;
          auVar114._8_4_ = auVar118._8_4_ * auVar120._8_4_;
          auVar114._12_4_ = auVar118._12_4_ * auVar120._12_4_;
          auVar118._0_4_ = auVar114._0_4_ * auVar112._0_4_;
          auVar118._4_4_ = auVar114._4_4_ * auVar112._4_4_;
          auVar118._8_4_ = auVar114._8_4_ * auVar112._8_4_;
          auVar118._12_4_ = auVar114._12_4_ * auVar112._12_4_;
          auVar112 = NEON_frsqrts(auVar118,auVar114,4);
          fVar86 = auVar40._0_4_ -
                   (float)(CONCAT18(bVar85,CONCAT17(bVar84,CONCAT16(bVar83,CONCAT15(SUB41(fVar110,0)
                                                                                    ,uVar15)))) >>
                          0x28) * auVar114._0_4_ * auVar112._0_4_;
          fVar95 = auVar40._4_4_ -
                   (float)(CONCAT18(bVar67,CONCAT17(bVar66,CONCAT16(bVar65,CONCAT15(SUB41(fVar8,0),
                                                                                    uVar17)))) >>
                          0x28) * auVar114._4_4_ * auVar112._4_4_;
          fVar97 = auVar40._8_4_ -
                   (float)(CONCAT18(bVar76,CONCAT17(bVar75,CONCAT16(bVar74,CONCAT15(SUB41(fVar12,0),
                                                                                    uVar14)))) >>
                          0x28) * auVar114._8_4_ * auVar112._8_4_;
          fVar99 = auVar40._12_4_ -
                   (float)(CONCAT18(bVar58,CONCAT17(bVar57,CONCAT16(bVar56,CONCAT15(SUB41(fVar5,0),
                                                                                    uVar16)))) >>
                          0x28) * auVar114._12_4_ * auVar112._12_4_;
          auVar120._0_4_ = -(uint)(fVar86 < 0.0);
          auVar120._4_4_ = -(uint)(fVar95 < 0.0);
          auVar120._8_4_ = -(uint)(fVar97 < 0.0);
          auVar120._12_4_ = -(uint)(fVar99 < 0.0);
          NEON_ext(auVar120,auVar120,8,1);
          if (CONCAT13((byte)auVar120._12_4_,
                       CONCAT12((byte)auVar120._8_4_,
                                CONCAT11((byte)auVar120._4_4_,(byte)auVar120._0_4_))) != 0) {
            fVar86 = (float)CONCAT13((byte)((uint)auVar120._0_4_ >> 0x18) &
                                     (byte)((uint)fVar86 >> 0x18),
                                     CONCAT12((byte)((uint)auVar120._0_4_ >> 0x10) &
                                              (byte)((uint)fVar86 >> 0x10),
                                              CONCAT11((byte)((uint)auVar120._0_4_ >> 8) &
                                                       (byte)((uint)fVar86 >> 8),
                                                       (byte)auVar120._0_4_ & SUB41(fVar86,0))));
            auVar88._0_8_ =
                 CONCAT17((byte)((uint)auVar120._4_4_ >> 0x18) & (byte)((uint)fVar95 >> 0x18),
                          CONCAT16((byte)((uint)auVar120._4_4_ >> 0x10) &
                                   (byte)((uint)fVar95 >> 0x10),
                                   CONCAT15((byte)((uint)auVar120._4_4_ >> 8) &
                                            (byte)((uint)fVar95 >> 8),
                                            CONCAT14((byte)auVar120._4_4_ & SUB41(fVar95,0),fVar86))
                                  ));
            auVar88[8] = (byte)auVar120._8_4_ & SUB41(fVar97,0);
            auVar88[9] = (byte)((uint)auVar120._8_4_ >> 8) & (byte)((uint)fVar97 >> 8);
            auVar88[10] = (byte)((uint)auVar120._8_4_ >> 0x10) & (byte)((uint)fVar97 >> 0x10);
            auVar88[0xb] = (byte)((uint)auVar120._8_4_ >> 0x18) & (byte)((uint)fVar97 >> 0x18);
            auVar93[0xc] = (byte)auVar120._12_4_ & SUB41(fVar99,0);
            auVar93._0_12_ = auVar88;
            auVar93[0xd] = (byte)((uint)auVar120._12_4_ >> 8) & (byte)((uint)fVar99 >> 8);
            auVar93[0xe] = (byte)((uint)auVar120._12_4_ >> 0x10) & (byte)((uint)fVar99 >> 0x10);
            auVar93[0xf] = (byte)((uint)auVar120._12_4_ >> 0x18) & (byte)((uint)fVar99 >> 0x18);
            fVar95 = (float)((ulong)auVar88._0_8_ >> 0x20);
            fVar97 = auVar88._8_4_;
            fVar99 = auVar93._12_4_;
            *(float *)(*pauVar18 + 8) =
                 (float)CONCAT13(bVar35 & bVar82,
                                 CONCAT12(bVar34 & bVar81,
                                          CONCAT11(bVar33 & bVar80,bVar32 & SUB41(fVar109,0)))) *
                 fVar86 + auVar121._8_4_;
            *(float *)(*pauVar18 + 0xc) =
                 (float)CONCAT13(bVar39 & bVar85,
                                 CONCAT12(bVar38 & bVar84,
                                          CONCAT11(bVar37 & bVar83,bVar36 & SUB41(fVar110,0)))) *
                 fVar86 + auVar121._12_4_;
            *(float *)*pauVar18 =
                 (float)CONCAT13(bVar27 & (byte)((uint)fVar13 >> 0x18),
                                 CONCAT12(bVar26 & (byte)((uint)fVar13 >> 0x10),
                                          CONCAT11(bVar25 & (byte)((uint)fVar13 >> 8),
                                                   bVar23 & SUB41(fVar13,0)))) * fVar86 +
                 auVar121._0_4_;
            *(float *)(*pauVar18 + 4) =
                 (float)CONCAT13(bVar31 & bVar79,
                                 CONCAT12(bVar30 & bVar78,
                                          CONCAT11(bVar29 & bVar77,bVar28 & SUB41(fVar102,0)))) *
                 fVar86 + auVar121._4_4_;
            *(ulong *)(pauVar18[1] + 8) =
                 CONCAT44((float)CONCAT13(bVar39 & bVar67,
                                          CONCAT12(bVar38 & bVar66,
                                                   CONCAT11(bVar37 & bVar65,bVar36 & SUB41(fVar8,0))
                                                  )) * fVar95 + (float)((ulong)uVar43 >> 0x20),
                          (float)CONCAT13(bVar35 & bVar64,
                                          CONCAT12(bVar34 & bVar63,
                                                   CONCAT11(bVar33 & bVar62,bVar32 & SUB41(fVar7,0))
                                                  )) * fVar95 + (float)uVar43);
            *(ulong *)pauVar18[1] =
                 CONCAT44((float)CONCAT13(bVar31 & bVar61,
                                          CONCAT12(bVar30 & bVar60,
                                                   CONCAT11(bVar29 & bVar59,
                                                            bVar28 & SUB41(fVar101,0)))) * fVar95 +
                          (float)((ulong)uVar41 >> 0x20),
                          (float)CONCAT13(bVar27 & (byte)((uint)fVar6 >> 0x18),
                                          CONCAT12(bVar26 & (byte)((uint)fVar6 >> 0x10),
                                                   CONCAT11(bVar25 & (byte)((uint)fVar6 >> 8),
                                                            bVar23 & SUB41(fVar6,0)))) * fVar95 +
                          (float)uVar41);
            *(ulong *)(pauVar18[2] + 8) =
                 CONCAT44((float)CONCAT13(bVar39 & bVar76,
                                          CONCAT12(bVar38 & bVar75,
                                                   CONCAT11(bVar37 & bVar74,bVar36 & SUB41(fVar12,0)
                                                           ))) * fVar97 +
                          (float)((ulong)uVar47 >> 0x20),
                          (float)CONCAT13(bVar35 & bVar73,
                                          CONCAT12(bVar34 & bVar72,
                                                   CONCAT11(bVar33 & bVar71,bVar32 & SUB41(fVar11,0)
                                                           ))) * fVar97 + (float)uVar47);
            *(ulong *)pauVar18[2] =
                 CONCAT44((float)CONCAT13(bVar31 & bVar70,
                                          CONCAT12(bVar30 & bVar69,
                                                   CONCAT11(bVar29 & bVar68,bVar28 & SUB41(fVar10,0)
                                                           ))) * fVar97 +
                          (float)((ulong)uVar45 >> 0x20),
                          (float)CONCAT13(bVar27 & (byte)((uint)fVar9 >> 0x18),
                                          CONCAT12(bVar26 & (byte)((uint)fVar9 >> 0x10),
                                                   CONCAT11(bVar25 & (byte)((uint)fVar9 >> 8),
                                                            bVar23 & SUB41(fVar9,0)))) * fVar97 +
                          (float)uVar45);
            *(float *)(pauVar18[3] + 8) =
                 (float)CONCAT13(bVar35 & bVar55,
                                 CONCAT12(bVar34 & bVar54,
                                          CONCAT11(bVar33 & bVar53,bVar32 & SUB41(fVar4,0)))) *
                 fVar99 + (float)uVar44;
            *(float *)(pauVar18[3] + 0xc) =
                 (float)CONCAT13(bVar39 & bVar58,
                                 CONCAT12(bVar38 & bVar57,
                                          CONCAT11(bVar37 & bVar56,bVar36 & SUB41(fVar5,0)))) *
                 fVar99 + (float)((ulong)uVar44 >> 0x20);
            *(float *)pauVar18[3] =
                 (float)CONCAT13(bVar27 & (byte)((uint)fVar24 >> 0x18),
                                 CONCAT12(bVar26 & (byte)((uint)fVar24 >> 0x10),
                                          CONCAT11(bVar25 & (byte)((uint)fVar24 >> 8),
                                                   bVar23 & SUB41(fVar24,0)))) * fVar99 +
                 (float)uVar42;
            *(float *)(pauVar18[3] + 4) =
                 (float)CONCAT13(bVar31 & bVar52,
                                 CONCAT12(bVar30 & bVar51,
                                          CONCAT11(bVar29 & bVar50,bVar28 & SUB41(fVar46,0)))) *
                 fVar99 + (float)((ulong)uVar42 >> 0x20);
          }
          pauVar18 = pauVar18 + 4;
          puVar19 = puVar19 + 8;
        } while (pauVar18 < pauVar1);
      }
    }
    else if (*(uint *)(param_1 + 800) == 1) {
      if (uVar2 != 0) {
        fVar3 = *(float *)PTR_DAT_02710d80;
        auVar40 = NEON_fmov(0x3f800000,4);
        do {
          auVar121 = *pauVar18;
          uVar43 = *(undefined8 *)(pauVar18[1] + 8);
          uVar41 = *(undefined8 *)pauVar18[1];
          fVar24 = (float)CONCAT13(auVar121[3] & bVar27,
                                   CONCAT12(auVar121[2] & bVar26,
                                            CONCAT11(auVar121[1] & bVar25,auVar121[0] & bVar23)));
          fVar46 = (float)CONCAT13(auVar121[0xb] & bVar35,
                                   CONCAT12(auVar121[10] & bVar34,
                                            CONCAT11(auVar121[9] & bVar33,auVar121[8] & bVar32)));
          fVar13 = (float)*puVar21 - fVar24;
          fVar102 = (float)((ulong)*puVar21 >> 0x20) -
                    (float)(CONCAT17(auVar121[7] & bVar31,
                                     CONCAT16(auVar121[6] & bVar30,
                                              CONCAT15(auVar121[5] & bVar29,
                                                       CONCAT14(auVar121[4] & bVar28,fVar24)))) >>
                           0x20);
          bVar77 = (byte)((uint)fVar102 >> 8);
          bVar78 = (byte)((uint)fVar102 >> 0x10);
          bVar79 = (byte)((uint)fVar102 >> 0x18);
          fVar109 = (float)puVar21[1] - fVar46;
          bVar80 = (byte)((uint)fVar109 >> 8);
          bVar81 = (byte)((uint)fVar109 >> 0x10);
          bVar82 = (byte)((uint)fVar109 >> 0x18);
          fVar110 = (float)((ulong)puVar21[1] >> 0x20) -
                    (float)(CONCAT17(auVar121[0xf] & bVar39,
                                     CONCAT16(auVar121[0xe] & bVar38,
                                              CONCAT15(auVar121[0xd] & bVar37,
                                                       CONCAT14(auVar121[0xc] & bVar36,fVar46)))) >>
                           0x20);
          bVar83 = (byte)((uint)fVar110 >> 8);
          bVar84 = (byte)((uint)fVar110 >> 0x10);
          bVar85 = (byte)((uint)fVar110 >> 0x18);
          fVar24 = (float)CONCAT13((byte)((ulong)uVar41 >> 0x18) & bVar27,
                                   CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar26,
                                            CONCAT11((byte)((ulong)uVar41 >> 8) & bVar25,
                                                     (byte)uVar41 & bVar23)));
          fVar46 = (float)CONCAT13((byte)((ulong)uVar43 >> 0x18) & bVar35,
                                   CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar34,
                                            CONCAT11((byte)((ulong)uVar43 >> 8) & bVar33,
                                                     (byte)uVar43 & bVar32)));
          fVar6 = (float)puVar21[2] - fVar24;
          fVar101 = (float)((ulong)puVar21[2] >> 0x20) -
                    (float)(CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar31,
                                     CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar30,
                                              CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar29,
                                                       CONCAT14((byte)((ulong)uVar41 >> 0x20) &
                                                                bVar28,fVar24)))) >> 0x20);
          bVar59 = (byte)((uint)fVar101 >> 8);
          bVar60 = (byte)((uint)fVar101 >> 0x10);
          bVar61 = (byte)((uint)fVar101 >> 0x18);
          fVar7 = (float)puVar21[3] - fVar46;
          bVar62 = (byte)((uint)fVar7 >> 8);
          bVar63 = (byte)((uint)fVar7 >> 0x10);
          bVar64 = (byte)((uint)fVar7 >> 0x18);
          fVar8 = (float)((ulong)puVar21[3] >> 0x20) -
                  (float)(CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar39,
                                   CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar38,
                                            CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar37,
                                                     CONCAT14((byte)((ulong)uVar43 >> 0x20) & bVar36
                                                              ,fVar46)))) >> 0x20);
          bVar65 = (byte)((uint)fVar8 >> 8);
          bVar66 = (byte)((uint)fVar8 >> 0x10);
          bVar67 = (byte)((uint)fVar8 >> 0x18);
          uVar47 = *(undefined8 *)(pauVar18[2] + 8);
          uVar45 = *(undefined8 *)pauVar18[2];
          uVar44 = *(undefined8 *)(pauVar18[3] + 8);
          uVar42 = *(undefined8 *)pauVar18[3];
          fVar9 = (float)puVar21[4] -
                  (float)CONCAT13((byte)((ulong)uVar45 >> 0x18) & bVar27,
                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar26,
                                           CONCAT11((byte)((ulong)uVar45 >> 8) & bVar25,
                                                    (byte)uVar45 & bVar23)));
          fVar10 = (float)((ulong)puVar21[4] >> 0x20) -
                   (float)CONCAT13((byte)((ulong)uVar45 >> 0x38) & bVar31,
                                   CONCAT12((byte)((ulong)uVar45 >> 0x30) & bVar30,
                                            CONCAT11((byte)((ulong)uVar45 >> 0x28) & bVar29,
                                                     (byte)((ulong)uVar45 >> 0x20) & bVar28)));
          bVar68 = (byte)((uint)fVar10 >> 8);
          bVar69 = (byte)((uint)fVar10 >> 0x10);
          bVar70 = (byte)((uint)fVar10 >> 0x18);
          fVar11 = (float)puVar21[5] -
                   (float)CONCAT13((byte)((ulong)uVar47 >> 0x18) & bVar35,
                                   CONCAT12((byte)((ulong)uVar47 >> 0x10) & bVar34,
                                            CONCAT11((byte)((ulong)uVar47 >> 8) & bVar33,
                                                     (byte)uVar47 & bVar32)));
          bVar71 = (byte)((uint)fVar11 >> 8);
          bVar72 = (byte)((uint)fVar11 >> 0x10);
          bVar73 = (byte)((uint)fVar11 >> 0x18);
          fVar12 = (float)((ulong)puVar21[5] >> 0x20) -
                   (float)CONCAT13((byte)((ulong)uVar47 >> 0x38) & bVar39,
                                   CONCAT12((byte)((ulong)uVar47 >> 0x30) & bVar38,
                                            CONCAT11((byte)((ulong)uVar47 >> 0x28) & bVar37,
                                                     (byte)((ulong)uVar47 >> 0x20) & bVar36)));
          bVar74 = (byte)((uint)fVar12 >> 8);
          bVar75 = (byte)((uint)fVar12 >> 0x10);
          bVar76 = (byte)((uint)fVar12 >> 0x18);
          fVar24 = *(float *)(puVar21 + 6) -
                   (float)CONCAT13((byte)((ulong)uVar42 >> 0x18) & bVar27,
                                   CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar26,
                                            CONCAT11((byte)((ulong)uVar42 >> 8) & bVar25,
                                                     (byte)uVar42 & bVar23)));
          fVar46 = *(float *)((long)puVar21 + 0x34) -
                   (float)CONCAT13((byte)((ulong)uVar42 >> 0x38) & bVar31,
                                   CONCAT12((byte)((ulong)uVar42 >> 0x30) & bVar30,
                                            CONCAT11((byte)((ulong)uVar42 >> 0x28) & bVar29,
                                                     (byte)((ulong)uVar42 >> 0x20) & bVar28)));
          bVar50 = (byte)((uint)fVar46 >> 8);
          bVar51 = (byte)((uint)fVar46 >> 0x10);
          bVar52 = (byte)((uint)fVar46 >> 0x18);
          fVar4 = *(float *)(puVar21 + 7) -
                  (float)CONCAT13((byte)((ulong)uVar44 >> 0x18) & bVar35,
                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar34,
                                           CONCAT11((byte)((ulong)uVar44 >> 8) & bVar33,
                                                    (byte)uVar44 & bVar32)));
          bVar53 = (byte)((uint)fVar4 >> 8);
          bVar54 = (byte)((uint)fVar4 >> 0x10);
          bVar55 = (byte)((uint)fVar4 >> 0x18);
          fVar5 = *(float *)((long)puVar21 + 0x3c) -
                  (float)CONCAT13((byte)((ulong)uVar44 >> 0x38) & bVar39,
                                  CONCAT12((byte)((ulong)uVar44 >> 0x30) & bVar38,
                                           CONCAT11((byte)((ulong)uVar44 >> 0x28) & bVar37,
                                                    (byte)((ulong)uVar44 >> 0x20) & bVar36)));
          bVar56 = (byte)((uint)fVar5 >> 8);
          bVar57 = (byte)((uint)fVar5 >> 0x10);
          bVar58 = (byte)((uint)fVar5 >> 0x18);
          fVar86 = (float)(CONCAT17(bVar79,CONCAT16(bVar78,CONCAT15(bVar77,CONCAT14(SUB41(fVar102,0)
                                                                                    ,fVar13)))) >>
                          0x20);
          fVar96 = (float)(CONCAT17(bVar70,CONCAT16(bVar69,CONCAT15(bVar68,CONCAT14(SUB41(fVar10,0),
                                                                                    fVar9)))) >>
                          0x20);
          uVar14 = CONCAT14(bVar73,CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(SUB41(fVar11,0),bVar70))
                                           ));
          uVar15 = CONCAT14(bVar82,CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(SUB41(fVar109,0),bVar79)
                                                           )));
          fVar97 = (float)((uint5)uVar15 >> 8);
          fVar100 = (float)((uint5)uVar14 >> 8);
          fVar95 = (float)(CONCAT17(bVar61,CONCAT16(bVar60,CONCAT15(bVar59,CONCAT14(SUB41(fVar101,0)
                                                                                    ,fVar6)))) >>
                          0x20);
          fVar98 = (float)(CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(SUB41(fVar46,0),
                                                                                    fVar24)))) >>
                          0x20);
          uVar16 = CONCAT14(bVar55,CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(SUB41(fVar4,0),bVar52)))
                           );
          uVar17 = CONCAT14(bVar64,CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(SUB41(fVar7,0),bVar61)))
                           );
          fVar99 = (float)((uint5)uVar17 >> 8);
          fVar22 = (float)((uint5)uVar16 >> 8);
          auVar90._0_4_ = fVar97 * fVar97 + fVar86 * fVar86 + fVar3 + fVar13 * fVar13;
          auVar90._4_4_ = fVar99 * fVar99 + fVar95 * fVar95 + fVar3 + fVar6 * fVar6;
          auVar90._8_4_ = fVar100 * fVar100 + fVar96 * fVar96 + fVar3 + fVar9 * fVar9;
          auVar90._12_4_ = fVar22 * fVar22 + fVar98 * fVar98 + fVar3 + fVar24 * fVar24;
          auVar112 = NEON_frsqrte(auVar90,4);
          auVar117._0_4_ = auVar112._0_4_ * auVar90._0_4_;
          auVar117._4_4_ = auVar112._4_4_ * auVar90._4_4_;
          auVar117._8_4_ = auVar112._8_4_ * auVar90._8_4_;
          auVar117._12_4_ = auVar112._12_4_ * auVar90._12_4_;
          auVar118 = NEON_frsqrts(auVar117,auVar112,4);
          auVar113._0_4_ = auVar112._0_4_ * auVar118._0_4_;
          auVar113._4_4_ = auVar112._4_4_ * auVar118._4_4_;
          auVar113._8_4_ = auVar112._8_4_ * auVar118._8_4_;
          auVar113._12_4_ = auVar112._12_4_ * auVar118._12_4_;
          auVar91._0_4_ = auVar113._0_4_ * auVar90._0_4_;
          auVar91._4_4_ = auVar113._4_4_ * auVar90._4_4_;
          auVar91._8_4_ = auVar113._8_4_ * auVar90._8_4_;
          auVar91._12_4_ = auVar113._12_4_ * auVar90._12_4_;
          auVar112 = NEON_frsqrts(auVar91,auVar113,4);
          fVar86 = auVar40._0_4_ -
                   (float)(CONCAT18(bVar85,CONCAT17(bVar84,CONCAT16(bVar83,CONCAT15(SUB41(fVar110,0)
                                                                                    ,uVar15)))) >>
                          0x28) * auVar113._0_4_ * auVar112._0_4_;
          fVar95 = auVar40._4_4_ -
                   (float)(CONCAT18(bVar67,CONCAT17(bVar66,CONCAT16(bVar65,CONCAT15(SUB41(fVar8,0),
                                                                                    uVar17)))) >>
                          0x28) * auVar113._4_4_ * auVar112._4_4_;
          fVar97 = auVar40._8_4_ -
                   (float)(CONCAT18(bVar76,CONCAT17(bVar75,CONCAT16(bVar74,CONCAT15(SUB41(fVar12,0),
                                                                                    uVar14)))) >>
                          0x28) * auVar113._8_4_ * auVar112._8_4_;
          fVar99 = auVar40._12_4_ -
                   (float)(CONCAT18(bVar58,CONCAT17(bVar57,CONCAT16(bVar56,CONCAT15(SUB41(fVar5,0),
                                                                                    uVar16)))) >>
                          0x28) * auVar113._12_4_ * auVar112._12_4_;
          auVar105._0_4_ = -(uint)(fVar86 < 0.0);
          auVar105._4_4_ = -(uint)(fVar95 < 0.0);
          auVar105._8_4_ = -(uint)(fVar97 < 0.0);
          auVar105._12_4_ = -(uint)(fVar99 < 0.0);
          NEON_ext(auVar105,auVar105,8,1);
          if (CONCAT13((byte)auVar105._12_4_,
                       CONCAT12((byte)auVar105._8_4_,
                                CONCAT11((byte)auVar105._4_4_,(byte)auVar105._0_4_))) != 0) {
            fVar86 = (float)CONCAT13((byte)((uint)auVar105._0_4_ >> 0x18) &
                                     (byte)((uint)fVar86 >> 0x18),
                                     CONCAT12((byte)((uint)auVar105._0_4_ >> 0x10) &
                                              (byte)((uint)fVar86 >> 0x10),
                                              CONCAT11((byte)((uint)auVar105._0_4_ >> 8) &
                                                       (byte)((uint)fVar86 >> 8),
                                                       (byte)auVar105._0_4_ & SUB41(fVar86,0))));
            auVar87._0_8_ =
                 CONCAT17((byte)((uint)auVar105._4_4_ >> 0x18) & (byte)((uint)fVar95 >> 0x18),
                          CONCAT16((byte)((uint)auVar105._4_4_ >> 0x10) &
                                   (byte)((uint)fVar95 >> 0x10),
                                   CONCAT15((byte)((uint)auVar105._4_4_ >> 8) &
                                            (byte)((uint)fVar95 >> 8),
                                            CONCAT14((byte)auVar105._4_4_ & SUB41(fVar95,0),fVar86))
                                  ));
            auVar87[8] = (byte)auVar105._8_4_ & SUB41(fVar97,0);
            auVar87[9] = (byte)((uint)auVar105._8_4_ >> 8) & (byte)((uint)fVar97 >> 8);
            auVar87[10] = (byte)((uint)auVar105._8_4_ >> 0x10) & (byte)((uint)fVar97 >> 0x10);
            auVar87[0xb] = (byte)((uint)auVar105._8_4_ >> 0x18) & (byte)((uint)fVar97 >> 0x18);
            auVar92[0xc] = (byte)auVar105._12_4_ & SUB41(fVar99,0);
            auVar92._0_12_ = auVar87;
            auVar92[0xd] = (byte)((uint)auVar105._12_4_ >> 8) & (byte)((uint)fVar99 >> 8);
            auVar92[0xe] = (byte)((uint)auVar105._12_4_ >> 0x10) & (byte)((uint)fVar99 >> 0x10);
            auVar92[0xf] = (byte)((uint)auVar105._12_4_ >> 0x18) & (byte)((uint)fVar99 >> 0x18);
            fVar95 = (float)((ulong)auVar87._0_8_ >> 0x20);
            fVar97 = auVar87._8_4_;
            fVar99 = auVar92._12_4_;
            *(float *)(*pauVar18 + 8) =
                 (float)CONCAT13(bVar35 & bVar82,
                                 CONCAT12(bVar34 & bVar81,
                                          CONCAT11(bVar33 & bVar80,bVar32 & SUB41(fVar109,0)))) *
                 fVar86 + auVar121._8_4_;
            *(float *)(*pauVar18 + 0xc) =
                 (float)CONCAT13(bVar39 & bVar85,
                                 CONCAT12(bVar38 & bVar84,
                                          CONCAT11(bVar37 & bVar83,bVar36 & SUB41(fVar110,0)))) *
                 fVar86 + auVar121._12_4_;
            *(float *)*pauVar18 =
                 (float)CONCAT13(bVar27 & (byte)((uint)fVar13 >> 0x18),
                                 CONCAT12(bVar26 & (byte)((uint)fVar13 >> 0x10),
                                          CONCAT11(bVar25 & (byte)((uint)fVar13 >> 8),
                                                   bVar23 & SUB41(fVar13,0)))) * fVar86 +
                 auVar121._0_4_;
            *(float *)(*pauVar18 + 4) =
                 (float)CONCAT13(bVar31 & bVar79,
                                 CONCAT12(bVar30 & bVar78,
                                          CONCAT11(bVar29 & bVar77,bVar28 & SUB41(fVar102,0)))) *
                 fVar86 + auVar121._4_4_;
            *(ulong *)(pauVar18[1] + 8) =
                 CONCAT44((float)CONCAT13(bVar39 & bVar67,
                                          CONCAT12(bVar38 & bVar66,
                                                   CONCAT11(bVar37 & bVar65,bVar36 & SUB41(fVar8,0))
                                                  )) * fVar95 + (float)((ulong)uVar43 >> 0x20),
                          (float)CONCAT13(bVar35 & bVar64,
                                          CONCAT12(bVar34 & bVar63,
                                                   CONCAT11(bVar33 & bVar62,bVar32 & SUB41(fVar7,0))
                                                  )) * fVar95 + (float)uVar43);
            *(ulong *)pauVar18[1] =
                 CONCAT44((float)CONCAT13(bVar31 & bVar61,
                                          CONCAT12(bVar30 & bVar60,
                                                   CONCAT11(bVar29 & bVar59,
                                                            bVar28 & SUB41(fVar101,0)))) * fVar95 +
                          (float)((ulong)uVar41 >> 0x20),
                          (float)CONCAT13(bVar27 & (byte)((uint)fVar6 >> 0x18),
                                          CONCAT12(bVar26 & (byte)((uint)fVar6 >> 0x10),
                                                   CONCAT11(bVar25 & (byte)((uint)fVar6 >> 8),
                                                            bVar23 & SUB41(fVar6,0)))) * fVar95 +
                          (float)uVar41);
            *(ulong *)(pauVar18[2] + 8) =
                 CONCAT44((float)CONCAT13(bVar39 & bVar76,
                                          CONCAT12(bVar38 & bVar75,
                                                   CONCAT11(bVar37 & bVar74,bVar36 & SUB41(fVar12,0)
                                                           ))) * fVar97 +
                          (float)((ulong)uVar47 >> 0x20),
                          (float)CONCAT13(bVar35 & bVar73,
                                          CONCAT12(bVar34 & bVar72,
                                                   CONCAT11(bVar33 & bVar71,bVar32 & SUB41(fVar11,0)
                                                           ))) * fVar97 + (float)uVar47);
            *(ulong *)pauVar18[2] =
                 CONCAT44((float)CONCAT13(bVar31 & bVar70,
                                          CONCAT12(bVar30 & bVar69,
                                                   CONCAT11(bVar29 & bVar68,bVar28 & SUB41(fVar10,0)
                                                           ))) * fVar97 +
                          (float)((ulong)uVar45 >> 0x20),
                          (float)CONCAT13(bVar27 & (byte)((uint)fVar9 >> 0x18),
                                          CONCAT12(bVar26 & (byte)((uint)fVar9 >> 0x10),
                                                   CONCAT11(bVar25 & (byte)((uint)fVar9 >> 8),
                                                            bVar23 & SUB41(fVar9,0)))) * fVar97 +
                          (float)uVar45);
            *(float *)(pauVar18[3] + 8) =
                 (float)CONCAT13(bVar35 & bVar55,
                                 CONCAT12(bVar34 & bVar54,
                                          CONCAT11(bVar33 & bVar53,bVar32 & SUB41(fVar4,0)))) *
                 fVar99 + (float)uVar44;
            *(float *)(pauVar18[3] + 0xc) =
                 (float)CONCAT13(bVar39 & bVar58,
                                 CONCAT12(bVar38 & bVar57,
                                          CONCAT11(bVar37 & bVar56,bVar36 & SUB41(fVar5,0)))) *
                 fVar99 + (float)((ulong)uVar44 >> 0x20);
            *(float *)pauVar18[3] =
                 (float)CONCAT13(bVar27 & (byte)((uint)fVar24 >> 0x18),
                                 CONCAT12(bVar26 & (byte)((uint)fVar24 >> 0x10),
                                          CONCAT11(bVar25 & (byte)((uint)fVar24 >> 8),
                                                   bVar23 & SUB41(fVar24,0)))) * fVar99 +
                 (float)uVar42;
            *(float *)(pauVar18[3] + 4) =
                 (float)CONCAT13(bVar31 & bVar52,
                                 CONCAT12(bVar30 & bVar51,
                                          CONCAT11(bVar29 & bVar50,bVar28 & SUB41(fVar46,0)))) *
                 fVar99 + (float)((ulong)uVar42 >> 0x20);
          }
          pauVar18 = pauVar18 + 4;
          puVar21 = puVar21 + 8;
        } while (pauVar18 < pauVar1);
      }
    }
    else if (uVar2 != 0) {
      fVar24 = *(float *)(param_1 + 0x324) +
               (1.0 - *(float *)(param_1 + 0x324) * (float)*(uint *)(param_1 + 800));
      fVar3 = *(float *)PTR_DAT_02710d80;
      auVar40 = NEON_fmov(0x3f800000,4);
      do {
        fVar101 = (float)puVar19[2];
        fVar7 = (float)((ulong)puVar19[2] >> 0x20);
        fVar8 = (float)puVar19[3];
        fVar9 = (float)((ulong)puVar19[3] >> 0x20);
        fVar46 = (float)*puVar19;
        fVar4 = (float)((ulong)*puVar19 >> 0x20);
        fVar5 = (float)puVar19[1];
        fVar6 = (float)((ulong)puVar19[1] >> 0x20);
        uVar44 = *(undefined8 *)(*pauVar18 + 8);
        uVar42 = *(undefined8 *)*pauVar18;
        uVar47 = *(undefined8 *)(pauVar18[1] + 8);
        uVar45 = *(undefined8 *)pauVar18[1];
        fVar10 = (fVar46 + fVar24 * ((float)*puVar21 - fVar46)) -
                 (float)CONCAT13((byte)((ulong)uVar42 >> 0x18) & bVar27,
                                 CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar26,
                                          CONCAT11((byte)((ulong)uVar42 >> 8) & bVar25,
                                                   (byte)uVar42 & bVar23)));
        fVar11 = (fVar4 + fVar24 * ((float)((ulong)*puVar21 >> 0x20) - fVar4)) -
                 (float)CONCAT13((byte)((ulong)uVar42 >> 0x38) & bVar31,
                                 CONCAT12((byte)((ulong)uVar42 >> 0x30) & bVar30,
                                          CONCAT11((byte)((ulong)uVar42 >> 0x28) & bVar29,
                                                   (byte)((ulong)uVar42 >> 0x20) & bVar28)));
        bVar59 = (byte)((uint)fVar11 >> 8);
        bVar60 = (byte)((uint)fVar11 >> 0x10);
        bVar61 = (byte)((uint)fVar11 >> 0x18);
        fVar12 = (fVar5 + fVar24 * ((float)puVar21[1] - fVar5)) -
                 (float)CONCAT13((byte)((ulong)uVar44 >> 0x18) & bVar35,
                                 CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar34,
                                          CONCAT11((byte)((ulong)uVar44 >> 8) & bVar33,
                                                   (byte)uVar44 & bVar32)));
        bVar62 = (byte)((uint)fVar12 >> 8);
        bVar63 = (byte)((uint)fVar12 >> 0x10);
        bVar64 = (byte)((uint)fVar12 >> 0x18);
        fVar13 = (fVar6 + fVar24 * ((float)((ulong)puVar21[1] >> 0x20) - fVar6)) -
                 (float)CONCAT13((byte)((ulong)uVar44 >> 0x38) & bVar39,
                                 CONCAT12((byte)((ulong)uVar44 >> 0x30) & bVar38,
                                          CONCAT11((byte)((ulong)uVar44 >> 0x28) & bVar37,
                                                   (byte)((ulong)uVar44 >> 0x20) & bVar36)));
        bVar65 = (byte)((uint)fVar13 >> 8);
        bVar66 = (byte)((uint)fVar13 >> 0x10);
        bVar67 = (byte)((uint)fVar13 >> 0x18);
        fVar46 = (fVar101 + fVar24 * ((float)puVar21[2] - fVar101)) -
                 (float)CONCAT13((byte)((ulong)uVar45 >> 0x18) & bVar27,
                                 CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar26,
                                          CONCAT11((byte)((ulong)uVar45 >> 8) & bVar25,
                                                   (byte)uVar45 & bVar23)));
        fVar4 = (fVar7 + fVar24 * ((float)((ulong)puVar21[2] >> 0x20) - fVar7)) -
                (float)CONCAT13((byte)((ulong)uVar45 >> 0x38) & bVar31,
                                CONCAT12((byte)((ulong)uVar45 >> 0x30) & bVar30,
                                         CONCAT11((byte)((ulong)uVar45 >> 0x28) & bVar29,
                                                  (byte)((ulong)uVar45 >> 0x20) & bVar28)));
        bVar50 = (byte)((uint)fVar4 >> 8);
        bVar51 = (byte)((uint)fVar4 >> 0x10);
        bVar52 = (byte)((uint)fVar4 >> 0x18);
        fVar5 = (fVar8 + fVar24 * ((float)puVar21[3] - fVar8)) -
                (float)CONCAT13((byte)((ulong)uVar47 >> 0x18) & bVar35,
                                CONCAT12((byte)((ulong)uVar47 >> 0x10) & bVar34,
                                         CONCAT11((byte)((ulong)uVar47 >> 8) & bVar33,
                                                  (byte)uVar47 & bVar32)));
        bVar53 = (byte)((uint)fVar5 >> 8);
        bVar54 = (byte)((uint)fVar5 >> 0x10);
        bVar55 = (byte)((uint)fVar5 >> 0x18);
        fVar6 = (fVar9 + fVar24 * ((float)((ulong)puVar21[3] >> 0x20) - fVar9)) -
                (float)CONCAT13((byte)((ulong)uVar47 >> 0x38) & bVar39,
                                CONCAT12((byte)((ulong)uVar47 >> 0x30) & bVar38,
                                         CONCAT11((byte)((ulong)uVar47 >> 0x28) & bVar37,
                                                  (byte)((ulong)uVar47 >> 0x20) & bVar36)));
        bVar56 = (byte)((uint)fVar6 >> 8);
        bVar57 = (byte)((uint)fVar6 >> 0x10);
        bVar58 = (byte)((uint)fVar6 >> 0x18);
        uVar43 = *(undefined8 *)(pauVar18[2] + 8);
        uVar41 = *(undefined8 *)pauVar18[2];
        uVar49 = *(undefined8 *)(pauVar18[3] + 8);
        uVar48 = *(undefined8 *)pauVar18[3];
        fVar101 = (float)CONCAT13((byte)((ulong)uVar48 >> 0x18) & bVar27,
                                  CONCAT12((byte)((ulong)uVar48 >> 0x10) & bVar26,
                                           CONCAT11((byte)((ulong)uVar48 >> 8) & bVar25,
                                                    (byte)uVar48 & bVar23)));
        auVar103._0_8_ =
             CONCAT17((byte)((ulong)uVar48 >> 0x38) & bVar31,
                      CONCAT16((byte)((ulong)uVar48 >> 0x30) & bVar30,
                               CONCAT15((byte)((ulong)uVar48 >> 0x28) & bVar29,
                                        CONCAT14((byte)((ulong)uVar48 >> 0x20) & bVar28,fVar101))));
        auVar103[8] = (byte)uVar49 & bVar32;
        auVar103[9] = (byte)((ulong)uVar49 >> 8) & bVar33;
        auVar103[10] = (byte)((ulong)uVar49 >> 0x10) & bVar34;
        auVar103[0xb] = (byte)((ulong)uVar49 >> 0x18) & bVar35;
        auVar121[0xc] = (byte)((ulong)uVar49 >> 0x20) & bVar36;
        auVar121._0_12_ = auVar103;
        auVar121[0xd] = (byte)((ulong)uVar49 >> 0x28) & bVar37;
        auVar121[0xe] = (byte)((ulong)uVar49 >> 0x30) & bVar38;
        auVar121[0xf] = (byte)((ulong)uVar49 >> 0x38) & bVar39;
        fVar99 = (float)CONCAT13((byte)((ulong)uVar41 >> 0x18) & bVar27,
                                 CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar26,
                                          CONCAT11((byte)((ulong)uVar41 >> 8) & bVar25,
                                                   (byte)uVar41 & bVar23)));
        auVar111._0_8_ =
             CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar31,
                      CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar30,
                               CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar29,
                                        CONCAT14((byte)((ulong)uVar41 >> 0x20) & bVar28,fVar99))));
        auVar111[8] = (byte)uVar43 & bVar32;
        auVar111[9] = (byte)((ulong)uVar43 >> 8) & bVar33;
        auVar111[10] = (byte)((ulong)uVar43 >> 0x10) & bVar34;
        auVar111[0xb] = (byte)((ulong)uVar43 >> 0x18) & bVar35;
        auVar115[0xc] = (byte)((ulong)uVar43 >> 0x20) & bVar36;
        auVar115._0_12_ = auVar111;
        auVar115[0xd] = (byte)((ulong)uVar43 >> 0x28) & bVar37;
        auVar115[0xe] = (byte)((ulong)uVar43 >> 0x30) & bVar38;
        auVar115[0xf] = (byte)((ulong)uVar43 >> 0x38) & bVar39;
        fVar101 = (*(float *)(puVar19 + 6) + fVar24 * ((float)puVar21[6] - *(float *)(puVar19 + 6)))
                  - fVar101;
        fVar7 = (*(float *)((long)puVar19 + 0x34) +
                fVar24 * ((float)((ulong)puVar21[6] >> 0x20) - *(float *)((long)puVar19 + 0x34))) -
                (float)((ulong)auVar103._0_8_ >> 0x20);
        bVar68 = (byte)((uint)fVar7 >> 8);
        bVar69 = (byte)((uint)fVar7 >> 0x10);
        bVar70 = (byte)((uint)fVar7 >> 0x18);
        fVar8 = (*(float *)(puVar19 + 7) + fVar24 * ((float)puVar21[7] - *(float *)(puVar19 + 7))) -
                auVar103._8_4_;
        bVar71 = (byte)((uint)fVar8 >> 8);
        bVar72 = (byte)((uint)fVar8 >> 0x10);
        bVar73 = (byte)((uint)fVar8 >> 0x18);
        fVar9 = (*(float *)((long)puVar19 + 0x3c) +
                fVar24 * ((float)((ulong)puVar21[7] >> 0x20) - *(float *)((long)puVar19 + 0x3c))) -
                auVar121._12_4_;
        bVar74 = (byte)((uint)fVar9 >> 8);
        bVar75 = (byte)((uint)fVar9 >> 0x10);
        bVar76 = (byte)((uint)fVar9 >> 0x18);
        fVar99 = (*(float *)(puVar19 + 4) + fVar24 * ((float)puVar21[4] - *(float *)(puVar19 + 4)))
                 - fVar99;
        fVar96 = (*(float *)((long)puVar19 + 0x24) +
                 fVar24 * ((float)((ulong)puVar21[4] >> 0x20) - *(float *)((long)puVar19 + 0x24))) -
                 (float)((ulong)auVar111._0_8_ >> 0x20);
        fVar98 = (*(float *)(puVar19 + 5) + fVar24 * ((float)puVar21[5] - *(float *)(puVar19 + 5)))
                 - auVar111._8_4_;
        fVar100 = (*(float *)((long)puVar19 + 0x2c) +
                  fVar24 * ((float)((ulong)puVar21[5] >> 0x20) - *(float *)((long)puVar19 + 0x2c)))
                  - auVar115._12_4_;
        fVar102 = (float)(CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(SUB41(fVar4,0),
                                                                                   fVar46)))) >>
                         0x20);
        fVar95 = (float)(CONCAT17(bVar70,CONCAT16(bVar69,CONCAT15(bVar68,CONCAT14(SUB41(fVar7,0),
                                                                                  fVar101)))) >>
                        0x20);
        uVar15 = CONCAT14(bVar73,CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(SUB41(fVar8,0),bVar70))));
        uVar14 = CONCAT14(bVar55,CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(SUB41(fVar5,0),bVar52))));
        fVar110 = (float)((uint5)uVar14 >> 8);
        fVar97 = (float)((uint5)uVar15 >> 8);
        fVar109 = (float)(CONCAT17(bVar61,CONCAT16(bVar60,CONCAT15(bVar59,CONCAT14(SUB41(fVar11,0),
                                                                                   fVar10)))) >>
                         0x20);
        uVar16 = CONCAT14(bVar64,CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(SUB41(fVar12,0),bVar61))))
        ;
        fVar86 = (float)((uint5)uVar16 >> 8);
        auVar106._0_4_ = fVar86 * fVar86 + fVar109 * fVar109 + fVar3 + fVar10 * fVar10;
        auVar106._4_4_ = fVar110 * fVar110 + fVar102 * fVar102 + fVar3 + fVar46 * fVar46;
        auVar106._8_4_ = fVar98 * fVar98 + fVar96 * fVar96 + fVar3 + fVar99 * fVar99;
        auVar106._12_4_ = fVar97 * fVar97 + fVar95 * fVar95 + fVar3 + fVar101 * fVar101;
        auVar121 = NEON_frsqrte(auVar106,4);
        auVar123._0_4_ = auVar121._0_4_ * auVar106._0_4_;
        auVar123._4_4_ = auVar121._4_4_ * auVar106._4_4_;
        auVar123._8_4_ = auVar121._8_4_ * auVar106._8_4_;
        auVar123._12_4_ = auVar121._12_4_ * auVar106._12_4_;
        auVar112 = NEON_frsqrts(auVar123,auVar121,4);
        auVar122._0_4_ = auVar121._0_4_ * auVar112._0_4_;
        auVar122._4_4_ = auVar121._4_4_ * auVar112._4_4_;
        auVar122._8_4_ = auVar121._8_4_ * auVar112._8_4_;
        auVar122._12_4_ = auVar121._12_4_ * auVar112._12_4_;
        auVar107._0_4_ = auVar122._0_4_ * auVar106._0_4_;
        auVar107._4_4_ = auVar122._4_4_ * auVar106._4_4_;
        auVar107._8_4_ = auVar122._8_4_ * auVar106._8_4_;
        auVar107._12_4_ = auVar122._12_4_ * auVar106._12_4_;
        auVar121 = NEON_frsqrts(auVar107,auVar122,4);
        fVar102 = auVar40._0_4_ -
                  auVar122._0_4_ * auVar121._0_4_ *
                  (float)(CONCAT18(bVar67,CONCAT17(bVar66,CONCAT16(bVar65,CONCAT15(SUB41(fVar13,0),
                                                                                   uVar16)))) >>
                         0x28);
        fVar109 = auVar40._4_4_ -
                  auVar122._4_4_ * auVar121._4_4_ *
                  (float)(CONCAT18(bVar58,CONCAT17(bVar57,CONCAT16(bVar56,CONCAT15(SUB41(fVar6,0),
                                                                                   uVar14)))) >>
                         0x28);
        fVar110 = auVar40._8_4_ - auVar122._8_4_ * auVar121._8_4_ * fVar100;
        fVar86 = auVar40._12_4_ -
                 auVar122._12_4_ * auVar121._12_4_ *
                 (float)(CONCAT18(bVar76,CONCAT17(bVar75,CONCAT16(bVar74,CONCAT15(SUB41(fVar9,0),
                                                                                  uVar15)))) >> 0x28
                        );
        auVar116._0_4_ = -(uint)(fVar102 < 0.0);
        auVar116._4_4_ = -(uint)(fVar109 < 0.0);
        auVar116._8_4_ = -(uint)(fVar110 < 0.0);
        auVar116._12_4_ = -(uint)(fVar86 < 0.0);
        NEON_ext(auVar116,auVar116,8,1);
        if (CONCAT13((byte)auVar116._12_4_,
                     CONCAT12((byte)auVar116._8_4_,
                              CONCAT11((byte)auVar116._4_4_,(byte)auVar116._0_4_))) != 0) {
          fVar95 = (float)CONCAT13((byte)((uint)auVar116._0_4_ >> 0x18) &
                                   (byte)((uint)fVar102 >> 0x18),
                                   CONCAT12((byte)((uint)auVar116._0_4_ >> 0x10) &
                                            (byte)((uint)fVar102 >> 0x10),
                                            CONCAT11((byte)((uint)auVar116._0_4_ >> 8) &
                                                     (byte)((uint)fVar102 >> 8),
                                                     (byte)auVar116._0_4_ & SUB41(fVar102,0))));
          auVar104._0_8_ =
               CONCAT17((byte)((uint)auVar116._4_4_ >> 0x18) & (byte)((uint)fVar109 >> 0x18),
                        CONCAT16((byte)((uint)auVar116._4_4_ >> 0x10) &
                                 (byte)((uint)fVar109 >> 0x10),
                                 CONCAT15((byte)((uint)auVar116._4_4_ >> 8) &
                                          (byte)((uint)fVar109 >> 8),
                                          CONCAT14((byte)auVar116._4_4_ & SUB41(fVar109,0),fVar95)))
                       );
          auVar104[8] = (byte)auVar116._8_4_ & SUB41(fVar110,0);
          auVar104[9] = (byte)((uint)auVar116._8_4_ >> 8) & (byte)((uint)fVar110 >> 8);
          auVar104[10] = (byte)((uint)auVar116._8_4_ >> 0x10) & (byte)((uint)fVar110 >> 0x10);
          auVar104[0xb] = (byte)((uint)auVar116._8_4_ >> 0x18) & (byte)((uint)fVar110 >> 0x18);
          auVar108[0xc] = (byte)auVar116._12_4_ & SUB41(fVar86,0);
          auVar108._0_12_ = auVar104;
          auVar108[0xd] = (byte)((uint)auVar116._12_4_ >> 8) & (byte)((uint)fVar86 >> 8);
          auVar108[0xe] = (byte)((uint)auVar116._12_4_ >> 0x10) & (byte)((uint)fVar86 >> 0x10);
          auVar108[0xf] = (byte)((uint)auVar116._12_4_ >> 0x18) & (byte)((uint)fVar86 >> 0x18);
          fVar110 = (float)CONCAT13(bVar27 & (byte)((uint)fVar99 >> 0x18),
                                    CONCAT12(bVar26 & (byte)((uint)fVar99 >> 0x10),
                                             CONCAT11(bVar25 & (byte)((uint)fVar99 >> 8),
                                                      bVar23 & SUB41(fVar99,0))));
          auVar89._0_8_ =
               CONCAT17(bVar31 & (byte)((uint)fVar96 >> 0x18),
                        CONCAT16(bVar30 & (byte)((uint)fVar96 >> 0x10),
                                 CONCAT15(bVar29 & (byte)((uint)fVar96 >> 8),
                                          CONCAT14(bVar28 & SUB41(fVar96,0),fVar110))));
          auVar89[8] = bVar32 & SUB41(fVar98,0);
          auVar89[9] = bVar33 & (byte)((uint)fVar98 >> 8);
          auVar89[10] = bVar34 & (byte)((uint)fVar98 >> 0x10);
          auVar89[0xb] = bVar35 & (byte)((uint)fVar98 >> 0x18);
          auVar94[0xc] = bVar36 & SUB41(fVar100,0);
          auVar94._0_12_ = auVar89;
          auVar94[0xd] = bVar37 & (byte)((uint)fVar100 >> 8);
          auVar94[0xe] = bVar38 & (byte)((uint)fVar100 >> 0x10);
          auVar94[0xf] = bVar39 & (byte)((uint)fVar100 >> 0x18);
          fVar86 = (float)((ulong)auVar104._0_8_ >> 0x20);
          fVar97 = auVar104._8_4_;
          fVar99 = auVar108._12_4_;
          fVar102 = (float)((ulong)auVar89._0_8_ >> 0x20) * fVar97 + (float)((ulong)uVar41 >> 0x20);
          fVar109 = auVar94._12_4_ * fVar97 + (float)((ulong)uVar43 >> 0x20);
          *(ulong *)(*pauVar18 + 8) =
               CONCAT44((float)CONCAT13(bVar39 & bVar67,
                                        CONCAT12(bVar38 & bVar66,
                                                 CONCAT11(bVar37 & bVar65,bVar36 & SUB41(fVar13,0)))
                                       ) * fVar95 + (float)((ulong)uVar44 >> 0x20),
                        (float)CONCAT13(bVar35 & bVar64,
                                        CONCAT12(bVar34 & bVar63,
                                                 CONCAT11(bVar33 & bVar62,bVar32 & SUB41(fVar12,0)))
                                       ) * fVar95 + (float)uVar44);
          *(ulong *)*pauVar18 =
               CONCAT44((float)CONCAT13(bVar31 & bVar61,
                                        CONCAT12(bVar30 & bVar60,
                                                 CONCAT11(bVar29 & bVar59,bVar28 & SUB41(fVar11,0)))
                                       ) * fVar95 + (float)((ulong)uVar42 >> 0x20),
                        (float)CONCAT13(bVar27 & (byte)((uint)fVar10 >> 0x18),
                                        CONCAT12(bVar26 & (byte)((uint)fVar10 >> 0x10),
                                                 CONCAT11(bVar25 & (byte)((uint)fVar10 >> 8),
                                                          bVar23 & SUB41(fVar10,0)))) * fVar95 +
                        (float)uVar42);
          *(ulong *)(pauVar18[1] + 8) =
               CONCAT44((float)CONCAT13(bVar39 & bVar58,
                                        CONCAT12(bVar38 & bVar57,
                                                 CONCAT11(bVar37 & bVar56,bVar36 & SUB41(fVar6,0))))
                        * fVar86 + (float)((ulong)uVar47 >> 0x20),
                        (float)CONCAT13(bVar35 & bVar55,
                                        CONCAT12(bVar34 & bVar54,
                                                 CONCAT11(bVar33 & bVar53,bVar32 & SUB41(fVar5,0))))
                        * fVar86 + (float)uVar47);
          *(ulong *)pauVar18[1] =
               CONCAT44((float)CONCAT13(bVar31 & bVar52,
                                        CONCAT12(bVar30 & bVar51,
                                                 CONCAT11(bVar29 & bVar50,bVar28 & SUB41(fVar4,0))))
                        * fVar86 + (float)((ulong)uVar45 >> 0x20),
                        (float)CONCAT13(bVar27 & (byte)((uint)fVar46 >> 0x18),
                                        CONCAT12(bVar26 & (byte)((uint)fVar46 >> 0x10),
                                                 CONCAT11(bVar25 & (byte)((uint)fVar46 >> 8),
                                                          bVar23 & SUB41(fVar46,0)))) * fVar86 +
                        (float)uVar45);
          *(ulong *)(pauVar18[2] + 8) =
               CONCAT17((char)((uint)fVar109 >> 0x18),
                        CONCAT16((char)((uint)fVar109 >> 0x10),
                                 CONCAT15((char)((uint)fVar109 >> 8),
                                          CONCAT14(SUB41(fVar109,0),
                                                   auVar89._8_4_ * fVar97 + (float)uVar43))));
          *(ulong *)pauVar18[2] =
               CONCAT17((char)((uint)fVar102 >> 0x18),
                        CONCAT16((char)((uint)fVar102 >> 0x10),
                                 CONCAT15((char)((uint)fVar102 >> 8),
                                          CONCAT14(SUB41(fVar102,0),fVar110 * fVar97 + (float)uVar41
                                                  ))));
          *(ulong *)(pauVar18[3] + 8) =
               CONCAT44((float)CONCAT13(bVar39 & bVar76,
                                        CONCAT12(bVar38 & bVar75,
                                                 CONCAT11(bVar37 & bVar74,bVar36 & SUB41(fVar9,0))))
                        * fVar99 + (float)((ulong)uVar49 >> 0x20),
                        (float)CONCAT13(bVar35 & bVar73,
                                        CONCAT12(bVar34 & bVar72,
                                                 CONCAT11(bVar33 & bVar71,bVar32 & SUB41(fVar8,0))))
                        * fVar99 + (float)uVar49);
          *(ulong *)pauVar18[3] =
               CONCAT44((float)CONCAT13(bVar31 & bVar70,
                                        CONCAT12(bVar30 & bVar69,
                                                 CONCAT11(bVar29 & bVar68,bVar28 & SUB41(fVar7,0))))
                        * fVar99 + (float)((ulong)uVar48 >> 0x20),
                        (float)CONCAT13(bVar27 & (byte)((uint)fVar101 >> 0x18),
                                        CONCAT12(bVar26 & (byte)((uint)fVar101 >> 0x10),
                                                 CONCAT11(bVar25 & (byte)((uint)fVar101 >> 8),
                                                          bVar23 & SUB41(fVar101,0)))) * fVar99 +
                        (float)uVar48);
        }
        pauVar18 = pauVar18 + 4;
        puVar21 = puVar21 + 8;
        puVar19 = puVar19 + 8;
      } while (pauVar18 < pauVar1);
    }
  }
  return;
}


