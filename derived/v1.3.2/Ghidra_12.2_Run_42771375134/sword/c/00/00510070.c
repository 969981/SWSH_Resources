/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00510070; name: FUN_00510070
 */


void FUN_00510070(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar5 = param_3[1];
  fVar6 = param_3[5];
  fVar9 = param_3[6];
  fVar10 = param_3[7];
  fVar12 = param_3[2];
  fVar13 = param_3[3];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar7 = param_3[9];
  fVar14 = param_3[10];
  fVar15 = param_3[0xb];
  fVar8 = param_3[0xd];
  fVar11 = param_3[0xe];
  fVar16 = param_3[0xf];
  *param_1 = *param_3 * fVar1 + param_3[4] * fVar2 + param_3[8] * fVar3 + param_3[0xc] * fVar4;
  param_1[1] = fVar1 * fVar5 + fVar2 * fVar6 + fVar3 * fVar7 + fVar4 * fVar8;
  param_1[2] = fVar1 * fVar12 + fVar2 * fVar9 + fVar3 * fVar14 + fVar4 * fVar11;
  param_1[3] = fVar1 * fVar13 + fVar2 * fVar10 + fVar3 * fVar15 + fVar4 * fVar16;
  return;
}


