/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005950f0; name: FUN_005950f0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_005950f0(float param_1,long param_2,long param_3,long param_4,long param_5,float *param_6,
            uint param_7,float *param_8,uint param_9,byte param_10,byte param_11,uint param_12,
            uint param_13)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_268;
  float local_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
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
  float local_218 [7];
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float fStack_1b0;
  float local_1ac;
  float local_1a8;
  undefined1 local_1a4 [4];
  undefined1 auStack_1a0 [4];
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  float local_174;
  float fStack_170;
  float local_16c;
  float local_168;
  undefined8 local_164;
  long local_15c;
  ulong local_154;
  long local_14c;
  float local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  float local_134 [4];
  float local_124;
  float local_120;
  float local_11c;
  float local_118 [4];
  float local_108;
  float local_104;
  float local_100;
  float local_fc [4];
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4 [4];
  float local_b4;
  float local_b0;
  float local_ac;
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  fVar20 = *param_6;
  fVar22 = param_6[1];
  fVar21 = fVar20;
  if (fVar20 <= 0.0) {
    fVar21 = -fVar20;
  }
  if (fVar22 <= 0.0) {
    fVar22 = -fVar22;
  }
  fVar23 = param_6[2];
  fVar24 = param_6[3];
  if (fVar23 <= 0.0) {
    fVar23 = -fVar23;
  }
  if (fVar24 <= 0.0) {
    fVar24 = -fVar24;
  }
  bVar4 = false;
  if ((fVar21 == fVar22) && (bVar4 = false, !NAN(fVar22) && !NAN(fVar23))) {
    bVar4 = fVar22 == fVar23;
  }
  bVar5 = false;
  if ((bVar4) && (bVar5 = false, !NAN(fVar23) && !NAN(fVar24))) {
    bVar5 = fVar23 == fVar24;
  }
  if (bVar5) {
    bVar4 = true;
    local_268 = fVar21;
  }
  else {
    fVar28 = fVar22;
    if (fVar22 <= fVar21) {
      fVar28 = fVar21;
    }
    fVar29 = fVar23;
    if (fVar23 <= fVar28) {
      fVar29 = fVar28;
    }
    local_268 = fVar24;
    if (fVar24 <= fVar29) {
      local_268 = fVar29;
    }
    bVar4 = false;
    param_11 = 0.0 <= fVar20 | param_11;
  }
  if ((((*param_8 == 1.0) && (param_8[1] == 1.0)) && (param_8[2] == 1.0)) && (param_8[3] == 1.0)) {
    bVar5 = (bool)(bVar4 ^ 1);
  }
  else {
    bVar5 = true;
  }
  if ((param_10 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  if (((param_11 & 1) == 0) &&
     ((((param_7 < 0xf && ((1 << (ulong)(param_7 & 0x1f) & 0x4924U) != 0)) ||
       ((param_7 < 0x15 && ((0x109209U >> (ulong)(param_7 & 0x1f) & 1) != 0)))) ||
      ((param_7 < 0x15 && ((1 << (ulong)(param_7 & 0x1f) & 0x106000U) != 0)))))) {
    lVar13 = param_3;
    do {
      lVar14 = lVar13;
      lVar13 = *(long *)(lVar14 + 0x120);
    } while (lVar13 != 0);
    if ((*(byte *)(*(long *)(lVar14 + 0xa8) + 0x5e) >> 1 & 1) == 0) goto LAB_005952a0;
    lVar13 = param_4;
    do {
      lVar14 = lVar13;
      lVar13 = *(long *)(lVar14 + 0x120);
    } while (lVar13 != 0);
    if ((*(byte *)(*(long *)(lVar14 + 0xa8) + 0x5e) >> 1 & 1) == 0) goto LAB_005952a0;
    lVar13 = 4;
    iVar19 = 0;
  }
  else {
LAB_005952a0:
    lVar13 = 7;
    iVar19 = 1;
  }
  lVar14 = param_3;
  do {
    lVar16 = lVar14;
    lVar14 = *(long *)(lVar16 + 0x120);
  } while (lVar14 != 0);
  plVar6 = *(long **)(lVar16 + 0xa8);
  (**(code **)(*plVar6 + 0x88))(plVar6,iVar19);
  lVar14 = param_4;
  do {
    lVar16 = lVar14;
    lVar14 = *(long *)(lVar16 + 0x120);
  } while (lVar14 != 0);
  plVar6 = *(long **)(lVar16 + 0xa8);
  (**(code **)(*plVar6 + 0x88))(plVar6,iVar19);
  uVar12 = param_12;
  if (param_12 == 0) {
    uVar12 = *(uint *)(param_3 + 0x54);
  }
  uVar11 = param_13;
  if (param_13 == 0) {
    uVar11 = *(uint *)(param_3 + 0x58);
  }
  fVar20 = *(float *)(param_3 + 0x88);
  fVar30 = *(float *)(param_3 + 0x8c);
  fVar28 = *(float *)(param_3 + 0x90);
  fVar29 = *(float *)(param_3 + 0x94);
  uVar3 = param_12;
  if (param_12 == 0) {
    uVar3 = *(uint *)(param_4 + 0x54);
  }
  uVar9 = param_13;
  if (param_13 == 0) {
    uVar9 = *(uint *)(param_4 + 0x58);
  }
  uVar2 = *(undefined4 *)(*(long *)(param_3 + 0x80) + 8);
  iVar10 = (int)lVar13;
  if (iVar19 == 0) {
    if (bVar4) {
      FUN_00513d10(local_268,0x3f800000,uVar2,local_c4,local_134,param_9 & 1);
      goto LAB_00595464;
    }
    uVar1 = param_9 & 1;
    FUN_00513d10(fVar21,0x3f800000,uVar2,&local_1a8,local_134,uVar1);
    FUN_00513d10(fVar22,0x3f800000,uVar2,(long)&local_19c + 4,local_118,uVar1);
    FUN_00513d10(fVar23,0x3f800000,uVar2,(long)&local_18c + 4,local_fc,uVar1);
    FUN_00513d10(fVar24,0x3f800000,uVar2,(long)&local_17c + 4,local_e0,uVar1);
    local_c4[0] = (local_1a8 + 0.0 + local_19c._4_4_ + local_18c._4_4_ + local_17c._4_4_) * 0.25;
    local_c4[1] = ((float)local_1a4 + 0.0 + (float)local_194 + (float)local_184 + local_174) * 0.25;
    local_c4[2] = ((float)auStack_1a0 + 0.0 + local_194._4_4_ + local_184._4_4_ + fStack_170) * 0.25
    ;
    local_c4[3] = ((float)local_19c + 0.0 + (float)local_18c + (float)local_17c + local_16c) * 0.25;
    if (iVar10 != 4) {
      local_b4 = (local_19c._4_4_ + 0.0 + local_18c._4_4_ + local_17c._4_4_ + local_168) * 0.25;
      local_b0 = ((float)local_194 + 0.0 + (float)local_184 + local_174 + (float)local_164) * 0.25;
      local_ac = (local_194._4_4_ + 0.0 + local_184._4_4_ + fStack_170 + local_164._4_4_) * 0.25;
    }
    if (!NAN(SQRT(param_1))) goto LAB_00595478;
LAB_00595658:
    param_1 = sqrtf(param_1);
    local_218[0] = param_1 * local_134[0];
    if (bVar5) goto LAB_00595488;
LAB_00595674:
    local_218[4] = param_1 * local_134[1];
    local_19c = (ulong)(uint)local_c4[1] << 0x20;
    local_18c = (ulong)(uint)local_c4[2] << 0x20;
    local_1f8 = param_1 * local_134[2];
    local_17c = (ulong)(uint)local_c4[3] << 0x20;
    local_1e8 = param_1 * local_134[3];
    local_218[1] = local_218[0];
    local_218[2] = local_218[0];
    local_218[3] = local_218[0];
    local_218[5] = local_218[4];
    local_218[6] = local_218[4];
    local_1fc = local_218[4];
    local_1f4 = local_1f8;
    local_1f0 = local_1f8;
    local_1ec = local_1f8;
    local_1e4 = local_1e8;
    local_1e0 = local_1e8;
    local_1dc = local_1e8;
    if (iVar10 != 4) {
      local_1d8 = param_1 * local_124;
      local_1c8 = param_1 * local_120;
      local_15c = (ulong)(uint)local_b0 << 0x20;
      local_1b8 = param_1 * local_11c;
      local_1d4 = local_1d8;
      local_1d0 = local_1d8;
      local_1cc = local_1d8;
      local_1c4 = local_1c8;
      local_1c0 = local_1c8;
      local_1bc = local_1c8;
      goto LAB_005958fc;
    }
  }
  else {
    if (bVar4) {
      pfVar8 = local_134;
      fVar25 = local_268;
    }
    else {
      uVar1 = param_9 & 1;
      FUN_00514c90(fVar21,0x3f800000,uVar2,local_c4,local_134,uVar1);
      FUN_00514c90(fVar22,0x3f800000,uVar2,local_c4,local_118,uVar1);
      FUN_00514c90(fVar23,0x3f800000,uVar2,local_c4,local_fc,uVar1);
      pfVar8 = local_e0;
      fVar25 = fVar24;
    }
    FUN_00514c90(fVar25,0x3f800000,uVar2,local_c4,pfVar8,param_9 & 1);
LAB_00595464:
    if (NAN(SQRT(param_1))) goto LAB_00595658;
LAB_00595478:
    param_1 = SQRT(param_1);
    local_218[0] = param_1 * local_134[0];
    if (!bVar5) goto LAB_00595674;
LAB_00595488:
    if (bVar4) {
      local_218[3] = local_218[0];
      local_218[1] = local_218[0];
      local_218[2] = local_218[0];
    }
    else {
      local_218[1] = param_1 * local_118[0];
      local_218[2] = param_1 * local_fc[0];
      local_218[3] = param_1 * local_e0[0];
    }
    local_218[4] = param_1 * local_134[1];
    if (bVar4) {
      local_1fc = local_218[4];
      local_218[5] = local_218[4];
      local_218[6] = local_218[4];
    }
    else {
      local_218[5] = param_1 * local_118[1];
      local_218[6] = param_1 * local_fc[1];
      local_1fc = param_1 * local_e0[1];
    }
    local_1f8 = param_1 * local_134[2];
    local_19c = (ulong)(uint)local_c4[1] << 0x20;
    if (bVar4) {
      local_1ec = local_1f8;
      local_1f4 = local_1f8;
      local_1f0 = local_1f8;
    }
    else {
      local_1f4 = param_1 * local_118[2];
      local_1f0 = param_1 * local_fc[2];
      local_1ec = param_1 * local_e0[2];
    }
    local_1e8 = param_1 * local_134[3];
    local_18c = (ulong)(uint)local_c4[2] << 0x20;
    if (bVar4) {
      local_1dc = local_1e8;
      local_1e4 = local_1e8;
      local_1e0 = local_1e8;
    }
    else {
      local_1e4 = param_1 * local_118[3];
      local_1e0 = param_1 * local_fc[3];
      local_1dc = param_1 * local_e0[3];
    }
    local_17c = (ulong)(uint)local_c4[3] << 0x20;
    if (iVar10 != 4) {
      local_1d8 = param_1 * local_124;
      if (bVar4) {
        local_1cc = local_1d8;
        local_1d4 = local_1d8;
        local_1d0 = local_1d8;
      }
      else {
        local_1d4 = param_1 * local_108;
        local_1d0 = param_1 * local_ec;
        local_1cc = param_1 * local_d0;
      }
      local_1c8 = param_1 * local_120;
      if (bVar4) {
        local_1bc = local_1c8;
        local_1c4 = local_1c8;
        local_1c0 = local_1c8;
      }
      else {
        local_1c4 = param_1 * local_104;
        local_1c0 = param_1 * local_e8;
        local_1bc = param_1 * local_cc;
      }
      local_1b8 = param_1 * local_11c;
      local_15c = (ulong)(uint)local_b0 << 0x20;
      if (bVar4) {
LAB_005958fc:
        local_1ac = local_1b8;
        local_1b4 = local_1b8;
        fStack_1b0 = local_1b8;
      }
      else {
        local_1b4 = param_1 * local_100;
        fStack_1b0 = param_1 * local_e4;
        local_1ac = param_1 * local_c8;
      }
      local_154 = 0;
      local_164 = 0;
      local_14c = (ulong)(uint)local_ac << 0x20;
      local_144 = 0.0;
      uStack_140 = 0;
      local_13c = 0;
      local_168 = local_b4;
    }
  }
  local_16c = 0.0;
  fStack_170 = 0.0;
  local_174 = 0.0;
  local_184 = 0;
  local_194 = 0;
  _local_1a4 = 0;
  local_1a8 = local_c4[0];
  uVar7 = FUN_0059d300(param_4,0,0,1,0,0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  FUN_0059d000(0,0);
  lVar14 = param_3;
  do {
    lVar16 = lVar14;
    lVar14 = *(long *)(lVar16 + 0x120);
  } while (lVar14 != 0);
  uVar7 = FUN_00575a10(0,0,(float)uVar3,(float)uVar9,0,0,fVar20 * (float)uVar12 + fVar28,
                       fVar30 * (float)uVar11 + fVar29,param_2,lVar13,&local_1a8,local_218,
                       *(undefined8 *)(lVar16 + 0xa8),param_7,0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  if (param_12 == 0) {
    uVar12 = *(uint *)(param_4 + 0x54);
    if (param_13 != 0) goto LAB_005959fc;
LAB_00595b3c:
    fVar20 = *(float *)(param_4 + 0x88);
    fVar28 = *(float *)(param_4 + 0x8c);
    fVar29 = *(float *)(param_4 + 0x90);
    fVar30 = *(float *)(param_4 + 0x94);
    uVar11 = *(uint *)(param_4 + 0x58);
  }
  else {
    uVar12 = param_12;
    if (param_13 == 0) goto LAB_00595b3c;
LAB_005959fc:
    fVar20 = *(float *)(param_4 + 0x88);
    fVar28 = *(float *)(param_4 + 0x8c);
    fVar29 = *(float *)(param_4 + 0x90);
    fVar30 = *(float *)(param_4 + 0x94);
    uVar11 = param_13;
  }
  if (param_12 == 0) {
    param_12 = *(uint *)(param_5 + 0x54);
  }
  if (param_13 == 0) {
    param_13 = *(uint *)(param_5 + 0x58);
  }
  uVar2 = *(undefined4 *)(*(long *)(param_4 + 0x80) + 0xc);
  if (iVar19 == 0) {
    if (!bVar4) {
      param_9 = param_9 & 1;
      FUN_00513d10(fVar21,0x3f800000,uVar2,&local_258,local_134,param_9);
      FUN_00513d10(fVar22,0x3f800000,uVar2,&local_248,local_118,param_9);
      FUN_00513d10(fVar23,0x3f800000,uVar2,&local_238,local_fc,param_9);
      FUN_00513d10(fVar24,0x3f800000,uVar2,&local_228,local_e0,param_9);
      local_c4[0] = (local_258 + 0.0 + local_248 + local_238 + local_228) * 0.25;
      local_c4[1] = (fStack_254 + 0.0 + local_244 + local_234 + local_224) * 0.25;
      local_c4[2] = (local_250 + 0.0 + local_240 + local_230 + local_220) * 0.25;
      local_c4[3] = (fStack_24c + 0.0 + local_23c + local_22c + local_21c) * 0.25;
      if (iVar10 != 4) {
        local_b4 = (local_248 + 0.0 + local_238 + local_228 + local_218[0]) * 0.25;
        local_b0 = (local_244 + 0.0 + local_234 + local_224 + local_218[1]) * 0.25;
        local_ac = (local_240 + 0.0 + local_230 + local_220 + local_218[2]) * 0.25;
      }
      fVar21 = *param_8;
      fVar22 = param_8[1];
      fVar23 = param_8[2];
      fVar24 = param_8[3];
      goto joined_r0x00595e04;
    }
    FUN_00513d10(local_268,0x3f800000,uVar2,local_c4,local_134,param_9 & 1);
  }
  else {
    if (!bVar4) {
      param_9 = param_9 & 1;
      FUN_00514c90(fVar21,0x3f800000,uVar2,local_c4,local_134,param_9);
      FUN_00514c90(fVar22,0x3f800000,uVar2,local_c4,local_118,param_9);
      FUN_00514c90(fVar23,0x3f800000,uVar2,local_c4,local_fc,param_9);
      FUN_00514c90(fVar24,0x3f800000,uVar2,local_c4,local_e0,param_9);
      fVar21 = *param_8;
      fVar22 = param_8[1];
      fVar23 = param_8[2];
      fVar24 = param_8[3];
      goto joined_r0x00595e04;
    }
    FUN_00514c90(local_268,0x3f800000,uVar2,local_c4,local_134,param_9 & 1);
  }
  fVar21 = *param_8;
  fVar22 = param_8[1];
  fVar23 = param_8[2];
  fVar24 = param_8[3];
joined_r0x00595e04:
  if (bVar5) {
    pfVar8 = local_fc;
    pfVar17 = local_218 + 2;
    puVar15 = (undefined8 *)auStack_1a0;
    pfVar18 = local_c4;
    lVar14 = lVar13;
    do {
      if (bVar4) {
        fVar25 = param_1 * pfVar8[-0xe];
        pfVar17[-2] = fVar25 * fVar21;
        pfVar17[-1] = fVar25 * fVar22;
        *pfVar17 = fVar25 * fVar23;
        pfVar17[1] = fVar25 * fVar24;
      }
      else {
        fVar25 = pfVar8[-7];
        fVar26 = *pfVar8;
        fVar27 = pfVar8[7];
        pfVar17[-2] = param_1 * fVar21 * pfVar8[-0xe];
        *pfVar17 = param_1 * fVar23 * fVar26;
        pfVar17[-1] = param_1 * fVar22 * fVar25;
        pfVar17[1] = param_1 * fVar24 * fVar27;
      }
      fVar25 = *pfVar18;
      lVar14 = lVar14 + -1;
      pfVar8 = pfVar8 + 1;
      *(undefined4 *)(puVar15 + -1) = 0;
      *(float *)((long)puVar15 + -4) = fVar25;
      pfVar17 = pfVar17 + 4;
      *puVar15 = 0;
      puVar15 = puVar15 + 2;
      pfVar18 = pfVar18 + 1;
    } while (lVar14 != 0);
  }
  else {
    local_134[0] = param_1 * local_134[0];
    local_218[0] = local_134[0] * fVar21;
    local_134[1] = param_1 * local_134[1];
    local_218[1] = local_134[0] * fVar22;
    local_134[2] = param_1 * local_134[2];
    local_1f4 = local_134[2] * fVar22;
    local_218[2] = local_134[0] * fVar23;
    local_218[3] = local_134[0] * fVar24;
    local_218[4] = local_134[1] * fVar21;
    local_218[5] = local_134[1] * fVar22;
    _local_1a4 = (ulong)(uint)local_c4[0];
    local_1f8 = local_134[2] * fVar21;
    local_218[6] = local_134[1] * fVar23;
    local_1fc = local_134[1] * fVar24;
    local_1a8 = 0.0;
    local_19c = 0;
    local_1f0 = local_134[2] * fVar23;
    local_1ec = local_134[2] * fVar24;
    local_194 = (ulong)(uint)local_c4[1];
    local_18c = 0;
    local_184 = (ulong)(uint)local_c4[2];
    local_17c = 0;
    fStack_170 = 0.0;
    local_16c = 0.0;
    local_134[3] = param_1 * local_134[3];
    local_1e8 = local_134[3] * fVar21;
    local_1e4 = local_134[3] * fVar22;
    local_1e0 = local_134[3] * fVar23;
    local_1dc = local_134[3] * fVar24;
    local_174 = local_c4[3];
    if (iVar10 != 4) {
      local_124 = param_1 * local_124;
      local_1d8 = local_124 * fVar21;
      local_1d4 = local_124 * fVar22;
      local_1d0 = local_124 * fVar23;
      local_1cc = local_124 * fVar24;
      local_120 = param_1 * local_120;
      param_1 = param_1 * local_11c;
      local_1c8 = local_120 * fVar21;
      local_1c4 = local_120 * fVar22;
      local_1c0 = local_120 * fVar23;
      local_1bc = local_120 * fVar24;
      local_1b8 = param_1 * fVar21;
      local_1b4 = param_1 * fVar22;
      fStack_1b0 = param_1 * fVar23;
      local_1ac = param_1 * fVar24;
      local_168 = 0.0;
      local_164 = (ulong)(uint)local_b4;
      local_15c = 0;
      local_154 = (ulong)(uint)local_b0;
      local_14c = 0;
      uStack_140 = 0;
      local_13c = 0;
      local_144 = local_ac;
    }
  }
  uVar7 = FUN_0059d300(param_5,0,0,1,0,0);
  if (-1 < (int)uVar7) {
    FUN_0059d000(0,0);
    lVar14 = param_4;
    do {
      lVar16 = lVar14;
      lVar14 = *(long *)(lVar16 + 0x120);
    } while (lVar14 != 0);
    uVar7 = FUN_00575a10(0,0,(float)param_12,(float)param_13,0,0,fVar20 * (float)uVar12 + fVar29,
                         fVar28 * (float)uVar11 + fVar30,param_2,lVar13,&local_1a8,local_218,
                         *(undefined8 *)(lVar16 + 0xa8),param_7,0);
    if (-1 < (int)uVar7) {
      do {
        lVar13 = param_3;
        param_3 = *(long *)(lVar13 + 0x120);
      } while (param_3 != 0);
      plVar6 = *(long **)(lVar13 + 0xa8);
      (**(code **)(*plVar6 + 0x88))(plVar6,0);
      do {
        lVar13 = param_4;
        param_4 = *(long *)(lVar13 + 0x120);
      } while (param_4 != 0);
      plVar6 = *(long **)(lVar13 + 0xa8);
      (**(code **)(*plVar6 + 0x88))(plVar6,0);
      uVar7 = 0;
    }
  }
  return uVar7;
}


