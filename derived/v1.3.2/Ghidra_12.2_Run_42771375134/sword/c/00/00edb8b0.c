/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00edb8b0; name: FUN_00edb8b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00edb8b0(long param_1)

{
  int iVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  undefined8 uVar35;
  byte bVar36;
  undefined1 extraout_b0;
  byte bVar37;
  undefined1 extraout_var;
  byte bVar38;
  undefined1 extraout_var_00;
  byte bVar39;
  undefined1 extraout_var_01;
  undefined1 uVar40;
  byte bVar41;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 uVar42;
  byte bVar43;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 uVar44;
  byte bVar45;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar46;
  byte bVar47;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar48;
  byte bVar49;
  undefined1 extraout_var_10;
  undefined1 uVar50;
  byte bVar51;
  undefined1 extraout_var_11;
  undefined1 uVar52;
  byte bVar53;
  undefined1 extraout_var_12;
  undefined1 uVar54;
  byte bVar55;
  undefined1 extraout_var_13;
  undefined1 uVar56;
  byte bVar57;
  undefined1 extraout_var_14;
  undefined1 uVar58;
  byte bVar59;
  undefined1 extraout_var_15;
  undefined1 uVar60;
  byte bVar61;
  undefined1 extraout_var_16;
  undefined1 uVar62;
  byte bVar63;
  undefined1 extraout_var_17;
  float fVar64;
  float fVar65;
  float fVar69;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_110 [48];
  uint local_e0;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  
  plVar32 = (long *)FUN_00e7e260();
  uVar31 = DAT_01cd5418;
  uVar30 = DAT_01cd5270;
  uVar81 = DAT_01cd5120;
  uVar29 = DAT_01cd50f8;
  uVar28 = DAT_01cd50b0;
  uVar80 = DAT_01cd4f90;
  lVar34 = *(long *)(param_1 + 0x88);
  uStack_88 = *(undefined8 *)(lVar34 + 0xa8);
  auVar3 = *(undefined1 (*) [16])(lVar34 + 0xa0);
  uVar13 = *(undefined8 *)(lVar34 + 0xb8);
  uVar35 = *(undefined8 *)(lVar34 + 0xb0);
  local_90 = *(undefined8 *)(lVar34 + 0xa0);
  uVar73 = (undefined4)_UNK_01d49dc8;
  uVar74 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
  fVar64 = auVar3._0_4_;
  fVar83 = fVar64 * (float)_DAT_01d4ae80;
  fVar69 = auVar3._4_4_;
  fVar65 = fVar69 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar40 = SUB41(fVar65,0);
  uVar42 = (undefined1)((uint)fVar65 >> 8);
  uVar44 = (undefined1)((uint)fVar65 >> 0x10);
  uVar46 = (undefined1)((uint)fVar65 >> 0x18);
  fVar22 = auVar3._8_4_ * (float)_UNK_01d4ae88;
  uVar48 = SUB41(fVar22,0);
  uVar50 = (undefined1)((uint)fVar22 >> 8);
  uVar52 = (undefined1)((uint)fVar22 >> 0x10);
  uVar54 = (undefined1)((uint)fVar22 >> 0x18);
  fVar72 = auVar3._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar56 = SUB41(fVar72,0);
  uVar58 = (undefined1)((uint)fVar72 >> 8);
  uVar60 = (undefined1)((uint)fVar72 >> 0x10);
  uVar62 = (undefined1)((uint)fVar72 >> 0x18);
  auVar23._8_4_ = uVar73;
  auVar23._0_8_ = _DAT_01d49dc0;
  auVar23._12_4_ = uVar74;
  uVar12 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
  auVar14[4] = uVar40;
  auVar14._0_4_ = fVar83;
  auVar14[5] = uVar42;
  auVar14[6] = uVar44;
  auVar14[7] = uVar46;
  auVar14[8] = uVar48;
  auVar14[9] = uVar50;
  auVar14[10] = uVar52;
  auVar14[0xb] = uVar54;
  auVar14[0xc] = uVar56;
  auVar14[0xd] = uVar58;
  auVar14[0xe] = uVar60;
  auVar14[0xf] = uVar62;
  uVar77 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
  auVar24._8_4_ = uVar73;
  auVar24._0_8_ = _DAT_01d49dc0;
  auVar24._12_4_ = uVar74;
  uVar75 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
  auVar25._8_4_ = uVar73;
  auVar25._0_8_ = _DAT_01d49dc0;
  auVar25._12_4_ = uVar74;
  uVar66 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5418);
  fVar70 = (float)((ulong)uVar66 >> 0x20);
  auVar15[4] = uVar40;
  auVar15._0_4_ = fVar83;
  auVar15[5] = uVar42;
  auVar15[6] = uVar44;
  auVar15[7] = uVar46;
  auVar15[8] = uVar48;
  auVar15[9] = uVar50;
  auVar15[10] = uVar52;
  auVar15[0xb] = uVar54;
  auVar15[0xc] = uVar56;
  auVar15[0xd] = uVar58;
  auVar15[0xe] = uVar60;
  auVar15[0xf] = uVar62;
  uVar84 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5120);
  auVar16[4] = uVar40;
  auVar16._0_4_ = fVar83;
  auVar16[5] = uVar42;
  auVar16[6] = uVar44;
  auVar16[7] = uVar46;
  auVar16[8] = uVar48;
  auVar16[9] = uVar50;
  auVar16[10] = uVar52;
  auVar16[0xb] = uVar54;
  auVar16[0xc] = uVar56;
  auVar16[0xd] = uVar58;
  auVar16[0xe] = uVar60;
  auVar16[0xf] = uVar62;
  uVar86 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
  auVar17[4] = uVar40;
  auVar17._0_4_ = fVar83;
  auVar17[5] = uVar42;
  auVar17[6] = uVar44;
  auVar17[7] = uVar46;
  auVar17[8] = uVar48;
  auVar17[9] = uVar50;
  auVar17[10] = uVar52;
  auVar17[0xb] = uVar54;
  auVar17[0xc] = uVar56;
  auVar17[0xd] = uVar58;
  auVar17[0xe] = uVar60;
  auVar17[0xf] = uVar62;
  uVar85 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5418);
  fVar82 = (float)((ulong)uVar12 >> 0x20);
  uVar76 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
  fVar71 = (float)((ulong)uVar76 >> 0x20);
  fVar79 = (float)((ulong)uVar75 >> 0x20);
  auVar18[4] = uVar40;
  auVar18._0_4_ = fVar83;
  auVar18[5] = uVar42;
  auVar18[6] = uVar44;
  auVar18[7] = uVar46;
  auVar18[8] = uVar48;
  auVar18[9] = uVar50;
  auVar18[10] = uVar52;
  auVar18[0xb] = uVar54;
  auVar18[0xc] = uVar56;
  auVar18[0xd] = uVar58;
  auVar18[0xe] = uVar60;
  auVar18[0xf] = uVar62;
  uVar78 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50f8);
  fVar87 = (float)_DAT_01d4ae90;
  fVar88 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar89 = (float)_UNK_01d4ae98;
  fVar90 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar19[4] = uVar40;
  auVar19._0_4_ = fVar83;
  auVar19[5] = uVar42;
  auVar19[6] = uVar44;
  auVar19[7] = uVar46;
  auVar19[8] = SUB41(fVar83,0);
  auVar19[9] = (char)((uint)fVar83 >> 8);
  auVar19[10] = (char)((uint)fVar83 >> 0x10);
  auVar19[0xb] = (char)((uint)fVar83 >> 0x18);
  auVar19[0xc] = uVar40;
  auVar19[0xd] = uVar42;
  auVar19[0xe] = uVar44;
  auVar19[0xf] = uVar46;
  uVar20 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50b0);
  uVar21 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
  fVar83 = (fVar83 * (float)uVar12 + fVar87 * (float)uVar77 * 0.0 +
           fVar87 * (float)uVar66 * (float)uVar78) - (float)uVar75 * (float)uVar85;
  fVar65 = (fVar65 * fVar82 + fVar88 * (float)((ulong)uVar77 >> 0x20) * 0.0 +
           fVar88 * fVar70 * (float)((ulong)uVar78 >> 0x20)) -
           fVar79 * (float)((ulong)uVar85 >> 0x20);
  uVar40 = SUB41(fVar65,0);
  uVar42 = (undefined1)((uint)fVar65 >> 8);
  uVar44 = (undefined1)((uint)fVar65 >> 0x10);
  uVar46 = (undefined1)((uint)fVar65 >> 0x18);
  fVar22 = (fVar22 * (float)uVar12 + fVar89 * (float)uVar75 * (float)uVar84 +
           fVar89 * (float)uVar20 * 0.0) - (float)uVar66 * (float)uVar86;
  uVar48 = SUB41(fVar22,0);
  uVar50 = (undefined1)((uint)fVar22 >> 8);
  uVar52 = (undefined1)((uint)fVar22 >> 0x10);
  uVar54 = (undefined1)((uint)fVar22 >> 0x18);
  fVar82 = (fVar72 * fVar82 + fVar90 * fVar79 * (float)((ulong)uVar84 >> 0x20) +
           fVar90 * (float)((ulong)uVar20 >> 0x20) * 0.0) - fVar70 * (float)((ulong)uVar86 >> 0x20);
  uVar56 = SUB41(fVar82,0);
  uVar58 = (undefined1)((uint)fVar82 >> 8);
  uVar60 = (undefined1)((uint)fVar82 >> 0x10);
  uVar62 = (undefined1)((uint)fVar82 >> 0x18);
  auVar67[4] = uVar40;
  auVar67._0_4_ = fVar83;
  auVar67[5] = uVar42;
  auVar67[6] = uVar44;
  auVar67[7] = uVar46;
  auVar67[8] = uVar48;
  auVar67[9] = uVar50;
  auVar67[10] = uVar52;
  auVar67[0xb] = uVar54;
  auVar67[0xc] = uVar56;
  auVar67[0xd] = uVar58;
  auVar67[0xe] = uVar60;
  auVar67[0xf] = uVar62;
  uVar77 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd4f90);
  auVar2[4] = uVar40;
  auVar2._0_4_ = fVar83;
  auVar2[5] = uVar42;
  auVar2[6] = uVar44;
  auVar2[7] = uVar46;
  auVar2[8] = uVar48;
  auVar2[9] = uVar50;
  auVar2[10] = uVar52;
  auVar2[0xb] = uVar54;
  auVar2[0xc] = uVar56;
  auVar2[0xd] = uVar58;
  auVar2[0xe] = uVar60;
  auVar2[0xf] = uVar62;
  uVar75 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5120);
  auVar26._4_4_ =
       (int)(CONCAT17(uVar46,CONCAT16(uVar44,CONCAT15(uVar42,CONCAT14(uVar40,fVar83)))) >> 0x20);
  auVar26._0_4_ = fVar83;
  auVar26._8_4_ = fVar83;
  auVar26._12_4_ =
       (int)(CONCAT17(uVar46,CONCAT16(uVar44,CONCAT15(uVar42,CONCAT14(uVar40,fVar83)))) >> 0x20);
  uVar20 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50b0);
  uVar78 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  fVar72 = (float)((ulong)uVar21 >> 0x20);
  auVar3[4] = uVar40;
  auVar3._0_4_ = fVar83;
  auVar3[5] = uVar42;
  auVar3[6] = uVar44;
  auVar3[7] = uVar46;
  auVar3[8] = uVar48;
  auVar3[9] = uVar50;
  auVar3[10] = uVar52;
  auVar3[0xb] = uVar54;
  auVar3[0xc] = uVar56;
  auVar3[0xd] = uVar58;
  auVar3[0xe] = uVar60;
  auVar3[0xf] = uVar62;
  uVar84 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  fVar70 = (float)((ulong)uVar78 >> 0x20);
  auVar4[4] = uVar40;
  auVar4._0_4_ = fVar83;
  auVar4[5] = uVar42;
  auVar4[6] = uVar44;
  auVar4[7] = uVar46;
  auVar4[8] = uVar48;
  auVar4[9] = uVar50;
  auVar4[10] = uVar52;
  auVar4[0xb] = uVar54;
  auVar4[0xc] = uVar56;
  auVar4[0xd] = uVar58;
  auVar4[0xe] = uVar60;
  auVar4[0xf] = uVar62;
  uVar66 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  auVar5[4] = uVar40;
  auVar5._0_4_ = fVar83;
  auVar5[5] = uVar42;
  auVar5[6] = uVar44;
  auVar5[7] = uVar46;
  auVar5[8] = uVar48;
  auVar5[9] = uVar50;
  auVar5[10] = uVar52;
  auVar5[0xb] = uVar54;
  auVar5[0xc] = uVar56;
  auVar5[0xd] = uVar58;
  auVar5[0xe] = uVar60;
  auVar5[0xf] = uVar62;
  uVar12 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5270);
  fVar83 = ((float)uVar21 * fVar83 + fVar87 * fVar64 * (float)uVar77 +
           fVar87 * (float)uVar78 * (float)uVar66) - (float)uVar76 * (float)uVar84;
  fVar65 = (fVar72 * fVar65 + fVar88 * fVar69 * (float)((ulong)uVar77 >> 0x20) +
           fVar88 * fVar70 * (float)((ulong)uVar66 >> 0x20)) -
           fVar71 * (float)((ulong)uVar84 >> 0x20);
  fVar22 = ((float)uVar21 * fVar22 + fVar89 * (float)uVar76 * (float)uVar75 +
           fVar89 * fVar64 * (float)uVar20) - (float)uVar78 * (float)uVar12;
  fVar82 = (fVar72 * fVar82 + fVar90 * fVar71 * (float)((ulong)uVar75 >> 0x20) +
           fVar90 * fVar69 * (float)((ulong)uVar20 >> 0x20)) -
           fVar70 * (float)((ulong)uVar12 >> 0x20);
  bVar36 = SUB41(fVar83,0) & (byte)DAT_01d4ab50;
  bVar37 = (byte)((uint)fVar83 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar38 = (byte)((uint)fVar83 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar39 = (byte)((uint)fVar83 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar41 = SUB41(fVar65,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar43 = (byte)((uint)fVar65 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar45 = (byte)((uint)fVar65 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar47 = (byte)((uint)fVar65 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
  bVar49 = SUB41(fVar22,0) & (byte)DAT_01d4ab58;
  bVar51 = (byte)((uint)fVar22 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar53 = (byte)((uint)fVar22 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar55 = (byte)((uint)fVar22 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar57 = SUB41(fVar82,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar59 = (byte)((uint)fVar82 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar61 = (byte)((uint)fVar82 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar63 = (byte)((uint)fVar82 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  if (*(int *)(lVar34 + 0x3e4) == 0) {
    auVar67 = NEON_fmov(0x41f00000,4);
    fVar82 = (float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41))) * auVar67._4_4_;
    fVar83 = (float)CONCAT13(bVar63,CONCAT12(bVar61,CONCAT11(bVar59,bVar57))) * auVar67._12_4_;
    uStack_138 = CONCAT17((char)((uint)fVar83 >> 0x18),
                          CONCAT16((char)((uint)fVar83 >> 0x10),
                                   CONCAT15((char)((uint)fVar83 >> 8),
                                            CONCAT14(SUB41(fVar83,0),
                                                     (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11
                                                  (bVar51,bVar49))) * auVar67._8_4_))));
    local_140 = CONCAT17((char)((uint)fVar82 >> 0x18),
                         CONCAT16((char)((uint)fVar82 >> 0x10),
                                  CONCAT15((char)((uint)fVar82 >> 8),
                                           CONCAT14(SUB41(fVar82,0),
                                                    (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(
                                                  bVar37,bVar36))) * auVar67._0_4_))));
    (**(code **)(*plVar32 + 0x1b0))(plVar32,PTR_DAT_0271fff8);
    fVar82 = *(float *)(*(long *)(param_1 + 0x88) + 0xb4);
    fVar83 = 30.0;
  }
  else {
    fVar82 = (float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41))) * 38.0;
    fVar83 = (float)CONCAT13(bVar63,CONCAT12(bVar61,CONCAT11(bVar59,bVar57))) * 38.0;
    uStack_138 = CONCAT17((char)((uint)fVar83 >> 0x18),
                          CONCAT16((char)((uint)fVar83 >> 0x10),
                                   CONCAT15((char)((uint)fVar83 >> 8),
                                            CONCAT14(SUB41(fVar83,0),
                                                     (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11
                                                  (bVar51,bVar49))) * 38.0))));
    local_140 = CONCAT17((char)((uint)fVar82 >> 0x18),
                         CONCAT16((char)((uint)fVar82 >> 0x10),
                                  CONCAT15((char)((uint)fVar82 >> 8),
                                           CONCAT14(SUB41(fVar82,0),
                                                    (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(
                                                  bVar37,bVar36))) * 38.0))));
    (**(code **)(*plVar32 + 0x1b0))(plVar32,PTR_DAT_0271ffe8);
    iVar1 = *(int *)(*(long *)(param_1 + 0x88) + 1000);
    fVar82 = *(float *)(*(long *)(param_1 + 0x88) + 0xb4) - (float)iVar1 * 30.0;
    fVar83 = (float)(iVar1 + -4) * 30.0;
  }
  local_140._4_4_ = (float)((ulong)uVar35 >> 0x20) + local_140._4_4_;
  uStack_138._4_4_ = (float)((ulong)uVar13 >> 0x20) + uStack_138._4_4_;
  FUN_00a92cd0((char)DAT_01d4bb38,ZEXT816(0),0);
  auVar27._8_8_ = uStack_88;
  auVar27._0_8_ = local_90;
  uVar20 = a64_TBL(ZEXT816(0),auVar27,uVar80);
  uVar21 = a64_TBL(ZEXT816(0),auVar27,uVar29);
  fVar72 = (float)((ulong)uVar21 >> 0x20);
  auVar6[1] = extraout_var;
  auVar6[0] = extraout_b0;
  auVar6[2] = extraout_var_00;
  auVar6[3] = extraout_var_01;
  auVar6[4] = extraout_var_02;
  auVar6[5] = extraout_var_04;
  auVar6[6] = extraout_var_06;
  auVar6[7] = extraout_var_08;
  auVar6[8] = extraout_var_10;
  auVar6[9] = extraout_var_11;
  auVar6[10] = extraout_var_12;
  auVar6[0xb] = extraout_var_13;
  auVar6[0xc] = extraout_var_14;
  auVar6[0xd] = extraout_var_15;
  auVar6[0xe] = extraout_var_16;
  auVar6[0xf] = extraout_var_17;
  uVar77 = a64_TBL(ZEXT816(0),auVar6,uVar80);
  auVar7[1] = extraout_var;
  auVar7[0] = extraout_b0;
  auVar7[2] = extraout_var_00;
  auVar7[3] = extraout_var_01;
  auVar7[4] = extraout_var_02;
  auVar7[5] = extraout_var_04;
  auVar7[6] = extraout_var_06;
  auVar7[7] = extraout_var_08;
  auVar7[8] = extraout_var_10;
  auVar7[9] = extraout_var_11;
  auVar7[10] = extraout_var_12;
  auVar7[0xb] = extraout_var_13;
  auVar7[0xc] = extraout_var_14;
  auVar7[0xd] = extraout_var_15;
  auVar7[0xe] = extraout_var_16;
  auVar7[0xf] = extraout_var_17;
  uVar80 = a64_TBL(ZEXT816(0),auVar7,uVar81);
  auVar8[1] = extraout_var;
  auVar8[0] = extraout_b0;
  auVar8[2] = extraout_var_00;
  auVar8[3] = extraout_var_01;
  auVar8[4] = extraout_var_02;
  auVar8[5] = extraout_var_04;
  auVar8[6] = extraout_var_06;
  auVar8[7] = extraout_var_08;
  auVar8[8] = extraout_var_10;
  auVar8[9] = extraout_var_11;
  auVar8[10] = extraout_var_12;
  auVar8[0xb] = extraout_var_13;
  auVar8[0xc] = extraout_var_14;
  auVar8[0xd] = extraout_var_15;
  auVar8[0xe] = extraout_var_16;
  auVar8[0xf] = extraout_var_17;
  uVar81 = a64_TBL(ZEXT816(0),auVar8,uVar30);
  fVar65 = (float)((ulong)uVar20 >> 0x20);
  fVar69 = (float)((ulong)local_90 >> 0x20);
  uVar78 = a64_TBL(ZEXT816(0),auVar27,uVar31);
  fVar64 = (float)((ulong)uVar78 >> 0x20);
  auVar9[1] = extraout_var;
  auVar9[0] = extraout_b0;
  auVar9[2] = extraout_var_00;
  auVar9[3] = extraout_var_01;
  auVar9[4] = extraout_var_02;
  auVar9[5] = extraout_var_04;
  auVar9[6] = extraout_var_06;
  auVar9[7] = extraout_var_08;
  auVar9[8] = extraout_var_10;
  auVar9[9] = extraout_var_11;
  auVar9[10] = extraout_var_12;
  auVar9[0xb] = extraout_var_13;
  auVar9[0xc] = extraout_var_14;
  auVar9[0xd] = extraout_var_15;
  auVar9[0xe] = extraout_var_16;
  auVar9[0xf] = extraout_var_17;
  uVar66 = a64_TBL(ZEXT816(0),auVar9,uVar29);
  auVar10[1] = extraout_var;
  auVar10[0] = extraout_b0;
  auVar10[2] = extraout_var_00;
  auVar10[3] = extraout_var_01;
  auVar10[4] = extraout_var_02;
  auVar10[5] = extraout_var_04;
  auVar10[6] = extraout_var_06;
  auVar10[7] = extraout_var_08;
  auVar10[8] = extraout_var_10;
  auVar10[9] = extraout_var_11;
  auVar10[10] = extraout_var_12;
  auVar10[0xb] = extraout_var_13;
  auVar10[0xc] = extraout_var_14;
  auVar10[0xd] = extraout_var_15;
  auVar10[0xe] = extraout_var_16;
  auVar10[0xf] = extraout_var_17;
  uVar76 = a64_TBL(ZEXT816(0),auVar10,uVar31);
  auVar11[1] = extraout_var;
  auVar11[0] = extraout_b0;
  auVar11[2] = extraout_var_00;
  auVar11[3] = extraout_var_01;
  auVar11[4] = extraout_var_02;
  auVar11[5] = extraout_var_04;
  auVar11[6] = extraout_var_06;
  auVar11[7] = extraout_var_08;
  auVar11[8] = extraout_b0;
  auVar11[9] = extraout_var;
  auVar11[10] = extraout_var_00;
  auVar11[0xb] = extraout_var_01;
  auVar11[0xc] = extraout_var_02;
  auVar11[0xd] = extraout_var_04;
  auVar11[0xe] = extraout_var_06;
  auVar11[0xf] = extraout_var_08;
  uVar12 = a64_TBL(ZEXT816(0),auVar11,uVar28);
  fVar22 = ((float)CONCAT13(extraout_var_08,
                            CONCAT12(extraout_var_06,CONCAT11(extraout_var_04,extraout_var_02))) *
            fVar65 + fVar88 * fVar69 * (float)((ulong)uVar77 >> 0x20) +
           fVar88 * fVar64 * (float)((ulong)uVar66 >> 0x20)) -
           fVar72 * (float)((ulong)uVar76 >> 0x20);
  fVar65 = ((float)CONCAT13(extraout_var_17,
                            CONCAT12(extraout_var_16,CONCAT11(extraout_var_15,extraout_var_14))) *
            fVar65 + fVar90 * fVar72 * (float)((ulong)uVar80 >> 0x20) +
           fVar90 * fVar69 * (float)((ulong)uVar12 >> 0x20)) -
           fVar64 * (float)((ulong)uVar81 >> 0x20);
  uStack_88 = CONCAT17((char)((uint)fVar65 >> 0x18),
                       CONCAT16((char)((uint)fVar65 >> 0x10),
                                CONCAT15((char)((uint)fVar65 >> 8),
                                         CONCAT14(SUB41(fVar65,0),
                                                  ((float)CONCAT13(extraout_var_13,
                                                                   CONCAT12(extraout_var_12,
                                                                            CONCAT11(extraout_var_11
                                                                                     ,
                                                  extraout_var_10))) * (float)uVar20 +
                                                  fVar89 * (float)uVar21 * (float)uVar80 +
                                                  fVar89 * (float)local_90 * (float)uVar12) -
                                                  (float)uVar78 * (float)uVar81))));
  local_90 = CONCAT17((char)((uint)fVar22 >> 0x18),
                      CONCAT16((char)((uint)fVar22 >> 0x10),
                               CONCAT15((char)((uint)fVar22 >> 8),
                                        CONCAT14(SUB41(fVar22,0),
                                                 ((float)CONCAT13(extraout_var_01,
                                                                  CONCAT12(extraout_var_00,
                                                                           CONCAT11(extraout_var,
                                                                                    extraout_b0))) *
                                                  (float)uVar20 +
                                                  fVar87 * (float)local_90 * (float)uVar77 +
                                                 fVar87 * (float)uVar78 * (float)uVar66) -
                                                 (float)uVar21 * (float)uVar76))));
  FUN_00ac7ad0(&local_90);
  if (plVar32[0x3b] == 0) {
    plVar33 = (long *)0x0;
  }
  else {
    plVar33 = (long *)FUN_00e86f20(&local_d0);
    if (plVar33 != (long *)0x0) {
      (**(code **)(plVar33[9] + 0x10))();
    }
    plVar33[0xe] = (long)plVar32;
    (**(code **)(*plVar33 + 0x38))(plVar33);
    lVar34 = plVar32[0x3d];
    local_d0 = plVar33;
    if (plVar33 != (long *)0x0) {
      (**(code **)(plVar33[9] + 0x10))();
    }
    FUN_01591030(plVar32 + 0x3d,lVar34,&local_d0);
    if (local_d0 != (long *)0x0) {
      (**(code **)(local_d0[9] + 0x18))();
      local_d0 = (long *)0x0;
    }
    (**(code **)(plVar33[9] + 0x18))();
  }
  *(undefined2 *)(plVar33 + 0x13) = 1;
  *(undefined4 *)((long)plVar33 + 0x94) = 0x40200000;
  *(undefined4 *)((long)plVar33 + 0x9c) = 0x41000000;
  plVar33[0x14] = -0x340d631b7bddd9bb;
  plVar33[0x15] = (long)&DAT_01d38550;
  lVar34 = plVar33[0x17];
  plVar33[0x16] = 0;
  plVar33[0x17] = 0;
  *(uint *)(plVar33 + 0x12) =
       CONCAT13(extraout_var_09,CONCAT12(extraout_var_07,CONCAT11(extraout_var_05,extraout_var_03)))
  ;
  *(undefined1 *)((long)plVar33 + 0x9a) = 0;
  plVar33[0x11] =
       CONCAT17((char)((uint)uStack_138._4_4_ >> 0x18),
                CONCAT16((char)((uint)uStack_138._4_4_ >> 0x10),
                         CONCAT15((char)((uint)uStack_138._4_4_ >> 8),
                                  CONCAT14(SUB41(uStack_138._4_4_,0),
                                           (float)uVar13 + (float)uStack_138))));
  plVar33[0x10] =
       CONCAT17((char)((uint)local_140._4_4_ >> 0x18),
                CONCAT16((char)((uint)local_140._4_4_ >> 0x10),
                         CONCAT15((char)((uint)local_140._4_4_ >> 8),
                                  CONCAT14(SUB41(local_140._4_4_,0),(float)uVar35 + (float)local_140
                                          ))));
  if (lVar34 != 0) {
    (**(code **)(*(long *)(lVar34 + 0x48) + 0x18))();
  }
  uVar35 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar35;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar82 + fVar83,(int)*(undefined8 *)(param_1 + 0xa0));
  uVar35 = *(undefined8 *)PTR_DAT_027194e8;
  FUN_00dfd500(uVar35);
  if (*(int *)(*(long *)(param_1 + 0x88) + 1000) < 6) {
    FUN_00dfb4a0(local_110,uVar35);
    local_a0 = (ulong)local_e0;
    local_98 = 3;
    local_94 = 0x3d888889;
    fVar65 = (local_110._16_4_ - *(float *)(plVar32 + 0x16)) +
             (float)*(undefined8 *)(param_1 + 0xa0);
    fVar82 = (local_110._20_4_ - *(float *)((long)plVar32 + 0xb4)) +
             (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
    auVar68._0_8_ = CONCAT44(fVar82,fVar65);
    auVar68._8_4_ =
         (local_110._24_4_ - *(float *)(plVar32 + 0x17)) + (float)*(undefined8 *)(param_1 + 0xa8);
    auVar68._12_4_ =
         (local_110._28_4_ - *(float *)((long)plVar32 + 0xbc)) +
         (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
    fVar82 = (local_110._4_4_ - local_110._20_4_) + fVar82;
    fVar83 = (local_110._12_4_ - local_110._28_4_) + auVar68._12_4_;
    uStack_c8 = CONCAT17((char)((uint)fVar83 >> 0x18),
                         CONCAT16((char)((uint)fVar83 >> 0x10),
                                  CONCAT15((char)((uint)fVar83 >> 8),
                                           CONCAT14(SUB41(fVar83,0),
                                                    (local_110._8_4_ - local_110._24_4_) +
                                                    auVar68._8_4_))));
    local_d0 = (long *)CONCAT17((char)((uint)fVar82 >> 0x18),
                                CONCAT16((char)((uint)fVar82 >> 0x10),
                                         CONCAT15((char)((uint)fVar82 >> 8),
                                                  CONCAT14(SUB41(fVar82,0),
                                                           (local_110._0_4_ - local_110._16_4_) +
                                                           fVar65))));
    local_b8 = auVar68._8_8_;
    local_c0 = auVar68._0_8_;
    FUN_00dfdde0(uVar35,&local_d0);
  }
  return;
}


