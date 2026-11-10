/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00585000; name: FUN_00585000
 */


undefined8
FUN_00585000(float param_1,long param_2,long param_3,long param_4,long param_5,undefined8 *param_6,
            undefined8 *param_7,undefined8 param_8,undefined8 param_9,undefined4 param_10,
            undefined8 param_11,undefined8 param_12,uint param_13,float *param_14,byte param_15,
            uint *param_16)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  float local_358;
  float local_354;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 auStack_2d0 [64];
  undefined1 auStack_290 [64];
  undefined1 auStack_250 [64];
  undefined1 auStack_210 [64];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [64];
  undefined1 auStack_150 [16];
  undefined8 local_140;
  undefined4 local_138;
  undefined1 auStack_134 [4];
  undefined1 auStack_130 [4];
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [4];
  undefined1 auStack_124 [4];
  undefined1 auStack_120 [8];
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
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_88;
  float fStack_84;
  
  if ((param_15 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  uVar5 = *param_6;
  local_d0 = param_6[1];
  local_c8 = param_6[2];
  local_c0 = param_6[3];
  fVar11 = (float)local_d0;
  local_d8._0_4_ = (float)uVar5;
  fVar10 = (float)local_d8;
  local_d8._4_4_ = (float)((ulong)uVar5 >> 0x20);
  fVar13 = local_d8._4_4_;
  local_b8 = param_6[4];
  local_b0 = param_6[5];
  local_a8 = param_6[6];
  local_a0 = param_6[7];
  fVar8 = (float)local_d8 * (float)local_d8 + local_d8._4_4_ * local_d8._4_4_ +
          (float)local_d0 * (float)local_d0;
  local_118 = *param_7;
  local_110 = param_7[1];
  local_108 = param_7[2];
  local_100 = param_7[3];
  local_f8 = param_7[4];
  local_f0 = param_7[5];
  local_e8 = param_7[6];
  local_e0 = param_7[7];
  fVar9 = (float)local_d0;
  if ((fVar8 != 0.0) && (fVar8 != 1.0)) {
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      local_d8 = uVar5;
      fVar9 = sqrtf(fVar8);
    }
    fVar9 = 1.0 / fVar9;
    local_d8._0_4_ = fVar10 * fVar9;
    local_d8._4_4_ = fVar9 * fVar13;
    fVar9 = fVar9 * fVar11;
  }
  fVar10 = (float)local_c8;
  fVar13 = local_c8._4_4_;
  local_d0 = CONCAT44(local_d0._4_4_,fVar9);
  fVar11 = (float)local_c0;
  fVar8 = (float)local_c8 * (float)local_c8 + local_c8._4_4_ * local_c8._4_4_ +
          (float)local_c0 * (float)local_c0;
  fVar9 = (float)local_c0;
  if ((fVar8 != 0.0) && (fVar8 != 1.0)) {
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar8);
    }
    fVar9 = 1.0 / fVar9;
    local_c8._0_4_ = fVar10 * fVar9;
    local_c8._4_4_ = fVar9 * fVar13;
    fVar9 = fVar9 * fVar11;
  }
  fVar10 = (float)local_b8;
  fVar13 = local_b8._4_4_;
  local_c0 = CONCAT44(local_c0._4_4_,fVar9);
  fVar11 = (float)local_b0;
  fVar8 = (float)local_b8 * (float)local_b8 + local_b8._4_4_ * local_b8._4_4_ +
          (float)local_b0 * (float)local_b0;
  fVar9 = (float)local_b0;
  if ((fVar8 != 0.0) && (fVar8 != 1.0)) {
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar8);
    }
    fVar9 = 1.0 / fVar9;
    local_b8._0_4_ = fVar10 * fVar9;
    local_b8._4_4_ = fVar9 * fVar13;
    fVar9 = fVar9 * fVar11;
  }
  fVar10 = (float)local_118;
  fVar13 = local_118._4_4_;
  local_b0 = CONCAT44(local_b0._4_4_,fVar9);
  fVar11 = (float)local_110;
  fVar8 = (float)local_118 * (float)local_118 + local_118._4_4_ * local_118._4_4_ +
          (float)local_110 * (float)local_110;
  fVar9 = (float)local_110;
  if ((fVar8 != 0.0) && (fVar8 != 1.0)) {
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar8);
    }
    fVar9 = 1.0 / fVar9;
    local_118._0_4_ = fVar10 * fVar9;
    local_118._4_4_ = fVar9 * fVar13;
    fVar9 = fVar9 * fVar11;
  }
  fVar10 = (float)local_108;
  fVar13 = local_108._4_4_;
  local_110 = CONCAT44(local_110._4_4_,fVar9);
  fVar11 = (float)local_100;
  fVar8 = (float)local_108 * (float)local_108 + local_108._4_4_ * local_108._4_4_ +
          (float)local_100 * (float)local_100;
  fVar9 = (float)local_100;
  if ((fVar8 != 0.0) && (fVar8 != 1.0)) {
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar8);
    }
    fVar9 = 1.0 / fVar9;
    local_108._0_4_ = fVar10 * fVar9;
    local_108._4_4_ = fVar9 * fVar13;
    fVar9 = fVar9 * fVar11;
  }
  fVar10 = (float)local_f8;
  fVar13 = local_f8._4_4_;
  local_100 = CONCAT44(local_100._4_4_,fVar9);
  fVar11 = (float)local_f0;
  fVar9 = (float)local_f8 * (float)local_f8 + local_f8._4_4_ * local_f8._4_4_ +
          (float)local_f0 * (float)local_f0;
  if ((fVar9 != 0.0) && (fVar9 != 1.0)) {
    fVar8 = SQRT(fVar9);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar9);
    }
    fVar8 = 1.0 / fVar8;
    local_f8._0_4_ = fVar10 * fVar8;
    local_f8._4_4_ = fVar8 * fVar13;
    fVar11 = fVar8 * fVar11;
  }
  local_f0 = CONCAT44(local_f0._4_4_,fVar11);
  FUN_005629a0(auStack_150,&local_d8);
  uVar19 = 0;
  local_138 = (undefined4)local_a0;
  puVar15 = auStack_120;
  local_140 = local_a8;
  uVar17 = 0;
  uVar18 = 0;
  uVar16 = 0;
  FUN_0050f790(param_8,0,0,auStack_134,auStack_130,auStack_12c,auStack_128,auStack_124,puVar15,0,0,0
               ,0,0,0,0);
  fVar10 = *param_14;
  fVar13 = param_14[1];
  if (param_5 == 0) {
    fVar10 = param_1;
    fVar13 = param_1;
  }
  FUN_0059d000(0,0);
  uVar4 = FUN_005280e0(*(undefined4 *)(param_4 + 0x38));
  if ((param_5 != 0) && (param_13 == 0xfffffffe)) {
    uVar3 = FUN_005280e0(*(undefined4 *)(param_5 + 0x38));
    param_13 = ~uVar3 & 1;
  }
  FUN_0050fa30(param_8,&fStack_84,&local_88);
  iVar1 = *(int *)(param_4 + 0xa0);
  if (iVar1 != 1) {
    *(undefined4 *)(param_4 + 0xa0) = 1;
  }
  FUN_005156a0(auStack_190,param_8);
  local_1b8 = local_c0;
  local_1c0 = local_c8;
  local_1c8 = local_d0;
  local_1d0 = local_d8;
  local_198 = local_a0;
  local_1a0 = local_a8;
  local_1a8 = local_b0;
  local_1b0 = local_b8;
  FUN_00515cb0(auStack_210,auStack_190,&local_1d0);
  FUN_005156a0(auStack_250,&local_118);
  FUN_00515cb0(auStack_290,auStack_250,param_9);
  FUN_00515cb0(auStack_2d0,auStack_210,auStack_290);
  FUN_005156a0(&local_310,auStack_2d0);
  bVar2 = (uVar4 & 1) == 0;
  local_340 = local_300;
  uStack_338 = uStack_2f8;
  local_348 = local_308;
  local_358 = (0.5 / fVar10) * (fStack_84 / local_88);
  local_350 = local_310;
  local_318 = local_2d8;
  local_328 = uStack_2e8;
  uStack_320 = local_2e0;
  local_330 = local_2f0;
  local_360 = 0x3f800000;
  if (bVar2) {
    local_360 = 0x3f000000;
  }
  uStack_35c = 0;
  if (bVar2) {
    uStack_35c = 0x3f000000;
  }
  local_368 = 0x3f800000;
  if (param_13 != 0) {
    local_368 = 0x3f000000;
  }
  uStack_364 = 0;
  if (param_13 != 0) {
    uStack_364 = 0x3f000000;
  }
  local_354 = -0.5 / fVar13;
  FUN_0059d300(param_4,0,0,1,0,0);
  FUN_0059d000(0,0);
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
  if (param_5 == 0) {
    fVar11 = 1.0;
    fVar9 = 1.0;
  }
  else {
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x58));
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x54));
    fVar9 = *(float *)(param_5 + 0x8c) * fVar9 + *(float *)(param_5 + 0x94);
    fVar11 = *(float *)(param_5 + 0x88) * fVar11 + *(float *)(param_5 + 0x90);
  }
  uVar12 = NEON_ucvtf(*(undefined4 *)(param_4 + 0x54));
  uVar14 = NEON_ucvtf(*(undefined4 *)(param_4 + 0x58));
  lVar7 = param_3;
  do {
    lVar6 = lVar7;
    lVar7 = *(long *)(lVar6 + 0x120);
  } while (lVar7 != 0);
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    do {
      lVar7 = param_5;
      param_5 = *(long *)(lVar7 + 0x120);
    } while (param_5 != 0);
    uVar5 = *(undefined8 *)(lVar7 + 0xa8);
  }
  FUN_0057a0e0(0,0,uVar12,uVar14,0,0,
               *(float *)(param_3 + 0x88) * fVar13 + *(float *)(param_3 + 0x90),
               *(float *)(param_3 + 0x8c) * fVar10 + *(float *)(param_3 + 0x94),param_2,auStack_150,
               &local_350,&local_358,&local_360,&local_368,param_10,param_11,
               (ulong)puVar15 & 0xffffffff00000000,uVar16 & 0xffffffff00000000,
               CONCAT44(uVar17,fVar11),CONCAT44(uVar18,fVar9),param_12,*(undefined8 *)(lVar6 + 0xa8)
               ,uVar5,uVar19 & 0xffffffff00000000);
  uVar5 = FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
  if (*(int *)(param_4 + 0xa0) != iVar1) {
    *(int *)(param_4 + 0xa0) = iVar1;
  }
  if (-1 < (int)uVar5) {
    if (param_16 == (uint *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      *param_16 = param_13;
    }
  }
  return uVar5;
}


