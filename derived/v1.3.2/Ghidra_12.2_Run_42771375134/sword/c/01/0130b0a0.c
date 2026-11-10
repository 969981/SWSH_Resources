/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130b0a0; name: FUN_0130b0a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0130b0a0(undefined4 param_1,long param_2,undefined1 (*param_3) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 (*pauVar25) [12];
  float fVar26;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar50;
  float fVar52;
  undefined1 auVar51 [16];
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  
  *(undefined1 *)(param_2 + 0x488) = 1;
  *(undefined4 *)(param_2 + 0x45c) = 0;
  *(undefined4 *)(param_2 + 0x484) = 0;
  *(undefined4 *)(param_2 + 0x480) = param_1;
  pauVar25 = (undefined1 (*) [12])FUN_012dc8d0();
  FUN_00a92cd0(DAT_01d4bb38,0,0);
  uVar24 = DAT_01cd5418;
  uVar29 = DAT_01cd5270;
  uVar28 = DAT_01cd5120;
  uVar30 = DAT_01cd50f8;
  uVar23 = DAT_01cd50b0;
  uVar27 = DAT_01cd4f90;
  uVar34 = (undefined4)((ulong)*(undefined8 *)(*pauVar25 + 8) >> 0x20);
  fVar26 = (float)*(undefined8 *)*pauVar25;
  fVar40 = (float)((ulong)*(undefined8 *)*pauVar25 >> 0x20);
  auVar17._4_4_ = extraout_var;
  auVar17._0_4_ = extraout_s0;
  auVar4._12_4_ = uVar34;
  auVar4._0_12_ = *pauVar25;
  uVar10 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
  fVar46 = (float)((ulong)uVar10 >> 0x20);
  auVar48._4_4_ = extraout_var;
  auVar48._0_4_ = extraout_s0;
  auVar48._8_4_ = extraout_var_00;
  auVar48._12_4_ = extraout_var_01;
  uVar47 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd4f90);
  auVar5._12_4_ = uVar34;
  auVar5._0_12_ = *pauVar25;
  uVar16 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  auVar51._4_4_ = extraout_var;
  auVar51._0_4_ = extraout_s0;
  auVar51._8_4_ = extraout_var_00;
  auVar51._12_4_ = extraout_var_01;
  uVar50 = a64_TBL(ZEXT816(0),auVar51,DAT_01cd5120);
  auVar6._12_4_ = uVar34;
  auVar6._0_12_ = *pauVar25;
  uVar41 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
  auVar17._12_4_ = extraout_var;
  auVar17._8_4_ = extraout_s0;
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_4_ = extraout_var_00;
  auVar1._12_4_ = extraout_var_01;
  uVar54 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd50f8);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_4_ = extraout_var_00;
  auVar2._12_4_ = extraout_var_01;
  uVar55 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5418);
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_4_ = extraout_var_00;
  auVar3._12_4_ = extraout_var_01;
  uVar56 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5270);
  fVar39 = (float)((ulong)uVar41 >> 0x20);
  uVar7 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50b0);
  fVar33 = (float)_UNK_01d4ae98;
  fVar35 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar31 = (float)_DAT_01d4ae90;
  fVar32 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar52 = (float)((ulong)uVar16 >> 0x20);
  fVar36 = (extraout_s0 * (float)uVar10 + fVar31 * fVar26 * (float)uVar47 +
           fVar31 * (float)uVar16 * (float)uVar54) - (float)uVar41 * (float)uVar55;
  fVar37 = (extraout_var * fVar46 + fVar32 * fVar40 * (float)((ulong)uVar47 >> 0x20) +
           fVar32 * fVar52 * (float)((ulong)uVar54 >> 0x20)) -
           fVar39 * (float)((ulong)uVar55 >> 0x20);
  fVar38 = (extraout_var_00 * (float)uVar10 + fVar33 * (float)uVar41 * (float)uVar50 +
           fVar33 * fVar26 * (float)uVar7) - (float)uVar16 * (float)uVar56;
  fVar39 = (extraout_var_01 * fVar46 + fVar35 * fVar39 * (float)((ulong)uVar50 >> 0x20) +
           fVar35 * fVar40 * (float)((ulong)uVar7 >> 0x20)) -
           fVar52 * (float)((ulong)uVar56 >> 0x20);
  auVar42._0_4_ = fVar36 * fVar36;
  auVar42._4_4_ = fVar37 * fVar37;
  auVar42._8_4_ = fVar38 * fVar38;
  auVar42._12_4_ = fVar39 * fVar39;
  fVar36 = fVar36 * (float)_DAT_01d4ae80;
  fVar37 = fVar37 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar38 = fVar38 * (float)_UNK_01d4ae88;
  fVar39 = fVar39 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar16 = *(undefined8 *)(*param_3 + 8);
  fVar53 = (float)((ulong)uVar16 >> 0x20);
  uVar10 = *(undefined8 *)*param_3;
  auVar22 = *param_3;
  auVar21 = *param_3;
  auVar20 = *param_3;
  auVar19 = *param_3;
  auVar18 = *param_3;
  fVar52 = (float)((ulong)uVar10 >> 0x20);
  *(undefined8 *)(param_2 + 0x438) = *(undefined8 *)(param_2 + 0x428);
  *(undefined8 *)(param_2 + 0x430) = *(undefined8 *)(param_2 + 0x420);
  *(undefined8 *)(param_2 + 0x478) = *(undefined8 *)(param_2 + 0x428);
  *(undefined8 *)(param_2 + 0x470) = *(undefined8 *)(param_2 + 0x420);
  auVar48 = NEON_ext(auVar42,auVar42,8,1);
  fVar40 = auVar48._0_4_ + auVar42._0_4_;
  fVar46 = auVar48._4_4_ + auVar42._4_4_;
  fVar26 = fVar40 + fVar46;
  fVar40 = fVar40 + fVar46;
  auVar43._8_8_ = CONCAT44(fVar40,fVar26);
  auVar43._0_8_ = CONCAT44(fVar40,fVar26);
  auVar48 = NEON_frecpe(auVar43,4);
  auVar11._12_4_ = fVar53;
  auVar11._0_12_ = auVar18;
  uVar41 = a64_TBL(ZEXT816(0),auVar11,uVar28);
  auVar51 = NEON_frecps(auVar48,auVar43,4);
  auVar12._12_4_ = fVar53;
  auVar12._0_12_ = auVar19;
  uVar54 = a64_TBL(ZEXT816(0),auVar12,uVar24);
  auVar49._0_4_ = auVar48._0_4_ * auVar51._0_4_;
  auVar49._4_4_ = auVar48._4_4_ * auVar51._4_4_;
  auVar49._8_4_ = auVar48._8_4_ * auVar51._8_4_;
  auVar49._12_4_ = auVar48._12_4_ * auVar51._12_4_;
  auVar13._12_4_ = fVar53;
  auVar13._0_12_ = auVar20;
  uVar47 = a64_TBL(ZEXT816(0),auVar13,uVar29);
  auVar48 = NEON_frecps(auVar49,auVar43,4);
  auVar44._0_4_ = -(uint)(fVar26 == 0.0);
  auVar44._4_4_ = -(uint)(fVar40 == 0.0);
  auVar44._8_4_ = -(uint)(fVar26 == 0.0);
  auVar44._12_4_ = -(uint)(fVar40 == 0.0);
  auVar14._12_4_ = fVar53;
  auVar14._0_12_ = auVar21;
  uVar50 = a64_TBL(ZEXT816(0),auVar14,uVar27);
  auVar45._0_4_ = fVar36 * auVar49._0_4_ * auVar48._0_4_;
  auVar45._4_4_ = fVar37 * auVar49._4_4_ * auVar48._4_4_;
  auVar45._8_4_ = fVar38 * auVar49._8_4_ * auVar48._8_4_;
  auVar45._12_4_ = fVar39 * auVar49._12_4_ * auVar48._12_4_;
  auVar8._4_4_ = fVar37;
  auVar8._0_4_ = fVar36;
  auVar8._8_4_ = fVar38;
  auVar8._12_4_ = fVar39;
  auVar45 = auVar45 ^ (auVar45 ^ auVar8) & auVar44;
  uVar27 = a64_TBL(ZEXT816(0),auVar45,uVar27);
  uVar29 = a64_TBL(ZEXT816(0),auVar45,uVar30);
  uVar28 = a64_TBL(ZEXT816(0),auVar45,uVar24);
  auVar15._12_4_ = fVar53;
  auVar15._0_12_ = auVar22;
  uVar30 = a64_TBL(ZEXT816(0),auVar15,uVar30);
  auVar9._8_4_ = (float)uVar10;
  auVar9._0_8_ = uVar10;
  auVar9._12_4_ = fVar52;
  uVar7 = a64_TBL(ZEXT816(0),auVar9,uVar23);
  fVar26 = (float)((ulong)uVar27 >> 0x20);
  fVar39 = (float)((ulong)uVar29 >> 0x20);
  fVar40 = (float)((ulong)uVar28 >> 0x20);
  *(ulong *)(param_2 + 0x468) =
       CONCAT44((fVar53 * fVar26 + fVar35 * fVar39 * (float)((ulong)uVar41 >> 0x20) +
                fVar35 * auVar45._4_4_ * (float)((ulong)uVar7 >> 0x20)) -
                fVar40 * (float)((ulong)uVar47 >> 0x20),
                ((float)uVar16 * (float)uVar27 + fVar33 * (float)uVar29 * (float)uVar41 +
                fVar33 * auVar45._0_4_ * (float)uVar7) - (float)uVar28 * (float)uVar47);
  *(ulong *)(param_2 + 0x460) =
       CONCAT44((fVar52 * fVar26 + fVar32 * auVar45._4_4_ * (float)((ulong)uVar50 >> 0x20) +
                fVar32 * fVar40 * (float)((ulong)uVar30 >> 0x20)) -
                fVar39 * (float)((ulong)uVar54 >> 0x20),
                ((float)uVar10 * (float)uVar27 + fVar31 * auVar45._0_4_ * (float)uVar50 +
                fVar31 * (float)uVar28 * (float)uVar30) - (float)uVar29 * (float)uVar54);
  return;
}


