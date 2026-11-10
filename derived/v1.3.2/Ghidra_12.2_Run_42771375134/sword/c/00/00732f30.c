/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00732f30; name: FUN_00732f30
 */


undefined1  [16] FUN_00732f30(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float extraout_s0;
  undefined8 uVar12;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float extraout_var_01;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  float fVar28;
  float fVar30;
  float fVar32;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar23;
  int iVar29;
  int iVar31;
  int iVar33;
  undefined1 auVar27 [16];
  float fVar34;
  undefined1 auVar35 [12];
  float fVar40;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  undefined1 auVar43 [12];
  float fVar56;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
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
  undefined1 auVar68 [16];
  int iVar69;
  undefined8 uVar70;
  undefined1 auVar74 [12];
  undefined8 uVar73;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar71;
  undefined8 uVar72;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar80;
  undefined1 auVar79 [16];
  undefined8 uVar81;
  undefined1 auVar82 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar93;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar89 [16];
  undefined8 uVar94;
  undefined8 uVar96;
  undefined1 auVar97 [16];
  undefined8 uVar95;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar102;
  undefined8 uVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined8 uVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fStack_cc;
  float fStack_c8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong uStack_58;
  
  uVar6 = FUN_0072e500(*(undefined8 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1d0));
  if ((uVar6 & 1) == 0) {
    iVar23 = *(int *)(param_1 + 0x1d4);
    lVar9 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x1b8);
    lVar10 = lVar9 + (long)iVar23 * 0x130;
    lVar7 = *(long *)(lVar10 + 0x120);
    iVar29 = *(int *)(*(long *)(lVar10 + 0x128) + 0x40);
    FUN_00723030(lVar7,iVar29);
    lVar7 = *(long *)(lVar7 + 0x1b8) + (long)iVar29 * 0x130;
    lVar8 = *(long *)(param_1 + 0x1c0);
    fVar32 = *(float *)(lVar7 + 0xa0);
    fVar115 = *(float *)(lVar7 + 0xa4);
    fVar112 = *(float *)(lVar7 + 0xa8);
    fVar21 = *(float *)(lVar7 + 0xb0);
    fVar22 = *(float *)(lVar7 + 0xb4);
    fVar28 = *(float *)(lVar7 + 0xb8);
    fVar113 = *(float *)(lVar8 + 0x60);
    fVar114 = *(float *)(lVar8 + 100);
    fVar34 = *(float *)(lVar8 + 0x68);
    fVar40 = *(float *)(lVar8 + 0x6c);
    fVar41 = *(float *)(lVar8 + 0x70);
    fVar11 = *(float *)(lVar8 + 0x74);
    fVar42 = *(float *)(lVar8 + 0x78);
    fVar56 = *(float *)(lVar8 + 0x7c);
    fVar80 = *(float *)(lVar8 + 0x80);
    fVar93 = *(float *)(lVar8 + 0x84);
    fVar1 = *(float *)(lVar8 + 0x88);
    fVar2 = *(float *)(lVar8 + 0x8c);
    auVar13._0_4_ = fVar113 * fVar32 + fVar41 * fVar115 + fVar80 * fVar112;
    auVar13._4_4_ = fVar114 * fVar32 + fVar11 * fVar115 + fVar93 * fVar112;
    auVar13._8_4_ = fVar34 * fVar32 + fVar42 * fVar115 + fVar1 * fVar112;
    auVar13._12_4_ = fVar40 * fVar32 + fVar56 * fVar115 + fVar2 * fVar112;
    fVar32 = *(float *)(lVar7 + 0xc0);
    fVar115 = *(float *)(lVar7 + 0xc4);
    fVar112 = *(float *)(lVar7 + 200);
    fVar3 = *(float *)(lVar7 + 0xd0);
    fVar4 = *(float *)(lVar7 + 0xd4);
    fVar5 = *(float *)(lVar7 + 0xd8);
    fVar17 = fVar113 * fVar21 + fVar41 * fVar22 + fVar80 * fVar28;
    fVar19 = fVar114 * fVar21 + fVar11 * fVar22 + fVar93 * fVar28;
    fVar20 = fVar34 * fVar21 + fVar42 * fVar22 + fVar1 * fVar28;
    fVar21 = fVar40 * fVar21 + fVar56 * fVar22 + fVar2 * fVar28;
    fVar22 = fVar113 * fVar32 + fVar41 * fVar115 + fVar80 * fVar112;
    fVar28 = fVar114 * fVar32 + fVar11 * fVar115 + fVar93 * fVar112;
    fVar30 = fVar34 * fVar32 + fVar42 * fVar115 + fVar1 * fVar112;
    fVar32 = fVar40 * fVar32 + fVar56 * fVar115 + fVar2 * fVar112;
    fVar112 = *(float *)(lVar8 + 0x90) + fVar113 * fVar3 + fVar41 * fVar4 + fVar80 * fVar5;
    fVar113 = *(float *)(lVar8 + 0x94) + fVar114 * fVar3 + fVar11 * fVar4 + fVar93 * fVar5;
    fVar114 = *(float *)(lVar8 + 0x98) + fVar34 * fVar3 + fVar42 * fVar4 + fVar1 * fVar5;
    fVar115 = *(float *)(lVar8 + 0x9c) + fVar40 * fVar3 + fVar56 * fVar4 + fVar2 * fVar5;
    if (*(int *)(*(long *)(lVar10 + 0x128) + 0xc0) != 0) {
      lVar7 = *(long *)(param_1 + 0x68);
      fVar34 = *(float *)(lVar7 + 0x260);
      fVar40 = *(float *)(lVar7 + 0x264);
      fVar41 = *(float *)(lVar7 + 0x268);
      auVar77._0_4_ = auVar13._0_4_ * auVar13._0_4_;
      auVar77._4_4_ = auVar13._4_4_ * auVar13._4_4_;
      auVar77._8_4_ = auVar13._8_4_ * auVar13._8_4_;
      auVar77._12_4_ = auVar13._12_4_ * auVar13._12_4_;
      auVar44 = NEON_ext(auVar77,auVar77,8,1);
      auVar25._0_4_ = fVar17 * fVar17;
      auVar25._4_4_ = fVar19 * fVar19;
      auVar25._8_4_ = fVar20 * fVar20;
      auVar25._12_4_ = fVar21 * fVar21;
      auVar57 = NEON_ext(auVar25,auVar25,8,1);
      fVar42 = auVar57._0_4_ + auVar25._0_4_;
      fVar56 = auVar57._4_4_ + auVar25._4_4_;
      fVar11 = fVar42 + fVar56;
      fVar42 = fVar42 + fVar56;
      auVar57._0_4_ = fVar22 * fVar22;
      auVar57._4_4_ = fVar28 * fVar28;
      auVar57._8_4_ = fVar30 * fVar30;
      auVar57._12_4_ = fVar32 * fVar32;
      auVar58 = NEON_ext(auVar57,auVar57,8,1);
      auVar66._8_8_ = CONCAT44(fVar42,fVar11);
      auVar66._0_8_ = CONCAT44(fVar42,fVar11);
      auVar25 = *(undefined1 (*) [16])(lVar7 + 0x240);
      fVar32 = SQRT(auVar44._0_4_ + auVar77._0_4_ + auVar44._4_4_ + auVar77._4_4_);
      uStack_58 = (ulong)(uint)SQRT(auVar58._0_4_ + auVar57._0_4_ + auVar58._4_4_ + auVar57._4_4_);
      local_60 = CONCAT44(SQRT(fVar11),fVar32);
      iVar29 = *(int *)(*(long *)(lVar10 + 0x128) + 0xc0);
      if (iVar29 == 2) {
        fVar112 = fVar34 - fVar112;
        fVar113 = fVar40 - fVar113;
        fVar114 = fVar41 - fVar114;
        fVar115 = 0.0 - fVar115;
        auVar44._0_4_ = fVar112 * fVar112;
        auVar44._4_4_ = fVar113 * fVar113;
        auVar44._8_4_ = fVar114 * fVar114;
        auVar44._12_4_ = fVar115 * fVar115;
        auVar13 = NEON_ext(auVar44,auVar44,8,1);
        fVar21 = auVar13._0_4_ + auVar44._0_4_;
        fVar22 = auVar13._4_4_ + auVar44._4_4_;
        fVar32 = fVar21 + fVar22;
        fVar21 = fVar21 + fVar22;
        auVar13 = NEON_ext(auVar25,auVar25,8,1);
        auVar68._8_8_ = CONCAT44(fVar21,fVar32);
        auVar68._0_8_ = CONCAT44(fVar21,fVar32);
        auVar77 = NEON_frsqrte(auVar68,4);
        auVar63._0_8_ = auVar25._0_8_;
        auVar63._8_4_ = auVar13._0_4_;
        auVar63._12_4_ = 0;
        uVar95 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd5418);
        auVar58._0_4_ = auVar77._0_4_ * fVar32;
        auVar58._4_4_ = auVar77._4_4_ * fVar21;
        auVar58._8_4_ = auVar77._8_4_ * fVar32;
        auVar58._12_4_ = auVar77._12_4_ * fVar21;
        fVar34 = -fVar34;
        fVar40 = -fVar40;
        fVar41 = -fVar41;
        auVar13 = NEON_frsqrts(auVar77,auVar58,4);
        auVar78._0_4_ = auVar77._0_4_ * auVar13._0_4_;
        auVar78._4_4_ = auVar77._4_4_ * auVar13._4_4_;
        auVar78._8_4_ = auVar77._8_4_ * auVar13._8_4_;
        auVar78._12_4_ = auVar77._12_4_ * auVar13._12_4_;
        auVar84._0_4_ = fVar32 * auVar78._0_4_;
        auVar84._4_4_ = fVar21 * auVar78._4_4_;
        auVar84._8_4_ = fVar32 * auVar78._8_4_;
        auVar84._12_4_ = fVar21 * auVar78._12_4_;
        iVar29 = -(uint)(fVar32 == 0.0);
        iVar31 = -(uint)(fVar21 == 0.0);
        iVar33 = -(uint)(fVar32 == 0.0);
        iVar69 = -(uint)(fVar21 == 0.0);
        auVar13 = NEON_frsqrts(auVar78,auVar84,4);
        uVar94 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd5188);
        fVar112 = fVar112 * auVar78._0_4_ * auVar13._0_4_;
        fVar113 = fVar113 * auVar78._4_4_ * auVar13._4_4_;
        fVar114 = fVar114 * auVar78._8_4_ * auVar13._8_4_;
        fVar115 = fVar115 * auVar78._12_4_ * auVar13._12_4_;
        uVar102 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd50f8);
        uVar72 = a64_TBL(ZEXT816(0),auVar63,DAT_01cd5158);
        lVar9 = lVar9 + (long)iVar23 * 0x130;
        local_88 = *(undefined8 *)(lVar9 + 0x38);
        local_78 = *(undefined8 *)(lVar9 + 0x48);
        fVar112 = (float)CONCAT13((byte)((uint)fVar112 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                                  CONCAT12((byte)((uint)fVar112 >> 0x10) &
                                           ~(byte)((uint)iVar29 >> 0x10),
                                           CONCAT11((byte)((uint)fVar112 >> 8) &
                                                    ~(byte)((uint)iVar29 >> 8),
                                                    SUB41(fVar112,0) & ~(byte)iVar29)));
        auVar43._0_8_ =
             CONCAT17((byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                      CONCAT16((byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                               CONCAT15((byte)((uint)fVar113 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                        CONCAT14(SUB41(fVar113,0) & ~(byte)iVar31,fVar112))));
        auVar43[8] = SUB41(fVar114,0) & ~(byte)iVar33;
        auVar43[9] = (byte)((uint)fVar114 >> 8) & ~(byte)((uint)iVar33 >> 8);
        auVar43[10] = (byte)((uint)fVar114 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
        auVar43[0xb] = (byte)((uint)fVar114 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
        auVar45[0xc] = SUB41(fVar115,0) & ~(byte)iVar69;
        auVar45._0_12_ = auVar43;
        auVar45[0xd] = (byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar69 >> 8);
        auVar45[0xe] = (byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
        auVar45[0xf] = (byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
        uVar12 = a64_TBL(ZEXT816(0),auVar45,DAT_01cd50f8);
        uVar70 = a64_TBL(ZEXT816(0),auVar45,DAT_01cd5158);
        uVar81 = a64_TBL(ZEXT816(0),auVar45,DAT_01cd5188);
        auVar111._0_4_ = fVar112 * fVar34;
        fVar21 = (float)((ulong)auVar43._0_8_ >> 0x20);
        auVar111._4_4_ = fVar21 * fVar40;
        auVar53._8_4_ = auVar43._8_4_;
        auVar111._8_4_ = auVar53._8_4_ * fVar41;
        auVar111._12_4_ = auVar45._12_4_ * -0.0;
        auVar77 = NEON_ext(auVar111,auVar111,8,1);
        uVar71 = a64_TBL(ZEXT816(0),auVar45,DAT_01cd5418);
        fVar22 = (float)((ulong)uVar12 >> 0x20);
        fVar28 = (float)((ulong)uVar70 >> 0x20);
        fVar113 = (float)((ulong)uVar71 >> 0x20);
        fVar114 = (float)((ulong)uVar81 >> 0x20);
        fVar11 = (float)uVar95 * (float)uVar12 - (float)uVar102 * (float)uVar71;
        fVar42 = (float)((ulong)uVar95 >> 0x20) * fVar22 - (float)((ulong)uVar102 >> 0x20) * fVar113
        ;
        fVar56 = (float)uVar94 * (float)uVar70 - (float)uVar72 * (float)uVar81;
        fVar80 = (float)((ulong)uVar94 >> 0x20) * fVar28 - (float)((ulong)uVar72 >> 0x20) * fVar114;
        auVar85._0_4_ = fVar11 * fVar11;
        auVar85._4_4_ = fVar42 * fVar42;
        auVar85._8_4_ = fVar56 * fVar56;
        auVar85._12_4_ = fVar80 * fVar80;
        auVar13 = NEON_ext(auVar85,auVar85,8,1);
        fVar115 = auVar13._0_4_ + auVar85._0_4_;
        fVar93 = auVar13._4_4_ + auVar85._4_4_;
        fVar32 = fVar115 + fVar93;
        fVar115 = fVar115 + fVar93;
        auVar86._8_8_ = CONCAT44(fVar115,fVar32);
        auVar86._0_8_ = CONCAT44(fVar115,fVar32);
        auVar13 = NEON_frsqrte(auVar86,4);
        auVar106._0_4_ = auVar13._0_4_ * fVar32;
        auVar106._4_4_ = auVar13._4_4_ * fVar115;
        auVar106._8_4_ = auVar13._8_4_ * fVar32;
        auVar106._12_4_ = auVar13._12_4_ * fVar115;
        auVar25 = NEON_frsqrts(auVar13,auVar106,4);
        auVar100._0_4_ = auVar13._0_4_ * auVar25._0_4_;
        auVar100._4_4_ = auVar13._4_4_ * auVar25._4_4_;
        auVar100._8_4_ = auVar13._8_4_ * auVar25._8_4_;
        auVar100._12_4_ = auVar13._12_4_ * auVar25._12_4_;
        auVar107._0_4_ = fVar32 * auVar100._0_4_;
        auVar107._4_4_ = fVar115 * auVar100._4_4_;
        auVar107._8_4_ = fVar32 * auVar100._8_4_;
        auVar107._12_4_ = fVar115 * auVar100._12_4_;
        iVar23 = -(uint)(fVar32 == 0.0);
        iVar29 = -(uint)(fVar115 == 0.0);
        iVar31 = -(uint)(fVar32 == 0.0);
        iVar33 = -(uint)(fVar115 == 0.0);
        auVar13 = NEON_frsqrts(auVar100,auVar107,4);
        fVar11 = fVar11 * auVar100._0_4_ * auVar13._0_4_;
        fVar42 = fVar42 * auVar100._4_4_ * auVar13._4_4_;
        fVar56 = fVar56 * auVar100._8_4_ * auVar13._8_4_;
        fVar80 = fVar80 * auVar100._12_4_ * auVar13._12_4_;
        fVar11 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                 CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                          ~(byte)((uint)iVar23 >> 0x10),
                                          CONCAT11((byte)((uint)fVar11 >> 8) &
                                                   ~(byte)((uint)iVar23 >> 8),
                                                   SUB41(fVar11,0) & ~(byte)iVar23)));
        auVar74._0_8_ =
             CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                      CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                               CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                        CONCAT14(SUB41(fVar42,0) & ~(byte)iVar29,fVar11))));
        auVar74[8] = SUB41(fVar56,0) & ~(byte)iVar31;
        auVar74[9] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar31 >> 8);
        auVar74[10] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
        auVar74[0xb] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
        auVar79[0xc] = SUB41(fVar80,0) & ~(byte)iVar33;
        auVar79._0_12_ = auVar74;
        auVar79[0xd] = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar33 >> 8);
        auVar79[0xe] = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
        auVar79[0xf] = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
        uVar72 = a64_TBL(ZEXT816(0),auVar79,DAT_01cd50f8);
        uVar94 = a64_TBL(ZEXT816(0),auVar79,DAT_01cd5158);
        uVar102 = a64_TBL(ZEXT816(0),auVar79,DAT_01cd5418);
        uVar95 = a64_TBL(ZEXT816(0),auVar79,DAT_01cd5188);
        fVar115 = (float)uVar71 * (float)uVar72 - (float)uVar12 * (float)uVar102;
        fVar22 = fVar113 * (float)((ulong)uVar72 >> 0x20) - fVar22 * (float)((ulong)uVar102 >> 0x20)
        ;
        fVar113 = (float)uVar81 * (float)uVar94 - (float)uVar70 * (float)uVar95;
        auVar101._0_4_ = fVar11 * fVar34;
        fVar42 = (float)((ulong)auVar74._0_8_ >> 0x20);
        auVar101._4_4_ = fVar42 * fVar40;
        fVar56 = auVar74._8_4_;
        auVar101._8_4_ = fVar56 * fVar41;
        auVar101._12_4_ = auVar79._12_4_ * -0.0;
        auVar13 = NEON_ext(auVar101,auVar101,8,1);
        auVar37._0_4_ = fVar115 * fVar34;
        auVar37._4_4_ = fVar22 * fVar40;
        auVar37._8_4_ = fVar113 * fVar41;
        auVar37._12_4_ =
             (fVar114 * (float)((ulong)uVar94 >> 0x20) - fVar28 * (float)((ulong)uVar95 >> 0x20)) *
             -0.0;
        NEON_ext(auVar37,auVar37,8,1);
        fVar32 = auVar77._0_4_ + auVar111._0_4_ + auVar77._4_4_ + auVar111._4_4_;
        auVar46._12_4_ = fVar32;
        auVar46._0_12_ = auVar43;
        auVar47._4_12_ = auVar46._4_12_;
        auVar47._0_4_ = fVar56;
        auVar49._0_8_ = auVar47._0_8_;
        auVar49._8_4_ = auVar13._0_4_ + auVar101._0_4_ + auVar13._4_4_ + auVar101._4_4_;
        auVar49._12_4_ = fVar32;
        auVar48._8_8_ = auVar49._8_8_;
        auVar48._4_4_ = auVar53._8_4_;
        auVar48._0_4_ = fVar56;
        auVar50._0_12_ = auVar48._0_12_;
        auVar50._12_4_ = fVar32;
        auVar87._4_4_ = fVar22;
        auVar87._0_4_ = fVar42;
        auVar87._8_4_ = fVar21;
        auVar87._12_4_ = 0;
        auVar51._4_12_ = auVar50._4_12_;
        auVar51._0_4_ = fVar56;
        auVar53._0_8_ = auVar51._0_8_;
        auVar53._12_4_ = fVar32;
        auVar52._8_8_ = auVar53._8_8_;
        auVar52._4_4_ = fVar113;
        auVar52._0_4_ = fVar56;
        auVar54._0_12_ = auVar52._0_12_;
        auVar54._12_4_ = 0;
        uVar12 = a64_TBL(ZEXT816(0),auVar87,DAT_01cd5418);
        uVar70 = a64_TBL(ZEXT816(0),auVar87,DAT_01cd5188);
        uVar102 = a64_TBL(ZEXT816(0),auVar87,DAT_01cd50f8);
        uVar71 = a64_TBL(ZEXT816(0),auVar87,DAT_01cd5158);
        uVar81 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd50f8);
        uVar94 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5158);
        uVar72 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5418);
        uVar95 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5188);
        auVar88._4_4_ = fVar56;
        auVar88._0_4_ = fVar11;
        auVar88._8_4_ = fVar115;
        auVar88._12_4_ = fVar113;
        auVar38._8_4_ = auVar53._8_4_;
        auVar38._0_8_ = auVar43._0_8_;
        auVar38._12_4_ = 0;
        auVar55._4_4_ = fVar22;
        auVar55._0_4_ = fVar115;
        auVar55._8_4_ = fVar113;
        auVar55._12_4_ = 0;
        auVar89._4_12_ = auVar88._4_12_;
        auVar89._0_4_ = fVar11;
        auVar91._0_8_ = auVar89._0_8_;
        auVar91._8_4_ = fVar56;
        auVar91._12_4_ = fVar113;
        auVar90._8_8_ = auVar91._8_8_;
        auVar90._0_8_ = auVar74._0_8_;
        auVar92._0_12_ = auVar90._0_12_;
        auVar92._12_4_ = 0;
        uVar103 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd5188);
        uVar108 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd50f8);
        auVar64._0_4_ =
             fVar11 * (float)uVar12 * (float)uVar81 - fVar11 * (float)uVar102 * (float)uVar72;
        auVar64._4_4_ =
             fVar115 * (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar81 >> 0x20) -
             fVar115 * (float)((ulong)uVar102 >> 0x20) * (float)((ulong)uVar72 >> 0x20);
        auVar64._8_4_ =
             fVar112 * (float)uVar70 * (float)uVar94 - fVar112 * (float)uVar71 * (float)uVar95;
        auVar64._12_4_ =
             (float)((ulong)uVar70 >> 0x20) * 0.0 * (float)((ulong)uVar94 >> 0x20) -
             (float)((ulong)uVar71 >> 0x20) * 0.0 * (float)((ulong)uVar95 >> 0x20);
        auVar13 = NEON_ext(auVar64,auVar64,8,1);
        uVar102 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd5418);
        auVar65._0_4_ = auVar64._0_4_ + auVar64._4_4_ + auVar13._0_4_ + auVar13._4_4_;
        auVar65._4_4_ = auVar65._0_4_;
        auVar65._8_4_ = auVar65._0_4_;
        auVar65._12_4_ = auVar65._0_4_;
        auVar25 = NEON_frecpe(auVar65,4);
        uVar96 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5158);
        uVar73 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd50f8);
        uVar94 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd5158);
        uVar71 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd50f8);
        uVar72 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd5158);
        auVar13 = NEON_frecps(auVar25,auVar65,4);
        uVar81 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd5418);
        uVar95 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd5188);
        uVar12 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5418);
        uVar70 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5188);
        auVar39._0_4_ = auVar25._0_4_ * auVar13._0_4_;
        auVar39._4_4_ = auVar25._4_4_ * auVar13._4_4_;
        auVar39._8_4_ = auVar25._8_4_ * auVar13._8_4_;
        auVar39._12_4_ = auVar25._12_4_ * auVar13._12_4_;
        fVar114 = (float)((ulong)uVar108 >> 0x20);
        fVar115 = (float)((ulong)uVar12 >> 0x20);
        auVar13 = NEON_frecps(auVar39,auVar65,4);
        iVar23 = -(uint)(auVar65._0_4_ == 0.0);
        iVar29 = -(uint)(auVar65._0_4_ == 0.0);
        iVar31 = -(uint)(auVar65._0_4_ == 0.0);
        iVar33 = -(uint)(auVar65._0_4_ == 0.0);
        auVar27[0] = ~(byte)iVar23;
        auVar27[1] = ~(byte)((uint)iVar23 >> 8);
        auVar27[2] = ~(byte)((uint)iVar23 >> 0x10);
        auVar27[3] = ~(byte)((uint)iVar23 >> 0x18);
        auVar27[4] = ~(byte)iVar29;
        auVar27[5] = ~(byte)((uint)iVar29 >> 8);
        auVar27[6] = ~(byte)((uint)iVar29 >> 0x10);
        auVar27[7] = ~(byte)((uint)iVar29 >> 0x18);
        auVar27[8] = ~(byte)iVar31;
        auVar27[9] = ~(byte)((uint)iVar31 >> 8);
        auVar27[10] = ~(byte)((uint)iVar31 >> 0x10);
        auVar27[0xb] = ~(byte)((uint)iVar31 >> 0x18);
        auVar27[0xc] = ~(byte)iVar33;
        auVar27[0xd] = ~(byte)((uint)iVar33 >> 8);
        auVar27[0xe] = ~(byte)((uint)iVar33 >> 0x10);
        auVar27[0xf] = ~(byte)((uint)iVar33 >> 0x18);
        fVar32 = auVar39._0_4_ * auVar13._0_4_;
        fVar112 = auVar39._4_4_ * auVar13._4_4_;
        fVar21 = auVar39._8_4_ * auVar13._8_4_;
        fVar22 = fVar32 * ((float)uVar102 * (float)uVar108 - (float)uVar12 * (float)uVar73);
        fVar28 = fVar112 * ((float)((ulong)uVar102 >> 0x20) * fVar114 -
                           fVar115 * (float)((ulong)uVar73 >> 0x20));
        fVar113 = fVar21 * ((float)uVar103 * (float)uVar96 - (float)uVar70 * (float)uVar94);
        fVar22 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & auVar27[3],
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) & auVar27[2],
                                          CONCAT11((byte)((uint)fVar22 >> 8) & auVar27[1],
                                                   SUB41(fVar22,0) & auVar27[0])));
        auVar35._0_8_ =
             CONCAT17((byte)((uint)fVar28 >> 0x18) & auVar27[7],
                      CONCAT16((byte)((uint)fVar28 >> 0x10) & auVar27[6],
                               CONCAT15((byte)((uint)fVar28 >> 8) & auVar27[5],
                                        CONCAT14(SUB41(fVar28,0) & auVar27[4],fVar22))));
        auVar35[8] = SUB41(fVar113,0) & auVar27[8];
        auVar35[9] = (byte)((uint)fVar113 >> 8) & auVar27[9];
        auVar35[10] = (byte)((uint)fVar113 >> 0x10) & auVar27[10];
        auVar35[0xb] = (byte)((uint)fVar113 >> 0x18) & auVar27[0xb];
        fVar32 = fVar32 * ((float)uVar12 * (float)uVar71 - (float)uVar81 * (float)uVar108);
        fVar112 = fVar112 * (fVar115 * (float)((ulong)uVar71 >> 0x20) -
                            (float)((ulong)uVar81 >> 0x20) * fVar114);
        fVar21 = fVar21 * ((float)uVar70 * (float)uVar72 - (float)uVar95 * (float)uVar96);
        fVar115 = auVar39._12_4_ * auVar13._12_4_ *
                  ((float)((ulong)uVar70 >> 0x20) * (float)((ulong)uVar72 >> 0x20) -
                  (float)((ulong)uVar95 >> 0x20) * (float)((ulong)uVar96 >> 0x20));
        auVar18[0] = SUB41(fVar32,0) & auVar27[0];
        auVar18[1] = (byte)((uint)fVar32 >> 8) & auVar27[1];
        auVar18[2] = (byte)((uint)fVar32 >> 0x10) & auVar27[2];
        auVar18[3] = (byte)((uint)fVar32 >> 0x18) & auVar27[3];
        auVar18[4] = SUB41(fVar112,0) & auVar27[4];
        auVar18[5] = (byte)((uint)fVar112 >> 8) & auVar27[5];
        auVar18[6] = (byte)((uint)fVar112 >> 0x10) & auVar27[6];
        auVar18[7] = (byte)((uint)fVar112 >> 0x18) & auVar27[7];
        auVar18[8] = SUB41(fVar21,0) & auVar27[8];
        auVar18[9] = (byte)((uint)fVar21 >> 8) & auVar27[9];
        auVar18[10] = (byte)((uint)fVar21 >> 0x10) & auVar27[10];
        auVar18[0xb] = (byte)((uint)fVar21 >> 0x18) & auVar27[0xb];
        auVar18[0xc] = SUB41(fVar115,0) & auVar27[0xc];
        auVar18[0xd] = (byte)((uint)fVar115 >> 8) & auVar27[0xd];
        auVar18[0xe] = (byte)((uint)fVar115 >> 0x10) & auVar27[0xe];
        auVar18[0xf] = (byte)((uint)fVar115 >> 0x18) & auVar27[0xf];
        local_68 = *(undefined8 *)(lVar9 + 0x58);
        local_90 = *(undefined8 *)(lVar9 + 0x30);
        local_80 = *(undefined8 *)(lVar9 + 0x40);
        local_70 = *(undefined8 *)(lVar9 + 0x50);
        FUN_0075e340(&local_90,PTR_DAT_02715088);
        FUN_0075e300(&local_90,&local_60);
        FUN_0075e360(&local_90);
        fStack_cc = (float)((ulong)auVar35._0_8_ >> 0x20);
        fStack_c8 = auVar35._8_4_;
        auVar13._0_4_ = extraout_s0 * fVar22 + auVar18._0_4_ * fStack_cc + auVar27._0_4_ * fStack_c8
        ;
        auVar13._4_4_ =
             extraout_var * fVar22 + auVar18._4_4_ * fStack_cc + auVar27._4_4_ * fStack_c8;
        auVar13._8_4_ =
             extraout_var_00 * fVar22 + auVar18._8_4_ * fStack_cc + auVar27._8_4_ * fStack_c8;
        auVar13._12_4_ =
             extraout_var_01 * fVar22 + auVar18._12_4_ * fStack_cc + auVar27._12_4_ * fStack_c8;
        NEON_fmov(0x3f800000,4);
      }
      else if (iVar29 == 1) {
        auVar13 = NEON_frsqrte(auVar66,4);
        fVar34 = fVar34 - fVar112;
        fVar40 = fVar40 - fVar113;
        fVar41 = fVar41 - fVar114;
        fVar115 = 0.0 - fVar115;
        auVar24._0_4_ = fVar11 * auVar13._0_4_;
        auVar24._4_4_ = fVar42 * auVar13._4_4_;
        auVar24._8_4_ = fVar11 * auVar13._8_4_;
        auVar24._12_4_ = fVar42 * auVar13._12_4_;
        auVar59._0_4_ = fVar34 * fVar34;
        auVar59._4_4_ = fVar40 * fVar40;
        auVar59._8_4_ = fVar41 * fVar41;
        auVar59._12_4_ = fVar115 * fVar115;
        auVar25 = NEON_frsqrts(auVar13,auVar24,4);
        auVar14._0_4_ = auVar13._0_4_ * auVar25._0_4_;
        auVar14._4_4_ = auVar13._4_4_ * auVar25._4_4_;
        auVar14._8_4_ = auVar13._8_4_ * auVar25._8_4_;
        auVar14._12_4_ = auVar13._12_4_ * auVar25._12_4_;
        auVar26._0_4_ = fVar11 * auVar14._0_4_;
        auVar26._4_4_ = fVar42 * auVar14._4_4_;
        auVar26._8_4_ = fVar11 * auVar14._8_4_;
        auVar26._12_4_ = fVar42 * auVar14._12_4_;
        auVar13 = NEON_frsqrts(auVar14,auVar26,4);
        iVar23 = -(uint)(fVar11 == 0.0);
        iVar29 = -(uint)(fVar42 == 0.0);
        iVar31 = -(uint)(fVar11 == 0.0);
        iVar33 = -(uint)(fVar42 == 0.0);
        auVar25 = NEON_ext(auVar59,auVar59,8,1);
        fVar22 = auVar25._0_4_ + auVar59._0_4_;
        fVar28 = auVar25._4_4_ + auVar59._4_4_;
        fVar17 = fVar17 * auVar14._0_4_ * auVar13._0_4_;
        fVar19 = fVar19 * auVar14._4_4_ * auVar13._4_4_;
        fVar20 = fVar20 * auVar14._8_4_ * auVar13._8_4_;
        fVar21 = fVar21 * auVar14._12_4_ * auVar13._12_4_;
        fVar112 = fVar22 + fVar28;
        fVar22 = fVar22 + fVar28;
        auVar60._8_8_ = CONCAT44(fVar22,fVar112);
        auVar60._0_8_ = CONCAT44(fVar22,fVar112);
        auVar13 = NEON_frsqrte(auVar60,4);
        auVar75._0_4_ = auVar13._0_4_ * fVar112;
        auVar75._4_4_ = auVar13._4_4_ * fVar22;
        auVar75._8_4_ = auVar13._8_4_ * fVar112;
        auVar75._12_4_ = auVar13._12_4_ * fVar22;
        auVar97[0] = SUB41(fVar17,0) & ~(byte)iVar23;
        auVar97[1] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar23 >> 8);
        auVar97[2] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
        auVar97[3] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
        auVar97[4] = SUB41(fVar19,0) & ~(byte)iVar29;
        auVar97[5] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar29 >> 8);
        auVar97[6] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
        auVar97[7] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
        auVar97[8] = SUB41(fVar20,0) & ~(byte)iVar31;
        auVar97[9] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar31 >> 8);
        auVar97[10] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
        auVar97[0xb] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
        auVar97[0xc] = SUB41(fVar21,0) & ~(byte)iVar33;
        auVar97[0xd] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar33 >> 8);
        auVar97[0xe] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
        auVar97[0xf] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
        auVar25 = NEON_frsqrts(auVar13,auVar75,4);
        iVar23 = -(uint)(fVar112 == 0.0);
        iVar29 = -(uint)(fVar22 == 0.0);
        iVar31 = -(uint)(fVar112 == 0.0);
        iVar33 = -(uint)(fVar22 == 0.0);
        auVar67._0_4_ = auVar13._0_4_ * auVar25._0_4_;
        auVar67._4_4_ = auVar13._4_4_ * auVar25._4_4_;
        auVar67._8_4_ = auVar13._8_4_ * auVar25._8_4_;
        auVar67._12_4_ = auVar13._12_4_ * auVar25._12_4_;
        auVar76._0_4_ = fVar112 * auVar67._0_4_;
        auVar76._4_4_ = fVar22 * auVar67._4_4_;
        auVar76._8_4_ = fVar112 * auVar67._8_4_;
        auVar76._12_4_ = fVar22 * auVar67._12_4_;
        auVar13 = NEON_frsqrts(auVar67,auVar76,4);
        uVar12 = a64_TBL(ZEXT816(0),auVar97,DAT_01cd5418);
        fVar34 = fVar34 * auVar67._0_4_ * auVar13._0_4_;
        fVar40 = fVar40 * auVar67._4_4_ * auVar13._4_4_;
        fVar41 = fVar41 * auVar67._8_4_ * auVar13._8_4_;
        fVar115 = fVar115 * auVar67._12_4_ * auVar13._12_4_;
        auVar104[0] = SUB41(fVar34,0) & ~(byte)iVar23;
        auVar104[1] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar23 >> 8);
        auVar104[2] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
        auVar104[3] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
        auVar104[4] = SUB41(fVar40,0) & ~(byte)iVar29;
        auVar104[5] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar29 >> 8);
        auVar104[6] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
        auVar104[7] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
        auVar104[8] = SUB41(fVar41,0) & ~(byte)iVar31;
        auVar104[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar31 >> 8);
        auVar104[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
        auVar104[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
        auVar104[0xc] = SUB41(fVar115,0) & ~(byte)iVar33;
        auVar104[0xd] = (byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar33 >> 8);
        auVar104[0xe] = (byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
        auVar104[0xf] = (byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
        uVar70 = a64_TBL(ZEXT816(0),auVar97,DAT_01cd5188);
        uVar71 = a64_TBL(ZEXT816(0),auVar104,DAT_01cd50f8);
        uVar81 = a64_TBL(ZEXT816(0),auVar104,DAT_01cd5158);
        fVar21 = (float)((ulong)uVar12 >> 0x20);
        fVar22 = (float)((ulong)uVar70 >> 0x20);
        uVar72 = a64_TBL(ZEXT816(0),auVar97,DAT_01cd50f8);
        uVar94 = a64_TBL(ZEXT816(0),auVar97,DAT_01cd5158);
        uVar95 = a64_TBL(ZEXT816(0),auVar104,DAT_01cd5418);
        uVar102 = a64_TBL(ZEXT816(0),auVar104,DAT_01cd5188);
        fVar28 = (float)((ulong)uVar72 >> 0x20);
        fVar113 = (float)((ulong)uVar94 >> 0x20);
        fVar114 = (float)uVar12 * (float)uVar71 - (float)uVar72 * (float)uVar95;
        fVar34 = fVar21 * (float)((ulong)uVar71 >> 0x20) - fVar28 * (float)((ulong)uVar95 >> 0x20);
        fVar40 = (float)uVar70 * (float)uVar81 - (float)uVar94 * (float)uVar102;
        fVar41 = fVar22 * (float)((ulong)uVar81 >> 0x20) - fVar113 * (float)((ulong)uVar102 >> 0x20)
        ;
        auVar98._0_4_ = fVar114 * fVar114;
        auVar98._4_4_ = fVar34 * fVar34;
        auVar98._8_4_ = fVar40 * fVar40;
        auVar98._12_4_ = fVar41 * fVar41;
        auVar13 = NEON_ext(auVar98,auVar98,8,1);
        fVar112 = auVar13._0_4_ + auVar98._0_4_;
        fVar11 = auVar13._4_4_ + auVar98._4_4_;
        fVar115 = fVar112 + fVar11;
        fVar112 = fVar112 + fVar11;
        if (fVar115 == 0.0) {
          auVar13 = ZEXT816(0);
        }
        else {
          auVar99._8_8_ = CONCAT44(fVar112,fVar115);
          auVar99._0_8_ = CONCAT44(fVar112,fVar115);
          auVar13 = NEON_frsqrte(auVar99,4);
          auVar109._0_4_ = auVar13._0_4_ * fVar115;
          auVar109._4_4_ = auVar13._4_4_ * fVar112;
          auVar109._8_4_ = auVar13._8_4_ * fVar115;
          auVar109._12_4_ = auVar13._12_4_ * fVar112;
          auVar25 = NEON_frsqrts(auVar13,auVar109,4);
          auVar105._0_4_ = auVar13._0_4_ * auVar25._0_4_;
          auVar105._4_4_ = auVar13._4_4_ * auVar25._4_4_;
          auVar105._8_4_ = auVar13._8_4_ * auVar25._8_4_;
          auVar105._12_4_ = auVar13._12_4_ * auVar25._12_4_;
          auVar110._0_4_ = fVar115 * auVar105._0_4_;
          auVar110._4_4_ = fVar112 * auVar105._4_4_;
          auVar110._8_4_ = fVar115 * auVar105._8_4_;
          auVar110._12_4_ = fVar112 * auVar105._12_4_;
          iVar23 = -(uint)(fVar115 == 0.0);
          iVar29 = -(uint)(fVar112 == 0.0);
          iVar31 = -(uint)(fVar115 == 0.0);
          iVar33 = -(uint)(fVar112 == 0.0);
          auVar13 = NEON_frsqrts(auVar105,auVar110,4);
          fVar114 = fVar114 * auVar105._0_4_ * auVar13._0_4_;
          fVar34 = fVar34 * auVar105._4_4_ * auVar13._4_4_;
          fVar40 = fVar40 * auVar105._8_4_ * auVar13._8_4_;
          fVar41 = fVar41 * auVar105._12_4_ * auVar13._12_4_;
          fVar114 = (float)CONCAT13((byte)((uint)fVar114 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                    CONCAT12((byte)((uint)fVar114 >> 0x10) &
                                             ~(byte)((uint)iVar23 >> 0x10),
                                             CONCAT11((byte)((uint)fVar114 >> 8) &
                                                      ~(byte)((uint)iVar23 >> 8),
                                                      SUB41(fVar114,0) & ~(byte)iVar23)));
          auVar82._0_8_ =
               CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                        CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                 CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                          CONCAT14(SUB41(fVar34,0) & ~(byte)iVar29,fVar114))));
          auVar82[8] = SUB41(fVar40,0) & ~(byte)iVar31;
          auVar82[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar31 >> 8);
          auVar82[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
          auVar82[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
          auVar83[0xc] = SUB41(fVar41,0) & ~(byte)iVar33;
          auVar83._0_12_ = auVar82;
          auVar83[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar33 >> 8);
          auVar83[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
          auVar83[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
          uVar71 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd5418);
          uVar81 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd5188);
          uVar95 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd50f8);
          uVar102 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd5158);
          fVar115 = (float)uVar72 * (float)uVar71 - (float)uVar95 * (float)uVar12;
          fVar112 = fVar28 * (float)((ulong)uVar71 >> 0x20) -
                    (float)((ulong)uVar95 >> 0x20) * fVar21;
          fVar21 = (float)uVar94 * (float)uVar81 - (float)uVar102 * (float)uVar70;
          fVar22 = fVar113 * (float)((ulong)uVar81 >> 0x20) -
                   (float)((ulong)uVar102 >> 0x20) * fVar22;
          auVar15._0_4_ = fVar115 * fVar115;
          auVar15._4_4_ = fVar112 * fVar112;
          auVar15._8_4_ = fVar21 * fVar21;
          auVar15._12_4_ = fVar22 * fVar22;
          auVar13 = NEON_ext(auVar15,auVar15,8,1);
          fVar112 = auVar13._0_4_ + auVar15._0_4_;
          fVar21 = auVar13._4_4_ + auVar15._4_4_;
          fVar115 = fVar112 + fVar21;
          fVar112 = fVar112 + fVar21;
          auVar16._8_8_ = CONCAT44(fVar112,fVar115);
          auVar16._0_8_ = CONCAT44(fVar112,fVar115);
          auVar13 = NEON_frsqrte(auVar16,4);
          auVar61._0_4_ = auVar13._0_4_ * fVar115;
          auVar61._4_4_ = auVar13._4_4_ * fVar112;
          auVar61._8_4_ = auVar13._8_4_ * fVar115;
          auVar61._12_4_ = auVar13._12_4_ * fVar112;
          auVar25 = NEON_frsqrts(auVar13,auVar61,4);
          auVar36._0_4_ = auVar13._0_4_ * auVar25._0_4_;
          auVar36._4_4_ = auVar13._4_4_ * auVar25._4_4_;
          auVar36._8_4_ = auVar13._8_4_ * auVar25._8_4_;
          auVar36._12_4_ = auVar13._12_4_ * auVar25._12_4_;
          auVar62._0_4_ = fVar115 * auVar36._0_4_;
          auVar62._4_4_ = fVar112 * auVar36._4_4_;
          auVar62._8_4_ = fVar115 * auVar36._8_4_;
          auVar62._12_4_ = fVar112 * auVar36._12_4_;
          NEON_frsqrts(auVar36,auVar62,4);
          auVar13._0_4_ = fVar114 * fVar32;
          auVar13._4_4_ = (float)((ulong)auVar82._0_8_ >> 0x20) * fVar32;
          auVar13._8_4_ = auVar82._8_4_ * fVar32;
          auVar13._12_4_ = auVar83._12_4_ * fVar32;
        }
      }
    }
  }
  else {
    auVar13 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x1c0) + 0x60);
  }
  return auVar13;
}


