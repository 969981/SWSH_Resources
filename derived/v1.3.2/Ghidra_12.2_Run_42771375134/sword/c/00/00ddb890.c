/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddb890; name: FUN_00ddb890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ddb890(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  float fVar92;
  float fVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar65 = (undefined4)_UNK_01d49dc8;
  uVar67 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
  lVar31 = *(long *)(param_1 + 0x3a0);
  uVar72 = (undefined4)_UNK_01d4b588;
  uVar73 = (undefined4)((ulong)_UNK_01d4b588 >> 0x20);
  auVar13._8_4_ = uVar72;
  auVar13._0_8_ = _DAT_01d4b580;
  auVar13._12_4_ = uVar73;
  uVar33 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
  fVar77 = (float)((ulong)uVar33 >> 0x20);
  auVar9._8_4_ = uVar65;
  auVar9._0_8_ = _DAT_01d49dc0;
  auVar9._12_4_ = uVar67;
  uVar34 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
  fVar81 = (float)((ulong)uVar34 >> 0x20);
  auVar14._8_4_ = uVar72;
  auVar14._0_8_ = _DAT_01d4b580;
  auVar14._12_4_ = uVar73;
  uVar88 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
  auVar15._8_4_ = uVar72;
  auVar15._0_8_ = _DAT_01d4b580;
  auVar15._12_4_ = uVar73;
  uVar32 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
  fVar71 = (float)((ulong)uVar32 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(lVar31 + 0x110);
  fVar76 = (float)((ulong)*(undefined8 *)(lVar31 + 0x118) >> 0x20);
  fVar78 = (float)*(undefined8 *)*pauVar1;
  fVar79 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar69 = fVar78 * (float)_DAT_01d4ae80;
  fVar70 = fVar79 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar39 = SUB41(fVar70,0);
  uVar41 = (undefined1)((uint)fVar70 >> 8);
  uVar43 = (undefined1)((uint)fVar70 >> 0x10);
  uVar45 = (undefined1)((uint)fVar70 >> 0x18);
  fVar82 = (float)*(undefined8 *)(lVar31 + 0x118) * (float)_UNK_01d4ae88;
  uVar47 = SUB41(fVar82,0);
  uVar48 = (undefined1)((uint)fVar82 >> 8);
  uVar50 = (undefined1)((uint)fVar82 >> 0x10);
  uVar52 = (undefined1)((uint)fVar82 >> 0x18);
  fVar83 = fVar76 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar54 = SUB41(fVar83,0);
  uVar56 = (undefined1)((uint)fVar83 >> 8);
  uVar58 = (undefined1)((uint)fVar83 >> 0x10);
  uVar60 = (undefined1)((uint)fVar83 >> 0x18);
  auVar10._8_4_ = uVar65;
  auVar10._0_8_ = _DAT_01d49dc0;
  auVar10._12_4_ = uVar67;
  uVar90 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
  auVar11._8_4_ = uVar65;
  auVar11._0_8_ = _DAT_01d49dc0;
  auVar11._12_4_ = uVar67;
  uVar12 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
  fVar63 = (float)((ulong)uVar12 >> 0x20);
  auVar2[4] = uVar39;
  auVar2._0_4_ = fVar69;
  auVar2[5] = uVar41;
  auVar2[6] = uVar43;
  auVar2[7] = uVar45;
  auVar2[8] = uVar47;
  auVar2[9] = uVar48;
  auVar2[10] = uVar50;
  auVar2[0xb] = uVar52;
  auVar2[0xc] = uVar54;
  auVar2[0xd] = uVar56;
  auVar2[0xe] = uVar58;
  auVar2[0xf] = uVar60;
  uVar91 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  auVar3[4] = uVar39;
  auVar3._0_4_ = fVar69;
  auVar3[5] = uVar41;
  auVar3[6] = uVar43;
  auVar3[7] = uVar45;
  auVar3[8] = uVar47;
  auVar3[9] = uVar48;
  auVar3[10] = uVar50;
  auVar3[0xb] = uVar52;
  auVar3[0xc] = uVar54;
  auVar3[0xd] = uVar56;
  auVar3[0xe] = uVar58;
  auVar3[0xf] = uVar60;
  uVar94 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5120);
  auVar4[4] = uVar39;
  auVar4._0_4_ = fVar69;
  auVar4[5] = uVar41;
  auVar4[6] = uVar43;
  auVar4[7] = uVar45;
  auVar4[8] = uVar47;
  auVar4[9] = uVar48;
  auVar4[10] = uVar50;
  auVar4[0xb] = uVar52;
  auVar4[0xc] = uVar54;
  auVar4[0xd] = uVar56;
  auVar4[0xe] = uVar58;
  auVar4[0xf] = uVar60;
  uVar97 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  fVar75 = (float)((ulong)DAT_01cd52f0 >> 0x20);
  auVar5[4] = uVar39;
  auVar5._0_4_ = fVar69;
  auVar5[5] = uVar41;
  auVar5[6] = uVar43;
  auVar5[7] = uVar45;
  auVar5[8] = uVar47;
  auVar5[9] = uVar48;
  auVar5[10] = uVar50;
  auVar5[0xb] = uVar52;
  auVar5[0xc] = uVar54;
  auVar5[0xd] = uVar56;
  auVar5[0xe] = uVar58;
  auVar5[0xf] = uVar60;
  uVar35 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  fVar100 = (float)((ulong)uVar35 >> 0x20);
  auVar6[4] = uVar39;
  auVar6._0_4_ = fVar69;
  auVar6[5] = uVar41;
  auVar6[6] = uVar43;
  auVar6[7] = uVar45;
  auVar6[8] = uVar47;
  auVar6[9] = uVar48;
  auVar6[10] = uVar50;
  auVar6[0xb] = uVar52;
  auVar6[0xc] = uVar54;
  auVar6[0xd] = uVar56;
  auVar6[0xe] = uVar58;
  auVar6[0xf] = uVar60;
  uVar95 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
  fVar66 = (float)_UNK_01d4ae98;
  fVar68 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar62 = (float)_DAT_01d4ae90;
  fVar64 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar101 = (float)((ulong)uVar95 >> 0x20);
  auVar16._12_4_ = fVar76;
  auVar16._0_12_ = *pauVar1;
  uVar96 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50f8);
  fVar92 = (float)((ulong)uVar91 >> 0x20);
  fVar80 = (float)((ulong)uVar90 >> 0x20);
  fVar93 = (float)((ulong)uVar94 >> 0x20);
  fVar89 = (float)((ulong)uVar88 >> 0x20);
  auVar7[4] = uVar39;
  auVar7._0_4_ = fVar69;
  auVar7[5] = uVar41;
  auVar7[6] = uVar43;
  auVar7[7] = uVar45;
  auVar7[8] = SUB41(fVar69,0);
  auVar7[9] = (char)((uint)fVar69 >> 8);
  auVar7[10] = (char)((uint)fVar69 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar69 >> 0x18);
  auVar7[0xc] = uVar39;
  auVar7[0xd] = uVar41;
  auVar7[0xe] = uVar43;
  auVar7[0xf] = uVar45;
  uVar8 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
  fVar98 = (float)((ulong)uVar97 >> 0x20);
  fVar99 = (float)((ulong)uVar8 >> 0x20);
  auVar17._12_4_ = fVar76;
  auVar17._0_12_ = *pauVar1;
  uVar74 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd4f90);
  fVar84 = (fVar69 * (float)uVar34 + fVar62 * (float)uVar91 * 0.0 +
           fVar62 * (float)uVar12 * (float)uVar97) - (float)uVar90 * (float)uVar35;
  fVar85 = (fVar70 * fVar81 + fVar64 * fVar92 * 0.0 + fVar64 * fVar63 * fVar98) - fVar80 * fVar100;
  fVar86 = (fVar82 * (float)uVar34 + fVar66 * (float)uVar90 * (float)uVar94 +
           fVar66 * (float)uVar8 * 0.0) - (float)uVar12 * (float)uVar95;
  fVar87 = (fVar83 * fVar81 + fVar68 * fVar80 * fVar93 + fVar68 * fVar99 * 0.0) - fVar63 * fVar101;
  fVar80 = (fVar69 * (float)uVar33 + fVar62 * (float)uVar91 * (float)DAT_01cd52f0 +
           fVar62 * (float)uVar97 * (float)uVar32) - (float)uVar88 * (float)uVar35;
  fVar81 = (fVar70 * fVar77 + fVar64 * fVar92 * fVar75 + fVar64 * fVar98 * fVar71) -
           fVar89 * fVar100;
  fVar82 = (fVar82 * (float)uVar33 + fVar66 * (float)uVar94 * (float)uVar88 +
           fVar66 * (float)uVar8 * (float)DAT_01cd52f0) - (float)uVar32 * (float)uVar95;
  fVar83 = (fVar83 * fVar77 + fVar68 * fVar93 * fVar89 + fVar68 * fVar99 * fVar75) -
           fVar71 * fVar101;
  auVar18._12_4_ = fVar76;
  auVar18._0_12_ = *pauVar1;
  uVar97 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5418);
  auVar24._4_4_ = fVar85;
  auVar24._0_4_ = fVar84;
  auVar24._8_4_ = fVar86;
  auVar24._12_4_ = fVar87;
  uVar8 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
  auVar25._4_4_ = fVar85;
  auVar25._0_4_ = fVar84;
  auVar25._8_4_ = fVar86;
  auVar25._12_4_ = fVar87;
  uVar91 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
  auVar26._4_4_ = fVar85;
  auVar26._0_4_ = fVar84;
  auVar26._8_4_ = fVar86;
  auVar26._12_4_ = fVar87;
  uVar94 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
  auVar27._4_4_ = fVar85;
  auVar27._0_4_ = fVar84;
  auVar27._8_4_ = fVar86;
  auVar27._12_4_ = fVar87;
  uVar95 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5270);
  auVar28._4_4_ = fVar85;
  auVar28._0_4_ = fVar84;
  auVar28._8_4_ = fVar86;
  auVar28._12_4_ = fVar87;
  uVar12 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5120);
  fVar63 = (float)uVar74;
  fVar71 = (float)((ulong)uVar74 >> 0x20);
  auVar19._4_4_ = fVar81;
  auVar19._0_4_ = fVar80;
  auVar19._8_4_ = fVar82;
  auVar19._12_4_ = fVar83;
  uVar32 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd4f90);
  auVar20._4_4_ = fVar81;
  auVar20._0_4_ = fVar80;
  auVar20._8_4_ = fVar82;
  auVar20._12_4_ = fVar83;
  uVar34 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5120);
  auVar21._4_4_ = fVar81;
  auVar21._0_4_ = fVar80;
  auVar21._8_4_ = fVar82;
  auVar21._12_4_ = fVar83;
  uVar35 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5270);
  auVar22._4_4_ = fVar81;
  auVar22._0_4_ = fVar80;
  auVar22._8_4_ = fVar82;
  auVar22._12_4_ = fVar83;
  uVar33 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
  auVar23._4_4_ = fVar81;
  auVar23._0_4_ = fVar80;
  auVar23._8_4_ = fVar82;
  auVar23._12_4_ = fVar83;
  uVar74 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
  auVar30._4_4_ = fVar81;
  auVar30._0_4_ = fVar80;
  auVar30._8_4_ = fVar80;
  auVar30._12_4_ = fVar81;
  uVar88 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd50b0);
  auVar29._4_4_ = fVar85;
  auVar29._0_4_ = fVar84;
  auVar29._8_4_ = fVar84;
  auVar29._12_4_ = fVar85;
  uVar90 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50b0);
  fVar69 = (float)uVar96;
  fVar70 = (float)((ulong)uVar96 >> 0x20);
  bVar49 = (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar51 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar53 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar55 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar57 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar59 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar61 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  bVar36 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar37 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar38 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar40 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar42 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar44 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar46 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  fVar89 = (float)uVar97;
  fVar92 = (float)((ulong)uVar97 >> 0x20);
  fVar80 = (fVar63 * fVar80 + fVar62 * fVar78 * (float)uVar32 + fVar62 * fVar89 * (float)uVar33) -
           fVar69 * (float)uVar74;
  fVar75 = (fVar71 * fVar81 + fVar64 * fVar79 * (float)((ulong)uVar32 >> 0x20) +
           fVar64 * fVar92 * (float)((ulong)uVar33 >> 0x20)) -
           fVar70 * (float)((ulong)uVar74 >> 0x20);
  fVar76 = (fVar63 * fVar82 + fVar66 * fVar69 * (float)uVar34 + fVar66 * fVar78 * (float)uVar88) -
           fVar89 * (float)uVar35;
  fVar77 = (fVar71 * fVar83 + fVar68 * fVar70 * (float)((ulong)uVar34 >> 0x20) +
           fVar68 * fVar79 * (float)((ulong)uVar88 >> 0x20)) -
           fVar92 * (float)((ulong)uVar35 >> 0x20);
  fVar82 = (fVar63 * fVar84 + fVar62 * fVar78 * (float)uVar8 + fVar62 * fVar89 * (float)uVar91) -
           fVar69 * (float)uVar94;
  fVar83 = (fVar71 * fVar85 + fVar64 * fVar79 * (float)((ulong)uVar8 >> 0x20) +
           fVar64 * fVar92 * (float)((ulong)uVar91 >> 0x20)) -
           fVar70 * (float)((ulong)uVar94 >> 0x20);
  fVar69 = (fVar63 * fVar86 + fVar66 * fVar69 * (float)uVar12 + fVar66 * fVar78 * (float)uVar90) -
           fVar89 * (float)uVar95;
  fVar70 = (fVar71 * fVar87 + fVar68 * fVar70 * (float)((ulong)uVar12 >> 0x20) +
           fVar68 * fVar79 * (float)((ulong)uVar90 >> 0x20)) -
           fVar92 * (float)((ulong)uVar95 >> 0x20);
  local_30 = CONCAT17((byte)((uint)fVar75 >> 0x18) & bVar46,
                      CONCAT16((byte)((uint)fVar75 >> 0x10) & bVar44,
                               CONCAT15((byte)((uint)fVar75 >> 8) & bVar42,
                                        CONCAT14(SUB41(fVar75,0) & bVar40,
                                                 CONCAT13((byte)((uint)fVar80 >> 0x18) & bVar38,
                                                          CONCAT12((byte)((uint)fVar80 >> 0x10) &
                                                                   bVar37,CONCAT11((byte)((uint)
                                                  fVar80 >> 8) & bVar36,
                                                  SUB41(fVar80,0) & (byte)DAT_01d4ab50)))))));
  uStack_28 = CONCAT17((byte)((uint)fVar77 >> 0x18) & bVar61,
                       CONCAT16((byte)((uint)fVar77 >> 0x10) & bVar59,
                                CONCAT15((byte)((uint)fVar77 >> 8) & bVar57,
                                         CONCAT14(SUB41(fVar77,0) & bVar55,
                                                  CONCAT13((byte)((uint)fVar76 >> 0x18) & bVar53,
                                                           CONCAT12((byte)((uint)fVar76 >> 0x10) &
                                                                    bVar51,CONCAT11((byte)((uint)
                                                  fVar76 >> 8) & bVar49,
                                                  SUB41(fVar76,0) & (byte)DAT_01d4ab58)))))));
  uStack_20 = CONCAT17((byte)((uint)fVar83 >> 0x18) & bVar46,
                       CONCAT16((byte)((uint)fVar83 >> 0x10) & bVar44,
                                CONCAT15((byte)((uint)fVar83 >> 8) & bVar42,
                                         CONCAT14(SUB41(fVar83,0) & bVar40,
                                                  CONCAT13((byte)((uint)fVar82 >> 0x18) & bVar38,
                                                           CONCAT12((byte)((uint)fVar82 >> 0x10) &
                                                                    bVar37,CONCAT11((byte)((uint)
                                                  fVar82 >> 8) & bVar36,
                                                  SUB41(fVar82,0) & (byte)DAT_01d4ab50)))))));
  uStack_18 = CONCAT17((byte)((uint)fVar70 >> 0x18) & bVar61,
                       CONCAT16((byte)((uint)fVar70 >> 0x10) & bVar59,
                                CONCAT15((byte)((uint)fVar70 >> 8) & bVar57,
                                         CONCAT14(SUB41(fVar70,0) & bVar55,
                                                  CONCAT13((byte)((uint)fVar69 >> 0x18) & bVar53,
                                                           CONCAT12((byte)((uint)fVar69 >> 0x10) &
                                                                    bVar51,CONCAT11((byte)((uint)
                                                  fVar69 >> 8) & bVar49,
                                                  SUB41(fVar69,0) & (byte)DAT_01d4ab58)))))));
  FUN_00893ed0(*(undefined8 *)PTR_DAT_027107a8,lVar31 + 0xf0,&uStack_20,&local_30);
  return;
}


