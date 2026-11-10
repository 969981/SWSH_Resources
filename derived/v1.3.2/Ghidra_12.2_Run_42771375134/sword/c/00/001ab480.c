/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ab480; name: FUN_001ab480
 */


void FUN_001ab480(float param_1,long param_2,undefined1 (*param_3) [12],int param_4)

{
  float *pfVar1;
  unkbyte9 *pVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  undefined4 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  byte bVar18;
  float fVar19;
  float fVar20;
  byte bVar24;
  float fVar25;
  ulong uVar21;
  byte bVar26;
  byte bVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar28;
  uint5 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar41;
  int iVar44;
  int iVar45;
  int iVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar47;
  int iVar54;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar55;
  undefined4 uVar56;
  int iVar59;
  int iVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar72;
  undefined1 auVar71 [16];
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  ulong uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar103;
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
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar128;
  float fVar131;
  float fVar132;
  undefined1 auVar129 [16];
  float fVar133;
  undefined1 auVar130 [16];
  
  Hint_Prefetch(param_3,0,0,0);
  fVar128 = *(float *)*(undefined1 (*) [16])(param_2 + 0x60);
  auVar34 = *(undefined1 (*) [16])(param_2 + 0x60);
  fVar131 = *(float *)*(undefined1 (*) [16])(param_2 + 0x70);
  auVar23 = *(undefined1 (*) [16])(param_2 + 0x70);
  auVar3 = *(undefined1 (*) [16])(param_2 + 0x20);
  auVar4 = *(undefined1 (*) [16])(param_2 + 0x30);
  pfVar1 = (float *)(param_2 + 0x80);
  fVar5 = *(float *)(param_2 + 0x88);
  uVar11 = *(undefined4 *)(param_2 + 0x8c);
  auVar112 = *(undefined1 (*) [16])(param_2 + 0x90);
  pVar2 = (unkbyte9 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  uVar76 = (undefined1)((ulong)uVar7 >> 8);
  uVar77 = (undefined1)((ulong)uVar7 >> 0x10);
  uVar78 = (undefined1)((ulong)uVar7 >> 0x18);
  uVar79 = (undefined1)((ulong)uVar7 >> 0x20);
  uVar81 = (undefined1)((ulong)uVar7 >> 0x28);
  uVar82 = (undefined1)((ulong)uVar7 >> 0x30);
  uVar83 = (undefined1)((ulong)uVar7 >> 0x38);
  auVar31 = *(undefined1 (*) [16])(param_2 + 0x50);
  if (param_4 == 0) {
    auVar90 = ZEXT816(0);
    auVar97._8_4_ = 0xff7fffff;
    auVar97._0_8_ = 0xff7fffffff7fffff;
    auVar97._12_4_ = 0xff7fffff;
    auVar92 = ZEXT816(0);
    auVar43._8_4_ = 0x7f7fffff;
    auVar43._0_8_ = 0x7f7fffff7f7fffff;
    auVar43._12_4_ = 0x7f7fffff;
    auVar94 = ZEXT816(0);
    auVar88 = ZEXT816(0);
    auVar126 = ZEXT816(0);
    auVar123 = ZEXT816(0);
    auVar120 = ZEXT816(0);
    auVar48._8_8_ = 0xffffffffffffffff;
    auVar48._0_8_ = 0xffffffffffffffff;
    auVar109 = ZEXT816(0);
    auVar117 = ZEXT816(0);
    bVar75 = 0x20;
    bVar73 = 0x20;
    bVar74 = 0x20;
    bVar80 = 0x20;
    auVar114 = ZEXT816(0);
    auVar111 = ZEXT816(0);
    auVar107 = ZEXT816(0);
    auVar105 = auVar97;
    auVar85 = auVar97;
  }
  else {
    fVar132 = fVar128 - auVar3._0_4_;
    fVar133 = *(float *)(param_2 + 100) - auVar3._4_4_;
    uVar12 = (undefined1)((uint)fVar133 >> 0x18);
    fVar6 = *(float *)(param_2 + 0x68) - auVar3._8_4_;
    auVar97._8_4_ = 0xff7fffff;
    auVar97._0_8_ = 0xff7fffffff7fffff;
    auVar97._12_4_ = 0xff7fffff;
    fVar19 = fVar131 - auVar4._0_4_;
    fVar25 = *(float *)(param_2 + 0x74) - auVar4._4_4_;
    fVar32 = auVar112._0_4_ - auVar31._0_4_;
    uVar13 = (undefined1)((uint)fVar32 >> 0x18);
    auVar43._8_4_ = 0x7f7fffff;
    auVar43._0_8_ = 0x7f7fffff7f7fffff;
    auVar43._12_4_ = 0x7f7fffff;
    auVar39._8_8_ = auVar43._8_8_;
    auVar39._0_8_ = 0x7f7fffff7f7fffff;
    bVar73 = 0;
    bVar74 = 0;
    bVar75 = 0;
    bVar80 = 0;
    auVar107 = ZEXT816(0);
    auVar111 = ZEXT816(0);
    auVar114 = ZEXT816(0);
    auVar117 = ZEXT816(0);
    auVar109 = ZEXT816(0);
    auVar120 = ZEXT816(0);
    auVar123 = ZEXT816(0);
    auVar126 = ZEXT816(0);
    auVar88 = ZEXT816(0);
    auVar92 = ZEXT816(0);
    auVar94 = ZEXT816(0);
    auVar90 = ZEXT816(0);
    auVar105 = auVar97;
    auVar85 = auVar97;
    do {
      fVar20 = *(float *)*param_3;
      fVar28 = *(float *)(*param_3 + 4);
      fVar37 = *(float *)(*param_3 + 8);
      auVar10 = *param_3;
      param_4 = param_4 + -1;
      fVar99 = *(float *)param_3[1];
      auVar35._0_4_ =
           (float)(CONCAT14((char)((uint)fVar6 >> 0x18),
                            CONCAT13((char)((uint)fVar6 >> 0x10),
                                     CONCAT12((char)((uint)fVar6 >> 8),
                                              CONCAT11(SUB41(fVar6,0),uVar12)))) >> 8) * fVar37 +
           (float)CONCAT13(uVar12,(int3)(CONCAT16((char)((uint)fVar133 >> 0x10),
                                                  CONCAT15((char)((uint)fVar133 >> 8),
                                                           CONCAT14(SUB41(fVar133,0),fVar132))) >>
                                        0x20)) * fVar28 + fVar132 * fVar20;
      auVar35._4_4_ =
           (*(float *)(param_2 + 0x78) - auVar4._8_4_) * fVar37 +
           (float)CONCAT13((char)((uint)fVar25 >> 0x18),
                           CONCAT12((char)((uint)fVar25 >> 0x10),
                                    (short)(CONCAT12((char)((uint)fVar25 >> 8),
                                                     CONCAT11(SUB41(fVar25,0),uVar13)) >> 8))) *
           fVar28 + fVar19 * fVar20;
      auVar35._8_4_ =
           (fVar5 - (float)uVar7) * fVar37 +
           (*(float *)(param_2 + 0x84) - (float)((ulong)*(undefined8 *)pVar2 >> 0x20)) * fVar28 +
           (*pfVar1 - (float)*(undefined8 *)pVar2) * fVar20;
      auVar35._12_4_ =
           (auVar112._8_4_ - auVar31._8_4_) * fVar37 +
           (auVar112._4_4_ - auVar31._4_4_) * fVar28 +
           (float)(CONCAT17(uVar13,CONCAT16((char)((uint)fVar32 >> 0x10),
                                            CONCAT15((char)((uint)fVar32 >> 8),
                                                     CONCAT14(SUB41(fVar32,0),fVar19)))) >> 0x20) *
           fVar20;
      auVar48 = NEON_frecpe(auVar35,4);
      fVar95 = auVar97._0_4_;
      fVar98 = auVar97._4_4_;
      fVar100 = auVar97._8_4_;
      fVar102 = auVar97._12_4_;
      auVar57 = NEON_frecps(auVar48,auVar35,4);
      auVar49._0_4_ = auVar48._0_4_ * auVar57._0_4_;
      auVar49._4_4_ = auVar48._4_4_ * auVar57._4_4_;
      auVar49._8_4_ = auVar48._8_4_ * auVar57._8_4_;
      auVar49._12_4_ = auVar48._12_4_ * auVar57._12_4_;
      auVar48 = NEON_frecps(auVar49,auVar35,4);
      auVar58._0_4_ =
           *(float *)(param_2 + 0x68) * fVar37 +
           *(float *)(param_2 + 100) * fVar28 + fVar128 * fVar20 + fVar99;
      auVar58._4_4_ =
           *(float *)(param_2 + 0x78) * fVar37 +
           *(float *)(param_2 + 0x74) * fVar28 + fVar131 * fVar20 + fVar99;
      auVar58._8_4_ =
           fVar5 * fVar37 + *(float *)(param_2 + 0x84) * fVar28 + *pfVar1 * fVar20 + fVar99;
      auVar58._12_4_ =
           auVar112._8_4_ * fVar37 + auVar112._4_4_ * fVar28 + auVar112._0_4_ * fVar20 + fVar99;
      auVar50._0_4_ = auVar49._0_4_ * auVar48._0_4_;
      auVar50._4_4_ = auVar49._4_4_ * auVar48._4_4_;
      auVar50._8_4_ = auVar49._8_4_ * auVar48._8_4_;
      auVar50._12_4_ = auVar49._12_4_ * auVar48._12_4_;
      auVar48 = NEON_frecps(auVar50,auVar35,4);
      auVar51._0_4_ = auVar50._0_4_ * auVar48._0_4_;
      auVar51._4_4_ = auVar50._4_4_ * auVar48._4_4_;
      auVar51._8_4_ = auVar50._8_4_ * auVar48._8_4_;
      auVar51._12_4_ = auVar50._12_4_ * auVar48._12_4_;
      Hint_Prefetch(param_3[1] + 4,0,0,0);
      param_3 = (undefined1 (*) [12])(param_3[1] + 4);
      fVar101 = auVar3._8_4_ * fVar37 + auVar3._4_4_ * fVar28 + auVar3._0_4_ * fVar20 + fVar99;
      fVar103 = auVar4._8_4_ * fVar37 + auVar4._4_4_ * fVar28 + auVar4._0_4_ * fVar20 + fVar99;
      fVar8 = (float)uVar7 * fVar37 +
              (float)((unkuint9)*pVar2 >> 0x20) * fVar28 + (float)*pVar2 * fVar20 + fVar99;
      fVar99 = auVar31._8_4_ * fVar37 + auVar31._4_4_ * fVar28 + auVar31._0_4_ * fVar20 + fVar99;
      auVar48 = NEON_frecps(auVar51,auVar35,4);
      iVar70 = -(uint)(auVar105._0_4_ < fVar101);
      iVar72 = -(uint)(auVar105._4_4_ < fVar103);
      auVar71._0_8_ = CONCAT44(iVar72,iVar70);
      auVar71._8_4_ = -(uint)(auVar105._8_4_ < fVar8);
      auVar71._12_4_ = -(uint)(auVar105._12_4_ < fVar99);
      auVar104._8_8_ = auVar71._8_8_;
      auVar104._0_8_ = auVar71._0_8_;
      iVar66 = -(uint)(0.0 < auVar35._0_4_);
      iVar67 = -(uint)(0.0 < auVar35._4_4_);
      iVar68 = -(uint)(0.0 < auVar35._8_4_);
      iVar69 = -(uint)(0.0 < auVar35._12_4_);
      auVar57[4] = SUB41(fVar103,0);
      auVar57._0_4_ = fVar101;
      auVar57[5] = (char)((uint)fVar103 >> 8);
      auVar57[6] = (char)((uint)fVar103 >> 0x10);
      auVar57[7] = (char)((uint)fVar103 >> 0x18);
      auVar57[8] = SUB41(fVar8,0);
      auVar57[9] = (char)((uint)fVar8 >> 8);
      auVar57[10] = (char)((uint)fVar8 >> 0x10);
      auVar57[0xb] = (char)((uint)fVar8 >> 0x18);
      auVar57[0xc] = SUB41(fVar99,0);
      auVar57[0xd] = (char)((uint)fVar99 >> 8);
      auVar57[0xe] = (char)((uint)fVar99 >> 0x10);
      auVar57[0xf] = (char)((uint)fVar99 >> 0x18);
      auVar105 = auVar105 ^ (auVar105 ^ auVar57) & auVar104;
      auVar52._0_4_ = -(fVar101 * auVar51._0_4_ * auVar48._0_4_);
      auVar52._4_4_ = -(fVar103 * auVar51._4_4_ * auVar48._4_4_);
      auVar52._8_4_ = -(fVar8 * auVar51._8_4_ * auVar48._8_4_);
      auVar52._12_4_ = -(fVar99 * auVar51._12_4_ * auVar48._12_4_);
      iVar62 = -(uint)(auVar35._0_4_ < 0.0);
      iVar63 = -(uint)(auVar35._4_4_ < 0.0);
      iVar64 = -(uint)(auVar35._8_4_ < 0.0);
      iVar65 = -(uint)(auVar35._12_4_ < 0.0);
      iVar41 = -(uint)(auVar52._0_4_ < auVar43._0_4_);
      iVar44 = -(uint)(auVar52._4_4_ < auVar43._4_4_);
      iVar45 = -(uint)(auVar52._8_4_ < auVar43._8_4_);
      iVar46 = -(uint)(auVar52._12_4_ < auVar43._12_4_);
      auVar42[0] = (byte)iVar41 & (byte)iVar66;
      auVar42[1] = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar66 >> 8);
      auVar42[2] = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar66 >> 0x10);
      auVar42[3] = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar66 >> 0x18);
      auVar42[4] = (byte)iVar44 & (byte)iVar67;
      auVar42[5] = (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar67 >> 8);
      auVar42[6] = (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar67 >> 0x10);
      auVar42[7] = (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar67 >> 0x18);
      auVar42[8] = (byte)iVar45 & (byte)iVar68;
      auVar42[9] = (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar68 >> 8);
      auVar42[10] = (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar68 >> 0x10);
      auVar42[0xb] = (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar68 >> 0x18);
      auVar42[0xc] = (byte)iVar46 & (byte)iVar69;
      auVar42[0xd] = (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar69 >> 8);
      auVar42[0xe] = (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
      auVar42[0xf] = (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar69 >> 0x18);
      iVar41 = -(uint)(auVar85._0_4_ < auVar52._0_4_);
      iVar44 = -(uint)(auVar85._4_4_ < auVar52._4_4_);
      iVar45 = -(uint)(auVar85._8_4_ < auVar52._8_4_);
      iVar46 = -(uint)(auVar85._12_4_ < auVar52._12_4_);
      iVar66 = -(uint)(auVar35._0_4_ == 0.0);
      iVar67 = -(uint)(auVar35._4_4_ == 0.0);
      iVar68 = -(uint)(auVar35._8_4_ == 0.0);
      iVar69 = -(uint)(auVar35._12_4_ == 0.0);
      auVar43 = auVar39 ^ (auVar39 ^ auVar52) & auVar42;
      auVar84[0] = (byte)iVar41 & (byte)iVar62;
      auVar84[1] = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar62 >> 8);
      auVar84[2] = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar62 >> 0x10);
      auVar84[3] = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar62 >> 0x18);
      auVar84[4] = (byte)iVar44 & (byte)iVar63;
      auVar84[5] = (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar63 >> 8);
      auVar84[6] = (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar63 >> 0x10);
      auVar84[7] = (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar63 >> 0x18);
      auVar84[8] = (byte)iVar45 & (byte)iVar64;
      auVar84[9] = (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar64 >> 8);
      auVar84[10] = (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar64 >> 0x10);
      auVar84[0xb] = (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar64 >> 0x18);
      auVar84[0xc] = (byte)iVar46 & (byte)iVar65;
      auVar84[0xd] = (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar65 >> 8);
      auVar84[0xe] = (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar65 >> 0x10);
      auVar84[0xf] = (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar65 >> 0x18);
      auVar85 = auVar85 ^ (auVar85 ^ auVar52) & auVar84;
      iVar47 = -(uint)(fVar95 < auVar58._0_4_);
      iVar54 = -(uint)(fVar98 < auVar58._4_4_);
      auVar53._0_8_ = CONCAT44(iVar54,iVar47);
      auVar53._8_4_ = -(uint)(fVar100 < auVar58._8_4_);
      auVar53._12_4_ = -(uint)(fVar102 < auVar58._12_4_);
      auVar96._8_8_ = auVar53._8_8_;
      auVar96._0_8_ = auVar53._0_8_;
      auVar97 = auVar97 ^ (auVar97 ^ auVar58) & auVar96;
      iVar55 = -(uint)(0.0 < auVar58._0_4_);
      iVar59 = -(uint)(0.0 < auVar58._4_4_);
      iVar60 = -(uint)(0.0 < auVar58._8_4_);
      iVar61 = -(uint)(0.0 < auVar58._12_4_);
      auVar129[0] = (byte)iVar55 & (byte)iVar66;
      auVar129[1] = (byte)((uint)iVar55 >> 8) & (byte)((uint)iVar66 >> 8);
      auVar129[2] = (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar66 >> 0x10);
      auVar129[3] = (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar66 >> 0x18);
      auVar129[4] = (byte)iVar59 & (byte)iVar67;
      auVar129[5] = (byte)((uint)iVar59 >> 8) & (byte)((uint)iVar67 >> 8);
      auVar129[6] = (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar67 >> 0x10);
      auVar129[7] = (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar67 >> 0x18);
      auVar129[8] = (byte)iVar60 & (byte)iVar68;
      auVar129[9] = (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar68 >> 8);
      auVar129[10] = (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar68 >> 0x10);
      auVar129[0xb] = (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar68 >> 0x18);
      auVar129[0xc] = (byte)iVar61 & (byte)iVar69;
      auVar129[0xd] = (byte)((uint)iVar61 >> 8) & (byte)((uint)iVar69 >> 8);
      auVar129[0xe] = (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
      auVar129[0xf] = (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar69 >> 0x18);
      auVar48 = NEON_fmov(0x3f800000,4);
      auVar85 = auVar85 ^ (auVar85 ^ auVar48) & auVar129;
      auVar89._4_4_ = iVar70;
      auVar89._0_4_ = iVar70;
      auVar89._8_4_ = iVar70;
      auVar89._12_4_ = iVar70;
      auVar36._12_4_ = 0;
      auVar36._0_12_ = auVar10;
      auVar93._4_4_ = iVar72;
      auVar93._0_4_ = iVar72;
      auVar93._8_4_ = iVar72;
      auVar93._12_4_ = iVar72;
      auVar90 = auVar90 ^ (auVar90 ^ auVar36) & auVar89;
      auVar87._4_4_ = auVar71._12_4_;
      auVar87._0_4_ = auVar71._12_4_;
      auVar87._8_4_ = auVar71._12_4_;
      auVar87._12_4_ = auVar71._12_4_;
      auVar94 = auVar94 ^ (auVar94 ^ auVar36) & auVar93;
      auVar116._4_4_ = iVar47;
      auVar116._0_4_ = iVar47;
      auVar116._8_4_ = iVar47;
      auVar116._12_4_ = iVar47;
      auVar91._4_4_ = auVar71._8_4_;
      auVar91._0_4_ = auVar71._8_4_;
      auVar91._8_4_ = auVar71._8_4_;
      auVar91._12_4_ = auVar71._8_4_;
      auVar88 = auVar88 ^ (auVar88 ^ auVar36) & auVar87;
      auVar110._4_4_ = auVar53._8_4_;
      auVar110._0_4_ = auVar53._8_4_;
      auVar110._8_4_ = auVar53._8_4_;
      auVar110._12_4_ = auVar53._8_4_;
      auVar117 = auVar117 ^ (auVar117 ^ auVar36) & auVar116;
      auVar92 = auVar92 ^ (auVar92 ^ auVar36) & auVar91;
      auVar111 = auVar111 ^ (auVar111 ^ auVar36) & auVar110;
      uVar21 = CONCAT26((short)iVar46,CONCAT24((short)iVar45,CONCAT22((short)iVar44,(short)iVar41)))
               & CONCAT26((short)iVar65,
                          CONCAT24((short)iVar64,CONCAT22((short)iVar63,(short)iVar62)));
      iVar41 = (int)((uint)(ushort)uVar21 << 0x1f) >> 0x1f;
      iVar44 = (int)((uint)(ushort)(uVar21 >> 0x10) << 0x1f) >> 0x1f;
      iVar45 = (int)((uint)(ushort)(uVar21 >> 0x20) << 0x1f) >> 0x1f;
      iVar46 = (int)((uint)(ushort)(uVar21 >> 0x30) << 0x1f) >> 0x1f;
      auVar113._4_4_ = iVar54;
      auVar113._0_4_ = iVar54;
      auVar113._8_4_ = iVar54;
      auVar113._12_4_ = iVar54;
      auVar106._4_4_ = auVar53._12_4_;
      auVar106._0_4_ = auVar53._12_4_;
      auVar106._8_4_ = auVar53._12_4_;
      auVar106._12_4_ = auVar53._12_4_;
      auVar107 = auVar107 ^ (auVar107 ^ auVar36) & auVar106;
      auVar125._4_4_ = iVar41;
      auVar125._0_4_ = iVar41;
      auVar125._8_4_ = iVar41;
      auVar125._12_4_ = iVar41;
      auVar114 = auVar114 ^ (auVar114 ^ auVar36) & auVar113;
      auVar122._4_4_ = iVar44;
      auVar122._0_4_ = iVar44;
      auVar122._8_4_ = iVar44;
      auVar122._12_4_ = iVar44;
      auVar119._4_4_ = iVar45;
      auVar119._0_4_ = iVar45;
      auVar119._8_4_ = iVar45;
      auVar119._12_4_ = iVar45;
      auVar126 = auVar126 ^ (auVar126 ^ auVar36) & auVar125;
      auVar108._4_4_ = iVar46;
      auVar108._0_4_ = iVar46;
      auVar108._8_4_ = iVar46;
      auVar108._12_4_ = iVar46;
      bVar18 = (byte)iVar55 & -(0.0 < fVar95);
      bVar24 = (byte)iVar59 & -(0.0 < fVar98);
      bVar26 = (byte)iVar60 & -(0.0 < fVar100);
      bVar27 = (byte)iVar61 & -(0.0 < fVar102);
      auVar109 = auVar109 ^ (auVar109 ^ auVar36) & auVar108;
      auVar123 = auVar123 ^ (auVar123 ^ auVar36) & auVar122;
      bVar73 = bVar18 | bVar73 & ~bVar18;
      bVar74 = bVar24 | bVar74 & ~bVar24;
      bVar75 = bVar26 | bVar75 & ~bVar26;
      bVar80 = bVar27 | bVar80 & ~bVar27;
      auVar120 = auVar120 ^ (auVar120 ^ auVar36) & auVar119;
      auVar39 = auVar43;
    } while (param_4 != 0);
    auVar48._0_4_ = -(uint)(auVar105._0_4_ <= 0.0);
    auVar48._4_4_ = -(uint)(auVar105._4_4_ <= 0.0);
    auVar48._8_4_ = -(uint)(auVar105._8_4_ <= 0.0);
    auVar48._12_4_ = -(uint)(auVar105._12_4_ <= 0.0);
    bVar73 = ~bVar73 & 0x20;
    bVar74 = ~bVar74 & 0x20;
    bVar75 = ~bVar75 & 0x20;
    bVar80 = ~bVar80 & 0x20;
  }
  auVar39 = *(undefined1 (*) [16])(param_2 + 0xc0);
  fVar128 = auVar85._0_4_;
  fVar131 = auVar85._4_4_;
  fVar132 = auVar85._8_4_;
  fVar133 = auVar85._12_4_;
  uVar21 = CONCAT26(-(ushort)(fVar133 <= auVar43._12_4_),
                    CONCAT24(-(ushort)(fVar132 <= auVar43._8_4_),
                             CONCAT22(-(ushort)(fVar131 <= auVar43._4_4_),
                                      -(ushort)(fVar128 <= auVar43._0_4_)))) &
           CONCAT26(-(ushort)(0.0 <= fVar133),
                    CONCAT24(-(ushort)(0.0 <= fVar132),
                             CONCAT22(-(ushort)(0.0 <= fVar131),-(ushort)(0.0 <= fVar128)))) &
           CONCAT26(-(ushort)(fVar133 < auVar39._12_4_),
                    CONCAT24(-(ushort)(fVar132 < auVar39._8_4_),
                             CONCAT22(-(ushort)(fVar131 < auVar39._4_4_),
                                      -(ushort)(fVar128 < auVar39._0_4_))));
  iVar41 = (int)((uint)(ushort)uVar21 << 0x1f) >> 0x1f;
  iVar44 = (int)((uint)(ushort)(uVar21 >> 0x10) << 0x1f) >> 0x1f;
  auVar30._0_8_ = CONCAT44(iVar44,iVar41);
  auVar30._8_4_ = (int)((uint)(ushort)(uVar21 >> 0x20) << 0x1f) >> 0x1f;
  auVar30._12_4_ = (int)((uint)(ushort)(uVar21 >> 0x30) << 0x1f) >> 0x1f;
  auVar33._0_8_ = CONCAT44(iVar41,iVar41);
  auVar33._8_4_ = iVar41;
  auVar33._12_4_ = iVar41;
  auVar38._8_8_ = auVar30._8_8_;
  auVar38._0_8_ = auVar30._0_8_;
  auVar39 = auVar39 ^ (auVar39 ^ auVar85) & auVar38;
  auVar22._0_8_ = CONCAT44(iVar44,iVar44);
  auVar22._8_4_ = iVar44;
  auVar22._12_4_ = iVar44;
  auVar40._8_8_ = auVar33._8_8_;
  auVar40._0_8_ = auVar33._0_8_;
  auVar117 = auVar117 ^ (auVar117 ^ auVar126) & auVar40;
  auVar126._8_8_ = auVar22._8_8_;
  auVar126._0_8_ = auVar22._0_8_;
  auVar118._0_8_ = CONCAT44(auVar30._8_4_,auVar30._8_4_);
  auVar118._8_4_ = auVar30._8_4_;
  auVar118._12_4_ = auVar30._8_4_;
  uVar9 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  auVar114 = auVar114 ^ (auVar114 ^ auVar123) & auVar126;
  auVar124._8_8_ = auVar118._8_8_;
  auVar124._0_8_ = auVar118._0_8_;
  fVar6 = (float)uVar7;
  fVar32 = auVar97._0_4_;
  fVar19 = (float)((ulong)uVar7 >> 0x20);
  fVar99 = auVar97._4_4_;
  fVar101 = auVar97._8_4_;
  fVar25 = (float)((ulong)uVar9 >> 0x20);
  fVar103 = auVar97._12_4_;
  uVar56 = auVar48._0_4_;
  auVar115._4_4_ = uVar56;
  auVar115._0_4_ = uVar56;
  auVar115._8_4_ = uVar56;
  auVar115._12_4_ = uVar56;
  auVar111 = auVar111 ^ (auVar111 ^ auVar120) & auVar124;
  auVar123._0_8_ = CONCAT44(auVar30._12_4_,auVar30._12_4_);
  auVar123._8_4_ = auVar30._12_4_;
  auVar123._12_4_ = auVar30._12_4_;
  auVar121._8_8_ = auVar123._8_8_;
  auVar121._0_8_ = auVar123._0_8_;
  auVar112 = auVar112 ^ (auVar112 ^ auVar31) & auVar123;
  auVar107 = auVar107 ^ (auVar107 ^ auVar109) & auVar121;
  auVar109._8_8_ = auVar30._8_8_;
  auVar109._0_8_ = auVar30._0_8_;
  auVar85[9] = (char)((ulong)uVar9 >> 8);
  auVar85._0_9_ = *(unkbyte9 *)(param_2 + 0xa0);
  auVar85[10] = (char)((ulong)uVar9 >> 0x10);
  auVar85[0xb] = (char)((ulong)uVar9 >> 0x18);
  auVar85[0xc] = (char)((ulong)uVar9 >> 0x20);
  auVar85[0xd] = (char)((ulong)uVar9 >> 0x28);
  auVar85[0xe] = (char)((ulong)uVar9 >> 0x30);
  auVar85[0xf] = (char)((ulong)uVar9 >> 0x38);
  auVar97 = auVar97 ^ (auVar97 ^ auVar85) & auVar30;
  uVar56 = auVar48._4_4_;
  auVar120._4_4_ = uVar56;
  auVar120._0_4_ = uVar56;
  auVar120._8_4_ = uVar56;
  auVar120._12_4_ = uVar56;
  uVar56 = auVar48._8_4_;
  auVar127._4_4_ = uVar56;
  auVar127._0_4_ = uVar56;
  auVar127._8_4_ = uVar56;
  auVar127._12_4_ = uVar56;
  uVar56 = auVar48._12_4_;
  auVar130._4_4_ = uVar56;
  auVar130._0_4_ = uVar56;
  auVar130._8_4_ = uVar56;
  auVar130._12_4_ = uVar56;
  auVar97 = auVar97 ^ (auVar97 ^ auVar105) & auVar48;
  auVar34 = auVar34 ^ (auVar34 ^ auVar3) & auVar33;
  auVar23 = auVar23 ^ (auVar23 ^ auVar4) & auVar22;
  auVar117 = auVar117 ^ (auVar117 ^ auVar90) & auVar115;
  uVar12 = (undefined1)((uint)fVar5 >> 8);
  uVar13 = (undefined1)((uint)fVar5 >> 0x10);
  uVar14 = (undefined1)((uint)fVar5 >> 0x18);
  uVar15 = (undefined1)((uint)uVar11 >> 8);
  uVar16 = (undefined1)((uint)uVar11 >> 0x10);
  uVar17 = (undefined1)((uint)uVar11 >> 0x18);
  auVar34 = auVar34 ^ (auVar34 ^ auVar3) & auVar115;
  auVar3[9] = uVar12;
  auVar3._0_9_ = *(unkbyte9 *)pfVar1;
  auVar3[10] = uVar13;
  auVar3[0xb] = uVar14;
  auVar3[0xc] = (char)uVar11;
  auVar3[0xd] = uVar15;
  auVar3[0xe] = uVar16;
  auVar3[0xf] = uVar17;
  auVar90[9] = uVar76;
  auVar90._0_9_ = *pVar2;
  auVar90[10] = uVar77;
  auVar90[0xb] = uVar78;
  auVar90[0xc] = uVar79;
  auVar90[0xd] = uVar81;
  auVar90[0xe] = uVar82;
  auVar90[0xf] = uVar83;
  auVar105[9] = uVar12;
  auVar105._0_9_ = *(unkbyte9 *)pfVar1;
  auVar105[10] = uVar13;
  auVar105[0xb] = uVar14;
  auVar105[0xc] = (char)uVar11;
  auVar105[0xd] = uVar15;
  auVar105[0xe] = uVar16;
  auVar105[0xf] = uVar17;
  auVar105 = auVar105 ^ (auVar3 ^ auVar90) & auVar118;
  auVar114 = auVar114 ^ (auVar114 ^ auVar94) & auVar120;
  auVar23 = auVar23 ^ (auVar23 ^ auVar4) & auVar120;
  uVar29 = CONCAT14(*(undefined1 *)(param_2 + 0xb4),(uint)(*(byte *)(param_2 + 0xb0) & 2)) &
           0x2ffffffff;
  fVar128 = fVar6 - auVar97._0_4_;
  fVar131 = fVar19 - auVar97._4_4_;
  fVar132 = (float)uVar9 - auVar97._8_4_;
  fVar133 = fVar25 - auVar97._12_4_;
  auVar111 = auVar111 ^ (auVar111 ^ auVar92) & auVar127;
  auVar107 = auVar107 ^ (auVar107 ^ auVar88) & auVar130;
  uVar21 = CONCAT26(-(ushort)((*(byte *)(param_2 + 0xbc) & 2) == 0),
                    CONCAT24(-(ushort)((*(byte *)(param_2 + 0xb8) & 2) == 0),
                             CONCAT22(-(ushort)((char)(uVar29 >> 0x20) == '\0'),
                                      -(ushort)((int)uVar29 == 0)))) &
           CONCAT26(-(ushort)(0.0 <= fVar103),
                    CONCAT24(-(ushort)(0.0 <= fVar101),
                             CONCAT22(-(ushort)(0.0 <= fVar99),-(ushort)(0.0 <= fVar32))));
  uVar86 = uVar21 & CONCAT26(-(ushort)(fVar103 < param_1),
                             CONCAT24(-(ushort)(fVar101 < param_1),
                                      CONCAT22(-(ushort)(fVar99 < param_1),
                                               -(ushort)(fVar32 < param_1))));
  uVar21 = uVar21 & CONCAT26(-(ushort)(fVar103 < fVar25),
                             CONCAT24(-(ushort)(fVar101 < (float)uVar9),
                                      CONCAT22(-(ushort)(fVar99 < fVar19),-(ushort)(fVar32 < fVar6))
                                     ));
  auVar88[9] = uVar76;
  auVar88._0_9_ = *pVar2;
  auVar88[10] = uVar77;
  auVar88[0xb] = uVar78;
  auVar88[0xc] = uVar79;
  auVar88[0xd] = uVar81;
  auVar88[0xe] = uVar82;
  auVar88[0xf] = uVar83;
  auVar105 = auVar105 ^ (auVar105 ^ auVar88) & auVar127;
  auVar112 = auVar112 ^ (auVar112 ^ auVar31) & auVar130;
  fVar5 = auVar107._4_4_ * fVar133 + auVar112._4_4_;
  fVar6 = auVar107._12_4_ * fVar133 + auVar112._12_4_;
  *(float *)(param_2 + 0x138) = auVar111._8_4_ * fVar132 + auVar105._8_4_;
  *(float *)(param_2 + 0x13c) = auVar111._12_4_ * fVar132 + auVar105._12_4_;
  *(float *)(param_2 + 0x130) = auVar111._0_4_ * fVar132 + auVar105._0_4_;
  *(float *)(param_2 + 0x134) = auVar111._4_4_ * fVar132 + auVar105._4_4_;
  *(ulong *)(param_2 + 0x148) =
       CONCAT17((char)((uint)fVar6 >> 0x18),
                CONCAT16((char)((uint)fVar6 >> 0x10),
                         CONCAT15((char)((uint)fVar6 >> 8),
                                  CONCAT14(SUB41(fVar6,0),auVar107._8_4_ * fVar133 + auVar112._8_4_)
                                 )));
  *(ulong *)(param_2 + 0x140) =
       CONCAT17((char)((uint)fVar5 >> 0x18),
                CONCAT16((char)((uint)fVar5 >> 0x10),
                         CONCAT15((char)((uint)fVar5 >> 8),
                                  CONCAT14(SUB41(fVar5,0),auVar107._0_4_ * fVar133 + auVar112._0_4_)
                                 )));
  auVar31._8_4_ = 8;
  auVar31._0_8_ = 0x800000008;
  auVar31._12_4_ = 8;
  *(float *)(param_2 + 0x118) = auVar117._8_4_ * fVar128 + auVar34._8_4_;
  *(float *)(param_2 + 0x11c) = auVar117._12_4_ * fVar128 + auVar34._12_4_;
  *(float *)(param_2 + 0x110) = auVar117._0_4_ * fVar128 + auVar34._0_4_;
  *(float *)(param_2 + 0x114) = auVar117._4_4_ * fVar128 + auVar34._4_4_;
  *(float *)(param_2 + 0x128) = auVar114._8_4_ * fVar131 + auVar23._8_4_;
  *(float *)(param_2 + 300) = auVar114._12_4_ * fVar131 + auVar23._12_4_;
  *(float *)(param_2 + 0x120) = auVar114._0_4_ * fVar131 + auVar23._0_4_;
  *(float *)(param_2 + 0x124) = auVar114._4_4_ * fVar131 + auVar23._4_4_;
  bVar73 = (byte)((int)((uint)(ushort)uVar21 << 0x1f) >> 0x1f) & 0x10 |
           bVar73 & (byte)((int)((uint)(ushort)uVar86 << 0x1f) >> 0x1f);
  bVar74 = (byte)((int)((uint)(ushort)(uVar21 >> 0x10) << 0x1f) >> 0x1f) & 0x10 |
           bVar74 & (byte)((int)((uint)(ushort)(uVar86 >> 0x10) << 0x1f) >> 0x1f);
  bVar75 = (byte)((int)((uint)(ushort)(uVar21 >> 0x20) << 0x1f) >> 0x1f) & 0x10 |
           bVar75 & (byte)((int)((uint)(ushort)(uVar86 >> 0x20) << 0x1f) >> 0x1f);
  bVar80 = (byte)((int)((uint)(ushort)(uVar21 >> 0x30) << 0x1f) >> 0x1f) & 0x10 |
           bVar80 & (byte)((int)((uint)(ushort)(uVar86 >> 0x30) << 0x1f) >> 0x1f);
  *(long *)(param_2 + 0xd8) = auVar117._8_8_;
  *(long *)(param_2 + 0xd0) = auVar117._0_8_;
  *(long *)(param_2 + 0xe8) = auVar114._8_8_;
  *(long *)(param_2 + 0xe0) = auVar114._0_8_;
  *(long *)(param_2 + 0xf8) = auVar111._8_8_;
  *(long *)(param_2 + 0xf0) = auVar111._0_8_;
  *(long *)(param_2 + 0x108) = auVar107._8_8_;
  *(long *)(param_2 + 0x100) = auVar107._0_8_;
  auVar4._1_3_ = 0;
  auVar4[0] = bVar73;
  auVar4[4] = bVar74;
  auVar4._5_3_ = 0;
  auVar4[8] = bVar75;
  auVar4._9_3_ = 0;
  auVar4[0xc] = bVar80;
  auVar4._13_3_ = 0;
  auVar112._1_3_ = 0;
  auVar112[0] = bVar73;
  auVar112[4] = bVar74;
  auVar112._5_3_ = 0;
  auVar112[8] = bVar75;
  auVar112._9_3_ = 0;
  auVar112[0xc] = bVar80;
  auVar112._13_3_ = 0;
  auVar112 = auVar112 ^ (auVar4 ^ auVar31) & auVar109;
  auVar112 = auVar112 ^ (auVar112 ^ auVar31) & auVar48;
  *(long *)(param_2 + 0xb8) = auVar112._8_8_;
  *(long *)(param_2 + 0xb0) = auVar112._0_8_;
  *(byte *)(param_2 + 200) = auVar39[8] & ~auVar48[8];
  *(byte *)(param_2 + 0xc9) = auVar39[9] & ~auVar48[9];
  *(byte *)(param_2 + 0xca) = auVar39[10] & ~auVar48[10];
  *(byte *)(param_2 + 0xcb) = auVar39[0xb] & ~auVar48[0xb];
  *(byte *)(param_2 + 0xcc) = auVar39[0xc] & ~auVar48[0xc];
  *(byte *)(param_2 + 0xcd) = auVar39[0xd] & ~auVar48[0xd];
  *(byte *)(param_2 + 0xce) = auVar39[0xe] & ~auVar48[0xe];
  *(byte *)(param_2 + 0xcf) = auVar39[0xf] & ~auVar48[0xf];
  *(byte *)(param_2 + 0xc0) = auVar39[0] & ~auVar48[0];
  *(byte *)(param_2 + 0xc1) = auVar39[1] & ~auVar48[1];
  *(byte *)(param_2 + 0xc2) = auVar39[2] & ~auVar48[2];
  *(byte *)(param_2 + 0xc3) = auVar39[3] & ~auVar48[3];
  *(byte *)(param_2 + 0xc4) = auVar39[4] & ~auVar48[4];
  *(byte *)(param_2 + 0xc5) = auVar39[5] & ~auVar48[5];
  *(byte *)(param_2 + 0xc6) = auVar39[6] & ~auVar48[6];
  *(byte *)(param_2 + 199) = auVar39[7] & ~auVar48[7];
  return;
}


