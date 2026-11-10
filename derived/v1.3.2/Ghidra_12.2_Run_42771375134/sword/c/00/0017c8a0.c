/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017c8a0; name: FUN_0017c8a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0017c8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6,float *param_7,float *param_8,
                 undefined4 param_9,undefined4 *param_10,uint param_11)

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
  float fVar16;
  float fVar17;
  
  param_10[0x12] = param_9;
  fVar4 = 0.0;
  fVar2 = 0.0;
  if (*param_7 == 0.0) {
    fVar1 = param_7[1];
  }
  else {
    fVar2 = sqrtf(*param_7);
    fVar1 = param_7[1];
  }
  if (fVar1 == 0.0) {
    fVar3 = 0.0;
    fVar1 = param_7[2];
  }
  else {
    fVar3 = sqrtf(fVar1);
    fVar1 = param_7[2];
  }
  if (fVar1 != 0.0) {
    fVar4 = sqrtf(fVar1);
  }
  fVar1 = *param_8;
  fVar5 = param_8[1];
  fVar11 = fVar5 + fVar5;
  fVar6 = param_8[2];
  fVar8 = param_8[3];
  fVar10 = fVar1 + fVar1;
  fVar13 = fVar6 * (fVar6 + fVar6);
  fVar9 = (fVar6 + fVar6) * fVar8;
  fVar15 = fVar10 * fVar5 + fVar9;
  fVar9 = fVar10 * fVar5 - fVar9;
  fVar1 = 1.0 - fVar1 * fVar10;
  fVar12 = fVar11 * fVar6 + fVar10 * fVar8;
  fVar7 = fVar11 * fVar6 - fVar10 * fVar8;
  fVar14 = (1.0 - fVar5 * fVar11) - fVar13;
  fVar16 = fVar10 * fVar6 - fVar11 * fVar8;
  fVar8 = fVar10 * fVar6 + fVar11 * fVar8;
  fVar10 = fVar3 * fVar9;
  fVar13 = fVar1 - fVar13;
  fVar17 = fVar4 * fVar8;
  fVar1 = fVar1 - fVar5 * fVar11;
  fVar5 = fVar2 * fVar14;
  param_10[0x10] = fVar1 * fVar4 * fVar1 + fVar16 * fVar2 * fVar16 + fVar12 * fVar3 * fVar12;
  fVar6 = fVar7 * fVar17 + fVar15 * fVar5 + fVar13 * fVar10;
  param_10[8] = fVar8 * fVar17 + fVar14 * fVar5 + fVar9 * fVar10;
  param_10[9] = fVar6;
  fVar5 = fVar1 * fVar17 + fVar16 * fVar5 + fVar12 * fVar10;
  param_10[10] = fVar5;
  param_10[0xb] = fVar6;
  fVar1 = fVar1 * fVar4 * fVar7 + fVar16 * fVar2 * fVar15 + fVar12 * fVar3 * fVar13;
  param_10[0xc] = fVar7 * fVar4 * fVar7 + fVar15 * fVar2 * fVar15 + fVar13 * fVar3 * fVar13;
  param_10[0xd] = fVar1;
  param_10[0xe] = fVar5;
  param_10[0xf] = fVar1;
  *param_10 = *param_5;
  param_10[1] = param_5[1];
  param_10[2] = param_5[2];
  param_10[4] = *param_6;
  param_10[5] = param_6[1];
  param_10[6] = param_6[2];
  if (param_11 != 0) {
    if ((param_11 & 1) != 0) {
      *param_10 = 0;
    }
    if ((param_11 >> 1 & 1) != 0) {
      param_10[1] = 0;
    }
    if ((param_11 >> 2 & 1) != 0) {
      param_10[2] = 0;
    }
    if ((param_11 >> 3 & 1) != 0) {
      param_10[4] = 0;
    }
    if ((param_11 >> 4 & 1) != 0) {
      param_10[5] = 0;
    }
    if ((param_11 >> 5 & 1) != 0) {
      param_10[6] = 0;
    }
  }
  param_10[3] = param_1;
  param_10[0x11] = param_2;
  param_10[0x13] = param_3;
  param_10[0x14] = *param_8;
  param_10[0x15] = param_8[1];
  param_10[0x16] = param_8[2];
  param_10[0x17] = param_8[3];
  param_10[0x18] = param_8[4];
  param_10[0x19] = param_8[5];
  param_10[0x1a] = param_8[6];
  param_10[0x1b] = param_11;
  param_10[7] = param_4;
  return;
}


