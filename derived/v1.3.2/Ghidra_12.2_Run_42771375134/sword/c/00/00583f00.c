/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00583f00; name: FUN_00583f00
 */


undefined8
FUN_00583f00(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
            undefined8 *param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9,
            ulong param_10,undefined4 param_11,undefined8 param_12,int param_13,uint *param_14,
            undefined4 *param_15,undefined4 *param_16,float *param_17,undefined4 *param_18,
            float *param_19,undefined8 *param_20,undefined4 *param_21)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_fffffffffffffd28;
  undefined4 uVar19;
  undefined1 auStack_228 [16];
  undefined8 local_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float fStack_1fc;
  float local_1f8 [2];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0 [2];
  undefined1 auStack_1b8 [56];
  undefined1 auStack_180 [52];
  float local_14c;
  undefined4 local_148;
  undefined1 auStack_144 [4];
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
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
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  uVar19 = (undefined4)((ulong)in_stack_fffffffffffffd28 >> 0x20);
  uVar1 = *param_6;
  local_f0 = param_6[1];
  local_e8 = param_6[2];
  local_e0 = param_6[3];
  fVar7 = (float)local_f0;
  local_f8._0_4_ = (float)uVar1;
  fVar5 = (float)local_f8;
  local_f8._4_4_ = (float)((ulong)uVar1 >> 0x20);
  fVar6 = local_f8._4_4_;
  local_d8 = param_6[4];
  local_d0 = param_6[5];
  local_c8 = param_6[6];
  local_c0 = param_6[7];
  fVar14 = (float)local_f8 * (float)local_f8 + local_f8._4_4_ * local_f8._4_4_ +
           (float)local_f0 * (float)local_f0;
  local_138 = *param_7;
  local_130 = param_7[1];
  local_128 = param_7[2];
  local_120 = param_7[3];
  local_118 = param_7[4];
  local_110 = param_7[5];
  local_108 = param_7[6];
  local_100 = param_7[7];
  fVar15 = (float)local_f0;
  if ((fVar14 != 0.0) && (fVar14 != 1.0)) {
    fVar15 = SQRT(fVar14);
    if (NAN(fVar15)) {
      local_f8 = uVar1;
      fVar15 = sqrtf(fVar14);
    }
    fVar15 = 1.0 / fVar15;
    local_f8._0_4_ = fVar5 * fVar15;
    local_f8._4_4_ = fVar15 * fVar6;
    fVar15 = fVar15 * fVar7;
  }
  fVar5 = (float)local_e8;
  fVar6 = local_e8._4_4_;
  local_f0 = CONCAT44(local_f0._4_4_,fVar15);
  fVar7 = (float)local_e0;
  fVar14 = (float)local_e8 * (float)local_e8 + local_e8._4_4_ * local_e8._4_4_ +
           (float)local_e0 * (float)local_e0;
  fVar15 = (float)local_e0;
  if ((fVar14 != 0.0) && (fVar14 != 1.0)) {
    fVar15 = SQRT(fVar14);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar14);
    }
    fVar15 = 1.0 / fVar15;
    local_e8._0_4_ = fVar5 * fVar15;
    local_e8._4_4_ = fVar15 * fVar6;
    fVar15 = fVar15 * fVar7;
  }
  fVar5 = (float)local_d8;
  fVar6 = local_d8._4_4_;
  local_e0 = CONCAT44(local_e0._4_4_,fVar15);
  fVar7 = (float)local_d0;
  fVar14 = (float)local_d8 * (float)local_d8 + local_d8._4_4_ * local_d8._4_4_ +
           (float)local_d0 * (float)local_d0;
  fVar15 = (float)local_d0;
  if ((fVar14 != 0.0) && (fVar14 != 1.0)) {
    fVar15 = SQRT(fVar14);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar14);
    }
    fVar15 = 1.0 / fVar15;
    local_d8._0_4_ = fVar5 * fVar15;
    local_d8._4_4_ = fVar15 * fVar6;
    fVar15 = fVar15 * fVar7;
  }
  fVar5 = (float)local_138;
  fVar6 = local_138._4_4_;
  local_d0 = CONCAT44(local_d0._4_4_,fVar15);
  fVar7 = (float)local_130;
  fVar14 = (float)local_138 * (float)local_138 + local_138._4_4_ * local_138._4_4_ +
           (float)local_130 * (float)local_130;
  fVar15 = (float)local_130;
  if ((fVar14 != 0.0) && (fVar14 != 1.0)) {
    fVar15 = SQRT(fVar14);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar14);
    }
    fVar15 = 1.0 / fVar15;
    local_138._0_4_ = fVar5 * fVar15;
    local_138._4_4_ = fVar15 * fVar6;
    fVar15 = fVar15 * fVar7;
  }
  fVar5 = (float)local_128;
  fVar6 = local_128._4_4_;
  local_130 = CONCAT44(local_130._4_4_,fVar15);
  fVar7 = (float)local_120;
  fVar14 = (float)local_128 * (float)local_128 + local_128._4_4_ * local_128._4_4_ +
           (float)local_120 * (float)local_120;
  fVar15 = (float)local_120;
  if ((fVar14 != 0.0) && (fVar14 != 1.0)) {
    fVar15 = SQRT(fVar14);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar14);
    }
    fVar15 = 1.0 / fVar15;
    local_128._0_4_ = fVar5 * fVar15;
    local_128._4_4_ = fVar15 * fVar6;
    fVar15 = fVar15 * fVar7;
  }
  fVar5 = (float)local_118;
  fVar6 = local_118._4_4_;
  local_120 = CONCAT44(local_120._4_4_,fVar15);
  fVar7 = (float)local_110;
  fVar14 = (float)local_118 * (float)local_118 + local_118._4_4_ * local_118._4_4_ +
           (float)local_110 * (float)local_110;
  fVar15 = (float)local_110;
  if ((fVar14 != 0.0) && (fVar14 != 1.0)) {
    fVar15 = SQRT(fVar14);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar14);
    }
    fVar15 = 1.0 / fVar15;
    local_118._0_4_ = fVar5 * fVar15;
    local_118._4_4_ = fVar15 * fVar6;
    fVar15 = fVar15 * fVar7;
  }
  local_110 = CONCAT44(local_110._4_4_,fVar15);
  FUN_00583080(param_1,param_2,param_3,param_4,param_5,&local_f8,&local_138,param_8,param_9,0,
               param_11,param_12,CONCAT44(uVar19,param_13),auStack_144,&local_13c,&local_140,
               &local_148,&local_14c,auStack_180,auStack_1b8);
  FUN_005629a0(&local_1f0,&local_f8);
  local_1d8 = (float)local_c0;
  local_1e0 = local_c8;
  FUN_0050f790(param_8,0,0,&fStack_1d4,&local_1d0,&fStack_1cc,&local_1c8,&fStack_1c4,local_1c0,0,0,0
               ,0,0,0,0);
  FUN_005629a0(auStack_228,&local_138);
  local_210 = (float)local_100;
  local_218 = local_108;
  FUN_0050f790(param_9,0,0,&local_20c,&local_208,&local_204,&local_200,&fStack_1fc,local_1f8,0,0,0,0
               ,0,0,0);
  fVar17 = local_1c0[0];
  uVar8 = local_1e0;
  uVar4 = CONCAT44(fStack_1c4,local_1c8);
  uVar3 = CONCAT44(fStack_1cc,local_1d0);
  uVar1 = CONCAT44(fStack_1d4,local_1d8);
  FUN_00599940(param_1,&local_b8,&local_1f0,auStack_228);
  fVar9 = local_1d8;
  fVar7 = local_210;
  fVar5 = (float)local_218;
  fVar15 = (float)local_1e0;
  fVar6 = local_218._4_4_;
  fVar14 = local_1e0._4_4_;
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x58));
  iVar2 = *(int *)(param_4 + 0x29a68);
  fVar18 = (float)param_2;
  if (fVar18 <= 0.0) {
    fVar18 = 1.0;
  }
  iVar10 = 1;
  if (iVar2 - 1U < 2) {
    iVar10 = 2;
  }
  uVar12 = 5;
  if (1 < (int)*(uint *)(param_4 + 0x29a64)) {
    uVar12 = *(uint *)(param_4 + 0x29a64);
  }
  if (iVar2 == 2) {
    uVar13 = uVar12 + 2;
    if (-1 < (int)(uVar12 + 1)) {
      uVar13 = uVar12 + 1;
    }
    uVar12 = uVar13 & 0xfffffffe;
  }
  else if (iVar2 == 1) {
    if ((int)uVar12 < 0) {
      uVar12 = uVar12 + 1;
    }
    uVar12 = uVar12 | 1;
  }
  fVar18 = fVar18 * fVar16;
  lVar11 = (long)param_13;
  if ((param_10 & 1) == 0) {
    do {
      uVar13 = uVar12;
      if ((*(int *)(param_4 + (long)(int)(uVar13 - 1) * 0x58 + lVar11 * 4 + 0x1e394) != 0) ||
         ((int)uVar13 < 2)) break;
      uVar12 = uVar13 - iVar10;
    } while (*(int *)(param_4 + (long)(int)(uVar13 - 1) * 0x58 + lVar11 * 4 + 0x1d314) == 0);
  }
  else {
    do {
      uVar13 = uVar12;
      if ((*(int *)(param_4 + (long)(int)(uVar13 - 1) * 0x58 + lVar11 * 4 + 0x20494) != 0) ||
         ((int)uVar13 < 2)) break;
      uVar12 = uVar13 - iVar10;
    } while (*(int *)(param_4 + (long)(int)(uVar13 - 1) * 0x58 + lVar11 * 4 + 0x1f414) == 0);
  }
  iVar10 = (uint)(iVar2 == 2) << 1;
  if (iVar2 == 1) {
    iVar10 = 1;
  }
  FUN_00511d20(fVar18,param_3 & 0xffffffff,uVar13,iVar10,param_11,&local_13c,&local_140,&local_14c);
  if (param_14 != (uint *)0x0) {
    *param_14 = uVar13;
  }
  if (param_15 != (undefined4 *)0x0) {
    *param_15 = local_13c;
  }
  if (param_16 != (undefined4 *)0x0) {
    *param_16 = local_140;
  }
  if (param_17 != (float *)0x0) {
    *param_17 = fVar18;
  }
  if (param_18 != (undefined4 *)0x0) {
    *param_18 = local_148;
  }
  if (param_19 != (float *)0x0) {
    *param_19 = local_14c / fVar18;
  }
  if (param_20 != (undefined8 *)0x0) {
    param_20[1] = uStack_1e8;
    param_20[2] = uVar8;
    *param_20 = local_1f0;
    *(float *)(param_20 + 6) = fVar17;
    param_20[3] = uVar1;
    param_20[4] = uVar3;
    param_20[5] = uVar4;
  }
  if (param_21 != (undefined4 *)0x0) {
    param_21[2] = local_b0;
    param_21[3] = uStack_ac;
    fVar17 = (float)param_1;
    *param_21 = local_b8;
    param_21[1] = uStack_b4;
    param_21[4] = fVar15 + (fVar5 - fVar15) * fVar17;
    param_21[5] = fVar14 + (fVar6 - fVar14) * fVar17;
    param_21[6] = fVar9 + (fVar7 - fVar9) * fVar17;
    param_21[7] = fStack_1d4 + (local_20c - fStack_1d4) * fVar17;
    param_21[8] = local_1d0 + (local_208 - local_1d0) * fVar17;
    param_21[9] = fStack_1cc + (local_204 - fStack_1cc) * fVar17;
    param_21[10] = local_1c8 + (local_200 - local_1c8) * fVar17;
    param_21[0xb] = fStack_1c4 + (fStack_1fc - fStack_1c4) * fVar17;
    param_21[0xc] = local_1c0[0] + (local_1f8[0] - local_1c0[0]) * fVar17;
  }
  return 0;
}


