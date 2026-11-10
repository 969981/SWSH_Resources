/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaf600; name: FUN_00aaf600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aaf600(long param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  byte bVar30;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  byte bVar31;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  byte bVar32;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  byte bVar33;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  byte bVar34;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  byte bVar35;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  byte bVar36;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  byte bVar37;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  byte bVar38;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  byte bVar39;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  byte bVar40;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  byte bVar41;
  undefined1 extraout_var_21;
  byte bVar42;
  undefined1 extraout_var_22;
  byte bVar43;
  undefined1 extraout_var_23;
  byte bVar44;
  undefined1 extraout_var_24;
  byte bVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar15 = _DAT_01d49df0;
  if (*(long *)(param_1 + 0x4b8) != 0) {
    local_28 = *(undefined8 *)(param_1 + 0xb8);
    local_30 = *(undefined8 *)(param_1 + 0xb0);
    uStack_58 = (undefined4)_UNK_01d49df8;
    uStack_54 = (undefined4)((ulong)_UNK_01d49df8 >> 0x20);
    uStack_38 = _UNK_01d49df8;
    local_40 = _DAT_01d49df0;
    uStack_48 = _UNK_01d4b588;
    local_50 = _DAT_01d4b580;
    FUN_00ac7640();
    fVar55 = *(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0;
    FUN_00a92cd0(SUB41(fVar55 * ((float)CONCAT13(extraout_var_11,
                                                 CONCAT12(extraout_var_09,
                                                          CONCAT11(extraout_var_07,extraout_var_05))
                                                ) + (float)((ulong)_DAT_01d4adc0 >> 0x20)),0),
                 SUB41(fVar55 * ((float)CONCAT13(extraout_var_03,
                                                 CONCAT12(extraout_var_01,
                                                          CONCAT11(extraout_var,extraout_b0))) +
                                (float)_DAT_01d4adc0),0),
                 fVar55 * ((float)CONCAT13(extraout_var_19,
                                           CONCAT12(extraout_var_17,
                                                    CONCAT11(extraout_var_15,extraout_var_13))) +
                          (float)_UNK_01d4adc8));
    auVar25._8_4_ = uStack_58;
    auVar25._0_8_ = uVar15;
    auVar24._8_4_ = uStack_58;
    auVar24._0_8_ = uVar15;
    auVar23._8_4_ = uStack_58;
    auVar23._0_8_ = uVar15;
    auVar23._12_4_ = uStack_54;
    uVar15 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
    fVar71 = (float)((ulong)uVar15 >> 0x20);
    auVar24._12_4_ = uStack_54;
    uVar81 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
    fVar75 = (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
             (float)_DAT_01d4ae80;
    fVar76 = (float)CONCAT13(extraout_var_12,
                             CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar77 = (float)CONCAT13(extraout_var_20,
                             CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14))) *
             (float)_UNK_01d4ae88;
    fVar78 = (float)CONCAT13(extraout_var_24,
                             CONCAT12(extraout_var_23,CONCAT11(extraout_var_22,extraout_var_21))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar25._12_4_ = uStack_54;
    uVar57 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5418);
    fVar86 = (float)((ulong)uVar57 >> 0x20);
    auVar18._4_4_ = fVar76;
    auVar18._0_4_ = fVar75;
    auVar18._8_4_ = fVar77;
    auVar18._12_4_ = fVar78;
    uVar84 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
    auVar19._4_4_ = fVar76;
    auVar19._0_4_ = fVar75;
    auVar19._8_4_ = fVar77;
    auVar19._12_4_ = fVar78;
    uVar85 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5120);
    auVar20._4_4_ = fVar76;
    auVar20._0_4_ = fVar75;
    auVar20._8_4_ = fVar77;
    auVar20._12_4_ = fVar78;
    uVar60 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
    auVar21._4_4_ = fVar76;
    auVar21._0_4_ = fVar75;
    auVar21._8_4_ = fVar77;
    auVar21._12_4_ = fVar78;
    uVar56 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
    auVar22._4_4_ = fVar76;
    auVar22._0_4_ = fVar75;
    auVar22._8_4_ = fVar77;
    auVar22._12_4_ = fVar78;
    uVar79 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5270);
    auVar14._4_4_ = fVar76;
    auVar14._0_4_ = fVar75;
    auVar14._8_4_ = fVar75;
    auVar14._12_4_ = fVar76;
    uVar16 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50b0);
    auVar58[1] = extraout_var_00;
    auVar58[0] = extraout_b0_00;
    auVar58[2] = extraout_var_02;
    auVar58[3] = extraout_var_04;
    auVar58[4] = extraout_var_06;
    auVar58[5] = extraout_var_08;
    auVar58[6] = extraout_var_10;
    auVar58[7] = extraout_var_12;
    auVar58[8] = extraout_var_14;
    auVar58[9] = extraout_var_16;
    auVar58[10] = extraout_var_18;
    auVar58[0xb] = extraout_var_20;
    auVar58[0xc] = extraout_var_21;
    auVar58[0xd] = extraout_var_22;
    auVar58[0xe] = extraout_var_23;
    auVar58[0xf] = extraout_var_24;
    uVar26 = a64_TBL(ZEXT816(0),auVar58,DAT_01cd50f8);
    fVar82 = (float)((ulong)uVar26 >> 0x20);
    auVar61[1] = extraout_var_00;
    auVar61[0] = extraout_b0_00;
    auVar61[2] = extraout_var_02;
    auVar61[3] = extraout_var_04;
    auVar61[4] = extraout_var_06;
    auVar61[5] = extraout_var_08;
    auVar61[6] = extraout_var_10;
    auVar61[7] = extraout_var_12;
    auVar61[8] = extraout_var_14;
    auVar61[9] = extraout_var_16;
    auVar61[10] = extraout_var_18;
    auVar61[0xb] = extraout_var_20;
    auVar61[0xc] = extraout_var_21;
    auVar61[0xd] = extraout_var_22;
    auVar61[0xe] = extraout_var_23;
    auVar61[0xf] = extraout_var_24;
    uVar80 = a64_TBL(ZEXT816(0),auVar61,DAT_01cd5418);
    fVar73 = (float)_UNK_01d4ae98;
    fVar74 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar29 = (float)_DAT_01d4ae90;
    fVar72 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar87 = (float)((ulong)uVar81 >> 0x20);
    fVar1 = (float)CONCAT13(extraout_var_04,
                            CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
    fVar83 = (float)((ulong)uVar80 >> 0x20);
    fVar55 = (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
    fVar75 = (fVar75 * (float)uVar15 + fVar29 * (float)uVar84 * 0.0 +
             fVar29 * (float)uVar57 * (float)uVar60) - (float)uVar81 * (float)uVar56;
    fVar70 = (fVar76 * fVar71 + fVar72 * (float)((ulong)uVar84 >> 0x20) * 0.0 +
             fVar72 * fVar86 * (float)((ulong)uVar60 >> 0x20)) -
             fVar87 * (float)((ulong)uVar56 >> 0x20);
    auVar66._0_8_ = CONCAT44(fVar70,fVar75);
    auVar66._8_4_ =
         (fVar77 * (float)uVar15 + fVar73 * (float)uVar81 * (float)uVar85 +
         fVar73 * (float)uVar16 * 0.0) - (float)uVar57 * (float)uVar79;
    auVar66._12_4_ =
         (fVar78 * fVar71 + fVar74 * fVar87 * (float)((ulong)uVar85 >> 0x20) +
         fVar74 * (float)((ulong)uVar16 >> 0x20) * 0.0) - fVar86 * (float)((ulong)uVar79 >> 0x20);
    fVar71 = (float)local_50;
    fVar86 = fVar71 * fVar71;
    fVar76 = (float)((ulong)local_50 >> 0x20);
    fVar87 = fVar76 * fVar76;
    fVar77 = (float)uStack_48;
    fVar78 = (float)((ulong)uStack_48 >> 0x20);
    auVar64[1] = extraout_var_00;
    auVar64[0] = extraout_b0_00;
    auVar64[2] = extraout_var_02;
    auVar64[3] = extraout_var_04;
    auVar64[4] = extraout_var_06;
    auVar64[5] = extraout_var_08;
    auVar64[6] = extraout_var_10;
    auVar64[7] = extraout_var_12;
    auVar64[8] = extraout_var_14;
    auVar64[9] = extraout_var_16;
    auVar64[10] = extraout_var_18;
    auVar64[0xb] = extraout_var_20;
    auVar64[0xc] = extraout_var_21;
    auVar64[0xd] = extraout_var_22;
    auVar64[0xe] = extraout_var_23;
    auVar64[0xf] = extraout_var_24;
    uVar81 = a64_TBL(ZEXT816(0),auVar64,DAT_01cd4f90);
    uVar15 = a64_TBL(ZEXT816(0),auVar66,DAT_01cd4f90);
    uVar56 = a64_TBL(ZEXT816(0),auVar66,DAT_01cd5120);
    uVar16 = a64_TBL(ZEXT816(0),auVar66,DAT_01cd50f8);
    uVar60 = a64_TBL(ZEXT816(0),auVar66,DAT_01cd5418);
    auVar17._8_4_ = fVar75;
    auVar17._0_8_ = auVar66._0_8_;
    auVar17._12_4_ = fVar70;
    uVar57 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50b0);
    fVar88 = (float)((ulong)uVar81 >> 0x20);
    uVar79 = a64_TBL(ZEXT816(0),auVar66,DAT_01cd5270);
    auVar27._4_4_ = fVar87;
    auVar27._0_4_ = fVar86;
    auVar27._8_4_ = fVar77 * fVar77;
    auVar27._12_4_ = fVar78 * fVar78;
    auVar28._4_4_ = fVar87;
    auVar28._0_4_ = fVar86;
    auVar28._8_4_ = fVar77 * fVar77;
    auVar28._12_4_ = fVar78 * fVar78;
    auVar58 = NEON_ext(auVar27,auVar28,8,1);
    fVar86 = auVar58._0_4_ + fVar86;
    fVar87 = auVar58._4_4_ + fVar87;
    fVar75 = ((float)uVar81 * fVar75 + fVar29 * fVar1 * (float)uVar15 +
             fVar29 * (float)uVar80 * (float)uVar16) - (float)uVar26 * (float)uVar60;
    fVar1 = (fVar88 * fVar70 +
             fVar72 * (float)(CONCAT17(extraout_var_12,
                                       CONCAT16(extraout_var_10,
                                                CONCAT15(extraout_var_08,
                                                         CONCAT14(extraout_var_06,fVar1)))) >> 0x20)
                      * (float)((ulong)uVar15 >> 0x20) +
            fVar72 * fVar83 * (float)((ulong)uVar16 >> 0x20)) -
            fVar82 * (float)((ulong)uVar60 >> 0x20);
    fVar70 = ((float)uVar81 * auVar66._8_4_ + fVar73 * (float)uVar26 * (float)uVar56 +
             fVar73 * fVar55 * (float)uVar57) - (float)uVar80 * (float)uVar79;
    fVar55 = (fVar88 * auVar66._12_4_ + fVar74 * fVar82 * (float)((ulong)uVar56 >> 0x20) +
             fVar74 * (float)(CONCAT17(extraout_var_12,
                                       CONCAT16(extraout_var_10,
                                                CONCAT15(extraout_var_08,
                                                         CONCAT14(extraout_var_06,fVar55)))) >> 0x20
                             ) * (float)((ulong)uVar57 >> 0x20)) -
             fVar83 * (float)((ulong)uVar79 >> 0x20);
    bVar30 = SUB41(fVar75,0) & (byte)DAT_01d4ab50;
    bVar31 = (byte)((uint)fVar75 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar32 = (byte)((uint)fVar75 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar33 = (byte)((uint)fVar75 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar34 = SUB41(fVar1,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar35 = (byte)((uint)fVar1 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar36 = (byte)((uint)fVar1 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar37 = (byte)((uint)fVar1 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar38 = SUB41(fVar70,0) & (byte)DAT_01d4ab58;
    bVar39 = (byte)((uint)fVar70 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar40 = (byte)((uint)fVar70 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar41 = (byte)((uint)fVar70 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar42 = SUB41(fVar55,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar43 = (byte)((uint)fVar55 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar44 = (byte)((uint)fVar55 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar45 = (byte)((uint)fVar55 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    fVar55 = (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30))) *
             (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
    fVar1 = (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34))) *
            (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34)));
    uVar46 = (undefined1)((uint)fVar1 >> 8);
    uVar47 = (undefined1)((uint)fVar1 >> 0x10);
    uVar48 = (undefined1)((uint)fVar1 >> 0x18);
    fVar75 = (float)CONCAT13(bVar41,CONCAT12(bVar40,CONCAT11(bVar39,bVar38))) *
             (float)CONCAT13(bVar41,CONCAT12(bVar40,CONCAT11(bVar39,bVar38)));
    uVar49 = (undefined1)((uint)fVar75 >> 8);
    uVar50 = (undefined1)((uint)fVar75 >> 0x10);
    uVar51 = (undefined1)((uint)fVar75 >> 0x18);
    fVar70 = (float)CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar42))) *
             (float)CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)));
    uVar52 = (undefined1)((uint)fVar70 >> 8);
    uVar53 = (undefined1)((uint)fVar70 >> 0x10);
    uVar54 = (undefined1)((uint)fVar70 >> 0x18);
    auVar68[4] = SUB41(fVar1,0);
    auVar68._0_4_ = fVar55;
    auVar68[5] = uVar46;
    auVar68[6] = uVar47;
    auVar68[7] = uVar48;
    auVar68[8] = SUB41(fVar75,0);
    auVar68[9] = uVar49;
    auVar68[10] = uVar50;
    auVar68[0xb] = uVar51;
    auVar68[0xc] = SUB41(fVar70,0);
    auVar68[0xd] = uVar52;
    auVar68[0xe] = uVar53;
    auVar68[0xf] = uVar54;
    auVar2[4] = SUB41(fVar1,0);
    auVar2._0_4_ = fVar55;
    auVar2[5] = uVar46;
    auVar2[6] = uVar47;
    auVar2[7] = uVar48;
    auVar2[8] = SUB41(fVar75,0);
    auVar2[9] = uVar49;
    auVar2[10] = uVar50;
    auVar2[0xb] = uVar51;
    auVar2[0xc] = SUB41(fVar70,0);
    auVar2[0xd] = uVar52;
    auVar2[0xe] = uVar53;
    auVar2[0xf] = uVar54;
    auVar58 = NEON_ext(auVar68,auVar2,8,1);
    fVar55 = auVar58._0_4_ + fVar55;
    fVar1 = auVar58._4_4_ + fVar1;
    fVar75 = fVar55 + fVar1;
    fVar55 = fVar55 + fVar1;
    uVar46 = SUB41(fVar55,0);
    uVar47 = (undefined1)((uint)fVar55 >> 8);
    uVar48 = (undefined1)((uint)fVar55 >> 0x10);
    uVar49 = (undefined1)((uint)fVar55 >> 0x18);
    fVar29 = fVar86 + fVar87;
    fVar86 = fVar86 + fVar87;
    auVar3[4] = uVar46;
    auVar3._0_4_ = fVar75;
    auVar3[5] = uVar47;
    auVar3[6] = uVar48;
    auVar3[7] = uVar49;
    auVar3[8] = SUB41(fVar75,0);
    auVar3[9] = (char)((uint)fVar75 >> 8);
    auVar3[10] = (char)((uint)fVar75 >> 0x10);
    auVar3[0xb] = (char)((uint)fVar75 >> 0x18);
    auVar3[0xc] = uVar46;
    auVar3[0xd] = uVar47;
    auVar3[0xe] = uVar48;
    auVar3[0xf] = uVar49;
    auVar61 = NEON_frsqrte(auVar3,4);
    auVar13._4_4_ = fVar86;
    auVar13._0_4_ = fVar29;
    auVar13._8_4_ = fVar29;
    auVar13._12_4_ = fVar86;
    auVar58 = NEON_frsqrte(auVar13,4);
    auVar67._0_4_ = auVar61._0_4_ * fVar75;
    auVar67._4_4_ = auVar61._4_4_ * fVar55;
    auVar67._8_4_ = auVar61._8_4_ * fVar75;
    uVar4 = (undefined2)(CONCAT15(uVar47,CONCAT14(uVar46,fVar75)) >> 0x20);
    auVar67._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar49,CONCAT12(uVar48,uVar4));
    auVar63._0_4_ = auVar58._0_4_ * fVar29;
    auVar63._4_4_ = auVar58._4_4_ * fVar86;
    auVar63._8_4_ = auVar58._8_4_ * fVar29;
    auVar63._12_4_ = auVar58._12_4_ * fVar86;
    auVar68 = NEON_frsqrts(auVar61,auVar67,4);
    auVar64 = NEON_frsqrts(auVar58,auVar63,4);
    auVar62._0_4_ = auVar61._0_4_ * auVar68._0_4_;
    auVar62._4_4_ = auVar61._4_4_ * auVar68._4_4_;
    auVar62._8_4_ = auVar61._8_4_ * auVar68._8_4_;
    auVar62._12_4_ = auVar61._12_4_ * auVar68._12_4_;
    auVar59._0_4_ = auVar58._0_4_ * auVar64._0_4_;
    auVar59._4_4_ = auVar58._4_4_ * auVar64._4_4_;
    auVar59._8_4_ = auVar58._8_4_ * auVar64._8_4_;
    auVar59._12_4_ = auVar58._12_4_ * auVar64._12_4_;
    auVar69._0_4_ = fVar75 * auVar62._0_4_;
    auVar69._4_4_ = fVar55 * auVar62._4_4_;
    auVar69._8_4_ = fVar75 * auVar62._8_4_;
    auVar69._12_4_ = (float)CONCAT13(uVar49,CONCAT12(uVar48,uVar4)) * auVar62._12_4_;
    auVar65._0_4_ = fVar29 * auVar59._0_4_;
    auVar65._4_4_ = fVar86 * auVar59._4_4_;
    auVar65._8_4_ = fVar29 * auVar59._8_4_;
    auVar65._12_4_ = fVar86 * auVar59._12_4_;
    auVar61 = NEON_frsqrts(auVar62,auVar69,4);
    auVar58 = NEON_frsqrts(auVar59,auVar65,4);
    iVar5 = -(uint)(fVar75 == 0.0);
    iVar7 = -(uint)(fVar55 == 0.0);
    iVar9 = -(uint)(fVar75 == 0.0);
    iVar11 = -(uint)((float)CONCAT13(uVar49,CONCAT12(uVar48,uVar4)) == 0.0);
    fVar55 = auVar62._0_4_ * auVar61._0_4_ *
             (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
    fVar1 = auVar62._4_4_ * auVar61._4_4_ *
            (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34)));
    fVar75 = auVar62._8_4_ * auVar61._8_4_ *
             (float)CONCAT13(bVar41,CONCAT12(bVar40,CONCAT11(bVar39,bVar38)));
    fVar70 = auVar62._12_4_ * auVar61._12_4_ *
             (float)CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)));
    iVar6 = -(uint)(fVar29 == 0.0);
    iVar8 = -(uint)(fVar86 == 0.0);
    iVar10 = -(uint)(fVar29 == 0.0);
    iVar12 = -(uint)(fVar86 == 0.0);
    uStack_38 = CONCAT17((byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                         CONCAT16((byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                  CONCAT15((byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                           CONCAT14(SUB41(fVar70,0) & ~(byte)iVar11,
                                                    CONCAT13((byte)((uint)fVar75 >> 0x18) &
                                                             ~(byte)((uint)iVar9 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar75 >> 0x10) &
                                                                      ~(byte)((uint)iVar9 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar75
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar9
                                                                                      >> 8),
                                                                               SUB41(fVar75,0) &
                                                                               ~(byte)iVar9)))))));
    local_40 = CONCAT17((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                        CONCAT16((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                 CONCAT15((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                          CONCAT14(SUB41(fVar1,0) & ~(byte)iVar7,
                                                   CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                                            ~(byte)((uint)iVar5 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                                     ~(byte)((uint)iVar5 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar55 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar5 >>
                                                                                     8),
                                                                              SUB41(fVar55,0) &
                                                                              ~(byte)iVar5)))))));
    fVar71 = fVar71 * auVar59._0_4_ * auVar58._0_4_;
    fVar76 = fVar76 * auVar59._4_4_ * auVar58._4_4_;
    fVar77 = fVar77 * auVar59._8_4_ * auVar58._8_4_;
    fVar78 = fVar78 * auVar59._12_4_ * auVar58._12_4_;
    uStack_48 = CONCAT17((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                         CONCAT16((byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                  CONCAT15((byte)((uint)fVar78 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                           CONCAT14(SUB41(fVar78,0) & ~(byte)iVar12,
                                                    CONCAT13((byte)((uint)fVar77 >> 0x18) &
                                                             ~(byte)((uint)iVar10 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar77 >> 0x10) &
                                                                      ~(byte)((uint)iVar10 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar77
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar10
                                                                                      >> 8),
                                                                               SUB41(fVar77,0) &
                                                                               ~(byte)iVar10)))))));
    local_50 = CONCAT17((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                        CONCAT16((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                 CONCAT15((byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                          CONCAT14(SUB41(fVar76,0) & ~(byte)iVar8,
                                                   CONCAT13((byte)((uint)fVar71 >> 0x18) &
                                                            ~(byte)((uint)iVar6 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar71 >> 0x10) &
                                                                     ~(byte)((uint)iVar6 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar71 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar6 >>
                                                                                     8),
                                                                              SUB41(fVar71,0) &
                                                                              ~(byte)iVar6)))))));
    FUN_00895e30(*(undefined8 *)(param_1 + 0x4b8),&local_30,&local_40,&local_50);
  }
  return;
}


