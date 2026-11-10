/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014cd50; name: FUN_0014cd50
 */


void FUN_0014cd50(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 (*pauVar19) [16];
  uint *puVar20;
  float *pfVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  float fVar30;
  byte bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
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
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [12];
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  byte bVar78;
  byte bVar79;
  byte bVar80;
  int iVar81;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar87;
  byte bVar88;
  undefined8 uVar82;
  int iVar86;
  byte bVar89;
  int iVar90;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar96;
  byte bVar97;
  undefined8 uVar91;
  int iVar95;
  byte bVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  float fVar117;
  float fVar118;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  
  puVar20 = *(uint **)(param_1 + 8);
  puVar22 = *(undefined8 **)(puVar20 + 0x3e);
  uVar1 = *puVar20;
  uVar23 = (ulong)uVar1;
  pauVar19 = *(undefined1 (**) [16])(puVar20 + 2);
  pfVar21 = *(float **)(puVar20 + 4);
  fVar25 = (float)*(undefined8 *)(param_1 + 0x280);
  fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x280) >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_1 + 0x288);
  fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x288) >> 0x20);
  bVar45 = (byte)DAT_027369b0;
  bVar46 = (byte)((ulong)DAT_027369b0 >> 8);
  bVar47 = (byte)((ulong)DAT_027369b0 >> 0x10);
  bVar48 = (byte)((ulong)DAT_027369b0 >> 0x18);
  bVar49 = (byte)((ulong)DAT_027369b0 >> 0x20);
  bVar50 = (byte)((ulong)DAT_027369b0 >> 0x28);
  bVar51 = (byte)((ulong)DAT_027369b0 >> 0x30);
  bVar52 = (byte)((ulong)DAT_027369b0 >> 0x38);
  bVar53 = (byte)DAT_027369b8;
  bVar54 = (byte)((ulong)DAT_027369b8 >> 8);
  bVar55 = (byte)((ulong)DAT_027369b8 >> 0x10);
  bVar56 = (byte)((ulong)DAT_027369b8 >> 0x18);
  bVar57 = (byte)((ulong)DAT_027369b8 >> 0x20);
  bVar58 = (byte)((ulong)DAT_027369b8 >> 0x28);
  bVar59 = (byte)((ulong)DAT_027369b8 >> 0x30);
  bVar60 = (byte)((ulong)DAT_027369b8 >> 0x38);
  fVar37 = (float)DAT_02736a10;
  fVar38 = (float)((ulong)DAT_02736a10 >> 0x20);
  fVar39 = (float)DAT_02736a18;
  fVar40 = (float)((ulong)DAT_02736a18 >> 0x20);
  fVar41 = (float)DAT_02736a00;
  fVar42 = (float)((ulong)DAT_02736a00 >> 0x20);
  fVar43 = (float)DAT_02736a08;
  fVar44 = (float)((ulong)DAT_02736a08 >> 0x20);
  if (puVar22 == (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x32c) == '\0') {
      if (uVar1 != 0) {
        uVar64 = *(undefined8 *)(param_1 + 0x2b8);
        uVar62 = *(undefined8 *)(param_1 + 0x2b0);
        uVar68 = *(undefined8 *)(param_1 + 0x298);
        uVar66 = *(undefined8 *)(param_1 + 0x290);
        lVar24 = uVar23 << 4;
        do {
          uVar61 = *(undefined8 *)(*pauVar19 + 8);
          auVar73._0_4_ = -(uint)(fVar37 < (float)*(undefined8 *)*pauVar19);
          auVar73._4_4_ = -(uint)(fVar38 < (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20));
          auVar73._8_4_ = -(uint)(fVar39 < (float)uVar61);
          auVar73._12_4_ = -(uint)(fVar40 < (float)((ulong)uVar61 >> 0x20));
          uVar65 = *(undefined8 *)(pfVar21 + 2);
          bVar29 = (byte)((ulong)uVar65 >> 8);
          bVar31 = (byte)((ulong)uVar65 >> 0x10);
          bVar32 = (byte)((ulong)uVar65 >> 0x18);
          bVar33 = (byte)((ulong)uVar65 >> 0x20);
          bVar78 = (byte)((ulong)uVar65 >> 0x28);
          bVar79 = (byte)((ulong)uVar65 >> 0x30);
          bVar80 = (byte)((ulong)uVar65 >> 0x38);
          uVar63 = *(undefined8 *)pfVar21;
          auVar2[9] = (char)((ulong)uVar61 >> 8);
          auVar2._0_9_ = *(unkbyte9 *)*pauVar19;
          auVar2[10] = (char)((ulong)uVar61 >> 0x10);
          auVar2[0xb] = (char)((ulong)uVar61 >> 0x18);
          auVar2[0xc] = (char)((ulong)uVar61 >> 0x20);
          auVar2[0xd] = (char)((ulong)uVar61 >> 0x28);
          auVar2[0xe] = (char)((ulong)uVar61 >> 0x30);
          auVar2[0xf] = (char)((ulong)uVar61 >> 0x38);
          auVar4[9] = bVar29;
          auVar4._0_9_ = *(unkbyte9 *)pfVar21;
          auVar4[10] = bVar31;
          auVar4[0xb] = bVar32;
          auVar4[0xc] = bVar33;
          auVar4[0xd] = bVar78;
          auVar4[0xe] = bVar79;
          auVar4[0xf] = bVar80;
          auVar74[9] = bVar29;
          auVar74._0_9_ = *(unkbyte9 *)pfVar21;
          auVar74[10] = bVar31;
          auVar74[0xb] = bVar32;
          auVar74[0xc] = bVar33;
          auVar74[0xd] = bVar78;
          auVar74[0xe] = bVar79;
          auVar74[0xf] = bVar80;
          auVar74 = auVar74 ^ (auVar4 ^ auVar2) & auVar73;
          fVar36 = (float)((ulong)uVar65 >> 0x20);
          iVar81 = -(uint)(fVar41 < fVar36);
          iVar86 = -(uint)(fVar42 < fVar36);
          iVar90 = -(uint)(fVar43 < fVar36);
          iVar95 = -(uint)(fVar44 < fVar36);
          fVar30 = fVar25 + (float)uVar62 * (auVar74._0_4_ - (float)uVar63);
          fVar34 = fVar26 + (float)((ulong)uVar62 >> 0x20) *
                            (auVar74._4_4_ - (float)((ulong)uVar63 >> 0x20));
          fVar35 = fVar27 + (float)uVar64 * (auVar74._8_4_ - (float)uVar65);
          fVar36 = fVar28 + (float)((ulong)uVar64 >> 0x20) * (auVar74._12_4_ - fVar36);
          bVar83 = (byte)((uint)iVar81 >> 8);
          bVar84 = (byte)((uint)iVar81 >> 0x10);
          bVar85 = (byte)((uint)iVar81 >> 0x18);
          bVar87 = (byte)((uint)iVar86 >> 8);
          bVar88 = (byte)((uint)iVar86 >> 0x10);
          bVar89 = (byte)((uint)iVar86 >> 0x18);
          bVar92 = (byte)((uint)iVar90 >> 8);
          bVar93 = (byte)((uint)iVar90 >> 0x10);
          bVar94 = (byte)((uint)iVar90 >> 0x18);
          bVar96 = (byte)((uint)iVar95 >> 8);
          bVar97 = (byte)((uint)iVar95 >> 0x10);
          bVar98 = (byte)((uint)iVar95 >> 0x18);
          fVar70 = (float)CONCAT13((byte)((ulong)uVar66 >> 0x18) & bVar85,
                                   CONCAT12((byte)((ulong)uVar66 >> 0x10) & bVar84,
                                            CONCAT11((byte)((ulong)uVar66 >> 8) & bVar83,
                                                     (byte)uVar66 & (byte)iVar81)));
          fVar69 = (float)CONCAT13((byte)((ulong)uVar68 >> 0x18) & bVar94,
                                   CONCAT12((byte)((ulong)uVar68 >> 0x10) & bVar93,
                                            CONCAT11((byte)((ulong)uVar68 >> 8) & bVar92,
                                                     (byte)uVar68 & (byte)iVar90)));
          fVar34 = auVar74._4_4_ +
                   (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & bVar89,
                                   CONCAT12((byte)((uint)fVar34 >> 0x10) & bVar88,
                                            CONCAT11((byte)((uint)fVar34 >> 8) & bVar87,
                                                     SUB41(fVar34,0) & (byte)iVar86)));
          fVar36 = auVar74._12_4_ +
                   (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & bVar98,
                                   CONCAT12((byte)((uint)fVar36 >> 0x10) & bVar97,
                                            CONCAT11((byte)((uint)fVar36 >> 8) & bVar96,
                                                     SUB41(fVar36,0) & (byte)iVar95)));
          lVar24 = lVar24 + -0x10;
          *(ulong *)(*pauVar19 + 8) =
               CONCAT17((char)((uint)fVar36 >> 0x18),
                        CONCAT16((char)((uint)fVar36 >> 0x10),
                                 CONCAT15((char)((uint)fVar36 >> 8),
                                          CONCAT14(SUB41(fVar36,0),
                                                   auVar74._8_4_ +
                                                   (float)CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                                   bVar94,CONCAT12((byte)((uint)
                                                  fVar35 >> 0x10) & bVar93,
                                                  CONCAT11((byte)((uint)fVar35 >> 8) & bVar92,
                                                           SUB41(fVar35,0) & (byte)iVar90)))))));
          *(ulong *)*pauVar19 =
               CONCAT17((char)((uint)fVar34 >> 0x18),
                        CONCAT16((char)((uint)fVar34 >> 0x10),
                                 CONCAT15((char)((uint)fVar34 >> 8),
                                          CONCAT14(SUB41(fVar34,0),
                                                   auVar74._0_4_ +
                                                   (float)CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                                   bVar85,CONCAT12((byte)((uint)
                                                  fVar30 >> 0x10) & bVar84,
                                                  CONCAT11((byte)((uint)fVar30 >> 8) & bVar83,
                                                           SUB41(fVar30,0) & (byte)iVar81)))))));
          fVar30 = (float)CONCAT13(auVar74[7] & ~bVar52 | (byte)((ulong)uVar63 >> 0x38) & bVar52,
                                   CONCAT12(auVar74[6] & ~bVar51 |
                                            (byte)((ulong)uVar63 >> 0x30) & bVar51,
                                            CONCAT11(auVar74[5] & ~bVar50 |
                                                     (byte)((ulong)uVar63 >> 0x28) & bVar50,
                                                     auVar74[4] & ~bVar49 |
                                                     (byte)((ulong)uVar63 >> 0x20) & bVar49))) +
                   (float)(CONCAT17((byte)((ulong)uVar66 >> 0x38) & bVar89,
                                    CONCAT16((byte)((ulong)uVar66 >> 0x30) & bVar88,
                                             CONCAT15((byte)((ulong)uVar66 >> 0x28) & bVar87,
                                                      CONCAT14((byte)((ulong)uVar66 >> 0x20) &
                                                               (byte)iVar86,fVar70)))) >> 0x20);
          fVar34 = (float)CONCAT13(auVar74[0xf] & ~bVar60 | bVar80 & bVar60,
                                   CONCAT12(auVar74[0xe] & ~bVar59 | bVar79 & bVar59,
                                            CONCAT11(auVar74[0xd] & ~bVar58 | bVar78 & bVar58,
                                                     auVar74[0xc] & ~bVar57 | bVar33 & bVar57))) +
                   (float)(CONCAT17((byte)((ulong)uVar68 >> 0x38) & bVar98,
                                    CONCAT16((byte)((ulong)uVar68 >> 0x30) & bVar97,
                                             CONCAT15((byte)((ulong)uVar68 >> 0x28) & bVar96,
                                                      CONCAT14((byte)((ulong)uVar68 >> 0x20) &
                                                               (byte)iVar95,fVar69)))) >> 0x20);
          *(ulong *)(pfVar21 + 2) =
               CONCAT17((char)((uint)fVar34 >> 0x18),
                        CONCAT16((char)((uint)fVar34 >> 0x10),
                                 CONCAT15((char)((uint)fVar34 >> 8),
                                          CONCAT14(SUB41(fVar34,0),
                                                   (float)CONCAT13(auVar74[0xb] & ~bVar56 |
                                                                   bVar32 & bVar56,
                                                                   CONCAT12(auVar74[10] & ~bVar55 |
                                                                            bVar31 & bVar55,
                                                                            CONCAT11(auVar74[9] &
                                                                                     ~bVar54 | 
                                                  bVar29 & bVar54,
                                                  auVar74[8] & ~bVar53 | (byte)uVar65 & bVar53))) +
                                                  fVar69))));
          *(ulong *)pfVar21 =
               CONCAT17((char)((uint)fVar30 >> 0x18),
                        CONCAT16((char)((uint)fVar30 >> 0x10),
                                 CONCAT15((char)((uint)fVar30 >> 8),
                                          CONCAT14(SUB41(fVar30,0),
                                                   (float)CONCAT13(auVar74[3] & ~bVar48 |
                                                                   (byte)((ulong)uVar63 >> 0x18) &
                                                                   bVar48,CONCAT12(auVar74[2] &
                                                                                   ~bVar47 | (byte)(
                                                  (ulong)uVar63 >> 0x10) & bVar47,
                                                  CONCAT11(auVar74[1] & ~bVar46 |
                                                           (byte)((ulong)uVar63 >> 8) & bVar46,
                                                           auVar74[0] & ~bVar45 |
                                                           (byte)uVar63 & bVar45))) + fVar70))));
          pauVar19 = pauVar19 + 1;
          pfVar21 = pfVar21 + 4;
        } while (lVar24 != 0);
      }
    }
    else if (uVar1 != 0) {
      uVar63 = *(undefined8 *)(param_1 + 0x2b8);
      uVar61 = *(undefined8 *)(param_1 + 0x2b0);
      uVar67 = *(undefined8 *)(param_1 + 0x2c8);
      uVar65 = *(undefined8 *)(param_1 + 0x2c0);
      lVar24 = uVar23 << 4;
      bVar29 = *(byte *)(param_1 + 0x290);
      bVar31 = *(byte *)(param_1 + 0x291);
      bVar32 = *(byte *)(param_1 + 0x292);
      bVar33 = *(byte *)(param_1 + 0x293);
      bVar78 = *(byte *)(param_1 + 0x294);
      bVar79 = *(byte *)(param_1 + 0x295);
      bVar80 = *(byte *)(param_1 + 0x296);
      bVar83 = *(byte *)(param_1 + 0x297);
      bVar84 = *(byte *)(param_1 + 0x298);
      bVar85 = *(byte *)(param_1 + 0x299);
      bVar87 = *(byte *)(param_1 + 0x29a);
      bVar88 = *(byte *)(param_1 + 0x29b);
      bVar89 = *(byte *)(param_1 + 0x29c);
      bVar92 = *(byte *)(param_1 + 0x29d);
      bVar93 = *(byte *)(param_1 + 0x29e);
      bVar94 = *(byte *)(param_1 + 0x29f);
      uVar64 = *(undefined8 *)(param_1 + 0x2d8);
      uVar62 = *(undefined8 *)(param_1 + 0x2d0);
      fVar30 = *(float *)(param_1 + 0x2e0);
      fVar34 = *(float *)(param_1 + 0x2e4);
      fVar35 = *(float *)(param_1 + 0x2e8);
      fVar36 = *(float *)(param_1 + 0x2ec);
      uVar68 = *(undefined8 *)(param_1 + 0x2f8);
      uVar66 = *(undefined8 *)(param_1 + 0x2f0);
      uVar91 = *(undefined8 *)(param_1 + 0x308);
      uVar82 = *(undefined8 *)(param_1 + 0x300);
      do {
        uVar7 = *(undefined8 *)(pfVar21 + 2);
        bVar96 = (byte)((ulong)uVar7 >> 8);
        bVar97 = (byte)((ulong)uVar7 >> 0x10);
        bVar98 = (byte)((ulong)uVar7 >> 0x18);
        bVar101 = (byte)((ulong)uVar7 >> 0x20);
        bVar102 = (byte)((ulong)uVar7 >> 0x28);
        bVar103 = (byte)((ulong)uVar7 >> 0x30);
        bVar104 = (byte)((ulong)uVar7 >> 0x38);
        uVar6 = *(undefined8 *)pfVar21;
        fVar70 = (float)uVar6;
        uVar17 = *(undefined8 *)(*pauVar19 + 8);
        fVar69 = (float)((ulong)uVar6 >> 0x20);
        auVar121._0_4_ = -(uint)(fVar37 < (float)*(undefined8 *)*pauVar19);
        auVar121._4_4_ = -(uint)(fVar38 < (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20));
        auVar121._8_4_ = -(uint)(fVar39 < (float)uVar17);
        auVar121._12_4_ = -(uint)(fVar40 < (float)((ulong)uVar17 >> 0x20));
        lVar24 = lVar24 + -0x10;
        auVar5[9] = bVar96;
        auVar5._0_9_ = *(unkbyte9 *)pfVar21;
        auVar5[10] = bVar97;
        auVar5[0xb] = bVar98;
        auVar5[0xc] = bVar101;
        auVar5[0xd] = bVar102;
        auVar5[0xe] = bVar103;
        auVar5[0xf] = bVar104;
        auVar18[9] = (char)((ulong)uVar17 >> 8);
        auVar18._0_9_ = *(unkbyte9 *)*pauVar19;
        auVar18[10] = (char)((ulong)uVar17 >> 0x10);
        auVar18[0xb] = (char)((ulong)uVar17 >> 0x18);
        auVar18[0xc] = (char)((ulong)uVar17 >> 0x20);
        auVar18[0xd] = (char)((ulong)uVar17 >> 0x28);
        auVar18[0xe] = (char)((ulong)uVar17 >> 0x30);
        auVar18[0xf] = (char)((ulong)uVar17 >> 0x38);
        auVar122[9] = bVar96;
        auVar122._0_9_ = *(unkbyte9 *)pfVar21;
        auVar122[10] = bVar97;
        auVar122[0xb] = bVar98;
        auVar122[0xc] = bVar101;
        auVar122[0xd] = bVar102;
        auVar122[0xe] = bVar103;
        auVar122[0xf] = bVar104;
        auVar122 = auVar122 ^ (auVar5 ^ auVar18) & auVar121;
        fVar118 = auVar122._0_4_;
        fVar75 = (float)uVar7;
        fVar124 = auVar122._4_4_;
        fVar126 = auVar122._8_4_;
        fVar76 = (float)uVar82 * fVar126 +
                 (float)uVar66 * fVar124 +
                 fVar30 * fVar118 +
                 (float)uVar62 * fVar75 + (float)uVar65 * fVar69 + fVar25 + (float)uVar61 * fVar70;
        fVar77 = (float)((ulong)uVar82 >> 0x20) * fVar126 +
                 (float)((ulong)uVar66 >> 0x20) * fVar124 +
                 fVar34 * fVar118 +
                 (float)((ulong)uVar62 >> 0x20) * fVar75 +
                 (float)((ulong)uVar65 >> 0x20) * fVar69 +
                 fVar26 + (float)((ulong)uVar61 >> 0x20) * fVar70;
        fVar11 = (float)uVar91 * fVar126 +
                 (float)uVar68 * fVar124 +
                 fVar35 * fVar118 +
                 (float)uVar64 * fVar75 + (float)uVar67 * fVar69 + fVar27 + (float)uVar63 * fVar70;
        fVar75 = (float)((ulong)uVar91 >> 0x20) * fVar126 +
                 (float)((ulong)uVar68 >> 0x20) * fVar124 +
                 fVar36 * fVar118 +
                 (float)((ulong)uVar64 >> 0x20) * fVar75 +
                 (float)((ulong)uVar67 >> 0x20) * fVar69 +
                 fVar28 + (float)((ulong)uVar63 >> 0x20) * fVar70;
        fVar70 = (float)((ulong)uVar7 >> 0x20);
        iVar81 = -(uint)(fVar41 < fVar70);
        bVar105 = (byte)((uint)iVar81 >> 8);
        bVar106 = (byte)((uint)iVar81 >> 0x10);
        bVar107 = (byte)((uint)iVar81 >> 0x18);
        iVar86 = -(uint)(fVar42 < fVar70);
        bVar108 = (byte)((uint)iVar86 >> 8);
        bVar109 = (byte)((uint)iVar86 >> 0x10);
        bVar110 = (byte)((uint)iVar86 >> 0x18);
        iVar90 = -(uint)(fVar43 < fVar70);
        bVar111 = (byte)((uint)iVar90 >> 8);
        bVar112 = (byte)((uint)iVar90 >> 0x10);
        bVar113 = (byte)((uint)iVar90 >> 0x18);
        iVar95 = -(uint)(fVar44 < fVar70);
        bVar114 = (byte)((uint)iVar95 >> 8);
        bVar115 = (byte)((uint)iVar95 >> 0x10);
        bVar116 = (byte)((uint)iVar95 >> 0x18);
        fVar70 = (float)CONCAT13(auVar122[7] & ~bVar52 | (byte)((ulong)uVar6 >> 0x38) & bVar52,
                                 CONCAT12(auVar122[6] & ~bVar51 |
                                          (byte)((ulong)uVar6 >> 0x30) & bVar51,
                                          CONCAT11(auVar122[5] & ~bVar50 |
                                                   (byte)((ulong)uVar6 >> 0x28) & bVar50,
                                                   auVar122[4] & ~bVar49 |
                                                   (byte)((ulong)uVar6 >> 0x20) & bVar49))) +
                 (float)CONCAT13(bVar83 & bVar110,
                                 CONCAT12(bVar80 & bVar109,
                                          CONCAT11(bVar79 & bVar108,bVar78 & (byte)iVar86)));
        fVar69 = (float)CONCAT13(auVar122[0xf] & ~bVar60 | bVar104 & bVar60,
                                 CONCAT12(auVar122[0xe] & ~bVar59 | bVar103 & bVar59,
                                          CONCAT11(auVar122[0xd] & ~bVar58 | bVar102 & bVar58,
                                                   auVar122[0xc] & ~bVar57 | bVar101 & bVar57))) +
                 (float)CONCAT13(bVar94 & bVar116,
                                 CONCAT12(bVar93 & bVar115,
                                          CONCAT11(bVar92 & bVar114,bVar89 & (byte)iVar95)));
        fVar124 = fVar124 + (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & bVar110,
                                            CONCAT12((byte)((uint)fVar77 >> 0x10) & bVar109,
                                                     CONCAT11((byte)((uint)fVar77 >> 8) & bVar108,
                                                              SUB41(fVar77,0) & (byte)iVar86)));
        fVar75 = auVar122._12_4_ +
                 (float)CONCAT13((byte)((uint)fVar75 >> 0x18) & bVar116,
                                 CONCAT12((byte)((uint)fVar75 >> 0x10) & bVar115,
                                          CONCAT11((byte)((uint)fVar75 >> 8) & bVar114,
                                                   SUB41(fVar75,0) & (byte)iVar95)));
        *(ulong *)(*pauVar19 + 8) =
             CONCAT17((char)((uint)fVar75 >> 0x18),
                      CONCAT16((char)((uint)fVar75 >> 0x10),
                               CONCAT15((char)((uint)fVar75 >> 8),
                                        CONCAT14(SUB41(fVar75,0),
                                                 fVar126 + (float)CONCAT13((byte)((uint)fVar11 >>
                                                                                 0x18) & bVar113,
                                                                           CONCAT12((byte)((uint)
                                                  fVar11 >> 0x10) & bVar112,
                                                  CONCAT11((byte)((uint)fVar11 >> 8) & bVar111,
                                                           SUB41(fVar11,0) & (byte)iVar90)))))));
        *(ulong *)*pauVar19 =
             CONCAT17((char)((uint)fVar124 >> 0x18),
                      CONCAT16((char)((uint)fVar124 >> 0x10),
                               CONCAT15((char)((uint)fVar124 >> 8),
                                        CONCAT14(SUB41(fVar124,0),
                                                 fVar118 + (float)CONCAT13((byte)((uint)fVar76 >>
                                                                                 0x18) & bVar107,
                                                                           CONCAT12((byte)((uint)
                                                  fVar76 >> 0x10) & bVar106,
                                                  CONCAT11((byte)((uint)fVar76 >> 8) & bVar105,
                                                           SUB41(fVar76,0) & (byte)iVar81)))))));
        *(ulong *)(pfVar21 + 2) =
             CONCAT17((char)((uint)fVar69 >> 0x18),
                      CONCAT16((char)((uint)fVar69 >> 0x10),
                               CONCAT15((char)((uint)fVar69 >> 8),
                                        CONCAT14(SUB41(fVar69,0),
                                                 (float)CONCAT13(auVar122[0xb] & ~bVar56 |
                                                                 bVar98 & bVar56,
                                                                 CONCAT12(auVar122[10] & ~bVar55 |
                                                                          bVar97 & bVar55,
                                                                          CONCAT11(auVar122[9] &
                                                                                   ~bVar54 | bVar96 
                                                  & bVar54,auVar122[8] & ~bVar53 |
                                                           (byte)uVar7 & bVar53))) +
                                                 (float)CONCAT13(bVar88 & bVar113,
                                                                 CONCAT12(bVar87 & bVar112,
                                                                          CONCAT11(bVar85 & bVar111,
                                                                                   bVar84 & (byte)
                                                  iVar90)))))));
        *(ulong *)pfVar21 =
             CONCAT17((char)((uint)fVar70 >> 0x18),
                      CONCAT16((char)((uint)fVar70 >> 0x10),
                               CONCAT15((char)((uint)fVar70 >> 8),
                                        CONCAT14(SUB41(fVar70,0),
                                                 (float)CONCAT13(auVar122[3] & ~bVar48 |
                                                                 (byte)((ulong)uVar6 >> 0x18) &
                                                                 bVar48,CONCAT12(auVar122[2] &
                                                                                 ~bVar47 | (byte)((
                                                  ulong)uVar6 >> 0x10) & bVar47,
                                                  CONCAT11(auVar122[1] & ~bVar46 |
                                                           (byte)((ulong)uVar6 >> 8) & bVar46,
                                                           auVar122[0] & ~bVar45 |
                                                           (byte)uVar6 & bVar45))) +
                                                 (float)CONCAT13(bVar33 & bVar107,
                                                                 CONCAT12(bVar32 & bVar106,
                                                                          CONCAT11(bVar31 & bVar105,
                                                                                   bVar29 & (byte)
                                                  iVar81)))))));
        pauVar19 = pauVar19 + 1;
        pfVar21 = pfVar21 + 4;
      } while (lVar24 != 0);
    }
  }
  else {
    fVar30 = *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x328);
    bVar29 = SUB41(fVar30,0);
    bVar31 = (byte)((uint)fVar30 >> 8);
    bVar32 = (byte)((uint)fVar30 >> 0x10);
    bVar33 = (byte)((uint)fVar30 >> 0x18);
    fVar30 = (float)CONCAT13((byte)((ulong)DAT_027369d0 >> 0x18) & bVar33,
                             CONCAT12((byte)((ulong)DAT_027369d0 >> 0x10) & bVar32,
                                      CONCAT11((byte)((ulong)DAT_027369d0 >> 8) & bVar31,
                                               (byte)DAT_027369d0 & bVar29)));
    fVar35 = (float)CONCAT13((byte)((ulong)DAT_027369d8 >> 0x18) & bVar33,
                             CONCAT12((byte)((ulong)DAT_027369d8 >> 0x10) & bVar32,
                                      CONCAT11((byte)((ulong)DAT_027369d8 >> 8) & bVar31,
                                               (byte)DAT_027369d8 & bVar29)));
    fVar34 = (float)(CONCAT17((byte)((ulong)DAT_027369d0 >> 0x38) & bVar33,
                              CONCAT16((byte)((ulong)DAT_027369d0 >> 0x30) & bVar32,
                                       CONCAT15((byte)((ulong)DAT_027369d0 >> 0x28) & bVar31,
                                                CONCAT14((byte)((ulong)DAT_027369d0 >> 0x20) &
                                                         bVar29,fVar30)))) >> 0x20);
    fVar36 = (float)(CONCAT17((byte)((ulong)DAT_027369d8 >> 0x38) & bVar33,
                              CONCAT16((byte)((ulong)DAT_027369d8 >> 0x30) & bVar32,
                                       CONCAT15((byte)((ulong)DAT_027369d8 >> 0x28) & bVar31,
                                                CONCAT14((byte)((ulong)DAT_027369d8 >> 0x20) &
                                                         bVar29,fVar35)))) >> 0x20);
    if (*(char *)(param_1 + 0x32c) == '\0') {
      if (uVar1 != 0) {
        uVar68 = *(undefined8 *)(param_1 + 0x2b8);
        uVar66 = *(undefined8 *)(param_1 + 0x2b0);
        uVar64 = *(undefined8 *)(param_1 + 0x298);
        uVar62 = *(undefined8 *)(param_1 + 0x290);
        lVar24 = uVar23 << 4;
        do {
          auVar2 = *pauVar19;
          uVar63 = *(undefined8 *)(pfVar21 + 2);
          bVar29 = (byte)((ulong)uVar63 >> 8);
          bVar31 = (byte)((ulong)uVar63 >> 0x10);
          bVar32 = (byte)((ulong)uVar63 >> 0x18);
          bVar33 = (byte)((ulong)uVar63 >> 0x20);
          bVar78 = (byte)((ulong)uVar63 >> 0x28);
          bVar79 = (byte)((ulong)uVar63 >> 0x30);
          bVar80 = (byte)((ulong)uVar63 >> 0x38);
          uVar61 = *(undefined8 *)pfVar21;
          auVar99._0_4_ = -(uint)(fVar37 < auVar2._0_4_);
          auVar99._4_4_ = -(uint)(fVar38 < auVar2._4_4_);
          auVar99._8_4_ = -(uint)(fVar39 < auVar2._8_4_);
          auVar99._12_4_ = -(uint)(fVar40 < auVar2._12_4_);
          lVar24 = lVar24 + -0x10;
          auVar3[9] = bVar29;
          auVar3._0_9_ = *(unkbyte9 *)pfVar21;
          auVar3[10] = bVar31;
          auVar3[0xb] = bVar32;
          auVar3[0xc] = bVar33;
          auVar3[0xd] = bVar78;
          auVar3[0xe] = bVar79;
          auVar3[0xf] = bVar80;
          auVar100[9] = bVar29;
          auVar100._0_9_ = *(unkbyte9 *)pfVar21;
          auVar100[10] = bVar31;
          auVar100[0xb] = bVar32;
          auVar100[0xc] = bVar33;
          auVar100[0xd] = bVar78;
          auVar100[0xe] = bVar79;
          auVar100[0xf] = bVar80;
          auVar100 = auVar100 ^ (auVar3 ^ auVar2) & auVar99;
          fVar70 = (float)((ulong)uVar63 >> 0x20);
          fVar69 = fVar25 + (float)*puVar22 * fVar30 +
                   (float)uVar66 * (auVar100._0_4_ - (float)uVar61);
          fVar75 = fVar26 + (float)((ulong)*puVar22 >> 0x20) * fVar34 +
                   (float)((ulong)uVar66 >> 0x20) *
                   (auVar100._4_4_ - (float)((ulong)uVar61 >> 0x20));
          fVar76 = fVar27 + (float)puVar22[1] * fVar35 +
                   (float)uVar68 * (auVar100._8_4_ - (float)uVar63);
          fVar77 = fVar28 + (float)((ulong)puVar22[1] >> 0x20) * fVar36 +
                   (float)((ulong)uVar68 >> 0x20) * (auVar100._12_4_ - fVar70);
          iVar81 = -(uint)(fVar41 < fVar70);
          iVar86 = -(uint)(fVar42 < fVar70);
          iVar90 = -(uint)(fVar43 < fVar70);
          iVar95 = -(uint)(fVar44 < fVar70);
          bVar83 = (byte)((uint)iVar81 >> 8);
          bVar84 = (byte)((uint)iVar81 >> 0x10);
          bVar85 = (byte)((uint)iVar81 >> 0x18);
          fVar70 = (float)CONCAT13((byte)((uint)fVar69 >> 0x18) & bVar85,
                                   CONCAT12((byte)((uint)fVar69 >> 0x10) & bVar84,
                                            CONCAT11((byte)((uint)fVar69 >> 8) & bVar83,
                                                     SUB41(fVar69,0) & (byte)iVar81)));
          bVar87 = (byte)((uint)iVar86 >> 8);
          bVar88 = (byte)((uint)iVar86 >> 0x10);
          bVar89 = (byte)((uint)iVar86 >> 0x18);
          auVar71._0_8_ =
               CONCAT17((byte)((uint)fVar75 >> 0x18) & bVar89,
                        CONCAT16((byte)((uint)fVar75 >> 0x10) & bVar88,
                                 CONCAT15((byte)((uint)fVar75 >> 8) & bVar87,
                                          CONCAT14(SUB41(fVar75,0) & (byte)iVar86,fVar70))));
          auVar71[8] = SUB41(fVar76,0) & (byte)iVar90;
          bVar92 = (byte)((uint)iVar90 >> 8);
          auVar71[9] = (byte)((uint)fVar76 >> 8) & bVar92;
          bVar93 = (byte)((uint)iVar90 >> 0x10);
          auVar71[10] = (byte)((uint)fVar76 >> 0x10) & bVar93;
          bVar94 = (byte)((uint)iVar90 >> 0x18);
          auVar71[0xb] = (byte)((uint)fVar76 >> 0x18) & bVar94;
          auVar72[0xc] = SUB41(fVar77,0) & (byte)iVar95;
          auVar72._0_12_ = auVar71;
          bVar96 = (byte)((uint)iVar95 >> 8);
          auVar72[0xd] = (byte)((uint)fVar77 >> 8) & bVar96;
          bVar97 = (byte)((uint)iVar95 >> 0x10);
          auVar72[0xe] = (byte)((uint)fVar77 >> 0x10) & bVar97;
          bVar98 = (byte)((uint)iVar95 >> 0x18);
          auVar72[0xf] = (byte)((uint)fVar77 >> 0x18) & bVar98;
          *(float *)(*pauVar19 + 8) = auVar100._8_4_ + auVar71._8_4_;
          *(float *)(*pauVar19 + 0xc) = auVar100._12_4_ + auVar72._12_4_;
          *(float *)*pauVar19 = auVar100._0_4_ + fVar70;
          *(float *)(*pauVar19 + 4) = auVar100._4_4_ + (float)((ulong)auVar71._0_8_ >> 0x20);
          pfVar21[2] = (float)CONCAT13(auVar100[0xb] & ~bVar56 | bVar32 & bVar56,
                                       CONCAT12(auVar100[10] & ~bVar55 | bVar31 & bVar55,
                                                CONCAT11(auVar100[9] & ~bVar54 | bVar29 & bVar54,
                                                         auVar100[8] & ~bVar53 |
                                                         (byte)uVar63 & bVar53))) +
                       (float)CONCAT13((byte)((ulong)uVar64 >> 0x18) & bVar94,
                                       CONCAT12((byte)((ulong)uVar64 >> 0x10) & bVar93,
                                                CONCAT11((byte)((ulong)uVar64 >> 8) & bVar92,
                                                         (byte)uVar64 & (byte)iVar90)));
          pfVar21[3] = (float)CONCAT13(auVar100[0xf] & ~bVar60 | bVar80 & bVar60,
                                       CONCAT12(auVar100[0xe] & ~bVar59 | bVar79 & bVar59,
                                                CONCAT11(auVar100[0xd] & ~bVar58 | bVar78 & bVar58,
                                                         auVar100[0xc] & ~bVar57 | bVar33 & bVar57))
                                      ) +
                       (float)CONCAT13((byte)((ulong)uVar64 >> 0x38) & bVar98,
                                       CONCAT12((byte)((ulong)uVar64 >> 0x30) & bVar97,
                                                CONCAT11((byte)((ulong)uVar64 >> 0x28) & bVar96,
                                                         (byte)((ulong)uVar64 >> 0x20) &
                                                         (byte)iVar95)));
          *pfVar21 = (float)CONCAT13(auVar100[3] & ~bVar48 | (byte)((ulong)uVar61 >> 0x18) & bVar48,
                                     CONCAT12(auVar100[2] & ~bVar47 |
                                              (byte)((ulong)uVar61 >> 0x10) & bVar47,
                                              CONCAT11(auVar100[1] & ~bVar46 |
                                                       (byte)((ulong)uVar61 >> 8) & bVar46,
                                                       auVar100[0] & ~bVar45 | (byte)uVar61 & bVar45
                                                      ))) +
                     (float)CONCAT13((byte)((ulong)uVar62 >> 0x18) & bVar85,
                                     CONCAT12((byte)((ulong)uVar62 >> 0x10) & bVar84,
                                              CONCAT11((byte)((ulong)uVar62 >> 8) & bVar83,
                                                       (byte)uVar62 & (byte)iVar81)));
          pfVar21[1] = (float)CONCAT13(auVar100[7] & ~bVar52 |
                                       (byte)((ulong)uVar61 >> 0x38) & bVar52,
                                       CONCAT12(auVar100[6] & ~bVar51 |
                                                (byte)((ulong)uVar61 >> 0x30) & bVar51,
                                                CONCAT11(auVar100[5] & ~bVar50 |
                                                         (byte)((ulong)uVar61 >> 0x28) & bVar50,
                                                         auVar100[4] & ~bVar49 |
                                                         (byte)((ulong)uVar61 >> 0x20) & bVar49))) +
                       (float)CONCAT13((byte)((ulong)uVar62 >> 0x38) & bVar89,
                                       CONCAT12((byte)((ulong)uVar62 >> 0x30) & bVar88,
                                                CONCAT11((byte)((ulong)uVar62 >> 0x28) & bVar87,
                                                         (byte)((ulong)uVar62 >> 0x20) &
                                                         (byte)iVar86)));
          pauVar19 = pauVar19 + 1;
          pfVar21 = pfVar21 + 4;
          puVar22 = puVar22 + 2;
        } while (lVar24 != 0);
      }
    }
    else if (uVar1 != 0) {
      lVar24 = uVar23 << 4;
      uVar67 = *(undefined8 *)(param_1 + 0x2b8);
      uVar65 = *(undefined8 *)(param_1 + 0x2b0);
      uVar64 = *(undefined8 *)(param_1 + 0x2c8);
      uVar62 = *(undefined8 *)(param_1 + 0x2c0);
      uVar63 = *(undefined8 *)(param_1 + 0x298);
      uVar61 = *(undefined8 *)(param_1 + 0x290);
      fVar70 = *(float *)(param_1 + 0x2d0);
      fVar69 = *(float *)(param_1 + 0x2d4);
      fVar75 = *(float *)(param_1 + 0x2d8);
      fVar76 = *(float *)(param_1 + 0x2dc);
      uVar68 = *(undefined8 *)(param_1 + 0x2e8);
      uVar66 = *(undefined8 *)(param_1 + 0x2e0);
      uVar91 = *(undefined8 *)(param_1 + 0x2f8);
      uVar82 = *(undefined8 *)(param_1 + 0x2f0);
      fVar77 = *(float *)(param_1 + 0x300);
      fVar124 = *(float *)(param_1 + 0x304);
      fVar11 = *(float *)(param_1 + 0x308);
      fVar118 = *(float *)(param_1 + 0x30c);
      do {
        uVar6 = *(undefined8 *)(*pauVar19 + 8);
        uVar17 = *(undefined8 *)(pfVar21 + 2);
        bVar29 = (byte)((ulong)uVar17 >> 8);
        bVar31 = (byte)((ulong)uVar17 >> 0x10);
        bVar32 = (byte)((ulong)uVar17 >> 0x18);
        bVar33 = (byte)((ulong)uVar17 >> 0x20);
        bVar78 = (byte)((ulong)uVar17 >> 0x28);
        bVar79 = (byte)((ulong)uVar17 >> 0x30);
        bVar80 = (byte)((ulong)uVar17 >> 0x38);
        uVar7 = *(undefined8 *)pfVar21;
        lVar24 = lVar24 + -0x10;
        fVar12 = (float)uVar7;
        fVar14 = (float)((ulong)uVar7 >> 0x20);
        auVar119._0_4_ = -(uint)(fVar37 < (float)*(undefined8 *)*pauVar19);
        auVar119._4_4_ = -(uint)(fVar38 < (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20));
        auVar119._8_4_ = -(uint)(fVar39 < (float)uVar6);
        auVar119._12_4_ = -(uint)(fVar40 < (float)((ulong)uVar6 >> 0x20));
        fVar15 = (float)uVar17;
        auVar8[9] = (char)((ulong)uVar6 >> 8);
        auVar8._0_9_ = *(unkbyte9 *)*pauVar19;
        auVar8[10] = (char)((ulong)uVar6 >> 0x10);
        auVar8[0xb] = (char)((ulong)uVar6 >> 0x18);
        auVar8[0xc] = (char)((ulong)uVar6 >> 0x20);
        auVar8[0xd] = (char)((ulong)uVar6 >> 0x28);
        auVar8[0xe] = (char)((ulong)uVar6 >> 0x30);
        auVar8[0xf] = (char)((ulong)uVar6 >> 0x38);
        auVar13[9] = bVar29;
        auVar13._0_9_ = *(unkbyte9 *)pfVar21;
        auVar13[10] = bVar31;
        auVar13[0xb] = bVar32;
        auVar13[0xc] = bVar33;
        auVar13[0xd] = bVar78;
        auVar13[0xe] = bVar79;
        auVar13[0xf] = bVar80;
        auVar120[9] = bVar29;
        auVar120._0_9_ = *(unkbyte9 *)pfVar21;
        auVar120[10] = bVar31;
        auVar120[0xb] = bVar32;
        auVar120[0xc] = bVar33;
        auVar120[0xd] = bVar78;
        auVar120[0xe] = bVar79;
        auVar120[0xf] = bVar80;
        auVar120 = auVar120 ^ (auVar13 ^ auVar8) & auVar119;
        fVar117 = auVar120._0_4_;
        fVar123 = auVar120._4_4_;
        fVar125 = auVar120._8_4_;
        fVar16 = (float)((ulong)uVar17 >> 0x20);
        fVar126 = fVar77 * fVar125 +
                  (float)uVar82 * fVar123 +
                  (float)uVar66 * fVar117 +
                  fVar70 * fVar15 +
                  (float)uVar62 * fVar14 +
                  fVar25 + (float)*puVar22 * fVar30 + (float)uVar65 * fVar12;
        fVar9 = fVar124 * fVar125 +
                (float)((ulong)uVar82 >> 0x20) * fVar123 +
                (float)((ulong)uVar66 >> 0x20) * fVar117 +
                fVar69 * fVar15 +
                (float)((ulong)uVar62 >> 0x20) * fVar14 +
                fVar26 + (float)((ulong)*puVar22 >> 0x20) * fVar34 +
                (float)((ulong)uVar65 >> 0x20) * fVar12;
        fVar10 = fVar11 * fVar125 +
                 (float)uVar91 * fVar123 +
                 (float)uVar68 * fVar117 +
                 fVar75 * fVar15 +
                 (float)uVar64 * fVar14 +
                 fVar27 + (float)puVar22[1] * fVar35 + (float)uVar67 * fVar12;
        fVar12 = fVar118 * fVar125 +
                 (float)((ulong)uVar91 >> 0x20) * fVar123 +
                 (float)((ulong)uVar68 >> 0x20) * fVar117 +
                 fVar76 * fVar15 +
                 (float)((ulong)uVar64 >> 0x20) * fVar14 +
                 fVar28 + (float)((ulong)puVar22[1] >> 0x20) * fVar36 +
                 (float)((ulong)uVar67 >> 0x20) * fVar12;
        iVar81 = -(uint)(fVar41 < fVar16);
        bVar83 = (byte)((uint)iVar81 >> 8);
        bVar84 = (byte)((uint)iVar81 >> 0x10);
        bVar85 = (byte)((uint)iVar81 >> 0x18);
        iVar86 = -(uint)(fVar42 < fVar16);
        bVar87 = (byte)((uint)iVar86 >> 8);
        bVar88 = (byte)((uint)iVar86 >> 0x10);
        bVar89 = (byte)((uint)iVar86 >> 0x18);
        iVar90 = -(uint)(fVar43 < fVar16);
        bVar92 = (byte)((uint)iVar90 >> 8);
        bVar93 = (byte)((uint)iVar90 >> 0x10);
        bVar94 = (byte)((uint)iVar90 >> 0x18);
        iVar95 = -(uint)(fVar44 < fVar16);
        bVar96 = (byte)((uint)iVar95 >> 8);
        bVar97 = (byte)((uint)iVar95 >> 0x10);
        bVar98 = (byte)((uint)iVar95 >> 0x18);
        fVar123 = fVar123 + (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & bVar89,
                                            CONCAT12((byte)((uint)fVar9 >> 0x10) & bVar88,
                                                     CONCAT11((byte)((uint)fVar9 >> 8) & bVar87,
                                                              SUB41(fVar9,0) & (byte)iVar86)));
        fVar9 = auVar120._12_4_ +
                (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & bVar98,
                                CONCAT12((byte)((uint)fVar12 >> 0x10) & bVar97,
                                         CONCAT11((byte)((uint)fVar12 >> 8) & bVar96,
                                                  SUB41(fVar12,0) & (byte)iVar95)));
        *(ulong *)(*pauVar19 + 8) =
             CONCAT17((char)((uint)fVar9 >> 0x18),
                      CONCAT16((char)((uint)fVar9 >> 0x10),
                               CONCAT15((char)((uint)fVar9 >> 8),
                                        CONCAT14(SUB41(fVar9,0),
                                                 fVar125 + (float)CONCAT13((byte)((uint)fVar10 >>
                                                                                 0x18) & bVar94,
                                                                           CONCAT12((byte)((uint)
                                                  fVar10 >> 0x10) & bVar93,
                                                  CONCAT11((byte)((uint)fVar10 >> 8) & bVar92,
                                                           SUB41(fVar10,0) & (byte)iVar90)))))));
        *(ulong *)*pauVar19 =
             CONCAT17((char)((uint)fVar123 >> 0x18),
                      CONCAT16((char)((uint)fVar123 >> 0x10),
                               CONCAT15((char)((uint)fVar123 >> 8),
                                        CONCAT14(SUB41(fVar123,0),
                                                 fVar117 + (float)CONCAT13((byte)((uint)fVar126 >>
                                                                                 0x18) & bVar85,
                                                                           CONCAT12((byte)((uint)
                                                  fVar126 >> 0x10) & bVar84,
                                                  CONCAT11((byte)((uint)fVar126 >> 8) & bVar83,
                                                           SUB41(fVar126,0) & (byte)iVar81)))))));
        fVar126 = (float)CONCAT13(auVar120[7] & ~bVar52 | (byte)((ulong)uVar7 >> 0x38) & bVar52,
                                  CONCAT12(auVar120[6] & ~bVar51 |
                                           (byte)((ulong)uVar7 >> 0x30) & bVar51,
                                           CONCAT11(auVar120[5] & ~bVar50 |
                                                    (byte)((ulong)uVar7 >> 0x28) & bVar50,
                                                    auVar120[4] & ~bVar49 |
                                                    (byte)((ulong)uVar7 >> 0x20) & bVar49))) +
                  (float)CONCAT13((byte)((ulong)uVar61 >> 0x38) & bVar89,
                                  CONCAT12((byte)((ulong)uVar61 >> 0x30) & bVar88,
                                           CONCAT11((byte)((ulong)uVar61 >> 0x28) & bVar87,
                                                    (byte)((ulong)uVar61 >> 0x20) & (byte)iVar86)));
        fVar9 = (float)CONCAT13(auVar120[0xf] & ~bVar60 | bVar80 & bVar60,
                                CONCAT12(auVar120[0xe] & ~bVar59 | bVar79 & bVar59,
                                         CONCAT11(auVar120[0xd] & ~bVar58 | bVar78 & bVar58,
                                                  auVar120[0xc] & ~bVar57 | bVar33 & bVar57))) +
                (float)CONCAT13((byte)((ulong)uVar63 >> 0x38) & bVar98,
                                CONCAT12((byte)((ulong)uVar63 >> 0x30) & bVar97,
                                         CONCAT11((byte)((ulong)uVar63 >> 0x28) & bVar96,
                                                  (byte)((ulong)uVar63 >> 0x20) & (byte)iVar95)));
        *(ulong *)(pfVar21 + 2) =
             CONCAT17((char)((uint)fVar9 >> 0x18),
                      CONCAT16((char)((uint)fVar9 >> 0x10),
                               CONCAT15((char)((uint)fVar9 >> 8),
                                        CONCAT14(SUB41(fVar9,0),
                                                 (float)CONCAT13(auVar120[0xb] & ~bVar56 |
                                                                 bVar32 & bVar56,
                                                                 CONCAT12(auVar120[10] & ~bVar55 |
                                                                          bVar31 & bVar55,
                                                                          CONCAT11(auVar120[9] &
                                                                                   ~bVar54 | bVar29 
                                                  & bVar54,auVar120[8] & ~bVar53 |
                                                           (byte)uVar17 & bVar53))) +
                                                 (float)CONCAT13((byte)((ulong)uVar63 >> 0x18) &
                                                                 bVar94,CONCAT12((byte)((ulong)
                                                  uVar63 >> 0x10) & bVar93,
                                                  CONCAT11((byte)((ulong)uVar63 >> 8) & bVar92,
                                                           (byte)uVar63 & (byte)iVar90)))))));
        *(ulong *)pfVar21 =
             CONCAT17((char)((uint)fVar126 >> 0x18),
                      CONCAT16((char)((uint)fVar126 >> 0x10),
                               CONCAT15((char)((uint)fVar126 >> 8),
                                        CONCAT14(SUB41(fVar126,0),
                                                 (float)CONCAT13(auVar120[3] & ~bVar48 |
                                                                 (byte)((ulong)uVar7 >> 0x18) &
                                                                 bVar48,CONCAT12(auVar120[2] &
                                                                                 ~bVar47 | (byte)((
                                                  ulong)uVar7 >> 0x10) & bVar47,
                                                  CONCAT11(auVar120[1] & ~bVar46 |
                                                           (byte)((ulong)uVar7 >> 8) & bVar46,
                                                           auVar120[0] & ~bVar45 |
                                                           (byte)uVar7 & bVar45))) +
                                                 (float)CONCAT13((byte)((ulong)uVar61 >> 0x18) &
                                                                 bVar85,CONCAT12((byte)((ulong)
                                                  uVar61 >> 0x10) & bVar84,
                                                  CONCAT11((byte)((ulong)uVar61 >> 8) & bVar83,
                                                           (byte)uVar61 & (byte)iVar81)))))));
        pauVar19 = pauVar19 + 1;
        pfVar21 = pfVar21 + 4;
        puVar22 = puVar22 + 2;
      } while (lVar24 != 0);
    }
  }
  return;
}


