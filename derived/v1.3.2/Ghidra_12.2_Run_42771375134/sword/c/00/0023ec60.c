/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023ec60; name: FUN_0023ec60
 */


uint FUN_0023ec60(float param_1,float param_2,undefined8 param_3,long param_4,float *param_5,
                 float *param_6,float *param_7,undefined8 param_8,ushort *param_9)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
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
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_210;
  float fStack_20c;
  float local_208;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_118 [8];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  if ((*(float *)(param_4 + 4) == 1.0) && (*(float *)(param_4 + 8) == 1.0)) {
    bVar3 = *(float *)(param_4 + 0xc) == 1.0;
  }
  else {
    bVar3 = false;
  }
  uVar2 = *param_9;
  bVar1 = *(byte *)(param_4 + 0x20);
  if (bVar3) {
    fVar10 = *param_5;
    fVar7 = param_5[1];
    fVar13 = fVar10 + fVar10;
    fVar15 = param_5[2];
    fVar17 = param_5[3];
    local_22c = param_5[4];
    local_230 = param_5[5];
    local_23c = param_5[6];
    fVar20 = -fVar7;
    fVar23 = param_6[10] - local_230;
    fVar27 = -fVar15;
    fVar24 = param_6[0xb] - local_23c;
    fVar26 = fVar20 - fVar7;
    fVar22 = -fVar10 - fVar10;
    local_24c = (fVar15 + fVar15) * fVar17;
    fVar30 = fVar7 + fVar7;
    fVar32 = param_6[9] - local_22c;
    local_254 = fVar15 * (fVar15 + fVar15);
    fVar34 = (fVar27 - fVar15) * fVar27;
    local_234 = fVar13 * fVar7 + local_24c;
    local_24c = fVar13 * fVar7 - local_24c;
    fVar18 = (fVar27 - fVar15) * fVar17;
    fVar8 = fVar26 * fVar27 - fVar22 * fVar17;
    local_240 = fVar13 * fVar15 - fVar30 * fVar17;
    local_250 = fVar30 * fVar15 + fVar13 * fVar17;
    local_238 = 1.0 - fVar10 * fVar13;
    local_244 = fVar13 * fVar15 + fVar30 * fVar17;
    fVar28 = fVar22 * fVar10 + 1.0;
    local_228 = (1.0 - fVar7 * fVar30) - local_254;
    local_248 = fVar30 * fVar15 - fVar13 * fVar17;
    fVar16 = fVar22 * fVar27 - fVar26 * fVar17;
    local_254 = local_238 - local_254;
    fVar14 = fVar22 * fVar20 + fVar18;
    fVar11 = fVar26 * fVar27 + fVar22 * fVar17;
    fVar21 = fVar28 - fVar34;
    fVar18 = fVar22 * fVar20 - fVar18;
    fVar19 = fVar22 * fVar27 + fVar26 * fVar17;
    fVar28 = fVar28 - fVar26 * fVar20;
    local_238 = local_238 - fVar7 * fVar30;
    fVar34 = (1.0 - fVar26 * fVar20) - fVar34;
    local_b8 = fVar16 * fVar32 + fVar11 * fVar23 + fVar28 * fVar24;
    local_c0 = fVar34 * fVar32 + fVar18 * fVar23 + fVar19 * fVar24;
    fStack_bc = fVar14 * fVar32 + fVar21 * fVar23 + fVar8 * fVar24;
    fVar29 = param_6[5];
    fVar7 = *param_7;
    fVar13 = param_7[1];
    fVar20 = *param_6;
    fVar22 = param_6[1];
    fVar24 = param_6[3];
    fVar27 = param_6[4];
    fVar17 = param_7[2];
    fVar23 = param_6[2];
    fVar32 = param_6[6];
    fVar25 = param_6[7];
    fVar30 = param_6[8];
    fVar15 = (fVar16 * fVar7 + fVar11 * fVar13 + fVar28 * fVar17) * param_1;
    fVar10 = (fVar34 * fVar7 + fVar18 * fVar13 + fVar19 * fVar17) * param_1;
    fVar13 = (fVar14 * fVar7 + fVar21 * fVar13 + fVar8 * fVar17) * param_1;
    fVar7 = fabsf(fVar34 * fVar20 + fVar18 * fVar22 + fVar19 * fVar23);
    fVar17 = fabsf(fVar14 * fVar20 + fVar21 * fVar22 + fVar8 * fVar23);
    fVar20 = fabsf(fVar16 * fVar20 + fVar11 * fVar22 + fVar28 * fVar23);
    fVar26 = param_6[0xc];
    fVar22 = fabsf(fVar34 * fVar24 + fVar18 * fVar27 + fVar19 * fVar29);
    fVar23 = fabsf(fVar14 * fVar24 + fVar21 * fVar27 + fVar8 * fVar29);
    fVar24 = fabsf(fVar16 * fVar24 + fVar11 * fVar27 + fVar28 * fVar29);
    fVar27 = param_6[0xd];
    fVar18 = fabsf(fVar34 * fVar32 + fVar18 * fVar25 + fVar19 * fVar30);
    fVar8 = fabsf(fVar14 * fVar32 + fVar21 * fVar25 + fVar8 * fVar30);
    fVar11 = fabsf(fVar16 * fVar32 + fVar11 * fVar25 + fVar28 * fVar30);
    fVar14 = param_6[0xe];
    fVar22 = fVar7 * fVar26 + fVar22 * fVar27 + fVar18 * fVar14;
    fVar17 = fVar17 * fVar26 + fVar23 * fVar27 + fVar8 * fVar14;
    fVar7 = fVar20 * fVar26 + fVar24 * fVar27 + fVar11 * fVar14;
  }
  else {
    FUN_001ae520(&local_200,param_5);
    fVar7 = (float)*(undefined8 *)param_5;
    fVar23 = fVar7 + fVar7;
    fVar10 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    fVar24 = fVar10 + fVar10;
    fVar17 = (float)*(undefined8 *)(param_5 + 2);
    fVar18 = fVar17 + fVar17;
    fVar22 = (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
    fVar13 = fVar10 * fVar24;
    fVar20 = fVar17 * fVar18;
    uVar6 = NEON_fmov(0x3f800000,4);
    fVar8 = (float)uVar6 - fVar7 * fVar23;
    fVar15 = (float)((ulong)uVar6 >> 0x20);
    fVar11 = fVar8 - fVar13;
    fVar27 = *(float *)(param_4 + 0x1c);
    uVar6 = NEON_ext(CONCAT44((fVar15 - fVar13) - fVar20,((float)uVar6 - fVar13) - fVar20),
                     CONCAT44(fVar10 * fVar23 + fVar22 * fVar18,fVar10 * fVar23 + fVar22 * fVar18),4
                     ,1);
    fVar26 = fVar17 * fVar24 + fVar22 * fVar23;
    uVar9 = NEON_ext(CONCAT44(fVar10 * fVar23 - fVar22 * fVar18,fVar10 * fVar23 - fVar22 * fVar18),
                     CONCAT44((fVar15 - fVar7 * fVar23) - fVar20,fVar8 - fVar20),4,1);
    uVar12 = NEON_ext(CONCAT44(fVar17 * fVar23 + fVar22 * fVar24,fVar17 * fVar23 + fVar22 * fVar24),
                      CONCAT44(fVar17 * fVar24 - fVar22 * fVar23,fVar17 * fVar24 - fVar22 * fVar23),
                      4,1);
    fVar16 = fVar17 * fVar23 - fVar22 * fVar24;
    fVar13 = *(float *)(param_4 + 0x14);
    fVar20 = *(float *)(param_4 + 0x18);
    fVar24 = fVar13 + fVar13;
    fVar7 = *(float *)(param_4 + 0xc);
    fVar10 = *(float *)(param_4 + 0x10);
    fVar23 = fVar10 + fVar10;
    fVar22 = fVar20 * (fVar20 + fVar20);
    fVar17 = (fVar20 + fVar20) * fVar27;
    fVar15 = 1.0 - fVar10 * fVar23;
    fVar10 = (1.0 - fVar13 * fVar24) - fVar22;
    fVar8 = fVar23 * fVar13 + fVar17;
    fVar14 = fVar23 * fVar20 - fVar24 * fVar27;
    fVar17 = fVar23 * fVar13 - fVar17;
    fVar22 = fVar15 - fVar22;
    fVar28 = fVar24 * fVar20 + fVar23 * fVar27;
    fVar18 = fVar23 * fVar20 + fVar24 * fVar27;
    fVar20 = fVar24 * fVar20 - fVar23 * fVar27;
    fVar15 = fVar15 - fVar13 * fVar24;
    fVar13 = *(float *)(param_4 + 4);
    fVar24 = *(float *)(param_4 + 8);
    fVar30 = fVar8 * fVar24;
    fVar25 = fVar22 * fVar24;
    fVar27 = fVar13 * fVar10;
    fVar32 = fVar13 * fVar17;
    fVar13 = fVar13 * fVar18;
    fVar24 = fVar20 * fVar24;
    fVar29 = fVar14 * fVar7;
    fVar31 = fVar28 * fVar7;
    fVar7 = fVar15 * fVar7;
    fVar23 = fVar10 * fVar13 + fVar8 * fVar24 + fVar14 * fVar7;
    fVar34 = fVar10 * fVar27 + fVar8 * fVar30 + fVar14 * fVar29;
    fVar33 = fVar10 * fVar32 + fVar8 * fVar25 + fVar14 * fVar31;
    fVar8 = fVar17 * fVar27 + fVar22 * fVar30 + fVar28 * fVar29;
    fVar19 = fVar17 * fVar13 + fVar22 * fVar24 + fVar28 * fVar7;
    fVar10 = (float)((ulong)uVar6 >> 0x20);
    fVar21 = fVar18 * fVar13 + fVar20 * fVar24 + fVar15 * fVar7;
    fVar7 = (float)uVar6;
    fVar13 = (float)uVar9;
    fVar14 = fVar18 * fVar27 + fVar20 * fVar30 + fVar15 * fVar29;
    fVar30 = fVar18 * fVar32 + fVar20 * fVar25 + fVar15 * fVar31;
    fVar28 = fVar17 * fVar32 + fVar22 * fVar25 + fVar28 * fVar31;
    local_244 = local_1e8;
    local_240 = local_1f8;
    fVar15 = (float)((ulong)uVar9 >> 0x20);
    fVar17 = (float)uVar12;
    fVar20 = (float)((ulong)uVar12 >> 0x20);
    fVar24 = fVar23 * fVar11 + fVar34 * fVar16 + fVar33 * fVar26;
    fVar22 = fVar23 * fVar17 + fVar34 * fVar7 + fVar33 * fVar13;
    fVar23 = fVar23 * fVar20 + fVar34 * fVar10 + fVar33 * fVar15;
    local_230 = local_1d8;
    local_22c = fStack_1dc;
    fVar18 = fVar19 * fVar17 + fVar8 * fVar7 + fVar28 * fVar13;
    fVar27 = fVar19 * fVar20 + fVar8 * fVar10 + fVar28 * fVar15;
    fVar8 = fVar19 * fVar11 + fVar8 * fVar16 + fVar28 * fVar26;
    fVar15 = fVar21 * fVar20 + fVar14 * fVar10 + fVar30 * fVar15;
    fVar10 = fVar21 * fVar11 + fVar14 * fVar16 + fVar30 * fVar26;
    fVar13 = fVar21 * fVar17 + fVar14 * fVar7 + fVar30 * fVar13;
    fVar7 = fVar27 * fVar10 - fVar8 * fVar15;
    local_e0 = fVar15 * fVar18 - fVar27 * fVar13;
    fVar17 = fVar24 * local_e0 + fVar22 * fVar7 + fVar23 * (fVar8 * fVar13 - fVar10 * fVar18);
    local_23c = local_1d4;
    local_238 = local_1e0;
    if (fVar17 == 0.0) {
      fStack_f4 = 0.0;
      local_e8 = 1.0;
      local_f0 = 0.0;
      fStack_ec = 0.0;
      fStack_e4 = 0.0;
      local_e0 = 0.0;
      fStack_dc = 0.0;
      local_d8 = 1.0;
      local_f8 = 1.0;
    }
    else {
      fVar17 = 1.0 / fVar17;
      local_e0 = local_e0 * fVar17;
      fStack_f4 = -((fVar10 * fVar23 - fVar15 * fVar24) * fVar17);
      local_f0 = (fVar8 * fVar23 - fVar27 * fVar24) * fVar17;
      fStack_ec = -((fVar10 * fVar18 - fVar8 * fVar13) * fVar17);
      local_e8 = (fVar10 * fVar22 - fVar13 * fVar24) * fVar17;
      fStack_e4 = -((fVar8 * fVar22 - fVar18 * fVar24) * fVar17);
      fStack_dc = -((fVar15 * fVar22 - fVar13 * fVar23) * fVar17);
      local_d8 = (fVar27 * fVar22 - fVar18 * fVar23) * fVar17;
      local_f8 = fVar7 * fVar17;
    }
    local_254 = local_1f0;
    local_250 = fStack_1ec;
    local_24c = local_1f4;
    local_248 = local_1e4;
    fVar13 = param_5[6];
    local_234 = fStack_1fc;
    local_228 = local_200;
    fVar10 = param_5[5];
    fVar7 = -param_5[4];
    local_d4 = (local_f8 * fVar7 - fStack_ec * fVar10) - local_e0 * fVar13;
    local_d0 = (fStack_f4 * fVar7 - local_e8 * fVar10) - fStack_dc * fVar13;
    local_cc = (local_f0 * fVar7 - fStack_e4 * fVar10) - local_d8 * fVar13;
                    /* try { // try from 0023f464 to 0023f473 has its CatchHandler @ 0023f9ec */
    FUN_002323c0(&local_200,&local_f8,param_6);
    fVar10 = local_1f4;
    fVar7 = local_1f8;
                    /* try { // try from 0023f4a0 to 0023f503 has its CatchHandler @ 0023fa00 */
    fVar13 = fabsf(local_200);
    fVar15 = fabsf(fStack_1fc);
    fVar7 = fabsf(fVar7);
    fVar10 = fabsf(fVar10);
    fVar17 = fabsf(local_1f0);
    fVar20 = fabsf(fStack_1ec);
    fVar22 = fabsf(local_1e8);
    fVar23 = fabsf(local_1e4);
    fVar24 = fabsf(local_1e0);
    fVar22 = local_1d0 * fVar13 + fStack_1cc * fVar10 + local_1c8 * fVar22;
    fVar17 = local_1d0 * fVar15 + fStack_1cc * fVar17 + local_1c8 * fVar23;
    fVar7 = local_1d0 * fVar7 + fStack_1cc * fVar20 + local_1c8 * fVar24;
    fVar10 = param_6[10];
    fVar13 = param_6[9];
    fVar15 = param_6[0xb];
    local_c0 = fVar13 * local_f8 + fVar10 * fStack_ec + fVar15 * local_e0 + local_d4;
    fStack_bc = fVar13 * fStack_f4 + fVar10 * local_e8 + fVar15 * fStack_dc + local_d0;
    local_b8 = fVar13 * local_f0 + fVar10 * fStack_e4 + fVar15 * local_d8 + local_cc;
    fVar20 = param_7[1] * param_1;
    fVar15 = *param_7 * param_1;
    fVar23 = param_7[2] * param_1;
    fVar10 = local_f8 * fVar15 + fStack_ec * fVar20 + local_e0 * fVar23;
    fVar13 = fStack_f4 * fVar15 + local_e8 * fVar20 + fStack_dc * fVar23;
    fVar15 = local_f0 * fVar15 + fStack_e4 * fVar20 + local_d8 * fVar23;
  }
  local_b0 = (fVar22 + param_2) * DAT_01d4be58;
  fStack_ac = (fVar17 + param_2) * DAT_01d4be58;
  local_a8 = (fVar7 + param_2) * DAT_01d4be58;
  fVar7 = sqrtf(fVar10 * fVar10 + fVar13 * fVar13 + fVar15 * fVar15);
  fVar26 = *param_6;
  fVar8 = param_6[1];
  fVar11 = param_6[4];
  fVar24 = param_6[5];
  fVar23 = param_6[6];
  fVar14 = param_6[7];
  fVar27 = param_6[2];
  fVar18 = param_6[3];
  fVar16 = param_6[8];
  fVar17 = -param_6[9];
  fVar20 = param_6[10];
  fVar22 = param_6[0xb];
  local_f8 = local_228 * fVar26 + local_234 * fVar8 + local_240 * fVar27;
  fStack_f4 = local_228 * fVar18 + local_234 * fVar11 + local_240 * fVar24;
  local_f0 = local_228 * fVar23 + local_234 * fVar14 + local_240 * fVar16;
  fStack_e4 = local_24c * fVar23 + local_254 * fVar14 + local_250 * fVar16;
  local_e8 = local_24c * fVar18 + local_254 * fVar11 + local_250 * fVar24;
  fStack_ec = local_24c * fVar26 + local_254 * fVar8 + local_250 * fVar27;
  local_e0 = local_244 * fVar26 + local_248 * fVar8 + local_238 * fVar27;
  fStack_dc = local_244 * fVar18 + local_248 * fVar11 + local_238 * fVar24;
  local_d8 = local_244 * fVar23 + local_248 * fVar14 + local_238 * fVar16;
  local_d4 = local_22c * fVar26 + local_230 * fVar8 + local_23c * fVar27 +
             ((fVar26 * fVar17 - fVar8 * fVar20) - fVar27 * fVar22);
  local_d0 = local_22c * fVar18 + local_230 * fVar11 + local_23c * fVar24 +
             ((fVar18 * fVar17 - fVar11 * fVar20) - fVar24 * fVar22);
  local_cc = local_22c * fVar23 + local_230 * fVar14 + local_23c * fVar16 +
             ((fVar23 * fVar17 - fVar14 * fVar20) - fVar16 * fVar22);
  bVar4 = (uVar2 & 0x80) != 0 || (bVar1 & 2) != 0;
                    /* try { // try from 0023f834 to 0023f83f has its CatchHandler @ 0023f9fc */
  FUN_0023be70(&local_200,param_6);
  local_110 = local_1f8;
  local_10c = local_1f4;
  local_108 = param_6[9];
  if (fVar7 <= DAT_01d4c050) {
    fVar7 = DAT_01d4c050;
  }
  local_104 = param_6[10];
  local_100 = param_6[0xb];
  fVar20 = *param_7;
  fVar22 = param_7[1];
  fVar17 = 1.0;
  if (!bVar3) {
    fVar17 = fVar7 / param_1;
  }
  fVar30 = param_7[2];
  local_128 = fVar26 * fVar20 + fVar8 * fVar22 + fVar27 * fVar30;
  local_124 = fVar18 * fVar20 + fVar11 * fVar22 + fVar24 * fVar30;
  local_120 = fVar23 * fVar20 + fVar14 * fVar22 + fVar16 * fVar30;
  local_138 = local_128 * param_1;
  local_134 = local_124 * param_1;
  local_130 = local_120 * param_1;
                    /* try { // try from 0023f920 to 0023f953 has its CatchHandler @ 0023f9f8 */
  FUN_00245150(param_1,param_2,fVar17,&local_200,2,&local_f8,bVar4,param_6,&local_138,&local_128,
               param_7,param_9,
               *(float *)(param_4 + 4) * *(float *)(param_4 + 8) * *(float *)(param_4 + 0xc) < 0.0);
  fVar7 = 1.0 / fVar7;
  local_210 = fVar10 * fVar7;
  fStack_20c = fVar13 * fVar7;
  local_208 = fVar15 * fVar7;
                    /* try { // try from 0023f978 to 0023f993 has its CatchHandler @ 0023f9f4 */
  FUN_0023c820(&local_c0,&local_210,bVar4,param_3,&local_200,&local_b0);
                    /* try { // try from 0023f99c to 0023f9b7 has its CatchHandler @ 0023f9f0 */
  uVar5 = FUN_002457c0(&local_200,param_8,param_4,param_5,local_118,&local_128,uVar2 >> 7 & 1,
                       bVar1 >> 1 & 1);
  return uVar5 & 1;
}


