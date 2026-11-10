/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b11b0; name: FUN_005b11b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005b11b0(float param_1,long param_2,ulong param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_508;
  undefined8 local_504;
  undefined8 local_4fc;
  undefined4 local_4f4;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  float local_4b4;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined8 local_49c;
  undefined8 local_494;
  undefined4 local_48c;
  undefined8 local_488;
  float local_480;
  float local_47c;
  undefined8 local_478;
  float local_470;
  undefined8 local_46c;
  undefined8 local_464;
  float local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined8 local_444;
  undefined8 local_43c;
  undefined4 local_434;
  float local_430;
  float fStack_42c;
  float local_428;
  undefined4 local_424;
  float local_420;
  float local_41c;
  float local_418;
  undefined4 local_414;
  float local_410;
  float local_40c;
  float local_408;
  undefined8 local_404;
  undefined8 local_3fc;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined8 local_3c4;
  undefined8 local_3bc;
  undefined4 local_3b4;
  float local_3b0 [192];
  float local_b0;
  float fStack_ac;
  
  puVar2 = PTR_DAT_027139b0;
  iVar20 = *(int *)PTR_DAT_027139b0;
  if (iVar20 < 1) {
    plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar8,0);
    *(long **)PTR_DAT_027139b8 = plVar8;
    *(undefined4 *)puVar2 = 1;
    if (plVar8 != (long *)0x0) goto LAB_005b1224;
LAB_005b12ac:
    iVar20 = 0;
  }
  else {
    plVar8 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar20 + 1;
    if (iVar20 + 1 < 2) {
      if (plVar8 == (long *)0x0) goto LAB_005b12ac;
LAB_005b1224:
      uVar9 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar9,plVar8);
      iVar20 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar2 = iVar20;
  plVar10 = (long *)plVar8[6];
  uVar3 = FUN_00515420(0x3f800000,param_5,0);
  uVar14 = (ulong)uVar3;
  lVar5 = FUN_00573970();
  fVar21 = (float)param_5;
  FUN_00515420(fVar21 / (fVar21 + 1.0),param_5,local_3b0);
  fVar15 = *(float *)(param_2 + 0x134);
  if ((*(char *)(param_2 + 0x144) == '\0') && (*(float *)(param_2 + 0x138) != 1.0)) {
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 200));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0xc4));
    fVar15 = fVar15 / fVar18;
  }
  if ((0.0 < param_1) && (fVar15 != param_1)) {
    fVar15 = fVar15 * (fVar15 / param_1);
  }
  fVar15 = 1.0 / fVar15;
  if ((param_3 & 1) == 0) {
    fVar18 = 1.0;
  }
  else {
    if (*(char *)(param_2 + 0x12d) == '\0') {
      fVar18 = 0.0;
    }
    else {
      fVar18 = *(float *)(param_2 + 0x3ec);
      if (*(float *)(param_2 + 0x3e4) <= 0.0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = *(float *)(param_2 + 0x3e4) / *(float *)(param_2 + 0x1c0);
        if (fVar16 < 0.0) goto LAB_005b143c;
      }
      if (1.0 < fVar16) {
        fVar16 = 1.0;
      }
      if ((0.0 < fVar16) && (*(int *)(param_2 + 1000) != 1)) {
        fVar18 = powf(10.0,-(fVar18 + fVar18 + -1.0));
        fVar16 = powf(fVar16,fVar18);
        lVar7 = 0;
        do {
          fVar18 = 0.0;
          if (*(int *)(param_2 + 0x2f0) <= lVar7) goto LAB_005b143c;
          lVar1 = lVar7 + 1;
          fVar19 = *(float *)(*(long *)(param_2 + 0x398) + lVar7 * 4 + 4);
          lVar7 = lVar1;
        } while (fVar19 <= 1.0 / fVar16);
        fVar22 = *(float *)(*(long *)(param_2 + 0x398) + lVar1 * 4 + -4);
        fVar16 = 1.0 - ((1.0 / fVar16 - fVar22) / (fVar19 - fVar22) + (float)((int)lVar1 + -1)) /
                       (float)*(int *)(param_2 + 0x2f0);
        if ((0.0 <= fVar16) && (fVar18 = fVar16, 1.0 < fVar16)) {
          fVar18 = 1.0;
        }
      }
    }
LAB_005b143c:
    fVar18 = *(float *)(*(long *)(param_2 + (long)*(int *)(param_2 + 0x2a8) * 8 + 0x338) +
                       (long)(int)((1.0 - fVar18) * (float)*(int *)(param_2 + 0x2f0) * DAT_01d4c2dc)
                       * 4);
    fVar15 = fVar15 * fVar18;
  }
  local_3e4 = 0;
  local_3ec = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3bc = 0;
  local_3c4 = 0;
  local_3b4 = 0x3f800000;
  local_3c8 = 0x3f800000;
  local_3dc = 0x3f800000;
  local_3f0 = 0x3f800000;
  fVar19 = *(float *)(param_2 + 0x1bc);
  fVar16 = cosf(fVar19);
  fVar19 = sinf(fVar19);
  local_430 = fVar16 + 0.0;
  local_418 = (1.0 - fVar16) * 0.0;
  fStack_42c = fVar19 + local_418;
  local_420 = local_418 - fVar19;
  local_428 = local_418 - fVar19 * 0.0;
  local_418 = local_418 + fVar19 * 0.0;
  local_408 = fVar16 * 0.0 + 1.0;
  local_414 = 0;
  local_424 = 0;
  local_3fc = 0;
  local_404 = 0;
  local_3f4 = 0x3f800000;
  local_41c = local_430;
  local_410 = local_418;
  local_40c = local_428;
  FUN_00515cb0(&local_3f0,&local_3f0,&local_430);
  local_464 = 0;
  local_46c = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_43c = 0;
  local_444 = 0;
  local_448 = 0x3f800000;
  local_434 = 0x3f800000;
  local_470 = fVar15;
  local_45c = fVar18;
  FUN_00515cb0(&local_3f0,&local_3f0,&local_470);
  if ((param_3 & 1) == 0) {
    *(undefined8 *)((ulong)&local_470 | 4) = 0;
    ((undefined8 *)((ulong)&local_470 | 4))[1] = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_444 = 0;
    local_43c = 0;
    uStack_4bc = 0;
    uStack_4b8 = 0;
    local_4c8._4_4_ = 0;
    local_4c0 = 0;
    local_494 = 0;
    local_49c = 0;
    local_48c = 0x3f800000;
    local_4a0 = 0x3f800000;
    local_4b4 = 1.0;
    local_4c8._0_4_ = 0x3f800000;
    local_470 = -0.5;
    local_45c = -0.5;
    local_448 = 0x3f800000;
    local_434 = 0x3f800000;
    local_4b0 = 0;
    uStack_4a8 = 0;
    FUN_00515cb0(&local_4c8,&local_4c8,&local_470);
    local_4e0 = 0x3f800000;
    uStack_4d8 = 0x3f0000003f000000;
    local_4fc = 0;
    local_504 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4f4 = 0x3f800000;
    local_508 = 1.0;
    local_4d0 = 0x3f80000000000000;
    FUN_00515cb0(&local_4c8,&local_4c8,&local_508);
    if (0 < (int)uVar3) {
      uVar11 = uVar14;
      pfVar12 = (float *)(lVar5 + 8);
      pfVar13 = local_3b0;
      do {
        local_478 = *(undefined8 *)pfVar13;
        FUN_005101a0(&local_b0,&local_478,&local_3f0);
        pfVar12[-2] = local_b0;
        pfVar12[-1] = fStack_ac;
        FUN_005101a0(&local_b0,pfVar13,&local_4c8);
        uVar11 = uVar11 - 1;
        *pfVar12 = local_b0;
        pfVar12[1] = fStack_ac;
        pfVar12 = pfVar12 + 4;
        pfVar13 = pfVar13 + 2;
      } while (uVar11 != 0);
    }
    goto LAB_005b19a0;
  }
  fVar15 = 0.0;
  if (*(char *)(param_2 + 0x12d) != '\0') {
    fVar15 = *(float *)(param_2 + 0x3ec);
    if (*(float *)(param_2 + 0x3e4) <= 0.0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = *(float *)(param_2 + 0x3e4) / *(float *)(param_2 + 0x1c0);
      if (fVar18 < 0.0) goto LAB_005b1750;
    }
    if (1.0 < fVar18) {
      fVar18 = 1.0;
    }
    if ((0.0 < fVar18) && (*(int *)(param_2 + 1000) != 1)) {
      fVar15 = powf(10.0,-(fVar15 + fVar15 + -1.0));
      fVar18 = powf(fVar18,fVar15);
      lVar7 = 0;
      do {
        fVar15 = 0.0;
        if (*(int *)(param_2 + 0x2f0) <= lVar7) goto LAB_005b1750;
        lVar1 = lVar7 + 1;
        fVar16 = *(float *)(*(long *)(param_2 + 0x398) + lVar7 * 4 + 4);
        lVar7 = lVar1;
      } while (fVar16 <= 1.0 / fVar18);
      fVar19 = *(float *)(*(long *)(param_2 + 0x398) + lVar1 * 4 + -4);
      fVar18 = 1.0 - ((1.0 / fVar18 - fVar19) / (fVar16 - fVar19) + (float)((int)lVar1 + -1)) /
                     (float)*(int *)(param_2 + 0x2f0);
      if ((0.0 <= fVar18) && (fVar15 = fVar18, 1.0 < fVar18)) {
        fVar15 = 1.0;
      }
    }
  }
LAB_005b1750:
  iVar20 = *(int *)(param_2 + 0x2f0);
  fVar18 = DAT_01d4bda0;
  if (((DAT_027635f8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_027635f8), fVar18 = DAT_01d4bda0, iVar4 != 0)) {
    DAT_0276351c = 0xdd5254a56c078966;
    DAT_02763524 = 0x3df95b3b9523b81;
    __cxa_guard_release(&DAT_027635f8);
    fVar18 = DAT_01d4bda0;
  }
  DAT_01d4bda0 = fVar18;
  if (0 < (int)uVar3) {
    pfVar12 = (float *)(lVar5 + 8);
    pfVar13 = local_3b0;
    fVar15 = (1.0 - fVar15) * (float)iVar20 * DAT_01d4c2dc;
    uVar11 = uVar14;
    do {
      puVar6 = (undefined8 *)
               (*(long *)(param_2 + (long)*(int *)(param_2 + 0x2a8) * 8 + 0x378) +
               (long)(int)fVar15 * 0x18);
      if (&local_4c8 != puVar6) {
        local_4c0 = (undefined4)puVar6[1];
        uStack_4bc = (undefined4)((ulong)puVar6[1] >> 0x20);
        uStack_4b8 = (undefined4)puVar6[2];
        local_4b4 = (float)((ulong)puVar6[2] >> 0x20);
        local_4c8._0_4_ = (undefined4)*puVar6;
        local_4c8._4_4_ = (undefined4)((ulong)*puVar6 >> 0x20);
      }
      fVar23 = *pfVar13;
      fVar22 = pfVar13[1];
      local_478 = CONCAT44(-fVar22,-fVar23);
      local_488 = 0x3c0000003c000000;
      local_480 = 0.5 - fVar23 * 0.5;
      local_47c = fVar22 * -0.5 + 0.5;
      FUN_00562140(&local_508,&local_480,&local_488,&local_4c8);
      uVar3 = (uint)DAT_0276351c ^ (uint)DAT_0276351c << 0xb;
      uVar3 = uVar3 ^ (int)uVar3 >> 8 ^ DAT_02763524._4_4_ ^ DAT_02763524._4_4_ >> 0x13;
      fVar16 = (float)(uVar3 & 0x7fffffff) * fVar18;
      fVar19 = local_508 + (0.0 / fVar21) * (fVar16 + fVar16 + -1.0);
      fVar16 = fVar19;
      if (1.0 < fVar19) {
        fVar16 = 1.0;
      }
      local_508 = 0.0;
      if (0.0 <= fVar19) {
        local_508 = fVar16;
      }
      fVar16 = fVar23 * fVar23 + fVar22 * fVar22;
      uVar17 = 0x3f800000;
      if (local_508 <= 0.0) {
        uVar17 = 0;
      }
      DAT_0276351c = CONCAT44((undefined4)DAT_02763524,DAT_0276351c._4_4_);
      DAT_02763524 = CONCAT44(uVar3,DAT_02763524._4_4_);
      local_4fc = CONCAT44(local_4fc._4_4_,uVar17);
      fVar19 = fVar16;
      if (((fVar16 != 0.0) && (fVar16 != 1.0)) && (fVar19 = SQRT(fVar16), NAN(fVar19))) {
        fVar19 = sqrtf(fVar16);
      }
      fVar16 = 1.0;
      if (0.0 < fVar19) {
        fVar16 = (fVar19 / (1.0 - local_508)) / local_4b4;
      }
      local_478 = CONCAT44(fVar16 * pfVar13[1],fVar16 * *pfVar13);
      FUN_005101a0(&local_b0,&local_478,&local_3f0);
      pfVar12[-2] = local_b0;
      pfVar12[-1] = fStack_ac;
      fVar16 = *pfVar13 * *pfVar13 + pfVar13[1] * pfVar13[1];
      if ((fVar16 == 0.0) || (fVar16 == 1.0)) {
LAB_005b1980:
        fVar19 = fVar16;
      }
      else {
        fVar19 = SQRT(fVar16);
        if (NAN(fVar19)) {
          fVar16 = sqrtf(fVar16);
          goto LAB_005b1980;
        }
      }
      *pfVar12 = fVar19;
      pfVar13 = pfVar13 + 2;
      uVar11 = uVar11 - 1;
      pfVar12[1] = 1.0 - fVar19;
      pfVar12 = pfVar12 + 4;
    } while (uVar11 != 0);
  }
LAB_005b19a0:
  (**(code **)(*plVar10 + 0xb0))(plVar10,(int)plVar8[0x1f],lVar5,uVar14);
  return 0;
}


