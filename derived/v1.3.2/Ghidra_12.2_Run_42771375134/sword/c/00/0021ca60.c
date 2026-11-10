/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021ca60; name: FUN_0021ca60
 */


undefined8
FUN_0021ca60(long param_1,long param_2,float *param_3,undefined8 *param_4,float *param_5,
            undefined8 param_6,float *param_7)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  undefined8 uVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e4;
  float local_1d8 [4];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  undefined8 local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined4 auStack_160 [24];
  float local_100 [4];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0 [4];
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  fVar19 = param_3[3];
  fVar8 = *param_3;
  fVar17 = fVar8 + fVar8;
  fVar24 = fVar19 + fVar19;
  local_164 = *(float *)(param_1 + 8);
  local_16c = local_164 * (fVar8 * fVar17 + fVar19 * fVar24 + -1.0);
  local_168 = local_164 * (param_3[2] * fVar24 + fVar17 * param_3[1]);
  local_164 = local_164 * (fVar17 * param_3[2] - fVar24 * param_3[1]);
  local_178 = param_3[4] + local_16c;
  local_174 = param_3[5] + local_168;
  local_170 = local_164 + param_3[6];
  local_16c = param_3[4] - local_16c;
  local_168 = param_3[5] - local_168;
  local_164 = param_3[6] - local_164;
  fVar17 = (float)((ulong)*param_4 >> 0x20);
  fVar8 = (float)*param_4;
  fVar20 = fVar8 + fVar8;
  fVar22 = fVar17 + fVar17;
  fVar24 = (float)param_4[1];
  fVar23 = fVar24 + fVar24;
  fVar27 = (float)((ulong)param_4[1] >> 0x20);
  fVar19 = fVar17 * fVar22;
  fVar16 = fVar24 * fVar23;
  uVar21 = NEON_fmov(0x3f800000,4);
  fVar18 = (float)((ulong)uVar21 >> 0x20);
  local_198 = (float)uVar21 - fVar8 * fVar20;
  local_1b0 = fVar24 * fVar20 - fVar27 * fVar22;
  local_1b8 = NEON_ext(CONCAT44((fVar18 - fVar19) - fVar16,((float)uVar21 - fVar19) - fVar16),
                       CONCAT44(fVar17 * fVar20 + fVar27 * fVar23,fVar17 * fVar20 + fVar27 * fVar23)
                       ,4,1);
  fStack_1a4 = fVar24 * fVar22 + fVar27 * fVar20;
  uVar21 = NEON_ext(CONCAT44(fVar17 * fVar20 - fVar27 * fVar23,fVar17 * fVar20 - fVar27 * fVar23),
                    CONCAT44((fVar18 - fVar8 * fVar20) - fVar16,local_198 - fVar16),4,1);
  local_1a0 = NEON_ext(CONCAT44(fVar24 * fVar20 + fVar27 * fVar22,fVar24 * fVar20 + fVar27 * fVar22)
                       ,CONCAT44(fVar24 * fVar22 - fVar27 * fVar20,fVar24 * fVar22 - fVar27 * fVar20
                                ),4,1);
  local_1ac = (float)uVar21;
  local_198 = local_198 - fVar19;
  fVar17 = *(float *)(param_1 + 4);
  fVar19 = *param_5;
  local_1a8 = (float)((ulong)uVar21 >> 0x20);
  local_194 = *(float *)(param_4 + 2);
  local_190 = *(float *)((long)param_4 + 0x14);
  local_18c = *(float *)(param_4 + 3);
  local_188 = *(float *)(param_2 + 4);
  local_184 = *(float *)(param_2 + 8);
  local_180 = *(float *)(param_2 + 0xc);
                    /* try { // try from 0021cc10 to 0021cc33 has its CatchHandler @ 0021e05c */
  fVar8 = (float)FUN_00233a00(&local_178,&local_16c,&local_194,&local_188,&local_1b8,&local_1bc,
                              &local_1c8);
  fVar17 = fVar17 + fVar19;
  if (fVar17 * fVar17 <= fVar8) {
    return 0;
  }
  if (fVar8 != 0.0) {
    fVar19 = local_1c8 * local_1b8._4_4_;
    fVar17 = local_1c8 * local_1b0;
    fVar24 = local_1c4 * fStack_1a4;
    local_1c8 = local_1c8 * (float)local_1b8 + local_1c4 * local_1ac + local_1c0 * (float)local_1a0
                + local_194;
    local_1c4 = fVar19 + local_1c4 * local_1a8 + local_1c0 * local_1a0._4_4_ + local_190;
    local_1c0 = fVar17 + fVar24 + local_1c0 * local_198 + local_18c;
    fVar24 = (local_178 + local_1bc * (local_16c - local_178)) - local_1c8;
    fVar16 = (local_174 + local_1bc * (local_168 - local_174)) - local_1c4;
    fVar19 = (local_170 + local_1bc * (local_164 - local_170)) - local_1c0;
    local_1d8[0] = fVar24;
    local_1d8[1] = fVar16;
    local_1d8[2] = fVar19;
                    /* try { // try from 0021cd28 to 0021cef7 has its CatchHandler @ 0021e058 */
    fVar17 = sqrtf(fVar24 * fVar24 + fVar16 * fVar16 + fVar19 * fVar19);
    if (0.0 < fVar17) {
      fVar17 = 1.0 / fVar17;
      fVar24 = fVar24 * fVar17;
      fVar16 = fVar16 * fVar17;
      fVar19 = fVar19 * fVar17;
      local_1d8[0] = fVar24;
      local_1d8[1] = fVar16;
      local_1d8[2] = fVar19;
      FUN_0021e070(*(undefined4 *)(param_1 + 4),*param_5,param_7,&local_178,&local_1b8,local_1d8);
      if (param_7[0x400] == 2.8026e-45) {
        return 1;
      }
      fVar9 = *(float *)(param_1 + 4);
      fVar10 = *param_5;
      lVar2 = FUN_00295e10();
      FUN_00295e20(auStack_160,&local_194,&local_188,&local_1b8,&local_1ac,&local_1a0);
      fVar23 = local_164;
      fVar18 = local_168;
      fVar22 = local_16c;
      fVar20 = local_170;
      fVar27 = local_174;
      fVar17 = local_178;
      local_c0 = local_16c;
      fStack_bc = local_168;
      fVar25 = local_16c - local_178;
      fVar28 = local_164 - local_170;
      local_b8 = local_164;
      fVar26 = local_168 - local_174;
      local_b0 = local_178;
      fStack_ac = local_174;
      local_a8 = local_170;
      fVar11 = sqrtf(fVar25 * fVar25 + fVar26 * fVar26 + fVar28 * fVar28);
      if (0.0 < fVar11) {
        fVar11 = DAT_01d4c4d4 / fVar11;
        fVar17 = fVar17 - fVar25 * fVar11;
        local_c0 = fVar25 * fVar11 + fVar22;
        fVar27 = fVar27 - fVar26 * fVar11;
        fVar20 = fVar20 - fVar28 * fVar11;
        local_b8 = fVar28 * fVar11 + fVar23;
        fStack_bc = fVar26 * fVar11 + fVar18;
        fVar25 = local_c0 - fVar17;
        fVar26 = fStack_bc - fVar27;
        fVar28 = local_b8 - fVar20;
        local_b0 = fVar17;
        fStack_ac = fVar27;
        local_a8 = fVar20;
      }
      fVar22 = fVar19 * fVar26 - fVar16 * fVar28;
      fVar11 = -(fVar24 * fVar28 - fVar19 * fVar25);
      fVar18 = fVar16 * fVar25 - fVar24 * fVar26;
      local_e0 = -fVar22;
      fVar23 = -fVar18;
      fStack_d4 = -((fVar27 * fVar11 - fVar17 * fVar22) - fVar20 * fVar18);
      fStack_dc = fVar11;
      local_d8 = fVar23;
      local_d0[0] = fVar25;
      local_d0[1] = fVar26;
      local_d0[2] = fVar28;
      fVar17 = fabsf(local_e0);
      fVar27 = fabsf(fVar11);
      fVar20 = fabsf(fVar23);
      if ((fVar27 <= fVar17) || (fVar27 <= fVar20)) {
        if (fVar20 <= fVar17) {
          lVar5 = 1;
          lVar6 = 2;
        }
        else {
          lVar5 = 0;
          lVar6 = 1;
        }
      }
      else {
        lVar6 = 0;
        lVar5 = 2;
      }
      fVar17 = local_d0[lVar6];
      fVar27 = local_1d8[lVar5];
      fVar20 = local_d0[lVar5];
      fVar22 = local_1d8[lVar6];
      lVar7 = 0;
      do {
        uVar4 = (ulong)*(byte *)(lVar2 + lVar7);
        uVar3 = (ulong)((byte *)(lVar2 + lVar7))[1];
        local_100[0] = -fVar24;
        local_100[1] = -fVar16;
        local_100[2] = -fVar19;
                    /* try { // try from 0021d5c0 to 0021d5eb has its CatchHandler @ 0021e068 */
        uVar3 = FUN_0021e350(1.0 / (fVar17 * fVar27 - fVar20 * fVar22),auStack_160[uVar4 * 3],
                             auStack_160[uVar4 * 3 + 1],auStack_160[uVar4 * 3 + 2],
                             auStack_160[uVar3 * 3],auStack_160[uVar3 * 3 + 1],
                             auStack_160[uVar3 * 3 + 2],&local_b0,&local_c0,local_d0,&local_e0,lVar5
                             ,lVar6,local_100,&local_e4,&local_f0);
        if (((uVar3 & 1) != 0) && (local_e4 < fVar9 + fVar10)) {
          fVar18 = param_7[0x400];
          if ((uint)fVar18 < 0x40) {
            pfVar1 = param_7 + (ulong)(uint)fVar18 * 0x10;
            param_7[0x400] = (float)((int)fVar18 + 1);
            *pfVar1 = fVar24;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar19;
            pfVar1[4] = local_f0 - fVar24 * local_e4;
            pfVar1[5] = local_ec - fVar16 * local_e4;
            pfVar1[6] = local_e8 - fVar19 * local_e4;
            pfVar1[3] = local_e4 - fVar9;
            pfVar1[0xd] = -NAN;
          }
        }
        lVar7 = lVar7 + 2;
      } while ((int)lVar7 != 0x18);
      if (param_7[0x400] != 0.0) {
        return 1;
      }
                    /* try { // try from 0021d674 to 0021d67b has its CatchHandler @ 0021e058 */
      fVar17 = sqrtf(fVar8);
      fVar8 = param_7[0x400];
      if ((uint)fVar8 < 0x40) {
        fVar27 = *(float *)(param_1 + 4);
        pfVar1 = param_7 + (ulong)(uint)fVar8 * 0x10;
        param_7[0x400] = (float)((int)fVar8 + 1);
        *pfVar1 = fVar24;
        pfVar1[1] = fVar16;
        pfVar1[2] = fVar19;
        pfVar1[4] = local_1c8;
        pfVar1[5] = local_1c4;
        pfVar1[6] = local_1c0;
        pfVar1[3] = fVar17 - fVar27;
        pfVar1[0xd] = -NAN;
        return 1;
      }
      return 1;
    }
  }
  fVar22 = local_18c;
  fVar20 = local_190;
  fVar27 = local_194;
  fVar16 = local_1b0;
  fVar18 = *(float *)(param_1 + 4);
  fVar19 = (float)local_1b8;
  fVar24 = local_1b8._4_4_;
  fVar23 = local_178 * (float)local_1b8 + local_174 * local_1b8._4_4_ + local_170 * local_1b0;
  fVar17 = (float)local_1b8 * local_16c + local_1b8._4_4_ * local_168 + local_1b0 * local_164;
  fVar8 = fVar23;
  if (fVar23 <= fVar17) {
    fVar8 = fVar17;
    fVar17 = fVar23;
  }
                    /* try { // try from 0021cfd4 to 0021d50f has its CatchHandler @ 0021e060 */
  fVar12 = fabsf((float)local_1b8 * (float)local_1b8 + local_1b8._4_4_ * local_1b8._4_4_ +
                 local_1b0 * local_1b0);
  fVar28 = local_188;
  fVar13 = fabsf(local_1ac * (float)local_1b8 + local_1a8 * local_1b8._4_4_ + fStack_1a4 * local_1b0
                );
  fVar15 = local_184;
  fVar14 = fabsf((float)local_1a0 * (float)local_1b8 + local_1a0._4_4_ * local_1b8._4_4_ +
                 local_198 * local_1b0);
  fVar26 = local_18c;
  fVar25 = local_190;
  fVar11 = local_194;
  fVar10 = fStack_1a4;
  fVar9 = local_1a8;
  fVar23 = local_1ac;
  fVar24 = fVar19 * fVar27 + fVar24 * fVar20 + fVar16 * fVar22;
  fVar16 = fVar12 * fVar28 + fVar13 * fVar15 + fVar14 * local_180;
  fVar19 = fVar24 - fVar16;
  if (fVar18 + fVar8 < fVar19) {
    return 0;
  }
  fVar24 = fVar24 + fVar16;
  if (fVar24 < fVar17 - fVar18) {
    return 0;
  }
  fVar19 = (fVar18 + fVar8) - fVar19;
  fVar24 = fVar24 - (fVar17 - fVar18);
  if (fVar24 <= fVar19) {
    fVar19 = fVar24;
  }
  local_1e4 = DAT_01d4c18c;
  if (DAT_01d4c18c <= fVar19) {
    local_1f4 = 0.0;
    local_1f0 = 0.0;
    local_1f8 = 0.0;
    fVar8 = local_1b8._4_4_;
  }
  else {
    local_1f4 = *(float *)((ulong)&local_1b8 | 4);
    local_1f0 = (float)local_1b8;
    local_1f8 = local_1b0;
    fVar8 = local_1f4;
    local_1e4 = fVar19;
  }
  fVar24 = local_178 * local_1ac + local_174 * local_1a8 + local_170 * fStack_1a4;
  fVar19 = local_1ac * local_16c + local_1a8 * local_168 + fStack_1a4 * local_164;
  fVar17 = fVar24;
  if (fVar24 <= fVar19) {
    fVar17 = fVar19;
    fVar19 = fVar24;
  }
  fVar28 = fabsf(local_1ac * (float)local_1b8 + local_1a8 * fVar8 + fStack_1a4 * local_1b0);
  fVar20 = local_188;
  fVar15 = fabsf(local_1ac * local_1ac + local_1a8 * local_1a8 + fStack_1a4 * fStack_1a4);
  fVar22 = local_184;
  fVar12 = fabsf((float)local_1a0 * local_1ac + local_1a0._4_4_ * local_1a8 + local_198 * fStack_1a4
                );
  fVar27 = local_18c;
  fVar16 = local_190;
  fVar24 = local_194;
  fVar8 = local_198;
  fVar23 = fVar23 * fVar11 + fVar9 * fVar25 + fVar10 * fVar26;
  fVar22 = fVar28 * fVar20 + fVar15 * fVar22 + fVar12 * local_180;
  fVar20 = fVar23 - fVar22;
  if (fVar18 + fVar17 < fVar20) {
    return 0;
  }
  fVar23 = fVar23 + fVar22;
  if (fVar23 < fVar19 - fVar18) {
    return 0;
  }
  fVar20 = (fVar18 + fVar17) - fVar20;
  fVar23 = fVar23 - (fVar19 - fVar18);
  if (fVar23 <= fVar20) {
    fVar20 = fVar23;
  }
  if (fVar20 < local_1e4) {
    local_1f4 = local_1a8;
    local_1f0 = local_1ac;
    local_1f8 = fStack_1a4;
    local_1e4 = fVar20;
  }
  fVar20 = (float)local_1a0;
  fVar22 = local_1a0._4_4_;
  fVar23 = local_178 * (float)local_1a0 + local_174 * local_1a0._4_4_ + local_170 * local_198;
  fVar19 = (float)local_1a0 * local_16c + local_1a0._4_4_ * local_168 + local_198 * local_164;
  fVar17 = fVar23;
  if (fVar23 <= fVar19) {
    fVar17 = fVar19;
    fVar19 = fVar23;
  }
  fVar10 = fabsf((float)local_1a0 * (float)local_1b8 + local_1a0._4_4_ * local_1b8._4_4_ +
                 local_198 * local_1b0);
  fVar23 = local_188;
  fVar11 = fabsf(local_1ac * (float)local_1a0 + local_1a8 * local_1a0._4_4_ + fStack_1a4 * local_198
                );
  fVar9 = local_184;
  fVar25 = fabsf((float)local_1a0 * (float)local_1a0 + local_1a0._4_4_ * local_1a0._4_4_ +
                 local_198 * local_198);
  fVar24 = fVar20 * fVar24 + fVar22 * fVar16 + fVar8 * fVar27;
  fVar16 = fVar10 * fVar23 + fVar11 * fVar9 + fVar25 * local_180;
  fVar8 = fVar24 - fVar16;
  if (fVar18 + fVar17 < fVar8) {
    return 0;
  }
  fVar24 = fVar24 + fVar16;
  if (fVar24 < fVar19 - fVar18) {
    return 0;
  }
  fVar8 = (fVar18 + fVar17) - fVar8;
  fVar24 = fVar24 - (fVar19 - fVar18);
  if (fVar24 <= fVar8) {
    fVar8 = fVar24;
  }
  if (fVar8 < local_1e4) {
    local_1f4 = local_1a0._4_4_;
    local_1f0 = (float)local_1a0;
    local_1f8 = local_198;
    local_1e4 = fVar8;
  }
  local_200 = local_16c - local_178;
  fVar17 = local_168 - local_174;
  fVar19 = local_164 - local_170;
  fVar8 = local_200 * local_200 + fVar17 * fVar17 + fVar19 * fVar19;
  if (fVar8 <= 0.0) {
    fVar17 = 0.0;
    local_200 = 0.0;
    fVar19 = 0.0;
  }
  else {
    fVar8 = sqrtf(fVar8);
    fVar8 = 1.0 / fVar8;
    local_200 = local_200 * fVar8;
    fVar17 = fVar17 * fVar8;
    fVar19 = fVar19 * fVar8;
  }
  fVar27 = local_1b0;
  fVar16 = local_1b8._4_4_;
  fVar22 = fVar17 * local_1b0 - fVar19 * local_1b8._4_4_;
  fVar24 = (float)local_1b8;
  fVar20 = fabsf(fVar22);
  fVar8 = DAT_01d4c1cc;
  fVar27 = fVar19 * fVar24 - local_200 * fVar27;
  fVar24 = local_200 * fVar16 - fVar17 * fVar24;
  if ((DAT_01d4c1cc < fVar20) || (fVar16 = fabsf(fVar27), fVar8 < fVar16)) {
LAB_0021d4f0:
    fVar16 = fVar24 * fVar24 + fVar22 * fVar22 + fVar27 * fVar27;
    if (fVar16 <= 0.0) {
      fVar22 = 0.0;
      fVar27 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar16 = sqrtf(fVar16);
      fVar16 = 1.0 / fVar16;
      fVar22 = fVar22 * fVar16;
      fVar27 = fVar27 * fVar16;
      fVar24 = fVar24 * fVar16;
    }
    fVar10 = local_18c;
    fVar9 = local_190;
    fVar23 = local_194;
    fVar11 = fVar22 * local_178 + fVar27 * local_174 + fVar24 * local_170;
    fVar20 = fVar22 * local_16c + fVar27 * local_168 + fVar24 * local_164;
    fVar16 = fVar11;
    if (fVar11 <= fVar20) {
      fVar16 = fVar20;
      fVar20 = fVar11;
    }
                    /* try { // try from 0021d754 to 0021dea3 has its CatchHandler @ 0021e060 */
    fVar26 = fabsf(fVar22 * (float)local_1b8 + fVar27 * local_1b8._4_4_ + fVar24 * local_1b0);
    fVar11 = local_188;
    fVar28 = fabsf(fVar22 * local_1ac + fVar27 * local_1a8 + fVar24 * fStack_1a4);
    fVar25 = local_184;
    fVar15 = fabsf(fVar22 * (float)local_1a0 + fVar27 * local_1a0._4_4_ + fVar24 * local_198);
    fVar9 = fVar22 * fVar23 + fVar27 * fVar9 + fVar24 * fVar10;
    fVar10 = fVar26 * fVar11 + fVar28 * fVar25 + fVar15 * local_180;
    fVar23 = fVar9 - fVar10;
    if (fVar18 + fVar16 < fVar23) {
      return 0;
    }
    fVar9 = fVar9 + fVar10;
    if (fVar9 < fVar20 - fVar18) {
      return 0;
    }
    fVar23 = (fVar18 + fVar16) - fVar23;
    fVar9 = fVar9 - (fVar20 - fVar18);
    if (fVar9 <= fVar23) {
      fVar23 = fVar9;
    }
    if (fVar23 < local_1e4) {
      local_1f8 = fVar24;
      local_1f4 = fVar27;
      local_1f0 = fVar22;
      local_1e4 = fVar23;
    }
  }
  else {
    fVar16 = fabsf(fVar24);
    if (fVar8 < fVar16) goto LAB_0021d4f0;
  }
  fVar27 = fStack_1a4;
  fVar16 = local_1a8;
  fVar24 = local_1ac;
  fVar22 = fVar17 * fStack_1a4 - fVar19 * local_1a8;
  fVar20 = fabsf(fVar22);
  fVar27 = fVar19 * fVar24 - local_200 * fVar27;
  fVar24 = local_200 * fVar16 - fVar17 * fVar24;
  if ((fVar20 <= fVar8) && (fVar16 = fabsf(fVar27), fVar16 <= fVar8)) {
    fVar16 = fabsf(fVar24);
    if (fVar16 <= fVar8) goto LAB_0021da5c;
  }
  fVar16 = fVar24 * fVar24 + fVar22 * fVar22 + fVar27 * fVar27;
  if (fVar16 <= 0.0) {
    fVar22 = 0.0;
    fVar27 = 0.0;
    fVar24 = 0.0;
  }
  else {
    fVar16 = sqrtf(fVar16);
    fVar16 = 1.0 / fVar16;
    fVar22 = fVar22 * fVar16;
    fVar27 = fVar27 * fVar16;
    fVar24 = fVar24 * fVar16;
  }
  fVar10 = local_18c;
  fVar9 = local_190;
  fVar23 = local_194;
  fVar11 = fVar22 * local_178 + fVar27 * local_174 + fVar24 * local_170;
  fVar20 = fVar22 * local_16c + fVar27 * local_168 + fVar24 * local_164;
  fVar16 = fVar11;
  if (fVar11 <= fVar20) {
    fVar16 = fVar20;
    fVar20 = fVar11;
  }
  fVar26 = fabsf(fVar22 * (float)local_1b8 + fVar27 * local_1b8._4_4_ + fVar24 * local_1b0);
  fVar11 = local_188;
  fVar28 = fabsf(fVar22 * local_1ac + fVar27 * local_1a8 + fVar24 * fStack_1a4);
  fVar25 = local_184;
  fVar15 = fabsf(fVar22 * (float)local_1a0 + fVar27 * local_1a0._4_4_ + fVar24 * local_198);
  fVar9 = fVar22 * fVar23 + fVar27 * fVar9 + fVar24 * fVar10;
  fVar10 = fVar26 * fVar11 + fVar28 * fVar25 + fVar15 * local_180;
  fVar23 = fVar9 - fVar10;
  if (fVar18 + fVar16 < fVar23) {
    return 0;
  }
  fVar9 = fVar9 + fVar10;
  if (fVar9 < fVar20 - fVar18) {
    return 0;
  }
  fVar23 = (fVar18 + fVar16) - fVar23;
  fVar9 = fVar9 - (fVar20 - fVar18);
  if (fVar9 <= fVar23) {
    fVar23 = fVar9;
  }
  if (fVar23 < local_1e4) {
    local_1f8 = fVar24;
    local_1f4 = fVar27;
    local_1f0 = fVar22;
    local_1e4 = fVar23;
  }
LAB_0021da5c:
  fVar27 = local_198;
  fVar16 = local_1a0._4_4_;
  fVar24 = (float)local_1a0;
  fVar22 = fVar17 * local_198 - fVar19 * local_1a0._4_4_;
  fVar20 = fabsf(fVar22);
  fVar19 = fVar19 * fVar24 - local_200 * fVar27;
  fVar17 = local_200 * fVar16 - fVar17 * fVar24;
  if (((fVar8 < fVar20) || (fVar24 = fabsf(fVar19), fVar8 < fVar24)) ||
     (fVar24 = fabsf(fVar17), fVar8 < fVar24)) {
    fVar8 = fVar17 * fVar17 + fVar22 * fVar22 + fVar19 * fVar19;
    if (fVar8 <= 0.0) {
      fVar22 = 0.0;
      fVar19 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar8 = sqrtf(fVar8);
      fVar8 = 1.0 / fVar8;
      fVar22 = fVar22 * fVar8;
      fVar19 = fVar19 * fVar8;
      fVar17 = fVar17 * fVar8;
    }
    fVar20 = local_18c;
    fVar27 = local_190;
    fVar16 = local_194;
    fVar23 = fVar22 * local_178 + fVar19 * local_174 + fVar17 * local_170;
    fVar24 = fVar22 * local_16c + fVar19 * local_168 + fVar17 * local_164;
    fVar8 = fVar23;
    if (fVar23 <= fVar24) {
      fVar8 = fVar24;
      fVar24 = fVar23;
    }
    fVar10 = fabsf(fVar22 * (float)local_1b8 + fVar19 * local_1b8._4_4_ + fVar17 * local_1b0);
    fVar23 = local_188;
    fVar11 = fabsf(fVar22 * local_1ac + fVar19 * local_1a8 + fVar17 * fStack_1a4);
    fVar9 = local_184;
    fVar25 = fabsf(fVar22 * (float)local_1a0 + fVar19 * local_1a0._4_4_ + fVar17 * local_198);
    fVar27 = fVar22 * fVar16 + fVar19 * fVar27 + fVar17 * fVar20;
    fVar20 = fVar10 * fVar23 + fVar11 * fVar9 + fVar25 * local_180;
    fVar16 = fVar27 - fVar20;
    if (fVar18 + fVar8 < fVar16) {
      return 0;
    }
    fVar27 = fVar27 + fVar20;
    if (fVar27 < fVar24 - fVar18) {
      return 0;
    }
    fVar16 = (fVar18 + fVar8) - fVar16;
    fVar27 = fVar27 - (fVar24 - fVar18);
    if (fVar27 <= fVar16) {
      fVar16 = fVar27;
    }
    if (fVar16 < local_1e4) {
      local_1e4 = fVar16;
      local_1f0 = fVar22;
      local_1f4 = fVar19;
      local_1f8 = fVar17;
    }
  }
  if (local_1f0 * ((local_178 + local_16c) * 0.5 - local_194) +
      local_1f4 * ((local_174 + local_168) * 0.5 - local_190) +
      local_1f8 * ((local_170 + local_164) * 0.5 - local_18c) < 0.0) {
    local_1f0 = -local_1f0;
    local_1f4 = -local_1f4;
    local_1f8 = -local_1f8;
  }
  local_100[0] = local_1f0;
  local_100[1] = local_1f4;
  local_100[2] = local_1f8;
  FUN_0021e070(*(undefined4 *)(param_1 + 4),*param_5,param_7,&local_178,&local_1b8,local_100);
  if (param_7[0x400] != 2.8026e-45) {
    fVar20 = *(float *)(param_1 + 4);
    lVar2 = FUN_00295e10();
    FUN_00295e20(auStack_160,&local_194,&local_188,&local_1b8,&local_1ac,&local_1a0);
    fVar27 = local_164;
    fVar16 = local_168;
    fVar24 = local_16c;
    fVar19 = local_170;
    fVar17 = local_174;
    fVar8 = local_178;
    local_b0 = local_178;
    fStack_ac = local_174;
    local_a8 = local_170;
    fVar18 = local_16c - local_178;
    fVar9 = local_168 - local_174;
    fVar23 = local_164 - local_170;
    local_c0 = local_16c;
    fStack_bc = local_168;
    local_b8 = local_164;
    fVar22 = sqrtf(fVar18 * fVar18 + fVar9 * fVar9 + fVar23 * fVar23);
    if (0.0 < fVar22) {
      fVar22 = DAT_01d4c4d4 / fVar22;
      fVar8 = fVar8 - fVar18 * fVar22;
      fVar17 = fVar17 - fVar9 * fVar22;
      fVar19 = fVar19 - fVar23 * fVar22;
      local_c0 = fVar18 * fVar22 + fVar24;
      fStack_bc = fVar9 * fVar22 + fVar16;
      local_b8 = fVar23 * fVar22 + fVar27;
      fVar18 = local_c0 - fVar8;
      fVar9 = fStack_bc - fVar17;
      fVar23 = local_b8 - fVar19;
      local_b0 = fVar8;
      fStack_ac = fVar17;
      local_a8 = fVar19;
    }
    local_e0 = fVar9 * local_1f8 - fVar23 * local_1f4;
    fVar16 = fVar23 * local_1f0 - fVar18 * local_1f8;
    fVar24 = fVar18 * local_1f4 - fVar9 * local_1f0;
    fStack_d4 = -(fVar19 * fVar24 + fVar8 * local_e0 + fVar17 * fVar16);
    fStack_dc = fVar16;
    local_d8 = fVar24;
    local_d0[0] = fVar18;
    local_d0[1] = fVar9;
    local_d0[2] = fVar23;
    fVar8 = fabsf(local_e0);
    fVar17 = fabsf(fVar16);
    fVar19 = fabsf(fVar24);
    if ((fVar17 <= fVar8) || (fVar17 <= fVar19)) {
      if (fVar19 <= fVar8) {
        lVar5 = 1;
        lVar6 = 2;
      }
      else {
        lVar5 = 0;
        lVar6 = 1;
      }
    }
    else {
      lVar6 = 0;
      lVar5 = 2;
    }
    fVar8 = local_d0[lVar5];
    fVar17 = local_100[lVar6];
    fVar19 = local_d0[lVar6];
    fVar24 = local_100[lVar5];
    lVar7 = 0;
    do {
      uVar4 = (ulong)*(byte *)(lVar2 + lVar7);
      uVar3 = (ulong)((byte *)(lVar2 + lVar7))[1];
                    /* try { // try from 0021df48 to 0021df77 has its CatchHandler @ 0021e064 */
      uVar3 = FUN_0021e350(1.0 / (fVar8 * fVar17 - fVar19 * fVar24),auStack_160[uVar4 * 3],
                           auStack_160[uVar4 * 3 + 1],auStack_160[uVar4 * 3 + 2],
                           auStack_160[uVar3 * 3],auStack_160[uVar3 * 3 + 1],
                           auStack_160[uVar3 * 3 + 2],&local_b0,&local_c0,local_d0,&local_e0,lVar5,
                           lVar6,local_100,local_1d8,&local_f0);
      if ((uVar3 & 1) != 0) {
        fVar16 = param_7[0x400];
        if ((uint)fVar16 < 0x40) {
          pfVar1 = param_7 + (ulong)(uint)fVar16 * 0x10;
          param_7[0x400] = (float)((int)fVar16 + 1);
          *pfVar1 = local_1f0;
          pfVar1[1] = local_1f4;
          pfVar1[2] = local_1f8;
          pfVar1[3] = -(fVar20 + local_1d8[0]);
          pfVar1[4] = local_f0 - local_1d8[0] * local_1f0;
          pfVar1[0xd] = -NAN;
          pfVar1[5] = local_ec - local_1d8[0] * local_1f4;
          pfVar1[6] = local_e8 - local_1d8[0] * local_1f8;
        }
      }
      lVar7 = lVar7 + 2;
    } while ((int)lVar7 != 0x18);
    if (param_7[0x400] == 0.0) {
      fVar8 = *(float *)(param_1 + 4);
      *param_7 = local_1f0;
      param_7[1] = local_1f4;
      param_7[2] = local_1f8;
      param_7[3] = -(local_1e4 + fVar8);
      param_7[4] = (local_178 + local_16c) * 0.5;
      param_7[0x400] = 1.4013e-45;
      param_7[0xd] = -NAN;
      param_7[5] = (local_174 + local_168) * 0.5;
      param_7[6] = (local_170 + local_164) * 0.5;
      return 1;
    }
  }
  return 1;
}


