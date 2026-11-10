/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021e4c0; name: FUN_0021e4c0
 */


undefined8
FUN_0021e4c0(long param_1,long param_2,float *param_3,float *param_4,float *param_5,
            undefined8 param_6,long param_7)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
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
  float local_164;
  float local_160;
  float local_15c;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [4];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0 [4];
  
  fVar15 = param_3[3];
  fVar31 = fVar15 + fVar15;
  fVar19 = param_4[3];
  fVar30 = fVar19 + fVar19;
  fVar17 = *param_3;
  fVar27 = fVar17 + fVar17;
  fVar21 = *param_4;
  fVar28 = fVar21 + fVar21;
  fVar32 = *(float *)(param_1 + 8);
  fVar29 = *(float *)(param_2 + 8);
  fVar26 = param_3[2] * fVar31 + fVar27 * param_3[1];
  fVar13 = fVar27 * param_3[2] - fVar31 * param_3[1];
  fVar15 = fVar17 * fVar27 + fVar15 * fVar31 + -1.0;
  fVar27 = fVar29 * (param_4[2] * fVar30 + fVar28 * param_4[1]);
  local_f4 = fVar32 * fVar26;
  local_cc = fVar29 * (fVar28 * param_4[2] - fVar30 * param_4[1]);
  local_104[3] = fVar32 * fVar15;
  local_f0 = fVar32 * fVar13;
  local_e8 = -(fVar32 * fVar26);
  local_ec = -(fVar32 * fVar15);
  fVar29 = fVar29 * (fVar21 * fVar28 + fVar19 * fVar30 + -1.0);
  local_164 = local_f4 * -2.0;
  local_15c = local_104[3] * -2.0;
  local_160 = local_f0 * -2.0;
  fStack_dc = fVar27 + (param_4[5] - param_3[5]);
  local_e0 = fVar29 + (param_4[4] - param_3[4]);
  local_d0 = (param_4[5] - param_3[5]) - fVar27;
  local_d4 = (param_4[4] - param_3[4]) - fVar29;
  fVar29 = fVar29 * -2.0;
  fVar27 = fVar27 * -2.0;
  fVar19 = local_cc * -2.0;
  local_11c = local_e8 - local_f4;
  local_120 = local_ec - local_104[3];
  local_e4 = -(fVar32 * fVar13);
  local_d8 = local_cc + (param_4[6] - param_3[6]);
  local_cc = (param_4[6] - param_3[6]) - local_cc;
  local_b0[1] = local_d0 - fStack_dc;
  local_b0[0] = local_d4 - local_e0;
  local_118 = local_e4 - local_f0;
  local_b0[2] = local_cc - local_d8;
                    /* try { // try from 0021e648 to 0021e65f has its CatchHandler @ 0021ec88 */
  local_c8 = local_15c;
  fStack_c4 = local_164;
  local_c0 = local_160;
  local_bc = fVar29;
  local_b8 = fVar27;
  local_b4 = fVar19;
  fVar13 = (float)FUN_00234f30(local_104 + 3,&local_120,&local_e0,local_b0,local_104 + 2,
                               local_104 + 1);
  fVar15 = *(float *)(param_1 + 4) + *(float *)(param_2 + 4);
  fVar17 = (fVar15 + *param_5) * (fVar15 + *param_5);
  if (fVar17 <= fVar13) {
    return 0;
  }
                    /* try { // try from 0021e6a4 to 0021e737 has its CatchHandler @ 0021ec8c */
  fVar21 = sqrtf(local_15c * local_15c + local_164 * local_164 + local_160 * local_160);
  local_b0[0] = fVar21;
  fVar26 = sqrtf(fVar29 * fVar29 + fVar27 * fVar27 + fVar19 * fVar19);
  if (fVar21 != 0.0) {
    fVar28 = 1.0 / fVar21;
    local_15c = fVar28 * local_15c;
    local_164 = fVar28 * local_164;
    local_160 = fVar28 * local_160;
    local_c8 = local_15c;
    fStack_c4 = local_164;
    local_c0 = local_160;
  }
  if (fVar26 != 0.0) {
    fVar28 = 1.0 / fVar26;
    fVar29 = fVar28 * fVar29;
    fVar27 = fVar28 * fVar27;
    fVar19 = fVar28 * fVar19;
    local_bc = fVar29;
    local_b8 = fVar27;
    local_b4 = fVar19;
  }
  local_b0[1] = fVar26;
  fVar29 = fabsf(local_15c * fVar29 + local_164 * fVar27 + local_160 * fVar19);
  fVar19 = DAT_01d4c1cc;
  if (DAT_01d4bc24 < fVar29) {
    pfVar9 = &local_10c;
    fVar28 = fVar21 * DAT_01d4c6ac;
    pfVar7 = &local_118;
    iVar5 = 0;
    pfVar10 = (float *)((ulong)(local_104 + 3) | 4);
    pfVar6 = &local_cc;
    local_104[0] = fVar26 * DAT_01d4c6ac;
    uVar8 = 0;
    pfVar11 = &local_b4;
    fVar29 = local_160;
    fVar27 = local_15c;
    fVar26 = local_164;
    local_108 = fVar28;
    while( true ) {
      fVar30 = pfVar6[-5];
      fVar31 = pfVar6[-4];
      fVar14 = pfVar10[-1];
      fVar16 = *pfVar10;
      fVar32 = pfVar6[-3];
      *pfVar7 = fVar32;
      fVar18 = pfVar10[1];
      fVar32 = (fVar30 - fVar14) * fVar27 + (fVar31 - fVar16) * fVar26 + (fVar32 - fVar18) * fVar29;
      lVar2 = param_1;
      if (uVar8 != 1) {
        lVar2 = param_2;
      }
      pfVar7[-2] = fVar30;
      pfVar7[-1] = fVar31;
      if ((-fVar28 <= fVar32) && (fVar32 <= fVar28 + local_b0[uVar8])) {
        pfVar9[-2] = fVar14 + fVar27 * fVar32;
        fVar30 = local_114;
        pfVar9[-1] = fVar16 + fVar26 * fVar32;
        fVar31 = local_110;
        *pfVar9 = fVar18 + fVar29 * fVar32;
        fVar32 = local_10c;
        fVar24 = local_114 - local_120;
        fVar23 = local_110 - local_11c;
        fVar25 = local_10c - local_118;
        fVar12 = fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25;
        bVar4 = false;
        if ((fVar19 < fVar12) && (bVar4 = false, !NAN(fVar12) && !NAN(fVar17))) {
          bVar4 = fVar12 < fVar17;
        }
        if (bVar4) {
                    /* try { // try from 0021e8a8 to 0021ea27 has its CatchHandler @ 0021ec90 */
          fVar14 = sqrtf(fVar12);
          uVar3 = *(uint *)(param_7 + 0x1000);
          if (uVar3 < 0x40) {
            fVar16 = 1.0 / fVar14;
            pfVar1 = (float *)(param_7 + (ulong)uVar3 * 0x40);
            fVar20 = param_3[4];
            fVar22 = param_3[5];
            fVar12 = param_3[6];
            fVar18 = *(float *)(lVar2 + 4);
            *(uint *)(param_7 + 0x1000) = uVar3 + 1;
            *pfVar1 = fVar24 * fVar16;
            pfVar1[1] = fVar23 * fVar16;
            pfVar1[6] = fVar12 + (fVar32 - fVar25 * fVar16 * fVar18);
            pfVar1[4] = fVar20 + (fVar30 - fVar24 * fVar16 * fVar18);
            pfVar1[5] = fVar22 + (fVar31 - fVar23 * fVar16 * fVar18);
            pfVar1[0xd] = -NAN;
            pfVar1[2] = fVar25 * fVar16;
            pfVar1[3] = fVar14 - fVar15;
          }
          fVar14 = pfVar10[-1];
          fVar16 = *pfVar10;
          fVar18 = pfVar10[1];
          iVar5 = iVar5 + 1;
        }
      }
      fVar30 = pfVar6[-1];
      fVar31 = *pfVar6;
      fVar32 = (pfVar6[-2] - fVar14) * fVar27 + (fVar30 - fVar16) * fVar26 +
               (fVar31 - fVar18) * fVar29;
      pfVar7[-2] = pfVar6[-2];
      pfVar7[-1] = fVar30;
      *pfVar7 = fVar31;
      if ((-fVar28 <= fVar32) && (fVar32 <= fVar28 + local_b0[uVar8])) {
        pfVar9[-2] = fVar14 + fVar27 * fVar32;
        fVar27 = local_114;
        pfVar9[-1] = fVar16 + fVar26 * fVar32;
        fVar26 = local_110;
        *pfVar9 = fVar18 + fVar29 * fVar32;
        fVar29 = local_10c;
        fVar30 = local_114 - local_120;
        fVar31 = local_110 - local_11c;
        fVar32 = local_10c - local_118;
        fVar28 = fVar30 * fVar30 + fVar31 * fVar31 + fVar32 * fVar32;
        bVar4 = false;
        if ((fVar19 < fVar28) && (bVar4 = false, !NAN(fVar28) && !NAN(fVar17))) {
          bVar4 = fVar28 < fVar17;
        }
        if (bVar4) {
          fVar28 = sqrtf(fVar28);
          uVar3 = *(uint *)(param_7 + 0x1000);
          if (uVar3 < 0x40) {
            fVar14 = 1.0 / fVar28;
            fVar16 = *(float *)(lVar2 + 4);
            fVar12 = param_3[4];
            fVar23 = param_3[5];
            fVar18 = param_3[6];
            pfVar1 = (float *)(param_7 + (ulong)uVar3 * 0x40);
            *(uint *)(param_7 + 0x1000) = uVar3 + 1;
            *pfVar1 = fVar30 * fVar14;
            pfVar1[1] = fVar31 * fVar14;
            pfVar1[4] = fVar12 + (fVar27 - fVar30 * fVar14 * fVar16);
            pfVar1[5] = fVar23 + (fVar26 - fVar31 * fVar14 * fVar16);
            pfVar1[6] = fVar18 + (fVar29 - fVar32 * fVar14 * fVar16);
            pfVar1[0xd] = -NAN;
            pfVar1[2] = fVar32 * fVar14;
            pfVar1[3] = fVar28 - fVar15;
          }
          iVar5 = iVar5 + 1;
        }
      }
      if (1 < uVar8 + 1) break;
      fVar27 = pfVar11[-2];
      fVar26 = pfVar11[-1];
      fVar28 = local_104[uVar8];
      fVar29 = *pfVar11;
      pfVar10 = pfVar10 + 6;
      pfVar6 = pfVar6 + -6;
      pfVar7 = pfVar7 + 3;
      pfVar9 = pfVar9 + -3;
      uVar8 = uVar8 + 1;
      pfVar11 = pfVar11 + 3;
    }
    if (iVar5 != 0) {
      return 1;
    }
  }
  fVar19 = local_104[3] + local_104[2] * (local_ec - local_104[3]);
  fVar29 = local_f4 + local_104[2] * (local_e8 - local_f4);
  fVar27 = local_f0 + local_104[2] * (local_e4 - local_f0);
  fVar26 = fVar19 - (local_e0 + local_104[1] * (local_d4 - local_e0));
  fVar28 = fVar29 - (fStack_dc + local_104[1] * (local_d0 - fStack_dc));
  fVar30 = fVar27 - (local_d8 + local_104[1] * (local_cc - local_d8));
  fVar17 = fVar26 * fVar26 + fVar28 * fVar28 + fVar30 * fVar30;
  if (DAT_01d4c1cc <= fVar17) {
                    /* try { // try from 0021eba4 to 0021eba7 has its CatchHandler @ 0021ec80 */
    local_160 = sqrtf(fVar17);
    local_160 = 1.0 / local_160;
    local_15c = fVar26 * local_160;
    local_164 = fVar28 * local_160;
    local_160 = fVar30 * local_160;
  }
  else if (fVar21 <= DAT_01d4c1cc) {
    local_15c = 1.0;
    local_164 = 0.0;
    local_160 = 0.0;
  }
  fVar21 = param_3[4];
  fVar26 = param_3[5];
  fVar28 = param_3[6];
  fVar17 = *(float *)(param_1 + 4);
                    /* try { // try from 0021ebd8 to 0021ebdf has its CatchHandler @ 0021ec84 */
  fVar13 = sqrtf(fVar13);
  uVar3 = *(uint *)(param_7 + 0x1000);
  if (uVar3 < 0x40) {
    pfVar9 = (float *)(param_7 + (ulong)uVar3 * 0x40);
    *(uint *)(param_7 + 0x1000) = uVar3 + 1;
    *pfVar9 = local_15c;
    pfVar9[1] = local_164;
    pfVar9[4] = (fVar19 + fVar21) - local_15c * fVar17;
    pfVar9[5] = (fVar29 + fVar26) - local_164 * fVar17;
    pfVar9[6] = (fVar27 + fVar28) - local_160 * fVar17;
    pfVar9[0xd] = -NAN;
    pfVar9[2] = local_160;
    pfVar9[3] = fVar13 - fVar15;
  }
  return 1;
}


