/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0027f550; name: FUN_0027f550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0027f550(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  undefined *local_2b0 [4];
  undefined8 *local_290;
  undefined8 *puStack_288;
  undefined8 *local_280;
  undefined1 local_278;
  undefined8 *local_270;
  undefined8 local_260;
  ulong uStack_258;
  float local_250;
  float fStack_24c;
  float local_248;
  undefined8 local_244;
  undefined1 local_23c;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 local_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined1 local_1b8;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [104];
  undefined1 auStack_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_70 = param_3[2];
  uStack_78 = param_3[1];
  local_80 = *param_3;
  lVar10 = *(long *)(param_1 + 0x30);
  uVar9 = *param_6;
  uStack_68 = (ulong)*(uint *)(param_3 + 3);
  if ((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) {
    bVar6 = *(float *)(param_2 + 0xc) == 1.0;
  }
  else {
    bVar6 = false;
  }
  local_d0 = 0x3f800000;
  uStack_c8 = 0;
  local_90 = 0x3f80000000000000;
  local_c0 = 0x3f800000;
  uStack_b8 = 0;
  local_88 = 0;
  local_b0 = 0x3f8000003f800000;
  uStack_a8 = 0;
  local_a0 = 0x3f80000000000000;
  uStack_98 = 0;
  if (!bVar6) {
    FUN_001b0f90(&local_d0,(float *)(param_2 + 4),param_2 + 0x10);
  }
  local_100 = 0x3f8000003f800000;
  local_120 = 0x3f800000;
  uStack_118 = 0;
  local_f8 = 0;
  local_110 = 0x3f800000;
  uStack_108 = 0;
  local_f0 = 0x3f80000000000000;
  local_e8 = 0;
  local_e0 = 0x3f80000000000000;
  local_d8 = 0;
  uVar8 = FUN_0028b5e0(param_1,&local_120,auStack_138,auStack_1a0);
  pauVar1 = (undefined1 (*) [12])(param_1 + 4);
  fVar13 = (float)*(undefined8 *)(param_1 + 0xc);
  fVar11 = (float)*(undefined8 *)*pauVar1;
  fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar5 = *(undefined1 (*) [12])(lVar10 + 0x3c);
  fVar31 = fVar13 * auVar5._8_4_;
  uVar27 = NEON_fminp(CONCAT44(fVar31,fVar31),CONCAT44(fVar12 * auVar5._4_4_,fVar11 * auVar5._0_4_),
                      4);
  uVar27 = NEON_fminp(uVar27,uVar27,4);
  uVar34 = NEON_fmov(0x3e800000,4);
  local_248 = (float)uVar27;
  local_1a8 = NEON_fmin(CONCAT44((float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar34 >> 0x20),
                                 local_248 * (float)uVar34),
                        CONCAT44((float)param_5[2] * DAT_01d4c158,(float)param_5[2] * DAT_01d4c158),
                        4);
  local_23c = 0;
  local_244 = 0x7f7fffff;
  local_260 = 0;
  uStack_258 = 0;
  local_1c0 = *(long *)(lVar10 + 0x28) + (ulong)*(byte *)(lVar10 + 0x27) * 0x14;
  local_250 = DAT_01d4bec4 * local_248;
  fStack_24c = DAT_01d4c158 * local_248;
  local_1b8 = *(undefined1 *)(lVar10 + 0x26);
  local_248 = DAT_01d4bb3c * local_248;
  local_270 = &local_260;
  puStack_288 = &local_230;
  local_280 = &uStack_200;
  local_1d0 = lVar10;
  if ((uVar8 & 1) == 0) {
    auVar15._12_4_ = 0;
    auVar15._0_12_ = *pauVar1;
    auVar15 = NEON_frecpe(auVar15,4);
    auVar28._12_4_ = 0;
    auVar28._0_12_ = *pauVar1;
    auVar28 = NEON_frecps(auVar15,auVar28,4);
    auVar16._0_4_ = auVar15._0_4_ * auVar28._0_4_;
    auVar16._4_4_ = auVar15._4_4_ * auVar28._4_4_;
    auVar16._8_4_ = auVar15._8_4_ * auVar28._8_4_;
    auVar16._12_4_ = auVar15._12_4_ * auVar28._12_4_;
    auVar2._12_4_ = 0;
    auVar2._0_12_ = *pauVar1;
    auVar15 = NEON_frecps(auVar16,auVar2,4);
    auVar17._0_4_ = auVar16._0_4_ * auVar15._0_4_;
    auVar17._4_4_ = auVar16._4_4_ * auVar15._4_4_;
    auVar17._8_4_ = auVar16._8_4_ * auVar15._8_4_;
    auVar17._12_4_ = auVar16._12_4_ * auVar15._12_4_;
    auVar3._12_4_ = 0;
    auVar3._0_12_ = *pauVar1;
    auVar15 = NEON_frecps(auVar17,auVar3,4);
    auVar18._0_4_ = auVar17._0_4_ * auVar15._0_4_;
    auVar18._4_4_ = auVar17._4_4_ * auVar15._4_4_;
    auVar18._8_4_ = auVar17._8_4_ * auVar15._8_4_;
    auVar18._12_4_ = auVar17._12_4_ * auVar15._12_4_;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = *pauVar1;
    auVar15 = NEON_frecps(auVar18,auVar4,4);
    fVar31 = auVar18._0_4_ * auVar15._0_4_;
    fVar19 = auVar18._4_4_ * auVar15._4_4_;
    fVar20 = auVar18._8_4_ * auVar15._8_4_;
    auVar29._4_4_ = -(uint)(fVar11 == fVar12);
    auVar29._0_4_ = 0xffffffff;
    auVar29._8_4_ = -(uint)(fVar11 == fVar13);
    auVar29._12_4_ = 0xffffffff;
    NEON_ext(auVar29,auVar29,8,1);
    if (CONCAT12((char)auVar29._8_4_,CONCAT11((char)auVar29._4_4_,0xff)) == -1) {
      auVar33._0_4_ = fVar11 * (float)_DAT_01d4ae50;
      fVar14 = (float)((ulong)_DAT_01d4ae50 >> 0x20);
      auVar33._4_4_ = fVar12 * fVar14;
      auVar33._8_4_ = fVar13 * (float)_UNK_01d4ae58;
      fVar21 = (float)((ulong)_UNK_01d4ae58 >> 0x20);
      auVar33._12_4_ = fVar21 * 0.0;
      auVar30._0_4_ = fVar11 * (float)_DAT_01d4b580;
      fVar22 = (float)((ulong)_DAT_01d4b580 >> 0x20);
      auVar30._4_4_ = fVar12 * fVar22;
      auVar30._8_4_ = fVar13 * (float)_UNK_01d4b588;
      fVar23 = (float)((ulong)_UNK_01d4b588 >> 0x20);
      auVar30._12_4_ = fVar23 * 0.0;
      uStack_200 = CONCAT44(fVar19 * fVar14,fVar31 * (float)_DAT_01d4ae50);
      uStack_1f8 = CONCAT44(fVar21 * 0.0,fVar20 * (float)_UNK_01d4ae58);
      local_1f0 = CONCAT44(fVar19 * fVar22,fVar31 * (float)_DAT_01d4b580);
      uStack_1e8 = CONCAT44(fVar23 * 0.0,fVar20 * (float)_UNK_01d4b588);
      fVar11 = fVar11 * (float)_DAT_01d49dc0;
      fVar22 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
      fVar12 = fVar12 * fVar22;
      fVar13 = fVar13 * (float)_UNK_01d49dc8;
      fVar21 = (float)((ulong)_UNK_01d49dc8 >> 0x20);
      fVar14 = fVar21 * 0.0;
      fVar31 = fVar31 * (float)_DAT_01d49dc0;
      fVar19 = fVar19 * fVar22;
      fVar20 = fVar20 * (float)_UNK_01d49dc8;
      fVar21 = fVar21 * 0.0;
    }
    else {
      fVar14 = (float)*(undefined8 *)(param_1 + 0x10);
      fVar35 = fVar14 + fVar14;
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
      fVar37 = fVar21 + fVar21;
      fVar24 = (float)*(undefined8 *)(param_1 + 0x18);
      fVar38 = fVar24 + fVar24;
      fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
      fVar23 = fVar21 * fVar37;
      fVar25 = fVar24 * fVar38;
      uVar34 = NEON_fmov(0x3f800000,4);
      fVar22 = fVar24 * fVar35 - fVar26 * fVar37;
      fVar36 = fVar24 * fVar37 + fVar26 * fVar35;
      fVar39 = (float)uVar34 - fVar14 * fVar35;
      fVar42 = (float)((ulong)uVar34 >> 0x20);
      uVar27 = NEON_ext(CONCAT44(fVar24 * fVar35 + fVar26 * fVar37,fVar24 * fVar35 + fVar26 * fVar37
                                ),
                        CONCAT44(fVar24 * fVar37 - fVar26 * fVar35,fVar24 * fVar37 - fVar26 * fVar35
                                ),4,1);
      fVar40 = fVar39 - fVar23;
      uVar32 = NEON_ext(CONCAT44((fVar42 - fVar23) - fVar25,((float)uVar34 - fVar23) - fVar25),
                        CONCAT44(fVar21 * fVar35 + fVar26 * fVar38,fVar21 * fVar35 + fVar26 * fVar38
                                ),4,1);
      uVar34 = NEON_ext(CONCAT44(fVar21 * fVar35 - fVar26 * fVar38,fVar21 * fVar35 - fVar26 * fVar38
                                ),CONCAT44((fVar42 - fVar14 * fVar35) - fVar25,fVar39 - fVar25),4,1)
      ;
      fVar25 = (float)((ulong)uVar34 >> 0x20);
      fVar26 = (float)uVar32;
      fVar23 = (float)uVar27;
      fVar24 = (float)((ulong)uVar27 >> 0x20);
      uVar41 = NEON_ext(CONCAT44(fVar26,fVar26),uVar34,4,1);
      uVar48 = NEON_ext(uVar32,CONCAT44(fVar25,fVar25),4,1);
      uVar27 = NEON_ext(CONCAT44(fVar22,fVar22),(ulong)(uint)fVar36,4,1);
      fVar14 = (float)uVar41 * fVar11;
      fVar42 = (float)((ulong)uVar41 >> 0x20);
      fVar37 = fVar42 * fVar11;
      fVar38 = fVar23 * fVar11;
      fVar44 = (float)uVar48 * fVar12;
      fVar49 = (float)((ulong)uVar48 >> 0x20);
      fVar45 = fVar49 * fVar12;
      fVar46 = fVar24 * fVar12;
      fVar11 = (float)uVar27 * fVar13;
      fVar21 = (float)((ulong)uVar27 >> 0x20);
      fVar12 = fVar21 * fVar13;
      fVar13 = fVar40 * fVar13;
      fVar39 = (float)uVar41 * fVar31;
      fVar42 = fVar42 * fVar31;
      fVar43 = fVar23 * fVar31;
      fVar47 = (float)uVar48 * fVar19;
      fVar49 = fVar49 * fVar19;
      fVar50 = fVar24 * fVar19;
      fVar31 = (float)uVar27 * fVar20;
      fVar21 = fVar21 * fVar20;
      fVar20 = fVar40 * fVar20;
      fVar35 = (float)((ulong)uVar32 >> 0x20);
      fVar19 = (float)uVar34;
      auVar33._0_4_ = fVar11 * fVar22 + fVar14 * fVar26 + fVar44 * fVar35;
      auVar33._4_4_ = fVar12 * fVar22 + fVar37 * fVar26 + fVar45 * fVar35;
      auVar33._8_4_ = fVar13 * fVar22 + fVar38 * fVar26 + fVar46 * fVar35;
      auVar33._12_4_ = 0.0;
      auVar30._0_4_ = fVar11 * fVar36 + fVar14 * fVar19 + fVar44 * fVar25;
      auVar30._4_4_ = fVar12 * fVar36 + fVar37 * fVar19 + fVar45 * fVar25;
      auVar30._8_4_ = fVar13 * fVar36 + fVar38 * fVar19 + fVar46 * fVar25;
      auVar30._12_4_ = 0.0;
      fVar11 = fVar11 * fVar40 + fVar14 * fVar23 + fVar44 * fVar24;
      fVar12 = fVar12 * fVar40 + fVar37 * fVar23 + fVar45 * fVar24;
      fVar13 = fVar13 * fVar40 + fVar38 * fVar23 + fVar46 * fVar24;
      fVar14 = 0.0;
      uStack_200 = CONCAT44(fVar21 * fVar22 + fVar42 * fVar26 + fVar49 * fVar35,
                            fVar31 * fVar22 + fVar39 * fVar26 + fVar47 * fVar35);
      uStack_1f8 = (ulong)(uint)(fVar20 * fVar22 + fVar43 * fVar26 + fVar50 * fVar35);
      local_1f0 = CONCAT44(fVar21 * fVar36 + fVar42 * fVar19 + fVar49 * fVar25,
                           fVar31 * fVar36 + fVar39 * fVar19 + fVar47 * fVar25);
      uStack_1e8 = (ulong)(uint)(fVar20 * fVar36 + fVar43 * fVar19 + fVar50 * fVar25);
      fVar31 = fVar31 * fVar40 + fVar39 * fVar23 + fVar47 * fVar24;
      fVar19 = fVar21 * fVar40 + fVar42 * fVar23 + fVar49 * fVar24;
      fVar20 = fVar20 * fVar40 + fVar43 * fVar23 + fVar50 * fVar24;
      fVar21 = 0.0;
    }
    uStack_1d8 = CONCAT44(fVar21,fVar20);
    uStack_1e0 = CONCAT44(fVar19,fVar31);
    uStack_208 = CONCAT44(fVar14,fVar13);
    local_210 = CONCAT44(fVar12,fVar11);
    uStack_228 = auVar33._8_8_;
    local_230 = auVar33._0_8_;
    uStack_218 = auVar30._8_8_;
    uStack_220 = auVar30._0_8_;
    local_260 = CONCAT44(fVar12 * 0.0 + auVar30._4_4_ * 0.0 + auVar33._4_4_ * 0.0,
                         fVar11 * 0.0 + auVar30._0_4_ * 0.0 + auVar33._0_4_ * 0.0);
    uStack_258 = (ulong)(uint)(fVar13 * 0.0 + auVar30._8_4_ * 0.0 + auVar33._8_4_ * 0.0);
    local_1c8 = *(undefined8 *)(lVar10 + 0x30);
    local_290 = &local_80;
    local_278 = 0;
    local_2b0[0] = PTR_DAT_02711eb8 + 0x10;
    local_270 = &local_260;
                    /* try { // try from 0027fa58 to 0027fa8f has its CatchHandler @ 0027fab4 */
    uVar7 = FUN_0027eac0(*param_5,auStack_1a0,local_2b0,&local_1a8,auStack_138,param_2,param_3,
                         param_4,param_7,&local_120,&local_d0,0,bVar6,uVar9,param_8);
  }
  else {
    uStack_228 = _UNK_01d4ae58;
    local_230 = _DAT_01d4ae50;
    uStack_218 = _UNK_01d4b588;
    uStack_220 = _DAT_01d4b580;
    uStack_208 = _UNK_01d49dc8;
    local_210 = _DAT_01d49dc0;
    uStack_1f8 = _UNK_01d4ae58;
    uStack_200 = _DAT_01d4ae50;
    uStack_1e8 = _UNK_01d4b588;
    local_1f0 = _DAT_01d4b580;
    uStack_1d8 = _UNK_01d49dc8;
    uStack_1e0 = _DAT_01d49dc0;
    local_1c8 = *(undefined8 *)(lVar10 + 0x30);
    local_290 = &local_80;
    local_278 = 1;
    local_2b0[0] = PTR_DAT_02711ec0 + 0x10;
                    /* try { // try from 0027f774 to 0027f7a7 has its CatchHandler @ 0027fab8 */
    uVar7 = FUN_0027eac0(*param_5,auStack_1a0,local_2b0,&local_1a8,auStack_138,param_2,param_3,
                         param_4,param_7,&local_120,&local_d0,1,bVar6,uVar9,param_8);
  }
  return uVar7 & 1;
}


