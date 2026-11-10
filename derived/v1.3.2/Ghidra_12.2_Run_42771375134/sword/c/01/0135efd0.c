/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0135efd0; name: FUN_0135efd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0135efd0(float param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  bool bVar23;
  int iVar24;
  long lVar25;
  undefined8 *puVar26;
  long unaff_x21;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [12];
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  float fVar72;
  undefined8 uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar75;
  undefined8 uVar73;
  int iVar76;
  undefined1 auVar74 [16];
  int iVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  undefined4 uVar86;
  float fVar87;
  undefined8 uVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_68;
  float fStack_64;
  ulong local_60 [2];
  float local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 auStack_38 [8];
  
  FUN_01346e80();
  FUN_012e5540(&local_40);
  FUN_01346e80(param_2);
  FUN_012e5540(local_60);
  if (local_60[0] != 0) {
    lVar25 = FUN_012d5170(local_60[0],auStack_38);
    if (lVar25 == 0) {
      bVar23 = false;
    }
    else {
      iVar24 = FUN_0130a7a0(lVar25);
      if (iVar24 == 2) {
        unaff_x21 = FUN_0130a5c0(lVar25);
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
    }
    if (local_60[0] != 0) {
      (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
      local_60[0] = 0;
    }
    if (bVar23) {
      bVar23 = false;
      if ((unaff_x21 == 0) || (local_40 == 0)) goto LAB_0135f0f4;
      uVar69 = *(undefined8 *)(local_40 + 0xb8);
      uVar11 = *(undefined8 *)(local_40 + 0xb0);
      FUN_0135f850(local_60,param_2);
      if ((char)local_60[0] == '\0') goto LAB_0135f0ec;
      puVar26 = (undefined8 *)FUN_01312400(param_2);
      local_70 = (float)uVar11;
      fStack_68 = (float)uVar69;
      fStack_64 = (float)((ulong)uVar69 >> 0x20);
      fVar29 = (float)*puVar26 - local_70;
      fVar32 = (float)puVar26[1] - fStack_68;
      fVar33 = (float)((ulong)puVar26[1] >> 0x20) - fStack_64;
      fVar34 = fVar29 * fVar29;
      fVar27 = fVar32 * fVar32;
      uVar45 = (undefined1)((uint)fVar27 >> 8);
      uVar47 = (undefined1)((uint)fVar27 >> 0x10);
      uVar49 = (undefined1)((uint)fVar27 >> 0x18);
      fVar35 = fVar33 * fVar33;
      uVar51 = (undefined1)((uint)fVar35 >> 8);
      uVar53 = (undefined1)((uint)fVar35 >> 0x10);
      uVar55 = (undefined1)((uint)fVar35 >> 0x18);
      auVar70._4_4_ = 0;
      auVar70._0_4_ = fVar34;
      auVar70[8] = SUB41(fVar27,0);
      auVar70[9] = uVar45;
      auVar70[10] = uVar47;
      auVar70[0xb] = uVar49;
      auVar70[0xc] = SUB41(fVar35,0);
      auVar70[0xd] = uVar51;
      auVar70[0xe] = uVar53;
      auVar70[0xf] = uVar55;
      auVar79._4_4_ = 0;
      auVar79._0_4_ = fVar34;
      auVar79[8] = SUB41(fVar27,0);
      auVar79[9] = uVar45;
      auVar79[10] = uVar47;
      auVar79[0xb] = uVar49;
      auVar79[0xc] = SUB41(fVar35,0);
      auVar79[0xd] = uVar51;
      auVar79[0xe] = uVar53;
      auVar79[0xf] = uVar55;
      auVar70 = NEON_ext(auVar70,auVar79,8,1);
      fVar34 = SQRT(auVar70._0_4_ + fVar34 + auVar70._4_4_ + 0.0);
      if (fVar34 == 0.0) {
LAB_0135f0dc:
        bVar23 = false;
      }
      else {
        fStack_78 = (float)uStack_48;
        fStack_74 = (float)((ulong)uStack_48 >> 0x20);
        local_50 = local_50 - local_70;
        fStack_78 = fStack_78 - fStack_68;
        fStack_74 = fStack_74 - fStack_64;
        auVar37._0_4_ = local_50 * local_50;
        auVar37._4_4_ = 0;
        auVar37._8_4_ = fStack_78 * fStack_78;
        auVar37._12_4_ = fStack_74 * fStack_74;
        auVar70 = NEON_ext(auVar37,auVar37,8,1);
        fVar35 = auVar70._0_4_ + auVar37._0_4_;
        fVar40 = auVar70._4_4_ + 0.0;
        fVar27 = fVar35 + fVar40;
        fVar35 = fVar35 + fVar40;
        auVar74._8_8_ = CONCAT44(fVar35,fVar27);
        auVar74._0_8_ = CONCAT44(fVar35,fVar27);
        auVar70 = NEON_frsqrte(auVar74,4);
        auVar78._0_4_ = auVar70._0_4_ * fVar27;
        auVar78._4_4_ = auVar70._4_4_ * fVar35;
        auVar78._8_4_ = auVar70._8_4_ * fVar27;
        auVar78._12_4_ = auVar70._12_4_ * fVar35;
        auVar79 = NEON_frsqrts(auVar70,auVar78,4);
        auVar38._0_4_ = auVar70._0_4_ * auVar79._0_4_;
        auVar38._4_4_ = auVar70._4_4_ * auVar79._4_4_;
        auVar38._8_4_ = auVar70._8_4_ * auVar79._8_4_;
        auVar38._12_4_ = auVar70._12_4_ * auVar79._12_4_;
        auVar80._0_4_ = fVar27 * auVar38._0_4_;
        auVar80._4_4_ = fVar35 * auVar38._4_4_;
        auVar80._8_4_ = fVar27 * auVar38._8_4_;
        auVar80._12_4_ = fVar35 * auVar38._12_4_;
        iVar24 = -(uint)(fVar27 == 0.0);
        iVar75 = -(uint)(fVar35 == 0.0);
        iVar76 = -(uint)(fVar27 == 0.0);
        iVar77 = -(uint)(fVar35 == 0.0);
        auVar70 = NEON_frsqrts(auVar38,auVar80,4);
        local_50 = local_50 * auVar38._0_4_ * auVar70._0_4_;
        fVar27 = auVar38._4_4_ * auVar70._4_4_ * 0.0;
        fStack_78 = fStack_78 * auVar38._8_4_ * auVar70._8_4_;
        fStack_74 = fStack_74 * auVar38._12_4_ * auVar70._12_4_;
        fVar34 = 1.0 / fVar34;
        auVar70 = *(undefined1 (*) [16])(local_40 + 0xa0);
        fVar30 = (float)CONCAT13((byte)((uint)local_50 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                                 CONCAT12((byte)((uint)local_50 >> 0x10) &
                                          ~(byte)((uint)iVar24 >> 0x10),
                                          CONCAT11((byte)((uint)local_50 >> 8) &
                                                   ~(byte)((uint)iVar24 >> 8),
                                                   SUB41(local_50,0) & ~(byte)iVar24)));
        auVar36._0_8_ =
             CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                      CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                               CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                        CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,fVar30))));
        auVar36[8] = SUB41(fStack_78,0) & ~(byte)iVar76;
        auVar36[9] = (byte)((uint)fStack_78 >> 8) & ~(byte)((uint)iVar76 >> 8);
        auVar36[10] = (byte)((uint)fStack_78 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
        auVar36[0xb] = (byte)((uint)fStack_78 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
        auVar39[0xc] = SUB41(fStack_74,0) & ~(byte)iVar77;
        auVar39._0_12_ = auVar36;
        auVar39[0xd] = (byte)((uint)fStack_74 >> 8) & ~(byte)((uint)iVar77 >> 8);
        auVar39[0xe] = (byte)((uint)fStack_74 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
        auVar39[0xf] = (byte)((uint)fStack_74 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
        uVar84 = (undefined4)_UNK_01d49dc8;
        uVar86 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
        fVar31 = auVar70._0_4_;
        fVar35 = fVar31 * (float)_DAT_01d4ae80;
        fVar72 = auVar70._4_4_;
        fVar40 = fVar72 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
        uVar45 = SUB41(fVar40,0);
        uVar47 = (undefined1)((uint)fVar40 >> 8);
        uVar49 = (undefined1)((uint)fVar40 >> 0x10);
        uVar51 = (undefined1)((uint)fVar40 >> 0x18);
        fVar18 = auVar70._8_4_ * (float)_UNK_01d4ae88;
        uVar53 = SUB41(fVar18,0);
        uVar55 = (undefined1)((uint)fVar18 >> 8);
        uVar57 = (undefined1)((uint)fVar18 >> 0x10);
        uVar59 = (undefined1)((uint)fVar18 >> 0x18);
        fVar28 = auVar70._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
        uVar61 = SUB41(fVar28,0);
        uVar63 = (undefined1)((uint)fVar28 >> 8);
        uVar65 = (undefined1)((uint)fVar28 >> 0x10);
        uVar67 = (undefined1)((uint)fVar28 >> 0x18);
        auVar19._8_4_ = uVar84;
        auVar19._0_8_ = _DAT_01d49dc0;
        auVar19._12_4_ = uVar86;
        uVar11 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd4f90);
        auVar12[4] = uVar45;
        auVar12._0_4_ = fVar35;
        auVar12[5] = uVar47;
        auVar12[6] = uVar49;
        auVar12[7] = uVar51;
        auVar12[8] = uVar53;
        auVar12[9] = uVar55;
        auVar12[10] = uVar57;
        auVar12[0xb] = uVar59;
        auVar12[0xc] = uVar61;
        auVar12[0xd] = uVar63;
        auVar12[0xe] = uVar65;
        auVar12[0xf] = uVar67;
        uVar90 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
        auVar20._8_4_ = uVar84;
        auVar20._0_8_ = _DAT_01d49dc0;
        auVar20._12_4_ = uVar86;
        uVar88 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
        auVar21._8_4_ = uVar84;
        auVar21._0_8_ = _DAT_01d49dc0;
        auVar21._12_4_ = uVar86;
        uVar73 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
        fVar82 = (float)((ulong)uVar73 >> 0x20);
        auVar13[4] = uVar45;
        auVar13._0_4_ = fVar35;
        auVar13[5] = uVar47;
        auVar13[6] = uVar49;
        auVar13[7] = uVar51;
        auVar13[8] = uVar53;
        auVar13[9] = uVar55;
        auVar13[10] = uVar57;
        auVar13[0xb] = uVar59;
        auVar13[0xc] = uVar61;
        auVar13[0xd] = uVar63;
        auVar13[0xe] = uVar65;
        auVar13[0xf] = uVar67;
        uVar92 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
        auVar22[4] = uVar45;
        auVar22._0_4_ = fVar35;
        auVar22[5] = uVar47;
        auVar22[6] = uVar49;
        auVar22[7] = uVar51;
        fVar85 = (float)_UNK_01d4ae98;
        fVar87 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
        fVar81 = (float)_DAT_01d4ae90;
        fVar83 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
        auVar22[0xc] = uVar45;
        auVar22._8_4_ = fVar35;
        auVar22[0xd] = uVar47;
        auVar22[0xe] = uVar49;
        auVar22[0xf] = uVar51;
        uVar93 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50b0);
        fVar89 = (float)((ulong)uVar88 >> 0x20);
        auVar14[4] = uVar45;
        auVar14._0_4_ = fVar35;
        auVar14[5] = uVar47;
        auVar14[6] = uVar49;
        auVar14[7] = uVar51;
        auVar14[8] = uVar53;
        auVar14[9] = uVar55;
        auVar14[10] = uVar57;
        auVar14[0xb] = uVar59;
        auVar14[0xc] = uVar61;
        auVar14[0xd] = uVar63;
        auVar14[0xe] = uVar65;
        auVar14[0xf] = uVar67;
        uVar91 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
        fVar27 = (float)((ulong)uVar11 >> 0x20);
        auVar15[4] = uVar45;
        auVar15._0_4_ = fVar35;
        auVar15[5] = uVar47;
        auVar15[6] = uVar49;
        auVar15[7] = uVar51;
        auVar15[8] = uVar53;
        auVar15[9] = uVar55;
        auVar15[10] = uVar57;
        auVar15[0xb] = uVar59;
        auVar15[0xc] = uVar61;
        auVar15[0xd] = uVar63;
        auVar15[0xe] = uVar65;
        auVar15[0xf] = uVar67;
        uVar94 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
        auVar16[4] = uVar45;
        auVar16._0_4_ = fVar35;
        auVar16[5] = uVar47;
        auVar16[6] = uVar49;
        auVar16[7] = uVar51;
        auVar16[8] = uVar53;
        auVar16[9] = uVar55;
        auVar16[10] = uVar57;
        auVar16[0xb] = uVar59;
        auVar16[0xc] = uVar61;
        auVar16[0xd] = uVar63;
        auVar16[0xe] = uVar65;
        auVar16[0xf] = uVar67;
        uVar69 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
        uVar17 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd4f90);
        fVar35 = (fVar35 * (float)uVar11 + fVar81 * (float)uVar90 * 0.0 +
                 fVar81 * (float)uVar73 * (float)uVar91) - (float)uVar88 * (float)uVar94;
        fVar40 = (fVar40 * fVar27 + fVar83 * (float)((ulong)uVar90 >> 0x20) * 0.0 +
                 fVar83 * fVar82 * (float)((ulong)uVar91 >> 0x20)) -
                 fVar89 * (float)((ulong)uVar94 >> 0x20);
        uVar45 = SUB41(fVar40,0);
        uVar47 = (undefined1)((uint)fVar40 >> 8);
        uVar49 = (undefined1)((uint)fVar40 >> 0x10);
        uVar51 = (undefined1)((uint)fVar40 >> 0x18);
        fVar18 = (fVar18 * (float)uVar11 + fVar85 * (float)uVar88 * (float)uVar92 +
                 fVar85 * (float)uVar93 * 0.0) - (float)uVar73 * (float)uVar69;
        uVar53 = SUB41(fVar18,0);
        uVar55 = (undefined1)((uint)fVar18 >> 8);
        uVar57 = (undefined1)((uint)fVar18 >> 0x10);
        uVar59 = (undefined1)((uint)fVar18 >> 0x18);
        fVar27 = (fVar28 * fVar27 + fVar87 * fVar89 * (float)((ulong)uVar92 >> 0x20) +
                 fVar87 * (float)((ulong)uVar93 >> 0x20) * 0.0) -
                 fVar82 * (float)((ulong)uVar69 >> 0x20);
        uVar61 = SUB41(fVar27,0);
        uVar63 = (undefined1)((uint)fVar27 >> 8);
        uVar65 = (undefined1)((uint)fVar27 >> 0x10);
        uVar67 = (undefined1)((uint)fVar27 >> 0x18);
        uVar91 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd50f8);
        auVar3[4] = uVar45;
        auVar3._0_4_ = fVar35;
        auVar3[5] = uVar47;
        auVar3[6] = uVar49;
        auVar3[7] = uVar51;
        auVar3[8] = uVar53;
        auVar3[9] = uVar55;
        auVar3[10] = uVar57;
        auVar3[0xb] = uVar59;
        auVar3[0xc] = uVar61;
        auVar3[0xd] = uVar63;
        auVar3[0xe] = uVar65;
        auVar3[0xf] = uVar67;
        uVar90 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
        auVar4[4] = uVar45;
        auVar4._0_4_ = fVar35;
        auVar4[5] = uVar47;
        auVar4[6] = uVar49;
        auVar4[7] = uVar51;
        auVar4[8] = uVar53;
        auVar4[9] = uVar55;
        auVar4[10] = uVar57;
        auVar4[0xb] = uVar59;
        auVar4[0xc] = uVar61;
        auVar4[0xd] = uVar63;
        auVar4[0xe] = uVar65;
        auVar4[0xf] = uVar67;
        uVar93 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5120);
        fVar89 = (float)((ulong)uVar91 >> 0x20);
        uVar92 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd5418);
        fVar28 = (float)((ulong)uVar17 >> 0x20);
        auVar5[4] = uVar45;
        auVar5._0_4_ = fVar35;
        auVar5[5] = uVar47;
        auVar5[6] = uVar49;
        auVar5[7] = uVar51;
        auVar5[8] = uVar53;
        auVar5[9] = uVar55;
        auVar5[10] = uVar57;
        auVar5[0xb] = uVar59;
        auVar5[0xc] = uVar61;
        auVar5[0xd] = uVar63;
        auVar5[0xe] = uVar65;
        auVar5[0xf] = uVar67;
        uVar73 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
        auVar6[4] = uVar45;
        auVar6._0_4_ = fVar35;
        auVar6[5] = uVar47;
        auVar6[6] = uVar49;
        auVar6[7] = uVar51;
        auVar6[8] = uVar53;
        auVar6[9] = uVar55;
        auVar6[10] = uVar57;
        auVar6[0xb] = uVar59;
        auVar6[0xc] = uVar61;
        auVar6[0xd] = uVar63;
        auVar6[0xe] = uVar65;
        auVar6[0xf] = uVar67;
        uVar69 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
        auVar7[4] = uVar45;
        auVar7._0_4_ = fVar35;
        auVar7[5] = uVar47;
        auVar7[6] = uVar49;
        auVar7[7] = uVar51;
        auVar7[8] = uVar53;
        auVar7[9] = uVar55;
        auVar7[10] = uVar57;
        auVar7[0xb] = uVar59;
        auVar7[0xc] = uVar61;
        auVar7[0xd] = uVar63;
        auVar7[0xe] = uVar65;
        auVar7[0xf] = uVar67;
        uVar88 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5270);
        auVar8[4] = uVar45;
        auVar8._0_4_ = fVar35;
        auVar8[5] = uVar47;
        auVar8[6] = uVar49;
        auVar8[7] = uVar51;
        auVar8[8] = SUB41(fVar35,0);
        auVar8[9] = (char)((uint)fVar35 >> 8);
        auVar8[10] = (char)((uint)fVar35 >> 0x10);
        auVar8[0xb] = (char)((uint)fVar35 >> 0x18);
        auVar8[0xc] = uVar45;
        auVar8[0xd] = uVar47;
        auVar8[0xe] = uVar49;
        auVar8[0xf] = uVar51;
        uVar11 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50b0);
        fVar82 = (float)((ulong)uVar92 >> 0x20);
        fVar35 = ((float)uVar17 * fVar35 + fVar81 * fVar31 * (float)uVar90 +
                 fVar81 * (float)uVar92 * (float)uVar69) - (float)uVar91 * (float)uVar73;
        fVar40 = (fVar28 * fVar40 + fVar83 * fVar72 * (float)((ulong)uVar90 >> 0x20) +
                 fVar83 * fVar82 * (float)((ulong)uVar69 >> 0x20)) -
                 fVar89 * (float)((ulong)uVar73 >> 0x20);
        fVar18 = ((float)uVar17 * fVar18 + fVar85 * (float)uVar91 * (float)uVar93 +
                 fVar85 * fVar31 * (float)uVar11) - (float)uVar92 * (float)uVar88;
        fVar27 = (fVar28 * fVar27 + fVar87 * fVar89 * (float)((ulong)uVar93 >> 0x20) +
                 fVar87 * fVar72 * (float)((ulong)uVar11 >> 0x20)) -
                 fVar82 * (float)((ulong)uVar88 >> 0x20);
        bVar41 = SUB41(fVar35,0) & (byte)DAT_01d4ab50;
        bVar42 = (byte)((uint)fVar35 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
        bVar43 = (byte)((uint)fVar35 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
        bVar44 = (byte)((uint)fVar35 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
        bVar46 = SUB41(fVar40,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
        bVar48 = (byte)((uint)fVar40 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
        bVar50 = (byte)((uint)fVar40 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
        bVar52 = (byte)((uint)fVar40 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
        bVar54 = SUB41(fVar18,0) & (byte)DAT_01d4ab58;
        bVar56 = (byte)((uint)fVar18 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
        bVar58 = (byte)((uint)fVar18 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
        bVar60 = (byte)((uint)fVar18 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
        bVar62 = SUB41(fVar27,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
        bVar64 = (byte)((uint)fVar27 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
        bVar66 = (byte)((uint)fVar27 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
        bVar68 = (byte)((uint)fVar27 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
        auVar71._0_4_ =
             fVar29 * fVar34 * (float)CONCAT13(bVar44,CONCAT12(bVar43,CONCAT11(bVar42,bVar41)));
        auVar71._4_4_ =
             fVar34 * 0.0 * (float)CONCAT13(bVar52,CONCAT12(bVar50,CONCAT11(bVar48,bVar46)));
        auVar71._8_4_ =
             fVar32 * fVar34 * (float)CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(bVar56,bVar54)));
        auVar71._12_4_ =
             fVar33 * fVar34 * (float)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62)));
        fVar27 = fVar30 * (float)CONCAT13(bVar44,CONCAT12(bVar43,CONCAT11(bVar42,bVar41)));
        fVar31 = (float)((ulong)auVar36._0_8_ >> 0x20);
        fVar35 = fVar31 * (float)CONCAT13(bVar52,CONCAT12(bVar50,CONCAT11(bVar48,bVar46)));
        uVar45 = (undefined1)((uint)fVar35 >> 8);
        uVar47 = (undefined1)((uint)fVar35 >> 0x10);
        uVar49 = (undefined1)((uint)fVar35 >> 0x18);
        fVar40 = auVar36._8_4_ * (float)CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(bVar56,bVar54)));
        uVar51 = (undefined1)((uint)fVar40 >> 8);
        uVar53 = (undefined1)((uint)fVar40 >> 0x10);
        uVar55 = (undefined1)((uint)fVar40 >> 0x18);
        fVar18 = auVar39._12_4_ * (float)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62)));
        uVar57 = (undefined1)((uint)fVar18 >> 8);
        uVar59 = (undefined1)((uint)fVar18 >> 0x10);
        uVar61 = (undefined1)((uint)fVar18 >> 0x18);
        auVar70 = NEON_ext(auVar71,auVar71,8,1);
        fVar28 = auVar70._0_4_ + auVar71._0_4_ + auVar70._4_4_ + auVar71._4_4_;
        auVar9[4] = SUB41(fVar35,0);
        auVar9._0_4_ = fVar27;
        auVar9[5] = uVar45;
        auVar9[6] = uVar47;
        auVar9[7] = uVar49;
        auVar9[8] = SUB41(fVar40,0);
        auVar9[9] = uVar51;
        auVar9[10] = uVar53;
        auVar9[0xb] = uVar55;
        auVar9[0xc] = SUB41(fVar18,0);
        auVar9[0xd] = uVar57;
        auVar9[0xe] = uVar59;
        auVar9[0xf] = uVar61;
        auVar10[4] = SUB41(fVar35,0);
        auVar10._0_4_ = fVar27;
        auVar10[5] = uVar45;
        auVar10[6] = uVar47;
        auVar10[7] = uVar49;
        auVar10[8] = SUB41(fVar40,0);
        auVar10[9] = uVar51;
        auVar10[10] = uVar53;
        auVar10[0xb] = uVar55;
        auVar10[0xc] = SUB41(fVar18,0);
        auVar10[0xd] = uVar57;
        auVar10[0xe] = uVar59;
        auVar10[0xf] = uVar61;
        auVar70 = NEON_ext(auVar9,auVar10,8,1);
        fVar27 = auVar70._0_4_ + fVar27 + auVar70._4_4_ + fVar35;
        bVar23 = false;
        if ((fVar28 < DAT_01d4c6e0) && (bVar23 = false, !NAN(fVar27) && !NAN(fVar28))) {
          bVar23 = fVar27 < fVar28;
        }
        if (bVar23) goto LAB_0135f0dc;
        fVar30 = fVar29 * fVar34 * fVar30;
        fVar31 = fVar34 * 0.0 * fVar31;
        fVar27 = fVar32 * fVar34 * auVar36._8_4_;
        fVar34 = fVar33 * fVar34 * auVar39._12_4_;
        auVar1._4_4_ = fVar31;
        auVar1._0_4_ = fVar30;
        auVar1._8_4_ = fVar27;
        auVar1._12_4_ = fVar34;
        auVar2._4_4_ = fVar31;
        auVar2._0_4_ = fVar30;
        auVar2._8_4_ = fVar27;
        auVar2._12_4_ = fVar34;
        auVar70 = NEON_ext(auVar1,auVar2,8,1);
        fVar34 = cosf((*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
                      param_1);
        bVar23 = auVar70._0_4_ + fVar30 + auVar70._4_4_ + fVar31 < fVar34;
      }
      if ((char)local_60[0] != '\0') {
        local_60[0] = local_60[0] & 0xffffffffffffff00;
      }
      goto LAB_0135f0f4;
    }
  }
LAB_0135f0ec:
  bVar23 = false;
LAB_0135f0f4:
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return bVar23;
}


