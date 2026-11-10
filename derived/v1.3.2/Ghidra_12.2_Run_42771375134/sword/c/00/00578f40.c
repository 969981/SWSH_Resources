/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00578f40; name: FUN_00578f40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00578f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
            undefined4 param_5,undefined4 param_6,float param_7,float param_8,long param_9,
            int param_10,float *param_11,float *param_12,float *param_13,float *param_14,
            float *param_15,uint param_16,undefined8 param_17,float param_18,float param_19,
            float param_20,float param_21,long *param_22,long *param_23,undefined8 param_24,
            undefined4 param_25)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  float fVar12;
  ulong uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
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
  float local_4f8 [27];
  undefined8 local_48c;
  float fStack_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined8 local_474;
  undefined8 local_46c;
  undefined4 local_464;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined8 local_44c;
  undefined8 local_444;
  undefined4 local_43c;
  undefined4 local_438 [128];
  undefined1 auStack_238 [64];
  undefined1 auStack_1f8 [64];
  float local_1b8;
  float local_1b4;
  undefined4 local_1b0;
  float local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
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
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  uVar10 = 7;
  if (param_10 < 7) {
    uVar10 = 5;
  }
  fVar16 = *param_15;
  fVar12 = param_15[1];
  uVar3 = 3;
  if (3 < param_10) {
    uVar3 = uVar10;
  }
  uVar13 = (ulong)uVar3;
  if (((param_19 < 0.0) || (fVar16 == 0.0)) || (fVar12 == 0.0)) {
    uVar10 = 0;
  }
  else {
    fVar18 = fVar16;
    if (fVar16 <= fVar12) {
      fVar18 = fVar12;
    }
    fVar18 = 2.0 / (fVar18 * param_4);
    if (param_19 <= fVar18) {
      param_19 = fVar18;
    }
    uVar10 = 1;
  }
  fVar15 = *param_12;
  fVar19 = *param_14;
  fVar21 = *param_13;
  bVar5 = *(char *)(*(long *)(param_9 + 0x20) + 0x58) != '\0';
  fVar18 = param_14[1];
  fVar4 = -param_12[1];
  if (bVar5) {
    fVar18 = -param_14[1];
    fVar4 = param_12[1];
  }
  fVar17 = param_13[1];
  if (bVar5) {
    fVar17 = -param_13[1];
  }
  fVar24 = *param_11;
  fVar23 = param_11[1];
  if ((param_20 != 0.0) && (uVar10 == 0)) {
    fVar16 = param_18 * 10.0;
    uVar10 = 1;
    fVar12 = 10.0;
    param_19 = 0.0;
  }
  uVar2 = (uint)(param_23 != (long *)0x0) & param_20 != 0.0 & uVar10;
  uVar6 = (**(code **)(*param_23 + 0x98))(param_23);
  lVar1 = param_9 + (ulong)(uVar3 - 1) * 4;
  if (uVar10 == 0) {
    puVar11 = (undefined4 *)(lVar1 + 0x1b424);
  }
  else {
    puVar11 = (undefined4 *)(lVar1 + 0x1b404);
    if (uVar2 == 0) {
      puVar11 = (undefined4 *)(lVar1 + 0x1b3e4);
    }
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),*puVar11);
  local_d8 = 0x3f800000;
  fVar26 = (float)uVar3;
  local_d0 = 0x3eaaaaab00000000;
  uStack_c8 = 0x3f80000000000000;
  local_c0 = 0x3eaaaaab00000000;
  uStack_b8 = 0;
  local_b0 = 0x3eaaaaab3f800000;
  local_128 = 0x3f155556;
  local_120 = 0x3e4cccce00000000;
  local_110 = 0x3e4cccce00000000;
  local_100 = 0x3e4cccce00000000;
  local_f8 = 0x3e2aaaab00000000;
  local_118 = 0x3e2aaaab3ed55556;
  local_f0 = 0x3e4cccce3eaaaaab;
  local_108 = 0x3f2aaaab00000000;
  local_e0 = 0x3e4cccce3f2aaaab;
  local_188 = 0x3f100000;
  local_198 = 0x3e266667;
  local_178 = 0x3e8000003e800000;
  local_190 = 0x3e12492500000000;
  local_180 = 0x3e12492500000000;
  local_170 = 0x3e12492500000000;
  fVar22 = 1.0;
  local_168 = 0x3f00000000000000;
  local_160 = 0x3e12492500000000;
  local_158 = 0x3e80000000000000;
  local_140 = 0x3e1249253f000000;
  local_e8 = 0;
  local_150 = 0x3e1249253e800000;
  local_148 = 0;
  local_138 = 0x3ccccccd;
  local_130 = 0x3e1249253e800000;
  if (uVar3 == 7) {
    fVar25 = 0.25;
    puVar14 = &local_198;
  }
  else {
    fVar25 = 1.0 / (fVar26 + -1.0);
    if (uVar3 == 5) {
      puVar14 = &local_128;
    }
    else if (uVar3 == 3) {
      puVar14 = &local_d8;
    }
    else {
      puVar14 = (undefined8 *)0x0;
    }
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),puVar14,uVar3);
  local_1a8 = param_7 / (param_18 + param_18);
  local_1a4 = param_8 * 0.5;
  local_1b8 = param_7 * 0.5 + (0.5 / param_18) * fVar21;
  local_1a0 = 0x3f800000;
  local_1b4 = local_1a4 + fVar17 * 0.5;
  local_1b0 = 0;
  FUN_0050f710(auStack_1f8,&local_1a8,&local_1b8);
  FUN_005156a0(auStack_238,auStack_1f8);
  fVar21 = DAT_01d4bc1c;
  bVar5 = DAT_01d4bc1c <= fVar24;
  fVar17 = -1.0;
  if (fVar24 == DAT_01d4bc1c || !bVar5) {
    fVar17 = 0.0;
  }
  fVar27 = -fVar24;
  if (bVar5) {
    fVar27 = fVar24;
  }
  fVar24 = 1.0;
  if (bVar5) {
    fVar24 = fVar17;
  }
  bVar5 = DAT_01d4bc1c <= fVar23;
  fVar17 = -fVar23;
  if (bVar5) {
    fVar17 = fVar23;
  }
  fVar20 = -1.0;
  if (fVar23 == DAT_01d4bc1c || !bVar5) {
    fVar20 = 0.0;
  }
  fVar23 = 1.0;
  if (bVar5) {
    fVar23 = fVar20;
  }
  fVar24 = powf(fVar27 + 1.0,fVar24 * fVar25);
  fVar17 = powf(fVar17 + 1.0,fVar23 * fVar25);
  fVar23 = powf(fVar24,fVar26);
  fVar26 = powf(fVar17,fVar26);
  fVar27 = 1.0;
  if (1.0 < fVar26) {
    fVar27 = 1.0 / fVar26;
  }
  if (1.0 < fVar23) {
    fVar22 = 1.0 / fVar23;
  }
  if (uVar10 != 0) {
    local_46c = 0;
    local_474 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_444 = 0;
    local_44c = 0;
    local_43c = 0x3f800000;
    local_450 = 0x3f800000;
    local_464 = 0x3f800000;
    local_478 = 0x3f800000;
  }
  fVar26 = -(fVar4 * 0.5);
  fVar23 = fVar15 * fVar25;
  fVar15 = fVar15 * 0.5;
  puVar14 = (undefined8 *)((ulong)(local_4f8 + 0x10) | 4);
  if (uVar10 == 0) {
    puVar11 = &local_478;
    do {
      *(undefined8 *)(puVar11 + 3) = 0;
      *(undefined8 *)(puVar11 + 1) = 0;
      *(undefined8 *)(puVar11 + 0xd) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 8) = 0;
      *(undefined8 *)(puVar11 + 0xb) = 0;
      puVar11[0xf] = 0x3f800000;
      puVar11[10] = 0x3f800000;
      puVar11[5] = 0x3f800000;
      *puVar11 = 0x3f800000;
      FUN_00515cb0(puVar11,puVar11,auStack_238);
      *puVar14 = 0;
      puVar14[1] = 0;
      local_4f8[0x16] = 0.0;
      local_4f8[0x17] = 0.0;
      local_4f8[0x18] = 0.0;
      local_4f8[0x19] = 0.0;
      local_48c = 0;
      fStack_484 = 0.0;
      local_480 = 0;
      local_4f8[0x1a] = 1.0;
      uStack_47c = 0x3f800000;
      local_4f8[0x10] = fVar22;
      local_4f8[0x15] = fVar27;
      FUN_00515cb0(puVar11,puVar11,local_4f8 + 0x10);
      local_4f8[0x1a] = 1.0;
      *puVar14 = 0;
      puVar14[1] = 0;
      local_4f8[0x16] = 0.0;
      local_4f8[0x17] = 0.0;
      local_4f8[0x18] = 0.0;
      local_4f8[0x19] = 0.0;
      local_4f8[0x15] = 1.0;
      local_4f8[0x10] = 1.0;
      local_48c = (ulong)(uint)fVar15 << 0x20;
      local_480 = 0;
      uStack_47c = 0x3f800000;
      fStack_484 = fVar26;
      FUN_00515cb0(puVar11,puVar11,local_4f8 + 0x10);
      FUN_00515cb0(puVar11,puVar11,auStack_1f8);
      fVar22 = fVar24 * fVar22;
      fVar27 = fVar17 * fVar27;
      fVar15 = fVar15 - fVar23;
      fVar26 = fVar4 * fVar25 + fVar26;
      uVar13 = uVar13 - 1;
      puVar11 = puVar11 + 0x10;
    } while (uVar13 != 0);
  }
  else {
    puVar11 = local_438;
    do {
      *(undefined8 *)(puVar11 + 3) = 0;
      *(undefined8 *)(puVar11 + 1) = 0;
      *(undefined8 *)(puVar11 + 0xd) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 8) = 0;
      *(undefined8 *)(puVar11 + 0xb) = 0;
      puVar11[0xf] = 0x3f800000;
      puVar11[10] = 0x3f800000;
      puVar11[5] = 0x3f800000;
      *puVar11 = 0x3f800000;
      FUN_00515cb0(puVar11,puVar11,auStack_238);
      *puVar14 = 0;
      puVar14[1] = 0;
      local_4f8[0x16] = 0.0;
      local_4f8[0x17] = 0.0;
      local_4f8[0x18] = 0.0;
      local_4f8[0x19] = 0.0;
      local_48c = 0;
      fStack_484 = 0.0;
      local_480 = 0;
      local_4f8[0x1a] = 1.0;
      uStack_47c = 0x3f800000;
      local_4f8[0x10] = fVar22;
      local_4f8[0x15] = fVar27;
      FUN_00515cb0(puVar11,puVar11,local_4f8 + 0x10);
      local_4f8[0x1a] = 1.0;
      *puVar14 = 0;
      puVar14[1] = 0;
      local_4f8[0x16] = 0.0;
      local_4f8[0x17] = 0.0;
      local_4f8[0x18] = 0.0;
      local_4f8[0x19] = 0.0;
      local_4f8[0x15] = 1.0;
      local_4f8[0x10] = 1.0;
      local_48c = (ulong)(uint)fVar15 << 0x20;
      local_480 = 0;
      uStack_47c = 0x3f800000;
      fStack_484 = fVar26;
      FUN_00515cb0(puVar11,puVar11,local_4f8 + 0x10);
      FUN_00515cb0(puVar11,puVar11,auStack_1f8);
      fVar22 = fVar24 * fVar22;
      fVar27 = fVar17 * fVar27;
      fVar15 = fVar15 - fVar23;
      fVar26 = fVar4 * fVar25 + fVar26;
      uVar13 = uVar13 - 1;
      puVar11 = puVar11 + 0x10;
    } while (uVar13 != 0);
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 200))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x144),&local_478,uVar3 + uVar10);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_22);
  uVar7 = (**(code **)(*param_22 + 0x80))(param_22);
  (**(code **)(*param_22 + 0x78))(param_22,4);
  if (uVar10 != 0) {
    local_4f8[0x13] = 0.0;
    local_4f8[0x14] = 0.0;
    local_4f8[0x11] = 0.0;
    local_4f8[0x12] = 0.0;
    local_4f8[0x16] = 0.0;
    local_4f8[0x17] = 0.0;
    local_4f8[0x18] = 0.0;
    local_4f8[0x19] = 0.0;
    fStack_484 = 0.0;
    local_480 = 0;
    local_48c = 0;
    uStack_47c = 0x3f800000;
    local_4f8[0x1a] = 1.0;
    local_4f8[0x15] = 1.0;
    local_4f8[0x10] = 1.0;
    FUN_00515cb0(local_4f8 + 0x10,local_4f8 + 0x10,auStack_238);
    local_4f8[0xd] = -fVar18;
    local_4f8[0xc] = -fVar19;
    local_4f8[3] = 0.0;
    local_4f8[4] = 0.0;
    local_4f8[1] = 0.0;
    local_4f8[2] = 0.0;
    local_4f8[6] = 0.0;
    local_4f8[7] = 0.0;
    local_4f8[8] = 0.0;
    local_4f8[9] = 0.0;
    local_4f8[10] = 1.0;
    local_4f8[0xb] = 0.0;
    local_4f8[5] = 1.0;
    local_4f8[0] = 1.0;
    local_4f8[0xe] = 0.0;
    local_4f8[0xf] = 1.0;
    FUN_00515cb0(local_4f8 + 0x10,local_4f8 + 0x10,local_4f8);
    local_4f8[6] = 0.0;
    local_4f8[7] = 0.0;
    local_4f8[8] = 0.0;
    local_4f8[9] = 0.0;
    local_4f8[0] = 1.0 / fVar16;
    local_4f8[5] = 1.0 / fVar12;
    local_4f8[3] = 0.0;
    local_4f8[4] = 0.0;
    local_4f8[1] = 0.0;
    local_4f8[2] = 0.0;
    local_4f8[0xd] = 0.0;
    local_4f8[0xe] = 0.0;
    local_4f8[0xb] = 0.0;
    local_4f8[0xc] = 0.0;
    local_4f8[10] = 1.0;
    local_4f8[0xf] = 1.0;
    FUN_00515cb0(local_4f8 + 0x10,local_4f8 + 0x10,local_4f8);
    DAT_02760c28._0_4_ = 0.0 - 1.0 / param_19;
    DAT_02760c18 = local_4f8[0x10];
    DAT_02760c1c = local_4f8[0x15];
    DAT_02760c28._4_4_ = 1.0 / param_19 - (float)DAT_02760c28 * 0.0;
    DAT_02760c20 = local_48c._4_4_;
    DAT_02760c24 = fStack_484;
    if (uVar2 == 0) {
      uVar9 = 2;
    }
    else {
      if ((param_16 & 1) != 0) {
        (**(code **)(*param_23 + 0x88))(param_23,1);
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),param_23);
      uVar9 = 4;
      _DAT_02760c40 = 0;
      ram0x02760c50 = 0x3f80000000000000;
      DAT_02760c38 = param_18 * param_21;
      DAT_02760c3c = param_21;
      DAT_02760c44._4_4_ = (param_20 + 0.5) - (0.5 - param_20);
      DAT_02760c4c._0_4_ = (0.5 - param_20) + DAT_02760c44._4_4_ * fVar21;
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x110),&DAT_02760c18,uVar9);
  }
  uVar8 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_25);
  (**(code **)(*param_22 + 0x78))(param_22,uVar7);
  if (uVar2 != 0) {
    (**(code **)(*param_23 + 0x88))(param_23,uVar6);
  }
  return uVar8;
}


