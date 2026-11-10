/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00583080; name: FUN_00583080
 */


undefined8
FUN_00583080(ulong param_1,float param_2,undefined4 param_3,long param_4,long param_5,
            undefined8 *param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9,
            float *param_10,undefined4 param_11,undefined8 param_12,int param_13,
            undefined4 *param_14,float *param_15,float *param_16,float *param_17,float *param_18,
            undefined8 *param_19,float *param_20)

{
  long lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  int iVar17;
  int *piVar18;
  float *pfVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_1014;
  undefined8 local_1010;
  undefined8 local_1008;
  undefined8 local_1000;
  undefined8 uStack_ff8;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  float local_f84;
  float local_f80;
  float local_f7c;
  float local_f78;
  float local_f74;
  float local_f70;
  float local_f6c;
  float local_f68;
  undefined4 local_f64;
  float local_f60;
  float local_f5c;
  float local_f58;
  undefined4 local_f54;
  float local_f50;
  float local_f4c;
  float local_f48;
  undefined4 local_f44;
  undefined4 local_f40;
  undefined1 local_f3c [8];
  undefined1 local_f34 [8];
  undefined4 local_f2c;
  undefined8 local_f28 [2];
  undefined4 local_f18;
  undefined1 local_f14 [8];
  undefined1 local_f0c [8];
  undefined4 local_f04;
  undefined8 local_f00 [64];
  float local_d00 [2];
  undefined8 local_cf8;
  undefined8 local_370;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  undefined1 auStack_260 [64];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulong local_1e8;
  undefined1 auStack_1e0 [64];
  float local_1a0;
  float local_19c;
  undefined1 auStack_198 [16];
  undefined8 local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130 [2];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  
  if ((param_10 == (float *)0x0) || (*param_10 == 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar4 = *param_6;
  local_e0 = param_6[1];
  local_d8 = param_6[2];
  local_d0 = param_6[3];
  local_c8 = param_6[4];
  local_c0 = param_6[5];
  local_b8 = param_6[6];
  local_b0 = param_6[7];
  local_e8._0_4_ = (float)uVar4;
  fVar27 = (float)local_e8;
  local_e8._4_4_ = (float)((ulong)uVar4 >> 0x20);
  fVar28 = local_e8._4_4_;
  local_128 = *param_7;
  local_120 = param_7[1];
  fVar29 = (float)local_e0;
  local_118 = param_7[2];
  local_110 = param_7[3];
  local_108 = param_7[4];
  local_100 = param_7[5];
  fVar25 = (float)local_e8 * (float)local_e8 + local_e8._4_4_ * local_e8._4_4_ +
           (float)local_e0 * (float)local_e0;
  local_f8 = param_7[6];
  local_f0 = param_7[7];
  fVar26 = (float)local_e0;
  if ((fVar25 != 0.0) && (fVar25 != 1.0)) {
    fVar26 = SQRT(fVar25);
    if (NAN(fVar26)) {
      local_e8 = uVar4;
      fVar26 = sqrtf(fVar25);
    }
    fVar26 = 1.0 / fVar26;
    local_e8._0_4_ = fVar27 * fVar26;
    local_e8._4_4_ = fVar26 * fVar28;
    fVar26 = fVar26 * fVar29;
  }
  fVar27 = (float)local_d8;
  fVar28 = local_d8._4_4_;
  local_e0 = CONCAT44(local_e0._4_4_,fVar26);
  fVar29 = (float)local_d0;
  fVar25 = (float)local_d8 * (float)local_d8 + local_d8._4_4_ * local_d8._4_4_ +
           (float)local_d0 * (float)local_d0;
  fVar26 = (float)local_d0;
  if ((fVar25 != 0.0) && (fVar25 != 1.0)) {
    fVar26 = SQRT(fVar25);
    if (NAN(fVar26)) {
      fVar26 = sqrtf(fVar25);
    }
    fVar26 = 1.0 / fVar26;
    local_d8._0_4_ = fVar27 * fVar26;
    local_d8._4_4_ = fVar26 * fVar28;
    fVar26 = fVar26 * fVar29;
  }
  fVar27 = (float)local_c8;
  fVar28 = local_c8._4_4_;
  local_d0 = CONCAT44(local_d0._4_4_,fVar26);
  fVar29 = (float)local_c0;
  fVar25 = (float)local_c8 * (float)local_c8 + local_c8._4_4_ * local_c8._4_4_ +
           (float)local_c0 * (float)local_c0;
  fVar26 = (float)local_c0;
  if ((fVar25 != 0.0) && (fVar25 != 1.0)) {
    fVar26 = SQRT(fVar25);
    if (NAN(fVar26)) {
      fVar26 = sqrtf(fVar25);
    }
    fVar26 = 1.0 / fVar26;
    local_c8._0_4_ = fVar27 * fVar26;
    local_c8._4_4_ = fVar26 * fVar28;
    fVar26 = fVar26 * fVar29;
  }
  fVar27 = (float)local_128;
  fVar28 = local_128._4_4_;
  local_c0 = CONCAT44(local_c0._4_4_,fVar26);
  fVar29 = (float)local_120;
  fVar25 = (float)local_128 * (float)local_128 + local_128._4_4_ * local_128._4_4_ +
           (float)local_120 * (float)local_120;
  fVar26 = (float)local_120;
  if ((fVar25 != 0.0) && (fVar25 != 1.0)) {
    fVar26 = SQRT(fVar25);
    if (NAN(fVar26)) {
      fVar26 = sqrtf(fVar25);
    }
    fVar26 = 1.0 / fVar26;
    local_128._0_4_ = fVar27 * fVar26;
    local_128._4_4_ = fVar26 * fVar28;
    fVar26 = fVar26 * fVar29;
  }
  fVar27 = (float)local_118;
  fVar28 = local_118._4_4_;
  local_120 = CONCAT44(local_120._4_4_,fVar26);
  fVar29 = (float)local_110;
  fVar25 = (float)local_118 * (float)local_118 + local_118._4_4_ * local_118._4_4_ +
           (float)local_110 * (float)local_110;
  fVar26 = (float)local_110;
  if ((fVar25 != 0.0) && (fVar25 != 1.0)) {
    fVar26 = SQRT(fVar25);
    if (NAN(fVar26)) {
      fVar26 = sqrtf(fVar25);
    }
    fVar26 = 1.0 / fVar26;
    local_118._0_4_ = fVar27 * fVar26;
    local_118._4_4_ = fVar26 * fVar28;
    fVar26 = fVar26 * fVar29;
  }
  fVar27 = (float)local_108;
  fVar28 = local_108._4_4_;
  local_110 = CONCAT44(local_110._4_4_,fVar26);
  fVar29 = (float)local_100;
  fVar25 = (float)local_108 * (float)local_108 + local_108._4_4_ * local_108._4_4_ +
           (float)local_100 * (float)local_100;
  fVar26 = (float)local_100;
  if ((fVar25 != 0.0) && (fVar25 != 1.0)) {
    fVar26 = SQRT(fVar25);
    if (NAN(fVar26)) {
      fVar26 = sqrtf(fVar25);
    }
    fVar26 = 1.0 / fVar26;
    local_108._0_4_ = fVar27 * fVar26;
    local_108._4_4_ = fVar26 * fVar28;
    fVar26 = fVar26 * fVar29;
  }
  local_100 = CONCAT44(local_100._4_4_,fVar26);
  FUN_005629a0(&local_160,&local_e8);
  local_148 = (float)(undefined4)local_b0;
  local_150 = local_b8;
  FUN_0050f790(param_8,0,0,&fStack_144,&local_140,&fStack_13c,&local_138,&fStack_134,local_130,0,0,0
               ,0,0,0,0);
  FUN_005629a0(auStack_198,&local_128);
  local_180 = (float)(undefined4)local_f0;
  local_188 = local_f8;
  FUN_0050f790(param_9,0,0,&local_17c,&local_178,&local_174,&local_170,&local_16c,local_168,0,0,0,0,
               0,0,0);
  local_150 = 0;
  local_148 = 0.0;
  local_188 = 0;
  local_180 = 0.0;
  FUN_0050fa30(param_8,&local_19c,&local_1a0);
  FUN_005156a0(auStack_1e0,param_8);
  local_208 = local_d0;
  local_210 = local_d8;
  local_218 = local_e0;
  local_220 = local_e8;
  local_1f8 = local_c0;
  local_200 = local_c8;
  local_1e8 = local_b0 & 0xffffffff00000000;
  local_1f0 = 0;
  FUN_00515cb0(auStack_260,auStack_1e0,&local_220);
  local_f28[0] = 0;
  local_f28[1] = 0;
  local_364 = -(local_130[0] * fStack_134) / ((local_130[0] - fStack_134) * 0.5 - local_130[0]);
  local_360 = -local_364;
  local_368 = local_364 * 0.5;
  local_370 = 0;
  local_35c = local_360;
  local_350 = local_360;
  local_33c = local_360;
  local_320 = local_364 * -0.5;
  local_31c = local_320;
  local_310 = local_320;
  local_2fc = local_320;
  local_2e0 = local_368 * -0.75;
  local_2c0 = local_368 * 0.75;
  local_28c = local_364 * 0.25;
  local_280 = local_28c;
  local_270 = local_28c;
  local_26c = local_28c;
  local_2cc = local_2c0;
  local_2b0 = local_2c0;
  local_2ac = local_2c0;
  local_27c = local_364 * -0.25;
  local_f34 = (undefined1  [8])0x0;
  local_f3c = (undefined1  [8])0x0;
  local_f0c = (undefined1  [8])0x0;
  local_f14 = (undefined1  [8])0x0;
  local_f04 = 0x3f800000;
  local_f18 = 0x3f800000;
  local_f2c = 0x3f800000;
  local_f40 = 0x3f800000;
  local_358 = local_368;
  local_354 = local_364;
  local_34c = local_364;
  local_348 = local_368;
  local_344 = local_364;
  local_340 = local_364;
  local_338 = local_368;
  local_334 = local_364;
  local_330 = local_364;
  local_32c = local_364;
  local_328 = local_368;
  local_324 = local_364;
  local_318 = local_368;
  local_314 = local_364;
  local_30c = local_368;
  local_308 = local_368;
  local_304 = local_364;
  local_300 = local_368;
  local_2f8 = local_368;
  local_2f4 = local_364;
  local_2f0 = local_368;
  local_2ec = local_368;
  local_2e8 = local_368;
  local_2e4 = local_364;
  local_2dc = local_2e0;
  local_2d8 = local_368;
  local_2d4 = local_364;
  local_2d0 = local_2e0;
  local_2c8 = local_368;
  local_2c4 = local_364;
  local_2bc = local_2e0;
  local_2b8 = local_368;
  local_2b4 = local_364;
  local_2a8 = local_368;
  local_2a4 = local_364;
  local_298 = local_368;
  local_294 = local_364;
  local_288 = local_368;
  local_284 = local_364;
  local_278 = local_368;
  local_274 = local_364;
  local_264 = local_364;
  local_2a0 = local_27c;
  local_29c = local_27c;
  local_290 = local_27c;
  local_268 = local_368;
  lVar24 = 0;
  do {
    pfVar19 = (float *)((long)local_d00 + lVar24);
    lVar23 = lVar24 + 0x10;
    *(undefined8 *)pfVar19 = *(undefined8 *)((long)&local_370 + lVar24);
    *(undefined8 *)((long)local_d00 + lVar24 + 8) = *(undefined8 *)((long)&local_368 + lVar24);
    fVar27 = 1.0 / *(float *)((long)local_d00 + lVar24 + 0xc);
    *pfVar19 = *pfVar19 * fVar27;
    *(float *)((long)local_d00 + lVar24 + 4) = fVar27 * *(float *)((long)local_d00 + lVar24 + 4);
    *(float *)((long)local_d00 + lVar24 + 8) = fVar27 * *(float *)((long)local_d00 + lVar24 + 8);
    lVar24 = lVar23;
  } while (lVar23 != 0x110);
  fVar27 = 0.0;
  pfVar19 = local_d00;
  lVar24 = 1;
  do {
    fVar26 = (float)(int)lVar24 * (float)param_1 * 0.125;
    FUN_00599940(fVar26,&local_1010,&local_160,auStack_198);
    local_f58 = local_1010._4_4_ * local_1010._4_4_ + local_1010._4_4_ * local_1010._4_4_;
    fVar30 = (float)local_1008 * (float)local_1008 + (float)local_1008 * (float)local_1008;
    local_f7c = (float)local_1010 * local_1010._4_4_ + (float)local_1010 * local_1010._4_4_;
    local_f68 = local_1010._4_4_ * (float)local_1008 + local_1010._4_4_ * (float)local_1008;
    fVar29 = (float)local_1010 * local_1008._4_4_ + (float)local_1010 * local_1008._4_4_;
    fVar25 = (float)local_1010 * (float)local_1010 + (float)local_1010 * (float)local_1010;
    local_f78 = (float)local_1010 * (float)local_1008 + (float)local_1010 * (float)local_1008;
    fVar31 = local_1010._4_4_ * local_1008._4_4_ + local_1010._4_4_ * local_1008._4_4_;
    fVar28 = (float)local_1008 * local_1008._4_4_ + (float)local_1008 * local_1008._4_4_;
    local_f5c = local_f68 + fVar29;
    local_f68 = local_f68 - fVar29;
    local_f70 = local_f7c + fVar28;
    local_f7c = local_f7c - fVar28;
    local_f60 = local_f78 - fVar31;
    local_f78 = local_f78 + fVar31;
    local_f80 = (1.0 - local_f58) - fVar30;
    local_f6c = (1.0 - fVar30) - fVar25;
    local_f58 = (1.0 - fVar25) - local_f58;
    local_f50 = -(local_f60 * 0.0 + local_f80 * 0.0 + local_f70 * 0.0);
    local_f48 = -(local_f58 * 0.0 + local_f78 * 0.0 + local_f68 * 0.0);
    local_f4c = -(local_f5c * 0.0 + local_f7c * 0.0 + local_f6c * 0.0);
    local_f54 = 0;
    local_f64 = 0;
    local_f74 = 0.0;
    local_f44 = 0x3f800000;
    FUN_0050f980(fStack_144 + fVar26 * (local_17c - fStack_144),
                 local_140 + fVar26 * (local_178 - local_140),
                 fStack_13c + fVar26 * (local_174 - fStack_13c),
                 local_138 + fVar26 * (local_170 - local_138),
                 fStack_134 + fVar26 * (local_16c - fStack_134),
                 local_130[0] + fVar26 * (local_168[0] - local_130[0]),&local_1010,0,1);
    FUN_00515cb0(&local_f80,&local_f80,&local_1010);
    FUN_00515cb0(&local_1010,auStack_260,&local_f80);
    lVar23 = lVar24 * 0x40;
    puVar2 = (undefined8 *)(local_f3c + lVar23 + -4);
    *(undefined8 *)(local_f34 + lVar23 + 4) = local_1000;
    local_f28[lVar24 * 8] = uStack_ff8;
    *puVar2 = local_1010;
    *(undefined8 *)(local_f3c + lVar23 + 4) = local_1008;
    *(undefined8 *)(local_f14 + lVar23 + 4) = local_fe0;
    *(undefined8 *)(local_f0c + lVar23 + 4) = uStack_fd8;
    local_f28[lVar24 * 8 + 1] = local_ff0;
    local_f28[lVar24 * 8 + 2] = uStack_fe8;
    FUN_005156a0(&local_1010,puVar2);
    *(undefined8 *)(local_f34 + lVar23 + 4) = local_1000;
    local_f28[lVar24 * 8] = uStack_ff8;
    *puVar2 = local_1010;
    *(undefined8 *)(local_f3c + lVar23 + 4) = local_1008;
    *(undefined8 *)(local_f14 + lVar23 + 4) = local_fe0;
    *(undefined8 *)(local_f0c + lVar23 + 4) = uStack_fd8;
    local_f28[lVar24 * 8 + 1] = local_ff0;
    local_f28[lVar24 * 8 + 2] = uStack_fe8;
    lVar23 = 0;
    do {
      FUN_00510070(&local_1010,(long)&local_370 + lVar23,puVar2);
      fVar28 = (float)local_1010;
      if ((float)local_1010 <= 0.0) {
        local_1010._0_4_ = -(float)local_1010;
      }
      local_f84 = local_1010._4_4_;
      if (local_1010._4_4_ <= 0.0) {
        local_f84 = -local_1010._4_4_;
      }
      pfVar21 = (float *)&local_1010;
      if ((float)local_1010 <= local_f84) {
        pfVar21 = &local_f84;
      }
      fVar29 = *pfVar21;
      *(float *)((long)pfVar19 + lVar23 + 0x11c) = local_1008._4_4_;
      local_1010 = CONCAT44(local_1010._4_4_,fVar29);
      pfVar21 = (float *)((long)pfVar19 + lVar23 + 0x11c);
      if (local_1008._4_4_ <= fVar29) {
        pfVar21 = (float *)&local_1010;
      }
      fVar29 = *pfVar21;
      fVar26 = 1.0 / fVar29;
      *(float *)((long)pfVar19 + lVar23 + 0x110) = fVar28 * fVar26;
      lVar1 = lVar23 + 0x10;
      *(float *)((long)pfVar19 + lVar23 + 0x11c) = fVar29;
      *(float *)((long)pfVar19 + lVar23 + 0x114) = fVar26 * local_1010._4_4_;
      *(float *)((long)pfVar19 + lVar23 + 0x118) = fVar26 * (float)local_1008;
      lVar23 = lVar1;
    } while (lVar1 != 0x110);
    lVar24 = lVar24 + 1;
    pfVar19 = pfVar19 + 0x44;
  } while (lVar24 != 9);
  local_f90 = 0;
  pfVar19 = local_d00;
  uVar20 = 1;
  local_fa0 = 0;
  uStack_f98 = 0;
  local_fb0 = 0;
  uStack_fa8 = 0;
  local_fc0 = 0;
  uStack_fb8 = 0;
  local_fd0 = 0;
  uStack_fc8 = 0;
  local_fe0 = 0;
  uStack_fd8 = 0;
  local_ff0 = 0;
  uStack_fe8 = 0;
  local_1000 = 0;
  uStack_ff8 = 0;
  local_1010 = 0;
  local_1008 = 0;
  do {
    if (uVar20 < 2) {
      lVar24 = 4;
      pfVar21 = pfVar19;
      do {
        while( true ) {
          fVar28 = pfVar21[0x44] - *pfVar21;
          fVar29 = pfVar21[0x45] - pfVar21[1];
          if ((fVar28 == 0.0) && (fVar29 == 0.0)) break;
          pfVar3 = (float *)((long)&local_1010 + lVar24);
          if (fVar28 <= 0.0) {
            fVar28 = -fVar28;
          }
          *(float *)((long)&local_1014 + lVar24) = fVar28 + *(float *)((long)&local_1014 + lVar24);
          if (fVar29 <= 0.0) {
            fVar29 = -fVar29;
          }
          *pfVar3 = fVar29 + *pfVar3;
          lVar24 = lVar24 + 8;
          pfVar21 = pfVar21 + 4;
          if (lVar24 == 0x8c) goto LAB_00583b4c;
        }
        lVar24 = lVar24 + 8;
        pfVar21 = pfVar21 + 4;
      } while (lVar24 != 0x8c);
    }
    else {
      fVar28 = (float)(int)uVar20 / (float)((int)uVar20 + -1);
      lVar24 = 0;
      pfVar21 = (float *)((ulong)&local_1010 | 4);
      do {
        while( true ) {
          pfVar3 = (float *)((long)pfVar19 + lVar24);
          fVar26 = pfVar3[0x44] - *pfVar3;
          fVar29 = pfVar3[0x45] - pfVar3[1];
          if ((fVar26 == 0.0) && (fVar29 == 0.0)) break;
          if (fVar26 <= 0.0) {
            fVar26 = -fVar26;
          }
          pfVar21[-1] = fVar26 + pfVar21[-1];
          if (fVar29 <= 0.0) {
            fVar29 = -fVar29;
          }
          *pfVar21 = fVar29 + *pfVar21;
          lVar24 = lVar24 + 0x10;
          pfVar21 = pfVar21 + 2;
          if (lVar24 == 0x110) goto LAB_00583b4c;
        }
        pfVar21[-1] = fVar28 * pfVar21[-1];
        *pfVar21 = fVar28 * *pfVar21;
        lVar24 = lVar24 + 0x10;
        pfVar21 = pfVar21 + 2;
      } while (lVar24 != 0x110);
    }
LAB_00583b4c:
    uVar20 = uVar20 + 1;
    pfVar19 = pfVar19 + 0x44;
  } while (uVar20 != 9);
  fVar28 = 0.0;
  lVar24 = 0;
  do {
    fVar26 = *(float *)((long)&local_1010 + lVar24);
    fVar25 = *(float *)((long)&local_1010 + lVar24 + 4);
    fVar29 = (local_19c / local_1a0) * fVar26;
    fVar29 = fVar29 * fVar29 + fVar25 * fVar25;
    bVar16 = true;
    if ((fVar29 != 0.0) && (bVar16 = false, !NAN(fVar29))) {
      bVar16 = fVar29 == 1.0;
    }
    if (bVar16) {
      fVar30 = fVar29;
    }
    else {
      fVar30 = SQRT(fVar29);
      if (NAN(fVar30)) {
        fVar30 = sqrtf(fVar29);
      }
    }
    if (fVar28 <= fVar30) {
      fVar28 = fVar30;
    }
    fVar29 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x54));
    fVar30 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x58));
    fVar26 = fVar26 * fVar29 * 0.5;
    fVar25 = fVar25 * fVar30 * 0.5;
    fVar29 = fVar26 * fVar26 + fVar25 * fVar25;
    bVar16 = true;
    if ((fVar29 != 0.0) && (bVar16 = false, !NAN(fVar29))) {
      bVar16 = fVar29 == 1.0;
    }
    fVar26 = fVar29;
    if ((!bVar16) && (fVar26 = SQRT(fVar29), NAN(fVar26))) {
      fVar26 = sqrtf(fVar29);
    }
    if (fVar27 <= fVar26) {
      fVar27 = fVar26;
    }
    lVar24 = lVar24 + 8;
  } while (lVar24 != 0x88);
  param_2 = param_2 + param_2;
  if ((0.0 < param_2) && (param_2 < fVar28)) {
    param_1 = (ulong)(uint)((param_2 / fVar28) * (float)param_1);
    fVar27 = (param_2 / fVar28) * fVar27;
  }
  FUN_00599940(param_1,&local_f80,&local_160,auStack_198);
  fVar15 = local_130[0];
  fVar14 = fStack_134;
  fVar13 = local_138;
  fVar12 = fStack_13c;
  fVar11 = local_140;
  fVar10 = fStack_144;
  fVar9 = local_148;
  fVar6 = local_180;
  fVar25 = local_f74;
  fVar26 = local_f78;
  fVar29 = local_f7c;
  fVar28 = local_f80;
  fVar30 = (float)local_188;
  fVar7 = (float)local_150;
  fVar31 = local_188._4_4_;
  fVar8 = local_150._4_4_;
  iVar17 = 5;
  if (1 < *(int *)(param_4 + 0x29a64)) {
    iVar17 = *(int *)(param_4 + 0x29a64) + 1;
  }
  uVar20 = (ulong)iVar17;
  if (bVar5) {
    piVar18 = (int *)(param_4 + uVar20 * 0x58 + (long)param_13 * 4 + 0x1b674);
    while (uVar22 = uVar20 - 1, piVar18[0x160] == 0) {
      iVar17 = *piVar18;
      if (((long)uVar20 < 3) || (uVar20 = uVar22, piVar18 = piVar18 + -0x16, iVar17 != 0)) break;
    }
  }
  else {
    piVar18 = (int *)(param_4 + uVar20 * 0x58 + (long)param_13 * 4 + 0x1b3b4);
    while (uVar22 = uVar20 - 1, piVar18[0x160] == 0) {
      iVar17 = *piVar18;
      if (((long)uVar20 < 3) || (uVar20 = uVar22, piVar18 = piVar18 + -0x16, iVar17 != 0)) break;
    }
  }
  FUN_00511d20(fVar27,param_3,uVar22 & 0xffffffff,0,param_11,&local_f80,&local_f84,&local_1014);
  if (param_14 != (undefined4 *)0x0) {
    *param_14 = (int)uVar22;
  }
  if (param_15 != (float *)0x0) {
    *param_15 = local_f80;
  }
  if (param_16 != (float *)0x0) {
    *param_16 = local_f84;
  }
  if (param_17 != (float *)0x0) {
    *param_17 = fVar27;
  }
  if (param_18 != (float *)0x0) {
    *param_18 = local_1014 / fVar27;
  }
  if (param_19 != (undefined8 *)0x0) {
    param_19[1] = local_158;
    param_19[2] = local_150;
    *param_19 = local_160;
    *(float *)(param_19 + 6) = local_130[0];
    param_19[3] = CONCAT44(fStack_144,local_148);
    param_19[4] = CONCAT44(fStack_13c,local_140);
    param_19[5] = CONCAT44(fStack_134,local_138);
  }
  if (param_20 != (float *)0x0) {
    param_20[2] = fVar26;
    param_20[3] = fVar25;
    fVar27 = (float)param_1;
    *param_20 = fVar28;
    param_20[1] = fVar29;
    param_20[4] = fVar7 + fVar27 * (fVar30 - fVar7);
    param_20[5] = fVar8 + fVar27 * (fVar31 - fVar8);
    param_20[6] = fVar9 + fVar27 * (fVar6 - fVar9);
    param_20[7] = fVar10 + fVar27 * (local_17c - fVar10);
    param_20[8] = fVar11 + fVar27 * (local_178 - fVar11);
    param_20[9] = fVar12 + fVar27 * (local_174 - fVar12);
    param_20[10] = fVar13 + fVar27 * (local_170 - fVar13);
    param_20[0xb] = fVar14 + fVar27 * (local_16c - fVar14);
    param_20[0xc] = fVar15 + fVar27 * (local_168[0] - fVar15);
  }
  return 0;
}


