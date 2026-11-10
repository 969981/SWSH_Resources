/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00221930; name: FUN_00221930
 */


void FUN_00221930(float *param_1,float *param_2,float *param_3)

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
  float fVar31;
  float fVar32;
  
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar27 = param_2[6];
  fVar13 = *param_3;
  fVar15 = param_3[1];
  fVar19 = param_3[2];
  fVar20 = param_3[3];
  fVar17 = fVar15 + fVar15;
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar4 = fVar2 + fVar2;
  fVar32 = *param_2;
  fVar11 = param_2[1];
  fVar7 = fVar5 + fVar5;
  fVar16 = fVar13 + fVar13;
  fVar24 = fVar6 * (fVar6 + fVar6);
  fVar9 = (fVar6 + fVar6) * fVar27;
  fVar28 = fVar19 * (fVar19 + fVar19);
  fVar21 = (fVar19 + fVar19) * fVar20;
  fVar3 = 1.0 - fVar2 * fVar4;
  fVar30 = fVar4 * fVar5 + fVar9;
  fVar31 = fVar4 * fVar6 - fVar7 * fVar27;
  fVar9 = fVar4 * fVar5 - fVar9;
  fVar10 = fVar7 * fVar6 + fVar4 * fVar27;
  fVar8 = fVar4 * fVar6 + fVar7 * fVar27;
  fVar6 = fVar7 * fVar6 - fVar4 * fVar27;
  fVar2 = 1.0 - fVar13 * fVar16;
  fVar14 = fVar16 * fVar19 + fVar17 * fVar20;
  fVar26 = fVar16 * fVar15 + fVar21;
  fVar27 = fVar16 * fVar19 - fVar17 * fVar20;
  fVar21 = fVar16 * fVar15 - fVar21;
  fVar12 = fVar17 * fVar19 + fVar16 * fVar20;
  fVar20 = fVar17 * fVar19 - fVar16 * fVar20;
  fVar4 = (1.0 - fVar5 * fVar7) - fVar24;
  fVar24 = fVar3 - fVar24;
  fVar3 = fVar3 - fVar5 * fVar7;
  fVar23 = fVar32 * fVar8;
  fVar29 = fVar6 * fVar11;
  fVar22 = fVar32 * fVar9;
  fVar25 = fVar30 * fVar11;
  fVar18 = fVar2 - fVar15 * fVar17;
  fVar32 = fVar32 * fVar4;
  fVar11 = fVar24 * fVar11;
  fVar16 = fVar31 * fVar1;
  fVar19 = fVar10 * fVar1;
  fVar1 = fVar3 * fVar1;
  fVar7 = (1.0 - fVar15 * fVar17) - fVar28;
  fVar2 = fVar2 - fVar28;
  fVar17 = fVar4 * fVar23 + fVar30 * fVar29 + fVar31 * fVar1;
  fVar13 = fVar9 * fVar23 + fVar24 * fVar29 + fVar10 * fVar1;
  fVar5 = fVar4 * fVar32 + fVar30 * fVar25 + fVar31 * fVar16;
  fVar4 = fVar4 * fVar22 + fVar30 * fVar11 + fVar31 * fVar19;
  fVar1 = fVar8 * fVar23 + fVar6 * fVar29 + fVar3 * fVar1;
  fVar15 = fVar9 * fVar32 + fVar24 * fVar25 + fVar10 * fVar16;
  fVar9 = fVar9 * fVar22 + fVar24 * fVar11 + fVar10 * fVar19;
  fVar10 = fVar8 * fVar32 + fVar6 * fVar25 + fVar3 * fVar16;
  fVar3 = fVar8 * fVar22 + fVar6 * fVar11 + fVar3 * fVar19;
  fVar6 = param_3[4];
  fVar11 = param_3[5];
  fVar8 = param_3[6];
  *param_1 = fVar10 * fVar27 + fVar5 * fVar7 + fVar15 * fVar26;
  param_1[1] = fVar3 * fVar27 + fVar4 * fVar7 + fVar9 * fVar26;
  param_1[4] = fVar3 * fVar12 + fVar4 * fVar21 + fVar9 * fVar2;
  param_1[5] = fVar1 * fVar12 + fVar17 * fVar21 + fVar13 * fVar2;
  param_1[2] = fVar1 * fVar27 + fVar17 * fVar7 + fVar13 * fVar26;
  param_1[3] = fVar10 * fVar12 + fVar5 * fVar21 + fVar15 * fVar2;
  param_1[8] = fVar1 * fVar18 + fVar17 * fVar14 + fVar13 * fVar20;
  param_1[9] = fVar5 * fVar6 + fVar15 * fVar11 + fVar10 * fVar8;
  param_1[6] = fVar10 * fVar18 + fVar5 * fVar14 + fVar15 * fVar20;
  param_1[7] = fVar3 * fVar18 + fVar4 * fVar14 + fVar9 * fVar20;
  param_1[10] = fVar4 * fVar6 + fVar9 * fVar11 + fVar3 * fVar8;
  param_1[0xb] = fVar17 * fVar6 + fVar13 * fVar11 + fVar1 * fVar8;
  return;
}


