/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130abb0; name: FUN_0130abb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0130abb0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float *pfVar31;
  float fVar32;
  byte bVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  float fVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar78;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  
  *(undefined8 *)(param_1 + 0x440) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0x42a00000;
  pfVar31 = (float *)FUN_012dcaa0();
  fVar11 = *pfVar31;
  fVar12 = pfVar31[1];
  fVar13 = pfVar31[2];
  fVar14 = pfVar31[3];
  fVar6 = (float)_DAT_01d4a010;
  uVar15 = (ulong)_DAT_01d4a010 >> 0x20;
  fVar45 = (float)_UNK_01d4a018;
  uVar16 = (ulong)_UNK_01d4a018 >> 0x20;
  pfVar31 = (float *)FUN_012dc8d0(param_1);
  uVar30 = DAT_01cd5418;
  uVar29 = DAT_01cd5270;
  uVar70 = DAT_01cd5120;
  uVar77 = DAT_01cd50f8;
  uVar69 = DAT_01cd4f90;
  fVar32 = *pfVar31;
  fVar34 = pfVar31[1];
  fVar44 = pfVar31[2];
  fVar74 = pfVar31[3];
  fVar58 = (float)_DAT_01d4ae80;
  fVar4 = fVar32 * fVar58;
  fVar64 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar66 = fVar34 * fVar64;
  fVar71 = (float)_UNK_01d4ae88;
  fVar80 = fVar44 * fVar71;
  fVar3 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  fVar72 = fVar74 * fVar3;
  auVar38._0_4_ = fVar32 * fVar32;
  auVar38._4_4_ = fVar34 * fVar34;
  auVar38._8_4_ = fVar44 * fVar44;
  auVar38._12_4_ = fVar74 * fVar74;
  auVar60 = NEON_ext(auVar38,auVar38,8,1);
  fVar34 = auVar60._0_4_ + auVar38._0_4_;
  fVar44 = auVar60._4_4_ + auVar38._4_4_;
  fVar32 = fVar34 + fVar44;
  fVar34 = fVar34 + fVar44;
  auVar39._8_8_ = CONCAT44(fVar34,fVar32);
  auVar39._0_8_ = CONCAT44(fVar34,fVar32);
  auVar60 = NEON_frecpe(auVar39,4);
  auVar65 = NEON_frecps(auVar60,auVar39,4);
  auVar61._0_4_ = auVar60._0_4_ * auVar65._0_4_;
  auVar61._4_4_ = auVar60._4_4_ * auVar65._4_4_;
  auVar61._8_4_ = auVar60._8_4_ * auVar65._8_4_;
  auVar61._12_4_ = auVar60._12_4_ * auVar65._12_4_;
  auVar60 = NEON_frecps(auVar61,auVar39,4);
  auVar40._0_4_ = -(uint)(fVar32 == 0.0);
  auVar40._4_4_ = -(uint)(fVar34 == 0.0);
  auVar40._8_4_ = -(uint)(fVar32 == 0.0);
  auVar40._12_4_ = -(uint)(fVar34 == 0.0);
  auVar41._0_4_ = fVar4 * auVar61._0_4_ * auVar60._0_4_;
  auVar41._4_4_ = fVar66 * auVar61._4_4_ * auVar60._4_4_;
  auVar41._8_4_ = fVar80 * auVar61._8_4_ * auVar60._8_4_;
  auVar41._12_4_ = fVar72 * auVar61._12_4_ * auVar60._12_4_;
  auVar60[4] = SUB41(fVar66,0);
  auVar60._0_4_ = fVar4;
  auVar60[5] = (char)((uint)fVar66 >> 8);
  auVar60[6] = (char)((uint)fVar66 >> 0x10);
  auVar60[7] = (char)((uint)fVar66 >> 0x18);
  auVar60[8] = SUB41(fVar80,0);
  auVar60[9] = (char)((uint)fVar80 >> 8);
  auVar60[10] = (char)((uint)fVar80 >> 0x10);
  auVar60[0xb] = (char)((uint)fVar80 >> 0x18);
  auVar60[0xc] = SUB41(fVar72,0);
  auVar60[0xd] = (char)((uint)fVar72 >> 8);
  auVar60[0xe] = (char)((uint)fVar72 >> 0x10);
  auVar60[0xf] = (char)((uint)fVar72 >> 0x18);
  auVar41 = auVar41 ^ (auVar41 ^ auVar60) & auVar40;
  auVar62._8_8_ = _UNK_01d4b578;
  auVar62._0_8_ = _DAT_01d4b570;
  uVar5 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd4f90);
  fVar4 = (float)((ulong)uVar5 >> 0x20);
  uVar37 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd50f8);
  uVar67 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd4f90);
  uVar73 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd5120);
  fVar66 = (float)((ulong)uVar37 >> 0x20);
  uVar68 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd5418);
  uVar35 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd50f8);
  fVar72 = (float)_DAT_01d4ae90;
  fVar32 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar34 = (float)_UNK_01d4ae98;
  fVar44 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar80 = (float)((ulong)uVar68 >> 0x20);
  uVar36 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd5418);
  uVar59 = a64_TBL(ZEXT816(0),auVar62,DAT_01cd5270);
  fVar74 = ((float)uVar5 * (float)_DAT_01d4b570 + fVar72 * auVar41._0_4_ * (float)uVar67 +
           fVar72 * (float)uVar68 * (float)uVar35) - (float)uVar37 * (float)uVar36;
  fVar78 = (fVar4 * (float)((ulong)_DAT_01d4b570 >> 0x20) +
            fVar32 * auVar41._4_4_ * (float)((ulong)uVar67 >> 0x20) +
           fVar32 * fVar80 * (float)((ulong)uVar35 >> 0x20)) -
           fVar66 * (float)((ulong)uVar36 >> 0x20);
  uVar35 = CONCAT44(fVar78,fVar74);
  fVar79 = ((float)uVar5 * (float)_UNK_01d4b578 + fVar34 * (float)uVar37 * (float)uVar73 +
           fVar34 * auVar41._0_4_ * 0.0) - (float)uVar68 * (float)uVar59;
  fVar80 = (fVar4 * (float)((ulong)_UNK_01d4b578 >> 0x20) +
            fVar44 * fVar66 * (float)((ulong)uVar73 >> 0x20) + fVar44 * auVar41._4_4_ * 0.0) -
           fVar80 * (float)((ulong)uVar59 >> 0x20);
  pfVar31 = (float *)FUN_012dcaa0(param_1);
  fVar4 = (fVar11 + fVar6) - *pfVar31;
  fVar66 = (fVar12 + (float)uVar15) - pfVar31[1];
  uVar46 = SUB41(fVar66,0);
  uVar47 = (undefined1)((uint)fVar66 >> 8);
  uVar48 = (undefined1)((uint)fVar66 >> 0x10);
  uVar49 = (undefined1)((uint)fVar66 >> 0x18);
  fVar6 = (fVar13 + fVar45) - pfVar31[2];
  uVar50 = SUB41(fVar6,0);
  uVar51 = (undefined1)((uint)fVar6 >> 8);
  uVar52 = (undefined1)((uint)fVar6 >> 0x10);
  uVar53 = (undefined1)((uint)fVar6 >> 0x18);
  fVar6 = (fVar14 + (float)uVar16) - pfVar31[3];
  uVar54 = SUB41(fVar6,0);
  uVar55 = (undefined1)((uint)fVar6 >> 8);
  uVar56 = (undefined1)((uint)fVar6 >> 0x10);
  uVar57 = (undefined1)((uint)fVar6 >> 0x18);
  auVar10._8_4_ = fVar79;
  auVar10._0_8_ = uVar35;
  auVar9._8_4_ = fVar79;
  auVar9._0_8_ = uVar35;
  auVar8._8_4_ = fVar79;
  auVar8._0_8_ = uVar35;
  fVar58 = fVar74 * fVar58;
  fVar64 = fVar78 * fVar64;
  auVar63._0_8_ = CONCAT44(fVar64,fVar58);
  auVar63._8_4_ = fVar79 * fVar71;
  auVar63._12_4_ = fVar80 * fVar3;
  auVar65[4] = uVar46;
  auVar65._0_4_ = fVar4;
  auVar65[5] = uVar47;
  auVar65[6] = uVar48;
  auVar65[7] = uVar49;
  auVar65[8] = uVar50;
  auVar65[9] = uVar51;
  auVar65[10] = uVar52;
  auVar65[0xb] = uVar53;
  auVar65[0xc] = uVar54;
  auVar65[0xd] = uVar55;
  auVar65[0xe] = uVar56;
  auVar65[0xf] = uVar57;
  uVar73 = a64_TBL(ZEXT816(0),auVar65,uVar30);
  uVar75 = a64_TBL(ZEXT816(0),auVar63,uVar69);
  uVar37 = a64_TBL(ZEXT816(0),auVar63,uVar70);
  auVar1[4] = uVar46;
  auVar1._0_4_ = fVar4;
  auVar1[5] = uVar47;
  auVar1[6] = uVar48;
  auVar1[7] = uVar49;
  auVar1[8] = uVar50;
  auVar1[9] = uVar51;
  auVar1[10] = uVar52;
  auVar1[0xb] = uVar53;
  auVar1[0xc] = uVar54;
  auVar1[0xd] = uVar55;
  auVar1[0xe] = uVar56;
  auVar1[0xf] = uVar57;
  uVar68 = a64_TBL(ZEXT816(0),auVar1,uVar77);
  auVar2[4] = uVar46;
  auVar2._0_4_ = fVar4;
  auVar2[5] = uVar47;
  auVar2[6] = uVar48;
  auVar2[7] = uVar49;
  auVar2[8] = uVar50;
  auVar2[9] = uVar51;
  auVar2[10] = uVar52;
  auVar2[0xb] = uVar53;
  auVar2[0xc] = uVar54;
  auVar2[0xd] = uVar55;
  auVar2[0xe] = uVar56;
  auVar2[0xf] = uVar57;
  uVar36 = a64_TBL(ZEXT816(0),auVar2,uVar69);
  uVar81 = a64_TBL(ZEXT816(0),auVar63,uVar30);
  auVar7._8_4_ = fVar58;
  auVar7._0_8_ = auVar63._0_8_;
  auVar7._12_4_ = fVar64;
  uVar35 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
  fVar6 = (float)((ulong)uVar68 >> 0x20);
  uVar76 = a64_TBL(ZEXT816(0),auVar63,uVar77);
  fVar45 = (float)((ulong)uVar36 >> 0x20);
  uVar59 = a64_TBL(ZEXT816(0),auVar63,uVar29);
  auVar8._12_4_ = fVar80;
  uVar67 = a64_TBL(ZEXT816(0),auVar8,uVar77);
  fVar71 = (float)((ulong)uVar73 >> 0x20);
  auVar9._12_4_ = fVar80;
  uVar5 = a64_TBL(ZEXT816(0),auVar9,uVar69);
  fVar58 = (fVar58 * (float)uVar36 + fVar72 * fVar4 * (float)uVar75 +
           fVar72 * (float)uVar73 * (float)uVar76) - (float)uVar68 * (float)uVar81;
  fVar64 = (fVar64 * fVar45 + fVar32 * fVar66 * (float)((ulong)uVar75 >> 0x20) +
           fVar32 * fVar71 * (float)((ulong)uVar76 >> 0x20)) -
           fVar6 * (float)((ulong)uVar81 >> 0x20);
  auVar42._0_8_ = CONCAT44(fVar64,fVar58);
  auVar42._8_4_ =
       (auVar63._8_4_ * (float)uVar36 + fVar34 * (float)uVar68 * (float)uVar37 +
       fVar34 * fVar4 * (float)uVar35) - (float)uVar73 * (float)uVar59;
  auVar42._12_4_ =
       (auVar63._12_4_ * fVar45 + fVar44 * fVar6 * (float)((ulong)uVar37 >> 0x20) +
       fVar44 * (float)(CONCAT17(uVar49,CONCAT16(uVar48,CONCAT15(uVar47,CONCAT14(uVar46,fVar4)))) >>
                       0x20) * (float)((ulong)uVar35 >> 0x20)) -
       fVar71 * (float)((ulong)uVar59 >> 0x20);
  uVar69 = a64_TBL(ZEXT816(0),auVar42,uVar69);
  uVar36 = a64_TBL(ZEXT816(0),auVar42,uVar70);
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  uVar59 = a64_TBL(ZEXT816(0),auVar42,uVar30);
  fVar45 = (float)((ulong)uVar67 >> 0x20);
  auVar10._12_4_ = fVar80;
  uVar70 = a64_TBL(ZEXT816(0),auVar10,uVar30);
  uVar35 = a64_TBL(ZEXT816(0),auVar42,uVar77);
  uVar77 = a64_TBL(ZEXT816(0),auVar42,uVar29);
  auVar43._8_8_ = auVar42._0_8_;
  auVar43._0_8_ = auVar42._0_8_;
  uVar37 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd50b0);
  fVar71 = (float)((ulong)uVar70 >> 0x20);
  fVar58 = ((float)uVar5 * fVar58 + fVar72 * fVar74 * (float)uVar69 +
           fVar72 * (float)uVar70 * (float)uVar35) - (float)uVar67 * (float)uVar59;
  fVar64 = (fVar6 * fVar64 + fVar32 * fVar78 * (float)((ulong)uVar69 >> 0x20) +
           fVar32 * fVar71 * (float)((ulong)uVar35 >> 0x20)) -
           fVar45 * (float)((ulong)uVar59 >> 0x20);
  fVar4 = ((float)uVar5 * auVar42._8_4_ + fVar34 * (float)uVar67 * (float)uVar36 +
          fVar34 * fVar74 * (float)uVar37) - (float)uVar70 * (float)uVar77;
  fVar6 = (fVar6 * auVar42._12_4_ + fVar44 * fVar45 * (float)((ulong)uVar36 >> 0x20) +
          fVar44 * fVar78 * (float)((ulong)uVar37 >> 0x20)) -
          fVar71 * (float)((ulong)uVar77 >> 0x20);
  bVar33 = (byte)DAT_01d4ab50;
  uVar15 = (ulong)DAT_01d4ab50 >> 8;
  uVar16 = (ulong)DAT_01d4ab50 >> 0x10;
  uVar17 = (ulong)DAT_01d4ab50 >> 0x18;
  uVar18 = (ulong)DAT_01d4ab50 >> 0x20;
  uVar19 = (ulong)DAT_01d4ab50 >> 0x28;
  uVar20 = (ulong)DAT_01d4ab50 >> 0x30;
  uVar21 = (ulong)DAT_01d4ab50 >> 0x38;
  uVar22 = (ulong)DAT_01d4ab58 >> 8;
  uVar23 = (ulong)DAT_01d4ab58 >> 0x10;
  uVar24 = (ulong)DAT_01d4ab58 >> 0x18;
  uVar25 = (ulong)DAT_01d4ab58 >> 0x20;
  uVar26 = (ulong)DAT_01d4ab58 >> 0x28;
  uVar27 = (ulong)DAT_01d4ab58 >> 0x30;
  uVar28 = (ulong)DAT_01d4ab58 >> 0x38;
  *(byte *)(param_1 + 0x3f8) = SUB41(fVar4,0) & (byte)DAT_01d4ab58;
  *(byte *)(param_1 + 0x3f9) = (byte)((uint)fVar4 >> 8) & (byte)uVar22;
  *(byte *)(param_1 + 0x3fa) = (byte)((uint)fVar4 >> 0x10) & (byte)uVar23;
  *(byte *)(param_1 + 0x3fb) = (byte)((uint)fVar4 >> 0x18) & (byte)uVar24;
  *(byte *)(param_1 + 0x3fc) = SUB41(fVar6,0) & (byte)uVar25;
  *(byte *)(param_1 + 0x3fd) = (byte)((uint)fVar6 >> 8) & (byte)uVar26;
  *(byte *)(param_1 + 0x3fe) = (byte)((uint)fVar6 >> 0x10) & (byte)uVar27;
  *(byte *)(param_1 + 0x3ff) = (byte)((uint)fVar6 >> 0x18) & (byte)uVar28;
  *(byte *)(param_1 + 0x3f0) = SUB41(fVar58,0) & bVar33;
  *(byte *)(param_1 + 0x3f1) = (byte)((uint)fVar58 >> 8) & (byte)uVar15;
  *(byte *)(param_1 + 0x3f2) = (byte)((uint)fVar58 >> 0x10) & (byte)uVar16;
  *(byte *)(param_1 + 0x3f3) = (byte)((uint)fVar58 >> 0x18) & (byte)uVar17;
  *(byte *)(param_1 + 0x3f4) = SUB41(fVar64,0) & (byte)uVar18;
  *(byte *)(param_1 + 0x3f5) = (byte)((uint)fVar64 >> 8) & (byte)uVar19;
  *(byte *)(param_1 + 0x3f6) = (byte)((uint)fVar64 >> 0x10) & (byte)uVar20;
  *(byte *)(param_1 + 0x3f7) = (byte)((uint)fVar64 >> 0x18) & (byte)uVar21;
  return;
}


