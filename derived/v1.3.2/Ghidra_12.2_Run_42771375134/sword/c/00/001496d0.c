/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001496d0; name: FUN_001496d0
 */


void FUN_001496d0(long param_1)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  uint uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  byte bVar34;
  float fVar35;
  undefined1 auVar36 [12];
  byte bVar46;
  byte bVar47;
  float fVar49;
  undefined1 in_q4 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [12];
  byte bVar48;
  float fVar50;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar70;
  float fVar67;
  byte bVar68;
  byte bVar69;
  byte bVar71;
  byte bVar72;
  undefined1 in_q5 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  byte bVar73;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar74 [12];
  undefined1 in_q6 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 in_q7 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  float fVar95;
  float fVar96;
  float fVar105;
  float fVar107;
  float fVar109;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar106;
  float fVar108;
  float fVar110;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar103 [16];
  undefined1 auVar102 [16];
  undefined1 auVar101 [16];
  undefined1 auVar111 [12];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  undefined1 auVar116 [16];
  undefined1 auVar115 [16];
  float fVar119;
  undefined1 auVar120 [12];
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar121 [16];
  byte bVar125;
  float fVar126;
  byte bVar129;
  byte bVar130;
  float fVar131;
  byte bVar132;
  float fVar133;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar9 = PTR_DAT_02710d80;
  piVar10 = *(int **)(param_1 + 0x1c0);
  if (*piVar10 << 2 != 0) {
    fVar13 = (float)piVar10[99];
    fVar26 = (float)piVar10[0x62];
    pfVar11 = *(float **)(piVar10 + 2);
    pfVar12 = *(float **)(piVar10 + 4);
    pfVar1 = pfVar11 + (uint)(*piVar10 << 2);
    do {
      local_a0 = *pfVar11;
      local_80 = pfVar11[2];
      auVar16 = *(undefined1 (*) [16])(pfVar11 + 4);
      fStack_98 = pfVar11[8];
      fStack_78 = pfVar11[10];
      auVar27 = *(undefined1 (*) [16])(pfVar11 + 0xc);
      local_150 = 0.0;
      fStack_14c = 0.0;
      fStack_148 = 0.0;
      fStack_144 = 0.0;
      local_140 = 0.0;
      fStack_13c = 0.0;
      auVar112._4_12_ = in_q4._4_12_;
      auVar112._0_4_ = local_a0;
      auVar39._12_4_ = in_q4._12_4_;
      auVar39._0_8_ = auVar112._0_8_;
      auVar39._8_4_ = pfVar11[1];
      auVar38._8_8_ = auVar39._8_8_;
      auVar38._4_4_ = fStack_98;
      auVar38._0_4_ = local_a0;
      auVar40._0_12_ = auVar38._0_12_;
      auVar40._12_4_ = pfVar11[9];
      fStack_9c = auVar16._0_4_;
      auVar51._4_12_ = in_q5._4_12_;
      auVar51._0_4_ = fStack_9c;
      auVar53._12_4_ = in_q5._12_4_;
      auVar53._0_8_ = auVar51._0_8_;
      auVar53._8_4_ = auVar16._4_4_;
      fStack_94 = auVar27._0_4_;
      auVar52._8_8_ = auVar53._8_8_;
      auVar52._4_4_ = fStack_94;
      auVar52._0_4_ = fStack_9c;
      in_q5._0_12_ = auVar52._0_12_;
      in_q5._12_4_ = (float)auVar27._4_4_;
      fStack_138 = 0.0;
      fStack_134 = 0.0;
      local_130 = 0.0;
      fStack_12c = 0.0;
      auVar77._4_12_ = in_q6._4_12_;
      auVar77._0_4_ = local_80;
      auVar79._12_4_ = in_q6._12_4_;
      auVar79._0_8_ = auVar77._0_8_;
      auVar79._8_4_ = pfVar11[3];
      auVar78._8_8_ = auVar79._8_8_;
      auVar78._4_4_ = fStack_78;
      auVar78._0_4_ = local_80;
      in_q6._0_12_ = auVar78._0_12_;
      in_q6._12_4_ = pfVar11[0xb];
      fStack_7c = auVar16._8_4_;
      auVar93._4_12_ = in_q7._4_12_;
      auVar93._0_4_ = fStack_7c;
      auVar94._12_4_ = in_q7._12_4_;
      auVar94._0_8_ = auVar93._0_8_;
      auVar94._8_4_ = auVar16._12_4_;
      fStack_74 = auVar27._8_4_;
      auVar16._8_8_ = auVar94._8_8_;
      auVar16._4_4_ = fStack_74;
      auVar16._0_4_ = fStack_7c;
      in_q7._0_12_ = auVar16._0_12_;
      in_q7._12_4_ = (float)auVar27._12_4_;
      auVar16 = NEON_ext(auVar40,auVar40,8,1);
      auVar27 = NEON_ext(in_q5,in_q5,8,1);
      local_f0 = *(float *)puVar9;
      fStack_128 = 0.0;
      fStack_124 = 0.0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_90 = auVar16._0_4_;
      fStack_8c = auVar27._0_4_;
      fStack_88 = auVar16._4_4_;
      fStack_84 = auVar27._4_4_;
      auVar16 = NEON_ext(in_q6,in_q6,8,1);
      NEON_ext(in_q7,in_q7,8,1);
      local_100 = 0.0;
      fStack_fc = 0.0;
      local_70 = CONCAT44(local_70._4_4_,auVar16._0_4_);
      uStack_68 = CONCAT44(uStack_68._4_4_,auVar16._4_4_);
      fStack_f8 = 0.0;
      fStack_f4 = 0.0;
      fStack_ec = local_f0;
      fStack_e8 = local_f0;
      fStack_e4 = local_f0;
      auVar16 = FUN_0014ae80(param_1,&local_a0,&local_150);
      auVar27 = NEON_ext(auVar16,auVar16,8,1);
      uVar14 = CONCAT13(auVar27[7] | auVar16[7] | auVar27[3] | auVar16[3],
                        CONCAT12(auVar27[6] | auVar16[6] | auVar27[2] | auVar16[2],
                                 CONCAT11(auVar27[5] | auVar16[5] | auVar27[1] | auVar16[1],
                                          auVar27[4] | auVar16[4] | auVar27[0] | auVar16[0])));
      if (uVar14 == 0) {
        fVar67 = *(float *)puVar9;
      }
      else {
        fVar67 = *(float *)puVar9;
        if (*(float *)(*(long *)(param_1 + 0x1c0) + 0x188) <= 0.0) {
          do {
            while( true ) {
              pfVar3 = (float *)(*(long *)(param_1 + 0x1b0) +
                                (ulong)((int)LZCOUNT(uVar14 & -uVar14) * -0x10 + 0x1f0));
              fVar35 = *pfVar3;
              fVar49 = pfVar3[1];
              fVar50 = pfVar3[2];
              fVar124 = pfVar3[3];
              uVar14 = uVar14 - 1 & uVar14;
              in_q6._0_4_ = local_a0 - fVar35;
              in_q6._4_4_ = fStack_9c - fVar35;
              in_q6._8_4_ = fStack_98 - fVar35;
              in_q6._12_4_ = fStack_94 - fVar35;
              in_q5._0_4_ = local_90 - fVar49;
              in_q5._4_4_ = fStack_8c - fVar49;
              in_q5._8_4_ = fStack_88 - fVar49;
              in_q5._12_4_ = fStack_84 - fVar49;
              fVar35 = local_80 - fVar50;
              fVar49 = fStack_7c - fVar50;
              fVar95 = fStack_78 - fVar50;
              fVar50 = fStack_74 - fVar50;
              auVar27._0_4_ =
                   fVar35 * fVar35 + in_q5._0_4_ * in_q5._0_4_ + fVar67 + in_q6._0_4_ * in_q6._0_4_;
              auVar27._4_4_ =
                   fVar49 * fVar49 + in_q5._4_4_ * in_q5._4_4_ + fVar67 + in_q6._4_4_ * in_q6._4_4_;
              auVar27._8_4_ =
                   fVar95 * fVar95 + in_q5._8_4_ * in_q5._8_4_ + fVar67 + in_q6._8_4_ * in_q6._8_4_;
              auVar27._12_4_ =
                   fVar50 * fVar50 +
                   in_q5._12_4_ * in_q5._12_4_ + fVar67 + in_q6._12_4_ * in_q6._12_4_;
              auVar112 = NEON_frsqrte(auVar27,4);
              auVar97._0_4_ = auVar112._0_4_ * auVar27._0_4_;
              auVar97._4_4_ = auVar112._4_4_ * auVar27._4_4_;
              auVar97._8_4_ = auVar112._8_4_ * auVar27._8_4_;
              auVar97._12_4_ = auVar112._12_4_ * auVar27._12_4_;
              auVar16 = NEON_frsqrts(auVar97,auVar112,4);
              in_q7 = NEON_fmov(0x3f800000,4);
              fVar105 = in_q7._0_4_ - auVar112._0_4_ * auVar16._0_4_ * fVar124;
              fVar107 = in_q7._4_4_ - auVar112._4_4_ * auVar16._4_4_ * fVar124;
              fVar109 = in_q7._8_4_ - auVar112._8_4_ * auVar16._8_4_ * fVar124;
              fVar124 = in_q7._12_4_ - auVar112._12_4_ * auVar16._12_4_ * fVar124;
              auVar98._0_4_ = -(uint)(fVar105 < 0.0);
              auVar98._4_4_ = -(uint)(fVar107 < 0.0);
              auVar98._8_4_ = -(uint)(fVar109 < 0.0);
              auVar98._12_4_ = -(uint)(fVar124 < 0.0);
              NEON_ext(auVar98,auVar98,8,1);
              bVar125 = (byte)auVar98._0_4_;
              bVar129 = (byte)auVar98._4_4_;
              bVar130 = (byte)auVar98._8_4_;
              bVar132 = (byte)auVar98._12_4_;
              if (CONCAT13(bVar132,CONCAT12(bVar130,CONCAT11(bVar129,bVar125))) == 0) break;
              bVar34 = (byte)((uint)auVar98._0_4_ >> 8);
              bVar46 = (byte)((uint)auVar98._0_4_ >> 0x10);
              bVar47 = (byte)((uint)auVar98._0_4_ >> 0x18);
              fVar105 = (float)CONCAT13(bVar47 & (byte)((uint)fVar105 >> 0x18),
                                        CONCAT12(bVar46 & (byte)((uint)fVar105 >> 0x10),
                                                 CONCAT11(bVar34 & (byte)((uint)fVar105 >> 8),
                                                          bVar125 & SUB41(fVar105,0))));
              bVar48 = (byte)((uint)auVar98._4_4_ >> 8);
              bVar61 = (byte)((uint)auVar98._4_4_ >> 0x10);
              bVar62 = (byte)((uint)auVar98._4_4_ >> 0x18);
              auVar111._0_8_ =
                   CONCAT17(bVar62 & (byte)((uint)fVar107 >> 0x18),
                            CONCAT16(bVar61 & (byte)((uint)fVar107 >> 0x10),
                                     CONCAT15(bVar48 & (byte)((uint)fVar107 >> 8),
                                              CONCAT14(bVar129 & SUB41(fVar107,0),fVar105))));
              auVar111[8] = bVar130 & SUB41(fVar109,0);
              bVar63 = (byte)((uint)auVar98._8_4_ >> 8);
              auVar111[9] = bVar63 & (byte)((uint)fVar109 >> 8);
              bVar64 = (byte)((uint)auVar98._8_4_ >> 0x10);
              auVar111[10] = bVar64 & (byte)((uint)fVar109 >> 0x10);
              bVar65 = (byte)((uint)auVar98._8_4_ >> 0x18);
              auVar111[0xb] = bVar65 & (byte)((uint)fVar109 >> 0x18);
              auVar113[0xc] = bVar132 & SUB41(fVar124,0);
              auVar113._0_12_ = auVar111;
              bVar66 = (byte)((uint)auVar98._12_4_ >> 8);
              auVar113[0xd] = bVar66 & (byte)((uint)fVar124 >> 8);
              bVar68 = (byte)((uint)auVar98._12_4_ >> 0x10);
              auVar113[0xe] = bVar68 & (byte)((uint)fVar124 >> 0x10);
              bVar69 = (byte)((uint)auVar98._12_4_ >> 0x18);
              auVar113[0xf] = bVar69 & (byte)((uint)fVar124 >> 0x18);
              fVar124 = (float)((ulong)auVar111._0_8_ >> 0x20);
              fVar107 = auVar111._8_4_;
              fVar109 = auVar113._12_4_;
              local_150 = local_150 - in_q6._0_4_ * fVar105;
              fStack_14c = fStack_14c - in_q6._4_4_ * fVar124;
              fStack_148 = fStack_148 - in_q6._8_4_ * fVar107;
              fStack_144 = fStack_144 - in_q6._12_4_ * fVar109;
              in_q6._4_4_ = fStack_13c;
              in_q6._0_4_ = local_140;
              in_q6._8_4_ = fStack_138;
              in_q6._12_4_ = fStack_134;
              local_140 = local_140 - in_q5._0_4_ * fVar105;
              fStack_13c = fStack_13c - in_q5._4_4_ * fVar124;
              fStack_138 = fStack_138 - in_q5._8_4_ * fVar107;
              fStack_134 = fStack_134 - in_q5._12_4_ * fVar109;
              local_130 = local_130 - fVar35 * fVar105;
              fStack_12c = fStack_12c - fVar49 * fVar124;
              fStack_128 = fStack_128 - fVar95 * fVar107;
              fStack_124 = fStack_124 - fVar50 * fVar109;
              in_q5._4_4_ = fStack_ec;
              in_q5._0_4_ = local_f0;
              in_q5._8_4_ = fStack_e8;
              in_q5._12_4_ = fStack_e4;
              fVar35 = (float)CONCAT13(bVar47 & in_q7[3],
                                       CONCAT12(bVar46 & in_q7[2],
                                                CONCAT11(bVar34 & in_q7[1],bVar125 & in_q7[0])));
              auVar37._0_8_ =
                   CONCAT17(bVar62 & in_q7[7],
                            CONCAT16(bVar61 & in_q7[6],
                                     CONCAT15(bVar48 & in_q7[5],CONCAT14(bVar129 & in_q7[4],fVar35))
                                    ));
              auVar37[8] = bVar130 & in_q7[8];
              auVar37[9] = bVar63 & in_q7[9];
              auVar37[10] = bVar64 & in_q7[10];
              auVar37[0xb] = bVar65 & in_q7[0xb];
              auVar42[0xc] = bVar132 & in_q7[0xc];
              auVar42._0_12_ = auVar37;
              auVar42[0xd] = bVar66 & in_q7[0xd];
              auVar42[0xe] = bVar68 & in_q7[0xe];
              auVar42[0xf] = bVar69 & in_q7[0xf];
              local_f0 = local_f0 + fVar35;
              fStack_ec = fStack_ec + (float)((ulong)auVar37._0_8_ >> 0x20);
              fStack_e8 = fStack_e8 + auVar37._8_4_;
              fStack_e4 = fStack_e4 + auVar42._12_4_;
              if (uVar14 == 0) goto LAB_00149a64;
            }
          } while (uVar14 != 0);
        }
        else {
          do {
            uVar2 = (int)LZCOUNT(uVar14 & -uVar14) * -0x10 + 0x1f0;
            pfVar3 = (float *)(*(long *)(param_1 + 0x1b0) + (ulong)uVar2);
            fVar35 = *pfVar3;
            fVar49 = pfVar3[1];
            fVar50 = pfVar3[2];
            fVar124 = pfVar3[3];
            fVar95 = local_a0 - fVar35;
            fVar105 = fStack_9c - fVar35;
            fVar107 = fStack_98 - fVar35;
            fVar109 = fStack_94 - fVar35;
            in_q7._0_4_ = local_90 - fVar49;
            in_q7._4_4_ = fStack_8c - fVar49;
            in_q7._8_4_ = fStack_88 - fVar49;
            in_q7._12_4_ = fStack_84 - fVar49;
            in_q6._0_4_ = local_80 - fVar50;
            in_q6._4_4_ = fStack_7c - fVar50;
            in_q6._8_4_ = fStack_78 - fVar50;
            in_q6._12_4_ = fStack_74 - fVar50;
            uVar14 = uVar14 - 1 & uVar14;
            auVar54._0_4_ =
                 in_q6._0_4_ * in_q6._0_4_ + in_q7._0_4_ * in_q7._0_4_ + fVar67 + fVar95 * fVar95;
            auVar54._4_4_ =
                 in_q6._4_4_ * in_q6._4_4_ + in_q7._4_4_ * in_q7._4_4_ + fVar67 + fVar105 * fVar105;
            auVar54._8_4_ =
                 in_q6._8_4_ * in_q6._8_4_ + in_q7._8_4_ * in_q7._8_4_ + fVar67 + fVar107 * fVar107;
            auVar54._12_4_ =
                 in_q6._12_4_ * in_q6._12_4_ +
                 in_q7._12_4_ * in_q7._12_4_ + fVar67 + fVar109 * fVar109;
            auVar27 = NEON_frsqrte(auVar54,4);
            auVar55._0_4_ = auVar27._0_4_ * auVar54._0_4_;
            auVar55._4_4_ = auVar27._4_4_ * auVar54._4_4_;
            auVar55._8_4_ = auVar27._8_4_ * auVar54._8_4_;
            auVar55._12_4_ = auVar27._12_4_ * auVar54._12_4_;
            auVar16 = NEON_frsqrts(auVar55,auVar27,4);
            auVar112 = NEON_fmov(0x3f800000,4);
            fVar119 = auVar112._0_4_ - auVar27._0_4_ * auVar16._0_4_ * fVar124;
            fVar122 = auVar112._4_4_ - auVar27._4_4_ * auVar16._4_4_ * fVar124;
            fVar123 = auVar112._8_4_ - auVar27._8_4_ * auVar16._8_4_ * fVar124;
            fVar124 = auVar112._12_4_ - auVar27._12_4_ * auVar16._12_4_ * fVar124;
            in_q5._0_4_ = (float)-(uint)(fVar119 < 0.0);
            in_q5._4_4_ = (float)-(uint)(fVar122 < 0.0);
            in_q5._8_4_ = (float)-(uint)(fVar123 < 0.0);
            in_q5._12_4_ = (float)-(uint)(fVar124 < 0.0);
            NEON_ext(in_q5,in_q5,8,1);
            bVar125 = SUB41(in_q5._0_4_,0);
            bVar129 = SUB41(in_q5._4_4_,0);
            bVar130 = SUB41(in_q5._8_4_,0);
            bVar132 = SUB41(in_q5._12_4_,0);
            if (CONCAT13(bVar132,CONCAT12(bVar130,CONCAT11(bVar129,bVar125))) != 0) {
              bVar61 = (byte)((uint)in_q5._0_4_ >> 8);
              bVar62 = (byte)((uint)in_q5._0_4_ >> 0x10);
              bVar63 = (byte)((uint)in_q5._0_4_ >> 0x18);
              fVar119 = (float)CONCAT13(bVar63 & (byte)((uint)fVar119 >> 0x18),
                                        CONCAT12(bVar62 & (byte)((uint)fVar119 >> 0x10),
                                                 CONCAT11(bVar61 & (byte)((uint)fVar119 >> 8),
                                                          bVar125 & SUB41(fVar119,0))));
              bVar64 = (byte)((uint)in_q5._4_4_ >> 8);
              bVar65 = (byte)((uint)in_q5._4_4_ >> 0x10);
              bVar66 = (byte)((uint)in_q5._4_4_ >> 0x18);
              auVar120._0_8_ =
                   CONCAT17(bVar66 & (byte)((uint)fVar122 >> 0x18),
                            CONCAT16(bVar65 & (byte)((uint)fVar122 >> 0x10),
                                     CONCAT15(bVar64 & (byte)((uint)fVar122 >> 8),
                                              CONCAT14(bVar129 & SUB41(fVar122,0),fVar119))));
              auVar120[8] = bVar130 & SUB41(fVar123,0);
              bVar68 = (byte)((uint)in_q5._8_4_ >> 8);
              auVar120[9] = bVar68 & (byte)((uint)fVar123 >> 8);
              bVar69 = (byte)((uint)in_q5._8_4_ >> 0x10);
              auVar120[10] = bVar69 & (byte)((uint)fVar123 >> 0x10);
              bVar70 = (byte)((uint)in_q5._8_4_ >> 0x18);
              auVar120[0xb] = bVar70 & (byte)((uint)fVar123 >> 0x18);
              auVar121[0xc] = bVar132 & SUB41(fVar124,0);
              auVar121._0_12_ = auVar120;
              bVar71 = (byte)((uint)in_q5._12_4_ >> 8);
              auVar121[0xd] = bVar71 & (byte)((uint)fVar124 >> 8);
              bVar72 = (byte)((uint)in_q5._12_4_ >> 0x10);
              auVar121[0xe] = bVar72 & (byte)((uint)fVar124 >> 0x10);
              bVar73 = (byte)((uint)in_q5._12_4_ >> 0x18);
              auVar121[0xf] = bVar73 & (byte)((uint)fVar124 >> 0x18);
              fVar124 = (float)((ulong)auVar120._0_8_ >> 0x20);
              fVar122 = auVar120._8_4_;
              fVar123 = auVar121._12_4_;
              local_150 = local_150 - fVar95 * fVar119;
              fStack_14c = fStack_14c - fVar105 * fVar124;
              fStack_148 = fStack_148 - fVar107 * fVar122;
              fStack_144 = fStack_144 - fVar109 * fVar123;
              local_140 = local_140 - in_q7._0_4_ * fVar119;
              fStack_13c = fStack_13c - in_q7._4_4_ * fVar124;
              fStack_138 = fStack_138 - in_q7._8_4_ * fVar122;
              fStack_134 = fStack_134 - in_q7._12_4_ * fVar123;
              local_130 = local_130 - in_q6._0_4_ * fVar119;
              fStack_12c = fStack_12c - in_q6._4_4_ * fVar124;
              fStack_128 = fStack_128 - in_q6._8_4_ * fVar122;
              fStack_124 = fStack_124 - in_q6._12_4_ * fVar123;
              fVar124 = (float)CONCAT13(bVar63 & auVar112[3],
                                        CONCAT12(bVar62 & auVar112[2],
                                                 CONCAT11(bVar61 & auVar112[1],bVar125 & auVar112[0]
                                                         )));
              auVar74._0_8_ =
                   CONCAT17(bVar66 & auVar112[7],
                            CONCAT16(bVar65 & auVar112[6],
                                     CONCAT15(bVar64 & auVar112[5],
                                              CONCAT14(bVar129 & auVar112[4],fVar124))));
              auVar74[8] = bVar130 & auVar112[8];
              auVar74[9] = bVar68 & auVar112[9];
              auVar74[10] = bVar69 & auVar112[10];
              auVar74[0xb] = bVar70 & auVar112[0xb];
              auVar80[0xc] = bVar132 & auVar112[0xc];
              auVar80._0_12_ = auVar74;
              auVar80[0xd] = bVar71 & auVar112[0xd];
              auVar80[0xe] = bVar72 & auVar112[0xe];
              auVar80[0xf] = bVar73 & auVar112[0xf];
              local_f0 = local_f0 + fVar124;
              fStack_ec = fStack_ec + (float)((ulong)auVar74._0_8_ >> 0x20);
              fStack_e8 = fStack_e8 + auVar74._8_4_;
              fStack_e4 = fStack_e4 + auVar80._12_4_;
              pfVar3 = (float *)(*(long *)(param_1 + 0x1a0) + (ulong)uVar2);
              fVar35 = fVar35 - *pfVar3;
              fVar49 = fVar49 - pfVar3[1];
              fVar50 = fVar50 - pfVar3[2];
              bVar34 = SUB41(fVar35,0);
              bVar46 = (byte)((uint)fVar35 >> 8);
              bVar47 = (byte)((uint)fVar35 >> 0x10);
              bVar48 = (byte)((uint)fVar35 >> 0x18);
              fVar35 = (float)CONCAT13(bVar48 & bVar63,
                                       CONCAT12(bVar47 & bVar62,
                                                CONCAT11(bVar46 & bVar61,bVar34 & bVar125)));
              auVar75._0_8_ =
                   CONCAT17(bVar48 & bVar66,
                            CONCAT16(bVar47 & bVar65,
                                     CONCAT15(bVar46 & bVar64,CONCAT14(bVar34 & bVar129,fVar35))));
              auVar75[8] = bVar34 & bVar130;
              auVar75[9] = bVar46 & bVar68;
              auVar75[10] = bVar47 & bVar69;
              auVar75[0xb] = bVar48 & bVar70;
              auVar81[0xc] = bVar34 & bVar132;
              auVar81._0_12_ = auVar75;
              auVar81[0xd] = bVar46 & bVar71;
              auVar81[0xe] = bVar47 & bVar72;
              auVar81[0xf] = bVar48 & bVar73;
              in_q7._8_8_ = uStack_108;
              in_q7._0_8_ = local_110;
              uStack_118 = CONCAT44(uStack_118._4_4_ + auVar81._12_4_,
                                    (float)uStack_118 + auVar75._8_4_);
              local_120 = CONCAT44(local_120._4_4_ + (float)((ulong)auVar75._0_8_ >> 0x20),
                                   (float)local_120 + fVar35);
              bVar34 = SUB41(fVar49,0);
              bVar46 = (byte)((uint)fVar49 >> 8);
              bVar47 = (byte)((uint)fVar49 >> 0x10);
              bVar48 = (byte)((uint)fVar49 >> 0x18);
              fVar49 = (float)CONCAT13(bVar48 & bVar63,
                                       CONCAT12(bVar47 & bVar62,
                                                CONCAT11(bVar46 & bVar61,bVar34 & bVar125)));
              auVar76._0_8_ =
                   CONCAT17(bVar48 & bVar66,
                            CONCAT16(bVar47 & bVar65,
                                     CONCAT15(bVar46 & bVar64,CONCAT14(bVar34 & bVar129,fVar49))));
              auVar76[8] = bVar34 & bVar130;
              auVar76[9] = bVar46 & bVar68;
              auVar76[10] = bVar47 & bVar69;
              auVar76[0xb] = bVar48 & bVar70;
              auVar82[0xc] = bVar34 & bVar132;
              auVar82._0_12_ = auVar76;
              auVar82[0xd] = bVar46 & bVar71;
              auVar82[0xe] = bVar47 & bVar72;
              auVar82[0xf] = bVar48 & bVar73;
              bVar34 = SUB41(fVar50,0);
              bVar46 = (byte)((uint)fVar50 >> 8);
              bVar47 = (byte)((uint)fVar50 >> 0x10);
              bVar48 = (byte)((uint)fVar50 >> 0x18);
              fVar35 = (float)CONCAT13(bVar48 & bVar63,
                                       CONCAT12(bVar47 & bVar62,
                                                CONCAT11(bVar46 & bVar61,bVar34 & bVar125)));
              auVar36._0_8_ =
                   CONCAT17(bVar48 & bVar66,
                            CONCAT16(bVar47 & bVar65,
                                     CONCAT15(bVar46 & bVar64,CONCAT14(bVar34 & bVar129,fVar35))));
              auVar36[8] = bVar34 & bVar130;
              auVar36[9] = bVar46 & bVar68;
              auVar36[10] = bVar47 & bVar69;
              auVar36[0xb] = bVar48 & bVar70;
              auVar41[0xc] = bVar34 & bVar132;
              auVar41._0_12_ = auVar36;
              auVar41[0xd] = bVar46 & bVar71;
              auVar41[0xe] = bVar47 & bVar72;
              auVar41[0xf] = bVar48 & bVar73;
              in_q5._4_4_ = fStack_fc;
              in_q5._0_4_ = local_100;
              in_q5._8_4_ = fStack_f8;
              in_q5._12_4_ = fStack_f4;
              in_q6._0_8_ = CONCAT44((float)((ulong)local_110 >> 0x20) +
                                     (float)((ulong)auVar76._0_8_ >> 0x20),(float)local_110 + fVar49
                                    );
              in_q6._8_4_ = (float)uStack_108 + auVar76._8_4_;
              in_q6._12_4_ = (float)((ulong)uStack_108 >> 0x20) + auVar82._12_4_;
              local_100 = local_100 + fVar35;
              fStack_fc = fStack_fc + (float)((ulong)auVar36._0_8_ >> 0x20);
              fStack_f8 = fStack_f8 + auVar36._8_4_;
              fStack_f4 = fStack_f4 + auVar41._12_4_;
              uStack_108 = in_q6._8_8_;
              local_110 = in_q6._0_8_;
            }
          } while (uVar14 != 0);
        }
      }
LAB_00149a64:
      auVar5._4_4_ = fStack_ec;
      auVar5._0_4_ = local_f0;
      auVar5._8_4_ = fStack_e8;
      auVar5._12_4_ = fStack_e4;
      auVar28._0_4_ = -(uint)(fVar67 < local_f0);
      auVar28._4_4_ = -(uint)(fVar67 < fStack_ec);
      auVar28._8_4_ = -(uint)(fVar67 < fStack_e8);
      auVar28._12_4_ = -(uint)(fVar67 < fStack_e4);
      auVar16 = NEON_ext(auVar28,auVar28,8,1);
      auVar8._2_8_ = auVar16._0_8_;
      auVar8._0_2_ = (short)auVar28._12_4_;
      auVar8._10_6_ = 0;
      in_q4 = auVar8 << 0x30;
      if (CONCAT13((byte)auVar28._12_4_,
                   CONCAT12((byte)auVar28._8_4_,CONCAT11((byte)auVar28._4_4_,(byte)auVar28._0_4_)))
          != 0) {
        auVar27 = NEON_frecpe(auVar5,4);
        auVar16 = NEON_frecps(auVar5,auVar27,4);
        fVar35 = auVar27._0_4_ * auVar16._0_4_;
        fVar49 = auVar27._4_4_ * auVar16._4_4_;
        fVar50 = auVar27._8_4_ * auVar16._8_4_;
        fVar124 = auVar27._12_4_ * auVar16._12_4_;
        if (0.0 < fVar26) {
          fVar95 = pfVar12[2];
          fVar105 = pfVar12[6];
          fVar107 = pfVar12[10];
          auVar16 = *(undefined1 (*) [16])(pfVar12 + 0xc);
          fVar109 = auVar16._8_4_;
          auVar83._4_12_ = auVar16._4_12_;
          auVar83._0_4_ = fVar95;
          auVar85._0_8_ = auVar83._0_8_;
          auVar85._8_4_ = fVar107;
          auVar85._12_4_ = auVar16._12_4_;
          auVar84._8_8_ = auVar85._8_8_;
          auVar84._4_4_ = fVar105;
          auVar84._0_4_ = fVar95;
          auVar86._0_12_ = auVar84._0_12_;
          auVar86._12_4_ = fVar109;
          fVar96 = local_150 * local_150 + local_140 * local_140 + local_130 * local_130;
          fVar106 = fStack_14c * fStack_14c + fStack_13c * fStack_13c + fStack_12c * fStack_12c;
          fVar108 = fStack_148 * fStack_148 + fStack_138 * fStack_138 + fStack_128 * fStack_128;
          fVar110 = fStack_144 * fStack_144 + fStack_134 * fStack_134 + fStack_124 * fStack_124;
          auVar127._0_4_ = fVar67 + fVar96;
          auVar127._4_4_ = fVar67 + fVar106;
          auVar127._8_4_ = fVar67 + fVar108;
          auVar127._12_4_ = fVar67 + fVar110;
          auVar112 = NEON_frsqrte(auVar127,4);
          auVar128._0_4_ = auVar127._0_4_ * auVar112._0_4_;
          auVar128._4_4_ = auVar127._4_4_ * auVar112._4_4_;
          auVar128._8_4_ = auVar127._8_4_ * auVar112._8_4_;
          auVar128._12_4_ = auVar127._12_4_ * auVar112._12_4_;
          auVar27 = NEON_frsqrts(auVar128,auVar112,4);
          fVar126 = auVar112._0_4_ * auVar27._0_4_;
          fVar131 = auVar112._4_4_ * auVar27._4_4_;
          fVar133 = auVar112._8_4_ * auVar27._8_4_;
          fVar134 = auVar112._12_4_ * auVar27._12_4_;
          fVar119 = (local_a0 - *pfVar12) - fVar35 * (float)local_120;
          fVar122 = (fStack_9c - pfVar12[4]) - fVar49 * (float)((ulong)local_120 >> 0x20);
          fVar123 = (fStack_98 - pfVar12[8]) - fVar50 * (float)uStack_118;
          fVar135 = (fStack_94 - auVar16._0_4_) - fVar124 * (float)((ulong)uStack_118 >> 0x20);
          fVar136 = (local_90 - pfVar12[1]) - fVar35 * (float)local_110;
          fVar137 = (fStack_8c - pfVar12[5]) - fVar49 * (float)((ulong)local_110 >> 0x20);
          fVar138 = (fStack_88 - pfVar12[9]) - fVar50 * (float)uStack_108;
          fVar139 = (fStack_84 - auVar16._4_4_) - fVar124 * (float)((ulong)uStack_108 >> 0x20);
          fVar140 = (local_80 - fVar95) - fVar35 * local_100;
          fVar141 = (fStack_7c - fVar105) - fVar49 * fStack_fc;
          fVar142 = (fStack_78 - fVar107) - fVar50 * fStack_f8;
          fVar143 = (fStack_74 - fVar109) - fVar124 * fStack_f4;
          fVar144 = local_150 * fVar126 * fVar119 + local_140 * fVar126 * fVar136 +
                    local_130 * fVar126 * fVar140;
          fVar145 = fStack_14c * fVar131 * fVar122 + fStack_13c * fVar131 * fVar137 +
                    fStack_12c * fVar131 * fVar141;
          fVar146 = fStack_148 * fVar133 * fVar123 + fStack_138 * fVar133 * fVar138 +
                    fStack_128 * fVar133 * fVar142;
          fVar147 = fStack_144 * fVar134 * fVar135 + fStack_134 * fVar134 * fVar139 +
                    fStack_124 * fVar134 * fVar143;
          fVar119 = fVar119 - local_150 * fVar126 * fVar144;
          fVar122 = fVar122 - fStack_14c * fVar131 * fVar145;
          fVar123 = fVar123 - fStack_148 * fVar133 * fVar146;
          fVar135 = fVar135 - fStack_144 * fVar134 * fVar147;
          auVar114._0_4_ = fVar136 - local_140 * fVar126 * fVar144;
          auVar114._4_4_ = fVar137 - fStack_13c * fVar131 * fVar145;
          auVar114._8_4_ = fVar138 - fStack_138 * fVar133 * fVar146;
          auVar114._12_4_ = fVar139 - fStack_134 * fVar134 * fVar147;
          fVar140 = fVar140 - local_130 * fVar126 * fVar144;
          fVar141 = fVar141 - fStack_12c * fVar131 * fVar145;
          fVar142 = fVar142 - fStack_128 * fVar133 * fVar146;
          fVar143 = fVar143 - fStack_124 * fVar134 * fVar147;
          auVar17._0_4_ =
               fVar67 + fVar140 * fVar140 + fVar119 * fVar119 + auVar114._0_4_ * auVar114._0_4_;
          auVar17._4_4_ =
               fVar67 + fVar141 * fVar141 + fVar122 * fVar122 + auVar114._4_4_ * auVar114._4_4_;
          auVar17._8_4_ =
               fVar67 + fVar142 * fVar142 + fVar123 * fVar123 + auVar114._8_4_ * auVar114._8_4_;
          auVar17._12_4_ =
               fVar67 + fVar143 * fVar143 + fVar135 * fVar135 + auVar114._12_4_ * auVar114._12_4_;
          auVar112 = NEON_frsqrte(auVar17,4);
          auVar18._0_4_ = auVar112._0_4_ * auVar17._0_4_;
          auVar18._4_4_ = auVar112._4_4_ * auVar17._4_4_;
          auVar18._8_4_ = auVar112._8_4_ * auVar17._8_4_;
          auVar18._12_4_ = auVar112._12_4_ * auVar17._12_4_;
          auVar27 = NEON_frsqrts(auVar18,auVar112,4);
          auVar19._0_4_ = -(fVar26 * fVar96 * fVar126 * auVar112._0_4_ * auVar27._0_4_);
          auVar19._4_4_ = -(fVar26 * fVar106 * fVar131 * auVar112._4_4_ * auVar27._4_4_);
          auVar19._8_4_ = -(fVar26 * fVar108 * fVar133 * auVar112._8_4_ * auVar27._8_4_);
          auVar19._12_4_ = -(fVar26 * fVar110 * fVar134 * auVar112._12_4_ * auVar27._12_4_);
          uVar4 = *(undefined4 *)PTR_DAT_02710d60;
          auVar99._4_4_ = uVar4;
          auVar99._0_4_ = uVar4;
          auVar99._8_4_ = uVar4;
          auVar99._12_4_ = uVar4;
          auVar27 = NEON_fmax(auVar19,auVar99,4);
          fVar67 = (float)CONCAT13(auVar27[3] & (byte)((uint)auVar28._0_4_ >> 0x18),
                                   CONCAT12(auVar27[2] & (byte)((uint)auVar28._0_4_ >> 0x10),
                                            CONCAT11(auVar27[1] & (byte)((uint)auVar28._0_4_ >> 8),
                                                     auVar27[0] & (byte)auVar28._0_4_)));
          auVar15._0_8_ =
               CONCAT17(auVar27[7] & (byte)((uint)auVar28._4_4_ >> 0x18),
                        CONCAT16(auVar27[6] & (byte)((uint)auVar28._4_4_ >> 0x10),
                                 CONCAT15(auVar27[5] & (byte)((uint)auVar28._4_4_ >> 8),
                                          CONCAT14(auVar27[4] & (byte)auVar28._4_4_,fVar67))));
          auVar15[8] = auVar27[8] & (byte)auVar28._8_4_;
          auVar15[9] = auVar27[9] & (byte)((uint)auVar28._8_4_ >> 8);
          auVar15[10] = auVar27[10] & (byte)((uint)auVar28._8_4_ >> 0x10);
          auVar15[0xb] = auVar27[0xb] & (byte)((uint)auVar28._8_4_ >> 0x18);
          auVar20[0xc] = auVar27[0xc] & (byte)auVar28._12_4_;
          auVar20._0_12_ = auVar15;
          auVar20[0xd] = auVar27[0xd] & (byte)((uint)auVar28._12_4_ >> 8);
          auVar20[0xe] = auVar27[0xe] & (byte)((uint)auVar28._12_4_ >> 0x10);
          auVar20[0xf] = auVar27[0xf] & (byte)((uint)auVar28._12_4_ >> 0x18);
          in_q7._0_4_ = fVar119 * fVar67;
          fVar119 = (float)((ulong)auVar15._0_8_ >> 0x20);
          in_q7._4_4_ = fVar122 * fVar119;
          fVar122 = auVar15._8_4_;
          in_q7._8_4_ = fVar123 * fVar122;
          fVar123 = auVar20._12_4_;
          in_q7._12_4_ = fVar135 * fVar123;
          auVar100._0_4_ = auVar114._0_4_ * fVar67;
          auVar100._4_4_ = auVar114._4_4_ * fVar119;
          auVar100._8_4_ = auVar114._8_4_ * fVar122;
          auVar100._12_4_ = auVar114._12_4_ * fVar123;
          fVar135 = *pfVar12 - in_q7._0_4_;
          fVar96 = pfVar12[4] - in_q7._4_4_;
          fVar106 = pfVar12[8] - in_q7._8_4_;
          fVar95 = fVar95 - fVar140 * fVar67;
          fVar105 = fVar105 - fVar141 * fVar119;
          fVar107 = fVar107 - fVar142 * fVar122;
          fVar67 = pfVar12[9] - auVar100._8_4_;
          auVar101._4_12_ = auVar100._4_12_;
          auVar101._0_4_ = fVar106;
          auVar103._0_8_ = auVar101._0_8_;
          auVar103._8_4_ = auVar16._0_4_ - in_q7._12_4_;
          auVar103._12_4_ = auVar100._12_4_;
          auVar102._8_8_ = auVar103._8_8_;
          auVar102._4_4_ = fVar107;
          auVar102._0_4_ = fVar106;
          auVar104._0_12_ = auVar102._0_12_;
          auVar104._12_4_ = fVar109 - fVar143 * fVar123;
          auVar87._4_12_ = auVar86._4_12_;
          auVar87._0_4_ = fVar135;
          auVar89._0_8_ = auVar87._0_8_;
          auVar89._8_4_ = fVar96;
          auVar89._12_4_ = fVar109;
          auVar88._8_8_ = auVar89._8_8_;
          auVar88._4_4_ = fVar95;
          auVar88._0_4_ = fVar135;
          in_q6._0_12_ = auVar88._0_12_;
          in_q6._12_4_ = fVar105;
          auVar115._4_12_ = auVar114._4_12_;
          auVar115._0_4_ = fVar67;
          auVar117._0_8_ = auVar115._0_8_;
          auVar117._8_4_ = auVar16._4_4_ - auVar100._12_4_;
          auVar117._12_4_ = auVar114._12_4_;
          auVar116._8_8_ = auVar117._8_8_;
          auVar116._4_4_ = pfVar12[0xb];
          auVar116._0_4_ = fVar67;
          auVar118._0_12_ = auVar116._0_12_;
          auVar118._12_4_ = auVar16._12_4_;
          auVar16 = NEON_ext(auVar104,auVar104,8,1);
          NEON_ext(auVar118,auVar118,8,1);
          local_c0 = CONCAT44(local_c0._4_4_,fVar106);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,fVar107);
          local_b0 = CONCAT44(local_b0._4_4_,auVar16._0_4_);
          uStack_a8 = CONCAT44(uStack_a8._4_4_,auVar16._4_4_);
          pfVar12[2] = fVar95;
          pfVar12[3] = pfVar12[3];
          *pfVar12 = fVar135;
          pfVar12[1] = pfVar12[1] - auVar100._0_4_;
          pfVar12[6] = fVar105;
          pfVar12[7] = pfVar12[7];
          pfVar12[4] = fVar96;
          pfVar12[5] = pfVar12[5] - auVar100._4_4_;
          *(undefined8 *)(pfVar12 + 10) = uStack_b8;
          *(undefined8 *)(pfVar12 + 8) = local_c0;
          *(undefined8 *)(pfVar12 + 0xe) = uStack_a8;
          *(undefined8 *)(pfVar12 + 0xc) = local_b0;
        }
        if (fVar13 <= 0.0) {
          auVar29._8_8_ = uStack_68;
          auVar29._0_8_ = local_70;
        }
        else {
          in_q7._0_4_ = local_130 * local_130;
          in_q7._4_4_ = fStack_12c * fStack_12c;
          in_q7._8_4_ = fStack_128 * fStack_128;
          in_q7._12_4_ = fStack_124 * fStack_124;
          auVar16 = NEON_fmov(0x3f800000,4);
          auVar56._0_4_ =
               fVar13 * fVar35 * fVar35 *
                        (local_150 * local_150 + local_140 * local_140 + in_q7._0_4_) +
               auVar16._0_4_;
          auVar56._4_4_ =
               fVar13 * fVar49 * fVar49 *
                        (fStack_14c * fStack_14c + fStack_13c * fStack_13c + in_q7._4_4_) +
               auVar16._4_4_;
          auVar56._8_4_ =
               fVar13 * fVar50 * fVar50 *
                        (fStack_148 * fStack_148 + fStack_138 * fStack_138 + in_q7._8_4_) +
               auVar16._8_4_;
          auVar56._12_4_ =
               fVar13 * fVar124 * fVar124 *
                        (fStack_144 * fStack_144 + fStack_134 * fStack_134 + in_q7._12_4_) +
               auVar16._12_4_;
          auVar27 = NEON_frecpe(auVar56,4);
          auVar16 = NEON_frecps(auVar56,auVar27,4);
          in_q6._8_8_ = uStack_68;
          in_q6._0_8_ = local_70;
          auVar57._0_4_ = (float)local_70 * auVar27._0_4_ * auVar16._0_4_;
          auVar57._4_4_ = (float)((ulong)local_70 >> 0x20) * auVar27._4_4_ * auVar16._4_4_;
          auVar57._8_4_ = (float)uStack_68 * auVar27._8_4_ * auVar16._8_4_;
          auVar57._12_4_ = (float)((ulong)uStack_68 >> 0x20) * auVar27._12_4_ * auVar16._12_4_;
          auVar29 = in_q6 ^ (in_q6 ^ auVar57) & auVar28;
          uStack_68 = auVar29._8_8_;
          local_70 = auVar29._0_8_;
        }
        auVar21._0_4_ = local_a0 + fVar35 * local_150;
        auVar21._4_4_ = fStack_9c + fVar49 * fStack_14c;
        auVar21._8_4_ = fStack_98 + fVar50 * fStack_148;
        auVar21._12_4_ = fStack_94 + fVar124 * fStack_144;
        auVar6._4_4_ = fStack_8c;
        auVar6._0_4_ = local_90;
        auVar6._8_4_ = fStack_88;
        auVar6._12_4_ = fStack_84;
        auVar7._4_4_ = fStack_7c;
        auVar7._0_4_ = local_80;
        auVar7._8_4_ = fStack_78;
        auVar7._12_4_ = fStack_74;
        local_90 = local_90 + fVar35 * local_140;
        fStack_88 = fStack_88 + fVar50 * fStack_138;
        local_80 = local_80 + fVar35 * local_130;
        fStack_78 = fStack_78 + fVar50 * fStack_128;
        auVar43._4_12_ = auVar7._4_12_;
        auVar43._0_4_ = auVar21._0_4_;
        auVar45._0_8_ = auVar43._0_8_;
        auVar45._8_4_ = auVar21._4_4_;
        auVar45._12_4_ = fStack_74;
        auVar44._8_8_ = auVar45._8_8_;
        auVar44._4_4_ = local_80;
        auVar44._0_4_ = auVar21._0_4_;
        in_q4._0_12_ = auVar44._0_12_;
        in_q4._12_4_ = fStack_7c + fVar49 * fStack_12c;
        auVar58._4_12_ = auVar6._4_12_;
        auVar58._0_4_ = auVar21._8_4_;
        auVar60._0_8_ = auVar58._0_8_;
        auVar60._8_4_ = auVar21._12_4_;
        auVar60._12_4_ = fStack_84;
        auVar59._8_8_ = auVar60._8_8_;
        auVar59._4_4_ = fStack_78;
        auVar59._0_4_ = auVar21._8_4_;
        in_q5._0_12_ = auVar59._0_12_;
        in_q5._12_4_ = fStack_74 + fVar124 * fStack_124;
        auVar22._4_12_ = auVar21._4_12_;
        auVar22._0_4_ = local_90;
        auVar24._0_8_ = auVar22._0_8_;
        auVar24._8_4_ = fStack_8c + fVar49 * fStack_13c;
        auVar24._12_4_ = auVar21._12_4_;
        auVar23._8_8_ = auVar24._8_8_;
        auVar23._4_4_ = auVar29._0_4_;
        auVar23._0_4_ = local_90;
        auVar25._0_12_ = auVar23._0_12_;
        auVar25._12_4_ = auVar29._4_4_;
        auVar90._4_12_ = in_q6._4_12_;
        auVar90._0_4_ = fStack_88;
        auVar92._12_4_ = in_q6._12_4_;
        auVar92._0_8_ = auVar90._0_8_;
        auVar92._8_4_ = fStack_84 + fVar124 * fStack_134;
        auVar91._8_8_ = auVar92._8_8_;
        auVar91._4_4_ = auVar29._8_4_;
        auVar91._0_4_ = fStack_88;
        in_q6._0_12_ = auVar91._0_12_;
        in_q6._12_4_ = (float)auVar29._12_4_;
        auVar30._4_12_ = auVar29._4_12_;
        auVar30._0_4_ = auVar21._0_4_;
        auVar32._0_8_ = auVar30._0_8_;
        auVar32._8_4_ = local_80;
        auVar32._12_4_ = auVar29._12_4_;
        auVar31._8_8_ = auVar32._8_8_;
        auVar31._0_8_ = CONCAT44(local_90,auVar21._0_4_);
        auVar33._0_12_ = auVar31._0_12_;
        auVar33._12_4_ = auVar29._0_4_;
        auVar16 = NEON_ext(in_q4,in_q4,8,1);
        auVar112 = NEON_ext(auVar25,auVar25,8,1);
        auVar27 = NEON_ext(in_q5,in_q5,8,1);
        NEON_ext(in_q6,in_q6,8,1);
        local_70 = CONCAT44(local_70._4_4_,auVar27._0_4_);
        uStack_68 = CONCAT44(uStack_68._4_4_,auVar27._4_4_);
        *(long *)(pfVar11 + 2) = auVar33._8_8_;
        *(undefined8 *)pfVar11 = auVar31._0_8_;
        *(ulong *)(pfVar11 + 6) = CONCAT44(auVar112._4_4_,auVar16._4_4_);
        *(ulong *)(pfVar11 + 4) = CONCAT44(auVar112._0_4_,auVar16._0_4_);
        *(ulong *)(pfVar11 + 10) = CONCAT44(auVar29._8_4_,fStack_78);
        *(ulong *)(pfVar11 + 8) = CONCAT44(fStack_88,auVar21._8_4_);
        *(undefined8 *)(pfVar11 + 0xe) = uStack_68;
        *(undefined8 *)(pfVar11 + 0xc) = local_70;
      }
      pfVar11 = pfVar11 + 0x10;
      pfVar12 = pfVar12 + 0x10;
    } while (pfVar11 < pfVar1);
  }
  return;
}


