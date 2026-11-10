/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00242570; name: FUN_00242570
 */


void FUN_00242570(float *param_1,float *param_2,float *param_3)

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
  
  fVar7 = param_2[1] + param_2[1];
  fVar6 = *param_2 + *param_2;
  fVar8 = param_2[2] + param_2[2];
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  fVar5 = fVar2 * fVar2 + -0.5;
  fVar4 = *param_3;
  fVar3 = param_3[1];
  fVar10 = fVar6 * fVar4 + fVar7 * fVar3 + fVar8 * fVar1;
  *param_1 = fVar4 * fVar10 + fVar6 * fVar5 + fVar2 * (fVar8 * fVar3 - fVar7 * fVar1);
  param_1[1] = fVar3 * fVar10 + fVar7 * fVar5 + fVar2 * (fVar6 * fVar1 - fVar8 * fVar4);
  param_1[2] = fVar8 * fVar5 + fVar2 * (fVar7 * fVar4 - fVar6 * fVar3) + fVar1 * fVar10;
  fVar7 = param_2[4] + param_2[4];
  fVar6 = param_2[3] + param_2[3];
  fVar8 = param_2[5] + param_2[5];
  fVar10 = fVar4 * fVar6 + fVar3 * fVar7 + fVar1 * fVar8;
  param_1[3] = fVar4 * fVar10 + fVar5 * fVar6 + fVar2 * (fVar3 * fVar8 - fVar1 * fVar7);
  param_1[4] = fVar3 * fVar10 + fVar5 * fVar7 + fVar2 * (fVar1 * fVar6 - fVar4 * fVar8);
  param_1[5] = fVar5 * fVar8 + fVar2 * (fVar4 * fVar7 - fVar3 * fVar6) + fVar1 * fVar10;
  fVar7 = param_2[7] + param_2[7];
  fVar6 = param_2[6] + param_2[6];
  fVar8 = param_2[8] + param_2[8];
  fVar10 = fVar4 * fVar6 + fVar3 * fVar7 + fVar1 * fVar8;
  param_1[6] = fVar4 * fVar10 + fVar5 * fVar6 + fVar2 * (fVar3 * fVar8 - fVar1 * fVar7);
  param_1[7] = fVar3 * fVar10 + fVar5 * fVar7 + fVar2 * (fVar1 * fVar6 - fVar4 * fVar8);
  param_1[8] = fVar5 * fVar8 + fVar2 * (fVar4 * fVar7 - fVar3 * fVar6) + fVar1 * fVar10;
  fVar10 = param_2[10] + param_2[10];
  fVar8 = param_2[9] + param_2[9];
  fVar9 = param_2[0xb] + param_2[0xb];
  fVar11 = fVar4 * fVar8 + fVar3 * fVar10 + fVar1 * fVar9;
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  param_1[9] = param_3[4] +
               fVar4 * fVar11 + fVar5 * fVar8 + fVar2 * (fVar3 * fVar9 - fVar1 * fVar10);
  param_1[10] = fVar6 + fVar3 * fVar11 + fVar5 * fVar10 + fVar2 * (fVar1 * fVar8 - fVar4 * fVar9);
  param_1[0xb] = fVar7 + fVar5 * fVar9 + fVar2 * (fVar4 * fVar10 - fVar3 * fVar8) + fVar1 * fVar11;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  return;
}


