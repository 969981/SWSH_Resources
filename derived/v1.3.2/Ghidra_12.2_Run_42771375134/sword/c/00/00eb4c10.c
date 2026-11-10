/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb4c10; name: FUN_00eb4c10
 */


undefined8 FUN_00eb4c10(long *param_1,undefined1 (*param_2) [12])

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long lVar27;
  byte bVar28;
  int iVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  undefined8 uVar30;
  int iVar35;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  int iVar40;
  byte bVar43;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  int iVar45;
  byte bVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  float fVar65;
  undefined1 auVar62 [16];
  float fVar67;
  float fVar69;
  undefined1 auVar63 [16];
  float fVar66;
  float fVar68;
  float fVar70;
  undefined1 auVar64 [16];
  float fVar71;
  undefined1 auVar72 [12];
  float fVar76;
  float fVar77;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined4 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined1 auVar86 [16];
  float fVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  float fVar94;
  float fVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined8 uVar101;
  undefined1 auVar102 [16];
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar15 = (**(code **)(*param_1 + 0x70))();
  if (((uVar15 & 1) == 0) || (0 < (int)param_1[0x175])) {
LAB_00eb4c4c:
    uVar16 = 0;
  }
  else {
    if (1 < *(uint *)(param_1 + 0xed)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    auVar73 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar102 = *(undefined1 (*) [16])(param_2[2] + 8);
    uVar16 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5418);
    uVar8 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5188);
    uVar88 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd5158);
    uVar84 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd50f8);
    uVar93 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd50f8);
    uVar9 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5158);
    uVar89 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd5418);
    uVar30 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd5188);
    fVar81 = (float)*(undefined8 *)(*param_2 + 8);
    fVar82 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    fVar79 = (float)*(undefined8 *)*param_2;
    fVar80 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    fVar79 = fVar79 * (float)uVar16 * (float)uVar84 - fVar79 * (float)uVar93 * (float)uVar89;
    fVar80 = fVar80 * (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar84 >> 0x20) -
             fVar80 * (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
    fVar81 = fVar81 * (float)uVar8 * (float)uVar88 - fVar81 * (float)uVar9 * (float)uVar30;
    fVar82 = fVar82 * (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar88 >> 0x20) -
             fVar82 * (float)((ulong)uVar9 >> 0x20) * (float)((ulong)uVar30 >> 0x20);
    fVar87 = (float)param_1[0xe8];
    fVar92 = fVar87 + (float)param_1[0xde];
    fVar90 = (float)((ulong)param_1[0xe8] >> 0x20);
    fVar94 = fVar90 + (float)((ulong)param_1[0xde] >> 0x20);
    fVar91 = (float)param_1[0xe9];
    fVar95 = fVar91 + (float)param_1[0xdf];
    fVar98 = fVar87 + (float)param_1[0xe0];
    fVar99 = fVar90 + (float)((ulong)param_1[0xe0] >> 0x20);
    fVar100 = fVar91 + (float)param_1[0xe1];
    fVar87 = fVar87 + *(float *)(param_1 + 0xe2);
    fVar90 = fVar90 + *(float *)((long)param_1 + 0x714);
    fVar91 = fVar91 + *(float *)(param_1 + 0xe3);
    auVar2._4_4_ = fVar80;
    auVar2._0_4_ = fVar79;
    auVar2._8_4_ = fVar81;
    auVar2._12_4_ = fVar82;
    auVar3._4_4_ = fVar80;
    auVar3._0_4_ = fVar79;
    auVar3._8_4_ = fVar81;
    auVar3._12_4_ = fVar82;
    auVar86 = NEON_ext(auVar2,auVar3,8,1);
    uVar83 = SUB124(*param_2,0);
    uVar20 = SUB124(*param_2,4);
    uVar22 = auVar102._0_4_;
    uVar23 = auVar102._4_4_;
    uVar19 = auVar73._0_4_;
    uVar21 = auVar73._4_4_;
    local_80 = (ulong)*(uint *)((long)param_1 + 0x7c4) << 0x20;
    auVar62._4_4_ = auVar73._8_4_;
    auVar62._0_4_ = SUB124(*param_2,8);
    auVar62._8_4_ = auVar102._8_4_;
    auVar62._12_4_ = 0;
    local_90 = (ulong)*(uint *)(param_1 + 0xf8) << 0x20;
    auVar10._4_4_ = uVar19;
    auVar10._0_4_ = uVar83;
    auVar10._8_4_ = uVar22;
    auVar10._12_4_ = 0;
    uVar101 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5188);
    uVar8 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd50f8);
    fVar50 = (float)((ulong)uVar8 >> 0x20);
    uVar89 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd5158);
    auVar4._4_4_ = uVar21;
    auVar4._0_4_ = uVar20;
    auVar4._8_4_ = uVar23;
    auVar4._12_4_ = 0;
    uVar96 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
    fVar52 = (float)((ulong)uVar89 >> 0x20);
    fVar79 = fVar79 + fVar80 + auVar86._0_4_ + auVar86._4_4_;
    auVar5._4_4_ = uVar21;
    auVar5._0_4_ = uVar20;
    auVar5._8_4_ = uVar23;
    auVar5._12_4_ = 0;
    uVar93 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5158);
    auVar11._4_4_ = uVar19;
    auVar11._0_4_ = uVar83;
    auVar11._8_4_ = uVar22;
    auVar11._12_4_ = 0;
    uVar88 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50f8);
    auVar12._4_4_ = uVar19;
    auVar12._0_4_ = uVar83;
    auVar12._8_4_ = uVar22;
    auVar12._12_4_ = 0;
    uVar16 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5158);
    uVar54 = SUB41(fVar79,0);
    uVar55 = (undefined1)((uint)fVar79 >> 8);
    uVar56 = (undefined1)((uint)fVar79 >> 0x10);
    uVar57 = (undefined1)((uint)fVar79 >> 0x18);
    auVar13._4_4_ = uVar19;
    auVar13._0_4_ = uVar83;
    auVar13._8_4_ = uVar22;
    auVar13._12_4_ = 0;
    uVar85 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5418);
    auVar73[4] = uVar54;
    auVar73._0_4_ = fVar79;
    auVar73[5] = uVar55;
    auVar73[6] = uVar56;
    auVar73[7] = uVar57;
    auVar73[8] = uVar54;
    auVar73[9] = uVar55;
    auVar73[10] = uVar56;
    auVar73[0xb] = uVar57;
    auVar73[0xc] = uVar54;
    auVar73[0xd] = uVar55;
    auVar73[0xe] = uVar56;
    auVar73[0xf] = uVar57;
    auVar73 = NEON_frecpe(auVar73,4);
    uVar83 = *(undefined4 *)((long)param_1 + (long)(int)*(uint *)(param_1 + 0xed) * 0x10 + 0x76c);
    auVar102[4] = uVar54;
    auVar102._0_4_ = fVar79;
    auVar102[5] = uVar55;
    auVar102[6] = uVar56;
    auVar102[7] = uVar57;
    auVar102[8] = uVar54;
    auVar102[9] = uVar55;
    auVar102[10] = uVar56;
    auVar102[0xb] = uVar57;
    auVar102[0xc] = uVar54;
    auVar102[0xd] = uVar55;
    auVar102[0xe] = uVar56;
    auVar102[0xf] = uVar57;
    auVar102 = NEON_frecps(auVar73,auVar102,4);
    uStack_78 = 0;
    auVar6._4_4_ = uVar21;
    auVar6._0_4_ = uVar20;
    auVar6._8_4_ = uVar23;
    auVar6._12_4_ = 0;
    uVar97 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
    auVar7._4_4_ = uVar21;
    auVar7._0_4_ = uVar20;
    auVar7._8_4_ = uVar23;
    auVar7._12_4_ = 0;
    uVar9 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5188);
    fVar59 = (float)((ulong)uVar9 >> 0x20);
    uVar30 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd5418);
    uVar84 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd5188);
    uStack_88 = 0;
    auVar74._0_4_ = auVar73._0_4_ * auVar102._0_4_;
    auVar74._4_4_ = auVar73._4_4_ * auVar102._4_4_;
    auVar74._8_4_ = auVar73._8_4_ * auVar102._8_4_;
    auVar74._12_4_ = auVar73._12_4_ * auVar102._12_4_;
    fVar77 = (float)((ulong)uVar97 >> 0x20);
    fVar24 = (float)((ulong)uVar30 >> 0x20);
    fVar70 = (float)((ulong)uVar96 >> 0x20);
    fVar25 = (float)((ulong)uVar84 >> 0x20);
    fVar76 = (float)((ulong)uVar93 >> 0x20);
    auVar86[4] = uVar54;
    auVar86._0_4_ = fVar79;
    auVar86[5] = uVar55;
    auVar86[6] = uVar56;
    auVar86[7] = uVar57;
    auVar86[8] = uVar54;
    auVar86[9] = uVar55;
    auVar86[10] = uVar56;
    auVar86[0xb] = uVar57;
    auVar86[0xc] = uVar54;
    auVar86[0xd] = uVar55;
    auVar86[0xe] = uVar56;
    auVar86[0xf] = uVar57;
    auVar73 = NEON_frecps(auVar74,auVar86,4);
    fVar26 = (float)((ulong)uVar88 >> 0x20);
    fVar53 = (float)((ulong)uVar16 >> 0x20);
    fVar66 = (float)((ulong)uVar85 >> 0x20);
    fVar68 = (float)((ulong)uVar101 >> 0x20);
    fVar58 = auVar74._0_4_ * auVar73._0_4_;
    fVar65 = auVar74._4_4_ * auVar73._4_4_;
    fVar67 = auVar74._8_4_ * auVar73._8_4_;
    fVar69 = auVar74._12_4_ * auVar73._12_4_;
    iVar29 = -(uint)(fVar79 == 0.0);
    iVar35 = -(uint)(fVar79 == 0.0);
    iVar40 = -(uint)(fVar79 == 0.0);
    iVar45 = -(uint)(fVar79 == 0.0);
    bVar28 = ~(byte)iVar29;
    bVar31 = ~(byte)((uint)iVar29 >> 8);
    bVar32 = ~(byte)((uint)iVar29 >> 0x10);
    bVar33 = ~(byte)((uint)iVar29 >> 0x18);
    bVar34 = ~(byte)iVar35;
    bVar36 = ~(byte)((uint)iVar35 >> 8);
    bVar37 = ~(byte)((uint)iVar35 >> 0x10);
    bVar38 = ~(byte)((uint)iVar35 >> 0x18);
    bVar39 = ~(byte)iVar40;
    bVar41 = ~(byte)((uint)iVar40 >> 8);
    bVar42 = ~(byte)((uint)iVar40 >> 0x10);
    bVar43 = ~(byte)((uint)iVar40 >> 0x18);
    bVar44 = ~(byte)iVar45;
    bVar46 = ~(byte)((uint)iVar45 >> 8);
    bVar47 = ~(byte)((uint)iVar45 >> 0x10);
    bVar48 = ~(byte)((uint)iVar45 >> 0x18);
    fVar79 = fVar58 * ((float)uVar97 * (float)uVar8 - (float)uVar30 * (float)uVar96);
    fVar80 = fVar65 * (fVar77 * fVar50 - fVar24 * fVar70);
    fVar81 = fVar67 * ((float)uVar9 * (float)uVar89 - (float)uVar84 * (float)uVar93);
    fVar82 = fVar69 * (fVar59 * fVar52 - fVar25 * fVar76);
    fVar49 = fVar58 * ((float)uVar30 * (float)uVar88 - (float)uVar85 * (float)uVar8);
    fVar50 = fVar65 * (fVar24 * fVar26 - fVar66 * fVar50);
    fVar51 = fVar67 * ((float)uVar84 * (float)uVar16 - (float)uVar101 * (float)uVar89);
    fVar52 = fVar69 * (fVar25 * fVar53 - fVar68 * fVar52);
    fVar71 = (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & bVar33,
                             CONCAT12((byte)((uint)fVar49 >> 0x10) & bVar32,
                                      CONCAT11((byte)((uint)fVar49 >> 8) & bVar31,
                                               SUB41(fVar49,0) & bVar28)));
    auVar72._0_8_ =
         CONCAT17((byte)((uint)fVar50 >> 0x18) & bVar38,
                  CONCAT16((byte)((uint)fVar50 >> 0x10) & bVar37,
                           CONCAT15((byte)((uint)fVar50 >> 8) & bVar36,
                                    CONCAT14(SUB41(fVar50,0) & bVar34,fVar71))));
    auVar72[8] = SUB41(fVar51,0) & bVar39;
    auVar72[9] = (byte)((uint)fVar51 >> 8) & bVar41;
    auVar72[10] = (byte)((uint)fVar51 >> 0x10) & bVar42;
    auVar72[0xb] = (byte)((uint)fVar51 >> 0x18) & bVar43;
    auVar75[0xc] = SUB41(fVar52,0) & bVar44;
    auVar75._0_12_ = auVar72;
    auVar75[0xd] = (byte)((uint)fVar52 >> 8) & bVar46;
    auVar75[0xe] = (byte)((uint)fVar52 >> 0x10) & bVar47;
    auVar75[0xf] = (byte)((uint)fVar52 >> 0x18) & bVar48;
    fVar58 = fVar58 * ((float)uVar96 * (float)uVar85 - (float)uVar97 * (float)uVar88);
    fVar65 = fVar65 * (fVar70 * fVar66 - fVar77 * fVar26);
    fVar67 = fVar67 * ((float)uVar93 * (float)uVar101 - (float)uVar9 * (float)uVar16);
    fVar69 = fVar69 * (fVar76 * fVar68 - fVar59 * fVar53);
    fVar53 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & bVar33,
                             CONCAT12((byte)((uint)fVar79 >> 0x10) & bVar32,
                                      CONCAT11((byte)((uint)fVar79 >> 8) & bVar31,
                                               SUB41(fVar79,0) & bVar28)));
    auVar60._0_8_ =
         CONCAT17((byte)((uint)fVar80 >> 0x18) & bVar38,
                  CONCAT16((byte)((uint)fVar80 >> 0x10) & bVar37,
                           CONCAT15((byte)((uint)fVar80 >> 8) & bVar36,
                                    CONCAT14(SUB41(fVar80,0) & bVar34,fVar53))));
    auVar60[8] = SUB41(fVar81,0) & bVar39;
    auVar60[9] = (byte)((uint)fVar81 >> 8) & bVar41;
    auVar60[10] = (byte)((uint)fVar81 >> 0x10) & bVar42;
    auVar60[0xb] = (byte)((uint)fVar81 >> 0x18) & bVar43;
    auVar63[0xc] = SUB41(fVar82,0) & bVar44;
    auVar63._0_12_ = auVar60;
    auVar63[0xd] = (byte)((uint)fVar82 >> 8) & bVar46;
    auVar63[0xe] = (byte)((uint)fVar82 >> 0x10) & bVar47;
    auVar63[0xf] = (byte)((uint)fVar82 >> 0x18) & bVar48;
    fVar24 = (float)*(undefined8 *)param_2[4];
    fVar66 = (float)((ulong)auVar60._0_8_ >> 0x20);
    fVar68 = auVar60._8_4_;
    fVar70 = auVar63._12_4_;
    fVar25 = (float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
    fVar76 = (float)((ulong)auVar72._0_8_ >> 0x20);
    fVar77 = auVar72._8_4_;
    fVar78 = auVar75._12_4_;
    fVar59 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & bVar33,
                             CONCAT12((byte)((uint)fVar58 >> 0x10) & bVar32,
                                      CONCAT11((byte)((uint)fVar58 >> 8) & bVar31,
                                               SUB41(fVar58,0) & bVar28)));
    auVar61._0_8_ =
         CONCAT17((byte)((uint)fVar65 >> 0x18) & bVar38,
                  CONCAT16((byte)((uint)fVar65 >> 0x10) & bVar37,
                           CONCAT15((byte)((uint)fVar65 >> 8) & bVar36,
                                    CONCAT14(SUB41(fVar65,0) & bVar34,fVar59))));
    auVar61[8] = SUB41(fVar67,0) & bVar39;
    auVar61[9] = (byte)((uint)fVar67 >> 8) & bVar41;
    auVar61[10] = (byte)((uint)fVar67 >> 0x10) & bVar42;
    auVar61[0xb] = (byte)((uint)fVar67 >> 0x18) & bVar43;
    auVar64[0xc] = SUB41(fVar69,0) & bVar44;
    auVar64._0_12_ = auVar61;
    auVar64[0xd] = (byte)((uint)fVar69 >> 8) & bVar46;
    auVar64[0xe] = (byte)((uint)fVar69 >> 0x10) & bVar47;
    auVar64[0xf] = (byte)((uint)fVar69 >> 0x18) & bVar48;
    fVar26 = (float)*(undefined8 *)(param_2[4] + 8);
    fVar79 = (-(fVar79 * fVar24) - fVar49 * fVar25) - fVar58 * fVar26;
    fVar80 = (-(fVar80 * fVar24) - fVar50 * fVar25) - fVar65 * fVar26;
    fVar81 = (-(fVar81 * fVar24) - fVar51 * fVar25) - fVar67 * fVar26;
    fVar82 = (-(fVar82 * fVar24) - fVar52 * fVar25) - fVar69 * fVar26;
    fVar24 = (float)((ulong)auVar61._0_8_ >> 0x20);
    fVar25 = auVar61._8_4_;
    fVar26 = auVar64._12_4_;
    fVar79 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & bVar33,
                             CONCAT12((byte)((uint)fVar79 >> 0x10) & bVar32,
                                      CONCAT11((byte)((uint)fVar79 >> 8) & bVar31,
                                               SUB41(fVar79,0) & bVar28)));
    fVar81 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) & bVar43,
                             CONCAT12((byte)((uint)fVar81 >> 0x10) & bVar42,
                                      CONCAT11((byte)((uint)fVar81 >> 8) & bVar41,
                                               SUB41(fVar81,0) & bVar39)));
    fVar80 = (float)(CONCAT17((byte)((uint)fVar80 >> 0x18) & bVar38,
                              CONCAT16((byte)((uint)fVar80 >> 0x10) & bVar37,
                                       CONCAT15((byte)((uint)fVar80 >> 8) & bVar36,
                                                CONCAT14(SUB41(fVar80,0) & bVar34,fVar79)))) >> 0x20
                    );
    local_50 = CONCAT44(fVar66 * fVar92 + fVar76 * fVar94 + fVar24 * fVar95 + fVar80,
                        fVar53 * fVar92 + fVar71 * fVar94 + fVar59 * fVar95 + fVar79);
    fVar82 = (float)(CONCAT17((byte)((uint)fVar82 >> 0x18) & bVar48,
                              CONCAT16((byte)((uint)fVar82 >> 0x10) & bVar47,
                                       CONCAT15((byte)((uint)fVar82 >> 8) & bVar46,
                                                CONCAT14(SUB41(fVar82,0) & bVar44,fVar81)))) >> 0x20
                    );
    uStack_48 = CONCAT44(fVar70 * fVar92 + fVar78 * fVar94 + fVar26 * fVar95 + fVar82,
                         fVar68 * fVar92 + fVar77 * fVar94 + fVar25 * fVar95 + fVar81);
    local_60 = CONCAT44(fVar66 * fVar98 + fVar76 * fVar99 + fVar24 * fVar100 + fVar80,
                        fVar53 * fVar98 + fVar71 * fVar99 + fVar59 * fVar100 + fVar79);
    uStack_58 = CONCAT44(fVar70 * fVar98 + fVar78 * fVar99 + fVar26 * fVar100 + fVar82,
                         fVar68 * fVar98 + fVar77 * fVar99 + fVar25 * fVar100 + fVar81);
    local_70 = CONCAT44(fVar66 * fVar87 + fVar76 * fVar90 + fVar24 * fVar91 + fVar80,
                        fVar53 * fVar87 + fVar71 * fVar90 + fVar59 * fVar91 + fVar79);
    uStack_68 = CONCAT44(fVar70 * fVar87 + fVar78 * fVar90 + fVar26 * fVar91 + fVar82,
                         fVar68 * fVar87 + fVar77 * fVar90 + fVar25 * fVar91 + fVar81);
    uVar15 = FUN_00dd5fd0(&local_80,&local_90,&local_50,&local_60,&local_70,0);
    if ((uVar15 & 1) == 0) {
      uVar17 = 0;
      do {
        lVar27 = (param_1 + uVar17 * 2 + 0xde)[1];
        lVar18 = param_1[uVar17 * 2 + 0xde];
        fVar79 = (float)param_1[0xe8];
        fVar80 = (float)((ulong)param_1[0xe8] >> 0x20);
        local_50 = CONCAT44(fVar80 + (float)((ulong)lVar18 >> 0x20),fVar79 + (float)lVar18);
        fVar81 = (float)param_1[0xe9];
        fVar82 = (float)((ulong)param_1[0xe9] >> 0x20);
        uStack_48 = CONCAT44(fVar82 + (float)((ulong)lVar27 >> 0x20),fVar81 + (float)lVar27);
        lVar18 = 0;
        if (uVar17 != 2) {
          lVar18 = uVar17 + 1;
        }
        local_60 = CONCAT44(fVar80 + (float)((ulong)param_1[lVar18 * 2 + 0xde] >> 0x20),
                            fVar79 + (float)param_1[lVar18 * 2 + 0xde]);
        uStack_58 = CONCAT44(fVar82 + (float)((ulong)param_1[lVar18 * 2 + 0xdf] >> 0x20),
                             fVar81 + (float)param_1[lVar18 * 2 + 0xdf]);
        uVar17 = uVar17 + 1;
        uVar15 = FUN_00eb4f10((int)param_1[0xf8],*(undefined4 *)((long)param_1 + 0x7c4),uVar83,
                              uVar15,param_2,&local_50,&local_60,0);
      } while ((uVar17 < 3) && ((uVar15 & 1) == 0));
      if ((uVar15 & 1) == 0) goto LAB_00eb4c4c;
    }
    plVar1 = (long *)param_1[0x3e];
    plVar14 = (long *)param_1[0x3d];
    do {
      if (plVar14 == plVar1) {
        return 1;
      }
      lVar18 = *plVar14;
      uVar15 = FUN_00eb7130(lVar18 + 0x50);
      plVar14 = plVar14 + 1;
    } while ((uVar15 & 1) == 0);
    uVar16 = 1;
    *(undefined1 *)(lVar18 + 0x69) = 1;
  }
  return uVar16;
}


