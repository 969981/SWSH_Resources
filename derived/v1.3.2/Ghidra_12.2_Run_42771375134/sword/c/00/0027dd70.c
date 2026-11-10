/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0027dd70; name: FUN_0027dd70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0027dd70(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  undefined *local_260 [4];
  undefined8 *local_240;
  undefined8 *puStack_238;
  undefined8 *local_230;
  undefined1 local_228;
  undefined8 *local_220;
  undefined8 local_210;
  ulong uStack_208;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  undefined8 local_1f4;
  undefined1 local_1ec;
  undefined8 local_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long local_180;
  undefined8 local_178;
  long local_170;
  undefined1 local_168;
  undefined8 local_158;
  undefined1 auStack_150 [104];
  undefined1 auStack_e8 [24];
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
  uStack_68 = (ulong)*(uint *)(param_3 + 3);
  uStack_78 = param_3[1];
  local_80 = *param_3;
  lVar9 = *(long *)(param_1 + 0x30);
  uVar8 = *param_6;
  local_d0 = 0x3f800000;
  uStack_c8 = 0;
  local_c0 = 0x3f800000;
  uStack_b8 = 0;
  local_b0 = 0x3f8000003f800000;
  uStack_a8 = 0;
  local_90 = 0x3f80000000000000;
  local_a0 = 0x3f80000000000000;
  uStack_98 = 0;
  local_88 = 0;
  uVar7 = FUN_0028b5e0(param_1,&local_d0,auStack_e8,auStack_150);
  pauVar1 = (undefined1 (*) [12])(param_1 + 4);
  fVar12 = (float)*(undefined8 *)(param_1 + 0xc);
  fVar10 = (float)*(undefined8 *)*pauVar1;
  fVar11 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar20 = fVar12 * *(float *)(lVar9 + 0x44);
  uVar14 = NEON_fminp(CONCAT44(fVar20,fVar20),
                      CONCAT44(fVar11 * (float)((ulong)*(undefined8 *)(lVar9 + 0x3c) >> 0x20),
                               fVar10 * (float)*(undefined8 *)(lVar9 + 0x3c)),4);
  uVar14 = NEON_fminp(uVar14,uVar14,4);
  uVar33 = NEON_fmov(0x3e800000,4);
  local_1f8 = (float)uVar14;
  local_158 = NEON_fmin(CONCAT44((float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar33 >> 0x20),
                                 local_1f8 * (float)uVar33),
                        CONCAT44((float)param_5[2] * DAT_01d4c158,(float)param_5[2] * DAT_01d4c158),
                        4);
  if ((fVar10 == 1.0) && (*(float *)(param_1 + 8) == 1.0)) {
    bVar5 = *(float *)(param_1 + 0xc) == 1.0;
  }
  else {
    bVar5 = false;
  }
  local_1ec = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1f4 = 0x7f7fffff;
  fStack_1fc = DAT_01d4c158 * local_1f8;
  local_170 = *(long *)(lVar9 + 0x28) + (ulong)*(byte *)(lVar9 + 0x27) * 0x14;
  local_200 = DAT_01d4bec4 * local_1f8;
  local_168 = *(undefined1 *)(lVar9 + 0x26);
  local_1f8 = DAT_01d4bb3c * local_1f8;
  puStack_238 = &local_1e0;
  local_230 = &uStack_1b0;
  if (bVar5) {
    local_178 = *(undefined8 *)(lVar9 + 0x30);
    uStack_1d0 = _DAT_01d4b580;
    uStack_1c8 = _UNK_01d4b588;
    local_1e0 = _DAT_01d4ae50;
    uStack_1d8 = _UNK_01d4ae58;
    local_1c0 = _DAT_01d49dc0;
    uStack_1b8 = _UNK_01d49dc8;
    uStack_1b0 = _DAT_01d4ae50;
    uStack_1a8 = _UNK_01d4ae58;
    local_1a0 = _DAT_01d4b580;
    uStack_198 = _UNK_01d4b588;
    uStack_190 = _DAT_01d49dc0;
    uStack_188 = _UNK_01d49dc8;
  }
  else {
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
    fVar20 = auVar18._0_4_ * auVar15._0_4_;
    fVar19 = auVar18._4_4_ * auVar15._4_4_;
    fVar21 = auVar18._8_4_ * auVar15._8_4_;
    auVar29._4_4_ = -(uint)(fVar10 == fVar11);
    auVar29._0_4_ = 0xffffffff;
    auVar29._8_4_ = -(uint)(fVar10 == fVar12);
    auVar29._12_4_ = 0xffffffff;
    NEON_ext(auVar29,auVar29,8,1);
    if (CONCAT12((char)auVar29._8_4_,CONCAT11((char)auVar29._4_4_,0xff)) == -1) {
      auVar32._0_4_ = fVar10 * (float)_DAT_01d4ae50;
      fVar13 = (float)((ulong)_DAT_01d4ae50 >> 0x20);
      auVar32._4_4_ = fVar11 * fVar13;
      auVar32._8_4_ = fVar12 * (float)_UNK_01d4ae58;
      fVar22 = (float)(_UNK_01d4ae58 >> 0x20);
      auVar32._12_4_ = fVar22 * 0.0;
      auVar30._0_4_ = fVar10 * (float)_DAT_01d4b580;
      fVar23 = (float)((ulong)_DAT_01d4b580 >> 0x20);
      auVar30._4_4_ = fVar11 * fVar23;
      auVar30._8_4_ = fVar12 * (float)_UNK_01d4b588;
      fVar24 = (float)(_UNK_01d4b588 >> 0x20);
      auVar30._12_4_ = fVar24 * 0.0;
      uStack_1b0 = CONCAT44(fVar19 * fVar13,fVar20 * (float)_DAT_01d4ae50);
      uStack_1a8 = CONCAT44(fVar22 * 0.0,fVar21 * (float)_UNK_01d4ae58);
      local_1a0 = CONCAT44(fVar19 * fVar23,fVar20 * (float)_DAT_01d4b580);
      uStack_198 = CONCAT44(fVar24 * 0.0,fVar21 * (float)_UNK_01d4b588);
      fVar10 = fVar10 * (float)_DAT_01d49dc0;
      fVar23 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
      fVar11 = fVar11 * fVar23;
      fVar12 = fVar12 * (float)_UNK_01d49dc8;
      fVar22 = (float)((ulong)_UNK_01d49dc8 >> 0x20);
      fVar13 = fVar22 * 0.0;
      fVar20 = fVar20 * (float)_DAT_01d49dc0;
      fVar19 = fVar19 * fVar23;
      fVar21 = fVar21 * (float)_UNK_01d49dc8;
      fVar22 = fVar22 * 0.0;
    }
    else {
      fVar13 = (float)*(undefined8 *)(param_1 + 0x10);
      fVar34 = fVar13 + fVar13;
      fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
      fVar36 = fVar22 + fVar22;
      fVar25 = (float)*(undefined8 *)(param_1 + 0x18);
      fVar37 = fVar25 + fVar25;
      fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
      fVar24 = fVar22 * fVar36;
      fVar26 = fVar25 * fVar37;
      uVar33 = NEON_fmov(0x3f800000,4);
      fVar23 = fVar25 * fVar34 - fVar27 * fVar36;
      fVar35 = fVar25 * fVar36 + fVar27 * fVar34;
      fVar38 = (float)uVar33 - fVar13 * fVar34;
      fVar41 = (float)((ulong)uVar33 >> 0x20);
      uVar14 = NEON_ext(CONCAT44(fVar25 * fVar34 + fVar27 * fVar36,fVar25 * fVar34 + fVar27 * fVar36
                                ),
                        CONCAT44(fVar25 * fVar36 - fVar27 * fVar34,fVar25 * fVar36 - fVar27 * fVar34
                                ),4,1);
      fVar39 = fVar38 - fVar24;
      uVar31 = NEON_ext(CONCAT44((fVar41 - fVar24) - fVar26,((float)uVar33 - fVar24) - fVar26),
                        CONCAT44(fVar22 * fVar34 + fVar27 * fVar37,fVar22 * fVar34 + fVar27 * fVar37
                                ),4,1);
      uVar33 = NEON_ext(CONCAT44(fVar22 * fVar34 - fVar27 * fVar37,fVar22 * fVar34 - fVar27 * fVar37
                                ),CONCAT44((fVar41 - fVar13 * fVar34) - fVar26,fVar38 - fVar26),4,1)
      ;
      fVar26 = (float)((ulong)uVar33 >> 0x20);
      fVar27 = (float)uVar31;
      fVar24 = (float)uVar14;
      fVar25 = (float)((ulong)uVar14 >> 0x20);
      uVar40 = NEON_ext(CONCAT44(fVar27,fVar27),uVar33,4,1);
      uVar47 = NEON_ext(uVar31,CONCAT44(fVar26,fVar26),4,1);
      uVar14 = NEON_ext(CONCAT44(fVar23,fVar23),(ulong)(uint)fVar35,4,1);
      fVar13 = (float)uVar40 * fVar10;
      fVar41 = (float)((ulong)uVar40 >> 0x20);
      fVar36 = fVar41 * fVar10;
      fVar37 = fVar24 * fVar10;
      fVar43 = (float)uVar47 * fVar11;
      fVar48 = (float)((ulong)uVar47 >> 0x20);
      fVar44 = fVar48 * fVar11;
      fVar45 = fVar25 * fVar11;
      fVar10 = (float)uVar14 * fVar12;
      fVar22 = (float)((ulong)uVar14 >> 0x20);
      fVar11 = fVar22 * fVar12;
      fVar12 = fVar39 * fVar12;
      fVar38 = (float)uVar40 * fVar20;
      fVar41 = fVar41 * fVar20;
      fVar42 = fVar24 * fVar20;
      fVar46 = (float)uVar47 * fVar19;
      fVar48 = fVar48 * fVar19;
      fVar49 = fVar25 * fVar19;
      fVar20 = (float)uVar14 * fVar21;
      fVar22 = fVar22 * fVar21;
      fVar21 = fVar39 * fVar21;
      fVar34 = (float)((ulong)uVar31 >> 0x20);
      fVar19 = (float)uVar33;
      auVar32._0_4_ = fVar10 * fVar23 + fVar13 * fVar27 + fVar43 * fVar34;
      auVar32._4_4_ = fVar11 * fVar23 + fVar36 * fVar27 + fVar44 * fVar34;
      auVar32._8_4_ = fVar12 * fVar23 + fVar37 * fVar27 + fVar45 * fVar34;
      auVar32._12_4_ = 0.0;
      auVar30._0_4_ = fVar10 * fVar35 + fVar13 * fVar19 + fVar43 * fVar26;
      auVar30._4_4_ = fVar11 * fVar35 + fVar36 * fVar19 + fVar44 * fVar26;
      auVar30._8_4_ = fVar12 * fVar35 + fVar37 * fVar19 + fVar45 * fVar26;
      auVar30._12_4_ = 0.0;
      fVar10 = fVar10 * fVar39 + fVar13 * fVar24 + fVar43 * fVar25;
      fVar11 = fVar11 * fVar39 + fVar36 * fVar24 + fVar44 * fVar25;
      fVar12 = fVar12 * fVar39 + fVar37 * fVar24 + fVar45 * fVar25;
      fVar13 = 0.0;
      uStack_1b0 = CONCAT44(fVar22 * fVar23 + fVar41 * fVar27 + fVar48 * fVar34,
                            fVar20 * fVar23 + fVar38 * fVar27 + fVar46 * fVar34);
      uStack_1a8 = (ulong)(uint)(fVar21 * fVar23 + fVar42 * fVar27 + fVar49 * fVar34);
      local_1a0 = CONCAT44(fVar22 * fVar35 + fVar41 * fVar19 + fVar48 * fVar26,
                           fVar20 * fVar35 + fVar38 * fVar19 + fVar46 * fVar26);
      uStack_198 = (ulong)(uint)(fVar21 * fVar35 + fVar42 * fVar19 + fVar49 * fVar26);
      fVar20 = fVar20 * fVar39 + fVar38 * fVar24 + fVar46 * fVar25;
      fVar19 = fVar22 * fVar39 + fVar41 * fVar24 + fVar48 * fVar25;
      fVar21 = fVar21 * fVar39 + fVar42 * fVar24 + fVar49 * fVar25;
      fVar22 = 0.0;
    }
    uStack_188 = CONCAT44(fVar22,fVar21);
    uStack_190 = CONCAT44(fVar19,fVar20);
    uStack_1b8 = CONCAT44(fVar13,fVar12);
    local_1c0 = CONCAT44(fVar11,fVar10);
    uStack_1d8 = auVar32._8_8_;
    local_1e0 = auVar32._0_8_;
    uStack_1c8 = auVar30._8_8_;
    uStack_1d0 = auVar30._0_8_;
    local_210 = CONCAT44(fVar11 * 0.0 + auVar30._4_4_ * 0.0 + auVar32._4_4_ * 0.0,
                         fVar10 * 0.0 + auVar30._0_4_ * 0.0 + auVar32._0_4_ * 0.0);
    uStack_208 = (ulong)(uint)(fVar12 * 0.0 + auVar30._8_4_ * 0.0 + auVar32._8_4_ * 0.0);
    local_178 = *(undefined8 *)(lVar9 + 0x30);
  }
  local_180 = lVar9;
  if ((uVar7 & 1) == 0) {
    local_240 = &local_80;
    local_260[0] = PTR_DAT_02711eb8 + 0x10;
    local_220 = &local_210;
    local_228 = 0;
                    /* try { // try from 0027df58 to 0027df8b has its CatchHandler @ 0027e2a0 */
    uVar6 = FUN_0027d300(*param_5,auStack_150,local_260,&local_158,auStack_e8,param_2,param_3,
                         param_4,param_7,&local_d0,0,uVar8,param_8);
  }
  else {
    local_240 = &local_80;
    local_260[0] = PTR_DAT_02711ec0 + 0x10;
    local_228 = 1;
    local_220 = &local_210;
                    /* try { // try from 0027e244 to 0027e277 has its CatchHandler @ 0027e29c */
    uVar6 = FUN_0027d300(*param_5,auStack_150,local_260,&local_158,auStack_e8,param_2,param_3,
                         param_4,param_7,&local_d0,1,uVar8,param_8);
  }
  return uVar6 & 1;
}


