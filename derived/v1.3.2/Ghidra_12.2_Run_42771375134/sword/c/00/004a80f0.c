/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a80f0; name: FUN_004a80f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004a80f0(undefined4 param_1,ulong param_2,float *param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  void *__s;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float __x;
  float __x_00;
  float afStack_380 [46];
  float local_2c8;
  float local_2c4;
  float local_2c0;
  undefined4 local_2bc;
  float local_2b8;
  float fStack_2b4;
  undefined4 local_2b0;
  float local_2ac;
  float fStack_2a8;
  undefined4 local_2a4;
  float local_2a0;
  float fStack_29c;
  undefined4 local_298;
  float local_294;
  float fStack_290;
  undefined4 local_28c;
  float local_288;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined4 local_264;
  float local_260;
  undefined4 local_25c;
  float local_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  float local_248;
  undefined4 local_244;
  float local_240;
  float fStack_23c;
  undefined4 local_238;
  float local_234;
  float fStack_230;
  undefined4 local_22c;
  float local_228;
  float fStack_224;
  undefined4 local_220;
  float local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  float local_200;
  undefined4 local_1fc;
  float local_1f8;
  float fStack_1f4;
  undefined4 local_1f0;
  float local_1ec;
  float fStack_1e8;
  undefined4 local_1e4;
  float local_1e0;
  float fStack_1dc;
  undefined4 local_1d8;
  float local_1d4;
  float fStack_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  undefined4 local_190;
  float local_18c;
  undefined8 local_188;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  undefined4 local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  
  puVar2 = PTR_PTR_02712da8;
  uVar3 = (uint)param_2;
  if ((param_2 & 0xff9c0000) == 0) {
    lVar10 = *param_4;
    uVar3 = uVar3 & 0xff;
    uVar1 = uVar3 + 2;
    if (3 < uVar3) {
      uVar1 = uVar3;
    }
    uVar12 = (ulong)uVar1;
    if (lVar10 == 0) {
      lVar10 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar1 << 4);
      *param_4 = lVar10;
      if (lVar10 == 0) {
        return;
      }
    }
    fVar16 = *param_3;
    fVar14 = cosf(fVar16);
    __x_00 = param_3[1];
    fVar18 = param_3[2];
    __x = __x_00 + (fVar18 - __x_00) * 0.5;
    fVar15 = cosf(__x);
    fVar13 = cosf(fVar18);
    fVar16 = sinf(fVar16);
    local_2c8 = sinf(fVar18);
    fVar19 = -fVar16;
    fVar17 = -local_2c8;
    local_2a4 = 0;
    local_298 = 0;
    local_28c = 0;
    local_2bc = 0;
    local_2b0 = 0;
    local_264 = 0;
    local_26c = 0;
    local_274 = 0;
    local_27c = 0;
    local_284 = 0;
    local_2c0 = fVar19;
    local_2b8 = fVar14;
    fStack_2b4 = fVar16;
    local_2ac = fVar14;
    fStack_2a8 = local_2c8;
    local_2a0 = fVar13;
    fStack_29c = fVar17;
    local_294 = fVar13;
    fStack_290 = fVar19;
    local_288 = fVar14;
    local_2c4 = cosf(__x_00);
    fVar18 = sinf(__x);
    local_110 = sinf(__x_00);
    local_200 = -fVar18;
    local_260 = fVar19;
    local_25c = 0;
    local_258 = fVar14;
    local_254 = 0;
    uStack_250 = 0;
    local_24c = 0x3f800000;
    local_248 = fVar16;
    local_244 = 0;
    local_240 = fVar14;
    fStack_23c = local_2c8;
    local_238 = 0;
    local_234 = fVar13;
    fStack_230 = fVar17;
    local_22c = 0;
    local_228 = fVar13;
    fStack_224 = fVar19;
    local_220 = 0;
    local_21c = fVar14;
    local_218 = 0;
    local_1fc = 0;
    local_1f8 = fVar15;
    fStack_1f4 = fVar19;
    local_1f0 = 0;
    local_1ec = fVar14;
    fStack_1e8 = fVar16;
    local_1e4 = 0;
    local_1e0 = fVar14;
    fStack_1dc = fVar18;
    local_1d8 = 0;
    local_1d4 = fVar15;
    fStack_1d0 = local_200;
    local_1cc = 0;
    local_1c8 = fVar15;
    local_1a4 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_1ac = 0;
    local_1b4 = 0;
    local_1bc = 0;
    local_1c4 = 0;
    local_180 = 0x3f800000;
    local_b4 = 0x3f800000;
    pfVar4 = (float *)(lVar10 + 8);
    local_1a0 = local_200;
    local_164 = local_200;
    local_12c = local_2c4;
    local_108 = local_2c4;
    local_a4 = local_110;
    local_19c = 0;
    local_198 = fVar15;
    local_194 = fVar19;
    local_190 = 0;
    local_18c = fVar14;
    local_188 = 0;
    local_17c = fVar16;
    local_178 = 0;
    local_174 = fVar14;
    local_170 = fVar18;
    local_16c = 0;
    local_168 = fVar15;
    local_160 = 0;
    local_15c = fVar15;
    local_158 = 0;
    local_140 = fVar17;
    local_13c = 0;
    local_138 = fVar13;
    local_134 = -local_110;
    local_130 = 0;
    local_128 = fVar19;
    local_124 = 0;
    local_120 = fVar14;
    local_11c = fVar16;
    local_118 = 0;
    local_114 = fVar14;
    local_10c = 0;
    local_104 = local_2c8;
    local_100 = 0;
    local_fc = fVar13;
    local_f8 = fVar17;
    local_f4 = 0;
    local_f0 = fVar13;
    local_ec = 0;
    local_e8 = 0;
    local_e0 = fVar17;
    local_dc = 0;
    local_d8 = fVar13;
    local_d4 = -local_110;
    local_d0 = 0;
    local_cc = local_2c4;
    local_c8 = fVar19;
    local_c4 = 0;
    local_c0 = fVar14;
    local_bc = 0;
    local_b8 = 0;
    local_b0 = fVar16;
    local_ac = 0;
    local_a8 = fVar14;
    local_a0 = 0;
    local_9c = local_2c4;
    local_98 = local_2c8;
    local_94 = 0;
    local_90 = fVar13;
    local_8c = fVar17;
    local_88 = 0;
    local_84 = fVar13;
    local_150 = 0;
    uStack_148 = 0;
    pfVar7 = afStack_380 + (ulong)uVar3 * 0x18;
    do {
      uVar12 = uVar12 - 1;
      pfVar6 = pfVar7 + 3;
      fVar14 = 1.0 / (pfVar7[5] * *pfVar7 - *pfVar6 * pfVar7[2]);
      pfVar4[-2] = fVar14 * pfVar7[5];
      pfVar4[-1] = -(*pfVar6 * fVar14);
      *pfVar4 = -(fVar14 * pfVar7[2]);
      pfVar4[1] = *pfVar7 * fVar14;
      pfVar4 = pfVar4 + 4;
      pfVar7 = pfVar6;
    } while (uVar12 != 0);
    return;
  }
  lVar10 = -((ulong)((uVar3 & 0xff) * 0xc + 0xf) & 0x1ff0);
  puVar11 = (undefined4 *)((long)register0x00000008 + lVar10 + -0x40);
  fVar14 = *param_3;
  *(float *)((long)register0x00000008 + lVar10 + -0x3c) = fVar14;
  *(undefined8 *)((long)register0x00000008 + lVar10 + -0x38) = 0x3f80000000000000;
  uVar12 = (param_2 & 0xffffffff) >> 0xc;
  *puVar11 = 0x3f800000;
  *(float *)((long)register0x00000008 + lVar10 + -0x30) = -fVar14;
  *(undefined4 *)((long)register0x00000008 + lVar10 + -0x2c) = 0;
  if ((uVar3 >> 0xe & 1) == 0) {
    uVar5 = 2;
  }
  else {
    *(undefined8 *)((long)register0x00000008 + lVar10 + -0x28) = 0x3f800000;
    uVar5 = 3;
    *(undefined4 *)((long)register0x00000008 + lVar10 + -0x20) = 0;
  }
  if ((uVar12 & 0x210) != 0) {
    if (((uint)uVar12 & 0x210) == 0x210) {
      fVar15 = param_3[2];
      puVar8 = puVar11 + uVar5 * 3;
      puVar8[2] = 0;
      *puVar8 = 0x3f800000;
      puVar8[1] = fVar15;
      puVar8 = puVar11 + (ulong)((int)uVar5 + 1) * 3;
      puVar8[1] = -fVar15;
      puVar8[2] = 0;
      *puVar8 = 0x3f800000;
      fVar15 = param_3[1];
      uVar5 = (ulong)((int)uVar5 + 2);
    }
    else {
      fVar15 = param_3[1] + (param_3[2] - param_3[1]) * 0.5;
    }
    puVar9 = puVar11 + uVar5 * 3;
    puVar8 = puVar11 + (ulong)((int)uVar5 + 1) * 3;
    uVar5 = (ulong)((int)uVar5 + 2);
    puVar9[1] = fVar15;
    puVar9[2] = 0;
    *puVar9 = 0x3f800000;
    puVar8[1] = -fVar15;
    puVar8[2] = 0;
    *puVar8 = 0x3f800000;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    lVar10 = uVar5 * 3;
    *(undefined4 *)((long)(puVar11 + lVar10) + 8) = 0x3fc90fdb;
    uVar5 = (ulong)((int)uVar5 + 1);
    *(undefined8 *)(puVar11 + lVar10) = 0x3f800000;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    puVar8 = puVar11 + uVar5 * 3;
    uVar5 = (ulong)((int)uVar5 + 1);
    puVar8[1] = fVar14;
    puVar8[2] = param_1;
    *puVar8 = 0x3f800000;
  }
  if ((uVar3 >> 0x19 & 1) != 0) {
    lVar10 = uVar5 * 3;
    uVar5 = (ulong)((int)uVar5 + 1);
    *(undefined4 *)((long)(puVar11 + lVar10) + 8) = param_1;
    *(undefined8 *)(puVar11 + lVar10) = 0x3f800000;
  }
  if ((uVar3 >> 0x1a & 1) == 0) {
    fVar14 = param_3[2];
  }
  else {
    puVar8 = puVar11 + uVar5 * 3;
    uVar5 = (ulong)((int)uVar5 + 1);
    puVar8[1] = -fVar14;
    puVar8[2] = param_1;
    *puVar8 = 0x3f800000;
    fVar14 = param_3[2];
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    puVar8 = puVar11 + uVar5 * 3;
    uVar5 = (ulong)((int)uVar5 + 1);
    puVar8[1] = fVar14;
    puVar8[2] = param_1;
    *puVar8 = 0x3f800000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    *(undefined4 *)((long)(puVar11 + uVar5 * 3) + 8) = param_1;
    *(undefined8 *)(puVar11 + uVar5 * 3) = 0x3f800000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    puVar11 = puVar11 + uVar5 * 3;
    puVar11[1] = -fVar14;
    puVar11[2] = param_1;
    *puVar11 = 0x3f800000;
  }
  *param_4 = 0;
  __s = (void *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,0x60);
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x60);
  }
  *param_4 = 0;
  return;
}


