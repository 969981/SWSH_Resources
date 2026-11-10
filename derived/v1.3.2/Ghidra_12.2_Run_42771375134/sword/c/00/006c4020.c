/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c4020; name: FUN_006c4020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c4020(float param_1,float param_2,long param_3,undefined8 param_4,long param_5,
                 long *param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 *puVar32;
  undefined8 *puVar31;
  long lVar33;
  long lVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar40 [12];
  float fVar46;
  undefined1 auVar41 [16];
  float fVar47;
  undefined1 auVar42 [16];
  float fVar39;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar62;
  undefined8 uVar51;
  undefined1 auVar52 [12];
  float fVar65;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar48;
  int iVar49;
  float fVar63;
  undefined1 auVar56 [16];
  int iVar64;
  int iVar66;
  int iVar67;
  undefined1 auVar57 [16];
  undefined4 uVar50;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  byte bVar85;
  byte bVar86;
  byte bVar87;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar71;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar88;
  undefined8 uVar89;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar90;
  undefined8 uVar91;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined4 uVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  float fVar131;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  
  if (*(long *)(param_3 + 0x228) != *param_6) {
    *(long *)(param_3 + 0x228) = *param_6;
    *(long *)(param_3 + 0x230) = param_6[1];
    *(long *)(param_3 + 0x238) = param_6[2];
    lVar27 = param_6[3];
    if (lVar27 != 0) {
      (**(code **)(*(long *)(lVar27 + 0x48) + 0x10))();
    }
    lVar22 = *(long *)(param_3 + 0x240);
    *(long *)(param_3 + 0x240) = lVar27;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))();
    }
    lVar27 = *(long *)(param_7 + 8);
    if (((lVar27 == 0) || (*(char *)(lVar27 + 0x170) == '\0')) ||
       (lVar27 = FUN_006bef80(lVar27,param_3 + 0x228), lVar27 == 0)) {
      FUN_006c3c30(param_3);
      lVar27 = *(long *)(param_3 + 0x150);
      uVar23 = DAT_01cd4f98;
      uVar13 = DAT_01cd50b8;
      uVar14 = DAT_01cd5190;
      uVar15 = DAT_01cd51d0;
      uVar16 = DAT_01cd5250;
      uVar17 = DAT_01cd5418;
      uVar18 = DAT_01cd5420;
      uVar19 = _DAT_01d4b570;
      uVar71 = _UNK_01d4b578;
      uVar90 = _DAT_01d4b9d0;
      uVar91 = _UNK_01d4b9d8;
      goto joined_r0x006c40f4;
    }
    uVar23 = FUN_006c0b60();
    FUN_006c3460(param_3,param_4,param_5,uVar23);
  }
  lVar27 = *(long *)(param_3 + 0x150);
  uVar23 = DAT_01cd4f98;
  uVar13 = DAT_01cd50b8;
  uVar14 = DAT_01cd5190;
  uVar15 = DAT_01cd51d0;
  uVar16 = DAT_01cd5250;
  uVar17 = DAT_01cd5418;
  uVar18 = DAT_01cd5420;
  uVar19 = _DAT_01d4b570;
  uVar71 = _UNK_01d4b578;
  uVar90 = _DAT_01d4b9d0;
  uVar91 = _UNK_01d4b9d8;
joined_r0x006c40f4:
  DAT_01cd4f98 = uVar23;
  DAT_01cd50b8 = uVar13;
  DAT_01cd5190 = uVar14;
  DAT_01cd51d0 = uVar15;
  DAT_01cd5250 = uVar16;
  DAT_01cd5418 = uVar17;
  DAT_01cd5420 = uVar18;
  _DAT_01d4b570 = uVar19;
  _UNK_01d4b578 = uVar71;
  _DAT_01d4b9d0 = uVar90;
  _UNK_01d4b9d8 = uVar91;
  if (lVar27 != 0) {
    fVar37 = *(float *)(param_3 + 0x218);
    puVar30 = *(undefined8 **)(param_3 + 0x1b8);
    puVar31 = *(undefined8 **)(param_3 + 0x1c0);
    if (puVar30 != puVar31) {
      bVar35 = true;
      fStack_148 = (float)_UNK_01d4ab68;
      fStack_144 = (float)((ulong)_UNK_01d4ab68 >> 0x20);
      local_150 = (float)_DAT_01d4ab60;
      fStack_14c = (float)((ulong)_DAT_01d4ab60 >> 0x20);
      fVar88 = *(float *)PTR_FloatQuaternionEpsilon_02715060;
      fStack_178 = (float)_UNK_01d4b2f8;
      fStack_174 = (float)((ulong)_UNK_01d4b2f8 >> 0x20);
      local_180 = (float)_DAT_01d4b2f0;
      fStack_17c = (float)((ulong)_DAT_01d4b2f0 >> 0x20);
      auVar41 = NEON_fmov(0x3f800000,4);
      do {
        while( true ) {
          plVar28 = (long *)*puVar30;
          lVar27 = *(long *)(plVar28[2] + 0x120);
          iVar49 = *(int *)(*(long *)(plVar28[2] + 0x128) + 0x40);
          FUN_00723030(lVar27,iVar49);
          lVar22 = *(long *)(lVar27 + 0x1b8) + (long)iVar49 * 0x130;
          fVar36 = *(float *)(lVar27 + 0x80);
          fVar48 = *(float *)(lVar27 + 0x84);
          fVar39 = *(float *)(lVar27 + 0x88);
          fVar38 = *(float *)(lVar22 + 0xa0);
          fVar46 = *(float *)(lVar22 + 0xa4);
          fVar62 = *(float *)(lVar22 + 0xa8);
          fVar47 = *(float *)(lVar22 + 0xb0);
          fVar65 = *(float *)(lVar22 + 0xb4);
          fVar116 = *(float *)(lVar22 + 0xb8);
          fVar63 = *(float *)(lVar27 + 0x60);
          fVar131 = *(float *)(lVar27 + 100);
          fVar135 = *(float *)(lVar27 + 0x68);
          fVar137 = *(float *)(lVar27 + 0x70);
          fVar5 = *(float *)(lVar27 + 0x74);
          fVar6 = *(float *)(lVar27 + 0x78);
          fVar7 = *(float *)(lVar22 + 0xc0);
          fVar8 = *(float *)(lVar22 + 0xc4);
          fVar9 = *(float *)(lVar22 + 200);
          fVar10 = *(float *)(lVar22 + 0xd0);
          fVar11 = *(float *)(lVar22 + 0xd4);
          fVar12 = *(float *)(lVar22 + 0xd8);
          fVar130 = fVar63 * fVar47 + fVar137 * fVar65 + fVar36 * fVar116;
          fVar134 = fVar131 * fVar47 + fVar5 * fVar65 + fVar48 * fVar116;
          fVar136 = fVar135 * fVar47 + fVar6 * fVar65 + fVar39 * fVar116;
          fVar116 = fVar63 * fVar38 + fVar137 * fVar46 + fVar36 * fVar62;
          fVar117 = fVar131 * fVar38 + fVar5 * fVar46 + fVar48 * fVar62;
          fVar118 = fVar135 * fVar38 + fVar6 * fVar46 + fVar39 * fVar62;
          fVar119 = *(float *)(lVar27 + 0x6c) * fVar38 + *(float *)(lVar27 + 0x7c) * fVar46 +
                    *(float *)(lVar27 + 0x8c) * fVar62;
          fVar62 = fVar131 * fVar7 + fVar5 * fVar8 + fVar48 * fVar9;
          fVar65 = fVar135 * fVar7 + fVar6 * fVar8 + fVar39 * fVar9;
          fVar38 = *(float *)(lVar27 + 0x90) + fVar63 * fVar10 + fVar137 * fVar11 + fVar36 * fVar12;
          fVar46 = *(float *)(lVar27 + 0x94) + fVar131 * fVar10 + fVar5 * fVar11 + fVar48 * fVar12;
          fVar47 = *(float *)(lVar27 + 0x98) + fVar135 * fVar10 + fVar6 * fVar11 + fVar39 * fVar12;
          local_170 = (float)uVar90;
          fStack_16c = (float)((ulong)uVar90 >> 0x20);
          fStack_168 = (float)uVar91;
          fStack_164 = (float)((ulong)uVar91 >> 0x20);
          local_190 = auVar41._0_4_;
          fStack_18c = auVar41._4_4_;
          fStack_188 = auVar41._8_4_;
          fStack_184 = auVar41._12_4_;
          local_190 = local_150 * fVar116 + local_170 * fVar134 + local_180 * fVar65 + local_190;
          fStack_18c = fStack_14c * fVar116 + fStack_16c * fVar134 + fStack_17c * fVar65 +
                       fStack_18c;
          fStack_188 = fStack_148 * fVar116 + fStack_168 * fVar134 + fStack_178 * fVar65 +
                       fStack_188;
          fStack_184 = fStack_144 * fVar116 + fStack_164 * fVar134 + fStack_174 * fVar65 +
                       fStack_184;
          uVar68 = NEON_ext(CONCAT44(fVar117,fVar116),
                            CONCAT44(fVar62,fVar63 * fVar7 + fVar137 * fVar8 + fVar36 * fVar9),4,1);
          auVar92._4_4_ = fVar117;
          auVar92._0_4_ = fVar116;
          auVar92._8_4_ = fVar118;
          auVar92._12_4_ = fVar119;
          auVar96._4_4_ = fVar117;
          auVar96._0_4_ = fVar116;
          auVar96._8_4_ = fVar118;
          auVar96._12_4_ = fVar119;
          auVar92 = NEON_ext(auVar92,auVar96,8,1);
          auVar93._0_4_ = (float)uVar68 + fVar130;
          fVar36 = (float)((ulong)uVar68 >> 0x20);
          auVar93._4_4_ = fVar36 + auVar92._0_4_;
          auVar93._8_4_ = fVar136 + fVar62;
          auVar93._12_4_ = 0;
          auVar103._0_4_ = (float)uVar68 - fVar130;
          auVar103._4_4_ = fVar36 - auVar92._0_4_;
          auVar103._8_4_ = fVar136 - fVar62;
          auVar103._12_4_ = 0;
          uVar51 = a64_TBL(ZEXT816(0),auVar93,auVar103,uVar18);
          uVar69 = a64_TBL(ZEXT816(0),auVar93,auVar103,uVar15);
          uVar68 = a64_TBL(ZEXT816(0),auVar93,auVar103,uVar13);
          auVar112._8_8_ = uVar69;
          auVar112._0_8_ = uVar51;
          uVar70 = a64_TBL(ZEXT816(0),auVar93,auVar103,uVar16);
          auVar72._0_8_ = a64_TBL(ZEXT816(0),auVar93,auVar103,uVar17);
          auVar122._4_12_ = auVar112._4_12_;
          auVar122._0_4_ = local_190;
          uVar69 = a64_TBL(ZEXT816(0),auVar93,auVar103,uVar14);
          uVar89 = a64_TBL(ZEXT816(0),auVar93,auVar103,uVar23);
          auVar104._4_4_ = fStack_18c;
          auVar104._0_4_ = fStack_18c;
          auVar104._8_4_ = fStack_18c;
          auVar104._12_4_ = fStack_18c;
          auVar53._0_4_ = (undefined4)uVar51;
          auVar53._4_4_ = fStack_18c;
          auVar53._8_8_ = uVar70;
          auVar127._4_4_ = local_190;
          auVar127._0_4_ = local_190;
          auVar127._8_4_ = local_190;
          auVar127._12_4_ = local_190;
          auVar72._12_4_ = (undefined4)((ulong)uVar68 >> 0x20);
          auVar72._8_4_ = fStack_188;
          auVar121._0_8_ =
               CONCAT44(-(uint)(local_190 <= fStack_18c),-(uint)(local_190 <= fStack_18c));
          auVar121._8_4_ = -(uint)(local_190 <= fStack_18c);
          auVar121._12_4_ = -(uint)(local_190 <= fStack_18c);
          auVar126._8_8_ = auVar121._8_8_;
          auVar126._0_8_ = auVar121._0_8_;
          auVar122 = auVar122 ^ (auVar122 ^ auVar53) & auVar121;
          auVar54._4_4_ = fStack_188;
          auVar54._0_4_ = fStack_188;
          auVar54._8_4_ = fStack_188;
          auVar54._12_4_ = fStack_188;
          auVar127 = auVar127 ^ (auVar127 ^ auVar104) & auVar126;
          auVar94._0_8_ =
               CONCAT44(-(uint)(auVar127._4_4_ <= fStack_188),-(uint)(auVar127._0_4_ <= fStack_188))
          ;
          auVar94._8_4_ = -(uint)(auVar127._8_4_ <= fStack_188);
          auVar94._12_4_ = -(uint)(auVar127._12_4_ <= fStack_188);
          auVar105._8_8_ = auVar94._8_8_;
          auVar105._0_8_ = auVar94._0_8_;
          auVar122 = auVar122 ^ (auVar122 ^ auVar72) & auVar94;
          auVar127 = auVar127 ^ (auVar127 ^ auVar54) & auVar105;
          auVar42._0_4_ = -(uint)(auVar127._0_4_ <= fStack_184);
          auVar42._4_4_ = -(uint)(auVar127._4_4_ <= fStack_184);
          auVar42._8_4_ = -(uint)(auVar127._8_4_ <= fStack_184);
          auVar42._12_4_ = -(uint)(auVar127._12_4_ <= fStack_184);
          auVar1._8_4_ = (int)uVar89;
          auVar1._0_8_ = uVar69;
          auVar1._12_4_ = fStack_184;
          auVar122 = auVar122 ^ (auVar122 ^ auVar1) & auVar42;
          fVar39 = auVar122._0_4_;
          auVar55._0_4_ = fVar39 * fVar39;
          fVar62 = auVar122._4_4_;
          auVar55._4_4_ = fVar62 * fVar62;
          fVar65 = auVar122._8_4_;
          auVar55._8_4_ = fVar65 * fVar65;
          fVar116 = auVar122._12_4_;
          auVar55._12_4_ = fVar116 * fVar116;
          auVar92 = NEON_ext(auVar55,auVar55,8,1);
          fVar48 = auVar92._0_4_ + auVar55._0_4_;
          fVar63 = auVar92._4_4_ + auVar55._4_4_;
          fVar36 = fVar48 + fVar63;
          fVar48 = fVar48 + fVar63;
          auVar56._8_8_ = CONCAT44(fVar48,fVar36);
          auVar56._0_8_ = CONCAT44(fVar48,fVar36);
          auVar92 = NEON_frsqrte(auVar56,4);
          auVar95._0_4_ = auVar92._0_4_ * fVar36;
          auVar95._4_4_ = auVar92._4_4_ * fVar48;
          auVar95._8_4_ = auVar92._8_4_ * fVar36;
          auVar95._12_4_ = auVar92._12_4_ * fVar48;
          auVar96 = NEON_frsqrts(auVar92,auVar95,4);
          auVar73._0_4_ = auVar92._0_4_ * auVar96._0_4_;
          auVar73._4_4_ = auVar92._4_4_ * auVar96._4_4_;
          auVar73._8_4_ = auVar92._8_4_ * auVar96._8_4_;
          auVar73._12_4_ = auVar92._12_4_ * auVar96._12_4_;
          auVar97._0_4_ = fVar36 * auVar73._0_4_;
          auVar97._4_4_ = fVar48 * auVar73._4_4_;
          auVar97._8_4_ = fVar36 * auVar73._8_4_;
          auVar97._12_4_ = fVar48 * auVar73._12_4_;
          iVar49 = -(uint)(fVar36 == 0.0);
          iVar64 = -(uint)(fVar48 == 0.0);
          iVar66 = -(uint)(fVar36 == 0.0);
          iVar67 = -(uint)(fVar48 == 0.0);
          auVar92 = NEON_frsqrts(auVar73,auVar97,4);
          fVar39 = auVar73._0_4_ * auVar92._0_4_ * fVar39;
          fVar62 = auVar73._4_4_ * auVar92._4_4_ * fVar62;
          fVar65 = auVar73._8_4_ * auVar92._8_4_ * fVar65;
          fVar116 = auVar73._12_4_ * auVar92._12_4_ * fVar116;
          fVar39 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                   CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                            ~(byte)((uint)iVar49 >> 0x10),
                                            CONCAT11((byte)((uint)fVar39 >> 8) &
                                                     ~(byte)((uint)iVar49 >> 8),
                                                     SUB41(fVar39,0) & ~(byte)iVar49)));
          auVar40._0_8_ =
               CONCAT17((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                        CONCAT16((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                 CONCAT15((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                          CONCAT14(SUB41(fVar62,0) & ~(byte)iVar64,fVar39))));
          auVar40[8] = SUB41(fVar65,0) & ~(byte)iVar66;
          auVar40[9] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar66 >> 8);
          auVar40[10] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
          auVar40[0xb] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
          auVar43[0xc] = SUB41(fVar116,0) & ~(byte)iVar67;
          auVar43._0_12_ = auVar40;
          auVar43[0xd] = (byte)((uint)fVar116 >> 8) & ~(byte)((uint)iVar67 >> 8);
          auVar43[0xe] = (byte)((uint)fVar116 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
          auVar43[0xf] = (byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
          auVar57._0_4_ = fVar39 * fVar39;
          fVar62 = (float)((ulong)auVar40._0_8_ >> 0x20);
          auVar57._4_4_ = fVar62 * fVar62;
          fVar65 = auVar40._8_4_;
          auVar57._8_4_ = fVar65 * fVar65;
          fVar116 = auVar43._12_4_;
          auVar57._12_4_ = fVar116 * fVar116;
          auVar92 = NEON_ext(auVar57,auVar57,8,1);
          fVar48 = auVar92._0_4_ + auVar57._0_4_;
          fVar63 = auVar92._4_4_ + auVar57._4_4_;
          fVar36 = fVar48 + fVar63;
          fVar48 = fVar48 + fVar63;
          auVar58._8_8_ = CONCAT44(fVar48,fVar36);
          auVar58._0_8_ = CONCAT44(fVar48,fVar36);
          auVar92 = NEON_frsqrte(auVar58,4);
          auVar98._0_4_ = auVar92._0_4_ * fVar36;
          auVar98._4_4_ = auVar92._4_4_ * fVar48;
          auVar98._8_4_ = auVar92._8_4_ * fVar36;
          auVar98._12_4_ = auVar92._12_4_ * fVar48;
          auVar96 = NEON_frsqrts(auVar92,auVar98,4);
          auVar74._0_4_ = auVar92._0_4_ * auVar96._0_4_;
          auVar74._4_4_ = auVar92._4_4_ * auVar96._4_4_;
          auVar74._8_4_ = auVar92._8_4_ * auVar96._8_4_;
          auVar74._12_4_ = auVar92._12_4_ * auVar96._12_4_;
          auVar99._0_4_ = fVar36 * auVar74._0_4_;
          auVar99._4_4_ = fVar48 * auVar74._4_4_;
          auVar99._8_4_ = fVar36 * auVar74._8_4_;
          auVar99._12_4_ = fVar48 * auVar74._12_4_;
          auVar92 = NEON_frsqrts(auVar74,auVar99,4);
          fVar39 = auVar74._0_4_ * auVar92._0_4_ * fVar39;
          fVar62 = auVar74._4_4_ * auVar92._4_4_ * fVar62;
          fVar65 = auVar74._8_4_ * auVar92._8_4_ * fVar65;
          fVar116 = auVar74._12_4_ * auVar92._12_4_ * fVar116;
          iVar49 = -(uint)(fVar36 < fVar88);
          iVar64 = -(uint)(fVar48 < fVar88);
          iVar66 = -(uint)(fVar36 < fVar88);
          iVar67 = -(uint)(fVar48 < fVar88);
          bVar85 = (byte)((uint)iVar49 >> 8);
          bVar86 = (byte)((uint)iVar49 >> 0x10);
          bVar87 = (byte)((uint)iVar49 >> 0x18);
          auVar44[0] = SUB41(fVar39,0) & ~(byte)iVar49;
          auVar44[1] = (byte)((uint)fVar39 >> 8) & ~bVar85;
          auVar44[2] = (byte)((uint)fVar39 >> 0x10) & ~bVar86;
          auVar44[3] = (byte)((uint)fVar39 >> 0x18) & ~bVar87;
          auVar44[4] = SUB41(fVar62,0) & ~(byte)iVar64;
          auVar44[5] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar64 >> 8);
          auVar44[6] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
          auVar44[7] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
          auVar44[8] = SUB41(fVar65,0) & ~(byte)iVar66;
          auVar44[9] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar66 >> 8);
          auVar44[10] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
          auVar44[0xb] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
          auVar44[0xc] = SUB41(fVar116,0) & ~(byte)iVar67;
          auVar44[0xd] = (byte)((uint)fVar116 >> 8) & ~(byte)((uint)iVar67 >> 8);
          auVar44[0xe] = (byte)((uint)fVar116 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
          auVar44[0xf] = (byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
          iVar49 = -(uint)((float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~bVar87,
                                           CONCAT12((byte)((uint)fVar36 >> 0x10) & ~bVar86,
                                                    CONCAT11((byte)((uint)fVar36 >> 8) & ~bVar85,
                                                             SUB41(fVar36,0) & ~(byte)iVar49))) ==
                          0.0);
          uVar50 = CONCAT13(~(byte)((uint)iVar49 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar49 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar49 >> 8),~(byte)iVar49)));
          auVar75._4_4_ = uVar50;
          auVar75._0_4_ = uVar50;
          auVar75._8_4_ = uVar50;
          auVar75._12_4_ = uVar50;
          auVar76._8_8_ = uVar71;
          auVar76._0_8_ = uVar19;
          auVar76 = auVar76 ^ (auVar76 ^ auVar44) & auVar75;
          fStack_138 = auVar76._8_4_;
          fStack_134 = auVar76._12_4_;
          local_140 = auVar76._0_4_;
          fStack_13c = auVar76._4_4_;
          (**(code **)(*plVar28 + 0xa8))(&local_c8,plVar28);
          local_e0 = CONCAT44(fVar46,fVar38);
          auVar92 = NEON_ext(auVar76,auVar76,8,1);
          local_f0 = auVar76._0_8_;
          uStack_e8 = auVar92._0_8_;
          local_d8 = fVar47;
          if (((local_b8 == fVar38) && (fStack_b4 == fVar46)) && (local_b0 == fVar47)) break;
LAB_006c4424:
          (**(code **)(*plVar28 + 0xb0))(plVar28,&local_f0,1);
          bVar35 = false;
          puVar30 = puVar30 + 1;
          if (puVar31 == puVar30) goto LAB_006c444c;
        }
        bVar20 = false;
        if (((float)local_c8 == local_140) &&
           (bVar20 = false, !NAN(local_c8._4_4_) && !NAN(fStack_13c))) {
          bVar20 = local_c8._4_4_ == fStack_13c;
        }
        bVar21 = false;
        if ((bVar20) && (bVar21 = false, !NAN((float)local_c0) && !NAN(fStack_138))) {
          bVar21 = (float)local_c0 == fStack_138;
        }
        bVar20 = false;
        if ((bVar21) && (bVar20 = false, !NAN(local_c0._4_4_) && !NAN(fStack_134))) {
          bVar20 = local_c0._4_4_ == fStack_134;
        }
        if (!bVar20) goto LAB_006c4424;
        puVar30 = puVar30 + 1;
      } while (puVar31 != puVar30);
LAB_006c444c:
      if (!bVar35) {
        puVar31 = *(undefined8 **)(param_3 + 0x1f0);
        for (puVar30 = *(undefined8 **)(param_3 + 0x1e8); puVar30 != puVar31; puVar30 = puVar30 + 1)
        {
          plVar28 = (long *)*puVar30;
          uVar24 = (**(code **)(*plVar28 + 0x1f8))(plVar28);
          if ((uVar24 & 1) != 0) {
            (**(code **)(*plVar28 + 0x248))(plVar28);
          }
        }
      }
    }
    if (*(char *)(param_3 + 0x220) != '\0') {
      puVar30 = *(undefined8 **)(param_3 + 0x1f0);
      *(undefined1 *)(param_3 + 0x220) = 0;
      uVar19 = _DAT_01d4b570;
      uVar18 = DAT_01cd5420;
      uVar17 = DAT_01cd5418;
      uVar16 = DAT_01cd5250;
      uVar15 = DAT_01cd51d0;
      uVar14 = DAT_01cd5190;
      uVar13 = DAT_01cd50b8;
      uVar23 = DAT_01cd4f98;
      if (*(undefined8 **)(param_3 + 0x1e8) != puVar30) {
        fStack_128 = (float)_UNK_01d4ab68;
        fStack_124 = (float)((ulong)_UNK_01d4ab68 >> 0x20);
        local_130 = (float)_DAT_01d4ab60;
        fStack_12c = (float)((ulong)_DAT_01d4ab60 >> 0x20);
        fVar88 = *(float *)PTR_FloatQuaternionEpsilon_02715060;
        fStack_148 = (float)_UNK_01d4b9d8;
        fStack_144 = (float)((ulong)_UNK_01d4b9d8 >> 0x20);
        local_150 = (float)_DAT_01d4b9d0;
        fStack_14c = (float)((ulong)_DAT_01d4b9d0 >> 0x20);
        fStack_158 = (float)_UNK_01d4b2f8;
        fStack_154 = (float)((ulong)_UNK_01d4b2f8 >> 0x20);
        local_160 = (float)_DAT_01d4b2f0;
        fStack_15c = (float)((ulong)_DAT_01d4b2f0 >> 0x20);
        auVar41 = NEON_fmov(0x3f800000,4);
        fStack_178 = (float)_UNK_01d4b578;
        fStack_174 = (float)((ulong)_UNK_01d4b578 >> 0x20);
        puVar31 = *(undefined8 **)(param_3 + 0x1e8);
        do {
          puVar32 = puVar31 + 1;
          plVar28 = (long *)*puVar31;
          lVar22 = *(long *)(param_5 + 0x1b8) + (long)(int)plVar28[2] * 0x130;
          lVar27 = *(long *)(lVar22 + 0x120);
          iVar49 = *(int *)(*(long *)(lVar22 + 0x128) + 0x40);
          FUN_00723030(lVar27,iVar49);
          fVar36 = *(float *)(lVar27 + 0x60);
          fVar48 = *(float *)(lVar27 + 100);
          fVar39 = *(float *)(lVar27 + 0x68);
          fVar38 = *(float *)(lVar27 + 0x70);
          fVar46 = *(float *)(lVar27 + 0x74);
          fVar62 = *(float *)(lVar27 + 0x78);
          fVar47 = *(float *)(lVar27 + 0x80);
          fVar65 = *(float *)(lVar27 + 0x84);
          fVar116 = *(float *)(lVar27 + 0x88);
          lVar22 = *(long *)(lVar27 + 0x1b8) + (long)iVar49 * 0x130;
          fVar63 = *(float *)(lVar22 + 0xa0);
          fVar131 = *(float *)(lVar22 + 0xa4);
          fVar135 = *(float *)(lVar22 + 0xa8);
          fVar137 = *(float *)(lVar22 + 0xb0);
          fVar5 = *(float *)(lVar22 + 0xb4);
          fVar6 = *(float *)(lVar22 + 0xb8);
          fVar7 = *(float *)(lVar22 + 0xc0);
          fVar8 = *(float *)(lVar22 + 0xc4);
          fVar9 = *(float *)(lVar22 + 200);
          fVar10 = *(float *)(lVar22 + 0xd0);
          fVar11 = *(float *)(lVar22 + 0xd4);
          fVar12 = *(float *)(lVar22 + 0xd8);
          fVar130 = fVar48 * fVar7 + fVar46 * fVar8 + fVar65 * fVar9;
          fVar134 = fVar39 * fVar7 + fVar62 * fVar8 + fVar116 * fVar9;
          fVar117 = fVar36 * fVar63 + fVar38 * fVar131 + fVar47 * fVar135;
          fVar118 = fVar48 * fVar63 + fVar46 * fVar131 + fVar65 * fVar135;
          fVar119 = fVar39 * fVar63 + fVar62 * fVar131 + fVar116 * fVar135;
          fVar63 = *(float *)(lVar27 + 0x6c) * fVar63 + *(float *)(lVar27 + 0x7c) * fVar131 +
                   *(float *)(lVar27 + 0x8c) * fVar135;
          fVar131 = fVar36 * fVar137 + fVar38 * fVar5 + fVar47 * fVar6;
          fVar135 = fVar48 * fVar137 + fVar46 * fVar5 + fVar65 * fVar6;
          fVar137 = fVar39 * fVar137 + fVar62 * fVar5 + fVar116 * fVar6;
          local_170 = auVar41._0_4_;
          fStack_16c = auVar41._4_4_;
          fStack_168 = auVar41._8_4_;
          fStack_164 = auVar41._12_4_;
          local_b8 = *(float *)(lVar27 + 0x90) + fVar36 * fVar10 + fVar38 * fVar11 + fVar47 * fVar12
          ;
          fStack_b4 = *(float *)(lVar27 + 0x94) +
                      fVar48 * fVar10 + fVar46 * fVar11 + fVar65 * fVar12;
          local_b0 = *(float *)(lVar27 + 0x98) +
                     fVar39 * fVar10 + fVar62 * fVar11 + fVar116 * fVar12;
          local_170 = local_130 * fVar117 + local_150 * fVar135 + local_160 * fVar134 + local_170;
          fStack_16c = fStack_12c * fVar117 + fStack_14c * fVar135 + fStack_15c * fVar134 +
                       fStack_16c;
          fStack_168 = fStack_128 * fVar117 + fStack_148 * fVar135 + fStack_158 * fVar134 +
                       fStack_168;
          fStack_164 = fStack_124 * fVar117 + fStack_144 * fVar135 + fStack_154 * fVar134 +
                       fStack_164;
          uVar71 = NEON_ext(CONCAT44(fVar118,fVar117),
                            CONCAT44(fVar130,fVar36 * fVar7 + fVar38 * fVar8 + fVar47 * fVar9),4,1);
          auVar2._4_4_ = fVar118;
          auVar2._0_4_ = fVar117;
          auVar2._8_4_ = fVar119;
          auVar2._12_4_ = fVar63;
          auVar3._4_4_ = fVar118;
          auVar3._0_4_ = fVar117;
          auVar3._8_4_ = fVar119;
          auVar3._12_4_ = fVar63;
          auVar92 = NEON_ext(auVar2,auVar3,8,1);
          auVar106._0_4_ = (float)uVar71 + fVar131;
          fVar36 = (float)((ulong)uVar71 >> 0x20);
          auVar106._4_4_ = fVar36 + auVar92._0_4_;
          auVar106._8_4_ = fVar137 + fVar130;
          auVar106._12_4_ = 0;
          auVar113._0_4_ = (float)uVar71 - fVar131;
          auVar113._4_4_ = fVar36 - auVar92._0_4_;
          auVar113._8_4_ = fVar137 - fVar130;
          auVar113._12_4_ = 0;
          uVar71 = a64_TBL(ZEXT816(0),auVar106,auVar113,uVar18);
          uVar50 = (undefined4)((ulong)uVar71 >> 0x20);
          uVar90 = a64_TBL(ZEXT816(0),auVar106,auVar113,uVar15);
          uVar69 = a64_TBL(ZEXT816(0),auVar106,auVar113,uVar13);
          uVar120 = (undefined4)((ulong)uVar90 >> 0x20);
          uVar91 = a64_TBL(ZEXT816(0),auVar106,auVar113,uVar16);
          auVar100._0_8_ = a64_TBL(ZEXT816(0),auVar106,auVar113,uVar17);
          auVar123._0_8_ = a64_TBL(ZEXT816(0),auVar106,auVar113,uVar14);
          uVar68 = a64_TBL(ZEXT816(0),auVar106,auVar113,uVar23);
          auVar114._4_4_ = fStack_16c;
          auVar114._0_4_ = fStack_16c;
          auVar114._8_4_ = fStack_16c;
          auVar114._12_4_ = fStack_16c;
          auVar77._0_4_ = (undefined4)uVar71;
          auVar77._4_4_ = fStack_16c;
          auVar77._8_8_ = uVar91;
          auVar123._8_8_ = uVar68;
          auVar133._4_4_ = local_170;
          auVar133._0_4_ = local_170;
          auVar133._8_4_ = local_170;
          auVar133._12_4_ = local_170;
          auVar100._12_4_ = (undefined4)((ulong)uVar69 >> 0x20);
          auVar100._8_4_ = fStack_168;
          auVar128._0_8_ =
               CONCAT44(-(uint)(local_170 <= fStack_16c),-(uint)(local_170 <= fStack_16c));
          auVar128._8_4_ = -(uint)(local_170 <= fStack_16c);
          auVar128._12_4_ = -(uint)(local_170 <= fStack_16c);
          auVar132._8_8_ = auVar128._8_8_;
          auVar132._0_8_ = auVar128._0_8_;
          auVar4._4_4_ = uVar50;
          auVar4._0_4_ = local_170;
          auVar4._8_4_ = (int)uVar90;
          auVar4._12_4_ = uVar120;
          auVar129._4_4_ = uVar50;
          auVar129._0_4_ = local_170;
          auVar129._8_4_ = (int)uVar90;
          auVar129._12_4_ = uVar120;
          auVar129 = auVar129 ^ (auVar4 ^ auVar77) & auVar128;
          auVar78._4_4_ = fStack_168;
          auVar78._0_4_ = fStack_168;
          auVar78._8_4_ = fStack_168;
          auVar78._12_4_ = fStack_168;
          auVar124._0_12_ = auVar123._0_12_;
          auVar124._12_4_ = fStack_164;
          auVar133 = auVar133 ^ (auVar133 ^ auVar114) & auVar132;
          auVar107._0_8_ =
               CONCAT44(-(uint)(auVar133._4_4_ <= fStack_168),-(uint)(auVar133._0_4_ <= fStack_168))
          ;
          auVar107._8_4_ = -(uint)(auVar133._8_4_ <= fStack_168);
          auVar107._12_4_ = -(uint)(auVar133._12_4_ <= fStack_168);
          auVar115._8_8_ = auVar107._8_8_;
          auVar115._0_8_ = auVar107._0_8_;
          auVar129 = auVar129 ^ (auVar129 ^ auVar100) & auVar107;
          auVar133 = auVar133 ^ (auVar133 ^ auVar78) & auVar115;
          auVar59._0_4_ = -(uint)(auVar133._0_4_ <= fStack_164);
          auVar59._4_4_ = -(uint)(auVar133._4_4_ <= fStack_164);
          auVar59._8_4_ = -(uint)(auVar133._8_4_ <= fStack_164);
          auVar59._12_4_ = -(uint)(auVar133._12_4_ <= fStack_164);
          auVar129 = auVar129 ^ (auVar129 ^ auVar124) & auVar59;
          fVar39 = auVar129._0_4_;
          auVar79._0_4_ = fVar39 * fVar39;
          fVar38 = auVar129._4_4_;
          auVar79._4_4_ = fVar38 * fVar38;
          fVar46 = auVar129._8_4_;
          auVar79._8_4_ = fVar46 * fVar46;
          fVar62 = auVar129._12_4_;
          auVar79._12_4_ = fVar62 * fVar62;
          auVar92 = NEON_ext(auVar79,auVar79,8,1);
          fVar48 = auVar92._0_4_ + auVar79._0_4_;
          fVar47 = auVar92._4_4_ + auVar79._4_4_;
          fVar36 = fVar48 + fVar47;
          fVar48 = fVar48 + fVar47;
          auVar80._8_8_ = CONCAT44(fVar48,fVar36);
          auVar80._0_8_ = CONCAT44(fVar48,fVar36);
          auVar92 = NEON_frsqrte(auVar80,4);
          auVar108._0_4_ = auVar92._0_4_ * fVar36;
          auVar108._4_4_ = auVar92._4_4_ * fVar48;
          auVar108._8_4_ = auVar92._8_4_ * fVar36;
          auVar108._12_4_ = auVar92._12_4_ * fVar48;
          auVar96 = NEON_frsqrts(auVar92,auVar108,4);
          auVar101._0_4_ = auVar92._0_4_ * auVar96._0_4_;
          auVar101._4_4_ = auVar92._4_4_ * auVar96._4_4_;
          auVar101._8_4_ = auVar92._8_4_ * auVar96._8_4_;
          auVar101._12_4_ = auVar92._12_4_ * auVar96._12_4_;
          auVar109._0_4_ = fVar36 * auVar101._0_4_;
          auVar109._4_4_ = fVar48 * auVar101._4_4_;
          auVar109._8_4_ = fVar36 * auVar101._8_4_;
          auVar109._12_4_ = fVar48 * auVar101._12_4_;
          iVar49 = -(uint)(fVar36 == 0.0);
          iVar64 = -(uint)(fVar48 == 0.0);
          iVar66 = -(uint)(fVar36 == 0.0);
          iVar67 = -(uint)(fVar48 == 0.0);
          auVar92 = NEON_frsqrts(auVar101,auVar109,4);
          fVar39 = auVar101._0_4_ * auVar92._0_4_ * fVar39;
          fVar38 = auVar101._4_4_ * auVar92._4_4_ * fVar38;
          fVar46 = auVar101._8_4_ * auVar92._8_4_ * fVar46;
          fVar62 = auVar101._12_4_ * auVar92._12_4_ * fVar62;
          fVar39 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                   CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                            ~(byte)((uint)iVar49 >> 0x10),
                                            CONCAT11((byte)((uint)fVar39 >> 8) &
                                                     ~(byte)((uint)iVar49 >> 8),
                                                     SUB41(fVar39,0) & ~(byte)iVar49)));
          auVar52._0_8_ =
               CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                        CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                 CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                          CONCAT14(SUB41(fVar38,0) & ~(byte)iVar64,fVar39))));
          auVar52[8] = SUB41(fVar46,0) & ~(byte)iVar66;
          auVar52[9] = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar66 >> 8);
          auVar52[10] = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
          auVar52[0xb] = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
          auVar60[0xc] = SUB41(fVar62,0) & ~(byte)iVar67;
          auVar60._0_12_ = auVar52;
          auVar60[0xd] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar67 >> 8);
          auVar60[0xe] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
          auVar60[0xf] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
          auVar81._0_4_ = fVar39 * fVar39;
          fVar38 = (float)((ulong)auVar52._0_8_ >> 0x20);
          auVar81._4_4_ = fVar38 * fVar38;
          fVar46 = auVar52._8_4_;
          auVar81._8_4_ = fVar46 * fVar46;
          fVar62 = auVar60._12_4_;
          auVar81._12_4_ = fVar62 * fVar62;
          auVar92 = NEON_ext(auVar81,auVar81,8,1);
          fVar48 = auVar92._0_4_ + auVar81._0_4_;
          fVar47 = auVar92._4_4_ + auVar81._4_4_;
          fVar36 = fVar48 + fVar47;
          fVar48 = fVar48 + fVar47;
          auVar82._8_8_ = CONCAT44(fVar48,fVar36);
          auVar82._0_8_ = CONCAT44(fVar48,fVar36);
          auVar92 = NEON_frsqrte(auVar82,4);
          auVar110._0_4_ = auVar92._0_4_ * fVar36;
          auVar110._4_4_ = auVar92._4_4_ * fVar48;
          auVar110._8_4_ = auVar92._8_4_ * fVar36;
          auVar110._12_4_ = auVar92._12_4_ * fVar48;
          auVar96 = NEON_frsqrts(auVar92,auVar110,4);
          auVar102._0_4_ = auVar92._0_4_ * auVar96._0_4_;
          auVar102._4_4_ = auVar92._4_4_ * auVar96._4_4_;
          auVar102._8_4_ = auVar92._8_4_ * auVar96._8_4_;
          auVar102._12_4_ = auVar92._12_4_ * auVar96._12_4_;
          auVar111._0_4_ = fVar36 * auVar102._0_4_;
          auVar111._4_4_ = fVar48 * auVar102._4_4_;
          auVar111._8_4_ = fVar36 * auVar102._8_4_;
          auVar111._12_4_ = fVar48 * auVar102._12_4_;
          auVar92 = NEON_frsqrts(auVar102,auVar111,4);
          fVar39 = auVar102._0_4_ * auVar92._0_4_ * fVar39;
          fVar38 = auVar102._4_4_ * auVar92._4_4_ * fVar38;
          fVar46 = auVar102._8_4_ * auVar92._8_4_ * fVar46;
          fVar62 = auVar102._12_4_ * auVar92._12_4_ * fVar62;
          iVar49 = -(uint)(fVar36 < fVar88);
          iVar64 = -(uint)(fVar48 < fVar88);
          iVar66 = -(uint)(fVar36 < fVar88);
          iVar67 = -(uint)(fVar48 < fVar88);
          bVar85 = (byte)((uint)iVar49 >> 8);
          bVar86 = (byte)((uint)iVar49 >> 0x10);
          bVar87 = (byte)((uint)iVar49 >> 0x18);
          auVar61[0] = SUB41(fVar39,0) & ~(byte)iVar49;
          auVar61[1] = (byte)((uint)fVar39 >> 8) & ~bVar85;
          auVar61[2] = (byte)((uint)fVar39 >> 0x10) & ~bVar86;
          auVar61[3] = (byte)((uint)fVar39 >> 0x18) & ~bVar87;
          auVar61[4] = SUB41(fVar38,0) & ~(byte)iVar64;
          auVar61[5] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar64 >> 8);
          auVar61[6] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
          auVar61[7] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
          auVar61[8] = SUB41(fVar46,0) & ~(byte)iVar66;
          auVar61[9] = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar66 >> 8);
          auVar61[10] = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
          auVar61[0xb] = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
          auVar61[0xc] = SUB41(fVar62,0) & ~(byte)iVar67;
          auVar61[0xd] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar67 >> 8);
          auVar61[0xe] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
          auVar61[0xf] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
          iVar49 = -(uint)((float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~bVar87,
                                           CONCAT12((byte)((uint)fVar36 >> 0x10) & ~bVar86,
                                                    CONCAT11((byte)((uint)fVar36 >> 8) & ~bVar85,
                                                             SUB41(fVar36,0) & ~(byte)iVar49))) ==
                          0.0);
          auVar84._8_4_ = fStack_178;
          auVar84._0_8_ = uVar19;
          auVar84._12_4_ = fStack_174;
          auVar83._0_4_ =
               CONCAT13(~(byte)((uint)iVar49 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar49 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar49 >> 8),~(byte)iVar49)));
          auVar83._4_4_ = auVar83._0_4_;
          auVar83._8_4_ = auVar83._0_4_;
          auVar83._12_4_ = auVar83._0_4_;
          auVar84 = auVar84 ^ (auVar84 ^ auVar61) & auVar83;
          auVar92 = NEON_ext(auVar84,auVar84,8,1);
          local_c8 = auVar84._0_8_;
          local_c0 = auVar92._0_8_;
          (**(code **)(*plVar28 + 0xb0))(plVar28,&local_c8,1);
          puVar31 = puVar32;
        } while (puVar30 != puVar32);
      }
    }
    fVar88 = DAT_01d4bac8;
    if (DAT_01d4bac8 < param_1) {
      fVar36 = 1.0 / *(float *)(param_3 + 0x21c);
      do {
        fVar48 = fVar36;
        if (param_1 <= fVar36) {
          fVar48 = param_1;
        }
        (**(code **)(**(long **)(param_3 + 0x150) + 0x1c8))
                  (fVar48,*(long **)(param_3 + 0x150),0,*(undefined8 *)(param_3 + 0x130),0x20000,1);
        (**(code **)(**(long **)(param_3 + 0x150) + 0x1f0))(*(long **)(param_3 + 0x150),1,0);
        param_1 = param_1 - fVar48;
      } while (fVar88 < param_1);
    }
    puVar30 = *(undefined8 **)(param_3 + 0x1e8);
    puVar31 = *(undefined8 **)(param_3 + 0x1f0);
    if (puVar30 != puVar31) {
      fVar37 = fVar37 * param_2;
      do {
        while( true ) {
          plVar28 = (long *)*puVar30;
          lVar22 = (long)(int)plVar28[2];
          lVar27 = *(long *)(param_5 + 0x1b8);
          (**(code **)(*plVar28 + 0xa8))(&local_c8,plVar28);
          iVar49 = *(int *)((long)plVar28 + 0x14);
          if (iVar49 < 0) break;
          if ((ulong)(*(long *)(param_3 + 400) - *(long *)(param_3 + 0x188) >> 3) <=
              (ulong)(long)iVar49) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          (**(code **)(**(long **)(*(long *)(param_3 + 0x188) + (long)iVar49 * 8) + 0xa8))
                    (&local_f0);
          lVar33 = lVar27 + lVar22 * 0x130;
          fVar36 = (local_b8 - (float)local_e0) + (local_b8 - (float)local_e0);
          fVar48 = (fStack_b4 - local_e0._4_4_) + (fStack_b4 - local_e0._4_4_);
          fVar38 = (local_b0 - local_d8) + (local_b0 - local_d8);
          fVar46 = uStack_e8._4_4_ * uStack_e8._4_4_ + -0.5;
          fVar88 = (fVar36 * -(float)local_f0 - fVar48 * local_f0._4_4_) - fVar38 * (float)uStack_e8
          ;
          fVar62 = uStack_e8._4_4_ * (fVar48 * (float)uStack_e8 - fVar38 * local_f0._4_4_);
          fVar47 = fVar88 * (float)local_f0;
          fVar65 = uStack_e8._4_4_ * (fVar38 * (float)local_f0 - fVar36 * (float)uStack_e8);
          fVar39 = uStack_e8._4_4_ * (fVar36 * local_f0._4_4_ - fVar48 * (float)local_f0);
          fVar116 = fVar88 * local_f0._4_4_;
          auVar125._0_8_ =
               CONCAT44(((uStack_e8._4_4_ * local_c8._4_4_ - local_c0._4_4_ * local_f0._4_4_) -
                        (float)local_c8 * (float)uStack_e8) + (float)local_c0 * (float)local_f0,
                        ((uStack_e8._4_4_ * (float)local_c8 - local_c0._4_4_ * (float)local_f0) -
                        (float)local_c0 * local_f0._4_4_) + local_c8._4_4_ * (float)uStack_e8);
          fVar88 = fVar88 * (float)uStack_e8;
          auVar125._8_4_ =
               ((uStack_e8._4_4_ * (float)local_c0 - local_c0._4_4_ * (float)uStack_e8) -
               local_c8._4_4_ * (float)local_f0) + (float)local_c8 * local_f0._4_4_;
          auVar125._12_4_ =
               uStack_e8._4_4_ * local_c0._4_4_ + (float)local_c8 * (float)local_f0 +
               local_c8._4_4_ * local_f0._4_4_ + (float)local_c0 * (float)uStack_e8;
          uStack_f8 = auVar125._8_8_;
          uStack_120 = *(undefined8 *)(lVar33 + 0x40);
          uStack_118 = *(undefined8 *)(lVar33 + 0x48);
          local_100 = auVar125._0_8_;
          auVar41 = FUN_0075e7d0(fVar37,&uStack_120,&local_100);
          uStack_108 = auVar41._8_8_;
          local_110 = auVar41._0_8_;
          lVar29 = *(long *)(lVar33 + 0x120);
          lVar34 = (long)*(int *)(*(long *)(lVar33 + 0x128) + 0x40);
          FUN_0075e320(*(long *)(lVar29 + 0x1b8) + lVar34 * 0x130 + 0x30,&local_110);
          lVar26 = *(long *)(lVar29 + 0x1e8);
          if (*(long *)(lVar29 + 0x1f0) != lVar26) {
            lVar34 = *(long *)(*(long *)(lVar29 + 0x1b8) + lVar34 * 0x130 + 0x128);
            uVar24 = 0;
            do {
              lVar25 = uVar24 * 4;
              uVar24 = uVar24 + 1;
              *(uint *)(lVar26 + lVar25) =
                   *(uint *)(lVar26 + lVar25) | *(uint *)(*(long *)(lVar34 + 200) + lVar25);
              lVar26 = *(long *)(lVar29 + 0x1e8);
            } while (uVar24 < (ulong)(*(long *)(lVar29 + 0x1f0) - lVar26 >> 2));
          }
          lVar27 = lVar27 + lVar22 * 0x130;
          auVar45._0_8_ =
               CONCAT44(*(float *)(lVar27 + 0x54) +
                        (((fVar46 * fVar48 + fVar65) - fVar116) - *(float *)(lVar27 + 0x54)) *
                        fVar37,*(float *)(lVar27 + 0x50) +
                               (((fVar46 * fVar36 + fVar62) - fVar47) - *(float *)(lVar27 + 0x50)) *
                               fVar37);
          auVar45._8_4_ =
               *(float *)(lVar27 + 0x58) +
               (((fVar46 * fVar38 + fVar39) - fVar88) - *(float *)(lVar27 + 0x58)) * fVar37;
          auVar45._12_4_ = *(float *)(lVar27 + 0x5c) + (0.0 - *(float *)(lVar27 + 0x5c)) * fVar37;
          uStack_108 = auVar45._8_8_;
          lVar29 = *(long *)(lVar33 + 0x120);
          lVar22 = (long)*(int *)(*(long *)(lVar33 + 0x128) + 0x40);
          local_110 = auVar45._0_8_;
          FUN_0075e340(*(long *)(lVar29 + 0x1b8) + lVar22 * 0x130 + 0x30,&local_110);
          lVar27 = *(long *)(lVar29 + 0x1e8);
          if (*(long *)(lVar29 + 0x1f0) != lVar27) {
            lVar22 = *(long *)(*(long *)(lVar29 + 0x1b8) + lVar22 * 0x130 + 0x128);
            uVar24 = 0;
            do {
              lVar26 = uVar24 * 4;
              uVar24 = uVar24 + 1;
              *(uint *)(lVar27 + lVar26) =
                   *(uint *)(lVar27 + lVar26) | *(uint *)(*(long *)(lVar22 + 200) + lVar26);
              lVar27 = *(long *)(lVar29 + 0x1e8);
            } while (uVar24 < (ulong)(*(long *)(lVar29 + 0x1f0) - lVar27 >> 2));
          }
          puVar30 = puVar30 + 1;
          if (puVar30 == puVar31) {
            return;
          }
        }
        auVar41._0_8_ = CONCAT44(*(undefined4 *)((ulong)&local_c8 | 4),(float)local_c8);
        auVar41._8_4_ = (float)local_c0;
        auVar41._12_4_ = local_c0._4_4_;
        lVar27 = lVar27 + lVar22 * 0x130;
        uStack_e8 = auVar41._8_8_;
        lVar22 = *(long *)(lVar27 + 0x120);
        lVar26 = (long)*(int *)(*(long *)(lVar27 + 0x128) + 0x40);
        local_f0 = auVar41._0_8_;
        FUN_0075e320(*(long *)(lVar22 + 0x1b8) + lVar26 * 0x130 + 0x30,&local_f0);
        lVar29 = *(long *)(lVar22 + 0x1e8);
        if (*(long *)(lVar22 + 0x1f0) != lVar29) {
          lVar26 = *(long *)(*(long *)(lVar22 + 0x1b8) + lVar26 * 0x130 + 0x128);
          uVar24 = 0;
          do {
            lVar33 = uVar24 * 4;
            uVar24 = uVar24 + 1;
            *(uint *)(lVar29 + lVar33) =
                 *(uint *)(lVar29 + lVar33) | *(uint *)(*(long *)(lVar26 + 200) + lVar33);
            lVar29 = *(long *)(lVar22 + 0x1e8);
          } while (uVar24 < (ulong)(*(long *)(lVar22 + 0x1f0) - lVar29 >> 2));
        }
        local_f0 = CONCAT44(fStack_b4,local_b8);
        uStack_e8 = (ulong)(uint)local_b0;
        lVar29 = *(long *)(lVar27 + 0x120);
        lVar22 = (long)*(int *)(*(long *)(lVar27 + 0x128) + 0x40);
        FUN_0075e340(*(long *)(lVar29 + 0x1b8) + lVar22 * 0x130 + 0x30,&local_f0);
        lVar27 = *(long *)(lVar29 + 0x1e8);
        if (*(long *)(lVar29 + 0x1f0) != lVar27) {
          lVar22 = *(long *)(*(long *)(lVar29 + 0x1b8) + lVar22 * 0x130 + 0x128);
          uVar24 = 0;
          do {
            lVar26 = uVar24 * 4;
            uVar24 = uVar24 + 1;
            *(uint *)(lVar27 + lVar26) =
                 *(uint *)(lVar27 + lVar26) | *(uint *)(*(long *)(lVar22 + 200) + lVar26);
            lVar27 = *(long *)(lVar29 + 0x1e8);
          } while (uVar24 < (ulong)(*(long *)(lVar29 + 0x1f0) - lVar27 >> 2));
        }
        puVar30 = puVar30 + 1;
      } while (puVar30 != puVar31);
    }
  }
  return;
}


