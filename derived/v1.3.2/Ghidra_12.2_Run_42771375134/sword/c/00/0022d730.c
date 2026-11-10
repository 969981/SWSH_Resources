/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022d730; name: FUN_0022d730
 */


uint FUN_0022d730(float param_1,uint param_2,long param_3,byte *param_4,float *param_5,
                 float *param_6,float *param_7,uint param_8,long param_9,byte *param_10,
                 float *param_11,float *param_12,float *param_13,float *param_14,float *param_15,
                 float *param_16,undefined8 param_17,float param_18,long param_19,byte param_20,
                 float *param_21)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  uint uVar17;
  float *pfVar18;
  byte *pbVar19;
  float *pfVar20;
  ulong uVar21;
  byte *pbVar22;
  size_t __n;
  ulong uVar23;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 auStack_260 [2];
  byte abStack_250 [12];
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
  long local_218;
  float local_20c;
  long local_208;
  byte *local_200;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  byte *local_1d8;
  byte *local_1d0;
  float *local_1c8;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float *local_1b0;
  float local_1a4;
  ulong local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  uint local_188;
  float local_184;
  byte *local_180;
  uint local_174;
  long local_170;
  float local_164;
  long local_160;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  ulong local_138;
  float *local_130;
  float local_124;
  byte *local_120;
  long local_118;
  float local_110 [4];
  float local_100 [4];
  undefined8 local_f0;
  byte local_e8 [72];
  
  local_1e0 = param_21;
  local_130 = param_13;
  local_188 = (uint)param_20;
  if ((param_20 & 1) == 0) {
    fVar24 = *param_14;
    fVar25 = param_14[1];
    local_194 = param_14[2];
    fVar26 = local_194;
    local_190 = fVar25;
    local_18c = fVar24;
  }
  else {
    fVar24 = *param_14;
    fVar25 = param_14[1];
    local_194 = -param_14[2];
    fVar26 = param_14[2];
    local_190 = -fVar25;
    local_18c = -fVar24;
  }
  local_1f0 = param_16;
  local_198 = param_18;
  uVar17 = param_8;
  if (param_8 <= param_2) {
    uVar17 = param_2;
  }
  local_120 = abStack_250 + -((ulong)uVar17 * 0xc + 0xf & 0x1ffffffff0);
  uVar23 = (ulong)param_2;
  uVar13 = uVar23 + 0xf & 0x1fffffff0;
  local_1d0 = local_120 + -uVar13;
  local_118 = (long)local_1d0 - uVar13;
  local_1a0 = (ulong)param_8;
  uVar13 = local_1a0 + 0xf & 0x1fffffff0;
  local_180 = (byte *)(local_118 - uVar13);
  lVar11 = (long)local_180 - uVar13;
  local_1b4 = *(float *)(param_19 + 0x1000);
  local_160 = param_19;
  local_100[0] = 0.0;
  local_110[0] = 0.0;
  local_f0 = 0;
  local_1e8 = param_11;
  local_1d8 = param_10;
  local_1c8 = param_5;
  local_1b0 = param_7;
  local_184 = param_1;
  local_170 = lVar11;
  local_124 = (float)param_8;
  if (2 < param_8) {
    fVar29 = fVar24 * param_11[3] + fVar25 * param_11[4] + fVar26 * param_11[5];
    local_13c = -(*param_11 * fVar24 + param_11[1] * fVar25 + param_11[2] * fVar26);
    fVar24 = fVar24 * param_11[6] + fVar25 * param_11[7] + fVar26 * param_11[8];
    fVar25 = (*param_12 * local_13c - param_12[1] * fVar29) - param_12[2] * fVar24;
    if (DAT_01d4bf24 <= fVar25) {
      local_148 = *param_15;
      local_14c = param_15[1];
      fVar33 = param_15[2];
      local_224 = param_15[3];
      fVar34 = param_15[4];
      fVar30 = param_13[8];
      fVar31 = param_13[6];
      fVar32 = param_13[7];
      local_220 = param_15[5];
      local_218 = CONCAT44(local_218._4_4_,param_15[6]);
      local_21c = param_15[7];
      local_150 = param_15[8];
      local_164 = param_15[9];
      local_20c = param_15[10];
      local_154 = param_15[0xb];
      local_1bc = param_12[3];
      *(float **)(lVar11 + -0x10) = param_13;
      FUN_0022eb80(local_100,local_110,(long)&local_f0 + 4,&local_f0,local_120,local_124,param_9,
                   param_10);
      fVar28 = local_100[0];
      fVar27 = local_110[0];
      fVar26 = local_1bc;
      local_208 = param_9;
      local_200 = param_4;
      local_1f8 = param_6;
      local_1b8 = (float)param_2;
      if (param_2 == 0) {
        uVar17 = 0;
        local_174 = 0;
        uVar13 = uVar23;
      }
      else {
        local_140 = -fVar29;
        local_174 = 0;
        local_1a4 = 0.0;
        local_144 = -fVar24;
        local_148 = local_148 * fVar31 + local_14c * fVar32 + fVar33 * fVar30;
        local_14c = fVar31 * local_224 + fVar32 * fVar34 + fVar30 * local_220;
        local_150 = fVar31 * (float)local_218 + fVar32 * local_21c + fVar30 * local_150;
        uVar21 = local_f0 & 0xffffffff;
        uVar5 = local_f0._4_4_;
        local_154 = fVar31 * local_164 + fVar32 * local_20c + fVar30 * local_154;
        local_164 = -local_1bc;
        uVar17 = 0;
        lVar12 = local_118;
        pbVar22 = local_1d0;
        local_138 = uVar23;
        do {
          pfVar20 = (float *)(param_3 + (ulong)*param_4 * 0xc);
          fVar24 = *pfVar20;
          fVar30 = pfVar20[1];
          fVar32 = pfVar20[2];
          fVar33 = local_154 + local_148 * fVar24 + local_14c * fVar30 + local_150 * fVar32;
          fVar34 = (1.0 / fVar25) * (fVar26 + fVar33);
          fVar29 = (fVar24 * *param_15 + fVar30 * param_15[3] + fVar32 * param_15[6] + param_15[9])
                   - fVar34 * local_13c;
          fVar31 = (fVar24 * param_15[1] + fVar30 * param_15[4] + fVar32 * param_15[7] +
                   param_15[10]) - fVar34 * local_140;
          fVar24 = (fVar24 * param_15[2] + fVar30 * param_15[5] + fVar32 * param_15[8] +
                   param_15[0xb]) - fVar34 * local_144;
          bVar9 = FUN_0022ecf0((fVar29 * *local_130 + fVar31 * local_130[1] + fVar24 * local_130[2])
                               - fVar28,(fVar29 * local_130[3] + fVar31 * local_130[4] +
                                        fVar24 * local_130[5]) - fVar27,uVar5,uVar21,local_120,
                               local_124,lVar12);
          *pbVar22 = bVar9 & 1;
          if (((bVar9 & 1) != 0) && (uVar17 = uVar17 + 1, fVar33 < local_164)) {
            uVar3 = *(uint *)(local_160 + 0x1000);
            if (uVar3 < 0x40) {
              pfVar15 = (float *)(local_160 + (ulong)uVar3 * 0x40);
              *(uint *)(local_160 + 0x1000) = uVar3 + 1;
              local_e8[(uint)local_1a4] = *param_4;
              *pfVar15 = local_18c;
              pfVar15[1] = local_190;
              pfVar15[2] = local_194;
              fVar24 = *pfVar20;
              fVar29 = *local_1c8;
              fVar31 = local_1c8[2];
              fVar35 = local_1c8[3];
              fVar32 = pfVar20[1];
              fVar40 = local_1c8[5];
              fVar36 = local_1c8[8];
              fVar37 = local_1c8[9];
              fVar33 = pfVar20[2];
              fVar39 = local_1c8[6];
              fVar44 = local_1c8[0xb];
              fVar30 = 0.0;
              fVar47 = 0.0;
              fVar48 = 0.0;
              local_1a4 = (float)((int)local_1a4 + 1);
              if ((local_188 & 1) != 0) {
                fVar30 = local_1e0[2];
                fVar47 = *local_1e0;
                fVar48 = local_1e0[1];
              }
              pfVar15[5] = fVar24 * local_1c8[1] + fVar32 * local_1c8[4] + fVar33 * local_1c8[7] +
                           local_1c8[10] + fVar48;
              pfVar15[6] = fVar24 * fVar31 + fVar32 * fVar40 + fVar33 * fVar36 + fVar44 + fVar30;
              pfVar15[3] = fVar34 + local_184;
              pfVar15[4] = fVar24 * fVar29 + fVar32 * fVar35 + fVar33 * fVar39 + fVar37 + fVar47;
              pfVar15[0xd] = local_198;
              local_174 = 1;
            }
            else {
              local_174 = 1;
            }
          }
          param_4 = param_4 + 1;
          lVar12 = lVar12 + 1;
          pbVar22 = pbVar22 + 1;
          uVar23 = uVar23 - 1;
          uVar13 = local_138;
        } while (uVar23 != 0);
      }
      lVar4 = local_160;
      __n = local_1a0;
      fVar24 = local_1b8;
      pfVar20 = local_1f8;
      pbVar22 = local_200;
      lVar12 = local_208;
      uVar3 = local_174 & 1;
      FUN_0022eea0(local_160,local_1b4,uVar17,local_1b0,param_3,local_e8);
      local_174 = uVar3;
      if ((float)uVar17 != fVar24) {
        if ((uint)fVar24 < 3) {
                    /* WARNING: Subroutine does not return */
          memset(local_180,0,__n);
        }
        local_20c = *(float *)(lVar4 + 0x1000);
        local_1b8 = *local_1b0;
        local_220 = local_1b0[1];
        local_22c = local_1b0[2];
        fVar33 = *local_1f0;
        fVar29 = local_1f0[1];
        local_230 = local_1b0[3];
        local_234 = local_1b0[4];
        local_1bc = local_1b0[5];
        local_21c = local_1b0[6];
        local_224 = local_1b0[7];
        local_228 = local_1b0[8];
        local_154 = local_1f0[8];
        fVar26 = local_1f0[2];
        fVar27 = local_1f0[3];
        fVar32 = local_1f0[4];
        fVar31 = local_1f0[5];
        fVar28 = local_1f0[6];
        fVar30 = local_1f0[7];
        local_23c = local_1f0[9];
        local_240 = local_1f0[10];
        local_244 = local_1f0[0xb];
        local_238 = pfVar20[3];
        local_1f8 = pfVar20;
        local_138 = uVar13;
        *(float **)(lVar11 + -0x10) = local_1b0;
        local_218 = param_3;
        local_200 = pbVar22;
        FUN_0022eb80(local_100,local_110,(long)&local_f0 + 4,&local_f0,local_120,fVar24,param_3,
                     pbVar22);
        fVar25 = local_238;
        if (local_124 == 0.0) {
          uVar17 = 0;
        }
        else {
          local_13c = local_1b8 * fVar33 + local_220 * fVar29 + local_22c * fVar26;
          local_140 = fVar33 * local_230 + fVar29 * local_234 + fVar26 * local_1bc;
          local_1a4 = fVar33 * local_21c + fVar29 * local_224 + fVar26 * local_228;
          local_144 = local_1b8 * fVar27 + local_220 * fVar32 + local_22c * fVar31;
          local_148 = local_230 * fVar27 + local_234 * fVar32 + local_1bc * fVar31;
          uVar13 = local_f0 & 0xffffffff;
          uVar5 = local_f0._4_4_;
          local_1b0 = (float *)CONCAT44(local_1b0._4_4_,
                                        local_21c * fVar27 + local_224 * fVar32 + local_228 * fVar31
                                       );
          local_14c = local_1b8 * fVar28 + local_220 * fVar30 + local_22c * local_154;
          local_150 = local_230 * fVar28 + local_234 * fVar30 + local_1bc * local_154;
          local_1b4 = local_21c * fVar28 + local_224 * fVar30 + local_228 * local_154;
          local_154 = local_100[0];
          local_164 = local_110[0];
          fVar26 = local_1b8 * local_23c;
          fVar27 = local_220 * local_240;
          fVar31 = local_22c * local_244;
          fVar28 = local_234 * local_240;
          fVar29 = local_230 * local_23c;
          fVar30 = local_1bc * local_244;
          local_1b8 = local_21c * local_23c + local_224 * local_240 + local_228 * local_244;
          local_1bc = -local_238;
          uVar17 = 0;
          uVar23 = 0;
          lVar11 = local_170;
          pbVar19 = local_180;
          pbVar22 = local_1d8;
          do {
            bVar9 = *pbVar22;
            pfVar20 = (float *)(lVar12 + (ulong)bVar9 * 0xc);
            fVar33 = *pfVar20;
            fVar32 = pfVar20[1];
            fVar34 = pfVar20[2];
            bVar10 = FUN_0022ecf0((fVar26 + fVar27 + fVar31 +
                                  local_13c * fVar33 + local_144 * fVar32 + local_14c * fVar34) -
                                  local_154,
                                  (fVar29 + fVar28 + fVar30 +
                                  local_140 * fVar33 + local_148 * fVar32 + local_150 * fVar34) -
                                  local_164,uVar5,uVar13,local_120,fVar24,lVar11);
            *pbVar19 = bVar10 & 1;
            if ((bVar10 & 1) != 0) {
              fVar35 = local_1b8 +
                       local_1a4 * fVar33 + local_1b0._0_4_ * fVar32 + local_1b4 * fVar34;
              uVar17 = uVar17 + 1;
              if (fVar35 < local_1bc) {
                uVar3 = *(uint *)(local_160 + 0x1000);
                if (uVar3 < 0x40) {
                  *(uint *)(local_160 + 0x1000) = uVar3 + 1;
                  pfVar20 = (float *)(local_160 + (ulong)uVar3 * 0x40);
                  local_e8[uVar23] = bVar9;
                  *pfVar20 = local_18c;
                  pfVar20[1] = local_190;
                  pfVar20[2] = local_194;
                  fVar39 = local_1e8[1];
                  fVar40 = local_1e8[4];
                  fVar41 = local_1e8[5];
                  fVar47 = local_1e8[2];
                  fVar36 = local_1e8[7];
                  fVar42 = local_1e8[8];
                  fVar48 = local_1e8[10];
                  fVar37 = local_1e8[0xb];
                  fVar44 = 0.0;
                  fVar43 = 0.0;
                  fVar38 = 0.0;
                  if ((local_188 & 1) == 0) {
                    fVar43 = local_1e0[2];
                    fVar44 = *local_1e0;
                    fVar38 = local_1e0[1];
                  }
                  uVar23 = (ulong)((int)uVar23 + 1);
                  pfVar20[4] = fVar33 * *local_1e8 + fVar32 * local_1e8[3] + fVar34 * local_1e8[6] +
                               local_1e8[9] + fVar44;
                  pfVar20[6] = fVar33 * fVar47 + fVar32 * fVar41 + fVar34 * fVar42 + fVar37 + fVar43
                  ;
                  pfVar20[5] = fVar33 * fVar39 + fVar32 * fVar40 + fVar34 * fVar36 + fVar48 + fVar38
                  ;
                  pfVar20[0xd] = local_198;
                  pfVar20[3] = fVar25 + fVar35 + local_184;
                  local_174 = 1;
                }
                else {
                  local_174 = 1;
                }
              }
            }
            pbVar22 = pbVar22 + 1;
            lVar11 = lVar11 + 1;
            pbVar19 = pbVar19 + 1;
            __n = __n - 1;
          } while (__n != 0);
        }
        lVar4 = local_160;
        FUN_0022eea0(local_160,local_20c,uVar17,local_130,lVar12,local_e8);
        uVar23 = local_138;
        pfVar20 = local_1f8;
        pbVar22 = local_200;
        lVar11 = local_218;
        if (((float)uVar17 != local_124) && (local_124 != 0.0)) {
          fVar25 = *local_1f0;
          fVar26 = local_1f0[1];
          fVar29 = local_1f0[2];
          fVar27 = local_1f0[3];
          pfVar15 = (float *)(local_120 + 4);
          fVar28 = local_1f0[4];
          fVar30 = local_1f0[5];
          fVar31 = local_1f0[6];
          fVar32 = local_1f0[7];
          fVar33 = local_1f0[8];
          fVar34 = local_1f0[9];
          fVar35 = local_1f0[10];
          fVar39 = local_1f0[0xb];
          uVar13 = local_1a0;
          pbVar19 = local_1d8;
          do {
            pfVar18 = (float *)(lVar12 + (ulong)*pbVar19 * 0xc);
            fVar44 = *pfVar18;
            fVar47 = pfVar18[1];
            fVar48 = pfVar18[2];
            pfVar15[-1] = fVar44 * fVar25 + fVar47 * fVar27 + fVar48 * fVar31 + fVar34;
            *pfVar15 = fVar44 * fVar26 + fVar47 * fVar28 + fVar48 * fVar32 + fVar35;
            pfVar15[1] = fVar44 * fVar29 + fVar47 * fVar30 + fVar48 * fVar33 + fVar39;
            pfVar15 = pfVar15 + 3;
            uVar13 = uVar13 - 1;
            pbVar19 = pbVar19 + 1;
          } while (uVar13 != 0);
          if ((1 < (uint)fVar24) && (1 < (uint)local_124)) {
            uVar13 = 0;
            pbVar19 = local_180;
            uVar21 = local_1a0;
            do {
              while( true ) {
                uVar1 = uVar13 + 1;
                uVar14 = uVar1 & 0xffffffff;
                if (uVar21 <= uVar1) {
                  uVar14 = 0;
                }
                if (((pbVar19[uVar13] == 0) || (pbVar19[uVar14] == 0)) &&
                   ((*(byte *)(local_170 + uVar14) & *(byte *)(local_170 + uVar13)) == 0)) break;
                uVar13 = uVar1;
                if (uVar1 == uVar21) goto LAB_0022eb40;
              }
              pfVar15 = (float *)(local_120 + uVar14 * 0xc);
              pfVar18 = (float *)(local_120 + uVar13 * 0xc);
              local_144 = pfVar15[2];
              local_124 = *pfVar15;
              fVar32 = pfVar18[2];
              local_13c = *pfVar18;
              local_140 = pfVar18[1];
              local_130 = (float *)CONCAT44(local_130._4_4_,pfVar15[1]);
              local_100[0] = local_124 - local_13c;
              local_100[1] = pfVar15[1] - local_140;
              local_100[2] = local_144 - fVar32;
              fVar28 = local_100[1] * pfVar20[2] - local_100[2] * pfVar20[1];
              fVar30 = local_100[2] * *pfVar20 - local_100[0] * pfVar20[2];
              fVar31 = local_100[0] * pfVar20[1] - local_100[1] * *pfVar20;
              fVar24 = local_13c * fVar28;
              fVar27 = local_140 * fVar30;
              fVar25 = fabsf(fVar28);
              fVar26 = fabsf(fVar30);
              fVar29 = fabsf(fVar31);
              bVar6 = false;
              bVar7 = true;
              bVar8 = false;
              if (fVar25 < fVar26) {
                bVar6 = false;
                bVar7 = false;
                bVar8 = true;
                if (!NAN(fVar26) && !NAN(fVar29)) {
                  bVar6 = fVar26 < fVar29;
                  bVar7 = fVar26 == fVar29;
                  bVar8 = false;
                }
              }
              if (bVar7 || bVar6 != bVar8) {
                if (fVar29 <= fVar25) {
                  lVar12 = 1;
                  lVar16 = 2;
                }
                else {
                  lVar12 = 0;
                  lVar16 = 1;
                }
              }
              else {
                lVar16 = 0;
                lVar12 = 2;
              }
              fVar25 = local_100[lVar12];
              fVar26 = pfVar20[lVar16];
              fVar29 = local_100[lVar16];
              fVar33 = pfVar20[lVar12];
              fVar24 = fVar32 * fVar31 + fVar24 + fVar27;
              uVar13 = 0;
              do {
                uVar21 = uVar13 + 1;
                lVar2 = 0;
                if (uVar21 < uVar23) {
                  lVar2 = uVar13 + 1;
                }
                if (((local_1d0[uVar13] == 0) || (local_1d0[lVar2] == 0)) &&
                   ((*(byte *)(local_118 + lVar2) & *(byte *)(local_118 + uVar13)) == 0)) {
                  pfVar15 = (float *)(lVar11 + (ulong)pbVar22[uVar13] * 0xc);
                  fVar27 = *pfVar15;
                  fVar34 = pfVar15[1];
                  fVar35 = pfVar15[2];
                  pfVar15 = (float *)(lVar11 + (ulong)pbVar22[lVar2] * 0xc);
                  fVar39 = (fVar28 * fVar27 + fVar30 * fVar34 + fVar31 * fVar35) - fVar24;
                  if (fVar39 * ((fVar28 * *pfVar15 + fVar30 * pfVar15[1] + fVar31 * pfVar15[2]) -
                               fVar24) <= 0.0) {
                    fVar44 = *pfVar15 - fVar27;
                    fVar47 = pfVar15[1] - fVar34;
                    fVar48 = pfVar15[2] - fVar35;
                    fVar40 = fVar28 * fVar44 + fVar30 * fVar47 + fVar31 * fVar48;
                    if (fVar40 != 0.0) {
                      fVar39 = fVar39 / fVar40;
                      local_110[0] = fVar27 - fVar44 * fVar39;
                      local_110[1] = fVar34 - fVar47 * fVar39;
                      local_110[2] = fVar35 - fVar48 * fVar39;
                      fVar27 = (1.0 / (fVar25 * fVar26 - fVar29 * fVar33)) *
                               (fVar25 * (local_110[lVar16] - pfVar18[lVar16]) -
                               fVar29 * (local_110[lVar12] - pfVar18[lVar12]));
                      if (0.0 <= fVar27) {
                        local_110[0] = local_110[0] - fVar27 * *pfVar20;
                        local_110[1] = local_110[1] - fVar27 * pfVar20[1];
                        local_110[2] = local_110[2] - fVar27 * pfVar20[2];
                        if ((local_13c - local_110[0]) * (local_124 - local_110[0]) +
                            (local_140 - local_110[1]) * (local_130._0_4_ - local_110[1]) +
                            (fVar32 - local_110[2]) * (local_144 - local_110[2]) < 0.0) {
                          uVar17 = *(uint *)(lVar4 + 0x1000);
                          if (uVar17 < 0x40) {
                            pfVar15 = (float *)(lVar4 + (ulong)uVar17 * 0x40);
                            *(uint *)(lVar4 + 0x1000) = uVar17 + 1;
                            *pfVar15 = local_18c;
                            pfVar15[1] = local_190;
                            pfVar15[2] = local_194;
                            fVar44 = *local_1c8;
                            fVar47 = local_1c8[1];
                            fVar36 = local_1c8[2];
                            fVar41 = local_1c8[3];
                            fVar42 = local_1c8[4];
                            fVar45 = local_1c8[5];
                            fVar39 = local_1c8[6];
                            fVar37 = local_1c8[7];
                            fVar43 = local_1c8[8];
                            fVar46 = local_1c8[9];
                            fVar34 = local_1c8[10];
                            fVar48 = local_1c8[0xb];
                            fVar35 = 0.0;
                            fVar38 = 0.0;
                            fVar40 = 0.0;
                            if ((local_188 & 1) == 0) {
                              fVar35 = local_1e0[2];
                              fVar38 = *local_1e0;
                              fVar40 = local_1e0[1];
                            }
                            pfVar15[3] = local_184 - fVar27;
                            pfVar15[4] = local_110[0] * fVar44 + local_110[1] * fVar41 +
                                         local_110[2] * fVar39 + fVar46 + fVar38;
                            pfVar15[5] = local_110[0] * fVar47 + local_110[1] * fVar42 +
                                         local_110[2] * fVar37 + fVar34 + fVar40;
                            pfVar15[6] = local_110[0] * fVar36 + local_110[1] * fVar45 +
                                         local_110[2] * fVar43 + fVar48 + fVar35;
                            pfVar15[0xd] = local_198;
                          }
                          local_174 = 1;
                        }
                      }
                    }
                  }
                }
                uVar13 = uVar21;
              } while (uVar23 != uVar21);
              uVar13 = uVar1;
              pbVar19 = local_180;
              uVar21 = local_1a0;
            } while (uVar1 != local_1a0);
          }
        }
      }
LAB_0022eb40:
      return local_174 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  memset(local_1d0,0,uVar23);
}


