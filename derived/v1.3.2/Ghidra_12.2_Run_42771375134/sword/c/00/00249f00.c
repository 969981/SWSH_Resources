/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00249f00; name: FUN_00249f00
 */


undefined8
FUN_00249f00(float param_1,float param_2,undefined8 param_3,long param_4,float *param_5,
            float *param_6,uint *param_7,long param_8,float *param_9,byte param_10,byte param_11,
            byte param_12,byte param_13)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
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
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float fStack_128;
  uint local_124;
  uint local_108;
  undefined1 auStack_c4 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  
  fVar15 = DAT_01d4c3e0;
  fVar13 = DAT_01d4bd24;
  if ((uint)param_3 == 0) {
    return param_3;
  }
  if (param_7 == (uint *)0x0) {
    local_108 = 0;
  }
  else {
    local_108 = *param_7;
  }
  local_138 = 0.0;
  fStack_134 = 0.0;
  fVar17 = *param_5;
  fVar18 = param_5[1];
  fVar19 = param_5[2];
  fVar10 = *param_6;
  fVar33 = param_6[1];
  fVar14 = param_6[2];
  fVar34 = param_1 + DAT_01d4bd94;
  fVar20 = fVar17 * fVar10 + fVar18 * fVar33 + fVar19 * fVar14;
  local_124 = 0xffffffff;
  fVar21 = fVar20 - fVar34;
  local_140 = 2.0;
  uVar7 = 0;
  local_12c = 0.0;
  fStack_128 = 0.0;
  local_130 = 0.0;
  fVar16 = param_2;
  do {
    uVar1 = 0;
    if (local_108 != uVar7) {
      uVar1 = uVar7;
    }
    uVar8 = local_108;
    if (uVar7 != 0) {
      uVar8 = uVar1;
    }
    pfVar9 = (float *)(param_4 + (ulong)uVar8 * 0x24);
    fVar11 = *pfVar9;
    fVar22 = pfVar9[3];
    fVar24 = pfVar9[1];
    fVar12 = pfVar9[4];
    fVar26 = pfVar9[2];
    fVar32 = pfVar9[5];
    fVar30 = pfVar9[6];
    fVar31 = pfVar9[7];
    fVar27 = pfVar9[8];
    fVar28 = (fVar11 + fVar22 + fVar30) * fVar13;
    fVar29 = (fVar24 + fVar12 + fVar31) * fVar13;
    fVar25 = (fVar26 + fVar32 + fVar27) * fVar13;
    fVar23 = (fVar28 - fVar17) * fVar10 + (fVar29 - fVar18) * fVar33 + (fVar25 - fVar19) * fVar14;
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    if (fVar16 <= fVar23) {
      fVar23 = fVar16;
    }
    fVar10 = (fVar28 - fVar17) - fVar10 * fVar23;
    fVar17 = (fVar29 - fVar18) - fVar33 * fVar23;
    fVar14 = (fVar25 - fVar19) - fVar14 * fVar23;
    fVar10 = sqrtf(fVar14 * fVar14 + fVar10 * fVar10 + fVar17 * fVar17);
    fVar10 = (fVar10 - param_1) + fVar15;
    fVar14 = fVar10 * fVar10;
    fVar17 = (fVar28 - fVar11) * (fVar28 - fVar11) + (fVar29 - fVar24) * (fVar29 - fVar24) +
             (fVar25 - fVar26) * (fVar25 - fVar26);
    bVar2 = false;
    bVar4 = false;
    if (0.0 <= fVar10) {
      bVar2 = false;
      bVar4 = true;
      if (!NAN(fVar14) && !NAN(fVar17)) {
        bVar2 = fVar14 == fVar17;
        bVar4 = fVar17 <= fVar14;
      }
    }
    fVar10 = (fVar28 - fVar22) * (fVar28 - fVar22) + (fVar29 - fVar12) * (fVar29 - fVar12) +
             (fVar25 - fVar32) * (fVar25 - fVar32);
    bVar3 = false;
    bVar5 = false;
    if (bVar4 && !bVar2) {
      bVar3 = false;
      bVar5 = true;
      if (!NAN(fVar14) && !NAN(fVar10)) {
        bVar3 = fVar14 == fVar10;
        bVar5 = fVar10 <= fVar14;
      }
    }
    fVar10 = (fVar28 - fVar30) * (fVar28 - fVar30) + (fVar29 - fVar31) * (fVar29 - fVar31) +
             (fVar25 - fVar27) * (fVar25 - fVar27);
    bVar2 = false;
    bVar4 = false;
    if (bVar5 && !bVar3) {
      bVar2 = false;
      bVar4 = true;
      if (!NAN(fVar14) && !NAN(fVar10)) {
        bVar2 = fVar14 == fVar10;
        bVar4 = fVar10 <= fVar14;
      }
    }
    if (!bVar4 || bVar2) {
      fVar14 = *param_6;
      fVar17 = param_6[1];
      fVar18 = param_6[2];
      fVar19 = fVar11 * fVar14 + fVar24 * fVar17 + fVar26 * fVar18;
      fVar33 = fVar22 * fVar14 + fVar12 * fVar17 + fVar32 * fVar18;
      fVar23 = fVar30 * fVar14 + fVar31 * fVar17 + fVar27 * fVar18;
      fVar10 = fVar19;
      if (fVar33 <= fVar19) {
        fVar10 = fVar33;
      }
      if (fVar23 <= fVar10) {
        fVar10 = fVar23;
      }
      if ((fVar10 <= fVar34 + fVar20 + fVar16) &&
         (((fVar21 <= fVar23 || (fVar21 <= fVar19)) || (fVar21 <= fVar33)))) {
        fVar10 = pfVar9[3] - *pfVar9;
        fVar12 = pfVar9[1];
        fVar22 = pfVar9[2];
        fVar19 = pfVar9[6] - *pfVar9;
        fVar33 = pfVar9[4] - fVar12;
        fVar11 = pfVar9[5] - fVar22;
        fVar12 = pfVar9[7] - fVar12;
        fVar22 = pfVar9[8] - fVar22;
        fVar23 = fVar33 * fVar22 - fVar11 * fVar12;
        fVar11 = fVar11 * fVar19 - fVar10 * fVar22;
        fVar12 = fVar10 * fVar12 - fVar33 * fVar19;
        local_b0 = fVar23;
        local_ac = fVar11;
        local_a8 = fVar12;
        if (((((param_10 ^ 1) & (param_11 ^ 1) & 1) == 0) ||
            (fVar23 * fVar14 + fVar11 * fVar17 + fVar12 * fVar18 <= 0.0)) &&
           (fVar10 = sqrtf(fVar12 * fVar12 + fVar23 * fVar23 + fVar11 * fVar11), fVar10 != 0.0)) {
          fVar10 = 1.0 / fVar10;
          fVar23 = fVar23 * fVar10;
          fVar11 = fVar11 * fVar10;
          fVar12 = fVar12 * fVar10;
          local_b0 = fVar23;
          local_ac = fVar11;
          local_a8 = fVar12;
          uVar6 = FUN_002495a0(param_1,pfVar9,&local_b0,param_5,param_6,&local_c0,auStack_c4,
                               param_13 & 1);
          if (((uVar6 & 1) != 0) &&
             (fVar10 = fabsf(fVar23 * *param_6 + fVar11 * param_6[1] + fVar12 * param_6[2]),
             local_c0 <= param_2)) {
            fVar14 = local_c0;
            if (local_c0 <= fVar16) {
              fVar14 = fVar16;
            }
            if (fVar14 <= 1.0) {
              fVar14 = 1.0;
            }
            fVar10 = -fVar10;
            if (fVar16 - fVar14 * DAT_01d4c6ac <= local_c0) {
              fVar14 = fVar16 + fVar14 * DAT_01d4c6ac;
              bVar2 = false;
              bVar4 = true;
              bVar3 = false;
              if (fVar10 < local_140) {
                bVar2 = false;
                bVar4 = false;
                bVar3 = true;
                if (!NAN(fVar14) && !NAN(local_c0)) {
                  bVar2 = fVar14 < local_c0;
                  bVar4 = fVar14 == local_c0;
                  bVar3 = false;
                }
              }
              if (bVar4 || bVar2 != bVar3) {
                if ((local_c0 != 0.0) && (local_140 != fVar10 || fVar16 <= local_c0))
                goto joined_r0x0024a3a4;
              }
            }
            if (local_c0 == 0.0) {
              fVar13 = param_6[1];
              fVar15 = param_6[2];
              *param_9 = -*param_6;
              param_9[1] = -fVar13;
              param_9[2] = -fVar15;
              *(uint *)(param_8 + 0x10) = uVar8;
              *(undefined2 *)(param_8 + 0x14) = 0x406;
              fVar13 = *param_6;
              fVar15 = param_6[1];
              fVar16 = param_6[2];
              *(undefined4 *)(param_8 + 0x30) = 0;
              *(float *)(param_8 + 0x24) = -fVar13;
              *(float *)(param_8 + 0x28) = -fVar15;
              *(float *)(param_8 + 0x2c) = -fVar16;
              return 1;
            }
            fVar16 = local_c0;
            local_138 = fVar12;
            fStack_134 = fVar11;
            local_140 = fVar10;
            local_130 = fVar23;
            local_12c = fVar11;
            fStack_128 = fVar12;
            local_124 = uVar8;
            if ((param_12 & 1) != 0) goto LAB_0024a458;
          }
        }
      }
    }
joined_r0x0024a3a4:
    uVar8 = local_124;
    fVar12 = fStack_128;
    fVar11 = local_12c;
    fVar23 = local_130;
    if ((uint)param_3 <= uVar7 + 1) {
LAB_0024a458:
      if (uVar8 == 0xffffffff) {
        return 0;
      }
      FUN_0024a770(fVar16,&local_b0,&local_c0,param_5,param_6,param_4 + (ulong)uVar8 * 0x24);
      if ((((param_11 ^ 1 | param_10) & 1) == 0) &&
         (0.0 < *param_6 * fVar23 + fVar11 * param_6[1] + fVar12 * param_6[2])) {
        local_bc = -local_bc;
        local_c0 = -local_c0;
        local_b8 = -local_b8;
      }
      *(float *)(param_8 + 0x18) = local_b0;
      *(float *)(param_8 + 0x1c) = local_ac;
      *(float *)(param_8 + 0x20) = local_a8;
      *(float *)(param_8 + 0x24) = local_c0;
      *(float *)(param_8 + 0x28) = local_bc;
      *(undefined2 *)(param_8 + 0x14) = 7;
      *(float *)(param_8 + 0x30) = fVar16;
      *(float *)(param_8 + 0x2c) = local_b8;
      *(uint *)(param_8 + 0x10) = uVar8;
      param_9[1] = fStack_134;
      *param_9 = fVar23;
      param_9[2] = local_138;
      return 1;
    }
    uVar7 = uVar7 + 1;
    fVar17 = *param_5;
    fVar18 = param_5[1];
    fVar19 = param_5[2];
    fVar10 = *param_6;
    fVar33 = param_6[1];
    fVar14 = param_6[2];
    local_130 = fVar23;
    local_12c = fVar11;
    fStack_128 = fVar12;
    local_124 = uVar8;
  } while( true );
}


