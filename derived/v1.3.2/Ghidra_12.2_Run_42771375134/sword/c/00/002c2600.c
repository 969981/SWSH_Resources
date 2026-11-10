/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002c2600; name: FUN_002c2600
 */


undefined8
FUN_002c2600(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,uint param_8,ushort *param_9)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
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
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  
  fVar24 = param_2[6] + param_3[6];
  if ((param_8 >> 4 & 1) == 0) {
    fVar8 = *param_2;
    fVar10 = param_2[3];
    if (((fVar8 == fVar10) && (param_2[1] == param_2[4])) && (param_2[2] == param_2[5])) {
      fVar20 = param_3[3] - *param_3;
      fVar12 = param_3[5] - param_3[2];
      fVar18 = param_3[4] - param_3[1];
      fVar8 = fVar8 - *param_3;
      fVar10 = param_2[1] - param_3[1];
      fVar9 = param_2[2] - param_3[2];
      fVar15 = fVar20 * fVar8 + fVar18 * fVar10 + fVar12 * fVar9;
      if (0.0 < fVar15) {
        fVar22 = fVar20 * fVar20 + fVar18 * fVar18 + fVar12 * fVar12;
        if (fVar15 < fVar22) {
          fVar15 = fVar15 / fVar22;
          fVar20 = fVar20 * fVar15;
          fVar18 = fVar18 * fVar15;
          fVar12 = fVar12 * fVar15;
        }
        fVar8 = fVar8 - fVar20;
        fVar10 = fVar10 - fVar18;
        fVar9 = fVar9 - fVar12;
      }
      fVar8 = fVar8 * fVar8 + fVar10 * fVar10;
LAB_002c2870:
      if (fVar8 + fVar9 * fVar9 < fVar24 * fVar24) {
LAB_002c282c:
        *param_5 = 0.0;
        fVar24 = param_4[1];
        fVar8 = param_4[2];
        *param_7 = -*param_4;
        param_7[1] = -fVar24;
        param_7[2] = -fVar8;
        *param_9 = 6;
        return 1;
      }
    }
    else {
      fVar12 = *param_3;
      if (fVar12 == param_3[3]) {
        fVar15 = param_3[1];
        fVar9 = param_3[4];
        if ((fVar15 == fVar9) && (param_3[2] == param_3[5])) {
          fVar10 = fVar10 - fVar8;
          fVar18 = param_2[5] - param_2[2];
          fVar20 = param_2[4] - param_2[1];
          fVar12 = fVar12 - fVar8;
          fVar15 = fVar15 - param_2[1];
          fVar9 = param_3[2] - param_2[2];
          fVar8 = fVar10 * fVar12 + fVar20 * fVar15 + fVar18 * fVar9;
          if (0.0 < fVar8) {
            fVar22 = fVar10 * fVar10 + fVar20 * fVar20 + fVar18 * fVar18;
            if (fVar22 <= fVar8) {
              fVar12 = fVar12 - fVar10;
              fVar15 = fVar15 - fVar20;
              fVar9 = fVar9 - fVar18;
            }
            else {
              fVar8 = fVar8 / fVar22;
              fVar12 = fVar12 - fVar10 * fVar8;
              fVar15 = fVar15 - fVar20 * fVar8;
              fVar9 = fVar9 - fVar18 * fVar8;
            }
          }
          fVar8 = fVar12 * fVar12 + fVar15 * fVar15;
          goto LAB_002c2870;
        }
      }
      else {
        fVar9 = param_3[4];
        fVar15 = param_3[1];
      }
      local_120 = fVar10 - fVar8;
      local_118 = param_2[5] - param_2[2];
      fStack_11c = param_2[4] - param_2[1];
      local_b0 = param_3[3] - fVar12;
      local_ac = fVar9 - fVar15;
      local_a8 = param_3[5] - param_3[2];
      fVar8 = (float)FUN_00234f30(param_2,&local_120,param_3,&local_b0,0,0);
      if (fVar8 < fVar24 * fVar24) goto LAB_002c282c;
    }
  }
  fVar16 = param_3[3] - *param_3;
  fVar10 = param_3[5] - param_3[2];
  fVar20 = param_3[4] - param_3[1];
  fVar8 = fVar16 * 0.5;
  fVar23 = fVar10 * 0.5;
  fVar30 = fVar20 * 0.5;
  fVar13 = *param_2;
  fVar9 = param_2[1];
  fVar18 = param_2[2];
  fVar21 = param_2[3] - fVar8;
  fVar27 = param_2[5] - fVar23;
  fVar17 = fVar30 + fVar9;
  fVar11 = fVar23 + param_2[5];
  fVar26 = param_2[4] - fVar30;
  fVar14 = fVar8 + fVar13;
  fVar19 = fVar23 + fVar18;
  fVar12 = fVar8 + param_2[3];
  fVar22 = fVar30 + param_2[4];
  fVar25 = (fVar21 - fVar14) * (fVar11 - fVar19) - (fVar12 - fVar14) * (fVar27 - fVar19);
  fVar29 = (fVar22 - fVar17) * (fVar27 - fVar19) - (fVar26 - fVar17) * (fVar11 - fVar19);
  fVar28 = (fVar12 - fVar14) * (fVar26 - fVar17) - (fVar21 - fVar14) * (fVar22 - fVar17);
                    /* try { // try from 002c2950 to 002c2953 has its CatchHandler @ 002c301c */
  fVar15 = sqrtf(fVar28 * fVar28 + fVar29 * fVar29 + fVar25 * fVar25);
  if (0.0 < fVar15) {
    fVar15 = 1.0 / fVar15;
    fVar29 = fVar15 * fVar29;
    fVar25 = fVar15 * fVar25;
    fVar28 = fVar15 * fVar28;
  }
  fVar40 = fVar24 * fVar29;
  fVar38 = fVar24 * fVar25;
  fVar37 = fVar24 * fVar28;
  local_120 = fVar13 - fVar8;
  fVar9 = fVar9 - fVar30;
  fVar18 = fVar18 - fVar23;
  fVar15 = *param_4;
  fVar13 = param_4[1];
  fVar23 = param_4[2];
  if (0.0 <= fVar29 * fVar15 + fVar25 * fVar13 + fVar28 * fVar23) {
    fVar30 = local_120 - fVar40;
    fVar32 = fVar9 - fVar38;
    fVar33 = fVar18 - fVar37;
    fVar25 = fVar21 - fVar40;
    fVar28 = fVar26 - fVar38;
    fVar29 = fVar27 - fVar37;
    fVar31 = fVar12 - fVar40;
    fVar35 = fVar22 - fVar38;
    fVar36 = fVar11 - fVar37;
  }
  else {
    fVar31 = local_120 + fVar40;
    fVar35 = fVar9 + fVar38;
    fVar36 = fVar18 + fVar37;
    fVar25 = fVar21 + fVar40;
    fVar28 = fVar26 + fVar38;
    fVar29 = fVar27 + fVar37;
    fVar30 = fVar12 + fVar40;
    fVar32 = fVar22 + fVar38;
    fVar33 = fVar11 + fVar37;
  }
  fVar32 = fVar32 - fVar28;
  fVar37 = (*param_3 + param_3[3]) * 0.5;
  fVar40 = (param_3[2] + param_3[5]) * 0.5;
  fVar31 = fVar31 - fVar25;
  fVar30 = fVar30 - fVar25;
  fVar33 = fVar33 - fVar29;
  fVar38 = (param_3[1] + param_3[4]) * 0.5;
  fVar39 = fVar13 * fVar33 - fVar23 * fVar32;
  fVar35 = fVar35 - fVar28;
  fVar42 = fVar15 * fVar32 - fVar13 * fVar30;
  fVar41 = fVar23 * fVar30 - fVar15 * fVar33;
  fVar36 = fVar36 - fVar29;
  fVar34 = fVar36 * fVar42 + fVar31 * fVar39 + fVar35 * fVar41;
  if (DAT_01d4c050 <= fVar34) {
    fVar25 = fVar37 - fVar25;
    fVar28 = fVar38 - fVar28;
    fVar29 = fVar40 - fVar29;
    fVar8 = fVar41 * fVar28;
    fVar39 = fVar39 * fVar25 + fVar8 + fVar42 * fVar29;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (0.0 <= fVar39) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar39) && !NAN(fVar34)) {
        bVar2 = fVar39 < fVar34;
        bVar3 = fVar39 == fVar34;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      fVar39 = fVar36 * fVar28 - fVar35 * fVar29;
      fVar29 = fVar31 * fVar29 - fVar36 * fVar25;
      fVar25 = fVar35 * fVar25 - fVar31 * fVar28;
      fVar15 = fVar23 * fVar25 + fVar15 * fVar39 + fVar13 * fVar29;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if (0.0 <= fVar15) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar15) && !NAN(fVar34)) {
          bVar2 = fVar15 < fVar34;
          bVar3 = fVar15 == fVar34;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        fVar15 = (1.0 / fVar34) * (fVar33 * fVar25 + fVar30 * fVar39 + fVar32 * fVar29);
        bVar2 = false;
        if ((0.0 <= fVar15) && (bVar2 = false, !NAN(fVar15) && !NAN(param_1))) {
          bVar2 = fVar15 < param_1;
        }
        if (bVar2) goto LAB_002c2d28;
      }
    }
  }
  bVar2 = false;
  pfVar7 = &local_120;
  uVar6 = 1;
  fStack_11c = fVar9;
  local_118 = fVar18;
  local_114 = fVar21;
  local_110 = fVar26;
  fStack_10c = fVar27;
  local_108 = fVar24;
  fStack_104 = fVar21;
  local_100 = fVar26;
  fStack_fc = fVar27;
  local_f8 = fVar12;
  local_f4 = fVar22;
  local_f0 = fVar11;
  fStack_ec = fVar24;
  local_e8 = fVar12;
  fStack_e4 = fVar22;
  local_e0 = fVar11;
  fStack_dc = fVar14;
  local_d8 = fVar17;
  fStack_d4 = fVar19;
  local_d0 = fVar24;
  fStack_cc = local_120;
  local_c8 = fVar9;
  fStack_c4 = fVar18;
  local_c0 = fVar14;
  fStack_bc = fVar17;
  local_b8 = fVar19;
  fStack_b4 = fVar24;
  while( true ) {
    fVar22 = pfVar7[3] - *pfVar7;
    fVar26 = fVar26 - fVar9;
    fVar15 = fVar37 - *pfVar7;
    fVar9 = fVar38 - fVar9;
    fVar27 = fVar27 - fVar18;
    fVar18 = fVar40 - fVar18;
    fVar12 = fVar22 * fVar15 + fVar26 * fVar9 + fVar27 * fVar18;
    if (0.0 < fVar12) {
      fVar11 = fVar22 * fVar22 + fVar26 * fVar26 + fVar27 * fVar27;
      if (fVar11 <= fVar12) {
        fVar15 = fVar15 - fVar22;
        fVar9 = fVar9 - fVar26;
        fVar18 = fVar18 - fVar27;
      }
      else {
        fVar12 = fVar12 / fVar11;
        fVar15 = fVar15 - fVar22 * fVar12;
        fVar9 = fVar9 - fVar26 * fVar12;
        fVar18 = fVar18 - fVar27 * fVar12;
      }
    }
                    /* try { // try from 002c2c3c to 002c2ca7 has its CatchHandler @ 002c3020 */
    fVar12 = sqrtf(fVar15 * fVar15 + fVar9 * fVar9 + fVar18 * fVar18);
    fVar12 = fVar12 - fVar24;
    if (fVar12 <= 0.0) {
      bVar1 = 1;
      fVar8 = 0.0;
    }
    else {
      fVar15 = fVar12 + -10.0;
      if (fVar12 <= 10.0) {
        fVar15 = 0.0;
      }
      local_b0 = fVar37 + fVar15 * *param_4;
      local_ac = fVar38 + fVar15 * param_4[1];
      local_a8 = fVar40 + fVar15 * param_4[2];
      iVar5 = FUN_0024cb60(fVar24,&local_b0,param_4,pfVar7,pfVar7 + 3,&local_130);
      if (iVar5 == 0) {
        bVar1 = 0;
      }
      else {
        fVar8 = local_130;
        if ((iVar5 != 1) && (local_12c <= local_130)) {
          fVar8 = local_12c;
        }
        fVar8 = fVar15 + fVar8;
        bVar1 = 1;
      }
    }
    bVar4 = param_1 <= fVar8;
    bVar3 = fVar8 == param_1;
    if (!(bool)((bVar4 && !bVar3) | bVar1 ^ 1 | fVar8 < 0.0)) {
      param_1 = fVar8;
    }
    bVar2 = (bool)(bVar2 | bVar1 & fVar8 >= 0.0 & (!bVar4 || bVar3));
    if (3 < uVar6) break;
    fVar27 = pfVar7[0xc];
    fVar24 = pfVar7[0xd];
    fVar26 = pfVar7[0xb];
    fVar9 = pfVar7[8];
    fVar18 = pfVar7[9];
    uVar6 = uVar6 + 1;
    pfVar7 = pfVar7 + 7;
  }
  fVar15 = param_1;
  if (!bVar2) {
    return 0;
  }
LAB_002c2d28:
  *param_9 = 4;
  if ((param_8 & 3) != 0) {
    fVar24 = (param_2[3] - fVar15 * *param_4) - (*param_2 - fVar15 * *param_4);
    fVar8 = (param_2[4] - fVar15 * param_4[1]) - (param_2[1] - fVar15 * param_4[1]);
    fVar12 = (param_2[5] - fVar15 * param_4[2]) - (param_2[2] - fVar15 * param_4[2]);
                    /* try { // try from 002c2d94 to 002c2db3 has its CatchHandler @ 002c3018 */
    local_120 = fVar16;
    fStack_11c = fVar20;
    local_118 = fVar10;
    FUN_002c3030(&local_b0,&local_130,param_3,&local_120);
    if ((param_8 >> 1 & 1) != 0) {
      fVar9 = local_b0 - local_130;
      fVar18 = local_ac - local_12c;
      fVar22 = local_a8 - local_128;
      *param_7 = fVar9;
      param_7[1] = fVar18;
      param_7[2] = fVar22;
                    /* try { // try from 002c2df8 to 002c2e7f has its CatchHandler @ 002c3014 */
      fVar9 = sqrtf(fVar9 * fVar9 + fVar18 * fVar18 + fVar22 * fVar22);
      if (0.0 < fVar9) {
        fVar18 = 1.0 / fVar9;
        *param_7 = fVar18 * *param_7;
        param_7[1] = fVar18 * param_7[1];
        param_7[2] = fVar18 * param_7[2];
      }
      fVar18 = DAT_01d4c6ac;
      if (fVar9 < DAT_01d4c6ac) {
        fVar9 = fVar12 * fVar20 - fVar8 * fVar10;
        fVar10 = fVar24 * fVar10 - fVar12 * fVar16;
        fVar24 = fVar8 * fVar16 - fVar24 * fVar20;
        *param_7 = fVar9;
        param_7[1] = fVar10;
        param_7[2] = fVar24;
        fVar24 = sqrtf(fVar24 * fVar24 + fVar9 * fVar9 + fVar10 * fVar10);
        if (0.0 < fVar24) {
          fVar8 = 1.0 / fVar24;
          *param_7 = fVar8 * *param_7;
          param_7[1] = fVar8 * param_7[1];
          param_7[2] = fVar8 * param_7[2];
        }
        if (fVar24 < fVar18) {
                    /* try { // try from 002c2ed0 to 002c2f27 has its CatchHandler @ 002c3010 */
          FUN_002c3030(&local_b0,&local_130,param_3,&local_120);
          fVar24 = local_b0 - local_130;
          fVar8 = local_ac - local_12c;
          *param_7 = fVar24;
          fVar10 = local_a8 - local_128;
          param_7[1] = fVar8;
          param_7[2] = fVar10;
          fVar24 = sqrtf(fVar24 * fVar24 + fVar8 * fVar8 + fVar10 * fVar10);
          if (0.0 < fVar24) {
            fVar24 = 1.0 / fVar24;
            *param_7 = fVar24 * *param_7;
            param_7[1] = fVar24 * param_7[1];
            param_7[2] = fVar24 * param_7[2];
          }
        }
      }
      *param_9 = *param_9 | 2;
    }
    if ((param_8 & 1) != 0) {
      fVar24 = param_3[6];
      fVar10 = param_2[6];
      fVar8 = 1.0 / (fVar24 + fVar10);
      *param_6 = fVar8 * (fVar24 * local_b0 + fVar10 * local_130);
      param_6[1] = fVar8 * (fVar24 * local_ac + fVar10 * local_12c);
      param_6[2] = fVar8 * (fVar24 * local_a8 + fVar10 * local_128);
      *param_9 = *param_9 | 1;
    }
  }
  *param_5 = fVar15;
  return 1;
}


