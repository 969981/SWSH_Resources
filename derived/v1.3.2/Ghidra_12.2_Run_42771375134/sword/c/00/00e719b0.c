/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e719b0; name: FUN_00e719b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e719b0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
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
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined8 uVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  float fVar31;
  undefined1 uVar32;
  undefined1 extraout_var;
  undefined1 uVar33;
  undefined1 extraout_var_00;
  undefined1 uVar34;
  undefined1 extraout_var_01;
  undefined1 uVar35;
  undefined1 extraout_var_02;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  float fVar44;
  undefined1 auVar45 [12];
  float fVar47;
  undefined1 auVar46 [16];
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar71;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  long local_38;
  
  if ((*(long *)(param_1[0xf] + 0x360) != 0) &&
     (lVar27 = *(long *)(*(long *)(param_1[0xf] + 0x360) + 0x80), lVar27 != 0)) {
    plVar28 = (long *)(lVar27 + 0x48);
    (**(code **)(*plVar28 + 0x10))(plVar28);
    puVar30 = *(undefined8 **)(lVar27 + 0x60);
    if (puVar30 != (undefined8 *)0x0) {
      plVar24 = (long *)(**(code **)*puVar30)(puVar30);
      lVar27 = FUN_006cb2c0();
      for (; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        if (plVar24 == (long *)lVar27) {
          puVar30 = puVar30 + -10;
          goto LAB_00e71a2c;
        }
      }
      puVar30 = (undefined8 *)0x0;
    }
LAB_00e71a2c:
    (**(code **)(*plVar28 + 0x18))(plVar28);
    if ((puVar30 != (undefined8 *)0x0) && (puVar30[0x2c] != 0)) {
      plVar28 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
      while( true ) {
        lVar27 = *plVar28;
        uVar25 = FUN_015b5320(lVar27 + 0x50);
        if (((uVar25 & 1) != 0) &&
           (uVar25 = (**(code **)(*(long *)*plVar28 + 0x88))(), (uVar25 & 1) == 0)) break;
        plVar28 = plVar28 + 1;
      }
      lVar26 = param_1[0xf];
      auVar1 = *(undefined1 (*) [16])(lVar26 + 0xa0);
      uVar32 = (undefined1)_UNK_01d49dc8;
      uVar33 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
      uVar34 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
      uVar35 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
      uVar36 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
      uVar37 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
      uVar38 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
      uVar39 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
      fVar44 = auVar1._0_4_;
      fVar54 = fVar44 * (float)_DAT_01d4ae80;
      fVar47 = auVar1._4_4_;
      fVar56 = fVar47 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
      fVar58 = auVar1._8_4_ * (float)_UNK_01d4ae88;
      fVar60 = auVar1._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
      auVar19[8] = uVar32;
      auVar19._0_8_ = _DAT_01d49dc0;
      auVar19[9] = uVar33;
      auVar19[10] = uVar34;
      auVar19[0xb] = uVar35;
      auVar19[0xc] = uVar36;
      auVar19[0xd] = uVar37;
      auVar19[0xe] = uVar38;
      auVar19[0xf] = uVar39;
      uVar29 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd4f90);
      auVar12._4_4_ = fVar56;
      auVar12._0_4_ = fVar54;
      auVar12._8_4_ = fVar58;
      auVar12._12_4_ = fVar60;
      uVar72 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
      auVar20[8] = uVar32;
      auVar20._0_8_ = _DAT_01d49dc0;
      auVar20[9] = uVar33;
      auVar20[10] = uVar34;
      auVar20[0xb] = uVar35;
      auVar20[0xc] = uVar36;
      auVar20[0xd] = uVar37;
      auVar20[0xe] = uVar38;
      auVar20[0xf] = uVar39;
      uVar62 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
      auVar21[8] = uVar32;
      auVar21._0_8_ = _DAT_01d49dc0;
      auVar21[9] = uVar33;
      auVar21[10] = uVar34;
      auVar21[0xb] = uVar35;
      auVar21[0xc] = uVar36;
      auVar21[0xd] = uVar37;
      auVar21[0xe] = uVar38;
      auVar21[0xf] = uVar39;
      uVar23 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
      auVar13._4_4_ = fVar56;
      auVar13._0_4_ = fVar54;
      auVar13._8_4_ = fVar58;
      auVar13._12_4_ = fVar60;
      uVar74 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
      auVar14._4_4_ = fVar56;
      auVar14._0_4_ = fVar54;
      auVar14._8_4_ = fVar58;
      auVar14._12_4_ = fVar60;
      uVar75 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
      auVar15._4_4_ = fVar56;
      auVar15._0_4_ = fVar54;
      auVar15._8_4_ = fVar58;
      auVar15._12_4_ = fVar60;
      uVar76 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
      fVar63 = (float)((ulong)uVar29 >> 0x20);
      fVar67 = (float)((ulong)uVar62 >> 0x20);
      auVar16._4_4_ = fVar56;
      auVar16._0_4_ = fVar54;
      auVar16._8_4_ = fVar58;
      auVar16._12_4_ = fVar60;
      uVar73 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50f8);
      auVar17._4_4_ = fVar56;
      auVar17._0_4_ = fVar54;
      auVar17._8_4_ = fVar54;
      auVar17._12_4_ = fVar56;
      uVar18 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50b0);
      fVar59 = (float)_UNK_01d4ae98;
      fVar61 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
      fVar55 = (float)_DAT_01d4ae90;
      fVar57 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
      fVar71 = (float)((ulong)uVar23 >> 0x20);
      fVar54 = (fVar54 * (float)uVar29 + fVar55 * (float)uVar72 * 0.0 +
               fVar55 * (float)uVar23 * (float)uVar73) - (float)uVar62 * (float)uVar75;
      fVar56 = (fVar56 * fVar63 + fVar57 * (float)((ulong)uVar72 >> 0x20) * 0.0 +
               fVar57 * fVar71 * (float)((ulong)uVar73 >> 0x20)) -
               fVar67 * (float)((ulong)uVar75 >> 0x20);
      uVar32 = SUB41(fVar56,0);
      uVar33 = (undefined1)((uint)fVar56 >> 8);
      uVar34 = (undefined1)((uint)fVar56 >> 0x10);
      uVar35 = (undefined1)((uint)fVar56 >> 0x18);
      fVar6 = (fVar58 * (float)uVar29 + fVar59 * (float)uVar62 * (float)uVar74 +
              fVar59 * (float)uVar18 * 0.0) - (float)uVar23 * (float)uVar76;
      uVar36 = SUB41(fVar6,0);
      uVar37 = (undefined1)((uint)fVar6 >> 8);
      uVar38 = (undefined1)((uint)fVar6 >> 0x10);
      uVar39 = (undefined1)((uint)fVar6 >> 0x18);
      fVar67 = (fVar60 * fVar63 + fVar61 * fVar67 * (float)((ulong)uVar74 >> 0x20) +
               fVar61 * (float)((ulong)uVar18 >> 0x20) * 0.0) -
               fVar71 * (float)((ulong)uVar76 >> 0x20);
      uVar40 = SUB41(fVar67,0);
      uVar41 = (undefined1)((uint)fVar67 >> 8);
      uVar42 = (undefined1)((uint)fVar67 >> 0x10);
      uVar43 = (undefined1)((uint)fVar67 >> 0x18);
      uVar62 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd4f90);
      uVar74 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd50f8);
      auVar64[4] = uVar32;
      auVar64._0_4_ = fVar54;
      auVar64[5] = uVar33;
      auVar64[6] = uVar34;
      auVar64[7] = uVar35;
      auVar64[8] = uVar36;
      auVar64[9] = uVar37;
      auVar64[10] = uVar38;
      auVar64[0xb] = uVar39;
      auVar64[0xc] = uVar40;
      auVar64[0xd] = uVar41;
      auVar64[0xe] = uVar42;
      auVar64[0xf] = uVar43;
      uVar76 = a64_TBL(ZEXT816(0),auVar64,DAT_01cd5120);
      auVar70[4] = uVar32;
      auVar70._0_4_ = fVar54;
      auVar70[5] = uVar33;
      auVar70[6] = uVar34;
      auVar70[7] = uVar35;
      auVar70[8] = uVar36;
      auVar70[9] = uVar37;
      auVar70[10] = uVar38;
      auVar70[0xb] = uVar39;
      auVar70[0xc] = uVar40;
      auVar70[0xd] = uVar41;
      auVar70[0xe] = uVar42;
      auVar70[0xf] = uVar43;
      uVar18 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd4f90);
      fVar68 = (float)((ulong)uVar74 >> 0x20);
      uVar75 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5418);
      fVar22 = (float)((ulong)uVar62 >> 0x20);
      auVar1[4] = uVar32;
      auVar1._0_4_ = fVar54;
      auVar1[5] = uVar33;
      auVar1[6] = uVar34;
      auVar1[7] = uVar35;
      auVar1[8] = uVar36;
      auVar1[9] = uVar37;
      auVar1[10] = uVar38;
      auVar1[0xb] = uVar39;
      auVar1[0xc] = uVar40;
      auVar1[0xd] = uVar41;
      auVar1[0xe] = uVar42;
      auVar1[0xf] = uVar43;
      uVar72 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd50f8);
      auVar2[4] = uVar32;
      auVar2._0_4_ = fVar54;
      auVar2[5] = uVar33;
      auVar2[6] = uVar34;
      auVar2[7] = uVar35;
      auVar2[8] = uVar36;
      auVar2[9] = uVar37;
      auVar2[10] = uVar38;
      auVar2[0xb] = uVar39;
      auVar2[0xc] = uVar40;
      auVar2[0xd] = uVar41;
      auVar2[0xe] = uVar42;
      auVar2[0xf] = uVar43;
      uVar73 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5418);
      auVar3[4] = uVar32;
      auVar3._0_4_ = fVar54;
      auVar3[5] = uVar33;
      auVar3[6] = uVar34;
      auVar3[7] = uVar35;
      auVar3[8] = uVar36;
      auVar3[9] = uVar37;
      auVar3[10] = uVar38;
      auVar3[0xb] = uVar39;
      auVar3[0xc] = uVar40;
      auVar3[0xd] = uVar41;
      auVar3[0xe] = uVar42;
      auVar3[0xf] = uVar43;
      uVar29 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5270);
      auVar8._4_4_ = (int)(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar54)))
                                   ) >> 0x20);
      auVar8._0_4_ = fVar54;
      auVar8._8_4_ = fVar54;
      auVar8._12_4_ =
           (int)(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar54)))) >> 0x20)
      ;
      uVar23 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50b0);
      fVar63 = (float)*(undefined8 *)(lVar27 + 0xb0) - (float)*(undefined8 *)(lVar26 + 0xb0);
      fVar58 = (float)((ulong)*(undefined8 *)(lVar27 + 0xb0) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar26 + 0xb0) >> 0x20);
      fVar60 = (float)*(undefined8 *)(lVar27 + 0xb8) - (float)*(undefined8 *)(lVar26 + 0xb8);
      fVar71 = (float)((ulong)*(undefined8 *)(lVar27 + 0xb8) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar26 + 0xb8) >> 0x20);
      fVar66 = (float)((ulong)uVar75 >> 0x20);
      fVar52 = fVar63 * fVar63;
      fVar53 = fVar58 * fVar58;
      auVar9._4_4_ = fVar53;
      auVar9._0_4_ = fVar52;
      auVar9._8_4_ = fVar60 * fVar60;
      auVar9._12_4_ = fVar71 * fVar71;
      auVar10._4_4_ = fVar53;
      auVar10._0_4_ = fVar52;
      auVar10._8_4_ = fVar60 * fVar60;
      auVar10._12_4_ = fVar71 * fVar71;
      auVar64 = NEON_ext(auVar9,auVar10,8,1);
      fVar52 = auVar64._0_4_ + fVar52;
      fVar53 = auVar64._4_4_ + fVar53;
      fVar31 = fVar52 + fVar53;
      fVar52 = fVar52 + fVar53;
      fVar54 = ((float)uVar62 * fVar54 + fVar55 * fVar44 * (float)uVar18 +
               fVar55 * (float)uVar75 * (float)uVar72) - (float)uVar74 * (float)uVar73;
      fVar56 = (fVar22 * fVar56 + fVar57 * fVar47 * (float)((ulong)uVar18 >> 0x20) +
               fVar57 * fVar66 * (float)((ulong)uVar72 >> 0x20)) -
               fVar68 * (float)((ulong)uVar73 >> 0x20);
      fVar6 = ((float)uVar62 * fVar6 + fVar59 * (float)uVar74 * (float)uVar76 +
              fVar59 * fVar44 * (float)uVar23) - (float)uVar75 * (float)uVar29;
      fVar67 = (fVar22 * fVar67 + fVar61 * fVar68 * (float)((ulong)uVar76 >> 0x20) +
               fVar61 * fVar47 * (float)((ulong)uVar23 >> 0x20)) -
               fVar66 * (float)((ulong)uVar29 >> 0x20);
      auVar11._4_4_ = fVar52;
      auVar11._0_4_ = fVar31;
      auVar11._8_4_ = fVar31;
      auVar11._12_4_ = fVar52;
      auVar64 = NEON_frsqrte(auVar11,4);
      iVar48 = -(uint)(fVar31 == 0.0);
      iVar49 = -(uint)(fVar52 == 0.0);
      iVar50 = -(uint)(fVar31 == 0.0);
      iVar51 = -(uint)(fVar52 == 0.0);
      auVar69._0_4_ = auVar64._0_4_ * fVar31;
      auVar69._4_4_ = auVar64._4_4_ * fVar52;
      auVar69._8_4_ = auVar64._8_4_ * fVar31;
      auVar69._12_4_ = auVar64._12_4_ * fVar52;
      auVar70 = NEON_frsqrts(auVar64,auVar69,4);
      auVar65._0_4_ = auVar64._0_4_ * auVar70._0_4_;
      auVar65._4_4_ = auVar64._4_4_ * auVar70._4_4_;
      auVar65._8_4_ = auVar64._8_4_ * auVar70._8_4_;
      auVar65._12_4_ = auVar64._12_4_ * auVar70._12_4_;
      auVar7._4_4_ = fVar52 * auVar65._4_4_;
      auVar7._0_4_ = fVar31 * auVar65._0_4_;
      auVar7._8_4_ = fVar31 * auVar65._8_4_;
      auVar7._12_4_ = fVar52 * auVar65._12_4_;
      auVar64 = NEON_frsqrts(auVar65,auVar7,4);
      fVar63 = fVar63 * auVar65._0_4_ * auVar64._0_4_;
      fVar58 = fVar58 * auVar65._4_4_ * auVar64._4_4_;
      fVar60 = fVar60 * auVar65._8_4_ * auVar64._8_4_;
      fVar71 = fVar71 * auVar65._12_4_ * auVar64._12_4_;
      fVar54 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                               CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                        (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                        CONCAT11((byte)((uint)fVar54 >> 8) &
                                                 (byte)((ulong)DAT_01d4ab50 >> 8),
                                                 SUB41(fVar54,0) & (byte)DAT_01d4ab50)));
      auVar45._0_8_ =
           CONCAT17((byte)((uint)fVar56 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                    CONCAT16((byte)((uint)fVar56 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                             CONCAT15((byte)((uint)fVar56 >> 8) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                      CONCAT14(SUB41(fVar56,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20)
                                               ,fVar54))));
      auVar45[8] = SUB41(fVar6,0) & (byte)DAT_01d4ab58;
      auVar45[9] = (byte)((uint)fVar6 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
      auVar45[10] = (byte)((uint)fVar6 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
      auVar45[0xb] = (byte)((uint)fVar6 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
      auVar46[0xc] = SUB41(fVar67,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
      auVar46._0_12_ = auVar45;
      auVar46[0xd] = (byte)((uint)fVar67 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
      auVar46[0xe] = (byte)((uint)fVar67 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
      auVar46[0xf] = (byte)((uint)fVar67 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
      fVar54 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar63 >> 8) &
                                                  ~(byte)((uint)iVar48 >> 8),
                                                  SUB41(fVar63,0) & ~(byte)iVar48))) * fVar54;
      fVar63 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar58 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  SUB41(fVar58,0) & ~(byte)iVar49))) *
               (float)((ulong)auVar45._0_8_ >> 0x20);
      uVar32 = (undefined1)((uint)fVar63 >> 8);
      uVar33 = (undefined1)((uint)fVar63 >> 0x10);
      uVar34 = (undefined1)((uint)fVar63 >> 0x18);
      fVar56 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                               CONCAT12((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar60 >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  SUB41(fVar60,0) & ~(byte)iVar50))) * auVar45._8_4_
      ;
      uVar35 = (undefined1)((uint)fVar56 >> 8);
      uVar36 = (undefined1)((uint)fVar56 >> 0x10);
      uVar37 = (undefined1)((uint)fVar56 >> 0x18);
      fVar58 = (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                               CONCAT12((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar71 >> 8) &
                                                  ~(byte)((uint)iVar51 >> 8),
                                                  SUB41(fVar71,0) & ~(byte)iVar51))) *
               auVar46._12_4_;
      uVar38 = (undefined1)((uint)fVar58 >> 8);
      uVar39 = (undefined1)((uint)fVar58 >> 0x10);
      uVar40 = (undefined1)((uint)fVar58 >> 0x18);
      auVar4[4] = SUB41(fVar63,0);
      auVar4._0_4_ = fVar54;
      auVar4[5] = uVar32;
      auVar4[6] = uVar33;
      auVar4[7] = uVar34;
      auVar4[8] = SUB41(fVar56,0);
      auVar4[9] = uVar35;
      auVar4[10] = uVar36;
      auVar4[0xb] = uVar37;
      auVar4[0xc] = SUB41(fVar58,0);
      auVar4[0xd] = uVar38;
      auVar4[0xe] = uVar39;
      auVar4[0xf] = uVar40;
      auVar5[4] = SUB41(fVar63,0);
      auVar5._0_4_ = fVar54;
      auVar5[5] = uVar32;
      auVar5[6] = uVar33;
      auVar5[7] = uVar34;
      auVar5[8] = SUB41(fVar56,0);
      auVar5[9] = uVar35;
      auVar5[10] = uVar36;
      auVar5[0xb] = uVar37;
      auVar5[0xc] = SUB41(fVar58,0);
      auVar5[0xd] = uVar38;
      auVar5[0xe] = uVar39;
      auVar5[0xf] = uVar40;
      auVar64 = NEON_ext(auVar4,auVar5,8,1);
      if (0.0 < auVar64._0_4_ + fVar54 + auVar64._4_4_ + fVar63) {
        iVar48 = *(int *)((long)param_1 + 0x2c4);
        *(int *)((long)param_1 + 0x2c4) = iVar48 + 1;
        if (iVar48 < 0x5a) {
          (**(code **)(*param_1 + 0x98))(param_1);
          return 1;
        }
        FUN_00ac7ad0();
        fVar54 = *(float *)PTR_FloatPi_02715160;
        fVar56 = *(float *)PTR_FloatDegree180_027194f0;
        *(undefined4 *)((long)param_1 + 0x2c4) = 0;
        fVar63 = DAT_01d4bc98;
        *(byte *)((long)param_1 + 0x9c) = *(byte *)((long)param_1 + 0x9c) ^ 1;
        *(float *)(param_1 + 0x1d) =
             (float)CONCAT13(extraout_var_02,
                             CONCAT12(extraout_var_01,CONCAT11(extraout_var_00,extraout_var))) +
             (fVar54 / fVar56) * fVar63;
        lVar27 = param_1[0x13];
        FUN_00e746a0((char)DAT_01d4c5c0,param_1);
        fVar63 = *(float *)(param_1 + 0x13);
        *(int *)(param_1 + 0x13) = (int)lVar27;
        if (param_1[0x11] == 0) {
          local_38 = 0;
        }
        else {
          FUN_00e73550(&local_38);
          if (local_38 != 0) {
            if ((fVar63 <= 0.0) || (*(float *)(local_38 + 0x430) <= fVar63)) {
              FUN_00e73bb0(param_1);
              *(byte *)((long)param_1 + 0x9c) = *(byte *)((long)param_1 + 0x9c) ^ 1;
              *(undefined4 *)(param_1 + 0x1d) = 0;
              (**(code **)(*param_1 + 0x98))(param_1);
              uVar29 = 1;
            }
            else {
              uVar29 = 0;
              *(undefined1 *)((long)param_1 + 0x6a) = 0;
              *(undefined4 *)(param_1 + 0xc) = 10;
            }
            if (local_38 == 0) {
              return uVar29;
            }
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
            return uVar29;
          }
        }
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x2c4) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return 0;
}


