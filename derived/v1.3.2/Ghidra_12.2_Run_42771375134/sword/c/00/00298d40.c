/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00298d40; name: FUN_00298d40
 */


undefined8
FUN_00298d40(undefined8 param_1,float param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,byte *param_8)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
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
  float unaff_s14;
  float fVar19;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined1 auStack_138 [4];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_110 [24];
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  fVar10 = (float)param_1;
  if ((*param_8 >> 4 & 1) == 0) {
    local_110[0] = *param_4;
    local_110[1] = param_4[1];
    local_110[2] = param_4[2];
                    /* try { // try from 00298db0 to 00298dbb has its CatchHandler @ 002994c8 */
    local_110[3] = fVar10;
    uVar4 = FUN_002994e0(local_110,param_3);
    if ((uVar4 & 1) != 0) {
      *param_6 = 0.0;
      fVar10 = param_5[1];
      fVar12 = param_5[2];
      *param_7 = -*param_5;
      param_7[1] = -fVar10;
      param_7[2] = -fVar12;
      return 1;
    }
  }
  FUN_00295e20(local_110,param_3 + 9,param_3 + 0xc,param_3,param_3 + 3,param_3 + 6);
  pbVar5 = (byte *)FUN_00295e10();
  uVar8 = 0;
  uVar7 = 0;
  do {
    while( true ) {
      fVar12 = unaff_s14;
      uVar4 = (ulong)*pbVar5;
      uVar6 = (ulong)pbVar5[1];
      local_130 = local_110[uVar4 * 3];
      local_12c = local_110[uVar4 * 3 + 1];
      local_124 = local_110[uVar6 * 3];
      local_120 = local_110[uVar6 * 3 + 1];
      fVar14 = local_124 - local_130;
      local_128 = local_110[uVar4 * 3 + 2];
      local_11c = local_110[uVar6 * 3 + 2];
      fVar15 = local_120 - local_12c;
      fVar16 = local_11c - local_128;
      fVar13 = *param_4 - local_130;
      fVar9 = param_4[1] - local_12c;
      fVar11 = param_4[2] - local_128;
      fVar17 = fVar14 * fVar13 + fVar15 * fVar9 + fVar16 * fVar11;
      if (0.0 < fVar17) {
        fVar18 = fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16;
        if (fVar17 < fVar18) {
          fVar17 = fVar17 / fVar18;
          fVar14 = fVar14 * fVar17;
          fVar15 = fVar15 * fVar17;
          fVar16 = fVar16 * fVar17;
        }
        fVar13 = fVar13 - fVar14;
        fVar9 = fVar9 - fVar15;
        fVar11 = fVar11 - fVar16;
      }
      local_118 = fVar10;
                    /* try { // try from 00298f08 to 00298f6f has its CatchHandler @ 002994d0 */
      fVar9 = sqrtf(fVar13 * fVar13 + fVar9 * fVar9 + fVar11 * fVar11);
      fVar9 = fVar9 - fVar10;
      if (0.0 < fVar9) break;
      bVar2 = true;
      fVar12 = 0.0;
      unaff_s14 = fVar12;
      if (0.0 <= param_2) goto LAB_00298fb4;
LAB_002990f4:
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 2;
      fVar12 = param_2;
      if (0xb < uVar8) goto LAB_00299108;
    }
    fVar11 = fVar9 + -10.0;
    if (fVar9 <= 10.0) {
      fVar11 = 0.0;
    }
    local_b0 = fVar11 * *param_5 + *param_4;
    fStack_ac = fVar11 * param_5[1] + param_4[1];
    local_a8 = fVar11 * param_5[2] + param_4[2];
    iVar3 = FUN_0024cb60(param_1,&local_b0,param_5,&local_130,&local_124,&local_148);
    if (iVar3 == 0) {
      bVar2 = false;
      unaff_s14 = fVar12;
      if (fVar12 <= param_2) goto LAB_00298fb4;
      goto LAB_002990f4;
    }
    fVar12 = local_148;
    if ((iVar3 != 1) && (local_144 <= local_148)) {
      fVar12 = local_144;
    }
    fVar12 = fVar11 + fVar12;
    bVar2 = true;
    unaff_s14 = fVar12;
    if (param_2 < fVar12) goto LAB_002990f4;
LAB_00298fb4:
    unaff_s14 = fVar12;
    if ((!bVar2) || (fVar12 < 0.0)) goto LAB_002990f4;
    fVar11 = fVar12 * *param_5 + *param_4;
    fVar9 = fVar12 * param_5[1] + param_4[1];
    fVar13 = fVar12 * param_5[2] + param_4[2];
    fVar14 = local_124 - local_130;
    fVar15 = local_120 - local_12c;
    fVar16 = local_11c - local_128;
    fVar17 = fVar14 * (fVar11 - local_130) + fVar15 * (fVar9 - local_12c) +
             fVar16 * (fVar13 - local_128);
    unaff_s14 = 0.0;
    if (0.0 < fVar17) {
      fVar18 = fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16;
      unaff_s14 = 1.0;
      if (fVar17 < fVar18) {
        unaff_s14 = fVar17 / fVar18;
      }
    }
    fVar11 = (local_130 + fVar14 * unaff_s14) - fVar11;
    fVar9 = (local_12c + fVar15 * unaff_s14) - fVar9;
    fVar13 = (local_128 + fVar16 * unaff_s14) - fVar13;
    *param_7 = fVar11;
    param_7[1] = fVar9;
    param_7[2] = fVar13;
                    /* try { // try from 0029909c to 0029909f has its CatchHandler @ 002994cc */
    fVar9 = sqrtf(fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9);
    if (0.0 < fVar9) {
      fVar9 = 1.0 / fVar9;
      *param_7 = fVar9 * *param_7;
      param_7[1] = fVar9 * param_7[1];
      param_7[2] = fVar9 * param_7[2];
    }
    uVar7 = 1;
    uVar8 = uVar8 + 1;
    pbVar5 = pbVar5 + 2;
    param_2 = fVar12;
  } while (uVar8 < 0xc);
LAB_00299108:
  fVar9 = *param_4 - param_3[9];
  fVar11 = param_4[1] - param_3[10];
  fVar13 = param_4[2] - param_3[0xb];
  local_130 = *param_3 * fVar9 + param_3[1] * fVar11 + param_3[2] * fVar13;
  local_12c = param_3[3] * fVar9 + param_3[4] * fVar11 + param_3[5] * fVar13;
  local_128 = param_3[6] * fVar9 + param_3[7] * fVar11 + param_3[8] * fVar13;
  fVar9 = *param_5;
  fVar11 = param_5[1];
  fVar13 = param_5[2];
  local_b0 = *param_3 * fVar9 + param_3[1] * fVar11 + param_3[2] * fVar13;
  fStack_ac = fVar9 * param_3[3] + fVar11 * param_3[4] + fVar13 * param_3[5];
  local_a8 = fVar9 * param_3[6] + fVar11 * param_3[7] + fVar13 * param_3[8];
  local_144 = param_3[0xd];
  local_154 = -local_144;
  local_148 = param_3[0xc] + fVar10;
  local_140 = param_3[0xe];
  local_150 = -local_140;
  local_158 = -local_148;
  iVar3 = FUN_00239e60(&local_158,&local_148,&local_130,&local_b0,&local_134,auStack_138);
  if (((local_134 <= fVar12) && (iVar3 != -1)) && (DAT_01d4bc28 <= local_134)) {
    lVar1 = (long)iVar3 * 0xc;
    fVar9 = param_3[1];
    fVar11 = param_3[2];
    uVar7 = 1;
    fVar13 = param_3[4];
    fVar14 = param_3[5];
    fVar16 = *(float *)(&DAT_01d4d504 + lVar1);
    fVar18 = *(float *)(&DAT_01d4d508 + lVar1);
    fVar15 = param_3[7];
    fVar17 = param_3[8];
    fVar19 = *(float *)(&DAT_01d4d50c + lVar1);
    fVar12 = local_134;
    if (local_134 <= 0.0) {
      fVar12 = 0.0;
    }
    *param_7 = fVar16 * *param_3 + fVar18 * param_3[3] + fVar19 * param_3[6];
    param_7[1] = fVar16 * fVar9 + fVar18 * fVar13 + fVar19 * fVar15;
    param_7[2] = fVar16 * fVar11 + fVar18 * fVar14 + fVar19 * fVar17;
  }
  local_148 = param_3[0xc];
  local_144 = param_3[0xd] + fVar10;
  local_140 = param_3[0xe];
  local_150 = -local_140;
  local_154 = -local_144;
  local_158 = -local_148;
  iVar3 = FUN_00239e60(&local_158,&local_148,&local_130,&local_b0,&local_134,auStack_138);
  if (((local_134 <= fVar12) && (iVar3 != -1)) && (DAT_01d4bc28 <= local_134)) {
    lVar1 = (long)iVar3 * 0xc;
    fVar9 = param_3[1];
    fVar11 = param_3[2];
    uVar7 = 1;
    fVar13 = param_3[4];
    fVar14 = param_3[5];
    fVar16 = *(float *)(&DAT_01d4d504 + lVar1);
    fVar18 = *(float *)(&DAT_01d4d508 + lVar1);
    fVar15 = param_3[7];
    fVar17 = param_3[8];
    fVar19 = *(float *)(&DAT_01d4d50c + lVar1);
    fVar12 = local_134;
    if (local_134 <= 0.0) {
      fVar12 = 0.0;
    }
    *param_7 = fVar16 * *param_3 + fVar18 * param_3[3] + fVar19 * param_3[6];
    param_7[1] = fVar16 * fVar9 + fVar18 * fVar13 + fVar19 * fVar15;
    param_7[2] = fVar16 * fVar11 + fVar18 * fVar14 + fVar19 * fVar17;
  }
  local_148 = param_3[0xc];
  local_144 = param_3[0xd];
  local_140 = param_3[0xe] + fVar10;
  local_150 = -local_140;
  local_158 = -local_148;
  local_154 = -local_144;
  iVar3 = FUN_00239e60(&local_158,&local_148,&local_130,&local_b0,&local_134,auStack_138);
  if (((local_134 <= fVar12) && (iVar3 != -1)) && (DAT_01d4bc28 <= local_134)) {
    lVar1 = (long)iVar3 * 0xc;
    fVar10 = param_3[1];
    fVar9 = param_3[2];
    uVar7 = 1;
    fVar11 = param_3[4];
    fVar13 = param_3[5];
    fVar15 = *(float *)(&DAT_01d4d504 + lVar1);
    fVar17 = *(float *)(&DAT_01d4d508 + lVar1);
    fVar14 = param_3[7];
    fVar16 = param_3[8];
    fVar18 = *(float *)(&DAT_01d4d50c + lVar1);
    fVar12 = local_134;
    if (local_134 <= 0.0) {
      fVar12 = 0.0;
    }
    *param_7 = fVar15 * *param_3 + fVar17 * param_3[3] + fVar18 * param_3[6];
    param_7[1] = fVar15 * fVar10 + fVar17 * fVar11 + fVar18 * fVar14;
    param_7[2] = fVar15 * fVar9 + fVar17 * fVar13 + fVar18 * fVar16;
  }
  *param_6 = fVar12;
  return uVar7;
}


