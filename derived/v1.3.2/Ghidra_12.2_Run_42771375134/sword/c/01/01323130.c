/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01323130; name: FUN_01323130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_01323130(float param_1,float param_2,long param_3,float *param_4,undefined1 (*param_5) [12])

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  float fVar35;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  undefined8 uVar51;
  undefined8 uVar52;
  undefined1 auVar55 [16];
  float fVar60;
  undefined1 auVar56 [16];
  int iVar61;
  float fVar62;
  int iVar63;
  int iVar64;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar65;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  float fVar84;
  undefined8 uVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float local_150;
  float fStack_14c;
  float fStack_138;
  float fStack_134;
  byte local_110;
  byte bStack_10f;
  byte bStack_10e;
  byte bStack_10d;
  byte bStack_10c;
  byte bStack_10b;
  byte bStack_10a;
  byte bStack_109;
  byte bStack_108;
  byte bStack_107;
  byte bStack_106;
  byte bStack_105;
  byte bStack_104;
  byte bStack_103;
  byte bStack_102;
  byte bStack_101;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  uVar30 = _UNK_01d4ae98;
  uVar29 = _DAT_01d4ae90;
  uVar28 = _UNK_01d4ae88;
  uVar27 = _DAT_01d4ae80;
  uVar26 = DAT_01d4ab58;
  uVar25 = DAT_01d4ab50;
  uVar24 = DAT_01cd5418;
  uVar23 = DAT_01cd5270;
  uVar22 = DAT_01cd5188;
  uVar21 = DAT_01cd5158;
  uVar20 = DAT_01cd5120;
  uVar19 = DAT_01cd50f8;
  uVar18 = DAT_01cd50b0;
  uVar17 = DAT_01cd4f90;
  puVar34 = *(undefined8 **)(param_3 + 0x58);
  puVar1 = *(undefined8 **)(param_3 + 0x60);
  if (puVar34 == puVar1) {
    uVar33 = 0;
  }
  else {
    uVar36 = (undefined1)_UNK_01d4b588;
    uVar37 = (undefined1)((ulong)_UNK_01d4b588 >> 8);
    uVar38 = (undefined1)((ulong)_UNK_01d4b588 >> 0x10);
    uVar39 = (undefined1)((ulong)_UNK_01d4b588 >> 0x18);
    uVar40 = (undefined1)((ulong)_UNK_01d4b588 >> 0x20);
    uVar41 = (undefined1)((ulong)_UNK_01d4b588 >> 0x28);
    uVar42 = (undefined1)((ulong)_UNK_01d4b588 >> 0x30);
    uVar43 = (undefined1)((ulong)_UNK_01d4b588 >> 0x38);
    auVar67[8] = uVar36;
    auVar67._0_8_ = _DAT_01d4b580;
    auVar67[9] = uVar37;
    auVar67[10] = uVar38;
    auVar67[0xb] = uVar39;
    auVar67[0xc] = uVar40;
    auVar67[0xd] = uVar41;
    auVar67[0xe] = uVar42;
    auVar67[0xf] = uVar43;
    uVar72 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd50f8);
    auVar77[8] = uVar36;
    auVar77._0_8_ = _DAT_01d4b580;
    auVar77[9] = uVar37;
    auVar77[10] = uVar38;
    auVar77[0xb] = uVar39;
    auVar77[0xc] = uVar40;
    auVar77[0xd] = uVar41;
    auVar77[0xe] = uVar42;
    auVar77[0xf] = uVar43;
    uVar49 = a64_TBL(ZEXT816(0),auVar77,DAT_01cd5158);
    auVar2[8] = uVar36;
    auVar2._0_8_ = _DAT_01d4b580;
    auVar2[9] = uVar37;
    auVar2[10] = uVar38;
    auVar2[0xb] = uVar39;
    auVar2[0xc] = uVar40;
    auVar2[0xd] = uVar41;
    auVar2[0xe] = uVar42;
    auVar2[0xf] = uVar43;
    uVar79 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5418);
    auVar3[8] = uVar36;
    auVar3._0_8_ = _DAT_01d4b580;
    auVar3[9] = uVar37;
    auVar3[10] = uVar38;
    auVar3[0xb] = uVar39;
    auVar3[0xc] = uVar40;
    auVar3[0xd] = uVar41;
    auVar3[0xe] = uVar42;
    auVar3[0xf] = uVar43;
    uVar9 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5188);
    uVar36 = (undefined1)_UNK_01d49dc8;
    uVar37 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
    uVar38 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
    uVar39 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
    uVar40 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
    uVar41 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
    uVar42 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
    uVar43 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
    auVar4[8] = uVar36;
    auVar4._0_8_ = _DAT_01d49dc0;
    auVar4[9] = uVar37;
    auVar4[10] = uVar38;
    auVar4[0xb] = uVar39;
    auVar4[0xc] = uVar40;
    auVar4[0xd] = uVar41;
    auVar4[0xe] = uVar42;
    auVar4[0xf] = uVar43;
    uVar50 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    auVar5[8] = uVar36;
    auVar5._0_8_ = _DAT_01d49dc0;
    auVar5[9] = uVar37;
    auVar5[10] = uVar38;
    auVar5[0xb] = uVar39;
    auVar5[0xc] = uVar40;
    auVar5[0xd] = uVar41;
    auVar5[0xe] = uVar42;
    auVar5[0xf] = uVar43;
    uVar73 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
    auVar6[8] = uVar36;
    auVar6._0_8_ = _DAT_01d49dc0;
    auVar6[9] = uVar37;
    auVar6[10] = uVar38;
    auVar6[0xb] = uVar39;
    auVar6[0xc] = uVar40;
    auVar6[0xd] = uVar41;
    auVar6[0xe] = uVar42;
    auVar6[0xf] = uVar43;
    uVar10 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
    uVar32 = 0;
    fVar84 = DAT_01d4c18c;
    do {
      uVar31 = FUN_01323dd0(*puVar34);
      uVar33 = uVar32;
      if (((uVar31 & 1) == 0) && (uVar31 = FUN_01323a30(*puVar34), (uVar31 & 1) == 0)) {
        fVar35 = (float)puVar34[2] - *param_4;
        fVar48 = (float)((ulong)puVar34[2] >> 0x20) - param_4[1];
        fVar62 = (float)puVar34[3] - param_4[2];
        fVar71 = (float)((ulong)puVar34[3] >> 0x20) - param_4[3];
        auVar54._0_4_ = fVar35 * fVar35;
        auVar54._4_4_ = fVar48 * fVar48;
        auVar54._8_4_ = fVar62 * fVar62;
        auVar54._12_4_ = fVar71 * fVar71;
        auVar67 = NEON_ext(auVar54,auVar54,8,1);
        fVar65 = SQRT(auVar67._0_4_ + auVar54._0_4_ + auVar67._4_4_ + auVar54._4_4_);
        if (fVar65 != 0.0) {
          fVar45 = 1.0 / fVar65;
          auVar75._0_4_ = fVar35 * fVar45;
          auVar75._4_4_ = fVar48 * fVar45;
          auVar75._8_4_ = fVar62 * fVar45;
          auVar75._12_4_ = fVar71 * fVar45;
          uVar66 = a64_TBL(ZEXT816(0),auVar75,uVar24);
          uVar51 = a64_TBL(ZEXT816(0),auVar75,uVar22);
          local_d0 = (float)uVar72;
          fStack_cc = (float)((ulong)uVar72 >> 0x20);
          fStack_c8 = (float)uVar49;
          fStack_c4 = (float)((ulong)uVar49 >> 0x20);
          uVar74 = a64_TBL(ZEXT816(0),auVar75,uVar19);
          uVar52 = a64_TBL(ZEXT816(0),auVar75,uVar21);
          FUN_01324450(*puVar34);
          fVar35 = (float)CONCAT13(extraout_var_01,
                                   CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
          fVar48 = (*(float *)(puVar34 + 2) +
                   ((float)uVar66 * local_d0 - (float)uVar74 * (float)uVar79) * fVar35) - *param_4;
          fVar62 = (*(float *)((long)puVar34 + 0x14) +
                   ((float)((ulong)uVar66 >> 0x20) * fStack_cc -
                   (float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar79 >> 0x20)) * fVar35) -
                   param_4[1];
          fVar71 = (*(float *)(puVar34 + 3) +
                   ((float)uVar51 * fStack_c8 - (float)uVar52 * (float)uVar9) * fVar35) - param_4[2]
          ;
          fVar45 = (*(float *)((long)puVar34 + 0x1c) +
                   ((float)((ulong)uVar51 >> 0x20) * fStack_c4 -
                   (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar9 >> 0x20)) * fVar35) -
                   param_4[3];
          auVar55._0_4_ = fVar48 * fVar48;
          auVar55._4_4_ = fVar62 * fVar62;
          auVar55._8_4_ = fVar71 * fVar71;
          auVar55._12_4_ = fVar45 * fVar45;
          auVar67 = NEON_ext(auVar55,auVar55,8,1);
          fVar46 = auVar67._0_4_ + auVar55._0_4_;
          fVar60 = auVar67._4_4_ + auVar55._4_4_;
          fVar35 = fVar46 + fVar60;
          fVar46 = fVar46 + fVar60;
          auVar56._8_8_ = CONCAT44(fVar46,fVar35);
          auVar56._0_8_ = CONCAT44(fVar46,fVar35);
          auVar67 = NEON_frsqrte(auVar56,4);
          auVar76._0_4_ = auVar67._0_4_ * fVar35;
          auVar76._4_4_ = auVar67._4_4_ * fVar46;
          auVar76._8_4_ = auVar67._8_4_ * fVar35;
          auVar76._12_4_ = auVar67._12_4_ * fVar46;
          auVar77 = NEON_frsqrts(auVar67,auVar76,4);
          auVar68._0_4_ = auVar67._0_4_ * auVar77._0_4_;
          auVar68._4_4_ = auVar67._4_4_ * auVar77._4_4_;
          auVar68._8_4_ = auVar67._8_4_ * auVar77._8_4_;
          auVar68._12_4_ = auVar67._12_4_ * auVar77._12_4_;
          auVar78._0_4_ = fVar35 * auVar68._0_4_;
          auVar78._4_4_ = fVar46 * auVar68._4_4_;
          auVar78._8_4_ = fVar35 * auVar68._8_4_;
          auVar78._12_4_ = fVar46 * auVar68._12_4_;
          iVar47 = -(uint)(fVar35 == 0.0);
          iVar61 = -(uint)(fVar46 == 0.0);
          iVar63 = -(uint)(fVar35 == 0.0);
          iVar64 = -(uint)(fVar46 == 0.0);
          auVar67 = NEON_frsqrts(auVar68,auVar78,4);
          fVar48 = fVar48 * auVar68._0_4_ * auVar67._0_4_;
          fVar62 = fVar62 * auVar68._4_4_ * auVar67._4_4_;
          fVar71 = fVar71 * auVar68._8_4_ * auVar67._8_4_;
          fVar45 = fVar45 * auVar68._12_4_ * auVar67._12_4_;
          fVar35 = auVar75._0_4_ *
                   (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                                   CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                            ~(byte)((uint)iVar47 >> 0x10),
                                            CONCAT11((byte)((uint)fVar48 >> 8) &
                                                     ~(byte)((uint)iVar47 >> 8),
                                                     SUB41(fVar48,0) & ~(byte)iVar47)));
          fVar48 = auVar75._4_4_ *
                   (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                                   CONCAT12((byte)((uint)fVar62 >> 0x10) &
                                            ~(byte)((uint)iVar61 >> 0x10),
                                            CONCAT11((byte)((uint)fVar62 >> 8) &
                                                     ~(byte)((uint)iVar61 >> 8),
                                                     SUB41(fVar62,0) & ~(byte)iVar61)));
          uVar36 = (undefined1)((uint)fVar48 >> 8);
          uVar37 = (undefined1)((uint)fVar48 >> 0x10);
          uVar38 = (undefined1)((uint)fVar48 >> 0x18);
          fVar62 = auVar75._8_4_ *
                   (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                                   CONCAT12((byte)((uint)fVar71 >> 0x10) &
                                            ~(byte)((uint)iVar63 >> 0x10),
                                            CONCAT11((byte)((uint)fVar71 >> 8) &
                                                     ~(byte)((uint)iVar63 >> 8),
                                                     SUB41(fVar71,0) & ~(byte)iVar63)));
          uVar39 = (undefined1)((uint)fVar62 >> 8);
          uVar40 = (undefined1)((uint)fVar62 >> 0x10);
          uVar41 = (undefined1)((uint)fVar62 >> 0x18);
          fVar71 = auVar75._12_4_ *
                   (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                   CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                            ~(byte)((uint)iVar64 >> 0x10),
                                            CONCAT11((byte)((uint)fVar45 >> 8) &
                                                     ~(byte)((uint)iVar64 >> 8),
                                                     SUB41(fVar45,0) & ~(byte)iVar64)));
          uVar42 = (undefined1)((uint)fVar71 >> 8);
          uVar43 = (undefined1)((uint)fVar71 >> 0x10);
          uVar44 = (undefined1)((uint)fVar71 >> 0x18);
          auVar7[4] = SUB41(fVar48,0);
          auVar7._0_4_ = fVar35;
          auVar7[5] = uVar36;
          auVar7[6] = uVar37;
          auVar7[7] = uVar38;
          auVar7[8] = SUB41(fVar62,0);
          auVar7[9] = uVar39;
          auVar7[10] = uVar40;
          auVar7[0xb] = uVar41;
          auVar7[0xc] = SUB41(fVar71,0);
          auVar7[0xd] = uVar42;
          auVar7[0xe] = uVar43;
          auVar7[0xf] = uVar44;
          auVar8[4] = SUB41(fVar48,0);
          auVar8._0_4_ = fVar35;
          auVar8[5] = uVar36;
          auVar8[6] = uVar37;
          auVar8[7] = uVar38;
          auVar8[8] = SUB41(fVar62,0);
          auVar8[9] = uVar39;
          auVar8[10] = uVar40;
          auVar8[0xb] = uVar41;
          auVar8[0xc] = SUB41(fVar71,0);
          auVar8[0xd] = uVar42;
          auVar8[0xe] = uVar43;
          auVar8[0xf] = uVar44;
          auVar67 = NEON_ext(auVar7,auVar8,8,1);
          fVar35 = acosf(auVar67._0_4_ + fVar35 + auVar67._4_4_ + fVar48);
          auVar16 = *param_5;
          auVar15 = *param_5;
          auVar53 = *param_5;
          fStack_a8 = (float)*(undefined8 *)(*param_5 + 8);
          fStack_a4 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
          local_b0 = (float)*(undefined8 *)*param_5;
          fStack_ac = (float)((ulong)*(undefined8 *)*param_5 >> 0x20);
          fVar35 = cosf(fVar35 + param_2);
          if (fVar65 <= param_1) {
            local_f0 = (float)uVar27;
            fStack_ec = (float)((ulong)uVar27 >> 0x20);
            fStack_e8 = (float)uVar28;
            fStack_e4 = (float)((ulong)uVar28 >> 0x20);
            auVar69._0_8_ = CONCAT44(fStack_ac * fStack_ec,local_b0 * local_f0);
            auVar69._8_4_ = fStack_a8 * fStack_e8;
            auVar69._12_4_ = fStack_a4 * fStack_e4;
            local_150 = (float)uVar10;
            fStack_14c = (float)((ulong)uVar10 >> 0x20);
            uVar74 = a64_TBL(ZEXT816(0),auVar69,uVar17);
            uVar52 = a64_TBL(ZEXT816(0),auVar69,uVar20);
            uVar81 = a64_TBL(ZEXT816(0),auVar69,uVar24);
            uVar82 = a64_TBL(ZEXT816(0),auVar69,uVar23);
            fVar71 = (float)((ulong)uVar73 >> 0x20);
            uVar80 = a64_TBL(ZEXT816(0),auVar69,uVar19);
            auVar70._8_8_ = auVar69._0_8_;
            auVar70._0_8_ = auVar69._0_8_;
            fVar45 = (float)uVar29;
            fVar86 = (float)((ulong)uVar29 >> 0x20);
            fVar87 = (float)uVar30;
            fVar88 = (float)((ulong)uVar30 >> 0x20);
            uVar66 = a64_TBL(ZEXT816(0),auVar70,uVar18);
            fStack_138 = (float)uVar50;
            fStack_134 = (float)((ulong)uVar50 >> 0x20);
            auVar11._12_4_ = fStack_a4;
            auVar11._0_12_ = auVar53;
            uVar51 = a64_TBL(ZEXT816(0),auVar11,uVar17);
            fVar48 = (local_b0 * local_f0 * local_150 + fVar45 * (float)uVar74 * 0.0 +
                     fVar45 * fStack_138 * (float)uVar80) - (float)uVar73 * (float)uVar81;
            fVar62 = (fStack_ac * fStack_ec * fStack_14c +
                      fVar86 * (float)((ulong)uVar74 >> 0x20) * 0.0 +
                     fVar86 * fStack_134 * (float)((ulong)uVar80 >> 0x20)) -
                     fVar71 * (float)((ulong)uVar81 >> 0x20);
            auVar57._0_8_ = CONCAT44(fVar62,fVar48);
            auVar57._8_4_ =
                 (auVar69._8_4_ * local_150 + fVar87 * (float)uVar73 * (float)uVar52 +
                 fVar87 * (float)uVar66 * 0.0) - fStack_138 * (float)uVar82;
            auVar57._12_4_ =
                 (auVar69._12_4_ * fStack_14c + fVar88 * fVar71 * (float)((ulong)uVar52 >> 0x20) +
                 fVar88 * (float)((ulong)uVar66 >> 0x20) * 0.0) -
                 fStack_134 * (float)((ulong)uVar82 >> 0x20);
            auVar12._12_4_ = fStack_a4;
            auVar12._0_12_ = auVar15;
            uVar52 = a64_TBL(ZEXT816(0),auVar12,uVar19);
            uVar80 = a64_TBL(ZEXT816(0),auVar57,uVar17);
            uVar82 = a64_TBL(ZEXT816(0),auVar57,uVar20);
            uVar83 = a64_TBL(ZEXT816(0),auVar57,uVar19);
            auVar14._8_8_ = auVar57._0_8_;
            auVar14._0_8_ = auVar57._0_8_;
            uVar85 = a64_TBL(ZEXT816(0),auVar14,uVar18);
            fVar46 = (float)((ulong)uVar52 >> 0x20);
            auVar13._12_4_ = fStack_a4;
            auVar13._0_12_ = auVar16;
            uVar81 = a64_TBL(ZEXT816(0),auVar13,uVar24);
            fVar71 = (float)((ulong)uVar51 >> 0x20);
            uVar66 = a64_TBL(ZEXT816(0),auVar57,uVar24);
            uVar74 = a64_TBL(ZEXT816(0),auVar57,uVar23);
            local_110 = (byte)uVar25;
            bStack_10f = (byte)((ulong)uVar25 >> 8);
            bStack_10e = (byte)((ulong)uVar25 >> 0x10);
            bStack_10d = (byte)((ulong)uVar25 >> 0x18);
            bStack_10c = (byte)((ulong)uVar25 >> 0x20);
            bStack_10b = (byte)((ulong)uVar25 >> 0x28);
            bStack_10a = (byte)((ulong)uVar25 >> 0x30);
            bStack_109 = (byte)((ulong)uVar25 >> 0x38);
            bStack_108 = (byte)uVar26;
            bStack_107 = (byte)((ulong)uVar26 >> 8);
            bStack_106 = (byte)((ulong)uVar26 >> 0x10);
            bStack_105 = (byte)((ulong)uVar26 >> 0x18);
            bStack_104 = (byte)((ulong)uVar26 >> 0x20);
            bStack_103 = (byte)((ulong)uVar26 >> 0x28);
            bStack_102 = (byte)((ulong)uVar26 >> 0x30);
            bStack_101 = (byte)((ulong)uVar26 >> 0x38);
            fVar60 = (float)((ulong)uVar81 >> 0x20);
            fVar48 = ((float)uVar51 * fVar48 + fVar45 * local_b0 * (float)uVar80 +
                     fVar45 * (float)uVar81 * (float)uVar83) - (float)uVar52 * (float)uVar66;
            fVar62 = (fVar71 * fVar62 + fVar86 * fStack_ac * (float)((ulong)uVar80 >> 0x20) +
                     fVar86 * fVar60 * (float)((ulong)uVar83 >> 0x20)) -
                     fVar46 * (float)((ulong)uVar66 >> 0x20);
            fVar45 = ((float)uVar51 * auVar57._8_4_ + fVar87 * (float)uVar52 * (float)uVar82 +
                     fVar87 * local_b0 * (float)uVar85) - (float)uVar81 * (float)uVar74;
            fVar71 = (fVar71 * auVar57._12_4_ + fVar88 * fVar46 * (float)((ulong)uVar82 >> 0x20) +
                     fVar88 * fStack_ac * (float)((ulong)uVar85 >> 0x20)) -
                     fVar60 * (float)((ulong)uVar74 >> 0x20);
            fVar48 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & bStack_10d,
                                     CONCAT12((byte)((uint)fVar48 >> 0x10) & bStack_10e,
                                              CONCAT11((byte)((uint)fVar48 >> 8) & bStack_10f,
                                                       SUB41(fVar48,0) & local_110)));
            auVar53._0_8_ =
                 CONCAT17((byte)((uint)fVar62 >> 0x18) & bStack_109,
                          CONCAT16((byte)((uint)fVar62 >> 0x10) & bStack_10a,
                                   CONCAT15((byte)((uint)fVar62 >> 8) & bStack_10b,
                                            CONCAT14(SUB41(fVar62,0) & bStack_10c,fVar48))));
            auVar53[8] = SUB41(fVar45,0) & bStack_108;
            auVar53[9] = (byte)((uint)fVar45 >> 8) & bStack_107;
            auVar53[10] = (byte)((uint)fVar45 >> 0x10) & bStack_106;
            auVar53[0xb] = (byte)((uint)fVar45 >> 0x18) & bStack_105;
            auVar58[0xc] = SUB41(fVar71,0) & bStack_104;
            auVar58._0_12_ = auVar53;
            auVar58[0xd] = (byte)((uint)fVar71 >> 8) & bStack_103;
            auVar58[0xe] = (byte)((uint)fVar71 >> 0x10) & bStack_102;
            auVar58[0xf] = (byte)((uint)fVar71 >> 0x18) & bStack_101;
            auVar59._0_4_ = auVar75._0_4_ * fVar48;
            auVar59._4_4_ = auVar75._4_4_ * (float)((ulong)auVar53._0_8_ >> 0x20);
            auVar59._8_4_ = auVar75._8_4_ * auVar53._8_4_;
            auVar59._12_4_ = auVar75._12_4_ * auVar58._12_4_;
            auVar67 = NEON_ext(auVar59,auVar59,8,1);
            if (fVar35 <= auVar67._0_4_ + auVar59._0_4_ + auVar67._4_4_ + auVar59._4_4_) {
              uVar33 = *puVar34;
              if (fVar84 <= fVar65) {
                uVar33 = uVar32;
                fVar65 = fVar84;
              }
              fVar84 = fVar65;
            }
          }
        }
      }
      puVar34 = puVar34 + 4;
      uVar32 = uVar33;
    } while (puVar1 != puVar34);
  }
  return uVar33;
}


