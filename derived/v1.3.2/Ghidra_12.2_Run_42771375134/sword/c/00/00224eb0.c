/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00224eb0; name: FUN_00224eb0
 */


undefined4
FUN_00224eb0(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4,float *param_5,
            float *param_6,float *param_7,undefined8 param_8,long param_9,long param_10,
            byte param_11,byte param_12)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  float *pfVar15;
  long lVar16;
  float *pfVar17;
  long lVar18;
  int iVar19;
  float *pfVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  byte *pbVar24;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStack_350 [24];
  undefined8 local_338;
  undefined8 uStack_330;
  long local_328;
  undefined8 local_320;
  float *local_318;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  uint local_2f8;
  uint local_2f4;
  float *local_2f0;
  float *local_2e8;
  float *local_2e0;
  uint local_2d8;
  uint local_2d4;
  float local_2d0 [10];
  float local_2a8 [10];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  float local_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  
  puVar11 = auStack_350;
  fVar25 = *param_5;
  fVar26 = param_5[1];
  fVar29 = fVar25 + fVar25;
  fVar27 = param_5[2];
  fVar28 = param_5[3];
  fVar30 = fVar26 + fVar26;
  local_c0 = fVar27 * (fVar27 + fVar27);
  fStack_c4 = (fVar27 + fVar27) * fVar28;
  local_b0 = 1.0 - fVar25 * fVar29;
  local_d0 = (1.0 - fVar26 * fVar30) - local_c0;
  fStack_cc = fVar29 * fVar26 + fStack_c4;
  local_c8 = fVar29 * fVar27 - fVar30 * fVar28;
  fStack_c4 = fVar29 * fVar26 - fStack_c4;
  local_b8 = fVar29 * fVar27 + fVar30 * fVar28;
  fStack_b4 = fVar30 * fVar27 - fVar29 * fVar28;
  local_c0 = local_b0 - local_c0;
  fStack_bc = fVar30 * fVar27 + fVar29 * fVar28;
  local_b0 = local_b0 - fVar26 * fVar30;
  local_ac = param_5[4];
  local_a8 = param_5[5];
  local_a4 = param_5[6];
  fVar25 = *param_6;
  fVar26 = param_6[1];
  fVar30 = fVar26 + fVar26;
  fVar27 = param_6[2];
  fVar28 = param_6[3];
  fVar29 = fVar25 + fVar25;
  local_100 = fVar27 * (fVar27 + fVar27);
  local_f4 = (fVar27 + fVar27) * fVar28;
  local_e0 = 1.0 - fVar25 * fVar29;
  local_fc = fVar29 * fVar26 + local_f4;
  local_f8 = fVar29 * fVar27 - fVar30 * fVar28;
  local_f4 = fVar29 * fVar26 - local_f4;
  local_f0 = local_e0 - local_100;
  local_100 = (1.0 - fVar26 * fVar30) - local_100;
  local_ec = fVar30 * fVar27 + fVar29 * fVar28;
  local_e8 = fVar29 * fVar27 + fVar30 * fVar28;
  local_e4 = fVar30 * fVar27 - fVar29 * fVar28;
  local_e0 = local_e0 - fVar26 * fVar30;
  local_dc = param_6[4];
  local_d8 = param_6[5];
  local_d4 = param_6[6];
  fVar29 = *param_1;
  fVar30 = param_1[1];
  fVar25 = param_1[2];
  fVar26 = *param_2;
  fVar27 = param_2[1];
  fVar28 = param_2[2];
  local_110 = (local_100 * fVar26 + local_f4 * fVar27 + local_e8 * fVar28 + local_dc) -
              (local_ac + local_d0 * fVar29 + fStack_c4 * fVar30 + local_b8 * fVar25);
  local_10c = (local_fc * fVar26 + local_f0 * fVar27 + local_e4 * fVar28 + local_d8) -
              (fStack_cc * fVar29 + local_c0 * fVar30 + fStack_b4 * fVar25 + local_a8);
  local_108 = (local_f8 * fVar26 + local_ec * fVar27 + local_e0 * fVar28 + local_d4) -
              (local_c8 * fVar29 + fStack_bc * fVar30 + local_b0 * fVar25 + local_a4);
  fVar27 = *param_7;
  local_338 = param_3;
  uStack_330 = param_4;
  local_320 = param_8;
  local_318 = param_5;
  local_2e0 = param_7;
  (**(code **)(param_1 + 0x16))(param_1,&local_110,&local_d0,param_9,&local_200,&local_230);
  fVar25 = local_230;
  fVar26 = (float)local_200;
  (**(code **)(param_2 + 0x16))(param_2,&local_110,&local_100,param_10,&local_150,&local_180);
  if ((local_150 <= fVar27 + fVar25) && (fVar26 <= fVar27 + local_180)) {
    local_114 = fVar25 - local_150;
    local_180 = local_180 - fVar26;
    if (local_180 <= local_114) {
      local_114 = local_180;
    }
    fVar29 = *param_6;
    fVar34 = param_6[1];
    fVar35 = param_6[2];
    fVar36 = param_6[3];
    fVar30 = *local_318;
    fVar32 = local_318[1];
    fVar38 = local_318[5] - param_6[5];
    fVar31 = local_318[2];
    fVar33 = local_318[3];
    local_328 = param_10;
    fVar37 = local_318[4] - param_6[4];
    fVar39 = local_318[6] - param_6[6];
    fVar38 = fVar38 + fVar38;
    fVar37 = fVar37 + fVar37;
    fVar39 = fVar39 + fVar39;
    fVar25 = ((fVar36 * fVar32 - fVar34 * fVar33) - fVar35 * fVar30) + fVar29 * fVar31;
    fVar44 = ((fVar36 * fVar30 - fVar29 * fVar33) - fVar34 * fVar31) + fVar35 * fVar32;
    fVar41 = ((fVar29 * fVar33 - fVar36 * fVar30) - fVar35 * fVar32) + fVar34 * fVar31;
    fVar47 = ((fVar36 * fVar31 - fVar35 * fVar33) - fVar29 * fVar32) + fVar34 * fVar30;
    fVar45 = ((fVar35 * fVar33 - fVar36 * fVar31) - fVar34 * fVar30) + fVar29 * fVar32;
    fVar26 = fVar36 * fVar36 + -0.5;
    fVar43 = ((fVar34 * fVar33 - fVar36 * fVar32) - fVar29 * fVar31) + fVar35 * fVar30;
    fVar49 = fVar36 * fVar33 + fVar29 * fVar30 + fVar34 * fVar32 + fVar35 * fVar31;
    fVar40 = (fVar37 * -fVar29 - fVar38 * fVar34) - fVar39 * fVar35;
    fVar27 = fVar44 + fVar44;
    fVar28 = fVar25 + fVar25;
    local_12c = (fVar26 * fVar37 + fVar36 * (fVar38 * fVar35 - fVar39 * fVar34)) - fVar40 * fVar29;
    local_140 = fVar47 * (fVar47 + fVar47);
    local_128 = (fVar26 * fVar38 + fVar36 * (fVar39 * fVar29 - fVar37 * fVar35)) - fVar40 * fVar34;
    local_144 = fVar49 * (fVar47 + fVar47);
    local_124 = (fVar26 * fVar39 + fVar36 * (fVar37 * fVar34 - fVar38 * fVar29)) - fVar40 * fVar35;
    local_14c = fVar27 * fVar25 + local_144;
    local_144 = fVar27 * fVar25 - local_144;
    local_148 = fVar27 * fVar47 - fVar49 * fVar28;
    local_138 = fVar27 * fVar47 + fVar49 * fVar28;
    local_13c = fVar27 * fVar49 + fVar47 * fVar28;
    local_134 = fVar47 * fVar28 - fVar27 * fVar49;
    local_130 = 1.0 - fVar44 * fVar27;
    local_150 = (1.0 - fVar25 * fVar28) - local_140;
    local_140 = local_130 - local_140;
    fVar29 = fVar43 + fVar43;
    local_130 = local_130 - fVar25 * fVar28;
    fVar25 = fVar41 + fVar41;
    local_170 = fVar45 * (fVar45 + fVar45);
    local_174 = fVar49 * (fVar45 + fVar45);
    local_180 = (1.0 - fVar43 * fVar29) - local_170;
    local_17c = fVar25 * fVar43 + local_174;
    local_178 = fVar45 * fVar25 - fVar49 * fVar29;
    local_168 = fVar45 * fVar25 + fVar49 * fVar29;
    local_174 = fVar25 * fVar43 - local_174;
    local_160 = 1.0 - fVar41 * fVar25;
    fVar27 = param_6[4] - local_318[4];
    fVar26 = param_6[5] - local_318[5];
    fVar27 = fVar27 + fVar27;
    fVar26 = fVar26 + fVar26;
    local_2d4 = (uint)param_12;
    local_2d8 = (uint)param_11;
    local_170 = local_160 - local_170;
    local_16c = fVar49 * fVar25 + fVar45 * fVar29;
    local_164 = fVar45 * fVar29 - fVar49 * fVar25;
    local_160 = local_160 - fVar43 * fVar29;
    fVar28 = param_6[6] - local_318[6];
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar33 * fVar33 + -0.5;
    fVar25 = (fVar27 * -fVar30 - fVar26 * fVar32) - fVar28 * fVar31;
    local_15c = (fVar27 * fVar29 + fVar33 * (fVar26 * fVar31 - fVar28 * fVar32)) - fVar25 * fVar30;
    local_158 = (fVar26 * fVar29 + fVar33 * (fVar28 * fVar30 - fVar27 * fVar31)) - fVar25 * fVar32;
    local_154 = (fVar28 * fVar29 + fVar33 * (fVar27 * fVar32 - fVar26 * fVar30)) - fVar25 * fVar31;
    iVar19 = 2;
    uVar22 = 0x7fff;
    uVar7 = 0x7fff;
    local_2f0 = param_1;
    local_2e8 = param_2;
    do {
      pfVar20 = local_2e8;
      pfVar15 = local_2f0;
      fVar25 = *local_2e0;
      fVar26 = local_2e0[2];
      if (iVar19 == 1) {
        *(float **)(puVar11 + -0x10) = &local_120;
        uVar5 = uStack_330;
        uVar10 = local_338;
        *(undefined8 **)(puVar11 + -8) = &local_1a0;
        *(float **)(puVar11 + -0x20) = &local_190;
        *(float **)(puVar11 + -0x18) = &local_114;
        *(float **)(puVar11 + -0x30) = &local_110;
        *(undefined8 **)(puVar11 + -0x28) = &local_1c0;
        *(float **)(puVar11 + -0x40) = &local_150;
        *(float **)(puVar11 + -0x38) = &local_180;
        uVar8 = FUN_00226460(fVar25,fVar26,uVar10,uVar5,pfVar15,pfVar20,&local_d0,&local_100,param_9
                             ,param_10);
        if ((uVar8 & 1) == 0) {
          return 0;
        }
      }
      else {
        fVar27 = local_d0 * local_110;
        fVar28 = fStack_cc * local_10c;
        fVar32 = local_110 * fStack_c4;
        fVar30 = local_c8 * local_108;
        fVar29 = local_10c * local_c0;
        fVar34 = local_108 * fStack_bc;
        fVar31 = local_110 * local_b8;
        fVar35 = local_10c * fStack_b4;
        local_260 = -local_110;
        fStack_25c = -local_10c;
        local_258 = -local_108;
        fVar33 = local_108 * local_b0;
        local_2a8[0] = 3.4028235e+38;
        local_2d0[0] = 3.4028235e+38;
        *(float **)(puVar11 + -0x10) = &local_260;
        *(undefined8 **)(puVar11 + -0x20) = &local_200;
        *(undefined8 **)(puVar11 + -0x18) = &local_1c0;
        uVar8 = FUN_00226e50(fVar27 + fVar28 + fVar30,fVar32 + fVar29 + fVar34,
                             fVar31 + fVar35 + fVar33,fVar25,fVar26,pfVar15,pfVar20,&local_d0,
                             &local_100,param_9,param_10,&local_180,local_2a8);
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        fVar27 = local_100 * local_110;
        fVar32 = local_fc * local_10c;
        fVar29 = local_f8 * local_108;
        fVar33 = local_10c * local_f0;
        fVar30 = local_110 * local_f4;
        fVar34 = local_108 * local_ec;
        fVar28 = local_110 * local_e8;
        fVar35 = local_10c * local_e4;
        fVar31 = local_108 * local_e0;
        *(float **)(puVar11 + -0x10) = &local_110;
        *(float **)(puVar11 + -0x20) = &local_230;
        *(float **)(puVar11 + -0x18) = &local_190;
        uVar8 = FUN_00226e50(-(fVar27 + fVar32 + fVar29),-(fVar30 + fVar33 + fVar34),
                             -(fVar28 + fVar35 + fVar31),fVar25,fVar26,pfVar20,pfVar15,&local_100,
                             &local_d0,param_10,param_9,&local_150,local_2d0);
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        uVar8 = local_1a0 >> 0x20;
        local_1a0 = local_1a0 & 0xffffffff00000000;
        local_114 = local_2a8[0];
        local_118 = (float)local_1f8;
        local_11c = local_200._4_4_;
        local_120 = (float)local_200;
        if (local_2d0[0] < local_2a8[0]) {
          local_1a0 = CONCAT44((int)uVar8,1);
          local_114 = local_2d0[0];
          local_118 = local_228;
          local_11c = local_22c;
          local_120 = local_230;
        }
      }
      if (local_110 * local_120 + local_10c * local_11c + local_108 * local_118 < 0.0) {
        local_120 = -local_120;
        local_11c = -local_11c;
        local_118 = -local_118;
      }
      fVar27 = local_118;
      fVar26 = local_11c;
      fVar25 = local_120;
      if ((int)local_1a0 == 2) {
        local_200 = CONCAT44(local_120 * fStack_c4 + local_11c * local_c0 + local_118 * fStack_bc,
                             local_d0 * local_120 + fStack_cc * local_11c + local_c8 * local_118);
        local_1f8 = CONCAT44(local_1f8._4_4_,
                             local_120 * local_b8 + local_11c * fStack_b4 + local_118 * local_b0);
        uVar7 = (**(code **)(pfVar15 + 0x18))(pfVar15,param_9,&local_200);
        fVar25 = -fVar25;
        fVar28 = local_e8 * fVar25;
        fVar29 = local_100 * fVar25 - local_fc * fVar26;
        fVar25 = local_f4 * fVar25 - local_f0 * fVar26;
LAB_002258dc:
        local_200 = CONCAT44(fVar25 - local_ec * fVar27,fVar29 - local_f8 * fVar27);
        local_1f8 = CONCAT44(local_1f8._4_4_,(fVar28 - local_e4 * fVar26) - local_e0 * fVar27);
        uVar22 = (**(code **)(pfVar20 + 0x18))(pfVar20,param_10,&local_200);
        uVar22 = uVar22 & 0xffffffff;
      }
      else if ((int)local_1a0 == 1) {
        local_200 = CONCAT44(local_120 * fStack_c4 + local_11c * local_c0 + local_118 * fStack_bc,
                             local_d0 * local_120 + fStack_cc * local_11c + local_c8 * local_118);
        local_1f8 = CONCAT44(local_1f8._4_4_,
                             local_120 * local_b8 + local_11c * fStack_b4 + local_118 * local_b0);
        uVar7 = (**(code **)(pfVar15 + 0x18))(pfVar15,param_9,&local_200);
        uVar22 = (ulong)(uint)local_190;
      }
      else if ((int)local_1a0 == 0) {
        fVar25 = -local_120;
        fVar28 = local_e8 * fVar25;
        fVar29 = local_100 * fVar25 - local_fc * local_11c;
        fVar25 = local_f4 * fVar25 - local_f0 * local_11c;
        uVar7 = (uint)local_1c0;
        goto LAB_002258dc;
      }
      lVar23 = *(long *)(pfVar15 + 6);
      local_2f8 = (uint)uVar22;
      lVar18 = *(long *)(pfVar20 + 6);
      pfVar15 = (float *)(lVar23 + (ulong)uVar7 * 0x14);
      pfVar20 = (float *)(lVar18 + uVar22 * 0x14);
      Hint_Prefetch(pfVar15,0,0,0);
      Hint_Prefetch(pfVar20,0,0,0);
      uVar8 = (ulong)uVar7;
      fVar25 = 0.0;
      if (local_114 < 0.0) {
        fVar25 = -local_114;
      }
      local_2f4 = uVar7;
      if ((local_2d8 & 1) == 0) {
        lVar16 = lVar23 + uVar8 * 0x14;
        fVar26 = *pfVar15;
        fVar31 = *(float *)(lVar16 + 0xc);
        fVar27 = *(float *)(lVar16 + 4);
        fVar30 = *(float *)(lVar16 + 8);
        fVar28 = *(float *)(param_9 + 0x24) * fVar26 + *(float *)(param_9 + 0x28) * fVar27 +
                 *(float *)(param_9 + 0x2c) * fVar30;
        fVar29 = fVar26 * *(float *)(param_9 + 0x30) + fVar27 * *(float *)(param_9 + 0x34) +
                 fVar30 * *(float *)(param_9 + 0x38);
        fVar27 = fVar26 * *(float *)(param_9 + 0x3c) + fVar27 * *(float *)(param_9 + 0x40) +
                 fVar30 * *(float *)(param_9 + 0x44);
        fVar26 = sqrtf(fVar28 * fVar28 + fVar29 * fVar29 + fVar27 * fVar27);
        fVar26 = 1.0 / fVar26;
        fVar28 = fVar28 * fVar26;
        fVar29 = fVar29 * fVar26;
        fVar27 = fVar27 * fVar26;
        local_1a0 = CONCAT44(fVar29,fVar28);
        uStack_198 = CONCAT44(fVar31 * fVar26,fVar27);
        local_18c = fVar28 * fStack_cc + fVar29 * local_c0;
        local_190 = fVar28 * local_d0 + fVar29 * fStack_c4;
        local_188 = fVar28 * local_c8 + fVar29 * fStack_bc;
      }
      else {
        uStack_198 = *(undefined8 *)(pfVar15 + 2);
        local_1a0 = *(ulong *)pfVar15;
        fVar26 = *pfVar15;
        lVar16 = lVar23 + uVar8 * 0x14;
        fVar28 = *(float *)(lVar16 + 4);
        fVar27 = *(float *)(lVar16 + 8);
        local_190 = fVar26 * local_d0 + fVar28 * fStack_c4;
        local_18c = fVar26 * fStack_cc + fVar28 * local_c0;
        local_188 = fVar26 * local_c8 + fVar28 * fStack_bc;
      }
      local_190 = local_190 + fVar27 * local_b8;
      local_18c = local_18c + fVar27 * fStack_b4;
      local_188 = local_188 + fVar27 * local_b0;
      if ((local_2d4 & 1) == 0) {
        lVar16 = lVar18 + uVar22 * 0x14;
        fVar26 = *pfVar20;
        fVar31 = *(float *)(lVar16 + 0xc);
        fVar27 = *(float *)(lVar16 + 4);
        fVar28 = *(float *)(lVar16 + 8);
        fVar29 = *(float *)(param_10 + 0x24) * fVar26 + *(float *)(param_10 + 0x28) * fVar27 +
                 *(float *)(param_10 + 0x2c) * fVar28;
        fVar30 = fVar26 * *(float *)(param_10 + 0x30) + fVar27 * *(float *)(param_10 + 0x34) +
                 fVar28 * *(float *)(param_10 + 0x38);
        fVar27 = fVar26 * *(float *)(param_10 + 0x3c) + fVar27 * *(float *)(param_10 + 0x40) +
                 fVar28 * *(float *)(param_10 + 0x44);
        fVar26 = sqrtf(fVar29 * fVar29 + fVar30 * fVar30 + fVar27 * fVar27);
        fVar26 = 1.0 / fVar26;
        fVar29 = fVar29 * fVar26;
        fVar30 = fVar30 * fVar26;
        fVar27 = fVar27 * fVar26;
        local_1c0 = CONCAT44(fVar30,fVar29);
        local_1b0 = fVar29 * local_100 + fVar30 * local_f4 + fVar27 * local_e8;
        local_1ac = fVar29 * local_fc + fVar30 * local_f0 + fVar27 * local_e4;
        local_1a8 = fVar29 * local_f8 + fVar30 * local_ec + fVar27 * local_e0;
        uStack_1b8 = CONCAT44(fVar31 * fVar26,fVar27);
      }
      else {
        uStack_1b8 = *(undefined8 *)(pfVar20 + 2);
        local_1c0 = *(undefined8 *)pfVar20;
        lVar16 = lVar18 + uVar22 * 0x14;
        fVar26 = *pfVar20;
        fVar27 = *(float *)(lVar16 + 4);
        fVar28 = *(float *)(lVar16 + 8);
        local_1b0 = fVar26 * local_100 + fVar27 * local_f4 + fVar28 * local_e8;
        local_1ac = fVar26 * local_fc + fVar27 * local_f0 + fVar28 * local_e4;
        local_1a8 = fVar26 * local_f8 + fVar27 * local_ec + fVar28 * local_e0;
      }
      fVar28 = local_118;
      fVar27 = local_11c;
      fVar26 = local_120;
      local_300 = fabsf(local_190 * local_120 + local_18c * local_11c + local_188 * local_118);
      local_304 = fabsf(local_1b0 * fVar26 + local_1ac * fVar27 + local_1a8 * fVar28);
      local_200 = CONCAT44(fStack_cc,local_d0);
      local_2fc = fVar25 + local_2e0[1];
      local_1c8 = -local_2fc;
      local_1d0 = fVar26 * local_1c8;
      local_1cc = fVar27 * local_1c8;
      local_1c8 = fVar28 * local_1c8;
      local_1dc = local_ac - local_1d0;
      local_1f8 = CONCAT44(fStack_c4,local_c8);
      local_1f0 = CONCAT44(fStack_bc,local_c0);
      uStack_1e8 = CONCAT44(fStack_b4,local_b8);
      local_1e0 = local_b0;
      local_1d8 = local_a8 - local_1cc;
      local_1d4 = local_a4 - local_1c8;
      fVar33 = local_1d8 - param_6[5];
      fVar27 = *param_6;
      fVar28 = param_6[1];
      fVar36 = local_1dc - param_6[4];
      local_30c = *local_318;
      local_308 = local_318[1];
      fVar29 = param_6[2];
      fVar30 = param_6[3];
      fVar34 = local_1d4 - param_6[6];
      fVar43 = local_318[2];
      fVar26 = local_318[3];
      fVar37 = param_6[4] - local_1dc;
      fVar39 = param_6[6] - local_1d4;
      fVar36 = fVar36 + fVar36;
      fVar33 = fVar33 + fVar33;
      fVar38 = param_6[5] - local_1d8;
      fVar34 = fVar34 + fVar34;
      fVar38 = fVar38 + fVar38;
      fVar49 = ((local_30c * fVar30 - fVar26 * fVar27) - fVar28 * fVar43) + fVar29 * local_308;
      fVar39 = fVar39 + fVar39;
      fVar47 = ((fVar26 * fVar28 - local_308 * fVar30) - fVar27 * fVar43) + fVar29 * local_30c;
      fVar42 = ((local_308 * fVar30 - fVar26 * fVar28) - fVar29 * local_30c) + fVar27 * fVar43;
      fVar37 = fVar37 + fVar37;
      fVar45 = ((fVar43 * fVar30 - fVar26 * fVar29) - fVar27 * local_308) + fVar28 * local_30c;
      fVar25 = ((fVar26 * fVar27 - local_30c * fVar30) - fVar29 * local_308) + fVar28 * fVar43;
      fVar41 = ((fVar26 * fVar29 - fVar43 * fVar30) - fVar28 * local_30c) + fVar27 * local_308;
      fVar44 = fVar26 * fVar30 + fVar27 * local_30c + fVar28 * local_308 + fVar29 * fVar43;
      fVar32 = fVar30 * fVar30 + -0.5;
      fVar40 = fVar26 * fVar26 + -0.5;
      fVar31 = (fVar37 * -local_30c - fVar38 * local_308) - fVar39 * fVar43;
      fVar48 = fVar42 + fVar42;
      fVar46 = fVar49 + fVar49;
      fVar50 = (fVar36 * -fVar27 - fVar33 * fVar28) - fVar34 * fVar29;
      fVar35 = fVar25 + fVar25;
      local_20c = (fVar32 * fVar36 + fVar30 * (fVar33 * fVar29 - fVar34 * fVar28)) - fVar50 * fVar27
      ;
      local_220 = fVar45 * (fVar45 + fVar45);
      local_208 = (fVar32 * fVar33 + fVar30 * (fVar34 * fVar27 - fVar36 * fVar29)) - fVar50 * fVar28
      ;
      local_224 = fVar44 * (fVar45 + fVar45);
      local_204 = (fVar32 * fVar34 + fVar30 * (fVar36 * fVar28 - fVar33 * fVar27)) - fVar50 * fVar29
      ;
      local_23c = (fVar40 * fVar37 + fVar26 * (fVar38 * fVar43 - fVar39 * local_308)) -
                  fVar31 * local_30c;
      local_22c = fVar42 * fVar46 + local_224;
      local_224 = fVar42 * fVar46 - local_224;
      local_228 = fVar45 * fVar46 - fVar44 * fVar48;
      local_218 = fVar45 * fVar46 + fVar44 * fVar48;
      local_21c = fVar45 * fVar48 + fVar44 * fVar46;
      local_214 = fVar45 * fVar48 - fVar44 * fVar46;
      fStack_254 = fVar44 * (fVar41 + fVar41);
      fVar27 = fVar47 + fVar47;
      fStack_25c = fVar47 * fVar35 + fStack_254;
      fStack_254 = fVar47 * fVar35 - fStack_254;
      local_250 = fVar41 * (fVar41 + fVar41);
      local_210 = 1.0 - fVar49 * fVar46;
      local_260 = (1.0 - fVar47 * fVar27) - local_250;
      local_230 = (1.0 - fVar42 * fVar48) - local_220;
      local_220 = local_210 - local_220;
      local_210 = local_210 - fVar42 * fVar48;
      local_240 = 1.0 - fVar25 * fVar35;
      local_258 = fVar41 * fVar35 - fVar44 * fVar27;
      local_250 = local_240 - local_250;
      local_240 = local_240 - fVar47 * fVar27;
      local_248 = fVar41 * fVar35 + fVar44 * fVar27;
      local_24c = fVar41 * fVar27 + fVar44 * fVar35;
      local_244 = fVar41 * fVar27 - fVar44 * fVar35;
      local_238 = (fVar40 * fVar38 + fVar26 * (fVar39 * local_30c - fVar37 * fVar43)) -
                  fVar31 * local_308;
      local_234 = (fVar40 * fVar39 + fVar26 * (fVar37 * local_308 - fVar38 * local_30c)) -
                  fVar31 * fVar43;
      pbVar21 = (byte *)(lVar23 + uVar8 * 0x14 + 0x12);
      if ((local_2d8 & 1) == 0) {
        lVar16 = (long)puVar11 - ((ulong)((uint)*pbVar21 * 0xc + 0xf) & 0x1ff0);
        puVar11 = (undefined1 *)(lVar16 - ((ulong)(*pbVar21 + 0xf) & 0x1f0));
        puVar12 = puVar11;
      }
      else {
        lVar16 = 0;
        puVar12 = (undefined1 *)0x0;
      }
      uVar10 = *(undefined8 *)(local_2f0 + 8);
      lVar1 = *(long *)(local_2f0 + 10);
      uVar4 = *(ushort *)(lVar23 + uVar8 * 0x14 + 0x10);
      uVar7 = local_2d8 & 1;
      *(long *)(puVar11 + -0x10) = param_9;
      FUN_00231b90(&uStack_268,&local_270,lVar16,puVar12,uVar7,uVar10,lVar1 + (ulong)uVar4);
      param_10 = local_328;
      pbVar24 = (byte *)(lVar18 + uVar22 * 0x14 + 0x12);
      if ((local_2d4 & 1) == 0) {
        lVar23 = (long)puVar11 - ((ulong)((uint)*pbVar24 * 0xc + 0xf) & 0x1ff0);
        puVar11 = (undefined1 *)(lVar23 - ((ulong)(*pbVar24 + 0xf) & 0x1f0));
        puVar12 = puVar11;
      }
      else {
        lVar23 = 0;
        puVar12 = (undefined1 *)0x0;
      }
      uVar10 = *(undefined8 *)(local_2e8 + 8);
      lVar16 = *(long *)(local_2e8 + 10);
      uVar4 = *(ushort *)(lVar18 + uVar22 * 0x14 + 0x10);
      uVar7 = local_2d4 & 1;
      *(long *)(puVar11 + -0x10) = local_328;
      FUN_00231b90(&uStack_278,&local_280,lVar23,puVar12,uVar7,uVar10,lVar16 + (ulong)uVar4);
      FUN_0022d580(local_2a8,&local_1a0);
      FUN_0022d580(local_2d0,&local_1c0);
      uVar14 = uStack_268;
      uVar6 = local_270;
      uVar5 = uStack_278;
      uVar10 = local_280;
      if (local_300 <= local_304) {
        bVar2 = *pbVar24;
        bVar3 = *pbVar21;
        *(float **)(puVar11 + -8) = &local_1d0;
        *(undefined8 *)(puVar11 + -0x18) = local_320;
        *(undefined4 *)(puVar11 + -0x20) = 0xffffffff;
        *(undefined4 *)(puVar11 + -0x28) = 0xffffffff;
        *(float **)(puVar11 + -0x30) = &local_230;
        *(float **)(puVar11 + -0x40) = &local_1b0;
        *(float **)(puVar11 + -0x38) = &local_260;
        *(undefined8 **)(puVar11 + -0x50) = &local_1a0;
        puVar11[-0x10] = 0;
        pfVar15 = &local_100;
        puVar13 = &local_1c0;
        pfVar20 = local_2d0;
        *(float **)(puVar11 + -0x48) = local_2a8;
        *(undefined8 *)(puVar11 + -0x60) = uVar6;
        pfVar17 = (float *)&local_200;
        uVar9 = uVar5;
      }
      else {
        bVar2 = *pbVar21;
        bVar3 = *pbVar24;
        *(float **)(puVar11 + -8) = &local_1d0;
        puVar11[-0x10] = 1;
        *(undefined8 *)(puVar11 + -0x18) = local_320;
        *(undefined4 *)(puVar11 + -0x20) = 0xffffffff;
        *(undefined4 *)(puVar11 + -0x28) = 0xffffffff;
        *(float **)(puVar11 + -0x30) = &local_260;
        *(float **)(puVar11 + -0x40) = &local_190;
        *(float **)(puVar11 + -0x38) = &local_230;
        pfVar15 = (float *)&local_200;
        puVar13 = &local_1a0;
        pfVar20 = local_2a8;
        *(undefined8 **)(puVar11 + -0x50) = &local_1c0;
        *(undefined8 *)(puVar11 + -0x60) = uVar10;
        pfVar17 = &local_100;
        *(float **)(puVar11 + -0x48) = local_2d0;
        uVar9 = uVar14;
        uVar10 = uVar6;
        uVar14 = uVar5;
      }
      fVar25 = local_2fc;
      *(float **)(puVar11 + -0x58) = pfVar17;
      uVar22 = FUN_0022d730(fVar25,bVar2,uVar9,uVar10,pfVar15,puVar13,pfVar20,bVar3,uVar14);
      if ((uVar22 & 1) != 0) {
        return 1;
      }
      uVar22 = (ulong)local_2f8;
      iVar19 = iVar19 + -1;
      uVar7 = local_2f4;
    } while (iVar19 != 0);
  }
  return 0;
}


