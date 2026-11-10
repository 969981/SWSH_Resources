/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb3960; name: FUN_00eb3960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb3960(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
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
  float fVar32;
  float fVar33;
  float fVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  float fVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  
  if (-1 < *(int *)(param_1 + 0x730)) {
    lVar37 = *(long *)(*(long *)(param_1 + 0x410) + 0x60);
    uVar35 = FUN_00a8cbe0(lVar37);
    lVar37 = lVar37 + -0x50;
    if ((uVar35 & 1) == 0) {
      lVar37 = 0;
    }
    lVar38 = *(long *)(*(long *)(lVar37 + 0x350) + 0x1b8) + (long)*(int *)(param_1 + 0x730) * 0x130;
    lVar37 = *(long *)(lVar38 + 0x120);
    iVar1 = *(int *)(*(long *)(lVar38 + 0x128) + 0x40);
    FUN_00723030(lVar37,iVar1);
    lVar36 = *(long *)(lVar37 + 0x1b8) + (long)iVar1 * 0x130;
    fVar72 = (float)*(undefined8 *)(lVar37 + 0x68);
    fVar73 = (float)((ulong)*(undefined8 *)(lVar37 + 0x68) >> 0x20);
    fVar68 = (float)*(undefined8 *)(lVar37 + 0x60);
    fVar69 = (float)((ulong)*(undefined8 *)(lVar37 + 0x60) >> 0x20);
    fVar76 = (float)*(undefined8 *)(lVar37 + 0x78);
    fVar77 = (float)((ulong)*(undefined8 *)(lVar37 + 0x78) >> 0x20);
    fVar74 = (float)*(undefined8 *)(lVar37 + 0x70);
    fVar75 = (float)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20);
    fVar46 = *(float *)(lVar36 + 0xa0);
    fVar40 = *(float *)(lVar36 + 0xa4);
    fVar43 = *(float *)(lVar36 + 0xa8);
    fVar39 = (float)*(undefined8 *)(lVar36 + 0xb0);
    fVar42 = (float)((ulong)*(undefined8 *)(lVar36 + 0xb0) >> 0x20);
    fVar45 = *(float *)(lVar36 + 0xc0);
    fVar47 = *(float *)(lVar36 + 0xc4);
    fVar21 = *(float *)(lVar36 + 200);
    fVar22 = *(float *)(lVar36 + 0xd0);
    fVar23 = *(float *)(lVar36 + 0xd4);
    fVar24 = *(float *)(lVar36 + 0xd8);
    fVar25 = *(float *)(lVar37 + 0x80);
    fVar26 = *(float *)(lVar37 + 0x84);
    fVar27 = *(float *)(lVar37 + 0x88);
    fVar28 = *(float *)(lVar37 + 0x8c);
    fVar29 = *(float *)(lVar37 + 0x90);
    fVar30 = *(float *)(lVar37 + 0x94);
    fVar31 = *(float *)(lVar37 + 0x9c);
    fVar44 = (float)*(undefined8 *)(lVar36 + 0xb8);
    fVar86 = fVar68 * fVar39 + fVar74 * fVar42 + fVar25 * fVar44;
    fVar87 = fVar69 * fVar39 + fVar75 * fVar42 + fVar26 * fVar44;
    fVar88 = fVar72 * fVar39 + fVar76 * fVar42 + fVar27 * fVar44;
    fVar78 = fVar68 * fVar46 + fVar74 * fVar40 + fVar25 * fVar43;
    fVar79 = fVar69 * fVar46 + fVar75 * fVar40 + fVar26 * fVar43;
    fVar80 = fVar72 * fVar46 + fVar76 * fVar40 + fVar27 * fVar43;
    fVar81 = fVar73 * fVar46 + fVar77 * fVar40 + fVar28 * fVar43;
    fVar46 = fVar68 * fVar45 + fVar74 * fVar47 + fVar25 * fVar21;
    fVar40 = fVar69 * fVar45 + fVar75 * fVar47 + fVar26 * fVar21;
    fVar43 = fVar72 * fVar45 + fVar76 * fVar47 + fVar27 * fVar21;
    fVar32 = *(float *)(lVar38 + 0x50);
    fVar33 = *(float *)(lVar38 + 0x54);
    fVar34 = *(float *)(lVar38 + 0x58);
    uVar10 = NEON_ext(CONCAT44(fVar79,fVar78),
                      CONCAT17((char)((uint)fVar40 >> 0x18),
                               CONCAT16((char)((uint)fVar40 >> 0x10),
                                        CONCAT15((char)((uint)fVar40 >> 8),
                                                 CONCAT14(SUB41(fVar40,0),fVar46)))),4,1);
    fVar70 = (float)((ulong)uVar10 >> 0x20);
    *(float *)(param_1 + 0x748) =
         *(float *)(lVar37 + 0x98) + fVar72 * fVar22 + fVar76 * fVar23 + fVar27 * fVar24 +
         fVar80 * fVar32 + fVar88 * fVar33 + fVar43 * fVar34;
    *(float *)(param_1 + 0x74c) =
         fVar31 + fVar73 * fVar22 + fVar77 * fVar23 + fVar28 * fVar24 +
         fVar81 * fVar32 + (fVar73 * fVar39 + fVar77 * fVar42 + fVar28 * fVar44) * fVar33 +
         (fVar73 * fVar45 + fVar77 * fVar47 + fVar28 * fVar21) * fVar34;
    *(float *)(param_1 + 0x740) =
         fVar29 + fVar68 * fVar22 + fVar74 * fVar23 + fVar25 * fVar24 +
         fVar78 * fVar32 + fVar86 * fVar33 + fVar46 * fVar34;
    *(float *)(param_1 + 0x744) =
         fVar30 + fVar69 * fVar22 + fVar75 * fVar23 + fVar26 * fVar24 +
         fVar79 * fVar32 + fVar87 * fVar33 + fVar40 * fVar34;
    auVar58 = NEON_fmov(0x3f800000,4);
    fVar39 = (float)_DAT_01d4ab60 * fVar78 + (float)_DAT_01d4b9d0 * fVar87 +
             (float)_DAT_01d4b2f0 * fVar43 + auVar58._0_4_;
    fVar42 = (float)((ulong)_DAT_01d4ab60 >> 0x20) * fVar78 +
             (float)((ulong)_DAT_01d4b9d0 >> 0x20) * fVar87 +
             (float)((ulong)_DAT_01d4b2f0 >> 0x20) * fVar43 + auVar58._4_4_;
    fVar44 = (float)_UNK_01d4ab68 * fVar78 + (float)_UNK_01d4b9d8 * fVar87 +
             (float)_UNK_01d4b2f8 * fVar43 + auVar58._8_4_;
    fVar46 = (float)((ulong)_UNK_01d4ab68 >> 0x20) * fVar78 +
             (float)((ulong)_UNK_01d4b9d8 >> 0x20) * fVar87 +
             (float)((ulong)_UNK_01d4b2f8 >> 0x20) * fVar43 + auVar58._12_4_;
    auVar15._4_4_ = fVar79;
    auVar15._0_4_ = fVar78;
    auVar15._8_4_ = fVar80;
    auVar15._12_4_ = fVar81;
    auVar16._4_4_ = fVar79;
    auVar16._0_4_ = fVar78;
    auVar16._8_4_ = fVar80;
    auVar16._12_4_ = fVar81;
    auVar58 = NEON_ext(auVar15,auVar16,8,1);
    auVar59._0_4_ = (float)uVar10 + fVar86;
    auVar59._4_4_ = fVar70 + auVar58._0_4_;
    auVar59._8_4_ = fVar88 + fVar40;
    auVar59._12_4_ = 0;
    auVar62._0_4_ = (float)uVar10 - fVar86;
    auVar62._4_4_ = fVar70 - auVar58._0_4_;
    auVar62._8_4_ = fVar88 - fVar40;
    auVar62._12_4_ = 0;
    uVar10 = a64_TBL(ZEXT816(0),auVar59,auVar62,DAT_01cd5420);
    uVar20 = (undefined4)((ulong)uVar10 >> 0x20);
    uVar11 = a64_TBL(ZEXT816(0),auVar59,auVar62,DAT_01cd51d0);
    uVar71 = (undefined4)((ulong)uVar11 >> 0x20);
    uVar12 = a64_TBL(ZEXT816(0),auVar59,auVar62,DAT_01cd5250);
    uVar13 = a64_TBL(ZEXT816(0),auVar59,auVar62,DAT_01cd5418);
    uVar18 = a64_TBL(ZEXT816(0),auVar59,auVar62,DAT_01cd50b8);
    uVar19 = a64_TBL(ZEXT816(0),auVar59,auVar62,DAT_01cd5190);
    uVar57 = a64_TBL(ZEXT816(0),auVar59,auVar62,DAT_01cd4f98);
    auVar63._4_4_ = fVar42;
    auVar63._0_4_ = fVar42;
    auVar63._8_4_ = fVar42;
    auVar63._12_4_ = fVar42;
    auVar85._4_4_ = fVar39;
    auVar85._0_4_ = fVar39;
    auVar85._8_4_ = fVar39;
    auVar85._12_4_ = fVar39;
    auVar82._0_8_ = CONCAT44(-(uint)(fVar39 <= fVar42),-(uint)(fVar39 <= fVar42));
    auVar82._8_4_ = -(uint)(fVar39 <= fVar42);
    auVar82._12_4_ = -(uint)(fVar39 <= fVar42);
    auVar84._8_8_ = auVar82._8_8_;
    auVar84._0_8_ = auVar82._0_8_;
    auVar58[4] = SUB41(fVar42,0);
    auVar58._0_4_ = (int)uVar10;
    auVar58[5] = (char)((uint)fVar42 >> 8);
    auVar58[6] = (char)((uint)fVar42 >> 0x10);
    auVar58[7] = (char)((uint)fVar42 >> 0x18);
    auVar58[8] = (char)uVar12;
    auVar58[9] = (char)((ulong)uVar12 >> 8);
    auVar58[10] = (char)((ulong)uVar12 >> 0x10);
    auVar58[0xb] = (char)((ulong)uVar12 >> 0x18);
    auVar58[0xc] = (char)((ulong)uVar12 >> 0x20);
    auVar58[0xd] = (char)((ulong)uVar12 >> 0x28);
    auVar58[0xe] = (char)((ulong)uVar12 >> 0x30);
    auVar58[0xf] = (char)((ulong)uVar12 >> 0x38);
    auVar14._4_4_ = uVar20;
    auVar14._0_4_ = fVar39;
    auVar14._8_4_ = (int)uVar11;
    auVar14._12_4_ = uVar71;
    auVar83._4_4_ = uVar20;
    auVar83._0_4_ = fVar39;
    auVar83._8_4_ = (int)uVar11;
    auVar83._12_4_ = uVar71;
    auVar83 = auVar83 ^ (auVar14 ^ auVar58) & auVar82;
    uVar48 = SUB41(fVar44,0);
    uVar49 = (undefined1)((uint)fVar44 >> 8);
    uVar50 = (undefined1)((uint)fVar44 >> 0x10);
    uVar51 = (undefined1)((uint)fVar44 >> 0x18);
    auVar85 = auVar85 ^ (auVar85 ^ auVar63) & auVar84;
    auVar60._0_8_ = CONCAT44(-(uint)(auVar85._4_4_ <= fVar44),-(uint)(auVar85._0_4_ <= fVar44));
    auVar60._8_4_ = -(uint)(auVar85._8_4_ <= fVar44);
    auVar60._12_4_ = -(uint)(auVar85._12_4_ <= fVar44);
    auVar64._8_8_ = auVar60._8_8_;
    auVar64._0_8_ = auVar60._0_8_;
    auVar9._8_4_ = fVar44;
    auVar9._0_8_ = uVar13;
    auVar9._12_4_ = (int)((ulong)uVar18 >> 0x20);
    auVar83 = auVar83 ^ (auVar83 ^ auVar9) & auVar60;
    auVar66[4] = uVar48;
    auVar66._0_4_ = fVar44;
    auVar66[5] = uVar49;
    auVar66[6] = uVar50;
    auVar66[7] = uVar51;
    auVar66[8] = uVar48;
    auVar66[9] = uVar49;
    auVar66[10] = uVar50;
    auVar66[0xb] = uVar51;
    auVar66[0xc] = uVar48;
    auVar66[0xd] = uVar49;
    auVar66[0xe] = uVar50;
    auVar66[0xf] = uVar51;
    auVar85 = auVar85 ^ (auVar85 ^ auVar66) & auVar64;
    auVar41._0_4_ = -(uint)(auVar85._0_4_ <= fVar46);
    auVar41._4_4_ = -(uint)(auVar85._4_4_ <= fVar46);
    auVar41._8_4_ = -(uint)(auVar85._8_4_ <= fVar46);
    auVar41._12_4_ = -(uint)(auVar85._12_4_ <= fVar46);
    auVar17._8_4_ = (int)uVar57;
    auVar17._0_8_ = uVar19;
    auVar17._12_4_ = fVar46;
    auVar83 = auVar83 ^ (auVar83 ^ auVar17) & auVar41;
    fVar40 = auVar83._0_4_;
    fVar39 = fVar40 * fVar40;
    fVar43 = auVar83._4_4_;
    fVar42 = fVar43 * fVar43;
    uVar48 = (undefined1)((uint)fVar42 >> 8);
    uVar49 = (undefined1)((uint)fVar42 >> 0x10);
    uVar50 = (undefined1)((uint)fVar42 >> 0x18);
    fVar45 = auVar83._8_4_;
    fVar44 = fVar45 * fVar45;
    uVar51 = (undefined1)((uint)fVar44 >> 8);
    uVar52 = (undefined1)((uint)fVar44 >> 0x10);
    uVar53 = (undefined1)((uint)fVar44 >> 0x18);
    fVar47 = auVar83._12_4_;
    fVar46 = fVar47 * fVar47;
    uVar54 = (undefined1)((uint)fVar46 >> 8);
    uVar55 = (undefined1)((uint)fVar46 >> 0x10);
    uVar56 = (undefined1)((uint)fVar46 >> 0x18);
    auVar2[4] = SUB41(fVar42,0);
    auVar2._0_4_ = fVar39;
    auVar2[5] = uVar48;
    auVar2[6] = uVar49;
    auVar2[7] = uVar50;
    auVar2[8] = SUB41(fVar44,0);
    auVar2[9] = uVar51;
    auVar2[10] = uVar52;
    auVar2[0xb] = uVar53;
    auVar2[0xc] = SUB41(fVar46,0);
    auVar2[0xd] = uVar54;
    auVar2[0xe] = uVar55;
    auVar2[0xf] = uVar56;
    auVar3[4] = SUB41(fVar42,0);
    auVar3._0_4_ = fVar39;
    auVar3[5] = uVar48;
    auVar3[6] = uVar49;
    auVar3[7] = uVar50;
    auVar3[8] = SUB41(fVar44,0);
    auVar3[9] = uVar51;
    auVar3[10] = uVar52;
    auVar3[0xb] = uVar53;
    auVar3[0xc] = SUB41(fVar46,0);
    auVar3[0xd] = uVar54;
    auVar3[0xe] = uVar55;
    auVar3[0xf] = uVar56;
    auVar58 = NEON_ext(auVar2,auVar3,8,1);
    fVar39 = auVar58._0_4_ + fVar39;
    fVar42 = auVar58._4_4_ + fVar42;
    fVar44 = fVar39 + fVar42;
    fVar39 = fVar39 + fVar42;
    uVar48 = SUB41(fVar39,0);
    uVar49 = (undefined1)((uint)fVar39 >> 8);
    uVar50 = (undefined1)((uint)fVar39 >> 0x10);
    uVar51 = (undefined1)((uint)fVar39 >> 0x18);
    auVar4[4] = uVar48;
    auVar4._0_4_ = fVar44;
    auVar4[5] = uVar49;
    auVar4[6] = uVar50;
    auVar4[7] = uVar51;
    auVar4[8] = SUB41(fVar44,0);
    auVar4[9] = (char)((uint)fVar44 >> 8);
    auVar4[10] = (char)((uint)fVar44 >> 0x10);
    auVar4[0xb] = (char)((uint)fVar44 >> 0x18);
    auVar4[0xc] = uVar48;
    auVar4[0xd] = uVar49;
    auVar4[0xe] = uVar50;
    auVar4[0xf] = uVar51;
    auVar58 = NEON_frsqrte(auVar4,4);
    auVar65._0_4_ = auVar58._0_4_ * fVar44;
    auVar65._4_4_ = auVar58._4_4_ * fVar39;
    auVar65._8_4_ = auVar58._8_4_ * fVar44;
    uVar5 = (undefined2)(CONCAT15(uVar49,CONCAT14(uVar48,fVar44)) >> 0x20);
    auVar65._12_4_ = auVar58._12_4_ * (float)CONCAT13(uVar51,CONCAT12(uVar50,uVar5));
    auVar66 = NEON_frsqrts(auVar58,auVar65,4);
    auVar61._0_4_ = auVar58._0_4_ * auVar66._0_4_;
    auVar61._4_4_ = auVar58._4_4_ * auVar66._4_4_;
    auVar61._8_4_ = auVar58._8_4_ * auVar66._8_4_;
    auVar61._12_4_ = auVar58._12_4_ * auVar66._12_4_;
    auVar67._0_4_ = fVar44 * auVar61._0_4_;
    auVar67._4_4_ = fVar39 * auVar61._4_4_;
    auVar67._8_4_ = fVar44 * auVar61._8_4_;
    auVar67._12_4_ = (float)CONCAT13(uVar51,CONCAT12(uVar50,uVar5)) * auVar61._12_4_;
    iVar1 = -(uint)(fVar44 == 0.0);
    iVar6 = -(uint)(fVar39 == 0.0);
    iVar7 = -(uint)(fVar44 == 0.0);
    iVar8 = -(uint)((float)CONCAT13(uVar51,CONCAT12(uVar50,uVar5)) == 0.0);
    auVar58 = NEON_frsqrts(auVar61,auVar67,4);
    fVar40 = auVar61._0_4_ * auVar58._0_4_ * fVar40;
    fVar43 = auVar61._4_4_ * auVar58._4_4_ * fVar43;
    fVar45 = auVar61._8_4_ * auVar58._8_4_ * fVar45;
    fVar47 = auVar61._12_4_ * auVar58._12_4_ * fVar47;
    *(byte *)(param_1 + 0x758) = SUB41(fVar45,0) & ~(byte)iVar7;
    *(byte *)(param_1 + 0x759) = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar7 >> 8);
    *(byte *)(param_1 + 0x75a) = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
    *(byte *)(param_1 + 0x75b) = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
    *(byte *)(param_1 + 0x75c) = SUB41(fVar47,0) & ~(byte)iVar8;
    *(byte *)(param_1 + 0x75d) = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar8 >> 8);
    *(byte *)(param_1 + 0x75e) = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
    *(byte *)(param_1 + 0x75f) = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
    *(byte *)(param_1 + 0x750) = SUB41(fVar40,0) & ~(byte)iVar1;
    *(byte *)(param_1 + 0x751) = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar1 >> 8);
    *(byte *)(param_1 + 0x752) = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar1 >> 0x10);
    *(byte *)(param_1 + 0x753) = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar1 >> 0x18);
    *(byte *)(param_1 + 0x754) = SUB41(fVar43,0) & ~(byte)iVar6;
    *(byte *)(param_1 + 0x755) = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar6 >> 8);
    *(byte *)(param_1 + 0x756) = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
    *(byte *)(param_1 + 0x757) = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
  }
  return;
}


