/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130b260; name: FUN_0130b260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0130b260(long param_1)

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
  long lVar32;
  float fVar33;
  byte bVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar65;
  undefined1 auVar64 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar79;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  
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
  fVar46 = (float)_UNK_01d4a018;
  uVar16 = (ulong)_UNK_01d4a018 >> 0x20;
  pfVar31 = (float *)FUN_012dc8d0(param_1);
  uVar30 = DAT_01cd5418;
  uVar29 = DAT_01cd5270;
  uVar71 = DAT_01cd5120;
  uVar78 = DAT_01cd50f8;
  uVar70 = DAT_01cd4f90;
  fVar33 = *pfVar31;
  fVar35 = pfVar31[1];
  fVar45 = pfVar31[2];
  fVar75 = pfVar31[3];
  fVar59 = (float)_DAT_01d4ae80;
  fVar4 = fVar33 * fVar59;
  fVar65 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar67 = fVar35 * fVar65;
  fVar72 = (float)_UNK_01d4ae88;
  fVar81 = fVar45 * fVar72;
  fVar3 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  fVar73 = fVar75 * fVar3;
  auVar39._0_4_ = fVar33 * fVar33;
  auVar39._4_4_ = fVar35 * fVar35;
  auVar39._8_4_ = fVar45 * fVar45;
  auVar39._12_4_ = fVar75 * fVar75;
  auVar61 = NEON_ext(auVar39,auVar39,8,1);
  fVar35 = auVar61._0_4_ + auVar39._0_4_;
  fVar45 = auVar61._4_4_ + auVar39._4_4_;
  fVar33 = fVar35 + fVar45;
  fVar35 = fVar35 + fVar45;
  auVar40._8_8_ = CONCAT44(fVar35,fVar33);
  auVar40._0_8_ = CONCAT44(fVar35,fVar33);
  auVar61 = NEON_frecpe(auVar40,4);
  auVar66 = NEON_frecps(auVar61,auVar40,4);
  auVar62._0_4_ = auVar61._0_4_ * auVar66._0_4_;
  auVar62._4_4_ = auVar61._4_4_ * auVar66._4_4_;
  auVar62._8_4_ = auVar61._8_4_ * auVar66._8_4_;
  auVar62._12_4_ = auVar61._12_4_ * auVar66._12_4_;
  auVar61 = NEON_frecps(auVar62,auVar40,4);
  auVar41._0_4_ = -(uint)(fVar33 == 0.0);
  auVar41._4_4_ = -(uint)(fVar35 == 0.0);
  auVar41._8_4_ = -(uint)(fVar33 == 0.0);
  auVar41._12_4_ = -(uint)(fVar35 == 0.0);
  auVar42._0_4_ = fVar4 * auVar62._0_4_ * auVar61._0_4_;
  auVar42._4_4_ = fVar67 * auVar62._4_4_ * auVar61._4_4_;
  auVar42._8_4_ = fVar81 * auVar62._8_4_ * auVar61._8_4_;
  auVar42._12_4_ = fVar73 * auVar62._12_4_ * auVar61._12_4_;
  auVar61[4] = SUB41(fVar67,0);
  auVar61._0_4_ = fVar4;
  auVar61[5] = (char)((uint)fVar67 >> 8);
  auVar61[6] = (char)((uint)fVar67 >> 0x10);
  auVar61[7] = (char)((uint)fVar67 >> 0x18);
  auVar61[8] = SUB41(fVar81,0);
  auVar61[9] = (char)((uint)fVar81 >> 8);
  auVar61[10] = (char)((uint)fVar81 >> 0x10);
  auVar61[0xb] = (char)((uint)fVar81 >> 0x18);
  auVar61[0xc] = SUB41(fVar73,0);
  auVar61[0xd] = (char)((uint)fVar73 >> 8);
  auVar61[0xe] = (char)((uint)fVar73 >> 0x10);
  auVar61[0xf] = (char)((uint)fVar73 >> 0x18);
  auVar42 = auVar42 ^ (auVar42 ^ auVar61) & auVar41;
  auVar63._8_8_ = _UNK_01d4b578;
  auVar63._0_8_ = _DAT_01d4b570;
  uVar5 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd4f90);
  fVar4 = (float)((ulong)uVar5 >> 0x20);
  uVar38 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd50f8);
  uVar68 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd4f90);
  uVar74 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd5120);
  fVar67 = (float)((ulong)uVar38 >> 0x20);
  uVar69 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd5418);
  uVar36 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd50f8);
  fVar73 = (float)_DAT_01d4ae90;
  fVar33 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar35 = (float)_UNK_01d4ae98;
  fVar45 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar81 = (float)((ulong)uVar69 >> 0x20);
  uVar37 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd5418);
  uVar60 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd5270);
  fVar75 = ((float)uVar5 * (float)_DAT_01d4b570 + fVar73 * auVar42._0_4_ * (float)uVar68 +
           fVar73 * (float)uVar69 * (float)uVar36) - (float)uVar38 * (float)uVar37;
  fVar79 = (fVar4 * (float)((ulong)_DAT_01d4b570 >> 0x20) +
            fVar33 * auVar42._4_4_ * (float)((ulong)uVar68 >> 0x20) +
           fVar33 * fVar81 * (float)((ulong)uVar36 >> 0x20)) -
           fVar67 * (float)((ulong)uVar37 >> 0x20);
  uVar36 = CONCAT44(fVar79,fVar75);
  fVar80 = ((float)uVar5 * (float)_UNK_01d4b578 + fVar35 * (float)uVar38 * (float)uVar74 +
           fVar35 * auVar42._0_4_ * 0.0) - (float)uVar69 * (float)uVar60;
  fVar81 = (fVar4 * (float)((ulong)_UNK_01d4b578 >> 0x20) +
            fVar45 * fVar67 * (float)((ulong)uVar74 >> 0x20) + fVar45 * auVar42._4_4_ * 0.0) -
           fVar81 * (float)((ulong)uVar60 >> 0x20);
  pfVar31 = (float *)FUN_012dcaa0(param_1);
  fVar4 = (fVar11 + fVar6) - *pfVar31;
  fVar67 = (fVar12 + (float)uVar15) - pfVar31[1];
  uVar47 = SUB41(fVar67,0);
  uVar48 = (undefined1)((uint)fVar67 >> 8);
  uVar49 = (undefined1)((uint)fVar67 >> 0x10);
  uVar50 = (undefined1)((uint)fVar67 >> 0x18);
  fVar6 = (fVar13 + fVar46) - pfVar31[2];
  uVar51 = SUB41(fVar6,0);
  uVar52 = (undefined1)((uint)fVar6 >> 8);
  uVar53 = (undefined1)((uint)fVar6 >> 0x10);
  uVar54 = (undefined1)((uint)fVar6 >> 0x18);
  fVar6 = (fVar14 + (float)uVar16) - pfVar31[3];
  uVar55 = SUB41(fVar6,0);
  uVar56 = (undefined1)((uint)fVar6 >> 8);
  uVar57 = (undefined1)((uint)fVar6 >> 0x10);
  uVar58 = (undefined1)((uint)fVar6 >> 0x18);
  auVar10._8_4_ = fVar80;
  auVar10._0_8_ = uVar36;
  auVar9._8_4_ = fVar80;
  auVar9._0_8_ = uVar36;
  auVar8._8_4_ = fVar80;
  auVar8._0_8_ = uVar36;
  fVar59 = fVar75 * fVar59;
  fVar65 = fVar79 * fVar65;
  auVar64._0_8_ = CONCAT44(fVar65,fVar59);
  auVar64._8_4_ = fVar80 * fVar72;
  auVar64._12_4_ = fVar81 * fVar3;
  auVar66[4] = uVar47;
  auVar66._0_4_ = fVar4;
  auVar66[5] = uVar48;
  auVar66[6] = uVar49;
  auVar66[7] = uVar50;
  auVar66[8] = uVar51;
  auVar66[9] = uVar52;
  auVar66[10] = uVar53;
  auVar66[0xb] = uVar54;
  auVar66[0xc] = uVar55;
  auVar66[0xd] = uVar56;
  auVar66[0xe] = uVar57;
  auVar66[0xf] = uVar58;
  uVar74 = a64_TBL(ZEXT816(0),auVar66,uVar30);
  uVar76 = a64_TBL(ZEXT816(0),auVar64,uVar70);
  uVar38 = a64_TBL(ZEXT816(0),auVar64,uVar71);
  auVar1[4] = uVar47;
  auVar1._0_4_ = fVar4;
  auVar1[5] = uVar48;
  auVar1[6] = uVar49;
  auVar1[7] = uVar50;
  auVar1[8] = uVar51;
  auVar1[9] = uVar52;
  auVar1[10] = uVar53;
  auVar1[0xb] = uVar54;
  auVar1[0xc] = uVar55;
  auVar1[0xd] = uVar56;
  auVar1[0xe] = uVar57;
  auVar1[0xf] = uVar58;
  uVar69 = a64_TBL(ZEXT816(0),auVar1,uVar78);
  auVar2[4] = uVar47;
  auVar2._0_4_ = fVar4;
  auVar2[5] = uVar48;
  auVar2[6] = uVar49;
  auVar2[7] = uVar50;
  auVar2[8] = uVar51;
  auVar2[9] = uVar52;
  auVar2[10] = uVar53;
  auVar2[0xb] = uVar54;
  auVar2[0xc] = uVar55;
  auVar2[0xd] = uVar56;
  auVar2[0xe] = uVar57;
  auVar2[0xf] = uVar58;
  uVar37 = a64_TBL(ZEXT816(0),auVar2,uVar70);
  uVar82 = a64_TBL(ZEXT816(0),auVar64,uVar30);
  auVar7._8_4_ = fVar59;
  auVar7._0_8_ = auVar64._0_8_;
  auVar7._12_4_ = fVar65;
  uVar36 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
  fVar6 = (float)((ulong)uVar69 >> 0x20);
  uVar77 = a64_TBL(ZEXT816(0),auVar64,uVar78);
  fVar46 = (float)((ulong)uVar37 >> 0x20);
  uVar60 = a64_TBL(ZEXT816(0),auVar64,uVar29);
  auVar8._12_4_ = fVar81;
  uVar68 = a64_TBL(ZEXT816(0),auVar8,uVar78);
  fVar72 = (float)((ulong)uVar74 >> 0x20);
  auVar9._12_4_ = fVar81;
  uVar5 = a64_TBL(ZEXT816(0),auVar9,uVar70);
  fVar59 = (fVar59 * (float)uVar37 + fVar73 * fVar4 * (float)uVar76 +
           fVar73 * (float)uVar74 * (float)uVar77) - (float)uVar69 * (float)uVar82;
  fVar65 = (fVar65 * fVar46 + fVar33 * fVar67 * (float)((ulong)uVar76 >> 0x20) +
           fVar33 * fVar72 * (float)((ulong)uVar77 >> 0x20)) -
           fVar6 * (float)((ulong)uVar82 >> 0x20);
  auVar43._0_8_ = CONCAT44(fVar65,fVar59);
  auVar43._8_4_ =
       (auVar64._8_4_ * (float)uVar37 + fVar35 * (float)uVar69 * (float)uVar38 +
       fVar35 * fVar4 * (float)uVar36) - (float)uVar74 * (float)uVar60;
  auVar43._12_4_ =
       (auVar64._12_4_ * fVar46 + fVar45 * fVar6 * (float)((ulong)uVar38 >> 0x20) +
       fVar45 * (float)(CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(uVar47,fVar4)))) >>
                       0x20) * (float)((ulong)uVar36 >> 0x20)) -
       fVar72 * (float)((ulong)uVar60 >> 0x20);
  uVar70 = a64_TBL(ZEXT816(0),auVar43,uVar70);
  uVar37 = a64_TBL(ZEXT816(0),auVar43,uVar71);
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  uVar60 = a64_TBL(ZEXT816(0),auVar43,uVar30);
  fVar46 = (float)((ulong)uVar68 >> 0x20);
  auVar10._12_4_ = fVar81;
  uVar71 = a64_TBL(ZEXT816(0),auVar10,uVar30);
  uVar36 = a64_TBL(ZEXT816(0),auVar43,uVar78);
  uVar78 = a64_TBL(ZEXT816(0),auVar43,uVar29);
  auVar44._8_8_ = auVar43._0_8_;
  auVar44._0_8_ = auVar43._0_8_;
  uVar38 = a64_TBL(ZEXT816(0),auVar44,DAT_01cd50b0);
  fVar72 = (float)((ulong)uVar71 >> 0x20);
  fVar59 = ((float)uVar5 * fVar59 + fVar73 * fVar75 * (float)uVar70 +
           fVar73 * (float)uVar71 * (float)uVar36) - (float)uVar68 * (float)uVar60;
  fVar65 = (fVar6 * fVar65 + fVar33 * fVar79 * (float)((ulong)uVar70 >> 0x20) +
           fVar33 * fVar72 * (float)((ulong)uVar36 >> 0x20)) -
           fVar46 * (float)((ulong)uVar60 >> 0x20);
  fVar4 = ((float)uVar5 * auVar43._8_4_ + fVar35 * (float)uVar68 * (float)uVar37 +
          fVar35 * fVar75 * (float)uVar38) - (float)uVar71 * (float)uVar78;
  fVar6 = (fVar6 * auVar43._12_4_ + fVar45 * fVar46 * (float)((ulong)uVar37 >> 0x20) +
          fVar45 * fVar79 * (float)((ulong)uVar38 >> 0x20)) -
          fVar72 * (float)((ulong)uVar78 >> 0x20);
  bVar34 = (byte)DAT_01d4ab50;
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
  *(byte *)(param_1 + 0x3f0) = SUB41(fVar59,0) & bVar34;
  *(byte *)(param_1 + 0x3f1) = (byte)((uint)fVar59 >> 8) & (byte)uVar15;
  *(byte *)(param_1 + 0x3f2) = (byte)((uint)fVar59 >> 0x10) & (byte)uVar16;
  *(byte *)(param_1 + 0x3f3) = (byte)((uint)fVar59 >> 0x18) & (byte)uVar17;
  *(byte *)(param_1 + 0x3f4) = SUB41(fVar65,0) & (byte)uVar18;
  *(byte *)(param_1 + 0x3f5) = (byte)((uint)fVar65 >> 8) & (byte)uVar19;
  *(byte *)(param_1 + 0x3f6) = (byte)((uint)fVar65 >> 0x10) & (byte)uVar20;
  *(byte *)(param_1 + 0x3f7) = (byte)((uint)fVar65 >> 0x18) & (byte)uVar21;
  lVar32 = *(long *)(*(long *)(param_1 + 0x410) + 0x1a8);
  *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(lVar32 + 0x118);
  *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(lVar32 + 0x110);
  lVar32 = *(long *)(*(long *)(param_1 + 0x410) + 0x1a8);
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(lVar32 + 0x118);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(lVar32 + 0x110);
  return;
}


