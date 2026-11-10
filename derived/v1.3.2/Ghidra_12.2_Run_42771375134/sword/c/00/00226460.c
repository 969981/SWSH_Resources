/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00226460; name: FUN_00226460
 */


/* WARNING: Removing unreachable block (ram,0x00226dd0) */

undefined8
FUN_00226460(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,long param_5,
            long param_6,float *param_7,float *param_8,long param_9,long param_10,float *param_11,
            float *param_12,float *param_13,uint *param_14,uint *param_15,float *param_16,
            float *param_17,undefined4 *param_18)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined1 *puVar9;
  long lVar10;
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
  float fVar21;
  float fVar22;
  long alStack_19e0 [6];
  undefined1 auStack_19b0 [8];
  long local_19a8;
  float *local_19a0;
  uint *local_1998;
  undefined1 *local_1990;
  undefined4 *local_1988;
  float local_197c;
  float local_1978;
  float local_1974;
  long local_1970;
  long local_1968;
  float *local_1960;
  float *local_1958;
  float local_1950;
  float local_194c;
  float local_1948;
  float local_1940;
  float fStack_193c;
  float local_1938;
  float fStack_1934;
  float local_1930;
  float local_192c;
  float local_1928;
  float local_1924;
  float fStack_1920;
  float local_191c;
  float fStack_1918;
  float local_1914;
  float local_1910;
  float fStack_190c;
  float local_1908;
  float local_1904;
  float local_1900;
  float fStack_18fc;
  float local_18f8;
  float fStack_18f4;
  uint local_18f0 [3];
  float afStack_18e4 [767];
  float local_ce8;
  float local_ce4 [769];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  
  fVar11 = *param_7;
  fVar12 = param_7[1];
  fVar20 = *param_13;
  fVar21 = param_13[1];
  fVar22 = param_13[2];
  fVar14 = param_7[2];
  fVar17 = param_7[3];
  fVar13 = param_7[4];
  fVar15 = param_7[5];
  fVar16 = param_7[6];
  fVar18 = param_7[7];
  fVar19 = param_7[8];
  lVar4 = -((ulong)*(uint *)(param_5 + 0x10) * 4 + 0xf & 0x7fffffff0);
  puVar9 = auStack_19b0 + lVar4;
  local_ce8 = -fVar20;
  local_ce4[0] = -fVar21;
  local_ce4[1] = -fVar22;
  local_b8 = 3.4028235e+38;
  local_1960 = param_3;
  local_1958 = param_4;
  *(float **)((long)alStack_19e0 + lVar4) = &local_c8;
  local_1968 = param_10;
  *(undefined4 **)((long)alStack_19e0 + lVar4 + 0x18) = &local_b4;
  *(float **)((long)alStack_19e0 + lVar4 + 0x20) = &local_ce8;
  *(uint **)((long)alStack_19e0 + lVar4 + 8) = param_14;
  *(undefined1 **)((long)alStack_19e0 + lVar4 + 0x10) = puVar9;
  uVar6 = FUN_00227300(fVar11 * fVar20 + fVar12 * fVar21 + fVar14 * fVar22,
                       fVar20 * fVar17 + fVar21 * fVar13 + fVar22 * fVar15,
                       fVar20 * fVar16 + fVar21 * fVar18 + fVar22 * fVar19,param_1,param_2,param_5,
                       param_6,param_7,param_8,param_9,param_10,param_12,&local_b8);
  lVar4 = local_1968;
  if ((uVar6 & 1) != 0) {
    local_1998 = param_14;
    fVar17 = param_13[2];
    fVar11 = *param_8;
    fVar12 = param_8[1];
    fVar14 = *param_13;
    fVar15 = param_13[1];
    fVar18 = param_8[2];
    fVar21 = param_8[3];
    fVar13 = param_8[4];
    fVar19 = param_8[5];
    fVar20 = param_8[6];
    fVar22 = param_8[7];
    fVar16 = param_8[8];
    lVar10 = (long)puVar9 - ((ulong)*(uint *)(param_6 + 0x10) * 4 + 0xf & 0x7fffffff0);
    local_d0 = 3.4028235e+38;
    local_1990 = puVar9;
    *(float **)(lVar10 + -0x30) = &local_e0;
    *(undefined4 **)(lVar10 + -0x18) = &local_cc;
    *(float **)(lVar10 + -0x10) = param_13;
    local_1970 = param_9;
    *(uint **)(lVar10 + -0x28) = param_15;
    *(long *)(lVar10 + -0x20) = lVar10;
    uVar6 = FUN_00227300(-(fVar11 * fVar14 + fVar12 * fVar15 + fVar18 * fVar17),
                         -(fVar14 * fVar21 + fVar15 * fVar13 + fVar17 * fVar19),
                         -(fVar14 * fVar20 + fVar15 * fVar22 + fVar17 * fVar16),param_1,param_2,
                         param_6,param_5,param_8,param_7,lVar4,param_9,param_11,&local_d0);
    lVar4 = local_1970;
    if ((uVar6 & 1) != 0) {
      local_1988 = param_18;
      *param_18 = 0;
      if (local_b8 <= local_d0) {
        local_197c = local_c0;
        local_1978 = local_c4;
        local_1974 = local_c8;
        fVar11 = local_b8;
      }
      else {
        local_1978 = local_dc;
        local_1974 = local_e0;
        *param_18 = 1;
        local_197c = local_d8;
        fVar11 = local_d0;
      }
      local_ce8 = 0.0;
      local_18f0[0] = 0;
      pfVar8 = (float *)(*(long *)(param_5 + 0x18) + (ulong)*local_1998 * 0x14);
      uVar3 = *param_15;
      fVar13 = *pfVar8;
      fVar14 = pfVar8[1];
      fVar12 = pfVar8[2];
      fVar15 = pfVar8[3];
      local_19a8 = *(long *)(param_6 + 0x18);
      fVar17 = *(float *)(local_1970 + 0x24) * fVar13 + *(float *)(local_1970 + 0x28) * fVar14 +
               *(float *)(local_1970 + 0x2c) * fVar12;
      fVar19 = fVar13 * *(float *)(local_1970 + 0x30) + fVar14 * *(float *)(local_1970 + 0x34) +
               fVar12 * *(float *)(local_1970 + 0x38);
      fVar18 = fVar13 * *(float *)(local_1970 + 0x3c) + fVar14 * *(float *)(local_1970 + 0x40) +
               fVar12 * *(float *)(local_1970 + 0x44);
      local_19a0 = (float *)lVar10;
      fStack_18f4 = sqrtf(fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18);
      lVar5 = local_1968;
      fStack_18f4 = 1.0 / fStack_18f4;
      fVar19 = fVar19 * fStack_18f4;
      fVar17 = fVar17 * fStack_18f4;
      fVar18 = fVar18 * fStack_18f4;
      fStack_18f4 = fVar15 * fStack_18f4;
      pfVar8 = (float *)(local_19a8 + (ulong)uVar3 * 0x14);
      local_1998 = (uint *)CONCAT44(local_1998._4_4_,fStack_18f4);
      fVar12 = pfVar8[2];
      local_19a8 = CONCAT44(local_19a8._4_4_,pfVar8[3]);
      fVar13 = *pfVar8;
      fVar16 = pfVar8[1];
      fVar15 = *(float *)(local_1968 + 0x24) * fVar13 + *(float *)(local_1968 + 0x28) * fVar16 +
               *(float *)(local_1968 + 0x2c) * fVar12;
      fVar14 = fVar13 * *(float *)(local_1968 + 0x30) + fVar16 * *(float *)(local_1968 + 0x34) +
               fVar12 * *(float *)(local_1968 + 0x38);
      fVar13 = fVar13 * *(float *)(local_1968 + 0x3c) + fVar16 * *(float *)(local_1968 + 0x40) +
               fVar12 * *(float *)(local_1968 + 0x44);
      local_1900 = fVar17;
      fStack_18fc = fVar19;
      local_18f8 = fVar18;
      fVar12 = sqrtf(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
      puVar9 = local_1990;
      fVar12 = 1.0 / fVar12;
      fVar15 = fVar15 * fVar12;
      fVar14 = fVar14 * fVar12;
      fVar13 = fVar13 * fVar12;
      local_1900 = fVar17 * *param_11 + fVar19 * param_11[3] + fVar18 * param_11[6];
      fStack_18fc = fVar17 * param_11[1] + fVar19 * param_11[4] + fVar18 * param_11[7];
      local_18f8 = fVar17 * param_11[2] + fVar19 * param_11[5] + fVar18 * param_11[8];
      fStack_18f4 = local_1998._0_4_ -
                    (local_1900 * param_11[9] + fStack_18fc * param_11[10] +
                    local_18f8 * param_11[0xb]);
      local_1910 = fVar15 * *param_12 + fVar14 * param_12[3] + fVar13 * param_12[6];
      fStack_190c = fVar15 * param_12[1] + fVar14 * param_12[4] + fVar13 * param_12[7];
      local_1908 = fVar15 * param_12[2] + fVar14 * param_12[5] + fVar13 * param_12[8];
      local_1904 = (float)local_19a8 * fVar12 -
                   (local_1910 * param_12[9] + fStack_190c * param_12[10] +
                   local_1908 * param_12[0xb]);
      fVar12 = (float)param_1;
      local_1928 = *local_1960 - fVar12;
      local_191c = local_1960[3] + fVar12;
      local_1924 = local_1960[1] - fVar12;
      fStack_1920 = local_1960[2] - fVar12;
      local_1940 = *local_1958 - fVar12;
      fStack_193c = local_1958[1] - fVar12;
      local_1938 = local_1958[2] - fVar12;
      fStack_1918 = local_1960[4] + fVar12;
      local_1914 = local_1960[5] + fVar12;
      fStack_1934 = local_1958[3] + fVar12;
      local_1930 = local_1958[4] + fVar12;
      local_192c = local_1958[5] + fVar12;
      uVar7 = *(undefined8 *)(param_5 + 0x28);
      uVar1 = *(undefined8 *)(param_5 + 0x18);
      uVar2 = *(undefined8 *)(param_5 + 0x20);
      *(float **)(lVar10 + -0x18) = &local_1940;
      *(long *)(lVar10 + -0x10) = lVar4;
      *(float **)(lVar10 + -0x20) = param_11;
      FUN_00227810(param_1,&local_ce8,puVar9,local_b4,uVar1,uVar2,uVar7,param_7,&local_1910);
      pfVar8 = local_19a0;
      uVar1 = *(undefined8 *)(param_6 + 0x18);
      uVar2 = *(undefined8 *)(param_6 + 0x20);
      uVar7 = *(undefined8 *)(param_6 + 0x28);
      *(float **)(lVar10 + -0x18) = &local_1928;
      *(long *)(lVar10 + -0x10) = lVar5;
      *(float **)(lVar10 + -0x20) = param_12;
      FUN_00227810(param_1,local_18f0,pfVar8,local_cc,uVar1,uVar2,uVar7,param_8,&local_1900);
      local_1998 = (uint *)(ulong)(uint)local_ce8;
      if (local_ce8 != 0.0) {
        local_1958 = (float *)(ulong)local_18f0[0];
        local_1990 = (undefined1 *)0x0;
        local_19a0 = afStack_18e4;
        do {
          if ((int)local_1958 != 0) {
            uVar6 = 0;
            local_1960 = local_ce4 + (long)local_1990 * 3 + 1;
            lVar4 = (long)local_1990 * 3;
            lVar10 = (long)local_1990 * 3;
            pfVar8 = local_19a0;
            do {
              local_1950 = *local_1960 * *pfVar8 - local_ce4[lVar10 + 2] * pfVar8[-1];
              local_194c = local_ce4[lVar10 + 2] * pfVar8[-2] - *pfVar8 * local_ce4[lVar4];
              local_1948 = pfVar8[-1] * local_ce4[lVar4] - *local_1960 * pfVar8[-2];
              fVar14 = fabsf(local_1950);
              fVar13 = DAT_01d4c1cc;
              if (((DAT_01d4c1cc < fVar14) || (fVar14 = fabsf(local_194c), fVar13 < fVar14)) ||
                 (fVar14 = fabsf(local_1948), fVar13 < fVar14)) {
                fVar13 = local_1950 * local_1950 + local_194c * local_194c + local_1948 * local_1948
                ;
                fVar15 = 0.0;
                fVar16 = 0.0;
                fVar14 = 0.0;
                if (0.0 < fVar13) {
                  fVar14 = sqrtf(fVar13);
                  fVar14 = 1.0 / fVar14;
                  fVar15 = local_1950 * fVar14;
                  fVar16 = fVar14 * local_194c;
                  fVar14 = fVar14 * local_1948;
                }
                fVar13 = fVar15 * *param_7 + fVar16 * param_7[1] + fVar14 * param_7[2];
                fVar17 = fVar15 * param_7[3] + fVar16 * param_7[4] + fVar14 * param_7[5];
                fVar19 = fVar15 * param_7[6] + fVar16 * param_7[7] + fVar14 * param_7[8];
                fVar20 = fVar15 * *param_8 + fVar16 * param_8[1] + fVar14 * param_8[2];
                fVar21 = fVar15 * param_8[3] + fVar16 * param_8[4] + fVar14 * param_8[5];
                fVar18 = (-(param_13[1] * fVar16) - *param_13 * fVar15) - fVar14 * param_13[2];
                fVar22 = fVar15 * param_8[6] + fVar16 * param_8[7] + fVar14 * param_8[8];
                fVar13 = fVar13 * (float)(*(uint *)(param_5 + 0x44) | (uint)fVar13 & 0x80000000) +
                         fVar17 * (float)(*(uint *)(param_5 + 0x48) | (uint)fVar17 & 0x80000000) +
                         fVar19 * (float)(*(uint *)(param_5 + 0x4c) | (uint)fVar19 & 0x80000000);
                fVar17 = fVar20 * (float)(*(uint *)(param_6 + 0x44) | (uint)fVar20 & 0x80000000) +
                         fVar21 * (float)(*(uint *)(param_6 + 0x48) | (uint)fVar21 & 0x80000000) +
                         fVar22 * (float)(*(uint *)(param_6 + 0x4c) | (uint)fVar22 & 0x80000000);
                if (fVar13 <= *(float *)(param_5 + 0x40)) {
                  fVar13 = *(float *)(param_5 + 0x40);
                }
                if (fVar17 <= *(float *)(param_6 + 0x40)) {
                  fVar17 = *(float *)(param_6 + 0x40);
                }
                fVar19 = fVar18 + fVar13 + fVar17;
                fVar18 = (fVar13 + fVar17) - fVar18;
                if (fVar18 <= fVar19) {
                  fVar19 = fVar18;
                }
                if (fVar19 <= fVar11) {
                  local_1950 = fVar15;
                  local_194c = fVar16;
                  local_1948 = fVar14;
                  (**(code **)(param_5 + 0x58))
                            (param_5,&local_1950,param_7,local_1970,&local_ac,&local_b0);
                  fVar14 = local_ac;
                  fVar13 = local_b0;
                  (**(code **)(param_6 + 0x58))
                            (param_6,&local_1950,param_8,local_1968,&local_a4,&local_a8);
                  if (fVar13 + fVar12 < local_a4) {
                    return 0;
                  }
                  if (local_a8 + fVar12 < fVar14) {
                    return 0;
                  }
                  fVar13 = fVar13 - local_a4;
                  fVar14 = local_a8 - fVar14;
                  if (fVar14 <= fVar13) {
                    fVar13 = fVar14;
                  }
                  if (fVar13 < fVar11) {
                    local_1974 = local_1950;
                    local_1978 = local_194c;
                    local_197c = local_1948;
                    *local_1988 = 2;
                    fVar11 = fVar13;
                  }
                }
              }
              uVar6 = uVar6 + 1;
              pfVar8 = pfVar8 + 3;
            } while (uVar6 < local_1958);
          }
          local_1990 = (undefined1 *)((long)local_1990 + 1);
        } while (local_1990 < local_1998);
      }
      *param_16 = fVar11;
      *param_17 = local_1974;
      param_17[1] = local_1978;
      param_17[2] = local_197c;
      return 1;
    }
  }
  return 0;
}


