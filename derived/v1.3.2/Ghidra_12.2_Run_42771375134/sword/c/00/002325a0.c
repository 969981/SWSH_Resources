/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002325a0; name: FUN_002325a0
 */


void FUN_002325a0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar8 = fVar6 + fVar6;
  fVar3 = fVar1 + fVar1;
  fVar16 = param_2[6];
  fVar14 = fVar2 * (fVar2 + fVar2);
  fVar10 = (fVar2 + fVar2) * fVar16;
  fVar19 = fVar8 * fVar1 + fVar10;
  fVar20 = fVar8 * fVar2 - fVar3 * fVar16;
  fVar10 = fVar8 * fVar1 - fVar10;
  fVar6 = 1.0 - fVar6 * fVar8;
  fVar7 = fVar3 * fVar2 + fVar8 * fVar16;
  fVar4 = fVar8 * fVar2 + fVar3 * fVar16;
  fVar11 = *param_2;
  fVar15 = param_2[1];
  fVar9 = fVar3 * fVar2 - fVar8 * fVar16;
  fVar17 = (1.0 - fVar1 * fVar3) - fVar14;
  fVar8 = fVar11 * fVar4;
  fVar16 = fVar9 * fVar15;
  fVar14 = fVar6 - fVar14;
  fVar6 = fVar6 - fVar1 * fVar3;
  fVar12 = fVar11 * fVar10;
  fVar23 = fVar19 * fVar15;
  fVar25 = fVar20 * fVar5;
  fVar26 = fVar7 * fVar5;
  fVar11 = fVar11 * fVar17;
  fVar15 = fVar14 * fVar15;
  fVar5 = fVar6 * fVar5;
  fVar1 = fVar17 * fVar8 + fVar19 * fVar16 + fVar20 * fVar5;
  fVar21 = *param_3;
  fVar27 = param_3[1];
  fVar2 = fVar10 * fVar8 + fVar14 * fVar16 + fVar7 * fVar5;
  fVar13 = param_3[4];
  fVar24 = param_3[5];
  fVar8 = fVar4 * fVar8 + fVar9 * fVar16 + fVar6 * fVar5;
  fVar22 = param_3[6];
  fVar29 = param_3[7];
  fVar16 = param_3[2];
  fVar28 = param_3[3];
  fVar18 = fVar17 * fVar11 + fVar19 * fVar23 + fVar20 * fVar25;
  fVar3 = fVar17 * fVar12 + fVar19 * fVar15 + fVar20 * fVar26;
  fVar17 = fVar10 * fVar11 + fVar14 * fVar23 + fVar7 * fVar25;
  fVar5 = fVar4 * fVar11 + fVar9 * fVar23 + fVar6 * fVar25;
  fVar10 = fVar10 * fVar12 + fVar14 * fVar15 + fVar7 * fVar26;
  fVar6 = fVar4 * fVar12 + fVar9 * fVar15 + fVar6 * fVar26;
  fVar9 = param_3[8];
  fVar11 = param_3[9];
  fVar4 = param_3[10];
  fVar7 = param_3[0xb];
  *param_1 = fVar16 * fVar5 + fVar21 * fVar18 + fVar27 * fVar17;
  param_1[1] = fVar16 * fVar6 + fVar21 * fVar3 + fVar27 * fVar10;
  param_1[4] = fVar3 * fVar28 + fVar10 * fVar13 + fVar6 * fVar24;
  param_1[5] = fVar1 * fVar28 + fVar2 * fVar13 + fVar8 * fVar24;
  param_1[2] = fVar16 * fVar8 + fVar21 * fVar1 + fVar27 * fVar2;
  param_1[3] = fVar18 * fVar28 + fVar17 * fVar13 + fVar5 * fVar24;
  param_1[6] = fVar18 * fVar22 + fVar17 * fVar29 + fVar5 * fVar9;
  param_1[7] = fVar3 * fVar22 + fVar10 * fVar29 + fVar6 * fVar9;
  param_1[8] = fVar1 * fVar22 + fVar2 * fVar29 + fVar8 * fVar9;
  param_1[9] = fVar18 * fVar11 + fVar17 * fVar4 + fVar5 * fVar7;
  param_1[10] = fVar3 * fVar11 + fVar10 * fVar4 + fVar6 * fVar7;
  param_1[0xb] = fVar1 * fVar11 + fVar2 * fVar4 + fVar8 * fVar7;
  return;
}


