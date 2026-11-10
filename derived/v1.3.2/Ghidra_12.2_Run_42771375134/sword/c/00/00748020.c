/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00748020; name: FUN_00748020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00748020(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined *puVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  byte bVar24;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar54;
  ulong uVar48;
  float fVar55;
  float fVar56;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar67;
  undefined8 uVar60;
  undefined1 auVar61 [12];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [12];
  undefined8 uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  undefined8 uVar74;
  float fVar81;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar97;
  float fVar98;
  undefined1 in_q18 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  undefined8 uVar100;
  
  *(long *)(param_1 + 0x34) = param_2;
  uVar5 = _UNK_01d4a138;
  uVar60 = _DAT_01d4a130;
  if (*(char *)(param_2 + 0xc0) == '\0') {
    uVar60 = *(undefined8 *)(param_2 + 0x68);
    uVar19 = (undefined1)uVar60;
    uVar21 = (undefined1)((ulong)uVar60 >> 8);
    uVar23 = (undefined1)((ulong)uVar60 >> 0x10);
    uVar25 = (undefined1)((ulong)uVar60 >> 0x18);
    uVar60 = *(undefined8 *)(param_2 + 0x60);
    uVar38 = (undefined1)uVar60;
    uVar39 = (undefined1)((ulong)uVar60 >> 8);
    uVar40 = (undefined1)((ulong)uVar60 >> 0x10);
    uVar41 = (undefined1)((ulong)uVar60 >> 0x18);
    uVar42 = (undefined1)((ulong)uVar60 >> 0x20);
    uVar43 = (undefined1)((ulong)uVar60 >> 0x28);
    uVar44 = (undefined1)((ulong)uVar60 >> 0x30);
    uVar45 = (undefined1)((ulong)uVar60 >> 0x38);
    auVar64 = *(undefined1 (*) [16])(param_2 + 0x70);
    auVar61 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x80),0);
    auVar68 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x90),0);
  }
  else {
    uVar100 = *(undefined8 *)(param_2 + 0xa8);
    uVar47 = *(undefined8 *)(param_2 + 0xa0);
    auVar49 = *(undefined1 (*) [16])(param_2 + 0xb0);
    auVar68 = auVar49._0_12_;
    bVar18 = (byte)uVar47 & (byte)DAT_01d4ab50;
    bVar20 = (byte)((ulong)uVar47 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar22 = (byte)((ulong)uVar47 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar24 = (byte)((ulong)uVar47 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar26 = (byte)((ulong)uVar47 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar27 = (byte)((ulong)uVar47 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar28 = (byte)((ulong)uVar47 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar29 = (byte)((ulong)uVar47 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar30 = (byte)uVar100 & (byte)DAT_01d4ab58;
    bVar31 = (byte)((ulong)uVar100 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar32 = (byte)((ulong)uVar100 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar33 = (byte)((ulong)uVar100 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar34 = (byte)((ulong)uVar100 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar35 = (byte)((ulong)uVar100 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar36 = (byte)((ulong)uVar100 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar37 = (byte)((ulong)uVar100 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    uVar74 = NEON_ext(CONCAT17(bVar29,CONCAT16(bVar28,CONCAT15(bVar27,CONCAT14(bVar26,CONCAT13(
                                                  bVar24,CONCAT12(bVar22,CONCAT11(bVar20,bVar18)))))
                                              )),
                      CONCAT17(bVar29,CONCAT16(bVar28,CONCAT15(bVar27,CONCAT14(bVar26,CONCAT13(
                                                  bVar24,CONCAT12(bVar22,CONCAT11(bVar20,bVar18)))))
                                              )),4,1);
    auVar76[1] = bVar20;
    auVar76[0] = bVar18;
    auVar76[2] = bVar22;
    auVar76[3] = bVar24;
    auVar76[4] = bVar26;
    auVar76[5] = bVar27;
    auVar76[6] = bVar28;
    auVar76[7] = bVar29;
    auVar76[8] = bVar30;
    auVar76[9] = bVar31;
    auVar76[10] = bVar32;
    auVar76[0xb] = bVar33;
    auVar76[0xc] = bVar34;
    auVar76[0xd] = bVar35;
    auVar76[0xe] = bVar36;
    auVar76[0xf] = bVar37;
    uVar47 = a64_TBL(ZEXT816(0),auVar76,DAT_01cd5188);
    auVar91[1] = bVar20;
    auVar91[0] = bVar18;
    auVar91[2] = bVar22;
    auVar91[3] = bVar24;
    auVar91[4] = bVar26;
    auVar91[5] = bVar27;
    auVar91[6] = bVar28;
    auVar91[7] = bVar29;
    auVar91[8] = bVar30;
    auVar91[9] = bVar31;
    auVar91[10] = bVar32;
    auVar91[0xb] = bVar33;
    auVar91[0xc] = bVar34;
    auVar91[0xd] = bVar35;
    auVar91[0xe] = bVar36;
    auVar91[0xf] = bVar37;
    uVar59 = a64_TBL(ZEXT816(0),auVar91,DAT_01cd5048);
    auVar2[1] = bVar20;
    auVar2[0] = bVar18;
    auVar2[2] = bVar22;
    auVar2[3] = bVar24;
    auVar2[4] = bVar26;
    auVar2[5] = bVar27;
    auVar2[6] = bVar28;
    auVar2[7] = bVar29;
    auVar2[8] = bVar30;
    auVar2[9] = bVar31;
    auVar2[10] = bVar32;
    auVar2[0xb] = bVar33;
    auVar2[0xc] = bVar34;
    auVar2[0xd] = bVar35;
    auVar2[0xe] = bVar36;
    auVar2[0xf] = bVar37;
    uVar69 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5158);
    *(undefined1 *)(param_2 + 0xc0) = 0;
    fVar73 = (float)uVar74 * (float)uVar74;
    fVar81 = (float)((ulong)uVar74 >> 0x20);
    fVar81 = fVar81 * fVar81;
    fVar55 = (float)uVar47;
    fVar56 = (float)((ulong)uVar47 >> 0x20);
    fVar57 = (float)uVar59 * (float)uVar59;
    fVar67 = (float)((ulong)uVar59 >> 0x20);
    fVar67 = fVar67 * fVar67;
    fVar46 = (float)uVar69;
    fVar58 = (float)((ulong)uVar69 >> 0x20);
    fVar83 = (float)uVar60 - (fVar57 + fVar57 + fVar73 + fVar73);
    fVar84 = (float)((ulong)uVar60 >> 0x20) - (fVar67 + fVar67 + fVar81 + fVar81);
    fVar85 = (float)uVar5 - (fVar46 * fVar46 + fVar46 * fVar46 + fVar55 * fVar55 + fVar55 * fVar55);
    fVar86 = (float)((ulong)uVar5 >> 0x20) -
             (fVar58 * fVar58 + fVar58 * fVar58 + fVar56 * fVar56 + fVar56 * fVar56);
    auVar3[1] = bVar20;
    auVar3[0] = bVar18;
    auVar3[2] = bVar22;
    auVar3[3] = bVar24;
    auVar3[4] = bVar26;
    auVar3[5] = bVar27;
    auVar3[6] = bVar28;
    auVar3[7] = bVar29;
    auVar3[8] = bVar30;
    auVar3[9] = bVar31;
    auVar3[10] = bVar32;
    auVar3[0xb] = bVar33;
    auVar3[0xc] = bVar34;
    auVar3[0xd] = bVar35;
    auVar3[0xe] = bVar36;
    auVar3[0xf] = bVar37;
    uVar60 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
    fVar81 = (float)uVar60 * (float)CONCAT13(bVar24,CONCAT12(bVar22,CONCAT11(bVar20,bVar18)));
    fVar54 = (float)((ulong)uVar60 >> 0x20) *
             (float)CONCAT13(bVar29,CONCAT12(bVar28,CONCAT11(bVar27,bVar26)));
    fVar55 = fVar55 * (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
    fVar56 = fVar56 * (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34)));
    fVar81 = fVar81 + fVar81;
    fVar54 = fVar54 + fVar54;
    fVar55 = fVar55 + fVar55;
    fVar56 = fVar56 + fVar56;
    auVar4[1] = bVar20;
    auVar4[0] = bVar18;
    auVar4[2] = bVar22;
    auVar4[3] = bVar24;
    auVar4[4] = bVar26;
    auVar4[5] = bVar27;
    auVar4[6] = bVar28;
    auVar4[7] = bVar29;
    auVar4[8] = bVar30;
    auVar4[9] = bVar31;
    auVar4[10] = bVar32;
    auVar4[0xb] = bVar33;
    auVar4[0xc] = bVar34;
    auVar4[0xd] = bVar35;
    auVar4[0xe] = bVar36;
    auVar4[0xf] = bVar37;
    uVar60 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
    fVar73 = (float)((ulong)uVar100 >> 0x20);
    fVar57 = (float)uVar60 * fVar73;
    fVar67 = (float)((ulong)uVar60 >> 0x20) * fVar73;
    fVar57 = fVar57 + fVar57;
    fVar67 = fVar67 + fVar67;
    fVar46 = fVar46 * fVar73 + fVar46 * fVar73;
    fVar73 = fVar58 * fVar73 + fVar58 * fVar73;
    auVar70._0_4_ = fVar81 + fVar57;
    auVar70._4_4_ = fVar54 + fVar67;
    auVar70._8_4_ = fVar55 + fVar46;
    auVar70._12_4_ = fVar56 + fVar73;
    auVar75._0_4_ = fVar81 - fVar57;
    auVar75._4_4_ = fVar54 - fVar67;
    auVar75._8_4_ = fVar55 - fVar46;
    auVar75._12_4_ = fVar56 - fVar73;
    auVar89._0_8_ = a64_TBL(ZEXT816(0),auVar70,auVar75,DAT_01cd5250);
    uVar60 = a64_TBL(ZEXT816(0),auVar70,auVar75,DAT_01cd51f8);
    auVar89._8_8_ = uVar60;
    uVar100 = a64_TBL(ZEXT816(0),auVar70,auVar75,DAT_01cd5430);
    uVar60 = a64_TBL(ZEXT816(0),auVar70,auVar75,DAT_01cd5050);
    in_q18._12_4_ = fVar86;
    in_q18._8_4_ = fVar85;
    in_q18._4_4_ = fVar84;
    in_q18._0_4_ = fVar83;
    auVar13._8_8_ = uVar60;
    auVar13._0_8_ = uVar100;
    uVar47 = a64_TBL(ZEXT816(0),in_q18,auVar13,DAT_01cd50b8);
    uVar38 = (undefined1)uVar47;
    uVar39 = (undefined1)((ulong)uVar47 >> 8);
    uVar40 = (undefined1)((ulong)uVar47 >> 0x10);
    uVar41 = (undefined1)((ulong)uVar47 >> 0x18);
    uVar42 = (undefined1)((ulong)uVar47 >> 0x20);
    uVar43 = (undefined1)((ulong)uVar47 >> 0x28);
    uVar44 = (undefined1)((ulong)uVar47 >> 0x30);
    uVar45 = (undefined1)((ulong)uVar47 >> 0x38);
    auVar14._8_8_ = uVar60;
    auVar14._0_8_ = uVar100;
    uVar5 = a64_TBL(ZEXT816(0),in_q18,auVar14,DAT_01cd5308);
    uVar19 = (undefined1)uVar5;
    uVar21 = (undefined1)((ulong)uVar5 >> 8);
    uVar23 = (undefined1)((ulong)uVar5 >> 0x10);
    uVar25 = (undefined1)((ulong)uVar5 >> 0x18);
    auVar15._8_8_ = uVar60;
    auVar15._0_8_ = uVar100;
    auVar64._0_8_ = a64_TBL(ZEXT816(0),in_q18,auVar15,DAT_01cd5008);
    auVar16._8_8_ = uVar60;
    auVar16._0_8_ = uVar100;
    uVar100 = a64_TBL(ZEXT816(0),in_q18,auVar16,DAT_01cd4fb0);
    auVar64._8_8_ = uVar100;
    auVar11._4_4_ = fVar84;
    auVar11._0_4_ = fVar83;
    auVar11._8_4_ = fVar85;
    auVar11._12_4_ = fVar86;
    auVar62._0_8_ = a64_TBL(ZEXT816(0),auVar11,auVar89,DAT_01cd50d8);
    auVar12._4_4_ = fVar84;
    auVar12._0_4_ = fVar83;
    auVar12._8_4_ = fVar85;
    auVar12._12_4_ = fVar86;
    uVar60 = a64_TBL(ZEXT816(0),auVar12,auVar89,DAT_01cd4fb8);
    *(undefined8 *)(param_2 + 0x68) = uVar5;
    *(undefined8 *)(param_2 + 0x60) = uVar47;
    *(undefined8 *)(param_2 + 0x78) = uVar100;
    *(undefined8 *)(param_2 + 0x70) = auVar64._0_8_;
    auVar62._8_8_ = uVar60;
    auVar61 = auVar62._0_12_;
    *(undefined8 *)(param_2 + 0x88) = uVar60;
    *(undefined8 *)(param_2 + 0x80) = auVar62._0_8_;
    *(long *)(param_2 + 0x98) = auVar49._8_8_;
    *(long *)(param_2 + 0x90) = auVar49._0_8_;
    param_2 = *(long *)(param_1 + 0x34);
  }
  fVar58 = auVar61._0_4_;
  fVar81 = -fVar58;
  fVar83 = auVar61._4_4_;
  fVar54 = -fVar83;
  fVar84 = auVar61._8_4_;
  fVar55 = -fVar84;
  *param_1 = *(undefined4 *)(param_2 + 200);
  fVar57 = (float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38)));
  fVar46 = (float)(CONCAT17(uVar45,CONCAT16(uVar44,CONCAT15(uVar43,CONCAT14(uVar42,fVar57)))) >>
                  0x20);
  auVar93._4_12_ = in_q18._4_12_;
  auVar93._0_4_ = fVar57;
  auVar94._12_4_ = in_q18._12_4_;
  auVar94._0_8_ = auVar93._0_8_;
  auVar94._8_4_ = fVar58;
  auVar49._4_12_ = auVar64._4_12_;
  auVar49._0_4_ = auVar64._8_4_;
  uVar48 = auVar49._0_8_ & 0xffffffff;
  uVar6 = (undefined2)(CONCAT12(uVar21,CONCAT11(uVar19,uVar45)) >> 8);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  auVar71._0_4_ = fVar81 * fVar81;
  auVar71._4_4_ = fVar54 * fVar54;
  auVar71._8_4_ = fVar55 * fVar55;
  auVar71._12_4_ = 0;
  auVar76 = NEON_ext(auVar71,auVar71,8,1);
  fVar73 = auVar76._0_4_ + auVar71._0_4_;
  fVar56 = auVar76._4_4_ + auVar71._4_4_;
  fVar67 = fVar73 + fVar56;
  fVar73 = fVar73 + fVar56;
  auVar72._8_8_ = CONCAT44(fVar73,fVar67);
  auVar72._0_8_ = CONCAT44(fVar73,fVar67);
  auVar76 = NEON_frsqrte(auVar72,4);
  auVar90._0_4_ = auVar76._0_4_ * fVar67;
  auVar90._4_4_ = auVar76._4_4_ * fVar73;
  auVar90._8_4_ = auVar76._8_4_ * fVar67;
  auVar90._12_4_ = auVar76._12_4_ * fVar73;
  auVar91 = NEON_frsqrts(auVar76,auVar90,4);
  auVar77._0_4_ = auVar76._0_4_ * auVar91._0_4_;
  auVar77._4_4_ = auVar76._4_4_ * auVar91._4_4_;
  auVar77._8_4_ = auVar76._8_4_ * auVar91._8_4_;
  auVar77._12_4_ = auVar76._12_4_ * auVar91._12_4_;
  fVar85 = auVar68._0_4_;
  fVar86 = auVar68._4_4_;
  auVar50._0_4_ = fVar67 * auVar77._0_4_;
  auVar50._4_4_ = fVar73 * auVar77._4_4_;
  auVar50._8_4_ = fVar67 * auVar77._8_4_;
  auVar50._12_4_ = fVar73 * auVar77._12_4_;
  fVar87 = auVar68._8_4_;
  auVar76 = NEON_frsqrts(auVar77,auVar50,4);
  fVar81 = fVar81 * auVar77._0_4_ * auVar76._0_4_;
  fVar54 = fVar54 * auVar77._4_4_ * auVar76._4_4_;
  fVar55 = fVar55 * auVar77._8_4_ * auVar76._8_4_;
  fVar56 = auVar77._12_4_ * auVar76._12_4_ * 0.0;
  *(ulong *)(param_1 + 0x2e) = (ulong)(uint)fVar84;
  *(ulong *)(param_1 + 0x2c) =
       CONCAT17((char)(uVar48 >> 0x18),
                CONCAT16((char)(uVar48 >> 0x10),
                         CONCAT15((char)(uVar48 >> 8),
                                  CONCAT14((char)uVar48,CONCAT13(uVar25,CONCAT12(uVar23,uVar6))))));
  param_1[0x32] = 0.0 - (fVar58 * fVar85 + fVar83 * fVar86 + fVar84 * fVar87);
  param_1[0x33] = 0.0 - (fVar85 * 0.0 + fVar86 * 0.0 + fVar87 * 0.0);
  param_1[0x30] =
       0.0 - (fVar57 * fVar85 + fVar46 * fVar86 +
             (float)CONCAT13(uVar25,CONCAT12(uVar23,uVar6)) * fVar87);
  param_1[0x31] = 0.0 - (auVar64._0_4_ * fVar85 + auVar64._4_4_ * fVar86 + auVar64._8_4_ * fVar87);
  puVar17 = PTR_Float1Divided2Pi_02715148;
  iVar7 = -(uint)(fVar67 == 0.0);
  iVar8 = -(uint)(fVar73 == 0.0);
  iVar9 = -(uint)(fVar67 == 0.0);
  iVar10 = -(uint)(fVar73 == 0.0);
  *(ulong *)(param_1 + 0x26) = auVar94._8_8_ & 0xffffffff;
  *(ulong *)(param_1 + 0x24) = CONCAT44(auVar64._0_4_,fVar57);
  *(ulong *)(param_1 + 0x2a) = (ulong)(uint)fVar83;
  *(ulong *)(param_1 + 0x28) = CONCAT44(auVar64._4_4_,fVar46);
  fVar73 = *(float *)puVar17;
  param_1[1] = uVar1;
  *(ulong *)(param_1 + 10) =
       CONCAT17((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                CONCAT16((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                         CONCAT15((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                  CONCAT14(SUB41(fVar56,0) & ~(byte)iVar10,
                                           CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                                    ~(byte)((uint)iVar9 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                             ~(byte)((uint)iVar9 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar55 >> 8) &
                                                                      ~(byte)((uint)iVar9 >> 8),
                                                                      SUB41(fVar55,0) & ~(byte)iVar9
                                                                     )))))));
  *(ulong *)(param_1 + 8) =
       CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                CONCAT16((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                         CONCAT15((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                  CONCAT14(SUB41(fVar54,0) & ~(byte)iVar8,
                                           CONCAT13((byte)((uint)fVar81 >> 0x18) &
                                                    ~(byte)((uint)iVar7 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                                             ~(byte)((uint)iVar7 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar81 >> 8) &
                                                                      ~(byte)((uint)iVar7 >> 8),
                                                                      SUB41(fVar81,0) & ~(byte)iVar7
                                                                     )))))));
  fVar81 = *(float *)(param_2 + 0xd4);
  fVar46 = *(float *)(param_2 + 0xd0) * 0.5;
  fVar73 = fVar46 * fVar73;
  fVar57 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar67 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar54 = *(float *)PTR_Float2Pi_02715150;
  fVar55 = *(float *)PTR_FloatPiDivided2_02715158;
  fVar86 = *(float *)PTR_SinCoefficients_02715168;
  auVar63._0_4_ = (int)(fVar73 + (float)(-(uint)(0.0 <= fVar73) & 0x80000000 ^ 0xbf000000));
  auVar63._4_4_ = (int)(fVar73 + (float)(-(uint)(0.0 <= fVar73) & 0x80000000 ^ 0xbf000000));
  auVar63._8_4_ = (int)(fVar73 + (float)(-(uint)(0.0 <= fVar73) & 0x80000000 ^ 0xbf000000));
  auVar63._12_4_ = (int)(fVar73 + (float)(-(uint)(0.0 <= fVar73) & 0x80000000 ^ 0xbf000000));
  fVar73 = *(float *)PTR_FloatPi_02715160;
  auVar64 = NEON_scvtf(auVar63,4);
  auVar96._0_4_ = fVar46 - auVar64._0_4_ * fVar54;
  auVar96._4_4_ = fVar46 - auVar64._4_4_ * fVar54;
  auVar96._8_4_ = fVar46 - auVar64._8_4_ * fVar54;
  auVar96._12_4_ = fVar46 - auVar64._12_4_ * fVar54;
  fVar46 = -fVar55;
  auVar65._0_8_ = CONCAT44(-(uint)(fVar55 < auVar96._4_4_),-(uint)(fVar55 < auVar96._0_4_));
  auVar65._8_4_ = -(uint)(fVar55 < auVar96._8_4_);
  auVar65._12_4_ = -(uint)(fVar55 < auVar96._12_4_);
  fVar54 = -fVar73;
  auVar78._0_4_ = fVar73 - auVar96._0_4_;
  auVar78._4_4_ = fVar73 - auVar96._4_4_;
  auVar78._8_4_ = fVar73 - auVar96._8_4_;
  auVar78._12_4_ = fVar73 - auVar96._12_4_;
  auVar95._8_8_ = auVar65._8_8_;
  auVar95._0_8_ = auVar65._0_8_;
  auVar96 = auVar96 ^ (auVar96 ^ auVar78) & auVar95;
  auVar51._0_8_ = CONCAT44(-(uint)(auVar96._4_4_ < fVar46),-(uint)(auVar96._0_4_ < fVar46));
  auVar51._8_4_ = -(uint)(auVar96._8_4_ < fVar46);
  auVar51._12_4_ = -(uint)(auVar96._12_4_ < fVar46);
  auVar79._0_4_ = fVar54 - auVar96._0_4_;
  auVar79._4_4_ = fVar54 - auVar96._4_4_;
  auVar79._8_4_ = fVar54 - auVar96._8_4_;
  auVar79._12_4_ = fVar54 - auVar96._12_4_;
  fVar85 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  auVar82._8_8_ = auVar51._8_8_;
  auVar82._0_8_ = auVar51._0_8_;
  auVar96 = auVar96 ^ (auVar96 ^ auVar79) & auVar82;
  fVar56 = auVar96._0_4_;
  fVar92 = fVar56 * fVar56;
  fVar58 = auVar96._4_4_;
  fVar97 = fVar58 * fVar58;
  fVar83 = auVar96._8_4_;
  fVar98 = fVar83 * fVar83;
  fVar84 = auVar96._12_4_;
  fVar99 = fVar84 * fVar84;
  fVar54 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  fVar87 = *(float *)PTR_CosCoefficients_02715170;
  fVar88 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
  fVar46 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar73 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  fVar55 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
  auVar91 = NEON_fmov(0xbf800000,4);
  auVar76 = NEON_fmov(0x3f800000,4);
  auVar64 = auVar76 ^ (auVar76 ^ auVar91) & auVar65;
  auVar64 = auVar64 ^ (auVar64 ^ auVar91) & auVar51;
  auVar52._0_4_ =
       ((auVar76._0_4_ +
        fVar92 * (fVar85 + fVar92 * (fVar46 + fVar92 * (fVar54 + fVar92 * (fVar57 - fVar92 * fVar86)
                                                       )))) * fVar56) /
       ((auVar76._0_4_ +
        fVar92 * (fVar55 + fVar92 * (fVar73 + fVar92 * (fVar88 + fVar92 * (fVar67 - fVar92 * fVar87)
                                                       )))) * auVar64._0_4_);
  auVar52._4_4_ =
       ((auVar76._4_4_ +
        fVar97 * (fVar85 + fVar97 * (fVar46 + fVar97 * (fVar54 + fVar97 * (fVar57 - fVar97 * fVar86)
                                                       )))) * fVar58) /
       ((auVar76._4_4_ +
        fVar97 * (fVar55 + fVar97 * (fVar73 + fVar97 * (fVar88 + fVar97 * (fVar67 - fVar97 * fVar87)
                                                       )))) * auVar64._4_4_);
  auVar52._8_4_ =
       ((auVar76._8_4_ +
        fVar98 * (fVar85 + fVar98 * (fVar46 + fVar98 * (fVar54 + fVar98 * (fVar57 - fVar98 * fVar86)
                                                       )))) * fVar83) /
       ((auVar76._8_4_ +
        fVar98 * (fVar55 + fVar98 * (fVar73 + fVar98 * (fVar88 + fVar98 * (fVar67 - fVar98 * fVar87)
                                                       )))) * auVar64._8_4_);
  auVar52._12_4_ =
       ((auVar76._12_4_ +
        fVar99 * (fVar85 + fVar99 * (fVar46 + fVar99 * (fVar54 + fVar99 * (fVar57 - fVar99 * fVar86)
                                                       )))) * fVar84) /
       ((auVar76._12_4_ +
        fVar99 * (fVar55 + fVar99 * (fVar73 + fVar99 * (fVar88 + fVar99 * (fVar67 - fVar99 * fVar87)
                                                       )))) * auVar64._12_4_);
  auVar64 = NEON_frecpe(auVar52,4);
  auVar76 = NEON_frecps(auVar64,auVar52,4);
  auVar66._0_4_ = auVar64._0_4_ * auVar76._0_4_;
  auVar66._4_4_ = auVar64._4_4_ * auVar76._4_4_;
  auVar66._8_4_ = auVar64._8_4_ * auVar76._8_4_;
  auVar66._12_4_ = auVar64._12_4_ * auVar76._12_4_;
  fVar57 = *(float *)(param_2 + 200);
  fVar67 = *(float *)(param_2 + 0xcc);
  auVar64 = NEON_frecps(auVar66,auVar52,4);
  fVar46 = -1.0 / (fVar67 - fVar57);
  auVar53._0_4_ = auVar66._0_4_ * auVar64._0_4_;
  auVar53._4_4_ = auVar66._4_4_ * auVar64._4_4_;
  auVar53._8_4_ = auVar66._8_4_ * auVar64._8_4_;
  auVar53._12_4_ = auVar66._12_4_ * auVar64._12_4_;
  auVar80._0_12_ = SUB1612(ZEXT816(0),0);
  auVar80._12_4_ = 0;
  auVar64 = NEON_ext(auVar80,auVar53,4,1);
  auVar64 = NEON_ext(auVar64,auVar64,8,1);
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x14] = auVar53._0_4_ / fVar81;
  param_1[0x15] = 0;
  *(long *)(param_1 + 0x1a) = auVar64._8_8_;
  *(long *)(param_1 + 0x18) = auVar64._0_8_;
  param_1[0x1e] = (fVar57 + fVar67) * fVar46;
  param_1[0x1f] = 0xbf800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(ulong *)(param_1 + 0x22) = (ulong)(uint)((fVar57 * fVar67 + fVar57 * fVar67) * fVar46);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


