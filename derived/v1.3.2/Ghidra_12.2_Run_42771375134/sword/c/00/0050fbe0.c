/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050fbe0; name: FUN_0050fbe0
 */


float * FUN_0050fbe0(float param_1,float *param_2,uint param_3)

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
  
  if ((param_3 & 1) == 0) {
    fVar5 = cosf(param_1);
    fVar6 = sinf(param_1);
    fVar6 = fVar6 * DAT_01d4bfac;
    fVar9 = fVar5 * DAT_01d4bbc0 + DAT_01d4c648;
    fVar5 = (1.0 - fVar5) * DAT_01d4c648;
    *param_2 = fVar9;
    param_2[5] = fVar9;
    param_2[10] = fVar9;
    fVar9 = fVar5 + fVar6;
    fVar5 = fVar5 - fVar6;
    param_2[7] = 0.0;
    param_2[3] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[1] = fVar9;
    param_2[2] = fVar5;
    param_2[4] = fVar5;
    param_2[6] = fVar9;
    param_2[8] = fVar9;
    param_2[9] = fVar5;
    param_2[0xb] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xf] = 1.0;
  }
  else {
    fVar2 = sinf(param_1);
    fVar3 = cosf(param_1);
    fVar1 = DAT_01d4c72c;
    fVar9 = DAT_01d4c4f8;
    fVar6 = DAT_01d4bc60;
    fVar5 = DAT_01d4bbc4;
    fVar7 = fVar2 * DAT_01d4c248;
    fVar14 = fVar3 * DAT_01d4bc60;
    fVar10 = fVar3 * DAT_01d4c6c8;
    fVar15 = fVar3 * DAT_01d4c72c;
    fVar4 = fVar3 * DAT_01d4c730;
    fVar11 = fVar2 * DAT_01d4c730;
    fVar13 = DAT_01d4bfb0 - fVar3 * DAT_01d4bfb0;
    fVar12 = fVar2 * DAT_01d4bc64;
    fVar8 = fVar2 * 0.0 + fVar3 * 0.0 + 0.0;
    *param_2 = (fVar3 * DAT_01d4c248 + DAT_01d4bfb0) - fVar2 * DAT_01d4bfb0;
    param_2[1] = fVar12 + fVar13;
    param_2[2] = fVar13 - fVar7;
    param_2[3] = fVar8;
    fVar14 = fVar6 - fVar14;
    fVar15 = fVar1 - fVar15;
    param_2[10] = fVar2 * fVar1 + fVar4 + fVar1;
    param_2[0xb] = fVar8;
    param_2[4] = fVar14 - fVar2 * fVar6;
    param_2[5] = fVar2 * fVar9 + fVar10 + fVar6;
    param_2[6] = fVar2 * fVar6 + fVar14;
    param_2[7] = fVar8;
    param_2[8] = fVar11 + fVar15;
    param_2[9] = fVar15 + fVar2 * fVar5;
    param_2[0xc] = fVar8;
    param_2[0xd] = fVar8;
    param_2[0xe] = fVar8;
    param_2[0xf] = fVar2 * 0.0 + fVar3 * 0.0 + 1.0;
  }
  return param_2;
}


