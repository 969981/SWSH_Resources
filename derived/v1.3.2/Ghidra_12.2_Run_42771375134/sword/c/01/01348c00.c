/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01348c00; name: FUN_01348c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01348c00(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float extraout_s0;
  undefined8 uVar18;
  undefined1 auVar20 [12];
  float fVar31;
  float fVar33;
  float fVar34;
  undefined1 auVar22 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar23 [16];
  undefined8 uVar19;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar28 [16];
  undefined1 auVar21 [12];
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar35;
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uVar36;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined8 uVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  float fVar59;
  undefined1 auVar50 [16];
  float fVar60;
  float fVar61;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar46;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined8 uVar63;
  float fVar71;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar72;
  undefined8 uVar73;
  int iVar85;
  undefined1 auVar74 [16];
  int iVar84;
  int iVar86;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined4 uStack_17c;
  float local_170;
  float fStack_16c;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  
  lVar5 = FUN_01311d00();
  uVar6 = FUN_01348960(lVar5 + 0x50);
  if ((uVar6 & 1) == 0) {
    lVar5 = 0;
  }
  fVar12 = (float)FUN_01325a20(lVar5);
  lVar5 = FUN_01311d00(param_1);
  uVar6 = FUN_01348960(lVar5 + 0x50);
  if ((uVar6 & 1) == 0) {
    lVar5 = 0;
  }
  if (DAT_01d4c664 <= fVar12) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    FUN_01324190(lVar5,&local_f0);
    pcVar3 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar3)(auStack_d0);
    }
  }
  else {
    lVar7 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar13 = (float)((double)*(long *)(lVar7 + 8) / DAT_01cd50a0);
    puVar8 = (undefined8 *)FUN_013259f0(lVar5);
    local_100 = (float)*puVar8;
    fStack_fc = (float)((ulong)*puVar8 >> 0x20);
    fStack_f8 = (float)puVar8[1];
    fStack_f4 = (float)((ulong)puVar8[1] >> 0x20);
    puVar8 = (undefined8 *)FUN_01325a00(lVar5);
    fVar32 = fStack_f4;
    fVar62 = fStack_f8;
    fVar45 = fStack_fc;
    fVar12 = local_100;
    local_110 = *puVar8;
    uStack_108 = puVar8[1];
    fVar14 = local_100 * fVar13;
    fVar31 = fStack_fc * fVar13;
    fVar33 = fStack_f8 * fVar13;
    fVar34 = fStack_f4 * fVar13;
    pfVar9 = (float *)FUN_01312400(param_1);
    fVar14 = fVar14 + *pfVar9;
    fVar31 = fVar31 + pfVar9[1];
    fVar33 = fVar33 + pfVar9[2];
    fVar34 = fVar34 + pfVar9[3];
    auVar22 = FUN_00a92cd0();
    local_170 = auVar22._0_4_;
    fStack_16c = auVar22._4_4_;
    pauVar10 = (undefined1 (*) [16])FUN_013124e0(param_1);
    uVar92 = DAT_01cd5418;
    uVar90 = DAT_01cd5270;
    uVar73 = DAT_01cd5120;
    uVar47 = DAT_01cd50f8;
    uVar36 = DAT_01cd50b0;
    uVar19 = DAT_01cd4f90;
    auVar23 = *pauVar10;
    uVar35 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd4f90);
    uVar72 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
    uVar87 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5120);
    uVar91 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
    uVar88 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5270);
    uVar63 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
    uVar89 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
    uVar93 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd50f8);
    fVar15 = (float)((ulong)uVar35 >> 0x20);
    auVar82._0_8_ = auVar23._0_8_;
    auVar82._8_8_ = auVar82._0_8_;
    uVar18 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd50b0);
    fVar16 = (float)((ulong)uVar63 >> 0x20);
    auVar22._4_4_ = fVar31;
    auVar22._0_4_ = fVar14;
    auVar22._8_4_ = fVar33;
    auVar22._12_4_ = fVar34;
    fVar59 = (float)_DAT_01d4ae90;
    fVar102 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar100 = (float)_UNK_01d4ae98;
    fVar101 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar99 = (float)((ulong)uVar89 >> 0x20);
    auVar38._0_8_ =
         CONCAT44((auVar23._4_4_ * fVar15 + fVar102 * fStack_16c * (float)((ulong)uVar72 >> 0x20) +
                  fVar102 * fVar99 * (float)((ulong)uVar93 >> 0x20)) -
                  fVar16 * (float)((ulong)uVar91 >> 0x20),
                  (auVar23._0_4_ * (float)uVar35 + fVar59 * local_170 * (float)uVar72 +
                  fVar59 * (float)uVar89 * (float)uVar93) - (float)uVar63 * (float)uVar91);
    auVar38._8_4_ =
         (auVar23._8_4_ * (float)uVar35 + fVar100 * (float)uVar63 * (float)uVar87 +
         fVar100 * local_170 * (float)uVar18) - (float)uVar89 * (float)uVar88;
    auVar38._12_4_ =
         (auVar23._12_4_ * fVar15 + fVar101 * fVar16 * (float)((ulong)uVar87 >> 0x20) +
         fVar101 * fStack_16c * (float)((ulong)uVar18 >> 0x20)) -
         fVar99 * (float)((ulong)uVar88 >> 0x20);
    fStack_12c = 0.0;
    uStack_118 = auVar38._8_8_;
    local_130 = fVar14;
    fStack_128 = fVar33;
    fStack_124 = fVar34;
    uStack_120 = auVar38._0_8_;
    fVar15 = (float)FUN_01324450(lVar5);
    uVar6 = FUN_01324440(lVar5);
    fVar99 = *(float *)((long)&DAT_02a6ef30 +
                       (-(uVar6 >> 0x1f & 1) & 0xfffffff000000000 | (uVar6 & 0xffffffff) << 4));
    iVar4 = FUN_01324440(lVar5);
    fVar16 = *(float *)((long)&DAT_02a6ef30 + (long)iVar4 * 0x10 + 4);
    iVar4 = FUN_01324440(lVar5);
    if (0.0 <= fVar31 - fVar15) {
      auVar23._4_4_ = 0.0;
      auVar23._0_4_ = fVar14;
      auVar23._8_8_ = auVar22._8_8_;
      local_170 = fVar31;
      fStack_fc = fVar45;
      fStack_f8 = fVar62;
      fStack_f4 = fVar32;
    }
    else {
      fVar17 = *(float *)(&DAT_02a6ef38 + (long)iVar4 * 2);
      auVar49._4_4_ = fVar45;
      auVar49._0_4_ = fVar12;
      auVar49._8_4_ = fVar62;
      auVar49._12_4_ = fVar32;
      if (DAT_01d4c0cc < ABS(fVar45)) {
        FUN_01324440(lVar5);
        FUN_01313e30();
        FUN_006cf0a0(&local_150);
        FUN_012d7080(&local_150,lVar5);
        if (local_138 != 0) {
          (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
          local_138 = 0;
        }
        auVar49._4_4_ = fStack_fc;
        auVar49._0_4_ = local_100;
        auVar49._8_4_ = fStack_f8;
        auVar49._12_4_ = fStack_f4;
        fVar45 = fStack_fc;
      }
      fStack_fc = -(fVar16 * fVar45);
      local_100 = auVar49._0_4_;
      fStack_f8 = auVar49._8_4_;
      fStack_f4 = auVar49._12_4_;
      iVar4 = FUN_01324440(lVar5);
      uVar35 = CONCAT44(fStack_f4,fStack_f8);
      uVar18 = CONCAT44(fStack_fc,local_100);
      if (((iVar4 == 5) && (DAT_01d4bb8c < ABS(fStack_fc))) &&
         (iVar4 = *(int *)(param_1 + 0xa4), *(int *)(param_1 + 0xa4) = iVar4 + 1, iVar4 % 2 == 1)) {
        fStack_fc = fStack_fc * DAT_01d4c68c;
        fVar45 = (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
                 DAT_01d4c1d4;
        fVar12 = (float)FUN_01029020(*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
        auVar23 = FUN_00a92cd0(fVar45 + fVar12,ZEXT816(0),ZEXT816(0));
        auVar2._4_4_ = fStack_fc;
        auVar2._0_4_ = local_100;
        auVar2._8_4_ = fStack_f8;
        auVar2._12_4_ = fStack_f4;
        uVar89 = a64_TBL(ZEXT816(0),auVar2,uVar47);
        fVar12 = auVar23._0_4_;
        fVar62 = fVar12 * (float)_DAT_01d4ae80;
        fVar45 = auVar23._4_4_;
        fVar71 = fVar45 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
        auVar64._0_8_ = CONCAT44(fVar71,fVar62);
        auVar64._8_4_ = auVar23._8_4_ * (float)_UNK_01d4ae88;
        auVar64._12_4_ = auVar23._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
        uVar91 = a64_TBL(ZEXT816(0),auVar64,uVar19);
        uVar94 = a64_TBL(ZEXT816(0),auVar64,uVar73);
        uVar35 = a64_TBL(ZEXT816(0),auVar2,uVar19);
        uVar95 = a64_TBL(ZEXT816(0),auVar64,uVar92);
        uVar18 = a64_TBL(ZEXT816(0),auVar64,uVar90);
        fVar32 = (float)((ulong)uVar35 >> 0x20);
        fVar60 = (float)((ulong)uVar89 >> 0x20);
        uVar93 = a64_TBL(ZEXT816(0),auVar2,uVar92);
        uVar63 = a64_TBL(ZEXT816(0),auVar64,uVar47);
        auVar65._8_8_ = auVar64._0_8_;
        auVar65._0_8_ = auVar64._0_8_;
        uVar87 = a64_TBL(ZEXT816(0),auVar65,uVar36);
        uVar88 = a64_TBL(ZEXT816(0),auVar23,uVar47);
        fVar61 = (float)((ulong)uVar93 >> 0x20);
        uVar72 = a64_TBL(ZEXT816(0),auVar23,uVar19);
        fVar62 = (fVar62 * (float)uVar35 + fVar59 * local_100 * (float)uVar91 +
                 fVar59 * (float)uVar93 * (float)uVar63) - (float)uVar89 * (float)uVar95;
        fVar71 = (fVar71 * fVar32 + fVar102 * fStack_fc * (float)((ulong)uVar91 >> 0x20) +
                 fVar102 * fVar61 * (float)((ulong)uVar63 >> 0x20)) -
                 fVar60 * (float)((ulong)uVar95 >> 0x20);
        auVar39._0_8_ = CONCAT44(fVar71,fVar62);
        auVar39._8_4_ =
             (auVar64._8_4_ * (float)uVar35 + fVar100 * (float)uVar89 * (float)uVar94 +
             fVar100 * local_100 * (float)uVar87) - (float)uVar93 * (float)uVar18;
        auVar39._12_4_ =
             (auVar64._12_4_ * fVar32 + fVar101 * fVar60 * (float)((ulong)uVar94 >> 0x20) +
             fVar101 * fStack_fc * (float)((ulong)uVar87 >> 0x20)) -
             fVar61 * (float)((ulong)uVar18 >> 0x20);
        uVar18 = a64_TBL(ZEXT816(0),auVar39,uVar19);
        uVar35 = a64_TBL(ZEXT816(0),auVar39,uVar73);
        uVar63 = a64_TBL(ZEXT816(0),auVar39,uVar90);
        fVar32 = (float)((ulong)uVar72 >> 0x20);
        fVar60 = (float)((ulong)uVar88 >> 0x20);
        uVar90 = a64_TBL(ZEXT816(0),auVar23,uVar92);
        uVar19 = a64_TBL(ZEXT816(0),auVar39,uVar47);
        uVar73 = a64_TBL(ZEXT816(0),auVar39,uVar92);
        auVar40._8_8_ = auVar39._0_8_;
        auVar40._0_8_ = auVar39._0_8_;
        uVar36 = a64_TBL(ZEXT816(0),auVar40,uVar36);
        fVar61 = (float)((ulong)uVar90 >> 0x20);
        fVar62 = ((float)uVar72 * fVar62 + fVar59 * fVar12 * (float)uVar18 +
                 fVar59 * (float)uVar90 * (float)uVar19) - (float)uVar88 * (float)uVar73;
        fVar59 = (fVar32 * fVar71 + fVar102 * fVar45 * (float)((ulong)uVar18 >> 0x20) +
                 fVar102 * fVar61 * (float)((ulong)uVar19 >> 0x20)) -
                 fVar60 * (float)((ulong)uVar73 >> 0x20);
        fVar12 = ((float)uVar72 * auVar39._8_4_ + fVar100 * (float)uVar88 * (float)uVar35 +
                 fVar100 * fVar12 * (float)uVar36) - (float)uVar90 * (float)uVar63;
        fVar45 = (fVar32 * auVar39._12_4_ + fVar101 * fVar60 * (float)((ulong)uVar35 >> 0x20) +
                 fVar101 * fVar45 * (float)((ulong)uVar36 >> 0x20)) -
                 fVar61 * (float)((ulong)uVar63 >> 0x20);
        local_100 = (float)CONCAT13((byte)((uint)fVar62 >> 0x18) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                    CONCAT12((byte)((uint)fVar62 >> 0x10) &
                                             (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                             CONCAT11((byte)((uint)fVar62 >> 8) &
                                                      (byte)((ulong)DAT_01d4ab50 >> 8),
                                                      SUB41(fVar62,0) & (byte)DAT_01d4ab50)));
        uVar18 = CONCAT17((byte)((uint)fVar59 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                          CONCAT16((byte)((uint)fVar59 >> 0x10) &
                                   (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                   CONCAT15((byte)((uint)fVar59 >> 8) &
                                            (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                            CONCAT14(SUB41(fVar59,0) &
                                                     (byte)((ulong)DAT_01d4ab50 >> 0x20),local_100))
                                  ));
        fStack_f8 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                    CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                             (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                             CONCAT11((byte)((uint)fVar12 >> 8) &
                                                      (byte)((ulong)DAT_01d4ab58 >> 8),
                                                      SUB41(fVar12,0) & (byte)DAT_01d4ab58)));
        uVar35 = CONCAT17((byte)((uint)fVar45 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                          CONCAT16((byte)((uint)fVar45 >> 0x10) &
                                   (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                   CONCAT15((byte)((uint)fVar45 >> 8) &
                                            (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                            CONCAT14(SUB41(fVar45,0) &
                                                     (byte)((ulong)DAT_01d4ab58 >> 0x20),fStack_f8))
                                  ));
        fStack_f4 = (float)((ulong)uVar35 >> 0x20);
        fStack_fc = (float)((ulong)uVar18 >> 0x20);
      }
      fVar32 = (float)uVar18;
      auVar24._0_4_ = fVar32 * fVar32;
      auVar24._4_4_ = 0;
      fVar59 = (float)uVar35;
      auVar24._8_4_ = fVar59 * fVar59;
      fVar102 = (float)((ulong)uVar35 >> 0x20);
      auVar24._12_4_ = fVar102 * fVar102;
      auVar23 = NEON_ext(auVar24,auVar24,8,1);
      fVar45 = auVar23._0_4_ + auVar24._0_4_;
      fVar62 = auVar23._4_4_ + 0.0;
      fVar12 = fVar45 + fVar62;
      fVar45 = fVar45 + fVar62;
      auVar96._8_8_ = CONCAT44(fVar45,fVar12);
      auVar96._0_8_ = CONCAT44(fVar45,fVar12);
      if (SQRT(fVar12) <= DAT_01d4c708) {
        auVar23 = NEON_frsqrte(auVar96,4);
        local_110 = 0;
        uStack_108 = 0;
        auVar53._0_4_ = fVar12 * auVar23._0_4_;
        auVar53._4_4_ = fVar45 * auVar23._4_4_;
        auVar53._8_4_ = fVar12 * auVar23._8_4_;
        auVar53._12_4_ = fVar45 * auVar23._12_4_;
        auVar22 = NEON_frsqrts(auVar23,auVar53,4);
        auVar25._0_4_ = auVar23._0_4_ * auVar22._0_4_;
        auVar25._4_4_ = auVar23._4_4_ * auVar22._4_4_;
        auVar25._8_4_ = auVar23._8_4_ * auVar22._8_4_;
        auVar25._12_4_ = auVar23._12_4_ * auVar22._12_4_;
        auVar54._0_4_ = fVar12 * auVar25._0_4_;
        auVar54._4_4_ = fVar45 * auVar25._4_4_;
        auVar54._8_4_ = fVar12 * auVar25._8_4_;
        auVar54._12_4_ = fVar45 * auVar25._12_4_;
        auVar23 = NEON_frsqrts(auVar25,auVar54,4);
        auVar78._0_4_ = fVar32 * auVar25._0_4_ * auVar23._0_4_;
        auVar78._4_4_ = auVar25._4_4_ * auVar23._4_4_ * 0.0;
        auVar78._8_4_ = fVar59 * auVar25._8_4_ * auVar23._8_4_;
        auVar78._12_4_ = fVar102 * auVar25._12_4_ * auVar23._12_4_;
        auVar26._8_8_ = uVar35;
        auVar26._0_8_ = uVar18;
      }
      else {
        auVar23 = NEON_frsqrte(auVar96,4);
        auVar74._0_4_ = fVar12 * auVar23._0_4_;
        auVar74._4_4_ = fVar45 * auVar23._4_4_;
        auVar74._8_4_ = fVar12 * auVar23._8_4_;
        auVar74._12_4_ = fVar45 * auVar23._12_4_;
        auVar66._8_8_ = _UNK_01d4b588;
        auVar66._0_8_ = _DAT_01d4b580;
        auVar22 = NEON_frsqrts(auVar23,auVar74,4);
        auVar50._0_4_ = auVar23._0_4_ * auVar22._0_4_;
        auVar50._4_4_ = auVar23._4_4_ * auVar22._4_4_;
        auVar50._8_4_ = auVar23._8_4_ * auVar22._8_4_;
        auVar50._12_4_ = auVar23._12_4_ * auVar22._12_4_;
        iVar4 = -(uint)(fVar12 == 0.0);
        iVar84 = -(uint)(fVar45 == 0.0);
        iVar85 = -(uint)(fVar12 == 0.0);
        iVar86 = -(uint)(fVar45 == 0.0);
        auVar97._0_4_ = fVar12 * auVar50._0_4_;
        auVar97._4_4_ = fVar45 * auVar50._4_4_;
        auVar97._8_4_ = fVar12 * auVar50._8_4_;
        auVar97._12_4_ = fVar45 * auVar50._12_4_;
        auVar23 = NEON_frsqrts(auVar50,auVar97,4);
        uVar19 = a64_TBL(ZEXT816(0),auVar66,uVar92);
        fVar62 = fVar32 * auVar50._0_4_ * auVar23._0_4_;
        fVar100 = auVar50._4_4_ * auVar23._4_4_ * 0.0;
        auVar78._4_4_ = fVar100;
        auVar78._0_4_ = fVar62;
        fVar101 = fVar59 * auVar50._8_4_ * auVar23._8_4_;
        fVar102 = fVar102 * auVar50._12_4_ * auVar23._12_4_;
        auVar78._12_4_ = fVar102;
        auVar78._8_4_ = fVar101;
        uVar35 = a64_TBL(ZEXT816(0),auVar66,DAT_01cd5188);
        uVar36 = a64_TBL(ZEXT816(0),auVar66,uVar47);
        uVar73 = a64_TBL(ZEXT816(0),auVar66,DAT_01cd5158);
        auVar67[0] = SUB41(fVar62,0) & ~(byte)iVar4;
        auVar67[1] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar4 >> 8);
        auVar67[2] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
        auVar67[3] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
        auVar67[4] = SUB41(fVar100,0) & ~(byte)iVar84;
        auVar67[5] = (byte)((uint)fVar100 >> 8) & ~(byte)((uint)iVar84 >> 8);
        auVar67[6] = (byte)((uint)fVar100 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
        auVar67[7] = (byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
        auVar67[8] = SUB41(fVar101,0) & ~(byte)iVar85;
        auVar67[9] = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar85 >> 8);
        auVar67[10] = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
        auVar67[0xb] = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
        auVar67[0xc] = SUB41(fVar102,0) & ~(byte)iVar86;
        auVar67[0xd] = (byte)((uint)fVar102 >> 8) & ~(byte)((uint)iVar86 >> 8);
        auVar67[0xe] = (byte)((uint)fVar102 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
        auVar67[0xf] = (byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
        uVar90 = a64_TBL(ZEXT816(0),auVar67,uVar47);
        uVar18 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd5158);
        uVar47 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd5188);
        uVar92 = a64_TBL(ZEXT816(0),auVar67,uVar92);
        fVar101 = (float)uVar19 * (float)uVar90 - (float)uVar36 * (float)uVar92;
        fVar71 = (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar90 >> 0x20) -
                 (float)((ulong)uVar36 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
        fVar60 = (float)uVar35 * (float)uVar18 - (float)uVar73 * (float)uVar47;
        fVar61 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar18 >> 0x20) -
                 (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
        auVar41._0_4_ = fVar101 * fVar101;
        auVar41._4_4_ = fVar71 * fVar71;
        auVar41._8_4_ = fVar60 * fVar60;
        auVar41._12_4_ = fVar61 * fVar61;
        auVar23 = NEON_ext(auVar41,auVar41,8,1);
        fVar102 = auVar23._0_4_ + auVar41._0_4_;
        fVar100 = auVar23._4_4_ + auVar41._4_4_;
        fVar62 = fVar102 + fVar100;
        fVar102 = fVar102 + fVar100;
        auVar42._8_8_ = CONCAT44(fVar102,fVar62);
        auVar42._0_8_ = CONCAT44(fVar102,fVar62);
        auVar23 = NEON_frsqrte(auVar42,4);
        auVar75._0_4_ = auVar23._0_4_ * fVar62;
        auVar75._4_4_ = auVar23._4_4_ * fVar102;
        auVar75._8_4_ = auVar23._8_4_ * fVar62;
        auVar75._12_4_ = auVar23._12_4_ * fVar102;
        auVar22 = NEON_frsqrts(auVar23,auVar75,4);
        auVar68._0_4_ = auVar23._0_4_ * auVar22._0_4_;
        auVar68._4_4_ = auVar23._4_4_ * auVar22._4_4_;
        auVar68._8_4_ = auVar23._8_4_ * auVar22._8_4_;
        auVar68._12_4_ = auVar23._12_4_ * auVar22._12_4_;
        auVar76._0_4_ = fVar62 * auVar68._0_4_;
        auVar76._4_4_ = fVar102 * auVar68._4_4_;
        auVar76._8_4_ = fVar62 * auVar68._8_4_;
        auVar76._12_4_ = fVar102 * auVar68._12_4_;
        iVar4 = -(uint)(fVar62 == 0.0);
        iVar84 = -(uint)(fVar102 == 0.0);
        iVar85 = -(uint)(fVar62 == 0.0);
        iVar86 = -(uint)(fVar102 == 0.0);
        auVar23 = NEON_frsqrts(auVar68,auVar76,4);
        fVar101 = fVar101 * auVar68._0_4_ * auVar23._0_4_;
        fVar71 = fVar71 * auVar68._4_4_ * auVar23._4_4_;
        fVar60 = fVar60 * auVar68._8_4_ * auVar23._8_4_;
        fVar61 = fVar61 * auVar68._12_4_ * auVar23._12_4_;
        fVar100 = (float)CONCAT13((byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                                  CONCAT12((byte)((uint)fVar101 >> 0x10) &
                                           ~(byte)((uint)iVar4 >> 0x10),
                                           CONCAT11((byte)((uint)fVar101 >> 8) &
                                                    ~(byte)((uint)iVar4 >> 8),
                                                    SUB41(fVar101,0) & ~(byte)iVar4)));
        auVar37._0_8_ =
             CONCAT17((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18),
                      CONCAT16((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10),
                               CONCAT15((byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar84 >> 8),
                                        CONCAT14(SUB41(fVar71,0) & ~(byte)iVar84,fVar100))));
        auVar37[8] = SUB41(fVar60,0) & ~(byte)iVar85;
        auVar37[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar85 >> 8);
        auVar37[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
        auVar37[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
        auVar43[0xc] = SUB41(fVar61,0) & ~(byte)iVar86;
        auVar43._0_12_ = auVar37;
        auVar43[0xd] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar86 >> 8);
        auVar43[0xe] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
        auVar43[0xf] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
        auVar51._0_4_ = fVar100 * fVar100;
        fVar101 = (float)((ulong)auVar37._0_8_ >> 0x20);
        auVar51._4_4_ = fVar101 * fVar101;
        fVar71 = auVar37._8_4_;
        auVar51._8_4_ = fVar71 * fVar71;
        auVar51._12_4_ = auVar43._12_4_ * auVar43._12_4_;
        auVar23 = NEON_ext(auVar51,auVar51,8,1);
        fVar102 = auVar23._0_4_ + auVar51._0_4_;
        fVar60 = auVar23._4_4_ + auVar51._4_4_;
        fVar62 = fVar102 + fVar60;
        fVar102 = fVar102 + fVar60;
        auVar52._8_8_ = CONCAT44(fVar102,fVar62);
        auVar52._0_8_ = CONCAT44(fVar102,fVar62);
        auVar23 = NEON_frsqrte(auVar52,4);
        auVar98._0_4_ = auVar23._0_4_ * fVar62;
        auVar98._4_4_ = auVar23._4_4_ * fVar102;
        auVar98._8_4_ = auVar23._8_4_ * fVar62;
        auVar98._12_4_ = auVar23._12_4_ * fVar102;
        auVar22 = NEON_frsqrts(auVar23,auVar98,4);
        auVar77._0_4_ = auVar23._0_4_ * auVar22._0_4_;
        auVar77._4_4_ = auVar23._4_4_ * auVar22._4_4_;
        auVar77._8_4_ = auVar23._8_4_ * auVar22._8_4_;
        auVar77._12_4_ = auVar23._12_4_ * auVar22._12_4_;
        iVar4 = -(uint)(fVar62 == 0.0);
        iVar84 = -(uint)(fVar102 == 0.0);
        iVar85 = -(uint)(fVar62 == 0.0);
        fVar60 = (SQRT(fVar12) / ((fVar15 + fVar15) * DAT_01d4bb38)) * 1.5;
        auVar1._4_4_ = fVar102 * auVar77._4_4_;
        auVar1._0_4_ = fVar62 * auVar77._0_4_;
        auVar1._8_4_ = fVar62 * auVar77._8_4_;
        auVar1._12_4_ = fVar102 * auVar77._12_4_;
        auVar23 = NEON_frsqrts(auVar77,auVar1,4);
        fVar100 = fVar100 * auVar77._0_4_ * auVar23._0_4_;
        fVar101 = fVar101 * auVar77._4_4_ * auVar23._4_4_;
        fVar71 = fVar71 * auVar77._8_4_ * auVar23._8_4_;
        fVar62 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                                 CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                          ~(byte)((uint)iVar4 >> 0x10),
                                          CONCAT11((byte)((uint)fVar100 >> 8) &
                                                   ~(byte)((uint)iVar4 >> 8),
                                                   SUB41(fVar100,0) & ~(byte)iVar4)));
        auVar20._0_8_ =
             CONCAT17((byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18),
                      CONCAT16((byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10),
                               CONCAT15((byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar84 >> 8),
                                        CONCAT14(SUB41(fVar101,0) & ~(byte)iVar84,fVar62))));
        auVar20[8] = SUB41(fVar71,0) & ~(byte)iVar85;
        auVar20[9] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar85 >> 8);
        auVar20[10] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
        auVar20[0xb] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
        fVar102 = 0.5 - *(float *)PTR_Float2Pi_02715150 *
                        (float)(int)(*(float *)PTR_Float1Divided2Pi_02715148 * 0.5 + 0.5);
        if (fVar102 <= *(float *)PTR_FloatPiDivided2_02715158) {
          if (-*(float *)PTR_FloatPiDivided2_02715158 <= fVar102) {
            fVar100 = 1.0;
          }
          else {
            fVar102 = -*(float *)PTR_FloatPi_02715160 - fVar102;
            fVar100 = -1.0;
          }
        }
        else {
          fVar102 = *(float *)PTR_FloatPi_02715160 - fVar102;
          fVar100 = -1.0;
        }
        fVar101 = fVar102 * fVar102;
        fVar102 = fVar102 * (fVar101 * (fVar101 * (*(float *)(PTR_SinCoefficients_02715168 + 0xc) +
                                                  fVar101 * (fVar101 * (*(float *)(
                                                  PTR_SinCoefficients_02715168 + 4) -
                                                  *(float *)PTR_SinCoefficients_02715168 * fVar101)
                                                  - *(float *)(PTR_SinCoefficients_02715168 + 8))) -
                                       *(float *)(PTR_SinCoefficients_02715168 + 0x10)) + 1.0);
        auVar27._0_8_ = CONCAT44((float)((ulong)auVar20._0_8_ >> 0x20) * fVar102,fVar62 * fVar102);
        auVar27._8_4_ = auVar20._8_4_ * fVar102;
        auVar27._12_4_ =
             fVar100 * (fVar101 * (fVar101 * (*(float *)(PTR_CosCoefficients_02715170 + 0xc) +
                                             fVar101 * (fVar101 * (*(float *)(
                                                  PTR_CosCoefficients_02715170 + 4) -
                                                  fVar101 * *(float *)PTR_CosCoefficients_02715170)
                                                  - *(float *)(PTR_CosCoefficients_02715170 + 8))) -
                                  *(float *)(PTR_CosCoefficients_02715170 + 0x10)) + 1.0);
        uStack_148 = auVar27._8_8_;
        local_150 = auVar27._0_8_;
        FUN_007101c0(&local_150);
        auVar96._4_4_ = fVar45;
        auVar96._0_4_ = fVar12;
        auVar96._8_4_ = fVar12;
        auVar96._12_4_ = fVar45;
        uStack_108 = CONCAT44(extraout_var_01 * fVar60,extraout_var_00 * fVar60);
        local_110 = CONCAT44(extraout_var * fVar60,extraout_s0 * fVar60);
        auVar26._4_4_ = fStack_fc;
        auVar26._0_4_ = local_100;
        auVar26._8_4_ = fStack_f8;
        auVar26._12_4_ = fStack_f4;
      }
      iVar4 = -(uint)(auVar96._0_4_ == 0.0);
      iVar84 = -(uint)(auVar96._4_4_ == 0.0);
      iVar85 = -(uint)(auVar96._8_4_ == 0.0);
      iVar86 = -(uint)(auVar96._12_4_ == 0.0);
      fVar12 = (float)CONCAT13(auVar78[3] & ~(byte)((uint)iVar4 >> 0x18),
                               CONCAT12(auVar78[2] & ~(byte)((uint)iVar4 >> 0x10),
                                        CONCAT11(auVar78[1] & ~(byte)((uint)iVar4 >> 8),
                                                 auVar78[0] & ~(byte)iVar4)));
      auVar48._0_8_ =
           CONCAT17(auVar78[7] & ~(byte)((uint)iVar84 >> 0x18),
                    CONCAT16(auVar78[6] & ~(byte)((uint)iVar84 >> 0x10),
                             CONCAT15(auVar78[5] & ~(byte)((uint)iVar84 >> 8),
                                      CONCAT14(auVar78[4] & ~(byte)iVar84,fVar12))));
      auVar48[8] = auVar78[8] & ~(byte)iVar85;
      auVar48[9] = auVar78[9] & ~(byte)((uint)iVar85 >> 8);
      auVar48[10] = auVar78[10] & ~(byte)((uint)iVar85 >> 0x10);
      auVar48[0xb] = auVar78[0xb] & ~(byte)((uint)iVar85 >> 0x18);
      auVar55[0xc] = auVar78[0xc] & ~(byte)iVar86;
      auVar55._0_12_ = auVar48;
      auVar55[0xd] = auVar78[0xd] & ~(byte)((uint)iVar86 >> 8);
      auVar55[0xe] = auVar78[0xe] & ~(byte)((uint)iVar86 >> 0x10);
      auVar55[0xf] = auVar78[0xf] & ~(byte)((uint)iVar86 >> 0x18);
      fVar45 = fVar17 * DAT_01d4c764 * fVar13;
      fVar12 = fVar12 * fVar45;
      fVar62 = auVar48._8_4_ * fVar45;
      fVar102 = auVar55._12_4_ * fVar45;
      auVar23._4_4_ = fStack_12c;
      auVar23._0_4_ = local_130;
      auVar23._8_4_ = fStack_128;
      auVar23._12_4_ = fStack_124;
      fVar12 = auVar26._0_4_ -
               (float)((uint)fVar12 ^
                      ((uint)fVar12 ^ (uint)fVar32) & -(uint)(ABS(fVar32) < ABS(fVar12)));
      local_170 = fVar15;
      fStack_fc = auVar26._4_4_ - (float)((ulong)auVar48._0_8_ >> 0x20) * fVar45;
      fStack_f8 = auVar26._8_4_ -
                  (float)((uint)fVar62 ^
                         ((uint)fVar62 ^ (uint)fVar59) & -(uint)(ABS(fVar59) < ABS(fVar62)));
      fStack_f4 = auVar26._12_4_ -
                  (float)((uint)fVar102 ^ (uint)fVar102 & -(uint)(ABS(fVar59) < ABS(fVar62)));
    }
    fVar59 = (float)_DAT_02a6eec0 - auVar23._0_4_;
    fVar102 = (float)((ulong)_DAT_02a6eec0 >> 0x20) - auVar23._4_4_;
    fVar100 = (float)uRam0000000002a6eec8 - auVar23._8_4_;
    fVar101 = (float)((ulong)uRam0000000002a6eec8 >> 0x20) - auVar23._12_4_;
    auVar28._0_4_ = fVar59 * fVar59;
    auVar28._4_4_ = fVar102 * fVar102;
    auVar28._8_4_ = fVar100 * fVar100;
    auVar28._12_4_ = fVar101 * fVar101;
    auVar22 = NEON_ext(auVar28,auVar28,8,1);
    fVar62 = auVar22._0_4_ + auVar28._0_4_;
    fVar32 = auVar22._4_4_ + auVar28._4_4_;
    fVar15 = DAT_01d4c2cc - fVar15;
    fVar45 = fVar62 + fVar32;
    fVar62 = fVar62 + fVar32;
    local_100 = fVar12;
    if (fVar15 * fVar15 < fVar45) {
      local_100 = -(fVar16 * fVar12);
      fStack_f8 = -(fVar16 * fStack_f8);
      auVar56._8_8_ = CONCAT44(fVar62,fVar45);
      auVar56._0_8_ = CONCAT44(fVar62,fVar45);
      fStack_f4 = 0.0;
      auVar23 = NEON_frsqrte(auVar56,4);
      auVar79._0_4_ = fVar45 * auVar23._0_4_;
      auVar79._4_4_ = fVar62 * auVar23._4_4_;
      auVar79._8_4_ = fVar45 * auVar23._8_4_;
      auVar79._12_4_ = fVar62 * auVar23._12_4_;
      auVar22 = NEON_frsqrts(auVar23,auVar79,4);
      auVar69._0_4_ = auVar23._0_4_ * auVar22._0_4_;
      auVar69._4_4_ = auVar23._4_4_ * auVar22._4_4_;
      auVar69._8_4_ = auVar23._8_4_ * auVar22._8_4_;
      auVar69._12_4_ = auVar23._12_4_ * auVar22._12_4_;
      auVar80._0_4_ = fVar45 * auVar69._0_4_;
      auVar80._4_4_ = fVar62 * auVar69._4_4_;
      auVar80._8_4_ = fVar45 * auVar69._8_4_;
      auVar80._12_4_ = fVar62 * auVar69._12_4_;
      iVar4 = -(uint)(fVar45 == 0.0);
      iVar84 = -(uint)(fVar62 == 0.0);
      iVar85 = -(uint)(fVar45 == 0.0);
      iVar86 = -(uint)(fVar62 == 0.0);
      auVar23 = NEON_frsqrts(auVar69,auVar80,4);
      fVar59 = fVar59 * auVar69._0_4_ * auVar23._0_4_;
      fVar102 = fVar102 * auVar69._4_4_ * auVar23._4_4_;
      fVar100 = fVar100 * auVar69._8_4_ * auVar23._8_4_;
      fVar101 = fVar101 * auVar69._12_4_ * auVar23._12_4_;
      uVar46 = CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                        CONCAT12((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                 CONCAT11((byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                          SUB41(fVar59,0) & ~(byte)iVar4)));
      auVar57._0_8_ =
           CONCAT17((byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18),
                    CONCAT16((byte)((uint)fVar102 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10),
                             CONCAT15((byte)((uint)fVar102 >> 8) & ~(byte)((uint)iVar84 >> 8),
                                      CONCAT14(SUB41(fVar102,0) & ~(byte)iVar84,uVar46))));
      auVar57[8] = SUB41(fVar100,0) & ~(byte)iVar85;
      auVar57[9] = (byte)((uint)fVar100 >> 8) & ~(byte)((uint)iVar85 >> 8);
      auVar57[10] = (byte)((uint)fVar100 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
      auVar57[0xb] = (byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
      auVar57[0xc] = SUB41(fVar101,0) & ~(byte)iVar86;
      auVar57[0xd] = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar86 >> 8);
      auVar57[0xe] = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
      auVar57[0xf] = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
      fVar12 = SQRT(fVar45);
      if (NAN(fVar12)) {
        uVar19 = auVar57._8_8_;
        uStack_17c = (undefined4)((ulong)auVar57._0_8_ >> 0x20);
        fVar12 = sqrtf(fVar45);
        auVar57._4_4_ = uStack_17c;
        auVar57._0_4_ = uVar46;
        auVar57._8_8_ = uVar19;
      }
      fVar12 = fVar12 - fVar15;
      auVar23._0_4_ = local_130 + auVar57._0_4_ * fVar12;
      auVar23._4_4_ = fStack_12c + auVar57._4_4_ * fVar12;
      auVar23._8_4_ = fStack_128 + auVar57._8_4_ * fVar12;
      auVar23._12_4_ = fStack_124 + auVar57._12_4_ * fVar12;
      local_130 = auVar23._0_4_;
      fStack_12c = auVar23._4_4_;
      fStack_128 = auVar23._8_4_;
      fStack_124 = auVar23._12_4_;
    }
    auVar44._0_4_ = local_100 * local_100;
    auVar44._4_4_ = 0;
    auVar44._8_4_ = fStack_f8 * fStack_f8;
    auVar44._12_4_ = fStack_f4 * fStack_f4;
    auVar22 = NEON_ext(auVar44,auVar44,8,1);
    fVar62 = auVar22._0_4_ + auVar44._0_4_;
    fVar12 = auVar22._4_4_ + 0.0;
    fVar45 = fVar62 + fVar12;
    fVar62 = fVar62 + fVar12;
    auVar58._8_8_ = CONCAT44(fVar62,fVar45);
    auVar58._0_8_ = CONCAT44(fVar62,fVar45);
    fVar12 = local_100;
    if (0.0 < SQRT(fVar45)) {
      auVar22 = NEON_frsqrte(auVar58,4);
      auVar81._0_4_ = fVar45 * auVar22._0_4_;
      auVar81._4_4_ = fVar62 * auVar22._4_4_;
      auVar81._8_4_ = fVar45 * auVar22._8_4_;
      auVar81._12_4_ = fVar62 * auVar22._12_4_;
      auVar82 = NEON_frsqrts(auVar22,auVar81,4);
      auVar70._0_4_ = auVar22._0_4_ * auVar82._0_4_;
      auVar70._4_4_ = auVar22._4_4_ * auVar82._4_4_;
      auVar70._8_4_ = auVar22._8_4_ * auVar82._8_4_;
      auVar70._12_4_ = auVar22._12_4_ * auVar82._12_4_;
      auVar83._0_4_ = fVar45 * auVar70._0_4_;
      auVar83._4_4_ = fVar62 * auVar70._4_4_;
      auVar83._8_4_ = fVar45 * auVar70._8_4_;
      auVar83._12_4_ = fVar62 * auVar70._12_4_;
      iVar4 = -(uint)(fVar45 == 0.0);
      iVar84 = -(uint)(fVar62 == 0.0);
      iVar85 = -(uint)(fVar45 == 0.0);
      iVar86 = -(uint)(fVar62 == 0.0);
      auVar22 = NEON_frsqrts(auVar70,auVar83,4);
      fVar12 = local_100 * auVar70._0_4_ * auVar22._0_4_;
      fVar62 = auVar70._4_4_ * auVar22._4_4_ * 0.0;
      fVar32 = fStack_f8 * auVar70._8_4_ * auVar22._8_4_;
      fVar15 = fStack_f4 * auVar70._12_4_ * auVar22._12_4_;
      fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                               CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                        CONCAT11((byte)((uint)fVar12 >> 8) &
                                                 ~(byte)((uint)iVar4 >> 8),
                                                 SUB41(fVar12,0) & ~(byte)iVar4)));
      auVar21._0_8_ =
           CONCAT17((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18),
                    CONCAT16((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10),
                             CONCAT15((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar84 >> 8),
                                      CONCAT14(SUB41(fVar62,0) & ~(byte)iVar84,fVar12))));
      auVar21[8] = SUB41(fVar32,0) & ~(byte)iVar85;
      auVar21[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar85 >> 8);
      auVar21[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
      auVar21[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
      auVar29[0xc] = SUB41(fVar15,0) & ~(byte)iVar86;
      auVar29._0_12_ = auVar21;
      auVar29[0xd] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar86 >> 8);
      auVar29[0xe] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
      auVar29[0xf] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
      fVar45 = ((SQRT(fVar45) * DAT_01d4bd3c) / fVar99) * fVar13;
      fVar12 = local_100 - fVar12 * fVar45;
      fStack_fc = fStack_fc - (float)((ulong)auVar21._0_8_ >> 0x20) * fVar45;
      fStack_f8 = fStack_f8 - auVar21._8_4_ * fVar45;
      fStack_f4 = fStack_f4 - auVar29._12_4_ * fVar45;
    }
    fStack_fc = fStack_fc + ((fVar99 * DAT_01d4c3b8 + DAT_01d4c44c * fStack_fc) / fVar99) * fVar13;
    local_100 = fVar12;
    plVar11 = (long *)FUN_013242b0(lVar5);
    lVar7 = *plVar11;
    fVar14 = fVar14 - *(float *)(lVar7 + 0xb0);
    fVar31 = fVar31 - *(float *)(lVar7 + 0xb4);
    fVar33 = fVar33 - *(float *)(lVar7 + 0xb8);
    fVar34 = fVar34 - *(float *)(lVar7 + 0xbc);
    auVar30._0_4_ = fVar14 * fVar14;
    auVar30._4_4_ = fVar31 * fVar31;
    auVar30._8_4_ = fVar33 * fVar33;
    auVar30._12_4_ = fVar34 * fVar34;
    auVar22 = NEON_ext(auVar30,auVar30,8,1);
    if (auVar22._0_4_ + auVar30._0_4_ + auVar22._4_4_ + auVar30._4_4_ <= DAT_01d4c100) {
      pfVar9 = (float *)FUN_013259f0(lVar5);
      fVar32 = fStack_f8;
      fVar62 = DAT_01d4c208;
      fVar45 = DAT_01d4c204;
      local_100 = DAT_01d4c204 * fVar12 + *pfVar9 * DAT_01d4c208;
      lVar7 = FUN_013259f0(lVar5);
      fStack_f8 = fVar45 * fVar32 + *(float *)(lVar7 + 8) * fVar62;
      fStack_f4 = 0.0;
      auVar23._4_4_ = fStack_12c;
      auVar23._0_4_ = local_130;
      auVar23._8_4_ = fStack_128;
      auVar23._12_4_ = fStack_124;
    }
    fStack_12c = local_170;
    local_130 = auVar23._0_4_;
    fStack_128 = auVar23._8_4_;
    fStack_124 = auVar23._12_4_;
    FUN_013126b0(param_1,&local_130);
    FUN_01312780(param_1,&uStack_120);
    FUN_01323bf0(lVar5,&local_100);
    FUN_01323c10(lVar5,&local_110);
  }
  return *(undefined1 (*) [16])PTR_DAT_02727ab0;
}


