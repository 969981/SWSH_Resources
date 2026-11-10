/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024db40; name: FUN_0024db40
 */


ulong FUN_0024db40(float param_1,ulong param_2,long param_3,float *param_4,float *param_5,
                  uint *param_6,long param_7,float *param_8,ushort *param_9,byte param_10,
                  long param_11)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
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
  float local_368;
  float fStack_364;
  float local_360;
  float local_35c;
  float local_354;
  uint local_30c;
  uint local_2e8;
  float local_2e4;
  float local_2cc;
  undefined8 local_2c0;
  ulong uStack_2b8;
  undefined8 local_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  undefined8 local_290;
  ulong uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  float local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  float local_260;
  float local_25c;
  float local_258;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_208;
  float local_204;
  float local_200;
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
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
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
  float local_104;
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
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  uVar9 = (uint)param_2;
  if (uVar9 == 0) {
    return param_2;
  }
  fVar31 = (*param_4 - param_4[3]) * 0.5;
  fVar35 = (param_4[2] - param_4[5]) * 0.5;
  fVar33 = (param_4[1] - param_4[4]) * 0.5;
  uVar3 = *param_9;
  bVar8 = (uVar3 & 0x80) == 0;
  fVar19 = sqrtf(fVar31 * fVar31 + fVar33 * fVar33 + fVar35 * fVar35);
  if (fVar19 == 0.0) {
    uVar9 = FUN_00249f00(param_4[6],param_1,param_2 & 0xffffffff,param_3,param_4,param_5,param_6,
                         param_7,param_8,param_10 & 1,(byte)(uVar3 >> 7) & 1,(byte)(uVar3 >> 6) & 1,
                         (uVar3 & 0x10) == 0);
    return (ulong)(uVar9 & 1);
  }
  fVar20 = 1.0 / fVar19;
  bVar1 = bVar8 & (param_10 ^ 0xff);
  fVar21 = fabsf(fVar31 * fVar20 * *param_5 + fVar33 * fVar20 * param_5[1] +
                 fVar20 * fVar35 * param_5[2]);
  fVar23 = DAT_01d4c3e0;
  fVar20 = DAT_01d4bd24;
  fVar22 = param_4[2];
  local_248 = param_4[3];
  fVar38 = *param_4;
  fVar26 = param_4[1];
  local_244 = param_4[4];
  local_240 = param_4[5];
  fStack_ac = (fVar26 + local_244) * 0.5;
  local_b0 = (fVar38 + local_248) * 0.5;
  local_a8 = (fVar22 + local_240) * 0.5;
  if (fVar21 < DAT_01d4becc) {
    *(undefined4 *)(param_7 + 0x10) = 0xffffffff;
    if (param_6 == (uint *)0x0) {
      local_354 = 0.0;
    }
    else {
      local_354 = (float)*param_6;
    }
    local_244 = local_244 - fVar26;
    fVar20 = param_4[6];
    fVar19 = local_b0 * *param_5 + fStack_ac * param_5[1] + local_a8 * param_5[2];
    local_248 = local_248 - fVar38;
    local_240 = local_240 - fVar22;
    local_238 = 0.0;
    local_23c = local_248 * local_248 + local_244 * local_244 + local_240 * local_240;
    if (local_23c != 0.0) {
      local_238 = 1.0 / local_23c;
    }
    fVar23 = fVar20 + DAT_01d4bd94;
    fVar21 = fVar19 - fVar23;
    local_35c = 2.0;
    uVar14 = 0;
    local_360 = 0.0;
    local_368 = 0.0;
    fStack_364 = 0.0;
    local_2cc = param_1;
    while( true ) {
      uVar2 = 0;
      if ((float)uVar14 != local_354) {
        uVar2 = uVar14;
      }
      fVar22 = local_354;
      if (uVar14 != 0) {
        fVar22 = (float)uVar2;
      }
      uVar15 = (ulong)(uint)fVar22;
      pfVar17 = (float *)(param_3 + uVar15 * 0x24);
      fVar25 = pfVar17[3] - *pfVar17;
      fVar24 = pfVar17[1];
      fVar26 = pfVar17[2];
      fVar27 = pfVar17[5] - fVar26;
      fVar37 = pfVar17[6] - *pfVar17;
      fVar38 = pfVar17[4] - fVar24;
      fVar24 = pfVar17[7] - fVar24;
      fVar26 = pfVar17[8] - fVar26;
      local_260 = fVar38 * fVar26 - fVar27 * fVar24;
      local_25c = fVar27 * fVar37 - fVar25 * fVar26;
      local_258 = fVar25 * fVar24 - fVar38 * fVar37;
                    /* try { // try from 0024dee8 to 0024df23 has its CatchHandler @ 0024f1c8 */
      if (((bVar1 == 0) ||
          (local_260 * *param_5 + local_25c * param_5[1] + local_258 * param_5[2] <= 0.0)) &&
         ((param_11 == 0 ||
          (lVar12 = param_3 + uVar15 * 0x24,
          iVar10 = FUN_0023ae00(param_11,pfVar17,lVar12 + 0xc,lVar12 + 0x18), iVar10 != 0)))) break;
LAB_0024e8bc:
      uVar14 = uVar14 + 1;
      if (uVar9 <= uVar14) {
        fVar22 = *(float *)(param_7 + 0x10);
LAB_0024e8d8:
        if (fVar22 == -NAN) {
          return 0;
        }
        *(float *)(param_7 + 0x30) = local_2cc;
        *param_8 = local_368;
        param_8[1] = fStack_364;
        param_8[2] = local_360;
                    /* try { // try from 0024e908 to 0024e917 has its CatchHandler @ 0024f1b8 */
        FUN_0024a770(param_7 + 0x18,param_7 + 0x24,&local_b0,param_5,&local_230);
        if ((!bVar8 && (param_10 & 1) == 0) &&
           (0.0 < *param_5 * local_368 + param_5[1] * fStack_364 + param_5[2] * local_360)) {
          *(float *)(param_7 + 0x24) = -*(float *)(param_7 + 0x24);
          *(float *)(param_7 + 0x28) = -*(float *)(param_7 + 0x28);
          *(float *)(param_7 + 0x2c) = -*(float *)(param_7 + 0x2c);
        }
        if (*(uint *)(param_7 + 0x10) == 0xffffffff) {
          return 1;
        }
        fVar19 = *(float *)(param_7 + 0x30);
        uStack_280 = CONCAT44(fVar19 * param_5[1] + param_4[1],fVar19 * *param_5 + *param_4);
        uStack_278 = (ulong)(uint)(fVar19 * param_5[2] + param_4[2]);
        puVar13 = (undefined8 *)(param_3 + (ulong)*(uint *)(param_7 + 0x10) * 0x24);
        local_290 = CONCAT44(fVar19 * param_5[1] + param_4[4],fVar19 * *param_5 + param_4[3]);
        uStack_288 = (ulong)(uint)(fVar19 * param_5[2] + param_4[5]);
        uStack_2a0 = *puVar13;
        local_2b0 = *(undefined8 *)((long)puVar13 + 0xc);
        local_2c0 = puVar13[3];
        uStack_298 = (ulong)*(uint *)(puVar13 + 1);
        uStack_2a8 = (ulong)*(uint *)((long)puVar13 + 0x14);
        uStack_2b8 = (ulong)*(uint *)(puVar13 + 4);
                    /* try { // try from 0024ea44 to 0024ea63 has its CatchHandler @ 0024f1b4 */
        FUN_00236400(&uStack_280,&local_290,&uStack_2a0,&local_2b0,&local_2c0,&local_260,&local_270)
        ;
        *(ulong *)(param_7 + 0x18) = CONCAT44(uStack_26c,local_270);
        *(undefined4 *)(param_7 + 0x20) = uStack_268;
        *(undefined2 *)(param_7 + 0x14) = 7;
        return 1;
      }
    }
    if (((uVar3 >> 4 & 1) != 0) ||
       (lVar12 = param_3 + uVar15 * 0x24,
       uVar15 = FUN_00242fb0(&local_260,pfVar17,lVar12 + 0xc,lVar12 + 0x18,param_4,&local_248),
       (uVar15 & 1) == 0)) {
      local_f8 = pfVar17[1];
      local_144 = *pfVar17 - fVar31;
      local_140 = local_f8 - fVar33;
      local_f4 = pfVar17[2];
      local_fc = fVar31 + *pfVar17;
      local_f8 = fVar33 + local_f8;
      local_13c = local_f4 - fVar35;
      fVar26 = pfVar17[3];
      fVar38 = pfVar17[5];
      local_f4 = fVar35 + local_f4;
      fVar25 = pfVar17[8];
      local_18c = fVar26 - fVar31;
      local_184 = fVar38 - fVar35;
      fVar41 = fVar25 - fVar35;
      fVar26 = fVar31 + fVar26;
      fVar38 = fVar35 + fVar38;
      fVar25 = fVar35 + fVar25;
      fVar24 = pfVar17[4];
      fVar27 = pfVar17[6];
      fVar37 = pfVar17[7];
      fVar43 = fVar37 - fVar33;
      fVar37 = fVar33 + fVar37;
      local_188 = fVar24 - fVar33;
      fVar42 = fVar27 - fVar31;
      fVar24 = fVar33 + fVar24;
      fVar27 = fVar31 + fVar27;
      if (0.0 <= fVar31 * local_260 + fVar33 * local_25c + fVar35 * local_258) {
        fVar40 = fVar26 - local_fc;
        fVar28 = fVar24 - local_f8;
        fVar39 = fVar38 - local_f4;
        fVar29 = fVar27 - local_fc;
        fVar32 = fVar37 - local_f8;
        fVar34 = fVar25 - local_f4;
        local_1b0 = local_fc;
        local_1ac = local_f8;
        local_1a8 = local_f4;
        local_1a4 = fVar26;
        local_1a0 = fVar24;
        local_19c = fVar38;
        local_198 = fVar27;
        local_194 = fVar37;
        local_190 = fVar25;
      }
      else {
        fVar40 = local_18c - local_144;
        fVar28 = local_188 - local_140;
        fVar39 = local_184 - local_13c;
        fVar29 = fVar42 - local_144;
        fVar32 = fVar43 - local_140;
        fVar34 = fVar41 - local_13c;
        local_1b0 = local_144;
        local_1ac = local_140;
        local_1a8 = local_13c;
        local_1a4 = local_18c;
        local_1a0 = local_188;
        local_19c = local_184;
        local_198 = fVar42;
        local_194 = fVar43;
        local_190 = fVar41;
      }
      fVar30 = fVar37 - local_188;
      local_208 = fVar28 * fVar34 - fVar39 * fVar32;
      local_204 = fVar39 * fVar29 - fVar40 * fVar34;
      local_200 = fVar40 * fVar32 - fVar28 * fVar29;
      fVar28 = fVar27 - local_18c;
      fVar29 = fVar25 - local_184;
      local_1fc = (fVar24 - local_188) * fVar29 - (fVar38 - local_184) * fVar30;
      local_1f8 = (fVar38 - local_184) * fVar28 - (fVar26 - local_18c) * fVar29;
      local_1f4 = (fVar26 - local_18c) * fVar30 - (fVar24 - local_188) * fVar28;
      fVar32 = *param_5;
      fVar34 = param_5[1];
      fVar39 = param_5[2];
      local_180 = fVar26;
      local_17c = fVar24;
      local_178 = fVar38;
      local_174 = fVar27;
      local_170 = fVar37;
      local_16c = fVar25;
      if (0.0 < local_1f4 * fVar39 + fVar32 * local_1fc + fVar34 * local_1f8) {
        local_1fc = -local_1fc;
        local_1f8 = -local_1f8;
        local_1f4 = -local_1f4;
        local_180 = fVar27;
        local_17c = fVar37;
        local_178 = fVar25;
        local_174 = fVar26;
        local_170 = fVar24;
        local_16c = fVar38;
      }
      local_1f0 = fVar30 * (fVar41 - local_184) - fVar29 * (fVar43 - local_188);
      local_1ec = fVar29 * (fVar42 - local_18c) - fVar28 * (fVar41 - local_184);
      local_1e8 = fVar28 * (fVar43 - local_188) - fVar30 * (fVar42 - local_18c);
      local_15c = fVar27;
      local_158 = fVar37;
      local_154 = fVar25;
      local_150 = fVar42;
      local_14c = fVar43;
      local_148 = fVar41;
      if (0.0 < fVar39 * local_1e8 + fVar32 * local_1f0 + fVar34 * local_1ec) {
        local_1f0 = -local_1f0;
        local_1ec = -local_1ec;
        local_1e8 = -local_1e8;
        local_15c = fVar42;
        local_158 = fVar43;
        local_154 = fVar41;
        local_150 = fVar27;
        local_14c = fVar37;
        local_148 = fVar25;
      }
      fVar29 = fVar37 - local_140;
      fVar40 = fVar25 - local_13c;
      fVar28 = fVar27 - local_144;
      local_1e4 = (fVar43 - local_140) * fVar40 - (fVar41 - local_13c) * fVar29;
      local_1e0 = (fVar41 - local_13c) * fVar28 - (fVar42 - local_144) * fVar40;
      local_1dc = (fVar42 - local_144) * fVar29 - (fVar43 - local_140) * fVar28;
      local_138 = fVar42;
      local_134 = fVar43;
      local_130 = fVar41;
      local_12c = fVar27;
      local_128 = fVar37;
      local_124 = fVar25;
      if (0.0 < fVar39 * local_1dc + fVar32 * local_1e4 + fVar34 * local_1e0) {
        local_1e4 = -local_1e4;
        local_1e0 = -local_1e0;
        local_1dc = -local_1dc;
        local_138 = fVar27;
        local_134 = fVar37;
        local_130 = fVar25;
        local_12c = fVar42;
        local_128 = fVar43;
        local_124 = fVar41;
      }
      local_1d8 = fVar29 * (local_f4 - local_13c) - fVar40 * (local_f8 - local_140);
      local_1d4 = fVar40 * (local_fc - local_144) - fVar28 * (local_f4 - local_13c);
      local_1d0 = fVar28 * (local_f8 - local_140) - fVar29 * (local_fc - local_144);
      local_114 = fVar27;
      local_110 = fVar37;
      local_10c = fVar25;
      local_108 = local_fc;
      local_104 = local_f8;
      local_100 = local_f4;
      if (0.0 < fVar39 * local_1d0 + fVar32 * local_1d8 + fVar34 * local_1d4) {
        local_1d8 = -local_1d8;
        local_1d4 = -local_1d4;
        local_1d0 = -local_1d0;
        local_114 = local_fc;
        local_110 = local_f8;
        local_10c = local_f4;
        local_108 = fVar27;
        local_104 = fVar37;
        local_100 = fVar25;
      }
      fVar25 = local_18c - local_fc;
      fVar27 = local_188 - local_f8;
      fVar37 = local_184 - local_f4;
      local_1c8 = (fVar38 - local_f4) * fVar25 - (fVar26 - local_fc) * fVar37;
      local_1cc = (fVar24 - local_f8) * fVar37 - (fVar38 - local_f4) * fVar27;
      local_1c4 = (fVar26 - local_fc) * fVar27 - (fVar24 - local_f8) * fVar25;
      local_f0 = fVar26;
      local_ec = fVar24;
      local_e8 = fVar38;
      local_e4 = local_18c;
      local_e0 = local_188;
      local_dc = local_184;
      if (0.0 < fVar39 * local_1c4 + fVar32 * local_1cc + fVar34 * local_1c8) {
        local_1cc = -local_1cc;
        local_1c8 = -local_1c8;
        local_1c4 = -local_1c4;
        local_f0 = local_18c;
        local_ec = local_188;
        local_e8 = local_184;
        local_e4 = fVar26;
        local_e0 = fVar24;
        local_dc = fVar38;
      }
      local_1bc = fVar37 * (local_144 - local_fc) - fVar25 * (local_13c - local_f4);
      local_1c0 = fVar27 * (local_13c - local_f4) - fVar37 * (local_140 - local_f8);
      local_1b8 = fVar25 * (local_140 - local_f8) - fVar27 * (local_144 - local_fc);
      local_cc = local_18c;
      local_c8 = local_188;
      local_c4 = local_184;
      local_c0 = local_144;
      local_bc = local_140;
      local_b8 = local_13c;
      if (0.0 < fVar39 * local_1b8 + fVar32 * local_1c0 + fVar34 * local_1bc) {
        local_1c0 = -local_1c0;
        local_1bc = -local_1bc;
        local_1b8 = -local_1b8;
        local_cc = local_144;
        local_c8 = local_140;
        local_c4 = local_13c;
        local_c0 = local_18c;
        local_bc = local_188;
        local_b8 = local_184;
      }
      local_168 = local_18c;
      local_164 = local_188;
      local_160 = local_184;
      local_120 = local_144;
      local_11c = local_140;
      local_118 = local_13c;
      local_d8 = local_fc;
      local_d4 = local_f8;
      local_d0 = local_f4;
                    /* try { // try from 0024e49c to 0024e49f has its CatchHandler @ 0024f1c4 */
      fVar26 = sqrtf(local_260 * local_260 + local_25c * local_25c + local_258 * local_258);
      if (0.0 < fVar26) {
        fVar26 = 1.0 / fVar26;
        local_260 = fVar26 * local_260;
        local_25c = fVar26 * local_25c;
        local_258 = fVar26 * local_258;
      }
                    /* try { // try from 0024e500 to 0024e503 has its CatchHandler @ 0024f1c0 */
      fVar26 = fabsf(local_260 * *param_5 + local_25c * param_5[1] + local_258 * param_5[2]);
      fVar26 = -fVar26;
      uVar15 = 0;
      pfVar17 = &local_1b0;
      pfVar18 = &local_208;
      do {
        if (bVar1 == 0) {
          fVar38 = *param_5;
          fVar24 = param_5[1];
          fVar25 = param_5[2];
LAB_0024e584:
          fVar36 = *pfVar17;
          fVar34 = pfVar17[1];
          fVar29 = pfVar17[2];
          fVar32 = pfVar17[3];
          fVar28 = pfVar17[4];
          fVar37 = pfVar17[5];
          fVar41 = pfVar17[6];
          fVar43 = pfVar17[7];
          fVar42 = pfVar17[8];
          fVar39 = (fVar36 + fVar32 + fVar41) * DAT_01d4bd24;
          fVar40 = (fVar34 + fVar28 + fVar43) * DAT_01d4bd24;
          fVar30 = (fVar29 + fVar37 + fVar42) * DAT_01d4bd24;
          fVar27 = (fVar39 - local_b0) * fVar38 + (fVar40 - fStack_ac) * fVar24 +
                   (fVar30 - local_a8) * fVar25;
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          if (local_2cc <= fVar27) {
            fVar27 = local_2cc;
          }
          fVar38 = (fVar39 - local_b0) - fVar38 * fVar27;
          fVar24 = (fVar40 - fStack_ac) - fVar24 * fVar27;
          fVar25 = (fVar30 - local_a8) - fVar25 * fVar27;
                    /* try { // try from 0024e634 to 0024e637 has its CatchHandler @ 0024f1d0 */
          fVar38 = sqrtf(fVar25 * fVar25 + fVar38 * fVar38 + fVar24 * fVar24);
          fVar38 = (fVar38 - fVar20) + DAT_01d4c3e0;
          fVar24 = fVar38 * fVar38;
          fVar25 = (fVar39 - fVar36) * (fVar39 - fVar36) + (fVar40 - fVar34) * (fVar40 - fVar34) +
                   (fVar30 - fVar29) * (fVar30 - fVar29);
          bVar4 = false;
          bVar6 = false;
          if (0.0 <= fVar38) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar24) && !NAN(fVar25)) {
              bVar4 = fVar24 == fVar25;
              bVar6 = fVar25 <= fVar24;
            }
          }
          fVar38 = (fVar39 - fVar32) * (fVar39 - fVar32) + (fVar40 - fVar28) * (fVar40 - fVar28) +
                   (fVar30 - fVar37) * (fVar30 - fVar37);
          bVar5 = false;
          bVar7 = false;
          if (bVar6 && !bVar4) {
            bVar5 = false;
            bVar7 = true;
            if (!NAN(fVar24) && !NAN(fVar38)) {
              bVar5 = fVar24 == fVar38;
              bVar7 = fVar38 <= fVar24;
            }
          }
          fVar38 = (fVar39 - fVar41) * (fVar39 - fVar41) + (fVar40 - fVar43) * (fVar40 - fVar43) +
                   (fVar30 - fVar42) * (fVar30 - fVar42);
          bVar4 = false;
          bVar6 = false;
          if (bVar7 && !bVar5) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar24) && !NAN(fVar38)) {
              bVar4 = fVar24 == fVar38;
              bVar6 = fVar38 <= fVar24;
            }
          }
          if (!(bVar6 && !bVar4)) {
            fVar38 = *param_5;
            fVar27 = param_5[1];
            fVar39 = param_5[2];
            fVar24 = fVar36 * fVar38 + fVar34 * fVar27 + fVar29 * fVar39;
            fVar25 = fVar32 * fVar38 + fVar28 * fVar27 + fVar37 * fVar39;
            fVar27 = fVar41 * fVar38 + fVar43 * fVar27 + fVar42 * fVar39;
            fVar38 = fVar24;
            if (fVar25 <= fVar24) {
              fVar38 = fVar25;
            }
            if (fVar27 <= fVar38) {
              fVar38 = fVar27;
            }
            if (fVar38 <= fVar23 + fVar19 + local_2cc) {
              if (((fVar21 <= fVar27) || (fVar21 <= fVar24)) || (fVar21 <= fVar25)) {
                    /* try { // try from 0024e784 to 0024e787 has its CatchHandler @ 0024f1cc */
                fVar38 = sqrtf(*pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1] +
                               pfVar18[2] * pfVar18[2]);
                if (fVar38 != 0.0) {
                  fVar38 = 1.0 / fVar38;
                  *pfVar18 = fVar38 * *pfVar18;
                  pfVar18[1] = fVar38 * pfVar18[1];
                  pfVar18[2] = fVar38 * pfVar18[2];
                    /* try { // try from 0024e7b4 to 0024e7d7 has its CatchHandler @ 0024f1bc */
                  uVar11 = FUN_002495a0(fVar20,pfVar17,pfVar18,&local_b0,param_5,&local_270,
                                        &uStack_280,0);
                  if (((uVar11 & 1) != 0) && (local_270 <= param_1)) {
                    fVar38 = local_270;
                    if (local_270 <= local_2cc) {
                      fVar38 = local_2cc;
                    }
                    if (fVar38 <= 1.0) {
                      fVar38 = 1.0;
                    }
                    if ((local_2cc - fVar38 * DAT_01d4c6ac <= local_270) &&
                       ((local_35c <= fVar26 || (local_2cc + fVar38 * DAT_01d4c6ac <= local_270))))
                    {
                      if ((local_270 != 0.0) && (local_35c != fVar26 || local_2cc <= local_270))
                      goto LAB_0024e8a8;
                    }
                    *(float *)(param_7 + 0x10) = fVar22;
                    local_230 = *pfVar17;
                    local_22c = pfVar17[1];
                    local_228 = pfVar17[2];
                    local_224 = pfVar17[3];
                    local_220 = pfVar17[4];
                    local_21c = pfVar17[5];
                    local_218 = pfVar17[6];
                    local_214 = pfVar17[7];
                    local_210 = pfVar17[8];
                    local_368 = local_260;
                    fStack_364 = local_25c;
                    local_360 = local_258;
                    local_2cc = local_270;
                    if ((uVar3 >> 6 & 1) != 0) goto LAB_0024e8d8;
                    local_35c = fVar26;
                  }
                }
              }
            }
            else {
            }
          }
        }
        else {
          fVar38 = *param_5;
          fVar24 = param_5[1];
          fVar25 = param_5[2];
          if (*pfVar18 * fVar38 + pfVar18[1] * fVar24 + pfVar18[2] * fVar25 <= 0.0)
          goto LAB_0024e584;
        }
LAB_0024e8a8:
        uVar15 = uVar15 + 1;
        pfVar17 = pfVar17 + 9;
        pfVar18 = pfVar18 + 3;
      } while (uVar15 < 7);
      goto LAB_0024e8bc;
    }
    fVar19 = *param_5;
    fVar31 = param_5[2];
    param_8[1] = -param_5[1];
    *param_8 = -fVar19;
    param_8[2] = -fVar31;
    *(float *)(param_7 + 0x10) = fVar22;
    *(undefined2 *)(param_7 + 0x14) = 0x406;
    fVar19 = *param_5;
    fVar31 = param_5[1];
    fVar33 = param_5[2];
LAB_0024f15c:
    *(undefined4 *)(param_7 + 0x30) = 0;
    *(float *)(param_7 + 0x28) = -fVar31;
    *(float *)(param_7 + 0x24) = -fVar19;
    *(float *)(param_7 + 0x2c) = -fVar33;
    return 1;
  }
  local_1b0 = local_248 - fVar38;
  local_1ac = local_244 - fVar26;
  local_1a8 = local_240 - fVar22;
  local_1a4 = local_1b0 * local_1b0 + local_1ac * local_1ac + local_1a8 * local_1a8;
  if (local_1a4 == 0.0) {
    local_1a0 = 0.0;
  }
  else {
    local_1a0 = 1.0 / local_1a4;
  }
  fVar31 = *param_5;
  fVar33 = param_5[1];
  fVar35 = param_5[2];
  local_244 = fStack_ac + fVar19 * fVar33;
  local_248 = local_b0 + fVar19 * fVar31;
  local_240 = local_a8 + fVar19 * fVar35;
  if (param_6 == (uint *)0x0) {
    local_30c = 0;
  }
  else {
    local_30c = *param_6;
  }
  fVar26 = fVar31 * local_248 + fVar33 * local_244 + fVar35 * local_240;
  local_2e8 = 0xffffffff;
  local_2e4 = 2.0;
  uVar14 = 0;
  local_354 = 0.0;
  fVar21 = 0.0;
  fVar19 = 0.0;
  fVar22 = param_1;
  do {
    uVar2 = 0;
    if (local_30c != uVar14) {
      uVar2 = uVar14;
    }
    uVar16 = local_30c;
    if (uVar14 != 0) {
      uVar16 = uVar2;
    }
    pfVar17 = (float *)(param_3 + (ulong)uVar16 * 0x24);
    fVar25 = param_4[6];
    fVar27 = *pfVar17;
    fVar24 = pfVar17[3];
    fVar40 = pfVar17[1];
    fVar37 = pfVar17[4];
    fVar43 = pfVar17[2];
    fVar34 = pfVar17[5];
    fVar32 = pfVar17[6];
    fVar39 = pfVar17[7];
    fVar42 = pfVar17[8];
    fVar28 = (fVar27 + fVar24 + fVar32) * fVar20;
    fVar29 = (fVar40 + fVar37 + fVar39) * fVar20;
    fVar41 = (fVar43 + fVar34 + fVar42) * fVar20;
    fVar38 = (fVar28 - local_248) * fVar31 + (fVar29 - local_244) * fVar33 +
             (fVar41 - local_240) * fVar35;
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
    if (fVar22 <= fVar38) {
      fVar38 = fVar22;
    }
    fVar31 = (fVar28 - local_248) - fVar31 * fVar38;
    fVar33 = (fVar29 - local_244) - fVar33 * fVar38;
    fVar35 = (fVar41 - local_240) - fVar35 * fVar38;
    fVar31 = sqrtf(fVar35 * fVar35 + fVar31 * fVar31 + fVar33 * fVar33);
    fVar31 = (fVar31 - fVar25) + fVar23;
    fVar33 = fVar31 * fVar31;
    fVar35 = (fVar28 - fVar27) * (fVar28 - fVar27) + (fVar29 - fVar40) * (fVar29 - fVar40) +
             (fVar41 - fVar43) * (fVar41 - fVar43);
    bVar4 = false;
    bVar6 = false;
    if (0.0 <= fVar31) {
      bVar4 = false;
      bVar6 = true;
      if (!NAN(fVar33) && !NAN(fVar35)) {
        bVar4 = fVar33 == fVar35;
        bVar6 = fVar35 <= fVar33;
      }
    }
    fVar31 = (fVar28 - fVar24) * (fVar28 - fVar24) + (fVar29 - fVar37) * (fVar29 - fVar37) +
             (fVar41 - fVar34) * (fVar41 - fVar34);
    bVar5 = false;
    bVar7 = false;
    if (bVar6 && !bVar4) {
      bVar5 = false;
      bVar7 = true;
      if (!NAN(fVar33) && !NAN(fVar31)) {
        bVar5 = fVar33 == fVar31;
        bVar7 = fVar31 <= fVar33;
      }
    }
    fVar31 = (fVar28 - fVar32) * (fVar28 - fVar32) + (fVar29 - fVar39) * (fVar29 - fVar39) +
             (fVar41 - fVar42) * (fVar41 - fVar42);
    bVar4 = false;
    bVar6 = false;
    if (bVar7 && !bVar5) {
      bVar4 = false;
      bVar6 = true;
      if (!NAN(fVar33) && !NAN(fVar31)) {
        bVar4 = fVar33 == fVar31;
        bVar6 = fVar31 <= fVar33;
      }
    }
    if (!bVar6 || bVar4) {
      fVar33 = *param_5;
      fVar35 = param_5[1];
      fVar38 = param_5[2];
      fVar27 = fVar27 * fVar33 + fVar40 * fVar35 + fVar43 * fVar38;
      fVar24 = fVar24 * fVar33 + fVar37 * fVar35 + fVar34 * fVar38;
      fVar37 = fVar32 * fVar33 + fVar39 * fVar35 + fVar42 * fVar38;
      fVar31 = fVar27;
      if (fVar24 <= fVar27) {
        fVar31 = fVar24;
      }
      if (fVar37 <= fVar31) {
        fVar31 = fVar37;
      }
      fVar25 = fVar25 + DAT_01d4bd94;
      if (fVar31 <= fVar26 + fVar22 + fVar25) {
        fVar25 = fVar26 - fVar25;
        if ((fVar37 < fVar25) && (fVar27 < fVar25)) {
          if (fVar24 < fVar25) goto joined_r0x0024ef48;
        }
        fVar31 = pfVar17[3] - *pfVar17;
        fVar27 = pfVar17[1];
        fVar41 = pfVar17[2];
        fVar24 = pfVar17[6] - *pfVar17;
        fVar25 = pfVar17[4] - fVar27;
        fVar37 = pfVar17[5] - fVar41;
        fVar27 = pfVar17[7] - fVar27;
        fVar41 = pfVar17[8] - fVar41;
        local_208 = fVar25 * fVar41 - fVar37 * fVar27;
        local_204 = fVar37 * fVar24 - fVar31 * fVar41;
        local_200 = fVar31 * fVar27 - fVar25 * fVar24;
        if ((bVar1 == 0) || (local_208 * fVar33 + local_204 * fVar35 + local_200 * fVar38 <= 0.0)) {
          if (((uVar3 >> 4 & 1) == 0) &&
             (lVar12 = param_3 + (ulong)uVar16 * 0x24,
             uVar15 = FUN_00242fb0(&local_208,pfVar17,lVar12 + 0xc,lVar12 + 0x18,param_4,&local_1b0)
             , (uVar15 & 1) != 0)) {
            fVar19 = *param_5;
            fVar31 = param_5[2];
            param_8[1] = -param_5[1];
            *param_8 = -fVar19;
            param_8[2] = -fVar31;
            *(uint *)(param_7 + 0x10) = uVar16;
            *(undefined2 *)(param_7 + 0x14) = 0x406;
            fVar19 = *param_5;
            fVar31 = param_5[1];
            fVar33 = param_5[2];
            goto LAB_0024f15c;
          }
          fVar31 = sqrtf(local_208 * local_208 + local_204 * local_204 + local_200 * local_200);
          if (fVar31 != 0.0) {
            fVar31 = 1.0 / fVar31;
            local_208 = fVar31 * local_208;
            local_204 = fVar31 * local_204;
            local_200 = fVar31 * local_200;
            uVar15 = FUN_002495a0(param_4[6],pfVar17,&local_208,&local_248,param_5,&local_230,
                                  &local_260,0);
            if ((uVar15 & 1) != 0) {
              fVar31 = fabsf(local_208 * *param_5 + local_204 * param_5[1] + local_200 * param_5[2])
              ;
              if (local_230 <= param_1) {
                fVar31 = -fVar31;
                fVar33 = local_230;
                if (local_230 <= fVar22) {
                  fVar33 = fVar22;
                }
                if (fVar33 <= 1.0) {
                  fVar33 = 1.0;
                }
                if ((fVar22 - fVar33 * DAT_01d4c6ac <= local_230) &&
                   ((local_2e4 <= fVar31 || (fVar22 + fVar33 * DAT_01d4c6ac <= local_230)))) {
                  if ((local_230 != 0.0) && (local_2e4 != fVar31 || fVar22 <= local_230))
                  goto joined_r0x0024ef48;
                }
                local_354 = local_200;
                fVar22 = local_230;
                fVar19 = local_208;
                fVar21 = local_204;
                local_2e8 = uVar16;
                local_2e4 = fVar31;
                if ((uVar3 >> 6 & 1) != 0) {
LAB_0024efe0:
                  if (uVar16 == 0xffffffff) {
                    return 0;
                  }
                  FUN_0024a770(fVar22,&local_208,&local_230,&local_248,param_5,
                               param_3 + (ulong)uVar16 * 0x24);
                  if ((!bVar8 && (param_10 & 1) == 0) &&
                     (0.0 < *param_5 * fVar19 + param_5[1] * fVar21 + param_5[2] * local_354)) {
                    local_230 = -local_230;
                    local_22c = -local_22c;
                    local_228 = -local_228;
                  }
                  *(float *)(param_7 + 0x18) = local_208;
                  *(float *)(param_7 + 0x1c) = local_204;
                  *(float *)(param_7 + 0x20) = local_200;
                  *(float *)(param_7 + 0x24) = local_230;
                  *(float *)(param_7 + 0x28) = local_22c;
                  *(uint *)(param_7 + 0x10) = uVar16;
                  *(float *)(param_7 + 0x30) = fVar22;
                  *(float *)(param_7 + 0x2c) = local_228;
                  *(undefined2 *)(param_7 + 0x14) = 7;
                  *param_8 = fVar19;
                  param_8[1] = fVar21;
                  param_8[2] = local_354;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
joined_r0x0024ef48:
    uVar16 = local_2e8;
    if (uVar9 <= uVar14 + 1) goto LAB_0024efe0;
    uVar14 = uVar14 + 1;
    fVar31 = *param_5;
    fVar33 = param_5[1];
    fVar35 = param_5[2];
    local_2e8 = uVar16;
  } while( true );
}


