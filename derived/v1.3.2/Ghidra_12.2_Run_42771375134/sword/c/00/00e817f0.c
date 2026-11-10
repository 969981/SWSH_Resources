/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e817f0; name: FUN_00e817f0
 */


/* WARNING: Removing unreachable block (ram,0x00e81a9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e817f0(long *param_1,long *param_2)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined1 auVar30 [12];
  undefined8 uVar29;
  undefined1 auVar31 [16];
  float fVar35;
  undefined1 auVar32 [16];
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  float fVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
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
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  long local_38;
  
  if ((((*param_1 != 0) && (*(int *)(*param_1 + 0x54) != 0)) && (*param_2 != 0)) &&
     (*(int *)(*param_2 + 0x54) != 0)) {
    FUN_00deff50(&local_38);
    auVar50 = *(undefined1 (*) [16])(local_38 + 0xb0);
    fStack_48 = auVar50._8_4_;
    fStack_44 = auVar50._12_4_;
    local_50 = auVar50._0_4_;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_00deff50(&local_38,param_2);
    uVar21 = *(undefined8 *)(local_38 + 0xb8);
    uVar15 = *(undefined8 *)(local_38 + 0xb0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    local_50 = (float)uVar15 - local_50;
    fStack_48 = (float)uVar21 - fStack_48;
    fStack_44 = (float)((ulong)uVar21 >> 0x20) - fStack_44;
    fVar46 = local_50 * local_50;
    auVar50._4_4_ = 0;
    auVar50._0_4_ = fVar46;
    auVar50._8_4_ = fStack_48 * fStack_48;
    auVar50._12_4_ = fStack_44 * fStack_44;
    auVar52._4_4_ = 0;
    auVar52._0_4_ = fVar46;
    auVar52._8_4_ = fStack_48 * fStack_48;
    auVar52._12_4_ = fStack_44 * fStack_44;
    auVar50 = NEON_ext(auVar50,auVar52,8,1);
    fVar46 = auVar50._0_4_ + fVar46;
    fVar47 = auVar50._4_4_ + 0.0;
    fVar28 = fVar46 + fVar47;
    fVar46 = fVar46 + fVar47;
    if (fVar28 != 0.0) {
      auVar11._4_4_ = fVar46;
      auVar11._0_4_ = fVar28;
      auVar11._8_4_ = fVar28;
      auVar11._12_4_ = fVar46;
      auVar50 = NEON_frsqrte(auVar11,4);
      auVar51._0_4_ = auVar50._0_4_ * fVar28;
      auVar51._4_4_ = auVar50._4_4_ * fVar46;
      auVar51._8_4_ = auVar50._8_4_ * fVar28;
      auVar51._12_4_ = auVar50._12_4_ * fVar46;
      auVar52 = NEON_frsqrts(auVar50,auVar51,4);
      auVar31._0_4_ = auVar50._0_4_ * auVar52._0_4_;
      auVar31._4_4_ = auVar50._4_4_ * auVar52._4_4_;
      auVar31._8_4_ = auVar50._8_4_ * auVar52._8_4_;
      auVar31._12_4_ = auVar50._12_4_ * auVar52._12_4_;
      auVar53._0_4_ = fVar28 * auVar31._0_4_;
      auVar53._4_4_ = fVar46 * auVar31._4_4_;
      auVar53._8_4_ = fVar28 * auVar31._8_4_;
      auVar53._12_4_ = fVar46 * auVar31._12_4_;
      auVar50 = NEON_frsqrts(auVar31,auVar53,4);
      local_50 = local_50 * auVar31._0_4_ * auVar50._0_4_;
      fVar35 = auVar31._4_4_ * auVar50._4_4_ * 0.0;
      fStack_48 = fStack_48 * auVar31._8_4_ * auVar50._8_4_;
      fStack_44 = fStack_44 * auVar31._12_4_ * auVar50._12_4_;
      iVar7 = -(uint)(fVar28 == 0.0);
      iVar8 = -(uint)(fVar46 == 0.0);
      iVar9 = -(uint)(fVar28 == 0.0);
      iVar10 = -(uint)(fVar46 == 0.0);
      fVar47 = (float)CONCAT13((byte)((uint)local_50 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                               CONCAT12((byte)((uint)local_50 >> 0x10) &
                                        ~(byte)((uint)iVar7 >> 0x10),
                                        CONCAT11((byte)((uint)local_50 >> 8) &
                                                 ~(byte)((uint)iVar7 >> 8),
                                                 SUB41(local_50,0) & ~(byte)iVar7)));
      auVar30._0_8_ =
           CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                    CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                             CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                      CONCAT14(SUB41(fVar35,0) & ~(byte)iVar8,fVar47))));
      auVar30[8] = SUB41(fStack_48,0) & ~(byte)iVar9;
      auVar30[9] = (byte)((uint)fStack_48 >> 8) & ~(byte)((uint)iVar9 >> 8);
      auVar30[10] = (byte)((uint)fStack_48 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
      auVar30[0xb] = (byte)((uint)fStack_48 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
      auVar32[0xc] = SUB41(fStack_44,0) & ~(byte)iVar10;
      auVar32._0_12_ = auVar30;
      auVar32[0xd] = (byte)((uint)fStack_44 >> 8) & ~(byte)((uint)iVar10 >> 8);
      auVar32[0xe] = (byte)((uint)fStack_44 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
      auVar32[0xf] = (byte)((uint)fStack_44 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
      fStack_48 = auVar30._8_4_;
      fStack_44 = auVar32._12_4_;
      fStack_4c = (float)((ulong)auVar30._0_8_ >> 0x20);
      FUN_00deff50(&local_38,param_1);
      uVar27 = DAT_01cd5418;
      uVar26 = DAT_01cd50f8;
      uVar59 = (undefined4)_UNK_01d49dc8;
      uVar60 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
      pVar1 = (unkbyte9 *)(local_38 + 0xa0);
      uVar15 = *(undefined8 *)(local_38 + 0xa8);
      uVar37 = (undefined1)((ulong)uVar15 >> 8);
      uVar38 = (undefined1)((ulong)uVar15 >> 0x10);
      uVar39 = (undefined1)((ulong)uVar15 >> 0x18);
      uVar40 = (undefined1)((ulong)uVar15 >> 0x20);
      uVar41 = (undefined1)((ulong)uVar15 >> 0x28);
      uVar42 = (undefined1)((ulong)uVar15 >> 0x30);
      uVar44 = (undefined1)((ulong)uVar15 >> 0x38);
      auVar12._8_4_ = uVar59;
      auVar12._0_8_ = _DAT_01d49dc0;
      auVar12._12_4_ = uVar60;
      uVar21 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50f8);
      fVar61 = (float)((ulong)uVar21 >> 0x20);
      fVar28 = (float)*(undefined8 *)pVar1;
      fVar35 = fVar28 * (float)_DAT_01d4ae80;
      fVar46 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
      fVar56 = fVar46 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
      auVar54._0_8_ = CONCAT44(fVar56,fVar35);
      auVar54._8_4_ = (float)uVar15 * (float)_UNK_01d4ae88;
      auVar54._12_4_ = (float)((ulong)uVar15 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
      auVar13._8_4_ = uVar59;
      auVar13._0_8_ = _DAT_01d49dc0;
      auVar13._12_4_ = uVar60;
      uVar29 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
      auVar14._8_4_ = uVar59;
      auVar14._0_8_ = _DAT_01d49dc0;
      auVar14._12_4_ = uVar60;
      uVar15 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
      fVar57 = (float)((ulong)uVar15 >> 0x20);
      uVar82 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd4f90);
      uVar84 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5120);
      uVar86 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5270);
      uVar85 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5418);
      fVar36 = (float)((ulong)uVar29 >> 0x20);
      uVar83 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd50f8);
      auVar55._8_8_ = auVar54._0_8_;
      auVar55._0_8_ = auVar54._0_8_;
      uVar48 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd50b0);
      auVar2[9] = uVar37;
      auVar2._0_9_ = *pVar1;
      auVar2[10] = uVar38;
      auVar2[0xb] = uVar39;
      auVar2[0xc] = uVar40;
      auVar2[0xd] = uVar41;
      auVar2[0xe] = uVar42;
      auVar2[0xf] = uVar44;
      uVar16 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
      fVar58 = (float)((ulong)uVar16 >> 0x20);
      fVar78 = (float)_DAT_01d4ae90;
      fVar79 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
      fVar80 = (float)_UNK_01d4ae98;
      fVar81 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
      auVar3[9] = uVar37;
      auVar3._0_9_ = *pVar1;
      auVar3[10] = uVar38;
      auVar3[0xb] = uVar39;
      auVar3[0xc] = uVar40;
      auVar3[0xd] = uVar41;
      auVar3[0xe] = uVar42;
      auVar3[0xf] = uVar44;
      uVar49 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
      fVar35 = (fVar35 * (float)uVar29 + fVar78 * (float)uVar82 * 0.0 +
               fVar78 * (float)uVar15 * (float)uVar83) - (float)uVar21 * (float)uVar85;
      fVar56 = (fVar56 * fVar36 + fVar79 * (float)((ulong)uVar82 >> 0x20) * 0.0 +
               fVar79 * fVar57 * (float)((ulong)uVar83 >> 0x20)) -
               fVar61 * (float)((ulong)uVar85 >> 0x20);
      auVar33._0_8_ = CONCAT44(fVar56,fVar35);
      auVar33._8_4_ =
           (auVar54._8_4_ * (float)uVar29 + fVar80 * (float)uVar21 * (float)uVar84 +
           fVar80 * (float)uVar48 * 0.0) - (float)uVar15 * (float)uVar86;
      auVar33._12_4_ =
           (auVar54._12_4_ * fVar36 + fVar81 * fVar61 * (float)((ulong)uVar84 >> 0x20) +
           fVar81 * (float)((ulong)uVar48 >> 0x20) * 0.0) - fVar57 * (float)((ulong)uVar86 >> 0x20);
      uVar21 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd4f90);
      uVar82 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5120);
      uVar83 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5270);
      fVar36 = (float)((ulong)uVar49 >> 0x20);
      auVar4[9] = uVar37;
      auVar4._0_9_ = *pVar1;
      auVar4[10] = uVar38;
      auVar4[0xb] = uVar39;
      auVar4[0xc] = uVar40;
      auVar4[0xd] = uVar41;
      auVar4[0xe] = uVar42;
      auVar4[0xf] = uVar44;
      uVar48 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
      fVar57 = (float)((ulong)uVar48 >> 0x20);
      uVar15 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd50f8);
      uVar29 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5418);
      auVar34._8_8_ = auVar33._0_8_;
      auVar34._0_8_ = auVar33._0_8_;
      uVar84 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50b0);
      fVar35 = ((float)uVar49 * fVar35 + fVar78 * fVar28 * (float)uVar21 +
               fVar78 * (float)uVar48 * (float)uVar15) - (float)uVar16 * (float)uVar29;
      fVar56 = (fVar36 * fVar56 + fVar79 * fVar46 * (float)((ulong)uVar21 >> 0x20) +
               fVar79 * fVar57 * (float)((ulong)uVar15 >> 0x20)) -
               fVar58 * (float)((ulong)uVar29 >> 0x20);
      fVar28 = ((float)uVar49 * auVar33._8_4_ + fVar80 * (float)uVar16 * (float)uVar82 +
               fVar80 * fVar28 * (float)uVar84) - (float)uVar48 * (float)uVar83;
      fVar46 = (fVar36 * auVar33._12_4_ + fVar81 * fVar58 * (float)((ulong)uVar82 >> 0x20) +
               fVar81 * fVar46 * (float)((ulong)uVar84 >> 0x20)) -
               fVar57 * (float)((ulong)uVar83 >> 0x20);
      bVar62 = SUB41(fVar35,0) & (byte)DAT_01d4ab50;
      bVar63 = (byte)((uint)fVar35 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
      bVar64 = (byte)((uint)fVar35 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
      bVar65 = (byte)((uint)fVar35 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
      bVar66 = SUB41(fVar56,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
      bVar67 = (byte)((uint)fVar56 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
      bVar68 = (byte)((uint)fVar56 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
      bVar69 = (byte)((uint)fVar56 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
      bVar70 = SUB41(fVar28,0) & (byte)DAT_01d4ab58;
      bVar71 = (byte)((uint)fVar28 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
      bVar72 = (byte)((uint)fVar28 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
      bVar73 = (byte)((uint)fVar28 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
      bVar74 = SUB41(fVar46,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
      bVar75 = (byte)((uint)fVar46 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
      bVar76 = (byte)((uint)fVar46 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
      bVar77 = (byte)((uint)fVar46 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      auVar20._4_4_ = fStack_4c;
      auVar20._0_4_ = fVar47;
      auVar20._8_4_ = fStack_48;
      auVar19._4_4_ = fStack_4c;
      auVar19._0_4_ = fVar47;
      auVar19._8_4_ = fStack_48;
      auVar18._4_4_ = fStack_4c;
      auVar18._0_4_ = fVar47;
      auVar18._8_4_ = fStack_48;
      auVar17._4_4_ = fStack_4c;
      auVar17._0_4_ = fVar47;
      auVar17._8_4_ = fStack_48;
      auVar22[1] = bVar63;
      auVar22[0] = bVar62;
      auVar22[2] = bVar64;
      auVar22[3] = bVar65;
      auVar22[4] = bVar66;
      auVar22[5] = bVar67;
      auVar22[6] = bVar68;
      auVar22[7] = bVar69;
      auVar22[8] = bVar70;
      auVar22[9] = bVar71;
      auVar22[10] = bVar72;
      auVar22[0xb] = bVar73;
      auVar22[0xc] = bVar74;
      auVar22[0xd] = bVar75;
      auVar22[0xe] = bVar76;
      auVar22[0xf] = bVar77;
      a64_TBL(ZEXT816(0),auVar22,uVar27);
      auVar23[1] = bVar63;
      auVar23[0] = bVar62;
      auVar23[2] = bVar64;
      auVar23[3] = bVar65;
      auVar23[4] = bVar66;
      auVar23[5] = bVar67;
      auVar23[6] = bVar68;
      auVar23[7] = bVar69;
      auVar23[8] = bVar70;
      auVar23[9] = bVar71;
      auVar23[10] = bVar72;
      auVar23[0xb] = bVar73;
      auVar23[0xc] = bVar74;
      auVar23[0xd] = bVar75;
      auVar23[0xe] = bVar76;
      auVar23[0xf] = bVar77;
      a64_TBL(ZEXT816(0),auVar23,DAT_01cd5188);
      auVar17._12_4_ = fStack_44;
      a64_TBL(ZEXT816(0),auVar17,DAT_01cd5188);
      auVar18._12_4_ = fStack_44;
      a64_TBL(ZEXT816(0),auVar18,DAT_01cd5158);
      auVar19._12_4_ = fStack_44;
      a64_TBL(ZEXT816(0),auVar19,uVar26);
      auVar24[1] = bVar63;
      auVar24[0] = bVar62;
      auVar24[2] = bVar64;
      auVar24[3] = bVar65;
      auVar24[4] = bVar66;
      auVar24[5] = bVar67;
      auVar24[6] = bVar68;
      auVar24[7] = bVar69;
      auVar24[8] = bVar70;
      auVar24[9] = bVar71;
      auVar24[10] = bVar72;
      auVar24[0xb] = bVar73;
      auVar24[0xc] = bVar74;
      auVar24[0xd] = bVar75;
      auVar24[0xe] = bVar76;
      auVar24[0xf] = bVar77;
      a64_TBL(ZEXT816(0),auVar24,uVar26);
      auVar25[1] = bVar63;
      auVar25[0] = bVar62;
      auVar25[2] = bVar64;
      auVar25[3] = bVar65;
      auVar25[4] = bVar66;
      auVar25[5] = bVar67;
      auVar25[6] = bVar68;
      auVar25[7] = bVar69;
      auVar25[8] = bVar70;
      auVar25[9] = bVar71;
      auVar25[10] = bVar72;
      auVar25[0xb] = bVar73;
      auVar25[0xc] = bVar74;
      auVar25[0xd] = bVar75;
      auVar25[0xe] = bVar76;
      auVar25[0xf] = bVar77;
      a64_TBL(ZEXT816(0),auVar25,DAT_01cd5158);
      auVar20._12_4_ = fStack_44;
      a64_TBL(ZEXT816(0),auVar20,uVar27);
      fVar47 = fVar47 * (float)CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,bVar62)));
      fStack_4c = fStack_4c * (float)CONCAT13(bVar69,CONCAT12(bVar68,CONCAT11(bVar67,bVar66)));
      uVar37 = (undefined1)((uint)fStack_4c >> 8);
      uVar38 = (undefined1)((uint)fStack_4c >> 0x10);
      uVar39 = (undefined1)((uint)fStack_4c >> 0x18);
      fStack_48 = fStack_48 * (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
      uVar40 = (undefined1)((uint)fStack_48 >> 8);
      uVar41 = (undefined1)((uint)fStack_48 >> 0x10);
      uVar42 = (undefined1)((uint)fStack_48 >> 0x18);
      fStack_44 = fStack_44 * (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74)));
      uVar44 = (undefined1)((uint)fStack_44 >> 8);
      uVar43 = (undefined1)((uint)fStack_44 >> 0x10);
      uVar45 = (undefined1)((uint)fStack_44 >> 0x18);
      auVar5[4] = SUB41(fStack_4c,0);
      auVar5._0_4_ = fVar47;
      auVar5[5] = uVar37;
      auVar5[6] = uVar38;
      auVar5[7] = uVar39;
      auVar5[8] = SUB41(fStack_48,0);
      auVar5[9] = uVar40;
      auVar5[10] = uVar41;
      auVar5[0xb] = uVar42;
      auVar5[0xc] = SUB41(fStack_44,0);
      auVar5[0xd] = uVar44;
      auVar5[0xe] = uVar43;
      auVar5[0xf] = uVar45;
      auVar6[4] = SUB41(fStack_4c,0);
      auVar6._0_4_ = fVar47;
      auVar6[5] = uVar37;
      auVar6[6] = uVar38;
      auVar6[7] = uVar39;
      auVar6[8] = SUB41(fStack_48,0);
      auVar6[9] = uVar40;
      auVar6[10] = uVar41;
      auVar6[0xb] = uVar42;
      auVar6[0xc] = SUB41(fStack_44,0);
      auVar6[0xd] = uVar44;
      auVar6[0xe] = uVar43;
      auVar6[0xf] = uVar45;
      auVar50 = NEON_ext(auVar5,auVar6,8,1);
      fVar46 = auVar50._0_4_ + fVar47 + auVar50._4_4_ + fStack_4c;
      fVar28 = -1.0;
      if (-1.0 <= fVar46) {
        fVar28 = fVar46;
      }
      acosf(fVar28);
    }
  }
  return;
}


