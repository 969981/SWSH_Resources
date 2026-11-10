/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070c4f0; name: FUN_0070c4f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070c4f0(long param_1,long param_2)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long *plVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  float fVar46;
  undefined1 auVar45 [16];
  int iVar47;
  int iVar55;
  int iVar56;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar57;
  float fVar58;
  float fVar59;
  float fVar65;
  float fVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 uVar68;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar90;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined8 uVar91;
  undefined1 auVar93 [16];
  undefined8 uVar92;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined8 uVar99;
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined8 uVar104;
  undefined1 auVar105 [16];
  float fVar106;
  float fVar113;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined8 uVar114;
  float fVar115;
  float fVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  undefined1 uVar121;
  byte bVar122;
  undefined1 uVar123;
  byte bVar124;
  undefined1 uVar125;
  byte bVar126;
  undefined1 uVar127;
  byte bVar128;
  undefined1 uVar129;
  byte bVar130;
  undefined1 uVar131;
  byte bVar132;
  undefined1 uVar133;
  byte bVar134;
  undefined1 uVar135;
  byte bVar136;
  undefined1 uVar137;
  byte bVar138;
  undefined1 uVar139;
  byte bVar140;
  undefined1 uVar141;
  byte bVar142;
  undefined1 uVar143;
  byte bVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 uVar151;
  float fVar152;
  float fVar154;
  undefined8 uVar153;
  float fVar155;
  float fVar156;
  undefined8 uVar157;
  float fVar158;
  undefined8 uVar159;
  float fVar160;
  undefined8 uVar161;
  
  iVar47 = *(int *)(param_2 + 0x20);
  if (iVar47 == 0) {
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) | 0x10;
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) & 0xfffffffffffffffd;
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) & 0xfffffffffffffffe;
    (**(code **)(*(long *)(param_1 + 0x188) + 0x10))(param_1 + 0x188);
    (**(code **)(*(long *)(param_1 + 0x188) + 0x18))(param_1 + 0x188);
    fVar74 = *(float *)PTR_Float1Divided2Pi_02715148;
    fVar90 = *(float *)(param_2 + 0x30) * fVar74;
    fVar106 = *(float *)(param_2 + 0x34) * fVar74;
    fVar113 = *(float *)(param_2 + 0x38) * fVar74;
    fVar74 = *(float *)(param_2 + 0x3c) * fVar74;
    fVar58 = *(float *)PTR_Float2Pi_02715150;
    auVar84._0_4_ = (int)(fVar90 + (float)(-(uint)(0.0 <= fVar90) & 0x80000000 ^ 0xbf000000));
    auVar84._4_4_ = (int)(fVar106 + (float)(-(uint)(0.0 <= fVar106) & 0x80000000 ^ 0xbf000000));
    auVar84._8_4_ = (int)(fVar113 + (float)(-(uint)(0.0 <= fVar113) & 0x80000000 ^ 0xbf000000));
    auVar84._12_4_ = (int)(fVar74 + (float)(-(uint)(0.0 <= fVar74) & 0x80000000 ^ 0xbf000000));
    auVar48 = NEON_scvtf(auVar84,4);
    auVar95._0_4_ = *(float *)(param_2 + 0x30) - auVar48._0_4_ * fVar58;
    auVar95._4_4_ = *(float *)(param_2 + 0x34) - auVar48._4_4_ * fVar58;
    auVar95._8_4_ = *(float *)(param_2 + 0x38) - auVar48._8_4_ * fVar58;
    auVar95._12_4_ = *(float *)(param_2 + 0x3c) - auVar48._12_4_ * fVar58;
    fVar74 = *(float *)PTR_FloatPiDivided2_02715158;
    fVar106 = *(float *)PTR_FloatPi_02715160;
    fVar90 = -fVar74;
    auVar60._0_8_ = CONCAT44(-(uint)(fVar74 < auVar95._4_4_),-(uint)(fVar74 < auVar95._0_4_));
    auVar60._8_4_ = -(uint)(fVar74 < auVar95._8_4_);
    auVar60._12_4_ = -(uint)(fVar74 < auVar95._12_4_);
    auVar94._8_8_ = auVar60._8_8_;
    auVar94._0_8_ = auVar60._0_8_;
    auVar83._0_4_ = fVar106 - auVar95._0_4_;
    auVar83._4_4_ = fVar106 - auVar95._4_4_;
    auVar83._8_4_ = fVar106 - auVar95._8_4_;
    auVar83._12_4_ = fVar106 - auVar95._12_4_;
    auVar95 = auVar95 ^ (auVar95 ^ auVar83) & auVar94;
    auVar101._0_4_ = -(uint)(auVar95._0_4_ < fVar90);
    auVar101._4_4_ = -(uint)(auVar95._4_4_ < fVar90);
    auVar101._8_4_ = -(uint)(auVar95._8_4_ < fVar90);
    auVar101._12_4_ = -(uint)(auVar95._12_4_ < fVar90);
    fVar106 = -fVar106;
    auVar49._0_4_ = fVar106 - auVar95._0_4_;
    auVar49._4_4_ = fVar106 - auVar95._4_4_;
    auVar49._8_4_ = fVar106 - auVar95._8_4_;
    auVar49._12_4_ = fVar106 - auVar95._12_4_;
    auVar84 = NEON_fmov(0xbf800000,4);
    auVar48 = NEON_fmov(0x3f800000,4);
    auVar61 = auVar48 ^ (auVar48 ^ auVar84) & auVar60;
    auVar61 = auVar61 ^ (auVar61 ^ auVar84) & auVar101;
    fVar75 = *(float *)PTR_SinCoefficients_02715168;
    auVar95 = auVar95 ^ (auVar95 ^ auVar49) & auVar101;
    fVar74 = *(float *)(PTR_SinCoefficients_02715168 + 4);
    fVar78 = auVar95._0_4_;
    fVar59 = fVar78 * fVar78;
    fVar79 = auVar95._4_4_;
    fVar65 = fVar79 * fVar79;
    fVar80 = auVar95._8_4_;
    fVar66 = fVar80 * fVar80;
    fVar73 = auVar95._12_4_;
    fVar67 = fVar73 * fVar73;
    fVar76 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
    fVar90 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
    fVar77 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
    fVar106 = auVar48._0_4_;
    fVar113 = auVar48._4_4_;
    fVar58 = auVar48._8_4_;
    fVar46 = auVar48._12_4_;
    auVar50._0_4_ =
         (fVar106 +
         fVar59 * (fVar77 + fVar59 * (fVar90 + fVar59 * (fVar76 + fVar59 * (fVar74 - fVar59 * fVar75
                                                                           ))))) * fVar78;
    auVar50._4_4_ =
         (fVar113 +
         fVar65 * (fVar77 + fVar65 * (fVar90 + fVar65 * (fVar76 + fVar65 * (fVar74 - fVar65 * fVar75
                                                                           ))))) * fVar79;
    auVar50._8_4_ =
         (fVar58 + fVar66 * (fVar77 + fVar66 * (fVar90 + fVar66 * (fVar76 + fVar66 * (fVar74 - 
                                                  fVar66 * fVar75))))) * fVar80;
    auVar50._12_4_ =
         (fVar46 + fVar67 * (fVar77 + fVar67 * (fVar90 + fVar67 * (fVar76 + fVar67 * (fVar74 - 
                                                  fVar67 * fVar75))))) * fVar73;
    fVar74 = *(float *)(PTR_CosCoefficients_02715170 + 4);
    fVar78 = *(float *)PTR_CosCoefficients_02715170;
    fVar79 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
    fVar90 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
    fVar80 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
    auVar62._0_4_ =
         (fVar106 +
         fVar59 * (fVar80 + fVar59 * (fVar90 + fVar59 * (fVar79 + fVar59 * (fVar74 - fVar59 * fVar78
                                                                           ))))) * auVar61._0_4_;
    auVar62._4_4_ =
         (fVar113 +
         fVar65 * (fVar80 + fVar65 * (fVar90 + fVar65 * (fVar79 + fVar65 * (fVar74 - fVar65 * fVar78
                                                                           ))))) * auVar61._4_4_;
    auVar62._8_4_ =
         (fVar58 + fVar66 * (fVar80 + fVar66 * (fVar90 + fVar66 * (fVar79 + fVar66 * (fVar74 - 
                                                  fVar66 * fVar78))))) * auVar61._8_4_;
    auVar62._12_4_ =
         (fVar46 + fVar67 * (fVar80 + fVar67 * (fVar90 + fVar67 * (fVar79 + fVar67 * (fVar74 - 
                                                  fVar67 * fVar78))))) * auVar61._12_4_;
    auVar48 = NEON_ext(auVar62,auVar62,8,1);
    auVar95 = NEON_ext(auVar50,auVar50,8,1);
    fVar74 = auVar48._0_4_;
    fVar90 = auVar95._0_4_;
    fVar66 = auVar62._4_4_ * fVar74;
    auVar85._0_8_ = CONCAT44(auVar62._4_4_ * fVar90,fVar66);
    auVar85._8_4_ = (float)DAT_01cd53f0 * auVar50._4_4_;
    auVar85._12_4_ = (float)((ulong)DAT_01cd53f0 >> 0x20) * 0.0;
    fVar65 = (float)DAT_01cd5070 * auVar62._4_4_;
    fVar67 = fVar90 * auVar62._0_4_ * (float)_DAT_01d4a4a0 + auVar50._4_4_ * fVar74 * auVar50._0_4_;
    fVar78 = fVar74 * auVar62._0_4_ * (float)((ulong)_DAT_01d4a4a0 >> 0x20) +
             auVar50._4_4_ * fVar90 * auVar50._0_4_;
    fVar79 = auVar62._0_4_ * 0.0 * (float)_UNK_01d4a4a8 + fVar65 * auVar50._0_4_;
    fVar59 = fVar74 * auVar50._0_4_ * (float)((ulong)_DAT_01d4b1c0 >> 0x20) +
             auVar50._4_4_ * fVar90 * auVar62._0_4_;
    fVar65 = auVar50._0_4_ * 0.0 * (float)_UNK_01d4b1c8 + fVar65 * auVar62._0_4_;
    uVar43 = NEON_ext(auVar85._0_8_,
                      CONCAT44(fVar59,fVar90 * auVar50._0_4_ * (float)_DAT_01d4b1c0 +
                                      auVar50._4_4_ * fVar74 * auVar62._0_4_),4,1);
    fVar106 = (float)_DAT_01d4ab60 * fVar66 + (float)_DAT_01d4b9d0 * fVar78 +
              (float)_DAT_01d4b2f0 * fVar65 + fVar106;
    fVar113 = (float)((ulong)_DAT_01d4ab60 >> 0x20) * fVar66 +
              (float)((ulong)_DAT_01d4b9d0 >> 0x20) * fVar78 +
              (float)((ulong)_DAT_01d4b2f0 >> 0x20) * fVar65 + fVar113;
    fVar58 = (float)_UNK_01d4ab68 * fVar66 + (float)_UNK_01d4b9d8 * fVar78 +
             (float)_UNK_01d4b2f8 * fVar65 + fVar58;
    fVar46 = (float)((ulong)_UNK_01d4ab68 >> 0x20) * fVar66 +
             (float)((ulong)_UNK_01d4b9d8 >> 0x20) * fVar78 +
             (float)((ulong)_UNK_01d4b2f8 >> 0x20) * fVar65 + fVar46;
    auVar95 = NEON_ext(auVar85,auVar85,8,1);
    auVar86._0_4_ = (float)uVar43 + fVar67;
    fVar74 = (float)((ulong)uVar43 >> 0x20);
    auVar86._4_4_ = fVar74 + auVar95._0_4_;
    auVar86._8_4_ = fVar79 + fVar59;
    auVar86._12_4_ = 0;
    auVar96._0_4_ = (float)uVar43 - fVar67;
    auVar96._4_4_ = fVar74 - auVar95._0_4_;
    auVar96._8_4_ = fVar79 - fVar59;
    auVar96._12_4_ = 0;
    uVar43 = a64_TBL(ZEXT816(0),auVar86,auVar96,DAT_01cd5420);
    uVar68 = a64_TBL(ZEXT816(0),auVar86,auVar96,DAT_01cd51d0);
    auVar69._8_8_ = uVar68;
    auVar69._0_8_ = uVar43;
    uVar68 = a64_TBL(ZEXT816(0),auVar86,auVar96,DAT_01cd5250);
    auVar61._4_12_ = auVar69._4_12_;
    auVar61._0_4_ = fVar106;
    auVar63._0_8_ = a64_TBL(ZEXT816(0),auVar86,auVar96,DAT_01cd5418);
    uVar153 = a64_TBL(ZEXT816(0),auVar86,auVar96,DAT_01cd50b8);
    auVar51._0_4_ = (undefined4)uVar43;
    auVar51._4_4_ = fVar113;
    auVar51._8_8_ = uVar68;
    lVar41 = *(long *)(param_1 + 0x1a8);
    auVar102._0_8_ = a64_TBL(ZEXT816(0),auVar86,auVar96,DAT_01cd5190);
    uVar43 = a64_TBL(ZEXT816(0),auVar86,auVar96,DAT_01cd4f98);
    auVar97._4_4_ = fVar113;
    auVar97._0_4_ = fVar113;
    auVar97._8_4_ = fVar113;
    auVar97._12_4_ = fVar113;
    auVar63._12_4_ = (undefined4)((ulong)uVar153 >> 0x20);
    auVar63._8_4_ = fVar58;
    auVar102._8_8_ = uVar43;
    auVar110._4_4_ = fVar106;
    auVar110._0_4_ = fVar106;
    auVar110._8_4_ = fVar106;
    auVar110._12_4_ = fVar106;
    auVar105._0_8_ = CONCAT44(-(uint)(fVar106 <= fVar113),-(uint)(fVar106 <= fVar113));
    auVar105._8_4_ = -(uint)(fVar106 <= fVar113);
    auVar105._12_4_ = -(uint)(fVar106 <= fVar113);
    auVar109._8_8_ = auVar105._8_8_;
    auVar109._0_8_ = auVar105._0_8_;
    auVar61 = auVar61 ^ (auVar61 ^ auVar51) & auVar105;
    auVar52._4_4_ = fVar58;
    auVar52._0_4_ = fVar58;
    auVar52._8_4_ = fVar58;
    auVar52._12_4_ = fVar58;
    auVar103._0_12_ = auVar102._0_12_;
    auVar103._12_4_ = fVar46;
    auVar110 = auVar110 ^ (auVar110 ^ auVar97) & auVar109;
    auVar70._0_8_ = CONCAT44(-(uint)(auVar110._4_4_ <= fVar58),-(uint)(auVar110._0_4_ <= fVar58));
    auVar70._8_4_ = -(uint)(auVar110._8_4_ <= fVar58);
    auVar70._12_4_ = -(uint)(auVar110._12_4_ <= fVar58);
    auVar87._8_8_ = auVar70._8_8_;
    auVar87._0_8_ = auVar70._0_8_;
    auVar61 = auVar61 ^ (auVar61 ^ auVar63) & auVar70;
    auVar110 = auVar110 ^ (auVar110 ^ auVar52) & auVar87;
    auVar48._0_4_ = -(uint)(auVar110._0_4_ <= fVar46);
    auVar48._4_4_ = -(uint)(auVar110._4_4_ <= fVar46);
    auVar48._8_4_ = -(uint)(auVar110._8_4_ <= fVar46);
    auVar48._12_4_ = -(uint)(auVar110._12_4_ <= fVar46);
    auVar61 = auVar61 ^ (auVar61 ^ auVar103) & auVar48;
    fVar106 = auVar61._0_4_;
    auVar53._0_4_ = fVar106 * fVar106;
    fVar113 = auVar61._4_4_;
    auVar53._4_4_ = fVar113 * fVar113;
    fVar58 = auVar61._8_4_;
    auVar53._8_4_ = fVar58 * fVar58;
    fVar46 = auVar61._12_4_;
    auVar53._12_4_ = fVar46 * fVar46;
    auVar95 = NEON_ext(auVar53,auVar53,8,1);
    fVar90 = auVar95._0_4_ + auVar53._0_4_;
    fVar59 = auVar95._4_4_ + auVar53._4_4_;
    fVar74 = fVar90 + fVar59;
    fVar90 = fVar90 + fVar59;
    auVar54._8_8_ = CONCAT44(fVar90,fVar74);
    auVar54._0_8_ = CONCAT44(fVar90,fVar74);
    auVar95 = NEON_frsqrte(auVar54,4);
    auVar71._0_4_ = auVar95._0_4_ * fVar74;
    auVar71._4_4_ = auVar95._4_4_ * fVar90;
    auVar71._8_4_ = auVar95._8_4_ * fVar74;
    auVar71._12_4_ = auVar95._12_4_ * fVar90;
    auVar48 = NEON_frsqrts(auVar95,auVar71,4);
    auVar64._0_4_ = auVar95._0_4_ * auVar48._0_4_;
    auVar64._4_4_ = auVar95._4_4_ * auVar48._4_4_;
    auVar64._8_4_ = auVar95._8_4_ * auVar48._8_4_;
    auVar64._12_4_ = auVar95._12_4_ * auVar48._12_4_;
    auVar72._0_4_ = fVar74 * auVar64._0_4_;
    auVar72._4_4_ = fVar90 * auVar64._4_4_;
    auVar72._8_4_ = fVar74 * auVar64._8_4_;
    auVar72._12_4_ = fVar90 * auVar64._12_4_;
    iVar47 = -(uint)(fVar74 == 0.0);
    iVar55 = -(uint)(fVar90 == 0.0);
    iVar56 = -(uint)(fVar74 == 0.0);
    iVar57 = -(uint)(fVar90 == 0.0);
    auVar95 = NEON_frsqrts(auVar64,auVar72,4);
    fVar106 = auVar64._0_4_ * auVar95._0_4_ * fVar106;
    fVar113 = auVar64._4_4_ * auVar95._4_4_ * fVar113;
    fVar58 = auVar64._8_4_ * auVar95._8_4_ * fVar58;
    fVar46 = auVar64._12_4_ * auVar95._12_4_ * fVar46;
    *(byte *)(lVar41 + 0x118) = SUB41(fVar58,0) & ~(byte)iVar56;
    *(byte *)(lVar41 + 0x119) = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar56 >> 8);
    *(byte *)(lVar41 + 0x11a) = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
    *(byte *)(lVar41 + 0x11b) = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
    *(byte *)(lVar41 + 0x11c) = SUB41(fVar46,0) & ~(byte)iVar57;
    *(byte *)(lVar41 + 0x11d) = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar57 >> 8);
    *(byte *)(lVar41 + 0x11e) = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    *(byte *)(lVar41 + 0x11f) = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    *(byte *)(lVar41 + 0x110) = SUB41(fVar106,0) & ~(byte)iVar47;
    *(byte *)(lVar41 + 0x111) = (byte)((uint)fVar106 >> 8) & ~(byte)((uint)iVar47 >> 8);
    *(byte *)(lVar41 + 0x112) = (byte)((uint)fVar106 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
    *(byte *)(lVar41 + 0x113) = (byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
    *(byte *)(lVar41 + 0x114) = SUB41(fVar113,0) & ~(byte)iVar55;
    *(byte *)(lVar41 + 0x115) = (byte)((uint)fVar113 >> 8) & ~(byte)((uint)iVar55 >> 8);
    *(byte *)(lVar41 + 0x116) = (byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
    *(byte *)(lVar41 + 0x117) = (byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    lVar41 = *(long *)(param_1 + 0x1a8);
    *(undefined8 *)(lVar41 + 0xf8) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(lVar41 + 0xf0) = *(undefined8 *)(param_2 + 0x40);
  }
  else if (iVar47 == 1) {
    lVar41 = *(long *)(param_1 + 0x1a8);
    *(undefined8 *)(lVar41 + 0xe8) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(lVar41 + 0xe0) = *(undefined8 *)(param_2 + 0x60);
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) & 0xffffffffffffffef;
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) & 0xfffffffffffffffd;
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) | 1;
    uVar40 = DAT_01cd5418;
    uVar39 = DAT_01cd5270;
    uVar104 = DAT_01cd5120;
    uVar38 = DAT_01cd50f8;
    uVar100 = DAT_01cd50b0;
    uVar92 = DAT_01cd4f90;
    lVar41 = *(long *)(param_1 + 0x1a8);
    auVar98._8_8_ = _UNK_01d4b588;
    auVar98._0_8_ = _DAT_01d4b580;
    pVar1 = (unkbyte9 *)(lVar41 + 0x110);
    uVar43 = *(undefined8 *)(lVar41 + 0x118);
    uVar145 = (undefined1)((ulong)uVar43 >> 8);
    uVar146 = (undefined1)((ulong)uVar43 >> 0x10);
    uVar147 = (undefined1)((ulong)uVar43 >> 0x18);
    uVar148 = (undefined1)((ulong)uVar43 >> 0x20);
    uVar149 = (undefined1)((ulong)uVar43 >> 0x28);
    uVar150 = (undefined1)((ulong)uVar43 >> 0x30);
    uVar151 = (undefined1)((ulong)uVar43 >> 0x38);
    fVar65 = (float)_DAT_01d4ae80;
    fVar58 = (float)*(undefined8 *)pVar1;
    fVar74 = fVar58 * fVar65;
    fVar66 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar46 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar90 = fVar46 * fVar66;
    auVar88._0_8_ = CONCAT44(fVar90,fVar74);
    fVar67 = (float)_UNK_01d4ae88;
    auVar88._8_4_ = (float)uVar43 * fVar67;
    fVar78 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar88._12_4_ = (float)((ulong)uVar43 >> 0x20) * fVar78;
    uVar99 = a64_TBL(ZEXT816(0),auVar88,DAT_01cd5120);
    uVar43 = a64_TBL(ZEXT816(0),auVar98,DAT_01cd5418);
    uVar114 = a64_TBL(ZEXT816(0),auVar98,DAT_01cd4f90);
    uVar68 = a64_TBL(ZEXT816(0),auVar98,DAT_01cd50f8);
    uVar91 = a64_TBL(ZEXT816(0),auVar88,DAT_01cd4f90);
    uVar157 = a64_TBL(ZEXT816(0),auVar88,DAT_01cd50f8);
    uVar159 = a64_TBL(ZEXT816(0),auVar88,DAT_01cd5418);
    auVar20[9] = uVar145;
    auVar20._0_9_ = *pVar1;
    auVar20[10] = uVar146;
    auVar20[0xb] = uVar147;
    auVar20[0xc] = uVar148;
    auVar20[0xd] = uVar149;
    auVar20[0xe] = uVar150;
    auVar20[0xf] = uVar151;
    uVar153 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
    fVar76 = (float)uVar114;
    fVar77 = (float)((ulong)uVar114 >> 0x20);
    fVar152 = (float)DAT_01cd52f0;
    fVar154 = (float)((ulong)DAT_01cd52f0 >> 0x20);
    fVar155 = (float)uVar68;
    fVar156 = (float)((ulong)uVar68 >> 0x20);
    uVar161 = a64_TBL(ZEXT816(0),auVar88,DAT_01cd5270);
    auVar89._8_8_ = auVar88._0_8_;
    auVar89._0_8_ = auVar88._0_8_;
    uVar68 = a64_TBL(ZEXT816(0),auVar89,DAT_01cd50b0);
    fVar115 = (float)uVar43;
    fVar116 = (float)((ulong)uVar43 >> 0x20);
    fVar79 = (float)_DAT_01d4ae90;
    fVar80 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar73 = (float)_UNK_01d4ae98;
    fVar75 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar21[9] = uVar145;
    auVar21._0_9_ = *pVar1;
    auVar21[10] = uVar146;
    auVar21[0xb] = uVar147;
    auVar21[0xc] = uVar148;
    auVar21[0xd] = uVar149;
    auVar21[0xe] = uVar150;
    auVar21[0xf] = uVar151;
    uVar114 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
    fVar74 = (fVar74 * fVar76 + fVar79 * fVar152 * (float)uVar91 + fVar79 * fVar115 * (float)uVar157
             ) - fVar155 * (float)uVar159;
    fVar90 = (fVar90 * fVar77 + fVar80 * fVar154 * (float)((ulong)uVar91 >> 0x20) +
             fVar80 * fVar116 * (float)((ulong)uVar157 >> 0x20)) -
             fVar156 * (float)((ulong)uVar159 >> 0x20);
    uVar121 = SUB41(fVar90,0);
    uVar123 = (undefined1)((uint)fVar90 >> 8);
    uVar125 = (undefined1)((uint)fVar90 >> 0x10);
    uVar127 = (undefined1)((uint)fVar90 >> 0x18);
    fVar106 = (auVar88._8_4_ * fVar76 + fVar73 * fVar155 * (float)uVar99 +
              fVar73 * fVar152 * (float)uVar68) - fVar115 * (float)uVar161;
    uVar129 = SUB41(fVar106,0);
    uVar131 = (undefined1)((uint)fVar106 >> 8);
    uVar133 = (undefined1)((uint)fVar106 >> 0x10);
    uVar135 = (undefined1)((uint)fVar106 >> 0x18);
    fVar113 = (auVar88._12_4_ * fVar77 + fVar75 * fVar156 * (float)((ulong)uVar99 >> 0x20) +
              fVar75 * fVar154 * (float)((ulong)uVar68 >> 0x20)) -
              fVar116 * (float)((ulong)uVar161 >> 0x20);
    uVar137 = SUB41(fVar113,0);
    uVar139 = (undefined1)((uint)fVar113 >> 8);
    uVar141 = (undefined1)((uint)fVar113 >> 0x10);
    uVar143 = (undefined1)((uint)fVar113 >> 0x18);
    auVar8[4] = uVar121;
    auVar8._0_4_ = fVar74;
    auVar8[5] = uVar123;
    auVar8[6] = uVar125;
    auVar8[7] = uVar127;
    auVar8[8] = uVar129;
    auVar8[9] = uVar131;
    auVar8[10] = uVar133;
    auVar8[0xb] = uVar135;
    auVar8[0xc] = uVar137;
    auVar8[0xd] = uVar139;
    auVar8[0xe] = uVar141;
    auVar8[0xf] = uVar143;
    uVar99 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
    auVar9[4] = uVar121;
    auVar9._0_4_ = fVar74;
    auVar9[5] = uVar123;
    auVar9[6] = uVar125;
    auVar9[7] = uVar127;
    auVar9[8] = uVar129;
    auVar9[9] = uVar131;
    auVar9[10] = uVar133;
    auVar9[0xb] = uVar135;
    auVar9[0xc] = uVar137;
    auVar9[0xd] = uVar139;
    auVar9[0xe] = uVar141;
    auVar9[0xf] = uVar143;
    uVar159 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5120);
    fVar59 = (float)((ulong)uVar153 >> 0x20);
    auVar10[4] = uVar121;
    auVar10._0_4_ = fVar74;
    auVar10[5] = uVar123;
    auVar10[6] = uVar125;
    auVar10[7] = uVar127;
    auVar10[8] = uVar129;
    auVar10[9] = uVar131;
    auVar10[10] = uVar133;
    auVar10[0xb] = uVar135;
    auVar10[0xc] = uVar137;
    auVar10[0xd] = uVar139;
    auVar10[0xe] = uVar141;
    auVar10[0xf] = uVar143;
    uVar161 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5270);
    fVar158 = (float)((ulong)uVar114 >> 0x20);
    auVar22[9] = uVar145;
    auVar22._0_9_ = *pVar1;
    auVar22[10] = uVar146;
    auVar22[0xb] = uVar147;
    auVar22[0xc] = uVar148;
    auVar22[0xd] = uVar149;
    auVar22[0xe] = uVar150;
    auVar22[0xf] = uVar151;
    uVar157 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
    auVar11[4] = uVar121;
    auVar11._0_4_ = fVar74;
    auVar11[5] = uVar123;
    auVar11[6] = uVar125;
    auVar11[7] = uVar127;
    auVar11[8] = uVar129;
    auVar11[9] = uVar131;
    auVar11[10] = uVar133;
    auVar11[0xb] = uVar135;
    auVar11[0xc] = uVar137;
    auVar11[0xd] = uVar139;
    auVar11[0xe] = uVar141;
    auVar11[0xf] = uVar143;
    uVar68 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50f8);
    auVar12[4] = uVar121;
    auVar12._0_4_ = fVar74;
    auVar12[5] = uVar123;
    auVar12[6] = uVar125;
    auVar12[7] = uVar127;
    auVar12[8] = uVar129;
    auVar12[9] = uVar131;
    auVar12[10] = uVar133;
    auVar12[0xb] = uVar135;
    auVar12[0xc] = uVar137;
    auVar12[0xd] = uVar139;
    auVar12[0xe] = uVar141;
    auVar12[0xf] = uVar143;
    uVar91 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
    auVar13[4] = uVar121;
    auVar13._0_4_ = fVar74;
    auVar13[5] = uVar123;
    auVar13[6] = uVar125;
    auVar13[7] = uVar127;
    auVar13[8] = SUB41(fVar74,0);
    auVar13[9] = (char)((uint)fVar74 >> 8);
    auVar13[10] = (char)((uint)fVar74 >> 0x10);
    auVar13[0xb] = (char)((uint)fVar74 >> 0x18);
    auVar13[0xc] = uVar121;
    auVar13[0xd] = uVar123;
    auVar13[0xe] = uVar125;
    auVar13[0xf] = uVar127;
    uVar43 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50b0);
    fVar160 = (float)((ulong)uVar157 >> 0x20);
    bVar130 = (byte)DAT_01d4ab58;
    bVar132 = (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar134 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar136 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar138 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar140 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar142 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar144 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
    bVar117 = (byte)DAT_01d4ab50;
    bVar118 = (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar119 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar120 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar122 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar124 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar126 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar128 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
    fVar74 = ((float)uVar153 * fVar74 + fVar79 * fVar58 * (float)uVar99 +
             fVar79 * (float)uVar157 * (float)uVar68) - (float)uVar114 * (float)uVar91;
    fVar90 = (fVar59 * fVar90 + fVar80 * fVar46 * (float)((ulong)uVar99 >> 0x20) +
             fVar80 * fVar160 * (float)((ulong)uVar68 >> 0x20)) -
             fVar158 * (float)((ulong)uVar91 >> 0x20);
    fVar106 = ((float)uVar153 * fVar106 + fVar73 * (float)uVar114 * (float)uVar159 +
              fVar73 * fVar58 * (float)uVar43) - (float)uVar157 * (float)uVar161;
    fVar113 = (fVar59 * fVar113 + fVar75 * fVar158 * (float)((ulong)uVar159 >> 0x20) +
              fVar75 * fVar46 * (float)((ulong)uVar43 >> 0x20)) -
              fVar160 * (float)((ulong)uVar161 >> 0x20);
    *(ulong *)(lVar41 + 0xd8) =
         CONCAT17((byte)((uint)fVar113 >> 0x18) & bVar144,
                  CONCAT16((byte)((uint)fVar113 >> 0x10) & bVar142,
                           CONCAT15((byte)((uint)fVar113 >> 8) & bVar140,
                                    CONCAT14(SUB41(fVar113,0) & bVar138,
                                             CONCAT13((byte)((uint)fVar106 >> 0x18) & bVar136,
                                                      CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                                               bVar134,CONCAT11((byte)((uint)fVar106
                                                                                      >> 8) &
                                                                                bVar132,SUB41(
                                                  fVar106,0) & bVar130)))))));
    *(ulong *)(lVar41 + 0xd0) =
         CONCAT17((byte)((uint)fVar90 >> 0x18) & bVar128,
                  CONCAT16((byte)((uint)fVar90 >> 0x10) & bVar126,
                           CONCAT15((byte)((uint)fVar90 >> 8) & bVar124,
                                    CONCAT14(SUB41(fVar90,0) & bVar122,
                                             CONCAT13((byte)((uint)fVar74 >> 0x18) & bVar120,
                                                      CONCAT12((byte)((uint)fVar74 >> 0x10) &
                                                               bVar119,CONCAT11((byte)((uint)fVar74
                                                                                      >> 8) &
                                                                                bVar118,SUB41(fVar74
                                                  ,0) & bVar117)))))));
    *(ulong *)(lVar41 + 0x138) = *(ulong *)(lVar41 + 0x138) & 0xfffffffffffffff3 | 4;
    lVar41 = *(long *)(param_1 + 0x1a8);
    pVar1 = (unkbyte9 *)(lVar41 + 0x110);
    uVar43 = *(undefined8 *)(lVar41 + 0x118);
    uVar121 = (undefined1)((ulong)uVar43 >> 8);
    uVar123 = (undefined1)((ulong)uVar43 >> 0x10);
    uVar125 = (undefined1)((ulong)uVar43 >> 0x18);
    uVar127 = (undefined1)((ulong)uVar43 >> 0x20);
    uVar129 = (undefined1)((ulong)uVar43 >> 0x28);
    uVar131 = (undefined1)((ulong)uVar43 >> 0x30);
    uVar133 = (undefined1)((ulong)uVar43 >> 0x38);
    fVar74 = (float)*(undefined8 *)pVar1;
    fVar65 = fVar74 * fVar65;
    fVar90 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar66 = fVar90 * fVar66;
    uVar135 = SUB41(fVar66,0);
    uVar137 = (undefined1)((uint)fVar66 >> 8);
    uVar139 = (undefined1)((uint)fVar66 >> 0x10);
    uVar141 = (undefined1)((uint)fVar66 >> 0x18);
    fVar67 = (float)uVar43 * fVar67;
    uVar143 = SUB41(fVar67,0);
    uVar145 = (undefined1)((uint)fVar67 >> 8);
    uVar146 = (undefined1)((uint)fVar67 >> 0x10);
    uVar147 = (undefined1)((uint)fVar67 >> 0x18);
    fVar78 = (float)((ulong)uVar43 >> 0x20) * fVar78;
    uVar148 = SUB41(fVar78,0);
    uVar149 = (undefined1)((uint)fVar78 >> 8);
    uVar150 = (undefined1)((uint)fVar78 >> 0x10);
    uVar151 = (undefined1)((uint)fVar78 >> 0x18);
    auVar32[4] = uVar135;
    auVar32._0_4_ = fVar65;
    auVar32[5] = uVar137;
    auVar32[6] = uVar139;
    auVar32[7] = uVar141;
    auVar32[8] = uVar143;
    auVar32[9] = uVar145;
    auVar32[10] = uVar146;
    auVar32[0xb] = uVar147;
    auVar32[0xc] = uVar148;
    auVar32[0xd] = uVar149;
    auVar32[0xe] = uVar150;
    auVar32[0xf] = uVar151;
    uVar91 = a64_TBL(ZEXT816(0),auVar32,uVar104);
    auVar33[4] = uVar135;
    auVar33._0_4_ = fVar65;
    auVar33[5] = uVar137;
    auVar33[6] = uVar139;
    auVar33[7] = uVar141;
    auVar33[8] = uVar143;
    auVar33[9] = uVar145;
    auVar33[10] = uVar146;
    auVar33[0xb] = uVar147;
    auVar33[0xc] = uVar148;
    auVar33[0xd] = uVar149;
    auVar33[0xe] = uVar150;
    auVar33[0xf] = uVar151;
    uVar68 = a64_TBL(ZEXT816(0),auVar33,uVar92);
    auVar34[4] = uVar135;
    auVar34._0_4_ = fVar65;
    auVar34[5] = uVar137;
    auVar34[6] = uVar139;
    auVar34[7] = uVar141;
    auVar34[8] = uVar143;
    auVar34[9] = uVar145;
    auVar34[10] = uVar146;
    auVar34[0xb] = uVar147;
    auVar34[0xc] = uVar148;
    auVar34[0xd] = uVar149;
    auVar34[0xe] = uVar150;
    auVar34[0xf] = uVar151;
    uVar114 = a64_TBL(ZEXT816(0),auVar34,uVar40);
    auVar35[4] = uVar135;
    auVar35._0_4_ = fVar65;
    auVar35[5] = uVar137;
    auVar35[6] = uVar139;
    auVar35[7] = uVar141;
    auVar35[8] = uVar143;
    auVar35[9] = uVar145;
    auVar35[10] = uVar146;
    auVar35[0xb] = uVar147;
    auVar35[0xc] = uVar148;
    auVar35[0xd] = uVar149;
    auVar35[0xe] = uVar150;
    auVar35[0xf] = uVar151;
    uVar153 = a64_TBL(ZEXT816(0),auVar35,uVar38);
    auVar36[4] = uVar135;
    auVar36._0_4_ = fVar65;
    auVar36[5] = uVar137;
    auVar36[6] = uVar139;
    auVar36[7] = uVar141;
    auVar36[8] = uVar143;
    auVar36[9] = uVar145;
    auVar36[10] = uVar146;
    auVar36[0xb] = uVar147;
    auVar36[0xc] = uVar148;
    auVar36[0xd] = uVar149;
    auVar36[0xe] = uVar150;
    auVar36[0xf] = uVar151;
    uVar157 = a64_TBL(ZEXT816(0),auVar36,uVar39);
    auVar37[4] = uVar135;
    auVar37._0_4_ = fVar65;
    auVar37[5] = uVar137;
    auVar37[6] = uVar139;
    auVar37[7] = uVar141;
    auVar37[8] = SUB41(fVar65,0);
    auVar37[9] = (char)((uint)fVar65 >> 8);
    auVar37[10] = (char)((uint)fVar65 >> 0x10);
    auVar37[0xb] = (char)((uint)fVar65 >> 0x18);
    auVar37[0xc] = uVar135;
    auVar37[0xd] = uVar137;
    auVar37[0xe] = uVar139;
    auVar37[0xf] = uVar141;
    uVar43 = a64_TBL(ZEXT816(0),auVar37,uVar100);
    auVar23[9] = uVar121;
    auVar23._0_9_ = *pVar1;
    auVar23[10] = uVar123;
    auVar23[0xb] = uVar125;
    auVar23[0xc] = uVar127;
    auVar23[0xd] = uVar129;
    auVar23[0xe] = uVar131;
    auVar23[0xf] = uVar133;
    uVar99 = a64_TBL(ZEXT816(0),auVar23,uVar92);
    fVar106 = (fVar76 * fVar65 + fVar79 * fVar152 * (float)uVar68 +
              fVar79 * fVar115 * (float)uVar153) - fVar155 * (float)uVar114;
    fVar113 = (fVar77 * fVar66 + fVar80 * fVar154 * (float)((ulong)uVar68 >> 0x20) +
              fVar80 * fVar116 * (float)((ulong)uVar153 >> 0x20)) -
              fVar156 * (float)((ulong)uVar114 >> 0x20);
    auVar111._0_8_ = CONCAT44(fVar113,fVar106);
    auVar111._8_4_ =
         (fVar76 * fVar67 + fVar73 * fVar155 * (float)uVar91 + fVar73 * fVar152 * (float)uVar43) -
         fVar115 * (float)uVar157;
    auVar111._12_4_ =
         (fVar77 * fVar78 + fVar75 * fVar156 * (float)((ulong)uVar91 >> 0x20) +
         fVar75 * fVar154 * (float)((ulong)uVar43 >> 0x20)) -
         fVar116 * (float)((ulong)uVar157 >> 0x20);
    uVar68 = a64_TBL(ZEXT816(0),auVar111,uVar92);
    uVar104 = a64_TBL(ZEXT816(0),auVar111,uVar104);
    fVar46 = (float)((ulong)uVar99 >> 0x20);
    auVar24[9] = uVar121;
    auVar24._0_9_ = *pVar1;
    auVar24[10] = uVar123;
    auVar24[0xb] = uVar125;
    auVar24[0xc] = uVar127;
    auVar24[0xd] = uVar129;
    auVar24[0xe] = uVar131;
    auVar24[0xf] = uVar133;
    uVar114 = a64_TBL(ZEXT816(0),auVar24,uVar38);
    auVar25[9] = uVar121;
    auVar25._0_9_ = *pVar1;
    auVar25[10] = uVar123;
    auVar25[0xb] = uVar125;
    auVar25[0xc] = uVar127;
    auVar25[0xd] = uVar129;
    auVar25[0xe] = uVar131;
    auVar25[0xf] = uVar133;
    uVar91 = a64_TBL(ZEXT816(0),auVar25,uVar40);
    uVar43 = a64_TBL(ZEXT816(0),auVar111,uVar38);
    uVar153 = a64_TBL(ZEXT816(0),auVar111,uVar40);
    uVar92 = a64_TBL(ZEXT816(0),auVar111,uVar39);
    auVar112._8_8_ = auVar111._0_8_;
    auVar112._0_8_ = auVar111._0_8_;
    uVar100 = a64_TBL(ZEXT816(0),auVar112,uVar100);
    fVar59 = (float)((ulong)uVar114 >> 0x20);
    fVar58 = (float)((ulong)uVar91 >> 0x20);
    fVar106 = ((float)uVar99 * fVar106 + fVar79 * fVar74 * (float)uVar68 +
              fVar79 * (float)uVar91 * (float)uVar43) - (float)uVar114 * (float)uVar153;
    fVar113 = (fVar46 * fVar113 + fVar80 * fVar90 * (float)((ulong)uVar68 >> 0x20) +
              fVar80 * fVar58 * (float)((ulong)uVar43 >> 0x20)) -
              fVar59 * (float)((ulong)uVar153 >> 0x20);
    fVar74 = ((float)uVar99 * auVar111._8_4_ + fVar73 * (float)uVar114 * (float)uVar104 +
             fVar73 * fVar74 * (float)uVar100) - (float)uVar91 * (float)uVar92;
    fVar90 = (fVar46 * auVar111._12_4_ + fVar75 * fVar59 * (float)((ulong)uVar104 >> 0x20) +
             fVar75 * fVar90 * (float)((ulong)uVar100 >> 0x20)) -
             fVar58 * (float)((ulong)uVar92 >> 0x20);
    auVar45._0_8_ =
         CONCAT17((byte)((uint)fVar113 >> 0x18) & bVar128,
                  CONCAT16((byte)((uint)fVar113 >> 0x10) & bVar126,
                           CONCAT15((byte)((uint)fVar113 >> 8) & bVar124,
                                    CONCAT14(SUB41(fVar113,0) & bVar122,
                                             CONCAT13((byte)((uint)fVar106 >> 0x18) & bVar120,
                                                      CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                                               bVar119,CONCAT11((byte)((uint)fVar106
                                                                                      >> 8) &
                                                                                bVar118,SUB41(
                                                  fVar106,0) & bVar117)))))));
    auVar45[8] = SUB41(fVar74,0) & bVar130;
    auVar45[9] = (byte)((uint)fVar74 >> 8) & bVar132;
    auVar45[10] = (byte)((uint)fVar74 >> 0x10) & bVar134;
    auVar45[0xb] = (byte)((uint)fVar74 >> 0x18) & bVar136;
    auVar45[0xc] = SUB41(fVar90,0) & bVar138;
    auVar45[0xd] = (byte)((uint)fVar90 >> 8) & bVar140;
    auVar45[0xe] = (byte)((uint)fVar90 >> 0x10) & bVar142;
    auVar45[0xf] = (byte)((uint)fVar90 >> 0x18) & bVar144;
    *(long *)(lVar41 + 0xd8) = auVar45._8_8_;
    *(undefined8 *)(lVar41 + 0xd0) = auVar45._0_8_;
    (**(code **)(*(long *)(param_1 + 0x1a0) + 0x10))(param_1 + 0x1a0);
    (**(code **)(*(long *)(param_1 + 0x1a0) + 0x18))(param_1 + 0x1a0);
    lVar41 = *(long *)(param_1 + 0x1a8);
    *(undefined8 *)(lVar41 + 0xf8) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(lVar41 + 0xf0) = *(undefined8 *)(param_2 + 0x40);
    lVar41 = *(long *)(param_1 + 0x1a8);
    uVar43 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(lVar41 + 0xd0) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar41 + 0xd8) = uVar43;
  }
  else if (iVar47 == 2) {
    lVar41 = *(long *)(param_1 + 0x1a8);
    *(undefined8 *)(lVar41 + 0xe8) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(lVar41 + 0xe0) = *(undefined8 *)(param_2 + 0x60);
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) & 0xffffffffffffffef;
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) & 0xfffffffffffffffd;
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) | 1;
    uVar40 = DAT_01cd5418;
    uVar39 = DAT_01cd5270;
    uVar104 = DAT_01cd5120;
    uVar38 = DAT_01cd50f8;
    uVar100 = DAT_01cd50b0;
    uVar92 = DAT_01cd4f90;
    lVar41 = *(long *)(param_1 + 0x1a8);
    auVar93._8_8_ = _UNK_01d4b588;
    auVar93._0_8_ = _DAT_01d4b580;
    pVar1 = (unkbyte9 *)(lVar41 + 0x110);
    uVar43 = *(undefined8 *)(lVar41 + 0x118);
    uVar145 = (undefined1)((ulong)uVar43 >> 8);
    uVar146 = (undefined1)((ulong)uVar43 >> 0x10);
    uVar147 = (undefined1)((ulong)uVar43 >> 0x18);
    uVar148 = (undefined1)((ulong)uVar43 >> 0x20);
    uVar149 = (undefined1)((ulong)uVar43 >> 0x28);
    uVar150 = (undefined1)((ulong)uVar43 >> 0x30);
    uVar151 = (undefined1)((ulong)uVar43 >> 0x38);
    fVar65 = (float)_DAT_01d4ae80;
    fVar58 = (float)*(undefined8 *)pVar1;
    fVar74 = fVar58 * fVar65;
    fVar66 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar46 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar90 = fVar46 * fVar66;
    auVar81._0_8_ = CONCAT44(fVar90,fVar74);
    fVar67 = (float)_UNK_01d4ae88;
    auVar81._8_4_ = (float)uVar43 * fVar67;
    fVar78 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar81._12_4_ = (float)((ulong)uVar43 >> 0x20) * fVar78;
    uVar99 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd5120);
    uVar43 = a64_TBL(ZEXT816(0),auVar93,DAT_01cd5418);
    uVar114 = a64_TBL(ZEXT816(0),auVar93,DAT_01cd4f90);
    uVar68 = a64_TBL(ZEXT816(0),auVar93,DAT_01cd50f8);
    uVar91 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd4f90);
    uVar157 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd50f8);
    uVar159 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd5418);
    auVar14[9] = uVar145;
    auVar14._0_9_ = *pVar1;
    auVar14[10] = uVar146;
    auVar14[0xb] = uVar147;
    auVar14[0xc] = uVar148;
    auVar14[0xd] = uVar149;
    auVar14[0xe] = uVar150;
    auVar14[0xf] = uVar151;
    uVar153 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
    fVar76 = (float)uVar114;
    fVar77 = (float)((ulong)uVar114 >> 0x20);
    fVar152 = (float)DAT_01cd52f0;
    fVar154 = (float)((ulong)DAT_01cd52f0 >> 0x20);
    fVar155 = (float)uVar68;
    fVar156 = (float)((ulong)uVar68 >> 0x20);
    uVar161 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd5270);
    auVar82._8_8_ = auVar81._0_8_;
    auVar82._0_8_ = auVar81._0_8_;
    uVar68 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd50b0);
    fVar115 = (float)uVar43;
    fVar116 = (float)((ulong)uVar43 >> 0x20);
    fVar79 = (float)_DAT_01d4ae90;
    fVar80 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar73 = (float)_UNK_01d4ae98;
    fVar75 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar15[9] = uVar145;
    auVar15._0_9_ = *pVar1;
    auVar15[10] = uVar146;
    auVar15[0xb] = uVar147;
    auVar15[0xc] = uVar148;
    auVar15[0xd] = uVar149;
    auVar15[0xe] = uVar150;
    auVar15[0xf] = uVar151;
    uVar114 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
    fVar74 = (fVar74 * fVar76 + fVar79 * fVar152 * (float)uVar91 + fVar79 * fVar115 * (float)uVar157
             ) - fVar155 * (float)uVar159;
    fVar90 = (fVar90 * fVar77 + fVar80 * fVar154 * (float)((ulong)uVar91 >> 0x20) +
             fVar80 * fVar116 * (float)((ulong)uVar157 >> 0x20)) -
             fVar156 * (float)((ulong)uVar159 >> 0x20);
    uVar121 = SUB41(fVar90,0);
    uVar123 = (undefined1)((uint)fVar90 >> 8);
    uVar125 = (undefined1)((uint)fVar90 >> 0x10);
    uVar127 = (undefined1)((uint)fVar90 >> 0x18);
    fVar106 = (auVar81._8_4_ * fVar76 + fVar73 * fVar155 * (float)uVar99 +
              fVar73 * fVar152 * (float)uVar68) - fVar115 * (float)uVar161;
    uVar129 = SUB41(fVar106,0);
    uVar131 = (undefined1)((uint)fVar106 >> 8);
    uVar133 = (undefined1)((uint)fVar106 >> 0x10);
    uVar135 = (undefined1)((uint)fVar106 >> 0x18);
    fVar113 = (auVar81._12_4_ * fVar77 + fVar75 * fVar156 * (float)((ulong)uVar99 >> 0x20) +
              fVar75 * fVar154 * (float)((ulong)uVar68 >> 0x20)) -
              fVar116 * (float)((ulong)uVar161 >> 0x20);
    uVar137 = SUB41(fVar113,0);
    uVar139 = (undefined1)((uint)fVar113 >> 8);
    uVar141 = (undefined1)((uint)fVar113 >> 0x10);
    uVar143 = (undefined1)((uint)fVar113 >> 0x18);
    auVar2[4] = uVar121;
    auVar2._0_4_ = fVar74;
    auVar2[5] = uVar123;
    auVar2[6] = uVar125;
    auVar2[7] = uVar127;
    auVar2[8] = uVar129;
    auVar2[9] = uVar131;
    auVar2[10] = uVar133;
    auVar2[0xb] = uVar135;
    auVar2[0xc] = uVar137;
    auVar2[0xd] = uVar139;
    auVar2[0xe] = uVar141;
    auVar2[0xf] = uVar143;
    uVar99 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
    auVar3[4] = uVar121;
    auVar3._0_4_ = fVar74;
    auVar3[5] = uVar123;
    auVar3[6] = uVar125;
    auVar3[7] = uVar127;
    auVar3[8] = uVar129;
    auVar3[9] = uVar131;
    auVar3[10] = uVar133;
    auVar3[0xb] = uVar135;
    auVar3[0xc] = uVar137;
    auVar3[0xd] = uVar139;
    auVar3[0xe] = uVar141;
    auVar3[0xf] = uVar143;
    uVar159 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5120);
    fVar59 = (float)((ulong)uVar153 >> 0x20);
    auVar4[4] = uVar121;
    auVar4._0_4_ = fVar74;
    auVar4[5] = uVar123;
    auVar4[6] = uVar125;
    auVar4[7] = uVar127;
    auVar4[8] = uVar129;
    auVar4[9] = uVar131;
    auVar4[10] = uVar133;
    auVar4[0xb] = uVar135;
    auVar4[0xc] = uVar137;
    auVar4[0xd] = uVar139;
    auVar4[0xe] = uVar141;
    auVar4[0xf] = uVar143;
    uVar161 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5270);
    fVar158 = (float)((ulong)uVar114 >> 0x20);
    auVar16[9] = uVar145;
    auVar16._0_9_ = *pVar1;
    auVar16[10] = uVar146;
    auVar16[0xb] = uVar147;
    auVar16[0xc] = uVar148;
    auVar16[0xd] = uVar149;
    auVar16[0xe] = uVar150;
    auVar16[0xf] = uVar151;
    uVar157 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
    auVar5[4] = uVar121;
    auVar5._0_4_ = fVar74;
    auVar5[5] = uVar123;
    auVar5[6] = uVar125;
    auVar5[7] = uVar127;
    auVar5[8] = uVar129;
    auVar5[9] = uVar131;
    auVar5[10] = uVar133;
    auVar5[0xb] = uVar135;
    auVar5[0xc] = uVar137;
    auVar5[0xd] = uVar139;
    auVar5[0xe] = uVar141;
    auVar5[0xf] = uVar143;
    uVar68 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
    auVar6[4] = uVar121;
    auVar6._0_4_ = fVar74;
    auVar6[5] = uVar123;
    auVar6[6] = uVar125;
    auVar6[7] = uVar127;
    auVar6[8] = uVar129;
    auVar6[9] = uVar131;
    auVar6[10] = uVar133;
    auVar6[0xb] = uVar135;
    auVar6[0xc] = uVar137;
    auVar6[0xd] = uVar139;
    auVar6[0xe] = uVar141;
    auVar6[0xf] = uVar143;
    uVar91 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
    auVar7[4] = uVar121;
    auVar7._0_4_ = fVar74;
    auVar7[5] = uVar123;
    auVar7[6] = uVar125;
    auVar7[7] = uVar127;
    auVar7[8] = SUB41(fVar74,0);
    auVar7[9] = (char)((uint)fVar74 >> 8);
    auVar7[10] = (char)((uint)fVar74 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar74 >> 0x18);
    auVar7[0xc] = uVar121;
    auVar7[0xd] = uVar123;
    auVar7[0xe] = uVar125;
    auVar7[0xf] = uVar127;
    uVar43 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
    fVar160 = (float)((ulong)uVar157 >> 0x20);
    bVar130 = (byte)DAT_01d4ab58;
    bVar132 = (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar134 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar136 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar138 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar140 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar142 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar144 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
    bVar117 = (byte)DAT_01d4ab50;
    bVar118 = (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar119 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar120 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar122 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar124 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar126 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar128 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
    fVar74 = ((float)uVar153 * fVar74 + fVar79 * fVar58 * (float)uVar99 +
             fVar79 * (float)uVar157 * (float)uVar68) - (float)uVar114 * (float)uVar91;
    fVar90 = (fVar59 * fVar90 + fVar80 * fVar46 * (float)((ulong)uVar99 >> 0x20) +
             fVar80 * fVar160 * (float)((ulong)uVar68 >> 0x20)) -
             fVar158 * (float)((ulong)uVar91 >> 0x20);
    fVar106 = ((float)uVar153 * fVar106 + fVar73 * (float)uVar114 * (float)uVar159 +
              fVar73 * fVar58 * (float)uVar43) - (float)uVar157 * (float)uVar161;
    fVar113 = (fVar59 * fVar113 + fVar75 * fVar158 * (float)((ulong)uVar159 >> 0x20) +
              fVar75 * fVar46 * (float)((ulong)uVar43 >> 0x20)) -
              fVar160 * (float)((ulong)uVar161 >> 0x20);
    *(ulong *)(lVar41 + 0xd8) =
         CONCAT17((byte)((uint)fVar113 >> 0x18) & bVar144,
                  CONCAT16((byte)((uint)fVar113 >> 0x10) & bVar142,
                           CONCAT15((byte)((uint)fVar113 >> 8) & bVar140,
                                    CONCAT14(SUB41(fVar113,0) & bVar138,
                                             CONCAT13((byte)((uint)fVar106 >> 0x18) & bVar136,
                                                      CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                                               bVar134,CONCAT11((byte)((uint)fVar106
                                                                                      >> 8) &
                                                                                bVar132,SUB41(
                                                  fVar106,0) & bVar130)))))));
    *(ulong *)(lVar41 + 0xd0) =
         CONCAT17((byte)((uint)fVar90 >> 0x18) & bVar128,
                  CONCAT16((byte)((uint)fVar90 >> 0x10) & bVar126,
                           CONCAT15((byte)((uint)fVar90 >> 8) & bVar124,
                                    CONCAT14(SUB41(fVar90,0) & bVar122,
                                             CONCAT13((byte)((uint)fVar74 >> 0x18) & bVar120,
                                                      CONCAT12((byte)((uint)fVar74 >> 0x10) &
                                                               bVar119,CONCAT11((byte)((uint)fVar74
                                                                                      >> 8) &
                                                                                bVar118,SUB41(fVar74
                                                  ,0) & bVar117)))))));
    *(ulong *)(lVar41 + 0x138) = *(ulong *)(lVar41 + 0x138) & 0xfffffffffffffff3 | 4;
    lVar41 = *(long *)(param_1 + 0x1a8);
    pVar1 = (unkbyte9 *)(lVar41 + 0x110);
    uVar43 = *(undefined8 *)(lVar41 + 0x118);
    uVar121 = (undefined1)((ulong)uVar43 >> 8);
    uVar123 = (undefined1)((ulong)uVar43 >> 0x10);
    uVar125 = (undefined1)((ulong)uVar43 >> 0x18);
    uVar127 = (undefined1)((ulong)uVar43 >> 0x20);
    uVar129 = (undefined1)((ulong)uVar43 >> 0x28);
    uVar131 = (undefined1)((ulong)uVar43 >> 0x30);
    uVar133 = (undefined1)((ulong)uVar43 >> 0x38);
    fVar74 = (float)*(undefined8 *)pVar1;
    fVar65 = fVar74 * fVar65;
    fVar90 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar66 = fVar90 * fVar66;
    uVar135 = SUB41(fVar66,0);
    uVar137 = (undefined1)((uint)fVar66 >> 8);
    uVar139 = (undefined1)((uint)fVar66 >> 0x10);
    uVar141 = (undefined1)((uint)fVar66 >> 0x18);
    fVar67 = (float)uVar43 * fVar67;
    uVar143 = SUB41(fVar67,0);
    uVar145 = (undefined1)((uint)fVar67 >> 8);
    uVar146 = (undefined1)((uint)fVar67 >> 0x10);
    uVar147 = (undefined1)((uint)fVar67 >> 0x18);
    fVar78 = (float)((ulong)uVar43 >> 0x20) * fVar78;
    uVar148 = SUB41(fVar78,0);
    uVar149 = (undefined1)((uint)fVar78 >> 8);
    uVar150 = (undefined1)((uint)fVar78 >> 0x10);
    uVar151 = (undefined1)((uint)fVar78 >> 0x18);
    auVar26[4] = uVar135;
    auVar26._0_4_ = fVar65;
    auVar26[5] = uVar137;
    auVar26[6] = uVar139;
    auVar26[7] = uVar141;
    auVar26[8] = uVar143;
    auVar26[9] = uVar145;
    auVar26[10] = uVar146;
    auVar26[0xb] = uVar147;
    auVar26[0xc] = uVar148;
    auVar26[0xd] = uVar149;
    auVar26[0xe] = uVar150;
    auVar26[0xf] = uVar151;
    uVar91 = a64_TBL(ZEXT816(0),auVar26,uVar104);
    auVar27[4] = uVar135;
    auVar27._0_4_ = fVar65;
    auVar27[5] = uVar137;
    auVar27[6] = uVar139;
    auVar27[7] = uVar141;
    auVar27[8] = uVar143;
    auVar27[9] = uVar145;
    auVar27[10] = uVar146;
    auVar27[0xb] = uVar147;
    auVar27[0xc] = uVar148;
    auVar27[0xd] = uVar149;
    auVar27[0xe] = uVar150;
    auVar27[0xf] = uVar151;
    uVar68 = a64_TBL(ZEXT816(0),auVar27,uVar92);
    auVar28[4] = uVar135;
    auVar28._0_4_ = fVar65;
    auVar28[5] = uVar137;
    auVar28[6] = uVar139;
    auVar28[7] = uVar141;
    auVar28[8] = uVar143;
    auVar28[9] = uVar145;
    auVar28[10] = uVar146;
    auVar28[0xb] = uVar147;
    auVar28[0xc] = uVar148;
    auVar28[0xd] = uVar149;
    auVar28[0xe] = uVar150;
    auVar28[0xf] = uVar151;
    uVar114 = a64_TBL(ZEXT816(0),auVar28,uVar40);
    auVar29[4] = uVar135;
    auVar29._0_4_ = fVar65;
    auVar29[5] = uVar137;
    auVar29[6] = uVar139;
    auVar29[7] = uVar141;
    auVar29[8] = uVar143;
    auVar29[9] = uVar145;
    auVar29[10] = uVar146;
    auVar29[0xb] = uVar147;
    auVar29[0xc] = uVar148;
    auVar29[0xd] = uVar149;
    auVar29[0xe] = uVar150;
    auVar29[0xf] = uVar151;
    uVar153 = a64_TBL(ZEXT816(0),auVar29,uVar38);
    auVar30[4] = uVar135;
    auVar30._0_4_ = fVar65;
    auVar30[5] = uVar137;
    auVar30[6] = uVar139;
    auVar30[7] = uVar141;
    auVar30[8] = uVar143;
    auVar30[9] = uVar145;
    auVar30[10] = uVar146;
    auVar30[0xb] = uVar147;
    auVar30[0xc] = uVar148;
    auVar30[0xd] = uVar149;
    auVar30[0xe] = uVar150;
    auVar30[0xf] = uVar151;
    uVar157 = a64_TBL(ZEXT816(0),auVar30,uVar39);
    auVar31[4] = uVar135;
    auVar31._0_4_ = fVar65;
    auVar31[5] = uVar137;
    auVar31[6] = uVar139;
    auVar31[7] = uVar141;
    auVar31[8] = SUB41(fVar65,0);
    auVar31[9] = (char)((uint)fVar65 >> 8);
    auVar31[10] = (char)((uint)fVar65 >> 0x10);
    auVar31[0xb] = (char)((uint)fVar65 >> 0x18);
    auVar31[0xc] = uVar135;
    auVar31[0xd] = uVar137;
    auVar31[0xe] = uVar139;
    auVar31[0xf] = uVar141;
    uVar43 = a64_TBL(ZEXT816(0),auVar31,uVar100);
    auVar17[9] = uVar121;
    auVar17._0_9_ = *pVar1;
    auVar17[10] = uVar123;
    auVar17[0xb] = uVar125;
    auVar17[0xc] = uVar127;
    auVar17[0xd] = uVar129;
    auVar17[0xe] = uVar131;
    auVar17[0xf] = uVar133;
    uVar99 = a64_TBL(ZEXT816(0),auVar17,uVar92);
    fVar106 = (fVar76 * fVar65 + fVar79 * fVar152 * (float)uVar68 +
              fVar79 * fVar115 * (float)uVar153) - fVar155 * (float)uVar114;
    fVar113 = (fVar77 * fVar66 + fVar80 * fVar154 * (float)((ulong)uVar68 >> 0x20) +
              fVar80 * fVar116 * (float)((ulong)uVar153 >> 0x20)) -
              fVar156 * (float)((ulong)uVar114 >> 0x20);
    auVar107._0_8_ = CONCAT44(fVar113,fVar106);
    auVar107._8_4_ =
         (fVar76 * fVar67 + fVar73 * fVar155 * (float)uVar91 + fVar73 * fVar152 * (float)uVar43) -
         fVar115 * (float)uVar157;
    auVar107._12_4_ =
         (fVar77 * fVar78 + fVar75 * fVar156 * (float)((ulong)uVar91 >> 0x20) +
         fVar75 * fVar154 * (float)((ulong)uVar43 >> 0x20)) -
         fVar116 * (float)((ulong)uVar157 >> 0x20);
    uVar68 = a64_TBL(ZEXT816(0),auVar107,uVar92);
    uVar104 = a64_TBL(ZEXT816(0),auVar107,uVar104);
    fVar46 = (float)((ulong)uVar99 >> 0x20);
    auVar18[9] = uVar121;
    auVar18._0_9_ = *pVar1;
    auVar18[10] = uVar123;
    auVar18[0xb] = uVar125;
    auVar18[0xc] = uVar127;
    auVar18[0xd] = uVar129;
    auVar18[0xe] = uVar131;
    auVar18[0xf] = uVar133;
    uVar114 = a64_TBL(ZEXT816(0),auVar18,uVar38);
    auVar19[9] = uVar121;
    auVar19._0_9_ = *pVar1;
    auVar19[10] = uVar123;
    auVar19[0xb] = uVar125;
    auVar19[0xc] = uVar127;
    auVar19[0xd] = uVar129;
    auVar19[0xe] = uVar131;
    auVar19[0xf] = uVar133;
    uVar91 = a64_TBL(ZEXT816(0),auVar19,uVar40);
    uVar43 = a64_TBL(ZEXT816(0),auVar107,uVar38);
    uVar153 = a64_TBL(ZEXT816(0),auVar107,uVar40);
    uVar92 = a64_TBL(ZEXT816(0),auVar107,uVar39);
    auVar108._8_8_ = auVar107._0_8_;
    auVar108._0_8_ = auVar107._0_8_;
    uVar100 = a64_TBL(ZEXT816(0),auVar108,uVar100);
    fVar59 = (float)((ulong)uVar114 >> 0x20);
    fVar58 = (float)((ulong)uVar91 >> 0x20);
    fVar106 = ((float)uVar99 * fVar106 + fVar79 * fVar74 * (float)uVar68 +
              fVar79 * (float)uVar91 * (float)uVar43) - (float)uVar114 * (float)uVar153;
    fVar113 = (fVar46 * fVar113 + fVar80 * fVar90 * (float)((ulong)uVar68 >> 0x20) +
              fVar80 * fVar58 * (float)((ulong)uVar43 >> 0x20)) -
              fVar59 * (float)((ulong)uVar153 >> 0x20);
    fVar74 = ((float)uVar99 * auVar107._8_4_ + fVar73 * (float)uVar114 * (float)uVar104 +
             fVar73 * fVar74 * (float)uVar100) - (float)uVar91 * (float)uVar92;
    fVar90 = (fVar46 * auVar107._12_4_ + fVar75 * fVar59 * (float)((ulong)uVar104 >> 0x20) +
             fVar75 * fVar90 * (float)((ulong)uVar100 >> 0x20)) -
             fVar58 * (float)((ulong)uVar92 >> 0x20);
    auVar44._0_8_ =
         CONCAT17((byte)((uint)fVar113 >> 0x18) & bVar128,
                  CONCAT16((byte)((uint)fVar113 >> 0x10) & bVar126,
                           CONCAT15((byte)((uint)fVar113 >> 8) & bVar124,
                                    CONCAT14(SUB41(fVar113,0) & bVar122,
                                             CONCAT13((byte)((uint)fVar106 >> 0x18) & bVar120,
                                                      CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                                               bVar119,CONCAT11((byte)((uint)fVar106
                                                                                      >> 8) &
                                                                                bVar118,SUB41(
                                                  fVar106,0) & bVar117)))))));
    auVar44[8] = SUB41(fVar74,0) & bVar130;
    auVar44[9] = (byte)((uint)fVar74 >> 8) & bVar132;
    auVar44[10] = (byte)((uint)fVar74 >> 0x10) & bVar134;
    auVar44[0xb] = (byte)((uint)fVar74 >> 0x18) & bVar136;
    auVar44[0xc] = SUB41(fVar90,0) & bVar138;
    auVar44[0xd] = (byte)((uint)fVar90 >> 8) & bVar140;
    auVar44[0xe] = (byte)((uint)fVar90 >> 0x10) & bVar142;
    auVar44[0xf] = (byte)((uint)fVar90 >> 0x18) & bVar144;
    *(long *)(lVar41 + 0xd8) = auVar44._8_8_;
    *(undefined8 *)(lVar41 + 0xd0) = auVar44._0_8_;
    (**(code **)(*(long *)(param_1 + 0x1a0) + 0x10))(param_1 + 0x1a0);
    (**(code **)(*(long *)(param_1 + 0x1a0) + 0x18))(param_1 + 0x1a0);
    lVar41 = *(long *)(param_1 + 0x1a8);
    *(undefined8 *)(lVar41 + 0xf8) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(lVar41 + 0xf0) = *(undefined8 *)(param_2 + 0x40);
    *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x138) & 0xfffffffffffffff3 | 8;
    *(undefined4 *)(*(long *)(param_1 + 0x1a8) + 0x144) = *(undefined4 *)(param_2 + 0x80);
  }
  plVar42 = (long *)(param_1 + 0x1a8);
  *(undefined4 *)(*(long *)(*plVar42 + 0xa0) + 200) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(*(long *)(*plVar42 + 0xa0) + 0xcc) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(*(long *)(*plVar42 + 0xa0) + 0xd0) = *(undefined4 *)(param_2 + 0x2c);
  lVar41 = *plVar42;
  uVar43 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar41 + 0xa8) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar41 + 0xb0) = uVar43;
  return;
}


