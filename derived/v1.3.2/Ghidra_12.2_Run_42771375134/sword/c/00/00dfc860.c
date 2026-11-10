/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfc860; name: FUN_00dfc860
 */


bool FUN_00dfc860(undefined8 param_1,ulong *param_2,ulong *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  bool bVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  undefined4 uVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar33 = FUN_00dd5d60(param_2,param_3,4);
  if ((uVar33 & 1) == 0) {
    uVar8 = param_3[1];
    uVar33 = *param_3;
    uVar15 = param_3[2];
    uVar16 = param_3[3];
    local_68 = (ulong)(uint)uVar16;
    local_70 = (ulong)(uint)uVar15;
    uVar17 = param_3[4];
    uVar18 = param_3[5];
    uVar9 = param_3[7];
    uVar7 = param_3[6];
    uStack_48 = param_2[1];
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    local_80 = 0.0;
    fStack_7c = 0.0;
    local_50 = *param_2 & 0xffffffff;
    local_60 = uVar33 & 0xffffffff;
    local_58 = uVar8 & 0xffffffff;
    FUN_00dd5de0(&local_50,&local_60,&local_70,&local_80);
    fVar29 = fStack_74;
    fVar26 = fStack_78;
    fVar23 = fStack_7c;
    fVar20 = local_80;
    fVar19 = DAT_01d4c270;
    local_80 = (float)local_50 - local_80;
    fStack_7c = (float)(local_50 >> 0x20) - fStack_7c;
    fStack_78 = (float)uStack_48 - fStack_78;
    fStack_74 = (float)(uStack_48 >> 0x20) - fStack_74;
    local_80 = local_80 * local_80;
    fStack_7c = fStack_7c * fStack_7c;
    fStack_78 = fStack_78 * fStack_78;
    fStack_74 = fStack_74 * fStack_74;
    auVar42._4_4_ = fStack_7c;
    auVar42._0_4_ = local_80;
    auVar42._8_4_ = fStack_78;
    auVar42._12_4_ = fStack_74;
    auVar1._4_4_ = fStack_7c;
    auVar1._0_4_ = local_80;
    auVar1._8_4_ = fStack_78;
    auVar1._12_4_ = fStack_74;
    auVar42 = NEON_ext(auVar42,auVar1,8,1);
    fVar34 = auVar42._0_4_ + local_80 + auVar42._4_4_ + fStack_7c;
    fVar38 = (float)NEON_fminnm(fVar34,DAT_01d4c270);
    bVar32 = fVar34 <= DAT_01d4c270;
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    local_80 = 0.0;
    fStack_7c = 0.0;
    local_70 = (ulong)(uint)uVar17;
    local_68 = (ulong)(uint)uVar18;
    local_60 = (ulong)(uint)uVar15;
    local_58 = (ulong)(uint)uVar16;
    FUN_00dd5de0(&local_50,&local_60,&local_70,&local_80);
    fVar30 = fStack_74;
    fVar27 = fStack_78;
    fVar24 = fStack_7c;
    fVar21 = local_80;
    local_80 = (float)local_50 - local_80;
    fStack_7c = (float)(local_50 >> 0x20) - fStack_7c;
    fStack_78 = (float)uStack_48 - fStack_78;
    fStack_74 = (float)(uStack_48 >> 0x20) - fStack_74;
    local_80 = local_80 * local_80;
    fStack_7c = fStack_7c * fStack_7c;
    fStack_78 = fStack_78 * fStack_78;
    fStack_74 = fStack_74 * fStack_74;
    auVar2._4_4_ = fStack_7c;
    auVar2._0_4_ = local_80;
    auVar2._8_4_ = fStack_78;
    auVar2._12_4_ = fStack_74;
    auVar3._4_4_ = fStack_7c;
    auVar3._0_4_ = local_80;
    auVar3._8_4_ = fStack_78;
    auVar3._12_4_ = fStack_74;
    auVar42 = NEON_ext(auVar2,auVar3,8,1);
    fVar35 = auVar42._0_4_ + local_80 + auVar42._4_4_ + fStack_7c;
    fVar39 = fVar38;
    if (fVar35 <= fVar38) {
      fVar39 = fVar35;
    }
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    local_80 = 0.0;
    fStack_7c = 0.0;
    local_70 = uVar7 & 0xffffffff;
    local_68 = uVar9 & 0xffffffff;
    local_60 = (ulong)(uint)uVar17;
    local_58 = (ulong)(uint)uVar18;
    FUN_00dd5de0(&local_50,&local_60,&local_70,&local_80);
    fVar31 = fStack_74;
    fVar28 = fStack_78;
    fVar25 = fStack_7c;
    fVar22 = local_80;
    local_80 = (float)local_50 - local_80;
    fStack_7c = (float)(local_50 >> 0x20) - fStack_7c;
    fStack_78 = (float)uStack_48 - fStack_78;
    fStack_74 = (float)(uStack_48 >> 0x20) - fStack_74;
    local_80 = local_80 * local_80;
    fStack_7c = fStack_7c * fStack_7c;
    fStack_78 = fStack_78 * fStack_78;
    fStack_74 = fStack_74 * fStack_74;
    auVar4._4_4_ = fStack_7c;
    auVar4._0_4_ = local_80;
    auVar4._8_4_ = fStack_78;
    auVar4._12_4_ = fStack_74;
    auVar5._4_4_ = fStack_7c;
    auVar5._0_4_ = local_80;
    auVar5._8_4_ = fStack_78;
    auVar5._12_4_ = fStack_74;
    auVar42 = NEON_ext(auVar4,auVar5,8,1);
    fVar36 = auVar42._0_4_ + local_80 + auVar42._4_4_ + fStack_7c;
    fVar40 = fVar39;
    if (fVar36 <= fVar39) {
      fVar40 = fVar36;
    }
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    local_80 = 0.0;
    fStack_7c = 0.0;
    local_70 = uVar33 & 0xffffffff;
    local_68 = uVar8 & 0xffffffff;
    local_60 = uVar7 & 0xffffffff;
    local_58 = uVar9 & 0xffffffff;
    FUN_00dd5de0(&local_50,&local_60,&local_70,&local_80);
    auVar45._4_4_ = fStack_7c;
    auVar45._0_4_ = local_80;
    auVar45._8_4_ = fStack_78;
    auVar6._4_4_ = fStack_7c;
    auVar6._0_4_ = local_80;
    auVar6._8_4_ = fStack_78;
    auVar43._0_4_ = ((float)local_50 - local_80) * ((float)local_50 - local_80);
    auVar43._4_4_ = (local_50._4_4_ - fStack_7c) * (local_50._4_4_ - fStack_7c);
    auVar43._8_4_ = ((float)uStack_48 - fStack_78) * ((float)uStack_48 - fStack_78);
    auVar43._12_4_ = (uStack_48._4_4_ - fStack_74) * (uStack_48._4_4_ - fStack_74);
    auVar42 = NEON_ext(auVar43,auVar43,8,1);
    fVar37 = auVar42._0_4_ + auVar43._0_4_ + auVar42._4_4_ + auVar43._4_4_;
    bVar32 = ((fVar36 <= fVar39 || fVar35 <= fVar38) || bVar32) || fVar37 <= fVar40;
    if ((param_4 != (undefined8 *)0x0) && (bVar32)) {
      iVar41 = -(uint)(fVar37 <= fVar40);
      iVar47 = -(uint)(fVar36 <= fVar39);
      auVar48._0_4_ =
           CONCAT13(~(byte)((uint)iVar47 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar47 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar47 >> 8),~(byte)iVar47)));
      iVar47 = -(uint)(fVar35 <= fVar38);
      auVar49._0_4_ =
           CONCAT13(~(byte)((uint)iVar47 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar47 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar47 >> 8),~(byte)iVar47)));
      iVar47 = -(uint)(fVar34 <= fVar19);
      bVar50 = (byte)iVar47;
      bVar51 = (byte)((uint)iVar47 >> 8);
      bVar52 = (byte)((uint)iVar47 >> 0x10);
      bVar53 = (byte)((uint)iVar47 >> 0x18);
      auVar49._4_4_ = auVar49._0_4_;
      auVar49._8_4_ = auVar49._0_4_;
      auVar49._12_4_ = auVar49._0_4_;
      uVar55 = (undefined1)((uint)fVar27 >> 8);
      uVar56 = (undefined1)((uint)fVar27 >> 0x10);
      uVar57 = (undefined1)((uint)fVar27 >> 0x18);
      uVar58 = (undefined1)((uint)fVar30 >> 8);
      uVar59 = (undefined1)((uint)fVar30 >> 0x10);
      uVar60 = (undefined1)((uint)fVar30 >> 0x18);
      uVar54 = (undefined1)((uint)fVar24 >> 0x18);
      auVar44._0_4_ =
           CONCAT13(~(byte)((uint)iVar41 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar41 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar41 >> 8),~(byte)iVar41)));
      auVar10[1] = (byte)((uint)fVar20 >> 8) & bVar51;
      auVar10[0] = SUB41(fVar20,0) & bVar50;
      auVar10[2] = (byte)((uint)fVar20 >> 0x10) & bVar52;
      auVar10[3] = (byte)((uint)fVar20 >> 0x18) & bVar53;
      auVar10._4_3_ = 0;
      auVar10[7] = (byte)((uint)fVar23 >> 0x18) & bVar53;
      auVar10[8] = SUB41(fVar26,0) & bVar50;
      auVar10[9] = (byte)((uint)fVar26 >> 8) & bVar51;
      auVar10[10] = (byte)((uint)fVar26 >> 0x10) & bVar52;
      auVar10[0xb] = (byte)((uint)fVar26 >> 0x18) & bVar53;
      auVar10[0xc] = SUB41(fVar29,0) & bVar50;
      auVar10[0xd] = (byte)((uint)fVar29 >> 8) & bVar51;
      auVar10[0xe] = (byte)((uint)fVar29 >> 0x10) & bVar52;
      auVar10[0xf] = (byte)((uint)fVar29 >> 0x18) & bVar53;
      auVar13._4_3_ = 0;
      auVar13._0_4_ = fVar21;
      auVar13[7] = uVar54;
      auVar13[8] = SUB41(fVar27,0);
      auVar13[9] = uVar55;
      auVar13[10] = uVar56;
      auVar13[0xb] = uVar57;
      auVar13[0xc] = SUB41(fVar30,0);
      auVar13[0xd] = uVar58;
      auVar13[0xe] = uVar59;
      auVar13[0xf] = uVar60;
      auVar14._4_3_ = 0;
      auVar14._0_4_ = fVar21;
      auVar14[7] = uVar54;
      auVar14[8] = SUB41(fVar27,0);
      auVar14[9] = uVar55;
      auVar14[10] = uVar56;
      auVar14[0xb] = uVar57;
      auVar14[0xc] = SUB41(fVar30,0);
      auVar14[0xd] = uVar58;
      auVar14[0xe] = uVar59;
      auVar14[0xf] = uVar60;
      uVar55 = (undefined1)((uint)fVar28 >> 8);
      uVar56 = (undefined1)((uint)fVar28 >> 0x10);
      uVar57 = (undefined1)((uint)fVar28 >> 0x18);
      uVar58 = (undefined1)((uint)fVar31 >> 8);
      uVar59 = (undefined1)((uint)fVar31 >> 0x10);
      uVar60 = (undefined1)((uint)fVar31 >> 0x18);
      uVar54 = (undefined1)((uint)fVar25 >> 0x18);
      auVar48._4_4_ = auVar48._0_4_;
      auVar48._8_4_ = auVar48._0_4_;
      auVar48._12_4_ = auVar48._0_4_;
      auVar11._4_3_ = 0;
      auVar11._0_4_ = fVar22;
      auVar11[7] = uVar54;
      auVar11[8] = SUB41(fVar28,0);
      auVar11[9] = uVar55;
      auVar11[10] = uVar56;
      auVar11[0xb] = uVar57;
      auVar11[0xc] = SUB41(fVar31,0);
      auVar11[0xd] = uVar58;
      auVar11[0xe] = uVar59;
      auVar11[0xf] = uVar60;
      auVar12._4_3_ = 0;
      auVar12._0_4_ = fVar22;
      auVar12[7] = uVar54;
      auVar12[8] = SUB41(fVar28,0);
      auVar12[9] = uVar55;
      auVar12[10] = uVar56;
      auVar12[0xb] = uVar57;
      auVar12[0xc] = SUB41(fVar31,0);
      auVar12[0xd] = uVar58;
      auVar12[0xe] = uVar59;
      auVar12[0xf] = uVar60;
      auVar44._4_4_ = auVar44._0_4_;
      auVar44._8_4_ = auVar44._0_4_;
      auVar44._12_4_ = auVar44._0_4_;
      auVar6._12_4_ = fStack_74;
      auVar45._12_4_ = fStack_74;
      auVar45 = auVar45 ^ (auVar6 ^ auVar12 ^ (auVar11 ^ auVar14 ^ (auVar13 ^ auVar10) & auVar49) &
                                              auVar48) & auVar44;
      uVar46 = *(undefined4 *)((long)param_2 + 4);
      param_4[1] = auVar45._8_8_;
      *param_4 = CONCAT44(uVar46,auVar45._0_4_);
    }
  }
  else {
    bVar32 = false;
  }
  return bVar32;
}


