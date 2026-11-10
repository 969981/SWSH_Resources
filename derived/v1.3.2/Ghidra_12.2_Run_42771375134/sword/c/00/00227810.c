/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00227810; name: FUN_00227810
 */


void FUN_00227810(float param_1,undefined8 param_2,uint *param_3,int param_4,long param_5,
                 long param_6,long param_7,float *param_8,float *param_9,float *param_10,
                 float *param_11,float *param_12)

{
  byte *pbVar1;
  ulong uVar2;
  uint *puVar3;
  bool bVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
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
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  while (param_4 != 0) {
    puVar3 = param_3 + 1;
    lVar5 = param_5 + (ulong)*param_3 * 0x14;
    uVar7 = (ulong)*(byte *)(lVar5 + 0x12);
    param_4 = param_4 + -1;
    param_3 = puVar3;
    if (uVar7 != 0) {
      pbVar1 = (byte *)(param_7 + (ulong)*(ushort *)(lVar5 + 0x10));
      fVar9 = *param_12;
      fVar10 = param_12[1];
      fVar11 = param_12[2];
      fVar12 = param_12[3];
      pfVar6 = (float *)(param_6 + (ulong)*pbVar1 * 0xc);
      fVar13 = *pfVar6;
      fVar16 = pfVar6[1];
      fVar14 = param_12[4];
      fVar15 = param_12[5];
      fVar24 = pfVar6[2];
      fVar22 = param_12[8];
      fVar17 = param_12[6];
      fVar18 = param_12[7];
      local_b8 = fVar13 * fVar10 + fVar16 * fVar14 + fVar24 * fVar18;
      local_bc = fVar13 * fVar9 + fVar16 * fVar12 + fVar24 * fVar17;
      local_b4 = fVar13 * fVar11 + fVar16 * fVar15 + fVar24 * fVar22;
      uVar8 = 1;
      fVar16 = *param_9;
      fVar24 = param_9[1];
      fVar25 = param_9[2];
      fVar23 = param_9[3];
      fVar13 = fVar23 + local_bc * fVar16 + local_b8 * fVar24 + local_b4 * fVar25;
      while( true ) {
        bVar4 = fVar13 <= param_1;
        uVar2 = uVar8;
        if (uVar7 <= uVar8) {
          uVar2 = 0;
        }
        pfVar6 = (float *)(param_6 + (ulong)pbVar1[uVar2] * 0xc);
        fVar26 = *pfVar6;
        fVar27 = pfVar6[1];
        fVar13 = pfVar6[2];
        fVar21 = fVar26 * fVar9 + fVar27 * fVar12 + fVar13 * fVar17;
        fVar20 = fVar26 * fVar10 + fVar27 * fVar14 + fVar13 * fVar18;
        fVar26 = fVar26 * fVar11 + fVar27 * fVar15 + fVar13 * fVar22;
        fVar13 = fVar23 + fVar21 * fVar16 + fVar20 * fVar24 + fVar26 * fVar25;
        if ((bVar4) || (fVar13 <= param_1)) {
          fVar17 = local_b8 + fVar20;
          fVar9 = fVar21 - local_bc;
          fVar16 = local_bc + fVar21;
          fVar10 = fVar20 - local_b8;
          fVar11 = fVar26 - local_b4;
          fVar18 = local_b4 + fVar26;
          fVar12 = fVar9 * *param_10 + fVar10 * param_10[3] + fVar11 * param_10[6];
          fVar24 = param_11[3] - *param_11;
          fVar22 = (fVar16 * *param_10 + fVar17 * param_10[3] + fVar18 * param_10[6] +
                   param_10[9] + param_10[9]) - (param_11[3] + *param_11);
          fVar14 = fabsf(fVar12);
          fVar15 = fabsf(fVar22);
          if (fVar15 <= fVar24 + fVar14) {
            fVar15 = fVar9 * param_10[1] + fVar10 * param_10[4] + fVar11 * param_10[7];
            fVar19 = param_11[4] - param_11[1];
            fVar27 = (fVar16 * param_10[1] + fVar17 * param_10[4] + fVar18 * param_10[7] +
                     param_10[10] + param_10[10]) - (param_11[4] + param_11[1]);
            fVar23 = fabsf(fVar15);
            fVar25 = fabsf(fVar27);
            if (fVar25 <= fVar19 + fVar23) {
              fVar25 = fVar9 * param_10[2] + fVar10 * param_10[5] + fVar11 * param_10[8];
              fVar11 = param_11[5] - param_11[2];
              fVar16 = (fVar16 * param_10[2] + fVar17 * param_10[5] + fVar18 * param_10[8] +
                       param_10[0xb] + param_10[0xb]) - (param_11[5] + param_11[2]);
              fVar9 = fabsf(fVar25);
              fVar10 = fabsf(fVar16);
              if ((((fVar10 <= fVar11 + fVar9) &&
                   (fVar10 = fabsf(fVar15 * fVar16 - fVar27 * fVar25),
                   fVar10 <= fVar23 * fVar11 + fVar19 * fVar9)) &&
                  (fVar10 = fabsf(fVar22 * fVar25 - fVar12 * fVar16),
                  fVar10 <= fVar14 * fVar11 + fVar24 * fVar9)) &&
                 (fVar9 = fabsf(fVar12 * fVar27 - fVar22 * fVar15),
                 fVar9 <= fVar14 * fVar19 + fVar24 * fVar23)) {
                local_bc = local_bc - fVar21;
                local_b8 = local_b8 - fVar20;
                local_b4 = local_b4 - fVar26;
                fVar15 = local_bc * param_8[1] + local_b8 * param_8[4] + local_b4 * param_8[7];
                fVar14 = local_bc * *param_8 + local_b8 * param_8[3] + local_b4 * param_8[6];
                fVar16 = local_bc * param_8[2] + local_b8 * param_8[5] + local_b4 * param_8[8];
                fVar12 = 0.0;
                fVar11 = fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16;
                fVar9 = 0.0;
                fVar10 = 0.0;
                if (0.0 < fVar11) {
                  fVar10 = sqrtf(fVar11);
                  fVar10 = 1.0 / fVar10;
                  fVar12 = fVar14 * fVar10;
                  fVar9 = fVar15 * fVar10;
                  fVar10 = fVar16 * fVar10;
                }
                local_a8 = fVar10;
                fStack_ac = fVar9;
                local_b0 = fVar12;
                FUN_00231ac0(param_2,&local_b0);
              }
            }
          }
        }
        if (uVar7 == uVar8) break;
        fVar9 = *param_12;
        fVar10 = param_12[1];
        fVar22 = param_12[8];
        fVar11 = param_12[2];
        fVar12 = param_12[3];
        uVar8 = uVar8 + 1;
        fVar14 = param_12[4];
        fVar15 = param_12[5];
        fVar17 = param_12[6];
        fVar18 = param_12[7];
        fVar16 = *param_9;
        fVar24 = param_9[1];
        fVar25 = param_9[2];
        fVar23 = param_9[3];
        local_bc = fVar21;
        local_b8 = fVar20;
        local_b4 = fVar26;
      }
    }
  }
  return;
}


