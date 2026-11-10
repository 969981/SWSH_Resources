/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65470; name: FUN_00e65470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e65470(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar32;
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar42;
  float fVar41;
  float fVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fStack_bc;
  float fStack_b4;
  float fStack_9c;
  float fStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar30 = *(undefined8 *)(param_1 + 0x430);
  uVar40 = *(undefined8 *)(param_1 + 0x448);
  uVar53 = (undefined1)uVar40;
  uVar55 = (undefined1)((ulong)uVar40 >> 8);
  uVar52 = (undefined1)((ulong)uVar40 >> 0x10);
  uVar54 = (undefined1)((ulong)uVar40 >> 0x18);
  uVar56 = (undefined1)((ulong)uVar40 >> 0x20);
  uVar57 = (undefined1)((ulong)uVar40 >> 0x28);
  uVar58 = (undefined1)((ulong)uVar40 >> 0x30);
  uVar59 = (undefined1)((ulong)uVar40 >> 0x38);
  uVar40 = *(undefined8 *)(param_1 + 0x440);
  uVar44 = (undefined1)uVar40;
  uVar45 = (undefined1)((ulong)uVar40 >> 8);
  uVar46 = (undefined1)((ulong)uVar40 >> 0x10);
  uVar47 = (undefined1)((ulong)uVar40 >> 0x18);
  uVar48 = (undefined1)((ulong)uVar40 >> 0x20);
  uVar49 = (undefined1)((ulong)uVar40 >> 0x28);
  uVar50 = (undefined1)((ulong)uVar40 >> 0x30);
  uVar51 = (undefined1)((ulong)uVar40 >> 0x38);
  local_28 = *(undefined8 *)(param_1 + 0x468);
  local_40 = *(undefined8 *)(param_1 + 0x450);
  local_38 = *(undefined8 *)(param_1 + 0x458);
  local_30 = *(undefined8 *)(param_1 + 0x460);
  uVar40 = *(undefined8 *)(param_1 + 0x438);
  if (*(uint *)(param_1 + 0x468) != 0xffffffff) {
    fVar28 = *(float *)(param_1 + 0x46c) + *(float *)(param_1 + 0x470);
    *(float *)(param_1 + 0x470) = fVar28;
    local_44 = 0x3f800000;
    puVar1 = &local_44;
    if (fVar28 <= 1.0) {
      puVar1 = (undefined4 *)(param_1 + 0x470);
    }
    local_90 = 0;
    puVar2 = &local_90;
    if (0.0 <= fVar28) {
      puVar2 = puVar1;
    }
    uVar3 = *puVar2;
    *(undefined4 *)(param_1 + 0x470) = uVar3;
    fVar28 = (float)(**(code **)(PTR_PTR_02718e90 + (ulong)*(uint *)(param_1 + 0x468) * 8))(uVar3);
    if (1.0 <= fVar28) {
      uVar40 = *(undefined8 *)(param_1 + 0x438);
      uVar30 = *(undefined8 *)(param_1 + 0x430);
      local_40 = *(undefined8 *)(param_1 + 0x450);
      local_38 = *(undefined8 *)(param_1 + 0x458);
      uVar7 = *(undefined8 *)(param_1 + 0x448);
      uVar53 = (undefined1)uVar7;
      uVar55 = (undefined1)((ulong)uVar7 >> 8);
      uVar52 = (undefined1)((ulong)uVar7 >> 0x10);
      uVar54 = (undefined1)((ulong)uVar7 >> 0x18);
      uVar56 = (undefined1)((ulong)uVar7 >> 0x20);
      uVar57 = (undefined1)((ulong)uVar7 >> 0x28);
      uVar58 = (undefined1)((ulong)uVar7 >> 0x30);
      uVar59 = (undefined1)((ulong)uVar7 >> 0x38);
      uVar7 = *(undefined8 *)(param_1 + 0x440);
      uVar44 = (undefined1)uVar7;
      uVar45 = (undefined1)((ulong)uVar7 >> 8);
      uVar46 = (undefined1)((ulong)uVar7 >> 0x10);
      uVar47 = (undefined1)((ulong)uVar7 >> 0x18);
      uVar48 = (undefined1)((ulong)uVar7 >> 0x20);
      uVar49 = (undefined1)((ulong)uVar7 >> 0x28);
      uVar50 = (undefined1)((ulong)uVar7 >> 0x30);
      uVar51 = (undefined1)((ulong)uVar7 >> 0x38);
      local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_1 + 0x460));
      *(undefined4 *)(param_1 + 0x468) = 0xffffffff;
    }
    else {
      FUN_00e3dd70(&local_90,param_1 + 0x3f0,param_1 + 0x430);
      local_30 = CONCAT44(local_30._4_4_,local_60);
      uVar30 = CONCAT44(uStack_8c,local_90);
      uVar53 = (undefined1)uStack_78;
      uVar55 = (undefined1)((ulong)uStack_78 >> 8);
      uVar52 = (undefined1)((ulong)uStack_78 >> 0x10);
      uVar54 = (undefined1)((ulong)uStack_78 >> 0x18);
      uVar56 = (undefined1)((ulong)uStack_78 >> 0x20);
      uVar57 = (undefined1)((ulong)uStack_78 >> 0x28);
      uVar58 = (undefined1)((ulong)uStack_78 >> 0x30);
      uVar59 = (undefined1)((ulong)uStack_78 >> 0x38);
      uVar44 = (undefined1)uStack_80;
      uVar45 = (undefined1)((ulong)uStack_80 >> 8);
      uVar46 = (undefined1)((ulong)uStack_80 >> 0x10);
      uVar47 = (undefined1)((ulong)uStack_80 >> 0x18);
      uVar48 = (undefined1)((ulong)uStack_80 >> 0x20);
      uVar49 = (undefined1)((ulong)uStack_80 >> 0x28);
      uVar50 = (undefined1)((ulong)uStack_80 >> 0x30);
      uVar51 = (undefined1)((ulong)uStack_80 >> 0x38);
      local_40 = local_70;
      local_38 = local_68;
      uVar40 = uStack_88;
    }
  }
  fVar11 = (float)CONCAT13(uVar54,CONCAT12(uVar52,CONCAT11(uVar55,uVar53)));
  fVar28 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)));
  fVar32 = (float)((ulong)uVar30 >> 0x20);
  fVar29 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) - (float)uVar30;
  fVar31 = (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) - fVar32;
  fVar42 = (float)((ulong)uVar40 >> 0x20);
  fVar36 = (float)CONCAT13(uVar54,CONCAT12(uVar52,CONCAT11(uVar55,uVar53))) - (float)uVar40;
  fVar41 = (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56))) - fVar42;
  fVar27 = fVar29 * fVar29;
  fVar33 = fVar31 * fVar31;
  uVar44 = (undefined1)((uint)fVar33 >> 8);
  uVar45 = (undefined1)((uint)fVar33 >> 0x10);
  uVar46 = (undefined1)((uint)fVar33 >> 0x18);
  fVar26 = fVar36 * fVar36;
  uVar47 = (undefined1)((uint)fVar26 >> 8);
  uVar53 = (undefined1)((uint)fVar26 >> 0x10);
  uVar55 = (undefined1)((uint)fVar26 >> 0x18);
  fVar39 = fVar41 * fVar41;
  uVar52 = (undefined1)((uint)fVar39 >> 8);
  uVar54 = (undefined1)((uint)fVar39 >> 0x10);
  uVar60 = (undefined1)((uint)fVar39 >> 0x18);
  auVar62[4] = SUB41(fVar33,0);
  auVar62._0_4_ = fVar27;
  auVar62[5] = uVar44;
  auVar62[6] = uVar45;
  auVar62[7] = uVar46;
  auVar62[8] = SUB41(fVar26,0);
  auVar62[9] = uVar47;
  auVar62[10] = uVar53;
  auVar62[0xb] = uVar55;
  auVar62[0xc] = SUB41(fVar39,0);
  auVar62[0xd] = uVar52;
  auVar62[0xe] = uVar54;
  auVar62[0xf] = uVar60;
  auVar66[4] = SUB41(fVar33,0);
  auVar66._0_4_ = fVar27;
  auVar66[5] = uVar44;
  auVar66[6] = uVar45;
  auVar66[7] = uVar46;
  auVar66[8] = SUB41(fVar26,0);
  auVar66[9] = uVar47;
  auVar66[10] = uVar53;
  auVar66[0xb] = uVar55;
  auVar66[0xc] = SUB41(fVar39,0);
  auVar66[0xd] = uVar52;
  auVar66[0xe] = uVar54;
  auVar66[0xf] = uVar60;
  auVar62 = NEON_ext(auVar62,auVar66,8,1);
  fVar27 = auVar62._0_4_ + fVar27;
  fVar33 = auVar62._4_4_ + fVar33;
  fVar26 = fVar27 + fVar33;
  fVar27 = fVar27 + fVar33;
  uVar44 = SUB41(fVar27,0);
  uVar45 = (undefined1)((uint)fVar27 >> 8);
  uVar46 = (undefined1)((uint)fVar27 >> 0x10);
  uVar47 = (undefined1)((uint)fVar27 >> 0x18);
  auVar4[4] = uVar44;
  auVar4._0_4_ = fVar26;
  auVar4[5] = uVar45;
  auVar4[6] = uVar46;
  auVar4[7] = uVar47;
  auVar4[8] = SUB41(fVar26,0);
  auVar4[9] = (char)((uint)fVar26 >> 8);
  auVar4[10] = (char)((uint)fVar26 >> 0x10);
  auVar4[0xb] = (char)((uint)fVar26 >> 0x18);
  auVar4[0xc] = uVar44;
  auVar4[0xd] = uVar45;
  auVar4[0xe] = uVar46;
  auVar4[0xf] = uVar47;
  auVar62 = NEON_frsqrte(auVar4,4);
  auVar65._0_4_ = auVar62._0_4_ * fVar26;
  auVar65._4_4_ = auVar62._4_4_ * fVar27;
  auVar65._8_4_ = auVar62._8_4_ * fVar26;
  uVar5 = (undefined2)(CONCAT15(uVar45,CONCAT14(uVar44,fVar26)) >> 0x20);
  auVar65._12_4_ = auVar62._12_4_ * (float)CONCAT13(uVar47,CONCAT12(uVar46,uVar5));
  auVar66 = NEON_frsqrts(auVar62,auVar65,4);
  auVar63._0_4_ = auVar62._0_4_ * auVar66._0_4_;
  auVar63._4_4_ = auVar62._4_4_ * auVar66._4_4_;
  auVar63._8_4_ = auVar62._8_4_ * auVar66._8_4_;
  auVar63._12_4_ = auVar62._12_4_ * auVar66._12_4_;
  auVar67._0_4_ = fVar26 * auVar63._0_4_;
  auVar67._4_4_ = fVar27 * auVar63._4_4_;
  auVar67._8_4_ = fVar26 * auVar63._8_4_;
  auVar67._12_4_ = (float)CONCAT13(uVar47,CONCAT12(uVar46,uVar5)) * auVar63._12_4_;
  iVar6 = -(uint)(fVar26 == 0.0);
  iVar8 = -(uint)(fVar27 == 0.0);
  iVar9 = -(uint)(fVar26 == 0.0);
  iVar10 = -(uint)((float)CONCAT13(uVar47,CONCAT12(uVar46,uVar5)) == 0.0);
  auVar62 = NEON_frsqrts(auVar63,auVar67,4);
  fVar29 = fVar29 * auVar63._0_4_ * auVar62._0_4_;
  fVar31 = fVar31 * auVar63._4_4_ * auVar62._4_4_;
  fVar36 = fVar36 * auVar63._8_4_ * auVar62._8_4_;
  fVar41 = fVar41 * auVar63._12_4_ * auVar62._12_4_;
  bVar68 = SUB41(fVar29,0) & ~(byte)iVar6;
  bVar69 = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar6 >> 8);
  bVar70 = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
  bVar71 = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
  bVar72 = SUB41(fVar31,0) & ~(byte)iVar8;
  bVar73 = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar8 >> 8);
  bVar74 = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
  bVar75 = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
  bVar76 = SUB41(fVar36,0) & ~(byte)iVar9;
  bVar77 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar9 >> 8);
  bVar78 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
  bVar79 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  bVar80 = SUB41(fVar41,0) & ~(byte)iVar10;
  bVar81 = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar10 >> 8);
  bVar82 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
  bVar83 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
  uVar88 = CONCAT17(bVar83,CONCAT16(bVar82,CONCAT15(bVar81,CONCAT14(bVar80,CONCAT13(bVar79,CONCAT12(
                                                  bVar78,CONCAT11(bVar77,bVar76)))))));
  uVar18 = CONCAT17(bVar75,CONCAT16(bVar74,CONCAT15(bVar73,CONCAT14(bVar72,CONCAT13(bVar71,CONCAT12(
                                                  bVar70,CONCAT11(bVar69,bVar68)))))));
  auVar12[1] = bVar69;
  auVar12[0] = bVar68;
  auVar12[2] = bVar70;
  auVar12[3] = bVar71;
  auVar12[4] = bVar72;
  auVar12[5] = bVar73;
  auVar12[6] = bVar74;
  auVar12[7] = bVar75;
  auVar12[8] = bVar76;
  auVar12[9] = bVar77;
  auVar12[10] = bVar78;
  auVar12[0xb] = bVar79;
  auVar12[0xc] = bVar80;
  auVar12[0xd] = bVar81;
  auVar12[0xe] = bVar82;
  auVar12[0xf] = bVar83;
  uVar7 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
  fVar39 = (float)CONCAT13(bVar79,CONCAT12(bVar78,CONCAT11(bVar77,bVar76)));
  fStack_94 = (float)(CONCAT17(bVar83,CONCAT16(bVar82,CONCAT15(bVar81,CONCAT14(bVar80,fVar39)))) >>
                     0x20);
  fVar26 = (float)CONCAT13(bVar71,CONCAT12(bVar70,CONCAT11(bVar69,bVar68)));
  fStack_9c = (float)(CONCAT17(bVar75,CONCAT16(bVar74,CONCAT15(bVar73,CONCAT14(bVar72,fVar26)))) >>
                     0x20);
  auVar13[1] = bVar69;
  auVar13[0] = bVar68;
  auVar13[2] = bVar70;
  auVar13[3] = bVar71;
  auVar13[4] = bVar72;
  auVar13[5] = bVar73;
  auVar13[6] = bVar74;
  auVar13[7] = bVar75;
  auVar13[8] = bVar76;
  auVar13[9] = bVar77;
  auVar13[10] = bVar78;
  auVar13[0xb] = bVar79;
  auVar13[0xc] = bVar80;
  auVar13[0xd] = bVar81;
  auVar13[0xe] = bVar82;
  auVar13[0xf] = bVar83;
  uVar64 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5188);
  uVar44 = (undefined1)_UNK_01d4b588;
  uVar45 = (undefined1)((ulong)_UNK_01d4b588 >> 8);
  uVar46 = (undefined1)((ulong)_UNK_01d4b588 >> 0x10);
  uVar47 = (undefined1)((ulong)_UNK_01d4b588 >> 0x18);
  uVar53 = (undefined1)((ulong)_UNK_01d4b588 >> 0x20);
  uVar55 = (undefined1)((ulong)_UNK_01d4b588 >> 0x28);
  uVar52 = (undefined1)((ulong)_UNK_01d4b588 >> 0x30);
  uVar54 = (undefined1)((ulong)_UNK_01d4b588 >> 0x38);
  auVar14[8] = uVar44;
  auVar14._0_8_ = _DAT_01d4b580;
  auVar14[9] = uVar45;
  auVar14[10] = uVar46;
  auVar14[0xb] = uVar47;
  auVar14[0xc] = uVar53;
  auVar14[0xd] = uVar55;
  auVar14[0xe] = uVar52;
  auVar14[0xf] = uVar54;
  uVar84 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
  auVar15[8] = uVar44;
  auVar15._0_8_ = _DAT_01d4b580;
  auVar15[9] = uVar45;
  auVar15[10] = uVar46;
  auVar15[0xb] = uVar47;
  auVar15[0xc] = uVar53;
  auVar15[0xd] = uVar55;
  auVar15[0xe] = uVar52;
  auVar15[0xf] = uVar54;
  uVar86 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5158);
  auVar19._8_8_ = uVar88;
  auVar19._0_8_ = uVar18;
  uVar87 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5158);
  fVar27 = (float)((ulong)uVar7 >> 0x20);
  fVar33 = (float)((ulong)uVar64 >> 0x20);
  auVar20._8_8_ = uVar88;
  auVar20._0_8_ = uVar18;
  uVar85 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
  auVar16[8] = uVar44;
  auVar16._0_8_ = _DAT_01d4b580;
  auVar16[9] = uVar45;
  auVar16[10] = uVar46;
  auVar16[0xb] = uVar47;
  auVar16[0xc] = uVar53;
  auVar16[0xd] = uVar55;
  auVar16[0xe] = uVar52;
  auVar16[0xf] = uVar54;
  uVar88 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
  auVar17[8] = uVar44;
  auVar17._0_8_ = _DAT_01d4b580;
  auVar17[9] = uVar45;
  auVar17[10] = uVar46;
  auVar17[0xb] = uVar47;
  auVar17[0xc] = uVar53;
  auVar17[0xd] = uVar55;
  auVar17[0xe] = uVar52;
  auVar17[0xf] = uVar54;
  uVar18 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5188);
  fVar31 = (float)((ulong)uVar85 >> 0x20);
  fVar36 = (float)((ulong)uVar87 >> 0x20);
  fVar89 = (float)uVar7 * (float)uVar84 - (float)uVar85 * (float)uVar88;
  fVar90 = fVar27 * (float)((ulong)uVar84 >> 0x20) - fVar31 * (float)((ulong)uVar88 >> 0x20);
  fVar91 = (float)uVar64 * (float)uVar86 - (float)uVar87 * (float)uVar18;
  fVar92 = fVar33 * (float)((ulong)uVar86 >> 0x20) - fVar36 * (float)((ulong)uVar18 >> 0x20);
  auVar21._4_4_ = fVar90;
  auVar21._0_4_ = fVar89;
  auVar21._8_4_ = fVar91;
  auVar21._12_4_ = fVar92;
  uVar18 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
  auVar22._4_4_ = fVar90;
  auVar22._0_4_ = fVar89;
  auVar22._8_4_ = fVar91;
  auVar22._12_4_ = fVar92;
  uVar84 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5188);
  auVar23._4_4_ = fVar90;
  auVar23._0_4_ = fVar89;
  auVar23._8_4_ = fVar91;
  auVar23._12_4_ = fVar92;
  uVar86 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5158);
  auVar24._4_4_ = fVar90;
  auVar24._0_4_ = fVar89;
  auVar24._8_4_ = fVar91;
  auVar24._12_4_ = fVar92;
  uVar88 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
  fVar29 = (float)uVar85 * (float)uVar18 - (float)uVar88 * (float)uVar7;
  fVar27 = fVar31 * (float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar88 >> 0x20) * fVar27;
  fVar31 = (float)uVar87 * (float)uVar84 - (float)uVar86 * (float)uVar64;
  fVar33 = fVar36 * (float)((ulong)uVar84 >> 0x20) - (float)((ulong)uVar86 >> 0x20) * fVar33;
  auVar25 = FUN_00e65d70(param_1);
  fVar41 = auVar25._8_4_;
  fStack_bc = (float)(CONCAT17((char)((uint)fVar27 >> 0x18),
                               CONCAT16((char)((uint)fVar27 >> 0x10),
                                        CONCAT15((char)((uint)fVar27 >> 8),
                                                 CONCAT14(SUB41(fVar27,0),fVar29)))) >> 0x20);
  fStack_b4 = (float)(CONCAT17((char)((uint)fVar33 >> 0x18),
                               CONCAT16((char)((uint)fVar33 >> 0x10),
                                        CONCAT15((char)((uint)fVar33 >> 8),
                                                 CONCAT14(SUB41(fVar33,0),fVar31)))) >> 0x20);
  fVar27 = auVar25._0_4_;
  fVar33 = auVar25._4_4_;
  fVar36 = fVar26 * fVar41 + fVar89 * fVar27 + fVar29 * fVar33;
  fVar34 = fStack_9c * fVar41 + fVar90 * fVar27 + fStack_bc * fVar33;
  fVar37 = fVar39 * fVar41 + fVar91 * fVar27 + fVar31 * fVar33;
  fVar43 = fStack_94 * fVar41 + fVar92 * fVar27 + fStack_b4 * fVar33;
  fVar27 = fVar28 + fVar36;
  fVar28 = (float)(CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar28)))) >>
                  0x20) + fVar34;
  fVar33 = fVar11 + fVar37;
  fVar11 = (float)(CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14(uVar56,fVar11)))) >>
                  0x20) + fVar43;
  auVar25 = FUN_00e65f30(param_1);
  fVar38 = auVar25._8_4_;
  fVar41 = auVar25._0_4_;
  fVar35 = auVar25._4_4_;
  fVar61 = *(float *)(param_1 + 0x584);
  fVar26 = fVar26 * fVar38 + fVar89 * fVar41 + fVar29 * fVar35;
  fVar29 = fStack_9c * fVar38 + fVar90 * fVar41 + fStack_bc * fVar35;
  fVar39 = fVar39 * fVar38 + fVar91 * fVar41 + fVar31 * fVar35;
  fVar31 = fStack_94 * fVar38 + fVar92 * fVar41 + fStack_b4 * fVar35;
  fVar28 = (float)(CONCAT17((char)((uint)fVar28 >> 0x18),
                            CONCAT16((char)((uint)fVar28 >> 0x10),
                                     CONCAT15((char)((uint)fVar28 >> 8),
                                              CONCAT14(SUB41(fVar28,0),fVar27)))) >> 0x20) + fVar29;
  fVar11 = (float)(CONCAT17((char)((uint)fVar11 >> 0x18),
                            CONCAT16((char)((uint)fVar11 >> 0x10),
                                     CONCAT15((char)((uint)fVar11 >> 8),
                                              CONCAT14(SUB41(fVar11,0),fVar33)))) >> 0x20) + fVar31;
  *(ulong *)(param_1 + 0x3b8) =
       CONCAT44(fVar42 + fVar43 + fVar31 * fVar61,(float)uVar40 + fVar37 + fVar39 * fVar61);
  *(ulong *)(param_1 + 0x3b0) =
       CONCAT44(fVar32 + fVar34 + fVar29 * fVar61,(float)uVar30 + fVar36 + fVar26 * fVar61);
  *(ulong *)(param_1 + 0x3c8) =
       CONCAT17((char)((uint)fVar11 >> 0x18),
                CONCAT16((char)((uint)fVar11 >> 0x10),
                         CONCAT15((char)((uint)fVar11 >> 8),
                                  CONCAT14(SUB41(fVar11,0),fVar33 + fVar39))));
  *(ulong *)(param_1 + 0x3c0) =
       CONCAT17((char)((uint)fVar28 >> 0x18),
                CONCAT16((char)((uint)fVar28 >> 0x10),
                         CONCAT15((char)((uint)fVar28 >> 8),
                                  CONCAT14(SUB41(fVar28,0),fVar27 + fVar26))));
  *(undefined8 *)(param_1 + 0x3d0) = local_40;
  *(undefined8 *)(param_1 + 0x3d8) = local_38;
  *(undefined4 *)(param_1 + 0x3e0) = (undefined4)local_30;
  return;
}


