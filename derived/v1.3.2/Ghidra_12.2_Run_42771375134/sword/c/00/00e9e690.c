/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9e690; name: FUN_00e9e690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e9e690(long param_1)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  code *pcVar29;
  undefined1 *puVar30;
  int iVar31;
  ulong uVar32;
  long *plVar33;
  undefined8 uVar34;
  long lVar35;
  long *plVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined1 *local_160;
  code *pcStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined *local_b0 [8];
  int local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  uStack_48 = *(undefined8 *)(param_1 + 0xb8);
  local_50 = *(undefined8 *)(param_1 + 0xb0);
  pVar1 = (unkbyte9 *)(param_1 + 0xa0);
  uVar34 = *(undefined8 *)(param_1 + 0xa8);
  uVar60 = (undefined1)((ulong)uVar34 >> 8);
  uVar62 = (undefined1)((ulong)uVar34 >> 0x10);
  uVar64 = (undefined1)((ulong)uVar34 >> 0x18);
  uVar66 = (undefined1)((ulong)uVar34 >> 0x20);
  uVar68 = (undefined1)((ulong)uVar34 >> 0x28);
  uVar70 = (undefined1)((ulong)uVar34 >> 0x30);
  uVar72 = (undefined1)((ulong)uVar34 >> 0x38);
  uVar77 = (undefined4)_UNK_01d49dc8;
  uVar78 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
  fVar9 = (float)*(undefined8 *)pVar1;
  fVar20 = fVar9 * (float)_DAT_01d4ae80;
  fVar13 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  fVar22 = fVar13 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar39 = SUB41(fVar22,0);
  uVar40 = (undefined1)((uint)fVar22 >> 8);
  uVar41 = (undefined1)((uint)fVar22 >> 0x10);
  uVar42 = (undefined1)((uint)fVar22 >> 0x18);
  fVar23 = (float)uVar34 * (float)_UNK_01d4ae88;
  uVar43 = SUB41(fVar23,0);
  uVar44 = (undefined1)((uint)fVar23 >> 8);
  uVar45 = (undefined1)((uint)fVar23 >> 0x10);
  uVar46 = (undefined1)((uint)fVar23 >> 0x18);
  fVar24 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar47 = SUB41(fVar24,0);
  uVar48 = (undefined1)((uint)fVar24 >> 8);
  uVar49 = (undefined1)((uint)fVar24 >> 0x10);
  uVar50 = (undefined1)((uint)fVar24 >> 0x18);
  auVar25._8_4_ = uVar77;
  auVar25._0_8_ = _DAT_01d49dc0;
  auVar25._12_4_ = uVar78;
  uVar34 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
  auVar14[4] = uVar39;
  auVar14._0_4_ = fVar20;
  auVar14[5] = uVar40;
  auVar14[6] = uVar41;
  auVar14[7] = uVar42;
  auVar14[8] = uVar43;
  auVar14[9] = uVar44;
  auVar14[10] = uVar45;
  auVar14[0xb] = uVar46;
  auVar14[0xc] = uVar47;
  auVar14[0xd] = uVar48;
  auVar14[0xe] = uVar49;
  auVar14[0xf] = uVar50;
  uVar85 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
  auVar26._8_4_ = uVar77;
  auVar26._0_8_ = _DAT_01d49dc0;
  auVar26._12_4_ = uVar78;
  uVar79 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50f8);
  auVar27._8_4_ = uVar77;
  auVar27._0_8_ = _DAT_01d49dc0;
  auVar27._12_4_ = uVar78;
  uVar74 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5418);
  fVar75 = (float)((ulong)uVar74 >> 0x20);
  auVar15[4] = uVar39;
  auVar15._0_4_ = fVar20;
  auVar15[5] = uVar40;
  auVar15[6] = uVar41;
  auVar15[7] = uVar42;
  auVar15[8] = uVar43;
  auVar15[9] = uVar44;
  auVar15[10] = uVar45;
  auVar15[0xb] = uVar46;
  auVar15[0xc] = uVar47;
  auVar15[0xd] = uVar48;
  auVar15[0xe] = uVar49;
  auVar15[0xf] = uVar50;
  uVar89 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
  fVar8 = (float)((ulong)uVar34 >> 0x20);
  auVar16[4] = uVar39;
  auVar16._0_4_ = fVar20;
  auVar16[5] = uVar40;
  auVar16[6] = uVar41;
  auVar16[7] = uVar42;
  auVar16[8] = uVar43;
  auVar16[9] = uVar44;
  auVar16[10] = uVar45;
  auVar16[0xb] = uVar46;
  auVar16[0xc] = uVar47;
  auVar16[0xd] = uVar48;
  auVar16[0xe] = uVar49;
  auVar16[0xf] = uVar50;
  uVar87 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5120);
  auVar17[4] = uVar39;
  auVar17._0_4_ = fVar20;
  auVar17[5] = uVar40;
  auVar17[6] = uVar41;
  auVar17[7] = uVar42;
  auVar17[8] = uVar43;
  auVar17[9] = uVar44;
  auVar17[10] = uVar45;
  auVar17[0xb] = uVar46;
  auVar17[0xc] = uVar47;
  auVar17[0xd] = uVar48;
  auVar17[0xe] = uVar49;
  auVar17[0xf] = uVar50;
  uVar88 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5418);
  fVar80 = (float)((ulong)uVar79 >> 0x20);
  auVar18[4] = uVar39;
  auVar18._0_4_ = fVar20;
  auVar18[5] = uVar40;
  auVar18[6] = uVar41;
  auVar18[7] = uVar42;
  auVar18[8] = uVar43;
  auVar18[9] = uVar44;
  auVar18[10] = uVar45;
  auVar18[0xb] = uVar46;
  auVar18[0xc] = uVar47;
  auVar18[0xd] = uVar48;
  auVar18[0xe] = uVar49;
  auVar18[0xf] = uVar50;
  uVar86 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50f8);
  auVar19[4] = uVar39;
  auVar19._0_4_ = fVar20;
  auVar19[5] = uVar40;
  auVar19[6] = uVar41;
  auVar19[7] = uVar42;
  auVar19[8] = SUB41(fVar20,0);
  auVar19[9] = (char)((uint)fVar20 >> 8);
  auVar19[10] = (char)((uint)fVar20 >> 0x10);
  auVar19[0xb] = (char)((uint)fVar20 >> 0x18);
  auVar19[0xc] = uVar39;
  auVar19[0xd] = uVar40;
  auVar19[0xe] = uVar41;
  auVar19[0xf] = uVar42;
  uVar21 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50b0);
  auVar10[9] = uVar60;
  auVar10._0_9_ = *pVar1;
  auVar10[10] = uVar62;
  auVar10[0xb] = uVar64;
  auVar10[0xc] = uVar66;
  auVar10[0xd] = uVar68;
  auVar10[0xe] = uVar70;
  auVar10[0xf] = uVar72;
  uVar28 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
  fVar76 = (float)((ulong)uVar28 >> 0x20);
  fVar81 = (float)_DAT_01d4ae90;
  fVar82 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar83 = (float)_UNK_01d4ae98;
  fVar84 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar11[9] = uVar60;
  auVar11._0_9_ = *pVar1;
  auVar11[10] = uVar62;
  auVar11[0xb] = uVar64;
  auVar11[0xc] = uVar66;
  auVar11[0xd] = uVar68;
  auVar11[0xe] = uVar70;
  auVar11[0xf] = uVar72;
  uVar37 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
  fVar20 = (fVar20 * (float)uVar34 + fVar81 * (float)uVar85 * 0.0 +
           fVar81 * (float)uVar74 * (float)uVar86) - (float)uVar79 * (float)uVar88;
  fVar22 = (fVar22 * fVar8 + fVar82 * (float)((ulong)uVar85 >> 0x20) * 0.0 +
           fVar82 * fVar75 * (float)((ulong)uVar86 >> 0x20)) -
           fVar80 * (float)((ulong)uVar88 >> 0x20);
  uVar39 = SUB41(fVar22,0);
  uVar40 = (undefined1)((uint)fVar22 >> 8);
  uVar41 = (undefined1)((uint)fVar22 >> 0x10);
  uVar42 = (undefined1)((uint)fVar22 >> 0x18);
  fVar23 = (fVar23 * (float)uVar34 + fVar83 * (float)uVar79 * (float)uVar87 +
           fVar83 * (float)uVar21 * 0.0) - (float)uVar74 * (float)uVar89;
  uVar43 = SUB41(fVar23,0);
  uVar44 = (undefined1)((uint)fVar23 >> 8);
  uVar45 = (undefined1)((uint)fVar23 >> 0x10);
  uVar46 = (undefined1)((uint)fVar23 >> 0x18);
  fVar8 = (fVar24 * fVar8 + fVar84 * fVar80 * (float)((ulong)uVar87 >> 0x20) +
          fVar84 * (float)((ulong)uVar21 >> 0x20) * 0.0) - fVar75 * (float)((ulong)uVar89 >> 0x20);
  uVar47 = SUB41(fVar8,0);
  uVar48 = (undefined1)((uint)fVar8 >> 8);
  uVar49 = (undefined1)((uint)fVar8 >> 0x10);
  uVar50 = (undefined1)((uint)fVar8 >> 0x18);
  auVar2[4] = uVar39;
  auVar2._0_4_ = fVar20;
  auVar2[5] = uVar40;
  auVar2[6] = uVar41;
  auVar2[7] = uVar42;
  auVar2[8] = uVar43;
  auVar2[9] = uVar44;
  auVar2[10] = uVar45;
  auVar2[0xb] = uVar46;
  auVar2[0xc] = uVar47;
  auVar2[0xd] = uVar48;
  auVar2[0xe] = uVar49;
  auVar2[0xf] = uVar50;
  uVar79 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  auVar3[4] = uVar39;
  auVar3._0_4_ = fVar20;
  auVar3[5] = uVar40;
  auVar3[6] = uVar41;
  auVar3[7] = uVar42;
  auVar3[8] = uVar43;
  auVar3[9] = uVar44;
  auVar3[10] = uVar45;
  auVar3[0xb] = uVar46;
  auVar3[0xc] = uVar47;
  auVar3[0xd] = uVar48;
  auVar3[0xe] = uVar49;
  auVar3[0xf] = uVar50;
  uVar87 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5120);
  fVar24 = (float)((ulong)uVar37 >> 0x20);
  auVar12[9] = uVar60;
  auVar12._0_9_ = *pVar1;
  auVar12[10] = uVar62;
  auVar12[0xb] = uVar64;
  auVar12[0xc] = uVar66;
  auVar12[0xd] = uVar68;
  auVar12[0xe] = uVar70;
  auVar12[0xf] = uVar72;
  uVar86 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
  fVar75 = (float)((ulong)uVar86 >> 0x20);
  auVar4[4] = uVar39;
  auVar4._0_4_ = fVar20;
  auVar4[5] = uVar40;
  auVar4[6] = uVar41;
  auVar4[7] = uVar42;
  auVar4[8] = uVar43;
  auVar4[9] = uVar44;
  auVar4[10] = uVar45;
  auVar4[0xb] = uVar46;
  auVar4[0xc] = uVar47;
  auVar4[0xd] = uVar48;
  auVar4[0xe] = uVar49;
  auVar4[0xf] = uVar50;
  uVar21 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  auVar5[4] = uVar39;
  auVar5._0_4_ = fVar20;
  auVar5[5] = uVar40;
  auVar5[6] = uVar41;
  auVar5[7] = uVar42;
  auVar5[8] = uVar43;
  auVar5[9] = uVar44;
  auVar5[10] = uVar45;
  auVar5[0xb] = uVar46;
  auVar5[0xc] = uVar47;
  auVar5[0xd] = uVar48;
  auVar5[0xe] = uVar49;
  auVar5[0xf] = uVar50;
  uVar74 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  auVar6[4] = uVar39;
  auVar6._0_4_ = fVar20;
  auVar6[5] = uVar40;
  auVar6[6] = uVar41;
  auVar6[7] = uVar42;
  auVar6[8] = uVar43;
  auVar6[9] = uVar44;
  auVar6[10] = uVar45;
  auVar6[0xb] = uVar46;
  auVar6[0xc] = uVar47;
  auVar6[0xd] = uVar48;
  auVar6[0xe] = uVar49;
  auVar6[0xf] = uVar50;
  uVar85 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
  auVar7[4] = uVar39;
  auVar7._0_4_ = fVar20;
  auVar7[5] = uVar40;
  auVar7[6] = uVar41;
  auVar7[7] = uVar42;
  auVar7[8] = SUB41(fVar20,0);
  auVar7[9] = (char)((uint)fVar20 >> 8);
  auVar7[10] = (char)((uint)fVar20 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar20 >> 0x18);
  auVar7[0xc] = uVar39;
  auVar7[0xd] = uVar40;
  auVar7[0xe] = uVar41;
  auVar7[0xf] = uVar42;
  uVar34 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
  fVar20 = ((float)uVar37 * fVar20 + fVar81 * fVar9 * (float)uVar79 +
           fVar81 * (float)uVar86 * (float)uVar21) - (float)uVar28 * (float)uVar74;
  fVar22 = (fVar24 * fVar22 + fVar82 * fVar13 * (float)((ulong)uVar79 >> 0x20) +
           fVar82 * fVar75 * (float)((ulong)uVar21 >> 0x20)) -
           fVar76 * (float)((ulong)uVar74 >> 0x20);
  fVar23 = ((float)uVar37 * fVar23 + fVar83 * (float)uVar28 * (float)uVar87 +
           fVar83 * fVar9 * (float)uVar34) - (float)uVar86 * (float)uVar85;
  fVar8 = (fVar24 * fVar8 + fVar84 * fVar76 * (float)((ulong)uVar87 >> 0x20) +
          fVar84 * fVar13 * (float)((ulong)uVar34 >> 0x20)) -
          fVar75 * (float)((ulong)uVar85 >> 0x20);
  bVar51 = SUB41(fVar20,0) & (byte)DAT_01d4ab50;
  bVar52 = (byte)((uint)fVar20 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar53 = (byte)((uint)fVar20 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar54 = (byte)((uint)fVar20 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar55 = SUB41(fVar22,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar56 = (byte)((uint)fVar22 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar57 = (byte)((uint)fVar22 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar58 = (byte)((uint)fVar22 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
  bVar59 = SUB41(fVar23,0) & (byte)DAT_01d4ab58;
  bVar61 = (byte)((uint)fVar23 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar63 = (byte)((uint)fVar23 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar65 = (byte)((uint)fVar23 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar67 = SUB41(fVar8,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar69 = (byte)((uint)fVar8 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar71 = (byte)((uint)fVar8 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar73 = (byte)((uint)fVar8 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  fVar8 = *(float *)PTR_DAT_02720068;
  fVar9 = (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar61,bVar59)));
  fVar23 = (float)CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51)));
  fVar20 = (float)((ulong)local_50 >> 0x20) +
           (float)CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar55))) * fVar8;
  fVar22 = (float)((ulong)uStack_48 >> 0x20) +
           (float)CONCAT13(bVar73,CONCAT12(bVar71,CONCAT11(bVar69,bVar67))) * fVar8;
  uStack_58 = CONCAT17((char)((uint)fVar22 >> 0x18),
                       CONCAT16((char)((uint)fVar22 >> 0x10),
                                CONCAT15((char)((uint)fVar22 >> 8),
                                         CONCAT14(SUB41(fVar22,0),
                                                  (float)uStack_48 +
                                                  (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(
                                                  bVar61,bVar59))) * fVar8))));
  local_60 = CONCAT17((char)((uint)fVar20 >> 0x18),
                      CONCAT16((char)((uint)fVar20 >> 0x10),
                               CONCAT15((char)((uint)fVar20 >> 8),
                                        CONCAT14(SUB41(fVar20,0),
                                                 (float)local_50 +
                                                 (float)CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(
                                                  bVar52,bVar51))) * fVar8))));
  FUN_006c5c60(local_b0);
  local_b0[0] = PTR_DAT_0271fd40 + 0x10;
  uVar32 = FUN_006c83a0(*(undefined8 *)(param_1 + 0x288),&local_60,&local_50,2,local_b0);
  if (((uVar32 & 1) != 0) && (local_6c == 2)) {
    FUN_006c5d20(&local_160,local_b0);
    fVar8 = *(float *)PTR_DAT_02720070;
    fVar20 = SUB84(local_160,0) + fVar23 * fVar8;
    fVar22 = (float)((ulong)local_160 >> 0x20) +
             (float)(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,fVar23)))) >>
                    0x20) * fVar8;
    fVar23 = SUB84(pcStack_158,0) + fVar9 * fVar8;
    fVar8 = (float)((ulong)pcStack_158 >> 0x20) +
            (float)(CONCAT17(bVar73,CONCAT16(bVar71,CONCAT15(bVar69,CONCAT14(bVar67,fVar9)))) >>
                   0x20) * fVar8;
    pcStack_b8 = (code *)CONCAT17((char)((uint)fVar8 >> 0x18),
                                  CONCAT16((char)((uint)fVar8 >> 0x10),
                                           CONCAT15((char)((uint)fVar8 >> 8),
                                                    CONCAT14(SUB41(fVar8,0),fVar23))));
    local_c0 = (undefined1 *)
               CONCAT17((char)((uint)fVar22 >> 0x18),
                        CONCAT16((char)((uint)fVar22 >> 0x10),
                                 CONCAT15((char)((uint)fVar22 >> 8),CONCAT14(SUB41(fVar22,0),fVar20)
                                         )));
    fVar20 = fVar20 + (float)_DAT_01d4b240;
    fVar22 = fVar22 + (float)((ulong)_DAT_01d4b240 >> 0x20);
    fVar23 = fVar23 + (float)_UNK_01d4b248;
    fVar8 = fVar8 + (float)((ulong)_UNK_01d4b248 >> 0x20);
    uStack_c8 = CONCAT17((char)((uint)fVar8 >> 0x18),
                         CONCAT16((char)((uint)fVar8 >> 0x10),
                                  CONCAT15((char)((uint)fVar8 >> 8),CONCAT14(SUB41(fVar8,0),fVar23))
                                 ));
    local_d0 = CONCAT17((char)((uint)fVar22 >> 0x18),
                        CONCAT16((char)((uint)fVar22 >> 0x10),
                                 CONCAT15((char)((uint)fVar22 >> 8),CONCAT14(SUB41(fVar22,0),fVar20)
                                         )));
    fVar22 = fVar22 + (float)((ulong)_DAT_01d4a1d0 >> 0x20);
    fVar8 = fVar8 + (float)((ulong)_UNK_01d4a1d8 >> 0x20);
    uStack_d8 = CONCAT17((char)((uint)fVar8 >> 0x18),
                         CONCAT16((char)((uint)fVar8 >> 0x10),
                                  CONCAT15((char)((uint)fVar8 >> 8),
                                           CONCAT14(SUB41(fVar8,0),fVar23 + (float)_UNK_01d4a1d8))))
    ;
    local_e0 = CONCAT17((char)((uint)fVar22 >> 0x18),
                        CONCAT16((char)((uint)fVar22 >> 0x10),
                                 CONCAT15((char)((uint)fVar22 >> 8),
                                          CONCAT14(SUB41(fVar22,0),fVar20 + (float)_DAT_01d4a1d0))))
    ;
    uVar32 = FUN_006c83a0(*(undefined8 *)(param_1 + 0x288),&local_d0,&local_e0,4,local_b0);
    if ((uVar32 & 1) != 0) {
      FUN_006c5d20(&local_160,local_b0);
      pcStack_b8 = pcStack_158;
      local_c0 = local_160;
      puVar30 = local_c0;
      local_c0._4_4_ = (float)((ulong)local_160 >> 0x20);
      fVar8 = local_c0._4_4_ - local_50._4_4_;
      local_c0 = puVar30;
      if (((fVar8 <= *(float *)PTR_DAT_02720078) && (*(long *)(param_1 + 0x298) != 0)) &&
         (lVar35 = *(long *)(*(long *)(param_1 + 0x298) + 0x80), lVar35 != 0)) {
        plVar36 = (long *)(lVar35 + 0x48);
        (**(code **)(*plVar36 + 0x10))(plVar36);
        puVar38 = *(undefined8 **)(lVar35 + 0x60);
        if (puVar38 != (undefined8 *)0x0) {
          plVar33 = (long *)(**(code **)*puVar38)(puVar38);
          if (((*PTR_DAT_02715280 & 1) == 0) &&
             (iVar31 = __cxa_guard_acquire(PTR_DAT_02715280), iVar31 != 0)) {
            uVar34 = FUN_01590a70();
            *(undefined8 *)PTR_DAT_02715288 = uVar34;
            __cxa_guard_release(PTR_DAT_02715280);
          }
          for (; plVar33 != (long *)0x0; plVar33 = (long *)*plVar33) {
            if (plVar33 == (long *)PTR_DAT_02715288) {
              puVar38 = puVar38 + -10;
              goto LAB_00e9e950;
            }
          }
          puVar38 = (undefined8 *)0x0;
        }
LAB_00e9e950:
        (**(code **)(*plVar36 + 0x18))(plVar36);
        if (puVar38 != (undefined8 *)0x0) {
          uVar21 = puVar38[0xf];
          uVar34 = puVar38[0xe];
          puVar38[0xf] = pcStack_b8;
          puVar38[0xe] = local_c0;
          uVar37 = *(undefined8 *)(param_1 + 0x288);
          if (*(long *)(param_1 + 0x298) == 0) {
            local_38 = 0;
          }
          else {
            local_38 = *(long *)(*(long *)(param_1 + 0x298) + 0x80);
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
            }
          }
          local_160 = &LAB_00ea45e0;
          pcStack_158 = FUN_00ea45f0;
          local_150 = &LAB_00ea4600;
          puStack_148 = &LAB_00ea4610;
          uVar32 = FUN_006c7630(uVar37,&local_38,&local_160,0);
          pcVar29 = pcStack_158;
          if (pcStack_158 != (code *)0x0) {
            local_150 = (undefined1 *)0x0;
            puStack_148 = (undefined1 *)0x0;
            local_160 = (undefined1 *)0x0;
            pcStack_158 = (code *)0x0;
            (*pcVar29)(auStack_140);
          }
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
            local_38 = 0;
          }
          puVar38[0xf] = uVar21;
          puVar38[0xe] = uVar34;
          if (((uVar32 & 1) == 0) &&
             (uVar32 = FUN_00e81ef0((char)(undefined4)DAT_02a5c928,*(undefined8 *)(param_1 + 0x288),
                                    &local_c0,0), (uVar32 & 1) != 0)) {
            *(code **)(param_1 + 0x5f8) = pcStack_b8;
            *(undefined1 **)(param_1 + 0x5f0) = local_c0;
            uVar34 = 1;
            goto LAB_00e9ea60;
          }
        }
      }
    }
  }
  uVar34 = 0;
LAB_00e9ea60:
  FUN_006c5c80(local_b0);
  return uVar34;
}


