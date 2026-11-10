/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00587720; name: FUN_00587720
 */


undefined8
FUN_00587720(undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,long param_9,uint param_10,long param_11,
            undefined8 param_12,long param_13,long param_14,undefined8 *param_15,
            undefined8 *param_16,undefined4 *param_17,float *param_18,float param_19,float param_20,
            float *param_21,float *param_22,float *param_23,undefined4 param_24,undefined4 param_25,
            int param_26,byte param_27,undefined4 param_28)

{
  undefined8 *puVar1;
  float *pfVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float *pfVar28;
  undefined4 uVar29;
  float local_6b8;
  float local_6b4;
  undefined1 auStack_610 [64];
  float local_5d0;
  float local_5cc;
  float local_5c0;
  float local_5bc;
  float local_5a0;
  float local_59c;
  undefined4 local_590 [5];
  undefined4 local_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  undefined4 local_564;
  float local_560;
  float local_55c;
  float local_558;
  undefined4 local_554;
  float local_550 [5];
  float local_53c;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined4 local_528;
  undefined8 local_524;
  undefined8 uStack_51c;
  undefined4 local_514;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  undefined4 local_4d0;
  undefined8 local_4cc;
  undefined8 local_4c4;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a4;
  undefined8 local_49c;
  undefined4 local_494;
  undefined1 auStack_490 [64];
  undefined1 auStack_450 [64];
  float local_410 [6];
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e4;
  undefined8 local_3dc;
  undefined4 local_3d4;
  float local_3d0;
  float local_3cc;
  float local_3c8 [6];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined8 local_394;
  undefined4 local_38c;
  float local_388 [6];
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined1 auStack_348 [64];
  undefined1 auStack_308 [68];
  float local_2c4;
  float local_2c0;
  undefined1 auStack_2bc [4];
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined8 local_284;
  undefined4 local_27c;
  float local_278;
  undefined1 auStack_274 [4];
  undefined1 auStack_270 [4];
  undefined1 auStack_26c [4];
  undefined1 auStack_268 [4];
  float local_264;
  float local_260;
  undefined1 auStack_25c [4];
  undefined1 auStack_258 [4];
  undefined1 auStack_254 [4];
  undefined1 auStack_250 [4];
  undefined1 auStack_24c [4];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined1 auStack_208 [64];
  float local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  float local_1b8;
  float local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_128 [64];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (param_13 == 0) {
    param_13 = *(long *)(param_9 + 0x29ab8);
  }
  if (param_14 == 0) {
    param_14 = *(long *)(param_9 + 0x29ac8);
  }
  uVar6 = 0xfffffffa;
  if ((((param_10 != 0) && (uVar6 = 0xfffffffa, param_11 != 0)) && (param_13 != 0)) &&
     (param_14 != 0)) {
    uVar6 = *param_15;
    local_e0 = param_15[1];
    local_d8 = param_15[2];
    local_d0 = param_15[3];
    fVar22 = (float)local_e0;
    local_e8._0_4_ = (float)uVar6;
    fVar18 = (float)local_e8;
    local_e8._4_4_ = (float)((ulong)uVar6 >> 0x20);
    fVar19 = local_e8._4_4_;
    local_c8 = param_15[4];
    local_c0 = param_15[5];
    fVar17 = (float)local_e8 * (float)local_e8 + local_e8._4_4_ * local_e8._4_4_ +
             (float)local_e0 * (float)local_e0;
    local_b8 = param_15[6];
    uStack_b0 = param_15[7];
    bVar4 = true;
    if ((fVar17 != 0.0) && (bVar4 = false, !NAN(fVar17))) {
      bVar4 = fVar17 == 1.0;
    }
    fVar20 = (float)local_e0;
    if (!bVar4) {
      fVar20 = SQRT(fVar17);
      if (NAN(fVar20)) {
        local_e8 = uVar6;
        fVar20 = sqrtf(fVar17);
      }
      fVar20 = 1.0 / fVar20;
      local_e8._0_4_ = fVar18 * fVar20;
      local_e8._4_4_ = fVar20 * fVar19;
      fVar20 = fVar20 * fVar22;
    }
    local_e0 = CONCAT44(local_e0._4_4_,fVar20);
    fVar22 = (float)local_d0;
    fVar18 = (float)local_d8;
    fVar19 = local_d8._4_4_;
    fVar20 = (float)local_d8 * (float)local_d8 + local_d8._4_4_ * local_d8._4_4_ +
             (float)local_d0 * (float)local_d0;
    fVar17 = (float)local_d0;
    if ((fVar20 != 0.0) && (fVar20 != 1.0)) {
      fVar17 = SQRT(fVar20);
      if (NAN(fVar17)) {
        fVar17 = sqrtf(fVar20);
      }
      fVar17 = 1.0 / fVar17;
      local_d8._0_4_ = fVar18 * fVar17;
      local_d8._4_4_ = fVar17 * fVar19;
      fVar17 = fVar17 * fVar22;
    }
    local_d0 = CONCAT44(local_d0._4_4_,fVar17);
    fVar22 = (float)local_c0;
    fVar18 = (float)local_c8;
    fVar19 = local_c8._4_4_;
    fVar20 = (float)local_c8 * (float)local_c8 + local_c8._4_4_ * local_c8._4_4_ +
             (float)local_c0 * (float)local_c0;
    fVar17 = (float)local_c0;
    if ((fVar20 != 0.0) && (fVar20 != 1.0)) {
      fVar17 = SQRT(fVar20);
      if (NAN(fVar17)) {
        fVar17 = sqrtf(fVar20);
      }
      fVar17 = 1.0 / fVar17;
      local_c8._0_4_ = fVar18 * fVar17;
      local_c8._4_4_ = fVar17 * fVar19;
      fVar17 = fVar17 * fVar22;
    }
    local_c0 = CONCAT44(local_c0._4_4_,fVar17);
    FUN_005156a0(auStack_128,&local_e8);
    if (3 < param_26) {
      param_26 = 4;
    }
    if (param_26 < 2) {
      param_26 = 1;
    }
    lVar7 = param_9 + ((long)param_26 + -1) * 4;
    piVar3 = (int *)(lVar7 + 0x22870);
    if ((param_27 & 1) == 0) {
      piVar3 = (int *)(lVar7 + 0x22850);
    }
    if (*piVar3 == 0) {
      piVar3 = (int *)(lVar7 + 0x22860);
      if ((param_27 & 1) == 0) {
        piVar3 = (int *)(lVar7 + 0x22840);
      }
      if (*piVar3 == 0) {
        return 0xfffffffc;
      }
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    lVar7 = *(long *)(param_9 + 0x20);
    if (*(char *)(lVar7 + 0x59) == '\0') {
      local_1a8 = *param_16;
      local_1a0 = param_16[1];
      local_198 = param_16[2];
      local_190 = param_16[3];
      local_188 = param_16[4];
      local_180 = param_16[5];
      local_178 = param_16[6];
      local_170 = param_16[7];
    }
    else {
      FUN_0050fa60(&local_1a8,param_16,0);
      lVar7 = *(long *)(param_9 + 0x20);
    }
    bVar4 = *(char *)(lVar7 + 0x58) == '\0';
    local_1b4 = 2.0;
    if (bVar4) {
      local_1b4 = -2.0;
    }
    param_6 = param_6 - param_4;
    local_1b4 = param_6 / local_1b4;
    fVar18 = -1.0;
    if (bVar4) {
      fVar18 = 1.0;
    }
    local_1b8 = (param_5 - param_3) * 0.5;
    local_1c8 = local_1b8 + param_3;
    local_1c4 = param_4 - fVar18 * local_1b4;
    local_1b0 = 0x3f800000;
    local_1c0 = 0;
    FUN_0050f710(auStack_208,&local_1b8,&local_1c8);
    FUN_00515cb0(&local_248,param_16,auStack_208);
    local_150 = local_230;
    local_148 = local_228;
    (**(code **)(**(long **)(param_9 + 0x30) + 200))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x144),&local_1a8,2);
    pfVar28 = &local_264;
    FUN_0050f790(&local_1a8,0,auStack_24c,auStack_250,auStack_254,auStack_258,auStack_25c,&local_260
                 ,pfVar28,auStack_268,auStack_26c,auStack_270,auStack_274,&local_278,0,0);
    local_6b4 = 0.0;
    if ((((param_7 == param_8) || (param_7 <= 0.0)) || (param_8 <= 0.0)) ||
       ((param_7 < param_8 && (param_8 <= local_260)))) {
      local_6b8 = 1.0;
    }
    else if ((param_7 <= param_8) || (local_6b8 = 1.0, param_8 < local_264)) {
      if (param_7 <= local_260) {
        param_7 = local_260;
      }
      param_7 = ((local_264 * (param_7 - local_260)) / (local_264 - local_260)) / param_7;
      local_6b4 = 1.0 / (((local_264 * (param_8 - local_260)) / (local_264 - local_260)) / param_8 -
                        param_7);
      local_6b8 = 0.0 - param_7 * local_6b4;
    }
    DAT_02760c18 = *param_17;
    DAT_02760c1c = (float)param_17[1];
    DAT_02760c20 = param_24;
    DAT_02760c24 = param_25;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,1);
    uStack_23c = 0;
    local_238 = 0;
    uStack_244 = 0;
    local_240 = 0;
    local_228 = 0;
    local_230 = 0;
    uStack_214 = 0;
    local_210 = 0;
    uStack_21c = 0;
    local_218 = 0;
    uStack_20c = 0x3f800000;
    local_220 = 0x3f800000;
    uStack_234 = 0x3f800000;
    local_248 = 0x3f800000;
    local_2b8 = 0x3f800000;
    local_2ac = 0;
    local_2b4 = 0;
    local_2a4 = 0x3f800000;
    local_298 = 0;
    local_2a0 = 0;
    local_290 = 0x3f800000;
    local_284 = 0;
    local_28c = 0;
    local_27c = 0x3f800000;
    FUN_0050fdb0(auStack_128,auStack_2bc,&local_2c0,&local_2c4);
    FUN_0050fe90(0,local_2c0,local_2c4,auStack_308);
    FUN_005156a0(auStack_348,auStack_308);
    fVar18 = local_2c0 / DAT_01d4c05c;
    if (fVar18 <= 0.0) {
      fVar18 = -fVar18;
    }
    fVar19 = fVar18;
    if (1.0 < fVar18) {
      fVar19 = 1.0;
    }
    local_388[0] = 1.0;
    if (0.0 <= fVar18) {
      local_388[0] = 1.0 - fVar19;
    }
    local_388[3] = 0.0;
    local_388[4] = 0.0;
    local_388[1] = 0.0;
    local_388[2] = 0.0;
    local_368 = 0;
    local_370 = 0;
    local_360 = 0x3f800000;
    local_354 = 0;
    local_35c = 0;
    local_34c = 0x3f800000;
    local_388[5] = local_388[0];
    FUN_0050fa30(param_16,&local_3d0,(ulong)&local_3d0 | 4);
    local_3c8[0] = 1.0 / local_3d0;
    local_3c8[5] = 1.0 / local_3cc;
    local_3c8[3] = 0.0;
    local_3c8[4] = 0.0;
    local_3c8[1] = 0.0;
    local_3c8[2] = 0.0;
    local_410[0] = (local_1b8 + local_1b8) * local_278;
    local_410[5] = local_1b4 + local_1b4;
    local_3a8 = 0;
    local_3b0 = 0;
    local_3a0 = 0x3f800000;
    local_394 = 0;
    local_39c = 0;
    local_38c = 0x3f800000;
    local_410[3] = 0.0;
    local_410[4] = 0.0;
    local_410[1] = 0.0;
    local_410[2] = 0.0;
    local_3f0 = 0;
    local_3f8 = 0;
    local_3e8 = 0x3f800000;
    local_3dc = 0;
    local_3e4 = 0;
    local_3d4 = 0x3f800000;
    FUN_00515cb0(&local_248,&local_248,&local_2b8);
    FUN_00515cb0(&local_248,&local_248,auStack_308);
    FUN_00515cb0(&local_248,&local_248,local_388);
    FUN_00515cb0(&local_248,&local_248,local_3c8);
    FUN_00515cb0(&local_248,&local_248,local_410);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x138),&local_248);
    DAT_02760c18 = 0x3c23d70a;
    if ((param_27 & 1) == 0) {
      fVar18 = param_6;
      if (param_6 <= 0.0) {
        fVar18 = -param_6;
      }
      DAT_02760c1c = (fVar18 / param_2) * 0.5 * param_18[3];
    }
    else {
      DAT_02760c1c = DAT_01d4bc78;
    }
    if (((DAT_02760710 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_02760710), iVar5 != 0)) {
      DAT_027607b0 = 0x3f8000003f800000;
      DAT_027607b8 = 0x3f8000003f800000;
      __cxa_guard_release(&DAT_02760710);
    }
    DAT_02760c28._0_4_ = (float)DAT_027607b0;
    DAT_02760c28._4_4_ = (float)((ulong)DAT_027607b0 >> 0x20);
    DAT_02760c30._0_4_ = (float)DAT_027607b8;
    DAT_02760c28 = CONCAT44(param_18[1] * DAT_02760c28._4_4_,*param_18 * (float)DAT_02760c28);
    DAT_02760c30._4_4_ = (float)((ulong)DAT_027607b8 >> 0x20);
    if ((param_27 & 1) == 0) {
      fVar18 = 1.0;
    }
    else {
      if (param_6 <= 0.0) {
        param_6 = -param_6;
      }
      fVar18 = DAT_02760c30._4_4_ * param_6 * param_2 * param_18[3];
    }
    DAT_02760c30 = CONCAT44(fVar18,param_18[2] * (float)DAT_02760c30);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,2);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_12);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),param_13);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x48),param_14);
    puVar1 = (undefined8 *)(param_9 + 0x29be0);
    lVar7 = FUN_00549260(*puVar1,6,0,param_10 * 0xb0);
    FUN_0050fe90(0,local_2c0,0,auStack_450);
    FUN_005156a0(auStack_490,auStack_450);
    fVar18 = sinf(-local_2c4);
    fVar19 = cosf(local_2c4);
    uVar29 = (undefined4)((ulong)pfVar28 >> 0x20);
    local_4f0 = -param_19;
    local_510 = 0x3f80000000000000;
    local_4c4 = 0;
    local_4cc = 0;
    local_4b0 = 0;
    local_4b8 = 0;
    local_49c = 0;
    local_4a4 = 0;
    local_494 = 0x3f800000;
    local_4a8 = 0x3f800000;
    local_4bc = 0x3f800000;
    local_4d0 = 0x3f800000;
    local_4ec = param_19;
    local_4e8 = param_19;
    local_4e4 = param_19;
    local_4d8 = param_19;
    local_508 = 0x3f8000003f800000;
    local_500 = 0;
    local_4f8 = 0x3f800000;
    local_4e0 = local_4f0;
    local_4dc = local_4f0;
    local_4d4 = local_4f0;
    if (0 < (int)param_10) {
      pfVar12 = (float *)(param_11 + 0x10);
      uVar8 = 0;
      uVar9 = 0;
      do {
        pfVar10 = (float *)(param_11 + uVar9 * 0x38);
        fVar20 = pfVar10[2];
        fVar17 = pfVar10[3];
        fVar25 = fVar20 - fVar17 * param_20;
        fVar20 = ((local_264 * (fVar20 - local_260)) / (local_264 - local_260)) / fVar20;
        fVar25 = ((local_264 * (fVar25 - local_260)) / (local_264 - local_260)) / fVar25;
        fVar22 = fVar20;
        if (1.0 < fVar20) {
          fVar22 = 1.0;
        }
        fVar27 = fVar25;
        if (1.0 < fVar25) {
          fVar27 = 1.0;
        }
        fVar23 = 0.0;
        if (0.0 <= fVar20) {
          fVar23 = fVar22;
        }
        fVar22 = 0.0;
        if (0.0 <= fVar25) {
          fVar22 = fVar27;
        }
        fVar27 = 1.0 / ((fVar23 - fVar22) + 0.0);
        fVar25 = local_6b8 + local_6b4 * fVar22;
        fVar20 = fVar25;
        if (1.0 < fVar25) {
          fVar20 = 1.0;
        }
        fVar21 = 0.0;
        if (0.0 <= fVar25) {
          fVar21 = fVar20;
        }
        fVar20 = pfVar10[0xd];
        lVar11 = 0;
        pfVar13 = pfVar12;
        pfVar14 = param_21;
        pfVar15 = (float *)((ulong)&local_4f0 | 4);
        pfVar16 = (float *)((ulong)&local_510 | 4);
        while( true ) {
          fVar25 = pfVar15[-1];
          fVar26 = *pfVar15;
          fVar24 = pfVar10[1];
          pfVar2 = (float *)(lVar7 + (uVar8 >> 2 & 0x3fffffff) * 0xb0 + lVar11);
          *pfVar2 = *pfVar10 + fVar17 * (fVar19 * fVar25 - fVar18 * fVar26);
          pfVar2[1] = fVar24 + fVar17 * (fVar18 * fVar25 + fVar19 * fVar26);
          pfVar2[2] = pfVar10[2];
          fVar25 = pfVar16[-1];
          pfVar2[3] = fVar25;
          fVar17 = *pfVar16;
          pfVar2[4] = fVar17;
          local_550[0] = pfVar10[8];
          local_53c = pfVar10[9];
          fVar24 = *param_22;
          fVar26 = param_22[1];
          *(undefined8 *)((ulong)local_550 | 4) = 0;
          ((undefined8 *)((ulong)local_550 | 4))[1] = 0;
          local_538 = 0;
          uStack_530 = 0;
          local_550[0] = local_550[0] * fVar24;
          local_53c = local_53c * fVar26;
          local_524 = 0;
          uStack_51c = 0;
          local_528 = 0x3f800000;
          local_514 = 0x3f800000;
          local_558 = param_23[2];
          local_560 = *param_23 + pfVar10[10];
          fVar24 = pfVar10[0xc];
          local_564 = 0;
          local_55c = param_23[1] + pfVar10[0xb];
          *(undefined8 *)((ulong)local_590 | 4) = 0;
          ((undefined8 *)((ulong)local_590 | 4))[1] = 0;
          local_558 = local_558 + fVar24;
          local_578 = 0;
          uStack_570 = 0;
          local_554 = 0x3f800000;
          local_568 = 0x3f800000;
          local_57c = 0x3f800000;
          local_590[0] = 0x3f800000;
          FUN_00515cb0(auStack_610,local_550,local_590);
          FUN_00515cb0(&local_5d0,auStack_610,&local_4d0);
          uVar29 = (undefined4)((ulong)pfVar28 >> 0x20);
          pfVar2[5] = local_5a0 + local_5d0 * fVar25 + local_5c0 * fVar17;
          pfVar2[6] = local_59c + local_5cc * fVar25 + local_5bc * fVar17;
          fVar17 = *pfVar13;
          fVar25 = *pfVar14;
          pfVar2[8] = 1.0;
          pfVar2[9] = fVar27;
          pfVar2[10] = (fVar23 - fVar22) * fVar27 + 0.0;
          pfVar2[7] = ((1.0 - fVar20) + (1.0 - (1.0 - fVar20)) * fVar21) * fVar17 * fVar25;
          if (lVar11 == 0x84) break;
          fVar17 = pfVar10[3];
          lVar11 = lVar11 + 0x2c;
          pfVar13 = pfVar13 + 1;
          pfVar14 = pfVar14 + 1;
          pfVar16 = pfVar16 + 2;
          pfVar15 = pfVar15 + 2;
        }
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 + 4;
        pfVar12 = pfVar12 + 0xe;
      } while (uVar9 != param_10);
    }
    FUN_00549430(*puVar1);
    uVar6 = FUN_00573360(param_9,param_10 * 6,0,param_10 * 4 + -1,*puVar1,
                         *(undefined8 *)(param_9 + 0x29be8),0,0,CONCAT44(uVar29,param_28));
  }
  return uVar6;
}


