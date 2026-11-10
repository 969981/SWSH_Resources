/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00295110; name: FUN_00295110
 */


void FUN_00295110(float param_1,float *param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
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
  float fVar31;
  undefined8 uVar30;
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
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  
                    /* try { // try from 0029514c to 00295153 has its CatchHandler @ 00295bfc */
  fVar3 = fabsf(param_4[3]);
  fVar1 = DAT_01d4c0c4;
  if (DAT_01d4c0c4 <= fVar3) {
    fVar21 = 0.0;
    fVar11 = 1.0;
    uVar44 = 0;
    fVar20 = 0.0;
    fVar16 = 1.0;
    uVar30 = 0;
    fVar33 = 0.0;
    fVar9 = 0.0;
    uVar14 = 0x3f800000;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    param_2[7] = 1.0;
    param_2[8] = 0.0;
    param_2[0xb] = 1.0;
  }
  else {
    fVar21 = (float)*(undefined8 *)param_4;
    fVar26 = fVar21 + fVar21;
    fVar9 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar28 = fVar9 + fVar9;
    fVar11 = (float)*(undefined8 *)(param_4 + 2);
    fVar29 = fVar11 + fVar11;
    fVar31 = fVar9 * fVar28;
    fVar32 = fVar11 * fVar29;
    fVar16 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
    uVar14 = NEON_fmov(0x3f800000,4);
    fVar20 = fVar11 * fVar28 + fVar16 * fVar26;
    fVar15 = (float)((ulong)uVar14 >> 0x20);
    fVar10 = (float)uVar14 - fVar21 * fVar26;
    fVar33 = fVar11 * fVar26 - fVar16 * fVar28;
    uVar44 = NEON_ext(CONCAT44(fVar11 * fVar26 + fVar16 * fVar28,fVar11 * fVar26 + fVar16 * fVar28),
                      CONCAT44(fVar11 * fVar28 - fVar16 * fVar26,fVar11 * fVar28 - fVar16 * fVar26),
                      4,1);
    fVar11 = fVar10 - fVar31;
    uVar14 = NEON_ext(CONCAT44((fVar15 - fVar31) - fVar32,((float)uVar14 - fVar31) - fVar32),
                      CONCAT44(fVar9 * fVar26 + fVar16 * fVar29,fVar9 * fVar26 + fVar16 * fVar29),4,
                      1);
    uVar30 = NEON_ext(CONCAT44(fVar9 * fVar26 - fVar16 * fVar29,fVar9 * fVar26 - fVar16 * fVar29),
                      CONCAT44((fVar15 - fVar21 * fVar26) - fVar32,fVar10 - fVar32),4,1);
    fVar16 = (float)((ulong)uVar30 >> 0x20);
    *(undefined8 *)(param_2 + 3) = uVar14;
    fVar21 = (float)((ulong)uVar44 >> 0x20);
    *(undefined8 *)(param_2 + 9) = uVar44;
    *(ulong *)(param_2 + 7) = CONCAT44(fVar20,fVar16);
    *(ulong *)(param_2 + 5) = CONCAT44((int)uVar30,fVar33);
    fVar9 = (float)((ulong)uVar14 >> 0x20);
    *(ulong *)(param_2 + 0xb) = (ulong)(uint)fVar11;
  }
  fVar10 = param_4[4];
  param_2[0xc] = fVar10;
  fVar15 = param_4[5];
  param_2[0xd] = fVar15;
  fVar26 = param_4[6];
  param_2[0xe] = fVar26;
  fVar28 = (float)uVar14;
  switch(*param_3) {
  case 0:
    param_1 = (float)param_3[1] + param_1;
    fVar21 = (param_1 + 0.0) * 1.01;
    fVar9 = (param_1 + 0.0) * 1.01;
    fVar11 = (param_1 + 0.0) * 1.01;
    *(ulong *)(param_2 + 0x12) = CONCAT44(fVar15 - fVar9,fVar10 - fVar21);
    *(ulong *)(param_2 + 0x14) = CONCAT44(fVar10 + fVar21,fVar26 - fVar11);
    *(ulong *)(param_2 + 0x16) = CONCAT44(fVar26 + fVar11,fVar15 + fVar9);
    param_2[0x18] = (param_1 + 0.0) * 1.01 + 0.0;
    fVar21 = (float)param_3[1];
    fVar9 = param_4[6];
    *(undefined8 *)(param_2 + 0x19) = *(undefined8 *)(param_4 + 4);
    param_2[0x1b] = fVar9;
    param_2[0x1c] = fVar21;
    break;
  case 2:
                    /* try { // try from 00295328 to 00295343 has its CatchHandler @ 00295bf8 */
    fVar21 = fabsf(fVar28);
    fVar9 = fabsf(param_2[4]);
    fVar11 = fabsf(param_2[5]);
    fVar20 = (float)param_3[2];
    param_1 = (float)param_3[1] + param_1;
    fVar21 = (fVar21 * fVar20 + param_1) * 1.01;
    fVar9 = (fVar9 * fVar20 + param_1) * 1.01;
    fVar11 = (fVar11 * fVar20 + param_1) * 1.01;
    fVar20 = (float)*(undefined8 *)(param_2 + 0xc);
    fVar33 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    *(ulong *)(param_2 + 0x12) = CONCAT44(fVar33 - fVar9,fVar20 - fVar21);
    *(ulong *)(param_2 + 0x14) = CONCAT44(fVar20 + fVar21,param_2[0xe] - fVar11);
    *(ulong *)(param_2 + 0x16) = CONCAT44(param_2[0xe] + fVar11,fVar33 + fVar9);
    param_2[0x18] = (param_1 + 0.0) * 1.01 + 0.0;
    fVar20 = param_4[3];
    fVar21 = *param_4;
    fVar33 = fVar20 + fVar20;
    fVar9 = fVar21 + fVar21;
    fVar11 = (float)param_3[2];
    fVar21 = fVar11 * (fVar21 * fVar9 + fVar20 * fVar33 + -1.0);
    fVar20 = fVar11 * (param_4[2] * fVar33 + fVar9 * param_4[1]);
    fVar9 = fVar11 * (fVar9 * param_4[2] - fVar33 * param_4[1]);
    fVar33 = param_4[5];
    fVar16 = param_4[6];
    param_2[0x19] = param_4[4] + fVar21;
    param_2[0x1a] = fVar33 + fVar20;
    param_2[0x1b] = fVar9 + fVar16;
    fVar16 = param_4[5];
    fVar33 = param_4[6];
    param_2[0x1c] = param_4[4] - fVar21;
    param_2[0x1d] = fVar16 - fVar20;
    param_2[0x1e] = fVar33 - fVar9;
    fVar21 = (float)param_3[1];
    param_2[0x1f] = fVar21;
    param_2[0xf] = fVar11;
    fVar9 = fVar21 * DAT_01d4be58;
    *param_2 = (fVar11 + fVar21) * DAT_01d4be58;
    param_2[1] = fVar9;
    param_2[2] = fVar9;
    break;
  case 3:
    fVar21 = (float)param_3[1];
    fVar33 = (float)param_3[2];
    fVar26 = (float)param_3[3];
    fVar9 = (param_1 +
            ABS((float)*(undefined8 *)(param_2 + 3) * fVar21) +
            ABS((float)*(undefined8 *)(param_2 + 6) * fVar33) +
            ABS((float)*(undefined8 *)(param_2 + 9) * fVar26)) * 1.01;
    fVar11 = (param_1 +
             ABS((float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20) * fVar21) +
             ABS((float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) * fVar33) +
             ABS((float)((ulong)*(undefined8 *)(param_2 + 9) >> 0x20) * fVar26)) * 1.01;
    fVar20 = (param_1 +
             ABS((float)*(undefined8 *)(param_2 + 5) * fVar21) +
             ABS((float)*(undefined8 *)(param_2 + 8) * fVar33) +
             ABS((float)*(undefined8 *)(param_2 + 0xb) * fVar26)) * 1.01;
    fVar16 = (float)*(undefined8 *)(param_2 + 0xc);
    fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    fVar15 = (float)*(undefined8 *)(param_2 + 0xe);
    *(ulong *)(param_2 + 0x16) = CONCAT44(fVar15 + fVar20,fVar10 + fVar11);
    *(ulong *)(param_2 + 0x12) = CONCAT44(fVar10 - fVar11,fVar16 - fVar9);
    *(ulong *)(param_2 + 0x14) = CONCAT44(fVar16 + fVar9,fVar15 - fVar20);
    param_2[0x18] =
         (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) +
         (param_1 +
         ABS((float)((ulong)*(undefined8 *)(param_2 + 5) >> 0x20) * fVar21) +
         ABS((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fVar33) +
         ABS((float)((ulong)*(undefined8 *)(param_2 + 0xb) >> 0x20) * fVar26)) * 1.01;
    param_2[0xf] = (float)param_3[1];
    param_2[0x10] = (float)param_3[2];
    param_2[0x11] = (float)param_3[3];
    fVar9 = (float)param_3[2] * DAT_01d4be58;
    fVar21 = (float)param_3[3] * DAT_01d4be58;
    *param_2 = (float)param_3[1] * DAT_01d4be58;
    param_2[1] = fVar9;
    param_2[2] = fVar21;
    break;
  case 4:
    lVar2 = *(long *)(param_3 + 8);
    Hint_Prefetch(lVar2 + 0x20,0,0,0);
    fVar29 = (float)param_3[1];
    fVar31 = (float)param_3[2];
    fVar32 = (float)param_3[3];
    if (((fVar29 == 1.0) && (fVar31 == 1.0)) && (fVar31 = 1.0, fVar32 == 1.0)) {
      fVar35 = *(float *)(lVar2 + 0x20);
      fVar12 = *(float *)(lVar2 + 0x24);
      fVar13 = *(float *)(lVar2 + 0x28);
      fVar32 = *(float *)(lVar2 + 0x2c);
      fVar41 = *(float *)(lVar2 + 0x30);
      fVar38 = *(float *)(lVar2 + 0x34);
                    /* try { // try from 00295590 to 00295a23 has its CatchHandler @ 00295c00 */
      fVar4 = fabsf(fVar28 * fVar32);
      fVar5 = fabsf((float)uVar30 * fVar41);
      fVar29 = fabsf((float)uVar44 * fVar38);
      fVar6 = fabsf(fVar9 * fVar32);
      fVar7 = fabsf(fVar16 * fVar41);
      fVar31 = fabsf(fVar21 * fVar38);
      fVar32 = fabsf(fVar33 * fVar32);
      fVar8 = fabsf(fVar20 * fVar41);
      fVar38 = fabsf(fVar11 * fVar38);
      fVar41 = fVar35 * fVar28 + fVar12 * (float)uVar30 + fVar13 * (float)uVar44;
      fVar16 = fVar35 * fVar9 + fVar12 * fVar16 + fVar13 * fVar21;
      fVar21 = fVar35 * fVar33 + fVar12 * fVar20 + fVar13 * fVar11;
      fVar29 = fVar4 + fVar5 + fVar29;
      fVar31 = fVar6 + fVar7 + fVar31;
      fVar32 = fVar32 + fVar8;
    }
    else {
      fVar21 = (float)param_3[4];
      fVar11 = (float)param_3[5];
      fVar38 = fVar11 + fVar11;
      fVar20 = (float)param_3[6];
      fVar16 = (float)param_3[7];
      fVar4 = fVar21 + fVar21;
      fVar46 = fVar20 * (fVar20 + fVar20);
      fVar5 = (fVar20 + fVar20) * fVar16;
      fVar6 = 1.0 - fVar21 * fVar4;
      fVar21 = (1.0 - fVar11 * fVar38) - fVar46;
      fVar41 = fVar4 * fVar11 + fVar5;
      fVar5 = fVar4 * fVar11 - fVar5;
      fVar46 = fVar6 - fVar46;
      fVar7 = fVar4 * fVar20 - fVar38 * fVar16;
      fVar35 = fVar38 * fVar20 + fVar4 * fVar16;
      fVar6 = fVar6 - fVar11 * fVar38;
      fVar45 = fVar31 * fVar41;
      fVar22 = fVar29 * fVar21;
      fVar27 = fVar29 * fVar5;
      fVar47 = fVar31 * fVar46;
      fVar39 = fVar4 * fVar20 + fVar38 * fVar16;
      fVar36 = fVar38 * fVar20 - fVar4 * fVar16;
      fVar34 = fVar32 * fVar7;
      fVar43 = fVar32 * fVar35;
      fVar32 = fVar6 * fVar32;
      fVar29 = fVar29 * fVar39;
      fVar31 = fVar31 * fVar36;
      fVar38 = fVar7 * fVar43 + fVar21 * fVar27 + fVar41 * fVar47;
      fVar23 = fVar7 * fVar34 + fVar21 * fVar22 + fVar41 * fVar45;
      fVar37 = param_2[6];
      fVar24 = param_2[7];
      fVar17 = fVar7 * fVar32 + fVar21 * fVar29 + fVar41 * fVar31;
      fVar41 = param_2[8];
      fVar40 = param_2[9];
      fVar18 = param_2[10];
      fVar19 = param_2[0xb];
      fVar7 = fVar28 * fVar23 + fVar37 * fVar38 + fVar17 * fVar40;
      fVar21 = *(float *)(lVar2 + 0x20);
      fVar11 = *(float *)(lVar2 + 0x24);
      fVar20 = *(float *)(lVar2 + 0x28);
      fVar16 = *(float *)(lVar2 + 0x2c);
      fVar8 = *(float *)(lVar2 + 0x30);
      fVar12 = *(float *)(lVar2 + 0x34);
      fVar4 = fabsf(fVar7 * fVar16);
      fVar25 = fVar35 * fVar34 + fVar5 * fVar22 + fVar46 * fVar45;
      fVar13 = fVar35 * fVar43 + fVar5 * fVar27 + fVar46 * fVar47;
      fVar42 = fVar35 * fVar32 + fVar5 * fVar29 + fVar46 * fVar31;
      fVar35 = fVar28 * fVar25 + fVar37 * fVar13 + fVar42 * fVar40;
      fVar5 = fabsf(fVar35 * fVar8);
      fVar46 = fVar6 * fVar34 + fVar39 * fVar22 + fVar36 * fVar45;
      fVar34 = fVar6 * fVar43 + fVar39 * fVar27 + fVar36 * fVar47;
      fVar36 = fVar6 * fVar32 + fVar39 * fVar29 + fVar36 * fVar31;
      fVar22 = fVar28 * fVar46 + fVar37 * fVar34 + fVar36 * fVar40;
      fVar29 = fabsf(fVar22 * fVar12);
      fVar27 = fVar9 * fVar23 + fVar38 * fVar24 + fVar17 * fVar18;
      fVar28 = fabsf(fVar27 * fVar16);
      fVar37 = fVar9 * fVar25 + fVar13 * fVar24 + fVar42 * fVar18;
      fVar6 = fabsf(fVar37 * fVar8);
      fVar18 = fVar9 * fVar46 + fVar34 * fVar24 + fVar36 * fVar18;
      fVar31 = fabsf(fVar18 * fVar12);
      fVar17 = fVar33 * fVar23 + fVar38 * fVar41 + fVar17 * fVar19;
      fVar32 = fabsf(fVar17 * fVar16);
      fVar13 = fVar33 * fVar25 + fVar13 * fVar41 + fVar42 * fVar19;
      fVar9 = fabsf(fVar13 * fVar8);
      fVar33 = fVar33 * fVar46 + fVar34 * fVar41 + fVar36 * fVar19;
      fVar38 = fabsf(fVar33 * fVar12);
      fVar41 = fVar7 * fVar21 + fVar35 * fVar11 + fVar22 * fVar20;
      fVar16 = fVar21 * fVar27 + fVar37 * fVar11 + fVar18 * fVar20;
      fVar21 = fVar21 * fVar17 + fVar11 * fVar13 + fVar33 * fVar20;
      fVar29 = fVar4 + fVar5 + fVar29;
      fVar31 = fVar28 + fVar6 + fVar31;
      fVar32 = fVar32 + fVar9;
    }
    fVar9 = (param_1 + fVar29) * 1.01;
    fVar11 = (param_1 + fVar31) * 1.01;
    fVar20 = (param_1 + fVar32 + fVar38) * 1.01;
    *(ulong *)(param_2 + 0x16) = CONCAT44(fVar21 + fVar26 + fVar20,fVar16 + fVar15 + fVar11);
    *(ulong *)(param_2 + 0x12) = CONCAT44((fVar16 + fVar15) - fVar11,(fVar41 + fVar10) - fVar9);
    *(ulong *)(param_2 + 0x14) = CONCAT44(fVar41 + fVar10 + fVar9,(fVar21 + fVar26) - fVar20);
    param_2[0x18] = (param_1 + 0.0) * 1.01 + 0.0;
                    /* try { // try from 00295b1c to 00295b2f has its CatchHandler @ 00295bf4 */
    FUN_00232820(&local_c0,param_3,lVar2,param_4);
    param_2[3] = local_c0;
    param_2[4] = local_bc;
    param_2[5] = local_b8;
    param_2[6] = local_b4;
    param_2[7] = local_b0;
    param_2[8] = local_ac;
    param_2[9] = local_a8;
    param_2[10] = local_a4;
    param_2[0xb] = local_a0;
    fStack_8c = fStack_8c * DAT_01d4be58;
    local_88 = local_88 * DAT_01d4be58;
    *param_2 = local_90 * DAT_01d4be58;
    param_2[1] = fStack_8c;
    param_2[2] = local_88;
    param_2[0xc] = local_9c;
    param_2[0xd] = local_98;
    param_2[0xe] = local_94;
  }
  *(ushort *)(param_2 + 0x18) = (ushort)(fVar3 < fVar1);
  *(short *)((long)param_2 + 0x62) = (short)*param_3;
  return;
}


