/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00794850; name: FUN_00794850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00794850(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  undefined8 uVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [12];
  float fVar41;
  undefined1 auVar35 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined8 uVar62;
  float fVar68;
  float fVar67;
  float fVar69;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  undefined8 uVar71;
  float fVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar78;
  undefined1 auVar79 [16];
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined8 uVar82;
  float fVar88;
  float fVar89;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar83;
  undefined1 auVar87 [16];
  float fVar90;
  undefined4 uVar91;
  float fVar92;
  undefined4 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar73 = param_4._8_8_;
  uVar30 = param_4._0_8_;
  uVar60 = param_2[0xf];
  uVar59 = param_2[0xe];
  uVar58 = param_2[0xd];
  uVar57 = param_2[0xc];
  uVar56 = param_2[0xb];
  uVar55 = param_2[10];
  uVar54 = param_2[9];
  uVar53 = param_2[8];
  uVar52 = param_2[7];
  uVar51 = param_2[6];
  uVar50 = param_2[5];
  uVar49 = param_2[4];
  uVar48 = param_2[3];
  uVar47 = param_2[2];
  uVar46 = param_2[1];
  uVar45 = param_2[0];
  if (*(char *)(param_5 + 0x27b) == '\0') {
    auVar38 = FUN_00727a90(param_5);
    uVar71 = DAT_01cd5190;
    uVar62 = DAT_01cd50b8;
    uVar83 = DAT_01cd4f98;
    if (*(char *)(param_5 + 0x27a) == '\0') {
      uVar74 = NEON_ext(auVar38._0_8_,param_3._0_8_,4,1);
      fVar43 = (float)((ulong)uVar74 >> 0x20);
      auVar85 = NEON_ext(auVar38,auVar38,8,1);
      fVar90 = auVar38._0_4_;
      auVar38 = NEON_fmov(0x3f800000,4);
      fVar44 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
      fVar42 = param_3._8_4_;
      fVar92 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)));
      fVar33 = (float)_DAT_01d4ab60 * fVar90 + (float)_DAT_01d4b9d0 * fVar44 +
               (float)_DAT_01d4b2f0 * fVar42 + auVar38._0_4_;
      fVar32 = (float)((ulong)_DAT_01d4ab60 >> 0x20) * fVar90 +
               (float)((ulong)_DAT_01d4b9d0 >> 0x20) * fVar44 +
               (float)((ulong)_DAT_01d4b2f0 >> 0x20) * fVar42 + auVar38._4_4_;
      fVar41 = (float)_UNK_01d4ab68 * fVar90 + (float)_UNK_01d4b9d8 * fVar44 +
               (float)_UNK_01d4b2f8 * fVar42 + auVar38._8_4_;
      fVar44 = (float)((ulong)_UNK_01d4ab68 >> 0x20) * fVar90 +
               (float)((ulong)_UNK_01d4b9d8 >> 0x20) * fVar44 +
               (float)((ulong)_UNK_01d4b2f8 >> 0x20) * fVar42 + auVar38._12_4_;
      auVar86._0_4_ =
           (float)uVar74 + (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
      auVar86._4_4_ = fVar43 + auVar85._0_4_;
      auVar86._8_4_ = fVar92 + param_3._4_4_;
      auVar86._12_4_ = 0;
      fVar90 = (float)uVar74 - (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
      fVar43 = fVar43 - auVar85._0_4_;
      fVar92 = fVar92 - param_3._4_4_;
      auVar22._4_4_ = fVar43;
      auVar22._0_4_ = fVar90;
      auVar22._8_4_ = fVar92;
      auVar22._12_4_ = 0;
      uVar78 = a64_TBL(ZEXT816(0),auVar86,auVar22,DAT_01cd5420);
      auVar23._4_4_ = fVar43;
      auVar23._0_4_ = fVar90;
      auVar23._8_4_ = fVar92;
      auVar23._12_4_ = 0;
      uVar80 = a64_TBL(ZEXT816(0),auVar86,auVar23,DAT_01cd51d0);
      lVar31 = *(long *)(param_5 + 0x270);
      auVar24._4_4_ = fVar43;
      auVar24._0_4_ = fVar90;
      auVar24._8_4_ = fVar92;
      auVar24._12_4_ = 0;
      uVar74 = a64_TBL(ZEXT816(0),auVar86,auVar24,DAT_01cd5250);
      auVar25._4_4_ = fVar43;
      auVar25._0_4_ = fVar90;
      auVar25._8_4_ = fVar92;
      auVar25._12_4_ = 0;
      uVar82 = a64_TBL(ZEXT816(0),auVar86,auVar25,DAT_01cd5418);
      *(undefined1 *)(lVar31 + 0xc0) = 1;
      auVar26._4_4_ = fVar43;
      auVar26._0_4_ = fVar90;
      auVar26._8_4_ = fVar92;
      auVar26._12_4_ = 0;
      auVar64._0_8_ = a64_TBL(ZEXT816(0),auVar86,auVar26,uVar71);
      auVar27._4_4_ = fVar43;
      auVar27._0_4_ = fVar90;
      auVar27._8_4_ = fVar92;
      auVar27._12_4_ = 0;
      uVar62 = a64_TBL(ZEXT816(0),auVar86,auVar27,uVar62);
      auVar28._4_4_ = fVar43;
      auVar28._0_4_ = fVar90;
      auVar28._8_4_ = fVar92;
      auVar28._12_4_ = 0;
      uVar83 = a64_TBL(ZEXT816(0),auVar86,auVar28,uVar83);
      uVar91 = (undefined4)((ulong)uVar78 >> 0x20);
      uVar45 = SUB41(fVar33,0);
      uVar46 = (undefined1)((uint)fVar33 >> 8);
      uVar47 = (undefined1)((uint)fVar33 >> 0x10);
      uVar48 = (undefined1)((uint)fVar33 >> 0x18);
      auVar64._8_8_ = uVar83;
      auVar87._4_4_ = fVar32;
      auVar87._0_4_ = fVar32;
      auVar87._8_4_ = fVar32;
      auVar87._12_4_ = fVar32;
      uVar93 = (undefined4)((ulong)uVar80 >> 0x20);
      auVar94._0_4_ = -(uint)(fVar33 <= fVar32);
      auVar94._4_4_ = -(uint)(fVar33 <= fVar32);
      auVar94._8_4_ = -(uint)(fVar33 <= fVar32);
      auVar94._12_4_ = -(uint)(fVar33 <= fVar32);
      auVar75._0_4_ = (undefined4)uVar78;
      auVar75._4_4_ = fVar32;
      auVar75._8_8_ = uVar74;
      auVar65._0_12_ = auVar64._0_12_;
      auVar65._12_4_ = fVar44;
      auVar38[4] = uVar45;
      auVar38._0_4_ = fVar33;
      auVar38[5] = uVar46;
      auVar38[6] = uVar47;
      auVar38[7] = uVar48;
      auVar38[8] = uVar45;
      auVar38[9] = uVar46;
      auVar38[10] = uVar47;
      auVar38[0xb] = uVar48;
      auVar38[0xc] = uVar45;
      auVar38[0xd] = uVar46;
      auVar38[0xe] = uVar47;
      auVar38[0xf] = uVar48;
      auVar85[4] = uVar45;
      auVar85._0_4_ = fVar33;
      auVar85[5] = uVar46;
      auVar85[6] = uVar47;
      auVar85[7] = uVar48;
      auVar85[8] = uVar45;
      auVar85[9] = uVar46;
      auVar85[10] = uVar47;
      auVar85[0xb] = uVar48;
      auVar85[0xc] = uVar45;
      auVar85[0xd] = uVar46;
      auVar85[0xe] = uVar47;
      auVar85[0xf] = uVar48;
      auVar85 = auVar85 ^ (auVar38 ^ auVar87) & auVar94;
      uVar45 = SUB41(fVar41,0);
      uVar46 = (undefined1)((uint)fVar41 >> 8);
      uVar47 = (undefined1)((uint)fVar41 >> 0x10);
      uVar48 = (undefined1)((uint)fVar41 >> 0x18);
      auVar29._4_4_ = uVar91;
      auVar29._0_4_ = fVar33;
      auVar29._8_4_ = (int)uVar80;
      auVar29._12_4_ = uVar93;
      auVar95._4_4_ = uVar91;
      auVar95._0_4_ = fVar33;
      auVar95._8_4_ = (int)uVar80;
      auVar95._12_4_ = uVar93;
      auVar95 = auVar95 ^ (auVar29 ^ auVar75) & auVar94;
      auVar81._0_4_ = -(uint)(auVar85._0_4_ <= fVar41);
      auVar81._4_4_ = -(uint)(auVar85._4_4_ <= fVar41);
      auVar81._8_4_ = -(uint)(auVar85._8_4_ <= fVar41);
      auVar81._12_4_ = -(uint)(auVar85._12_4_ <= fVar41);
      auVar17._8_4_ = fVar41;
      auVar17._0_8_ = uVar82;
      auVar17._12_4_ = (int)((ulong)uVar62 >> 0x20);
      auVar95 = auVar95 ^ (auVar95 ^ auVar17) & auVar81;
      auVar4[4] = uVar45;
      auVar4._0_4_ = fVar41;
      auVar4[5] = uVar46;
      auVar4[6] = uVar47;
      auVar4[7] = uVar48;
      auVar4[8] = uVar45;
      auVar4[9] = uVar46;
      auVar4[10] = uVar47;
      auVar4[0xb] = uVar48;
      auVar4[0xc] = uVar45;
      auVar4[0xd] = uVar46;
      auVar4[0xe] = uVar47;
      auVar4[0xf] = uVar48;
      auVar85 = auVar85 ^ (auVar85 ^ auVar4) & auVar81;
      auVar39._0_4_ = -(uint)(auVar85._0_4_ <= fVar44);
      auVar39._4_4_ = -(uint)(auVar85._4_4_ <= fVar44);
      auVar39._8_4_ = -(uint)(auVar85._8_4_ <= fVar44);
      auVar39._12_4_ = -(uint)(auVar85._12_4_ <= fVar44);
      auVar95 = auVar95 ^ (auVar95 ^ auVar65) & auVar39;
      fVar32 = auVar95._0_4_;
      fVar44 = fVar32 * fVar32;
      fVar41 = auVar95._4_4_;
      fVar92 = fVar41 * fVar41;
      uVar45 = (undefined1)((uint)fVar92 >> 8);
      uVar46 = (undefined1)((uint)fVar92 >> 0x10);
      uVar47 = (undefined1)((uint)fVar92 >> 0x18);
      fVar42 = auVar95._8_4_;
      fVar90 = fVar42 * fVar42;
      uVar48 = (undefined1)((uint)fVar90 >> 8);
      uVar49 = (undefined1)((uint)fVar90 >> 0x10);
      uVar50 = (undefined1)((uint)fVar90 >> 0x18);
      fVar43 = auVar95._12_4_;
      fVar33 = fVar43 * fVar43;
      uVar51 = (undefined1)((uint)fVar33 >> 8);
      uVar52 = (undefined1)((uint)fVar33 >> 0x10);
      uVar53 = (undefined1)((uint)fVar33 >> 0x18);
      auVar5[4] = SUB41(fVar92,0);
      auVar5._0_4_ = fVar44;
      auVar5[5] = uVar45;
      auVar5[6] = uVar46;
      auVar5[7] = uVar47;
      auVar5[8] = SUB41(fVar90,0);
      auVar5[9] = uVar48;
      auVar5[10] = uVar49;
      auVar5[0xb] = uVar50;
      auVar5[0xc] = SUB41(fVar33,0);
      auVar5[0xd] = uVar51;
      auVar5[0xe] = uVar52;
      auVar5[0xf] = uVar53;
      auVar6[4] = SUB41(fVar92,0);
      auVar6._0_4_ = fVar44;
      auVar6[5] = uVar45;
      auVar6[6] = uVar46;
      auVar6[7] = uVar47;
      auVar6[8] = SUB41(fVar90,0);
      auVar6[9] = uVar48;
      auVar6[10] = uVar49;
      auVar6[0xb] = uVar50;
      auVar6[0xc] = SUB41(fVar33,0);
      auVar6[0xd] = uVar51;
      auVar6[0xe] = uVar52;
      auVar6[0xf] = uVar53;
      auVar38 = NEON_ext(auVar5,auVar6,8,1);
      fVar44 = auVar38._0_4_ + fVar44;
      fVar92 = auVar38._4_4_ + fVar92;
      fVar90 = fVar44 + fVar92;
      fVar44 = fVar44 + fVar92;
      uVar45 = SUB41(fVar44,0);
      uVar46 = (undefined1)((uint)fVar44 >> 8);
      uVar47 = (undefined1)((uint)fVar44 >> 0x10);
      uVar48 = (undefined1)((uint)fVar44 >> 0x18);
      auVar7[4] = uVar45;
      auVar7._0_4_ = fVar90;
      auVar7[5] = uVar46;
      auVar7[6] = uVar47;
      auVar7[7] = uVar48;
      auVar7[8] = SUB41(fVar90,0);
      auVar7[9] = (char)((uint)fVar90 >> 8);
      auVar7[10] = (char)((uint)fVar90 >> 0x10);
      auVar7[0xb] = (char)((uint)fVar90 >> 0x18);
      auVar7[0xc] = uVar45;
      auVar7[0xd] = uVar46;
      auVar7[0xe] = uVar47;
      auVar7[0xf] = uVar48;
      auVar38 = NEON_frsqrte(auVar7,4);
      auVar76._0_4_ = auVar38._0_4_ * fVar90;
      auVar76._4_4_ = auVar38._4_4_ * fVar44;
      auVar76._8_4_ = auVar38._8_4_ * fVar90;
      uVar8 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar90)) >> 0x20);
      auVar76._12_4_ = auVar38._12_4_ * (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar8));
      auVar85 = NEON_frsqrts(auVar38,auVar76,4);
      auVar66._0_4_ = auVar38._0_4_ * auVar85._0_4_;
      auVar66._4_4_ = auVar38._4_4_ * auVar85._4_4_;
      auVar66._8_4_ = auVar38._8_4_ * auVar85._8_4_;
      auVar66._12_4_ = auVar38._12_4_ * auVar85._12_4_;
      auVar77._0_4_ = fVar90 * auVar66._0_4_;
      auVar77._4_4_ = fVar44 * auVar66._4_4_;
      auVar77._8_4_ = fVar90 * auVar66._8_4_;
      auVar77._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar8)) * auVar66._12_4_;
      iVar9 = -(uint)(fVar90 == 0.0);
      iVar10 = -(uint)(fVar44 == 0.0);
      iVar11 = -(uint)(fVar90 == 0.0);
      iVar12 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar47,uVar8)) == 0.0);
      auVar38 = NEON_frsqrts(auVar66,auVar77,4);
      fVar32 = auVar66._0_4_ * auVar38._0_4_ * fVar32;
      fVar41 = auVar66._4_4_ * auVar38._4_4_ * fVar41;
      fVar42 = auVar66._8_4_ * auVar38._8_4_ * fVar42;
      fVar43 = auVar66._12_4_ * auVar38._12_4_ * fVar43;
      auVar40._0_8_ =
           CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                    CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                             CONCAT15((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                      CONCAT14(SUB41(fVar41,0) & ~(byte)iVar10,
                                               CONCAT13((byte)((uint)fVar32 >> 0x18) &
                                                        ~(byte)((uint)iVar9 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                                                 ~(byte)((uint)iVar9 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar32 >> 8)
                                                                          & ~(byte)((uint)iVar9 >> 8
                                                                                   ),
                                                                          SUB41(fVar32,0) &
                                                                          ~(byte)iVar9)))))));
      auVar40[8] = SUB41(fVar42,0) & ~(byte)iVar11;
      auVar40[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar11 >> 8);
      auVar40[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
      auVar40[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
      auVar40[0xc] = SUB41(fVar43,0) & ~(byte)iVar12;
      auVar40[0xd] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar12 >> 8);
      auVar40[0xe] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
      auVar40[0xf] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
      *(long *)(lVar31 + 0xa8) = auVar40._8_8_;
      *(undefined8 *)(lVar31 + 0xa0) = auVar40._0_8_;
      lVar31 = *(long *)(param_5 + 0x270);
      *(undefined1 *)(lVar31 + 0xc0) = 1;
      *(undefined8 *)(lVar31 + 0xb8) = uVar73;
      *(undefined8 *)(lVar31 + 0xb0) = uVar30;
      cVar1 = *(char *)(param_5 + 0x278);
    }
    else {
      lVar31 = *(long *)(param_5 + 0x270);
      *(undefined1 *)(lVar31 + 0xc0) = 0;
      *(long *)(lVar31 + 0x68) = auVar38._8_8_;
      *(long *)(lVar31 + 0x60) = auVar38._0_8_;
      *(ulong *)(lVar31 + 0x78) =
           CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,CONCAT13(uVar56,CONCAT12(
                                                  uVar55,CONCAT11(uVar54,uVar53)))))));
      *(ulong *)(lVar31 + 0x70) =
           CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13(uVar48,CONCAT12(
                                                  uVar47,CONCAT11(uVar46,uVar45)))))));
      *(long *)(lVar31 + 0x88) = param_3._8_8_;
      *(long *)(lVar31 + 0x80) = param_3._0_8_;
      *(undefined8 *)(lVar31 + 0x98) = uVar73;
      *(undefined8 *)(lVar31 + 0x90) = uVar30;
      cVar1 = *(char *)(param_5 + 0x278);
    }
  }
  else {
    FUN_00794bc0(param_5);
    cVar1 = *(char *)(param_5 + 0x278);
  }
  if (cVar1 != '\0') {
    lVar31 = *(long *)(*(long *)(param_5 + 0x270) + 0xe0);
    if ((lVar31 != 0) && (*(int *)(*(long *)(param_5 + 0x270) + 0xe8) == *(int *)(lVar31 + 0x2c))) {
      uVar30 = FUN_0078d120();
      lVar31 = *(long *)(param_5 + 0x270);
      if (*(char *)(lVar31 + 0xc0) == '\0') {
        auVar37 = *(undefined1 (*) [16])(lVar31 + 0x60);
        auVar63 = *(undefined1 (*) [16])(lVar31 + 0x70);
        uVar73 = *(undefined8 *)(lVar31 + 0x88);
        uVar53 = (undefined1)uVar73;
        uVar54 = (undefined1)((ulong)uVar73 >> 8);
        uVar55 = (undefined1)((ulong)uVar73 >> 0x10);
        uVar56 = (undefined1)((ulong)uVar73 >> 0x18);
        uVar57 = (undefined1)((ulong)uVar73 >> 0x20);
        uVar58 = (undefined1)((ulong)uVar73 >> 0x28);
        uVar59 = (undefined1)((ulong)uVar73 >> 0x30);
        uVar60 = (undefined1)((ulong)uVar73 >> 0x38);
        uVar73 = *(undefined8 *)(lVar31 + 0x80);
        uVar45 = (undefined1)uVar73;
        uVar46 = (undefined1)((ulong)uVar73 >> 8);
        uVar47 = (undefined1)((ulong)uVar73 >> 0x10);
        uVar48 = (undefined1)((ulong)uVar73 >> 0x18);
        uVar49 = (undefined1)((ulong)uVar73 >> 0x20);
        uVar50 = (undefined1)((ulong)uVar73 >> 0x28);
        uVar51 = (undefined1)((ulong)uVar73 >> 0x30);
        uVar52 = (undefined1)((ulong)uVar73 >> 0x38);
        auVar38 = *(undefined1 (*) [16])(lVar31 + 0x90);
      }
      else {
        auVar85 = *(undefined1 (*) [16])(lVar31 + 0xa0);
        auVar38 = *(undefined1 (*) [16])(lVar31 + 0xb0);
        fVar32 = (float)CONCAT13(auVar85[3] & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                 CONCAT12(auVar85[2] & (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                          CONCAT11(auVar85[1] & (byte)((ulong)DAT_01d4ab50 >> 8),
                                                   auVar85[0] & (byte)DAT_01d4ab50)));
        auVar34._0_8_ =
             CONCAT17(auVar85[7] & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                      CONCAT16(auVar85[6] & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                               CONCAT15(auVar85[5] & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                        CONCAT14(auVar85[4] & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                 fVar32))));
        auVar34[8] = auVar85[8] & (byte)DAT_01d4ab58;
        auVar34[9] = auVar85[9] & (byte)((ulong)DAT_01d4ab58 >> 8);
        auVar34[10] = auVar85[10] & (byte)((ulong)DAT_01d4ab58 >> 0x10);
        auVar34[0xb] = auVar85[0xb] & (byte)((ulong)DAT_01d4ab58 >> 0x18);
        auVar35[0xc] = auVar85[0xc] & (byte)((ulong)DAT_01d4ab58 >> 0x20);
        auVar35._0_12_ = auVar34;
        auVar35[0xd] = auVar85[0xd] & (byte)((ulong)DAT_01d4ab58 >> 0x28);
        auVar35[0xe] = auVar85[0xe] & (byte)((ulong)DAT_01d4ab58 >> 0x30);
        auVar35[0xf] = auVar85[0xf] & (byte)((ulong)DAT_01d4ab58 >> 0x38);
        uVar82 = NEON_ext(auVar34._0_8_,auVar34._0_8_,4,1);
        uVar73 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5188);
        uVar62 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5048);
        uVar74 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5418);
        uVar71 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5158);
        uVar83 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd50f8);
        *(undefined1 *)(lVar31 + 0xc0) = 0;
        fVar70 = (float)uVar82 * (float)uVar82;
        fVar72 = (float)((ulong)uVar82 >> 0x20);
        fVar72 = fVar72 * fVar72;
        fVar88 = (float)uVar73;
        fVar89 = (float)((ulong)uVar73 >> 0x20);
        fVar61 = (float)uVar62 * (float)uVar62;
        fVar67 = (float)((ulong)uVar62 >> 0x20);
        fVar67 = fVar67 * fVar67;
        fVar68 = (float)uVar71;
        fVar69 = (float)((ulong)uVar71 >> 0x20);
        fVar32 = (float)uVar74 * fVar32;
        fVar41 = (float)((ulong)uVar74 >> 0x20) * (float)((ulong)auVar34._0_8_ >> 0x20);
        fVar42 = fVar88 * auVar34._8_4_;
        fVar43 = fVar89 * auVar35._12_4_;
        fVar33 = auVar85._12_4_;
        fVar44 = (float)uVar83 * fVar33;
        fVar92 = (float)((ulong)uVar83 >> 0x20) * fVar33;
        fVar32 = fVar32 + fVar32;
        fVar41 = fVar41 + fVar41;
        fVar42 = fVar42 + fVar42;
        fVar43 = fVar43 + fVar43;
        fVar44 = fVar44 + fVar44;
        fVar92 = fVar92 + fVar92;
        fVar90 = fVar68 * fVar33 + fVar68 * fVar33;
        fVar33 = fVar69 * fVar33 + fVar69 * fVar33;
        auVar79._0_4_ = fVar32 + fVar44;
        auVar79._4_4_ = fVar41 + fVar92;
        auVar79._8_4_ = fVar42 + fVar90;
        auVar79._12_4_ = fVar43 + fVar33;
        fVar32 = fVar32 - fVar44;
        fVar41 = fVar41 - fVar92;
        fVar42 = fVar42 - fVar90;
        fVar43 = fVar43 - fVar33;
        auVar36._0_8_ =
             CONCAT44((float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar67 + fVar67 + fVar72 + fVar72),
                      (float)_DAT_01d4a130 - (fVar61 + fVar61 + fVar70 + fVar70));
        auVar36._8_4_ =
             (float)_UNK_01d4a138 -
             (fVar68 * fVar68 + fVar68 * fVar68 + fVar88 * fVar88 + fVar88 * fVar88);
        auVar36._12_4_ =
             (float)((ulong)_UNK_01d4a138 >> 0x20) -
             (fVar69 * fVar69 + fVar69 * fVar69 + fVar89 * fVar89 + fVar89 * fVar89);
        auVar13._4_4_ = fVar41;
        auVar13._0_4_ = fVar32;
        auVar13._8_4_ = fVar42;
        auVar13._12_4_ = fVar43;
        uVar73 = a64_TBL(ZEXT816(0),auVar79,auVar13,DAT_01cd5250);
        auVar14._4_4_ = fVar41;
        auVar14._0_4_ = fVar32;
        auVar14._8_4_ = fVar42;
        auVar14._12_4_ = fVar43;
        uVar62 = a64_TBL(ZEXT816(0),auVar79,auVar14,DAT_01cd51f8);
        auVar15._4_4_ = fVar41;
        auVar15._0_4_ = fVar32;
        auVar15._8_4_ = fVar42;
        auVar15._12_4_ = fVar43;
        uVar83 = a64_TBL(ZEXT816(0),auVar79,auVar15,DAT_01cd5430);
        auVar16._4_4_ = fVar41;
        auVar16._0_4_ = fVar32;
        auVar16._8_4_ = fVar42;
        auVar16._12_4_ = fVar43;
        uVar71 = a64_TBL(ZEXT816(0),auVar79,auVar16,DAT_01cd5050);
        uVar45 = (undefined1)((ulong)uVar62 >> 8);
        uVar46 = (undefined1)((ulong)uVar62 >> 0x10);
        uVar47 = (undefined1)((ulong)uVar62 >> 0x18);
        uVar48 = (undefined1)((ulong)uVar62 >> 0x20);
        uVar49 = (undefined1)((ulong)uVar62 >> 0x28);
        uVar50 = (undefined1)((ulong)uVar62 >> 0x30);
        uVar51 = (undefined1)((ulong)uVar62 >> 0x38);
        uVar91 = (undefined4)uVar71;
        uVar93 = (undefined4)((ulong)uVar71 >> 0x20);
        auVar2[8] = (char)uVar62;
        auVar2._0_8_ = uVar73;
        auVar2[9] = uVar45;
        auVar2[10] = uVar46;
        auVar2[0xb] = uVar47;
        auVar2[0xc] = uVar48;
        auVar2[0xd] = uVar49;
        auVar2[0xe] = uVar50;
        auVar2[0xf] = uVar51;
        uVar78 = a64_TBL(ZEXT816(0),auVar36,auVar2,DAT_01cd50d8);
        auVar3[8] = (char)uVar62;
        auVar3._0_8_ = uVar73;
        auVar3[9] = uVar45;
        auVar3[10] = uVar46;
        auVar3[0xb] = uVar47;
        auVar3[0xc] = uVar48;
        auVar3[0xd] = uVar49;
        auVar3[0xe] = uVar50;
        auVar3[0xf] = uVar51;
        uVar74 = a64_TBL(ZEXT816(0),auVar36,auVar3,DAT_01cd4fb8);
        auVar84._8_8_ = auVar36._8_8_;
        auVar84._0_8_ = auVar36._0_8_;
        auVar18._8_4_ = uVar91;
        auVar18._0_8_ = uVar83;
        auVar18._12_4_ = uVar93;
        uVar62 = a64_TBL(ZEXT816(0),auVar84,auVar18,DAT_01cd50b8);
        auVar19._8_4_ = uVar91;
        auVar19._0_8_ = uVar83;
        auVar19._12_4_ = uVar93;
        uVar71 = a64_TBL(ZEXT816(0),auVar84,auVar19,DAT_01cd5308);
        auVar20._8_4_ = uVar91;
        auVar20._0_8_ = uVar83;
        auVar20._12_4_ = uVar93;
        uVar82 = a64_TBL(ZEXT816(0),auVar84,auVar20,DAT_01cd5008);
        fVar33 = *(float *)(lVar31 + 0xd0);
        fVar32 = *(float *)(lVar31 + 0xd4);
        fVar90 = *(float *)(lVar31 + 0xd8);
        auVar21._8_4_ = uVar91;
        auVar21._0_8_ = uVar83;
        auVar21._12_4_ = uVar93;
        uVar73 = a64_TBL(ZEXT816(0),auVar84,auVar21,DAT_01cd4fb0);
        fVar44 = (float)uVar78 * fVar90;
        uVar45 = SUB41(fVar44,0);
        uVar46 = (undefined1)((uint)fVar44 >> 8);
        uVar47 = (undefined1)((uint)fVar44 >> 0x10);
        uVar48 = (undefined1)((uint)fVar44 >> 0x18);
        fVar92 = (float)((ulong)uVar78 >> 0x20) * fVar90;
        uVar49 = SUB41(fVar92,0);
        uVar50 = (undefined1)((uint)fVar92 >> 8);
        uVar51 = (undefined1)((uint)fVar92 >> 0x10);
        uVar52 = (undefined1)((uint)fVar92 >> 0x18);
        fVar92 = (float)uVar74 * fVar90;
        uVar53 = SUB41(fVar92,0);
        uVar54 = (undefined1)((uint)fVar92 >> 8);
        uVar55 = (undefined1)((uint)fVar92 >> 0x10);
        uVar56 = (undefined1)((uint)fVar92 >> 0x18);
        fVar90 = (float)((ulong)uVar74 >> 0x20) * fVar90;
        uVar57 = SUB41(fVar90,0);
        uVar58 = (undefined1)((uint)fVar90 >> 8);
        uVar59 = (undefined1)((uint)fVar90 >> 0x10);
        uVar60 = (undefined1)((uint)fVar90 >> 0x18);
        auVar37._0_8_ = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar33,(float)uVar62 * fVar33);
        auVar37._8_4_ = (float)uVar71 * fVar33;
        auVar37._12_4_ = (float)((ulong)uVar71 >> 0x20) * fVar33;
        *(ulong *)(lVar31 + 0x88) =
             CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,fVar92))));
        *(ulong *)(lVar31 + 0x80) =
             CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,fVar44))));
        *(long *)(lVar31 + 0x98) = auVar38._8_8_;
        *(long *)(lVar31 + 0x90) = auVar38._0_8_;
        auVar63._0_8_ = CONCAT44((float)((ulong)uVar82 >> 0x20) * fVar32,(float)uVar82 * fVar32);
        auVar63._8_4_ = (float)uVar73 * fVar32;
        auVar63._12_4_ = (float)((ulong)uVar73 >> 0x20) * fVar32;
        *(long *)(lVar31 + 0x68) = auVar37._8_8_;
        *(undefined8 *)(lVar31 + 0x60) = auVar37._0_8_;
        *(long *)(lVar31 + 0x78) = auVar63._8_8_;
        *(undefined8 *)(lVar31 + 0x70) = auVar63._0_8_;
      }
      uStack_58 = auVar37._8_8_;
      local_60 = auVar37._0_8_;
      uStack_48 = auVar63._8_8_;
      uStack_50 = auVar63._0_8_;
      uStack_38 = CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,CONCAT13(uVar56,
                                                  CONCAT12(uVar55,CONCAT11(uVar54,uVar53)))))));
      local_40 = CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13(uVar48,
                                                  CONCAT12(uVar47,CONCAT11(uVar46,uVar45)))))));
      uStack_28 = auVar38._8_8_;
      uStack_30 = auVar38._0_8_;
      FUN_019d6690(uVar30,&local_60);
      return;
    }
  }
  return;
}


