/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026f500; name: FUN_0026f500
 */


undefined1  [16]
FUN_0026f500(float *param_1,float *param_2,undefined1 (*param_3) [12],undefined1 (*param_4) [12],
            float *param_5,ulong *param_6,ulong *param_7,ulong *param_8)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined5 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  byte bVar21;
  undefined1 uVar26;
  undefined1 uVar28;
  undefined1 uVar30;
  float fVar32;
  undefined1 auVar22 [16];
  byte bVar27;
  byte bVar29;
  byte bVar31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar44;
  undefined8 uVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  ulong uVar63;
  float fVar65;
  float fVar66;
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
  float fVar77;
  float fVar78;
  undefined1 auVar76 [16];
  int iVar79;
  ulong uVar80;
  int iVar81;
  char cVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  float fVar88;
  int iVar89;
  undefined1 auVar90 [12];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  ulong uVar95;
  float fVar102;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar103;
  float fVar107;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined8 uVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  ulong uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  ulong uVar116;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  
  fVar32 = (float)*(undefined8 *)(*param_4 + 8);
  fVar33 = (float)*(undefined8 *)(*param_3 + 8);
  fVar15 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  fVar51 = (float)*(undefined8 *)*param_4;
  fVar71 = (float)*(undefined8 *)*param_3;
  fVar45 = fVar51 - fVar71;
  fVar52 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
  fVar73 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  fVar46 = fVar52 - fVar73;
  fVar47 = fVar32 - fVar33;
  fVar48 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20) - fVar15;
  auVar49._0_4_ = *param_5 - fVar71;
  auVar49._4_4_ = param_5[1] - fVar73;
  auVar49._8_4_ = param_5[2] - fVar33;
  auVar49._12_4_ = param_5[3] - fVar15;
  auVar117._4_4_ = fVar46;
  auVar117._0_4_ = fVar45;
  auVar117._8_4_ = fVar47;
  auVar117._12_4_ = fVar48;
  auVar59._4_4_ = fVar46;
  auVar59._0_4_ = fVar45;
  auVar59._8_4_ = fVar47;
  auVar59._12_4_ = fVar48;
  auVar36 = NEON_ext(auVar117,auVar59,8,1);
  auVar64 = NEON_ext(auVar49,auVar49,8,1);
  fVar68 = auVar49._8_4_ * auVar49._8_4_;
  fVar78 = fVar45 * auVar49._4_4_ - fVar46 * auVar49._0_4_;
  fVar42 = fVar46 * auVar49._8_4_ - fVar47 * auVar49._4_4_;
  uVar34 = NEON_ext(CONCAT17((char)((uint)fVar42 >> 0x18),
                             CONCAT16((char)((uint)fVar42 >> 0x10),
                                      CONCAT15((char)((uint)fVar42 >> 8),
                                               CONCAT14(SUB41(fVar42,0),fVar78)))),
                    CONCAT44(auVar36._4_4_ * auVar49._4_4_ - fVar46 * auVar64._4_4_,
                             auVar36._0_4_ * auVar49._0_4_ - fVar45 * auVar64._0_4_),4,1);
  fVar16 = *param_2;
  fVar70 = param_2[1];
  fVar72 = param_2[2];
  fVar74 = param_2[3];
  fVar75 = (float)uVar34;
  fVar42 = fVar75 * fVar75;
  fVar77 = (float)((ulong)uVar34 >> 0x20);
  fVar44 = fVar77 * fVar77;
  uVar26 = (undefined1)((uint)fVar44 >> 8);
  uVar28 = (undefined1)((uint)fVar44 >> 0x10);
  uVar30 = (undefined1)((uint)fVar44 >> 0x18);
  auVar36[4] = SUB41(fVar44,0);
  auVar36._0_4_ = fVar42;
  auVar36[5] = uVar26;
  auVar36[6] = uVar28;
  auVar36[7] = uVar30;
  auVar36._8_4_ = fVar78 * fVar78;
  auVar36._12_4_ = 0;
  auVar64[4] = SUB41(fVar44,0);
  auVar64._0_4_ = fVar42;
  auVar64[5] = uVar26;
  auVar64[6] = uVar28;
  auVar64[7] = uVar30;
  auVar64._8_4_ = fVar78 * fVar78;
  auVar64._12_4_ = 0;
  auVar36 = NEON_ext(auVar36,auVar64,8,1);
  fVar17 = auVar36._0_4_ + auVar36._4_4_;
  fVar14 = fVar42 + fVar44 + fVar17;
  fVar17 = fVar42 + fVar44 + fVar17;
  uVar26 = SUB41(fVar17,0);
  uVar28 = (undefined1)((uint)fVar17 >> 8);
  uVar30 = (undefined1)((uint)fVar17 >> 0x10);
  uVar38 = (undefined1)((uint)fVar17 >> 0x18);
  uVar34 = NEON_frsqrte(CONCAT17(uVar38,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar14)))),4
                       );
  fVar42 = (float)uVar34;
  fVar44 = (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT44(fVar44 * fVar44,fVar42 * fVar42),
                        CONCAT17(uVar38,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar14)))),4
                       );
  fVar42 = fVar42 * (float)uVar34;
  fVar44 = fVar44 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT44(fVar44 * fVar44,fVar42 * fVar42),
                        CONCAT17(uVar38,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar14)))),4
                       );
  fVar42 = fVar42 * (float)uVar34;
  fVar44 = fVar44 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT44(fVar44 * fVar44,fVar42 * fVar42),
                        CONCAT17(uVar38,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar14)))),4
                       );
  fVar42 = fVar42 * (float)uVar34;
  fVar44 = fVar44 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT44(fVar44 * fVar44,fVar42 * fVar42),
                        CONCAT17(uVar38,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar14)))),4
                       );
  uVar63 = CONCAT44(fVar17 * fVar44 * (float)((ulong)uVar34 >> 0x20),fVar14 * fVar42 * (float)uVar34
                   );
  uVar63 = uVar63 ^ (uVar63 ^ CONCAT17(uVar38,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar14
                                                                                      ))))) &
                    CONCAT44(-(uint)(fVar14 == 0.0),-(uint)(fVar14 == 0.0));
  uVar34 = NEON_frecpe(uVar63,4);
  uVar43 = NEON_frecps(uVar63,uVar34,4);
  fVar42 = (float)uVar34 * (float)uVar43;
  fVar44 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
  uVar34 = NEON_frecps(uVar63,CONCAT17((char)((uint)fVar44 >> 0x18),
                                       CONCAT16((char)((uint)fVar44 >> 0x10),
                                                CONCAT15((char)((uint)fVar44 >> 8),
                                                         CONCAT14(SUB41(fVar44,0),fVar42)))),4);
  fVar42 = fVar42 * (float)uVar34;
  fVar44 = fVar44 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar63,CONCAT17((char)((uint)fVar44 >> 0x18),
                                       CONCAT16((char)((uint)fVar44 >> 0x10),
                                                CONCAT15((char)((uint)fVar44 >> 8),
                                                         CONCAT14(SUB41(fVar44,0),fVar42)))),4);
  fVar42 = fVar42 * (float)uVar34;
  fVar44 = fVar44 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar63,CONCAT17((char)((uint)fVar44 >> 0x18),
                                       CONCAT16((char)((uint)fVar44 >> 0x10),
                                                CONCAT15((char)((uint)fVar44 >> 8),
                                                         CONCAT14(SUB41(fVar44,0),fVar42)))),4);
  fVar42 = fVar42 * (float)uVar34;
  fVar44 = fVar44 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar63,CONCAT17((char)((uint)fVar44 >> 0x18),
                                       CONCAT16((char)((uint)fVar44 >> 0x10),
                                                CONCAT15((char)((uint)fVar44 >> 8),
                                                         CONCAT14(SUB41(fVar44,0),fVar42)))),4);
  fVar42 = fVar42 * (float)uVar34;
  fVar12 = *param_1;
  fVar13 = param_1[1];
  fVar40 = param_1[2];
  fVar8 = param_1[3];
  fVar75 = fVar75 * fVar42;
  fVar77 = fVar77 * fVar42;
  fVar78 = fVar78 * fVar42;
  fVar42 = fVar46 * fVar46;
  auVar122._0_4_ = (fVar12 - fVar71) * fVar75;
  auVar122._4_4_ = (fVar13 - fVar73) * fVar77;
  auVar122._8_4_ = (fVar40 - fVar33) * fVar78;
  auVar122._12_4_ = (fVar8 - fVar15) * 0.0;
  fVar62 = fVar47 * fVar47 +
           fVar45 * fVar45 +
           (float)(CONCAT17((char)((uint)fVar42 >> 0x18),
                            CONCAT16((char)((uint)fVar42 >> 0x10),
                                     CONCAT15((char)((uint)fVar42 >> 8),
                                              CONCAT14(SUB41(fVar42,0),fVar45 * fVar45)))) >> 0x20);
  fVar65 = fVar47 * auVar49._8_4_ + fVar45 * auVar49._0_4_ + fVar46 * auVar49._4_4_;
  fVar66 = (float)(CONCAT17((char)((uint)fVar68 >> 0x18),
                            CONCAT16((char)((uint)fVar68 >> 0x10),
                                     CONCAT15((char)((uint)fVar68 >> 8),
                                              CONCAT14(SUB41(fVar68,0),fVar47 * fVar47)))) >> 0x20)
           + auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_;
  fVar67 = auVar122._8_4_ + auVar122._0_4_ + auVar122._4_4_;
  fVar69 = fVar67 * fVar67;
  uVar108 = CONCAT44(fVar62 * fVar66 - fVar65 * fVar65,fVar62 * fVar66 - fVar65 * fVar65);
  uVar34 = NEON_frecpe(uVar108,4);
  uVar43 = NEON_frecps(uVar108,uVar34,4);
  fVar42 = (float)uVar34 * (float)uVar43;
  fVar14 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
  uVar34 = NEON_frecps(uVar108,CONCAT17((char)((uint)fVar14 >> 0x18),
                                        CONCAT16((char)((uint)fVar14 >> 0x10),
                                                 CONCAT15((char)((uint)fVar14 >> 8),
                                                          CONCAT14(SUB41(fVar14,0),fVar42)))),4);
  auVar96._0_4_ = (fVar16 - fVar71) * fVar75;
  auVar96._4_4_ = (fVar70 - fVar73) * fVar77;
  auVar96._8_4_ = (fVar72 - fVar33) * fVar78;
  auVar96._12_4_ = (fVar74 - fVar15) * 0.0;
  fVar42 = fVar42 * (float)uVar34;
  fVar14 = fVar14 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar108,CONCAT44(fVar14,fVar42),4);
  fVar42 = fVar42 * (float)uVar34;
  fVar14 = fVar14 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar108,CONCAT44(fVar14,fVar42),4);
  fVar44 = fVar16 - fVar12;
  fVar17 = fVar70 - fVar13;
  fVar39 = fVar72 - fVar40;
  fVar41 = fVar74 - fVar8;
  fVar42 = fVar42 * (float)uVar34;
  fVar14 = fVar14 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar108,CONCAT44(fVar14,fVar42),4);
  fVar42 = fVar42 * (float)uVar34;
  fVar14 = fVar14 * (float)((ulong)uVar34 >> 0x20);
  auVar36 = NEON_ext(auVar96,auVar96,8,1);
  fVar18 = auVar36._0_4_ + auVar36._4_4_;
  fVar68 = auVar96._0_4_ + auVar96._4_4_ + fVar18;
  fVar18 = auVar96._0_4_ + auVar96._4_4_ + fVar18;
  bVar1 = fVar68 * fVar67 < 0.0;
  auVar97._0_4_ = -(uint)bVar1;
  auVar97._4_4_ = -(uint)bVar1;
  auVar97._8_4_ = -(uint)bVar1;
  auVar97._12_4_ = -(uint)bVar1;
  NEON_ext(auVar97,auVar97,8,1);
  if (CONCAT13((char)auVar97._12_4_,
               CONCAT12((char)auVar97._8_4_,CONCAT11((char)auVar97._4_4_,(char)auVar97._0_4_))) ==
      -1) {
    auVar36 = NEON_ext(auVar122,auVar122,8,1);
    fVar19 = auVar36._0_4_ + auVar36._4_4_;
    auVar98._0_4_ = fVar44 * fVar75;
    auVar98._4_4_ = fVar17 * fVar77;
    auVar98._8_4_ = fVar39 * fVar78;
    auVar98._12_4_ = fVar41 * 0.0;
    auVar36 = NEON_ext(auVar98,auVar98,8,1);
    fVar20 = auVar36._0_4_ + auVar36._4_4_;
    uVar34 = CONCAT44(auVar98._0_4_ + auVar98._4_4_ + fVar20,auVar98._0_4_ + auVar98._4_4_ + fVar20)
    ;
    uVar43 = NEON_frecpe(uVar34,4);
    uVar108 = NEON_frecps(uVar34,uVar43,4);
    fVar20 = (float)uVar43 * (float)uVar108;
    fVar107 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar108 >> 0x20);
    uVar43 = NEON_frecps(uVar34,CONCAT44(fVar107,fVar20),4);
    fVar20 = fVar20 * (float)uVar43;
    fVar107 = fVar107 * (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frecps(uVar34,CONCAT44(fVar107,fVar20),4);
    fVar20 = fVar20 * (float)uVar43;
    fVar107 = fVar107 * (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frecps(uVar34,CONCAT44(fVar107,fVar20),4);
    fVar20 = fVar20 * (float)uVar43;
    fVar107 = fVar107 * (float)((ulong)uVar43 >> 0x20);
    uVar34 = NEON_frecps(uVar34,CONCAT44(fVar107,fVar20),4);
    fVar88 = -((auVar122._0_4_ + auVar122._4_4_ + fVar19) * fVar20 * (float)uVar34);
    auVar99._0_4_ = fVar12 + fVar44 * fVar88;
    auVar99._4_4_ = fVar13 + fVar17 * fVar88;
    auVar99._8_4_ = fVar40 + fVar39 * fVar88;
    auVar99._12_4_ = fVar8 + fVar41 * fVar88;
    auVar36 = NEON_ext(auVar99,auVar99,8,1);
    fVar20 = auVar36._0_4_ - fVar33;
    fVar109 = fVar45 * (auVar99._0_4_ - fVar71);
    fVar110 = fVar46 * (auVar99._4_4_ - fVar73);
    fVar111 = fVar47 * fVar20;
    fVar48 = fVar48 * (0.0 - fVar15);
    auVar9._4_4_ = fVar110;
    auVar9._0_4_ = fVar109;
    auVar9._8_4_ = fVar111;
    auVar9._12_4_ = fVar48;
    auVar10._4_4_ = fVar110;
    auVar10._0_4_ = fVar109;
    auVar10._8_4_ = fVar111;
    auVar10._12_4_ = fVar48;
    auVar36 = NEON_ext(auVar9,auVar10,8,1);
    auVar100._0_4_ = auVar49._0_4_ * (auVar99._0_4_ - fVar71);
    auVar100._4_4_ = auVar49._4_4_ * (auVar99._4_4_ - fVar73);
    auVar100._8_4_ = auVar49._8_4_ * fVar20;
    auVar100._12_4_ = auVar49._12_4_ * (0.0 - fVar15);
    fVar20 = auVar36._0_4_ + auVar36._4_4_;
    auVar36 = NEON_ext(auVar100,auVar100,8,1);
    fVar111 = auVar36._0_4_ + auVar36._4_4_;
    fVar15 = fVar109 + fVar110 + fVar20;
    fVar20 = fVar109 + fVar110 + fVar20;
    fVar48 = auVar100._0_4_ + auVar100._4_4_ + fVar111;
    fVar111 = auVar100._0_4_ + auVar100._4_4_ + fVar111;
    fVar109 = fVar42 * (fVar66 * fVar15 - fVar65 * fVar48);
    fVar15 = fVar42 * (fVar62 * fVar48 - fVar65 * fVar15);
    fVar48 = fVar14 * (fVar62 * fVar111 - fVar65 * fVar20);
    bVar1 = ((-1.1920929e-07 <= fVar15 && (-1.1920929e-07 <= fVar109 && fVar109 <= 1.0000001)) &&
            fVar15 <= 1.0000001) && fVar109 + fVar15 < 1.0000001;
    auVar104._0_4_ = -(uint)bVar1;
    auVar104._4_4_ = -(uint)bVar1;
    auVar104._8_4_ = -(uint)bVar1;
    auVar104._12_4_ = -(uint)bVar1;
    NEON_ext(auVar104,auVar104,8,1);
    if (CONCAT13((char)auVar104._12_4_,
                 CONCAT12((char)auVar104._8_4_,CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_)))
        == -1) {
      *param_6 = CONCAT44(-((auVar122._0_4_ + auVar122._4_4_ + fVar19) *
                           fVar107 * (float)((ulong)uVar34 >> 0x20)),fVar88);
      *param_7 = CONCAT44(fVar14 * (fVar66 * fVar20 - fVar65 * fVar111),fVar109);
      *param_8 = CONCAT17((char)((uint)fVar48 >> 0x18),
                          CONCAT16((char)((uint)fVar48 >> 0x10),
                                   CONCAT15((char)((uint)fVar48 >> 8),
                                            CONCAT14(SUB41(fVar48,0),fVar15))));
      return ZEXT816(0);
    }
  }
  fVar14 = fVar12 - fVar75 * fVar67;
  fVar15 = fVar13 - fVar77 * fVar67;
  uVar26 = (undefined1)((uint)fVar15 >> 8);
  uVar28 = (undefined1)((uint)fVar15 >> 0x10);
  uVar30 = (undefined1)((uint)fVar15 >> 0x18);
  fVar48 = fVar40 - fVar78 * fVar67;
  uVar38 = (undefined1)((uint)fVar48 >> 8);
  uVar83 = (undefined1)((uint)fVar48 >> 0x10);
  uVar84 = (undefined1)((uint)fVar48 >> 0x18);
  fVar8 = fVar8 - fVar67 * 0.0;
  uVar85 = (undefined1)((uint)fVar8 >> 8);
  uVar86 = (undefined1)((uint)fVar8 >> 0x10);
  uVar87 = (undefined1)((uint)fVar8 >> 0x18);
  auVar6[4] = SUB41(fVar15,0);
  auVar6._0_4_ = fVar14;
  auVar6[5] = uVar26;
  auVar6[6] = uVar28;
  auVar6[7] = uVar30;
  auVar6[8] = SUB41(fVar48,0);
  auVar6[9] = uVar38;
  auVar6[10] = uVar83;
  auVar6[0xb] = uVar84;
  auVar6[0xc] = SUB41(fVar8,0);
  auVar6[0xd] = uVar85;
  auVar6[0xe] = uVar86;
  auVar6[0xf] = uVar87;
  auVar7[4] = SUB41(fVar15,0);
  auVar7._0_4_ = fVar14;
  auVar7[5] = uVar26;
  auVar7[6] = uVar28;
  auVar7[7] = uVar30;
  auVar7[8] = SUB41(fVar48,0);
  auVar7[9] = uVar38;
  auVar7[10] = uVar83;
  auVar7[0xb] = uVar84;
  auVar7[0xc] = SUB41(fVar8,0);
  auVar7[0xd] = uVar85;
  auVar7[0xe] = uVar86;
  auVar7[0xf] = uVar87;
  auVar64 = NEON_ext(auVar6,auVar7,8,1);
  auVar76._0_4_ = fVar16 - fVar75 * fVar68;
  auVar76._4_4_ = fVar70 - fVar77 * fVar68;
  auVar76._8_4_ = fVar72 - fVar78 * fVar68;
  auVar76._12_4_ = fVar74 - fVar68 * 0.0;
  auVar36 = NEON_ext(auVar76,auVar76,8,1);
  fVar74 = auVar64._0_4_ - fVar33;
  fVar48 = auVar36._0_4_ - fVar33;
  fVar70 = auVar49._0_4_ * (fVar14 - fVar71);
  fVar72 = auVar49._4_4_ * (fVar15 - fVar73);
  fVar78 = fVar45 * (auVar76._0_4_ - fVar71);
  fVar8 = fVar46 * (auVar76._4_4_ - fVar73);
  uVar26 = (undefined1)((uint)fVar8 >> 0x18);
  fVar16 = fVar47 * fVar48;
  fVar75 = auVar49._0_4_ * (auVar76._0_4_ - fVar71);
  fVar77 = auVar49._4_4_ * (auVar76._4_4_ - fVar73);
  uVar28 = (undefined1)((uint)fVar75 >> 0x18);
  uVar11 = CONCAT14((char)((uint)fVar72 >> 0x18),
                    CONCAT13((char)((uint)fVar72 >> 0x10),
                             CONCAT12((char)((uint)fVar72 >> 8),CONCAT11(SUB41(fVar72,0),uVar28))));
  fVar71 = fVar47 * fVar74 + fVar45 * (fVar14 - fVar71) + fVar46 * (fVar15 - fVar73);
  fVar73 = auVar49._8_4_ * fVar74 + fVar70 + (float)((uint5)uVar11 >> 8);
  fVar78 = (float)(CONCAT14((char)((uint)fVar16 >> 0x18),
                            CONCAT13((char)((uint)fVar16 >> 0x10),
                                     CONCAT12((char)((uint)fVar16 >> 8),
                                              CONCAT11(SUB41(fVar16,0),uVar26)))) >> 8) +
           fVar78 + (float)(CONCAT17(uVar26,CONCAT16((char)((uint)fVar8 >> 0x10),
                                                     CONCAT15((char)((uint)fVar8 >> 8),
                                                              CONCAT14(SUB41(fVar8,0),fVar78)))) >>
                           0x20);
  fVar14 = auVar49._8_4_ * fVar48 +
           (float)CONCAT13(uVar28,CONCAT12((char)((uint)fVar75 >> 0x10),
                                           (short)(CONCAT15((char)((uint)fVar75 >> 8),
                                                            CONCAT14(SUB41(fVar75,0),fVar70)) >>
                                                  0x20))) +
           (float)(CONCAT18((char)((uint)fVar77 >> 0x18),
                            CONCAT17((char)((uint)fVar77 >> 0x10),
                                     CONCAT16((char)((uint)fVar77 >> 8),
                                              CONCAT15(SUB41(fVar77,0),uVar11)))) >> 0x28);
  auVar3._4_4_ = fVar73;
  auVar3._0_4_ = fVar71;
  auVar3._8_4_ = fVar78;
  auVar3._12_4_ = fVar14;
  auVar4._4_4_ = fVar73;
  auVar4._0_4_ = fVar71;
  auVar4._8_4_ = fVar78;
  auVar4._12_4_ = fVar14;
  auVar36 = NEON_ext(auVar3,auVar4,8,1);
  uVar43 = NEON_rev64(CONCAT44(fVar73,fVar71),4);
  uVar34 = NEON_rev64(auVar36._0_8_,4);
  fVar71 = (fVar66 * fVar71 - (float)uVar43 * fVar65) * fVar42;
  fVar73 = (fVar62 * fVar73 - (float)((ulong)uVar43 >> 0x20) * fVar65) * fVar42;
  fVar78 = (fVar66 * fVar78 - (float)uVar34 * fVar65) * fVar42;
  fVar42 = ((float)(CONCAT17((char)((uint)fVar62 >> 0x18),
                             CONCAT16((char)((uint)fVar62 >> 0x10),
                                      CONCAT15((char)((uint)fVar62 >> 8),
                                               CONCAT14(SUB41(fVar62,0),fVar62)))) >> 0x20) * fVar14
           - (float)((ulong)uVar34 >> 0x20) * fVar65) * fVar42;
  fVar68 = fVar68 * fVar68;
  uVar63 = CONCAT44(fVar18 * fVar18,fVar68);
  uVar80 = (ulong)(CONCAT22(-(ushort)(fVar78 <= 1.0000001),-(ushort)(fVar71 <= 1.0000001)) &
                   CONCAT22(-(ushort)(-1.1920929e-07 <= fVar78),-(ushort)(-1.1920929e-07 <= fVar71))
                   & CONCAT22(-(ushort)(-1.1920929e-07 <= fVar42),
                              -(ushort)(-1.1920929e-07 <= fVar73)) &
                  CONCAT22(-(ushort)(fVar42 <= 1.0000001),-(ushort)(fVar73 <= 1.0000001))) &
           (ulong)CONCAT12(-(fVar78 + fVar42 < 1.0000001),-(ushort)(fVar71 + fVar73 < 1.0000001));
  iVar79 = (uint)(ushort)uVar80 << 0x1f;
  iVar81 = (uint)(ushort)(uVar80 >> 0x10) << 0x1f;
  bVar21 = (byte)((uint)iVar79 >> 0x18);
  cVar82 = (char)bVar21 >> 7;
  bVar27 = (byte)((uint)iVar81 >> 0x18);
  iVar89 = CONCAT13((char)(bVar27 & bVar21) >> 7,
                    CONCAT12((char)(bVar27 & bVar21) >> 7,
                             CONCAT11((char)(bVar27 & bVar21) >> 7,(char)(bVar27 & bVar21) >> 7)));
  auVar90._0_8_ =
       CONCAT17((char)(bVar27 & bVar21) >> 7,
                CONCAT16((char)(bVar27 & bVar21) >> 7,
                         CONCAT15((char)(bVar27 & bVar21) >> 7,
                                  CONCAT14((char)(bVar27 & bVar21) >> 7,iVar89))));
  auVar90[8] = (char)(bVar27 & bVar21) >> 7;
  auVar90[9] = (char)(bVar27 & bVar21) >> 7;
  auVar90[10] = (char)(bVar27 & bVar21) >> 7;
  auVar90[0xb] = (char)(bVar27 & bVar21) >> 7;
  auVar91[0xc] = (char)(bVar27 & bVar21) >> 7;
  auVar91._0_12_ = auVar90;
  auVar91[0xd] = (char)(bVar27 & bVar21) >> 7;
  auVar91[0xe] = (char)(bVar27 & bVar21) >> 7;
  auVar91[0xf] = (char)(bVar27 & bVar21) >> 7;
  auVar92._0_4_ = -(uint)(iVar89 == -1);
  auVar92._4_4_ = -(uint)((int)((ulong)auVar90._0_8_ >> 0x20) == -1);
  auVar92._8_4_ = -(uint)(auVar90._8_4_ == -1);
  auVar92._12_4_ = -(uint)(auVar91._12_4_ == -1);
  NEON_ext(auVar92,auVar92,8,1);
  if (CONCAT13((char)auVar92._12_4_,
               CONCAT12((char)auVar92._8_4_,CONCAT11((char)auVar92._4_4_,(char)auVar92._0_4_))) ==
      -1) {
    iVar79 = -(uint)(fVar69 < fVar68);
    bVar21 = (byte)iVar79;
    bVar27 = (byte)((uint)iVar79 >> 8);
    bVar29 = (byte)((uint)iVar79 >> 0x10);
    bVar31 = (byte)((uint)iVar79 >> 0x18);
    uVar34 = NEON_fmov(0x3f800000,4);
    *param_6 = CONCAT17((byte)((ulong)uVar34 >> 0x38) & ~bVar31,
                        CONCAT16((byte)((ulong)uVar34 >> 0x30) & ~bVar29,
                                 CONCAT15((byte)((ulong)uVar34 >> 0x28) & ~bVar27,
                                          CONCAT14((byte)((ulong)uVar34 >> 0x20) & ~bVar21,
                                                   CONCAT13((byte)((ulong)uVar34 >> 0x18) & ~bVar31,
                                                            CONCAT12((byte)((ulong)uVar34 >> 0x10) &
                                                                     ~bVar29,CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) & ~bVar27,(byte)uVar34 & ~bVar21)))))
                                ));
    *param_7 = CONCAT44(fVar78,fVar78) ^
               (CONCAT44(fVar78,fVar78) ^ CONCAT44(fVar71,fVar71)) &
               CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,iVar79))));
    *param_8 = CONCAT44(fVar42,fVar42) ^
               (CONCAT44(fVar42,fVar42) ^ CONCAT44(fVar73,fVar73)) &
               CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,iVar79))));
    auVar23._8_8_ = 0;
    auVar23._0_8_ =
         uVar63 ^ (uVar63 ^ CONCAT44(fVar69,fVar69)) &
                  CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,iVar79))));
    return auVar23;
  }
  fVar51 = *param_5 - fVar51;
  fVar52 = param_5[1] - fVar52;
  fVar75 = param_5[2] - fVar32;
  auVar101._0_4_ = fVar44 * fVar44;
  auVar101._4_4_ = fVar17 * fVar17;
  auVar101._8_4_ = fVar39 * fVar39;
  auVar101._12_4_ = fVar41 * fVar41;
  auVar36 = NEON_ext(auVar101,auVar101,8,1);
  fVar70 = auVar36._0_4_ + auVar36._4_4_;
  fVar16 = auVar101._0_4_ + auVar101._4_4_ + fVar70;
  fVar70 = auVar101._0_4_ + auVar101._4_4_ + fVar70;
  auVar105._0_4_ = fVar47 * fVar47 + fVar45 * fVar45 + fVar46 * fVar46;
  auVar105._4_4_ = fVar75 * fVar75 + fVar51 * fVar51 + fVar52 * fVar52;
  auVar105._8_4_ =
       auVar49._8_4_ * auVar49._8_4_ + auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_
  ;
  auVar105._12_4_ = fVar47 * fVar47 + fVar45 * fVar45 + fVar46 * fVar46;
  fVar107 = fVar47 * fVar39 + fVar45 * fVar44 + fVar46 * fVar17;
  fVar110 = fVar75 * fVar39 + fVar51 * fVar44 + fVar52 * fVar17;
  fVar102 = auVar49._8_4_ * fVar39 + auVar49._0_4_ * fVar44 + auVar49._4_4_ * fVar17;
  fVar103 = fVar47 * fVar39 + fVar45 * fVar44 + fVar46 * fVar17;
  auVar93._8_8_ = CONCAT44(fVar70,fVar16);
  auVar93._0_8_ = CONCAT44(fVar70,fVar16);
  fVar72 = SUB124(*param_3,4);
  fVar18 = SUB124(*param_3,0);
  fVar15 = SUB124(*param_3,4);
  auVar64 = NEON_frecpe(auVar93,4);
  auVar113._0_4_ = auVar105._0_4_ * fVar16 - fVar107 * fVar107;
  auVar113._4_4_ = auVar105._4_4_ * fVar70 - fVar110 * fVar110;
  auVar113._8_4_ = auVar105._8_4_ * fVar16 - fVar102 * fVar102;
  auVar113._12_4_ = auVar105._12_4_ * fVar70 - fVar103 * fVar103;
  fVar74 = SUB124(*param_4,4);
  auVar117 = NEON_frecpe(auVar113,4);
  auVar36 = NEON_frecps(auVar117,auVar113,4);
  fVar14 = SUB124(*param_3,0);
  fVar77 = fVar12 - fVar14;
  fVar8 = SUB124(*param_4,0);
  fVar48 = fVar12 - fVar8;
  fVar65 = fVar12 - fVar18;
  fVar67 = fVar12 - SUB124(*param_3,0);
  fVar20 = fVar13 - fVar72;
  fVar111 = fVar13 - fVar74;
  fVar88 = fVar13 - fVar15;
  fVar109 = fVar13 - SUB124(*param_3,4);
  auVar118._0_4_ = auVar117._0_4_ * auVar36._0_4_;
  auVar118._4_4_ = auVar117._4_4_ * auVar36._4_4_;
  auVar118._8_4_ = auVar117._8_4_ * auVar36._8_4_;
  auVar118._12_4_ = auVar117._12_4_ * auVar36._12_4_;
  fVar41 = (fVar40 - fVar33) * fVar39 + fVar77 * fVar44 + fVar20 * fVar17;
  fVar62 = (fVar40 - fVar32) * fVar39 + fVar48 * fVar44 + fVar111 * fVar17;
  fVar66 = (fVar40 - fVar33) * fVar39 + fVar65 * fVar44 + fVar88 * fVar17;
  fVar19 = (fVar40 - fVar33) * fVar39 + fVar67 * fVar44 + fVar109 * fVar17;
  fVar77 = (fVar40 - fVar33) * fVar47 + fVar77 * fVar45 + fVar20 * fVar46;
  fVar48 = (fVar40 - fVar32) * fVar75 + fVar48 * fVar51 + fVar111 * fVar52;
  fVar65 = (fVar40 - fVar33) * auVar49._8_4_ + fVar65 * auVar49._0_4_ + fVar88 * auVar49._4_4_;
  fVar67 = (fVar40 - fVar33) * fVar47 + fVar67 * fVar45 + fVar109 * fVar46;
  auVar36 = NEON_frecps(auVar118,auVar113,4);
  auVar119._0_4_ = auVar118._0_4_ * auVar36._0_4_;
  auVar119._4_4_ = auVar118._4_4_ * auVar36._4_4_;
  auVar119._8_4_ = auVar118._8_4_ * auVar36._8_4_;
  auVar119._12_4_ = auVar118._12_4_ * auVar36._12_4_;
  auVar36 = NEON_frecpe(auVar105,4);
  auVar59 = NEON_frecps(auVar36,auVar105,4);
  auVar117 = NEON_frecps(auVar119,auVar113,4);
  auVar53._0_4_ = auVar36._0_4_ * auVar59._0_4_;
  auVar53._4_4_ = auVar36._4_4_ * auVar59._4_4_;
  auVar53._8_4_ = auVar36._8_4_ * auVar59._8_4_;
  auVar53._12_4_ = auVar36._12_4_ * auVar59._12_4_;
  auVar120._0_4_ = auVar119._0_4_ * auVar117._0_4_;
  auVar120._4_4_ = auVar119._4_4_ * auVar117._4_4_;
  auVar120._8_4_ = auVar119._8_4_ * auVar117._8_4_;
  auVar120._12_4_ = auVar119._12_4_ * auVar117._12_4_;
  auVar36 = NEON_frecps(auVar53,auVar105,4);
  auVar117 = NEON_frecps(auVar120,auVar113,4);
  auVar54._0_4_ = auVar53._0_4_ * auVar36._0_4_;
  auVar54._4_4_ = auVar53._4_4_ * auVar36._4_4_;
  auVar54._8_4_ = auVar53._8_4_ * auVar36._8_4_;
  auVar54._12_4_ = auVar53._12_4_ * auVar36._12_4_;
  auVar36 = NEON_frecps(auVar64,auVar93,4);
  auVar60._0_4_ = -(uint)(auVar113._0_4_ == 0.0);
  auVar60._4_4_ = -(uint)(auVar113._4_4_ == 0.0);
  auVar60._8_4_ = -(uint)(auVar113._8_4_ == 0.0);
  auVar60._12_4_ = -(uint)(auVar113._12_4_ == 0.0);
  auVar56._0_4_ = -(uint)(fVar16 == 0.0);
  auVar56._4_4_ = -(uint)(fVar70 == 0.0);
  auVar56._8_4_ = -(uint)(fVar16 == 0.0);
  auVar56._12_4_ = -(uint)(fVar70 == 0.0);
  auVar121._0_4_ = (fVar107 * fVar77 - fVar41 * auVar105._0_4_) * auVar120._0_4_ * auVar117._0_4_;
  auVar121._4_4_ = (fVar110 * fVar48 - fVar62 * auVar105._4_4_) * auVar120._4_4_ * auVar117._4_4_;
  auVar121._8_4_ = (fVar102 * fVar65 - fVar66 * auVar105._8_4_) * auVar120._8_4_ * auVar117._8_4_;
  auVar121._12_4_ =
       (fVar103 * fVar67 - fVar19 * auVar105._12_4_) * auVar120._12_4_ * auVar117._12_4_;
  auVar57._0_4_ = auVar64._0_4_ * auVar36._0_4_;
  auVar57._4_4_ = auVar64._4_4_ * auVar36._4_4_;
  auVar57._8_4_ = auVar64._8_4_ * auVar36._8_4_;
  auVar57._12_4_ = auVar64._12_4_ * auVar36._12_4_;
  auVar114._0_4_ = -(uint)(auVar113._0_4_ <= 1.1920929e-07);
  auVar114._4_4_ = -(uint)(auVar113._4_4_ <= 1.1920929e-07);
  auVar114._8_4_ = -(uint)(auVar113._8_4_ <= 1.1920929e-07);
  auVar114._12_4_ = -(uint)(auVar113._12_4_ <= 1.1920929e-07);
  auVar36 = NEON_fmov(0x3f800000,4);
  auVar64 = ZEXT816(0);
  auVar117 = NEON_fmin(auVar121 ^ (auVar121 ^ auVar36) & auVar60,auVar36,4);
  auVar61._8_4_ = 0x3f000000;
  auVar61._0_8_ = 0x3f0000003f000000;
  auVar61._12_4_ = 0x3f000000;
  auVar59 = NEON_fmax(auVar117,auVar64,4);
  auVar59 = auVar59 ^ (auVar59 ^ auVar61) & auVar114;
  auVar117 = NEON_frecps(auVar54,auVar105,4);
  auVar122 = NEON_frecps(auVar57,auVar93,4);
  auVar55._0_4_ = auVar54._0_4_ * auVar117._0_4_;
  auVar55._4_4_ = auVar54._4_4_ * auVar117._4_4_;
  auVar55._8_4_ = auVar54._8_4_ * auVar117._8_4_;
  auVar55._12_4_ = auVar54._12_4_ * auVar117._12_4_;
  auVar123._0_4_ = auVar57._0_4_ * auVar122._0_4_;
  auVar123._4_4_ = auVar57._4_4_ * auVar122._4_4_;
  auVar123._8_4_ = auVar57._8_4_ * auVar122._8_4_;
  auVar123._12_4_ = auVar57._12_4_ * auVar122._12_4_;
  auVar58._0_4_ = -(uint)(auVar105._0_4_ == 0.0);
  auVar58._4_4_ = -(uint)(auVar105._4_4_ == 0.0);
  auVar58._8_4_ = -(uint)(auVar105._8_4_ == 0.0);
  auVar58._12_4_ = -(uint)(auVar105._12_4_ == 0.0);
  auVar117 = NEON_frecps(auVar55,auVar105,4);
  auVar106._0_4_ = auVar55._0_4_ * auVar117._0_4_ * (fVar77 + fVar107 * auVar59._0_4_);
  auVar106._4_4_ = auVar55._4_4_ * auVar117._4_4_ * (fVar48 + fVar110 * auVar59._4_4_);
  auVar106._8_4_ = auVar55._8_4_ * auVar117._8_4_ * (fVar65 + fVar102 * auVar59._8_4_);
  auVar106._12_4_ = auVar55._12_4_ * auVar117._12_4_ * (fVar67 + fVar103 * auVar59._12_4_);
  auVar59 = NEON_frecps(auVar123,auVar93,4);
  auVar117 = NEON_fmin(auVar106 ^ (auVar106 ^ auVar36) & auVar58,auVar36,4);
  auVar115._0_4_ = auVar123._0_4_ * auVar59._0_4_;
  auVar115._4_4_ = auVar123._4_4_ * auVar59._4_4_;
  auVar115._8_4_ = auVar123._8_4_ * auVar59._8_4_;
  auVar115._12_4_ = auVar123._12_4_ * auVar59._12_4_;
  auVar59 = NEON_fmax(auVar117,auVar64,4);
  auVar117 = NEON_frecps(auVar115,auVar93,4);
  fVar65 = auVar59._0_4_;
  fVar67 = auVar59._4_4_;
  fVar20 = auVar59._8_4_;
  auVar94._0_4_ = auVar115._0_4_ * auVar117._0_4_ * (fVar107 * fVar65 - fVar41);
  auVar94._4_4_ = auVar115._4_4_ * auVar117._4_4_ * (fVar110 * fVar67 - fVar62);
  auVar94._8_4_ = auVar115._8_4_ * auVar117._8_4_ * (fVar102 * fVar20 - fVar66);
  auVar94._12_4_ = auVar115._12_4_ * auVar117._12_4_ * (fVar103 * auVar59._12_4_ - fVar19);
  auVar36 = NEON_fmin(auVar94 ^ (auVar94 ^ auVar36) & auVar56,auVar36,4);
  auVar36 = NEON_fmax(auVar36,auVar64,4);
  fVar77 = auVar36._0_4_;
  fVar41 = auVar36._4_4_;
  fVar48 = auVar36._8_4_;
  fVar16 = (fVar40 + fVar77 * fVar39) - (fVar33 + fVar47 * fVar65);
  fVar70 = (fVar40 + fVar41 * fVar39) - (fVar32 + fVar75 * fVar67);
  fVar40 = (fVar40 + fVar48 * fVar39) - (fVar33 + auVar49._8_4_ * fVar20);
  fVar72 = (fVar13 + fVar77 * fVar17) - (fVar72 + fVar46 * fVar65);
  fVar74 = (fVar13 + fVar41 * fVar17) - (fVar74 + fVar52 * fVar67);
  fVar17 = (fVar13 + fVar48 * fVar17) - (fVar15 + auVar49._4_4_ * fVar20);
  fVar52 = (fVar12 + fVar77 * fVar44) - (fVar14 + fVar45 * fVar65);
  fVar14 = (fVar12 + fVar41 * fVar44) - (fVar8 + fVar51 * fVar67);
  fVar44 = (fVar12 + fVar48 * fVar44) - (fVar18 + auVar49._0_4_ * fVar20);
  uVar2 = NEON_fmov(0x3f800000,4);
  fVar51 = fVar52 * fVar52 + fVar72 * fVar72 + fVar16 * fVar16;
  fVar52 = fVar14 * fVar14 + fVar74 * fVar74 + fVar70 * fVar70;
  fVar44 = fVar44 * fVar44 + fVar17 * fVar17 + fVar40 * fVar40;
  uVar26 = (undefined1)((uint)fVar44 >> 8);
  uVar28 = (undefined1)((uint)fVar44 >> 0x10);
  uVar30 = (undefined1)((uint)fVar44 >> 0x18);
  iVar89 = -(uint)(fVar51 < fVar52 && fVar51 < fVar44);
  bVar21 = (byte)iVar89;
  bVar27 = (byte)((uint)iVar89 >> 8);
  bVar29 = (byte)((uint)iVar89 >> 0x10);
  bVar31 = (byte)((uint)iVar89 >> 0x18);
  uVar80 = CONCAT44(-(uint)(fVar52 < fVar44),-(uint)(fVar52 < fVar44));
  uVar116 = CONCAT44(fVar20,fVar20) ^ (CONCAT44(fVar20,fVar20) ^ CONCAT44(fVar67,fVar67)) & uVar80;
  sVar5 = (short)(iVar79 >> 0x1f);
  auVar50._0_4_ = -(uint)(CONCAT13(cVar82,CONCAT12(cVar82,sVar5)) == -1);
  auVar50._4_4_ = -(uint)(CONCAT13(cVar82,CONCAT12(cVar82,sVar5)) == -1);
  auVar50._8_4_ = -(uint)(CONCAT13(cVar82,CONCAT12(cVar82,sVar5)) == -1);
  auVar50._12_4_ = -(uint)(CONCAT13(cVar82,CONCAT12(cVar82,sVar5)) == -1);
  NEON_ext(auVar50,auVar50,8,1);
  uVar95 = uVar80 & CONCAT44((float)(uVar2 >> 0x20) - fVar67,(float)uVar2 - fVar67);
  uVar112 = CONCAT44(fVar48,fVar48) ^ (CONCAT44(fVar48,fVar48) ^ CONCAT44(fVar41,fVar41)) & uVar80;
  uVar80 = CONCAT17(uVar30,CONCAT16(uVar28,CONCAT15(uVar26,CONCAT14(SUB41(fVar44,0),fVar44)))) ^
           (CONCAT17(uVar30,CONCAT16(uVar28,CONCAT15(uVar26,CONCAT14(SUB41(fVar44,0),fVar44)))) ^
           CONCAT44(fVar52,fVar52)) & uVar80;
  uVar80 = uVar80 ^ (uVar80 ^ CONCAT44(fVar51,fVar51)) &
                    CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,iVar89))));
  uVar95 = uVar95 ^ (uVar95 ^ CONCAT44(fVar65,fVar65)) &
                    CONCAT44((int)(CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,
                                                  iVar89)))) >> 0x20),iVar89);
  uVar116 = CONCAT17((byte)(uVar116 >> 0x38) & ~bVar31,
                     CONCAT16((byte)(uVar116 >> 0x30) & ~bVar29,
                              CONCAT15((byte)(uVar116 >> 0x28) & ~bVar27,
                                       CONCAT14((byte)(uVar116 >> 0x20) & ~bVar21,
                                                CONCAT13((byte)(uVar116 >> 0x18) & ~bVar31,
                                                         CONCAT12((byte)(uVar116 >> 0x10) & ~bVar29,
                                                                  CONCAT11((byte)(uVar116 >> 8) &
                                                                           ~bVar27,(byte)uVar116 &
                                                                                   ~bVar21)))))));
  uVar112 = uVar112 ^ (uVar112 ^ CONCAT44(fVar77,fVar77)) &
                      CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,iVar89))));
  if (CONCAT13((char)auVar50._12_4_,
               CONCAT12((char)auVar50._8_4_,CONCAT11((char)auVar50._4_4_,(char)auVar50._0_4_))) ==
      -1) {
    iVar79 = -(uint)(fVar69 < (float)uVar80);
    bVar21 = (byte)iVar79;
    bVar27 = (byte)((uint)iVar79 >> 8);
    bVar29 = (byte)((uint)iVar79 >> 0x10);
    bVar31 = (byte)((uint)iVar79 >> 0x18);
    *param_6 = CONCAT17((byte)(uVar112 >> 0x38) & ~bVar31,
                        CONCAT16((byte)(uVar112 >> 0x30) & ~bVar29,
                                 CONCAT15((byte)(uVar112 >> 0x28) & ~bVar27,
                                          CONCAT14((byte)(uVar112 >> 0x20) & ~bVar21,
                                                   CONCAT13((byte)(uVar112 >> 0x18) & ~bVar31,
                                                            CONCAT12((byte)(uVar112 >> 0x10) &
                                                                     ~bVar29,CONCAT11((byte)(uVar112
                                                                                            >> 8) &
                                                                                      ~bVar27,(byte)
                                                  uVar112 & ~bVar21)))))));
    *param_7 = uVar95 ^ (uVar95 ^ CONCAT44(fVar71,fVar71)) &
                        CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,iVar79))));
    *param_8 = uVar116 ^ (uVar116 ^ CONCAT44(fVar73,fVar73)) &
                         CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,iVar79))));
    auVar24._8_8_ = 0;
    auVar24._0_8_ =
         uVar80 ^ (uVar80 ^ CONCAT44(fVar69,fVar69)) &
                  CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar21,iVar79))));
    return auVar24;
  }
  auVar37._0_4_ = -(uint)(iVar81 < 0);
  auVar37._4_4_ = -(uint)(iVar81 < 0);
  auVar37._8_4_ = -(uint)(iVar81 < 0);
  auVar37._12_4_ = -(uint)(iVar81 < 0);
  NEON_ext(auVar37,auVar37,8,1);
  if (CONCAT13((char)auVar37._12_4_,
               CONCAT12((char)auVar37._8_4_,CONCAT11((char)auVar37._4_4_,(char)auVar37._0_4_))) ==
      -1) {
    iVar79 = -(uint)(fVar68 < (float)uVar80);
    uVar35 = CONCAT44(iVar79,iVar79);
    *param_6 = uVar112 ^ (uVar112 ^ uVar2) & uVar35;
    *param_7 = uVar95 ^ (uVar95 ^ CONCAT44(fVar78,fVar78)) & uVar35;
    *param_8 = uVar116 ^ (uVar116 ^ CONCAT44(fVar42,fVar42)) & CONCAT44(iVar79,iVar79);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar80 ^ (uVar80 ^ uVar63) & uVar35;
    return auVar25;
  }
  *param_6 = uVar112;
  *param_7 = uVar95;
  *param_8 = uVar116;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar80;
  return auVar22;
}


