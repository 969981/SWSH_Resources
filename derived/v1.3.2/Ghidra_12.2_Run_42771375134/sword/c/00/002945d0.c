/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002945d0; name: FUN_002945d0
 */


void FUN_002945d0(float *param_1,float *param_2)

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
  float fVar30;
  
  fVar5 = param_2[4];
  fVar7 = param_2[5];
  fVar3 = param_2[2];
  fVar1 = param_2[3];
  fVar4 = fVar1 + fVar1;
  fVar23 = *param_2;
  fVar25 = param_2[1];
  fVar9 = fVar5 + fVar5;
  fVar2 = param_2[6];
  fVar14 = fVar7 * (fVar7 + fVar7);
  fVar8 = (fVar7 + fVar7) * fVar2;
  fVar20 = 1.0 - fVar1 * fVar4;
  fVar6 = fVar4 * fVar5 + fVar8;
  fVar8 = fVar4 * fVar5 - fVar8;
  fVar10 = fVar9 * fVar7 - fVar4 * fVar2;
  fVar27 = fVar10 * fVar25;
  fVar12 = (1.0 - fVar5 * fVar9) - fVar14;
  fVar14 = fVar20 - fVar14;
  fVar15 = fVar4 * fVar7 + fVar9 * fVar2;
  fVar1 = fVar4 * fVar7 - fVar9 * fVar2;
  fVar19 = fVar23 * fVar15;
  fVar2 = fVar9 * fVar7 + fVar4 * fVar2;
  fVar20 = fVar20 - fVar5 * fVar9;
  fVar17 = fVar23 * fVar8;
  fVar21 = fVar6 * fVar25;
  fVar28 = fVar1 * fVar3;
  fVar29 = fVar2 * fVar3;
  fVar23 = fVar23 * fVar12;
  fVar25 = fVar14 * fVar25;
  fVar3 = fVar20 * fVar3;
  fVar16 = param_1[8];
  fVar4 = *param_1;
  fVar7 = param_1[1];
  fVar24 = param_1[2];
  fVar26 = param_1[3];
  fVar30 = param_1[4];
  fVar11 = param_1[5];
  fVar18 = param_1[6];
  fVar22 = param_1[7];
  fVar13 = fVar12 * fVar23 + fVar6 * fVar21 + fVar1 * fVar28;
  fVar5 = fVar12 * fVar17 + fVar6 * fVar25 + fVar1 * fVar29;
  fVar1 = fVar12 * fVar19 + fVar6 * fVar27 + fVar1 * fVar3;
  fVar9 = fVar8 * fVar19 + fVar14 * fVar27 + fVar2 * fVar3;
  fVar12 = fVar15 * fVar19 + fVar10 * fVar27 + fVar20 * fVar3;
  fVar3 = fVar8 * fVar23 + fVar14 * fVar21 + fVar2 * fVar28;
  fVar2 = fVar8 * fVar17 + fVar14 * fVar25 + fVar2 * fVar29;
  fVar8 = fVar15 * fVar23 + fVar10 * fVar21 + fVar20 * fVar28;
  fVar6 = fVar15 * fVar17 + fVar10 * fVar25 + fVar20 * fVar29;
  *param_1 = fVar4 * fVar13 + fVar5 * fVar26 + fVar1 * fVar18;
  param_1[1] = fVar7 * fVar13 + fVar5 * fVar30 + fVar1 * fVar22;
  param_1[2] = fVar13 * fVar24 + fVar5 * fVar11 + fVar1 * fVar16;
  param_1[3] = fVar4 * fVar3 + fVar2 * fVar26 + fVar9 * fVar18;
  param_1[4] = fVar7 * fVar3 + fVar2 * fVar30 + fVar9 * fVar22;
  param_1[5] = fVar24 * fVar3 + fVar2 * fVar11 + fVar9 * fVar16;
  param_1[6] = fVar4 * fVar8 + fVar6 * fVar26 + fVar12 * fVar18;
  param_1[7] = fVar7 * fVar8 + fVar6 * fVar30 + fVar12 * fVar22;
  param_1[8] = fVar24 * fVar8 + fVar6 * fVar11 + fVar12 * fVar16;
  return;
}


