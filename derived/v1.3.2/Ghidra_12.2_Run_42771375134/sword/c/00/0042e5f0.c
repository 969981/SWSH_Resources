/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042e5f0; name: FUN_0042e5f0
 */


void FUN_0042e5f0(float param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
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
  float fVar14;
  float fVar15;
  
  fVar10 = param_3[7] - *(float *)(param_2 + 0x7c);
  fVar8 = param_3[6] - *(float *)(param_2 + 0x78);
  param_1 = *(float *)(param_2 + 0x84) * param_1;
  fVar11 = param_3[8] - *(float *)(param_2 + 0x80);
  param_3[0x16] = param_1;
  fVar12 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11);
  param_3[9] = fVar12 / param_1;
  fVar7 = DAT_01d4c780;
  fVar6 = DAT_01d4c5b8;
  fVar5 = DAT_01d4c5b4;
  fVar4 = DAT_01d4c1e0;
  fVar3 = DAT_01d4bf9c;
  fVar2 = DAT_01d4bf98;
  fVar1 = DAT_01d4bc40;
  fVar9 = DAT_01d4bad0;
  if (0.0 < fVar12) {
    fVar13 = (float)NEON_fminnm(-(param_3[1] * fVar10 + fVar8 * *param_3 + fVar11 * param_3[2]) /
                                fVar12,0x3f800000);
    if (fVar13 <= -1.0) {
      fVar13 = -1.0;
    }
    fVar15 = ABS(fVar13);
    fVar15 = (DAT_01d4bc40 +
             fVar15 * (DAT_01d4bf9c +
                      fVar15 * (DAT_01d4c780 +
                               fVar15 * (DAT_01d4bf98 +
                                        fVar15 * (DAT_01d4bad0 + DAT_01d4c1e0 * fVar15))))) * fVar15
    ;
    fVar14 = DAT_01d4c5b4 - fVar15;
    if (fVar13 < 0.0) {
      fVar14 = fVar15 + DAT_01d4c5b8;
    }
    param_3[10] = fVar14;
    fVar8 = (float)NEON_fminnm((*(float *)(param_2 + 0x60) * fVar8 +
                                fVar10 * *(float *)(param_2 + 100) +
                               fVar11 * *(float *)(param_2 + 0x68)) / fVar12,0x3f800000);
    if (fVar8 <= -1.0) {
      fVar8 = -1.0;
    }
    fVar10 = ABS(fVar8);
    fVar10 = (fVar1 + fVar10 * (fVar3 + fVar10 * (fVar7 + fVar10 * (fVar2 + fVar10 * (fVar9 + fVar4 
                                                  * fVar10))))) * fVar10;
    fVar9 = fVar5 - fVar10;
    if (fVar8 < 0.0) {
      fVar9 = fVar10 + fVar6;
    }
    param_3[0xb] = fVar9;
    return;
  }
  param_3[10] = 0.0;
  param_3[0xb] = 0.0;
  return;
}


