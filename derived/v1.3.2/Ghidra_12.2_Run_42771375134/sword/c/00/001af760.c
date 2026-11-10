/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001af760; name: FUN_001af760
 */


void FUN_001af760(float param_1,long param_2,uint param_3,long param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  long **pplVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  uint *puVar15;
  float *pfVar16;
  float *pfVar17;
  ushort uVar18;
  ushort uVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  float *pfVar26;
  float *pfVar27;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_214;
  int local_204;
  long *local_200;
  long *local_1f8;
  float *local_1f0;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  ushort *local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float fStack_198;
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
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  char local_f8;
  int local_f0;
  int local_e8;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b0;
  long lStack_a8;
  
  local_b0 = *(undefined8 *)(param_4 + 8);
  lStack_a8 = param_4;
  fabsf(*(float *)(param_4 + 0x14));
  fabsf(*(float *)(param_4 + 0x18));
  local_bc = 1.0 / *(float *)(param_4 + 0x10);
  local_c0 = 1.0 / *(float *)(param_4 + 0x14);
  local_b8 = 1.0 / *(float *)(param_4 + 0x18);
  if (param_3 != 0) {
    local_1e0 = param_1 * param_1;
    uVar22 = 0;
    do {
      fVar36 = 0.0;
      lVar20 = param_2 + uVar22 * 200;
      pfVar21 = (float *)(lVar20 + 0x78);
      fStack_cc = *pfVar21;
      local_1c0 = (float *)(lVar20 + 0x88);
      fVar28 = *local_1c0;
      pfVar23 = (float *)(lVar20 + 0x7c);
      local_c8 = *pfVar23;
      local_1c8 = (float *)(lVar20 + 0x8c);
      fVar29 = *local_1c8;
      local_d8 = fStack_cc;
      if (fVar28 <= fStack_cc) {
        local_d8 = fVar28;
      }
      if (fStack_cc <= fVar28) {
        fStack_cc = fVar28;
      }
      fStack_d4 = local_c8;
      if (fVar29 <= local_c8) {
        fStack_d4 = fVar29;
      }
      pfVar27 = (float *)(lVar20 + 0x80);
      local_d0 = *pfVar27;
      if (local_c8 <= fVar29) {
        local_c8 = fVar29;
      }
      local_1d0 = (float *)(lVar20 + 0x90);
      fVar28 = *local_1d0;
      local_d8 = local_d8 - param_1;
      fStack_d4 = fStack_d4 - param_1;
      fStack_c4 = local_d0;
      if (local_d0 == fVar28 || fVar28 > local_d0) {
        fStack_c4 = fVar28;
      }
      if (fVar28 <= local_d0) {
        local_d0 = fVar28;
      }
      fStack_cc = fStack_cc + param_1;
      local_c8 = local_c8 + param_1;
      local_d0 = local_d0 - param_1;
      fStack_c4 = fStack_c4 + param_1;
      FUN_001b0700(&local_100,&local_d8,&local_c0);
      FUN_001b0930(&local_118,&local_100);
      if (local_f8 == '\0') {
        local_204 = local_e8 + *(int *)(*(long *)(local_100 + 0x10) + 0x3c) * local_f0;
      }
      else {
        local_204 = 0;
      }
      lVar20 = param_2 + uVar22 * 200;
      pfVar24 = (float *)(lVar20 + 0xa0);
      pfVar24[0] = 0.0;
      pfVar24[1] = 0.0;
      pfVar12 = (float *)(lVar20 + 0xa8);
      *pfVar12 = 0.0;
      pfVar13 = (float *)(lVar20 + 0xb8);
      pfVar13[0] = 0.0;
      pfVar13[1] = 0.0;
      pfVar14 = (float *)(lVar20 + 0xc0);
      pfVar14[0] = 0.0;
      pfVar14[1] = 0.0;
      puVar15 = (uint *)(lVar20 + 0x84);
      local_1f0 = (float *)(lVar20 + 0x2c);
      local_1e4 = *local_1f0;
      local_150 = local_110;
      uVar7 = local_150;
      local_148 = local_108;
      local_158 = local_118;
      local_150._0_4_ = (int)local_110;
      local_150 = uVar7;
      if (((int)local_150 != 0) ||
         (local_150._4_4_ = (int)((ulong)local_110 >> 0x20), bVar11 = local_204 != local_150._4_4_,
         bVar11)) {
        pfVar1 = (float *)(lVar20 + 0xa4);
        pfVar2 = (float *)(lVar20 + 0xbc);
        local_1b8 = (ushort *)(lVar20 + 0x3e);
        local_1f8 = (long *)(lVar20 + 0x98);
        local_1dc = 0.0;
        local_1d8 = 0.0;
        local_1d4 = 0.0;
        pfVar26 = (float *)(lVar20 + 0x5c);
        local_200 = (long *)(lVar20 + 0xb0);
        uVar25 = *puVar15 >> 1 & 1;
        local_24c = 0.0;
        local_248 = 0.0;
        local_244 = 0.0;
        local_254 = 0.0;
        local_250 = 0.0;
        local_214 = 0.0;
        local_258 = 0.0;
        fVar28 = fVar36;
        fVar29 = fVar36;
        do {
          fVar34 = 0.0;
          FUN_001b1400(local_148,&local_140,&local_158);
          fStack_198 = local_134 - local_140;
          local_19c = local_130 - local_13c;
          local_1a8 = local_12c - local_138;
          local_16c = local_128 - local_140;
          local_1b0 = local_124 - local_13c;
          local_1ac = local_120 - local_138;
          local_170 = *pfVar26 * *pfVar26;
          local_18c = *pfVar21;
          local_190 = *pfVar23;
          local_194 = *pfVar27;
          local_160 = *local_1c0;
          local_164 = *local_1c8;
          local_168 = *local_1d0;
          local_1a0 = fStack_198 * fStack_198 + local_19c * local_19c + local_1a8 * local_1a8;
          local_1a4 = fStack_198 * local_16c + local_19c * local_1b0 + local_1a8 * local_1ac;
          local_15c = local_16c * local_16c + local_1b0 * local_1b0 + local_1ac * local_1ac;
          fVar30 = fStack_198 * (local_140 - local_160) + local_19c * (local_13c - local_164) +
                   local_1a8 * (local_138 - local_168);
          fVar31 = local_16c * (local_140 - local_160) + local_1b0 * (local_13c - local_164) +
                   local_1ac * (local_138 - local_168);
          fVar32 = local_1a4 * fVar31 - local_15c * fVar30;
          local_180 = local_1a0 * local_15c - local_1a4 * local_1a4;
          if (fVar32 <= 0.0) {
            if (local_15c <= DAT_01d4c104) {
              local_15c = DAT_01d4c104;
            }
            bVar11 = false;
            fVar33 = -fVar31 / local_15c;
            fVar32 = fVar34;
          }
          else {
            fVar33 = local_1a4 * fVar30 - local_1a0 * fVar31;
            if (fVar33 <= 0.0) {
              if (local_1a0 <= DAT_01d4c104) {
                local_1a0 = DAT_01d4c104;
              }
              bVar11 = false;
              fVar33 = fVar34;
              fVar32 = -fVar30 / local_1a0;
            }
            else {
              bVar11 = fVar32 + fVar33 <= local_180;
              if (bVar11) {
                fVar32 = (1.0 / local_180) * fVar32;
                fVar33 = (1.0 / local_180) * fVar33;
              }
              else {
                fVar32 = (((local_15c + fVar31) - local_1a4) - fVar30) /
                         (((local_1a0 + local_15c) - local_1a4) - local_1a4);
                fVar33 = 1.0 - fVar32;
              }
            }
          }
          if (fVar32 <= 0.0) {
            fVar32 = fVar34;
          }
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          fVar30 = (float)NEON_fminnm(fVar33,0x3f800000);
          fVar32 = (float)NEON_fminnm(fVar32,0x3f800000);
          local_188 = local_140 + fStack_198 * fVar32 + local_16c * fVar30;
          local_184 = local_13c + local_19c * fVar32 + local_1b0 * fVar30;
          fVar41 = local_138 + local_1a8 * fVar32 + local_1ac * fVar30;
          fVar33 = local_160 - local_188;
          fVar38 = local_164 - local_184;
          fVar37 = local_168 - fVar41;
          fVar35 = fVar37 * fVar37 + fVar33 * fVar33 + fVar38 * fVar38;
          fVar39 = local_19c * local_1ac - local_1a8 * local_1b0;
          fVar34 = local_1a8 * local_16c - fStack_198 * local_1ac;
          fVar40 = fStack_198 * local_1b0 - local_19c * local_16c;
          local_17c = fVar36;
          local_178 = fVar28;
          local_174 = fVar29;
          fVar31 = sqrtf(fVar40 * fVar40 + fVar39 * fVar39 + fVar34 * fVar34);
          fVar32 = local_188;
          fVar30 = fVar40 * fVar37 + fVar39 * fVar33 + fVar34 * fVar38;
          bVar10 = 0.0 < fVar30;
          bVar6 = bVar11 & fVar35 < local_1e0;
          bVar11 = fVar35 < local_170;
          fVar28 = local_178;
          fVar29 = local_174;
          fVar36 = local_17c;
          if (uVar25 == 0) {
            local_170 = fVar41;
            if (!bVar11 || fVar30 <= 0.0) {
              bVar5 = false;
            }
            else {
              if (fVar35 <= DAT_01d4c050) {
                fVar36 = 1.0 / fVar31;
                fVar29 = fVar39 * fVar36;
                fVar28 = fVar34 * fVar36;
                fVar36 = fVar40 * fVar36;
              }
              else {
                fVar36 = sqrtf(fVar35);
                fVar36 = 1.0 / fVar36;
                fVar29 = fVar33 * fVar36;
                fVar28 = fVar38 * fVar36;
                fVar36 = fVar37 * fVar36;
              }
              fVar30 = *pfVar26;
              local_1dc = local_170 + fVar36 * fVar30;
              local_1d4 = fVar32 + fVar29 * fVar30;
              bVar5 = true;
              local_1d8 = local_184 + fVar28 * fVar30;
            }
            if (!(bool)(bVar10 & bVar6)) {
              if (!(bool)(bVar10 & (bVar11 | bVar6))) goto LAB_001b0154;
              goto LAB_001b0274;
            }
            fVar31 = 1.0 / fVar31;
            local_244 = fVar39 * fVar31;
            local_248 = fVar34 * fVar31;
            local_24c = fVar40 * fVar31;
            fVar30 = *pfVar26;
            local_258 = fVar32 + local_244 * fVar30;
            local_250 = local_184 + local_248 * fVar30;
            local_254 = local_170 + local_24c * fVar30;
            local_214 = local_244 * (*pfVar21 - local_140) + local_248 * (*pfVar23 - local_13c) +
                        local_24c * (*pfVar27 - local_138);
            bVar11 = true;
LAB_001b0278:
            if (uVar25 == 0) {
              if (bVar11) {
                uVar3 = *local_1b8;
                if ((uVar3 & 1) == 0) {
LAB_001b0290:
                  bVar11 = true;
LAB_001afb2c:
                  fVar30 = local_244 + local_244;
                  fVar38 = local_258 + local_258;
                  fVar41 = *param_5;
                  fVar42 = param_5[1];
                  fVar34 = local_248 + local_248;
                  fVar35 = local_24c + local_24c;
                  fVar32 = param_5[2];
                  fVar37 = param_5[3];
                  fVar39 = local_250 + local_250;
                  fVar40 = local_254 + local_254;
                  fVar44 = fVar38 * fVar41 + fVar39 * fVar42 + fVar40 * fVar32;
                  fVar43 = fVar30 * fVar41 + fVar34 * fVar42 + fVar35 * fVar32;
                  fVar48 = fVar37 * fVar37 + -0.5;
                  fVar45 = param_5[4];
                  fVar47 = param_5[5];
                  fVar46 = param_5[6];
                  fVar31 = fVar41 * fVar43 +
                           fVar30 * fVar48 + fVar37 * (fVar35 * fVar42 - fVar34 * fVar32);
                  fVar33 = fVar42 * fVar43 +
                           fVar34 * fVar48 + fVar37 * (fVar30 * fVar32 - fVar35 * fVar41);
                  fVar30 = fVar35 * fVar48 + fVar37 * (fVar34 * fVar41 - fVar30 * fVar42) +
                           fVar32 * fVar43;
                  pplVar4 = &local_1f8;
                  if (!bVar11) {
                    pplVar4 = &local_200;
                  }
                  pfVar17 = (float *)**pplVar4;
                  *pfVar17 = fVar31;
                  pfVar17[1] = fVar33;
                  pfVar17[2] = fVar30;
                  pfVar17[3] = fVar30 * (fVar46 + fVar40 * fVar48 +
                                                  fVar37 * (fVar39 * fVar41 - fVar38 * fVar42) +
                                                  fVar32 * fVar44) +
                               fVar31 * (fVar45 + fVar41 * fVar44 +
                                                  fVar38 * fVar48 +
                                                  fVar37 * (fVar40 * fVar42 - fVar39 * fVar32)) +
                               fVar33 * (fVar47 + fVar42 * fVar44 +
                                                  fVar39 * fVar48 +
                                                  fVar37 * (fVar38 * fVar32 - fVar40 * fVar41));
                  uVar18 = 0xfffa;
                  if (!bVar11) {
                    uVar18 = 0xfff5;
                  }
                  uVar19 = 1;
                  if (!bVar11) {
                    uVar19 = 2;
                  }
                  *local_1b8 = uVar3 & uVar18 | uVar19;
                }
                else {
                  if ((uVar3 >> 1 & 1) == 0) {
LAB_001afb28:
                    bVar11 = false;
                    goto LAB_001afb2c;
                  }
                  fVar35 = param_5[2];
                  fVar37 = param_5[3];
                  fVar32 = *(float *)(lVar20 + 0x78);
                  fVar30 = *pfVar23 + *pfVar23;
                  fVar34 = *pfVar27 + *pfVar27;
                  fVar38 = fVar37 * fVar37 + -0.5;
                  fVar32 = fVar32 + fVar32;
                  fVar39 = *param_5;
                  fVar40 = param_5[1];
                  fVar41 = fVar32 * fVar39 + fVar30 * fVar40 + fVar34 * fVar35;
                  pfVar17 = (float *)*local_1f8;
                  fVar33 = param_5[5] +
                           fVar40 * fVar41 +
                           fVar30 * fVar38 + fVar37 * (fVar32 * fVar35 - fVar34 * fVar39);
                  fVar31 = param_5[4] +
                           fVar39 * fVar41 +
                           fVar32 * fVar38 + fVar37 * (fVar34 * fVar40 - fVar30 * fVar35);
                  fVar30 = param_5[6] +
                           fVar34 * fVar38 + fVar37 * (fVar30 * fVar39 - fVar32 * fVar40) +
                           fVar35 * fVar41;
                  pfVar16 = (float *)*local_200;
                  fVar32 = (*pfVar17 * fVar31 + pfVar17[1] * fVar33 + fVar30 * pfVar17[2]) -
                           pfVar17[3];
                  fVar30 = (fVar31 * *pfVar16 + fVar33 * pfVar16[1] + fVar30 * pfVar16[2]) -
                           pfVar16[3];
                  if (fVar30 <= fVar32) {
                    if (local_214 < fVar32) goto LAB_001b0290;
                  }
                  else if (local_214 < fVar30) goto LAB_001afb28;
                }
                *puVar15 = *puVar15 | 0x20;
              }
              if (bVar5) {
                *pfVar24 = fVar29 + *pfVar24;
                *pfVar1 = fVar28 + *pfVar1;
                *pfVar12 = fVar36 + *pfVar12;
                *pfVar13 = *pfVar13 + local_1d4;
                *pfVar2 = *pfVar2 + local_1d8;
                *pfVar14 = *pfVar14 + local_1dc;
                *(float *)(lVar20 + 0xc4) = *(float *)(lVar20 + 0xc4) + 1.0;
                uVar25 = 0;
                *puVar15 = *puVar15 | 0x10;
              }
              else {
                uVar25 = 0;
              }
            }
          }
          else {
            bVar5 = false;
            if ((bool)(bVar10 & (bVar11 | bVar6))) {
LAB_001b0274:
              bVar11 = false;
              goto LAB_001b0278;
            }
LAB_001b0154:
            fVar32 = *pfVar21;
            fVar30 = *pfVar23;
            fVar33 = *pfVar27;
            fVar35 = fVar39 * (local_140 - fVar32) + fVar34 * (local_13c - fVar30) +
                     fVar40 * (local_138 - fVar33);
            if (0.0 < fVar35) goto LAB_001b0274;
            fVar37 = fVar39 * (local_160 - local_18c) + fVar34 * (local_164 - local_190) +
                     fVar40 * (local_168 - local_194);
            if (fVar35 <= fVar37) goto LAB_001b0274;
            fVar37 = fVar35 / fVar37;
            fVar38 = local_140 - (fVar32 + (local_160 - local_18c) * fVar37);
            fVar41 = local_13c - (fVar30 + (local_164 - local_190) * fVar37);
            fVar42 = local_138 - (fVar33 + (local_168 - local_194) * fVar37);
            fVar43 = local_1a8 * fVar42 + fStack_198 * fVar38 + local_19c * fVar41;
            fVar38 = local_1ac * fVar42 + local_16c * fVar38 + local_1b0 * fVar41;
            fVar41 = local_1a4 * fVar38 - local_15c * fVar43;
            fVar38 = local_1a4 * fVar43 - local_1a0 * fVar38;
            fVar42 = -(local_180 * DAT_01d4bac8);
            bVar11 = true;
            bVar10 = false;
            if (fVar42 <= fVar41) {
              bVar11 = false;
              bVar10 = true;
              if (!NAN(fVar38) && !NAN(fVar42)) {
                bVar11 = fVar38 < fVar42;
                bVar10 = false;
              }
            }
            fVar41 = fVar41 + fVar38;
            fVar38 = local_180 + local_180 * DAT_01d4bac8;
            bVar8 = false;
            bVar9 = true;
            if (bVar11 == bVar10) {
              bVar8 = false;
              bVar9 = true;
              if (!NAN(fVar41) && !NAN(fVar38)) {
                bVar8 = fVar41 == fVar38;
                bVar9 = fVar38 <= fVar41;
              }
            }
            if (bVar9 && !bVar8) goto LAB_001b0274;
            fVar31 = 1.0 / fVar31;
            local_214 = -(fVar31 * fVar35);
            fVar29 = fVar39 * fVar31;
            fVar28 = fVar34 * fVar31;
            fVar36 = fVar40 * fVar31;
            if (fVar37 < *local_1f0) {
              *pfVar24 = fVar29;
              *pfVar1 = fVar28;
              *pfVar12 = fVar36;
              *pfVar13 = fVar32;
              *pfVar2 = fVar30;
              *pfVar14 = fVar33;
              *local_1f0 = fVar37;
              *puVar15 = 8;
            }
            uVar3 = *local_1b8;
            uVar25 = 1;
            local_1e4 = fVar37;
            local_1dc = fVar33;
            local_1d8 = fVar30;
            local_1d4 = fVar32;
            if ((uVar3 & 1) == 0) {
LAB_001b0518:
              fVar34 = fVar29 + fVar29;
              fVar35 = fVar28 + fVar28;
              fVar32 = fVar32 + fVar32;
              fVar39 = *param_5;
              fVar40 = param_5[1];
              fVar30 = fVar30 + fVar30;
              fVar37 = fVar36 + fVar36;
              fVar31 = param_5[2];
              fVar38 = param_5[3];
              fVar33 = fVar33 + fVar33;
              bVar11 = uVar25 == 0;
              pplVar4 = &local_1f8;
              if (bVar11) {
                pplVar4 = &local_200;
              }
              pfVar17 = (float *)**pplVar4;
              uVar18 = 1;
              if (bVar11) {
                uVar18 = 2;
              }
              uVar25 = 1;
              fVar43 = fVar34 * fVar39 + fVar35 * fVar40 + fVar37 * fVar31;
              fVar44 = fVar32 * fVar39 + fVar30 * fVar40 + fVar33 * fVar31;
              fVar48 = fVar38 * fVar38 + -0.5;
              fVar45 = param_5[4];
              fVar47 = param_5[5];
              fVar46 = param_5[6];
              fVar41 = fVar39 * fVar43 +
                       fVar34 * fVar48 + fVar38 * (fVar37 * fVar40 - fVar35 * fVar31);
              fVar42 = fVar40 * fVar43 +
                       fVar35 * fVar48 + fVar38 * (fVar34 * fVar31 - fVar37 * fVar39);
              fVar34 = fVar37 * fVar48 + fVar38 * (fVar35 * fVar39 - fVar34 * fVar40) +
                       fVar31 * fVar43;
              uVar19 = 0xfffa;
              if (bVar11) {
                uVar19 = 0xfff5;
              }
              *pfVar17 = fVar41;
              pfVar17[1] = fVar42;
              pfVar17[2] = fVar34;
              pfVar17[3] = fVar34 * (fVar46 + fVar33 * fVar48 +
                                              fVar38 * (fVar30 * fVar39 - fVar32 * fVar40) +
                                              fVar31 * fVar44) +
                           fVar41 * (fVar45 + fVar39 * fVar44 +
                                              fVar32 * fVar48 +
                                              fVar38 * (fVar33 * fVar40 - fVar30 * fVar31)) +
                           fVar42 * (fVar47 + fVar40 * fVar44 +
                                              fVar30 * fVar48 +
                                              fVar38 * (fVar32 * fVar31 - fVar33 * fVar39));
              *local_1b8 = uVar3 & uVar19 | uVar18;
            }
            else {
              if ((uVar3 >> 1 & 1) == 0) {
LAB_001b0514:
                uVar25 = 0;
                goto LAB_001b0518;
              }
              fVar39 = param_5[2];
              fVar40 = param_5[3];
              fVar31 = *(float *)(lVar20 + 0x78);
              fVar34 = *pfVar23 + *pfVar23;
              fVar37 = *pfVar27 + *pfVar27;
              fVar41 = fVar40 * fVar40 + -0.5;
              fVar31 = fVar31 + fVar31;
              fVar42 = *param_5;
              fVar43 = param_5[1];
              fVar44 = fVar31 * fVar42 + fVar34 * fVar43 + fVar37 * fVar39;
              pfVar17 = (float *)*local_1f8;
              fVar38 = param_5[5] +
                       fVar43 * fVar44 +
                       fVar34 * fVar41 + fVar40 * (fVar31 * fVar39 - fVar37 * fVar42);
              fVar35 = param_5[4] +
                       fVar42 * fVar44 +
                       fVar31 * fVar41 + fVar40 * (fVar37 * fVar43 - fVar34 * fVar39);
              fVar34 = param_5[6] +
                       fVar37 * fVar41 + fVar40 * (fVar34 * fVar42 - fVar31 * fVar43) +
                       fVar39 * fVar44;
              pfVar16 = (float *)*local_200;
              fVar31 = (*pfVar17 * fVar35 + pfVar17[1] * fVar38 + fVar34 * pfVar17[2]) - pfVar17[3];
              fVar34 = (fVar35 * *pfVar16 + fVar38 * pfVar16[1] + fVar34 * pfVar16[2]) - pfVar16[3];
              if (fVar34 <= fVar31) {
                uVar25 = 1;
                if (local_214 < fVar31) goto LAB_001b0518;
              }
              else {
                if (local_214 < fVar34) goto LAB_001b0514;
                uVar25 = 1;
              }
            }
          }
          FUN_001b0a60(&local_158);
        } while (((int)local_150 != 0) || (local_204 != local_150._4_4_));
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_3);
  }
  return;
}


