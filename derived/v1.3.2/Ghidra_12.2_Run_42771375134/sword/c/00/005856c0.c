/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005856c0; name: FUN_005856c0
 */


/* WARNING: Removing unreachable block (ram,0x00586620) */

undefined8
FUN_005856c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4 [16],
            undefined8 param_5,long param_6,long param_7,long param_8,long param_9,long param_10,
            long param_11,long param_12,long param_13,long *param_14,float *param_15,byte param_16,
            undefined8 *param_17,undefined8 *param_18,undefined8 param_19,undefined8 param_20,
            long param_21,undefined4 param_22,undefined8 param_23,float *param_24,
            undefined8 param_25,uint param_26,float *param_27,byte param_28,byte param_29,
            float *param_30,undefined4 param_31,ulong param_32,undefined4 param_33,float *param_34,
            byte param_35)

{
  int iVar1;
  char cVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulong in_stack_fffffffffffffa50;
  uint7 uVar40;
  undefined8 *puVar39;
  undefined8 in_stack_fffffffffffffa58;
  ulong uVar41;
  uint *puVar42;
  undefined8 uVar43;
  uint local_4d8;
  uint local_4d4;
  undefined8 local_490;
  undefined8 local_488;
  float local_480 [60];
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  float local_380;
  float local_37c;
  undefined1 local_378 [8];
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  float local_338;
  float fStack_334;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  float local_2f8;
  float local_2f4;
  float local_2b8;
  float local_2b4;
  undefined8 local_278;
  undefined8 local_270;
  long local_238 [8];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  undefined1 auStack_1b0 [56];
  undefined1 auStack_178 [56];
  float local_140;
  undefined1 auStack_13c [4];
  float local_138;
  uint local_134;
  undefined8 local_130;
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
  undefined8 local_b0;
  
  uVar9 = (undefined4)((ulong)in_stack_fffffffffffffa58 >> 0x20);
  if ((param_10 == 0) ||
     (*(uint *)(param_7 + 0x54) <=
      *(uint *)(*(long *)(*(long *)(param_10 + 0x38) + (long)*(int *)(param_10 + 0x90) * 8) + 0x54))
     ) {
    lVar16 = 0;
    bVar5 = false;
    lVar21 = param_7;
  }
  else {
    if (*(int *)(param_10 + 0x30) < 2) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(param_10 + 0x38) + 8);
    }
    local_490 = 0x3f8000003f800000;
    local_488 = 0x3f8000003f800000;
    bVar5 = true;
    local_e8 = 0;
    local_e0 = 0;
    uVar13 = CONCAT44(uVar9,1);
    FUN_0057da10(0,0,0,0x3f800000,param_6,param_7,lVar16,0,0,&local_490,0,0,
                 in_stack_fffffffffffffa50 & 0xffffffffffffff00,uVar13,&local_e8,0,0xffffffff);
    uVar9 = (undefined4)((ulong)uVar13 >> 0x20);
    lVar21 = lVar16;
  }
  uVar13 = *param_17;
  local_e0 = param_17[1];
  local_d8 = param_17[2];
  local_d0 = param_17[3];
  fVar23 = (float)local_e0;
  local_e8._0_4_ = (float)uVar13;
  fVar20 = (float)local_e8;
  local_e8._4_4_ = (float)((ulong)uVar13 >> 0x20);
  fVar3 = local_e8._4_4_;
  local_c8 = param_17[4];
  local_c0 = param_17[5];
  local_b8 = param_17[6];
  local_b0 = param_17[7];
  fVar22 = (float)local_e8 * (float)local_e8 + local_e8._4_4_ * local_e8._4_4_ +
           (float)local_e0 * (float)local_e0;
  local_128 = *param_18;
  local_120 = param_18[1];
  local_118 = param_18[2];
  local_110 = param_18[3];
  local_108 = param_18[4];
  local_100 = param_18[5];
  local_f8 = param_18[6];
  local_f0 = param_18[7];
  fVar24 = (float)local_e0;
  if ((fVar22 != 0.0) && (fVar22 != 1.0)) {
    fVar24 = SQRT(fVar22);
    if (NAN(fVar24)) {
      local_e8 = uVar13;
      fVar24 = sqrtf(fVar22);
    }
    fVar24 = 1.0 / fVar24;
    local_e8._0_4_ = fVar20 * fVar24;
    local_e8._4_4_ = fVar24 * fVar3;
    fVar24 = fVar24 * fVar23;
  }
  fVar20 = (float)local_d8;
  fVar3 = local_d8._4_4_;
  local_e0 = CONCAT44(local_e0._4_4_,fVar24);
  fVar23 = (float)local_d0;
  fVar22 = (float)local_d8 * (float)local_d8 + local_d8._4_4_ * local_d8._4_4_ +
           (float)local_d0 * (float)local_d0;
  fVar24 = (float)local_d0;
  if ((fVar22 != 0.0) && (fVar22 != 1.0)) {
    fVar24 = SQRT(fVar22);
    if (NAN(fVar24)) {
      fVar24 = sqrtf(fVar22);
    }
    fVar24 = 1.0 / fVar24;
    local_d8._0_4_ = fVar20 * fVar24;
    local_d8._4_4_ = fVar24 * fVar3;
    fVar24 = fVar24 * fVar23;
  }
  fVar20 = (float)local_c8;
  fVar3 = local_c8._4_4_;
  local_d0 = CONCAT44(local_d0._4_4_,fVar24);
  fVar23 = (float)local_c0;
  fVar22 = (float)local_c8 * (float)local_c8 + local_c8._4_4_ * local_c8._4_4_ +
           (float)local_c0 * (float)local_c0;
  fVar24 = (float)local_c0;
  if ((fVar22 != 0.0) && (fVar22 != 1.0)) {
    fVar24 = SQRT(fVar22);
    if (NAN(fVar24)) {
      fVar24 = sqrtf(fVar22);
    }
    fVar24 = 1.0 / fVar24;
    local_c8._0_4_ = fVar20 * fVar24;
    local_c8._4_4_ = fVar24 * fVar3;
    fVar24 = fVar24 * fVar23;
  }
  fVar20 = (float)local_128;
  fVar3 = local_128._4_4_;
  local_c0 = CONCAT44(local_c0._4_4_,fVar24);
  fVar23 = (float)local_120;
  fVar22 = (float)local_128 * (float)local_128 + local_128._4_4_ * local_128._4_4_ +
           (float)local_120 * (float)local_120;
  fVar24 = (float)local_120;
  if ((fVar22 != 0.0) && (fVar22 != 1.0)) {
    fVar24 = SQRT(fVar22);
    if (NAN(fVar24)) {
      fVar24 = sqrtf(fVar22);
    }
    fVar24 = 1.0 / fVar24;
    local_128._0_4_ = fVar20 * fVar24;
    local_128._4_4_ = fVar24 * fVar3;
    fVar24 = fVar24 * fVar23;
  }
  fVar20 = (float)local_118;
  fVar3 = local_118._4_4_;
  local_120 = CONCAT44(local_120._4_4_,fVar24);
  fVar23 = (float)local_110;
  fVar22 = (float)local_118 * (float)local_118 + local_118._4_4_ * local_118._4_4_ +
           (float)local_110 * (float)local_110;
  fVar24 = (float)local_110;
  if ((fVar22 != 0.0) && (fVar22 != 1.0)) {
    fVar24 = SQRT(fVar22);
    if (NAN(fVar24)) {
      fVar24 = sqrtf(fVar22);
    }
    fVar24 = 1.0 / fVar24;
    local_118._0_4_ = fVar20 * fVar24;
    local_118._4_4_ = fVar24 * fVar3;
    fVar24 = fVar24 * fVar23;
  }
  local_110 = CONCAT44(local_110._4_4_,fVar24);
  fVar20 = (float)local_108;
  fVar3 = local_108._4_4_;
  fVar23 = (float)local_100;
  fVar22 = (float)local_108 * (float)local_108 + local_108._4_4_ * local_108._4_4_ +
           (float)local_100 * (float)local_100;
  fVar24 = (float)local_100;
  if ((fVar22 != 0.0) && (fVar22 != 1.0)) {
    fVar24 = SQRT(fVar22);
    if (NAN(fVar24)) {
      fVar24 = sqrtf(fVar22);
    }
    fVar24 = 1.0 / fVar24;
    local_108._0_4_ = fVar20 * fVar24;
    local_108._4_4_ = fVar24 * fVar3;
    fVar24 = fVar24 * fVar23;
  }
  pfVar15 = &local_140;
  puVar39 = &local_130;
  lVar12 = (long)&local_130 + 4;
  puVar42 = &local_134;
  lVar18 = param_7;
  if (param_21 != 0) {
    lVar18 = param_21;
  }
  local_100 = CONCAT44(local_100._4_4_,fVar24);
  uVar41 = CONCAT44(uVar9,param_33);
  FUN_00583f00(param_1,param_2,param_5,param_6,lVar21,&local_e8,&local_128,param_19,param_20,
               param_29 & 1,param_31,param_32,uVar41,puVar42,lVar12,puVar39,&local_138,auStack_13c,
               pfVar15,auStack_178,auStack_1b0);
  uVar19 = (uint)((ulong)puVar42 >> 0x20);
  uVar11 = (undefined4)((ulong)lVar12 >> 0x20);
  uVar9 = (undefined4)(uVar41 >> 0x20);
  uVar27 = (undefined4)((ulong)puVar39 >> 0x20);
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(lVar21 + 0x58));
  fVar23 = local_138 / fVar23;
  fVar20 = param_27[1];
  fVar3 = *param_27;
  if (param_12 == 0 && ((param_16 ^ 0xff) & 1) == 0) {
    fVar20 = fVar23;
    fVar3 = fVar23;
  }
  if (local_130._4_4_ == 0) {
    if (param_7 == param_8) {
      return 0;
    }
    local_130 = 0;
    local_138 = 0.0;
    local_140 = 0.0;
    FUN_0059d000(0,0);
    local_490 = 0;
    local_488 = 0;
    uVar13 = FUN_0057da10(0,0,0,0x3f800000,param_6,param_7,param_8,0,0,param_34,0,0,
                          param_32 & 0xffffffffffffff00,CONCAT44(uVar9,1),&local_490,0,
                          CONCAT44(uVar27,0xffffffff));
    return uVar13;
  }
  local_4d8 = param_26;
  FUN_0059d000(0,0);
  if ((param_35 & 1) != 0) {
    (**(code **)(**(long **)(param_6 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_6 + 0x20) + 0x140))(*(long **)(param_6 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_6 + 0x20) + 0x150))(*(long **)(param_6 + 0x20),0);
  }
  lVar12 = lVar21;
  do {
    lVar10 = lVar12;
    lVar12 = *(long *)(lVar10 + 0x120);
  } while (lVar12 != 0);
  lVar10 = *(long *)(lVar10 + 0xa8);
  lVar12 = param_11;
  do {
    lVar14 = lVar12;
    lVar12 = *(long *)(lVar14 + 0x120);
  } while (lVar12 != 0);
  lVar12 = *(long *)(lVar14 + 0xa8);
  if (*(int *)(lVar10 + 0x4c) == *(int *)(lVar12 + 0x4c)) {
    bVar4 = *(int *)(lVar10 + 0x50) == *(int *)(lVar12 + 0x50);
  }
  else {
    bVar4 = false;
  }
  uVar9 = *(undefined4 *)PTR_DAT_02713c90;
  lVar12 = lVar21;
  do {
    lVar10 = lVar12;
    lVar12 = *(long *)(lVar10 + 0x120);
  } while (lVar12 != 0);
  plVar8 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar8 + 0x78))(plVar8,uVar9);
  lVar12 = param_8;
  do {
    lVar10 = lVar12;
    lVar12 = *(long *)(lVar10 + 0x120);
  } while (lVar12 != 0);
  plVar8 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar8 + 0x78))(plVar8,uVar9);
  if (param_9 != 0) {
    lVar12 = param_9;
    do {
      lVar10 = lVar12;
      lVar12 = *(long *)(lVar10 + 0x120);
    } while (lVar12 != 0);
    plVar8 = *(long **)(lVar10 + 0xa8);
    (**(code **)(*plVar8 + 0x78))(plVar8,uVar9);
  }
  lVar12 = param_11;
  do {
    lVar10 = lVar12;
    lVar12 = *(long *)(lVar10 + 0x120);
  } while (lVar12 != 0);
  plVar8 = *(long **)(lVar10 + 0xa8);
  uVar9 = *(undefined4 *)PTR_DAT_02713c88;
  if (!bVar4) {
    uVar9 = *(undefined4 *)PTR_DAT_02713c90;
  }
  (**(code **)(*plVar8 + 0x78))(plVar8,uVar9);
  fVar29 = (float)NEON_ucvtf(*(undefined4 *)(lVar21 + 0x58));
  fVar25 = (float)NEON_ucvtf(*(undefined4 *)(lVar21 + 0x54));
  fVar24 = *(float *)(lVar21 + 0x88);
  fVar22 = *(float *)(lVar21 + 0x8c);
  fVar36 = *(float *)(lVar21 + 0x90);
  fVar34 = *(float *)(lVar21 + 0x94);
  local_4d4 = FUN_005280e0(*(undefined4 *)(param_11 + 0x38));
  if ((param_12 != 0) && (param_26 == 0xfffffffe)) {
    uVar6 = FUN_005280e0(*(undefined4 *)(param_12 + 0x38));
    local_4d8 = ~uVar6 & 1;
  }
  fVar36 = fVar24 * fVar25 + fVar36;
  fVar34 = fVar22 * fVar29 + fVar34;
  FUN_0050fa30(param_19,&local_1b4,&local_1b8);
  uVar6 = (uint)(uVar41 >> 0x20);
  fVar24 = local_1b4 / local_1b8;
  if ((param_16 & 1) != 0) {
    iVar1 = *(int *)(param_11 + 0xa0);
    if (iVar1 != 1) {
      *(undefined4 *)(param_11 + 0xa0) = 1;
    }
    FUN_005156a0(&local_490,param_19);
    local_1e0 = local_d0;
    local_1e8 = local_d8;
    local_1f0 = local_e0;
    local_1f8 = local_e8;
    local_1c0 = local_b0;
    local_1c8 = local_b8;
    local_1d0 = local_c0;
    local_1d8 = local_c8;
    FUN_00515cb0(local_238,&local_490,&local_1f8);
    FUN_005156a0(&local_278,&local_128);
    FUN_00515cb0(&local_2b8,&local_278,param_20);
    FUN_00515cb0(&local_2f8,local_238,&local_2b8);
    FUN_005156a0(&local_338,&local_2f8);
    uVar9 = 0;
    local_350 = local_310;
    local_380 = (0.5 / fVar3) * fVar24;
    local_368 = local_328;
    local_370 = local_330;
    local_360 = local_320;
    local_358 = local_318;
    local_340 = local_300;
    local_37c = -0.5 / fVar20;
    local_348 = local_308;
    bVar4 = (local_4d4 & 1) == 0;
    local_388 = 0x3f800000;
    if (bVar4) {
      local_388 = 0x3f000000;
    }
    local_384 = 0;
    if (bVar4) {
      local_384 = 0x3f000000;
    }
    local_390 = 0x3f800000;
    if (local_4d8 != 0) {
      local_390 = 0x3f000000;
    }
    local_38c = 0;
    if (local_4d8 != 0) {
      local_38c = 0x3f000000;
    }
    FUN_0059d300(param_11,0,0,1,0,0);
    if (param_12 == 0) {
      fVar22 = 1.0;
      fVar32 = 1.0;
    }
    else {
      fVar26 = (float)NEON_ucvtf(*(undefined4 *)(param_12 + 0x58));
      uVar9 = 0;
      fVar22 = (float)NEON_ucvtf(*(undefined4 *)(param_12 + 0x54));
      fVar32 = *(float *)(param_12 + 0x88) * fVar22 + *(float *)(param_12 + 0x90);
      fVar22 = *(float *)(param_12 + 0x8c) * fVar26 + *(float *)(param_12 + 0x94);
    }
    uVar27 = NEON_ucvtf(*(undefined4 *)(param_11 + 0x54));
    uVar30 = NEON_ucvtf(*(undefined4 *)(param_11 + 0x58));
    do {
      lVar21 = lVar18;
      lVar18 = *(long *)(lVar21 + 0x120);
    } while (lVar18 != 0);
    if (param_12 == 0) {
      uVar13 = 0;
    }
    else {
      do {
        lVar12 = param_12;
        param_12 = *(long *)(lVar12 + 0x120);
      } while (param_12 != 0);
      uVar13 = *(undefined8 *)(lVar12 + 0xa8);
    }
    uVar43 = CONCAT44(uVar19,fVar32);
    uVar41 = uVar41 & 0xffffffff00000000;
    param_32 = param_32 & 0xffffffff00000000;
    FUN_0057a0e0(0,0,CONCAT44(uVar9,uVar27),uVar30,0,0,fVar36,fVar34,param_6,auStack_178,local_378,
                 &local_380,&local_388,&local_390,param_22,param_23,param_32,uVar41,uVar43,
                 CONCAT44(uVar11,fVar22),param_25,*(undefined8 *)(lVar21 + 0xa8),uVar13,
                 (ulong)pfVar15 & 0xffffffff00000000);
    uVar6 = (uint)(uVar41 >> 0x20);
    uVar19 = (uint)((ulong)uVar43 >> 0x20);
    FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
    if (*(int *)(param_11 + 0xa0) != iVar1) {
      *(int *)(param_11 + 0xa0) = iVar1;
    }
    param_29 = 0;
  }
  lVar21 = param_11;
  if (param_13 == 0) {
    cVar2 = *(char *)(*(long *)(param_6 + 0x20) + 0x58);
  }
  else {
    if ((local_4d4 & 1) == 0) {
      uVar7 = 0;
      if (bVar5) goto LAB_005860f8;
LAB_00586114:
      lVar12 = *param_14;
      uVar17 = 0;
      if (lVar12 != 0) {
        if (((uVar7 ^ 1) & 1) == 0) goto LAB_00586130;
        goto LAB_00586218;
      }
    }
    else {
      uVar7 = FUN_005280e0(*(undefined4 *)
                            (*(long *)(*(long *)(param_13 + 0x38) +
                                      (long)*(int *)(param_13 + 0x90) * 8) + 0x38));
      uVar7 = uVar7 ^ 1;
      if (!bVar5) goto LAB_00586114;
LAB_005860f8:
      if (*(uint *)(param_11 + 0x54) <=
          *(uint *)(*(long *)(*(long *)(param_10 + 0x38) + (long)*(int *)(param_10 + 0x90) * 8) +
                   0x54)) goto LAB_00586114;
LAB_00586130:
      if (*(int *)(param_13 + 0x30) < 1) {
        lVar21 = 0;
      }
      else {
        lVar21 = **(long **)(param_13 + 0x38);
      }
      uVar17 = (uint)(*(int *)(param_13 + 0x30) != 1);
      FUN_0059d300(lVar21,0,0,1,0,0);
      bVar4 = (uVar7 & 1) == 0;
      uVar9 = 0x3f000000;
      if (bVar4) {
        uVar9 = 0x3f800000;
      }
      uVar11 = 0x3f000000;
      if (bVar4) {
        uVar11 = 0;
      }
      local_490 = CONCAT44(uVar9,uVar9);
      local_488 = CONCAT44(uVar11,uVar11);
      lVar12 = param_11;
      do {
        lVar18 = lVar12;
        lVar12 = *(long *)(lVar18 + 0x120);
      } while (lVar12 != 0);
      FUN_0057ab10(0,0,(float)*(uint *)(lVar21 + 0x54),(float)*(uint *)(lVar21 + 0x58),0,0,
                   *(float *)(param_11 + 0x88) * (float)*(uint *)(param_11 + 0x54) +
                   *(float *)(param_11 + 0x90),
                   *(float *)(param_11 + 0x8c) * (float)*(uint *)(param_11 + 0x58) +
                   *(float *)(param_11 + 0x94),param_6,&local_490,*(undefined8 *)(lVar18 + 0xa8),
                   param_33,0);
      local_4d4 = local_4d4 & (uVar7 ^ 1);
      lVar12 = *param_14;
LAB_00586218:
      if (lVar12 != 0) {
        lVar18 = lVar21;
        if (lVar12 == 1) {
          fVar22 = *param_15;
          if (*param_15 <= param_15[1]) {
            fVar22 = param_15[1];
          }
          if (0.0 < fVar22) {
            if ((int)uVar17 < *(int *)(param_13 + 0x30)) {
              lVar18 = *(long *)(*(long *)(param_13 + 0x38) + (ulong)uVar17 * 8);
            }
            else {
              lVar18 = 0;
            }
            uVar40 = (uint7)(param_32 >> 8);
            if (DAT_01d4c29c <= fVar22) {
              local_490 = 0x3f8000003f800000;
              local_488 = 0x3f8000003f800000;
              FUN_00587160(0x3f800000,param_6,lVar21,lVar18,param_15,0,&local_490,0,0,
                           (ulong)uVar40 << 8,(ulong)uVar6 << 0x20,(ulong)uVar19 << 0x20);
            }
            else {
              local_490 = 0x3f8000003f800000;
              local_488 = 0x3f8000003f800000;
              FUN_00586b30(0x3f800000,param_6,lVar21,lVar18,param_15,0,&local_490,0,0,
                           (ulong)uVar40 << 8,(ulong)uVar6 << 0x20,(ulong)uVar19 << 0x20);
            }
          }
        }
        if (lVar21 != lVar18) {
          param_11 = lVar18;
        }
        lVar21 = lVar18;
      }
    }
    cVar2 = *(char *)(*(long *)(param_6 + 0x20) + 0x58);
  }
  if (cVar2 != '\0') {
    fVar20 = -fVar20;
  }
  if (!bVar5) {
    local_238[0] = param_9;
    local_238[1] = param_7;
    goto LAB_005863c8;
  }
  iVar1 = *(int *)(param_10 + 0x30);
  local_238[1] = lVar16;
  if (iVar1 < 1) {
    if (lVar16 == 0) goto LAB_00586388;
joined_r0x005863b4:
    local_238[0] = 0;
    if (iVar1 < 2) goto LAB_005863b8;
LAB_00586348:
    if (*(long *)(*(long *)(param_10 + 0x38) + 8) != lVar16) goto LAB_005863c8;
  }
  else {
    if (**(long **)(param_10 + 0x38) != lVar16) goto joined_r0x005863b4;
LAB_00586388:
    if (iVar1 < 2) goto joined_r0x005863b4;
    local_238[0] = *(long *)(*(long *)(param_10 + 0x38) + 8);
    if (1 < iVar1) goto LAB_00586348;
LAB_005863b8:
    if (lVar16 != 0) goto LAB_005863c8;
  }
  if (iVar1 < 1) {
    local_238[0] = 0;
  }
  else {
    local_238[0] = **(long **)(param_10 + 0x38);
  }
LAB_005863c8:
  lVar16 = local_238[1];
  fVar22 = *param_30;
  fVar32 = param_30[1];
  FUN_005629a0(&local_1f8,&local_e8);
  local_1e0 = CONCAT44(local_1e0._4_4_,(undefined4)local_b0);
  puVar39 = &local_1c8;
  local_1e8 = local_b8;
  uVar13 = 0;
  uVar41 = 0;
  FUN_0050f790(param_19,0,0,(long)&local_1e0 + 4,&local_1d8,(long)&local_1d8 + 4,&local_1d0,
               (long)&local_1d0 + 4,puVar39,0,0,0,0,0,0,0);
  uVar9 = (undefined4)(uVar41 >> 0x20);
  uVar11 = (undefined4)((ulong)uVar13 >> 0x20);
  fVar26 = (float)param_1;
  if (fVar32 <= 0.0) {
    fVar22 = fVar22 * *param_24;
  }
  else if (fVar22 == 0.0) {
    fVar22 = 0.0;
  }
  else {
    fVar28 = (float)local_1c8;
    if (fVar32 <= (float)local_1c8) {
      fVar28 = fVar32;
    }
    fVar35 = local_1d0._4_4_;
    if (local_1d0._4_4_ <= fVar32) {
      fVar35 = fVar28;
    }
    fVar22 = (param_24[1] +
             *param_24 *
             ((((float)local_1c8 * ((fVar22 + fVar35) - local_1d0._4_4_)) /
              ((float)local_1c8 - local_1d0._4_4_)) / (fVar22 + fVar35))) -
             (param_24[1] +
             *param_24 *
             ((((float)local_1c8 * (fVar35 - local_1d0._4_4_)) /
              ((float)local_1c8 - local_1d0._4_4_)) / fVar35));
  }
  if ((param_29 & 1) == 0) {
    fVar23 = 0.0;
  }
  if (0 < local_130._4_4_) {
    bVar4 = (local_4d4 & 1) == 0;
    fVar32 = 0.0;
    if (bVar4) {
      fVar32 = -1.0;
    }
    fVar28 = 1.0;
    if (bVar4) {
      fVar28 = 2.0;
    }
    fVar32 = fVar32 + fVar28 * 0.0;
    uVar19 = 0;
    lVar12 = lVar16;
    do {
      uVar9 = (undefined4)((ulong)uVar13 >> 0x20);
      puVar42 = (uint *)&local_130;
      if (uVar19 != 0) {
        puVar42 = &local_134;
      }
      uVar6 = *puVar42;
      if (uVar19 == local_130._4_4_ - 1U) {
        lVar16 = param_8;
        if (bVar5) {
          lVar16 = local_238[uVar19 & 1];
        }
        fVar35 = *param_34;
        fVar33 = param_34[1];
        fVar37 = param_34[2];
        fVar38 = param_34[3];
      }
      else {
        fVar35 = 1.0;
        lVar16 = local_238[uVar19 & 1];
        fVar33 = 1.0;
        fVar37 = 1.0;
        fVar38 = 1.0;
      }
      FUN_0059d300(lVar16,0,0,1,0,0);
      if (0 < (int)uVar6) {
        fVar31 = 1.0 / (float)(int)uVar6;
        fVar35 = fVar31 * fVar35;
        fVar33 = fVar31 * fVar33;
        fVar37 = fVar31 * fVar37;
        fVar31 = fVar31 * fVar38;
        if (uVar6 == 1) {
          lVar18 = 0;
        }
        else {
          lVar18 = 0;
          pfVar15 = local_480;
          do {
            lVar18 = lVar18 + 2;
            pfVar15[-4] = fVar35;
            pfVar15[-3] = fVar33;
            pfVar15[-2] = fVar37;
            pfVar15[-1] = fVar31;
            *pfVar15 = fVar35;
            pfVar15[1] = fVar33;
            pfVar15[2] = fVar37;
            pfVar15[3] = fVar31;
            pfVar15 = pfVar15 + 8;
          } while ((ulong)uVar6 - ((ulong)uVar6 & 1) != lVar18);
          if ((uVar6 & 1) == 0) goto LAB_00586664;
        }
        local_480[lVar18 * 4 + -4] = fVar35;
        local_480[lVar18 * 4 + -3] = fVar33;
        local_480[lVar18 * 4 + -2] = fVar37;
        local_480[lVar18 * 4 + -1] = fVar31;
      }
LAB_00586664:
      local_338 = powf((float)(int)local_134,(float)(int)(local_130._4_4_ + ~uVar19));
      fVar37 = local_338 * local_140;
      fVar35 = (float)NEON_ucvtf(*(undefined4 *)(lVar21 + 0x54));
      local_338 = 1.0 / local_338;
      fVar35 = *(float *)(lVar21 + 0x88) * fVar35 + *(float *)(lVar21 + 0x90);
      fVar33 = (float)NEON_ucvtf(*(undefined4 *)(lVar21 + 0x58));
      local_2b8 = (fVar36 / fVar24) * fVar36 * fVar37;
      local_2b4 = fVar34 * fVar34 * fVar37;
      fVar33 = *(float *)(lVar21 + 0x8c) * fVar33 + *(float *)(lVar21 + 0x94);
      local_270 = CONCAT44(fVar20 * fVar26 * fVar32 + 0.0,fVar3 * fVar26 * fVar32 + 0.0);
      local_278 = CONCAT44(fVar20 * fVar26 * fVar28,fVar3 * fVar26 * fVar28);
      local_2f4 = fVar33 * fVar37 * fVar33;
      local_2f8 = fVar37 * fVar35 * (fVar35 / fVar24);
      fStack_334 = local_338 * -0.5;
      do {
        lVar18 = lVar12;
        lVar12 = *(long *)(lVar18 + 0x120);
      } while (lVar12 != 0);
      lVar12 = lVar21;
      do {
        lVar10 = lVar12;
        lVar12 = *(long *)(lVar10 + 0x120);
      } while (lVar12 != 0);
      uVar13 = CONCAT44(uVar9,1.0 / fVar29 + 1.0 / fVar29);
      uVar41 = uVar41 & 0xffffffff00000000;
      puVar39 = (undefined8 *)((ulong)puVar39 & 0xffffffff00000000);
      FUN_0057a430(0,0,fVar25,fVar29,0,0,fVar36,fVar34,param_6,uVar6,&local_278,&local_2b8,
                   &local_2f8,&local_338,param_28 & 1,&local_490,puVar39,uVar41,fVar35,fVar33,uVar13
                   ,fVar23,param_3,fVar22,*(undefined8 *)(lVar18 + 0xa8),
                   *(undefined8 *)(lVar10 + 0xa8),param_33,0);
      uVar9 = (undefined4)(uVar41 >> 0x20);
      uVar11 = (undefined4)((ulong)uVar13 >> 0x20);
      uVar19 = uVar19 + 1;
      lVar12 = lVar16;
    } while ((int)uVar19 < local_130._4_4_);
  }
  if (bVar5) {
    lVar12 = param_7;
    if (param_7 == param_8) {
      local_490 = 0x3f8000003f800000;
      local_488 = 0x3f8000003f800000;
      local_270 = 0;
      local_278 = 0;
      FUN_0057da10(0,0,0,0x3f800000,param_6,param_7,param_9,0,0,&local_490,0,0,
                   (ulong)puVar39 & 0xffffffffffffff00,CONCAT44(uVar9,1),&local_278,0,
                   CONCAT44(uVar11,0xffffffff));
      lVar12 = param_9;
    }
    FUN_0059d300(param_8,0,0,1,0,0);
    fVar23 = *(float *)(lVar12 + 0x88);
    fVar24 = *(float *)(lVar12 + 0x8c);
    uVar19 = *(uint *)(param_8 + 0x54);
    uVar6 = *(uint *)(param_8 + 0x58);
    uVar7 = *(uint *)(lVar12 + 0x54);
    fVar22 = *(float *)(lVar12 + 0x90);
    fVar25 = *(float *)(lVar12 + 0x94);
    uVar17 = *(uint *)(lVar12 + 0x58);
    NEON_ucvtf(*(undefined4 *)(lVar16 + 0x58));
    uVar41 = FUN_005280e0(*(undefined4 *)(param_11 + 0x38));
    bVar5 = (uVar41 & 1) == 0;
    fVar29 = 1.0;
    if (bVar5) {
      fVar29 = 2.0;
    }
    fVar34 = 0.0;
    if (bVar5) {
      fVar34 = -1.0;
    }
    fVar34 = fVar34 + fVar29 * 0.0;
    local_488 = CONCAT44(fVar20 * fVar26 * fVar34 + 0.0,fVar3 * fVar26 * fVar34 + 0.0);
    local_490 = CONCAT44(fVar20 * fVar26 * fVar29,fVar3 * fVar26 * fVar29);
    do {
      lVar18 = lVar12;
      lVar12 = *(long *)(lVar18 + 0x120);
    } while (lVar12 != 0);
    do {
      lVar12 = lVar16;
      lVar16 = *(long *)(lVar12 + 0x120);
    } while (lVar16 != 0);
    do {
      lVar16 = param_11;
      param_11 = *(long *)(lVar16 + 0x120);
    } while (param_11 != 0);
    FUN_0057a900(0,0,(float)uVar19,(float)uVar6,0,0,fVar23 * (float)uVar7 + fVar22,
                 fVar24 * (float)uVar17 + fVar25,param_6,&local_490,*(undefined8 *)(lVar18 + 0xa8),
                 *(undefined8 *)(lVar12 + 0xa8),*(undefined8 *)(lVar16 + 0xa8),param_33,0);
  }
  do {
    lVar16 = param_7;
    param_7 = *(long *)(lVar16 + 0x120);
  } while (param_7 != 0);
  plVar8 = *(long **)(lVar16 + 0xa8);
  (**(code **)(*plVar8 + 0x78))(plVar8,0);
  do {
    lVar16 = param_8;
    param_8 = *(long *)(lVar16 + 0x120);
  } while (param_8 != 0);
  plVar8 = *(long **)(lVar16 + 0xa8);
  (**(code **)(*plVar8 + 0x78))(plVar8,0);
  if (param_9 != 0) {
    do {
      lVar16 = param_9;
      param_9 = *(long *)(lVar16 + 0x120);
    } while (param_9 != 0);
    plVar8 = *(long **)(lVar16 + 0xa8);
    (**(code **)(*plVar8 + 0x78))(plVar8,0);
  }
  do {
    lVar16 = lVar21;
    lVar21 = *(long *)(lVar16 + 0x120);
  } while (lVar21 != 0);
  plVar8 = *(long **)(lVar16 + 0xa8);
  (**(code **)(*plVar8 + 0x78))(plVar8,0);
  return 0;
}


