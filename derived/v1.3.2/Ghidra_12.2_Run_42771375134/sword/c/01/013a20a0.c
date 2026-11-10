/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a20a0; name: FUN_013a20a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013a20a0(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined2 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  undefined1 auVar48 [16];
  float fVar50;
  int iVar51;
  undefined8 uVar52;
  int iVar61;
  float fVar62;
  int iVar63;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  undefined1 auVar59 [16];
  int iVar64;
  float fVar65;
  undefined8 uVar66;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined4 uVar81;
  undefined4 uVar82;
  undefined8 uVar83;
  float fVar86;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  long local_a0 [13];
  undefined1 auStack_38 [8];
  
  if ((param_2 == 2) || (*(long *)(param_1 + 0x830) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(int *)(param_1 + 0x8d0) = param_2;
  FUN_00794370(*(undefined8 *)(param_1 + 0x5f8),param_1 + 0x3c0);
  if (*(int *)(param_1 + 0x8d0) == 0) {
    *(undefined4 *)(param_1 + 0xfa8) = 0x3f19999a;
    pcVar15 = *(code **)(param_1 + 0xfb8);
    if (pcVar15 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xfc0) = 0;
      *(undefined8 *)(param_1 + 0xfc8) = 0;
      *(undefined8 *)(param_1 + 0xfb0) = 0;
      *(undefined8 *)(param_1 + 0xfb8) = 0;
      (*pcVar15)(param_1 + 0xfd0);
    }
    *(long *)(param_1 + 0xfd0) = param_1;
    *(undefined1 **)(param_1 + 0xfb0) = &LAB_013a39d0;
    *(undefined1 **)(param_1 + 0xfb8) = &LAB_013a3a90;
    *(undefined1 **)(param_1 + 0xfc0) = &LAB_013a3ae0;
    *(undefined1 **)(param_1 + 0xfc8) = &LAB_013a3af0;
  }
  else {
    lVar14 = (long)*(int *)(param_1 + 0xfa4) * 0x10;
    lVar13 = *(long *)(*(long *)(param_1 + 0x830) + 0x1a8);
    *(undefined8 *)(lVar13 + 0xf8) = *(undefined8 *)(&DAT_02a718a8 + lVar14);
    *(undefined8 *)(lVar13 + 0xf0) = *(undefined8 *)(&DAT_02a718a0 + lVar14);
    lVar14 = (long)*(int *)(param_1 + 0xfa4) * 0x10;
    fVar17 = (float)DAT_02a71830 - (float)*(undefined8 *)(&DAT_02a718a0 + lVar14);
    fVar3 = (float)((ulong)DAT_02a71830 >> 0x20) -
            (float)((ulong)*(undefined8 *)(&DAT_02a718a0 + lVar14) >> 0x20);
    fVar71 = (float)DAT_02a71838 - (float)*(undefined8 *)(&DAT_02a718a8 + lVar14);
    fVar86 = (float)((ulong)DAT_02a71838 >> 0x20) -
             (float)((ulong)*(undefined8 *)(&DAT_02a718a8 + lVar14) >> 0x20);
    fVar18 = fVar17 * fVar17;
    fVar50 = fVar3 * fVar3;
    uVar35 = (undefined1)((uint)fVar50 >> 8);
    uVar36 = (undefined1)((uint)fVar50 >> 0x10);
    uVar37 = (undefined1)((uint)fVar50 >> 0x18);
    fVar16 = fVar71 * fVar71;
    uVar38 = (undefined1)((uint)fVar16 >> 8);
    uVar39 = (undefined1)((uint)fVar16 >> 0x10);
    uVar40 = (undefined1)((uint)fVar16 >> 0x18);
    fVar62 = fVar86 * fVar86;
    uVar41 = (undefined1)((uint)fVar62 >> 8);
    uVar42 = (undefined1)((uint)fVar62 >> 0x10);
    uVar43 = (undefined1)((uint)fVar62 >> 0x18);
    auVar4[4] = SUB41(fVar50,0);
    auVar4._0_4_ = fVar18;
    auVar4[5] = uVar35;
    auVar4[6] = uVar36;
    auVar4[7] = uVar37;
    auVar4[8] = SUB41(fVar16,0);
    auVar4[9] = uVar38;
    auVar4[10] = uVar39;
    auVar4[0xb] = uVar40;
    auVar4[0xc] = SUB41(fVar62,0);
    auVar4[0xd] = uVar41;
    auVar4[0xe] = uVar42;
    auVar4[0xf] = uVar43;
    auVar5[4] = SUB41(fVar50,0);
    auVar5._0_4_ = fVar18;
    auVar5[5] = uVar35;
    auVar5[6] = uVar36;
    auVar5[7] = uVar37;
    auVar5[8] = SUB41(fVar16,0);
    auVar5[9] = uVar38;
    auVar5[10] = uVar39;
    auVar5[0xb] = uVar40;
    auVar5[0xc] = SUB41(fVar62,0);
    auVar5[0xd] = uVar41;
    auVar5[0xe] = uVar42;
    auVar5[0xf] = uVar43;
    auVar44 = NEON_ext(auVar4,auVar5,8,1);
    fVar18 = auVar44._0_4_ + fVar18;
    fVar50 = auVar44._4_4_ + fVar50;
    fVar16 = fVar18 + fVar50;
    fVar18 = fVar18 + fVar50;
    uVar35 = SUB41(fVar18,0);
    uVar36 = (undefined1)((uint)fVar18 >> 8);
    uVar37 = (undefined1)((uint)fVar18 >> 0x10);
    uVar38 = (undefined1)((uint)fVar18 >> 0x18);
    auVar6[4] = uVar35;
    auVar6._0_4_ = fVar16;
    auVar6[5] = uVar36;
    auVar6[6] = uVar37;
    auVar6[7] = uVar38;
    auVar6[8] = SUB41(fVar16,0);
    auVar6[9] = (char)((uint)fVar16 >> 8);
    auVar6[10] = (char)((uint)fVar16 >> 0x10);
    auVar6[0xb] = (char)((uint)fVar16 >> 0x18);
    auVar6[0xc] = uVar35;
    auVar6[0xd] = uVar36;
    auVar6[0xe] = uVar37;
    auVar6[0xf] = uVar38;
    auVar44 = NEON_frsqrte(auVar6,4);
    auVar53._0_4_ = auVar44._0_4_ * fVar16;
    auVar53._4_4_ = auVar44._4_4_ * fVar18;
    auVar53._8_4_ = auVar44._8_4_ * fVar16;
    uVar7 = (undefined2)(CONCAT15(uVar36,CONCAT14(uVar35,fVar16)) >> 0x20);
    auVar53._12_4_ = auVar44._12_4_ * (float)CONCAT13(uVar38,CONCAT12(uVar37,uVar7));
    auVar54 = NEON_frsqrts(auVar44,auVar53,4);
    auVar45._0_4_ = auVar44._0_4_ * auVar54._0_4_;
    auVar45._4_4_ = auVar44._4_4_ * auVar54._4_4_;
    auVar45._8_4_ = auVar44._8_4_ * auVar54._8_4_;
    auVar45._12_4_ = auVar44._12_4_ * auVar54._12_4_;
    auVar55._0_4_ = fVar16 * auVar45._0_4_;
    auVar55._4_4_ = fVar18 * auVar45._4_4_;
    auVar55._8_4_ = fVar16 * auVar45._8_4_;
    auVar55._12_4_ = (float)CONCAT13(uVar38,CONCAT12(uVar37,uVar7)) * auVar45._12_4_;
    iVar51 = -(uint)(fVar16 == 0.0);
    iVar61 = -(uint)(fVar18 == 0.0);
    iVar63 = -(uint)(fVar16 == 0.0);
    iVar64 = -(uint)((float)CONCAT13(uVar38,CONCAT12(uVar37,uVar7)) == 0.0);
    auVar44 = NEON_frsqrts(auVar45,auVar55,4);
    fVar17 = fVar17 * auVar45._0_4_ * auVar44._0_4_;
    fVar3 = fVar3 * auVar45._4_4_ * auVar44._4_4_;
    fVar71 = fVar71 * auVar45._8_4_ * auVar44._8_4_;
    fVar86 = fVar86 * auVar45._12_4_ * auVar44._12_4_;
    auVar56._8_8_ = _UNK_01d4b588;
    auVar56._0_8_ = _DAT_01d4b580;
    bVar19 = SUB41(fVar17,0) & ~(byte)iVar51;
    bVar20 = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar51 >> 8);
    bVar21 = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    bVar22 = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    bVar23 = SUB41(fVar3,0) & ~(byte)iVar61;
    bVar24 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar61 >> 8);
    bVar25 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
    bVar26 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
    bVar27 = SUB41(fVar71,0) & ~(byte)iVar63;
    bVar28 = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar63 >> 8);
    bVar29 = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
    bVar30 = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
    bVar31 = SUB41(fVar86,0) & ~(byte)iVar64;
    bVar32 = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar64 >> 8);
    bVar33 = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
    bVar34 = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
    uVar66 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5418);
    uVar77 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5188);
    auVar44[1] = bVar20;
    auVar44[0] = bVar19;
    auVar44[2] = bVar21;
    auVar44[3] = bVar22;
    auVar44[4] = bVar23;
    auVar44[5] = bVar24;
    auVar44[6] = bVar25;
    auVar44[7] = bVar26;
    auVar44[8] = bVar27;
    auVar44[9] = bVar28;
    auVar44[10] = bVar29;
    auVar44[0xb] = bVar30;
    auVar44[0xc] = bVar31;
    auVar44[0xd] = bVar32;
    auVar44[0xe] = bVar33;
    auVar44[0xf] = bVar34;
    uVar83 = a64_TBL(ZEXT816(0),auVar44,DAT_01cd5418);
    auVar54[1] = bVar20;
    auVar54[0] = bVar19;
    auVar54[2] = bVar21;
    auVar54[3] = bVar22;
    auVar54[4] = bVar23;
    auVar54[5] = bVar24;
    auVar54[6] = bVar25;
    auVar54[7] = bVar26;
    auVar54[8] = bVar27;
    auVar54[9] = bVar28;
    auVar54[10] = bVar29;
    auVar54[0xb] = bVar30;
    auVar54[0xc] = bVar31;
    auVar54[0xd] = bVar32;
    auVar54[0xe] = bVar33;
    auVar54[0xf] = bVar34;
    uVar8 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd50f8);
    auVar1[1] = bVar20;
    auVar1[0] = bVar19;
    auVar1[2] = bVar21;
    auVar1[3] = bVar22;
    auVar1[4] = bVar23;
    auVar1[5] = bVar24;
    auVar1[6] = bVar25;
    auVar1[7] = bVar26;
    auVar1[8] = bVar27;
    auVar1[9] = bVar28;
    auVar1[10] = bVar29;
    auVar1[0xb] = bVar30;
    auVar1[0xc] = bVar31;
    auVar1[0xd] = bVar32;
    auVar1[0xe] = bVar33;
    auVar1[0xf] = bVar34;
    uVar11 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5158);
    auVar2[1] = bVar20;
    auVar2[0] = bVar19;
    auVar2[2] = bVar21;
    auVar2[3] = bVar22;
    auVar2[4] = bVar23;
    auVar2[5] = bVar24;
    auVar2[6] = bVar25;
    auVar2[7] = bVar26;
    auVar2[8] = bVar27;
    auVar2[9] = bVar28;
    auVar2[10] = bVar29;
    auVar2[0xb] = bVar30;
    auVar2[0xc] = bVar31;
    auVar2[0xd] = bVar32;
    auVar2[0xe] = bVar33;
    auVar2[0xf] = bVar34;
    uVar87 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5188);
    uVar12 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd50f8);
    uVar52 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5158);
    fVar17 = (float)((ulong)uVar8 >> 0x20);
    fVar3 = (float)((ulong)uVar11 >> 0x20);
    fVar86 = (float)((ulong)uVar83 >> 0x20);
    fVar50 = (float)((ulong)uVar87 >> 0x20);
    fVar65 = (float)uVar66 * (float)uVar8 - (float)uVar12 * (float)uVar83;
    fVar71 = (float)((ulong)uVar66 >> 0x20) * fVar17 - (float)((ulong)uVar12 >> 0x20) * fVar86;
    auVar67._0_8_ = CONCAT44(fVar71,fVar65);
    auVar67._8_4_ = (float)uVar77 * (float)uVar11 - (float)uVar52 * (float)uVar87;
    auVar67._12_4_ =
         (float)((ulong)uVar77 >> 0x20) * fVar3 - (float)((ulong)uVar52 >> 0x20) * fVar50;
    auVar57._0_4_ = 0.0 - fVar65;
    auVar57._4_4_ = 0.0 - fVar71;
    auVar57._8_4_ = 0.0 - auVar67._8_4_;
    auVar57._12_4_ = 0.0 - auVar67._12_4_;
    uVar52 = a64_TBL(ZEXT816(0),auVar57,DAT_01cd5418);
    uVar77 = a64_TBL(ZEXT816(0),auVar57,DAT_01cd5188);
    uVar72 = a64_TBL(ZEXT816(0),auVar57,DAT_01cd50f8);
    uVar66 = a64_TBL(ZEXT816(0),auVar57,DAT_01cd5158);
    uVar12 = NEON_ext(auVar67._0_8_,
                      CONCAT17(bVar26,CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14(bVar23,CONCAT13(
                                                  bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19)))))
                                              )),4,1);
    fVar49 = (float)((ulong)uVar12 >> 0x20);
    auVar44 = NEON_ext(auVar67,auVar67,8,1);
    fVar71 = (float)uVar8 * (float)uVar52 - (float)uVar72 * (float)uVar83;
    fVar86 = fVar17 * (float)((ulong)uVar52 >> 0x20) - (float)((ulong)uVar72 >> 0x20) * fVar86;
    fVar18 = (float)uVar11 * (float)uVar77 - (float)uVar66 * (float)uVar87;
    fVar3 = fVar3 * (float)((ulong)uVar77 >> 0x20) - (float)((ulong)uVar66 >> 0x20) * fVar50;
    fVar17 = (float)CONCAT13(bVar30,CONCAT12(bVar29,CONCAT11(bVar28,bVar27)));
    auVar54 = NEON_fmov(0x3f800000,4);
    fVar50 = (float)_DAT_01d4ab60 * fVar65 + (float)_DAT_01d4b9d0 * fVar86 +
             (float)_DAT_01d4b2f0 * fVar17 + auVar54._0_4_;
    fVar16 = (float)((ulong)_DAT_01d4ab60 >> 0x20) * fVar65 +
             (float)((ulong)_DAT_01d4b9d0 >> 0x20) * fVar86 +
             (float)((ulong)_DAT_01d4b2f0 >> 0x20) * fVar17 + auVar54._4_4_;
    fVar62 = (float)_UNK_01d4ab68 * fVar65 + (float)_UNK_01d4b9d8 * fVar86 +
             (float)_UNK_01d4b2f8 * fVar17 + auVar54._8_4_;
    fVar65 = (float)((ulong)_UNK_01d4ab68 >> 0x20) * fVar65 +
             (float)((ulong)_UNK_01d4b9d8 >> 0x20) * fVar86 +
             (float)((ulong)_UNK_01d4b2f8 >> 0x20) * fVar17 + auVar54._12_4_;
    fVar17 = (float)CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar23)));
    auVar73._0_4_ = fVar71 + (float)uVar12;
    auVar73._4_4_ = auVar44._0_4_ + fVar49;
    auVar73._8_4_ = fVar17 + fVar18;
    auVar73._12_4_ = 0;
    auVar78._0_4_ = (float)uVar12 - fVar71;
    auVar78._4_4_ = fVar49 - auVar44._0_4_;
    auVar78._8_4_ = fVar18 - fVar17;
    auVar78._12_4_ = 0;
    uVar52 = a64_TBL(ZEXT816(0),auVar73,auVar78,DAT_01cd5420);
    uVar82 = (undefined4)((ulong)uVar52 >> 0x20);
    uVar8 = a64_TBL(ZEXT816(0),auVar73,auVar78,DAT_01cd51d0);
    uVar81 = (undefined4)((ulong)uVar8 >> 0x20);
    auVar46._0_8_ = a64_TBL(ZEXT816(0),auVar73,auVar78,DAT_01cd5418);
    uVar12 = a64_TBL(ZEXT816(0),auVar73,auVar78,DAT_01cd5250);
    uVar11 = a64_TBL(ZEXT816(0),auVar73,auVar78,DAT_01cd50b8);
    auVar68._0_4_ = (undefined4)uVar52;
    auVar68._4_4_ = fVar16;
    auVar68._8_8_ = uVar12;
    uVar12 = a64_TBL(ZEXT816(0),auVar73,auVar78,DAT_01cd5190);
    lVar14 = *(long *)(*(long *)(param_1 + 0x830) + 0x1a8);
    uVar52 = a64_TBL(ZEXT816(0),auVar73,auVar78,DAT_01cd4f98);
    auVar79._4_4_ = fVar16;
    auVar79._0_4_ = fVar16;
    auVar79._8_4_ = fVar16;
    auVar79._12_4_ = fVar16;
    auVar46._12_4_ = (undefined4)((ulong)uVar11 >> 0x20);
    auVar46._8_4_ = fVar62;
    auVar89._4_4_ = fVar50;
    auVar89._0_4_ = fVar50;
    auVar89._8_4_ = fVar50;
    auVar89._12_4_ = fVar50;
    auVar84._0_8_ = CONCAT44(-(uint)(fVar50 <= fVar16),-(uint)(fVar50 <= fVar16));
    auVar84._8_4_ = -(uint)(fVar50 <= fVar16);
    auVar84._12_4_ = -(uint)(fVar50 <= fVar16);
    auVar88._8_8_ = auVar84._8_8_;
    auVar88._0_8_ = auVar84._0_8_;
    auVar10._4_4_ = uVar82;
    auVar10._0_4_ = fVar50;
    auVar10._8_4_ = (int)uVar8;
    auVar10._12_4_ = uVar81;
    auVar85._4_4_ = uVar82;
    auVar85._0_4_ = fVar50;
    auVar85._8_4_ = (int)uVar8;
    auVar85._12_4_ = uVar81;
    auVar85 = auVar85 ^ (auVar10 ^ auVar68) & auVar84;
    auVar69._4_4_ = fVar62;
    auVar69._0_4_ = fVar62;
    auVar69._8_4_ = fVar62;
    auVar69._12_4_ = fVar62;
    auVar89 = auVar89 ^ (auVar89 ^ auVar79) & auVar88;
    auVar74._0_8_ = CONCAT44(-(uint)(auVar89._4_4_ <= fVar62),-(uint)(auVar89._0_4_ <= fVar62));
    auVar74._8_4_ = -(uint)(auVar89._8_4_ <= fVar62);
    auVar74._12_4_ = -(uint)(auVar89._12_4_ <= fVar62);
    auVar80._8_8_ = auVar74._8_8_;
    auVar80._0_8_ = auVar74._0_8_;
    auVar85 = auVar85 ^ (auVar85 ^ auVar46) & auVar74;
    auVar89 = auVar89 ^ (auVar89 ^ auVar69) & auVar80;
    auVar47._0_4_ = -(uint)(auVar89._0_4_ <= fVar65);
    auVar47._4_4_ = -(uint)(auVar89._4_4_ <= fVar65);
    auVar47._8_4_ = -(uint)(auVar89._8_4_ <= fVar65);
    auVar47._12_4_ = -(uint)(auVar89._12_4_ <= fVar65);
    auVar9._8_4_ = (int)uVar52;
    auVar9._0_8_ = uVar12;
    auVar9._12_4_ = fVar65;
    auVar85 = auVar85 ^ (auVar85 ^ auVar9) & auVar47;
    fVar16 = auVar85._0_4_;
    auVar58._0_4_ = fVar16 * fVar16;
    fVar62 = auVar85._4_4_;
    auVar58._4_4_ = fVar62 * fVar62;
    fVar65 = auVar85._8_4_;
    auVar58._8_4_ = fVar65 * fVar65;
    fVar49 = auVar85._12_4_;
    auVar58._12_4_ = fVar49 * fVar49;
    auVar44 = NEON_ext(auVar58,auVar58,8,1);
    fVar50 = auVar44._0_4_ + auVar58._0_4_;
    fVar60 = auVar44._4_4_ + auVar58._4_4_;
    fVar17 = fVar50 + fVar60;
    fVar50 = fVar50 + fVar60;
    auVar59._8_8_ = CONCAT44(fVar50,fVar17);
    auVar59._0_8_ = CONCAT44(fVar50,fVar17);
    auVar44 = NEON_frsqrte(auVar59,4);
    auVar75._0_4_ = auVar44._0_4_ * fVar17;
    auVar75._4_4_ = auVar44._4_4_ * fVar50;
    auVar75._8_4_ = auVar44._8_4_ * fVar17;
    auVar75._12_4_ = auVar44._12_4_ * fVar50;
    auVar54 = NEON_frsqrts(auVar44,auVar75,4);
    auVar70._0_4_ = auVar44._0_4_ * auVar54._0_4_;
    auVar70._4_4_ = auVar44._4_4_ * auVar54._4_4_;
    auVar70._8_4_ = auVar44._8_4_ * auVar54._8_4_;
    auVar70._12_4_ = auVar44._12_4_ * auVar54._12_4_;
    auVar76._0_4_ = fVar17 * auVar70._0_4_;
    auVar76._4_4_ = fVar50 * auVar70._4_4_;
    auVar76._8_4_ = fVar17 * auVar70._8_4_;
    auVar76._12_4_ = fVar50 * auVar70._12_4_;
    iVar51 = -(uint)(fVar17 == 0.0);
    iVar61 = -(uint)(fVar50 == 0.0);
    iVar63 = -(uint)(fVar17 == 0.0);
    iVar64 = -(uint)(fVar50 == 0.0);
    auVar44 = NEON_frsqrts(auVar70,auVar76,4);
    fVar16 = auVar70._0_4_ * auVar44._0_4_ * fVar16;
    fVar62 = auVar70._4_4_ * auVar44._4_4_ * fVar62;
    fVar65 = auVar70._8_4_ * auVar44._8_4_ * fVar65;
    fVar49 = auVar70._12_4_ * auVar44._12_4_ * fVar49;
    auVar48._0_8_ =
         CONCAT17((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                  CONCAT16((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                           CONCAT15((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                    CONCAT14(SUB41(fVar62,0) & ~(byte)iVar61,
                                             CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                                      ~(byte)((uint)iVar51 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                                               ~(byte)((uint)iVar51 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar16 >> 8) &
                                                                        ~(byte)((uint)iVar51 >> 8),
                                                                        SUB41(fVar16,0) &
                                                                        ~(byte)iVar51)))))));
    auVar48[8] = SUB41(fVar65,0) & ~(byte)iVar63;
    auVar48[9] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar63 >> 8);
    auVar48[10] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
    auVar48[0xb] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
    auVar48[0xc] = SUB41(fVar49,0) & ~(byte)iVar64;
    auVar48[0xd] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar64 >> 8);
    auVar48[0xe] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
    auVar48[0xf] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
    *(long *)(lVar14 + 0x118) = auVar48._8_8_;
    *(undefined8 *)(lVar14 + 0x110) = auVar48._0_8_;
    uVar8 = DAT_02a71848;
    lVar14 = *(long *)(*(long *)(param_1 + 0x830) + 0x1a8);
    *(undefined8 *)(lVar14 + 0xe0) = DAT_02a71840;
    *(undefined8 *)(lVar14 + 0xe8) = uVar8;
    lVar14 = *(long *)(*(long *)(param_1 + 0x830) + 0x1a8);
    *(ulong *)(lVar14 + 0xd8) =
         CONCAT17((char)((uint)fVar3 >> 0x18),
                  CONCAT16((char)((uint)fVar3 >> 0x10),
                           CONCAT15((char)((uint)fVar3 >> 8),CONCAT14(SUB41(fVar3,0),fVar18))));
    *(ulong *)(lVar14 + 0xd0) =
         CONCAT17((char)((uint)fVar86 >> 0x18),
                  CONCAT16((char)((uint)fVar86 >> 0x10),
                           CONCAT15((char)((uint)fVar86 >> 8),CONCAT14(SUB41(fVar86,0),fVar71))));
    lVar14 = *(long *)(*(long *)(param_1 + 0x830) + 0x1a8);
    *(ulong *)(lVar14 + 200) =
         CONCAT17(bVar34,CONCAT16(bVar33,CONCAT15(bVar32,CONCAT14(bVar31,CONCAT13(bVar30,CONCAT12(
                                                  bVar29,CONCAT11(bVar28,bVar27)))))));
    *(ulong *)(lVar14 + 0xc0) =
         CONCAT17(bVar26,CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14(bVar23,CONCAT13(bVar22,CONCAT12(
                                                  bVar21,CONCAT11(bVar20,bVar19)))))));
    FUN_00794370(*(undefined8 *)(param_1 + 0x5e8),param_1 + 0x1a0);
    FUN_00794650(*(undefined8 *)(param_1 + 0x5e8),&DAT_02a71860);
    FUN_00794370(*(undefined8 *)(param_1 + 0x5f0),param_1 + 0x2b0);
    FUN_007946a0(*(undefined8 *)(param_1 + 0x5f0),1);
    lVar14 = FUN_01380080(*(undefined8 *)(param_1 + 0x608),auStack_38);
    *(undefined4 *)(lVar14 + 0x204) = 7;
    *(undefined8 *)(lVar14 + 0x218) = DAT_02a71838;
    *(undefined8 *)(lVar14 + 0x210) = DAT_02a71830;
    *(undefined8 *)(lVar14 + 0x228) = DAT_02a71848;
    *(undefined8 *)(lVar14 + 0x220) = DAT_02a71840;
    *(undefined8 *)(lVar14 + 0x230) = 0x400ccccd3f19999a;
    *(undefined1 *)(lVar14 + 0x200) = 1;
    pcVar15 = *(code **)(param_1 + 0x858);
    if (pcVar15 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x860) = 0;
      *(undefined8 *)(param_1 + 0x868) = 0;
      *(undefined8 *)(param_1 + 0x850) = 0;
      *(undefined8 *)(param_1 + 0x858) = 0;
      (*pcVar15)(param_1 + 0x870);
    }
    *(long *)(param_1 + 0x870) = param_1;
    *(undefined1 **)(param_1 + 0x850) = &LAB_013a3b00;
    *(undefined1 **)(param_1 + 0x868) = &LAB_013a3b60;
    *(undefined1 **)(param_1 + 0x858) = &LAB_013a3b40;
    *(undefined1 **)(param_1 + 0x860) = &LAB_013a3b50;
    pcVar15 = *(code **)(lVar14 + 0x2c8);
    local_a0[0] = param_1;
    if (pcVar15 != (code *)0x0) {
      *(undefined8 *)(lVar14 + 0x2d0) = 0;
      *(undefined8 *)(lVar14 + 0x2d8) = 0;
      *(undefined8 *)(lVar14 + 0x2c0) = 0;
      *(undefined8 *)(lVar14 + 0x2c8) = 0;
      (*pcVar15)(lVar14 + 0x2e0);
    }
    FUN_013a3dc0(local_a0,lVar14 + 0x2e0);
    *(undefined1 **)(lVar14 + 0x2d8) = &LAB_013a3dd0;
    *(code **)(lVar14 + 0x2c8) = FUN_013a3ca0;
    *(code **)(lVar14 + 0x2d0) = FUN_013a3dc0;
    *(undefined8 *)(lVar14 + 0x2c0) = &LAB_013a3b70;
    FUN_013a3ca0(local_a0);
  }
  return;
}


